/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#include <unur_source.h>
#if defined(UNUR_URNG_UNURAN)
#include <urng/urng.h>
#include "urng_randomshift.h"
struct unur_urng_randomshift {
  UNUR_URNG *qrng;   
  UNUR_URNG *srng;   
  double *shift;     
  double *X;         
  int dim;           
  int n;             
};
static double _unur_urng_randomshift_sample( struct unur_urng_randomshift *rs );
static int _unur_urng_randomshift_sample_array( struct unur_urng_randomshift *rs, double *X, int dim );
static void _unur_urng_randomshift_free( struct unur_urng_randomshift *rs );
static void _unur_urng_randomshift_reset( struct unur_urng_randomshift *rs );
static void _unur_urng_randomshift_nextpoint( struct unur_urng_randomshift *rs );
double
_unur_urng_randomshift_sample( struct unur_urng_randomshift *rs )
{
  int i;
  int n = rs->n;
  double *X = rs->X;
  if (n==0) {
    unur_urng_sample_array(rs->qrng,X,rs->dim);
    for (i=0; i<rs->dim; i++) {
      X[i] += rs->shift[i];
      if (X[i] >= 1.) X[i] -= 1.;
      if (X[i] < 0.) X[i] += 1.;
    }
  }
  rs->n = (n+1) % rs->dim;
  return X[n];
} 
int
_unur_urng_randomshift_sample_array( struct unur_urng_randomshift *rs, double *X, int dim )
{
  int i;
  if (dim > rs->dim) dim = rs->dim;
  if (dim == rs->dim) {
    unur_urng_sample_array(rs->qrng,X,dim); }
  else {  
    unur_urng_sample_array(rs->qrng,rs->X,dim);
    memcpy( X, rs->X, dim*sizeof(double) );
  }
  for (i=0; i<dim; i++) {
    X[i] += rs->shift[i];
    if (X[i] >= 1.) X[i] -= 1.;
    if (X[i] < 0.) X[i] += 1.;
  }
  return dim;
} 
void
_unur_urng_randomshift_free( struct unur_urng_randomshift *rs )
{
  if (rs) {
    free( rs->shift );
    free( rs->X );
    free( rs );
  }
} 
void
_unur_urng_randomshift_reset( struct unur_urng_randomshift *rs )
{
  unur_urng_reset( rs->qrng );
  unur_urng_reset( rs->srng );
  rs->n = 0u;
} 
void
_unur_urng_randomshift_nextpoint( struct unur_urng_randomshift *rs )
{
  rs->n = 0u;
} 
UNUR_URNG *
unur_urng_randomshift_new( UNUR_URNG *qrng, UNUR_URNG *srng, int dim )
{
  struct unur_urng_randomshift *rs;
  UNUR_URNG *urng;
  _unur_check_NULL( "URNG", qrng, NULL );  COOKIE_CHECK(qrng,CK_URNG,NULL);
  _unur_check_NULL( "URNG", srng, NULL );  COOKIE_CHECK(srng,CK_URNG,NULL);
  rs = _unur_xmalloc( sizeof(struct unur_urng_randomshift) );
  rs->shift = _unur_xmalloc( dim * sizeof(double) );
  rs->X = _unur_xmalloc( dim * sizeof(double) );
  rs->qrng = qrng;
  rs->srng = srng;
  rs->dim = dim;
  rs->n = 0u;
  urng = unur_urng_new ( (double(*)(void*)) _unur_urng_randomshift_sample, rs );
  unur_urng_set_sample_array (urng, (unsigned int(*)(void*,double*,int)) _unur_urng_randomshift_sample_array);
  unur_urng_set_delete (urng, (void(*)(void*)) _unur_urng_randomshift_free);
  unur_urng_set_reset (urng, (void(*)(void*)) _unur_urng_randomshift_reset);
  unur_urng_set_sync (urng, (void(*)(void*)) _unur_urng_randomshift_nextpoint);
  unur_urng_sample_array(rs->srng,rs->shift,rs->dim);
  return urng;
} 
int
unur_urng_randomshift_nextshift( UNUR_URNG *urng )
{
  struct unur_urng_randomshift *rs = urng->state;
  unur_urng_sample_array(rs->srng,rs->shift,rs->dim);
  unur_urng_reset( rs->qrng );
  rs->n = 0u;
  return UNUR_SUCCESS;
} 
#endif   
