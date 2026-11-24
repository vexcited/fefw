#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* SdkData_e89bd8;
float nn_6a4de0();
bool nn_6a7080(__int64 a1, int a2, __int64 a3);
bool nn_6a71c0(__int64 a1, int a2, __int64 a3);

__attribute__((no_builtin("memset", "memcpy", "memmove"))) float nn_6a4de0()
{

#pragma clang fp contract(off)
  __int64 v0;
  _OWORD* v1;
  float result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v1 = *(_OWORD**)(v0 + 32);
  if (v1 != nullptr) {
    *v1 = (__typeof__(*v1)){0};
    v1[1] = (__typeof__(v1[1])){0};
    v1[2] = (__typeof__(v1[2])){0};
    v1[3] = (__typeof__(v1[3])){0};
    v1[4] = (__typeof__(v1[4])){0};
    v1[5] = (__typeof__(v1[5])){0};
    v1[6] = (__typeof__(v1[6])){0};
    v1[7] = (__typeof__(v1[7])){0};
    v1[8] = (__typeof__(v1[8])){0};
    v1[9] = (__typeof__(v1[9])){0};
    v1[10] = (__typeof__(v1[10])){0};
    v1[11] = (__typeof__(v1[11])){0};
    v1[12] = (__typeof__(v1[12])){0};
    v1[13] = (__typeof__(v1[13])){0};
    v1[14] = (__typeof__(v1[14])){0};
    v1[15] = (__typeof__(v1[15])){0};
    v1[16] = (__typeof__(v1[16])){0};
    v1[17] = (__typeof__(v1[17])){0};
    v1[18] = (__typeof__(v1[18])){0};
    v1[19] = (__typeof__(v1[19])){0};
    v1[20] = (__typeof__(v1[20])){0};
    v1[21] = (__typeof__(v1[21])){0};
    v1[22] = (__typeof__(v1[22])){0};
    v1[23] = (__typeof__(v1[23])){0};
    v1[24] = (__typeof__(v1[24])){0};
    v1[25] = (__typeof__(v1[25])){0};
    v1[26] = (__typeof__(v1[26])){0};
    v1[27] = (__typeof__(v1[27])){0};
    return 0x0.0p+0f;
  }
  else {
    *(_QWORD*)(v0 + 32) = (*(__int64 (**)(__int64, __int64))(
        (char*)((__int64*)0x4LL) + (_QWORD)SdkData_e89bd8 + 4))(8, 56),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                    v0 = COERCE_AS(
                        __typeof__(v0),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  return result;
}

bool nn_6a7080(__int64 a1, int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  if (a1 != 0 && a2 >= 1) {
    v3 = a2 & 3;
    if ((unsigned int)a2 < 4) {
      v4 = 0;
      if ((a2 & 3) == 0) {
        return a1 != 0;
      }
      goto LABEL_9;
    }
    v5 = (__int64*)(a3 + 16);
    v6 = 0;
    do {
      v7 = *(v5 - 2);
      v6 -= 4;
      v8 = *(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534340LL);
      v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534344LL);
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534340LL) = v8 + 1;
      *(_QWORD*)(v9 + 8 * v8) = v7;
      v10 = *(v5 - 1);
      v11 = *(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534340LL);
      v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534344LL);
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534340LL) =
          v11 + 1;
      *(_QWORD*)(v12 + 8 * v11) = v10;
      v13 = *v5;
      v14 = *(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534340LL);
      v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534344LL);
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534340LL) =
          v14 + 1;
      *(_QWORD*)(v15 + 8 * v14) = v13;
      v16 = v5[1];
      v5 += 4;
      v17 = *(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534340LL);
      v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534344LL);
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534340LL) =
          v17 + 1;
      *(_QWORD*)(v18 + 8 * v17) = v16;
    } while (-(__int64)(a2 & 0x7FFFFFFC) != v6);
    v4 = -v6;
    if ((a2 & 3) != 0) {
    LABEL_9:
      v19 = (__int64*)(a3 + 8 * v4);
      do {
        v20 = *v19++;
        --v3;
        v21 = *(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534340LL);
        v22 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534344LL);
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534340LL) =
            v21 + 1;
        *(_QWORD*)(v22 + 8 * v21) = v20;
      } while (v3 != 0);
    }
  }
  return a1 != 0;
}

bool nn_6a71c0(__int64 a1, int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  if (a1 != 0 && a2 >= 1) {
    v3 = a2 & 7;
    if ((unsigned int)a2 < 8) {
      v4 = 0;
      if ((a2 & 7) == 0) {
        return a1 != 0;
      }
      goto LABEL_9;
    }
    v5 = (__int64*)(a3 + 32);
    v6 = 0;
    do {
      v7 = *(int*)(a1 + 172);
      v8 = *(v5 - 4);
      v9 = *(_QWORD*)(a1 + 176);
      v6 -= 8;
      *(_DWORD*)(a1 + 172) = v7 + 1;
      *(_QWORD*)(v9 + 8 * v7) = v8;
      v10 = *(int*)(a1 + 172);
      v11 = *(v5 - 3);
      v12 = *(_QWORD*)(a1 + 176);
      *(_DWORD*)(a1 + 172) = v10 + 1;
      *(_QWORD*)(v12 + 8 * v10) = v11;
      v13 = *(int*)(a1 + 172);
      v14 = *(v5 - 2);
      v15 = *(_QWORD*)(a1 + 176);
      *(_DWORD*)(a1 + 172) = v13 + 1;
      *(_QWORD*)(v15 + 8 * v13) = v14;
      v16 = *(int*)(a1 + 172);
      v17 = *(v5 - 1);
      v18 = *(_QWORD*)(a1 + 176);
      *(_DWORD*)(a1 + 172) = v16 + 1;
      *(_QWORD*)(v18 + 8 * v16) = v17;
      v19 = *(int*)(a1 + 172);
      v20 = *v5;
      v21 = *(_QWORD*)(a1 + 176);
      *(_DWORD*)(a1 + 172) = v19 + 1;
      *(_QWORD*)(v21 + 8 * v19) = v20;
      v22 = *(int*)(a1 + 172);
      v23 = v5[1];
      v24 = *(_QWORD*)(a1 + 176);
      *(_DWORD*)(a1 + 172) = v22 + 1;
      *(_QWORD*)(v24 + 8 * v22) = v23;
      v25 = *(int*)(a1 + 172);
      v26 = v5[2];
      v27 = *(_QWORD*)(a1 + 176);
      *(_DWORD*)(a1 + 172) = v25 + 1;
      *(_QWORD*)(v27 + 8 * v25) = v26;
      v28 = *(int*)(a1 + 172);
      v29 = v5[3];
      v30 = *(_QWORD*)(a1 + 176);
      v5 += 8;
      *(_DWORD*)(a1 + 172) = v28 + 1;
      *(_QWORD*)(v30 + 8 * v28) = v29;
    } while (-(__int64)(a2 & 0x7FFFFFF8) != v6);
    v4 = -v6;
    if ((a2 & 7) != 0) {
    LABEL_9:
      v31 = (__int64*)(a3 + 8 * v4);
      do {
        v32 = *(int*)(a1 + 172);
        v33 = *v31++;
        v34 = *(_QWORD*)(a1 + 176);
        --v3;
        *(_DWORD*)(a1 + 172) = v32 + 1;
        *(_QWORD*)(v34 + 8 * v32) = v33;
      } while (v3 != 0);
    }
  }
  return a1 != 0;
}

#pragma GCC visibility pop
