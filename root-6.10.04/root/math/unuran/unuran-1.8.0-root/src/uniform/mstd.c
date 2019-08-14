/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#include <unur_source.h>
#include "urng_builtin.h"
#define SEED  (1804289L)
static unsigned long x = SEED;
static unsigned long x_start = SEED; 
double
unur_urng_mstd (void *dummy ATTRIBUTE__UNUSED)
{
# define a 16807       
# define m 2147483647  
# define q 127773      
# define r 2836        
  int hi, lo, test;   
  hi = x / q;
  lo = x % q;
  test = a * lo - r * hi;
  x = (test > 0 ) ? test : test + m;
  return (x * 4.656612875245796924105750827e-10);
} 
void
unur_urng_mstd_seed (void *dummy ATTRIBUTE__UNUSED, unsigned long seed)
{
  if (seed==0) {
    _unur_error("URNG.mstd",UNUR_ERR_GENERIC,"seed = 0");
    return;
  }
  x = x_start = seed;
} 
void
unur_urng_mstd_reset (void *dummy ATTRIBUTE__UNUSED)
{
  x = x_start;
} 
