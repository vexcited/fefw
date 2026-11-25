#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_map_1140e80(PSEUDO_X8, _DWORD*);
__int64* GameRoutine_1141380(__int64* result, __int64*);
__int64* GameRoutine_64dfe0(__int64* result, __int64*);
__int64* GameRoutine_f155c0(__int64* result, char*, char*, unsigned __int64);
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64 CharacterController_d42d20(__int64 result, char*, char*,
                                   unsigned __int64);
__int64 GameHr_fcacb0(__int64, __int64, __int64, __int64, __int64, __int16,
                      __int64);
__int64 GameRoutine_112180(__int64, __int64);
__int64 MapDrawConst_fcbcc0(__int64, int, unsigned __int8, unsigned __int8,
                            __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
__int64 game_map_f54910(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_playAt_ff5f0(__int64, __int64, __int64, __int64, unsigned int,
                         unsigned int, int, float, float);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_1aad2d5;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ff55f8[])();
extern __int64 (*GameData_1ff56f8[])();
extern __int64 (*decltype_c81af0_ptr[6])();
extern __int64 (*game_map_MapBreakdownEvent_vtable[])();
extern __int64 (*game_map_MapDestroyEvent_vtable[])();
extern __int64 (*game_map_MapEscapeAfterEvent_vtable[])();
extern __int64 (*game_map_TutorialMeshData_vtable[])();
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212f8b0[14];
extern __int64 GameData_212d020[5];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float fmodf(float, float);
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
int __cxa_guard_acquire(__int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a250(const char*);
void __cxa_guard_release(__int64);
void game_map_1141500(_QWORD*, int, __int64*);
void game_map_11416c0(_QWORD*, int, __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
float game_map_7c05a0(__int64 a1);
void game_map_7c0910(__int64 a1, __int64 a2);
void game_map_f4b620(__int64 a1);
void game_map_1141e80(_QWORD* a1, __int64* a2);
void game_map_1142060(_QWORD* a1, __int64* a2);
void game_map_1142440(__int64 (***a1)(), __int64* a2);
extern __int64 (*decltype_c81af0_ptr_2012a50[6])();
extern __int64 (*game_map_MapEscapeBeforeEvent_vtable[])();
void game_map_1142240(__int64 (***a1)(), __int64* a2);

float game_map_7c05a0(__int64 a1)
{
  int v1;
  int v2;
  char v3;
  _QWORD* v4;
  char v5;
  int v6;
  int v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  bool v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  int8x16_t v22;
  int8x16_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  int8x16_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float result;

  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v4 = *(_QWORD**)(a1 + 432);
  v5 = v3;
  v6 = v2;
  v7 = v1;
  v8 = v4[2];
  v4 += 2;
  v9 = (*(float (**)(_QWORD*))(v8 + 16))(v4),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v10 = (*(float (**)(_QWORD*))(*v4 + 16LL))(v4),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v11 = fmodf(v10, 0x1.6800000000000p+8f),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v9 < 0x0.0p+0f) {
    v11 = v11 + 0x1.6800000000000p+8f;
  }
  if (!(v11 < 0x1.6800000000000p+5f)) {
    if (!(v11 < 0x1.0e00000000000p+7f)) {
      if (!(v11 < 0x1.c200000000000p+7f)) {
        v13 = v11 < 0x1.3b00000000000p+8f;
        v12 = 0x1.921fb60000000p+0f;
        if (v13) {
          v12 = 0x1.f6a7a20000000p+1f;
        }
      }
      else {
        v12 = 0x1.921fb60000000p+1f;
      }
    }
    else {
      v12 = 0x1.2d97c80000000p+1f;
    }
  }
  else {
    v12 = 0x1.921fb60000000p+0f;
  }
  v14 = v12 +
        (float)(roundf(v12 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v14 < -0x1.921fb60000000p+0f) {
    v15 = -0x1.0000000000000p+0f;
  }
  else {
    v15 = 0x1.0000000000000p+0f;
  }
  v16 = -0x1.921fb60000000p+1f - v14;
  if (!(v14 < -0x1.921fb60000000p+0f)) {
    v16 = v14;
  }
  if (v14 > 0x1.921fb60000000p+0f) {
    v17 = 0x1.921fb60000000p+1f - v14;
  }
  else {
    v17 = v16;
  }
  if (v14 > 0x1.921fb60000000p+0f) {
    v18 = -0x1.0000000000000p+0f;
  }
  else {
    v18 = v15;
  }
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                           COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v19).n128_u64[0];
  v20 = vrsqrteq_f32(v19);
  v21 = vmulq_f32(v20, vrsqrtsq_f32(v20, vmulq_f32(v19, v20)));
  v22 = vmulq_f32(vmulq_f32(v21, vrsqrtsq_f32(v21, vmulq_f32(v19, v21))),
                  COERCE_AS(float32x4_t, GameData_1a83610));
  v23 = vceqzq_f32(v19);
  LANES128(v19).n128_u32[1] = 0;
  v24 = vbicq_s8(v22, v23);
  PSEUDO_LOW_LANE128(v23, n128_f32, v17 * v17);
  LANES128(v19).n128_f32[0] = (float)v7;
  LANES128(v19).n128_u64[1] = COERCE_UNSIGNED_INT(-(float)v6);
  PSEUDO_LOW_LANE128(
      v23, n128_f32,
      v18 *
          (float)((float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c188) -
                                     (float)((float)(*(float*)((char*)((
                                                                   _UNKNOWN**)0x8LL) +
                                                               (_QWORD)
                                                                   GameData_212c188 +
                                                               4) +
                                                     (float)((float)-(
                                                                 float)(*(float*)((char*)((
                                                                                      _UNKNOWN**)0x8LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c188) -
                                                                        (float)((float)(*((float*)
                                                                                              GameData_212c188 +
                                                                                          1) -
                                                                                        (float)(*(float*)
                                                                                                    GameData_212c188 *
                                                                                                LANES128(
                                                                                                    v23)
                                                                                                    .n128_f32
                                                                                                        [0])) *
                                                                                LANES128(
                                                                                    v23)
                                                                                    .n128_f32
                                                                                        [0])) *
                                                             LANES128(v23)
                                                                 .n128_f32
                                                                     [0])) *
                                             LANES128(v23).n128_f32[0])) *
                          LANES128(v23).n128_f32[0]) +
                  0x1.0000000000000p+0f));
  v25 = vmulq_n_f32(
      v24,
      v17 *
          (float)((float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c190) -
                                     (float)((float)(*(float*)((char*)((
                                                                   _UNKNOWN**)0x8LL) +
                                                               (_QWORD)
                                                                   GameData_212c190 +
                                                               4) +
                                                     (float)((float)-(
                                                                 float)(*(float*)((char*)((
                                                                                      _UNKNOWN**)0x8LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c190) -
                                                                        (float)((float)(*((float*)
                                                                                              GameData_212c190 +
                                                                                          1) -
                                                                                        (float)(*(float*)
                                                                                                    GameData_212c190 *
                                                                                                (float)(v17 *
                                                                                                        v17))) *
                                                                                (float)(v17 *
                                                                                        v17))) *
                                                             (float)(v17 *
                                                                     v17))) *
                                             (float)(v17 * v17))) *
                          (float)(v17 * v17)) +
                  0x1.0000000000000p+0f));
  v26 = v25;
  LANES128(v26).n128_u32[3] = LANES128(v23).n128_u32[0];
  v27 = vmulq_f32(v26, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] = COERCE_UNSIGNED_INT((float)v7);
  LANES128(v28).n128_u64[1] = LANES128(v28).n128_u64[0];
  LANES128(v31).n128_u64[1] = LANES128(v30).n128_u64[0];
  *(int8x8_t*)&LANES128(v29).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v32 = vmulq_f32(v31, v29);
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v31).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v27).n128_u64[0]), 1);
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[1] = LANES128(v19).n128_u64[0];
  LANES128(v19).n128_u64[1] = COERCE_UNSIGNED_INT((float)v7);
  v33 =
      vmlaq_f32(vmlaq_f32(vmulq_f32(v28, v27),
                          COERCE_AS(float32x4_t, GameData_1a83800), v32),
                COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v19, v31));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v19).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v34 = vmlsq_f32(v33, v19, v30);
  LANES128(v35).n128_u64[0] = LANES128(v25).n128_u64[0];
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v26).n128_u64[1],
                                                 LANES128(v25).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v26).n128_u64[1],
                                                 LANES128(v25).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v26).n128_u64[1],
                                                 LANES128(v25).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v26).n128_u64[1] = LANES128(v26).n128_u64[0];
  LANES128(v35).n128_u64[1] = LANES128(v27).n128_u64[0];
  *(int8x8_t*)&LANES128(v36).n128_i8[8] =
      vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v27).n128_u64[1] = LANES128(v19).n128_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v25).n128_u64[0];
  *(int32x2_t*)&LANES128(v37).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v34).n128_u64[0]), 1);
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v25).n128_i8[8] =
      vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v38 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v26, v34),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v35, v36)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v19, v37)),
                  v25, v27);
  result =
      -(float)(LANES128(v38).n128_f32[2] -
               (float)(LANES128(v38).n128_f32[0] * 0x1.0000000000000p+10f));
  if ((v5 & 1) != 0) {
    return LANES128(v38).n128_f32[0] -
           (float)(0x1.0000000000000p+10f * LANES128(v38).n128_f32[2]);
  }
  return result;
}

void game_map_7c0910(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  float v4;

  if (a2 != 0) {
    v2 = *(_QWORD**)(a1 + 432);
    v3 = v2[2];
    v2 += 2;
    (*(void (**)(_QWORD*))(v3 + 16))(v2);
    v4 = (*(float (**)(_QWORD*))(*v2 + 16LL))(v2);
    fmodf(v4, 0x1.6800000000000p+8f);
  }
}

void game_map_f4b620(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64* v3;
  float32x4_t* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64* v13;
  char* v14;
  char* v15;
  __int128 v16;
  __int64 v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  unsigned int v20;
  unsigned int v21;
  __int16 v23;
  __int64 v24;
  float32x4_t v25;
  char* v26;
  float32x4_t* v27;
  char* v28;
  float32x4_t v29;
  float32x4_t v30;
  int8x16_t v31;
  bool v32;
  float32x4_t v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64** v37;
  __int64 v38;
  _QWORD* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int128 v46;
  __int128 v47;
  __int128 v48;
  __int64 v49;
  __int128 v50;
  __int64 v51;
  __int128 v52;
  __int128 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64** v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  int v63;
  __int64 v64;
  float v65;
  float v66;
  float v67;
  __int64 v68;
  char* v69;
  char* v70;
  char* v71;
  void (**v72)(char*);
  __int64 v73;
  __int64 v74;
  float32x4_t* v75;
  float32x4_t* v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  unsigned __int64 v87;
  float32x4_t* v88;
  float32x4_t* v89;
  float32x4_t* v90;
  __int64* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64* v98;
  void (***v99)(_QWORD);
  __int64 v100;
  __int64 v101;
  void (***v102)(_QWORD);
  void (**v103)(_QWORD);
  __int64 v104;
  __int64* v105;
  char v106;
  __int128 v107;
  __int128 v108;
  struct {
    _QWORD v109[2];
    int v110;
  } v109_;
  char v111[16];
  struct {
    __int64 (**v112)();
    __int64** v113;
    char gap96_[16];
    __int64 (***v114)();
  } v112_;
  struct {
    float32x4_t v115;
    __int128 v116;
    __int128 v117;
    __int128 v118;
    __int128 v119;
    __int64 v120;
    __int64 v121;
    float32x4_t* v122;
    float32x4_t* v123;
    char gap240_[8];
    char* v124;
    char* v125;
    char gap264_[8];
    __int128 v126;
    __int64 v127;
    __int64 v128;
    float32x4_t v129;
    __int64 v130;
    __int64 v131;
    __int64 v132;
    __int64 v133;
    __int64 v134;
    __int64 v135;
    int v136;
  } v115_;
  __int64* v137;
  struct {
    __int64 v138;
    __int64 v139;
    __int64 v140;
  } v138_;

  v1 = a1;
  if (*(_BYTE*)(a1 + 8) != 1) {
    goto LABEL_116;
  }
  v2 = *(__int64**)(a1 + 16);
  v3 = (__int64*)(a1 + 24);
  if (v2 != (__int64*)(a1 + 24)) {
    do {
      v10 = v2[6];
      *((_BYTE*)v2 + 272) = 0;
      if (((*(__int64 (**)(void*))(v10 + 48))((void*)&v2[6]) & 1) != 0) {
        v11 = 1036831949;
      }
      else {
        v11 = 0;
        *((_DWORD*)v2 + 69) = 0;
      }
      v12 = (__int64*)v2[1];
      *((_DWORD*)v2 + 70) = v11;
      if (v12 != nullptr) {
        do {
          v13 = v12;
          v12 = (__int64*)*v12;
        } while (v12 != nullptr);
      }
      else {
        do {
          v13 = (__int64*)v2[2];
          v32 = v2 == (__int64*)*v13;
          v2 = v13;
        } while (!v32);
      }
      v2 = v13;
    } while (v13 != v3);
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1) & 1) == 0) {
    goto LABEL_115;
  }
  v138_.v139 = 0;
  v138_.v140 = 0;
  v138_.v138 = 0;
  v112_.v113 = (__int64**)&GameData_1aad2d5;
  v112_.v112 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aad2d5);
  LANES128(v115_.v115).n128_u64[0] = (unsigned __int64)GameData_1ff55f8;
  LANES128(v115_.v115).n128_u64[1] = (unsigned __int64)&v112_.v112;
  v4 = &v115_.v115;
  *(_QWORD*)&v115_.v117 = &v115_.v115;
  *(_QWORD*)&v115_.v116 = &v138_.v138;
  v5 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v6 = *(__int64**)(v5 + 18832);
  v7 = *(__int64**)(v5 + 18824);
  if (v6 == v7) {
    goto LABEL_20;
  }
  do {
    v8 = *v7++;
    v109_.v109[0] = v8;
    if ((_QWORD)v115_.v117 == 0) {
      GameRoutine_60a310();
    }
    (*(void (**)(_QWORD, _QWORD*))(*(_QWORD*)v115_.v117 + 48LL))(v115_.v117,
                                                                 v109_.v109);
  } while (v7 != v6);
  v4 = (float32x4_t*)v115_.v117;
  if ((float32x4_t*)v115_.v117 == &v115_.v115) {
  LABEL_20:
    v9 = 32;
  }
  else {
    if ((_QWORD)v115_.v117 == 0) {
      goto LABEL_22;
    }
    v9 = 40;
  }
  (*(void (**)(void*))(LANES128(*(v4)).n128_u64[0] + v9))((void*)v4);
LABEL_22:
  v137 = &v138_.v138;
  v14 = *(char**)(*(_QWORD*)GameData_212d020[0] + 248LL);
  v15 = *(char**)(*(_QWORD*)GameData_212d020[0] + 256LL);
  if (v14 == v15 || v138_.v138 == v138_.v139) {
    goto LABEL_111;
  }
  v106 = 0;
  v16 = (__typeof__(v16)){0};
  v105 = GameData_212f8b0[0] + 2;
  do {
    v18 = (unsigned __int8*)*v137;
    v19 = (unsigned __int8*)v137[1];
    if ((unsigned __int8*)*v137 == v19) {
      goto LABEL_28;
    }
    v20 = *v14;
    v21 = v14[1];
    while (*v18 != (unsigned __int8)v20 || v18[1] != (unsigned __int8)v21) {
      v18 += 4;
      if (v18 == v19) {
        goto LABEL_28;
      }
    }
    v107 = v16;
    game_map_f54910((__int64)&v115_.v115);
    LANES128(v115_.v115).n128_u64[0] =
        (unsigned __int64)game_map_TutorialMeshData_vtable;
    v112_.v114 = &v112_.v112;
    v112_.v112 = GameData_1ff56f8;
    v112_.v113 = &v137;
    v23 = MapDrawConst_fcbcc0(v1, 1, v20, v21, (__int64)&v112_.v112, 1);
    if (v112_.v114 == &v112_.v112) {
      v24 = 4;
      goto LABEL_38;
    }
    if (v112_.v114 != nullptr) {
      v24 = 5;
    LABEL_38:
      ((__int64 (*)(__int64))(*v112_.v114)[v24])((__int64)v112_.v114);
    }
    GameHr_fcacb0(v1, (__int64)&v115_.v115, 1, v20, v21, v23,
                  (__int64)GameData_212c958);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
      v73 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v73;
      __cxa_guard_release((__int64)&GameData_21a6130);
    }
    v25 = COERCE_AS(float32x4_t, GameData_21a6120);
    v27 = v115_.v122;
    v26 = (char*)v115_.v123;
    if (v115_.v123 != v115_.v122) {
      v28 = (char*)v115_.v122;
      do {
        v29 = *((float32x4_t*)v28 + 1);
        v28 += 64;
        v25 = vaddq_f32(v25, v29);
      } while (v28 != (char*)v115_.v123);
      v25 =
          vmulq_n_f32(v25, 0x1.0000000000000p+0f /
                               (float)(unsigned __int64)(((char*)v115_.v123 -
                                                          (char*)v115_.v122) >>
                                                         6));
      LANES128(v25).n128_u32[3] = 0;
    }
    v30 = vsubq_f32(v25, v115_.v129);
    v31 = vmulq_f32(v30, v30);
    LANES128(v31).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
            .n64_u64[0];
    v32 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
                .n64_f32[0] <= 0x0.0p+0f |
        v115_.v123 == v115_.v122;
    if (!v32) {
      do {
        v27[1] = vsubq_f32(v27[1], v30);
        v27 += 4;
      } while (v27 != (float32x4_t*)v26);
    }
    LANES128(v33).n128_u64[0] = LANES128(v25).n128_u64[0];
    LANES128(v33).n128_u64[1] = LANES128(v25).n128_u32[2];
    v115_.v129 = v33;
    v34 = (*(__int64 (**)(float32x4_t*))(LANES128(v115_.v115).n128_u64[0] +
                                         32))(&v115_.v115);
    v35 = *v3;
    v36 = v34;
    v37 = (__int64**)(v1 + 24);
    v38 = v1 + 24;
    if (*v3 != 0) {
      v39 = (_QWORD*)*v3;
      while (1) {
        v40 = v39[4];
        if (!(v34 < v40)) {
          if (!(v40 < v34)) {
            while (1) {
              while (1) {
                v41 = *(_QWORD*)(v35 + 32);
                if (!(v34 < v41)) {
                  break;
                }
                v35 = *(_QWORD*)v35;
                if (v35 == 0) {
                  goto LABEL_162;
                }
              }
              if (!(v41 < v34)) {
                break;
              }
              v35 = *(_QWORD*)(v35 + 8);
              if (v35 == 0) {
              LABEL_162:
                String_60a250("map::at:  key not found");
              }
            }
            v63 = 0;
            goto LABEL_82;
          }
          ++v39;
        }
        v39 = (_QWORD*)*v39;
        if (v39 == nullptr) {
          while (1) {
            while (1) {
              v42 = *(_QWORD*)(v35 + 32);
              v38 = v35;
              if (!(v34 < v42)) {
                break;
              }
              v35 = *(_QWORD*)v35;
              v37 = (__int64**)v38;
              if (*(_QWORD*)v38 == 0) {
                goto LABEL_65;
              }
            }
            if (!(v42 < v34)) {
              goto LABEL_68;
            }
            v35 = *(_QWORD*)(v35 + 8);
            if (v35 == 0) {
              v37 = (__int64**)(v38 + 8);
              goto LABEL_65;
            }
          }
        }
      }
    }
  LABEL_65:
    v43 = v38;
    v38 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         304, 16, 0);
    *(_QWORD*)(v38 + 32) = v36;
    game_map_f54910(v38 + 48);
    *(_QWORD*)v38 = 0;
    *(_QWORD*)(v38 + 8) = 0;
    *(_QWORD*)(v38 + 16) = v43;
    v44 = (__int64*)v38;
    *(_QWORD*)(v38 + 48) = game_map_TutorialMeshData_vtable;
    *v37 = (__int64*)v38;
    v45 = **(_QWORD**)(v1 + 16);
    if (v45 != 0) {
      *(_QWORD*)(v1 + 16) = v45;
      v44 = *v37;
    }
    fw_containers_BalanceAfterInsert(*(__int64**)(v1 + 24), v44);
    ++*(_QWORD*)(v1 + 32);
  LABEL_68:
    *(_QWORD*)(v38 + 56) = LANES128(v115_.v115).n128_u64[1];
    v46 = v115_.v117;
    *(_OWORD*)(v38 + 64) = v115_.v116;
    *(_OWORD*)(v38 + 80) = v46;
    v47 = v115_.v118;
    v48 = v115_.v119;
    v49 = v115_.v121;
    *(_QWORD*)(v38 + 128) = v115_.v120;
    *(_QWORD*)(v38 + 136) = v49;
    *(_OWORD*)(v38 + 96) = v47;
    *(_OWORD*)(v38 + 112) = v48;
    if ((float32x4_t*)(v38 + 48) != &v115_.v115) {
      GameRoutine_f155c0((__int64*)(v38 + 144), (char*)v115_.v122,
                         (char*)v115_.v123,
                         ((char*)v115_.v123 - (char*)v115_.v122) >> 6);
      CharacterController_d42d20(v38 + 168, v115_.v124, v115_.v125,
                                 (v115_.v125 - v115_.v124) >> 4);
    }
    v50 = v115_.v126;
    v51 = v115_.v128;
    v35 = v1 + 24;
    *(_QWORD*)(v38 + 208) = v115_.v127;
    *(_QWORD*)(v38 + 216) = v51;
    *(_QWORD*)(v38 + 192) = v50;
    v52 = *(_OWORD*)(v38 + 192);
    *((_QWORD*)&v52 + 1) = DWORD2(v50);
    DWORD2(v50) = LANES128(v115_.v129).n128_u32[2];
    *(_QWORD*)(v38 + 224) = LANES128(v115_.v129).n128_u64[0];
    *(_OWORD*)(v38 + 192) = v52;
    v53 = *(_OWORD*)(v38 + 224);
    v54 = v115_.v131;
    *((_QWORD*)&v53 + 1) = DWORD2(v50);
    *(_QWORD*)(v38 + 240) = v115_.v130;
    *(_QWORD*)(v38 + 248) = v54;
    v55 = v115_.v133;
    *(_QWORD*)(v38 + 256) = v115_.v132;
    *(_QWORD*)(v38 + 264) = v55;
    *(_OWORD*)(v38 + 224) = v53;
    *(_DWORD*)(v38 + 288) = v115_.v136;
    v56 = v115_.v135;
    *(_QWORD*)(v38 + 272) = v115_.v134;
    *(_QWORD*)(v38 + 280) = v56;
    v57 = (__int64**)(v1 + 24);
    v58 = *v3;
    if (*v3 != 0) {
      while (1) {
        while (1) {
          v35 = v58;
          v59 = *(_QWORD*)(v58 + 32);
          if (!(v36 < v59)) {
            break;
          }
          v58 = *(_QWORD*)v35;
          v57 = (__int64**)v35;
          if (*(_QWORD*)v35 == 0) {
            goto LABEL_77;
          }
        }
        if (!(v59 < v36)) {
          break;
        }
        v58 = *(_QWORD*)(v35 + 8);
        if (v58 == 0) {
          v57 = (__int64**)(v35 + 8);
          goto LABEL_77;
        }
      }
    }
    else {
    LABEL_77:
      v60 = v35;
      v35 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
      *(_QWORD*)(v35 + 32) = v36;
      game_map_f54910(v35 + 48);
      *(_QWORD*)v35 = 0;
      *(_QWORD*)(v35 + 8) = 0;
      *(_QWORD*)(v35 + 16) = v60;
      v61 = (__int64*)v35;
      *(_QWORD*)(v35 + 48) = game_map_TutorialMeshData_vtable;
      *v57 = (__int64*)v35;
      v62 = **(_QWORD**)(v1 + 16);
      if (v62 != 0) {
        *(_QWORD*)(v1 + 16) = v62;
        v61 = *v57;
      }
      fw_containers_BalanceAfterInsert(*(__int64**)(v1 + 24), v61);
      ++*(_QWORD*)(v1 + 32);
    }
    v63 = 1;
  LABEL_82:
    v64 = *(_QWORD*)(v35 + 48);
    *(_BYTE*)(v35 + 272) = 1;
    if (((*(__int64 (**)(__int64))(v64 + 48))((__int64)(v35 + 48)) & 1) != 0) {
      *(_DWORD*)(v35 + 280) = 1036831949;
      if (v63 != 0) {
        goto LABEL_86;
      }
    }
    else {
      *(_DWORD*)(v35 + 276) = 1065353216;
      *(_DWORD*)(v35 + 280) = 0;
      if (v63 != 0) {
      LABEL_86:
        v65 = (float)((float)(*(float*)(*(_QWORD*)
                                            game_script_hub_g_frame_counter_ptr
                                                [0] +
                                        160LL) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f) *
              0x0.0p+0f;
        if (!(*(float*)&v115_.v135 > 0x0.0p+0f)) {
          if ((_BYTE)v115_.v134 != 0) {
            v67 = 0x1.0000000000000p+0f;
          }
          else {
            v67 = 0x0.0p+0f;
          }
        }
        else {
          v66 = v65 / *(float*)&v115_.v135;
          if ((_BYTE)v115_.v134 != 0) {
            v67 = fminf(
                fmaxf(v66 + *((float*)&v115_.v134 + 1), 0x1.51eb860000000p-2f),
                0x1.0000000000000p+0f);
          }
          else {
            v67 = fminf(fmaxf(*((float*)&v115_.v134 + 1) - v66, 0x0.0p+0f),
                        0x1.570a3c0000000p-1f);
          }
        }
        *((float*)&v115_.v134 + 1) = v67;
        *(float*)&v115_.v130 = v65 + *(float*)&v115_.v130;
        (*(void (**)(float32x4_t*))(LANES128(v115_.v115).n128_u64[0] + 40))(
            &v115_.v115);
        GameRoutine_f54fe0(&v115_.v115);
        v16 = v115_.v126;
        if ((v106 & 1) != 0) {
          LODWORD(v16) = v115_.v126;
          *((_QWORD*)&v16 + 1) = DWORD2(v115_.v126);
        }
        v106 = 1;
        goto LABEL_96;
      }
    }
    v16 = v107;
  LABEL_96:
    v108 = v16;
    LANES128(v115_.v115).n128_u64[0] = (unsigned __int64)v105;
    if (v115_.v124 != nullptr) {
      v115_.v125 = v115_.v124;
      v68 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v68 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, (__int64)v115_.v124);
      v16 = v108;
    }
    v69 = (char*)v115_.v122;
    if (v115_.v122 != nullptr) {
      if (v115_.v122 == v115_.v123) {
        goto LABEL_25;
      }
      v70 = (char*)&v115_.v123[-4];
      v71 = (char*)&v115_.v123[-4];
      do {
        v72 = *(void (***)(char*))v71;
        v71 -= 64;
        (*v72)(v70);
        v32 = v70 == v69;
        v70 = v71;
      } while (!v32);
      v16 = v108;
      v115_.v123 = (float32x4_t*)v69;
      v69 = (char*)v115_.v122;
      if (v115_.v122 != nullptr) {
      LABEL_25:
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v69);
        v16 = v108;
      }
    }
  LABEL_28:
    v14 += 4;
  } while (v14 != v15);
  if ((v106 & 1) != 0) {
    v109_.v109[1] = v16;
    v109_.v110 = DWORD2(v16);
    v109_.v109[0] = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830((__int64)&v115_.v115, 0x0.0p+0f);
    snd_playAt_ff5f0((__int64)"SE_SYS_AttentionSign",
                     (__int64)"SE_SYS_AttentionSign", (__int64)v109_.v109,
                     (__int64)&v115_.v115, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(&v115_.v115);
    GameRoutine_112180(v1 + 40, (__int64)v111);
  }
LABEL_111:
  if (v138_.v138 != 0) {
    v138_.v139 = v138_.v138;
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v74,
                                  v138_.v138);
  }
LABEL_115:
  *(_BYTE*)(v1 + 8) = 0;
LABEL_116:
  v75 = *(float32x4_t**)(v1 + 16);
  v76 = (float32x4_t*)(v1 + 24);
  if (v75 != (float32x4_t*)(v1 + 24)) {
    v77 = game_script_hub_g_frame_counter_ptr[0];
    v78 = fw_memory_g_heap_manager_ptr;
    v79 = GameData_212f8b0[0] + 2;
    do {
      v82 = LANES128(v75[17]).n128_f32[2];
      v83 = (float)(*(float*)(*(_QWORD*)v77 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (!(v82 > 0x0.0p+0f)) {
        if (LANES128(v75[17]).n128_u8[0] != 0) {
          v86 = 0x1.0000000000000p+0f;
        }
        else {
          v86 = 0x0.0p+0f;
        }
      }
      else {
        v84 = v83 / v82;
        v85 = LANES128(v75[17]).n128_f32[1];
        if (LANES128(v75[17]).n128_u8[0] != 0) {
          v86 = fminf(fmaxf(v84 + v85, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v86 = fminf(fmaxf(v85 - v84, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v75[17]).n128_f32[1] = v86;
      v87 = LANES128(v75[3]).n128_u64[0];
      LANES128(v75[15]).n128_f32[0] = v83 + LANES128(v75[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v87 + 40))(v75 + 3);
      GameRoutine_f54fe0(v75 + 3);
      v88 = (float32x4_t*)LANES128(*(v75)).n128_u64[1];
      if ((LANES128(v75[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v75[17]).n128_f32[1] > 0x0.0p+0f) {
        if (v88 != nullptr) {
          do {
            v90 = v88;
            v88 = (float32x4_t*)LANES128(*(v88)).n128_u64[0];
          } while (v88 != nullptr);
        }
        else {
          do {
            v90 = (float32x4_t*)LANES128(v75[1]).n128_u64[0];
            v32 = v75 == (float32x4_t*)LANES128(*(v90)).n128_u64[0];
            v75 = v90;
          } while (!v32);
        }
      }
      else {
        v89 = v75;
        if (v88 != nullptr) {
          do {
            v90 = v88;
            v88 = (float32x4_t*)LANES128(*(v88)).n128_u64[0];
          } while (v88 != nullptr);
        }
        else {
          do {
            v90 = (float32x4_t*)LANES128(v89[1]).n128_u64[0];
            v32 = v89 == (float32x4_t*)LANES128(*(v90)).n128_u64[0];
            v89 = v90;
          } while (!v32);
        }
        if (*(float32x4_t**)(v1 + 16) == v75) {
          *(_QWORD*)(v1 + 16) = v90;
        }
        v91 = *(__int64**)(v1 + 24);
        --*(_QWORD*)(v1 + 32);
        GameRoutine_64dfe0(v91, (__int64*)v75);
        v92 = LANES128(v75[10]).n128_i64[1];
        LANES128(v75[3]).n128_u64[0] = (unsigned __int64)v79;
        if (v92 != 0) {
          v93 = *(_QWORD*)v78;
          LANES128(v75[11]).n128_u64[0] = v92;
          if (*(_QWORD*)(v93 + 200) != 0) {
            v94 = 128;
          }
          else {
            v94 = 56;
          }
          nn_mem_StandardAllocator_Free(v93 + v94, v92);
        }
        v95 = LANES128(v75[9]).n128_i64[0];
        if (v95 != 0) {
          v96 = LANES128(v75[9]).n128_u64[1];
          if (v95 == v96) {
            goto LABEL_118;
          }
          v97 = v78;
          v98 = v79;
          v99 = (void (***)(_QWORD))(v96 - 64);
          v100 = v1;
          v101 = v77;
          v102 = (void (***)(_QWORD))(v96 - 64);
          do {
            v103 = *v102;
            v102 -= 8;
            (*v103)(v99);
            v32 = v99 == (void (***)(_QWORD))v95;
            v99 = v102;
          } while (!v32);
          v104 = LANES128(v75[9]).n128_i64[0];
          v77 = v101;
          v1 = v100;
          v79 = v98;
          v78 = v97;
          LANES128(v75[9]).n128_u64[1] = v95;
          v95 = v104;
          if (v104 != 0) {
          LABEL_118:
            if (*(_QWORD*)(*(_QWORD*)v78 + 200LL) != 0) {
              v80 = 128;
            }
            else {
              v80 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v78 + v80, v95);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v78 + 200LL) != 0) {
          v81 = 128;
        }
        else {
          v81 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v78 + v81, (__int64)v75);
      }
      v75 = v90;
    } while (v90 != v76);
  }
}

void game_map_1141e80(_QWORD* a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[2];
    __int64 v12;
    __int64 v13[2];
    __int64 v14;
    __int64 v15;
    __int64 v16;
    char gap64_[32];
    char v17;
    char gap97_[15];
    __int64 v18;
    char gap120_[7];
    char v19;
  } f_;

  GameRoutine_1141380(f_.v13, a2);
  game_map_1141500(a1, 13, f_.v13);
  if ((f_.v17 & 1) != 0 && f_.v18 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  f_.v18);
  }
  v4 = f_.v15;
  if (f_.v15 != 0) {
    v5 = f_.v16;
    if (f_.v15 == f_.v16) {
      goto LABEL_13;
    }
    do {
      v6 = *(unsigned int*)(v5 - 8);
      v7 = v5 - 32;
      if ((_DWORD)v6 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr_2012a50[v6])(&f_.v19,
                                                                    v5 - 32);
      }
      *(_DWORD*)(v5 - 8) = -1;
      v5 -= 32;
    } while (v7 != v4);
    f_.v16 = v4;
    v4 = f_.v15;
    if (f_.v15 != 0) {
    LABEL_13:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    v4);
    }
  }
  if ((f_.v13[0] & 1) != 0 && f_.v14 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  f_.v14);
  }
  *a1 = game_map_MapDestroyEvent_vtable;
  game_map_1140e80((void*)(f_.v11), a1);
  (*(void (**)(_QWORD*, _QWORD*))(*a1 + 120LL))(a1, f_.v11);
  if ((f_.v11[0] & 1) != 0 && f_.v12 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  f_.v12);
  }
}

void game_map_1142060(_QWORD* a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[2];
    __int64 v12;
    __int64 v13[2];
    __int64 v14;
    __int64 v15;
    __int64 v16;
    char gap64_[32];
    char v17;
    char gap97_[15];
    __int64 v18;
    char gap120_[7];
    char v19;
  } f_;

  GameRoutine_1141380(f_.v13, a2);
  game_map_11416c0(a1, 10, f_.v13);
  if ((f_.v17 & 1) != 0 && f_.v18 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  f_.v18);
  }
  v4 = f_.v15;
  if (f_.v15 != 0) {
    v5 = f_.v16;
    if (f_.v15 == f_.v16) {
      goto LABEL_13;
    }
    do {
      v6 = *(unsigned int*)(v5 - 8);
      v7 = v5 - 32;
      if ((_DWORD)v6 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr_2012a50[v6])(&f_.v19,
                                                                    v5 - 32);
      }
      *(_DWORD*)(v5 - 8) = -1;
      v5 -= 32;
    } while (v7 != v4);
    f_.v16 = v4;
    v4 = f_.v15;
    if (f_.v15 != 0) {
    LABEL_13:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    v4);
    }
  }
  if ((f_.v13[0] & 1) != 0 && f_.v14 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  f_.v14);
  }
  *a1 = game_map_MapBreakdownEvent_vtable;
  game_map_1140e80((void*)(f_.v11), a1);
  (*(void (**)(_QWORD*, _QWORD*))(*a1 + 120LL))(a1, f_.v11);
  if ((f_.v11[0] & 1) != 0 && f_.v12 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  f_.v12);
  }
}

void game_map_1142240(__int64 (***a1)(), __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 v14;
  struct {
    __int64 v15[2];
    __int64 v16;
  } v15_;
  struct {
    __int64 v17[2];
    __int64 v18;
    __int64 v19;
    __int64 v20;
    char gap72_[32];
    char v21;
    char gap105_[15];
    __int64 v22;
    char gap128_[31];
    char v23;
  } v17_;

  GameRoutine_1141380(v17_.v17, a2);
  game_map_11416c0(a1, 11, v17_.v17);
  if ((v17_.v21 & 1) != 0 && v17_.v22 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v17_.v22);
  }
  v5 = v17_.v19;
  if (v17_.v19 != 0) {
    v6 = v17_.v20;
    if (v17_.v19 == v17_.v20) {
      goto LABEL_13;
    }
    do {
      v7 = *(unsigned int*)(v6 - 8);
      v8 = v6 - 32;
      if ((_DWORD)v7 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr_2012a50[v7])(&v17_.v23,
                                                                    v6 - 32);
      }
      *(_DWORD*)(v6 - 8) = -1;
      v6 -= 32;
    } while (v8 != v5);
    v17_.v20 = v5;
    v5 = v17_.v19;
    if (v17_.v19 != 0) {
    LABEL_13:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v5);
    }
  }
  if ((v17_.v17[0] & 1) != 0 && v17_.v18 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v17_.v18);
  }
  *a1 = game_map_MapEscapeBeforeEvent_vtable;
  if ((a2[9] & 1) != 0) {
    fw_text_String_CopyTerminated(v15_.v15, a2[11], a2[10]);
    v13 = *a1;
  }
  else {
    v11 = a2[10];
    v12 = a2[11];
    v15_.v15[0] = a2[9];
    v15_.v15[1] = v11;
    v15_.v16 = v12;
    v13 = game_map_MapEscapeBeforeEvent_vtable;
  }
  ((void (*)(__int64 (***)(void), __int64*))v13[15])(a1, v15_.v15);
  if ((v15_.v15[0] & 1) != 0 && v15_.v16 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v15_.v16);
  }
}

void game_map_1142440(__int64 (***a1)(), __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 v14;
  struct {
    char gap0_[8];
    __int64 v15[2];
    __int64 v16;
    __int64 v17[2];
    __int64 v18;
    __int64 v19;
    __int64 v20;
    char gap72_[32];
    char v21;
    char gap105_[15];
    __int64 v22;
    char gap128_[31];
    char v23;
  } f_;

  GameRoutine_1141380(f_.v17, a2);
  game_map_11416c0(a1, 12, f_.v17);
  if ((f_.v21 & 1) != 0 && f_.v22 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  f_.v22);
  }
  v5 = f_.v19;
  if (f_.v19 != 0) {
    v6 = f_.v20;
    if (f_.v19 == f_.v20) {
      goto LABEL_13;
    }
    do {
      v7 = *(unsigned int*)(v6 - 8);
      v8 = v6 - 32;
      if ((_DWORD)v7 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr_2012a50[v7])(&f_.v23,
                                                                    v6 - 32);
      }
      *(_DWORD*)(v6 - 8) = -1;
      v6 -= 32;
    } while (v8 != v5);
    f_.v20 = v5;
    v5 = f_.v19;
    if (f_.v19 != 0) {
    LABEL_13:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v5);
    }
  }
  if ((f_.v17[0] & 1) != 0 && f_.v18 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  f_.v18);
  }
  *a1 = game_map_MapEscapeAfterEvent_vtable;
  if ((a2[9] & 1) != 0) {
    fw_text_String_CopyTerminated(f_.v15, a2[11], a2[10]);
    v13 = *a1;
  }
  else {
    v11 = a2[10];
    v12 = a2[11];
    f_.v15[0] = a2[9];
    f_.v15[1] = v11;
    f_.v16 = v12;
    v13 = game_map_MapEscapeAfterEvent_vtable;
  }
  ((void (*)(__int64 (***)(void), __int64*))v13[15])(a1, f_.v15);
  if ((f_.v15[0] & 1) != 0 && f_.v16 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  f_.v16);
  }
}

#pragma GCC visibility pop
