/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#include <unur_source.h>
#if defined(UNURAN_HAS_RNGSTREAM) && defined(UNUR_URNG_UNURAN)
#include <urng/urng.h>
#include "urng_rngstreams.h"
static void _unur_urng_rngstream_delete( RngStream rngstream );
UNUR_URNG *
unur_urng_rngstreamptr_new( RngStream rngstream )
{
  UNUR_URNG *urng;
  if (rngstream == NULL) {
    _unur_error("URNG",UNUR_ERR_NULL,"Cannot create RNGSTREAM object");
    return NULL;
  }
  urng = unur_urng_new( (double(*)(void*)) RngStream_RandU01, rngstream );
  unur_urng_set_reset    (urng, (void(*)(void*)) RngStream_ResetStartStream);
  unur_urng_set_delete   (urng, (void(*)(void*)) _unur_urng_rngstream_delete);
  unur_urng_set_anti     (urng, (void(*)(void*,int)) RngStream_SetAntithetic);
  unur_urng_set_nextsub  (urng, (void(*)(void*)) RngStream_ResetNextSubstream);
  unur_urng_set_resetsub (urng, (void(*)(void*)) RngStream_ResetStartSubstream);
  return urng;
} 
UNUR_URNG *
unur_urng_rngstream_new( const char *urngstr )
{
  return unur_urng_rngstreamptr_new(RngStream_CreateStream(urngstr));
} 
void
_unur_urng_rngstream_delete( RngStream rngstream )
{
  RngStream_DeleteStream(&rngstream);
} 
#endif 
