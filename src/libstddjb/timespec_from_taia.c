/* ISC license. */

#include <sys/types.h>
#include <time.h>
#include "tai.h"

int timespec_from_taia (struct timespec *ts, struct taia const *a)
{
  struct timespec tmp ;
  if (!timespec_from_tai(&tmp, taia_secp(a))) return 0 ;
  ts->tv_sec = tmp.tv_sec ;
  ts->tv_nsec = a->nano ;
  return 1 ;
}
