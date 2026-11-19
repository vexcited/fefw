#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_1f88920;
__int64 physx_source_geomutils_src_40a710(__int64 a1, __int64 a2);

__int64 physx_source_geomutils_src_40a710(__int64 a1, __int64 a2)
{
  return ((__int64 (*)(__int64, __int64)) *
          (&GameData_1f88920 + *(int*)(a1 + 8)))(a2, a1 + 12);
}

#pragma GCC visibility pop
