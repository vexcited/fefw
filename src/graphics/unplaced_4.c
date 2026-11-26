#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_65f150(__int64, _DWORD*, _DWORD*);
__int64 SdkRoutine_691990(int, __int64);
bool SdkRoutine_65f080(__int64, __int128*, __int128*, int);
bool SdkRoutine_65f240(__int64, unsigned int, _OWORD*, _OWORD*, _DWORD*);
extern _UNKNOWN* SdkData_e89ba0;
int8x16_t* nn_691a40(int8x16_t* result);
__int64 graphics_691060(__int64 a1, __int64 a2, int a3, char a4);

__int64 graphics_691060(__int64 a1, __int64 a2, int a3, char a4)
{

#pragma clang fp contract(off)
  float v4;
  float v5;
  float v8;
  float v9;
  float v10;
  float v11;
  char* v12;
  _BOOL4 v13;
  _BOOL4 v14;
  __int64 result;
  int v20;
  bool v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  _DWORD* i;
  int8x16_t v26;
  struct {
    __int128 v27;
    __int64 v28;
  } v27_;
  struct {
    unsigned int v29;
    unsigned int v30;
  } v29_;

  {
    v4 = *(float*)a2;
    __asm__ volatile("" ::"w"(v4));
  }
  {
    v5 = *(float*)(a2 + 4);
    __asm__ volatile("" ::"w"(v5));
  }
  v27_.v28 = 0;
  v8 = v5;
  v26 = (__typeof__(v26)){0};
  v27_.v27 = __PAIR64__(LODWORD(v5), LODWORD(v4));
  {
    v9 = *(float*)(a2 + 12);
    __asm__ volatile("" ::"w"(v9));
  }
  v10 = v4;
  DWORD2(v27_.v27) = *(_DWORD*)(a2 + 8);
  *((float*)&v27_.v27 + 3) = v9;
  v11 = v9;
  v12 = (char*)SdkData_e89ba0 + 48LL * a3;
  v13 = v10 == 0x0.0p+0f && (v12[11] == 0 || v5 == 0x0.0p+0f) &&
        (v12[12] == 0 || *((float*)&v27_.v27 + 2) == 0x0.0p+0f) &&
        (v9 == 0x0.0p+0f | v12[13] == 0);
  v14 = false;
  if (v10 == 0x1.0000000000000p+0f && (v12[19] & 1) != 0) {
    if (v12[11] == 0 | v8 == 0x1.0000000000000p+0f) {
      if (v12[12] == 0 | *((float*)&v27_.v27 + 2) == 0x1.0000000000000p+0f) {
        {
          v14 = v11 == 0x1.0000000000000p+0f | v12[13] == 0;
          __asm__ volatile("" ::"r"(v14));
        }
        if ((v12[17] & 1) != 0) {
          return 0xFFFFFFFFLL;
        }
      }
      else {
        v14 = false;
        if ((v12[17] & 1) != 0) {
          return 0xFFFFFFFFLL;
        }
      }
      goto LABEL_37;
    }
    v14 = false;
  }
  if ((v12[17] & 1) != 0) {
    return 0xFFFFFFFFLL;
  }
LABEL_37:
  if (v13) {
    v20 = 1;
    v26 = (__typeof__(v26)){0};
    LODWORD(v27_.v28) = 1;
    goto LABEL_49;
  }
  if (v14) {
    v20 = 2;
    LODWORD(v27_.v28) = 2;
    LANES128(v26).n128_u64[0] = -1;
    LANES128(v26).n128_u64[1] = -1;
    goto LABEL_49;
  }
  if (v12[20] == 1) {
    DWORDn(v27_.v27, sizeof(v27_.v27) / 4 - 1) = 0;
  }
  if ((unsigned int)(a3 - 13) < 0xC) {
    goto LABEL_46;
  }
  if ((unsigned int)(a3 - 1) <= 0xB) {
    v8 = v10;
    *((float*)&v27_.v27 + 1) = v10;
  LABEL_46:
    *((_QWORD*)&v27_.v27 + 1) = __PAIR64__(LODWORD(v8), LODWORD(v10));
  }
  if ((unsigned __int8)SdkRoutine_691990(a3, (__int64)&v26) == 0) {
    return 0xFFFFFFFFLL;
  }
  nn_691a40(&v26);
  v20 = v27_.v28;
LABEL_49:
  v21 = SdkRoutine_65f080(a1 + 2520, (__int128*)&v26, &v27_.v27, v20);
  result = (unsigned int)v21 - 1;
  if ((a4 & 1) != 0 && v21) {
    if ((SdkRoutine_65f150(a1 + 2520, &v29_.v30, &v29_.v29) & 1) == 0) {
      return 0xFFFFFFFFLL;
    }
    v22 = v29_.v30;
    if (v29_.v29 >= 0x1F) {
      v23 = 31;
    }
    else {
      v23 = v29_.v29;
    }
    if (v29_.v30 >= v23) {
    LABEL_63:
      if (v29_.v30 < v29_.v29) {
        for (i = (_DWORD*)(a1 + 36LL * v29_.v30 + 7844);; i += 9) {
          if (*(_DWORD*)i == 0) {
            if (SdkRoutine_65f240(a1 + 2520, v22, (_OWORD*)i - 2,
                                  (_OWORD*)i - 1, i)) {
              if (*(i - 8) == LANES128(v26).n128_u32[0] &&
                  *(_QWORD*)(i - 7) ==
                      *(unsigned __int64*)((char*)LANES128(v26).n128_u64 + 4) &&
                  *(i - 5) == LANES128(v26).n128_u32[3]) {
                return (unsigned int)v22;
              }
            }
            else {
              *(_DWORD*)i = 0;
            }
          }
          if (++v22 >= (unsigned __int64)v29_.v29) {
            return 0xFFFFFFFFLL;
          }
        }
      }
      return 0xFFFFFFFFLL;
    }
    result = v29_.v30;
    v24 = a1 + 36LL * v29_.v30 + 7812;
    while (*(_DWORD*)(v24 + 32) == 0 ||
           *(_DWORD*)v24 != LANES128(v26).n128_u32[0] ||
           *(_QWORD*)(v24 + 4) !=
               *(unsigned __int64*)((char*)LANES128(v26).n128_u64 + 4) ||
           *(_DWORD*)(v24 + 12) != LANES128(v26).n128_u32[3]) {
      result = (unsigned int)(result + 1);
      v24 += 36;
      if (v23 == (_DWORD)result) {
        goto LABEL_63;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
