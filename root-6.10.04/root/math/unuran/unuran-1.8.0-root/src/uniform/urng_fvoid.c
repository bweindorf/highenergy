/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#include <unur_source.h>
#if defined(UNUR_URNG_UNURAN)
#include <urng/urng.h>
#include "urng_fvoid.h"
UNUR_URNG *
unur_urng_fvoid_new( double (*urand)(void *state), void (*reset)(void *state) )
{
  UNUR_URNG *urng = unur_urng_new( urand, NULL );
  unur_urng_set_reset( urng, reset );
  return urng;
} 
#endif   
