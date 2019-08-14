/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#include <unur_source.h>
#include <urng/urng.h>
#include "urng_fvoid.h"
#include "urng_builtin.h"
UNUR_URNG *unur_urng_builtin( void )
{
  UNUR_URNG *urng;
  urng = unur_urng_fvoid_new(unur_urng_MRG31k3p, unur_urng_MRG31k3p_reset);
  unur_urng_set_seed(urng, unur_urng_MRG31k3p_seed);
  return urng;
} 
UNUR_URNG *unur_urng_builtin_aux( void )
{
  UNUR_URNG *urng;
  urng = unur_urng_fvoid_new(unur_urng_fish, unur_urng_fish_reset);
  unur_urng_set_seed(urng, unur_urng_fish_seed);
  return urng;
} 
