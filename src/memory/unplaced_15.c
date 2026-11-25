#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
CmdBtlCameraCutSuccessCapture_f43790(PSEUDO_X8, float32x4_t**);
__attribute__((swiftcall)) void game_hub_e1b4d0(PSEUDO_X8, _QWORD, int);
__attribute__((swiftcall)) void game_hub_e1bfe0(PSEUDO_X8, __int64, __int64,
                                                __int64*);
__int64 Manager_d55430();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_14a3920(__int64 result);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool llvm_libcxx_21_libcxx_include___memory_d2d4e0(__int64 a1);
double snd_Fade_Fade_10c830(__int64, float);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82970;
extern __int128 GameData_1a82fa0;
extern __int128 GameData_1a83840;
extern __int128 GameData_21a6120;
extern __int64 (*game_hub_UIEnemyDiscovery_vtable[])();
extern __int64* GameData_212ebc0[5];
extern __int64* GameData_212f0b8[5];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc48[5];
extern __int64 GameData_2131678;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float CmdBtlCameraCutBase_e82510(__int64, __int64);
float CmdBtlCameraCutBase_e82b40(__int64, _QWORD*);
int __cxa_guard_acquire(__int64);
void GameRoutine_d7a400(_QWORD*, __int64);
void GameRoutine_edec80(__int64*, _QWORD*);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void memory_e20800(__int64 a1, __int64* a2);
void memory_f433d0(__int64 a1);

void memory_e20800(__int64 a1, __int64* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float v23;
  bool v24;
  float32x4_t v25;
  float v26;
  unsigned __int64 v27;
  __int64 v28;
  float32x4_t v29;
  float32x4_t v30;
  int8x16_t v31;
  float v32;
  float v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;
  float32x4_t v37;
  float32x4_t* v38;
  __int64* v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  int32x4_t v43;
  int32x4_t* v44;
  __int64* v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  float v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  int v54;
  float v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  float v60;
  char v61;
  float v62;
  __int64 v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  unsigned __int8 explicit;
  float v70;
  __int128 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  struct {
    union {
      float32x4_t v75;
      int32x2_t v76;
      float v77;
    };
    __int64* v78;
    __int64 v79;
    _QWORD v80[2];
    __int128 v81;
  } f_;

  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = GameData_212f0b8[0];
  *(_BYTE*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 28) = 0;
  *(_QWORD*)(a1 + 36) = 0;
  *(_BYTE*)(a1 + 44) = 0;
  *(_QWORD*)a1 = v4 + 2;
  *(_QWORD*)(a1 + 12) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 20) = 0x3F8000003E19999ALL;
  GameRoutine_d7a400(*(_QWORD**)GameData_212ebc0[0], a1),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)a1 = game_hub_UIEnemyDiscovery_vtable;
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      296, 16, 0),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v7 = GameData_2131678;
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_DWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_DWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_WORD*)(v6 + 80) = 0;
  *(_WORD*)(v6 + 116) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_BYTE*)(v6 + 160) = 0;
  *(_BYTE*)(v6 + 288) = 0;
  *(_QWORD*)(v6 + 272) = 0;
  *(_QWORD*)(v6 + 280) = 0;
  *(_QWORD*)(v6 + 256) = 0;
  *(_QWORD*)(v6 + 264) = 0;
  *(_QWORD*)(v6 + 240) = 0;
  *(_QWORD*)(v6 + 248) = 0;
  *(_QWORD*)(v6 + 224) = 0;
  *(_QWORD*)(v6 + 232) = 0;
  *(_QWORD*)(v6 + 208) = 0;
  *(_QWORD*)(v6 + 216) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  *(_QWORD*)(v6 + 200) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_DWORD*)(v6 + 127) = 0;
  *(_QWORD*)(a1 + 72) = v6;
  *(_DWORD*)(a1 + 20) = 0;
  *(_QWORD*)v6 = v7 + 16;
  *(_DWORD*)(v6 + 48) = 0x2000;
  *(_WORD*)(v6 + 108) = 256;
  *(_DWORD*)(v6 + 112) = -1082130432;
  *(_DWORD*)(v6 + 292) = 2;
  v8 = *(_QWORD*)a1;
  *(_QWORD*)(v6 + 24) = 0;
  *(_QWORD*)(a1 + 64) = v6 + 24;
  (*(void (**)(__int64, __int64))(v8 + 24))(a1, 0),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v10 = *a2;
  v9 = a2[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  v11 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 48) = v10;
  *(_QWORD*)(a1 + 56) = v9;
  if (v11 != 0) {
    v11 = std___1___shared_weak_count___release_weak(v11),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v12 = *(_QWORD*)GameData_212dc48[0];
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v11 = __cxa_guard_acquire((__int64)&GameData_21a6130),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((_DWORD)v11 != 0) {
      v72 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v72;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  game_hub_e1b4d0((void*)(f_.v80), v11, 13),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_hub_e1bfe0((void*)(&f_.v78), v12, (__int64)f_.v80,
                  (__int64*)&GameData_21a6120),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((f_.v80[0] & 1) != 0 && (_QWORD)f_.v81 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v13, f_.v81),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v14 = f_.v78;
  v15 = f_.v79;
  if (f_.v79 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(f_.v79 + 8), 1u,
                              memory_order_relaxed);
  }
  v16 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)(a1 + 64) = v14;
  *(_QWORD*)(a1 + 72) = v15;
  if (v16 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak(v16),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v15 = *(_QWORD*)(a1 + 72);
  }
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak(v15),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v17 = f_.v79;
  if (f_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v79 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v17),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v18 = *(_QWORD*)(a1 + 56);
  v19 = GameData_212dc38[0];
  if (v18 != 0) {
    v20 = std___1___shared_weak_count_lock(v18),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v20 != 0) {
      v21 = *(_QWORD*)(a1 + 48);
      v22 = v20;
      if (v21 != 0) {
        v23 = *(float*)(*(_QWORD*)(v21 + 24) + 548LL);
        v24 = llvm_libcxx_21_libcxx_include___memory_d2d4e0(*(unsigned int*)(
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 8) + 344) + 360)),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        LANES128(v25).n128_u32[0] = 0;
        LANES128(v25).n128_u64[1] = 0;
        v26 = v23 * 0x1.3333340000000p-1f;
        if (!v24) {
          v26 = v23;
        }
        LANES128(v25).n128_f32[1] = v26;
        f_.v75 = vaddq_f32(
            vaddq_f32(v25,
                      *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 16LL) +
                                      560LL)),
            COERCE_AS(float32x4_t, GameData_1a82970));
        (*(void (**)(__int64, __n128, __n128))(
            *(_QWORD*)(*(_QWORD*)v19 + 16LL) + 40LL))(
            *(_QWORD*)v19 + 16LL, f_.v75, COERCE_AS(__n128, GameData_1a82970)),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v28 = *(_QWORD*)(a1 + 64);
        v30 = vsubq_f32(v29, f_.v75);
        v31 = vmulq_f32(v30, v30);
        LANES128(v31).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
                .n64_u64[0];
        v32 =
            (float)(LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]))))
                        .n64_f32[0] +
                    -0x1.4000000000000p+3f) /
            0x1.4000000000000p+5f;
        if (v32 <= 0x1.0000000000000p+0f) {
          v33 = v32;
        }
        else {
          v33 = 0x1.0000000000000p+0f;
        }
        v34 = *(_QWORD*)v28;
        *(float*)&v27 =
            (float)(fminf(fmaxf(v33, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                    0x1.3333340000000p-1f) +
            0x1.99999a0000000p-2f;
        if (v32 < 0x0.0p+0f) {
          *(float*)&v27 = 0x1.99999a0000000p-2f;
        }
        if (v34 != 0 && *(_DWORD*)(v34 + 16) == *(_DWORD*)(v28 + 8)) {
          v35 = *(_DWORD*)(v34 + 36);
          if (v35 != 0) {
            v36 = 0;
            v37 = vaddq_f32(
                f_.v75,
                vaddq_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82fa0),
                                      0x1.0000000000000p+0f - *(float*)&v27),
                          COERCE_AS(float32x4_t, GameData_1a82fa0)));
            do {
              if ((int)v35 > (int)v36) {
                v38 = *(float32x4_t**)(v34 + 40 + 8LL * (int)v36);
                if (v38 != nullptr) {
                  v38[1] = v37;
                  LANES128(v38[8]).n128_u8[0] = 1;
                  v35 = *(_DWORD*)(v34 + 36);
                }
              }
              ++v36;
            } while (v36 < v35);
          }
        }
        LANES64(f_.v76).n64_u64[0] = v27;
        game_14a3920(v28), v29 = COERCE_AS(__typeof__(v29),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
        v39 = *(__int64**)(a1 + 64);
        v40 = *v39;
        if (*v39 != 0 && *(_DWORD*)(v40 + 16) == *((_DWORD*)v39 + 2)) {
          v41 = *(_DWORD*)(v40 + 36);
          if (v41 != 0) {
            v42 = 0;
            v43 = vdupq_lane_s32(f_.v76, 0);
            LANES128(v43).n128_u32[3] = 0;
            do {
              if ((int)v41 > (int)v42) {
                v44 = *(int32x4_t**)(v40 + 40 + 8LL * (int)v42);
                if (v44 != nullptr) {
                  v44[2] = v43;
                  LANES128(v44[8]).n128_u8[0] = 1;
                  v41 = *(_DWORD*)(v40 + 36);
                }
              }
              ++v42;
            } while (v42 < v41);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v22),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
  snd_Fade_Fade_10c830((__int64)f_.v80, 0x0.0p+0f),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  snd_play_ff2d0((__int64)"VIB_Sin_180_100_FO", (__int64)"VIB_Sin_180_100_FO",
                 (__int64)f_.v80, 0, 0x10001u, 0, 0x0.0p+0f,
                 0x1.0000000000000p+0f),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  snd_Fade_Destroy_Fade(f_.v80),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((int)((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v19 + 912LL) + 16LL) -
             *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v19 + 912LL) + 8LL)) >>
            5) <= 1) {
    nn_os_LockMutex((__int64)&game_g_random_mutex),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v45 = game_map_MapRandom_instance__ptr[0];
    v46 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v47 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v48 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v45 + 1) = v46;
    v49 = (v48 >> 8) ^ (v47 >> 19) ^ v48 ^ v47;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v45) = v47;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v45 + 4) = v49;
    nn_os_UnlockMutex((__int64)&game_g_random_mutex),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v50 = vcvts_n_f32_u32((unsigned __int16)v49, 0x10u);
    nn_os_LockMutex((__int64)&game_g_random_mutex),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v51 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v45);
    v52 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v45 + 4);
    v53 = *(_DWORD*)v45 ^ (*(_DWORD*)v45 << 11);
    *(_DWORD*)v45 = *((_DWORD*)v45 + 1);
    *((_DWORD*)v45 + 1) = v51;
    v54 = (v53 >> 8) ^ (v52 >> 19) ^ v53 ^ v52;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v45) = v52;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v45 + 4) = v54;
    nn_os_UnlockMutex((__int64)&game_g_random_mutex),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v55 = vcvts_n_f32_u32((unsigned __int16)v54, 0x10u);
    nn_os_LockMutex((__int64)&game_g_random_mutex),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v56 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v45);
    v57 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v45 + 4);
    v58 = *(_DWORD*)v45 ^ (*(_DWORD*)v45 << 11);
    *(_DWORD*)v45 = *((_DWORD*)v45 + 1);
    *((_DWORD*)v45 + 1) = v56;
    v59 = (v58 >> 8) ^ (v57 >> 19) ^ v58 ^ v57;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v45) = v57;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v45 + 4) = v59;
    nn_os_UnlockMutex((__int64)&game_g_random_mutex),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v60 = vcvts_n_f32_u32((unsigned __int16)v59, 0x10u);
    v61 = Manager_d55430(),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v62 = 0x1.51eb860000000p-2f;
    if ((v61 & 1) == 0) {
      v62 = 0x1.0000000000000p+0f;
    }
    v63 = *(_QWORD*)(*(_QWORD*)v19 + 912LL);
    v64 = -0x1.99999a0000000p-6f;
    if (v50 < 0x1.0000000000000p-1f) {
      v64 = 0x1.99999a0000000p-6f;
    }
    v65 = v64 * v62;
    v66 = -0x1.99999a0000000p-5f;
    if (v55 < 0x1.0000000000000p-1f) {
      v66 = 0x1.99999a0000000p-5f;
    }
    v67 = -0x1.47ae140000000p-7f;
    v68 = v66 * v62;
    explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire);
    if (v60 < 0x1.0000000000000p-1f) {
      v67 = 0x1.47ae140000000p-7f;
    }
    v70 = v62 * v67;
    if ((explicit & 1) == 0) {
      f_.v77 = v70;
      v73 = __cxa_guard_acquire((__int64)&GameData_21a6130),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v70 = f_.v77;
      if (v73 != 0) {
        v74 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v74;
        __cxa_guard_release((__int64)&GameData_21a6130),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v70 = f_.v77;
      }
    }
    *(_QWORD*)&v71 = __PAIR64__(LODWORD(v68), LODWORD(v65));
    f_.v80[0] = 0x3DA3D70A3DA3D70ALL;
    *((_QWORD*)&v71 + 1) = LODWORD(v70);
    f_.v81 = v71;
    GameRoutine_edec80((__int64*)(v63 + 8), f_.v80),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

void memory_f433d0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  float v4;
  __int64 v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  __int128 v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x16_t v12;
  float32x4_t v13;
  float v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  float v27;
  float v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  struct {
    char gap0_[16];
    union {
      float32x4_t v35;
      float32x4_t v36;
    };
    float32x4_t v37;
    __int64 v38;
    __int64 v39;
    float v40;
    int v41;
    char gap72_[8];
    __int64 v42;
    __int64 v43;
    float32x4_t* v44[2];
    float32x4_t v45;
  } f_;
  float32x4_t* v46[2];

  v1 = *(_QWORD*)(a1 + 48);
  if (v1 == 0) {
    return;
  }
  if (*(_QWORD*)(v1 + 8) == -1) {
    return;
  }
  v2 = *(_QWORD*)(a1 + 64);
  if (v2 == 0 || *(_QWORD*)(v2 + 8) == -1) {
    return;
  }
  v4 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL);
  v46[0] = *(float32x4_t**)(a1 + 40);
  v46[1] = (float32x4_t*)v1;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                            memory_order_relaxed);
  CmdBtlCameraCutSuccessCapture_f43790((void*)(&f_.v37), v46);
  v5 = *(_QWORD*)(a1 + 64);
  f_.v44[0] = *(float32x4_t**)(a1 + 56);
  f_.v44[1] = (float32x4_t*)v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
  }
  CmdBtlCameraCutSuccessCapture_f43790((void*)(&f_.v45), f_.v44);
  LANES128(v6).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v6).n128_u64[1] = 0x3F0000003F000000LL;
  v8 = vmulq_f32(vaddq_f32(f_.v37, f_.v45), v6);
  v7 = COERCE_AS(float32x4_t, GameData_1a83840);
  LANES128(v8).n128_u32[3] = 0;
  if (v5 != 0) {
    f_.v35 = v8;
    std___1___shared_weak_count___release_weak(v5);
    v7 = COERCE_AS(float32x4_t, GameData_1a83840);
    v8 = f_.v35;
  }
  f_.v36 = vaddq_f32(v8, v7);
  std___1___shared_weak_count___release_weak(v1);
  if (*(_BYTE*)(a1 + 72) == 1) {
    *(_QWORD*)(a1 + 96) = LANES128(f_.v36).n128_u64[0];
    v9 = *(_OWORD*)(a1 + 96);
    DWORD2(v9) = LANES128(f_.v36).n128_u32[2];
    goto LABEL_31;
  }
  v10 = *(float32x4_t*)(a1 + 96);
  v11 = vsubq_f32(f_.v36, v10);
  v12 = vmulq_f32(v11, v11);
  LANES128(v12).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
          .n64_u64[0];
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
          .n64_u64[0];
  LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
  v14 = (float)((float)(v4 * 0x1.0aef000000000p+4f) / 0x1.f400000000000p+9f) *
        (float)((float)(LANES64_OF(vsqrt_f32(COERCE_AS(
                                       float32x2_t, LANES128(v13).n128_u64[0])))
                            .n64_f32[0] *
                        0x1.8000000000000p+2f) +
                0x1.0000000000000p+0f);
  v15 = vrsqrteq_f32(v13);
  v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v13, v15)));
  v17 = vbicq_s8(
      vmulq_f32(v11, vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v13, v16)))),
      vceqzq_f32(v13));
  v18 = fabsf(v14 * fabsf(LANES128(v17).n128_f32[0]));
  {
    __typeof__(v19) z_ = (__typeof__(v19)){0};
    LODWORD(z_) =
        DWORDn(*(_QWORD*)(a1 + 96), sizeof(*(_QWORD*)(a1 + 96)) / 4 - 1);
    v19 = z_;
  }
  if ((LANES64_OF(vmovn_s32(vcgtq_f32(v10, f_.v36))).n64_u8[0] & 1) == 0) {
    if ((LANES64_OF(vmovn_s32(vcgtq_f32(f_.v36, v10))).n64_u8[0] & 1) == 0) {
      {
        __typeof__(v20) z_ = (__typeof__(v20)){0};
        LODWORD(z_) = *(_OWORD*)(a1 + 96);
        v20 = z_;
      }
      goto LABEL_18;
    }
    v20 = LANES128(v10).n128_f32[0] + v18;
    if (!(v20 > LANES128(f_.v36).n128_f32[0])) {
      goto LABEL_18;
    }
  LABEL_16:
    v20 = LANES128(f_.v36).n128_f32[0];
    goto LABEL_18;
  }
  v20 = LANES128(v10).n128_f32[0] - v18;
  if (v20 < LANES128(f_.v36).n128_f32[0]) {
    goto LABEL_16;
  }
LABEL_18:
  LANES128(v10).n128_u32[0] = *(_QWORD*)(a1 + 104);
  v21 = fabsf(v14 * fabsf(LANES128(v17).n128_f32[1]));
  if (v19 > LANES128(f_.v36).n128_f32[1]) {
    v19 = v19 - v21;
    if (!(v19 < LANES128(f_.v36).n128_f32[1])) {
      goto LABEL_24;
    }
  LABEL_23:
    v19 = LANES128(f_.v36).n128_f32[1];
    goto LABEL_24;
  }
  if (v19 < LANES128(f_.v36).n128_f32[1]) {
    v19 = v19 + v21;
    if (v19 > LANES128(f_.v36).n128_f32[1]) {
      goto LABEL_23;
    }
  }
LABEL_24:
  v22 = fabsf(v14 * fabsf(LANES128(v17).n128_f32[2]));
  if (!(LANES128(v10).n128_f32[2] > LANES128(f_.v36).n128_f32[2])) {
    if (!(LANES128(v10).n128_f32[2] < LANES128(f_.v36).n128_f32[2])) {
      goto LABEL_30;
    }
    LANES128(v10).n128_f32[0] = LANES128(v10).n128_f32[2] + v22;
    if (!((float)(LANES128(v10).n128_f32[2] + v22) >
          LANES128(f_.v36).n128_f32[2])) {
      goto LABEL_30;
    }
  }
  else {
    LANES128(v10).n128_f32[0] = LANES128(v10).n128_f32[2] - v22;
    if (!((float)(LANES128(v10).n128_f32[2] - v22) <
          LANES128(f_.v36).n128_f32[2])) {
      goto LABEL_30;
    }
  }
  LANES128(v10).n128_u32[0] = LANES128(f_.v36).n128_u32[2];
LABEL_30:
  *(float*)(a1 + 96) = v20;
  *(float*)(a1 + 100) = v19;
  v9 = *(_OWORD*)(a1 + 96);
  DWORD2(v9) = LANES128(v10).n128_u32[0];
LABEL_31:
  DWORDn(v9, sizeof(v9) / 4 - 1) = 0;
  v23 = *(_QWORD*)(a1 + 48);
  *(_OWORD*)(a1 + 96) = v9;
  if (v23 != 0 && (v24 = std___1___shared_weak_count_lock(v23)) != 0) {
    v25 = v24;
    v26 = 0;
    f_.v42 = *(_QWORD*)(a1 + 40);
    f_.v43 = v24;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v25 = 0;
    f_.v42 = 0;
    f_.v43 = 0;
    v26 = 1;
  }
  v27 = CmdBtlCameraCutBase_e82b40(a1, &f_.v42);
  if (f_.v43 != 0) {
    std___1___shared_weak_count___release_weak(f_.v43);
  }
  v28 = v27 + 0x1.4000000000000p+1f;
  if ((v26 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak(v25);
  }
  v30 = *(float32x4_t*)(a1 + 80);
  v29 = *(float32x4_t*)(a1 + 96);
  LANES128(f_.v37).n128_u64[1] = 0;
  v31 = vaddq_f32(v29, v30);
  v32 = *(_QWORD*)(a1 + 48);
  f_.v38 = 0;
  f_.v39 = 0;
  f_.v41 = 1109393408;
  f_.v40 = v28;
  LANES128(v30).n128_u64[0] = LANES128(v31).n128_u64[0];
  LANES128(v30).n128_u64[1] = LANES128(v31).n128_u32[2];
  f_.v37 = v30;
  if (v32 != 0 && (v33 = std___1___shared_weak_count_lock(v32)) != 0) {
    *(float*)&f_.v38 =
        *(float*)(*(_QWORD*)(a1 + 40) + 32LL) + -0x1.1800000000000p+6f;
    if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v34 = v33;
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      std___1___shared_weak_count___release_weak(v34);
    }
  }
  else {
    *(float*)&f_.v38 = -0x1.be07800000000p+45f + -0x1.1800000000000p+6f;
  }
  DWORDn(f_.v38, sizeof(f_.v38) / 4 - 1) = -1056964608;
  CmdBtlCameraCutBase_e82510(a1, (__int64)&f_.v37);
  *(_BYTE*)(a1 + 72) = 0;
}

#pragma GCC visibility pop
