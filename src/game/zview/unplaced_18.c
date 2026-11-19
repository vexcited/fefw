#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterController_d15100(float*, char);
float Unit_6c7fa0(__int64, __int64);
unsigned __int64 game_zview_d12690(__int64 a1);

unsigned __int64 game_zview_d12690(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  float v6;
  __int128 v7;
  unsigned int v8;
  unsigned int v10;
  unsigned int v11;
  __int128 v12;

  v2 = *(_QWORD*)(a1 + 448);
  if (v2 != 0) {
    CharacterController_d15100(*(float**)(a1 + 448), 0);
    v3 = *(_DWORD*)(v2 + 8);
    v1 = *(unsigned int*)(v2 + 12);
  }
  else {
    v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 168LL);
    if (v4 == 0) {
      LOBYTE(v3) = 0;
      v8 = 0;
      return v8 | (unsigned __int8)v3 | (unsigned __int64)(v1 << 32);
    }
    v5 = *(_DWORD*)(v4 + 592);
    v6 = (float)(unsigned int)(v5 - 1) * 0x1.4000000000000p+1f;
    if (v5 <= 0) {
      v6 = 0x0.0p+0f;
    }
    *(float*)&v10 =
        (float)((float)((float)((float)(unsigned int)(*(char*)(v4 + 585) +
                                                      256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f) +
        v6;
    *(float*)&v11 =
        (float)((float)((float)((float)(unsigned int)(*(char*)(v4 + 584) +
                                                      256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f) +
        v6;
    *(_QWORD*)&v7 = v11;
    *((_QWORD*)&v7 + 1) = v10;
    v12 = v7;
    Unit_6c7fa0(v4, (__int64)&v12);
    v3 = v11;
    v1 = v10;
  }
  v8 = v3 & 0xFFFFFF00;
  return v8 | (unsigned __int8)v3 | (unsigned __int64)(v1 << 32);
}

#pragma GCC visibility pop
