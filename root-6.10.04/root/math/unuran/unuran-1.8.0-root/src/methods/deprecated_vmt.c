/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#include <unur_source.h>
#include <distr/distr.h>
#include <distr/distr_source.h>
#include <distr/cvec.h>
#include <distributions/unur_distributions.h>
#include <urng/urng.h>
#include "unur_methods_source.h"
#include "x_gen.h"
#include "x_gen_source.h"
#include "auto.h"
#include "deprecated_vmt.h"
#include "deprecated_vmt_struct.h"
#ifdef USE_DEPRECATED_CODE
#define VMT_DEBUG_REINIT     0x00000010u   
#define GENTYPE "VMT"          
static struct unur_gen *_unur_vmt_init( struct unur_par *par );
static int _unur_vmt_reinit( struct unur_gen *gen );
static struct unur_gen *_unur_vmt_create( struct unur_par *par );
static struct unur_gen *_unur_vmt_clone( const struct unur_gen *gen );
static void _unur_vmt_free( struct unur_gen *gen);
static int _unur_vmt_sample_cvec( struct unur_gen *gen, double *vec );
static int _unur_vmt_make_marginal_gen( struct unur_gen *gen );
#ifdef UNUR_ENABLE_LOGGING
static void _unur_vmt_debug_init( const struct unur_gen *gen );
#endif
#define DISTR_IN  distr->data.cvec      
#define PAR       ((struct unur_vmt_par*)par->datap) 
#define GEN       ((struct unur_vmt_gen*)gen->datap) 
#define DISTR     gen->distr->data.cvec 
#define SAMPLE    gen->sample.cvec           
#define _unur_vmt_getSAMPLE(gen) ( _unur_vmt_sample_cvec )
struct unur_par *
unur_vmt_new( const struct unur_distr *distr )
{ 
  struct unur_par *par;
  _unur_check_NULL( GENTYPE,distr,NULL );
  if (distr->type != UNUR_DISTR_CVEC) {
    _unur_error(GENTYPE,UNUR_ERR_DISTR_INVALID,""); return NULL; }
  COOKIE_CHECK(distr,CK_DISTR_CVEC,NULL);
  if (!(distr->set & UNUR_DISTR_SET_MEAN)) {
    _unur_error(GENTYPE,UNUR_ERR_DISTR_REQUIRED,"mean"); return NULL; }
  if (!(distr->set & UNUR_DISTR_SET_COVAR)) {
    _unur_error(GENTYPE,UNUR_ERR_DISTR_REQUIRED,"covariance matrix");
    return NULL; }
  if (!(distr->set & UNUR_DISTR_SET_STDMARGINAL)) {
    _unur_error(GENTYPE,UNUR_ERR_DISTR_REQUIRED,"standardized marginals");
    return NULL; }
  par = _unur_par_new( sizeof(struct unur_vmt_par) );
  COOKIE_SET(par,CK_VMT_PAR);
  par->distr    = distr;      
  par->method   = UNUR_METH_VMT ;     
  par->variant  = 0u;                 
  par->set      = 0u;                     
  par->urng     = unur_get_default_urng(); 
  par->urng_aux = NULL;                    
  par->debug    = _unur_default_debugflag; 
  par->init = _unur_vmt_init;
  return par;
} 
struct unur_gen *
_unur_vmt_init( struct unur_par *par )
{ 
  struct unur_gen *gen;
  _unur_check_NULL( GENTYPE,par,NULL );
  if ( par->method != UNUR_METH_VMT ) {
    _unur_error(GENTYPE,UNUR_ERR_PAR_INVALID,"");
    return NULL; }
  COOKIE_CHECK(par,CK_VMT_PAR,NULL);
  gen = _unur_vmt_create(par);
  _unur_par_free(par);
  if (!gen) return NULL;
  if (_unur_vmt_make_marginal_gen(gen) != UNUR_SUCCESS) {
    _unur_vmt_free(gen); return NULL;
  }
#ifdef UNUR_ENABLE_LOGGING
  if (gen->debug) _unur_vmt_debug_init(gen);
#endif
  return gen;
} 
int
_unur_vmt_reinit( struct unur_gen *gen )
{
  SAMPLE = _unur_vmt_getSAMPLE(gen);
  if (gen->gen_aux_list)
    _unur_gen_list_free( gen->gen_aux_list, gen->n_gen_aux_list );
  return _unur_vmt_make_marginal_gen(gen);
} 
struct unur_gen *
_unur_vmt_create( struct unur_par *par )
{
  struct unur_gen *gen;
  CHECK_NULL(par,NULL);  COOKIE_CHECK(par,CK_VMT_PAR,NULL);
  gen = _unur_generic_create( par, sizeof(struct unur_vmt_gen) );
  COOKIE_SET(gen,CK_VMT_GEN);
  GEN->dim = gen->distr->dim; 
  gen->genid = _unur_set_genid(GENTYPE);
  SAMPLE = _unur_vmt_getSAMPLE(gen);
  gen->destroy = _unur_vmt_free;
  gen->clone = _unur_vmt_clone;
  gen->reinit = _unur_vmt_reinit;
  GEN->cholesky =  DISTR.cholesky;  
  GEN->marginalgen_list = NULL;
  return gen;
} 
struct unur_gen *
_unur_vmt_clone( const struct unur_gen *gen )
{ 
#define CLONE  ((struct unur_vmt_gen*)clone->datap)
  struct unur_gen *clone;
  CHECK_NULL(gen,NULL);  COOKIE_CHECK(gen,CK_VMT_GEN,NULL);
  clone = _unur_generic_clone( gen, GENTYPE );
  CLONE->cholesky =  clone->distr->data.cvec.cholesky;
  CLONE->marginalgen_list = clone->gen_aux_list;
  return clone;
#undef CLONE
} 
void
_unur_vmt_free( struct unur_gen *gen )
{ 
  if( !gen ) 
    return;
  if ( gen->method != UNUR_METH_VMT ) {
    _unur_warning(gen->genid,UNUR_ERR_GEN_INVALID,"");
    return; }
  COOKIE_CHECK(gen,CK_VMT_GEN,RETURN_VOID);
  SAMPLE = NULL;   
  _unur_generic_free(gen);
} 
int
_unur_vmt_sample_cvec( struct unur_gen *gen, double *vec )
{
#define idx(a,b) (a*GEN->dim+b)
  int j,k;
  CHECK_NULL(gen,UNUR_ERR_NULL);
  COOKIE_CHECK(gen,CK_VMT_GEN,UNUR_ERR_COOKIE);
  while (1) {
    for (j=0; j<GEN->dim; j++)
      vec[j] = unur_sample_cont(GEN->marginalgen_list[j]);
    for (k=GEN->dim-1; k>=0; k--) {
      vec[k] *= GEN->cholesky[idx(k,k)];
      for (j=k-1; j>=0; j--)
	vec[k] += vec[j] * GEN->cholesky[idx(k,j)];
      vec[k] += DISTR.mean[k];
    }
    if ( !(gen->distr->set & UNUR_DISTR_SET_DOMAINBOUNDED) || 
	 _unur_distr_cvec_is_indomain( vec, gen->distr) )
      return UNUR_SUCCESS;
  }
#undef idx
} 
int
_unur_vmt_make_marginal_gen( struct unur_gen *gen )
{
  if (_unur_distr_cvec_marginals_are_equal(DISTR.stdmarginals, GEN->dim)) {
    struct unur_gen *marginalgen = unur_init( unur_auto_new( DISTR.stdmarginals[0] ) );
    if (marginalgen)
      gen->gen_aux_list = _unur_gen_list_set(marginalgen,GEN->dim);
      gen->n_gen_aux_list = GEN->dim;
  }
  else {
    int i,j;
    int failed = FALSE;
    struct unur_gen **marginalgens = _unur_xmalloc( GEN->dim * sizeof(struct unur_gen*) );
    for (i=0; i<GEN->dim; i++) {
      marginalgens[i] = unur_init( unur_auto_new( DISTR.stdmarginals[i] ) );
      if (marginalgens[i]==NULL) {
	failed=TRUE; break; 
      }
    }
    if (failed) {
      for (j=0; j<i; j++) _unur_free(marginalgens[j]);
      free (marginalgens);
    }
    else {
      gen->gen_aux_list = marginalgens;
      gen->n_gen_aux_list = GEN->dim;
    }
  }
  GEN->marginalgen_list = gen->gen_aux_list;
  if (GEN->marginalgen_list == NULL) {
    _unur_error(gen->genid,UNUR_ERR_GENERIC,"init of marginal generators failed");
    return UNUR_FAILURE;
  }
  return UNUR_SUCCESS;
} 
#ifdef UNUR_ENABLE_LOGGING
void
_unur_vmt_debug_init( const struct unur_gen *gen )
{
  int i;
  FILE *LOG;
  CHECK_NULL(gen,RETURN_VOID);  COOKIE_CHECK(gen,CK_VMT_GEN,RETURN_VOID);
  LOG = unur_get_stream();
  fprintf(LOG,"%s:\n",gen->genid);
  fprintf(LOG,"%s: type    = continuous multivariate random variates\n",gen->genid);
  fprintf(LOG,"%s: method  = VMT (Vector Matrix Transformation)\n",gen->genid);
  fprintf(LOG,"%s:\n",gen->genid);
  _unur_distr_cvec_debug( gen->distr, gen->genid );
  fprintf(LOG,"%s: generators for standardized marginal distributions = \n",gen->genid);
  fprintf(LOG,"%s:\t",gen->genid);
  for (i=0; i<GEN->dim; i++)
    fprintf(LOG,"[%s] ", GEN->marginalgen_list[i]->genid);
  fprintf(LOG,"\n%s:\n",gen->genid);
  fprintf(LOG,"%s: sampling routine = _unur_vmt_sample_cvec()\n",gen->genid);
  fprintf(LOG,"%s:\n",gen->genid);
  fprintf(LOG,"%s:\n",gen->genid);
  fprintf(LOG,"%s: INIT completed **********************\n",gen->genid);
} 
#endif   
#endif   
