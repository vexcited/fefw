#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
void __attribute__((noreturn)) NgxRoutine_27cf0();
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
__int64 nvidia_29120(__int64* a1, unsigned __int64 a2);
__int64* nvidia_3a180(__int64* result, unsigned __int64 a2);
__int64* nvidia_3a300(__int64* result, unsigned __int64 a2);
__int64 nvidia_bac40(__int64 a1, __int64 a2);
__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_29120(__int64* a1, unsigned __int64 a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;

  if (a2 == 0) {
    result = *a1;
    *a1 = 0;
    if (result != 0) {
      result = NgxRoutine_430(result, 8 * a1[1]);
    }
    a1[1] = 0;
    return result;
  }
  if (a2 >> 61 != 0) {
    NgxRoutine_27cf0();
  }
  result = NgxRoutine_420(8 * a2);
  v5 = *a1;
  *a1 = result;
  if (v5 != 0) {
    NgxRoutine_430(v5, 8 * a1[1]);
    result = *a1;
  }
  v6 = a2 & 7;
  a1[1] = a2;
  if (a2 < 8) {
    v7 = 0;
    if ((a2 & 7) == 0) {
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  v8 = (_QWORD*)(result + 32);
  v9 = 0;
  do {
    *(v8 - 4) = 0;
    *(v8 - 3) = 0;
    *(v8 - 2) = 0;
    *(v8 - 1) = 0;
    v9 -= 8;
    *v8 = 0;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    v8 += 8;
  } while (-(__int64)(a2 & 0x1FFFFFFFFFFFFFF8LL) != v9);
  v7 = -v9;
  if ((a2 & 7) != 0) {
  LABEL_14:
    v10 = (_QWORD*)(result + 8 * v7);
    do {
      *v10++ = 0;
      --v6;
    } while (v6 != 0);
  }
LABEL_16:
  v13 = (_QWORD*)a1[2];
  v12 = a1 + 2;
  v11 = v13;
  if (v13 == nullptr) {
    return result;
  }
  v14 = v11[1];
  v15 = a2 - 1;
  if ((a2 & (a2 - 1)) == 0) {
    v18 = v14 & v15;
    *(_QWORD*)(result + 8 * v18) = v12;
    while (1) {
      v19 = (_QWORD*)*v11;
      if (*v11 == 0) {
        break;
      }
      v20 = v19[1] & v15;
      if (v20 == v18) {
        v11 = (_QWORD*)*v11;
      }
      else if (*(_QWORD*)(result + 8 * v20) != 0) {
        *v11 = *v19;
        *v19 = **(_QWORD**)(result + 8 * v20);
        **(_QWORD**)(result + 8 * v20) = v19;
      }
      else {
        *(_QWORD*)(result + 8 * v20) = v11;
        v11 = v19;
        v18 = v20;
      }
    }
    return result;
  }
  if (v14 >= a2) {
    v14 %= a2;
  }
  *(_QWORD*)(result + 8 * v14) = v12;
  v16 = (_QWORD*)*v11;
  if (*v11 != 0) {
    while (1) {
      v17 = v16[1];
      if (v17 >= a2) {
        v17 %= a2;
      }
      if (v17 == v14) {
        goto LABEL_23;
      }
      if (*(_QWORD*)(result + 8 * v17) != 0) {
        *v11 = *v16;
        *v16 = **(_QWORD**)(result + 8 * v17);
        **(_QWORD**)(result + 8 * v17) = v16;
        v16 = v11;
      LABEL_23:
        v11 = v16;
        v16 = (_QWORD*)*v16;
        if (v16 == nullptr) {
          return result;
        }
      }
      else {
        *(_QWORD*)(result + 8 * v17) = v11;
        v11 = v16;
        v16 = (_QWORD*)*v16;
        v14 = v17;
        if (v16 == nullptr) {
          return result;
        }
      }
    }
  }
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64*

nvidia_3a180(__int64* result, unsigned __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  char* v13;
  char* i;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  unsigned __int64 j;

  v2 = (_QWORD*)result[1];
  v3 = result[2];
  v4 = result;
  if (v3 - (__int64)v2 < a2) {
    v5 = (char*)v2 - *result;
    v6 = (unsigned __int64)&v5[a2];
    if ((__int64)&v5[a2] < 0) {
      nvidia_dlss_rel_source_common_33410();
    }
    v7 = v3 - *result;
    if (2 * v7 > v6) {
      v6 = 2 * v7;
    }
    if (v7 >= 0x3FFFFFFFFFFFFFFFLL) {
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v8 = v6;
    }
    if (v8 != 0) {
      v9 = a2;
      v10 = NgxRoutine_420(v8);
      a2 = v9;
      v11 = &v5[v10];
      v12 = v9 & 7;
      v13 = &v5[v10 + v9];
      i = &v5[v10];
      if (v12 != 0) {
        goto LABEL_10;
      }
    }
    else {
      v10 = 0;
      v11 = v5;
      v12 = a2 & 7;
      v13 = &v5[a2];
      for (i = v5; v12 != 0; --v12) {
      LABEL_10:
        *i++ = 0;
      }
    }
    if (a2 >= 8) {
      do {
        *(_QWORD*)i = 0;
        i += 8;
      } while (i != v13);
    }
    v15 = v10 + v8;
    v17 = *v4;
    v16 = v4[1];
    v18 = (__int64)&v11[*v4 - v16];
    result = (__int64*)memcpy_plt(v18, *v4, v16 - *v4);
    v19 = v4[2];
    *v4 = v18;
    v4[1] = (__int64)v13;
    v4[2] = v15;
    if (v17 != 0) {
      return (__int64*)NgxRoutine_430(v17, v19 - v17);
    }
    return result;
  }
  if (a2 != 0) {
    v20 = (_QWORD*)((char*)v2 + a2);
    for (j = a2 & 7; j != 0; --j) {
      *(_BYTE*)v2 = 0;
      v2 = (_QWORD*)((char*)v2 + 1);
    }
    if (a2 >= 8) {
      do {
        *v2++ = 0;
      } while (v2 != v20);
    }
    v2 = v20;
  }
  result[1] = (__int64)v2;
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64*

nvidia_3a300(__int64* result, unsigned __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;

  v2 = (_QWORD*)result[1];
  v3 = result[2];
  v4 = result;
  if (0xCCCCCCCCCCCCCCCDLL * ((v3 - (__int64)v2) >> 3) >= a2) {
    if (a2 != 0) {
      v11 = &v2[5 * a2];
      v12 = 40 * a2 - 40;
      if ((~(v12 / 0x28) & 7) != 0) {
        v13 = -(__int64)(((unsigned __int8)(v12 / 0x28) + 1) & 7);
        do {
          v2[3] = 0;
          v2[4] = 0;
          v2[1] = 0;
          v2[2] = 0;
          v14 = __CFADD__(v13++, 1);
          *v2 = 0;
          v2 += 5;
        } while (!v14);
      }
      if (v12 >= 0x118) {
        do {
          v2[2] = 0;
          v2[3] = 0;
          *v2 = 0;
          v2[1] = 0;
          v2[4] = 0;
          v2[5] = 0;
          v2[6] = 0;
          v2[7] = 0;
          v2[8] = 0;
          v2[9] = 0;
          v2[10] = 0;
          v2[11] = 0;
          v2[12] = 0;
          v2[13] = 0;
          v2[14] = 0;
          v2[15] = 0;
          v2[16] = 0;
          v2[17] = 0;
          v2[18] = 0;
          v2[19] = 0;
          v2[22] = 0;
          v2[23] = 0;
          v2[20] = 0;
          v2[21] = 0;
          v2[28] = 0;
          v2[29] = 0;
          v2[26] = 0;
          v2[27] = 0;
          v2[24] = 0;
          v2[25] = 0;
          v2[32] = 0;
          v2[33] = 0;
          v2[30] = 0;
          v2[31] = 0;
          v2[38] = 0;
          v2[39] = 0;
          v2[36] = 0;
          v2[37] = 0;
          v2[34] = 0;
          v2[35] = 0;
          v2 += 40;
        } while (v2 != v11);
      }
      v2 = v11;
    }
    result[1] = (__int64)v2;
  }
  else {
    v5 = (__int64)v2 - *result;
    v6 = a2 - 0x3333333333333333LL * (v5 >> 3);
    if (v6 > 0x666666666666666LL) {
      nvidia_dlss_rel_source_common_33410();
    }
    v7 = 0xCCCCCCCCCCCCCCCDLL * ((v3 - *result) >> 3);
    if (2 * v7 > v6) {
      v6 = 2 * v7;
    }
    if (v7 >= 0x333333333333333LL) {
      v8 = 0x666666666666666LL;
    }
    else {
      v8 = v6;
    }
    if (v8 != 0) {
      if (v8 > 0x666666666666666LL) {
        NgxRoutine_27cf0();
      }
      v9 = a2;
      v10 = NgxRoutine_420(40 * v8);
      a2 = v9;
    }
    else {
      v10 = 0;
    }
    v15 = v10 + v5;
    v16 = v10 + v5 + 40 * a2;
    v17 = 40 * a2 - 40;
    if ((~(v17 / 0x28) & 7) != 0) {
      v19 = -(__int64)(((unsigned __int8)(v17 / 0x28) + 1) & 7);
      v18 = (_QWORD*)(v10 + v5);
      do {
        v18[3] = 0;
        v18[4] = 0;
        v18[1] = 0;
        v18[2] = 0;
        v14 = __CFADD__(v19++, 1);
        *v18 = 0;
        v18 += 5;
      } while (!v14);
    }
    else {
      v18 = (_QWORD*)(v10 + v5);
    }
    if (v17 >= 0x118) {
      do {
        v18[2] = 0;
        v18[3] = 0;
        *v18 = 0;
        v18[1] = 0;
        v18[4] = 0;
        v18[5] = 0;
        v18[6] = 0;
        v18[7] = 0;
        v18[8] = 0;
        v18[9] = 0;
        v18[10] = 0;
        v18[11] = 0;
        v18[12] = 0;
        v18[13] = 0;
        v18[14] = 0;
        v18[15] = 0;
        v18[16] = 0;
        v18[17] = 0;
        v18[18] = 0;
        v18[19] = 0;
        v18[22] = 0;
        v18[23] = 0;
        v18[20] = 0;
        v18[21] = 0;
        v18[28] = 0;
        v18[29] = 0;
        v18[26] = 0;
        v18[27] = 0;
        v18[24] = 0;
        v18[25] = 0;
        v18[32] = 0;
        v18[33] = 0;
        v18[30] = 0;
        v18[31] = 0;
        v18[38] = 0;
        v18[39] = 0;
        v18[36] = 0;
        v18[37] = 0;
        v18[34] = 0;
        v18[35] = 0;
        v18 += 40;
      } while (v18 != (_QWORD*)v16);
    }
    v20 = v10 + 40 * v8;
    v21 = *v4;
    v22 = v4[1] - *v4;
    v23 = v15 - v22;
    result = (__int64*)memcpy_plt(v15 - v22, *v4, v22);
    v24 = v4[2];
    *v4 = v23;
    v4[1] = v16;
    v4[2] = v20;
    if (v21 != 0) {
      return (__int64*)NgxRoutine_430(v21, v24 - v21);
    }
  }
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_bac40(__int64 a1, __int64 a2)
{
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = a2;
  if (v3 != 0) {
    NgxRoutine_430(v3, a2);
  }
  *(_QWORD*)(a1 + 8) = 0;
  if (v4 > 0x3C) {
    v5 = -1;
  }
  else {
    v5 = 8LL << v4;
  }
  result = NgxRoutine_420(v5);
  v7 = 0;
  v8 = 1LL << v4;
  if (v4 >= 3) {
    v9 = (_QWORD*)(result + 32);
    v10 = 0;
    do {
      *(v9 - 4) = 0;
      *(v9 - 3) = 0;
      *(v9 - 2) = 0;
      *(v9 - 1) = 0;
      v10 -= 8;
      *v9 = 0;
      v9[1] = 0;
      v9[2] = 0;
      v9[3] = 0;
      v9 += 8;
    } while (-(__int64)(v8 & 0xFFFFFFFFFFFFFFF8LL) != v10);
    v7 = -v10;
  }
  if (v4 <= 2) {
    v11 = (1LL << v4) & 7;
    v12 = (_QWORD*)(result + 8 * v7);
    do {
      *v12++ = 0;
      --v11;
    } while (v11 != 0);
  }
  v13 = *(_QWORD*)(a1 + 24);
  v14 = a1 + 18;
  if (v13 != a1 + 18) {
    *(_QWORD*)(a1 + 16) = v13;
    v15 = v8 - 1;
    *(_QWORD*)(result + 8LL * (*(_DWORD*)(v13 + 16) & v15 & 0x7FFFFFFF)) = v13;
    v16 = *(_QWORD*)(v13 + 24);
    *(_QWORD*)(v13 + 24) = v14;
    if (v16 != v14) {
      do {
        while (1) {
          v18 = *(_QWORD*)(v16 + 24);
          v19 = *(_DWORD*)(v16 + 16) & v15 & 0x7FFFFFFF;
          v20 = *(_QWORD*)(result + 8 * v19);
          if (v20 != 0) {
            break;
          }
          v17 = *(_QWORD*)(a1 + 16);
          *(_QWORD*)(result + 8 * v19) = v16;
          *(_QWORD*)(v16 + 24) = v14;
          *(_QWORD*)(v16 + 32) = v17;
          *(_QWORD*)(v17 + 24) = v16;
          *(_DWORD*)(v16 + 16) |= 0x80000000;
          *(_QWORD*)(a1 + 16) = v16;
          v16 = v18;
          if (v18 == v14) {
            goto LABEL_22;
          }
        }
        v21 = *(_QWORD*)(v20 + 24);
        *(_QWORD*)(result + 8 * v19) = v16;
        if (v20 == *(_QWORD*)(a1 + 16)) {
          *(_QWORD*)(a1 + 16) = v16;
        }
        else {
          *(_QWORD*)(v21 + 32) = v16;
        }
        *(_QWORD*)(v16 + 24) = v21;
        *(_QWORD*)(v16 + 32) = v20;
        *(_QWORD*)(v20 + 24) = v16;
        *(_DWORD*)(v16 + 16) &= ~0x80000000;
        v16 = v18;
      } while (v18 != v14);
    }
  }
LABEL_22:
  *(_QWORD*)(a1 + 8) = result;
  *(_DWORD*)(a1 + 32) = v4;
  return result;
}

#pragma GCC visibility pop
