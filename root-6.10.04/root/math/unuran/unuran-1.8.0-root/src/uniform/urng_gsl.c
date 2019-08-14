/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#include <unur_source.h>
#if defined(UNURAN_HAS_GSL) && defined(UNUR_URNG_UNURAN)
#include <urng/urng.h>
#include "urng_gsl.h"
UNUR_URNG *
unur_urng_gslptr_new( gsl_rng *gsl )
{
  UNUR_URNG *urng;
  if (gsl == NULL) {
    _unur_error("URNG",UNUR_ERR_NULL,"Cannot create GSL object");
    return NULL;
  }
  urng = unur_urng_new( (double(*)(void*)) gsl_rng_uniform_pos, gsl );
  unur_urng_set_delete(urng, (void(*)(void*)) gsl_rng_free);
  unur_urng_set_seed(urng, (void(*)(void*,unsigned long)) gsl_rng_set);
  return urng;
} 
UNUR_URNG *
unur_urng_gsl_new( const gsl_rng_type *urngtype )
{
  UNUR_URNG *urng = unur_urng_gslptr_new(gsl_rng_alloc(urngtype));
  unur_urng_seed(urng,gsl_rng_default_seed);
  return urng;
} 
#endif   
