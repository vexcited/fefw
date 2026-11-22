#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f89400(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_MapSetup_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapSetup_Destructor_alt1(_QWORD* a1) __asm__("MapSetup_Destructor");
float game_hub_MapSetup_Setup_Hub100_A1_lambda0_Invoke(__int64 a1, __int64 a2,
                                                       float* a3);
float game_hub_MapSetup_Setup_Hub100_A1_lambda1_Invoke(__int64 a1, __int64 a2,
                                                       float* a3);
_QWORD* GameRoutine_d6c640(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void RouteNavMesh_fe7000(PSEUDO_X8, __int64 result,
                                                    __int128*, float, float);
__int64* GameRoutine_c22420(_QWORD*, unsigned __int8*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN GameData_21f4d48;
extern __int64* GameData_212d458[7];
extern __int64 GameData_212c638;
extern __int64 GameData_220f8b0;
extern __int64 fw_memory_g_heap_manager;
extern int GameData_21f4d44;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_cdcc10();
void __attribute__((noreturn)) GameRoutine_d5bb10();
void MapSetup_f88dc0_alt1(_QWORD* a1,
                          unsigned __int8** a2) __asm__("MapSetup_f88dc0");
void game_hub_MapSetup_Setup_Dng020_A2_KAI_c06_lambda0_Invoke_alt1(
    __int64 a1, __n128* a2,
    __int64
        a3) __asm__("game_hub_MapSetup_Setup_Dng020_A2_KAI_c06_lambda0_Invoke");
__attribute__((swiftcall)) void
RouteNavMesh_fe7000_alt1(PSEUDO_X8, _QWORD*, __int128*, float,
                         float) __asm__("RouteNavMesh_fe7000");
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_f89400(__int64, __int64);
void GameRoutine_d6c640_alt1(__int64*, _QWORD*) __asm__("GameRoutine_d6c640");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapSetup_Destructor(_QWORD* a1);
void MapSetup_f88dc0(__int64* a1, unsigned __int8** a2);
void game_hub_MapSetup_Setup_Dng020_A2_KAI_c06_lambda0_Invoke(__int64 a1,
                                                              _DWORD* a2,
                                                              __int64* a3);
_QWORD* GameRoutine_10181a0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void game_hub_e1a7e0(PSEUDO_X8, _QWORD*, __int64);
__int64* GameVariable_82e7c0(unsigned __int8, int);
__int64* game_9a28e0(int);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_b86fb0(__int64, int, float);
__int64 GameRoutine_ffd760(int, __int64, __int64, char);
__int64 GameVariable_82e3a0(int);
__int64 Manager_c44560(__int64 result, int);
__int64 WindLoader_c72b30(__int64 result, char);
__int64 game_104bf20(_QWORD*, const char*, __int64, const char*, __int64,
                     __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 std___1___shared_weak_count___release_weak_alt3(__int64);
char* GameRoutine_60a020(char*, const char*);
char* GameRoutine_f88b70(__int64, const char*, unsigned __int64, __int64,
                         __int64);
extern _UNKNOWN GameData_1af2366;
extern _UNKNOWN GameData_1afd9c8;
extern __int64 (*GameData_2001f18[])();
extern __int64 (*GameData_2001fa8[])();
extern __int64 (*GameData_2002028[])();
extern __int64* GameData_212ebc8[4];
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212dc50[4];
extern __int64 game_GameModeData_instance_;
extern char GameData_1a9f09e;
long double GameRoutine_104bbc0(__int64, __int64, __int64, const char*);
void GameRoutine_101b8e0(__int64, unsigned __int8*, __int64);
void GameRoutine_104b280(_QWORD*, __int64, unsigned __int64, const char*,
                         __int64, __int64);
void MapSetup_f88dc0_alt2(_QWORD*, unsigned __int8**);
void __attribute__((noreturn)) GameRoutine_101bc10();
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64);
void MapSetup_101a050(_QWORD* a1);

void MapSetup_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[8];
  *a1 = game_hub_MapSetup_vtable;
  if (v1 != 0) {
    v3 = a1[9];
    if (v1 == v3) {
      goto LABEL_8;
    }
    do {
      v4 = *(_QWORD*)(v3 - 8);
      if (v4 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v4);
      }
      v3 -= 16;
    } while (v3 != v1);
    v5 = a1[8];
    a1[9] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_8:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
  v7 = a1[5];
  if (v7 != 0) {
    v8 = a1[6];
    if (v7 == v8) {
      goto LABEL_18;
    }
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v9);
      }
      v8 -= 16;
    } while (v8 != v7);
    v10 = a1[5];
    a1[6] = v7;
    v7 = v10;
    if (v10 != 0) {
    LABEL_18:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v7);
    }
  }
  GameHr_f89400((__int64)(a1 + 2), a1[3]);
}

void MapSetup_f88dc0(__int64* a1, unsigned __int8** a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  __int64 v13;
  const char* v14;
  unsigned __int64 v15;
  bool v16;
  signed __int64 v17;
  unsigned __int8* v18;
  signed __int64 v19;
  int v20;
  signed __int64 v21;
  __int64 v22;
  __int64 v23;
  const char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float v40;
  float v41;
  float32x4_t v42;
  int8x16_t v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  unsigned __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  float32x4_t* v62;
  _QWORD* v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float v68;
  float v69;
  float32x4_t v70;
  int8x16_t v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int8** v75;
  _QWORD* v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  const char* v81;
  _QWORD* v82;
  signed __int64 v83;
  struct {
    __int64 v84;
    __int64 v85;
    __int64 v86;
  } v84_;
  float32x4_t v87;

  v3 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               64LL);
  v4 = *(_QWORD*)(v3 + 96);
  if (v4 != 0) {
    v5 = *(_QWORD*)(v4 + 24);
    v6 = *(_QWORD*)(v4 + 32);
    if (v6 == 0) {
      goto LABEL_14;
    }
  LABEL_11:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt2(v6);
    }
    goto LABEL_14;
  }
  LOWORD(v84_.v84) = 0;
  v7 = GameRoutine_c22420((_QWORD*)(v3 + 104), (unsigned __int8*)&v84_.v84);
  if ((v84_.v84 & 1) != 0 && v84_.v86 != 0) {
    v8 = v7;
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v84_.v86);
    v7 = v8;
  }
  if (v7 == nullptr) {
    v5 = 0;
    goto LABEL_14;
  }
  v10 = v7[5];
  v5 = *(_QWORD*)(v10 + 24);
  v6 = *(_QWORD*)(v10 + 32);
  if (v6 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  v82 = *(_QWORD**)(v5 + 88);
  v76 = *(_QWORD**)(v5 + 96);
  if (v82 != v76) {
    v11 = a2[1];
    if (v11 != nullptr) {
      v75 = a2;
      while (1) {
        v81 = (const char*)(*v82 + 16LL);
        v83 = strlen_alt1(v81);
        if (v11 != nullptr) {
          break;
        }
      LABEL_91:
        if (++v82 == v76) {
          return;
        }
        v11 = a2[1];
      }
      v12 = *a2;
      v13 = (__int64)&(*a2)[24 * (_QWORD)v11];
      v14 = &v81[v83];
      while (1) {
        v15 = *v12;
        v16 = (v15 & 1) == 0;
        v17 = v15 >> 1;
        if (v16) {
          v18 = v12 + 1;
        }
        else {
          v18 = *((unsigned __int8**)v12 + 2);
        }
        if (v16) {
          v19 = v17;
        }
        else {
          v19 = *((_QWORD*)v12 + 1);
        }
        if (v19 != 0) {
          if (v83 < v19) {
            goto LABEL_20;
          }
          v20 = *v18;
          v21 = v83;
          v22 = (__int64)v81;
          while (1) {
            v23 = memchr_alt1(v22, v20, v21 - v19 + 1);
            if (v23 == 0) {
              goto LABEL_20;
            }
            v24 = (const char*)v23;
            if (memcmp_alt1(v23, (__int64)v18, v19) == 0) {
              break;
            }
            v22 = (__int64)(v24 + 1);
            v21 = v14 - (v24 + 1);
            if (v21 < v19) {
              goto LABEL_20;
            }
          }
          if (v24 == v14 || v24 != v81) {
            goto LABEL_20;
          }
        }
        v25 = *v82;
        if (*v82 == 0) {
          goto LABEL_20;
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_21f4d48) != 0) {
          GameData_21f4d44 = wld_Crc32(0, "ModelModule", 0xBu);
          __cxa_guard_release_alt1((__int64)&GameData_21f4d48);
        }
        v26 = *(_QWORD*)(v25 + 512);
        v27 = v26;
        do {
          if (v27 == *(_QWORD*)(v25 + 504)) {
            goto LABEL_20;
          }
          v28 = *(_DWORD*)(v27 - 16);
          v27 -= 16;
          v26 -= 16;
        } while (v28 != GameData_21f4d44);
        if (*(_QWORD*)(v25 + 512) == v26) {
          goto LABEL_20;
        }
        v29 = *(_QWORD*)(v26 + 8);
        if (v29 == 0) {
          goto LABEL_20;
        }
        v30 = *(_QWORD*)(v29 + 32);
        if (v30 != 0) {
          v32 = *(_QWORD*)(v30 + 80);
          v31 = *(_QWORD*)(v30 + 88);
          if ((int)((unsigned __int64)(v31 - v32) >> 5) >= 1 &&
              *(_QWORD*)(GameData_220f8b0 + 8) != 0) {
            v33 = 0;
            v34 = 0;
            v78 = v13;
            while (2) {
              v35 = *(_QWORD**)(GameData_220f8b0 + 8);
              if (v35 == nullptr) {
                goto LABEL_49;
              }
              v36 = *(float32x4_t*)(v32 + v33);
              v37 = *(float32x4_t*)(v32 + v33 + 16);
              v38 = vsubq_f32(v37, v36);
              v39 = vaddq_f32(v36, v37);
              LANES128(v37).n128_u64[0] = 0x3F0000003F000000LL;
              LANES128(v37).n128_u64[1] = 0x3F0000003F000000LL;
              v40 = LANES128(v38).n128_f32[1];
              v41 = vmuls_lane_f32(
                  -0x1.0000000000000p-1f,
                  COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]), 1);
              LANES128(v38).n128_u32[1] = 0;
              v42 = vmulq_f32(v39, v37);
              v43 = vmulq_f32(v38, v38);
              LANES128(v43).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
                      .n64_u64[0];
              PSEUDO_LOW_LANE128(
                  v39, n128_f32,
                  0x1.0000000000000p-1f *
                      LANES64_OF(
                          vsqrt_f32(vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v43).n128_u64[0]))))
                          .n64_f32[0]);
              LANES128(v43).n128_u32[0] = 0;
              LANES128(v43).n128_f32[1] = v41;
              v87 = vaddq_f32(
                  v42, COERCE_AS(float32x4_t, LANES128(v43).n128_u64[0]));
              RouteNavMesh_fe7000_alt1((void*)(&v84_.v84), v35, (__int128*)&v87,
                                       LANES128(v39).n128_f32[0], v40);
              v44 = v84_.v85;
              if (v84_.v85 != 0) {
                v45 = std___1___shared_weak_count_lock_alt1(v84_.v85);
                if (v45 == 0) {
                  goto LABEL_47;
                }
                v46 = v84_.v84;
                if (v84_.v84 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16),
                                            1u, memory_order_relaxed);
                  v47 = a1;
                  v49 = (__int64*)a1[9];
                  v48 = a1[10];
                  if ((unsigned __int64)v49 >= v48) {
                    v51 = a1[8];
                    v52 = (unsigned __int64)v49 - v51;
                    v53 = ((__int64)v49 - v51) >> 4;
                    v54 = v53 + 1;
                    if ((unsigned __int64)(v53 + 1) >> 60 != 0) {
                      GameRoutine_d5bb10();
                    }
                    v55 = v48 - v51;
                    v79 = v45;
                    if (v55 >> 3 > v54) {
                      v54 = v55 >> 3;
                    }
                    if ((unsigned __int64)v55 >= 0x7FFFFFFFFFFFFFF0LL) {
                      v56 = 0xFFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v56 = v54;
                    }
                    if (v56 != 0) {
                      if (v56 >> 60 != 0) {
                        GameRoutine_60a210();
                      }
                      v57 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v56, 16,
                          0);
                      v45 = v79;
                    }
                    else {
                      v57 = 0;
                    }
                    v58 = (__int64*)(v57 + v52);
                    *v58 = v46;
                    v58[1] = v45;
                    v59 = v57 + v52 - 16 * v53;
                    v77 = v57 + 16 * v56;
                    v50 = v57 + v52 + 16;
                    memcpy_alt1(v59, v51, v52);
                    v47 = a1;
                    a1[8] = v59;
                    a1[9] = v50;
                    a1[10] = v77;
                    if (v51 != 0) {
                      v60 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v60 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v51);
                      v47 = a1;
                    }
                    v45 = v79;
                    a2 = v75;
                  }
                  else {
                    *v49 = v46;
                    v49[1] = v45;
                    v50 = (__int64)(v49 + 2);
                  }
                  v47[9] = v50;
                  v13 = v78;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) != 0) {
                  v44 = v84_.v85;
                  if (v84_.v85 == 0) {
                    goto LABEL_48;
                  }
                LABEL_47:
                  std___1___shared_weak_count___release_weak_alt2(v44);
                  goto LABEL_48;
                }
                v61 = v45;
                (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
                std___1___shared_weak_count___release_weak_alt2(v61);
                v44 = v84_.v85;
                if (v84_.v85 != 0) {
                  goto LABEL_47;
                }
              }
            LABEL_48:
              v32 = *(_QWORD*)(v30 + 80);
              v31 = *(_QWORD*)(v30 + 88);
            LABEL_49:
              ++v34;
              v33 += 32;
              if (v34 >= (int)((unsigned __int64)(v31 - v32) >> 5)) {
                break;
              }
              continue;
            }
          }
        }
        else {
          v62 = *(float32x4_t**)(v29 + 24);
          if (v62 == nullptr) {
            goto LABEL_20;
          }
          v63 = *(_QWORD**)(GameData_220f8b0 + 8);
          if (v63 == nullptr) {
            goto LABEL_20;
          }
          v64 = v62[3];
          v65 = v62[4];
          v66 = vsubq_f32(v65, v64);
          v67 = vaddq_f32(v64, v65);
          LANES128(v65).n128_u64[0] = 0x3F0000003F000000LL;
          LANES128(v65).n128_u64[1] = 0x3F0000003F000000LL;
          v68 = LANES128(v66).n128_f32[1];
          v69 = vmuls_lane_f32(
              -0x1.0000000000000p-1f,
              COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]), 1);
          LANES128(v66).n128_u32[1] = 0;
          v70 = vmulq_f32(v67, v65);
          v71 = vmulq_f32(v66, v66);
          LANES128(v71).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v71, v71, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
                  .n64_u64[0];
          PSEUDO_LOW_LANE128(
              v67, n128_f32,
              0x1.0000000000000p-1f *
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]))))
                      .n64_f32[0]);
          LANES128(v71).n128_u32[0] = 0;
          LANES128(v71).n128_f32[1] = v69;
          v87 =
              vaddq_f32(v70, COERCE_AS(float32x4_t, LANES128(v71).n128_u64[0]));
          RouteNavMesh_fe7000_alt1((void*)(&v84_.v84), v63, (__int128*)&v87,
                                   LANES128(v67).n128_f32[0], v68);
          v72 = v84_.v85;
          if (v84_.v85 == 0) {
            goto LABEL_20;
          }
          v73 = std___1___shared_weak_count_lock_alt1(v84_.v85);
          if (v73 != 0) {
            v74 = v73;
            if (v84_.v84 != 0) {
              LANES128(v87).n128_u64[0] = v84_.v84;
              LANES128(v87).n128_u64[1] = v73;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v73 + 16), 1u,
                                        memory_order_relaxed);
              GameRoutine_d6c640_alt1(a1 + 8, &v87);
              if (LANES128(v87).n128_u64[1] != 0) {
                std___1___shared_weak_count___release_weak_alt2(
                    LANES128(v87).n128_i64[1]);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              v72 = v84_.v85;
              if (v84_.v85 == 0) {
                goto LABEL_20;
              }
            }
            else {
              (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
              std___1___shared_weak_count___release_weak_alt2(v74);
              v72 = v84_.v85;
              if (v84_.v85 == 0) {
                goto LABEL_20;
              }
            }
          }
          std___1___shared_weak_count___release_weak_alt2(v72);
        }
      LABEL_20:
        v12 += 24;
        if (v12 == (unsigned __int8*)v13) {
          goto LABEL_91;
        }
      }
    }
  }
}

void MapSetup_101a050(_QWORD* a1)
{

#pragma clang fp contract(on)

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  bool v8;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v27;
  __int64 v28;
  int v29;
  bool v30;
  bool v31;
  char* v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  float v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  float v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  char* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  float v67;
  __int64 v68;
  __int64 v69;
  char* v70;
  char* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64* v76;
  float v77;
  __int64 v78;
  __int64 v79;
  char* v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  float v87;
  __int64 v88;
  __int64 v89;
  char* v90;
  char* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64* v96;
  float v97;
  __int64 v98;
  __int64 v99;
  char* v100;
  char* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64* v106;
  float v107;
  __int64 v108;
  __int64 v109;
  char* v110;
  char* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64* v116;
  float v117;
  __int64 v118;
  __int64 v119;
  char* v120;
  char* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  char v126;
  float v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  char* v131;
  char* v132;
  char* v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64* v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  int v142;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64* v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  int v182;
  __int64* v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64* v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  _QWORD* v203;
  unsigned __int64 v204;
  __int64 v205;
  _QWORD* v206;
  __int64 v207;
  signed __int64 v208;
  __int64 v209;
  unsigned __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  __int64 v213;
  unsigned __int64 v214;
  _QWORD* v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  int v220;
  struct {
    unsigned __int64 v221[4];
    unsigned __int64* v222;
  } v221_;
  struct {
    _QWORD v223[4];
    _QWORD* v224;
  } v223_;
  struct {
    _BYTE v225[32];
    _BYTE* v226;
  } v225_;
  struct {
    __int64 (**v227)();
    int v228;
    char gap172_[20];
    __int64 (***v229)();
  } v227_;
  struct {
    _BYTE v230[32];
    _BYTE* v231;
  } v230_;
  struct {
    __int64 (**v232)();
    int v233;
    char gap268_[20];
    __int64 (***v234)();
  } v232_;
  struct {
    _BYTE v235[32];
    _BYTE* v236;
  } v235_;
  struct {
    __int64 (**v237)();
    int v238;
    char gap364_[20];
    __int64 (***v239)();
  } v237_;
  struct {
    _BYTE v240[32];
    _BYTE* v241;
  } v240_;
  struct {
    __int64 (**v242)();
    int v243;
    char gap460_[20];
    __int64 (***v244)();
  } v242_;
  struct {
    _BYTE v245[32];
    _BYTE* v246;
  } v245_;
  struct {
    __int64 (**v247)();
    int v248;
    char gap556_[20];
    __int64 (***v249)();
  } v247_;
  struct {
    _BYTE v250[32];
    _BYTE* v251;
  } v250_;
  struct {
    __int64 (**v252)();
    int v253;
    char gap652_[20];
    __int64 (***v254)();
  } v252_;
  struct {
    _BYTE v255[32];
    _BYTE* v256;
  } v255_;
  struct {
    __int64 (**v257)();
    int v258;
    char gap748_[20];
    __int64 (***v259)();
  } v257_;
  struct {
    _BYTE v260[32];
    _BYTE* v261;
  } v260_;
  struct {
    __int64 (**v262)();
    int v263;
    char gap844_[20];
    __int64 (***v264)();
  } v262_;
  struct {
    __int64 v265;
    void* v266;
    char* v267;
    __int64 v268;
  } v265_;
  struct {
    _QWORD v269[4];
    _QWORD* v270;
  } v269_;
  struct {
    unsigned __int8* v271;
    __int64 v272;
    __int64 v273;
    char gap984_[8];
    unsigned __int8** v274;
  } v271_;

  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)GameData_212dbc0[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbc0[0] + 16LL) & 1) == 0) {
    goto LABEL_2;
  }
  v22 = *(_QWORD*)(v2 + 24);
  if (v22 != 26) {
    goto LABEL_323;
  }
  v23 = *(_QWORD*)(v2 + 32);
  if (*(_QWORD*)v23 != 0x2F6275482F70614DLL |
          *(_QWORD*)(v23 + 8) != 0x2F3030315F627548LL ||
      *(_QWORD*)(v23 + 16) != 0x5F3030315F627548LL ||
      *(_WORD*)(v23 + 24) != 12609) {
    v27 = *(_QWORD*)(v23 + 8);
    v28 = *(_QWORD*)(v23 + 16);
    v8 = *(_QWORD*)v23 == 0x2F6275482F70614DLL;
    v29 = *(unsigned __int16*)(v23 + 24);
    v30 = v8 && v27 == 0x2F3030315F627548LL;
    v31 = v30 && v28 == 0x5F3130315F627548LL;
    if (!v31 || v29 != 12609) {
      goto LABEL_230;
    }
  }
  v33 = GameRoutine_f88b70((__int64)a1, "Obelisk_KAI", 0xBu,
                           (__int64)"Bg_Obelisk_A000", 15),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = GameData_212dc50[0];
  if (v33 == nullptr) {
    v43 = 0;
    goto LABEL_76;
  }
  v35 = v33;
  {
    long double
        r_ = GameRoutine_104bbc0((__int64)v33, (__int64)"EmissionColor", 13,
                                 "Mat_Stn_Crystal_000"),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    unsigned __int128 w_ = COERCE_UNSIGNED_INT128(r_);
    v220 = DWORDn(w_, sizeof(w_) / 4 - 1);
  }
  v265_.v265 = (__int64)GameData_2001f18;
  v269_.v269[0] = &v265_.v265;
  LODWORD(v265_.v266) = v220;
  GameRoutine_104b280(v35, (__int64)"EmissionColor", 0xDu,
                      "Mat_Stn_Crystal_000", 19, (__int64)&v265_.v265),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((__int64*)v269_.v269[0] == &v265_.v265) {
    v37 = 32;
  }
  else {
    if (v269_.v269[0] == 0) {
      goto LABEL_65;
    }
    v37 = 40;
  }
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)v269_.v269[0] + v37))(v269_.v269[0],
                                                                 v36),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_65:
  v271_.v274 = nullptr;
  game_104bf20(v35, "Gim_Obelisk_Crystal_KAI", 23, "Loc_Eff_Obelisk_A000", 20,
               (__int64)&v271_.v271),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v271_.v274 == &v271_.v271) {
    v45 = 32;
  }
  else {
    if (v271_.v274 == nullptr) {
      goto LABEL_70;
    }
    v45 = 40;
  }
  (*(void (**)(unsigned __int8**, __int64)) & (*v271_.v274)[v45])(v271_.v274,
                                                                  v44),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_70:
  v46 = GameVariable_82e7c0(1u, 1),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v47 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v48 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v46),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v48 != 0) {
      if (*(int*)(v48 + 32) <= 0) {
        v47 = 0x0.0p+0f;
      }
      else {
        v47 = 0x1.0000000000000p+0f;
      }
    }
  }
  v49 = *(_QWORD*)v34;
  *((float*)v35 + 14) = v47;
  v43 = v220;
  *(_QWORD*)(v49 + 8) = v35;
LABEL_76:
  v50 = GameRoutine_f88b70((__int64)a1, "Obelisk_DIETRICH", 0x10u,
                           (__int64)"Bg_Obelisk_A001", 15),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v50 == nullptr) {
    goto LABEL_93;
  }
  v51 = v50;
  v262_.v262 = GameData_2001f18;
  v262_.v263 = v43;
  v262_.v264 = &v262_.v262;
  GameRoutine_104b280(v50, (__int64)"EmissionColor", 0xDu,
                      "Mat_Stn_Crystal_000", 19, (__int64)&v262_.v262),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v262_.v264 == &v262_.v262) {
    v53 = 4;
  }
  else {
    if (v262_.v264 == nullptr) {
      goto LABEL_82;
    }
    v53 = 5;
  }
  ((void (*)(__int64 (***)(void), __int64))(*v262_.v264)[v53])(v262_.v264, v52),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_82:
  v260_.v261 = nullptr;
  game_104bf20(v51, "Gim_Obelisk_Crystal_DIT", 23, "Loc_Eff_Obelisk_A001", 20,
               (__int64)v260_.v260),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v260_.v261 == v260_.v260) {
    v55 = 32;
  }
  else {
    if (v260_.v261 == nullptr) {
      goto LABEL_87;
    }
    v55 = 40;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v260_.v261 + v55))(v260_.v261, v54),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_87:
  v56 = GameVariable_82e7c0(2u, 1),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v57 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v58 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v56),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v58 != 0) {
      if (*(int*)(v58 + 32) <= 0) {
        v57 = 0x0.0p+0f;
      }
      else {
        v57 = 0x1.0000000000000p+0f;
      }
    }
  }
  v59 = *(_QWORD*)v34;
  *((float*)v51 + 14) = v57;
  *(_QWORD*)(v59 + 16) = v51;
LABEL_93:
  v60 = GameRoutine_f88b70((__int64)a1, "Obelisk_THEODORA", 0x10u,
                           (__int64)"Bg_Obelisk_A002", 15),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v60 == nullptr) {
    goto LABEL_110;
  }
  v61 = v60;
  v257_.v257 = GameData_2001f18;
  v257_.v258 = v43;
  v257_.v259 = &v257_.v257;
  GameRoutine_104b280(v60, (__int64)"EmissionColor", 0xDu,
                      "Mat_Stn_Crystal_000", 19, (__int64)&v257_.v257),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v257_.v259 == &v257_.v257) {
    v63 = 4;
  }
  else {
    if (v257_.v259 == nullptr) {
      goto LABEL_99;
    }
    v63 = 5;
  }
  ((void (*)(__int64 (***)(void), __int64))(*v257_.v259)[v63])(v257_.v259, v62),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_99:
  v255_.v256 = nullptr;
  game_104bf20(v61, "Gim_Obelisk_Crystal_SEO", 23, "Loc_Eff_Obelisk_A002", 20,
               (__int64)v255_.v255),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v255_.v256 == v255_.v255) {
    v65 = 32;
  }
  else {
    if (v255_.v256 == nullptr) {
      goto LABEL_104;
    }
    v65 = 40;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v255_.v256 + v65))(v255_.v256, v64),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_104:
  v66 = GameVariable_82e7c0(3u, 1),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v67 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v68 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v66),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v68 != 0) {
      if (*(int*)(v68 + 32) <= 0) {
        v67 = 0x0.0p+0f;
      }
      else {
        v67 = 0x1.0000000000000p+0f;
      }
    }
  }
  v69 = *(_QWORD*)v34;
  *((float*)v61 + 14) = v67;
  *(_QWORD*)(v69 + 24) = v61;
LABEL_110:
  v70 = GameRoutine_f88b70((__int64)a1, "Obelisk_LEDA", 0xCu,
                           (__int64)"Bg_Obelisk_A003", 15),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v70 == nullptr) {
    goto LABEL_127;
  }
  v71 = v70;
  v252_.v252 = GameData_2001f18;
  v252_.v253 = v43;
  v252_.v254 = &v252_.v252;
  GameRoutine_104b280(v70, (__int64)"EmissionColor", 0xDu,
                      "Mat_Stn_Crystal_000", 19, (__int64)&v252_.v252),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v252_.v254 == &v252_.v252) {
    v73 = 4;
  }
  else {
    if (v252_.v254 == nullptr) {
      goto LABEL_116;
    }
    v73 = 5;
  }
  ((void (*)(__int64 (***)(void), __int64))(*v252_.v254)[v73])(v252_.v254, v72),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_116:
  v250_.v251 = nullptr;
  game_104bf20(v71, "Gim_Obelisk_Crystal_LED", 23, "Loc_Eff_Obelisk_A003", 20,
               (__int64)v250_.v250),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v250_.v251 == v250_.v250) {
    v75 = 32;
  }
  else {
    if (v250_.v251 == nullptr) {
      goto LABEL_121;
    }
    v75 = 40;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v250_.v251 + v75))(v250_.v251, v74),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_121:
  v76 = GameVariable_82e7c0(4u, 1),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v77 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v78 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v76),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v78 != 0) {
      if (*(int*)(v78 + 32) <= 0) {
        v77 = 0x0.0p+0f;
      }
      else {
        v77 = 0x1.0000000000000p+0f;
      }
    }
  }
  v79 = *(_QWORD*)v34;
  *((float*)v71 + 14) = v77;
  *(_QWORD*)(v79 + 32) = v71;
LABEL_127:
  v80 = GameRoutine_f88b70((__int64)a1, "Obelisk_BERTRAND", 0x10u,
                           (__int64)"Bg_Obelisk_A004", 15),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v80 == nullptr) {
    goto LABEL_144;
  }
  v81 = v80;
  v247_.v247 = GameData_2001f18;
  v247_.v248 = v43;
  v247_.v249 = &v247_.v247;
  GameRoutine_104b280(v80, (__int64)"EmissionColor", 0xDu,
                      "Mat_Stn_Crystal_000", 19, (__int64)&v247_.v247),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v247_.v249 == &v247_.v247) {
    v83 = 4;
  }
  else {
    if (v247_.v249 == nullptr) {
      goto LABEL_133;
    }
    v83 = 5;
  }
  ((void (*)(__int64 (***)(void), __int64))(*v247_.v249)[v83])(v247_.v249, v82),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_133:
  v245_.v246 = nullptr;
  game_104bf20(v81, "Gim_Obelisk_Crystal_BEL", 23, "Loc_Eff_Obelisk_A004", 20,
               (__int64)v245_.v245),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v245_.v246 == v245_.v245) {
    v85 = 32;
  }
  else {
    if (v245_.v246 == nullptr) {
      goto LABEL_138;
    }
    v85 = 40;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v245_.v246 + v85))(v245_.v246, v84),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_138:
  v86 = GameVariable_82e7c0(5u, 1),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v87 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v88 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v86),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v88 != 0) {
      if (*(int*)(v88 + 32) <= 0) {
        v87 = 0x0.0p+0f;
      }
      else {
        v87 = 0x1.0000000000000p+0f;
      }
    }
  }
  v89 = *(_QWORD*)v34;
  *((float*)v81 + 14) = v87;
  *(_QWORD*)(v89 + 40) = v81;
LABEL_144:
  v90 = GameRoutine_f88b70((__int64)a1, "Obelisk_TALIMOON", 0x10u,
                           (__int64)"Bg_Obelisk_A005", 15),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v90 == nullptr) {
    goto LABEL_161;
  }
  v91 = v90;
  v242_.v242 = GameData_2001f18;
  v242_.v243 = v43;
  v242_.v244 = &v242_.v242;
  GameRoutine_104b280(v90, (__int64)"EmissionColor", 0xDu,
                      "Mat_Stn_Crystal_000", 19, (__int64)&v242_.v242),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v242_.v244 == &v242_.v242) {
    v93 = 4;
  }
  else {
    if (v242_.v244 == nullptr) {
      goto LABEL_150;
    }
    v93 = 5;
  }
  ((void (*)(__int64 (***)(void), __int64))(*v242_.v244)[v93])(v242_.v244, v92),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_150:
  v240_.v241 = nullptr;
  game_104bf20(v91, "Gim_Obelisk_Crystal_TAL", 23, "Loc_Eff_Obelisk_A005", 20,
               (__int64)v240_.v240),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v240_.v241 == v240_.v240) {
    v95 = 32;
  }
  else {
    if (v240_.v241 == nullptr) {
      goto LABEL_155;
    }
    v95 = 40;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v240_.v241 + v95))(v240_.v241, v94),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_155:
  v96 = GameVariable_82e7c0(6u, 1),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v97 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v98 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v96),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v98 != 0) {
      if (*(int*)(v98 + 32) <= 0) {
        v97 = 0x0.0p+0f;
      }
      else {
        v97 = 0x1.0000000000000p+0f;
      }
    }
  }
  v99 = *(_QWORD*)v34;
  *((float*)v91 + 14) = v97;
  *(_QWORD*)(v99 + 48) = v91;
LABEL_161:
  v100 = GameRoutine_f88b70((__int64)a1, "Obelisk_ORGEL", 0xDu,
                            (__int64)"Bg_Obelisk_A006", 15),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v100 == nullptr) {
    goto LABEL_178;
  }
  v101 = v100;
  v237_.v237 = GameData_2001f18;
  v237_.v238 = v43;
  v237_.v239 = &v237_.v237;
  GameRoutine_104b280(v100, (__int64)"EmissionColor", 0xDu,
                      "Mat_Stn_Crystal_000", 19, (__int64)&v237_.v237),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v237_.v239 == &v237_.v237) {
    v103 = 4;
  }
  else {
    if (v237_.v239 == nullptr) {
      goto LABEL_167;
    }
    v103 = 5;
  }
  ((void (*)(__int64 (***)(void), __int64))(*v237_.v239)[v103])(v237_.v239,
                                                                v102),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_167:
  v235_.v236 = nullptr;
  game_104bf20(v101, "Gim_Obelisk_Crystal_ORH", 23, "Loc_Eff_Obelisk_A006", 20,
               (__int64)v235_.v235),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v235_.v236 == v235_.v235) {
    v105 = 32;
  }
  else {
    if (v235_.v236 == nullptr) {
      goto LABEL_172;
    }
    v105 = 40;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v235_.v236 + v105))(v235_.v236,
                                                               v104),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_172:
  v106 = GameVariable_82e7c0(7u, 1),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v107 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v108 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v106),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v108 != 0) {
      if (*(int*)(v108 + 32) <= 0) {
        v107 = 0x0.0p+0f;
      }
      else {
        v107 = 0x1.0000000000000p+0f;
      }
    }
  }
  v109 = *(_QWORD*)v34;
  *((float*)v101 + 14) = v107;
  *(_QWORD*)(v109 + 56) = v101;
LABEL_178:
  v110 = GameRoutine_f88b70((__int64)a1, "Obelisk_ANATOLIA", 0x10u,
                            (__int64)"Bg_Obelisk_A007", 15),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v110 == nullptr) {
    goto LABEL_195;
  }
  v111 = v110;
  v232_.v232 = GameData_2001f18;
  v232_.v233 = v43;
  v232_.v234 = &v232_.v232;
  GameRoutine_104b280(v110, (__int64)"EmissionColor", 0xDu,
                      "Mat_Stn_Crystal_000", 19, (__int64)&v232_.v232),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v232_.v234 == &v232_.v232) {
    v113 = 4;
  }
  else {
    if (v232_.v234 == nullptr) {
      goto LABEL_184;
    }
    v113 = 5;
  }
  ((void (*)(__int64 (***)(void), __int64))(*v232_.v234)[v113])(v232_.v234,
                                                                v112),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_184:
  v230_.v231 = nullptr;
  game_104bf20(v111, "Gim_Obelisk_Crystal_ANH", 23, "Loc_Eff_Obelisk_A007", 20,
               (__int64)v230_.v230),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v230_.v231 == v230_.v230) {
    v115 = 32;
  }
  else {
    if (v230_.v231 == nullptr) {
      goto LABEL_189;
    }
    v115 = 40;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v230_.v231 + v115))(v230_.v231,
                                                               v114),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_189:
  v116 = GameVariable_82e7c0(8u, 1),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v117 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v118 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v116),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v118 != 0) {
      if (*(int*)(v118 + 32) <= 0) {
        v117 = 0x0.0p+0f;
      }
      else {
        v117 = 0x1.0000000000000p+0f;
      }
    }
  }
  v119 = *(_QWORD*)v34;
  *((float*)v111 + 14) = v117;
  *(_QWORD*)(v119 + 64) = v111;
LABEL_195:
  v120 = GameRoutine_f88b70((__int64)a1, "Obelisk_Part2", 0xDu,
                            (__int64)"Bg_Obelisk_A009", 15),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v120 != nullptr) {
    v121 = v120;
    v227_.v227 = GameData_2001f18;
    v227_.v228 = v43;
    v227_.v229 = &v227_.v227;
    GameRoutine_104b280(v120, (__int64)"EmissionColor", 0xDu,
                        "Mat_Stn_Crystal_000", 19, (__int64)&v227_.v227),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v227_.v229 == &v227_.v227) {
      v123 = 4;
    }
    else {
      if (v227_.v229 == nullptr) {
        goto LABEL_201;
      }
      v123 = 5;
    }
    ((void (*)(__int64 (***)(void), __int64))(*v227_.v229)[v123])(v227_.v229,
                                                                  v122),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_201:
    v225_.v226 = nullptr;
    game_104bf20(v121, "Gim_Obelisk_Crystal_Chapter2", 28,
                 "Loc_Eff_Obelisk_A009", 20, (__int64)v225_.v225),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v225_.v226 == v225_.v225) {
      v125 = 32;
    }
    else {
      if (v225_.v226 == nullptr) {
        goto LABEL_206;
      }
      v125 = 40;
    }
    (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v225_.v226 + v125))(v225_.v226,
                                                                 v124),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_206:
    v126 = GameVariable_82e3a0(2),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v127 = 0x0.0p+0f;
    v223_.v223[0] = GameData_2001fa8;
    v223_.v224 = v223_.v223;
    if ((v126 & 1) != 0) {
      v127 = 0x1.0000000000000p+0f;
    }
    *((float*)v121 + 14) = v127;
    game_104bf20(v121, "Gim_Obelisk_DarkAura_Loop", 25, "Loc_Eff_Obelisk_A009",
                 20, (__int64)v223_.v223),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v223_.v224 == v223_.v223) {
      v129 = 32;
    }
    else {
      if (v223_.v224 == nullptr) {
      LABEL_213:
        *(_QWORD*)(*(_QWORD*)v34 + 72LL) = v121;
        goto LABEL_214;
      }
      v129 = 40;
    }
    (*(void (**)(_QWORD*, __int64))(*v223_.v224 + v129))(v223_.v224, v128),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_213;
  }
LABEL_214:
  v221_.v221[1] = (unsigned __int64)&GameData_1af2366;
  v221_.v221[0] = game_HashString((__int64)&GameData_1af2366),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0) {
    v130 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v221_.v221),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v130 != 0 && *(_DWORD*)(v130 + 32) != 0) {
      v131 = GameRoutine_f88b70((__int64)a1, "Emblem_SOT", 0xAu,
                                (__int64)"Bg_Obelisk_A008_001", 19),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v131 == nullptr) {
        goto LABEL_228;
      }
      v132 = "Gim_Obelisk_Emblem_SOT";
    LABEL_222:
      v133 = v131;
      v221_.v222 = nullptr;
      game_104bf20(v131, v132, 22, "Loc_Eff_Obelisk_A008", 20,
                   (__int64)v221_.v221),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v104 = COERCE_AS(__typeof__(v104),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v112 = COERCE_AS(__typeof__(v112),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v122 = COERCE_AS(__typeof__(v122),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v124 = COERCE_AS(__typeof__(v124),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v128 = COERCE_AS(__typeof__(v128),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v134 = COERCE_AS(__typeof__(v134),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v135 = COERCE_AS(__typeof__(v135),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v136 = COERCE_AS(__typeof__(v136),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v200 = COERCE_AS(__typeof__(v200),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v201 = COERCE_AS(__typeof__(v201),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v202 = COERCE_AS(__typeof__(v202),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v92 = COERCE_AS(__typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v94 = COERCE_AS(__typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v221_.v222 == v221_.v221) {
        v137 = 32;
      }
      else {
        if (v221_.v222 == nullptr) {
        LABEL_227:
          *((_DWORD*)v133 + 14) = 1065353216;
          goto LABEL_228;
        }
        v137 = 40;
      }
      (*(void (**)(unsigned __int64*, __int64, __int64, __int64))(
          *v221_.v222 + v137))(v221_.v222, v134, v135, v136),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v104 = COERCE_AS(__typeof__(v104),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v112 = COERCE_AS(__typeof__(v112),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v122 = COERCE_AS(__typeof__(v122),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v124 = COERCE_AS(__typeof__(v124),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v128 = COERCE_AS(__typeof__(v128),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v134 = COERCE_AS(__typeof__(v134),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v135 = COERCE_AS(__typeof__(v135),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v136 = COERCE_AS(__typeof__(v136),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v200 = COERCE_AS(__typeof__(v200),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v201 = COERCE_AS(__typeof__(v201),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v202 = COERCE_AS(__typeof__(v202),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v92 = COERCE_AS(__typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v94 = COERCE_AS(__typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_227;
    }
  }
  if ((GameRoutine_ffd760(16, (__int64)&GameData_1a9f09e, 0, 1) & 1) != 0) {
    v131 = GameRoutine_f88b70((__int64)a1, "Emblem_FOT", 0xAu,
                              (__int64)"Bg_Obelisk_A008_001", 19),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v131 != nullptr) {
      v132 = "Gim_Obelisk_Emblem_FOT";
      goto LABEL_222;
    }
  }
LABEL_228:
  if ((*(_BYTE*)(v2 + 16) & 1) == 0) {
    goto LABEL_2;
  }
  v22 = *(_QWORD*)(v2 + 24);
  if (v22 != 26) {
    goto LABEL_323;
  }
LABEL_230:
  v138 = *(__int64**)(v2 + 32);
  v139 = *v138;
  v140 = v138[1];
  v141 = v138[2];
  v142 = *((unsigned __int16*)v138 + 12);
  if (v139 != 0x2F676E442F70614DLL | v140 != 0x2F3232305F676E44LL ||
      v141 != 0x5F3232305F676E44LL || v142 != 12609) {
    goto LABEL_325;
  }
  LOBYTE(v265_.v265) = 6;
  *(_DWORD*)((char*)&v265_.v265 + 1) = 3683376;
  v146 = fw_memory_g_heap_manager_ptr;
  v147 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        40, 16, 0),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(v147 + 38) = 0;
  v271_.v271 = (_BYTE*)((*(__int64 (*)[2])0x28LL) + 1);
  v271_.v272 = 38;
  v271_.v273 = v147;
  *(_QWORD*)(v147 + 16) = 0xE3AD82E3BB83E3B6LL;
  *(_QWORD*)(v147 + 24) = 0xAA83E39083E3A383LL;
  *(_QWORD*)(v147 + 30) = 0xBC83E3A282E3AA83LL;
  *(_QWORD*)v147 = 0xE95FB982E7A08BE6LL;
  *(_QWORD*)(v147 + 8) = 0x82E35F81B0E58B96LL;
  GameRoutine_101b8e0((__int64)a1, (unsigned __int8*)&v265_.v265,
                      (__int64)&v271_.v271),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((unsigned __int8)v271_.v271 & 1) != 0 && v271_.v273 != 0) {
    v148 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v148 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v148, v271_.v273),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v265_.v265 & 1) != 0 && v265_.v267 != nullptr) {
    v149 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v149 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v149,
                                       (__int64)v265_.v267),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v150 = *(_QWORD*)v146;
  LOBYTE(v265_.v265) = 6;
  *(_DWORD*)((char*)&v265_.v265 + 1) = 3290160;
  v151 = fw_memory_HeapManager_Allocate(v150, 40, 16, 0),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(v151 + 35) = 0;
  v271_.v271 = (_BYTE*)((*(__int64 (*)[2])0x28LL) + 1);
  v271_.v272 = 35;
  v271_.v273 = v151;
  *(_DWORD*)(v151 + 31) = -1551703162;
  *(_QWORD*)v151 = 0xE95FB982E7A08BE6LL;
  *(_QWORD*)(v151 + 8) = 0x82E35F81B0E58B96LL;
  *(_QWORD*)(v151 + 16) = 0xE3AB82E3BB83E3B6LL;
  *(_QWORD*)(v151 + 24) = 0x8683E39F83E3A983LL;
  GameRoutine_101b8e0((__int64)a1, (unsigned __int8*)&v265_.v265,
                      (__int64)&v271_.v271),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((unsigned __int8)v271_.v271 & 1) != 0 && v271_.v273 != 0) {
    v152 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v152 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v152, v271_.v273),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v265_.v265 & 1) != 0 && v265_.v267 != nullptr) {
    v153 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v153 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v153,
                                       (__int64)v265_.v267),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v154 = *(_QWORD*)v146;
  LOBYTE(v265_.v265) = 6;
  *(_DWORD*)((char*)&v265_.v265 + 1) = 3224624;
  v155 = fw_memory_HeapManager_Allocate(v154, 40, 16, 0),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(v155 + 32) = 0;
  v271_.v271 = (_BYTE*)((*(__int64 (*)[2])0x28LL) + 1);
  v271_.v272 = 32;
  v271_.v273 = v155;
  *(_QWORD*)v155 = 0xE95FB982E7A08BE6LL;
  *(_QWORD*)(v155 + 8) = 0x82E35F81B0E58B96LL;
  *(_QWORD*)(v155 + 16) = 0xE39683E3BB83E3B6LL;
  *(_QWORD*)(v155 + 24) = 0x8983E3A482E3AC83LL;
  GameRoutine_101b8e0((__int64)a1, (unsigned __int8*)&v265_.v265,
                      (__int64)&v271_.v271),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((unsigned __int8)v271_.v271 & 1) != 0 && v271_.v273 != 0) {
    v156 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v156 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v156, v271_.v273),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v265_.v265 & 1) != 0 && v265_.v267 != nullptr) {
    v157 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v157 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v157,
                                       (__int64)v265_.v267),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v158 = *(_QWORD*)v146;
  LOBYTE(v265_.v265) = 6;
  *(_DWORD*)((char*)&v265_.v265 + 1) = 3355696;
  v159 = fw_memory_HeapManager_Allocate(v158, 40, 16, 0),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(v159 + 38) = 0;
  v271_.v271 = (_BYTE*)((*(__int64 (*)[2])0x28LL) + 1);
  v271_.v272 = 38;
  v271_.v273 = v159;
  *(_QWORD*)(v159 + 16) = 0xE38883E3BB83E3B6LL;
  *(_QWORD*)(v159 + 24) = 0x8783E3A482E3A983LL;
  *(_QWORD*)(v159 + 30) = 0x8883E3B383E38783LL;
  *(_QWORD*)v159 = 0xE95FB982E7A08BE6LL;
  *(_QWORD*)(v159 + 8) = 0x82E35F81B0E58B96LL;
  GameRoutine_101b8e0((__int64)a1, (unsigned __int8*)&v265_.v265,
                      (__int64)&v271_.v271),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((unsigned __int8)v271_.v271 & 1) != 0 && v271_.v273 != 0) {
    v160 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v160 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v160, v271_.v273),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v265_.v265 & 1) != 0 && v265_.v267 != nullptr) {
    v161 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v161 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v161,
                                       (__int64)v265_.v267),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v162 = *(_QWORD*)v146;
  LOBYTE(v265_.v265) = 6;
  *(_DWORD*)((char*)&v265_.v265 + 1) = 3486768;
  v163 = fw_memory_HeapManager_Allocate(v162, 40, 16, 0),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(v163 + 38) = 0;
  v271_.v271 = (_BYTE*)((*(__int64 (*)[2])0x28LL) + 1);
  v271_.v272 = 38;
  v271_.v273 = v163;
  *(_QWORD*)(v163 + 16) = 0xE3B482E3BB83E3B6LL;
  *(_QWORD*)(v163 + 24) = 0x8F83E38983E38383LL;
  *(_QWORD*)(v163 + 30) = 0x8983E3B383E38F83LL;
  *(_QWORD*)v163 = 0xE95FB982E7A08BE6LL;
  *(_QWORD*)(v163 + 8) = 0x82E35F81B0E58B96LL;
  GameRoutine_101b8e0((__int64)a1, (unsigned __int8*)&v265_.v265,
                      (__int64)&v271_.v271),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((unsigned __int8)v271_.v271 & 1) != 0 && v271_.v273 != 0) {
    v164 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v164 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v164, v271_.v273),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v265_.v265 & 1) != 0 && v265_.v267 != nullptr) {
    v165 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v165 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v165,
                                       (__int64)v265_.v267),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v166 = *(_QWORD*)v146;
  LOBYTE(v265_.v265) = 6;
  *(_DWORD*)((char*)&v265_.v265 + 1) = 3552304;
  v167 = fw_memory_HeapManager_Allocate(v166, 40, 16, 0),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(v167 + 38) = 0;
  v271_.v271 = (_BYTE*)((*(__int64 (*)[2])0x28LL) + 1);
  v271_.v272 = 38;
  v271_.v273 = v167;
  *(_QWORD*)(v167 + 16) = 0xE3A282E3BB83E3B8LL;
  *(_QWORD*)(v167 + 24) = 0xBF82E3A182E3B483LL;
  *(_QWORD*)(v167 + 30) = 0xAB83E3BC83E3BF82LL;
  *(_QWORD*)v167 = 0xE95FB982E7A08BE6LL;
  *(_QWORD*)(v167 + 8) = 0x82E35F81B0E58B96LL;
  GameRoutine_101b8e0((__int64)a1, (unsigned __int8*)&v265_.v265,
                      (__int64)&v271_.v271),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((unsigned __int8)v271_.v271 & 1) != 0 && v271_.v273 != 0) {
    v168 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v168 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v168, v271_.v273),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v265_.v265 & 1) != 0 && v265_.v267 != nullptr) {
    v169 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v169 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v169,
                                       (__int64)v265_.v267),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v170 = *(_QWORD*)v146;
  LOBYTE(v265_.v265) = 6;
  *(_DWORD*)((char*)&v265_.v265 + 1) = 3421232;
  v171 = fw_memory_HeapManager_Allocate(v170, 40, 16, 0),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(v171 + 35) = 0;
  v271_.v271 = (_BYTE*)((*(__int64 (*)[2])0x28LL) + 1);
  v271_.v272 = 35;
  v271_.v273 = v171;
  *(_DWORD*)(v171 + 31) = -1417419894;
  *(_QWORD*)v171 = 0xE95FB982E7A08BE6LL;
  *(_QWORD*)(v171 + 8) = 0x82E35F81B0E58B96LL;
  *(_QWORD*)(v171 + 16) = 0xE3A882E3BB83E3B8LL;
  *(_QWORD*)(v171 + 24) = 0x8A83E3BC83E3BF82LL;
  GameRoutine_101b8e0((__int64)a1, (unsigned __int8*)&v265_.v265,
                      (__int64)&v271_.v271),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((unsigned __int8)v271_.v271 & 1) != 0 && v271_.v273 != 0) {
    v172 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v172 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v172, v271_.v273),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v265_.v265 & 1) != 0 && v265_.v267 != nullptr) {
    v173 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v173 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v173,
                                       (__int64)v265_.v267),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v174 = *(_QWORD*)v146;
  LOBYTE(v265_.v265) = 6;
  *(_DWORD*)((char*)&v265_.v265 + 1) = 3617840;
  v175 = fw_memory_HeapManager_Allocate(v174, 40, 16, 0),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v122 = COERCE_AS(__typeof__(v122),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v135 = COERCE_AS(__typeof__(v135),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v200 = COERCE_AS(__typeof__(v200),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v201 = COERCE_AS(__typeof__(v201),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v202 = COERCE_AS(__typeof__(v202),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(v175 + 35) = 0;
  v271_.v271 = (_BYTE*)((*(__int64 (*)[2])0x28LL) + 1);
  v271_.v272 = 35;
  v271_.v273 = v175;
  *(_DWORD*)(v175 + 31) = -1182604375;
  *(_QWORD*)v175 = 0xE95FB982E7A08BE6LL;
  *(_QWORD*)(v175 + 8) = 0x82E35F81B0E58B96LL;
  *(_QWORD*)(v175 + 16) = 0xE3A282E3BB83E3B8LL;
  *(_QWORD*)(v175 + 24) = 0xA983E3B582E39783LL;
  GameRoutine_101b8e0((__int64)a1, (unsigned __int8*)&v265_.v265,
                      (__int64)&v271_.v271),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((unsigned __int8)v271_.v271 & 1) != 0 && v271_.v273 != 0) {
    v176 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v176 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v176, v271_.v273),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v265_.v265 & 1) != 0 && v265_.v267 != nullptr) {
    v177 = 128;
    if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) == 0) {
      v177 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v146 + v177,
                                       (__int64)v265_.v267),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((*(_BYTE*)(v2 + 16) & 1) != 0) {
    v22 = *(_QWORD*)(v2 + 24);
  LABEL_323:
    if (v22 == 23) {
      v186 = *(__int64**)(v2 + 32);
      v187 = *v186;
      v188 = v186[1];
      v189 = *(__int64*)((char*)v186 + 15);
      if (v187 != 0x2F6C74422F70614DLL | v188 != 0x2F3933325F6C7442LL ||
          v189 != 0x3933325F6C74422FLL) {
        goto LABEL_2;
      }
      goto LABEL_345;
    }
    if (v22 != 26) {
      goto LABEL_2;
    }
  LABEL_325:
    v178 = *(__int64**)(v2 + 32);
    v179 = *v178;
    v180 = v178[1];
    v181 = v178[2];
    v182 = *((unsigned __int16*)v178 + 12);
    if (v179 != 0x2F6275482F70614DLL | v180 != 0x2F3030305F627548LL ||
        v181 != 0x5F3030305F627548LL || v182 != 12609) {
      goto LABEL_2;
    }
  LABEL_345:
    v192 = game_9a28e0(66),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (game_GameModeData_instance_ != 0) {
      v193 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v192),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v193 != 0 && *(_DWORD*)(v193 + 32) != 0) {
        v194 = *(_QWORD*)GameData_212c638;
        v195 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
        if (v195 != *(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL)) {
          v196 = *(_QWORD*)(v195 - 8);
          if (v196 != 0) {
            v197 = *(_QWORD*)(v196 + 40);
            if (v197 != 0) {
              GameRoutine_b86fb0(v197, 4, 0x1.0000000000000p+0f),
                  v102 = COERCE_AS(
                      __typeof__(v102),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v104 = COERCE_AS(
                      __typeof__(v104),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v112 = COERCE_AS(
                      __typeof__(v112),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v114 = COERCE_AS(
                      __typeof__(v114),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v122 = COERCE_AS(
                      __typeof__(v122),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v124 = COERCE_AS(
                      __typeof__(v124),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v128 = COERCE_AS(
                      __typeof__(v128),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v134 = COERCE_AS(
                      __typeof__(v134),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v135 = COERCE_AS(
                      __typeof__(v135),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v136 = COERCE_AS(
                      __typeof__(v136),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v200 = COERCE_AS(
                      __typeof__(v200),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v201 = COERCE_AS(
                      __typeof__(v201),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v202 = COERCE_AS(
                      __typeof__(v202),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v39 = COERCE_AS(
                      __typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v41 = COERCE_AS(
                      __typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v44 = COERCE_AS(
                      __typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v52 = COERCE_AS(
                      __typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v54 = COERCE_AS(
                      __typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v62 = COERCE_AS(
                      __typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v64 = COERCE_AS(
                      __typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v72 = COERCE_AS(
                      __typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v74 = COERCE_AS(
                      __typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v82 = COERCE_AS(
                      __typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v84 = COERCE_AS(
                      __typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v92 = COERCE_AS(
                      __typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v94 = COERCE_AS(
                      __typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              Manager_c44560(
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v194 + 32) - 8LL) + 56LL),
                  4),
                  v102 = COERCE_AS(
                      __typeof__(v102),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v104 = COERCE_AS(
                      __typeof__(v104),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v112 = COERCE_AS(
                      __typeof__(v112),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v114 = COERCE_AS(
                      __typeof__(v114),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v122 = COERCE_AS(
                      __typeof__(v122),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v124 = COERCE_AS(
                      __typeof__(v124),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v128 = COERCE_AS(
                      __typeof__(v128),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v134 = COERCE_AS(
                      __typeof__(v134),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v135 = COERCE_AS(
                      __typeof__(v135),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v136 = COERCE_AS(
                      __typeof__(v136),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v200 = COERCE_AS(
                      __typeof__(v200),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v201 = COERCE_AS(
                      __typeof__(v201),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v202 = COERCE_AS(
                      __typeof__(v202),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v39 = COERCE_AS(
                      __typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v41 = COERCE_AS(
                      __typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v44 = COERCE_AS(
                      __typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v52 = COERCE_AS(
                      __typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v54 = COERCE_AS(
                      __typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v62 = COERCE_AS(
                      __typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v64 = COERCE_AS(
                      __typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v72 = COERCE_AS(
                      __typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v74 = COERCE_AS(
                      __typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v82 = COERCE_AS(
                      __typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v84 = COERCE_AS(
                      __typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v92 = COERCE_AS(
                      __typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v94 = COERCE_AS(
                      __typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v198 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v194 + 32) - 8LL) + 64LL);
              if (v198 != 0) {
                v199 = *(_QWORD*)(*(_QWORD*)(v198 + 96) + 296LL);
                if (v199 != 0) {
                  WindLoader_c72b30(v199, 0),
                      v102 = COERCE_AS(
                          __typeof__(v102),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v104 = COERCE_AS(
                          __typeof__(v104),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v112 = COERCE_AS(
                          __typeof__(v112),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v114 = COERCE_AS(
                          __typeof__(v114),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v122 = COERCE_AS(
                          __typeof__(v122),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v124 = COERCE_AS(
                          __typeof__(v124),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v128 = COERCE_AS(
                          __typeof__(v128),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v134 = COERCE_AS(
                          __typeof__(v134),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v135 = COERCE_AS(
                          __typeof__(v135),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v136 = COERCE_AS(
                          __typeof__(v136),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v200 = COERCE_AS(
                          __typeof__(v200),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v201 = COERCE_AS(
                          __typeof__(v201),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v202 = COERCE_AS(
                          __typeof__(v202),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v36 = COERCE_AS(
                          __typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v39 = COERCE_AS(
                          __typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v40 = COERCE_AS(
                          __typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v41 = COERCE_AS(
                          __typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v44 = COERCE_AS(
                          __typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v52 = COERCE_AS(
                          __typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v54 = COERCE_AS(
                          __typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v62 = COERCE_AS(
                          __typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v64 = COERCE_AS(
                          __typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v72 = COERCE_AS(
                          __typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v74 = COERCE_AS(
                          __typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v82 = COERCE_AS(
                          __typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v84 = COERCE_AS(
                          __typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_2:
  if ((*(_BYTE*)(v2 + 16) & 1) == 0 || *(_QWORD*)(v2 + 24) != 26) {
    return;
  }
  v3 = *(__int64**)(v2 + 32);
  v4 = *v3;
  v5 = v3[1];
  v6 = v3[2];
  v7 = *((unsigned __int16*)v3 + 12);
  v8 = v4 == 0x2F676E442F70614DLL & v5 == 0x2F3032305F676E44LL;
  if (v8 && v6 == 0x5F3032305F676E44LL && v7 == 12865) {
    v265_.v266 = &GameData_1afd9c8;
    v265_.v265 = game_HashString((__int64)&GameData_1afd9c8),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_385;
    }
    v38 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v265_.v265),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v38 == 0 || *(_DWORD*)(v38 + 32) == 0) {
      goto LABEL_385;
    }
    LOWORD(v265_.v265) = 0;
    v269_.v270 = nullptr;
    v265_.v268 = 0x100000000LL;
    GameRoutine_60a020((char*)&v265_.v265, "SE_EVT_HdsSoldier_Voice_lp"),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v271_.v274 = &v271_.v271;
    v265_.v268 = 0x53F800000LL;
    v271_.v271 = (unsigned __int8*)GameData_2002028;
    GameRoutine_10181a0(&v271_.v271, v269_.v269),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v271_.v274 == &v271_.v271) {
      v42 = 32;
    }
    else {
      if (v271_.v274 == nullptr) {
        goto LABEL_356;
      }
      v42 = 40;
    }
    (*(void (**)(unsigned __int8**, __int64, __int64, __int64)) &
     (*v271_.v274)[v42])(v271_.v274, v39, v40, v41),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_356:
    game_hub_e1a7e0((void*)((__int64*)&v271_.v271),
                    *(_QWORD**)GameData_212ebc8[0], (__int64)&v265_.v265),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v203 = (_QWORD*)a1[6];
    v204 = a1[7];
    if ((unsigned __int64)v203 >= v204) {
      v207 = a1[5];
      v208 = (signed __int64)v203 - v207;
      v209 = ((__int64)v203 - v207) >> 4;
      v210 = v209 + 1;
      if ((unsigned __int64)(v209 + 1) >> 60 != 0) {
        GameRoutine_101bc10(),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v135 = COERCE_AS(__typeof__(v135),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v200 = COERCE_AS(__typeof__(v200),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v201 = COERCE_AS(__typeof__(v201),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v202 = COERCE_AS(__typeof__(v202),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v39 = COERCE_AS(__typeof__(v39),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v64 = COERCE_AS(__typeof__(v64),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v72 = COERCE_AS(__typeof__(v72),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v74 = COERCE_AS(__typeof__(v74),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v84 = COERCE_AS(__typeof__(v84),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v94 = COERCE_AS(__typeof__(v94),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v211 = v204 - v207;
      if (v211 >> 3 > v210) {
        v210 = v211 >> 3;
      }
      if ((unsigned __int64)v211 >= 0x7FFFFFFFFFFFFFF0LL) {
        v212 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v212 = v210;
      }
      if (v212 >> 60 != 0) {
        GameRoutine_60a210(),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v135 = COERCE_AS(__typeof__(v135),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v200 = COERCE_AS(__typeof__(v200),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v201 = COERCE_AS(__typeof__(v201),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v202 = COERCE_AS(__typeof__(v202),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v39 = COERCE_AS(__typeof__(v39),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v64 = COERCE_AS(__typeof__(v64),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v72 = COERCE_AS(__typeof__(v72),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v74 = COERCE_AS(__typeof__(v74),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v84 = COERCE_AS(__typeof__(v84),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v94 = COERCE_AS(__typeof__(v94),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v213 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v212, 16, 0),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v122 = COERCE_AS(__typeof__(v122),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v135 = COERCE_AS(__typeof__(v135),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v200 = COERCE_AS(__typeof__(v200),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v201 = COERCE_AS(__typeof__(v201),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v202 = COERCE_AS(__typeof__(v202),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v214 = v213 + 16 * v212;
      v205 = v271_.v272;
      v215 = (_QWORD*)(v213 + v208);
      *v215 = v271_.v271;
      v215[1] = v205;
      if (v205 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v205 + 16), 1u,
                                  memory_order_relaxed);
        v207 = a1[5];
        v208 = a1[6] - v207;
        v209 = v208 >> 4;
      }
      v216 = (__int64)&v215[-2 * v209];
      v206 = v215 + 2;
      GameRoutine_1a0b950(v216, v207, v208),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v104 = COERCE_AS(__typeof__(v104),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v112 = COERCE_AS(__typeof__(v112),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v122 = COERCE_AS(__typeof__(v122),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v124 = COERCE_AS(__typeof__(v124),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v128 = COERCE_AS(__typeof__(v128),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v134 = COERCE_AS(__typeof__(v134),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v135 = COERCE_AS(__typeof__(v135),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v136 = COERCE_AS(__typeof__(v136),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v200 = COERCE_AS(__typeof__(v200),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v201 = COERCE_AS(__typeof__(v201),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v202 = COERCE_AS(__typeof__(v202),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v92 = COERCE_AS(__typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v94 = COERCE_AS(__typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      a1[5] = v216;
      a1[6] = v206;
      a1[7] = v214;
      if (v207 != 0) {
        v217 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v217 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v217, v207),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v135 = COERCE_AS(__typeof__(v135),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v200 = COERCE_AS(__typeof__(v200),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v201 = COERCE_AS(__typeof__(v201),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v202 = COERCE_AS(__typeof__(v202),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v39 = COERCE_AS(__typeof__(v39),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v64 = COERCE_AS(__typeof__(v64),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v72 = COERCE_AS(__typeof__(v72),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v74 = COERCE_AS(__typeof__(v74),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v84 = COERCE_AS(__typeof__(v84),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v94 = COERCE_AS(__typeof__(v94),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      *v203 = v271_.v271;
      v205 = v271_.v272;
      v203[1] = v271_.v272;
      if (v205 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v205 + 16), 1u,
                                  memory_order_relaxed);
      }
      v206 = v203 + 2;
    }
    a1[6] = v206;
    if (v205 != 0) {
      std___1___shared_weak_count___release_weak_alt3(v205),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v104 = COERCE_AS(__typeof__(v104),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v112 = COERCE_AS(__typeof__(v112),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v122 = COERCE_AS(__typeof__(v122),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v124 = COERCE_AS(__typeof__(v124),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v128 = COERCE_AS(__typeof__(v128),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v134 = COERCE_AS(__typeof__(v134),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v135 = COERCE_AS(__typeof__(v135),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v136 = COERCE_AS(__typeof__(v136),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v200 = COERCE_AS(__typeof__(v200),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v201 = COERCE_AS(__typeof__(v201),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v202 = COERCE_AS(__typeof__(v202),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v92 = COERCE_AS(__typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v94 = COERCE_AS(__typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (v269_.v270 == v269_.v269) {
      v218 = 32;
    }
    else {
      if (v269_.v270 == nullptr) {
      LABEL_380:
        if ((v265_.v265 & 1) != 0 && v265_.v267 != nullptr) {
          v219 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v219 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v219,
              (__int64)v265_.v267),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v112 = COERCE_AS(__typeof__(v112),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v128 = COERCE_AS(__typeof__(v128),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v135 = COERCE_AS(__typeof__(v135),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v136 = COERCE_AS(__typeof__(v136),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v200 = COERCE_AS(__typeof__(v200),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v201 = COERCE_AS(__typeof__(v201),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v202 = COERCE_AS(__typeof__(v202),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v84 = COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v92 = COERCE_AS(__typeof__(v92),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      LABEL_385:
        if ((*(_BYTE*)(v2 + 16) & 1) == 0 || *(_QWORD*)(v2 + 24) != 26) {
          return;
        }
        goto LABEL_14;
      }
      v218 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64, __int64))(*v269_.v270 + v218))(
        v269_.v270, v200, v201, v202),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_380;
  }
LABEL_14:
  v11 = *(__int64**)(v2 + 32);
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[2];
  v15 = *((unsigned __int16*)v11 + 12);
  if (v12 == 0x2F676E442F70614DLL && v13 == 0x2F3036305F676E44LL &&
      v14 == 0x5F3036305F676E44LL && v15 == 12609) {
    v19 = fw_memory_g_heap_manager_ptr;
    v20 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v122 = COERCE_AS(__typeof__(v122),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v135 = COERCE_AS(__typeof__(v135),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v200 = COERCE_AS(__typeof__(v200),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v201 = COERCE_AS(__typeof__(v201),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v202 = COERCE_AS(__typeof__(v202),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v265_.v265 = 33;
    v265_.v266 = ((__int128*)((char*)0x10LL + 14));
    v265_.v267 = v20;
    strcpy(v20, "Obj_Torch_A003_1_001_auto_inst");
    v271_.v271 = (unsigned __int8*)&v265_.v265;
    v271_.v272 = 1;
    MapSetup_f88dc0_alt2(a1, &v271_.v271),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v122 = COERCE_AS(__typeof__(v122),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v135 = COERCE_AS(__typeof__(v135),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v200 = COERCE_AS(__typeof__(v200),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v201 = COERCE_AS(__typeof__(v201),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v202 = COERCE_AS(__typeof__(v202),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v265_.v265 & 1) != 0 && v265_.v267 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v19 + v21,
                                         (__int64)v265_.v267),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v104 = COERCE_AS(__typeof__(v104),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v112 = COERCE_AS(__typeof__(v112),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v122 = COERCE_AS(__typeof__(v122),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v124 = COERCE_AS(__typeof__(v124),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v128 = COERCE_AS(__typeof__(v128),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v134 = COERCE_AS(__typeof__(v134),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v135 = COERCE_AS(__typeof__(v135),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v136 = COERCE_AS(__typeof__(v136),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v200 = COERCE_AS(__typeof__(v200),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v201 = COERCE_AS(__typeof__(v201),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v202 = COERCE_AS(__typeof__(v202),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v92 = COERCE_AS(__typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v94 = COERCE_AS(__typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
}

float game_hub_MapSetup_Setup_Hub100_A1_lambda0_Invoke(__int64 a1, __int64 a2,
                                                       float* a3)
{
  return *(float*)(a1 + 8) + (float)(fminf(fmaxf(*a3, 0.0), 1.0) *
                                     (float)(1.0 - *(float*)(a1 + 8)));
}

float game_hub_MapSetup_Setup_Hub100_A1_lambda1_Invoke(__int64 a1, __int64 a2,
                                                       float* a3)
{
  float result;
  __int64 v4;

  result = 0.0;
  v4 = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
  if (*(_BYTE*)(v4 + 289) == 1 && (*(_BYTE*)(v4 + 288) & 1) != 0) {
    while ((*(_BYTE*)(v4 + 300) & 0xFD) != 1) {
      v4 = *(_QWORD*)(v4 + 736);
      if (v4 == 0) {
        return (float)(1.0 - *a3) *
               (float)(1.0 - *(float*)(*(_QWORD*)a2 + 68LL));
      }
      if (*(_BYTE*)(v4 + 289) != 1 || *(_BYTE*)(v4 + 288) != 1) {
        return result;
      }
    }
  }
  return result;
}

void game_hub_MapSetup_Setup_Dng020_A2_KAI_c06_lambda0_Invoke(__int64 a1,
                                                              _DWORD* a2,
                                                              __int64* a3)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  _DWORD* v11;
  __int128 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 i;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;

  v4 = GameData_212d458[0];
  v5 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v5 != 0) {
    v6 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v8 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v9 = std___1___shared_weak_count_lock_alt1(v8);
    std___1___shared_weak_count___release_weak_alt2(v5);
    if (v9 == 0 || v6 == 0) {
      if (v9 == 0) {
        goto LABEL_10;
      }
    }
    else {
      v11 = *(_DWORD**)(*(_QWORD*)(v6 + 24) + 16LL);
      *a2 = v11[140];
      a2[1] = v11[141];
      v12 = *(_OWORD*)a2;
      *((_QWORD*)&v12 + 1) = (unsigned int)v11[142];
      *(_OWORD*)a2 = v12;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt2(v9);
    }
  }
LABEL_10:
  v13 = (__int64*)*a3;
  v14 = *v4;
  a3[1] = *a3;
  v15 = *(_QWORD*)(v14 + 24);
  for (i = *(_QWORD*)(v14 + 32); v15 != i; v15 += 16) {
    if (*(_DWORD*)(*(_QWORD*)v15 + 1112LL) == 1) {
      v17 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v15 + 24LL) + 16LL) +
                       560LL);
      v18 = a3[2];
      if ((unsigned __int64)v13 < v18) {
        v13[1] =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v15 + 24LL) + 16LL) +
                       568LL);
        *v13 = *v17;
        v13 += 2;
      }
      else {
        v19 = *a3;
        v20 = (__int64)v13 - *a3;
        v21 = (v20 >> 4) + 1;
        if (v21 >> 60 != 0) {
          GameRoutine_cdcc10();
        }
        v22 = v18 - v19;
        if (v22 >> 3 > v21) {
          v21 = v22 >> 3;
        }
        if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF0LL) {
          v23 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v23 = v21;
        }
        if (v23 >> 60 != 0) {
          GameRoutine_60a210();
        }
        v24 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 16 * v23,
                                             16, 0);
        v25 = v17[1];
        v26 = (__int64*)(v24 + v20);
        *v26 = *v17;
        v26[1] = v25;
        if ((__int64*)v19 != v13) {
          v27 = (__int64*)v19;
          v28 = (_QWORD*)(v24 + v20 - 16 * (v20 >> 4));
          do {
            v28[1] = v27[1];
            v29 = *v27;
            v27 += 2;
            *v28 = v29;
            v28 += 2;
          } while (v27 != v13);
        }
        v13 = v26 + 2;
        *a3 = v24 + v20 - 16 * (v20 >> 4);
        a3[1] = (__int64)(v26 + 2);
        a3[2] = v24 + 16 * v23;
        if (v19 != 0) {
          v30 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v30,
                                             v19);
        }
      }
      a3[1] = (__int64)v13;
    }
  }
}

#pragma GCC visibility pop
