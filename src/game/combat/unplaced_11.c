#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_ce65f0(__int64*, _QWORD*);
__attribute__((swiftcall)) void CombatLegionManager_e2dfe0(PSEUDO_X8, float);
__attribute__((swiftcall)) void MagicInst_10a43c0(PSEUDO_X8, int, float32x4_t*,
                                                  float32x4_t*, int, float,
                                                  float);
__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void math_6222e0(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, int8x16_t*);
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_ce6740(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__n128 GameRoutine_109ded0(__int128*, int8x16_t*, __int64);
double GameRoutine_1a09ff0(double, double);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6180;
extern __int64 (*GameData_1fd7c18[])();
extern __int64 (*GameData_1fe4d88[])();
extern __int64 (*GameData_1fe4dd8[])();
extern __int64 (*GameData_1fe4e28[])();
extern __int64 (*GameData_1fe4e78[])();
extern __int64 (*GameData_1fe4ec8[])();
extern __int64* GameData_212d448[9];
extern __int64* GameData_212f410[29];
extern __int64* GameData_212f418[28];
extern __int64* GameData_212f420[27];
extern __int64* GameData_212f428[26];
extern __int64 fw_memory_g_heap_manager_ptr;
float game_e9f360(__int64 result);
int __cxa_guard_acquire(__int64);
long double GameRoutine_1a0a000(long double, long double);
unsigned __int8* GameRoutine_a539c0(unsigned __int8* result, __int64,
                                    unsigned __int64);
void GameRoutine_ce6d60();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
float game_combat_e443d0();
__int64 game_combat_e4cdb0(unsigned __int64 a1);
float32x4_t game_combat_10a3bd0(float32x4_t* a1);

float game_combat_e443d0()
{

#pragma clang fp contract(off)
  __int64 v0;
  float32x4_t* v1;
  float result;
  _QWORD* v3;
  __int64 v4;
  float32x4_t* v5;
  float v6;
  __int64 v7;
  int8x16_t v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int8x16_t v12;
  float32x4_t* v14;
  float32x4_t* v15;
  unsigned __int64 v16;
  int8x16_t v17;
  float32x4_t v18;
  int8x16_t v19;
  float32x4_t v20;
  _QWORD* v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  __int128* v25;
  float v26;
  float v27;
  float v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  int8x16_t v32;
  __int64 v33;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v3 = *(_QWORD**)(v0 + 88);
  v4 = v0;
  v5 = v1;
  LANES128(*(v1)).n128_u8[0] = 0;
  LANES128(v1[1]).n128_u8[0] = 0;
  if (v3 == nullptr) {
    v10 = *(_QWORD*)(v0 + 96);
    if (v10 != 0) {
      v11 = CharacterBuilder_1084a50(*(_QWORD*)(v10 + 88), "Jnt_C_Head"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v11 == 0) {
        return result;
      }
      v12 = *(int8x16_t*)(v11 + 48);
      goto LABEL_19;
    }
    if (*(_DWORD*)(v0 + 84) == 4) {
      CombatLegionManager_e2dfe0((void*)(v5), *(float*)(v0 + 32)),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    LABEL_20:
      LANES128(v5[1]).n128_u8[0] = 1;
      v21 = *(_QWORD**)(v4 + 8);
      v22 = v21[6];
      if (v22 != 0 &&
          (*(_QWORD*)(v22 + 8) != -1 ? (v23 = v21[7] == 0) : (v23 = true),
           !v23 && (v24 = v21[1]) != 0)) {
        v25 = (__int128*)(v24 + 304);
      }
      else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                     memory_order_acquire) &
                1) != 0) {
        v25 = &GameData_21a6120;
      }
      else {
        v25 = &GameData_21a6120;
        if (__cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
          v31 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v31;
          __cxa_guard_release((__int64)&GameData_21a6130),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
              v0 = COERCE_AS(__typeof__(v0),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v1 = COERCE_AS(__typeof__(v1),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
      }
      v26 = *((float*)v25 + 1);
      v27 = LANES128(*(v5)).n128_f32[1];
      v28 = v26 + -0x1.e000000000000p+3f;
      result = v26 + 0x1.e000000000000p+3f;
      if (result >= v27) {
        result = LANES128(*(v5)).n128_f32[1];
      }
      if (v27 < v28) {
        result = v28;
      }
      LANES128(*(v5)).n128_f32[1] = result;
      return result;
    }
    if (*(_BYTE*)(v0 + 64) == 1) {
      v29 = *(_QWORD*)(v0 + 56);
      LANES128(*(v5)).n128_u64[0] = *(_QWORD*)(v0 + 48);
      LANES128(*(v5)).n128_u64[1] = v29;
      LANES128(v5[1]).n128_u8[0] = 1;
    }
    return result;
  }
  v6 = game_e9f360(v3[17]),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v7 = CharacterBuilder_1084a50(v3[7], "Jnt_C_Head"),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v7 != 0) {
    v8 = *(int8x16_t*)(v7 + 48);
    v9 = v3[6];
    if (v9 == 0) {
      goto LABEL_16;
    }
  }
  else {
    v8 = (__typeof__(v8)){0};
    v9 = v3[6];
    if (v9 == 0) {
      goto LABEL_16;
    }
  }
  if (*(_QWORD*)(v9 + 8) != -1 & v3[7] != 0) {
    v14 = (float32x4_t*)v3[1];
    if (v14 != nullptr) {
      v15 = v14 + 19;
      if (v7 == 0) {
        return result;
      }
      goto LABEL_18;
    }
  }
LABEL_16:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) != 0) {
    v15 = (float32x4_t*)&GameData_21a6120;
    if (v7 == 0) {
      return result;
    }
    goto LABEL_18;
  }
  v33 = v7;
  v32 = v8;
  v15 = (float32x4_t*)&GameData_21a6120;
  if (__cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v30 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v30;
    __cxa_guard_release((__int64)&GameData_21a6130),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v1 = COERCE_AS(__typeof__(v1),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v8 = v32;
  if (v33 != 0) {
  LABEL_18:
    {
      __typeof__(v16) z_ = (__typeof__(v16)){0};
      LODWORD(z_) = 0;
      v16 = z_;
    }
    *((float*)&v16 + 1) = v6 * 0x1.0000000000000p-1f;
    v17 = vaddq_f32(COERCE_AS(float32x4_t, v16), *v15);
    v18 = vsubq_f32(v8, v17);
    v19 = vmulq_f32(v18, v18);
    v20 = vextq_s8(v19, v19, 8u);
    LANES128(v19).n128_u64[0] =
        LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
            .n64_u64[0];
    PSEUDO_LOW_LANE128(v20, n128_f32, (float)(v6 + v6) * (float)(v6 + v6));
    LANES128(v19).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
            .n64_u64[0];
    v12 = vbslq_s8(
        vdupq_lane_s32(
            COERCE_AS(int32x2_t, LANES128_OF(vcgtq_f32(v19, v20)).n128_u64[0]),
            0),
        v17, v8);
  LABEL_19:
    *v5 = v12;
    goto LABEL_20;
  }
  return result;
}

__int64 game_combat_e4cdb0(unsigned __int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64* v6;
  atomic_ullong* v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int8 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  int v16;
  bool v18;
  __int64 v19;
  float v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  bool v29;
  unsigned __int64 v30;
  atomic_ullong* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  unsigned __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  atomic_ullong* v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  __int64* v60;
  atomic_ullong* v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  float v65;
  __int64 result;
  __int64 v67;
  __int64 v68;
  struct {
    char gap0_[8];
    _QWORD* v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    unsigned __int64 v76;
    __int64 v77;
    _QWORD* v78;
    __int64 v79;
    __int64 v80;
    unsigned __int64 v81;
    __int64 v82;
    char gap120_[8];
    __int64 (***v83)();
  } f_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
  v3[2] = 0;
  v4 = v3;
  v5 = (__int64)v3;
  v6 = GameData_212f410[0];
  v3[13] = 0;
  v3[14] = 0;
  *v3 = GameData_1fe4d88;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[1] = 0;
  v7 = (atomic_ullong*)(v3 + 1);
  v3[10] = 0;
  v8 = v3 + 10;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_DWORD*)(v5 + 104) = 0;
  *(_DWORD*)(v5 + 32) = 0;
  v4[3] = v6 + 2;
  v9 = v4 + 3;
  *(_QWORD*)(v5 + 108) = 0x3F8000003F800000LL;
  v10 = *(_BYTE*)(a1 + 168);
  if (v8 != (_QWORD*)(a1 + 168)) {
    if ((*(_BYTE*)(a1 + 168) & 1) != 0) {
      GameRoutine_64df20(v8, *(_QWORD*)(a1 + 184), *(_QWORD*)(a1 + 176));
      v10 = *(_BYTE*)(a1 + 168);
    }
    else {
      v11 = *(_QWORD*)(a1 + 176);
      v12 = *(_QWORD*)(a1 + 184);
      *v8 = *(_QWORD*)(a1 + 168);
      v8[1] = v11;
      v8[2] = v12;
    }
  }
  v13 = *(_QWORD*)(a1 + 176);
  if ((v10 & 1) == 0) {
    v13 = v10 >> 1;
  }
  if (v13 == 12) {
    if ((v10 & 1) != 0) {
      v14 = *(__int64**)(a1 + 184);
    }
    else {
      v14 = (__int64*)(a1 + 169);
    }
    v15 = *v14;
    v16 = *((_DWORD*)v14 + 2);
    v18 = v15 == 0x77417469626D6147LL & v16 == 828730209;
  }
  else {
    v18 = false;
  }
  v19 = *(_QWORD*)(a1 + 128);
  *(_BYTE*)(v5 + 116) = v18;
  f_.v78 = v9;
  f_.v79 = v5;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                            memory_order_relaxed);
  v20 = *(float*)(v5 + 32);
  *(_QWORD*)(v5 + 40) = v19;
  if (v20 > *(float*)(v19 + 24)) {
    ((void (*)(__int64))GameRoutine_ce6d60)(v19);
  }
  GameRoutine_ce65f0((__int64*)(v19 + 80), &f_.v78);
  f_.v80 = (__int64)GameData_1fd7c18;
  f_.v83 = (__int64 (***)(void))&f_.v80;
  GameRoutine_ce6740(v19, (__int64)&f_.v80);
  if (f_.v83 == (__int64 (***)(void))&f_.v80) {
    v21 = 4;
    goto LABEL_24;
  }
  if (f_.v83 != nullptr) {
    v21 = 5;
  LABEL_24:
    ((void (*)(__int64))(*f_.v83)[v21])((__int64)f_.v83);
  }
  v22 = f_.v79;
  if (f_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v79 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v22);
  }
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  GameRoutine_a539c0((unsigned __int8*)(a1 + 64), 0, 5u);
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    fw_text_String_CopyTerminated(&f_.v75, *(_QWORD*)(a1 + 80),
                                  *(_QWORD*)(a1 + 72));
  }
  else {
    v23 = *(_QWORD*)(a1 + 72);
    f_.v75 = *(_QWORD*)(a1 + 64);
    f_.v76 = v23;
    f_.v77 = *(_QWORD*)(a1 + 80);
  }
  v24 = fw_memory_HeapManager_Allocate(*v2, 104, 16, 0);
  v25 = GameData_212f418[0];
  *(_QWORD*)v24 = GameData_1fe4dd8;
  v26 = (unsigned __int8)f_.v75;
  v28 = f_.v76;
  v27 = f_.v77;
  *(_QWORD*)(v24 + 16) = 0;
  v29 = (v26 & 1) == 0;
  v30 = v26 >> 1;
  *(_QWORD*)(v24 + 8) = 0;
  v31 = (atomic_ullong*)(v24 + 8);
  *(_QWORD*)(v24 + 80) = 0;
  v32 = v24 + 80;
  *(_QWORD*)(v24 + 32) = 0;
  *(_QWORD*)(v24 + 40) = 0;
  *(_QWORD*)(v24 + 48) = 0;
  *(_QWORD*)(v24 + 56) = 0;
  *(_QWORD*)(v24 + 64) = 0;
  *(_QWORD*)(v24 + 72) = 0;
  *(_QWORD*)(v24 + 88) = 0;
  *(_QWORD*)(v24 + 96) = 0;
  *(_BYTE*)(v24 + 81) = 0;
  *(_DWORD*)(v24 + 32) = 0;
  *(_QWORD*)(v24 + 24) = v25 + 2;
  v33 = v24 + 24;
  if (v29) {
    v34 = v30;
  }
  else {
    v34 = v28;
  }
  if (v29) {
    v35 = (char*)&f_.v75 + 1;
  }
  else {
    v35 = (char*)v27;
  }
  v36 = v34 + 14;
  if (v34 + 14 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v37 = v24;
  if (v36 > 0x16) {
    if ((v36 | 7) == 0x17) {
      v40 = 26;
    }
    else {
      v40 = (v36 | 7) + 1;
    }
    v39 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v40, 16, 0);
    f_.v81 = v34 + 14;
    f_.v82 = v39;
    f_.v80 = v40 | 1;
    v38 = v40 | 1;
  }
  else {
    v38 = 2 * v36;
    v39 = 0;
    f_.v81 = 0;
    f_.v82 = 0;
    f_.v80 = (unsigned __int8)(2 * v36);
  }
  if ((v38 & 1) != 0) {
    v41 = (char*)v39;
  }
  else {
    v41 = (char*)&f_.v80 + 1;
  }
  qmemcpy(v41, "SE_ACT_Gambit_", 14);
  if ((v38 & 1) != 0) {
    v42 = (char*)(v39 + 14);
  }
  else {
    v42 = (char*)&f_.v81 + 7;
  }
  if (v34 != 0) {
    GameRoutine_1a0b940((__int64)v42, (__int64)v35, v34);
  }
  v42[v34] = 0;
  if ((*(_BYTE*)v32 & 1) != 0) {
    v43 = *(_QWORD*)(v37 + 96);
    if (v43 != 0) {
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v43);
    }
  }
  v45 = f_.v81;
  v46 = *(_QWORD*)(a1 + 128);
  f_.v73 = v33;
  f_.v74 = v37;
  *(_QWORD*)v32 = f_.v80;
  *(_QWORD*)(v32 + 8) = v45;
  *(_QWORD*)(v32 + 16) = f_.v82;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(v37 + 40) = v46;
  if (*(float*)(v37 + 32) > *(float*)(v46 + 24)) {
    ((void (*)(__int64))GameRoutine_ce6d60)(v46);
  }
  GameRoutine_ce65f0((__int64*)(v46 + 80), &f_.v73);
  f_.v80 = (__int64)GameData_1fd7c18;
  f_.v83 = (__int64 (***)(void))&f_.v80;
  GameRoutine_ce6740(v46, (__int64)&f_.v80);
  if (f_.v83 == (__int64 (***)(void))&f_.v80) {
    v47 = 4;
    goto LABEL_65;
  }
  if (f_.v83 != nullptr) {
    v47 = 5;
  LABEL_65:
    ((void (*)(__int64))(*f_.v83)[v47])((__int64)f_.v83);
  }
  v48 = f_.v74;
  if (f_.v74 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v74 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    std___1___shared_weak_count___release_weak(v48);
  }
  if (atomic_fetch_add(v31, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    std___1___shared_weak_count___release_weak(v37);
  }
  v49 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((f_.v75 & 1) != 0 && f_.v77 != 0) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v50,
                                  f_.v77);
  }
  v51 = fw_memory_HeapManager_Allocate(*v49, 88, 16, 0);
  *(_QWORD*)(v51 + 8) = 0;
  v52 = (atomic_ullong*)(v51 + 8);
  *(_QWORD*)(v51 + 16) = 0;
  v53 = v51;
  *(_QWORD*)(v51 + 72) = 0;
  *(_QWORD*)(v51 + 80) = 0;
  *(_QWORD*)(v51 + 32) = 0;
  *(_QWORD*)(v51 + 40) = 0;
  *(_QWORD*)(v51 + 48) = 0;
  *(_QWORD*)(v51 + 56) = 0;
  *(_QWORD*)(v51 + 64) = 0;
  *(_QWORD*)v51 = GameData_1fe4e28;
  v54 = *(_QWORD*)(a1 + 128);
  v55 = GameData_212f420[0] + 2;
  *(_DWORD*)(v51 + 32) = 0;
  *(_BYTE*)(v51 + 80) = 0;
  *(_QWORD*)(v51 + 24) = v55;
  *(_BYTE*)(v51 + 48) = 8;
  f_.v71 = v51 + 24;
  f_.v72 = v51;
  *(_DWORD*)(v51 + 49) = 1852399949;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(v51 + 40) = v54;
  if (*(float*)(v54 + 24) < 0x0.0p+0f) {
    ((void (*)(__int64, double))GameRoutine_ce6d60)(v54, 0x0.0p+0);
  }
  GameRoutine_ce65f0((__int64*)(v54 + 80), &f_.v71);
  f_.v80 = (__int64)GameData_1fd7c18;
  f_.v83 = (__int64 (***)(void))&f_.v80;
  GameRoutine_ce6740(v54, (__int64)&f_.v80);
  if (f_.v83 == (__int64 (***)(void))&f_.v80) {
    v56 = 4;
    goto LABEL_82;
  }
  if (f_.v83 != nullptr) {
    v56 = 5;
  LABEL_82:
    ((void (*)(__int64))(*f_.v83)[v56])((__int64)f_.v83);
  }
  v57 = f_.v72;
  if (f_.v72 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v72 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
    std___1___shared_weak_count___release_weak(v57);
  }
  if (atomic_fetch_add(v52, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    std___1___shared_weak_count___release_weak(v53);
  }
  v58 = (_QWORD*)fw_memory_HeapManager_Allocate(*v49, 144, 16, 0);
  v58[2] = 0;
  v59 = (__int64)v58;
  v60 = GameData_212f428[0];
  v58[5] = 0;
  v58[6] = 0;
  v58[7] = 0;
  v58[8] = 0;
  v58[9] = 0;
  v58[10] = 0;
  v58[11] = 0;
  v58[13] = 0;
  v58[14] = 0;
  *v58 = GameData_1fe4e78;
  v58[15] = 0;
  v58[16] = 0;
  v58[17] = 0;
  v58[12] = 0;
  *((_DWORD*)v58 + 10) = 0;
  v58[1] = 0;
  v61 = (atomic_ullong*)(v58 + 1);
  f_.v83 = (__int64 (***)(void))&f_.v80;
  v58[4] = v60 + 2;
  v62 = v58 + 4;
  f_.v80 = (__int64)GameData_1fe4ec8;
  f_.v81 = a1;
  GameRoutine_654050(&f_.v80, v58 + 12);
  if (f_.v83 == (__int64 (***)(void))&f_.v80) {
    v63 = 4;
  }
  else {
    if (f_.v83 == nullptr) {
      goto LABEL_93;
    }
    v63 = 5;
  }
  ((void (*)(__int64))(*f_.v83)[v63])((__int64)f_.v83);
LABEL_93:
  v64 = *(_QWORD*)(a1 + 128);
  f_.v69 = v62;
  f_.v70 = v59;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 8), 1u,
                            memory_order_relaxed);
  v65 = *(float*)(v59 + 40);
  *(_QWORD*)(v59 + 48) = v64;
  if (v65 > *(float*)(v64 + 24)) {
    ((void (*)(__int64))GameRoutine_ce6d60)(v64);
  }
  GameRoutine_ce65f0((__int64*)(v64 + 80), &f_.v69);
  f_.v80 = (__int64)GameData_1fd7c18;
  f_.v83 = (__int64 (***)(void))&f_.v80;
  GameRoutine_ce6740(v64, (__int64)&f_.v80);
  result = (__int64)f_.v83;
  if (f_.v83 == (__int64 (***)(void))&f_.v80) {
    v67 = 4;
    goto LABEL_99;
  }
  if (f_.v83 != nullptr) {
    v67 = 5;
  LABEL_99:
    result = ((__int64 (*)(__int64))(*f_.v83)[v67])((__int64)f_.v83);
  }
  v68 = f_.v70;
  if (f_.v70 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v70 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
    result = std___1___shared_weak_count___release_weak(v68);
  }
  if (atomic_fetch_add(v61, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
    return std___1___shared_weak_count___release_weak(v59);
  }
  return result;
}

float32x4_t game_combat_10a3bd0(float32x4_t* a1)
{
  __int64 v2;
  float32x4_t* v3;
  float32x4_t v4;
  int v5;
  int v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  float v10;
  float32x4_t v11;
  int8x16_t v12;
  float32x4_t v13;
  float32x4_t v14;
  unsigned __int32 v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  __int64 v19;
  unsigned __int32 v20;
  float32x4_t v21;
  float32x4_t v22;
  int8x16_t v23;
  float32x4_t v24;
  float32x4_t v25;
  int8x16_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  int8x16_t v40;
  int8x16_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  float32x4_t v49;
  int8x16_t v50;
  int8x16_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  double v55;
  float32x4_t v56;
  float v57;
  long double v58;
  long double v59;
  long double v60;
  float32x4_t v61;
  double v62;
  float32x4_t v63;
  float32x4_t result;
  float32x4_t v65;
  float v66;
  int32x2_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float v70;
  float32x2_t v71;
  float v72;
  float32x4_t v73;
  float32x4_t v74;
  int8x16_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  unsigned __int32 v80;
  float32x4_t v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned __int32 v86;
  float32x4_t v87;
  float32x4_t v88;
  int8x16_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  struct {
    int8x16x2_t v93;
    __int128 v94;
    __int128 v95;
  } v93_;
  struct {
    int8x16x2_t v96;
    __int128 v97;
    __int128 v98;
  } v96_;
  float32x2_t v99;

  if (LANES128(a1[7]).n128_f32[2] == 0x0.0p+0f) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
      v82 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v82;
      __cxa_guard_release((__int64)&GameData_21a6190);
    }
    math_6222e0((void*)(v96_.v96.val), a1 + 9, a1 + 8,
                (int8x16_t*)&GameData_21a6180);
    v2 = 9;
    v93_.v93 = v96_.v96;
    v93_.v94 = v96_.v97;
    v93_.v95 = v96_.v98;
    if (LANES128(a1[7]).n128_f32[1] >= 0x0.0p+0f) {
      v3 = a1 + 9;
    }
    else {
      v2 = 8;
      v3 = a1 + 8;
    }
    LANES128(a1[10]).n128_u32[0] = LANES128(a1[v2]).n128_u32[0];
    LANES128(a1[10]).n128_u32[1] = LANES128(*(v3)).n128_u32[1];
    v4 = a1[10];
    LANES128(v4).n128_u64[1] = LANES128(*(v3)).n128_u32[2];
    a1[10] = v4;
    goto LABEL_20;
  }
  v5 = LANES128(*(a1)).n128_u32[0];
  v6 = 0;
  if (LANES128(*(a1)).n128_i32[0] > 3) {
    switch (v5) {
    case 4:
      v6 = 2;
      break;
    case 5:
      v6 = 3;
      break;
    case 6:
      v6 = 4;
      break;
    default:
      break;
    }
    goto LABEL_16;
  }
  if (v5 != 2) {
    v6 = v5 == 3;
  LABEL_16:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
      v84 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v84;
      __cxa_guard_release((__int64)&GameData_21a6190);
    }
    math_6222e0((void*)(v96_.v96.val), a1 + 9, a1 + 8,
                (int8x16_t*)&GameData_21a6180);
    v7 = LANES128(a1[8]).n128_u64[1];
    LANES128(v91).n128_u64[0] = LANES128(a1[8]).n128_u64[0];
    LANES128(v91).n128_u64[1] = v7;
    v8 = LANES128(a1[9]).n128_u64[0];
    v9 = LANES128(a1[9]).n128_u64[1];
    v93_.v93 = v96_.v96;
    LANES128(v90).n128_u64[0] = v8;
    LANES128(v90).n128_u64[1] = v9;
    v93_.v94 = v96_.v97;
    v93_.v95 = v96_.v98;
    v10 = LANES128(a1[7]).n128_f32[1];
    if (v10 < 0x0.0p+0f) {
      v10 = 0x0.0p+0f;
    }
    MagicInst_10a43c0((void*)(v96_.v96.val), v6, &v91, &v90, 2,
                      v10 / LANES128(a1[7]).n128_f32[2], 0x1.0000000000000p+0f);
    v11 = vsubq_f32(a1[9], a1[8]);
    v12 = vmulq_f32(v11, v11);
    LANES128(v12).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
            .n64_u64[0];
    LANES128(v12).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
            .n64_u64[0];
    LANES128(v12).n128_u64[1] = LANES128(v12).n128_u64[0];
    v13 = vrsqrteq_f32(v12);
    v14 = vmulq_f32(v13, vrsqrtsq_f32(v13, vmulq_f32(v12, v13)));
    v15 = LANES128(v96_.v96.val[0]).n128_u32[2];
    LANES128(a1[10]).n128_u64[0] = LANES128(v96_.v96.val[0]).n128_u64[0];
    v16 = vbicq_s8(
        vmulq_f32(v11, vmulq_f32(v14, vrsqrtsq_f32(v14, vmulq_f32(v12, v14)))),
        vceqzq_f32(v12));
    LANES128(a1[11]).n128_u64[0] = LANES128(v16).n128_u64[0];
    v17 = a1[10];
    v18 = a1[11];
    LANES128(v17).n128_u64[1] = v15;
    LANES128(v18).n128_u64[1] = LANES128(v16).n128_u32[2];
    a1[10] = v17;
    a1[11] = v18;
    goto LABEL_20;
  }
  v66 = LANES128(a1[7]).n128_f32[1];
  LANES64(v67).n64_u32[1] = 0;
  v68 = a1[5];
  LANES128(v69).n128_u32[3] = 0;
  if (v66 < 0x0.0p+0f) {
    v66 = 0x0.0p+0f;
  }
  LANES64(v67).n64_f32[0] = 0x1.0000000000000p+0f / LANES128(a1[1]).n128_f32[1];
  LANES64(v99).n64_f32[0] =
      (float)(v66 * LANES64(v67).n64_f32[0]) * LANES128(v68).n128_f32[0];
  LANES64(v99).n64_f32[1] =
      (float)(PSEUDO_UNFUSED(v66 * (float)(v66 * -0x1.d6e1480000000p+3f))) +
      (float)((float)(v66 * LANES64(v67).n64_f32[0]) *
              LANES128(v68).n128_f32[1]);
  LANES128(v69).n128_u64[0] = LANES64(v99).n64_u64[0];
  LANES128(v69).n128_u32[2] =
      vmuls_lane_f32(v66 * LANES64(v67).n64_f32[0], v68, 2);
  v70 = v66 + 0x1.1111120000000p-5f;
  LANES64(v67).n64_f32[0] = v70 * LANES64(v67).n64_f32[0];
  LANES64(v71).n64_f32[0] = LANES64(v67).n64_f32[0] * LANES128(v68).n128_f32[0];
  v72 = (float)(PSEUDO_UNFUSED(v70 * (float)(v70 * -0x1.d6e1480000000p+3f))) +
        (float)(LANES64(v67).n64_f32[0] * LANES128(v68).n128_f32[1]);
  LANES64(v67).n64_f32[0] = vmuls_lane_f32(LANES64(v67).n64_f32[0], v68, 2);
  LANES64(v71).n64_f32[1] = v72;
  v73 = vsubq_f32(vdupq_lane_s32(v67, 0), v69);
  LANES128(a1[11]).n128_u64[0] = LANES64_OF(vsub_f32(v71, v99)).n64_u64[0];
  v74 = a1[11];
  LANES128(v74).n128_u64[1] = LANES128(v73).n128_u32[2];
  v75 = vmulq_f32(v74, v74);
  LANES128(v75).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v75, v75, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
          .n64_u64[0];
  LANES128(v75).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
          .n64_u64[0];
  LANES128(v75).n128_u64[1] = LANES128(v75).n128_u64[0];
  v76 = vrsqrteq_f32(v75);
  v77 = vmulq_f32(v76, vrsqrtsq_f32(v76, vmulq_f32(v75, v76)));
  v78 = vbicq_s8(
      vmulq_f32(v74, vmulq_f32(v77, vrsqrtsq_f32(v77, vmulq_f32(v75, v77)))),
      vceqzq_f32(v75));
  v79 = a1[2];
  a1[11] = v78;
  v88 = vaddq_f32(v69, v79);
  v92 = vaddq_f32(v78, v88);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
    v85 = *((_QWORD*)GameData_212c558 + 1);
    *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
    *((_QWORD*)&GameData_21a6180 + 1) = v85;
    __cxa_guard_release((__int64)&GameData_21a6190);
  }
  math_6222e0((void*)(v96_.v96.val), &v92, &v88, (int8x16_t*)&GameData_21a6180);
  v93_.v93 = v96_.v96;
  v93_.v94 = v96_.v97;
  v93_.v95 = v96_.v98;
  v80 = LANES128(v88).n128_u32[2];
  LANES128(a1[10]).n128_u64[0] = LANES128(v88).n128_u64[0];
  v81 = a1[10];
  LANES128(v81).n128_u64[1] = v80;
  a1[10] = v81;
LABEL_20:
  if (LANES128(a1[7]).n128_u8[1] == 1 &&
      (*GameData_212d448[0] == 0 ||
       (v19 = *(_QWORD*)(*GameData_212d448[0] + 8)) == 0 ||
       (*(_BYTE*)(v19 + 114) & 0x40) == 0)) {
    memset(&v96_.v96, 0, sizeof(v96_.v96));
    GameRoutine_109ded0((__int128*)&v96_.v96, a1 + 10, 0);
    v88 = v96_.v96.val[0];
    v20 = LANES128(v96_.v96.val[0]).n128_u32[2];
    v89 = v96_.v96.val[1];
    LANES128(a1[10]).n128_u64[0] = LANES128(v96_.v96.val[0]).n128_u64[0];
    v21 = a1[10];
    LANES128(v21).n128_u64[1] = v20;
    a1[10] = v21;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
      v83 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v83;
      __cxa_guard_release((__int64)&GameData_21a6190);
    }
    v22 = a1[11];
    LANES128(v22).n128_u32[1] = 0;
    v23 = vmulq_f32(v22, v22);
    LANES128(v23).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
            .n64_u64[0];
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v23).n128_f32[0] != 0x0.0p+0f) {
      LANES128(v23).n128_u64[1] = LANES128(v23).n128_u64[0];
      v24 = vrsqrteq_f32(v23);
      v25 = vmulq_f32(v24, vrsqrtsq_f32(v24, vmulq_f32(v23, v24)));
      v26 = vbicq_s8(
          vmulq_f32(v22,
                    vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(v23, v25)))),
          vceqzq_f32(v23));
      v27 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180), v89);
      LANES128(v27).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
              .n64_u64[0];
      LANES128(v28).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v28).n128_u64[1] = 0x3F8000003F800000LL;
      LANES128(v27).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
              .n64_u64[0];
      LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
      v29 = vaddq_f32(v27, v28);
      LANES128(v27).n128_u64[0] = 0x3400000034000000LL;
      LANES128(v27).n128_u64[1] = 0x3400000034000000LL;
      v30 = vcgeq_f32(v27, v29);
      LANES128(v31).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v32).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v89, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v31).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                    COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v33).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v89, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v33).n128_i8[8] =
          vqtbl1_s8(v89, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v32).n128_i8[8] =
          vqtbl1_s8(v89, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v35 = vaddq_f32(v29, v29);
      LANES128(v29).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v29).n128_u64[1] = 0x3F0000003F000000LL;
      *(int8x8_t*)&LANES128(v34).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                    COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v36 = vsqrtq_f32(v35);
      v37 = vmulq_f32(v34, v32);
      LANES128(v34).n128_u64[0] = LANES128(v26).n128_u64[0];
      v38 = vmlsq_f32(v37, v33, v31);
      LANES128(v31).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v39 = vdivq_f32(v38, v36);
      LANES128(v34).n128_u64[1] = LANES128(v31).n128_u64[0];
      LANES128(v39).n128_u32[3] = LANES128_OF(vmulq_f32(v36, v29)).n128_u32[3];
      v40 = vbslq_s8(v30, COERCE_AS(int8x16_t, GameData_1a82dd0), v39);
      v41 = vmulq_f32(v40, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v36).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v42).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
      *(int8x8_t*)&LANES128(v42).n128_i8[8] =
          vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      v43 = vmulq_f32(v34, v42);
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v44 = vmlaq_f32(vmulq_f32(v36, v41),
                      COERCE_AS(float32x4_t, GameData_1a83800), v43);
      LANES128(v43).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v34).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v41).n128_u64[0]), 1);
      LANES128(v31).n128_u64[1] = LANES128(v43).n128_u64[0];
      LANES128(v43).n128_u64[1] = LANES128(v26).n128_u64[0];
      LANES128(v26).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v26).n128_i8[8] =
          vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v41).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v45 = vmlsq_f32(vmlaq_f32(v44, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v43, v34)),
                      v26, v31);
      LANES128(v26).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v30).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v33).n128_u64[0] = LANES128(v40).n128_u64[0];
      LANES128(v26).n128_u64[1] = LANES128(v26).n128_u64[0];
      LANES128(v28).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v33).n128_u64[1] = LANES128(v41).n128_u64[0];
      *(int8x8_t*)&LANES128(v30).n128_i8[8] =
          vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      *(int32x2_t*)&LANES128(v28).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v45).n128_u64[0]), 1);
      v46 = vmlaq_f32(vmulq_f32(v26, v45),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v33, v30));
      LANES128(v30).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v27).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v41).n128_u64[1] = LANES128(v30).n128_u64[0];
      LANES128(v30).n128_u64[1] = LANES128(v40).n128_u64[0];
      *(int8x8_t*)&LANES128(v27).n128_i8[8] =
          vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v47 = vmlsq_f32(vmlaq_f32(v46, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v30, v28)),
                      v27, v41);
      LANES128(v47).n128_u32[3] = 0;
      v92 = vaddq_f32(a1[10], v47);
      math_6222e0((void*)(v96_.v96.val), &v92, a1 + 10, &v89);
      v93_.v93 = v96_.v96;
      v93_.v94 = v96_.v97;
      v93_.v95 = v96_.v98;
    }
  }
  Quat_624bc0((void*)(v96_.v96.val), (__int64)&v93_.v93);
  v48 = v96_.v96.val[0];
  LANES128(a1[12]).n128_u64[0] = LANES128(v96_.v96.val[0]).n128_u64[0];
  LANES128(a1[12]).n128_u64[1] =
      LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0];
  v49 = a1[12];
  v50 = vmulq_f32(v49, COERCE_AS(float32x4_t, GameData_1a829d0));
  v51 = vmulq_f32(v49, v49);
  LANES128(v51).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
          .n64_u64[0];
  LANES128(v51).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
          .n64_u64[0];
  LANES128(v51).n128_u64[1] = LANES128(v51).n128_u64[0];
  v52 = vrecpeq_f32(v51);
  v53 = vmulq_f32(v52, vrecpsq_f32(v52, v51));
  v54 = vbslq_s8(vceqzq_f32(v51), v50,
                 vmulq_f32(v50, vmulq_f32(v53, vrecpsq_f32(v53, v51))));
  a1[12] = v54;
  LANES128(v51).n128_f32[0] =
      vmuls_lane_f32(LANES128(v54).n128_f32[1], v54, 2) +
      (float)(LANES128(v54).n128_f32[0] * LANES128(v54).n128_f32[3]);
  v55 = vmuls_lane_f32(LANES128(v54).n128_f32[1],
                       COERCE_AS(float32x2_t, LANES128(v54).n128_u64[0]), 1);
  LANES128(v56).n128_f64[0] =
      GameRoutine_1a09ff0(LANES128(v51).n128_f32[0] + LANES128(v51).n128_f32[0],
                          (LANES128_OF(vmulq_f32(v54, v54)).n128_f32[0] + v55) *
                                  -0x1.0000000000000p+1 +
                              0x1.0000000000000p+0);
  PSEUDO_LOW_LANE128(v56, n128_f32, LANES128(v56).n128_f64[0]);
  v87 = v56;
  v59 = *(long double*)&a1[12];
  v57 = vmuls_lane_f32(-*(float*)&v59, *(float32x4_t*)&v59, 2) +
        (float)(COERCE_FLOAT(HIDWORD(LANES128(a1[12]).n128_u64[0])) *
                *((float*)&v59 + 3));
  *(_QWORD*)&v58 = -0x1.0000000000000p+0;
  *(double*)&v59 = v57 + v57;
  if (*(double*)&v59 > 0x1.0000000000000p+0) {
    *(double*)&v59 = 0x1.0000000000000p+0;
  }
  if (*(double*)&v59 < -0x1.0000000000000p+0) {
    *(double*)&v59 = -0x1.0000000000000p+0;
  }
  v60 = GameRoutine_1a0a000(v59, v58);
  v61 = a1[12];
  *(float*)&v60 = *(double*)&v60;
  v86 = LODWORD(v60);
  *(float*)&v60 =
      vmuls_lane_f32(LANES128(v61).n128_f32[0],
                     COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]), 1);
  v62 = GameRoutine_1a09ff0(
      (float)(*(float*)&v60 +
              (float)(LANES128(v61).n128_f32[2] * LANES128(v61).n128_f32[3])) +
          (float)(*(float*)&v60 + (float)(LANES128(v61).n128_f32[2] *
                                          LANES128(v61).n128_f32[3])),
      (v55 + vmuls_lane_f32(LANES128(v61).n128_f32[2], v61, 2)) *
              -0x1.0000000000000p+1 +
          0x1.0000000000000p+0);
  v63 = v87;
  *(float*)&v62 = v62;
  LANES128(v63).n128_u32[1] = v86;
  LANES128(v63).n128_u32[2] = LODWORD(v62);
  result = vmulq_f32(v63, vdupq_n_s32(0x42652EE1u));
  LANES128(a1[13]).n128_u64[0] = LANES128(result).n128_u64[0];
  v65 = a1[13];
  LANES128(v65).n128_u64[1] = LANES128(result).n128_u32[2];
  a1[13] = v65;
  return result;
}

#pragma GCC visibility pop
