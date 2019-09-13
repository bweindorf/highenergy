/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#undef __BEGIN_DECLS
#undef __END_DECLS
#ifdef __cplusplus
#  define __BEGIN_DECLS extern "C" {
#  define __END_DECLS }
#else
#  define __BEGIN_DECLS 
#  define __END_DECLS 
#endif
__BEGIN_DECLS
#ifndef UNURAN_H_IN_SEEN
#define UNURAN_H_IN_SEEN
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef UNUR_TYPEDEFS_H_SEEN
#define UNUR_TYPEDEFS_H_SEEN
struct unur_distr;                       
typedef struct unur_distr UNUR_DISTR;
struct unur_par;                         
typedef struct unur_par   UNUR_PAR;
struct unur_gen;                         
typedef struct unur_gen   UNUR_GEN;
struct unur_urng;                        
typedef struct unur_urng  UNUR_URNG;
#define UNUR_URNG_UNURAN 1
typedef double UNUR_FUNCT_CONT  (double x, const struct unur_distr *distr);
typedef double UNUR_FUNCT_DISCR (int x, const struct unur_distr *distr);
typedef int    UNUR_IFUNCT_DISCR(double x, const struct unur_distr *distr);
typedef double UNUR_FUNCT_CVEC (const double *x, struct unur_distr *distr);
typedef int    UNUR_VFUNCT_CVEC(double *result, const double *x, struct unur_distr *distr);
typedef double UNUR_FUNCTD_CVEC(const double *x, int coord, struct unur_distr *distr);
struct unur_slist;         
typedef void UNUR_ERROR_HANDLER( const char *objid, const char *file, int line, 
				 const char *errortype, int unur_errno, const char *reason );
#endif  
#ifndef URNG_H_SEEN
#define URNG_H_SEEN
UNUR_URNG *unur_get_default_urng( void );
UNUR_URNG *unur_set_default_urng( UNUR_URNG *urng_new );
UNUR_URNG *unur_set_default_urng_aux( UNUR_URNG *urng_new );
UNUR_URNG *unur_get_default_urng_aux( void );
int unur_set_urng( UNUR_PAR *parameters, UNUR_URNG *urng );
UNUR_URNG *unur_chg_urng( UNUR_GEN *generator, UNUR_URNG *urng );
UNUR_URNG *unur_get_urng( UNUR_GEN *generator );
int unur_set_urng_aux( UNUR_PAR *parameters, UNUR_URNG *urng_aux );
int unur_use_urng_aux_default( UNUR_PAR *parameters );
int unur_chgto_urng_aux_default( UNUR_GEN *generator );
UNUR_URNG *unur_chg_urng_aux( UNUR_GEN *generator, UNUR_URNG *urng_aux );
UNUR_URNG *unur_get_urng_aux( UNUR_GEN *generator );
double unur_urng_sample (UNUR_URNG *urng);
double unur_sample_urng (UNUR_GEN *gen);
int unur_urng_sample_array (UNUR_URNG *urng, double *X, int dim);
int unur_urng_reset (UNUR_URNG *urng);
#ifdef UNUR_URNG_UNURAN
int unur_urng_sync (UNUR_URNG *urng);
int unur_urng_seed (UNUR_URNG *urng, unsigned long seed);
int unur_urng_anti (UNUR_URNG *urng, int anti);
int unur_urng_nextsub (UNUR_URNG *urng);
int unur_urng_resetsub (UNUR_URNG *urng);
int unur_gen_sync (UNUR_GEN *generator);
int unur_gen_seed (UNUR_GEN *generator, unsigned long seed);
int unur_gen_anti (UNUR_GEN *generator, int anti);
int unur_gen_reset (UNUR_GEN *generator);
int unur_gen_nextsub (UNUR_GEN *generator);
int unur_gen_resetsub (UNUR_GEN *generator);
UNUR_URNG *unur_urng_new( double (*sampleunif)(void *state), void *state );
void unur_urng_free (UNUR_URNG *urng);
int unur_urng_set_sample_array( UNUR_URNG *urng, unsigned int (*samplearray)(void *state, double *X, int dim) );
int unur_urng_set_sync( UNUR_URNG *urng, void (*sync)(void *state) );
int unur_urng_set_seed( UNUR_URNG *urng, void (*setseed)(void *state, unsigned long seed) );
int unur_urng_set_anti( UNUR_URNG *urng, void (*setanti)(void *state, int anti) );
int unur_urng_set_reset( UNUR_URNG *urng, void (*reset)(void *state) );
int unur_urng_set_nextsub( UNUR_URNG *urng, void (*nextsub)(void *state) );
int unur_urng_set_resetsub( UNUR_URNG *urng, void (*resetsub)(void *state) );
int unur_urng_set_delete( UNUR_URNG *urng, void (*fpdelete)(void *state) );
#endif   
#endif  
#ifndef URNG_BUILTIN_H_SEEN
#define URNG_BUILTIN_H_SEEN
double unur_urng_MRG31k3p (void *dummy);
void unur_urng_MRG31k3p_seed (void *dummy, unsigned long seed);
void unur_urng_MRG31k3p_reset (void *dummy);
double unur_urng_fish (void *dummy);
void unur_urng_fish_seed (void *dummy, unsigned long seed);
void unur_urng_fish_reset (void *dummy);
double unur_urng_mstd (void *dummy);
void unur_urng_mstd_seed (void *dummy, unsigned long seed);
void unur_urng_mstd_reset (void *dummy);
UNUR_URNG *unur_urng_builtin( void );
UNUR_URNG *unur_urng_builtin_aux( void );
#endif  
#ifndef URNG_FVOID_H_SEEN
#define URNG_FVOID_H_SEEN
UNUR_URNG *unur_urng_fvoid_new( double (*urand)(void *state), void (*reset)(void *state) );
#endif  
#ifndef URNG_RANDOMSHIFT_H_SEEN
#define URNG_RANDOMSHIFT_H_SEEN
UNUR_URNG *unur_urng_randomshift_new( UNUR_URNG *qrng, UNUR_URNG *srng, int dim );
int unur_urng_randomshift_nextshift( UNUR_URNG *urng );
#endif  
enum {
  UNUR_DISTR_CONT  = 0x010u,      
  UNUR_DISTR_CEMP  = 0x011u,      
  UNUR_DISTR_CVEC  = 0x110u,      
  UNUR_DISTR_CVEMP = 0x111u,      
  UNUR_DISTR_MATR  = 0x210u,      
  UNUR_DISTR_DISCR = 0x020u       
};
void unur_distr_free( UNUR_DISTR *distribution );
int unur_distr_set_name( UNUR_DISTR *distribution, const char *name );
const char *unur_distr_get_name( const UNUR_DISTR *distribution );
int unur_distr_get_dim( const UNUR_DISTR *distribution );
unsigned int unur_distr_get_type( const UNUR_DISTR *distribution );
int unur_distr_is_cont( const UNUR_DISTR *distribution );
int unur_distr_is_cvec( const UNUR_DISTR *distribution );
int unur_distr_is_cemp( const UNUR_DISTR *distribution );
int unur_distr_is_cvemp( const UNUR_DISTR *distribution );
int unur_distr_is_discr( const UNUR_DISTR *distribution );
int unur_distr_is_matr( const UNUR_DISTR *distribution );
int unur_distr_set_extobj( UNUR_DISTR *distribution, const void *extobj );
const void *unur_distr_get_extobj( const UNUR_DISTR *distribution );
UNUR_DISTR *unur_distr_clone( const UNUR_DISTR *distr );
UNUR_DISTR *unur_distr_cemp_new( void );
int unur_distr_cemp_set_data( UNUR_DISTR *distribution, const double *sample, int n_sample );
int unur_distr_cemp_read_data( UNUR_DISTR *distribution, const char *filename );
int unur_distr_cemp_get_data( const UNUR_DISTR *distribution, const double **sample );
int unur_distr_cemp_set_hist( UNUR_DISTR *distribution, const double *prob, int n_prob, double xmin, double xmax );
int unur_distr_cemp_set_hist_prob( UNUR_DISTR *distribution, const double *prob, int n_prob );
int unur_distr_cemp_set_hist_domain( UNUR_DISTR *distribution, double xmin, double xmax );
int unur_distr_cemp_set_hist_bins( UNUR_DISTR *distribution, const double *bins, int n_bins );
UNUR_DISTR *unur_distr_cont_new( void );
int unur_distr_cont_set_pdf( UNUR_DISTR *distribution, UNUR_FUNCT_CONT *pdf );
int unur_distr_cont_set_dpdf( UNUR_DISTR *distribution, UNUR_FUNCT_CONT *dpdf );
int unur_distr_cont_set_cdf( UNUR_DISTR *distribution, UNUR_FUNCT_CONT *cdf );
int unur_distr_cont_set_invcdf( UNUR_DISTR *distribution, UNUR_FUNCT_CONT *invcdf );
UNUR_FUNCT_CONT *unur_distr_cont_get_pdf( const UNUR_DISTR *distribution );
UNUR_FUNCT_CONT *unur_distr_cont_get_dpdf( const UNUR_DISTR *distribution );
UNUR_FUNCT_CONT *unur_distr_cont_get_cdf( const UNUR_DISTR *distribution );
UNUR_FUNCT_CONT *unur_distr_cont_get_invcdf( const UNUR_DISTR *distribution );
double unur_distr_cont_eval_pdf( double x, const UNUR_DISTR *distribution );
double unur_distr_cont_eval_dpdf( double x, const UNUR_DISTR *distribution );
double unur_distr_cont_eval_cdf( double x, const UNUR_DISTR *distribution );
double unur_distr_cont_eval_invcdf( double u, const UNUR_DISTR *distribution );
int unur_distr_cont_set_logpdf( UNUR_DISTR *distribution, UNUR_FUNCT_CONT *logpdf );
int unur_distr_cont_set_dlogpdf( UNUR_DISTR *distribution, UNUR_FUNCT_CONT *dlogpdf );
int unur_distr_cont_set_logcdf( UNUR_DISTR *distribution, UNUR_FUNCT_CONT *logcdf );
UNUR_FUNCT_CONT *unur_distr_cont_get_logpdf( const UNUR_DISTR *distribution );
UNUR_FUNCT_CONT *unur_distr_cont_get_dlogpdf( const UNUR_DISTR *distribution );
UNUR_FUNCT_CONT *unur_distr_cont_get_logcdf( const UNUR_DISTR *distribution );
double unur_distr_cont_eval_logpdf( double x, const UNUR_DISTR *distribution );
double unur_distr_cont_eval_dlogpdf( double x, const UNUR_DISTR *distribution );
double unur_distr_cont_eval_logcdf( double x, const UNUR_DISTR *distribution );
int unur_distr_cont_set_pdfstr( UNUR_DISTR *distribution, const char *pdfstr );
int unur_distr_cont_set_cdfstr( UNUR_DISTR *distribution, const char *cdfstr );
char *unur_distr_cont_get_pdfstr( const UNUR_DISTR *distribution );
char *unur_distr_cont_get_dpdfstr( const UNUR_DISTR *distribution );
char *unur_distr_cont_get_cdfstr( const UNUR_DISTR *distribution );
int unur_distr_cont_set_pdfparams( UNUR_DISTR *distribution, const double *params, int n_params );
int unur_distr_cont_get_pdfparams( const UNUR_DISTR *distribution, const double **params );
int unur_distr_cont_set_pdfparams_vec( UNUR_DISTR *distribution, int par, const double *param_vec, int n_param_vec );
int unur_distr_cont_get_pdfparams_vec( const UNUR_DISTR *distribution, int par, const double **param_vecs );
int unur_distr_cont_set_logpdfstr( UNUR_DISTR *distribution, const char *logpdfstr );
char *unur_distr_cont_get_logpdfstr( const UNUR_DISTR *distribution );
char *unur_distr_cont_get_dlogpdfstr( const UNUR_DISTR *distribution );
int unur_distr_cont_set_logcdfstr( UNUR_DISTR *distribution, const char *logcdfstr );
char *unur_distr_cont_get_logcdfstr( const UNUR_DISTR *distribution );
int unur_distr_cont_set_domain( UNUR_DISTR *distribution, double left, double right );
int unur_distr_cont_get_domain( const UNUR_DISTR *distribution, double *left, double *right );
int unur_distr_cont_get_truncated( const UNUR_DISTR *distribution, double *left, double *right );
int unur_distr_cont_set_hr( UNUR_DISTR *distribution, UNUR_FUNCT_CONT *hazard );
UNUR_FUNCT_CONT *unur_distr_cont_get_hr( const UNUR_DISTR *distribution );
double unur_distr_cont_eval_hr( double x, const UNUR_DISTR *distribution );
int unur_distr_cont_set_hrstr( UNUR_DISTR *distribution, const char *hrstr );
char *unur_distr_cont_get_hrstr( const UNUR_DISTR *distribution );
int unur_distr_cont_set_mode( UNUR_DISTR *distribution, double mode );
int unur_distr_cont_upd_mode( UNUR_DISTR *distribution );
double unur_distr_cont_get_mode( UNUR_DISTR *distribution );
int unur_distr_cont_set_center( UNUR_DISTR *distribution, double center );
double unur_distr_cont_get_center( const UNUR_DISTR *distribution );
int unur_distr_cont_set_pdfarea( UNUR_DISTR *distribution, double area );
int unur_distr_cont_upd_pdfarea( UNUR_DISTR *distribution );
double unur_distr_cont_get_pdfarea( UNUR_DISTR *distribution );
UNUR_DISTR *unur_distr_cxtrans_new( const UNUR_DISTR *distribution );
const UNUR_DISTR *unur_distr_cxtrans_get_distribution( const UNUR_DISTR *distribution );
int unur_distr_cxtrans_set_alpha( UNUR_DISTR *distribution, double alpha );
int unur_distr_cxtrans_set_rescale( UNUR_DISTR *distribution, double mu, double sigma );
double unur_distr_cxtrans_get_alpha( const UNUR_DISTR *distribution );
double unur_distr_cxtrans_get_mu( const UNUR_DISTR *distribution );
double unur_distr_cxtrans_get_sigma( const UNUR_DISTR *distribution );
int unur_distr_cxtrans_set_logpdfpole( UNUR_DISTR *distribution, double logpdfpole, double dlogpdfpole );
#define unur_distr_cxtrans_get_pdf(distr)   unur_distr_cont_get_pdf((distr))
#define unur_distr_cxtrans_get_dpdf(distr)  unur_distr_cont_get_dpdf((distr))
#define unur_distr_cxtrans_get_cdf(distr)   unur_distr_cont_get_cdf((distr))
#define unur_distr_cxtrans_eval_pdf(x,distr)  unur_distr_cont_eval_pdf((x),(distr))
#define unur_distr_cxtrans_eval_dpdf(x,distr) unur_distr_cont_eval_dpdf((x),(distr))
#define unur_distr_cxtrans_eval_cdf(x,distr)  unur_distr_cont_eval_cdf((x),(distr))
int unur_distr_cxtrans_set_domain( UNUR_DISTR *distribution, double left, double right );
#define unur_distr_cxtrans_get_domain(distr,left,right)  unur_distr_cont_get_domain((distr),(left),(right))
#define unur_distr_cxtrans_get_truncated(distr,left,right)  unur_distr_cont_get_truncated((distr),(left),(right))
#define unur_distr_cxtrans_set_mode(distr,mode)   unur_distr_cont_set_mode((distr),(mode))
#define unur_distr_cxtrans_upd_mode(distr)   unur_distr_cont_upd_mode((distr))
#define unur_distr_cxtrans_get_mode(distr)   unur_distr_cont_get_mode((distr))
#define unur_distr_cxtrans_set_pdfarea(distr,area)   unur_distr_cont_set_pdfarea((distr),(area))
#define unur_distr_cxtrans_upd_pdfarea(distr)   unur_distr_cont_upd_pdfarea((distr))
#define unur_distr_cxtrans_get_pdfarea(distr)   unur_distr_cont_get_pdfarea((distr))
UNUR_DISTR *unur_distr_corder_new( const UNUR_DISTR *distribution, int n, int k );
const UNUR_DISTR *unur_distr_corder_get_distribution( const UNUR_DISTR *distribution );
int unur_distr_corder_set_rank( UNUR_DISTR *distribution, int n, int k );
int unur_distr_corder_get_rank( const UNUR_DISTR *distribution, int *n, int *k );
#define unur_distr_corder_get_pdf(distr)   unur_distr_cont_get_pdf((distr))
#define unur_distr_corder_get_dpdf(distr)  unur_distr_cont_get_dpdf((distr))
#define unur_distr_corder_get_cdf(distr)   unur_distr_cont_get_cdf((distr))
#define unur_distr_corder_eval_pdf(x,distr)  unur_distr_cont_eval_pdf((x),(distr))
#define unur_distr_corder_eval_dpdf(x,distr) unur_distr_cont_eval_dpdf((x),(distr))
#define unur_distr_corder_eval_cdf(x,distr)  unur_distr_cont_eval_cdf((x),(distr))
#define unur_distr_corder_set_pdfparams(distr,params,n)  unur_distr_cont_set_pdfparams((distr),(params),(n))
#define unur_distr_corder_get_pdfparams(distr,params)  unur_distr_cont_get_pdfparams((distr),(params))
#define unur_distr_corder_set_domain(distr,left,right)  unur_distr_cont_set_domain((distr),(left),(right))
#define unur_distr_corder_get_domain(distr,left,right)  unur_distr_cont_get_domain((distr),(left),(right))
#define unur_distr_corder_get_truncated(distr,left,right)  unur_distr_cont_get_truncated((distr),(left),(right))
#define unur_distr_corder_set_mode(distr,mode)   unur_distr_cont_set_mode((distr),(mode))
#define unur_distr_corder_upd_mode(distr)   unur_distr_cont_upd_mode((distr))
#define unur_distr_corder_get_mode(distr)   unur_distr_cont_get_mode((distr))
#define unur_distr_corder_set_pdfarea(distr,area)   unur_distr_cont_set_pdfarea((distr),(area))
#define unur_distr_corder_upd_pdfarea(distr)   unur_distr_cont_upd_pdfarea((distr))
#define unur_distr_corder_get_pdfarea(distr)   unur_distr_cont_get_pdfarea((distr))
UNUR_DISTR *unur_distr_cvec_new( int dim );
int unur_distr_cvec_set_pdf( UNUR_DISTR *distribution, UNUR_FUNCT_CVEC *pdf );
int unur_distr_cvec_set_dpdf( UNUR_DISTR *distribution, UNUR_VFUNCT_CVEC *dpdf );
int unur_distr_cvec_set_pdpdf( UNUR_DISTR *distribution, UNUR_FUNCTD_CVEC *pdpdf );
UNUR_FUNCT_CVEC *unur_distr_cvec_get_pdf( const UNUR_DISTR *distribution );
UNUR_VFUNCT_CVEC *unur_distr_cvec_get_dpdf( const UNUR_DISTR *distribution );
UNUR_FUNCTD_CVEC *unur_distr_cvec_get_pdpdf( const UNUR_DISTR *distribution );
double unur_distr_cvec_eval_pdf( const double *x, UNUR_DISTR *distribution );
int unur_distr_cvec_eval_dpdf( double *result, const double *x, UNUR_DISTR *distribution );
double unur_distr_cvec_eval_pdpdf( const double *x, int coord, UNUR_DISTR *distribution );
int unur_distr_cvec_set_logpdf( UNUR_DISTR *distribution, UNUR_FUNCT_CVEC *logpdf );
int unur_distr_cvec_set_dlogpdf( UNUR_DISTR *distribution, UNUR_VFUNCT_CVEC *dlogpdf );
int unur_distr_cvec_set_pdlogpdf( UNUR_DISTR *distribution, UNUR_FUNCTD_CVEC *pdlogpdf );
UNUR_FUNCT_CVEC *unur_distr_cvec_get_logpdf( const UNUR_DISTR *distribution );
UNUR_VFUNCT_CVEC *unur_distr_cvec_get_dlogpdf( const UNUR_DISTR *distribution );
UNUR_FUNCTD_CVEC *unur_distr_cvec_get_pdlogpdf( const UNUR_DISTR *distribution );
double unur_distr_cvec_eval_logpdf( const double *x, UNUR_DISTR *distribution );
int unur_distr_cvec_eval_dlogpdf( double *result, const double *x, UNUR_DISTR *distribution );
double unur_distr_cvec_eval_pdlogpdf( const double *x, int coord, UNUR_DISTR *distribution );
int unur_distr_cvec_set_mean( UNUR_DISTR *distribution, const double *mean );
const double *unur_distr_cvec_get_mean( const UNUR_DISTR *distribution );
int unur_distr_cvec_set_covar( UNUR_DISTR *distribution, const double *covar );
int unur_distr_cvec_set_covar_inv( UNUR_DISTR *distribution, const double *covar_inv );
const double *unur_distr_cvec_get_covar( const UNUR_DISTR *distribution );
const double *unur_distr_cvec_get_cholesky( const UNUR_DISTR *distribution );
const double *unur_distr_cvec_get_covar_inv( UNUR_DISTR *distribution );
int unur_distr_cvec_set_rankcorr( UNUR_DISTR *distribution, const double *rankcorr );
const double *unur_distr_cvec_get_rankcorr( const UNUR_DISTR *distribution );
const double *unur_distr_cvec_get_rk_cholesky( const UNUR_DISTR *distribution );
int unur_distr_cvec_set_marginals( UNUR_DISTR *distribution, UNUR_DISTR *marginal );
int unur_distr_cvec_set_marginal_array( UNUR_DISTR *distribution, UNUR_DISTR **marginals );
int unur_distr_cvec_set_marginal_list( UNUR_DISTR *distribution, ... );
const UNUR_DISTR *unur_distr_cvec_get_marginal( const UNUR_DISTR *distribution, int n );
int unur_distr_cvec_set_pdfparams( UNUR_DISTR *distribution, const double *params, int n_params );
int unur_distr_cvec_get_pdfparams( const UNUR_DISTR *distribution, const double **params );
int unur_distr_cvec_set_pdfparams_vec( UNUR_DISTR *distribution, int par, const double *param_vec, int n_params );
int unur_distr_cvec_get_pdfparams_vec( const UNUR_DISTR *distribution, int par, const double **param_vecs );
int unur_distr_cvec_set_domain_rect( UNUR_DISTR *distribution, const double *lowerleft, const double *upperright );
int unur_distr_cvec_is_indomain( const double *x, const UNUR_DISTR *distribution );
int unur_distr_cvec_set_mode( UNUR_DISTR *distribution, const double *mode );
int unur_distr_cvec_upd_mode( UNUR_DISTR *distribution );
const double *unur_distr_cvec_get_mode( UNUR_DISTR *distribution );
int unur_distr_cvec_set_center( UNUR_DISTR *distribution, const double *center );
const double *unur_distr_cvec_get_center( UNUR_DISTR *distribution );
int unur_distr_cvec_set_pdfvol( UNUR_DISTR *distribution, double volume );
int unur_distr_cvec_upd_pdfvol( UNUR_DISTR *distribution );
double unur_distr_cvec_get_pdfvol( UNUR_DISTR *distribution );
UNUR_DISTR *unur_distr_condi_new( const UNUR_DISTR *distribution, const double *pos, const double *dir, int k );
int unur_distr_condi_set_condition( struct unur_distr *distribution, const double *pos, const double *dir, int k );
int unur_distr_condi_get_condition( struct unur_distr *distribution, const double **pos, const double **dir, int *k );
const UNUR_DISTR *unur_distr_condi_get_distribution( const UNUR_DISTR *distribution );
UNUR_DISTR *unur_distr_cvemp_new( int dim ); 
int unur_distr_cvemp_set_data( UNUR_DISTR *distribution, const double *sample, int n_sample );
int unur_distr_cvemp_read_data( UNUR_DISTR *distribution, const char *filename );
int unur_distr_cvemp_get_data( const UNUR_DISTR *distribution, const double **sample );
UNUR_DISTR *unur_distr_discr_new( void );
int unur_distr_discr_set_pv( UNUR_DISTR *distribution, const double *pv, int n_pv );
int unur_distr_discr_make_pv( UNUR_DISTR *distribution );
int unur_distr_discr_get_pv( const UNUR_DISTR *distribution, const double **pv );
int unur_distr_discr_set_pmf( UNUR_DISTR *distribution, UNUR_FUNCT_DISCR *pmf );
int unur_distr_discr_set_cdf( UNUR_DISTR *distribution, UNUR_FUNCT_DISCR *cdf );
int unur_distr_discr_set_invcdf( UNUR_DISTR *distribution, UNUR_IFUNCT_DISCR *invcdf );
UNUR_FUNCT_DISCR *unur_distr_discr_get_pmf( const UNUR_DISTR *distribution );
UNUR_FUNCT_DISCR *unur_distr_discr_get_cdf( const UNUR_DISTR *distribution );
UNUR_IFUNCT_DISCR *unur_distr_discr_get_invcdf( const UNUR_DISTR *distribution );
double unur_distr_discr_eval_pv(int k, const UNUR_DISTR *distribution );
double unur_distr_discr_eval_pmf( int k, const UNUR_DISTR *distribution );
double unur_distr_discr_eval_cdf( int k, const UNUR_DISTR *distribution );
int unur_distr_discr_eval_invcdf( double u, const UNUR_DISTR *distribution );
int unur_distr_discr_set_pmfstr( UNUR_DISTR *distribution, const char *pmfstr );
int unur_distr_discr_set_cdfstr( UNUR_DISTR *distribution, const char *cdfstr );
char *unur_distr_discr_get_pmfstr( const UNUR_DISTR *distribution );
char *unur_distr_discr_get_cdfstr( const UNUR_DISTR *distribution );
int unur_distr_discr_set_pmfparams( UNUR_DISTR *distribution, const double *params, int n_params );
int unur_distr_discr_get_pmfparams( const UNUR_DISTR *distribution, const double **params );
int unur_distr_discr_set_domain( UNUR_DISTR *distribution, int left, int right );
int unur_distr_discr_get_domain( const UNUR_DISTR *distribution, int *left, int *right );
int unur_distr_discr_set_mode( UNUR_DISTR *distribution, int mode );
int unur_distr_discr_upd_mode( UNUR_DISTR *distribution );
int unur_distr_discr_get_mode( UNUR_DISTR *distribution );
int unur_distr_discr_set_pmfsum( UNUR_DISTR *distribution, double sum );
int unur_distr_discr_upd_pmfsum( UNUR_DISTR *distribution );
double unur_distr_discr_get_pmfsum( UNUR_DISTR *distribution );
UNUR_DISTR *unur_distr_matr_new( int n_rows, int n_cols );
int unur_distr_matr_get_dim( const UNUR_DISTR *distribution, int *n_rows, int *n_cols );
UNUR_PAR *unur_auto_new( const UNUR_DISTR *distribution );
int unur_auto_set_logss( UNUR_PAR *parameters, int logss );
UNUR_PAR *unur_dari_new( const UNUR_DISTR *distribution );
int unur_dari_set_squeeze( UNUR_PAR *parameters, int squeeze );
int unur_dari_set_tablesize( UNUR_PAR *parameters, int size );
int unur_dari_set_cpfactor( UNUR_PAR *parameters, double cp_factor );
int unur_dari_set_verify( UNUR_PAR *parameters, int verify );
int unur_dari_chg_verify( UNUR_GEN *generator, int verify );
UNUR_PAR *unur_dau_new( const UNUR_DISTR *distribution );
int unur_dau_set_urnfactor( UNUR_PAR *parameters, double factor );
UNUR_PAR *unur_dgt_new( const UNUR_DISTR *distribution );
int unur_dgt_set_guidefactor( UNUR_PAR *parameters, double factor );
int unur_dgt_set_variant( UNUR_PAR *parameters, unsigned variant );
int unur_dgt_eval_invcdf_recycle( const UNUR_GEN *generator, double u, double *recycle );
int unur_dgt_eval_invcdf( const UNUR_GEN *generator, double u );
UNUR_PAR *unur_dsrou_new( const UNUR_DISTR *distribution );
int unur_dsrou_set_cdfatmode( UNUR_PAR *parameters, double Fmode );
int unur_dsrou_set_verify( UNUR_PAR *parameters, int verify );
int unur_dsrou_chg_verify( UNUR_GEN *generator, int verify );
int unur_dsrou_chg_cdfatmode( UNUR_GEN *generator, double Fmode );
UNUR_PAR *unur_dss_new( const UNUR_DISTR *distribution );
UNUR_PAR *unur_arou_new( const UNUR_DISTR *distribution );
int unur_arou_set_usedars( UNUR_PAR *parameters, int usedars );
int unur_arou_set_darsfactor( UNUR_PAR *parameters, double factor );
int unur_arou_set_max_sqhratio( UNUR_PAR *parameters, double max_ratio );
double unur_arou_get_sqhratio( const UNUR_GEN *generator );
double unur_arou_get_hatarea( const UNUR_GEN *generator );
double unur_arou_get_squeezearea( const UNUR_GEN *generator );
int unur_arou_set_max_segments( UNUR_PAR *parameters, int max_segs );
int unur_arou_set_cpoints( UNUR_PAR *parameters, int n_stp, const double *stp );
int unur_arou_set_usecenter( UNUR_PAR *parameters, int usecenter );
int unur_arou_set_guidefactor( UNUR_PAR *parameters, double factor );
int unur_arou_set_verify( UNUR_PAR *parameters, int verify );
int unur_arou_chg_verify( UNUR_GEN *generator, int verify );
int unur_arou_set_pedantic( UNUR_PAR *parameters, int pedantic );
UNUR_PAR *unur_ars_new( const UNUR_DISTR* distribution );
int unur_ars_set_max_intervals( UNUR_PAR *parameters, int max_ivs );
int unur_ars_set_cpoints( UNUR_PAR *parameters, int n_cpoints, const double *cpoints );
int unur_ars_set_reinit_percentiles( UNUR_PAR *parameters, int n_percentiles, const double *percentiles );
int unur_ars_chg_reinit_percentiles( UNUR_GEN *generator, int n_percentiles, const double *percentiles );
int unur_ars_set_reinit_ncpoints( UNUR_PAR *parameters, int ncpoints );
int unur_ars_chg_reinit_ncpoints( UNUR_GEN *generator, int ncpoints );
int unur_ars_set_max_iter( UNUR_PAR *parameters, int max_iter );
int unur_ars_set_verify( UNUR_PAR *parameters, int verify );
int unur_ars_chg_verify( UNUR_GEN *generator, int verify );
int unur_ars_set_pedantic( UNUR_PAR *parameters, int pedantic );
double unur_ars_get_loghatarea( const UNUR_GEN *generator );
double unur_ars_eval_invcdfhat( const UNUR_GEN *generator, double u );
UNUR_PAR *unur_hinv_new( const UNUR_DISTR *distribution );
int unur_hinv_set_order( UNUR_PAR *parameters, int order);
int unur_hinv_set_u_resolution( UNUR_PAR *parameters, double u_resolution);
int unur_hinv_set_cpoints( UNUR_PAR *parameters, const double *stp, int n_stp );
int unur_hinv_set_boundary( UNUR_PAR *parameters, double left, double right );
int unur_hinv_set_guidefactor( UNUR_PAR *parameters, double factor );
int unur_hinv_set_max_intervals( UNUR_PAR *parameters, int max_ivs );
int unur_hinv_get_n_intervals( const UNUR_GEN *generator );
double unur_hinv_eval_approxinvcdf( const UNUR_GEN *generator, double u );
int unur_hinv_chg_truncated( UNUR_GEN *generator, double left, double right );
int unur_hinv_estimate_error( const UNUR_GEN *generator, int samplesize, double *max_error, double *MAE );
UNUR_PAR *unur_hrb_new( const UNUR_DISTR *distribution );
int unur_hrb_set_upperbound( UNUR_PAR *parameters, double upperbound );
int unur_hrb_set_verify( UNUR_PAR *parameters, int verify );
int unur_hrb_chg_verify( UNUR_GEN *generator, int verify );
UNUR_PAR *unur_hrd_new( const UNUR_DISTR *distribution );
int unur_hrd_set_verify( UNUR_PAR *parameters, int verify );
int unur_hrd_chg_verify( UNUR_GEN *generator, int verify );
UNUR_PAR *unur_hri_new( const UNUR_DISTR *distribution );
int unur_hri_set_p0( UNUR_PAR *parameters, double p0 );
int unur_hri_set_verify( UNUR_PAR *parameters, int verify );
int unur_hri_chg_verify( UNUR_GEN *generator, int verify );
UNUR_PAR *unur_itdr_new( const UNUR_DISTR *distribution );
int unur_itdr_set_xi( UNUR_PAR *parameters, double xi );
int unur_itdr_set_cp( UNUR_PAR *parameters, double cp );
int unur_itdr_set_ct( UNUR_PAR *parameters, double ct );
double unur_itdr_get_xi( UNUR_GEN *generator );
double unur_itdr_get_cp( UNUR_GEN *generator );
double unur_itdr_get_ct( UNUR_GEN *generator );
double unur_itdr_get_area( UNUR_GEN *generator );
int unur_itdr_set_verify( UNUR_PAR *parameters, int verify );
int unur_itdr_chg_verify( UNUR_GEN *generator, int verify );
UNUR_PAR *unur_mcorr_new( const UNUR_DISTR *distribution );
int unur_mcorr_set_eigenvalues( UNUR_PAR *par, const double *eigenvalues );
int unur_mcorr_chg_eigenvalues( UNUR_GEN *gen, const double *eigenvalues );
UNUR_PAR *unur_ninv_new( const UNUR_DISTR *distribution );
int unur_ninv_set_useregula( UNUR_PAR *parameters );
int unur_ninv_set_usenewton( UNUR_PAR *parameters );
int unur_ninv_set_usebisect( UNUR_PAR *parameters );
int unur_ninv_set_max_iter( UNUR_PAR *parameters, int max_iter );
int unur_ninv_chg_max_iter(UNUR_GEN *generator, int max_iter);
int unur_ninv_set_x_resolution( UNUR_PAR *parameters, double x_resolution);
int unur_ninv_chg_x_resolution(UNUR_GEN *generator, double x_resolution);
int unur_ninv_set_u_resolution( UNUR_PAR *parameters, double u_resolution);
int unur_ninv_chg_u_resolution(UNUR_GEN *generator, double u_resolution);
int unur_ninv_set_start( UNUR_PAR *parameters, double left, double right);
int unur_ninv_chg_start(UNUR_GEN *gen, double left, double right);
int unur_ninv_set_table(UNUR_PAR *parameters, int no_of_points);
int unur_ninv_chg_table(UNUR_GEN *gen, int no_of_points);
int unur_ninv_chg_truncated(UNUR_GEN *gen, double left, double right);
double unur_ninv_eval_approxinvcdf( const UNUR_GEN *generator, double u );
UNUR_PAR *unur_nrou_new( const UNUR_DISTR *distribution );
int unur_nrou_set_u( UNUR_PAR *parameters, double umin, double umax );
int unur_nrou_set_v( UNUR_PAR *parameters, double vmax );
int unur_nrou_set_r( UNUR_PAR *parameters, double r );
int unur_nrou_set_center( UNUR_PAR *parameters, double center );
int unur_nrou_set_verify( UNUR_PAR *parameters, int verify );
int unur_nrou_chg_verify( UNUR_GEN *generator, int verify );
UNUR_PAR *unur_pinv_new( const UNUR_DISTR *distribution );
int unur_pinv_set_order( UNUR_PAR *parameters, int order);
int unur_pinv_set_smoothness( UNUR_PAR *parameters, int smoothness);
int unur_pinv_set_u_resolution( UNUR_PAR *parameters, double u_resolution);
int unur_pinv_set_use_upoints( UNUR_PAR *parameters, int use_upoints );
int unur_pinv_set_usepdf( UNUR_PAR *parameters );
int unur_pinv_set_usecdf( UNUR_PAR *parameters );
int unur_pinv_set_boundary( UNUR_PAR *parameters, double left, double right );
int unur_pinv_set_searchboundary( UNUR_PAR *parameters, int left, int right );
int unur_pinv_set_max_intervals( UNUR_PAR *parameters, int max_ivs );
int unur_pinv_get_n_intervals( const UNUR_GEN *generator ); 
int unur_pinv_set_keepcdf( UNUR_PAR *parameters, int keepcdf);
double unur_pinv_eval_approxinvcdf( const UNUR_GEN *generator, double u );
double unur_pinv_eval_approxcdf( const UNUR_GEN *generator, double x );
int unur_pinv_estimate_error( const UNUR_GEN *generator, int samplesize, double *max_error, double *MAE );
UNUR_PAR *unur_srou_new( const UNUR_DISTR *distribution );
int unur_srou_set_r( UNUR_PAR *parameters, double r );
int unur_srou_set_cdfatmode( UNUR_PAR *parameters, double Fmode );
int unur_srou_set_pdfatmode( UNUR_PAR *parameters, double fmode );
int unur_srou_set_usesqueeze( UNUR_PAR *parameters, int usesqueeze );
int unur_srou_set_usemirror( UNUR_PAR *parameters, int usemirror );
int unur_srou_set_verify( UNUR_PAR *parameters, int verify );
int unur_srou_chg_verify( UNUR_GEN *generator, int verify );
int unur_srou_chg_cdfatmode( UNUR_GEN *generator, double Fmode );
int unur_srou_chg_pdfatmode( UNUR_GEN *generator, double fmode );
UNUR_PAR *unur_ssr_new( const UNUR_DISTR *distribution );
int unur_ssr_set_cdfatmode( UNUR_PAR *parameters, double Fmode );
int unur_ssr_set_pdfatmode( UNUR_PAR *parameters, double fmode );
int unur_ssr_set_usesqueeze( UNUR_PAR *parameters, int usesqueeze );
int unur_ssr_set_verify( UNUR_PAR *parameters, int verify );
int unur_ssr_chg_verify( UNUR_GEN *generator, int verify );
int unur_ssr_chg_cdfatmode( UNUR_GEN *generator, double Fmode );
int unur_ssr_chg_pdfatmode( UNUR_GEN *generator, double fmode );
UNUR_PAR *unur_tabl_new( const UNUR_DISTR* distribution );
int unur_tabl_set_variant_ia( UNUR_PAR *parameters, int use_ia );
int unur_tabl_set_cpoints( UNUR_PAR *parameters, int n_cpoints, const double *cpoints );
int unur_tabl_set_nstp( UNUR_PAR *parameters, int n_stp );
int unur_tabl_set_useear( UNUR_PAR *parameters, int useear );
int unur_tabl_set_areafraction( UNUR_PAR *parameters, double fraction );
int unur_tabl_set_usedars( UNUR_PAR *parameters, int usedars );
int unur_tabl_set_darsfactor( UNUR_PAR *parameters, double factor );
int unur_tabl_set_variant_splitmode( UNUR_PAR *parameters, unsigned splitmode );
int unur_tabl_set_max_sqhratio( UNUR_PAR *parameters, double max_ratio );
double unur_tabl_get_sqhratio( const UNUR_GEN *generator );
double unur_tabl_get_hatarea( const UNUR_GEN *generator );
double unur_tabl_get_squeezearea( const UNUR_GEN *generator );
int unur_tabl_set_max_intervals( UNUR_PAR *parameters, int max_ivs );
int unur_tabl_get_n_intervals( const UNUR_GEN *generator );
int unur_tabl_set_slopes( UNUR_PAR *parameters, const double *slopes, int n_slopes );
int unur_tabl_set_guidefactor( UNUR_PAR *parameters, double factor );
int unur_tabl_set_boundary( UNUR_PAR *parameters, double left, double right );
int unur_tabl_chg_truncated(UNUR_GEN *gen, double left, double right);
int unur_tabl_set_verify( UNUR_PAR *parameters, int verify );
int unur_tabl_chg_verify( UNUR_GEN *generator, int verify );
int unur_tabl_set_pedantic( UNUR_PAR *parameters, int pedantic );
UNUR_PAR *unur_tdr_new( const UNUR_DISTR* distribution );
int unur_tdr_set_c( UNUR_PAR *parameters, double c );
int unur_tdr_set_variant_gw( UNUR_PAR *parameters );
int unur_tdr_set_variant_ps( UNUR_PAR *parameters );
int unur_tdr_set_variant_ia( UNUR_PAR *parameters );
int unur_tdr_set_usedars( UNUR_PAR *parameters, int usedars );
int unur_tdr_set_darsfactor( UNUR_PAR *parameters, double factor );
int unur_tdr_set_cpoints( UNUR_PAR *parameters, int n_stp, const double *stp );
int unur_tdr_set_reinit_percentiles( UNUR_PAR *parameters, int n_percentiles, const double *percentiles );
int unur_tdr_chg_reinit_percentiles( UNUR_GEN *generator, int n_percentiles, const double *percentiles );
int unur_tdr_set_reinit_ncpoints( UNUR_PAR *parameters, int ncpoints );
int unur_tdr_chg_reinit_ncpoints( UNUR_GEN *generator, int ncpoints );
int unur_tdr_chg_truncated(UNUR_GEN *gen, double left, double right);
int unur_tdr_set_max_sqhratio( UNUR_PAR *parameters, double max_ratio );
double unur_tdr_get_sqhratio( const UNUR_GEN *generator );
double unur_tdr_get_hatarea( const UNUR_GEN *generator );
double unur_tdr_get_squeezearea( const UNUR_GEN *generator );
int unur_tdr_set_max_intervals( UNUR_PAR *parameters, int max_ivs );
int unur_tdr_set_usecenter( UNUR_PAR *parameters, int usecenter );
int unur_tdr_set_usemode( UNUR_PAR *parameters, int usemode );
int unur_tdr_set_guidefactor( UNUR_PAR *parameters, double factor );
int unur_tdr_set_verify( UNUR_PAR *parameters, int verify );
int unur_tdr_chg_verify( UNUR_GEN *generator, int verify );
int unur_tdr_set_pedantic( UNUR_PAR *parameters, int pedantic );
double unur_tdr_eval_invcdfhat( const UNUR_GEN *generator, double u, 
				double *hx, double *fx, double *sqx );
int _unur_tdr_is_ARS_running( const UNUR_GEN *generator );
UNUR_PAR *unur_utdr_new( const UNUR_DISTR *distribution );
int unur_utdr_set_pdfatmode( UNUR_PAR *parameters, double fmode );
int unur_utdr_set_cpfactor( UNUR_PAR *parameters, double cp_factor );
int unur_utdr_set_deltafactor( UNUR_PAR *parameters, double delta );
int unur_utdr_set_verify( UNUR_PAR *parameters, int verify );
int unur_utdr_chg_verify( UNUR_GEN *generator, int verify );
int unur_utdr_chg_pdfatmode( UNUR_GEN *generator, double fmode );
UNUR_PAR *unur_empk_new( const UNUR_DISTR *distribution );
int unur_empk_set_kernel( UNUR_PAR *parameters, unsigned kernel);
int unur_empk_set_kernelgen( UNUR_PAR *parameters, const UNUR_GEN *kernelgen, double alpha, double kernelvar );
int unur_empk_set_beta( UNUR_PAR *parameters, double beta );
int unur_empk_set_smoothing( UNUR_PAR *parameters, double smoothing );
int unur_empk_chg_smoothing( UNUR_GEN *generator, double smoothing );
int unur_empk_set_varcor( UNUR_PAR *parameters, int varcor );
int unur_empk_chg_varcor( UNUR_GEN *generator, int varcor );
int unur_empk_set_positive( UNUR_PAR *parameters, int positive );
UNUR_PAR *unur_empl_new( const UNUR_DISTR *distribution );
UNUR_PAR *unur_hist_new( const UNUR_DISTR *distribution );
UNUR_PAR *unur_mvtdr_new( const UNUR_DISTR *distribution );
int unur_mvtdr_set_stepsmin( UNUR_PAR *parameters, int stepsmin );
int unur_mvtdr_set_boundsplitting( UNUR_PAR *parameters, double boundsplitting );
int unur_mvtdr_set_maxcones( UNUR_PAR *parameters, int maxcones );
int unur_mvtdr_get_ncones( const UNUR_GEN *generator );
double unur_mvtdr_get_hatvol( const UNUR_GEN *generator );
int unur_mvtdr_set_verify( UNUR_PAR *parameters, int verify );
int unur_mvtdr_chg_verify( UNUR_GEN *generator, int verify );
UNUR_PAR *unur_norta_new( const UNUR_DISTR *distribution );
UNUR_PAR *unur_vempk_new( const UNUR_DISTR *distribution );
int unur_vempk_set_smoothing( UNUR_PAR *parameters, double smoothing );
int unur_vempk_chg_smoothing( UNUR_GEN *generator, double smoothing );
int unur_vempk_set_varcor( UNUR_PAR *parameters, int varcor );
int unur_vempk_chg_varcor( UNUR_GEN *generator, int varcor );
UNUR_PAR *unur_vnrou_new( const UNUR_DISTR *distribution );
int unur_vnrou_set_u( UNUR_PAR *parameters, double *umin, double *umax );
int unur_vnrou_chg_u( UNUR_GEN *generator, double *umin, double *umax );
int unur_vnrou_set_v( UNUR_PAR *parameters, double vmax );
int unur_vnrou_chg_v( UNUR_GEN *generator, double vmax );
int unur_vnrou_set_r( UNUR_PAR *parameters, double r );
int unur_vnrou_set_verify( UNUR_PAR *parameters, int verify );
int unur_vnrou_chg_verify( UNUR_GEN *generator, int verify );
double unur_vnrou_get_volumehat( const UNUR_GEN *generator );
UNUR_PAR *unur_gibbs_new( const UNUR_DISTR *distribution );
int unur_gibbs_set_variant_coordinate( UNUR_PAR *parameters );
int unur_gibbs_set_variant_random_direction( UNUR_PAR *parameters );
int unur_gibbs_set_c( UNUR_PAR *parameters, double c );
int unur_gibbs_set_startingpoint( UNUR_PAR *parameters, const double *x0 );
int unur_gibbs_set_thinning( UNUR_PAR *parameters, int thinning );
int unur_gibbs_set_burnin( UNUR_PAR *parameters, int burnin );
const double *unur_gibbs_get_state( UNUR_GEN *generator );
int unur_gibbs_chg_state( UNUR_GEN *generator, const double *state );
int unur_gibbs_reset_state( UNUR_GEN *generator );
UNUR_PAR *unur_hitro_new( const UNUR_DISTR *distribution );
int unur_hitro_set_variant_coordinate( UNUR_PAR *parameters );
int unur_hitro_set_variant_random_direction( UNUR_PAR *parameters );
int unur_hitro_set_use_adaptiveline( UNUR_PAR *parameters, int adaptive );
int unur_hitro_set_use_boundingrectangle( UNUR_PAR *parameters, int rectangle );
int unur_hitro_set_use_adaptiverectangle( UNUR_PAR *parameters, int adaptive );
int unur_hitro_set_r( UNUR_PAR *parameters, double r );
int unur_hitro_set_v( UNUR_PAR *parameters, double vmax );
int unur_hitro_set_u( UNUR_PAR *parameters, const double *umin, const double *umax );
int unur_hitro_set_adaptive_multiplier( UNUR_PAR *parameters, double factor );
int unur_hitro_set_startingpoint( UNUR_PAR *parameters, const double *x0 );
int unur_hitro_set_thinning( UNUR_PAR *parameters, int thinning );
int unur_hitro_set_burnin( UNUR_PAR *parameters, int burnin );
const double *unur_hitro_get_state( UNUR_GEN *generator );
int unur_hitro_chg_state( UNUR_GEN *generator, const double *state );
int unur_hitro_reset_state( UNUR_GEN *generator );
#define UNUR_STDGEN_DEFAULT   0        
#define UNUR_STDGEN_INVERSION (~0u)    
#define UNUR_STDGEN_FAST      (0)      
UNUR_PAR *unur_cstd_new( const UNUR_DISTR *distribution );
int unur_cstd_set_variant( UNUR_PAR *parameters, unsigned variant );
int unur_cstd_chg_truncated( UNUR_GEN *generator, double left, double right );
double unur_cstd_eval_invcdf( const UNUR_GEN *generator, double u );
UNUR_PAR *unur_dstd_new( const UNUR_DISTR *distribution );
int unur_dstd_set_variant( UNUR_PAR *parameters, unsigned variant );
int unur_dstd_chg_truncated( UNUR_GEN *generator, int left, int right );
int unur_dstd_eval_invcdf( const UNUR_GEN *generator, double u );
UNUR_PAR *unur_mvstd_new( const UNUR_DISTR *distribution );
UNUR_PAR *unur_mixt_new( int n, const double *prob, UNUR_GEN **comp );
int unur_mixt_set_useinversion( UNUR_PAR *parameters, int useinv );
double unur_mixt_eval_invcdf( const UNUR_GEN *generator, double u );
UNUR_PAR *unur_cext_new( const UNUR_DISTR *distribution );
int unur_cext_set_init( UNUR_PAR *parameters, int (*init)(UNUR_GEN *gen) );
int unur_cext_set_sample( UNUR_PAR *parameters, double (*sample)(UNUR_GEN *gen) );
void *unur_cext_get_params( UNUR_GEN *generator, size_t size );
double *unur_cext_get_distrparams( UNUR_GEN *generator );
int unur_cext_get_ndistrparams( UNUR_GEN *generator );
UNUR_PAR *unur_dext_new( const UNUR_DISTR *distribution );
int unur_dext_set_init( UNUR_PAR *parameters, int (*init)(UNUR_GEN *gen) );
int unur_dext_set_sample( UNUR_PAR *parameters, int (*sample)(UNUR_GEN *gen) );
void *unur_dext_get_params( UNUR_GEN *generator, size_t size );
double *unur_dext_get_distrparams( UNUR_GEN *generator );
int unur_dext_get_ndistrparams( UNUR_GEN *generator );
UNUR_PAR *unur_unif_new( const UNUR_DISTR *dummy );
#ifndef UNUR_DEPRECATED_DISTR_H_SEEN
#define UNUR_DEPRECATED_DISTR_H_SEEN
int unur_distr_cvec_set_stdmarginals( UNUR_DISTR *distribution, UNUR_DISTR *marginal );
int unur_distr_cvec_set_stdmarginal_array( UNUR_DISTR *distribution, UNUR_DISTR **marginals );
int unur_distr_cvec_set_stdmarginal_list( UNUR_DISTR *distribution, ... );
const UNUR_DISTR *unur_distr_cvec_get_stdmarginal( const UNUR_DISTR *distribution, int n );
#endif  
#ifndef UNUR_DEPRECATED_METHODS_H_SEEN
#define UNUR_DEPRECATED_METHODS_H_SEEN
int unur_cstd_chg_pdfparams( UNUR_GEN *generator, double *params, int n_params );
int unur_dari_reinit( UNUR_GEN *generator );
int unur_dari_chg_pmfparams( UNUR_GEN *generator, double *params, int n_params );
int unur_dari_chg_domain( UNUR_GEN *generator, int left, int right );
int unur_dari_chg_mode( UNUR_GEN *generator, int mode );
int unur_dari_upd_mode( UNUR_GEN *generator );
int unur_dari_chg_pmfsum( UNUR_GEN *generator, double sum );
int unur_dari_upd_pmfsum( UNUR_GEN *generator );
int unur_dsrou_reinit( UNUR_GEN *generator );
int unur_dsrou_chg_pmfparams( UNUR_GEN *generator, double *params, int n_params );
int unur_dsrou_chg_domain( UNUR_GEN *generator, int left, int right );
int unur_dsrou_chg_mode( UNUR_GEN *generator, int mode );
int unur_dsrou_upd_mode( UNUR_GEN *generator );
int unur_dsrou_chg_pmfsum( UNUR_GEN *generator, double sum );
int unur_dsrou_upd_pmfsum( UNUR_GEN *generator );
int unur_dstd_chg_pmfparams( UNUR_GEN *gen, double *params, int n_params );
int unur_ninv_chg_pdfparams(UNUR_GEN *generator, double *params, int n_params);
int unur_srou_reinit( UNUR_GEN *generator );
int unur_srou_chg_pdfparams( UNUR_GEN *generator, double *params, int n_params );
int unur_srou_chg_domain( UNUR_GEN *generator, double left, double right );
int unur_srou_chg_mode( UNUR_GEN *generator, double mode );
int unur_srou_upd_mode( UNUR_GEN *generator );
int unur_srou_chg_pdfarea( UNUR_GEN *generator, double area );
int unur_srou_upd_pdfarea( UNUR_GEN *generator );
int unur_ssr_reinit( UNUR_GEN *generator );
int unur_ssr_chg_pdfparams( UNUR_GEN *generator, double *params, int n_params );
int unur_ssr_chg_domain( UNUR_GEN *generator, double left, double right );
int unur_ssr_chg_mode( UNUR_GEN *generator, double mode );
int unur_ssr_upd_mode( UNUR_GEN *generator );
int unur_ssr_chg_pdfarea( UNUR_GEN *generator, double area );
int unur_ssr_upd_pdfarea( UNUR_GEN *generator );
int unur_tdr_reinit( UNUR_GEN *generator );
int unur_tdrgw_reinit( UNUR_GEN *generator );
int unur_utdr_reinit( UNUR_GEN *generator );
int unur_utdr_chg_pdfparams( UNUR_GEN *generator, double *params, int n_params );
int unur_utdr_chg_domain( UNUR_GEN *generator, double left, double right );
int unur_utdr_chg_mode( UNUR_GEN *generator, double mode );
int unur_utdr_upd_mode( UNUR_GEN *generator );
int unur_utdr_chg_pdfarea( UNUR_GEN *generator, double area );
int unur_utdr_upd_pdfarea( UNUR_GEN *generator );
#endif  
#define unur_tdrgw_new( distr ) \
   (unur_ars_new( distr ))
#define unur_tdrgw_set_max_intervals( par,max_ivs ) \
   (unur_ars_set_max_intervals( (par),(max_ivs) ))
#define unur_tdrgw_set_cpoints( par,n_cpoints,cpoints ) \
   (unur_ars_set_cpoints( (par),(n_cpoints),(cpoints) ))
#define unur_tdrgw_set_reinit_percentiles( par,n_percentiles,percentiles ) \
   (unur_ars_set_reinit_percentiles( (par),(n_percentiles),(percentiles) ))
#define unur_tdrgw_chg_reinit_percentiles( gen,n_percentiles,percentiles ) \
   (unur_ars_chg_reinit_percentiles( (gen),(n_percentiles),(percentiles) ))
#define unur_tdrgw_set_reinit_ncpoints( par,ncpoints ) \
   (unur_ars_set_reinit_ncpoints( (par),(ncpoints) ))
#define unur_tdrgw_chg_reinit_ncpoints( gen,ncpoints ) \
   (unur_ars_chg_reinit_ncpoints( (gen),(ncpoints) ))
#define unur_tdrgw_set_verify( par,verify ) \
   (unur_ars_set_verify( (par),(verify) ))
#define unur_tdrgw_chg_verify( gen,verify ) \
   (unur_ars_chg_verify( (gen),(verify) ))
#define unur_tdrgw_set_pedantic( par,pedantic ) \
   (unur_ars_set_pedantic( (par),(pedantic) ))
#define unur_tdrgw_get_loghatarea( gen ) \
   (unur_ars_get_loghatarea( gen ))
#define unur_tdrgw_eval_invcdfhat( gen,u ) \
   (unur_ars_eval_invcdfhat( (gen),(u) ))
UNUR_PAR *unur_vmt_new( const UNUR_DISTR *distribution );
UNUR_GEN *unur_str2gen( const char *string );
UNUR_DISTR *unur_str2distr( const char *string );
UNUR_GEN *unur_makegen_ssu( const char *distrstr, const char *methodstr, UNUR_URNG *urng );
UNUR_GEN *unur_makegen_dsu( const UNUR_DISTR *distribution, const char *methodstr, UNUR_URNG *urng );
UNUR_PAR *_unur_str2par( const UNUR_DISTR *distribution, const char *method, struct unur_slist **mlist );
UNUR_GEN *unur_init( UNUR_PAR *parameters );
int unur_reinit( UNUR_GEN *generator );
int    unur_sample_discr(UNUR_GEN *generator);
double unur_sample_cont(UNUR_GEN *generator);
int    unur_sample_vec(UNUR_GEN *generator, double *vector);
int    unur_sample_matr(UNUR_GEN *generator, double *matrix);
double unur_quantile ( UNUR_GEN *generator, double U );
void  unur_free( UNUR_GEN *generator );
const char *unur_gen_info( UNUR_GEN *generator, int help );
int unur_get_dimension( const UNUR_GEN *generator );
const char *unur_get_genid( const UNUR_GEN *generator );
UNUR_DISTR *unur_get_distr( const UNUR_GEN *generator );
int unur_set_use_distr_privatecopy( UNUR_PAR *parameters, int use_privatecopy );
UNUR_GEN *unur_gen_clone( const UNUR_GEN *gen );
void unur_par_free( UNUR_PAR *par);
#ifndef UNURAN_DISTRIBUTIONS_H_SEEN
#define UNURAN_DISTRIBUTIONS_H_SEEN
#ifndef UNUR_STDDISTR_H_SEEN
#define UNUR_STDDISTR_H_SEEN
#define UNUR_DISTR_STD         (0x00000001u)  
enum {
  UNUR_DISTR_GENERIC          = 0x00000000u,
  UNUR_DISTR_CORDER           = 0x00000010u,  
  UNUR_DISTR_CXTRANS          = 0x00000020u,  
  UNUR_DISTR_CONDI            = 0x00000030u,  
  UNUR_DISTR_BETA             = 0x00000101u,  
  UNUR_DISTR_CAUCHY           = 0x00000201u,  
  UNUR_DISTR_CHI              = 0x00000301u,  
  UNUR_DISTR_CHISQUARE        = 0x00000401u,  
  UNUR_DISTR_EPANECHNIKOV     = 0x00000501u,  
  UNUR_DISTR_EXPONENTIAL      = 0x00000601u,  
  UNUR_DISTR_EXTREME_I        = 0x00000701u,  
  UNUR_DISTR_EXTREME_II       = 0x00000801u,  
  UNUR_DISTR_F                = 0x00000901u,  
  UNUR_DISTR_GAMMA            = 0x00000a01u,  
  UNUR_DISTR_GHYP             = 0x00002401u,  
  UNUR_DISTR_GIG              = 0x00000b01u,  
  UNUR_DISTR_GIG2             = 0x00002201u,  
  UNUR_DISTR_HYPERBOLIC       = 0x00002301u,  
  UNUR_DISTR_IG               = 0x00002101u,  
  UNUR_DISTR_LAPLACE          = 0x00000c01u,  
  UNUR_DISTR_LOGISTIC         = 0x00000d01u,  
  UNUR_DISTR_LOGNORMAL        = 0x00000e01u,  
  UNUR_DISTR_LOMAX            = 0x00000f01u,  
  UNUR_DISTR_NORMAL           = 0x00001001u,  
   UNUR_DISTR_GAUSSIAN        = 0x00001001u,  
  UNUR_DISTR_PARETO           = 0x00001101u,  
  UNUR_DISTR_POWEREXPONENTIAL = 0x00001201u,  
  UNUR_DISTR_RAYLEIGH         = 0x00001301u,  
  UNUR_DISTR_SLASH            = 0x00001401u,  
  UNUR_DISTR_STUDENT          = 0x00001501u,  
  UNUR_DISTR_TRIANGULAR       = 0x00001601u,  
  UNUR_DISTR_UNIFORM          = 0x00002001u,  
   UNUR_DISTR_BOXCAR          = 0x00002001u,  
  UNUR_DISTR_WEIBULL          = 0x00001801u,  
  UNUR_DISTR_BURR_I           = 0x0000b001u,  
  UNUR_DISTR_BURR_II          = 0x0000b101u,  
  UNUR_DISTR_BURR_III         = 0x0000b201u,  
  UNUR_DISTR_BURR_IV          = 0x0000b301u,  
  UNUR_DISTR_BURR_V           = 0x0000b401u,  
  UNUR_DISTR_BURR_VI          = 0x0000b501u,  
  UNUR_DISTR_BURR_VII         = 0x0000b601u,  
  UNUR_DISTR_BURR_VIII        = 0x0000b701u,  
  UNUR_DISTR_BURR_IX          = 0x0000b801u,  
  UNUR_DISTR_BURR_X           = 0x0000b901u,  
  UNUR_DISTR_BURR_XI          = 0x0000ba01u,  
  UNUR_DISTR_BURR_XII         = 0x0000bb01u,  
  UNUR_DISTR_BINOMIAL         = 0x00010001u,  
  UNUR_DISTR_GEOMETRIC        = 0x00020001u,  
  UNUR_DISTR_HYPERGEOMETRIC   = 0x00030001u,  
  UNUR_DISTR_LOGARITHMIC      = 0x00040001u,  
  UNUR_DISTR_NEGATIVEBINOMIAL = 0x00050001u,  
  UNUR_DISTR_POISSON          = 0x00060001u,  
  UNUR_DISTR_ZIPF             = 0x00070001u,  
  UNUR_DISTR_MCAUCHY          = 0x01000001u,  
  UNUR_DISTR_MNORMAL          = 0x02000001u,  
  UNUR_DISTR_MSTUDENT         = 0x03000001u,  
  UNUR_DISTR_MEXPONENTIAL     = 0x04000001u,  
  UNUR_DISTR_COPULA           = 0x05000001u,  
  UNUR_DISTR_MCORRELATION     = 0x10000001u   
};
#endif  
UNUR_DISTR *unur_distr_beta(const double *params, int n_params);
UNUR_DISTR *unur_distr_burr(const double *params, int n_params);
UNUR_DISTR *unur_distr_cauchy(const double *params, int n_params);
UNUR_DISTR *unur_distr_chi(const double *params, int n_params);
UNUR_DISTR *unur_distr_chisquare(const double *params, int n_params);
UNUR_DISTR *unur_distr_exponential(const double *params, int n_params);
UNUR_DISTR *unur_distr_extremeI(const double *params, int n_params);
UNUR_DISTR *unur_distr_extremeII(const double *params, int n_params);
UNUR_DISTR *unur_distr_F(const double *params, int n_params);
UNUR_DISTR *unur_distr_gamma(const double *params, int n_params);
UNUR_DISTR *unur_distr_ghyp(const double *params, int n_params);
UNUR_DISTR *unur_distr_gig(const double *params, int n_params);
UNUR_DISTR *unur_distr_gig2(const double *params, int n_params);
UNUR_DISTR *unur_distr_hyperbolic(const double *params, int n_params);
UNUR_DISTR *unur_distr_ig(const double *params, int n_params);
UNUR_DISTR *unur_distr_laplace(const double *params, int n_params);
UNUR_DISTR *unur_distr_logistic(const double *params, int n_params);
UNUR_DISTR *unur_distr_lognormal(const double *params, int n_params);
UNUR_DISTR *unur_distr_lomax(const double *params, int n_params);
UNUR_DISTR *unur_distr_normal( const double *params, int n_params );
UNUR_DISTR *unur_distr_pareto( const double *params, int n_params );
UNUR_DISTR *unur_distr_powerexponential(const double *params, int n_params);
UNUR_DISTR *unur_distr_rayleigh(const double *params, int n_params);
UNUR_DISTR *unur_distr_slash(const double *params, int n_params);
UNUR_DISTR *unur_distr_student(const double *params, int n_params);
UNUR_DISTR *unur_distr_triangular(const double *params, int n_params);
UNUR_DISTR *unur_distr_uniform(const double *params, int n_params);
UNUR_DISTR *unur_distr_weibull(const double *params, int n_params);
UNUR_DISTR *unur_distr_multinormal(int dim, const double *mean, const double *covar);
UNUR_DISTR *unur_distr_multicauchy(int dim, const double *mean, const double *covar);
UNUR_DISTR *unur_distr_multistudent(int dim, double nu, const double *mean, const double *covar);
UNUR_DISTR *unur_distr_multiexponential(int dim, const double *sigma, const double *theta);
UNUR_DISTR *unur_distr_copula(int dim, const double *rankcorr);
UNUR_DISTR *unur_distr_correlation( int n );
UNUR_DISTR *unur_distr_binomial(const double *params, int n_params);
UNUR_DISTR *unur_distr_geometric(const double *params, int n_params);
UNUR_DISTR *unur_distr_hypergeometric(const double *params, int n_params);
UNUR_DISTR *unur_distr_logarithmic(const double *params, int n_params);
UNUR_DISTR *unur_distr_negativebinomial(const double *params, int n_params);
UNUR_DISTR *unur_distr_poisson(const double *params, int n_params);
UNUR_DISTR *unur_distr_zipf(const double *params, int n_params);
#endif  
FILE *unur_set_stream( FILE *new_stream );
FILE *unur_get_stream( void );
#ifndef DEBUG_H_SEEN
#define DEBUG_H_SEEN
#define UNUR_DEBUG_OFF     (0u)           
#define UNUR_DEBUG_ALL     (~0u)      
#define UNUR_DEBUG_INIT    0x00000001u    
#define UNUR_DEBUG_SETUP   0x00000fffu    
#define UNUR_DEBUG_ADAPT   0x00fff000u    
#define UNUR_DEBUG_SAMPLE  0xff000000u    
int unur_set_debug( UNUR_PAR *parameters, unsigned debug );
int unur_chg_debug( UNUR_GEN *generator, unsigned debug );
int unur_set_default_debug( unsigned debug );
#endif 
extern int unur_errno;
int unur_get_errno ( void );
void unur_reset_errno ( void );
const char *unur_get_strerror ( const int errnocode );
UNUR_ERROR_HANDLER *unur_set_error_handler( UNUR_ERROR_HANDLER *new_handler );
UNUR_ERROR_HANDLER *unur_set_error_handler_off( void );
#ifndef UNUR_ERRNO_H_SEEN
#define UNUR_ERRNO_H_SEEN
enum { 
  UNUR_SUCCESS            = 0x00,                               
  UNUR_FAILURE            = 0x01,     
  UNUR_ERR_DISTR_SET      = 0x11,     
  UNUR_ERR_DISTR_GET      = 0x12,     
  UNUR_ERR_DISTR_NPARAMS  = 0x13,     
  UNUR_ERR_DISTR_DOMAIN   = 0x14,     
  UNUR_ERR_DISTR_GEN      = 0x15,     
  UNUR_ERR_DISTR_REQUIRED = 0x16,     
  UNUR_ERR_DISTR_UNKNOWN  = 0x17,     
  UNUR_ERR_DISTR_INVALID  = 0x18,     
  UNUR_ERR_DISTR_DATA     = 0x19,     
  UNUR_ERR_DISTR_PROP     = 0x20,     
  UNUR_ERR_PAR_SET        = 0x21,     
  UNUR_ERR_PAR_VARIANT    = 0x22,     
  UNUR_ERR_PAR_INVALID    = 0x23,     
  UNUR_ERR_GEN            = 0x31,     
  UNUR_ERR_GEN_DATA       = 0x32,     
  UNUR_ERR_GEN_CONDITION  = 0x33,     
  UNUR_ERR_GEN_INVALID    = 0x34,     
  UNUR_ERR_GEN_SAMPLING   = 0x35,     
  UNUR_ERR_NO_REINIT      = 0x36,     
  UNUR_ERR_NO_QUANTILE    = 0x37,     
  UNUR_ERR_URNG           = 0x41,     
  UNUR_ERR_URNG_MISS      = 0x42,     
  UNUR_ERR_STR            = 0x51,     
  UNUR_ERR_STR_UNKNOWN    = 0x52,     
  UNUR_ERR_STR_SYNTAX     = 0x53,     
  UNUR_ERR_STR_INVALID    = 0x54,     
  UNUR_ERR_FSTR_SYNTAX    = 0x55,     
  UNUR_ERR_FSTR_DERIV     = 0x56,     
  UNUR_ERR_DOMAIN         = 0x61,     
  UNUR_ERR_ROUNDOFF       = 0x62,     
  UNUR_ERR_MALLOC         = 0x63,     
  UNUR_ERR_NULL           = 0x64,      
  UNUR_ERR_COOKIE         = 0x65,     
  UNUR_ERR_GENERIC        = 0x66,     
  UNUR_ERR_SILENT         = 0x67,     
  UNUR_ERR_INF            = 0x68,     
  UNUR_ERR_NAN            = 0x69,     
  UNUR_ERR_COMPILE        = 0xa0,     
  UNUR_ERR_SHOULD_NOT_HAPPEN = 0xf0  
};
#endif  
#ifndef MATH_H_SEEN
#define MATH_H_SEEN
#include <math.h>
#ifndef INFINITY
#  ifdef HUGE_VAL
#    define INFINITY  (HUGE_VAL)
#  else
extern const double INFINITY;
#  endif
#endif
#define UNUR_INFINITY  (INFINITY)
#ifndef TRUE
#define TRUE   (1)
#endif
#ifndef FALSE
#define FALSE  (0)
#endif
#endif  
#ifndef SLIST_H_SEEN
#define SLIST_H_SEEN
struct unur_slist *_unur_slist_new( void );
int _unur_slist_append( struct unur_slist *slist, void *element );
int _unur_slist_length( const struct unur_slist *slist );
void *_unur_slist_get( const struct unur_slist *slist, int n );
void *_unur_slist_replace( struct unur_slist *slist, int n, void *element );
void _unur_slist_free( struct unur_slist *slist );
#endif  
#ifndef TRUE
#define TRUE   (1)
#endif
#ifndef FALSE
#define FALSE  (0)
#endif
#endif  
__END_DECLS