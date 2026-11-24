#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_38e2a0(__int64 result, unsigned int, __int64*);
__int64 physx_source_38e240(__int64 a1, __int64 a2, unsigned int a3);

__int64 physx_source_38e240(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64* v4;
  __int64 result;
  unsigned __int64 v7;
  __int64 v8;

  v4 = (__int64*)(a1 + 1136);
  *(_DWORD*)(a1 + 1144) = 0;
  v8 = 0;
  result = GameRoutine_38e2a0(a1 + 1136, a3, &v8);
  v7 = 8 * a3;
  if ((_DWORD)v7 != 0) {
    return GameRoutine_1a0b950(*v4, a2, v7);
  }
  return result;
}

#pragma GCC visibility pop
