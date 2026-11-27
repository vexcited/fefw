#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_14a3920(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
__n64 llvm_libcxx_21_libcxx_include___vector_a6c440(float32x4_t*, __int128*,
                                                    float32x4_t*);
extern __int64 GameData_21c6978;
extern __int64 GameData_21f5390;
extern __int64 GameData_21f5398;
void game_9a3940();

void game_9a3940()
{

#pragma clang fp contract(off)
  float32x4_t* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int128 v7;
  __int128 v8;
  __int128 v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  __int128 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64** v21;
  __int64 v22;
  __int64 v23;
  float32x4_t v24[4];
  _QWORD v25[8];

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v0 = (float32x4_t*)GameData_21f5390;
  if (GameData_21f5398 != GameData_21f5390) {
    v1 = *(_QWORD*)(GameData_21c6978 + 32);
    if (*(_QWORD*)(GameData_21c6978 + 24) != v1) {
      v2 = *(_QWORD*)(v1 - 8);
      if (v2 != 0) {
        v4 = *(_QWORD*)(v2 + 24);
        v3 = *(_QWORD*)(v2 + 32);
        if (v3 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v4 != 0) {
          for (i = GameData_21f5398; v0 != (float32x4_t*)i; v0 += 2) {
            v6 = *(_QWORD*)LANES128(*(v0)).n128_u64[0];
            if (v6 != 0 && *(_DWORD*)(v6 + 16) ==
                               *(_DWORD*)(LANES128(*(v0)).n128_u64[0] + 8)) {
              *(__n128*)
                  v25 =
                  ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)v4 + 16LL))(v4),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
              *(_OWORD*)&v25[2] = v7;
              *(_OWORD*)&v25[4] = v8;
              *(_OWORD*)&v25[6] = v9;
              v24[0] = COERCE_FLOAT32X4_T(
                  ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)v4 + 24LL))(v4)),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(__n128, "v3", "=w"));
              v24[1] = v10;
              v24[2] = v11;
              v24[3] = v12;
              *(__n64*)&v13 = llvm_libcxx_21_libcxx_include___vector_a6c440(
                  v0 + 1, (__int128*)v25, v24),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(__n128, "v3", "=w"));
              if (*((float*)&v13 + 2) <= 0x0.0p+0f) {
                v14 = (_QWORD*)LANES128(*(v0)).n128_u64[0];
                v15 = *(_QWORD*)LANES128(*(v0)).n128_u64[0];
                if (v15 != 0 && *(_DWORD*)(v15 + 16) == *((_DWORD*)v14 + 2)) {
                  v16 = *(_DWORD*)(v15 + 36);
                  if (v16 != 0) {
                    v17 = 0;
                    *((_QWORD*)&v13 + 1) = 0;
                    *(float*)&v13 = *(float*)&v13 + -0x1.e000000000000p+9f;
                    *((float*)&v13 + 1) =
                        0x1.0e00000000000p+9f - *((float*)&v13 + 1);
                    do {
                      if ((int)v16 > (int)v17) {
                        v18 = *(_QWORD*)(v15 + 40 + 8LL * (int)v17);
                        if (v18 != 0) {
                          *(_OWORD*)(v18 + 16) = v13;
                          *(_BYTE*)(v18 + 128) = 1;
                          v16 = *(_DWORD*)(v15 + 36);
                        }
                      }
                      ++v17;
                    } while (v17 < v16);
                  }
                }
                game_14a3920((__int64)v14),
                    v10 = COERCE_AS(__typeof__(v10),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v11 = COERCE_AS(__typeof__(v11),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v7 = COERCE_AS(__typeof__(v7),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v9 = COERCE_AS(__typeof__(v9),
                                   PSEUDO_REGISTER(__n128, "v3", "=w"));
              }
            }
          }
        }
        if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(__n128, "v3", "=w"));
          std___1___shared_weak_count___release_weak(v3),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
      }
    }
    v19 = GameData_21f5390;
    v20 = GameData_21f5398;
    if (GameData_21f5398 != GameData_21f5390) {
      v21 = (__int64**)GameData_21f5390;
      while (1) {
        v22 = **v21;
        if (v22 != 0 && *(_DWORD*)(v22 + 16) == *((_DWORD*)*v21 + 2)) {
          break;
        }
        v21 += 4;
        if (v21 == (__int64**)GameData_21f5398) {
          do {
            v23 = *(_QWORD*)(v20 - 24);
            if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
                  v10 = COERCE_AS(__typeof__(v10),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v11 = COERCE_AS(__typeof__(v11),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v9 = COERCE_AS(__typeof__(v9),
                                 PSEUDO_REGISTER(__n128, "v3", "=w"));
              std___1___shared_weak_count___release_weak(v23),
                  v10 = COERCE_AS(__typeof__(v10),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v11 = COERCE_AS(__typeof__(v11),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v9 = COERCE_AS(__typeof__(v9),
                                 PSEUDO_REGISTER(__n128, "v3", "=w"));
            }
            v20 -= 32;
          } while (v20 != v19);
          GameData_21f5398 = v19;
          return;
        }
      }
    }
  }
}

#pragma GCC visibility pop
