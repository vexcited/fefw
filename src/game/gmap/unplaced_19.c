#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(__int64);
__n64 llvm_libcxx_21_libcxx_include___vector_a6c440(float32x4_t*, __int128*,
                                                    float32x4_t*);
extern __int64* GameData_212c790;
extern __int64* GameData_212d728[2];
extern __int64 GameData_212c638;
extern __int64 GameData_2241420;
extern __int64 GameData_22416c0;
extern int GameData_225d6e0;
extern int GameData_225d6e4;
float task_618640(int, float result, float, float, float);
__int64 game_gmap_1656a90(__int64 a1);

__int64 game_gmap_1656a90(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  int v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  __n128 v23;
  float v24;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __n128 v31;
  __int64 v32;
  __int128 v33;
  float32x4_t v34[4];
  __int128 v35[4];

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v33 = (__typeof__(v33)){0};
  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  if (*(_BYTE*)(v3 + 60) == 1) {
    v4 = *(_QWORD*)(v2 + 96);
    v5 = *(_QWORD*)(v2 + 552);
    if (*(_BYTE*)(GameData_22416c0 + 54) != 1) {
      if ((v4 | v5) == 0 || *(_QWORD*)(v2 + 32) == *(_QWORD*)(v2 + 24)) {
        goto LABEL_18;
      }
      if (v4 != 0 || (v5 != 0 ? (v6 = *(_QWORD*)(v2 + 104) == 0) : (v6 = false),
                      !v6 ||
                          *(__int16*)(v2 + 642) * *(__int16*)(v2 + 640) *
                                  *(__int16*)(v2 + 644) !=
                              0 ||
                          *(_QWORD*)(v5 + 352) != 0)) {
        if ((*(_WORD*)(v2 + 544) & 3) == 2) {
          goto LABEL_18;
        }
      }
    LABEL_32:
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v2 + 160) + 16LL))((void*)(v35), v2 + 160),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v13 = v35[0];
      goto LABEL_22;
    }
    if ((v4 | v5) == 0 && *(_DWORD*)(v2 + 84) == *(_DWORD*)(v3 + 56) &&
        *(_QWORD*)(v2 + 32) != *(_QWORD*)(v2 + 24)) {
      goto LABEL_32;
    }
  }
LABEL_18:
  v7 = *(_DWORD*)(v2 + 540);
  v8 = __OFSUB__(v7, 1);
  v9 = (unsigned int)(v7 - 1);
  if (((v9 & 0x80000000) != 0LL) == v8) {
    v10 = *(_QWORD*)(v2 + 24);
    v11 = *(_QWORD*)(v2 + 32) - v10;
    v12 = v10 + 8LL * (unsigned int)v9;
    if (v9 < v11 >> 3) {
      v2 = v12;
    }
  }
  v13 = *(_OWORD*)(*(_QWORD*)v2 + 32LL);
LABEL_22:
  DWORD1(v33) = DWORD1(v13);
  *(float*)&v33 = *(float*)&v13 +
                  (float)(*(float*)&GameData_225d6e0 * 0x1.99999a0000000p-3f);
  *(_QWORD*)&v13 = v33;
  *((float*)&v13 + 2) =
      *((float*)&v13 + 2) -
      (float)(*(float*)&GameData_225d6e4 * 0x1.99999a0000000p-3f);
  DWORDn(v13, sizeof(v13) / 4 - 1) = 0;
  v33 = v13;
  v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
  v16 = *(_QWORD*)(v14 + 24);
  v15 = *(_QWORD*)(v14 + 32);
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
  }
  v35[0] = COERCE_AS(
      __int128, ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)v16 + 16LL))(v16)),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v35[1] = v17;
  v35[2] = v18;
  v35[3] = v19;
  v34[0] = COERCE_FLOAT32X4_T(
      ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)v16 + 24LL))(v16)),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v34[1] = v20;
  v34[2] = v21;
  v34[3] = v22;
  *(__n64*)&v23 = llvm_libcxx_21_libcxx_include___vector_a6c440(
      (float32x4_t*)&v33, v35, v34),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v24 = *((float*)&v23 + 2);
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v31 = v23;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v3", "=w"));
    std___1___shared_weak_count___release_weak(v15),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v23 = v31;
    if (v24 > 0x0.0p+0f) {
      return (*(__int64 (**)(_QWORD, _QWORD, __n128))(
          **(_QWORD**)(a1 + 16) + 40LL))(*(_QWORD*)(a1 + 16), 0, v23);
    }
  }
  else if (*((float*)&v23 + 2) > 0x0.0p+0f) {
    return (*(__int64 (**)(_QWORD, _QWORD, __n128))(
        **(_QWORD**)(a1 + 16) + 40LL))(*(_QWORD*)(a1 + 16), 0, v23);
  }
  v32 = *(_QWORD*)&v23;
  if (*(_DWORD*)(a1 + 40) != 1) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 40LL))(
        *(_QWORD*)(a1 + 16), 1),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v3", "=w"));
    DWORD1(v23) = DWORDn(v32, sizeof(v32) / 4 - 1);
  }
  v26 = *((float*)&v23 + 1);
  v27 = *(float*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5852LL);
  v28 = task_618640(0, *(float*)(GameData_2241420 + 12),
                    0x1.0000000000000p+1f - *(float*)(GameData_2241420 + 12),
                    *((float*)&v23 + 1), 0x1.0e00000000000p+10f),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v29 = *(_QWORD*)(a1 + 16);
  *(float*)v35 = v27 * v28;
  *((float*)v35 + 1) = v27 * v28;
  (*(void (**)(__int64, __int128*))(*(_QWORD*)v29 + 88LL))(v29, v35),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v30 = *(_QWORD*)(a1 + 16);
  DWORD2(v35[0]) = 0;
  *(float*)v35 = *(float*)&v32 + -0x1.e000000000000p+9f;
  *((float*)v35 + 1) = 0x1.0e00000000000p+9f - v26;
  return (*(__int64 (**)(__int64, __int128*))(*(_QWORD*)v30 + 56LL))(v30, v35);
}

#pragma GCC visibility pop
