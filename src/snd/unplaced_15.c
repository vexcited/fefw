#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212e240;
extern __int64* GameData_212e238;
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void __attribute__((noreturn)) snd_14a0d0();
__int64* snd_14a0e0();
void __attribute__((noreturn)) snd_14a0d0() { __udf(0x8002u); }

__int64* snd_14a0e0()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212e240,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_212e238;
  }
  if (__cxa_guard_acquire((__int64)GameData_212e240) != 0) {
    *GameData_212e238 = 0;
    __cxa_guard_release((__int64)GameData_212e240);
  }
  return GameData_212e238;
}

#pragma GCC visibility pop
