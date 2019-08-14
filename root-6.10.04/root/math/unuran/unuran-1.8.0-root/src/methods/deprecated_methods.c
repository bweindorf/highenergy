/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#include <unur_source.h>
#include <distr/distr_source.h>
#include <distr/cont.h>
#include <distr/discr.h>
#include "unur_methods_source.h"
#include "utdr_struct.h"
#include "x_gen.h"
#include "deprecated_methods.h"
#ifdef USE_DEPRECATED_CODE
#define GENTYPE "deprecated"         
#define BD_LEFT   domain[0]      
#define BD_RIGHT  domain[1]      
int 
unur_cstd_chg_pdfparams( struct unur_gen *gen, double *params, int n_params )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, CSTD, UNUR_ERR_GEN_INVALID );
  if (n_params>0) CHECK_NULL(params, UNUR_ERR_NULL);
  if (unur_distr_cont_set_pdfparams(gen->distr, params,n_params)!=UNUR_SUCCESS)
    return UNUR_ERR_DISTR_SET;
  return gen->reinit(gen);
} 
#define DISTR gen->distr->data.discr 
int
unur_dari_reinit( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DARI, UNUR_ERR_GEN_INVALID );
  return gen->reinit(gen);
} 
int
unur_dari_chg_pmfparams( struct unur_gen *gen, double *params, int n_params )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DARI, UNUR_ERR_GEN_INVALID );
  return unur_distr_discr_set_pmfparams(gen->distr,params,n_params);
} 
int 
unur_dari_chg_domain( struct unur_gen *gen, int left, int right )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DARI, UNUR_ERR_GEN_INVALID );
  if (left >= right) {
    _unur_warning(NULL,UNUR_ERR_DISTR_SET,"domain, left >= right");
    return UNUR_ERR_DISTR_SET;
  }
  DISTR.BD_LEFT = left;
  DISTR.BD_RIGHT = right;
  gen->distr->set |= UNUR_DISTR_SET_DOMAIN;
#ifdef UNUR_ENABLE_LOGGING
#endif
  return UNUR_SUCCESS;
} 
int
unur_dari_chg_mode( struct unur_gen *gen, int mode )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DARI, UNUR_ERR_GEN_INVALID );
  DISTR.mode = mode;
  gen->distr->set |= UNUR_DISTR_SET_MODE;
  return UNUR_SUCCESS;
} 
int
unur_dari_upd_mode( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DARI, UNUR_ERR_GEN_INVALID );
  return unur_distr_discr_upd_mode( gen->distr );
} 
int
unur_dari_chg_pmfsum( struct unur_gen *gen, double sum )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DARI, UNUR_ERR_GEN_INVALID );
  if (sum <= 0.) {
    _unur_warning(NULL,UNUR_ERR_DISTR_SET,"sum <= 0");
    return UNUR_ERR_DISTR_SET;
  }
  DISTR.sum = sum;
  return UNUR_SUCCESS;
} 
int
unur_dari_upd_pmfsum( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DARI, UNUR_ERR_GEN_INVALID );
  return unur_distr_discr_upd_pmfsum( gen->distr );
} 
#undef DISTR
#define DISTR gen->distr->data.discr 
int
unur_dsrou_reinit( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DSROU, UNUR_ERR_GEN_DATA );
  return gen->reinit(gen);
} 
int
unur_dsrou_chg_pmfparams( struct unur_gen *gen, double *params, int n_params )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DSROU, UNUR_ERR_GEN_INVALID );
  return unur_distr_discr_set_pmfparams(gen->distr,params,n_params);
} 
int
unur_dsrou_chg_mode( struct unur_gen *gen, int mode )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DSROU, UNUR_ERR_GEN_INVALID );
  DISTR.mode = mode;
  return UNUR_SUCCESS;
} 
int
unur_dsrou_upd_mode( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DSROU, UNUR_ERR_GEN_INVALID );
  return unur_distr_discr_upd_mode( gen->distr );
} 
int 
unur_dsrou_chg_domain( struct unur_gen *gen, int left, int right )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DSROU, UNUR_ERR_GEN_INVALID );
  if (left >= right) {
    _unur_warning(gen->genid,UNUR_ERR_DISTR_SET,"domain, left >= right");
    return UNUR_ERR_DISTR_SET;
  }
  DISTR.BD_LEFT = left;
  DISTR.BD_RIGHT = right;
  gen->distr->set &= ~(UNUR_DISTR_SET_STDDOMAIN | UNUR_DISTR_SET_MASK_DERIVED );
  gen->distr->set |= UNUR_DISTR_SET_DOMAIN;
#ifdef UNUR_ENABLE_LOGGING
#endif
  return UNUR_SUCCESS;
} 
int
unur_dsrou_chg_pmfsum( struct unur_gen *gen, double sum )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DSROU, UNUR_ERR_GEN_INVALID );
  if (sum <= 0.) {
    _unur_warning(gen->genid,UNUR_ERR_DISTR_SET,"sum <= 0");
    return UNUR_ERR_DISTR_SET;
  }
  DISTR.sum = sum;
  return UNUR_SUCCESS;
} 
int
unur_dsrou_upd_pmfsum( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DSROU, UNUR_ERR_GEN_INVALID );
  return unur_distr_discr_upd_pmfsum( gen->distr );
} 
#undef DISTR
int 
unur_dstd_chg_pmfparams( struct unur_gen *gen, double *params, int n_params )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, DSTD, UNUR_ERR_GEN_INVALID );
  if (n_params>0) CHECK_NULL(params, UNUR_ERR_NULL);
  if (unur_distr_discr_set_pmfparams(gen->distr,params,n_params)!=UNUR_SUCCESS)
    return UNUR_ERR_GEN_DATA;
  return gen->reinit(gen);
} 
int
unur_ninv_chg_pdfparams( struct unur_gen *gen, double *params, int n_params )
{
  CHECK_NULL(gen, UNUR_ERR_NULL);
  _unur_check_gen_object( gen, NINV, UNUR_ERR_GEN_INVALID );
  if (n_params>0) CHECK_NULL(params, UNUR_ERR_NULL);
  if (unur_distr_cont_set_pdfparams(gen->distr,params,n_params)!=UNUR_SUCCESS)
    return UNUR_ERR_GEN_DATA;
  return gen->reinit(gen);
} 
#define DISTR gen->distr->data.cont 
int
unur_srou_reinit( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SROU, UNUR_ERR_GEN_INVALID );
  return gen->reinit(gen);
} 
int
unur_srou_chg_pdfparams( struct unur_gen *gen, double *params, int n_params )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SROU, UNUR_ERR_GEN_INVALID );
  return unur_distr_cont_set_pdfparams(gen->distr,params,n_params);
} 
int
unur_srou_chg_mode( struct unur_gen *gen, double mode )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SROU, UNUR_ERR_GEN_INVALID );
  DISTR.mode = mode;
  return UNUR_SUCCESS;
} 
int
unur_srou_upd_mode( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SROU, UNUR_ERR_GEN_INVALID );
  return unur_distr_cont_upd_mode( gen->distr );
} 
int 
unur_srou_chg_domain( struct unur_gen *gen, double left, double right )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SROU, UNUR_ERR_GEN_INVALID );
  if (left >= right) {
    _unur_warning(gen->genid,UNUR_ERR_DISTR_SET,"domain, left >= right");
    return UNUR_ERR_DISTR_SET;
  }
  DISTR.BD_LEFT = left;
  DISTR.BD_RIGHT = right;
  gen->distr->set &= ~(UNUR_DISTR_SET_STDDOMAIN | UNUR_DISTR_SET_MASK_DERIVED );
  gen->distr->set |= UNUR_DISTR_SET_DOMAIN;
#ifdef UNUR_ENABLE_LOGGING
#endif
  return UNUR_SUCCESS;
} 
int
unur_srou_chg_pdfarea( struct unur_gen *gen, double area )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SROU, UNUR_ERR_GEN_INVALID );
  if (area <= 0.) {
    _unur_warning(gen->genid,UNUR_ERR_DISTR_SET,"area <= 0");
    return UNUR_ERR_DISTR_SET;
  }
  DISTR.area = area;
  return UNUR_SUCCESS;
} 
int
unur_srou_upd_pdfarea( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SROU, UNUR_ERR_GEN_INVALID );
  return unur_distr_cont_upd_pdfarea( gen->distr );
} 
#undef DISTR
#define DISTR gen->distr->data.cont 
int
unur_ssr_reinit( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SSR, UNUR_ERR_GEN_INVALID );
  return gen->reinit(gen);
} 
int
unur_ssr_chg_pdfparams( struct unur_gen *gen, double *params, int n_params )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SSR, UNUR_ERR_GEN_INVALID );
  return unur_distr_cont_set_pdfparams( gen->distr, params,n_params );
} 
int
unur_ssr_chg_mode( struct unur_gen *gen, double mode )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SSR, UNUR_ERR_GEN_INVALID );
  DISTR.mode = mode;
  return UNUR_SUCCESS;
} 
int
unur_ssr_upd_mode( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SSR, UNUR_ERR_GEN_INVALID );
  return unur_distr_cont_upd_mode( gen->distr );
} 
int 
unur_ssr_chg_domain( struct unur_gen *gen, double left, double right )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SSR, UNUR_ERR_GEN_INVALID );
  if (left >= right) {
    _unur_warning(NULL,UNUR_ERR_DISTR_SET,"domain, left >= right");
    return UNUR_ERR_DISTR_SET;
  }
  DISTR.BD_LEFT = left;
  DISTR.BD_RIGHT = right;
  gen->distr->set &= ~(UNUR_DISTR_SET_STDDOMAIN | UNUR_DISTR_SET_MASK_DERIVED );
  gen->distr->set |= UNUR_DISTR_SET_DOMAIN;
#ifdef UNUR_ENABLE_LOGGING
#endif
  return UNUR_SUCCESS;
} 
int
unur_ssr_chg_pdfarea( struct unur_gen *gen, double area )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SSR, UNUR_ERR_GEN_INVALID );
  if (area <= 0.) {
    _unur_warning(NULL,UNUR_ERR_DISTR_SET,"area <= 0");
    return UNUR_ERR_DISTR_SET;
  }
  DISTR.area = area;
  return UNUR_SUCCESS;
} 
int
unur_ssr_upd_pdfarea( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, SSR, UNUR_ERR_GEN_INVALID );
  return unur_distr_cont_upd_pdfarea( gen->distr );
} 
#undef DISTR
int
unur_tdr_reinit( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE,gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, TDR, UNUR_ERR_GEN_INVALID );
  return gen->reinit(gen);
} 
int
unur_tdrgw_reinit( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE,gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, ARS, UNUR_ERR_GEN_INVALID );
  return gen->reinit(gen);
} 
#define DISTR gen->distr->data.cont 
#define GEN   ((struct unur_utdr_gen*)gen->datap) 
int
unur_utdr_reinit( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE,gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, UTDR, UNUR_ERR_GEN_INVALID );
  return gen->reinit(gen);
} 
int
unur_utdr_chg_pdfparams( struct unur_gen *gen, double *params, int n_params )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, UTDR, UNUR_ERR_GEN_INVALID );
  return unur_distr_cont_set_pdfparams( gen->distr, params,n_params );
} 
int 
unur_utdr_chg_domain( struct unur_gen *gen, double left, double right )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, UTDR, UNUR_ERR_GEN_INVALID );
  if (left >= right) {
    _unur_warning(NULL,UNUR_ERR_DISTR_SET,"domain, left >= right");
    return UNUR_ERR_DISTR_SET;
  }
  DISTR.BD_LEFT = left;
  DISTR.BD_RIGHT = right;
  GEN->il = left;
  GEN->ir = right;
  gen->distr->set |= UNUR_DISTR_SET_DOMAIN;
#ifdef UNUR_ENABLE_LOGGING
#endif
  return UNUR_SUCCESS;
} 
int
unur_utdr_chg_mode( struct unur_gen *gen, double mode )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, UTDR, UNUR_ERR_GEN_INVALID );
  DISTR.mode = mode;
  return UNUR_SUCCESS;
} 
int
unur_utdr_upd_mode( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, UTDR, UNUR_ERR_GEN_INVALID );
  return unur_distr_cont_upd_mode( gen->distr );
} 
int
unur_utdr_chg_pdfarea( struct unur_gen *gen, double area )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, UTDR, UNUR_ERR_GEN_INVALID );
  if (area <= 0.) {
    _unur_warning(NULL,UNUR_ERR_DISTR_SET,"area <= 0");
    return UNUR_ERR_DISTR_SET;
  }
  DISTR.area = area;
  return UNUR_SUCCESS;
} 
int
unur_utdr_upd_pdfarea( struct unur_gen *gen )
{
  _unur_check_NULL( GENTYPE, gen, UNUR_ERR_NULL );
  _unur_check_gen_object( gen, UTDR, UNUR_ERR_GEN_INVALID );
  return unur_distr_cont_upd_pdfarea( gen->distr );
} 
#undef DISTR
#undef GEN
#endif   
