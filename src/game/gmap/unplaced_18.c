#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14b4cf0(__int64, unsigned int, __int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
extern _UNKNOWN GameData_1b45704;
extern __int64* GameData_212c790;
__int64 game_gmap_888560(__int64 a1);

__int64 game_gmap_888560(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64**)(v2 + 8);
  v4 = *(__int64**)(v2 + 16);
  while (v3 != v4) {
    v5 = *v3++;
    UnitActor_81a540(v5 + 112, 0x723D4B8u, (__int64)&GameData_1b45704);
  }
  return GameRoutine_14b4cf0(a1, 2u, a1 + 152);
}

#pragma GCC visibility pop
