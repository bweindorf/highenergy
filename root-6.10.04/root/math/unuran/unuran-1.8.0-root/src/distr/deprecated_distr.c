/* Copyright (c) 2000-2010 Wolfgang Hoermann and Josef Leydold */
/* Department of Statistics and Mathematics, WU Wien, Austria  */

#include <unur_source.h>
#include <stdarg.h>
#include <distr/distr_source.h>
#include <distr/distr.h>
#include "deprecated_distr.h"
#ifdef USE_DEPRECATED_CODE
static void _unur_distr_cvec_marginals_free ( struct unur_distr **marginals, int dim );
#define DISTR distr->data.cvec
int
unur_distr_cvec_set_stdmarginals ( struct unur_distr *distr, struct unur_distr *stdmarginal)
{
  struct unur_distr *clone;
  int i;
  _unur_check_NULL( NULL, distr, UNUR_ERR_NULL );
  _unur_check_distr_object( distr, CVEC, UNUR_ERR_DISTR_INVALID );
  _unur_check_NULL( distr->name, stdmarginal, UNUR_ERR_NULL );
  _unur_check_distr_object( stdmarginal, CONT, UNUR_ERR_DISTR_INVALID );
  if (DISTR.stdmarginals)
    _unur_distr_cvec_marginals_free(DISTR.stdmarginals, distr->dim);
  clone = _unur_distr_clone( stdmarginal );
  DISTR.stdmarginals = _unur_xmalloc (distr->dim * sizeof(struct unur_distr *));
  for (i=0; i<distr->dim; i++)
    DISTR.stdmarginals[i] = clone;
  distr->set |= UNUR_DISTR_SET_STDMARGINAL;
  return UNUR_SUCCESS;
} 
int
unur_distr_cvec_set_stdmarginal_array ( struct unur_distr *distr, struct unur_distr **stdmarginals)
{
  int i;
  _unur_check_NULL( NULL, distr, UNUR_ERR_NULL );
  _unur_check_distr_object( distr, CVEC, UNUR_ERR_DISTR_INVALID );
  _unur_check_NULL( distr->name, stdmarginals, UNUR_ERR_NULL );
  for (i=0; i<distr->dim; i++) {
    _unur_check_NULL( distr->name, *(stdmarginals+i), UNUR_ERR_NULL );
    _unur_check_distr_object( *(stdmarginals+i), CONT, UNUR_ERR_DISTR_INVALID );
  }
  if (DISTR.stdmarginals)
    _unur_distr_cvec_marginals_free(DISTR.stdmarginals, distr->dim);
  DISTR.stdmarginals = _unur_xmalloc (distr->dim * sizeof(struct unur_distr *));
  for (i=0; i<distr->dim; i++) 
    DISTR.stdmarginals[i] = _unur_distr_clone( *(stdmarginals+i) );
  distr->set |= UNUR_DISTR_SET_STDMARGINAL;
  return UNUR_SUCCESS;
} 
int
unur_distr_cvec_set_stdmarginal_list ( struct unur_distr *distr, ... )
{
  int i;
  int failed = FALSE;
  struct unur_distr *stdmarginal;
  struct unur_distr **stdmarginal_list;
  va_list vargs;
  _unur_check_NULL( NULL, distr, UNUR_ERR_NULL );
  _unur_check_distr_object( distr, CVEC, UNUR_ERR_DISTR_INVALID );
  stdmarginal_list = _unur_xmalloc (distr->dim * sizeof(struct unur_distr *));
  for (i=0; i<distr->dim; i++) stdmarginal_list[i] = NULL;
  va_start(vargs, distr);
  for (i=0; i<distr->dim; i++) {
    stdmarginal = (struct unur_distr *) va_arg(vargs, struct unur_distr *);
    if (stdmarginal) {
      stdmarginal_list[i] = _unur_distr_clone( stdmarginal );
      _unur_distr_free(stdmarginal);
    }
    else {
      failed = TRUE;
    }
  }
  va_end(vargs);
  if (failed) {
    _unur_distr_cvec_marginals_free(stdmarginal_list, distr->dim);
    _unur_error(distr->name ,UNUR_ERR_DISTR_SET,"stdmarginals == NULL");
    return UNUR_ERR_DISTR_SET;
  }
  if (DISTR.stdmarginals)
    _unur_distr_cvec_marginals_free(DISTR.stdmarginals, distr->dim);
  DISTR.stdmarginals = stdmarginal_list;
  distr->set |= UNUR_DISTR_SET_STDMARGINAL;
  return UNUR_SUCCESS;
} 
const struct unur_distr *
unur_distr_cvec_get_stdmarginal( const struct unur_distr *distr, int n )
{
  _unur_check_NULL( NULL, distr, NULL );
  _unur_check_distr_object( distr, CVEC, NULL );
  if (n<=0 || n > distr->dim) {
    _unur_error(distr->name,UNUR_ERR_DISTR_GET,"n not in 1 .. dim");
    return NULL;
  }
  if ( !(distr->set & UNUR_DISTR_SET_STDMARGINAL) ) {
    _unur_warning(distr->name,UNUR_ERR_DISTR_GET,"std marginals");
    return NULL;
  }
  _unur_check_NULL( distr->name, DISTR.stdmarginals, NULL );
  return (DISTR.stdmarginals[n-1]);
} 
void
_unur_distr_cvec_marginals_free ( struct unur_distr **marginals, int dim )
{
  int i;
  if (_unur_distr_cvec_marginals_are_equal(marginals,dim)) {
    _unur_distr_free(marginals[0]);
  }
  else {
    for (i=0; i<dim; i++) 
      if (marginals[i]) _unur_distr_free(marginals[i]);
  }
  free (marginals);
} 
#undef DISTR
#endif   
