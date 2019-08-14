/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#ifndef UNURAN_CONFIG_H_SEEN
#define UNURAN_CONFIG_H_SEEN
#define UNUR_LOG_FILE "unuran.log"
#define UNUR_DEBUGFLAG_DEFAULT   UNUR_DEBUG_INIT
#define UNUR_DISTR_MAXPARAMS  5
#define UNUR_MAX_AUTO_PV    100000
#ifdef UNUR_URNG_DEFAULT_RNGSTREAM
#  define UNUR_URNG_DEFAULT      (unur_urng_rngstream_new("URNG_main"))
#  define UNUR_URNG_AUX_DEFAULT  (unur_urng_rngstream_new("URNG_aux"))
#else
#  define UNUR_URNG_DEFAULT      (unur_urng_builtin())
#  define UNUR_URNG_AUX_DEFAULT  (unur_urng_builtin_aux())
#endif
#endif  
