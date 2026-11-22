#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Manager_66cc20(__int64*, _QWORD*);

__int64* game_8aef60(__int64, unsigned __int16*);

__int64 Dir_70df40(__int16*, __int16*);

__int64 GameHr_fbcd00(unsigned int);

__int64 GameRoutine_715440();

__int64 Message_16f9b50(__int64);

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);

__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);

__int64 game_HashString(__int64 result);

__int64 memcpy(__int64, __int64, unsigned __int64);

__int64 nn_oe_GetCurrentFocusState(void);

__int64 nn_oe_GetCurrentGraphicsScale(void);

__int64 nn_oe_PopNotificationMessage(void);

__int64 nn_os_AcquireWriteLock(__int64);

__int64 nn_os_LockMutex(__int64);

__int64 nn_os_ReleaseWriteLock(__int64);

__int64 nn_os_SignalLightEvent(__int64);

__int64 nn_os_SleepThread(_QWORD);

__int64 nn_os_UnlockMutex(__int64);

extern _UNKNOWN* GameData_212c2a0;

extern _UNKNOWN GameData_21a55c0;

extern _UNKNOWN GameData_21f4318;

extern _UNKNOWN GameData_22660d0;

extern _UNKNOWN GameData_22660dc;

extern _UNKNOWN GameData_22660e8;

extern _UNKNOWN game_g_random_mutex;

extern __int128 GameData_21a5580;

extern __int128 GameData_21a5590;

extern __int128 GameData_21a55a0;

extern __int128 GameData_21a55b0;

extern __int64* GameData_212c878[6];

extern __int64* game_map_MapRandom_instance__ptr[3];

extern __int64 GameData_212d6e8;

extern __int64 GameData_21ca098;

extern __int64 fw_memory_g_heap_manager;

extern __int64 fw_memory_g_heap_manager_ptr;

extern __int64 game_GameModeData_instance_;

extern __int64 game_g_game_setting_ptr;

extern char* GameData_1ffce20[2];

extern char GameData_1a9f09e;

extern int GameData_21f4314;

extern int GameData_2266118;

int __cxa_guard_acquire(__int64);

int sprintf(__int64, const char*, ...);

typedef __int64 GameAlign_21f430c __attribute__((aligned(4)));

extern GameAlign_21f430c GameData_21f430c;

unsigned __int64 strlen(const char*);

void __attribute__((noreturn)) GameRoutine_60a210();

void __attribute__((noreturn)) GameRoutine_6e56b0();

void __attribute__((noreturn)) GameRoutine_6f26d0();

void __attribute__((noreturn)) GameRoutine_6f93f0();

void __attribute__((noreturn)) GameRoutine_953bb0();

void __attribute__((noreturn)) String_60a1d0();

void __cxa_guard_release(__int64);

void nn_mem_StandardAllocator_Free(__int64, __int64);

void nn_oe_LeaveExitRequestHandlingSection();

__attribute__((swiftcall)) void game_950ec0(PSEUDO_X8 x8_, __int16* a1);

unsigned __int64 game_a794a0(unsigned __int64 result, __int64* a2,
                             float32x4_t* a3);

void game_fbdd20(__int64 a1);

void game_1254c80(__int64 a1);

void __attribute__((noreturn)) game_17e3de0();

__int64 GameRoutine_60a020(__int64, const char*);

__int64 GameRoutine_9750e0(__int64, __int64);

__int64 GameRoutine_975520(__int64, __int64);

__int64 GameRoutine_975940(__int64);

__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);

bool GameRoutine_1008d20(__int64);

extern _UNKNOWN GameData_1ab4cc9;

extern __int64 game_TransporterConst_List_instance__ptr[6];

extern __int64 game_gmap_GmapClock_instance_;

extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;

extern int GameData_2167728;

unsigned __int64 GameRoutine_1a09c70(const char*);

void Se_80e330(__int64, const char*);

__attribute__((swiftcall)) void game_10081e0(PSEUDO_X8 x8_, char* a1);

__attribute__((swiftcall)) void game_950ec0(PSEUDO_X8 x8_, __int16* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  __int64* v4;
  atomic_uchar* v5;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _BYTE* v11;
  unsigned __int64 v12;
  _QWORD* v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64* v31;
  atomic_uchar* v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v4 = *(__int64**)(GameData_21ca098 + 64);
  v3 = *(__int64**)(GameData_21ca098 + 72);
  if (v4 == v3) {
    v8 = 0;
  }
  else {
    v5 = (atomic_uchar*)&GameData_21f4318;
    v7 = nullptr;
    v8 = 0;
    do {
      v9 = *v4;
      if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0 &&
          __cxa_guard_acquire((__int64)v5) != 0) {
        GameData_21f4314 = 0;
        GameData_21f430c = 0x10000205A5LL;
        __cxa_guard_release((__int64)v5);
      }
      v10 = Dir_70df40((__int16*)&GameData_21f430c, a1);
      if ((int)GameRoutine_715440() >= *(unsigned __int8*)(v9 + 48)) {
        v11 = *(_BYTE**)(v9 + 56);
        if (v11 == nullptr || *v11 == 0) {
        LABEL_40:
          v24 = 1 << (v10 / 0x2760u -
                      6 * ((715827883 * (unsigned __int64)(v10 / 0x2760u)) >>
                           32));
          if (v10 < 1440) {
            LOBYTE(v24) = 1;
          }
          if (((unsigned __int8)v24 & *(_BYTE*)(*(_QWORD*)(v9 + 24) + 8LL)) !=
              0) {
            v25 = a2[2];
            if ((unsigned __int64)v7 < v25) {
              *v7++ = v9;
            }
            else {
              v26 = (unsigned __int64)v7 - v8;
              v27 = v8;
              v28 = ((__int64)v7 - v8) >> 3;
              v29 = v28 + 1;
              if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
                *a2 = v27;
                GameRoutine_953bb0();
              }
              v30 = v25 - v27;
              v31 = v3;
              v32 = v5;
              v37 = v27;
              if (v30 >> 2 > v29) {
                v29 = v30 >> 2;
              }
              if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
                v33 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v33 = v29;
              }
              if (v33 != 0) {
                if (v33 >> 61 != 0) {
                  *a2 = v27;
                  GameRoutine_60a210();
                }
                v34 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v33, 16, 0);
              }
              else {
                v34 = 0;
              }
              v35 = v34 + 8 * v33;
              v8 = v34 + v26 - 8 * v28;
              *(_QWORD*)(v34 + v26) = v9;
              v7 = (_QWORD*)(v34 + v26 + 8);
              memcpy(v8, v37, v26);
              a2[1] = (__int64)v7;
              a2[2] = v35;
              if (v37 != 0) {
                v36 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v36 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v37);
              }
              v5 = v32;
              v3 = v31;
            }
            a2[1] = (__int64)v7;
          }
          goto LABEL_5;
        }
        v12 = game_HashString((__int64)v11);
        if (v12 != 0 & game_GameModeData_instance_ != 0) {
          v14 = *(_QWORD**)(game_GameModeData_instance_ + 48);
          v15 = v14[2];
          if (v15 != 0 & v14[4] != 0) {
            v17 = v15 - 1;
            if ((v15 & (v15 - 1)) != 0) {
              v18 = v12;
              if (v12 >= v15) {
                v18 = v12 % v15;
              }
            }
            else {
              v18 = v17 & v12;
            }
            v19 = *(_QWORD**)(v14[1] + 8 * v18);
            if (v19 != nullptr) {
              v20 = (_QWORD*)*v19;
              if (v20 != nullptr) {
                if ((v15 & v17) == 0) {
                  while (1) {
                    v22 = v20[1];
                    if (v12 == v22) {
                      if (v20[2] == v12) {
                        goto LABEL_38;
                      }
                    }
                    else if ((v22 & v17) != v18) {
                      goto LABEL_5;
                    }
                    v20 = (_QWORD*)*v20;
                    if (v20 == nullptr) {
                      goto LABEL_5;
                    }
                  }
                }
                do {
                  v21 = v20[1];
                  if (v12 == v21) {
                    if (v20[2] == v12) {
                    LABEL_38:
                      v23 = v20[3];
                      if (v23 != 0 && *(_DWORD*)(v23 + 32) != 0) {
                        goto LABEL_40;
                      }
                      break;
                    }
                  }
                  else {
                    if (v21 >= v15) {
                      v21 %= v15;
                    }
                    if (v21 != v18) {
                      break;
                    }
                  }
                  v20 = (_QWORD*)*v20;
                } while (v20 != nullptr);
              }
            }
          }
        }
      }
    LABEL_5:
      ++v4;
    } while (v4 != v3);
  }
  *a2 = v8;
}

unsigned __int64 game_a794a0(unsigned __int64 result, __int64* a2,
                             float32x4_t* a3)
{
  __int64 v3;
  float32x4_t* v4;
  unsigned __int64 v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  float v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  int8x16_t v16;
  unsigned __int64 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  int8x16_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  unsigned int v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  int8x16_t v48;
  unsigned __int64 v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  int8x16_t v56;
  float32x4_t v57;
  float32x4_t v58;
  int8x16_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  int8x16_t v64;
  int8x16_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  int8x8_t v73;
  int8x8_t v74;
  float32x4_t v75;
  int v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  int32x4_t v85;
  int32x4_t v86;
  int32x4_t v87;
  int32x4_t v88;
  int8x16_t v89;
  int8x16_t v90;
  int8x16_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  unsigned __int64 v95;
  float32x4_t v96;
  int8x16_t v97;
  int8x16_t v98;
  int8x16_t v99;
  int8x16_t v100;
  float32x4_t v101;
  float32x4_t v102;
  int8x16_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  unsigned __int64 v110;
  int* v111;
  int* v112;
  int* v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  int* v122;
  __int64 v123;
  float32x4_t* v124;
  float32x2_t* v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  float32x4_t* v129;
  float32x4_t v130;
  float32x4_t v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  int16x4_t v138;
  int v139;
  int v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  float32x4_t* v146;
  float32x4_t* v147;

  v3 = *a2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0) {
    v147 = (float32x4_t*)result;
    v145 = v3;
    v146 = a3;
    v139 = __cxa_guard_acquire((__int64)&GameData_21a55c0);
    v3 = v145;
    a3 = v146;
    v140 = v139;
    result = (unsigned __int64)v147;
    if (v140 != 0) {
      v141 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a55a0 =
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55a0 + 1) = v141;
      v142 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                         (_QWORD)GameData_212c2a0);
      *(_QWORD*)&GameData_21a55b0 =
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                      (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55b0 + 1) = v142;
      v143 = *((_QWORD*)GameData_212c2a0 + 1);
      *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
      *((_QWORD*)&GameData_21a5580 + 1) = v143;
      v144 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a5590 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a5590 + 1) = v144;
      __cxa_guard_release((__int64)&GameData_21a55c0);
      v3 = v145;
      a3 = v146;
      result = (unsigned __int64)v147;
    }
  }
  v4 = *(float32x4_t**)(result + 8);
  {
    __typeof__(v5) z_ = (__typeof__(v5)){0};
    LODWORD(z_) = 0;
    v5 = z_;
  }
  v7 = v4[27];
  v6 = v4[28];
  v8 = v4[29];
  LANES128(v9).n128_u64[0] = 0;
  HIDWORD(v5) = __builtin_elementwise_sqrt(
      (float)(LANES128_OF(vmulq_f32(v6, v6)).n128_f32[1] +
              (float)(LANES128(v6).n128_f32[0] * LANES128(v6).n128_f32[0])) +
      (float)(COERCE_FLOAT(LANES128(v4[28]).n128_u64[1]) *
              LANES128(v6).n128_f32[2]));
  v10 = __builtin_elementwise_sqrt(
      (float)(LANES128_OF(vmulq_f32(v7, v7)).n128_f32[1] +
              (float)(LANES128(v7).n128_f32[0] * LANES128(v7).n128_f32[0])) +
      (float)(COERCE_FLOAT(LANES128(v4[27]).n128_u64[1]) *
              LANES128(v7).n128_f32[2]));
  LANES128(v9).n128_u64[1] = COERCE_UNSIGNED_INT(__builtin_elementwise_sqrt(
      (float)(LANES128_OF(vmulq_f32(v8, v8)).n128_f32[1] +
              (float)(LANES128(v8).n128_f32[0] * LANES128(v8).n128_f32[0])) +
      (float)(COERCE_FLOAT(LANES128(v4[29]).n128_u64[1]) *
              LANES128(v8).n128_f32[2])));
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v5),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v11).n128_i8[8] = vqtbl1_s8(
      COERCE_AS(int8x16_t, v5), COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v9, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v9, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v13 = vmulq_f32(vmulq_f32(v11, COERCE_AS(float32x4_t, LODWORD(v10))), v12);
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v5),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] = vqtbl1_s8(
      COERCE_AS(int8x16_t, v5), COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v9, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v15 =
      vzip2q_s32(COERCE_AS(int32x4_t, LODWORD(v10)),
                 vzip1q_s32(COERCE_AS(int32x4_t, v5), COERCE_AS(int32x4_t, 0)));
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v9, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v16 = vzip1q_s32(vzip2q_s32(COERCE_AS(int32x4_t, LODWORD(v10)), v9),
                   COERCE_AS(int32x4_t, 0));
  v17 = LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v19 = vsubq_f32(
      v13,
      vmulq_f32(vmulq_f32(v12, COERCE_AS(float32x4_t, LODWORD(v10))), v14));
  LANES128(v19).n128_u64[0] = LANES128_OF(vpaddq_f32(v19, v19)).n128_u64[0];
  v20 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v19).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v19).n128_u64[0]), 1));
  v21 = vrecpeq_f32(v20);
  v22 = vmulq_f32(v21, vrecpsq_f32(v21, v20));
  v23 = vrecpsq_f32(v22, v20);
  v24 = vceqzq_f32(v20);
  v25 = vmulq_f32(v22, v23);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v23).n128_i8[8] =
      vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v18).n128_i8[8] =
      vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v26).n128_u64[1] = v17;
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v27 = vmulq_f32(v25, vmlsq_f32(vmulq_f32(v23, v26), v16, v18));
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, LODWORD(v10)),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, LODWORD(v10)),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, LODWORD(v10)),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v29).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, LODWORD(v10)),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v30 = vmulq_f32(v25, vmlsq_f32(vmulq_f32(v18, v28), v26, v29));
  v31 = vmulq_f32(v25, vmlsq_f32(vmulq_f32(v16, v29), v28, v23));
  LANES128(v25).n128_u64[0] = 0x8000000080000000LL;
  LANES128(v25).n128_u64[1] = 0x8000000080000000LL;
  v32 = vbicq_s8(v30, v24);
  v33 = vbicq_s8(v31, v24);
  v34 = vmulq_f32(v27, v25);
  v35 = vbicq_s8(v27, v24);
  v36 = vbicq_s8(vmlsq_f32(vmlsq_f32(v34, COERCE_AS(float32x4_t, 0), v30),
                           COERCE_AS(float32x4_t, 0), v31),
                 v24);
  v37 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v7, LANES128(v35).n128_f32[0]), v6,
                     COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]), 1),
      v8, v35, 2);
  v38 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v7, LANES128(v33).n128_f32[0]), v6,
                     COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]), 1),
      v8, v33, 2);
  v39 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v7, LANES128(v32).n128_f32[0]), v6,
                     COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]), 1),
      v8, v32, 2);
  v40 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v7, LANES128(v36).n128_f32[0]), v6,
                     COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]), 1),
      v8, v36, 2);
  v41 = a3[1];
  v42 = a3[2];
  v43 = vaddq_f32(v4[30], v40);
  *(float*)&v44 = __builtin_elementwise_sqrt(
      (float)(LANES128_OF(vmulq_f32(*a3, *a3)).n128_f32[1] +
              (float)(COERCE_FLOAT(*a3) * COERCE_FLOAT(*a3))) +
      (float)(COERCE_FLOAT(LANES128(*(a3)).n128_u64[1]) *
              COERCE_FLOAT(LANES128(*(a3)).n128_u64[1])));
  LANES128(v6).n128_u32[0] = 0;
  LANES128(v40).n128_u64[0] = 0;
  LANES128(v6).n128_u32[1] = __builtin_elementwise_sqrt(
      (float)(LANES128_OF(vmulq_f32(v41, v41)).n128_f32[1] +
              (float)(LANES128(v41).n128_f32[0] * LANES128(v41).n128_f32[0])) +
      (float)(COERCE_FLOAT(LANES128(a3[1]).n128_u64[1]) *
              LANES128(v41).n128_f32[2]));
  LANES128(v40).n128_u64[1] = COERCE_UNSIGNED_INT(__builtin_elementwise_sqrt(
      (float)(LANES128_OF(vmulq_f32(v42, v42)).n128_f32[1] +
              (float)(LANES128(v42).n128_f32[0] * LANES128(v42).n128_f32[0])) +
      (float)(COERCE_FLOAT(LANES128(a3[2]).n128_u64[1]) *
              LANES128(v42).n128_f32[2])));
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, LANES128(v6).n128_u64[0]),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v18).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, LANES128(v6).n128_u64[0]),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v29).n128_i8[8] =
      vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v45 = vmulq_f32(vmulq_f32(v18, COERCE_AS(float32x4_t, v44)), v29);
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, LANES128(v6).n128_u64[0]),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v29).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, LANES128(v6).n128_u64[0]),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v47 = vzip2q_s32(COERCE_AS(int32x4_t, v44),
                   vzip1q_s32(COERCE_AS(int32x4_t, LANES128(v6).n128_u64[0]),
                              COERCE_AS(int32x4_t, 0)));
  *(int8x8_t*)&LANES128(v46).n128_i8[8] =
      vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v48 = vzip1q_s32(vzip2q_s32(COERCE_AS(int32x4_t, v44), v40),
                   COERCE_AS(int32x4_t, 0));
  v49 = LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  LANES128(v50).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v51 = vsubq_f32(v45,
                  vmulq_f32(vmulq_f32(v29, COERCE_AS(float32x4_t, v44)), v46));
  LANES128(v51).n128_u64[0] = LANES128_OF(vpaddq_f32(v51, v51)).n128_u64[0];
  v52 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v51).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v51).n128_u64[0]), 1));
  v53 = vrecpeq_f32(v52);
  v54 = vmulq_f32(v53, vrecpsq_f32(v53, v52));
  v55 = vrecpsq_f32(v54, v52);
  v56 = vceqzq_f32(v52);
  v57 = vmulq_f32(v54, v55);
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v55).n128_i8[8] =
      vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v58).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v50).n128_i8[8] =
      vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v48).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v58).n128_u64[1] = v49;
  *(int8x8_t*)&LANES128(v48).n128_i8[8] =
      vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v59 = vmulq_f32(v57, vmlsq_f32(vmulq_f32(v55, v58), v48, v50));
  LANES128(v60).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v44),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v61 = vmulq_f32(v59, v25);
  v62 = vbicq_s8(v59, v56);
  *(int8x8_t*)&LANES128(v60).n128_i8[8] = vqtbl1_s8(
      COERCE_AS(int8x16_t, v44), COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v63).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v44),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v63).n128_i8[8] = vqtbl1_s8(
      COERCE_AS(int8x16_t, v44), COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v64 = vmulq_f32(v57, vmlsq_f32(vmulq_f32(v50, v60), v58, v63));
  v65 = vmulq_f32(v57, vmlsq_f32(vmulq_f32(v48, v63), v60, v55));
  v66 = vbicq_s8(v64, v56);
  v67 = vbicq_s8(v65, v56);
  v68 = vbicq_s8(vmlsq_f32(vmlsq_f32(v61, COERCE_AS(float32x4_t, 0), v64),
                           COERCE_AS(float32x4_t, 0), v65),
                 v56);
  v69 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(*a3, LANES128(v62).n128_f32[0]), v41,
                     COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]), 1),
      v42, v62, 2);
  v70 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(*a3, LANES128(v66).n128_f32[0]), v41,
                     COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]), 1),
      v42, v66, 2);
  v71 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(*a3, LANES128(v67).n128_f32[0]), v41,
                     COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0]), 1),
      v42, v67, 2);
  v72 = vaddq_f32(
      a3[3],
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*a3, LANES128(v68).n128_f32[0]), v41,
                         COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]), 1),
          v42, v68, 2));
  LANES128(v42).n128_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v37, v69)))).n64_u64[0];
  if ((LANES64_OF(
           vorr_s8(vdup_lane_s16(
                       COERCE_AS(int16x4_t, LANES128(v42).n128_u64[0]), 2),
                   vorr_s8(COERCE_AS(int8x8_t, LANES128(v42).n128_u64[0]),
                           vdup_lane_s16(
                               COERCE_AS(int16x4_t, LANES128(v42).n128_u64[0]),
                               1))))
           .n64_u8[0] &
       1) != 0 ||
      (LANES64(v73).n64_u64[0] =
           LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v39, v70)))).n64_u64[0],
       (LANES64_OF(
            vorr_s8(vdup_lane_s16(v73, 2), vorr_s8(v73, vdup_lane_s16(v73, 1))))
            .n64_u8[0] &
        1) != 0) ||
      (LANES64(v74).n64_u64[0] =
           LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v38, v71)))).n64_u64[0],
       (LANES64_OF(
            vorr_s8(vdup_lane_s16(v74, 2), vorr_s8(v74, vdup_lane_s16(v74, 1))))
            .n64_u8[0] &
        1) != 0) ||
      (LANES64(v138).n64_u64[0] =
           LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v43, v72)))).n64_u64[0],
       (LANES64(v138).n64_u8[0] & 1) != 0) ||
      (LANES64(v138).n64_u8[2] & 1) != 0 ||
      (LANES64(v138).n64_u8[4] & 1) != 0) {
    LANES128(v75).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v76 = 1;
    *(int8x8_t*)&LANES128(v75).n128_i8[8] =
        vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v77).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v77).n128_i8[8] =
        vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v78 = vmulq_f32(vmulq_f32(v37, v75), v77);
    LANES128(v77).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v77).n128_i8[8] =
        vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v79).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v79).n128_i8[8] =
        vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v80 = vsubq_f32(v78, vmulq_f32(vmulq_f32(v37, v77), v79));
    LANES128(v80).n128_u64[0] = LANES128_OF(vpaddq_f32(v80, v80)).n128_u64[0];
    v81 = vaddq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v80).n128_u64[0]), 0),
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v80).n128_u64[0]), 1));
    v82 = vrecpeq_f32(v81);
    v83 = vmulq_f32(v82, vrecpsq_f32(v82, v81));
    v84 = vmulq_f32(v83, vrecpsq_f32(v83, v81));
    v85 = vzip1q_s32(v37, v38);
    v86 = vzip2q_s32(v37, v38);
    v87 = vzip1q_s32(v39, COERCE_AS(int32x4_t, 0LL));
    v88 = vzip2q_s32(v39, COERCE_AS(int32x4_t, 0LL));
    v89 = vzip2q_s32(v85, v87);
    v90 = vzip1q_s32(v86, v88);
    v91 = vzip1q_s32(v85, v87);
    LANES128(v92).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v89, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v86).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v93).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v94).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v92).n128_i8[8] =
        vqtbl1_s8(v89, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v95 = LANES64_OF(vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    *(int8x8_t*)&LANES128(v93).n128_i8[8] =
        vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v90).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v89, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v86).n128_u64[1] = v95;
    LANES128(v96).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v94).n128_i8[8] =
        vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    *(int8x8_t*)&LANES128(v90).n128_i8[8] =
        vqtbl1_s8(v89, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v96).n128_i8[8] =
        vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v97 = vmulq_f32(v84, vmlsq_f32(vmulq_f32(v92, v86), v90, v93));
    v98 = vmulq_f32(v84, vmlsq_f32(vmulq_f32(v93, v96), v86, v94));
    v99 = vceqzq_f32(v81);
    v100 = vmulq_f32(v84, vmlsq_f32(vmulq_f32(v90, v94), v96, v92));
    v101 = vbicq_s8(v97, v99);
    v102 = vbicq_s8(v100, v99);
    v103 = vmlsq_laneq_f32(
        vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v97), LANES128(v43).n128_f32[0]),
                       v98, COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                       1),
        v100, v43, 2);
    v104 = vbicq_s8(v98, v99);
    v105 = vbicq_s8(v103, v99);
    v106 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v69, LANES128(v101).n128_f32[0]), v70,
                       COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]), 1),
        v71, v101, 2);
    v107 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v69, LANES128(v104).n128_f32[0]), v70,
                       COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0]), 1),
        v71, v104, 2);
    v108 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v69, LANES128(v102).n128_f32[0]), v70,
                       COERCE_AS(float32x2_t, LANES128(v102).n128_u64[0]), 1),
        v71, v102, 2);
    v109 = vaddq_f32(
        v72, vmlaq_laneq_f32(
                 vmlaq_lane_f32(
                     vmulq_n_f32(v69, LANES128(v105).n128_f32[0]), v70,
                     COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0]), 1),
                 v71, v105, 2));
  }
  else {
    v106 = COERCE_AS(float32x4_t, GameData_21a5580);
    v107 = COERCE_AS(float32x4_t, GameData_21a5590);
    v108 = COERCE_AS(float32x4_t, GameData_21a55a0);
    v109 = COERCE_AS(float32x4_t, GameData_21a55b0);
    v76 = 0;
  }
  v110 = *(_QWORD*)(result + 16);
  v112 = *(int**)(v110 + 16);
  v111 = *(int**)(v110 + 24);
  if (v112 != v111) {
    v113 = v112 + 1;
    v114 = *(_QWORD*)(LANES128(v4[10]).n128_u64[1] + 32);
    v116 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 24LL);
    v115 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 32LL);
    do {
      v122 = v113 - 1;
      v123 = *(v113 - 1);
      result = (unsigned int)v113[1];
      v124 = (float32x4_t*)(v115 + (v123 << 6));
      if ((result & 0x80000000) != 0) {
        result = *v113;
        v129 = (float32x4_t*)(v116 + 96LL * (int)v123);
        if ((_DWORD)result == 0xFFFF) {
          v130 = v129[2];
          v131 = v129[3];
          v132 = v129[4];
          v133 = v129[5];
          v134 = *a3;
          v135 = a3[1];
          v136 = a3[2];
          v137 = a3[3];
        }
        else {
          result = v115 + (result << 6);
          v130 = v129[2];
          v131 = v129[3];
          v132 = v129[4];
          v133 = v129[5];
          v134 = *(float32x4_t*)result;
          v135 = *(float32x4_t*)(result + 16);
          v136 = *(float32x4_t*)(result + 32);
          v137 = *(float32x4_t*)(result + 48);
        }
        *v124 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v134, LANES128(v130).n128_f32[0]), v135,
                           COERCE_AS(float32x2_t, LANES128(v130).n128_u64[0]),
                           1),
            v136, v130, 2);
        v124[1] = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v134, LANES128(v131).n128_f32[0]), v135,
                           COERCE_AS(float32x2_t, LANES128(v131).n128_u64[0]),
                           1),
            v136, v131, 2);
        v120 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v134, LANES128(v132).n128_f32[0]), v135,
                           COERCE_AS(float32x2_t, LANES128(v132).n128_u64[0]),
                           1),
            v136, v132, 2);
        v121 = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v134, LANES128(v133).n128_f32[0]), v135,
                    COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0]), 1),
                v136, v133, 2),
            v137);
      }
      else {
        v125 = (float32x2_t*)(v114 + (result << 6));
        if (v76 == 0) {
          v126 = LANES64(v125[7]).n64_u64[0];
          *(float32x2_t*)&LANES128(v124[2]).n128_i8[8] = v125[5];
          LANES128(v124[3]).n128_u64[1] = v126;
          v127 = LANES64(v125[3]).n64_u64[0];
          *(float32x2_t*)&LANES128(*(v124)).n128_i8[8] = v125[1];
          LANES128(v124[1]).n128_u64[1] = v127;
          v128 = LANES64(*(v125)).n64_u64[0];
          LANES128(v124[1]).n128_u64[0] = LANES64(v125[2]).n64_u64[0];
          LANES128(*(v124)).n128_u64[0] = v128;
          result = LANES64(v125[4]).n64_u64[0];
          LANES128(v124[3]).n128_u64[0] = LANES64(v125[6]).n64_u64[0];
          LANES128(v124[2]).n128_u64[0] = result;
          goto LABEL_10;
        }
        v117 = *(float32x4_t*)LANES64(v125[4]).n64_u64;
        v118 = *(float32x4_t*)LANES64(v125[6]).n64_u64;
        v119 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v106,
                            COERCE_FLOAT(*(_OWORD*)LANES64(v125[2]).n64_u64)),
                v107, v125[2], 1),
            v108, *(float32x4_t*)LANES64(v125[2]).n64_u64, 2);
        *v124 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v106,
                            COERCE_FLOAT(*(_OWORD*)LANES64(*(v125)).n64_u64)),
                v107, COERCE_AS(float32x2_t, LANES64(*(v125)).n64_u64[0]), 1),
            v108, *(float32x4_t*)LANES64(*(v125)).n64_u64, 2);
        v124[1] = v119;
        v120 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v106, LANES128(v117).n128_f32[0]), v107,
                           COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0]),
                           1),
            v108, v117, 2);
        v121 = vaddq_f32(
            v109,
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v106, LANES128(v118).n128_f32[0]), v107,
                    COERCE_AS(float32x2_t, LANES128(v118).n128_u64[0]), 1),
                v108, v118, 2));
      }
      v124[2] = v120;
      v124[3] = v121;
    LABEL_10:
      v113 += 3;
    } while (v122 + 3 != v111);
  }
  return result;
}

void game_fbdd20(__int64 a1)
{
  int v2;
  __int64 v3;
  char* v4;
  char* v5;
  __int64* v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  char v27;
  __int64 v28;
  struct {
    __int64 v29;
    __int64 v30;
    char* v31;
  } v29_;
  _QWORD v32[32];
  struct {
    _QWORD v33[2];
    char* v34;
  } v33_;

  v2 = GameHr_fbcd00(*(_DWORD*)(a1 + 152));
  v3 = *(unsigned int*)(a1 + 152);
  if ((unsigned int)(v2 - 3) < 2) {
    v4 = "GroupB";
  }
  else if ((unsigned int)(v2 - 5) >= 2) {
    if (v2 == 0) {
      LOWORD(v29_.v29) = 0;
      v5 = (char*)&v29_.v29 + 1;
      goto LABEL_37;
    }
    v4 = "GroupA";
  }
  else {
    v4 = "GroupC";
  }
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v6 = game_map_MapRandom_instance__ptr[0];
  v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v9 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v6 + 1) = v7;
  v10 = (v9 >> 8) ^ (v8 >> 19) ^ v9 ^ v8;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6) = v8;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4) = v10;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  if ((unsigned int)v3 > 3) {
    v11 = &GameData_1a9f09e;
  }
  else {
    v11 = GameData_1ffce20[v3];
  }
  v12 = strlen(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_48:
    String_60a1d0();
  }
  v13 = v12;
  v14 =
      (v10 & 0x7FFFFFFF) -
      5 * ((unsigned int)((1717986919 * (unsigned __int64)(v10 & 0x7FFFFFFF)) >>
                          32) >>
           1);
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v12 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v16,
                                                16, 0);
    v33_.v34 = v15;
    v33_.v33[0] = v16 | 1;
    goto LABEL_19;
  }
  LOBYTE(v33_.v33[0]) = 2 * v12;
  v15 = (char*)v33_.v33 + 1;
  if (v12 != 0) {
  LABEL_19:
    memcpy((__int64)v15, (__int64)v11, v13);
  }
  v15[v13] = 0;
  sprintf((__int64)v32, "MID_LGV_Audience_Topic1_%s_m01_%03d", v4, v14 + 1);
  v17 = strlen((const char*)v32);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_48;
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v20, 16, 0);
    v29_.v30 = v18;
    v29_.v31 = v19;
    v29_.v29 = v20 | 1;
    goto LABEL_28;
  }
  LOBYTE(v29_.v29) = 2 * v17;
  v19 = (char*)&v29_.v29 + 1;
  if (v17 != 0) {
  LABEL_28:
    memcpy((__int64)v19, (__int64)v32, v18);
  }
  v21 = v33_.v33[0];
  v19[v18] = 0;
  if ((v21 & 1) != 0 && v33_.v34 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  (__int64)v33_.v34);
  }
  if ((v29_.v29 & 1) != 0) {
    v5 = v29_.v31;
  }
  else {
    v5 = (char*)&v29_.v29 + 1;
  }
LABEL_37:
  v32[0] = v5;
  v32[1] = strlen(v5);
  v33_.v33[0] = &GameData_1a9f09e;
  v33_.v33[1] = 0;
  Message_16f9b50(a1);
  v23 = *(__int64**)(a1 + 168);
  if ((unsigned __int64)v23 >= *(_QWORD*)(a1 + 176)) {
    v26 = Manager_66cc20((__int64*)(a1 + 160), &v29_.v29);
  }
  else if ((v29_.v29 & 1) != 0) {
    fw_text_String_CopyTerminated(*(__int64**)(a1 + 168), (__int64)v29_.v31,
                                  v29_.v30);
    v26 = v23 + 3;
  }
  else {
    v24 = v29_.v29;
    v25 = (__int64)v29_.v31;
    v26 = v23 + 3;
    v23[1] = v29_.v30;
    v23[2] = v25;
    *v23 = v24;
  }
  v27 = v29_.v29;
  *(_QWORD*)(a1 + 168) = v26;
  if ((v27 & 1) != 0 && v29_.v31 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  (__int64)v29_.v31);
  }
}

__attribute__((swiftcall)) void game_10081e0(PSEUDO_X8 x8_, char* a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64 v31;
    void* v32;
    char* v33;
  } v31_;
  struct {
    _WORD v34[8];
    char* v35;
  } v34_;

  v2 = *((_QWORD*)a1 + 26);
  v3 = (__int64)a1;
  v34_.v34[0] = 0;
  if (v2 == 0 ||
      (a2 = game_GameModeData_instance_, game_GameModeData_instance_ == 0) ||
      (a1 = (char*)game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)(*(_QWORD*)(v2 + 24) + 992LL))) == nullptr ||
      (_DWORD)(a2 = *((unsigned int*)a1 + 8)) == 0) {
    v15 = 0;
    v34_.v34[0] = 0;
    LOWORD(v31_.v31) = 0;
    goto LABEL_24;
  }
  v4 = *(_QWORD*)(v2 + 288);
  if (v4 == 0) {
    goto LABEL_47;
  }
  v5 = GameRoutine_975940(v4);
  if (v5 == 0) {
    goto LABEL_47;
  }
  v6 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
               8LL *
                   *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                  game_TransporterConst_List_instance__ptr
                                                                      [0] +
                                                              8LL) +
                                                   8LL) +
                                        12LL * GameData_2167728 + 4));
  if (v6 == 0) {
    goto LABEL_47;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v7 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v7 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (*(unsigned __int8*)(v5 + 66) == *(__int16*)(v7 + 2) &&
      *(unsigned __int8*)(v5 + 67) == *(__int16*)(v7 + 4)) {
    goto LABEL_48;
  }
  v8 = *(unsigned __int16*)(v5 + 240);
  if (*(_WORD*)(v5 + 240) != 0) {
    v9 = (__int64*)(*(_QWORD*)(v5 + 248) + 8LL);
    do {
      v10 = *v9;
      v9 += 2;
      if (v10 == v6) {
        goto LABEL_48;
      }
    } while (--v8 != 0);
  }
  v11 = *(unsigned __int16*)(v5 + 256);
  if (*(_WORD*)(v5 + 256) != 0) {
    v12 = (__int64*)(*(_QWORD*)(v5 + 264) + 8LL);
    do {
      v13 = *v12;
      v12 += 2;
      if (v13 == v6) {
        goto LABEL_46;
      }
    } while (--v11 != 0);
  }
  v14 = GameRoutine_9750e0(v5, v6);
  if (v14 > 0) {
  LABEL_48:
    GameRoutine_60a020((__int64)v34_.v34, "SE_SYS_Telop_Reliance_Excellent");
    a1 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    v15 = 41;
    a2 = 33;
    v31_.v31 = 41;
    v31_.v32 = ((char*)0x20LL) + 1;
    v31_.v33 = a1;
    strcpy(a1, "MID_GiftReaction_Result_Excellent");
    goto LABEL_24;
  }
  if (v14 == 0) {
  LABEL_47:
    if (GameRoutine_1008d20(*(_QWORD*)(v3 + 208))) {
      goto LABEL_48;
    }
    v21 = *(_QWORD*)(v3 + 208);
    if (v21 != 0 && (v22 = *(_QWORD*)(v21 + 288)) != 0 &&
        (v23 = GameRoutine_975940(v22)) != 0) {
      v24 = GameRoutine_975520(
          v23,
          *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                     8LL *
                         *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                        game_TransporterConst_List_instance__ptr
                                                                            [0] +
                                                                    8LL) +
                                                         8LL) +
                                              12LL * GameData_2167728 + 4)));
    }
    else {
      v24 = 0;
    }
    v31_.v32 = &GameData_1ab4cc9;
    v25 = game_HashString((__int64)&GameData_1ab4cc9);
    v26 = game_GameModeData_instance_;
    v31_.v31 = v25;
    if (game_GameModeData_instance_ != 0) {
      v27 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v31_.v31);
      if (v27 == 0) {
        if (v24 < 0) {
          goto LABEL_58;
        }
        goto LABEL_60;
      }
      v26 = *(_DWORD*)(v27 + 32);
    }
    if (v24 < v26) {
    LABEL_58:
      GameRoutine_60a020((__int64)v34_.v34, "SE_SYS_Telop_Reliance_Fair");
      a1 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
      v15 = 33;
      a2 = 28;
      v31_.v31 = 33;
      v31_.v32 = (__int128*)((char*)0x10LL + 12);
      v31_.v33 = a1;
      *((_DWORD*)a1 + 6) = 1919508806;
      v20 = "MID_GiftReaction_Result_Fair";
      goto LABEL_61;
    }
  LABEL_60:
    GameRoutine_60a020((__int64)v34_.v34, "SE_SYS_Telop_Reliance_Good");
    a1 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v15 = 33;
    a2 = 28;
    v31_.v31 = 33;
    v31_.v32 = (__int128*)((char*)0x10LL + 12);
    v31_.v33 = a1;
    *((_DWORD*)a1 + 6) = 1685024583;
    v20 = "MID_GiftReaction_Result_Good";
    goto LABEL_61;
  }
LABEL_46:
  GameRoutine_60a020((__int64)v34_.v34, "SE_SYS_Telop_Reliance_Poor");
  a1 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v15 = 33;
  a2 = 28;
  v31_.v31 = 33;
  v31_.v32 = (__int128*)((char*)0x10LL + 12);
  v31_.v33 = a1;
  *((_DWORD*)a1 + 6) = 1919905616;
  v20 = "MID_GiftReaction_Result_Poor";
LABEL_61:
  v28 = *(_QWORD*)v20;
  v29 = *((_QWORD*)v20 + 1);
  v30 = *((_QWORD*)v20 + 2);
  a1[28] = 0;
  *(_QWORD*)a1 = v28;
  *((_QWORD*)a1 + 1) = v29;
  *((_QWORD*)a1 + 2) = v30;
LABEL_24:
  if ((v15 & 1) == 0) {
    a2 = v15 >> 1;
  }
  if (a2 != 0) {
    if ((v15 & 1) == 0) {
      a1 = (char*)&v31_.v31 + 1;
    }
    GameRoutine_1a09c70(a1);
    v16 = Message_16f9b50(v3);
    if (v16 != 0) {
      if ((v34_.v34[0] & 1) != 0) {
        v17 = v34_.v35;
      }
      else {
        v17 = (char*)v34_.v34 + 1;
      }
      Se_80e330(v16, v17);
    }
  }
  if ((v31_.v31 & 1) != 0 && v31_.v33 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  (__int64)v31_.v33);
  }
  if ((v34_.v34[0] & 1) != 0 && v34_.v35 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  (__int64)v34_.v35);
  }
}

void game_1254c80(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  int v6;
  _QWORD* v7;
  unsigned __int64 v8;
  char* v9;
  char* v10;
  signed __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  unsigned __int64 v30;
  __int64 v31;
  signed __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  char* v40;
  int i;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  signed __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64* v66;
  char* v67;
  int j;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  _BYTE* v84;
  __int64* v85;
  __int64* v86;
  __int64 v87;

  v1 = *(_QWORD*)(a1 + 152);
  v82 = *(_QWORD*)(a1 + 160);
  if (v1 != v82) {
    v3 = (__int64*)fw_memory_g_heap_manager_ptr;
    v4 = GameData_212c878[0];
    v5 = game_map_MapRandom_instance__ptr[0];
    do {
      v83 = v1;
      v6 = *(_DWORD*)(a1 + 180);
      v84 = *(_BYTE**)v1;
      *(_DWORD*)(a1 + 176) += *(unsigned __int16*)(**(_QWORD**)v1 + 426LL);
      *(_DWORD*)(a1 + 180) = v6 + *(unsigned __int16*)(*(_QWORD*)v84 + 428LL);
      v7 = *(_QWORD**)(*(_QWORD*)v84 + 24LL);
      v8 = v7[12] - v7[11];
      if ((int)(v8 >> 4) >= 1) {
        v9 = *(char**)(a1 + 184);
        v10 = *(char**)(a1 + 192);
        v11 = v10 - v9;
        v12 = (v10 - v9) >> 3;
        v13 = v12 + ((v8 >> 4) & 0x7FFFFFFF);
        if (v13 > (__int64)(*(_QWORD*)(a1 + 200) - (_QWORD)v9) >> 3) {
          if (v13 >> 61 != 0) {
            GameRoutine_6f26d0();
          }
          v14 = fw_memory_HeapManager_Allocate(*v3, 8 * v13, 16, 0);
          if (v9 != v10) {
            v15 = (_QWORD*)(v14 + v11 - 8 * v12);
            do {
              *v15 = 0;
              v16 = *(_QWORD*)v9;
              v9 += 8;
              *v15++ = v16;
            } while (v9 != v10);
            v9 = *(char**)(a1 + 184);
          }
          *(_QWORD*)(a1 + 184) = v14 + v11 - 8 * v12;
          *(_QWORD*)(a1 + 192) = v14 + v11;
          *(_QWORD*)(a1 + 200) = v14 + 8 * v13;
          if (v9 != nullptr) {
            v17 = 128;
            if (*(_QWORD*)(*v3 + 200) == 0) {
              v17 = 56;
            }
            nn_mem_StandardAllocator_Free(*v3 + v17, (__int64)v9);
          }
        }
        v7 = *(_QWORD**)(*(_QWORD*)v84 + 24LL);
        v18 = (__int64*)v7[11];
        v19 = (__int64*)v7[12];
        if (v18 != v19) {
          do {
            v20 = *v18;
            v87 = 0x100000000LL;
            if (v20 != 0) {
              v21 = *(unsigned __int16*)(v20 + 16);
              v22 = *(_QWORD*)(*v4 + 64);
              LOWORD(v87) = v21;
              if (*(_BYTE*)(*(_QWORD*)(v22 + 8LL * v21) + 73LL) == 17) {
                nn_os_LockMutex((__int64)&game_g_random_mutex);
                v23 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
                v24 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4);
                v25 = *(_DWORD*)v5 ^ (*(_DWORD*)v5 << 11);
                *(_DWORD*)v5 = *((_DWORD*)v5 + 1);
                *((_DWORD*)v5 + 1) = v23;
                v26 = (v25 >> 8) ^ (v24 >> 19) ^ v25 ^ v24;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v24;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v26;
                nn_os_UnlockMutex((__int64)&game_g_random_mutex);
                v21 = (unsigned __int16)v87;
                HIDWORD(v87) =
                    HIDWORD(v87) & 0xFFFFC00F |
                    (16 * (((16 * (v26 - 1000 * ((v26 & 0x7FFFFFFFu) / 0x3E8)) +
                             16) >>
                            4) &
                           0x3FF));
              }
              v27 = *((_DWORD*)v18 + 2);
              v28 = v27 - 1;
              if (v27 >= 1 & v21 != 0) {
                if (v21 != 0) {
                LABEL_26:
                  game_8aef60(a1 + 184, (unsigned __int16*)&v87);
                }
                while (v28 != 0) {
                  --v28;
                  if ((_WORD)v87 != 0) {
                    goto LABEL_26;
                  }
                }
              }
            }
            v18 += 2;
          } while (v18 != v19);
          v7 = *(_QWORD**)(*(_QWORD*)v84 + 24LL);
        }
      }
      v30 = v7[15] - v7[14];
      if ((int)(v30 >> 4) >= 1) {
        v31 = *(_QWORD*)(a1 + 208);
        v32 = *(_QWORD*)(a1 + 216) - v31;
        v33 = (v32 >> 3) + ((v30 >> 4) & 0x7FFFFFFF);
        if (v33 > (signed __int64)(*(_QWORD*)(a1 + 224) - v31) >> 3) {
          if (v33 >> 61 != 0) {
          LABEL_92:
            GameRoutine_6f93f0();
          }
          v34 = fw_memory_HeapManager_Allocate(*v3, 8 * v33, 16, 0);
          v35 = v34 + v32;
          v36 = v34 + 8 * v33;
          v37 = v34 + v32 - 8 * (v32 >> 3);
          memcpy(v37, v31, v32);
          *(_QWORD*)(a1 + 208) = v37;
          *(_QWORD*)(a1 + 216) = v35;
          *(_QWORD*)(a1 + 224) = v36;
          if (v31 != 0) {
            v38 = 128;
            if (*(_QWORD*)(*v3 + 200) == 0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free(*v3 + v38, v31);
          }
        }
        v7 = *(_QWORD**)(*(_QWORD*)v84 + 24LL);
        v39 = (__int64*)v7[14];
        v85 = (__int64*)v7[15];
        if (v39 != v85) {
          do {
            if (*((int*)v39 + 2) >= 1) {
              v40 = *(char**)(a1 + 216);
              for (i = 0; i < (signed __int32)*((_DWORD*)v39 + 2); ++i) {
                v42 = *v39;
                v43 = *(_QWORD*)(a1 + 224);
                if ((unsigned __int64)v40 < v43) {
                  *(_QWORD*)v40 = v42;
                  v40 += 8;
                }
                else {
                  v44 = *(_QWORD*)(a1 + 208);
                  v45 = &v40[-v44];
                  v46 = (__int64)&v40[-v44] >> 3;
                  v47 = v46 + 1;
                  if ((unsigned __int64)(v46 + 1) >> 61 != 0) {
                    goto LABEL_92;
                  }
                  v48 = v43 - v44;
                  if (v48 >> 2 > v47) {
                    v47 = v48 >> 2;
                  }
                  if ((unsigned __int64)v48 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v49 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v49 = v47;
                  }
                  if (v49 != 0) {
                    if (v49 >> 61 != 0) {
                    LABEL_91:
                      GameRoutine_60a210();
                    }
                    v50 = fw_memory_HeapManager_Allocate(*v3, 8 * v49, 16, 0);
                  }
                  else {
                    v50 = 0;
                  }
                  v51 = v50 + 8 * v49;
                  v52 = (unsigned __int64)&v40[-v44];
                  v53 = (__int64)&v45[v50 + -8 * v46];
                  *(_QWORD*)&v45[v50] = v42;
                  v40 = &v45[v50 + 8];
                  memcpy(v53, v44, v52);
                  *(_QWORD*)(a1 + 208) = v53;
                  *(_QWORD*)(a1 + 216) = v40;
                  *(_QWORD*)(a1 + 224) = v51;
                  if (v44 != 0) {
                    v54 = 128;
                    if (*(_QWORD*)(*v3 + 200) == 0) {
                      v54 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v3 + v54, v44);
                  }
                }
                *(_QWORD*)(a1 + 216) = v40;
              }
            }
            v39 += 2;
          } while (v39 != v85);
          v7 = *(_QWORD**)(*(_QWORD*)v84 + 24LL);
        }
      }
      v55 = v7[18] - v7[17];
      if ((int)(v55 >> 4) >= 1) {
        v56 = *(_QWORD*)(a1 + 232);
        v57 = *(_QWORD*)(a1 + 240) - v56;
        v58 = (v57 >> 3) + ((v55 >> 4) & 0x7FFFFFFF);
        if (v58 > (signed __int64)(*(_QWORD*)(a1 + 248) - v56) >> 3) {
          if (v58 >> 61 != 0) {
          LABEL_93:
            GameRoutine_6e56b0();
          }
          v59 = fw_memory_HeapManager_Allocate(*v3, 8 * v58, 16, 0);
          v60 = v59 + v57;
          v61 = v59 + 8 * v58;
          v62 = v59 + v57 - 8 * (v57 >> 3);
          memcpy(v62, v56, v57);
          *(_QWORD*)(a1 + 232) = v62;
          *(_QWORD*)(a1 + 240) = v60;
          *(_QWORD*)(a1 + 248) = v61;
          if (v56 != 0) {
            v63 = 128;
            if (*(_QWORD*)(*v3 + 200) == 0) {
              v63 = 56;
            }
            nn_mem_StandardAllocator_Free(*v3 + v63, v56);
          }
        }
        v64 = *(_QWORD*)(*(_QWORD*)v84 + 24LL);
        v66 = *(__int64**)(v64 + 136);
        v65 = *(__int64**)(v64 + 144);
        v86 = v65;
        while (v66 != v65) {
          if (*((int*)v66 + 2) >= 1) {
            v67 = *(char**)(a1 + 240);
            for (j = 0; j < (signed __int32)*((_DWORD*)v66 + 2); ++j) {
              v69 = *v66;
              v70 = *(_QWORD*)(a1 + 248);
              if ((unsigned __int64)v67 < v70) {
                *(_QWORD*)v67 = v69;
                v67 += 8;
              }
              else {
                v71 = *(_QWORD*)(a1 + 232);
                v72 = &v67[-v71];
                v73 = (__int64)&v67[-v71] >> 3;
                v74 = v73 + 1;
                if ((unsigned __int64)(v73 + 1) >> 61 != 0) {
                  goto LABEL_93;
                }
                v75 = v70 - v71;
                if (v75 >> 2 > v74) {
                  v74 = v75 >> 2;
                }
                if ((unsigned __int64)v75 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v76 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v76 = v74;
                }
                if (v76 != 0) {
                  if (v76 >> 61 != 0) {
                    goto LABEL_91;
                  }
                  v77 = fw_memory_HeapManager_Allocate(*v3, 8 * v76, 16, 0);
                }
                else {
                  v77 = 0;
                }
                v78 = v77 + 8 * v76;
                v79 = (unsigned __int64)&v67[-v71];
                v80 = (__int64)&v72[v77 + -8 * v73];
                *(_QWORD*)&v72[v77] = v69;
                v67 = &v72[v77 + 8];
                memcpy(v80, v71, v79);
                *(_QWORD*)(a1 + 232) = v80;
                *(_QWORD*)(a1 + 240) = v67;
                *(_QWORD*)(a1 + 248) = v78;
                if (v71 != 0) {
                  v81 = 128;
                  if (*(_QWORD*)(*v3 + 200) == 0) {
                    v81 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v3 + v81, v71);
                }
              }
              *(_QWORD*)(a1 + 240) = v67;
            }
          }
          v65 = v86;
          v66 += 2;
        }
      }
      v84[11] |= 4u;
      v4 = GameData_212c878[0];
      v5 = game_map_MapRandom_instance__ptr[0];
      v1 = v83 + 8;
    } while (v83 + 8 != v82);
  }
}

#pragma GCC visibility pop
