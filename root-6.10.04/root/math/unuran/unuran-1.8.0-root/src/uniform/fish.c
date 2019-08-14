/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#include <unur_source.h>
#include "urng_builtin.h"
#define SEED  (12345L)
static unsigned long x = SEED;
static unsigned long x_start = SEED; 
double
unur_urng_fish (void *dummy ATTRIBUTE__UNUSED)
{
# define A   742938285
# define AHI (A>>15)
# define ALO (A&0x7FFF)
  unsigned long xhi, xlo, mid;   
  xhi = x>>16;
  xlo = x&0xFFFF;
  mid = AHI*xlo + (ALO<<1)*xhi;
  x   = AHI*xhi + (mid>>16) + ALO*xlo;
  if (x&0x80000000) x -= 0x7FFFFFFF;
  x += ((mid&0xFFFF)<<15);
  if (x&0x80000000) x -= 0x7FFFFFFF;
  return (x*4.656612875245797e-10);
} 
void
unur_urng_fish_seed (void *dummy ATTRIBUTE__UNUSED, unsigned long seed)
{
  if (seed==0) {
    _unur_error("URNG.fish",UNUR_ERR_GENERIC,"seed = 0");
    return;
  }
  x_start = seed;
  x = seed;
} 
void
unur_urng_fish_reset (void *dummy ATTRIBUTE__UNUSED)
{
  x = x_start;
} 
