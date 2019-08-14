/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#include <unur_source.h>
#if defined(UNURAN_HAS_GSL) && defined(UNUR_URNG_UNURAN)
#include <urng/urng.h>
#include "urng_gslqrng.h"
struct unur_urng_gslqrng {
  gsl_qrng *qrng;    
  double *X;         
  unsigned dim;      
  unsigned n;         
};
static UNUR_URNG *_unur_urng_gslqrngptr_new( gsl_qrng *qrngptr, unsigned int dim );
static double _unur_urng_gslqrng_sample( struct unur_urng_gslqrng *qrng );
static int _unur_urng_gslqrng_sample_array( struct unur_urng_gslqrng *qrng, double *X, unsigned dim );
static void _unur_urng_gslqrng_free( struct unur_urng_gslqrng *qrng );
static void _unur_urng_gslqrng_reset( struct unur_urng_gslqrng *qrng );
static void _unur_urng_gslqrng_nextpoint( struct unur_urng_gslqrng *qrng );
double
_unur_urng_gslqrng_sample( struct unur_urng_gslqrng *qrng )
{
  int n = qrng->n;
  if (n==0)
    gsl_qrng_get( qrng->qrng, qrng->X );
  qrng->n = (n+1) % qrng->dim;
  return qrng->X[n];
} 
int
_unur_urng_gslqrng_sample_array( struct unur_urng_gslqrng *qrng, double *X, unsigned dim )
{
  if (dim < qrng->dim) {
    gsl_qrng_get( qrng->qrng, qrng->X );
    memcpy( X, qrng->X, dim*sizeof(double) );
    return dim;
  }
  else {
    gsl_qrng_get( qrng->qrng, X );
    return qrng->dim;
  }
} 
void
_unur_urng_gslqrng_free( struct unur_urng_gslqrng *qrng )
{
  if (qrng) {
    gsl_qrng_free( qrng->qrng );
    free( qrng->X );
    free (qrng);
  }
} 
void
_unur_urng_gslqrng_reset( struct unur_urng_gslqrng *qrng )
{
  gsl_qrng_init( qrng->qrng );
  qrng->n = 0u;
} 
void
_unur_urng_gslqrng_nextpoint( struct unur_urng_gslqrng *qrng )
{
  qrng->n = 0u;
} 
UNUR_URNG *
_unur_urng_gslqrngptr_new( gsl_qrng *qrngptr, unsigned int dim )
{
  struct unur_urng_gslqrng *qrng;
  UNUR_URNG *urng;
  if (qrngptr == NULL) {
    _unur_error("URNG",UNUR_ERR_NULL,"Cannot create GSL-QRNG object");
    return NULL;
  }
  qrng = _unur_xmalloc( sizeof(struct unur_urng_gslqrng) );
  qrng->X = _unur_xmalloc( dim * sizeof(double) );
  qrng->qrng = qrngptr;
  qrng->dim = dim;
  qrng->n = 0u;
  urng = unur_urng_new ( (double(*)(void*)) _unur_urng_gslqrng_sample, qrng );
  unur_urng_set_sample_array (urng, (unsigned int(*)(void*,double*,int)) _unur_urng_gslqrng_sample_array);
  unur_urng_set_delete (urng, (void(*)(void*)) _unur_urng_gslqrng_free);
  unur_urng_set_reset (urng, (void(*)(void*)) _unur_urng_gslqrng_reset);
  unur_urng_set_sync (urng, (void(*)(void*)) _unur_urng_gslqrng_nextpoint);
  return urng;
} 
UNUR_URNG *
unur_urng_gslqrng_new( const gsl_qrng_type *qrngtype, unsigned int dim )
{
  if (dim == 0u) {
    _unur_error("URNG",UNUR_ERR_GENERIC,"Cannot create GSL-QRNG object for dimension 0");
    return NULL;
  }
  return _unur_urng_gslqrngptr_new( gsl_qrng_alloc(qrngtype, dim), dim );
} 
#endif   
