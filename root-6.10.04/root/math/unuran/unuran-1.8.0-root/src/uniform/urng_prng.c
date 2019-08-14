/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#include <unur_source.h>
#if defined(UNURAN_HAS_PRNG) && defined(UNUR_URNG_UNURAN)
#include <urng/urng.h>
#include "urng_prng.h"
UNUR_URNG *
unur_urng_prngptr_new( struct prng *prng )
{
  UNUR_URNG *urng;
  if (prng==NULL) {
    _unur_error("URNG",UNUR_ERR_NULL,"Cannot create PRNG object");
    return NULL;
  }
  urng = unur_urng_new( (double(*)(void*)) prng->get_next, prng );
  unur_urng_set_reset(urng, (void(*)(void*)) prng->reset);
  unur_urng_set_delete(urng, (void(*)(void*)) prng->destroy);
  if (prng_can_seed(prng)) {
    unur_urng_set_seed(urng, (void(*)(void*,unsigned long))prng->seed);
  }
  return urng;
} 
UNUR_URNG *
unur_urng_prng_new( const char *prngstr )
{
  struct prng *prng = prng_new(prngstr);
  if (prng==NULL) {
    _unur_error("URNG",UNUR_ERR_NULL,"Cannot create PRNG object for given string");
    return NULL;
  }
  return unur_urng_prngptr_new (prng);
} 
#endif   
