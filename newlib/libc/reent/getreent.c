/* default reentrant pointer when multithread enabled */

#ifdef GETREENT_PROVIDED

int _dummy_getreent;

#else

#include <_ansi.h>
#include <reent.h>

#ifdef __getreent
#undef __getreent
#endif

struct _reent *
_DEFUN_VOID(__getreent)
{
  return _impure_ptr;
}

#endif
