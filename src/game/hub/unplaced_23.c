#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_hub_cb8620(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_hub_cb8930(PSEUDO_X8, __int64, __int64,
                                                __int64);
__int64 CharacterModel_cf5c00(__int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 HubCharacterNatives_cabfc0(__int64 result, char);
__int64 HubCharacterNatives_cb83a0(__int64, __int64*);
__int64 HubCharacterNatives_cea6b0(__int64 result);
__int64 game_hub_Character_RebuildAppearance(__int64);
__int64 game_hub_cb9a30(__int64 result);
__int64 game_zview_d12d30(__int64 result, int32x2_t*, char);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 GameData_21ec7c0;
extern char GameData_1a9180c[28];
int GameRoutine_1a09cf0(__int64, __int64, unsigned __int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
void CharacterRotate_d519c0(int8x16_t*);
void Character_ca9280(__int64);
__attribute__((swiftcall)) void game_hub_cb9480(PSEUDO_X8 x8_, __int64 a1,
                                                unsigned __int8* a2);
__int64 game_hub_e1dce0();

__attribute__((swiftcall)) void game_hub_cb9480(PSEUDO_X8 x8_, __int64 a1,
                                                unsigned __int8* a2)
{

#pragma clang fp contract(off)
  float32x4_t** a3 = (float32x4_t**)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  float32x4_t* v41;
  __int64 v42;
  int32x2_t* v43;
  float32x4_t v44;
  int8x16_t v45;
  __int64 v46;
  float32x4_t v47;
  float v48;
  _QWORD* v49;
  float v50;
  __int64 v51;
  int8x16_t* v52;
  int v53;
  __int64 v54;
  float32x4_t** v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60[2];
  struct {
    float32x4_t* v61;
    __int64 v62;
  } v61_;
  _QWORD v63[14];
  struct {
    __int64 v64;
    char gap160_[744];
    float32x4_t** v65;
  } v64_;

  result = game_hub_cb9a30(a1);
  v7 = *(_QWORD*)(a1 + 80);
  if (v7 != 0 &&
      (v8 = *(_QWORD*)(a1 + 72), v9 = *(_QWORD*)(a1 + 80),
       atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                 memory_order_relaxed),
       v10 = std___1___shared_weak_count_lock(v9),
       result = std___1___shared_weak_count___release_weak(v7), v10 != 0)) {
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                memory_order_relaxed);
      *(_BYTE*)(v8 + 1080) = 1;
      *(_DWORD*)(v8 + 1076) = 0;
      if (fabsf(*(float*)(v8 + 1084)) > 0x1.0000000000000p-23f) {
        v11 = *(_QWORD*)(v8 + 24);
        *(_DWORD*)(v8 + 1084) = 0;
        v12 = *(_QWORD*)(v11 + 8);
        v13 = *(_QWORD*)(v12 + 328);
        v14 = *(_QWORD*)(v13 + 360);
        *(_QWORD*)(v13 + 240) = 0;
        *(_DWORD*)(v13 + 256) = 0;
        *(_BYTE*)(v13 + 260) = 1;
        *(_BYTE*)(v13 + 369) = 1;
        CharacterModel_cf5c00(v14);
        CharacterModel_cf5c00(v12);
      }
      v15 = *(_QWORD*)(v8 + 24);
      *(_DWORD*)(v15 + 368) = 0;
      *(_BYTE*)(v15 + 372) = 1;
      v16 = HubCharacterNatives_cea6b0(v15);
      v17 = *a2;
      v19 = *((_QWORD*)a2 + 1);
      v18 = *((_QWORD*)a2 + 2);
      v20 = (v17 & 1) == 0;
      v21 = v17 >> 1;
      v64_.v65 = a3;
      if (v20) {
        v22 = (__int64)(a2 + 1);
      }
      else {
        v22 = v18;
      }
      if (v20) {
        v23 = v21;
      }
      else {
        v23 = v19;
      }
      if (v23 != 0) {
        v59 = v10;
        v25 = *(__int64**)(a1 + 24);
        v24 = *(__int64**)(a1 + 32);
        while (1) {
          if (v25 == v24) {
            goto LABEL_30;
          }
          v26 = *v25;
          if (*v25 != 0) {
            v27 = *(_QWORD*)(v26 + 16);
            v28 = *(const char**)(v27 + 8);
            v16 = GameRoutine_1a09c70(v28);
            if (v23 == v16) {
              v16 = GameRoutine_1a09cf0(v22, (__int64)v28, v23);
              if ((_DWORD)v16 == 0) {
                break;
              }
            }
            v29 = *(_QWORD*)(*(_QWORD*)(v27 + 24) + 1784LL);
            if (v29 != 0) {
              v30 = *(const char**)(v29 + 8);
              v16 = GameRoutine_1a09c70(v30);
              if (v23 == v16) {
                v16 = GameRoutine_1a09cf0(v22, (__int64)v30, v23);
                if ((_DWORD)v16 == 0) {
                  break;
                }
              }
            }
          }
          v25 += 2;
        }
        v31 = v25[1];
        if (v31 == 0) {
        LABEL_30:
          v10 = v59;
          goto LABEL_31;
        }
        v32 = v25[1];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                                  memory_order_relaxed);
        v33 = std___1___shared_weak_count_lock(v32);
        v16 = std___1___shared_weak_count___release_weak(v31);
        v10 = v59;
        if (v33 == 0) {
          goto LABEL_32;
        }
        v34 = *(float*)(v26 + 1084);
        *(_DWORD*)(v26 + 1076) = 0;
        *(_BYTE*)(v26 + 1080) = 1;
        if (fabsf(v34) > 0x1.0000000000000p-23f) {
          v35 = *(_QWORD*)(v26 + 24);
          *(_DWORD*)(v26 + 1084) = 0;
          v36 = *(_QWORD*)(v35 + 8);
          v37 = *(_QWORD*)(v36 + 328);
          v38 = *(_QWORD*)(v37 + 360);
          *(_QWORD*)(v37 + 240) = 0;
          *(_DWORD*)(v37 + 256) = 0;
          *(_BYTE*)(v37 + 260) = 1;
          *(_BYTE*)(v37 + 369) = 1;
          CharacterModel_cf5c00(v38);
          v16 = CharacterModel_cf5c00(v36);
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          v16 = std___1___shared_weak_count___release_weak(v33);
        }
      }
      else {
      LABEL_31:
        v33 = 0;
      LABEL_32:
        v26 = 0;
      }
      game_hub_cb8620((void*)(v63), v16, a2);
      GameRoutine_60a020((__int64)&v64_.v64, GameData_1a9180c);
      game_hub_cb8930((void*)(&v61_.v61), a1, (__int64)v63, 0x100000000LL);
      v39 = v61_.v62;
      if (v61_.v62 != 0) {
        v40 = std___1___shared_weak_count_lock(v61_.v62);
        if (v40 != 0) {
          v41 = v61_.v61;
        }
        else {
          v41 = nullptr;
        }
        std___1___shared_weak_count___release_weak(v39);
      }
      else {
        v41 = nullptr;
        v40 = 0;
      }
      v42 = LANES128(v41[1]).n128_i64[1];
      *(_BYTE*)(v42 + 372) = 1;
      *(_DWORD*)(v42 + 368) = 5;
      HubCharacterNatives_cea6b0(v42);
      v43 = *(int32x2_t**)(*(_QWORD*)(v8 + 24) + 16LL);
      game_zview_d12d30(*(_QWORD*)(LANES128(v41[1]).n128_u64[1] + 16), v43 + 70,
                        1);
      v44 = vsubq_f32(
          v41[79],
          *(float32x4_t*)(*(_QWORD*)(LANES128(v41[1]).n128_u64[1] + 16) +
                          560LL));
      v45 = vmulq_f32(v44, v44);
      LANES128(v45).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
              .n64_f32[0] > 0x1.0000000000000p-23f) {
        v46 = *(_QWORD*)(GameData_21ec7c0 + 120);
        if ((*(_BYTE*)(v46 + 12) & 1) == 0) {
          *(_BYTE*)(v46 + 12) = 1;
        }
      }
      LANES128(v41[79]).n128_u32[0] = LANES64(v43[70]).n64_u32[0];
      LANES128(v41[79]).n128_u32[1] = LANES64(v43[70]).n64_u32[1];
      v47 = v41[79];
      LANES128(v47).n128_u64[1] = LANES64(v43[71]).n64_u32[0];
      v41[79] = v47;
      HubCharacterNatives_cabfc0((__int64)v41, 1);
      v48 =
          *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 24) + 16LL) + 488LL) +
                    36LL) *
          0x1.ca5dc20000000p+5f;
      if ((LANES128(v41[83]).n128_u8[1] & 1) == 0) {
        LANES128(v41[83]).n128_u8[1] = 1;
      }
      v49 = *(_QWORD**)(LANES128(v41[1]).n128_u64[1] + 16);
      v50 = v48 * 0x1.1df46a0000000p-6f;
      if (v49[107] != 0) {
        v51 = v49[108];
        v49[107] = 0;
        v49[108] = 0;
        if (v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
          std___1___shared_weak_count___release_weak(v51);
        }
      }
      v52 = (int8x16_t*)v49[61];
      v53 = LANES128(v52[11]).n128_u8[4];
      LANES128(v52[2]).n128_f32[0] = v50;
      LANES128(v52[2]).n128_f32[1] = v50;
      if (v53 == 1) {
        LANES128(v52[11]).n128_u8[4] = 0;
      }
      CharacterRotate_d519c0(v52);
      v60[0] = (__int64)v41;
      v60[1] = v40;
      if (v40 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                                  memory_order_relaxed);
        HubCharacterNatives_cb83a0(a1, v60);
        std___1___shared_weak_count___release_weak(v40);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
          std___1___shared_weak_count___release_weak(v40);
        }
      }
      else {
        HubCharacterNatives_cb83a0(a1, v60);
      }
      Character_ca9280((__int64)v63);
      if (*(_BYTE*)(a1 + 208) == 1) {
        if (v33 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                    memory_order_relaxed);
        }
        v54 = *(_QWORD*)(a1 + 168);
        *(_QWORD*)(a1 + 160) = v26;
        *(_QWORD*)(a1 + 168) = v33;
        if (v54 != 0) {
          std___1___shared_weak_count___release_weak(v54);
        }
        v55 = v64_.v65;
        if (v40 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                                    memory_order_relaxed);
        }
        v56 = *(_QWORD*)(a1 + 184);
        *(_QWORD*)(a1 + 176) = v41;
        *(_QWORD*)(a1 + 184) = v40;
        if (v56 != 0) {
          std___1___shared_weak_count___release_weak(v56);
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                  memory_order_relaxed);
        v57 = *(_QWORD*)(a1 + 200);
        *(_QWORD*)(a1 + 192) = v8;
        *(_QWORD*)(a1 + 200) = v10;
        if (v57 != 0) {
          std___1___shared_weak_count___release_weak(v57);
        }
      }
      else {
        *(_QWORD*)(a1 + 160) = v26;
        *(_QWORD*)(a1 + 168) = v33;
        if (v33 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                    memory_order_relaxed);
        }
        v55 = v64_.v65;
        *(_QWORD*)(a1 + 176) = v41;
        *(_QWORD*)(a1 + 184) = v40;
        if (v40 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                                    memory_order_relaxed);
        }
        *(_QWORD*)(a1 + 192) = v8;
        *(_QWORD*)(a1 + 200) = v10;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                  memory_order_relaxed);
        *(_BYTE*)(a1 + 208) = 1;
      }
      *v55 = v41;
      v55[1] = (float32x4_t*)v40;
      v58 = v10;
      if (v40 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                                  memory_order_relaxed);
        std___1___shared_weak_count___release_weak(v10);
        v58 = v40;
      }
      result = std___1___shared_weak_count___release_weak(v58);
      if (v33 != 0) {
        result = std___1___shared_weak_count___release_weak(v33);
      }
    }
    else {
      *a3 = nullptr;
      a3[1] = nullptr;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      {
        std___1___shared_weak_count___release_weak(v10);
        return;
      }
    }
  }
  else {
    *a3 = nullptr;
    a3[1] = nullptr;
  }
  {
    result;
    return;
  }
}

__int64 game_hub_e1dce0()
{
  __int64* v0;
  __int64* i;
  __int64 v2;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(__int64**)(GameData_21ec7c0 + 24);
  for (i = *(__int64**)(GameData_21ec7c0 + 32); v0 != i;
       result = game_hub_Character_RebuildAppearance(v2)) {
    v2 = *v0;
    v0 += 2;
  }
  return result;
}

#pragma GCC visibility pop
