#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fs_bis_api_d79c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6);

__int64 fs_bis_api_d79c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v9;
  _QWORD v10[10];

  if (a4 == 2) {
    v10[8] = v6;
    v10[9] = v7;
    v9 = *(_QWORD*)(a1 + 8);
    memset(v10, 0, 64);
    return (*(__int64 (**)(__int64, _QWORD*, __int64, __int64, __int64))(
        *(_QWORD*)v9 + 72LL))(v9, v10, 2, a5, a6);
  }
  else if (a4 == 3) {
    if (a2 != 0) {
      if (a3 == 64) {
        return (*(__int64 (**)(_QWORD, __int64, __int64, __int64, __int64))(
            **(_QWORD**)(a1 + 8) + 72LL))(*(_QWORD*)(a1 + 8), a2, 3, a5, a6);
      }
      else {
        return 3103746;
      }
    }
    else {
      return 3104258;
    }
  }
  else {
    return 3230210;
  }
}

#pragma GCC visibility pop
