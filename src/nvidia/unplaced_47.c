#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
_DWORD* NgxRoutine_36f0(_DWORD* result, unsigned int*, unsigned int);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
_DWORD* nvidia_4900(__int64 a1);
_DWORD* nvidia_4f00(__int64 a1);
_DWORD* nvidia_5380(__int64 a1);
_DWORD* nvidia_62e0(__int64 a1);
__int64 nvidia_28a20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     char a6);
__int64 nvidia_28a20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     char a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  struct {
    _QWORD v25[2];
    char* v26;
  } v25_;

  v6 = a1;
  if (a1 != 0) {
    v7 = *(_QWORD*)(a5 + 24);
    if (a3 - a2 >= 1 && (*(__int64 (**)(__int64, __int64, __int64))(
                            *(_QWORD*)a1 + 96LL))(a1, a2, a3 - a2) != a3 - a2) {
      return 0;
    }
    v13 = a4 - a2;
    if (v7 <= a4 - a2) {
    LABEL_22:
      v23 = a4 - a3;
      if (v23 < 1 || (*(__int64 (**)(__int64, __int64, __int64))(
                         *(_QWORD*)v6 + 96LL))(v6, a3, v23) == v23) {
        *(_QWORD*)(a5 + 24) = 0;
        return v6;
      }
      return 0;
    }
    v14 = v7 - v13;
    if ((unsigned __int64)(v7 - v13) >= 0x17) {
      if ((v14 | 7) == 0x17) {
        v20 = 26;
      }
      else {
        v20 = (v14 | 7) + 1;
      }
      v15 = (char*)NgxRoutine_420(v20);
      v25_.v25[1] = v14;
      v25_.v26 = v15;
      v25_.v25[0] = v20 | 1;
      v16 = v7 + a2;
      v17 = v14 & 7;
      v18 = v15;
      v19 = v14;
      if ((v14 & 7) == 0) {
      LABEL_14:
        if ((unsigned __int64)(a4 - v16) <= 0xFFFFFFFFFFFFFFF8LL) {
          do {
            *v18 = a6;
            v18[1] = a6;
            v19 -= 8;
            v18[2] = a6;
            v18[3] = a6;
            v18[4] = a6;
            v18[5] = a6;
            v18[6] = a6;
            v18[7] = a6;
            v18 += 8;
          } while (v19 != 0);
        }
        v15[v14] = 0;
        if ((v25_.v25[0] & 1) != 0) {
          v21 = v25_.v26;
        }
        else {
          v21 = (char*)v25_.v25 + 1;
        }
        v22 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 96LL))(
            v6, (__int64)v21, v14);
        if ((v25_.v25[0] & 1) != 0) {
          NgxRoutine_430(v25_.v26, v25_.v25[0] & 0xFFFFFFFFFFFFFFFELL);
        }
        if (v22 != v14) {
          return 0;
        }
        goto LABEL_22;
      }
    }
    else {
      LOBYTE(v25_.v25[0]) = 2 * v14;
      v15 = (char*)v25_.v25 + 1;
      v16 = v7 + a2;
      v17 = v14 & 7;
      v18 = (char*)v25_.v25 + 1;
      v19 = v14;
      if ((v14 & 7) == 0) {
        goto LABEL_14;
      }
    }
    v18 = v15;
    v19 = v14;
    do {
      *v18++ = a6;
      --v19;
      --v17;
    } while (v17 != 0);
    goto LABEL_14;
  }
  return v6;
}
#pragma GCC visibility pop
