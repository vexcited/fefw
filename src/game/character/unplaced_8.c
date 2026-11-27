#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__int64 GameRoutine_10792b0(__int64 result, int);
__int64 GameRoutine_10965c0(__int64 result, __int64);
__int64 GameRoutine_10ba7a0(_QWORD*);
__int64 GameRoutine_11075d0(__int64 result);
__int64 LocatorModule_a7c540(__int64, const char*);
__int64 Signal_d30a60(__int64**, const char*, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 g3d_a661a0(__int64, int, __int64, int);
__int64 game_109d2e0(__int64 result, __int64, const char*, __int64, int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__int64 wld_d28c30(__int64 result, char);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212ea08;
extern _UNKNOWN* GameData_212fea0;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fc0970[])();
extern __int64 (*GameData_20096d0[])();
extern __int64 (*GameData_20098a8[])();
extern __int64 (*GameData_2009928[])();
extern __int64 (*game_character_CharacterDie_vtable[])();
extern __int64 (*game_character_ChariotCrew_vtable[])();
extern __int64 (*game_character_FallingBody_vtable[])();
extern __int64 (*game_character_TumbleHuman_vtable[])();
extern __int64 GameData_212d270;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212ea00;
extern int* GameData_212fe98;
int __cxa_guard_acquire(__int64);
void CharacterDie_10bb840(__int64, __int64);
void GameRoutine_98f140(__int64*, _QWORD*);
void GameRoutine_a8c0c0(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_98f290();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
float32x4_t game_character_fc6740(_QWORD* a1, int a2, int8x16_t* a3);
_QWORD* game_character_10ba960(_QWORD* result);
void game_character_112c460(__int64 result);
_QWORD* CharacterBuilder_1083780(__int64, const char*);
_QWORD* CharacterBuilder_1083bf0(_QWORD* result);
_QWORD* GameRoutine_a6b620(_QWORD* result, _QWORD*);
_QWORD* game_10a0100(_QWORD* result, const char*);
__attribute__((swiftcall)) void Model_a66f60(PSEUDO_X8, __int64, __int64,
                                             unsigned __int64);
__attribute__((swiftcall)) void
game_character_1085da0(PSEUDO_X8, __int64 result, _QWORD*, int8x16_t*,
                       unsigned __int64, float, double);
__int64 AnimCtrlModule_a77d60(_QWORD*, __int64);
__int64 CharacterAppearance_10743e0(__int64);
__int64 CharacterAura_10f4cc0(__int64);
__int64 CharacterBuilder_10823c0(__int64*);
__int64 CharacterBuilder_1082900(__int64);
__int64 CharacterBuilder_1082ce0(__int64);
__int64 CharacterBuilder_1083180(__int64);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 CharacterBuilder_10873c0(__int64, __int64, __int64);
__int64 CharacterBuilder_10877a0(__int64);
__int64 CharacterBuilder_1087ba0(__int64, _QWORD*, _QWORD*, unsigned __int8*);
__int64 CharacterBuilder_1087f80(__int64, _QWORD**);
__int64 CharacterFacialController_10b2a20(__int64 result);
__int64 Crc32List_11ec20(__int64, __int64, unsigned int);
__int64 GameRoutine_1078e40(__int64 result);
__int64 GameRoutine_10860c0(__int64, _DWORD*, const char**);
__int64 GameRoutine_10864c0(__int64, unsigned int*);
__int64 GameRoutine_10953f0(__int64);
__int64 GameRoutine_10e1fe0(__int64 result);
__int64 GameRoutine_1106eb0(__int64 result);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_a867a0(__int64 result);
__int64 GameRoutine_ce4740(__int64, __int64);
__int64 GameRoutine_ce4870(__int64, __int64);
__int64 LodModule_a97380(__int64 result, __int64);
__int64 MapAnimModule_c0a840(__int64);
__int64 Signal_d30a60_alt1(int*, const char*, __int64, __int64);
__int64 __cxa_guard_acquire_alt1(_QWORD);
__int64 __cxa_guard_release_alt1(_QWORD);
__int64 game_1116110(__int64, __int64);
__int64 game_character_10b5460(__int64 result);
__int64 game_character_CharacterLookAt_Startup(__int64 result);
__int64 game_character_bd87d0(__int64, __int64, _BYTE*);
__int64 nn_g3d_5faea0(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
bool GameRoutine_10e8c00(__int64, __int64*, int, __int64);
char* GameRoutine_10e26e0(__int64);
double GameRoutine_1a09f70(double);
double GameRoutine_1a09f80(double);
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* GameData_212d4d8;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212eab0;
extern _UNKNOWN* GameData_212ed90;
extern _UNKNOWN* GameData_212ff38;
extern _UNKNOWN* GameData_212ff48;
extern _UNKNOWN GameData_21a61b0;
extern _UNKNOWN GameData_22356d8;
extern __int128 GameData_1a829a0;
extern __int128 GameData_1a831c0;
extern __int128 GameData_21a61a0;
extern __int64 (*GameData_1fda8f8[])();
extern __int64 (*GameData_1fdba58[])();
extern __int64 (*GameData_2006d40[])();
extern __int64 (*GameData_2006f38[])();
extern __int64 (*GameData_2006fb8[])();
extern __int64 (*GameData_2007008[])();
extern __int64 (*GameData_2007088[])();
extern __int64 (*GameData_2007108[])();
extern __int64 (*GameData_20072a8[])();
extern __int64 (*GameData_2007328[])();
extern __int64 (*GameData_20073d8[])();
extern __int64 (*GameData_20075d8[])();
extern __int64 (*GameData_200d840[])();
extern __int64 (*game_character_d00fc0_ptr)();
extern __int64 (*gfx_a9c260_ptr[3])();
extern __int64 (*gfx_a9c3e0_ptr[2])();
extern __int64 (*gfx_a9c5a0_ptr)();
extern __int64* GameData_212c690;
extern __int64* GameData_212e248[2];
extern __int64* GameData_212ea20;
extern __int64* GameData_212ece8;
extern __int64 GameData_212c638;
extern __int64 GameData_212e4f8;
extern __int64 GameData_2132398[3];
extern char GameData_1abc799[18];
extern int* GameData_212d4d0;
extern int* GameData_212df08;
extern int* GameData_212eaa8;
extern int* GameData_212ed88;
extern int* GameData_212ff30;
extern int* GameData_212ff40;
extern int GameData_22356d0;
extern int GameData_2235720;
float* CharacterBuilder_1083840(float* result);
float GameHr_11055e0(_QWORD*);
float GameRoutine_10a00a0(float, long double, float);
float GameRoutine_1a0a550(long double, float);
int GameRoutine_1a09d30(const char*, const char*);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned int* CharacterLookAt_10b7fc0(__int64);
unsigned int* GameRoutine_109d5e0(unsigned int* result);
void CharacterBuilder_1083580(__int64, __int64, __int64);
void CharacterBuilder_a577c0(__int64, __int64, int, char);
void CharacterIllusion_11036e0(__int64);
void GameRoutine_10b5f80(__int64);
void GameRoutine_10d75e0(__int64**, __int64);
void GameRoutine_10e9660(_QWORD*);
void GameRoutine_1112ba0(__int64, int, __int64);
void GameRoutine_bd6740(__int64, __int64, _QWORD*, char);
void GameRoutine_bd9540(_QWORD*, __int64, __int64);
void LocatorModule_a7c2c0(_QWORD*, __int64);
void game_character_CharacterFacialController_Startup(__int64);
void game_character_WeaponHoldModule_Start(_QWORD*, __int64, _BYTE*);
void game_character_107ec40(__int64 a1);
void game_character_10e2d30(float32x4_t* a1);
void game_character_10fbc10(float32x4_t* a1);

float32x4_t game_character_fc6740(_QWORD* a1, int a2, int8x16_t* a3)
{
  float32x4_t result;
  __int128* v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  float v18;
  float v19;
  float v20;
  __int128 v21;
  float v22;
  unsigned int v23;
  __int128 v24;
  __int128 v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  __int128* v29;
  float32x4_t v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float v37;
  float v38;
  float v39;
  __int128 v40;
  float v41;
  unsigned int v42;
  __int128 v43;
  __int128 v44;
  __int64 v45;
  int8x16_t v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  int8x16_t v57;
  unsigned __int64 v58;
  float32x4_t v59;
  float32x4_t v60;
  unsigned __int64 v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  int v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int128 v71;
  __int128 v72;
  __int128 v73;
  __int128 v74;
  __int128 v75;
  float32x4_t v76;
  __int128 v77;
  int8x16_t v78;
  int8x16_t v79;
  struct {
    _QWORD v80[4];
    __int128 v81;
    __int128 v82;
  } v80_;
  int8x16x2_t v90;
  int8x16x2_t v91;
  int8x16x2_t v92;

  PSEUDO_LOW_LANE128(result, n128_f32, fabsf(LANES128(*(a3)).n128_f32[3]));
  if (!(LANES128(result).n128_f32[0] > 0x1.fff2e40000000p-1f)) {
    {
      v14 = (__int128*)(a1[4] + ((__int64)a2 << 6));
      __asm__ volatile("" ::"r"(v14));
    }
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v75 = v16;
      v77 = v17;
      v73 = v15;
      v67 = __cxa_guard_acquire((__int64)&GameData_21a6130);
      v15 = v73;
      v16 = v75;
      v17 = v77;
      if (v67 != 0) {
        {
          v68 = *((_QWORD*)GameData_212c540 + 1);
          __asm__ volatile("" ::"r"(v68));
        }
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v68;
        __cxa_guard_release((__int64)&GameData_21a6130);
        v15 = v73;
        v16 = v75;
        v17 = v77;
      }
    }
    v18 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v15 + 1), *(float32x2_t*)&v15, 1) +
                (float)(*(float*)&v15 * *(float*)&v15)) +
        (float)(*((float*)&v15 + 2) * *((float*)&v15 + 2)));
    v19 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v16 + 1), *(float32x2_t*)&v16, 1) +
                (float)(*(float*)&v16 * *(float*)&v16)) +
        (float)(*((float*)&v16 + 2) * *((float*)&v16 + 2)));
    v20 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v17 + 1), *(float32x2_t*)&v17, 1) +
                (float)(*(float*)&v17 * *(float*)&v17)) +
        (float)(*((float*)&v17 + 2) * *((float*)&v17 + 2)));
    HIDWORD(v21) = 0;
    *(float*)&v21 = *(float*)&v15 / v18;
    *((float*)&v21 + 1) = *((float*)&v15 + 1) / v18;
    *((float*)&v21 + 2) = *((float*)&v15 + 2) / v18;
    {
      v22 = *((float*)&v16 + 1) / v19;
      __asm__ volatile("" ::"w"(v22));
    }
    *(float*)&v23 = *((float*)&v16 + 2) / v19;
    *(float*)&v24 = *(float*)&v16 / v19;
    *((float*)&v24 + 1) = v22;
    *((_QWORD*)&v24 + 1) = v23;
    HIDWORD(v25) = 0;
    *(float*)&v25 = *(float*)&v17 / v20;
    *(_OWORD*)v80_.v80 = v21;
    *(_OWORD*)&v80_.v80[2] = v24;
    *((float*)&v25 + 1) = *((float*)&v17 + 1) / v20;
    *((float*)&v25 + 2) = *((float*)&v17 + 2) / v20;
    v80_.v81 = v25;
    v80_.v82 = GameData_21a6120;
    Quat_624bc0((void*)(&v79), (__int64)v80_.v80);
    LANES128(v26).n128_u64[0] = LANES128(*(a3)).n128_u64[0];
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(*a3, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v28).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
    {
      v29 = (__int128*)(a1[4] + ((unsigned __int64)*(
                                     unsigned __int16*)(a1[2] + 96LL * a2 + 42)
                                 << 6));
      __asm__ volatile("" ::"r"(v29));
    }
    *(int8x8_t*)&LANES128(v28).n128_i8[8] =
        vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v31 = *v29;
    v32 = v29[1];
    v33 = v29[2];
    v34 = vmulq_f32(v79, v27);
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(*a3, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v26).n128_u64[1] = LANES128(v27).n128_u64[0];
    v35 = vmlaq_f32(v34, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v26, v28));
    LANES128(v28).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(*a3, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v30).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v79).n128_u64[0]), 1);
    LANES128(v27).n128_u64[1] = LANES128(v28).n128_u64[0];
    LANES128(v28).n128_u64[1] = LANES128(*(a3)).n128_u64[0];
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v36).n128_i8[8] =
        vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v76 = vmlsq_f32(vmlaq_f32(v35, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v28, v30)),
                    v36, v27);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v72 = v32;
      v74 = v33;
      v71 = v31;
      v69 = __cxa_guard_acquire((__int64)&GameData_21a6130);
      v31 = v71;
      v32 = v72;
      v33 = v74;
      if (v69 != 0) {
        {
          v70 = *((_QWORD*)GameData_212c540 + 1);
          __asm__ volatile("" ::"r"(v70));
        }
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v70;
        __cxa_guard_release((__int64)&GameData_21a6130);
        v31 = v71;
        v32 = v72;
        v33 = v74;
      }
    }
    v37 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v31 + 1), *(float32x2_t*)&v31, 1) +
                (float)(*(float*)&v31 * *(float*)&v31)) +
        (float)(*((float*)&v31 + 2) * *((float*)&v31 + 2)));
    v38 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v32 + 1), *(float32x2_t*)&v32, 1) +
                (float)(*(float*)&v32 * *(float*)&v32)) +
        (float)(*((float*)&v32 + 2) * *((float*)&v32 + 2)));
    v39 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v33 + 1), *(float32x2_t*)&v33, 1) +
                (float)(*(float*)&v33 * *(float*)&v33)) +
        (float)(*((float*)&v33 + 2) * *((float*)&v33 + 2)));
    HIDWORD(v40) = 0;
    *(float*)&v40 = *(float*)&v31 / v37;
    *((float*)&v40 + 1) = *((float*)&v31 + 1) / v37;
    *((float*)&v40 + 2) = *((float*)&v31 + 2) / v37;
    {
      v41 = *((float*)&v32 + 1) / v38;
      __asm__ volatile("" ::"w"(v41));
    }
    *(float*)&v42 = *((float*)&v32 + 2) / v38;
    *(float*)&v43 = *(float*)&v32 / v38;
    *((float*)&v43 + 1) = v41;
    *((_QWORD*)&v43 + 1) = v42;
    HIDWORD(v44) = 0;
    *(float*)&v44 = *(float*)&v33 / v39;
    *(_OWORD*)v80_.v80 = v40;
    *(_OWORD*)&v80_.v80[2] = v43;
    *((float*)&v44 + 1) = *((float*)&v33 + 1) / v39;
    *((float*)&v44 + 2) = *((float*)&v33 + 2) / v39;
    v80_.v81 = v44;
    v80_.v82 = GameData_21a6120;
    Quat_624bc0((void*)(&v78), (__int64)v80_.v80);
    {
      v45 = a1[3] + 96LL * a2;
      __asm__ volatile("" ::"r"(v45));
    }
    v46 = vmulq_f32(v78, COERCE_AS(float32x4_t, GameData_1a829d0));
    v47 = vmulq_f32(v78, v78);
    LANES128(v47).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
            .n64_u64[0];
    LANES128(v47).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
            .n64_u64[0];
    LANES128(v47).n128_u64[1] = LANES128(v47).n128_u64[0];
    v48 = vrecpeq_f32(v47);
    v49 = vmulq_f32(v48, vrecpsq_f32(v48, v47));
    LANES128(v50).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v50).n128_i8[8] =
        vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v51).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v52 = vbslq_s8(vceqzq_f32(v47), v46,
                   vmulq_f32(v46, vmulq_f32(v49, vrecpsq_f32(v49, v47))));
    LANES128(v46).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v49).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v53).n128_u64[0] = LANES128(v52).n128_u64[0];
    LANES128(v46).n128_u64[1] = LANES128(v46).n128_u64[0];
    LANES128(v53).n128_u64[1] = LANES128(v49).n128_u64[0];
    *(int32x2_t*)&LANES128(v51).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v76).n128_u64[0]), 1);
    v54 =
        vmlaq_f32(vmulq_f32(v76, v46), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v53, v50));
    LANES128(v50).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v49).n128_u64[1] = LANES128(v50).n128_u64[0];
    LANES128(v50).n128_u64[1] = LANES128(v52).n128_u64[0];
    LANES128(v52).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v52).n128_i8[8] =
        vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v55 = vmlsq_f32(vmlaq_f32(v54, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v50, v51)),
                    v52, v49);
    {
      v56 = *(float32x4_t*)(v45 + 80);
      __asm__ volatile("" ::"w"(v56));
    }
    LANES128(v50).n128_u32[0] = 0;
    LANES128(v51).n128_u64[0] = 0;
    LANES128(v50).n128_u32[1] =
        sqrtf((float)(LANES128_OF(vmulq_f32(*(float32x4_t*)(v45 + 48),
                                            *(float32x4_t*)(v45 + 48)))
                          .n128_f32[1] +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v45 + 48)) *
                              COERCE_FLOAT(*(_OWORD*)(v45 + 48)))) +
              (float)(COERCE_FLOAT(*(_QWORD*)(v45 + 56)) *
                      COERCE_FLOAT(*(_QWORD*)(v45 + 56))));
    LANES128(v49).n128_u32[0] =
        sqrtf((float)(LANES128_OF(vmulq_f32(*(float32x4_t*)(v45 + 32),
                                            *(float32x4_t*)(v45 + 32)))
                          .n128_f32[1] +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v45 + 32)) *
                              COERCE_FLOAT(*(_OWORD*)(v45 + 32)))) +
              (float)(COERCE_FLOAT(*(_QWORD*)(v45 + 40)) *
                      COERCE_FLOAT(*(_QWORD*)(v45 + 40))));
    v57 = v55;
    LANES128(v57).n128_u32[3] = 0;
    LANES128(v51).n128_u64[1] = COERCE_UNSIGNED_INT(
        sqrtf((float)(LANES128_OF(vmulq_f32(*(float32x4_t*)(v45 + 64),
                                            *(float32x4_t*)(v45 + 64)))
                          .n128_f32[1] +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v45 + 64)) *
                              COERCE_FLOAT(*(_OWORD*)(v45 + 64)))) +
              (float)(COERCE_FLOAT(*(_QWORD*)(v45 + 72)) *
                      COERCE_FLOAT(*(_QWORD*)(v45 + 72)))));
    v58 = LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
              .n64_u64[0];
    LANES128(v59).n128_u64[0] =
        LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v55).n128_u64[0])))
            .n64_u64[0];
    LANES128(v60).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
            .n64_u64[0];
    v61 = LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    LANES128(v59).n128_u64[1] = v58;
    LANES128(v60).n128_u64[1] = v61;
    v62 = vmulq_f32(v59, v59);
    v63 = vmulq_f32(v60, v60);
    v92.val[0] = vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                           vaddq_f32(vaddq_f32(v63, v63), vaddq_f32(v62, v62)));
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v62).n128_u64[1] = v58;
    v64 = vmulq_f32(v62, v57);
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v90.val[1] = vaddq_f32(v64, v64);
    LANES128(v57).n128_u64[1] = v61;
    v65 = vmulq_laneq_f32(v57, v55, 3);
    v66 = vaddq_f32(v65, v65);
    v91.val[0] = vaddq_f32(v90.val[1], v66);
    v91.val[1] = vsubq_f32(v90.val[1], v66);
    LANES128(v90.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v91, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
            .n64_u64[0];
    LANES128(v92.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v91, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v90.val[1]).n128_i8[8] =
        vqtbl2_s8(v91, COERCE_AS(int8x8_t, 0x706050413121110LL));
    *(int8x8_t*)&LANES128(v92.val[1]).n128_i8[8] =
        vqtbl2_s8(v91, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
    v90.val[0] = v92.val[0];
    LANES128(v66).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v90, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
            .n64_u64[0];
    LANES128(v62).n128_u32[0] =
        LANES64_OF(vqtbl2_s8(v90, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL)))
            .n64_u32[0];
    LANES128(v91.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v90, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
            .n64_u64[0];
    LANES128(v90.val[0]).n128_u32[0] =
        LANES64_OF(vqtbl2_s8(v90, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL)))
            .n64_u32[0];
    LANES128(v90.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v92, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
            .n64_u64[0];
    *(float32x4_t*)(v45 + 32) = vmlaq_n_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, LANES128(v49).n128_u32[0]),
                        LANES128(v66).n128_f32[0]),
            COERCE_AS(float32x4_t, LANES128(v50).n128_u64[0]),
            COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]), 1),
        v51, LANES128(v62).n128_f32[0]);
    *(float32x4_t*)(v45 + 48) = vmlaq_n_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, LANES128(v49).n128_u32[0]),
                        LANES128(v91.val[0]).n128_f32[0]),
            COERCE_AS(float32x4_t, LANES128(v50).n128_u64[0]),
            COERCE_AS(float32x2_t, LANES128(v91.val[0]).n128_u64[0]), 1),
        v51, LANES128(v90.val[0]).n128_f32[0]);
    result = vaddq_f32(
        v56,
        vmlaq_f32(vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t,
                                                LANES128(v49).n128_u32[0]),
                                      COERCE_AS(float32x4_t, 0)),
                            COERCE_AS(float32x4_t, 0),
                            COERCE_AS(float32x4_t, LANES128(v50).n128_u64[0])),
                  COERCE_AS(float32x4_t, 0), v51));
    *(float32x4_t*)(v45 + 64) = vmlaq_n_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, LANES128(v49).n128_u32[0]),
                        LANES128(v90.val[1]).n128_f32[0]),
            COERCE_AS(float32x4_t, LANES128(v50).n128_u64[0]),
            COERCE_AS(float32x2_t, LANES128(v90.val[1]).n128_u64[0]), 1),
        v51,
        LANES64_OF(vqtbl2_s8(v92, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL)))
            .n64_f32[0]);
    *(float32x4_t*)(v45 + 80) = result;
  }
  return result;
}

void game_character_107ec40(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD** v14;
  _QWORD** v15;
  _QWORD** v16;
  __int64 v17;
  __int64* v18;
  _QWORD* v19;
  _QWORD*** v20;
  _QWORD*** v21;
  _QWORD** v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int8 explicit;
  int* v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  unsigned __int8 v45;
  int* v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  _BYTE* v64;
  _BYTE* v65;
  bool v66;
  __int64* v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64* v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  char* v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  int v96;
  __int64 v97;
  int v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  int v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64* v108;
  __int64* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  int v113;
  __int64 v114;
  int v115;
  __int64 v116;
  __int64 v117;
  _BYTE* v118;
  _BYTE* v119;
  bool v120;
  __int64* v121;
  unsigned __int64 v122;
  __int64 v123;
  __int64 v124;
  char* v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64* v135;
  unsigned __int64 v136;
  __int64 v137;
  __int64 v138;
  char* v139;
  __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  int v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  int v158;
  unsigned __int64 v159;
  unsigned __int64 v160;
  char* v161;
  _QWORD* v162;
  _QWORD* v163;
  __int64 v164;
  __int128 v165;
  char v166;
  __int64 v167;
  int v168;
  int v169;
  __int64 v170;
  __int64 v171;
  int v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  int v176;
  unsigned __int64 v177;
  unsigned __int64 v178;
  char* v179;
  _QWORD* v180;
  _QWORD* v181;
  __int64 v182;
  int v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  int v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  int v193;
  __int64 v194;
  int v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  int v201;
  __int64* v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  int v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  int v214;
  __int64 v215;
  __int64 v216;
  _BYTE* v217;
  _BYTE* v218;
  bool v219;
  __int64* v220;
  unsigned __int64 v221;
  __int64 v222;
  __int64 v223;
  char* v224;
  __int64 v225;
  unsigned __int64 v226;
  __int64 v227;
  unsigned __int64 v228;
  __int64 v229;
  unsigned __int64 v230;
  unsigned __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64* v234;
  unsigned __int64 v235;
  __int64 v236;
  __int64 v237;
  char* v238;
  __int64 v239;
  unsigned __int64 v240;
  __int64 v241;
  unsigned __int64 v242;
  __int64 v243;
  unsigned __int64 v244;
  unsigned __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  unsigned __int8 v249;
  int* v250;
  __int64 v251;
  __int64 v252;
  int v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  const char* v259;
  _QWORD* v260;
  int v261;
  __int64 v262;
  int v264;
  __int64 v265;
  __int64 v266;
  int v267;
  __int64 v268;
  __int64 v269;
  const char* v270;
  unsigned __int64 v271;
  __int64 v272;
  __int64 v273;
  int v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  unsigned int v279;
  unsigned int v280;
  __int64* v281;
  __int64 v282;
  unsigned int v283;
  __int128 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  int v289;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  int v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64 v298;
  __int64 v299;
  int v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  int v305;
  __int64 v306;
  __int64 v308;
  __int64 v309;
  unsigned int v310;
  __int64* v311;
  int v312;
  unsigned __int8* v313;
  unsigned int v314;
  __int64 v315;
  __int64* v316;
  __int64 v317;
  __int64 v318;
  _QWORD*** v319;
  _QWORD*** v320;
  _QWORD** v321;
  __int64 v322;
  __int64 v323;
  atomic_uchar* v324;
  unsigned __int8 v325;
  int* v326;
  __int64 v327;
  __int64 v328;
  int v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  int v333;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  __int64 v339;
  __int64 v340;
  int* v341;
  int v342;
  int v343;
  __int64 v344;
  __int64 v345;
  unsigned int v346;
  __int64 v347;
  __int64 (*v350)();
  __int64 v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
  int v355;
  __int64 v356;
  __int64 v357;
  __int64 v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  int v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  int v366;
  __int64 v367;
  __int64 v368;
  _BYTE* v369;
  _BYTE* v370;
  bool v371;
  __int64* v372;
  unsigned __int64 v373;
  __int64 v374;
  __int64 v375;
  char* v376;
  __int64 v377;
  unsigned __int64 v378;
  __int64 v379;
  unsigned __int64 v380;
  __int64 v381;
  unsigned __int64 v382;
  unsigned __int64 v383;
  __int64 v384;
  __int64 v385;
  __int64* v386;
  unsigned __int64 v387;
  __int64 v388;
  __int64 v389;
  char* v390;
  __int64 v391;
  unsigned __int64 v392;
  __int64 v393;
  unsigned __int64 v394;
  __int64 v395;
  unsigned __int64 v396;
  unsigned __int64 v397;
  __int64 v398;
  __int64 v399;
  __int64 v400;
  __int64 v401;
  __int64 v402;
  __int64 v403;
  __int64 v404;
  _QWORD* v405;
  int v406;
  __int64 v407;
  __int64 v408;
  __int64 v409;
  int v410;
  __int64 v411;
  __int64 v412;
  __int64 v413;
  _QWORD* v414;
  int v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  int v419;
  __int64 v420;
  __int64 v421;
  int v422;
  __int64 v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  int v427;
  __int64 v428;
  _QWORD* v429;
  unsigned __int64 v430;
  __int64 v431;
  __int64 v432;
  __int128 v433;
  __int64 v434;
  __int64 v435;
  int v436;
  __int64 v437;
  __int64 v438;
  __int64 v439;
  int v440;
  __int64 v441;
  __int64 v442;
  __int64 v443;
  __int64 v444;
  __int64 v445;
  __int128 v446;
  __int64* v447;
  __int64 v448;
  struct {
    __int128 v449;
    __int128 v450;
    __int128 v451;
    __int64 v452;
    __int64 v453;
  } v449_;
  struct {
    _QWORD* v454;
    __int64 v455;
    __int64 v456;
  } v454_;
  __int64 v457;
  __int64 v458;
  __int64 v459;
  struct {
    __int64 v460[3];
    char gap184_[8];
    __int64* v461;
  } v460_;

  v1 = *(_QWORD*)(a1 + 520);
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  BYTE8(v449_.v449) = 0;
  *(_QWORD*)&v449_.v449 = GameData_200d840;
  *(_QWORD*)&v449_.v451 = &v449_.v449;
  CharacterBuilder_1083e90((_QWORD*)a1, (__int64)&v449_.v449);
  if ((__int128*)v449_.v451 == &v449_.v449) {
    v3 = 32;
  }
  else {
    if ((_QWORD)v449_.v451 == 0) {
      goto LABEL_9;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v449_.v451 + v3))((__int64)v449_.v451);
LABEL_9:
  *(_DWORD*)(a1 + 340) &= ~0x2000000u;
  CharacterIllusion_11036e0(a1);
  v4 = *(_QWORD*)(a1 + 64);
  GameRoutine_109d5e0((unsigned int*)(v4 + 56));
  *(_DWORD*)(v4 + 160) = -1082130432;
  v5 = *(_QWORD*)(a1 + 72);
  v6 = *(unsigned __int8*)(v5 + 157);
  *(_QWORD*)(v5 + 140) = 0;
  *(_BYTE*)(v5 + 156) = 0;
  *(_BYTE*)(v5 + 158) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_DWORD*)(v5 + 128) = 0;
  if (v6 == 1) {
    *(_BYTE*)(v5 + 157) = 0;
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 80) + 56LL) = 0;
  CharacterFacialController_10b2a20(*(_QWORD*)(a1 + 88));
  GameRoutine_10e26e0(*(_QWORD*)(a1 + 104));
  CharacterLookAt_10b7fc0(*(_QWORD*)(a1 + 112));
  v7 = *(_QWORD**)(a1 + 136);
  if ((snd_fnd_WeakHandle_isValid(v7 + 9) & 1) != 0) {
    Crc32List_11ec20(*GameData_212e248[0], (__int64)(v7 + 9), 0);
  }
  v8 = v7[4];
  if (v8 == 0 ||
      ((v9 = *(_QWORD*)(v8 + 8), v10 = v7[5], v9 != -1) ? (v11 = v10 == 0)
                                                        : (v11 = true),
       v11)) {
    GameData_2235720 = 0;
  }
  else if ((*(_BYTE*)(v10 + 340) & 2) != 0) {
    goto LABEL_23;
  }
  if ((snd_fnd_WeakHandle_isValid(v7 + 11) & 1) != 0) {
    Crc32List_11ec20(*GameData_212e248[0], (__int64)(v7 + 11), 0);
  }
LABEL_23:
  v7[8] = 0;
  GameRoutine_10b5f80(*(_QWORD*)(a1 + 144));
  v12 = *(_QWORD**)(a1 + 224);
  *(_DWORD*)(a1 + 160) = 0;
  *(_BYTE*)(a1 + 164) = 0;
  *(_BYTE*)(a1 + 168) = 0;
  *(_BYTE*)(a1 + 172) = 0;
  *(_BYTE*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  if (v12 == (_QWORD*)(a1 + 192)) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_28;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
LABEL_28:
  v14 = *(_QWORD***)(a1 + 552);
  *(_QWORD*)(a1 + 224) = 0;
  if (v14 != nullptr) {
    LocatorModule_a7c2c0(*v14, (__int64)v14);
  }
  v15 = *(_QWORD***)(a1 + 560);
  *(_QWORD*)(a1 + 552) = 0;
  if (v15 != nullptr) {
    LocatorModule_a7c2c0(*v15, (__int64)v15);
  }
  v16 = *(_QWORD***)(a1 + 568);
  *(_QWORD*)(a1 + 560) = 0;
  if (v16 != nullptr) {
    LocatorModule_a7c2c0(*v16, (__int64)v16);
  }
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  BYTE8(v449_.v449) = 0;
  *(_QWORD*)&v449_.v449 = GameData_2006d40;
  *(_QWORD*)&v449_.v451 = &v449_.v449;
  CharacterBuilder_1083e90((_QWORD*)a1, (__int64)&v449_.v449);
  if ((__int128*)v449_.v451 == &v449_.v449) {
    v17 = 32;
  }
  else {
    if ((_QWORD)v449_.v451 == 0) {
      goto LABEL_39;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v449_.v451 + v17))((__int64)v449_.v451);
LABEL_39:
  v18 = (__int64*)(a1 + 408);
  if (*(_QWORD*)(a1 + 408) != 0) {
    GameRoutine_a867a0(a1 + 408);
  }
  if (*(_QWORD*)(a1 + 416) != 0) {
    GameRoutine_a867a0(a1 + 416);
  }
  if (*(_QWORD*)(a1 + 424) != 0) {
    GameRoutine_a867a0(a1 + 424);
  }
  if (*(_QWORD*)(a1 + 432) != 0) {
    GameRoutine_a867a0(a1 + 432);
  }
  if (*(_QWORD*)(a1 + 440) != 0) {
    GameRoutine_a867a0(a1 + 440);
  }
  if (*(_QWORD*)(a1 + 448) != 0) {
    GameRoutine_a867a0(a1 + 448);
  }
  if (*(_QWORD*)(a1 + 456) != 0) {
    GameRoutine_a867a0(a1 + 456);
  }
  if (*(_QWORD*)(a1 + 464) != 0) {
    GameRoutine_a867a0(a1 + 464);
  }
  v19 = (_QWORD*)(a1 + 472);
  if (*(_QWORD*)(a1 + 472) != 0) {
    GameRoutine_a867a0(a1 + 472);
  }
  if (*(_QWORD*)(a1 + 480) != 0) {
    GameRoutine_a867a0(a1 + 480);
  }
  if (*(_QWORD*)(a1 + 488) != 0) {
    GameRoutine_a867a0(a1 + 488);
  }
  if (*(_QWORD*)(a1 + 496) != 0) {
    GameRoutine_a867a0(a1 + 496);
  }
  v20 = *(_QWORD****)(a1 + 528);
  v21 = *(_QWORD****)(a1 + 536);
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *v19 = 0;
  *(_QWORD*)(a1 + 480) = 0;
  if (v20 != v21) {
    do {
      v22 = *v20++;
      LocatorModule_a7c2c0(*v22, (__int64)v22);
    } while (v20 != v21);
    v20 = *(_QWORD****)(a1 + 528);
  }
  *(_QWORD*)(a1 + 536) = v20;
  v23 = *(__int64**)(a1 + 584);
  v25 = *v23;
  v24 = v23[1];
  if (v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
  }
  v26 = *(_QWORD*)(a1 + 400);
  *(_QWORD*)(a1 + 392) = v25;
  *(_QWORD*)(a1 + 400) = v24;
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  v27 = v23[1];
  *v23 = 0;
  v23[1] = 0;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  v28 = *(_QWORD*)(a1 + 392);
  v29 = *(_DWORD*)(a1 + 340);
  v30 = *(_QWORD*)(a1 + 584);
  v454_.v454 = (_QWORD*)a1;
  v454_.v455 = 0;
  v454_.v456 = 0;
  v457 = 0;
  *(_DWORD*)(a1 + 340) = v29 | *(_DWORD*)(v28 + 11704);
  if (*(_QWORD*)(a1 + 408) != 0) {
    GameRoutine_a867a0(a1 + 408);
    *v18 = 0;
  }
  v31 = *(_QWORD*)(v30 + 16);
  v32 = (__int64*)(a1 + 448);
  v447 = (__int64*)(a1 + 408);
  v448 = v28;
  if (v31 == 0) {
    if ((*(_BYTE*)(a1 + 340) & 0x40) != 0) {
      v37 = 0;
      v34 = 0;
    }
    else {
      v36 = CharacterBuilder_10823c0((__int64*)(a1 + 408));
      v37 = *v18;
      v34 = v36;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff38,
                                    memory_order_acquire);
    v39 = GameData_212ff30;
    if ((explicit & 1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212ff38) != 0) {
      *v39 = wld_Crc32(0, "ClothColliderModule", 0x13u);
      __cxa_guard_release((__int64)GameData_212ff38);
    }
    v40 = *(_QWORD*)(v37 + 512);
    v41 = v40;
    while (v41 != *(_QWORD*)(v37 + 504)) {
      v42 = *(_DWORD*)(v41 - 16);
      v41 -= 16;
      v40 -= 16;
      if (v42 == *v39) {
        if (*(_QWORD*)(v37 + 512) != v40) {
          v43 = *(_QWORD*)(v40 + 8);
          goto LABEL_93;
        }
        break;
      }
    }
    v43 = 0;
  LABEL_93:
    v454_.v455 = v43;
    v44 = *v447;
    v45 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff48,
                               memory_order_acquire);
    v46 = GameData_212ff40;
    if ((v45 & 1) == 0 && __cxa_guard_acquire((__int64)GameData_212ff48) != 0) {
      *v46 = wld_Crc32(0, "ClothWindModule", 0xFu);
      __cxa_guard_release((__int64)GameData_212ff48);
    }
    v47 = *(_QWORD*)(v44 + 512);
    v48 = v47;
    while (v48 != *(_QWORD*)(v44 + 504)) {
      v49 = *(_DWORD*)(v48 - 16);
      v48 -= 16;
      v47 -= 16;
      if (v49 == *v46) {
        if (*(_QWORD*)(v44 + 512) != v47) {
          v50 = *(_QWORD*)(v47 + 8);
          goto LABEL_100;
        }
        break;
      }
    }
    v50 = 0;
  LABEL_100:
    v51 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                                    32LL) -
                                         8LL) +
                              40LL) +
                   464LL);
    v454_.v456 = v50;
    v457 = v51;
    goto LABEL_174;
  }
  *(_QWORD*)(a1 + 408) = v31;
  *(_QWORD*)(v30 + 16) = 0;
  if ((*(_BYTE*)(a1 + 340) & 0x40) != 0) {
    v34 = 0;
    goto LABEL_108;
  }
  v33 = CharacterBuilder_10823c0((__int64*)(a1 + 408));
  v34 = v33;
  if (v33 != 0) {
    *(_QWORD*)&v449_.v451 = &v449_.v449;
    *(_QWORD*)&v449_.v449 = GameData_212ece8 + 2;
    *((_QWORD*)&v449_.v449 + 1) = game_character_d00fc0_ptr;
    GameRoutine_ce4870(v33, (__int64)&v449_.v449);
    if ((__int128*)v449_.v451 == &v449_.v449) {
      v35 = 32;
    }
    else {
      if ((_QWORD)v449_.v451 == 0) {
      LABEL_103:
        v460_.v460[2] = v34;
        v460_.v460[0] = (__int64)GameData_1fda8f8;
        v460_.v460[1] = a1;
        v460_.v461 = v460_.v460;
        GameRoutine_ce4740(v34, (__int64)v460_.v460);
        if (v460_.v461 == v460_.v460) {
          v52 = 32;
          goto LABEL_107;
        }
        if (v460_.v461 != nullptr) {
          v52 = 40;
        LABEL_107:
          (*(void (**)(__int64))(*v460_.v461 + v52))((__int64)v460_.v461);
          goto LABEL_108;
        }
        goto LABEL_108;
      }
      v35 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v449_.v451 + v35))((__int64)v449_.v451);
    goto LABEL_103;
  }
LABEL_108:
  v454_.v455 = CharacterBuilder_1082900(*v447);
  v53 = CharacterBuilder_1082ce0(*v447);
  v54 = *v447;
  v55 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                                    32LL) -
                                         8LL) +
                              40LL) +
                   464LL);
  v454_.v456 = v53;
  v457 = v55;
  LOBYTE(v460_.v460[0]) = 1;
  if (v54 != 0) {
    nn_os_LockMutex((__int64)GameData_212df28);
    v56 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         304, 16, 0);
    GameRoutine_bd9540((_QWORD*)v56, v54, a1);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212d4d8) != 0) {
      *GameData_212d4d0 = wld_Crc32(0, "CharacterMaterial", 0x11u);
      __cxa_guard_release((__int64)GameData_212d4d8);
    }
    v58 = *(_QWORD*)(v54 + 504);
    v57 = *(_QWORD*)(v54 + 512);
    *((_QWORD*)&v449_.v449 + 1) = v56;
    v59 = *GameData_212d4d0;
    v60 = v57;
    LODWORD(v449_.v449) = *GameData_212d4d0;
    while (v60 != v58) {
      v61 = *(_DWORD*)(v60 - 16);
      v60 -= 16;
      if (v61 == v59) {
        if ((*(_BYTE*)(v56 + 16) & 1) != 0) {
          goto LABEL_128;
        }
        goto LABEL_122;
      }
    }
    if (v58 == v57 && (unsigned __int64)(*(_QWORD*)(v54 + 520) - v58) <= 0x6F) {
      v62 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
      *(_QWORD*)(v54 + 504) = v62;
      *(_QWORD*)(v54 + 512) = v62;
      *(_QWORD*)(v54 + 520) = v62 + 112;
      if (v57 != 0) {
        v63 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v63 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v58);
      }
    }
    GameRoutine_98f140((__int64*)(v54 + 504), &v449_.v449);
    if ((*(_BYTE*)(v56 + 16) & 1) == 0) {
    LABEL_122:
      *(_BYTE*)(v56 + 16) = 1;
      *(_BYTE*)(v56 + 17) &= ~2u;
      *(_BYTE*)(v56 + 18) &= ~2u;
      *(_BYTE*)(v56 + 19) &= ~2u;
      *(_BYTE*)(v56 + 20) &= ~2u;
      v64 = *(_BYTE**)(v56 + 8);
      v64[632] = 0;
      v64[664] = 0;
      v64[696] = 0;
      v64[728] = 0;
      (*(void (**)(__int64))(*(_QWORD*)v56 + 64LL))(v56);
      v65 = *(_BYTE**)(v56 + 8);
      v66 = v65[300] == 3 && v65[301] == 3;
      if (v66 || v65[302] == 1) {
        (*(void (**)(__int64))(*(_QWORD*)v56 + 72LL))(v56);
      }
    }
  LABEL_128:
    v67 = *(__int64**)(v54 + 536);
    v68 = *(_QWORD*)(v54 + 544);
    if ((unsigned __int64)v67 >= v68) {
      v70 = *(_QWORD*)(v54 + 528);
      v71 = (char*)v67 - v70;
      v72 = ((__int64)v67 - v70) >> 3;
      v73 = v72 + 1;
      if ((unsigned __int64)(v72 + 1) >> 61 != 0) {
        goto LABEL_727;
      }
      v74 = v68 - v70;
      if (v74 >> 2 > v73) {
        v73 = v74 >> 2;
      }
      if ((unsigned __int64)v74 >= 0x7FFFFFFFFFFFFFF8LL) {
        v75 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v75 = v73;
      }
      if (v75 != 0) {
        if (v75 >> 61 != 0) {
          goto LABEL_728;
        }
        v76 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v75, 16, 0);
      }
      else {
        v76 = 0;
      }
      v77 = v76 + 8 * v75;
      v78 = (unsigned __int64)v67 - v70;
      v79 = (__int64)&v71[v76 + -8 * v72];
      *(_QWORD*)&v71[v76] = v56;
      v69 = (__int64)&v71[v76 + 8];
      GameRoutine_1a0b950(v79, v70, v78);
      *(_QWORD*)(v54 + 528) = v79;
      *(_QWORD*)(v54 + 536) = v69;
      *(_QWORD*)(v54 + 544) = v77;
      if (v70 != 0) {
        v80 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v80 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v80, v70);
      }
      v32 = (__int64*)(a1 + 448);
    }
    else {
      *v67 = v56;
      v69 = (__int64)(v67 + 1);
    }
    *(_QWORD*)(v54 + 536) = v69;
    v81 = *(__int64**)(v54 + 560);
    v82 = *(_QWORD*)(v54 + 568);
    if ((unsigned __int64)v81 >= v82) {
      v84 = *(_QWORD*)(v54 + 552);
      v85 = (char*)v81 - v84;
      v86 = ((__int64)v81 - v84) >> 3;
      v87 = v86 + 1;
      if ((unsigned __int64)(v86 + 1) >> 61 != 0) {
        goto LABEL_727;
      }
      v88 = v82 - v84;
      if (v88 >> 2 > v87) {
        v87 = v88 >> 2;
      }
      if ((unsigned __int64)v88 >= 0x7FFFFFFFFFFFFFF8LL) {
        v89 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v89 = v87;
      }
      if (v89 != 0) {
        if (v89 >> 61 != 0) {
          goto LABEL_728;
        }
        v90 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v89, 16, 0);
      }
      else {
        v90 = 0;
      }
      v91 = v90 + 8 * v89;
      v92 = (unsigned __int64)v81 - v84;
      v93 = (__int64)&v85[v90 + -8 * v86];
      *(_QWORD*)&v85[v90] = v56;
      v83 = (__int64)&v85[v90 + 8];
      GameRoutine_1a0b950(v93, v84, v92);
      *(_QWORD*)(v54 + 552) = v93;
      *(_QWORD*)(v54 + 560) = v83;
      *(_QWORD*)(v54 + 568) = v91;
      if (v84 != 0) {
        v94 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v94 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v94, v84);
      }
      v32 = (__int64*)(a1 + 448);
    }
    else {
      *v81 = v56;
      v83 = (__int64)(v81 + 1);
    }
    v28 = v448;
    *(_QWORD*)(v54 + 560) = v83;
    GameRoutine_a8c0c0(v54);
    *(_BYTE*)(v54 + 576) = 1;
    nn_os_UnlockMutex((__int64)GameData_212df28);
    if (v454_.v455 != 0 && v454_.v456 != 0) {
      CharacterBuilder_10873c0(v54, v454_.v455, v454_.v456);
    }
    CharacterBuilder_10877a0(v54);
    if (v457 != 0) {
      CharacterBuilder_1087ba0(v54, &v454_.v454, &v457,
                               (unsigned __int8*)v460_.v460);
    }
  }
  v95 = *(_QWORD*)(a1 + 408);
  v96 = *(_DWORD*)(a1 + 340);
  v97 = *(_QWORD*)(v28 + 48);
  *(_QWORD*)&v449_.v449 = v97;
  if ((v96 & 0xA48) == 0) {
    if ((v96 & 2) != 0) {
      v98 = 6;
    }
    else {
      v98 = 5;
    }
    LODWORD(v460_.v460[0]) = v98;
    if (v97 != 0) {
      GameRoutine_10860c0(v95, v460_.v460, (const char**)&v449_.v449);
    }
    else {
      GameRoutine_10864c0(v95, (unsigned int*)v460_.v460);
    }
  }
LABEL_174:
  if (GameRoutine_10e8c00(*(_QWORD*)(a1 + 584), (__int64*)(a1 + 416), 1, v34)) {
    *(_BYTE*)(*(_QWORD*)(a1 + 416) + 289LL) = 1;
    if (v34 != 0) {
      v99 = *(_QWORD*)(a1 + 416);
      if (v99 != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
          *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
          __cxa_guard_release((__int64)GameData_212df10);
        }
        v100 = *(_QWORD*)(v99 + 512);
        v101 = v100;
        while (v101 != *(_QWORD*)(v99 + 504)) {
          v102 = *(_DWORD*)(v101 - 16);
          v101 -= 16;
          v100 -= 16;
          if (v102 == *GameData_212df08) {
            if (*(_QWORD*)(v99 + 512) != v100) {
              v103 = *(_QWORD*)(v100 + 8);
              if (v103 != 0) {
                v104 = *(_QWORD*)(v103 + 24);
                goto LABEL_185;
              }
            }
            break;
          }
        }
      }
      v104 = 0;
    LABEL_185:
      AnimCtrlModule_a77d60(*(_QWORD**)(v34 + 24), v104);
    }
    MapAnimModule_c0a840(*(_QWORD*)(a1 + 416));
    v105 = *(_QWORD*)(a1 + 416);
    LOBYTE(v460_.v460[0]) = 0;
    if (v105 != 0) {
      nn_os_LockMutex((__int64)GameData_212df28);
      v106 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
      GameRoutine_bd6740(v106, v105, (_QWORD*)a1, 1);
      *(_QWORD*)v106 = GameData_212ea20 + 2;
      v107 = *(_QWORD*)(*(_QWORD*)(v106 + 240) + 24LL);
      v108 = *(__int64**)(v107 + 312);
      v109 = *(__int64**)(v107 + 320);
      while (v108 != v109) {
        v110 = *v108;
        v108 += 2;
        (*(void (**)(__int64, const char*, __int64, double))(
            *(_QWORD*)v110 + 16LL))(v110, "GradationEnabled", 16, 0x0.0p+0);
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)GameData_212d4d8) != 0) {
        *GameData_212d4d0 = wld_Crc32(0, "CharacterMaterial", 0x11u);
        __cxa_guard_release((__int64)GameData_212d4d8);
      }
      v112 = *(_QWORD*)(v105 + 504);
      v111 = *(_QWORD*)(v105 + 512);
      *((_QWORD*)&v449_.v449 + 1) = v106;
      v113 = *GameData_212d4d0;
      v114 = v111;
      LODWORD(v449_.v449) = *GameData_212d4d0;
      while (v114 != v112) {
        v115 = *(_DWORD*)(v114 - 16);
        v114 -= 16;
        if (v115 == v113) {
          if ((*(_BYTE*)(v106 + 16) & 1) != 0) {
            goto LABEL_208;
          }
          goto LABEL_202;
        }
      }
      if (v112 == v111 &&
          (unsigned __int64)(*(_QWORD*)(v105 + 520) - v112) <= 0x6F) {
        v116 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
        *(_QWORD*)(v105 + 504) = v116;
        *(_QWORD*)(v105 + 512) = v116;
        *(_QWORD*)(v105 + 520) = v116 + 112;
        if (v111 != 0) {
          v117 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v117 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v117, v112);
        }
      }
      GameRoutine_98f140((__int64*)(v105 + 504), &v449_.v449);
      if ((*(_BYTE*)(v106 + 16) & 1) == 0) {
      LABEL_202:
        *(_BYTE*)(v106 + 16) = 1;
        *(_BYTE*)(v106 + 17) &= ~2u;
        *(_BYTE*)(v106 + 18) &= ~2u;
        *(_BYTE*)(v106 + 19) &= ~2u;
        *(_BYTE*)(v106 + 20) &= ~2u;
        v118 = *(_BYTE**)(v106 + 8);
        v118[632] = 0;
        v118[664] = 0;
        v118[696] = 0;
        v118[728] = 0;
        (*(void (**)(__int64))(*(_QWORD*)v106 + 64LL))(v106);
        v119 = *(_BYTE**)(v106 + 8);
        v120 = v119[300] == 3 && v119[301] == 3;
        if (v120 || v119[302] == 1) {
          (*(void (**)(__int64))(*(_QWORD*)v106 + 72LL))(v106);
        }
      }
    LABEL_208:
      v121 = *(__int64**)(v105 + 536);
      v122 = *(_QWORD*)(v105 + 544);
      if ((unsigned __int64)v121 >= v122) {
        v124 = *(_QWORD*)(v105 + 528);
        v125 = (char*)v121 - v124;
        v126 = ((__int64)v121 - v124) >> 3;
        v127 = v126 + 1;
        if ((unsigned __int64)(v126 + 1) >> 61 != 0) {
          goto LABEL_727;
        }
        v128 = v122 - v124;
        if (v128 >> 2 > v127) {
          v127 = v128 >> 2;
        }
        if ((unsigned __int64)v128 >= 0x7FFFFFFFFFFFFFF8LL) {
          v129 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v129 = v127;
        }
        if (v129 != 0) {
          if (v129 >> 61 != 0) {
            goto LABEL_728;
          }
          v130 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v129, 16, 0);
        }
        else {
          v130 = 0;
        }
        v131 = v130 + 8 * v129;
        v132 = (unsigned __int64)v121 - v124;
        v133 = (__int64)&v125[v130 + -8 * v126];
        *(_QWORD*)&v125[v130] = v106;
        v123 = (__int64)&v125[v130 + 8];
        GameRoutine_1a0b950(v133, v124, v132);
        *(_QWORD*)(v105 + 528) = v133;
        *(_QWORD*)(v105 + 536) = v123;
        *(_QWORD*)(v105 + 544) = v131;
        if (v124 != 0) {
          v134 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v134 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v134, v124);
        }
        v32 = (__int64*)(a1 + 448);
      }
      else {
        *v121 = v106;
        v123 = (__int64)(v121 + 1);
      }
      *(_QWORD*)(v105 + 536) = v123;
      v135 = *(__int64**)(v105 + 560);
      v136 = *(_QWORD*)(v105 + 568);
      if ((unsigned __int64)v135 >= v136) {
        v138 = *(_QWORD*)(v105 + 552);
        v139 = (char*)v135 - v138;
        v140 = ((__int64)v135 - v138) >> 3;
        v141 = v140 + 1;
        if ((unsigned __int64)(v140 + 1) >> 61 != 0) {
          goto LABEL_727;
        }
        v142 = v136 - v138;
        if (v142 >> 2 > v141) {
          v141 = v142 >> 2;
        }
        if ((unsigned __int64)v142 >= 0x7FFFFFFFFFFFFFF8LL) {
          v143 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v143 = v141;
        }
        if (v143 != 0) {
          if (v143 >> 61 != 0) {
            goto LABEL_728;
          }
          v144 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v143, 16, 0);
        }
        else {
          v144 = 0;
        }
        v145 = v144 + 8 * v143;
        v146 = (unsigned __int64)v135 - v138;
        v147 = (__int64)&v139[v144 + -8 * v140];
        *(_QWORD*)&v139[v144] = v106;
        v137 = (__int64)&v139[v144 + 8];
        GameRoutine_1a0b950(v147, v138, v146);
        *(_QWORD*)(v105 + 552) = v147;
        *(_QWORD*)(v105 + 560) = v137;
        *(_QWORD*)(v105 + 568) = v145;
        if (v138 != 0) {
          v148 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v148 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v148, v138);
        }
        v32 = (__int64*)(a1 + 448);
      }
      else {
        *v135 = v106;
        v137 = (__int64)(v135 + 1);
      }
      *(_QWORD*)(v105 + 560) = v137;
      GameRoutine_a8c0c0(v105);
      *(_BYTE*)(v105 + 576) = 1;
      nn_os_UnlockMutex((__int64)GameData_212df28);
      if (v454_.v455 != 0 && v454_.v456 != 0) {
        CharacterBuilder_10873c0(v105, v454_.v455, v454_.v456);
      }
      CharacterBuilder_10877a0(v105);
      if (v457 != 0) {
        CharacterBuilder_1087ba0(v105, &v454_.v454, &v457,
                                 (unsigned __int8*)v460_.v460);
      }
    }
  }
  if (GameRoutine_10e8c00(*(_QWORD*)(a1 + 584), (__int64*)(a1 + 424), 2, v34)) {
    *(_BYTE*)(*(_QWORD*)(a1 + 424) + 289LL) = 1;
    if (v34 != 0) {
      v149 = *(_QWORD*)(a1 + 424);
      if (v149 != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
          *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
          __cxa_guard_release((__int64)GameData_212df10);
        }
        v150 = *(_QWORD*)(v149 + 512);
        v151 = v150;
        while (v151 != *(_QWORD*)(v149 + 504)) {
          v152 = *(_DWORD*)(v151 - 16);
          v151 -= 16;
          v150 -= 16;
          if (v152 == *GameData_212df08) {
            if (*(_QWORD*)(v149 + 512) != v150) {
              v153 = *(_QWORD*)(v150 + 8);
              if (v153 != 0) {
                v154 = *(_QWORD*)(v153 + 24);
                goto LABEL_258;
              }
            }
            break;
          }
        }
      }
      v154 = 0;
    LABEL_258:
      AnimCtrlModule_a77d60(*(_QWORD**)(v34 + 24), v154);
    }
    v155 = *(_QWORD*)(a1 + 424);
    LOBYTE(v449_.v449) = 0;
    if (v155 != 0) {
      CharacterBuilder_1087f80(v155, &v454_.v454);
      if (v454_.v455 != 0 && v454_.v456 != 0) {
        CharacterBuilder_10873c0(v155, v454_.v455, v454_.v456);
      }
      CharacterBuilder_10877a0(v155);
      if (v457 != 0) {
        CharacterBuilder_1087ba0(v155, &v454_.v454, &v457,
                                 (unsigned __int8*)&v449_.v449);
      }
    }
  }
  v156 = *(_QWORD*)(a1 + 584);
  if (*(_QWORD*)(a1 + 432) != 0) {
    GameRoutine_a867a0(a1 + 432);
    *(_QWORD*)(a1 + 432) = 0;
  }
  v157 = *(_QWORD*)(v156 + 40);
  if (v157 != 0) {
    *(_QWORD*)(a1 + 432) = v157;
    *(_QWORD*)(v156 + 40) = 0;
    *(_BYTE*)(*(_QWORD*)(a1 + 432) + 289LL) = 1;
    v158 = *(_DWORD*)(a1 + 340);
    if ((v158 & 0x40) != 0) {
      goto LABEL_289;
    }
    v159 = *(unsigned __int8*)(v448 + 424);
    if ((v159 & 1) != 0) {
      v160 = *(_QWORD*)(v448 + 432);
    }
    else {
      v160 = v159 >> 1;
    }
    if (v160 != 0) {
      *(_DWORD*)(a1 + 340) = v158 | 0x100;
      if ((*(_BYTE*)(v448 + 424) & 1) != 0) {
        v161 = *(char**)(v448 + 440);
      }
      else {
        v161 = (char*)(v448 + 425);
      }
    }
    else {
      v161 = "Loc_L_Weapon";
    }
    v162 = (_QWORD*)CharacterBuilder_1083180(*(_QWORD*)(a1 + 432));
    game_character_WeaponHoldModule_Start(v162, a1, v161);
    v163 = game_10a0100(*(_QWORD**)(a1 + 408), v161);
    if ((unsigned int)CharacterAppearance_10743e0(v448) != 5) {
    LABEL_286:
      v171 = *(_QWORD*)(a1 + 432);
      if (*(_QWORD**)(v171 + 776) == v163) {
        LOBYTE(v449_.v449) = 0;
      LABEL_292:
        CharacterBuilder_1087f80(v171, &v454_.v454);
        if (v454_.v455 != 0 && v454_.v456 != 0) {
          CharacterBuilder_10873c0(v171, v454_.v455, v454_.v456);
        }
        CharacterBuilder_10877a0(v171);
        if (v457 != 0) {
          CharacterBuilder_1087ba0(v171, &v454_.v454, &v457,
                                   (unsigned __int8*)&v449_.v449);
        }
        goto LABEL_297;
      }
      v172 = *(_DWORD*)(v171 + 296);
      *(_DWORD*)(v171 + 784) = 0;
      *(_QWORD*)(v171 + 776) = 0;
      *(_QWORD*)(v171 + 768) = 0;
      *(_DWORD*)(v171 + 296) = v172 & 0xFFFFFFFB;
      if (v163 != nullptr) {
        *(_QWORD*)(v171 + 776) = v163;
        *(_DWORD*)(v171 + 784) = 7;
        *(_DWORD*)(v171 + 296) = v172 | 4;
      }
    LABEL_289:
      v171 = *(_QWORD*)(a1 + 432);
      LOBYTE(v449_.v449) = 0;
      if (v171 == 0) {
        goto LABEL_297;
      }
      goto LABEL_292;
    }
    v164 = *v163;
    v163[12] = 1078530011;
    v165 = *((_OWORD*)v163 + 6);
    *((_DWORD*)v163 + 32) |= 0x10u;
    v166 = *((_BYTE*)v163 + 28);
    *((_OWORD*)v163 + 6) = (unsigned __int64)v165;
    if ((v166 & 1) != 0) {
    LABEL_285:
      *(_BYTE*)(*(_QWORD*)(v164 + 24) + 504LL) = 1;
      goto LABEL_286;
    }
    v167 = *(_QWORD*)(v164 + 24);
    v168 = *((_DWORD*)v163 + 4);
    *(_QWORD*)&v449_.v450 = v163;
    *(_QWORD*)&v449_.v449 = GameData_1fc0970;
    *((_QWORD*)&v449_.v449 + 1) = v164;
    *(_QWORD*)&v449_.v451 = &v449_.v449;
    v169 = g3d_a661a0(v167, v168, (__int64)&v449_.v449, 0);
    if ((__int128*)v449_.v451 == &v449_.v449) {
      v170 = 32;
    }
    else {
      if ((_QWORD)v449_.v451 == 0) {
      LABEL_284:
        *((_DWORD*)v163 + 6) = v169;
        *((_BYTE*)v163 + 28) = 1;
        goto LABEL_285;
      }
      v170 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v449_.v451 + v170))((__int64)v449_.v451);
    goto LABEL_284;
  }
LABEL_297:
  v173 = *(_QWORD*)(a1 + 584);
  if (*(_QWORD*)(a1 + 440) != 0) {
    GameRoutine_a867a0(a1 + 440);
    *(_QWORD*)(a1 + 440) = 0;
  }
  v174 = *(_QWORD*)(v173 + 48);
  v175 = v448;
  if (v174 != 0) {
    *(_QWORD*)(a1 + 440) = v174;
    *(_QWORD*)(v173 + 48) = 0;
    *(_BYTE*)(*(_QWORD*)(a1 + 440) + 289LL) = 1;
    v176 = *(_DWORD*)(a1 + 340);
    if ((v176 & 0x40) == 0) {
      v177 = *(unsigned __int8*)(v448 + 496);
      if ((v177 & 1) != 0) {
        v178 = *(_QWORD*)(v448 + 504);
      }
      else {
        v178 = v177 >> 1;
      }
      if (v178 != 0) {
        *(_DWORD*)(a1 + 340) = v176 | 0x100;
        if ((*(_BYTE*)(v448 + 496) & 1) != 0) {
          v179 = *(char**)(v448 + 512);
        }
        else {
          v179 = (char*)(v448 + 497);
        }
      }
      else {
        v179 = "Loc_R_Weapon";
      }
      v180 = (_QWORD*)CharacterBuilder_1083180(*(_QWORD*)(a1 + 440));
      game_character_WeaponHoldModule_Start(v180, a1, v179);
      v181 = game_10a0100(*(_QWORD**)(a1 + 408), v179);
      v182 = *(_QWORD*)(a1 + 440);
      if (*(_QWORD**)(v182 + 776) == v181) {
        LOBYTE(v449_.v449) = 0;
      LABEL_315:
        CharacterBuilder_1087f80(v182, &v454_.v454);
        if (v454_.v455 != 0 && v454_.v456 != 0) {
          CharacterBuilder_10873c0(v182, v454_.v455, v454_.v456);
        }
        CharacterBuilder_10877a0(v182);
        if (v457 != 0) {
          CharacterBuilder_1087ba0(v182, &v454_.v454, &v457,
                                   (unsigned __int8*)&v449_.v449);
        }
        goto LABEL_320;
      }
      v183 = *(_DWORD*)(v182 + 296);
      *(_DWORD*)(v182 + 784) = 0;
      *(_QWORD*)(v182 + 776) = 0;
      *(_QWORD*)(v182 + 768) = 0;
      *(_DWORD*)(v182 + 296) = v183 & 0xFFFFFFFB;
      if (v181 != nullptr) {
        *(_QWORD*)(v182 + 776) = v181;
        *(_DWORD*)(v182 + 784) = 7;
        *(_DWORD*)(v182 + 296) = v183 | 4;
      }
    }
    v182 = *(_QWORD*)(a1 + 440);
    LOBYTE(v449_.v449) = 0;
    if (v182 == 0) {
      goto LABEL_320;
    }
    goto LABEL_315;
  }
LABEL_320:
  v184 = *(_QWORD*)(a1 + 584);
  if (*(_QWORD*)(a1 + 448) != 0) {
    GameRoutine_a867a0((__int64)v32);
    *v32 = 0;
  }
  v185 = *(_QWORD*)(v184 + 56);
  if (v185 != 0) {
    *v32 = v185;
    *(_QWORD*)(v184 + 56) = 0;
    v186 = *v32;
    if (*v32 != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
        *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
        __cxa_guard_release((__int64)GameData_212df10);
      }
      v187 = *(_QWORD*)(v186 + 512);
      v188 = v187;
      do {
        v189 = *(_DWORD*)(v188 - 16);
        v188 -= 16;
        v187 -= 16;
      } while (v189 != *GameData_212df08);
      v190 = *(_QWORD*)(*(_QWORD*)(v187 + 8) + 24LL);
      *(_BYTE*)(v186 + 289) = 1;
      if (v34 != 0) {
        CharacterBuilder_10823c0(v32);
      }
      v191 = *v32;
      LOBYTE(v449_.v449) = 1;
      if (v191 != 0) {
        CharacterBuilder_1087f80(v191, &v454_.v454);
        v192 = v454_.v455;
        if (v454_.v455 != 0 && v454_.v456 != 0) {
          CharacterBuilder_10873c0(v191, v454_.v455, v454_.v456);
        }
        CharacterBuilder_10877a0(v191);
        if (v457 != 0) {
          CharacterBuilder_1087ba0(v191, &v454_.v454, &v457,
                                   (unsigned __int8*)&v449_.v449);
        }
      }
      else {
        v192 = v454_.v455;
      }
      CharacterBuilder_a577c0(v192 + 24, v190, 1, 1);
      v175 = v448;
      v193 = *(_DWORD*)(a1 + 340);
      v194 = *(_QWORD*)(v448 + 48);
      *(_QWORD*)&v449_.v449 = v194;
      if ((v193 & 0xA48) == 0) {
        if ((v193 & 2) != 0) {
          v195 = 6;
        }
        else {
          v195 = 5;
        }
        LODWORD(v460_.v460[0]) = v195;
        if (v194 != 0) {
          GameRoutine_10860c0(v186, v460_.v460, (const char**)&v449_.v449);
        }
        else {
          GameRoutine_10864c0(v186, (unsigned int*)v460_.v460);
        }
      }
    }
  }
  if ((*(_WORD*)(a1 + 340) & 0xA48) != 0) {
    goto LABEL_416;
  }
  v196 = *v32;
  if (v196 == 0) {
    v203 = *v447;
    if (*v447 == 0) {
      goto LABEL_434;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356d8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_22356d8) != 0) {
      GameData_22356d0 = wld_Crc32(0, "GrassInteractionModule", 0x16u);
      __cxa_guard_release((__int64)&GameData_22356d8);
    }
    v205 = *(_QWORD*)(v203 + 504);
    v204 = *(_QWORD*)(v203 + 512);
    v206 = v204;
    v32 = (__int64*)(a1 + 448);
    v207 = v204;
    while (v207 != v205) {
      v208 = *(_DWORD*)(v207 - 16);
      v207 -= 16;
      v206 -= 16;
      if (v208 == GameData_22356d0) {
        v202 = (__int64*)(a1 + 408);
        if (v204 == v206) {
          goto LABEL_362;
        }
        v202 = (__int64*)(a1 + 408);
        if (*(_QWORD*)(v206 + 8) == 0) {
          goto LABEL_362;
        }
        goto LABEL_416;
      }
    }
    v202 = (__int64*)(a1 + 408);
  LABEL_362:
    v209 = *v202;
    nn_os_LockMutex((__int64)GameData_212df28);
    v210 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
    game_1116110(v210, v209);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356d8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_22356d8) != 0) {
      GameData_22356d0 = wld_Crc32(0, "GrassInteractionModule", 0x16u);
      __cxa_guard_release((__int64)&GameData_22356d8);
    }
    v212 = *(_QWORD*)(v209 + 504);
    v211 = *(_QWORD*)(v209 + 512);
    v213 = v211;
    LODWORD(v449_.v449) = GameData_22356d0;
    *((_QWORD*)&v449_.v449 + 1) = v210;
    while (v213 != v212) {
      v214 = *(_DWORD*)(v213 - 16);
      v213 -= 16;
      if (v214 == GameData_22356d0) {
        if ((*(_BYTE*)(v210 + 16) & 1) != 0) {
          goto LABEL_381;
        }
        goto LABEL_375;
      }
    }
    if (v212 == v211 &&
        (unsigned __int64)(*(_QWORD*)(v209 + 520) - v212) <= 0x6F) {
      v215 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
      *(_QWORD*)(v209 + 504) = v215;
      *(_QWORD*)(v209 + 512) = v215;
      *(_QWORD*)(v209 + 520) = v215 + 112;
      if (v211 != 0) {
        v216 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v216 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v216, v212);
      }
    }
    GameRoutine_98f140((__int64*)(v209 + 504), &v449_.v449);
    if ((*(_BYTE*)(v210 + 16) & 1) == 0) {
    LABEL_375:
      *(_BYTE*)(v210 + 16) = 1;
      *(_BYTE*)(v210 + 17) &= ~2u;
      *(_BYTE*)(v210 + 18) &= ~2u;
      *(_BYTE*)(v210 + 19) &= ~2u;
      *(_BYTE*)(v210 + 20) &= ~2u;
      v217 = *(_BYTE**)(v210 + 8);
      v217[632] = 0;
      v217[664] = 0;
      v217[696] = 0;
      v217[728] = 0;
      (*(void (**)(__int64))(*(_QWORD*)v210 + 64LL))(v210);
      v218 = *(_BYTE**)(v210 + 8);
      v219 = v218[300] == 3 && v218[301] == 3;
      if (v219 || v218[302] == 1) {
        (*(void (**)(__int64))(*(_QWORD*)v210 + 72LL))(v210);
      }
    }
  LABEL_381:
    v220 = *(__int64**)(v209 + 536);
    v221 = *(_QWORD*)(v209 + 544);
    if ((unsigned __int64)v220 >= v221) {
      v223 = *(_QWORD*)(v209 + 528);
      v224 = (char*)v220 - v223;
      v225 = ((__int64)v220 - v223) >> 3;
      v226 = v225 + 1;
      if ((unsigned __int64)(v225 + 1) >> 61 != 0) {
        goto LABEL_727;
      }
      v227 = v221 - v223;
      if (v227 >> 2 > v226) {
        v226 = v227 >> 2;
      }
      if ((unsigned __int64)v227 >= 0x7FFFFFFFFFFFFFF8LL) {
        v228 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v228 = v226;
      }
      if (v228 != 0) {
        if (v228 >> 61 != 0) {
          goto LABEL_728;
        }
        v229 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v228, 16, 0);
      }
      else {
        v229 = 0;
      }
      v230 = v229 + 8 * v228;
      v231 = (unsigned __int64)v220 - v223;
      v232 = (__int64)&v224[v229 + -8 * v225];
      *(_QWORD*)&v224[v229] = v210;
      v222 = (__int64)&v224[v229 + 8];
      GameRoutine_1a0b950(v232, v223, v231);
      *(_QWORD*)(v209 + 528) = v232;
      *(_QWORD*)(v209 + 536) = v222;
      *(_QWORD*)(v209 + 544) = v230;
      if (v223 != 0) {
        v233 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v233 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v233, v223);
      }
      v32 = (__int64*)(a1 + 448);
    }
    else {
      *v220 = v210;
      v222 = (__int64)(v220 + 1);
    }
    *(_QWORD*)(v209 + 536) = v222;
    v234 = *(__int64**)(v209 + 560);
    v235 = *(_QWORD*)(v209 + 568);
    if ((unsigned __int64)v234 >= v235) {
      v237 = *(_QWORD*)(v209 + 552);
      v238 = (char*)v234 - v237;
      v239 = ((__int64)v234 - v237) >> 3;
      v240 = v239 + 1;
      if ((unsigned __int64)(v239 + 1) >> 61 != 0) {
        goto LABEL_727;
      }
      v241 = v235 - v237;
      if (v241 >> 2 > v240) {
        v240 = v241 >> 2;
      }
      if ((unsigned __int64)v241 >= 0x7FFFFFFFFFFFFFF8LL) {
        v242 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v242 = v240;
      }
      if (v242 != 0) {
        if (v242 >> 61 != 0) {
          goto LABEL_728;
        }
        v243 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v242, 16, 0);
      }
      else {
        v243 = 0;
      }
      v244 = v243 + 8 * v242;
      v245 = (unsigned __int64)v234 - v237;
      v246 = (__int64)&v238[v243 + -8 * v239];
      *(_QWORD*)&v238[v243] = v210;
      v236 = (__int64)&v238[v243 + 8];
      GameRoutine_1a0b950(v246, v237, v245);
      *(_QWORD*)(v209 + 552) = v246;
      *(_QWORD*)(v209 + 560) = v236;
      *(_QWORD*)(v209 + 568) = v244;
      if (v237 != 0) {
        v247 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v247 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v247, v237);
      }
      v32 = (__int64*)(a1 + 448);
    }
    else {
      *v234 = v210;
      v236 = (__int64)(v234 + 1);
    }
    v175 = v448;
    *(_QWORD*)(v209 + 560) = v236;
    GameRoutine_a8c0c0(v209);
    *(_BYTE*)(v209 + 576) = 1;
    nn_os_UnlockMutex((__int64)GameData_212df28);
    goto LABEL_416;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356d8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22356d8) != 0) {
    GameData_22356d0 = wld_Crc32(0, "GrassInteractionModule", 0x16u);
    __cxa_guard_release((__int64)&GameData_22356d8);
  }
  v198 = *(_QWORD*)(v196 + 504);
  v197 = *(_QWORD*)(v196 + 512);
  v199 = v197;
  v32 = (__int64*)(a1 + 448);
  v200 = v197;
  do {
    if (v200 == v198) {
      v202 = (__int64*)(a1 + 448);
      goto LABEL_362;
    }
    v201 = *(_DWORD*)(v200 - 16);
    v200 -= 16;
    v199 -= 16;
  } while (v201 != GameData_22356d0);
  v202 = (__int64*)(a1 + 448);
  if (v197 == v199) {
    goto LABEL_362;
  }
  v202 = (__int64*)(a1 + 448);
  if (*(_QWORD*)(v199 + 8) == 0) {
    goto LABEL_362;
  }
LABEL_416:
  v248 = *v32;
  if (*v32 != 0 || (v248 = *v447, *v447 != 0)) {
    v249 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                memory_order_acquire);
    v250 = GameData_212ed88;
    if ((v249 & 1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212ed90) != 0) {
      *v250 = wld_Crc32(0, "AnimLayerCtrlModule", 0x13u);
      __cxa_guard_release((__int64)GameData_212ed90);
    }
    v251 = *(_QWORD*)(v248 + 512);
    v252 = v251;
    while (v252 != *(_QWORD*)(v248 + 504)) {
      v253 = *(_DWORD*)(v252 - 16);
      v252 -= 16;
      v251 -= 16;
      if (v253 == *v250) {
        if (*(_QWORD*)(v248 + 512) != v251) {
          v254 = *(_QWORD*)(v251 + 8);
          goto LABEL_425;
        }
        break;
      }
    }
    v254 = 0;
  LABEL_425:
    if (GameRoutine_10e8c00(*(_QWORD*)(a1 + 584), (__int64*)(a1 + 456), 6,
                            v254)) {
      CharacterBuilder_1083580((__int64)&v454_.v454, *(_QWORD*)(a1 + 456),
                               v248);
    }
    if (GameRoutine_10e8c00(*(_QWORD*)(a1 + 584), (__int64*)(a1 + 464), 7,
                            v254)) {
      BYTE8(v449_.v449) = 0;
      *(_QWORD*)&v449_.v449 = GameData_2006f38;
      *(_QWORD*)&v449_.v451 = &v449_.v449;
      CharacterBuilder_1083e90((_QWORD*)a1, (__int64)&v449_.v449);
      if ((__int128*)v449_.v451 == &v449_.v449) {
        v255 = 32;
      LABEL_432:
        (*(void (**)(__int64))(*(_QWORD*)v449_.v451 + v255))(
            (__int64)v449_.v451);
      }
      else if ((_QWORD)v449_.v451 != 0) {
        v255 = 40;
        goto LABEL_432;
      }
      CharacterBuilder_1083580((__int64)&v454_.v454, *(_QWORD*)(a1 + 464),
                               v248);
    }
  }
LABEL_434:
  v256 = v175 + 1400;
  v257 = 0;
  *(_QWORD*)(a1 + 504) = (unsigned __int64)*(unsigned int*)(a1 + 508) << 32;
  while (2) {
    if (GameRoutine_10e8c00(*(_QWORD*)(a1 + 584), &v19[v257], v257 | 8, v34)) {
      v258 = v19[v257];
      *(_BYTE*)(v258 + 289) = 1;
      v259 = *(const char**)(v256 + 8 * v257);
      if (v259 != nullptr) {
        if (GameRoutine_1a09d30(*(const char**)(v256 + 8 * v257),
                                "Jnt_C_Head") != 0) {
          v260 = CharacterBuilder_1083780(a1, v259);
          if (*(_QWORD**)(v258 + 776) != v260) {
            v261 = *(_DWORD*)(v258 + 296);
            *(_DWORD*)(v258 + 784) = 0;
            *(_QWORD*)(v258 + 776) = 0;
            *(_QWORD*)(v258 + 768) = 0;
            *(_DWORD*)(v258 + 296) = v261 & 0xFFFFFFFB;
            if (v260 != nullptr) {
              *(_QWORD*)(v258 + 776) = v260;
              *(_DWORD*)(v258 + 784) = 7;
              *(_DWORD*)(v258 + 296) = v261 | 4;
            }
          }
        }
        else {
          v262 = *(_QWORD*)(a1 + 8);
          if (*(_QWORD*)(v258 + 768) != v262 || *(_DWORD*)(v258 + 784) != 7) {
            *(_QWORD*)(v258 + 768) = 0;
            *(_QWORD*)(v258 + 776) = 0;
            *(_QWORD*)(v258 + 768) = v262;
            v264 = *(_DWORD*)(v258 + 296);
            *(_DWORD*)(v258 + 784) = 7;
            *(_DWORD*)(v258 + 296) = v264 | 4;
          }
          if (v34 != 0) {
            if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                      memory_order_acquire) &
                 1) == 0 &&
                __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
              *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
              __cxa_guard_release((__int64)GameData_212df10);
            }
            v265 = *(_QWORD*)(v258 + 512);
            v266 = v265;
            while (v266 != *(_QWORD*)(v258 + 504)) {
              v267 = *(_DWORD*)(v266 - 16);
              v266 -= 16;
              v265 -= 16;
              if (v267 == *GameData_212df08) {
                if (*(_QWORD*)(v258 + 512) != v265) {
                  v268 = *(_QWORD*)(v265 + 8);
                  if (v268 != 0) {
                    v269 = *(_QWORD*)(v268 + 24);
                    goto LABEL_456;
                  }
                }
                break;
              }
            }
            v269 = 0;
          LABEL_456:
            AnimCtrlModule_a77d60(*(_QWORD**)(v34 + 24), v269);
          }
          *(_QWORD*)(a1 + 504) |= 1LL << v257;
        }
      }
      v270 = (const char*)(v19[v257] + 16LL);
      v271 = GameRoutine_1a09c70(v270);
      if (v271 >= 2 && *(_WORD*)&v270[v271 - 2] == 30289) {
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
          *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
          __cxa_guard_release((__int64)GameData_212df10);
        }
        v272 = *(_QWORD*)(v258 + 512);
        v273 = v272;
        do {
          v274 = *(_DWORD*)(v273 - 16);
          v273 -= 16;
          v272 -= 16;
        } while (v274 != *GameData_212df08);
        CharacterBuilder_a577c0(v454_.v455 + 24,
                                *(_QWORD*)(*(_QWORD*)(v272 + 8) + 24LL), 2, 1);
        LOBYTE(v449_.v449) = 0;
        if (v258 != 0) {
        LABEL_461:
          CharacterBuilder_1087f80(v258, &v454_.v454);
          if (v454_.v455 != 0 && v454_.v456 != 0) {
            CharacterBuilder_10873c0(v258, v454_.v455, v454_.v456);
          }
          CharacterBuilder_10877a0(v258);
          if (v457 != 0) {
            CharacterBuilder_1087ba0(v258, &v454_.v454, &v457,
                                     (unsigned __int8*)&v449_.v449);
          }
        }
      }
      else {
        LOBYTE(v449_.v449) = 0;
        if (v258 != 0) {
          goto LABEL_461;
        }
      }
    }
    if (++v257 != 4) {
      continue;
    }
    break;
  }
  GameRoutine_1112ba0(v448, 0, *(_QWORD*)(a1 + 408));
  GameRoutine_1112ba0(v448, 1, *(_QWORD*)(a1 + 416));
  GameRoutine_1112ba0(v448, 2, *(_QWORD*)(a1 + 424));
  GameRoutine_1112ba0(v448, 5, *(_QWORD*)(a1 + 448));
  GameRoutine_1112ba0(v448, 6, *(_QWORD*)(a1 + 456));
  GameRoutine_1112ba0(v448, 7, *(_QWORD*)(a1 + 464));
  GameRoutine_1112ba0(v448, 3, *(_QWORD*)(a1 + 432));
  GameRoutine_1112ba0(v448, 4, *(_QWORD*)(a1 + 440));
  CharacterAura_10f4cc0(a1);
  v276 = *(_QWORD*)(a1 + 392);
  v275 = *(_QWORD*)(a1 + 400);
  if (v275 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v275 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v275 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v275 + 16LL))(v275);
      std___1___shared_weak_count___release_weak(v275);
    }
  }
  v277 = *(unsigned int*)(a1 + 340);
  *(_QWORD*)&v449_.v449 = GameData_2007088;
  *((_QWORD*)&v449_.v449 + 1) = v276;
  *(_QWORD*)&v449_.v451 = &v449_.v449;
  *(_QWORD*)&v449_.v450 = v277;
  CharacterBuilder_1083e90((_QWORD*)a1, (__int64)&v449_.v449);
  v281 = (__int64*)(a1 + 448);
  if ((__int128*)v449_.v451 == &v449_.v449) {
    v282 = 32;
  LABEL_482:
    (*(void (**)(__int64))(*(_QWORD*)v449_.v451 + v282))(
        (__int64)v449_.v451);
  }
  else if ((_QWORD)v449_.v451 != 0) {
    v282 = 40;
    goto LABEL_482;
  }
  v279 = *(unsigned __int8*)(v276 + 86);
  v280 = *(unsigned __int8*)(v276 + 87);
  *(float*)&v284 = (float)*(unsigned __int8*)(v276 + 84) /
                   0x1.fe00000000000p+7f;
  v283 = *(unsigned __int8*)(v276 + 85);
  *((float*)&v284 + 1) = (float)v283 / 0x1.fe00000000000p+7f;
  *((float*)&v284 + 2) = (float)v279 / 0x1.fe00000000000p+7f;
  *((float*)&v284 + 3) = (float)v280 / 0x1.fe00000000000p+7f;
  v446 = v284;
  v285 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        48, 16, 0);
  *(_QWORD*)&v449_.v451 = v285;
  *(_QWORD*)v285 = GameData_20075d8;
  *(_QWORD*)(v285 + 16) = "CheekColor0";
  *(_OWORD*)(v285 + 32) = v446;
  CharacterBuilder_1083e90((_QWORD*)a1, (__int64)&v449_.v449);
  (*(void (**)(__int64))(*(_QWORD*)v285 + 40LL))(v285);
  v286 = *(_QWORD*)(a1 + 408);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
    *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release((__int64)GameData_212df10);
  }
  v287 = *(_QWORD*)(v286 + 512);
  v288 = v287;
  do {
    v289 = *(_DWORD*)(v288 - 16);
    v288 -= 16;
    v287 -= 16;
  } while (v289 != *GameData_212df08);
  Model_a66f60((void*)(&v449_.v449), *(_QWORD*)(*(_QWORD*)(v287 + 8) + 24LL),
               (__int64)"Mat_Body", 8u);
  if ((_QWORD)v449_.v449 != 0) {
    v291 = *v447;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212d4d8) != 0) {
      *GameData_212d4d0 = wld_Crc32(0, "CharacterMaterial", 0x11u);
      __cxa_guard_release((__int64)GameData_212d4d8);
    }
    v292 = *(_QWORD*)(v291 + 512);
    v293 = v292;
    while (v293 != *(_QWORD*)(v291 + 504)) {
      v294 = *(_DWORD*)(v293 - 16);
      v293 -= 16;
      v292 -= 16;
      if (v294 == *GameData_212d4d0) {
        if (*(_QWORD*)(v291 + 512) != v292) {
          v295 = *(_QWORD*)(v292 + 8);
          if (v295 != 0) {
            game_character_bd87d0(v295, v449_.v449, (_BYTE*)(v276 + 92));
          }
        }
        break;
      }
    }
  }
  v296 = *((_QWORD*)&v449_.v449 + 1);
  if (*((_QWORD*)&v449_.v449 + 1) != 0 &&
      atomic_fetch_add(
          (atomic_ullong* volatile)(*((_QWORD*)&v449_.v449 + 1) + 8LL),
          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v296 + 16LL))(v296);
    std___1___shared_weak_count___release_weak(v296);
  }
  v297 = *(_QWORD*)(a1 + 416);
  if (v297 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
      *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release((__int64)GameData_212df10);
    }
    v298 = *(_QWORD*)(v297 + 512);
    v299 = v298;
    do {
      if (v299 == *(_QWORD*)(v297 + 504)) {
        goto LABEL_534;
      }
      v300 = *(_DWORD*)(v299 - 16);
      v299 -= 16;
      v298 -= 16;
    } while (v300 != *GameData_212df08);
    if (*(_QWORD*)(v297 + 512) != v298) {
      v301 = *(_QWORD*)(v298 + 8);
      if (v301 != 0) {
        v302 = *(_QWORD*)(v301 + 24);
        if (v302 != 0) {
          if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire((__int64)GameData_212d4d8) != 0) {
            *GameData_212d4d0 = wld_Crc32(0, "CharacterMaterial", 0x11u);
            __cxa_guard_release((__int64)GameData_212d4d8);
          }
          v303 = *(_QWORD*)(v297 + 512);
          v304 = v303;
          do {
            if (v304 == *(_QWORD*)(v297 + 504)) {
              goto LABEL_534;
            }
            v305 = *(_DWORD*)(v304 - 16);
            v304 -= 16;
            v303 -= 16;
          } while (v305 != *GameData_212d4d0);
          if (*(_QWORD*)(v297 + 512) == v303) {
            goto LABEL_534;
          }
          v306 = *(_QWORD*)(v303 + 8);
          if (v306 == 0) {
            goto LABEL_534;
          }
          Model_a66f60((void*)(&v449_.v449), v302, (__int64)"Mat_Face", 8u);
          if ((_QWORD)v449_.v449 != 0) {
            game_character_bd87d0(v306, v449_.v449, (_BYTE*)(v276 + 88));
          }
          v308 = *((_QWORD*)&v449_.v449 + 1);
          if (*((_QWORD*)&v449_.v449 + 1) != 0 &&
              atomic_fetch_add(
                  (atomic_ullong* volatile)(*((_QWORD*)&v449_.v449 + 1) + 8LL),
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v308 + 16LL))(v308);
            std___1___shared_weak_count___release_weak(v308);
          }
          Model_a66f60((void*)(&v449_.v449), v302, (__int64)"Mat_Eye", 7u);
          v309 = v449_.v449;
          if ((_QWORD)v449_.v449 != 0) {
            (*(void (**)(_QWORD, const char*, __int64, _QWORD))(
                *(_QWORD*)v449_.v449 + 72LL))(v449_.v449, "WhiteEyeColor", 13,
                                              *(unsigned int*)(v276 + 96));
            v310 = *(_DWORD*)(v276 + 100);
            v311 = GameData_212c690;
            v312 = (unsigned __int8)v310;
            v313 = (unsigned __int8*)*GameData_212c690;
            if (*(unsigned __int8*)*GameData_212c690 == (unsigned __int8)v310 &&
                __PAIR64__(v313[2], v313[1]) ==
                    __PAIR64__(BYTE2(v310), BYTE1(v310))) {
              if (HIBYTE(v310) == 0 || v313[3] == HIBYTE(v310)) {
              LABEL_524:
                v314 = *(_DWORD*)(v276 + 104);
                if (v312 == (unsigned __int8)v314 &&
                    __PAIR64__(v313[2], v313[1]) ==
                        __PAIR64__(BYTE2(v314), BYTE1(v314))) {
                  if (HIBYTE(v314) == 0 || v313[3] == HIBYTE(v314)) {
                    goto LABEL_531;
                  }
                }
                else if (HIBYTE(v314) == 0) {
                  goto LABEL_531;
                }
                (*(void (**)(__int64, const char*, __int64))(
                    *(_QWORD*)v309 + 72LL))(v309, "EyeGradationBottomColor",
                                            23);
                goto LABEL_531;
              }
            }
            else {
              v312 = *(unsigned __int8*)*GameData_212c690;
              if (HIBYTE(v310) == 0) {
                goto LABEL_524;
              }
            }
            (*(void (**)(__int64, const char*, __int64))(
                *(_QWORD*)v309 + 72LL))(v309, "BaseColorMultiplier0", 20);
            v313 = (unsigned __int8*)*v311;
            v312 = *(unsigned __int8*)*v311;
            goto LABEL_524;
          }
        LABEL_531:
          v315 = *((_QWORD*)&v449_.v449 + 1);
          if (*((_QWORD*)&v449_.v449 + 1) != 0 &&
              atomic_fetch_add(
                  (atomic_ullong* volatile)(*((_QWORD*)&v449_.v449 + 1) + 8LL),
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v315 + 16LL))(v315);
            std___1___shared_weak_count___release_weak(v315);
          }
        }
      }
    }
  }
LABEL_534:
  BYTE8(v449_.v449) = 0;
  *(_QWORD*)&v449_.v449 = GameData_2007108;
  *(_QWORD*)&v449_.v451 = &v449_.v449;
  CharacterBuilder_1083e90((_QWORD*)a1, (__int64)&v449_.v449);
  if ((__int128*)v449_.v451 == &v449_.v449) {
    v316 = (__int64*)(a1 + 408);
    v317 = 32;
  LABEL_538:
    (*(void (**)(__int64))(*(_QWORD*)v449_.v451 + v317))((__int64)v449_.v451);
  }
  else {
    v316 = (__int64*)(a1 + 408);
    if ((_QWORD)v449_.v451 != 0) {
      v317 = 40;
      goto LABEL_538;
    }
  }
  if ((*(_BYTE*)(a1 + 340) & 0xC8) != 0) {
    BYTE8(v449_.v449) = 0;
    *(_QWORD*)&v449_.v449 = GameData_20072a8;
    *(_QWORD*)&v449_.v451 = &v449_.v449;
    CharacterBuilder_1083e90((_QWORD*)a1, (__int64)&v449_.v449);
    if ((__int128*)v449_.v451 == &v449_.v449) {
      v318 = 32;
    LABEL_544:
      (*(void (**)(__int64))(*(_QWORD*)v449_.v451 + v318))((__int64)v449_.v451);
    }
    else if ((_QWORD)v449_.v451 != 0) {
      v318 = 40;
      goto LABEL_544;
    }
  }
  CharacterBuilder_1083840((float*)a1);
  if (*(_QWORD*)(a1 + 512) == 0) {
    v337 = *(_QWORD*)(a1 + 8);
    v338 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
    *(_QWORD*)(v338 + 24) = v337;
    v339 = v338 + 24;
    v340 = v338;
    *(_QWORD*)(v338 + 8) = 0;
    *(_QWORD*)(v338 + 16) = 0;
    *(_QWORD*)(v338 + 48) = 0;
    *(_QWORD*)(v338 + 56) = 0;
    *(_QWORD*)(v338 + 64) = 0;
    *(_QWORD*)v338 = GameData_2006fb8;
    *(_DWORD*)(v338 + 40) = 0;
    *(_QWORD*)(v338 + 32) = a1;
    v341 = *(int**)(a1 + 320);
    *(_QWORD*)&v449_.v451 = &v449_.v449;
    *(_QWORD*)&v449_.v449 = GameData_1fdba58;
    *((_QWORD*)&v449_.v449 + 1) = v339;
    qmemcpy(v460_.v460, "\"Signal_BeginTrai", 17);
    *(_WORD*)((char*)&v460_.v460[2] + 1) =
        (unsigned __int8)GameData_1abc799[16];
    v342 = Signal_d30a60_alt1(v341, (const char*)v460_.v460 + 1, 17,
                              (__int64)&v449_.v449);
    if ((v460_.v460[0] & 1) != 0 && v460_.v460[2] != 0) {
      v343 = v342;
      v344 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v344 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v344, v460_.v460[2]);
      v342 = v343;
      v281 = (__int64*)(a1 + 448);
    }
    *(_DWORD*)(v340 + 40) = v342;
    if ((__int128*)v449_.v451 == &v449_.v449) {
      v345 = 32;
    }
    else {
      if ((_QWORD)v449_.v451 == 0) {
      LABEL_580:
        v347 = *(_QWORD*)(a1 + 520);
        *(_QWORD*)(a1 + 512) = v339;
        *(_QWORD*)(a1 + 520) = v340;
        if (v347 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v347 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v347 + 16LL))(v347);
          std___1___shared_weak_count___release_weak(v347);
        }
        goto LABEL_546;
      }
      v345 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v449_.v451 + v345))((__int64)v449_.v451);
    goto LABEL_580;
  }
LABEL_546:
  CharacterBuilder_1083bf0((_QWORD*)a1);
  v319 = *(_QWORD****)(a1 + 528);
  v320 = *(_QWORD****)(a1 + 536);
  if (v319 != v320) {
    do {
      v321 = *v319++;
      LocatorModule_a7c2c0(*v321, (__int64)v321);
    } while (v319 != v320);
    v319 = *(_QWORD****)(a1 + 528);
  }
  v322 = *(_QWORD*)(a1 + 408);
  *(_QWORD*)(a1 + 536) = v319;
  *(_QWORD*)&v449_.v449 = a1 + 528;
  if (v322 != 0) {
    GameRoutine_10d75e0((__int64**)&v449_.v449, v322);
  }
  if (*v281 != 0) {
    GameRoutine_10d75e0((__int64**)&v449_.v449, *v281);
  }
  v323 = *v316;
  v324 = (atomic_uchar*)GameData_212eab0;
  v325 = atomic_load_explicit((atomic_uchar* volatile)GameData_212eab0,
                              memory_order_acquire);
  v326 = GameData_212eaa8;
  if ((v325 & 1) == 0 && __cxa_guard_acquire((__int64)GameData_212eab0) != 0) {
    *v326 = wld_Crc32(0, "LODModule", 9u);
    __cxa_guard_release((__int64)GameData_212eab0);
  }
  v327 = *(_QWORD*)(v323 + 512);
  v328 = v327;
  do {
    if (v328 == *(_QWORD*)(v323 + 504)) {
      goto LABEL_559;
    }
    v329 = *(_DWORD*)(v328 - 16);
    v328 -= 16;
    v327 -= 16;
  } while (v329 != *v326);
  if (*(_QWORD*)(v323 + 512) != v327 && *(_QWORD*)(v327 + 8) != 0) {
    goto LABEL_707;
  }
LABEL_559:
  v330 = *v316;
  if (*v316 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
      *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release((__int64)GameData_212df10);
    }
    v331 = *(_QWORD*)(v330 + 512);
    v332 = v331;
    while (v332 != *(_QWORD*)(v330 + 504)) {
      v333 = *(_DWORD*)(v332 - 16);
      v332 -= 16;
      v331 -= 16;
      if (v333 == *GameData_212df08) {
        if (*(_QWORD*)(v330 + 512) == v331) {
          v330 = 0;
          goto LABEL_584;
        }
        v334 = *(_QWORD*)(v331 + 8);
        if (v334 != 0) {
          v330 = *(_QWORD*)(v334 + 24);
          v335 = *(_QWORD*)(a1 + 392);
          v336 = *(_QWORD*)(a1 + 400);
          if (v336 != 0) {
            goto LABEL_585;
          }
          goto LABEL_577;
        }
        break;
      }
    }
    v330 = 0;
    v335 = *(_QWORD*)(a1 + 392);
    v336 = *(_QWORD*)(a1 + 400);
    if (v336 != 0) {
      goto LABEL_585;
    }
  LABEL_577:
    v346 = *(_DWORD*)(v335 + 11784);
  }
  else {
  LABEL_584:
    v335 = *(_QWORD*)(a1 + 392);
    v336 = *(_QWORD*)(a1 + 400);
    if (v336 == 0) {
      goto LABEL_577;
    }
  LABEL_585:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v336 + 8), 1u,
                              memory_order_relaxed);
    v346 = *(_DWORD*)(v335 + 11784);
    if (atomic_fetch_add((atomic_ullong* volatile)(v336 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v336 + 16LL))(v336);
      std___1___shared_weak_count___release_weak(v336);
    }
  }
  if (*(_WORD*)(**(_QWORD**)(v330 + 168) + 58LL) != 0 && v346 != -1) {
    if (v346 - 9 > 0x19) {
      v350 = gfx_a9c260_ptr[0];
    }
    else if (v346 > 0x21 || ((1LL << v346) & 0x330000000LL) == 0) {
      v350 = gfx_a9c3e0_ptr[0];
    }
    else {
      v350 = gfx_a9c5a0_ptr;
    }
    v460_.v461 = v460_.v460;
    *(_QWORD*)&v449_.v451 = &v449_.v449;
    v460_.v460[0] = (__int64)GameData_2007328;
    v460_.v460[1] = (__int64)v350;
    *(_QWORD*)&v449_.v449 = GameData_2007328;
    *((_QWORD*)&v449_.v449 + 1) = v350;
    GameRoutine_a6b620(&v449_.v449, (_QWORD*)(v330 + 768));
    if ((__int128*)v449_.v451 == &v449_.v449) {
      v351 = 32;
    LABEL_602:
      (*(void (**)(__int64))(*(_QWORD*)v449_.v451 + v351))((__int64)v449_.v451);
    }
    else if ((_QWORD)v449_.v451 != 0) {
      v351 = 40;
      goto LABEL_602;
    }
    if (v460_.v461 == v460_.v460) {
      v352 = 32;
    LABEL_607:
      (*(void (**)(__int64))(*v460_.v461 + v352))((__int64)v460_.v461);
    }
    else if (v460_.v461 != nullptr) {
      v352 = 40;
      goto LABEL_607;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
    *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release((__int64)GameData_212df10);
  }
  v281 = (__int64*)(a1 + 448);
  v353 = *(_QWORD*)(v323 + 512);
  v354 = v353;
  while (v354 != *(_QWORD*)(v323 + 504)) {
    v355 = *(_DWORD*)(v354 - 16);
    v354 -= 16;
    v353 -= 16;
    if (v355 == *GameData_212df08) {
      if (*(_QWORD*)(v323 + 512) != v353) {
        v356 = *(_QWORD*)(v353 + 8);
        goto LABEL_615;
      }
      break;
    }
  }
  v356 = 0;
LABEL_615:
  nn_os_LockMutex((__int64)GameData_212df28);
  v357 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        224, 16, 0);
  v358 = v357;
  *(_DWORD*)(v357 + 17) = 33686018;
  v359 = GameData_212e4f8;
  *(_BYTE*)(v357 + 16) = 0;
  *(_QWORD*)v357 = v359 + 16;
  *(_QWORD*)(v357 + 8) = v323;
  v360 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               40LL);
  *(_QWORD*)(v357 + 24) = *(_QWORD*)(v360 + 16);
  v361 = *(_QWORD*)(v360 + 24);
  *(_QWORD*)(v357 + 32) = v361;
  if (v361 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v361 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_DWORD*)(v357 + 104) = 0;
  *(_QWORD*)(v357 + 88) = 0;
  *(_QWORD*)(v357 + 96) = 0;
  *(_QWORD*)(v357 + 72) = 0;
  *(_QWORD*)(v357 + 80) = 0;
  *(_QWORD*)(v357 + 56) = 0;
  *(_QWORD*)(v357 + 64) = 0;
  *(_QWORD*)(v357 + 40) = 0;
  *(_QWORD*)(v357 + 48) = 0;
  *(_BYTE*)(v357 + 112) = 0;
  *(_BYTE*)(v357 + 116) = 0;
  *(_BYTE*)(v357 + 120) = 0;
  *(_BYTE*)(v357 + 124) = 0;
  *(_BYTE*)(v357 + 128) = 0;
  *(_BYTE*)(v357 + 132) = 0;
  *(_BYTE*)(v357 + 164) = 0;
  *(_QWORD*)(v357 + 168) = 0;
  *(_QWORD*)(v357 + 176) = 0;
  *(_QWORD*)(v357 + 184) = 0;
  *(_QWORD*)(v357 + 192) = 0;
  *(_BYTE*)(v357 + 160) = 0;
  *(_QWORD*)(v357 + 144) = 0;
  *(_QWORD*)(v357 + 152) = 0;
  *(_QWORD*)(v357 + 136) = 0;
  *(_DWORD*)(v357 + 200) = 1065353216;
  *(_QWORD*)(v357 + 208) = 0;
  *(_WORD*)(v357 + 216) = 0;
  LodModule_a97380(v357, v356);
  if ((atomic_load_explicit(v324, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212eab0) != 0) {
    *v326 = wld_Crc32(0, "LODModule", 9u);
    __cxa_guard_release((__int64)GameData_212eab0);
  }
  v362 = *v326;
  v364 = *(_QWORD*)(v323 + 504);
  v363 = *(_QWORD*)(v323 + 512);
  v365 = v363;
  LODWORD(v449_.v449) = v362;
  *((_QWORD*)&v449_.v449 + 1) = v358;
  while (v365 != v364) {
    v366 = *(_DWORD*)(v365 - 16);
    v365 -= 16;
    if (v366 == v362) {
      if ((*(_BYTE*)(v358 + 16) & 1) != 0) {
        goto LABEL_636;
      }
      goto LABEL_630;
    }
  }
  if (v364 == v363 &&
      (unsigned __int64)(*(_QWORD*)(v323 + 520) - v364) <= 0x6F) {
    v367 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    *(_QWORD*)(v323 + 504) = v367;
    *(_QWORD*)(v323 + 512) = v367;
    *(_QWORD*)(v323 + 520) = v367 + 112;
    if (v363 != 0) {
      v368 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v368 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v368, v364);
    }
  }
  GameRoutine_98f140((__int64*)(v323 + 504), &v449_.v449);
  if ((*(_BYTE*)(v358 + 16) & 1) == 0) {
  LABEL_630:
    *(_BYTE*)(v358 + 16) = 1;
    *(_BYTE*)(v358 + 17) &= ~2u;
    *(_BYTE*)(v358 + 18) &= ~2u;
    *(_BYTE*)(v358 + 19) &= ~2u;
    *(_BYTE*)(v358 + 20) &= ~2u;
    v369 = *(_BYTE**)(v358 + 8);
    v369[632] = 0;
    v369[664] = 0;
    v369[696] = 0;
    v369[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v358 + 64LL))(v358);
    v370 = *(_BYTE**)(v358 + 8);
    v371 = v370[300] == 3 && v370[301] == 3;
    if (v371 || v370[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v358 + 72LL))(v358);
    }
  }
LABEL_636:
  v372 = *(__int64**)(v323 + 536);
  v373 = *(_QWORD*)(v323 + 544);
  if ((unsigned __int64)v372 < v373) {
    *v372 = v358;
    v374 = (__int64)(v372 + 1);
    goto LABEL_653;
  }
  v375 = *(_QWORD*)(v323 + 528);
  v376 = (char*)v372 - v375;
  v377 = ((__int64)v372 - v375) >> 3;
  v378 = v377 + 1;
  if ((unsigned __int64)(v377 + 1) >> 61 != 0) {
    goto LABEL_727;
  }
  v379 = v373 - v375;
  if (v379 >> 2 > v378) {
    v378 = v379 >> 2;
  }
  if ((unsigned __int64)v379 >= 0x7FFFFFFFFFFFFFF8LL) {
    v380 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v380 = v378;
  }
  if (v380 == 0) {
    v381 = 0;
    goto LABEL_648;
  }
  if (v380 >> 61 != 0) {
    goto LABEL_728;
  }
  v381 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        8 * v380, 16, 0);
LABEL_648:
  v382 = v381 + 8 * v380;
  v383 = (unsigned __int64)v372 - v375;
  v384 = (__int64)&v376[v381 + -8 * v377];
  *(_QWORD*)&v376[v381] = v358;
  v374 = (__int64)&v376[v381 + 8];
  GameRoutine_1a0b950(v384, v375, v383);
  *(_QWORD*)(v323 + 528) = v384;
  *(_QWORD*)(v323 + 536) = v374;
  *(_QWORD*)(v323 + 544) = v382;
  if (v375 != 0) {
    v385 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v385 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v385,
                                  v375);
  }
  v281 = (__int64*)(a1 + 448);
LABEL_653:
  *(_QWORD*)(v323 + 536) = v374;
  v386 = *(__int64**)(v323 + 560);
  v387 = *(_QWORD*)(v323 + 568);
  if ((unsigned __int64)v386 >= v387) {
    v389 = *(_QWORD*)(v323 + 552);
    v390 = (char*)v386 - v389;
    v391 = ((__int64)v386 - v389) >> 3;
    v392 = v391 + 1;
    if ((unsigned __int64)(v391 + 1) >> 61 == 0) {
      v393 = v387 - v389;
      if (v393 >> 2 > v392) {
        v392 = v393 >> 2;
      }
      if ((unsigned __int64)v393 >= 0x7FFFFFFFFFFFFFF8LL) {
        v394 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v394 = v392;
      }
      if (v394 == 0) {
        v395 = 0;
        goto LABEL_665;
      }
      if (v394 >> 61 == 0) {
        v395 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v394, 16, 0);
      LABEL_665:
        v396 = v395 + 8 * v394;
        v397 = (unsigned __int64)v386 - v389;
        v398 = (__int64)&v390[v395 + -8 * v391];
        *(_QWORD*)&v390[v395] = v358;
        v388 = (__int64)&v390[v395 + 8];
        GameRoutine_1a0b950(v398, v389, v397);
        *(_QWORD*)(v323 + 552) = v398;
        *(_QWORD*)(v323 + 560) = v388;
        *(_QWORD*)(v323 + 568) = v396;
        if (v389 != 0) {
          v399 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v399 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v399, v389);
        }
        v281 = (__int64*)(a1 + 448);
        goto LABEL_670;
      }
    LABEL_728:
      GameRoutine_60a210();
    }
  LABEL_727:
    GameRoutine_98f290();
  }
  *v386 = v358;
  v388 = (__int64)(v386 + 1);
LABEL_670:
  *(_QWORD*)(v323 + 560) = v388;
  GameRoutine_a8c0c0(v323);
  *(_BYTE*)(v323 + 576) = 1;
  nn_os_UnlockMutex((__int64)GameData_212df28);
  v400 = *(_QWORD*)(a1 + 392);
  v401 = *(_QWORD*)(a1 + 400);
  v460_.v460[0] = v358;
  if (v401 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v401 + 8), 1u,
                              memory_order_relaxed);
    *(_DWORD*)(v358 + 212) = *(_DWORD*)(v400 + 11800);
    v402 = *(_QWORD*)(v358 + 56) - *(_QWORD*)(v358 + 48);
    if (v402 != 0) {
      v403 = v402 >> 3;
      v404 = 0;
      v405 = (_QWORD*)GameData_2132398[0];
      do {
        v406 = *(_DWORD*)(v358 + 212);
        v407 = *(_QWORD*)(*(_QWORD*)(v358 + 40) + 56LL) +
               224LL * *(_QWORD*)(*(_QWORD*)(v358 + 48) + 8 * v404);
        *(_QWORD*)(v358 + 96) = v407;
        *(_DWORD*)(v407 + 176) = v406;
        if (*(_BYTE*)(v407 + 186) == 1) {
          v408 = *(_QWORD*)(v407 + 192);
          v409 = *(_QWORD*)(v407 + 200);
          if (v408 != v409) {
            v410 = *(_DWORD*)(*v405 + 112LL * v406 + 64) - 1;
            do {
              if ((*(_BYTE*)(v408 + 22) & 1) == 0) {
                *(_DWORD*)v408 = v410;
                *(_DWORD*)(v408 + 4) = v410;
                *(_DWORD*)(v408 + 8) = 1;
              }
              *(_DWORD*)(v408 + 16) = v410;
              *(_BYTE*)(v408 + 21) = 1;
              v408 += 24;
            } while (v408 != v409);
          }
        }
        ++v404;
        *(_QWORD*)(v358 + 96) = 0;
      } while (v404 != v403);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v401 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v401 + 16LL))(v401);
      std___1___shared_weak_count___release_weak(v401);
    }
  }
  else {
    *(_DWORD*)(v358 + 212) = *(_DWORD*)(v400 + 11800);
    v411 = *(_QWORD*)(v358 + 56) - *(_QWORD*)(v358 + 48);
    if (v411 != 0) {
      v412 = v411 >> 3;
      v413 = 0;
      v414 = (_QWORD*)GameData_2132398[0];
      do {
        v415 = *(_DWORD*)(v358 + 212);
        v416 = *(_QWORD*)(*(_QWORD*)(v358 + 40) + 56LL) +
               224LL * *(_QWORD*)(*(_QWORD*)(v358 + 48) + 8 * v413);
        *(_QWORD*)(v358 + 96) = v416;
        *(_DWORD*)(v416 + 176) = v415;
        if (*(_BYTE*)(v416 + 186) == 1) {
          v417 = *(_QWORD*)(v416 + 192);
          v418 = *(_QWORD*)(v416 + 200);
          if (v417 != v418) {
            v419 = *(_DWORD*)(*v414 + 112LL * v415 + 64) - 1;
            do {
              if ((*(_BYTE*)(v417 + 22) & 1) == 0) {
                *(_DWORD*)v417 = v419;
                *(_DWORD*)(v417 + 4) = v419;
                *(_DWORD*)(v417 + 8) = 1;
              }
              *(_DWORD*)(v417 + 16) = v419;
              *(_BYTE*)(v417 + 21) = 1;
              v417 += 24;
            } while (v417 != v418);
          }
        }
        ++v413;
        *(_QWORD*)(v358 + 96) = 0;
      } while (v413 != v412);
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
    *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release((__int64)GameData_212df10);
  }
  v316 = (__int64*)(a1 + 408);
  v420 = *(_QWORD*)(v323 + 512);
  v421 = v420;
  while (v421 != *(_QWORD*)(v323 + 504)) {
    v422 = *(_DWORD*)(v421 - 16);
    v421 -= 16;
    v420 -= 16;
    if (v422 == *GameData_212df08) {
      if (*(_QWORD*)(v323 + 512) != v420) {
        v423 = *(_QWORD*)(v420 + 8);
        goto LABEL_698;
      }
      break;
    }
  }
  v423 = 0;
LABEL_698:
  v424 = *v281;
  v459 = v423;
  if (v424 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
      *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release((__int64)GameData_212df10);
    }
    v425 = *(_QWORD*)(v424 + 512);
    v426 = v425;
    while (v426 != *(_QWORD*)(v424 + 504)) {
      v427 = *(_DWORD*)(v426 - 16);
      v426 -= 16;
      v425 -= 16;
      if (v427 == *GameData_212df08) {
        if (*(_QWORD*)(v424 + 512) == v425) {
          break;
        }
        v428 = *(_QWORD*)(v425 + 8);
        goto LABEL_706;
      }
    }
  }
  v428 = 0;
LABEL_706:
  v458 = v428;
  v429 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v429[4] = a1;
  *(_QWORD*)&v449_.v451 = v429;
  *v429 = GameData_20073d8;
  v429[1] = &v459;
  v429[2] = &v458;
  v429[3] = v460_.v460;
  CharacterBuilder_1083e90((_QWORD*)a1, (__int64)&v449_.v449);
  (*(void (**)(_QWORD*))(*v429 + 40LL))(v429);
LABEL_707:
  LODWORD(v430) = 0;
  v431 = *v316;
  v432 = *(unsigned int*)(v448 + 32);
  v449_.v452 = 0;
  v449_.v453 = 0;
  *(_QWORD*)&v433 = 0;
  HIDWORD(v430) = (v432 | (unsigned __int64)(v432 << 32)) >> 32;
  *((_QWORD*)&v433 + 1) = (unsigned int)v432;
  v449_.v449 = (unsigned int)v432;
  v449_.v450 = v430;
  v449_.v451 = v433;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
    *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release((__int64)GameData_212df10);
  }
  v434 = *(_QWORD*)(v431 + 512);
  v435 = v434;
  do {
    v436 = *(_DWORD*)(v435 - 16);
    v435 -= 16;
    v434 -= 16;
  } while (v436 != *GameData_212df08);
  nn_g3d_5faea0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v434 + 8) + 24LL) + 168LL));
  v437 = *v281;
  if (*v281 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
      *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release((__int64)GameData_212df10);
    }
    v438 = *(_QWORD*)(v437 + 512);
    v439 = v438;
    do {
      v440 = *(_DWORD*)(v439 - 16);
      v439 -= 16;
      v438 -= 16;
    } while (v440 != *GameData_212df08);
    nn_g3d_5faea0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v438 + 8) + 24LL) + 168LL));
  }
  if ((*(_WORD*)(a1 + 340) & 0xA40) == 0) {
    GameHr_11055e0((_QWORD*)a1);
  }
  GameRoutine_1106eb0(a1);
  GameRoutine_1078e40(*(_QWORD*)(a1 + 72));
  v441 = *(_QWORD*)(a1 + 80);
  v442 = *(_QWORD*)(v441 + 40);
  v444 = *(_QWORD*)(v442 + 392);
  v443 = *(_QWORD*)(v442 + 400);
  if (v443 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v443 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v443 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v443 + 16LL))(v443);
      std___1___shared_weak_count___release_weak(v443);
    }
  }
  *(_QWORD*)(v441 + 56) = *(_QWORD*)(v444 + 11768);
  *(_DWORD*)(v441 + 64) = *(_DWORD*)(v444 + 11776);
  game_character_CharacterFacialController_Startup(*(_QWORD*)(a1 + 88));
  GameRoutine_10e1fe0(*(_QWORD*)(a1 + 104));
  game_character_CharacterLookAt_Startup(*(_QWORD*)(a1 + 112));
  GameRoutine_10953f0(*(_QWORD*)(a1 + 136));
  game_character_10b5460(*(_QWORD*)(a1 + 144));
  *(_DWORD*)(*(_QWORD*)(a1 + 304) + 12LL) = 1065353216;
  v460_.v461 = v460_.v460;
  v460_.v460[0] = (__int64)GameData_2007008;
  v460_.v460[1] = a1;
  CharacterBuilder_1083e90((_QWORD*)a1, (__int64)v460_.v460);
  if (v460_.v461 == v460_.v460) {
    v445 = 32;
  LABEL_724:
    (*(void (**)(__int64))(*v460_.v461 + v445))((__int64)v460_.v461);
  }
  else if (v460_.v461 != nullptr) {
    v445 = 40;
    goto LABEL_724;
  }
  GameRoutine_10e9660((_QWORD*)a1);
}

_QWORD* game_character_10ba960(_QWORD* result)
{
  int v1;
  __int64 v4;
  unsigned __int8 explicit;
  int* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _QWORD* v11;
  char v12;
  _QWORD* v13;
  _BYTE* v14;
  int v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  unsigned __int8 v21;
  int* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int128 v29;
  char v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64** v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  char v43;
  _BYTE* v44;
  void (*v45)(void);
  __int64 v45_this;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v52;
  __int64 v53;
  char v54;
  _BYTE* v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int8 v65;
  int* v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  _BYTE* v74;
  _BYTE* v75;
  bool v76;
  __int64* v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  char* v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  char v108[15];
  struct {
    __int64 (**v109)();
    __int64 v110;
    __int64 v111;
    char gap56_[8];
    __int64 (***v112)();
    char gap72_[8];
    __int64 v113;
    __int64 v114;
    char gap96_[40];
    _QWORD* v115;
    __int64 vars0;
    __int64 vars8;
  } v109_;

  v1 = *(_DWORD*)(result[9] + 120LL);
  if (v1 > -77626399) {
    if (v1 != 1400556095 && v1 != -77626398) {
      return result;
    }
  }
  else if (v1 != -972548316 && v1 != -93581017) {
    return result;
  }
  v4 = result[1];
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212fea0,
                                  memory_order_acquire);
  v6 = GameData_212fe98;
  if ((explicit & 1) == 0) {
    v109_.v115 = result;
    v15 = __cxa_guard_acquire((__int64)GameData_212fea0);
    v6 = GameData_212fe98;
    result = v109_.v115;
    if (v15 != 0) {
      *GameData_212fe98 = wld_Crc32(0, "CharacterDie", 0xCu);
      __cxa_guard_release((__int64)GameData_212fea0);
      v6 = GameData_212fe98;
      result = v109_.v115;
    }
  }
  v7 = *v6;
  v8 = *(_QWORD*)(v4 + 512);
  v9 = v8;
  do {
    if (v9 == *(_QWORD*)(v4 + 504)) {
      goto LABEL_18;
    }
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    v8 -= 16;
  } while (v10 != v7);
  if (*(_QWORD*)(v4 + 512) == v8 || *(_QWORD*)(v8 + 8) == 0) {
  LABEL_18:
    v11 = (_QWORD*)result[14];
    if (*((_BYTE*)v11 + 16) != 0) {
      v12 = *((_BYTE*)v11 + 17);
      *((_BYTE*)v11 + 16) = 0;
      v13 = result;
      *((_BYTE*)v11 + 17) = v12 | 2;
      *((_BYTE*)v11 + 18) |= 2u;
      *((_BYTE*)v11 + 19) |= 2u;
      *((_BYTE*)v11 + 20) |= 2u;
      v14 = (_BYTE*)v11[1];
      v14[632] = 0;
      v14[664] = 0;
      v14[696] = 0;
      v14[728] = 0;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
          *v11 + 72LL))((void*)(v11), v11);
      result = v13;
    }
    *(_DWORD*)(result[11] + 340LL) = -1082130432;
    GameRoutine_11075d0((__int64)result);
    v109_.v113 = v109_.vars0;
    v109_.v114 = v109_.vars8;
    nn_os_LockMutex((__int64)GameData_212df28);
    v16 = (__int64*)fw_memory_g_heap_manager_ptr;
    v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         72, 16, 0);
    GameRoutine_10965c0(v17, v4);
    *(_QWORD*)(v17 + 56) = 0;
    v18 = (__int64*)(v17 + 56);
    *(_QWORD*)(v17 + 64) = 0;
    *(_QWORD*)v17 = game_character_CharacterDie_vtable;
    v19 = *(__int64**)(v17 + 40);
    v20 = v19[51];
    v21 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea08,
                               memory_order_acquire);
    v22 = GameData_212ea00;
    if ((v21 & 1) == 0 && __cxa_guard_acquire((__int64)GameData_212ea08) != 0) {
      *v22 = wld_Crc32(0, "LocatorModule", 0xDu);
      __cxa_guard_release((__int64)GameData_212ea08);
    }
    v23 = *(_QWORD*)(v20 + 512);
    v24 = v23;
    do {
      if (v24 == *(_QWORD*)(v20 + 504)) {
        goto LABEL_38;
      }
      v25 = *(_DWORD*)(v24 - 16);
      v24 -= 16;
      v23 -= 16;
    } while (v25 != *v22);
    if (*(_QWORD*)(v20 + 512) != v23) {
      v26 = *(_QWORD*)(v23 + 8);
      if (v26 != 0) {
        v27 = LocatorModule_a7c540(v26, "Jnt_C_Spine1");
        if (v27 != 0) {
          *(_QWORD*)(v27 + 96) = 0;
          v28 = *(_QWORD*)v27;
          v29 = *(_OWORD*)(v27 + 96);
          *(_DWORD*)(v27 + 128) |= 0x10u;
          v30 = *(_BYTE*)(v27 + 28);
          *(_OWORD*)(v27 + 96) = (unsigned __int64)v29;
          if ((v30 & 1) != 0) {
          LABEL_37:
            *(_BYTE*)(*(_QWORD*)(v28 + 24) + 504LL) = 1;
            goto LABEL_38;
          }
          v31 = *(_QWORD*)(v28 + 24);
          v32 = *(_DWORD*)(v27 + 16);
          v33 = v27;
          v109_.v111 = v27;
          v109_.v109 = GameData_1fc0970;
          v109_.v110 = v28;
          v109_.v112 = &v109_.v109;
          v34 = g3d_a661a0(v31, v32, (__int64)&v109_.v109, 0);
          if (v109_.v112 == &v109_.v109) {
            v35 = 4;
          }
          else {
            if (v109_.v112 == nullptr) {
            LABEL_36:
              *(_DWORD*)(v33 + 24) = v34;
              *(_BYTE*)(v33 + 28) = 1;
              goto LABEL_37;
            }
            v35 = 5;
          }
          ((__int64 (*)(__int64))(*v109_.v112)[v35])((__int64)v109_.v112);
          goto LABEL_36;
        }
      }
    }
  LABEL_38:
    v36 = (__int64**)v19[40];
    v109_.v109 = GameData_20096d0;
    v109_.v110 = v17;
    v109_.v112 = &v109_.v109;
    strcpy(v108, "Signal_Landing");
    Signal_d30a60(v36, v108, 14, (__int64)&v109_.v109);
    if (v109_.v112 == &v109_.v109) {
      v37 = 4;
    }
    else {
      if (v109_.v112 == nullptr) {
        goto LABEL_43;
      }
      v37 = 5;
    }
    ((__int64 (*)(__int64))(*v109_.v112)[v37])((__int64)v109_.v112);
  LABEL_43:
    v38 = *(_QWORD*)(v17 + 40);
    v39 = *(_QWORD*)(v38 + 392);
    v40 = *(_QWORD*)(v38 + 400);
    if (v40 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                                memory_order_relaxed);
      v41 = *(_DWORD*)(v39 + 11784);
      if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
        std___1___shared_weak_count___release_weak(v40);
      }
      if (v41 == 32) {
        goto LABEL_47;
      }
    }
    else {
      v41 = *(_DWORD*)(v39 + 11784);
      if (v41 == 32) {
      LABEL_47:
        v42 = v19[13];
        if (*(_BYTE*)(v42 + 16) == 0) {
          goto LABEL_79;
        }
        v43 = *(_BYTE*)(v42 + 17);
        *(_BYTE*)(v42 + 16) = 0;
        *(_BYTE*)(v42 + 17) = v43 | 2;
        *(_BYTE*)(v42 + 18) |= 2u;
        *(_BYTE*)(v42 + 19) |= 2u;
        *(_BYTE*)(v42 + 20) |= 2u;
        v44 = *(_BYTE**)(v42 + 8);
        v44[632] = 0;
        v44[664] = 0;
        v44[696] = 0;
        v44[728] = 0;
        v45 = *(void (**)(void))(*(_QWORD*)v42 + 72LL);
        v45_this = (__int64)v42;
        goto LABEL_78;
      }
    }
    if (v41 == 7) {
      v46 = 0;
    }
    else {
      v46 = 3;
    }
    GameRoutine_10792b0(v19[9], v46);
    if (v41 == 8) {
      goto LABEL_79;
    }
    if (v41 == 7) {
      v47 = *(_QWORD*)(*(_QWORD*)(v17 + 40) + 408LL);
      v48 = fw_memory_HeapManager_Allocate(*v16, 208, 16, 0);
      CharacterDie_10bb840(v48, v47);
      v49 = *(_QWORD*)(v48 + 8);
      *(_BYTE*)(v48 + 100) = 0;
      *(_QWORD*)(v48 + 112) = 0;
      *(_QWORD*)(v48 + 120) = 0;
      *(_QWORD*)(v48 + 128) = 0;
      *(_QWORD*)v48 = game_character_ChariotCrew_vtable;
      *(_QWORD*)(v48 + 144) = 0;
      *(_QWORD*)(v48 + 152) = 0;
      *(_QWORD*)(v48 + 160) = 0;
      *(_BYTE*)(v48 + 196) = 0;
      *(_QWORD*)(v48 + 176) = 0;
      *(_QWORD*)(v48 + 184) = 0;
      *(_BYTE*)(v48 + 192) = 0;
      v109_.v112 = &v109_.v109;
      *(_DWORD*)(v48 + 104) = -1;
      *(_DWORD*)(v48 + 136) = -1;
      v109_.v109 = GameData_20098a8;
      v109_.v110 = v48;
      game_109d2e0(v48 + 104, v49, "Loc_C_Trans", (__int64)&v109_.v109, 0);
      if (v109_.v112 == &v109_.v109) {
        v50 = 4;
      }
      else {
        if (v109_.v112 == nullptr) {
          goto LABEL_71;
        }
        v50 = 5;
      }
      ((__int64 (*)(__int64))(*v109_.v112)[v50])((__int64)v109_.v112);
    LABEL_71:
      v63 = *(_QWORD*)(v48 + 8);
      v109_.v109 = GameData_2009928;
      v109_.v110 = v48;
      v109_.v112 = &v109_.v109;
      game_109d2e0(v48 + 136, v63, "Jnt_C_Hip", (__int64)&v109_.v109, 0);
      if (v109_.v112 == &v109_.v109) {
        v64 = 4;
      }
      else {
        if (v109_.v112 == nullptr) {
          goto LABEL_76;
        }
        v64 = 5;
      }
      ((__int64 (*)(__int64))(*v109_.v112)[v64])((__int64)v109_.v112);
    LABEL_76:
      v62 = *v18;
      *v18 = v48;
      if (v62 == 0) {
        goto LABEL_79;
      }
      goto LABEL_77;
    }
    if (v41 <= 0x21 && ((1LL << v41) & 0x280100030LL) != 0) {
      v52 = *(_QWORD**)(v17 + 40);
      v53 = v52[13];
      if (*(_BYTE*)(v53 + 16) != 0) {
        v54 = *(_BYTE*)(v53 + 17);
        *(_BYTE*)(v53 + 16) = 0;
        *(_BYTE*)(v53 + 17) = v54 | 2;
        *(_BYTE*)(v53 + 18) |= 2u;
        *(_BYTE*)(v53 + 19) |= 2u;
        *(_BYTE*)(v53 + 20) |= 2u;
        v55 = *(_BYTE**)(v53 + 8);
        v55[632] = 0;
        v55[664] = 0;
        v55[696] = 0;
        v55[728] = 0;
        (*(void (**)(__int64))(*(_QWORD*)v53 + 72LL))(v53);
      }
      v56 = v52[51];
      v57 = *(_DWORD*)(v52[9] + 120LL);
      v58 = fw_memory_HeapManager_Allocate(*v16, 128, 16, 0);
      CharacterDie_10bb840(v58, v56);
      v59 = *v18;
      *(_BYTE*)(v58 + 100) = 0;
      *(_DWORD*)(v58 + 112) = 0;
      *(_QWORD*)v58 = game_character_FallingBody_vtable;
      *v18 = v58;
      *(_DWORD*)(v58 + 104) = -971227136;
      *(_DWORD*)(v58 + 108) = v57;
      if (v59 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v59 + 8LL))(v59);
      }
      v60 = v52[56];
      if (v60 == 0) {
        goto LABEL_79;
      }
      v61 = fw_memory_HeapManager_Allocate(*v16, 128, 16, 0);
      CharacterDie_10bb840(v61, v60);
      v62 = *(_QWORD*)(v17 + 64);
      *(_QWORD*)v61 = game_character_FallingBody_vtable;
      *(_BYTE*)(v61 + 100) = 0;
      *(_DWORD*)(v61 + 112) = 0;
      *(_QWORD*)(v17 + 64) = v61;
      *(_DWORD*)(v61 + 104) = -971227136;
      *(_DWORD*)(v61 + 108) = v57;
      if (v62 == 0) {
        goto LABEL_79;
      }
      goto LABEL_77;
    }
    if (v41 - 2 > 6) {
      v105 = *(_QWORD*)(v17 + 40);
      wld_d28c30(*(_QWORD*)(v105 + 104), 0);
      v106 = *(_QWORD*)(v105 + 408);
      v107 = fw_memory_HeapManager_Allocate(*v16, 112, 16, 0);
      CharacterDie_10bb840(v107, v106);
      v62 = *(_QWORD*)(v17 + 56);
      *(_BYTE*)(v107 + 100) = 0;
      *(_QWORD*)(v17 + 56) = v107;
      *(_QWORD*)v107 = game_character_TumbleHuman_vtable;
      if (v62 != 0) {
      LABEL_77:
        v45 = *(void (**)(void))(*(_QWORD*)v62 + 8LL);
        v45_this = (__int64)v62;
      LABEL_78:
        ((void (*)(__int64))v45)(v45_this);
      }
    }
    else {
      GameRoutine_10ba7a0((_QWORD*)v17);
    }
  LABEL_79:
    v65 = atomic_load_explicit((atomic_uchar* volatile)GameData_212fea0,
                               memory_order_acquire);
    v66 = GameData_212fe98;
    if ((v65 & 1) == 0 && __cxa_guard_acquire((__int64)GameData_212fea0) != 0) {
      *v66 = wld_Crc32(0, "CharacterDie", 0xCu);
      __cxa_guard_release((__int64)GameData_212fea0);
    }
    v67 = *v66;
    v68 = *(_QWORD*)(v4 + 504);
    v69 = *(_QWORD*)(v4 + 512);
    v70 = v69;
    LODWORD(v109_.v109) = v67;
    v109_.v110 = v17;
    while (v70 != v68) {
      v71 = *(_DWORD*)(v70 - 16);
      v70 -= 16;
      if (v71 == v67) {
        if ((*(_BYTE*)(v17 + 16) & 1) != 0) {
          goto LABEL_98;
        }
        goto LABEL_92;
      }
    }
    if (v68 == v69 && (unsigned __int64)(*(_QWORD*)(v4 + 520) - v68) <= 0x6F) {
      v72 = fw_memory_HeapManager_Allocate(*v16, 112, 16, 0);
      *(_QWORD*)(v4 + 504) = v72;
      *(_QWORD*)(v4 + 512) = v72;
      *(_QWORD*)(v4 + 520) = v72 + 112;
      if (v69 != 0) {
        v73 = 128;
        if (*(_QWORD*)(*v16 + 200) == 0) {
          v73 = 56;
        }
        nn_mem_StandardAllocator_Free(*v16 + v73, v68);
      }
    }
    GameRoutine_98f140((__int64*)(v4 + 504), &v109_.v109);
    if ((*(_BYTE*)(v17 + 16) & 1) == 0) {
    LABEL_92:
      *(_BYTE*)(v17 + 16) = 1;
      *(_BYTE*)(v17 + 17) &= ~2u;
      *(_BYTE*)(v17 + 18) &= ~2u;
      *(_BYTE*)(v17 + 19) &= ~2u;
      *(_BYTE*)(v17 + 20) &= ~2u;
      v74 = *(_BYTE**)(v17 + 8);
      v74[632] = 0;
      v74[664] = 0;
      v74[696] = 0;
      v74[728] = 0;
      (*(void (**)(__int64))(*(_QWORD*)v17 + 64LL))(v17);
      v75 = *(_BYTE**)(v17 + 8);
      v76 = v75[300] == 3 && v75[301] == 3;
      if (v76 || v75[302] == 1) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 72LL))(v17);
      }
    }
  LABEL_98:
    v77 = *(__int64**)(v4 + 536);
    v78 = *(_QWORD*)(v4 + 544);
    if ((unsigned __int64)v77 >= v78) {
      v80 = *(_QWORD*)(v4 + 528);
      v81 = (char*)v77 - v80;
      v82 = ((__int64)v77 - v80) >> 3;
      v83 = v82 + 1;
      if ((unsigned __int64)(v82 + 1) >> 61 != 0) {
        goto LABEL_139;
      }
      v84 = v78 - v80;
      if (v84 >> 2 > v83) {
        v83 = v84 >> 2;
      }
      if ((unsigned __int64)v84 >= 0x7FFFFFFFFFFFFFF8LL) {
        v85 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v85 = v83;
      }
      if (v85 != 0) {
        if (v85 >> 61 != 0) {
          goto LABEL_140;
        }
        v86 = fw_memory_HeapManager_Allocate(*v16, 8 * v85, 16, 0);
      }
      else {
        v86 = 0;
      }
      v87 = v86 + 8 * v85;
      v88 = (unsigned __int64)v77 - v80;
      v89 = (__int64)&v81[v86 + -8 * v82];
      *(_QWORD*)&v81[v86] = v17;
      v79 = (__int64)&v81[v86 + 8];
      memcpy(v89, v80, v88);
      *(_QWORD*)(v4 + 528) = v89;
      *(_QWORD*)(v4 + 536) = v79;
      *(_QWORD*)(v4 + 544) = v87;
      if (v80 != 0) {
        v90 = 128;
        if (*(_QWORD*)(*v16 + 200) == 0) {
          v90 = 56;
        }
        nn_mem_StandardAllocator_Free(*v16 + v90, v80);
      }
    }
    else {
      *v77 = v17;
      v79 = (__int64)(v77 + 1);
    }
    *(_QWORD*)(v4 + 536) = v79;
    v91 = *(__int64**)(v4 + 560);
    v92 = *(_QWORD*)(v4 + 568);
    if ((unsigned __int64)v91 < v92) {
      *v91 = v17;
      v93 = (__int64)(v91 + 1);
    LABEL_130:
      *(_QWORD*)(v4 + 560) = v93;
      GameRoutine_a8c0c0(v4);
      *(_BYTE*)(v4 + 576) = 1;
      nn_os_UnlockMutex((__int64)GameData_212df28);
      return (_QWORD*)v17;
    }
    v94 = *(_QWORD*)(v4 + 552);
    v95 = (char*)v91 - v94;
    v96 = ((__int64)v91 - v94) >> 3;
    v97 = v96 + 1;
    if ((unsigned __int64)(v96 + 1) >> 61 == 0) {
      v98 = v92 - v94;
      if (v98 >> 2 > v97) {
        v97 = v98 >> 2;
      }
      if ((unsigned __int64)v98 >= 0x7FFFFFFFFFFFFFF8LL) {
        v99 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v99 = v97;
      }
      if (v99 == 0) {
        v100 = 0;
      LABEL_126:
        v101 = v100 + 8 * v99;
        v102 = (unsigned __int64)v91 - v94;
        v103 = (__int64)&v95[v100 + -8 * v96];
        *(_QWORD*)&v95[v100] = v17;
        v93 = (__int64)&v95[v100 + 8];
        memcpy(v103, v94, v102);
        *(_QWORD*)(v4 + 552) = v103;
        *(_QWORD*)(v4 + 560) = v93;
        *(_QWORD*)(v4 + 568) = v101;
        if (v94 != 0) {
          v104 = 128;
          if (*(_QWORD*)(*v16 + 200) == 0) {
            v104 = 56;
          }
          nn_mem_StandardAllocator_Free(*v16 + v104, v94);
        }
        goto LABEL_130;
      }
      if (v99 >> 61 == 0) {
        v100 = fw_memory_HeapManager_Allocate(*v16, 8 * v99, 16, 0);
        goto LABEL_126;
      }
    LABEL_140:
      GameRoutine_60a210();
    }
  LABEL_139:
    GameRoutine_98f290();
  }
  return result;
}

void game_character_10e2d30(float32x4_t* a1)
{
  float32x4_t* v1;
  unsigned __int32 v2;
  float32x4_t v3;
  float32x4_t v4;
  float32x4_t v5;
  int8x16_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  int8x16_t v10;
  float32x4_t v11;
  float v12;
  float v13;
  double v14;
  double v15;
  double v16;
  double v17;
  double v18;
  double v19;
  double v20;
  double v21;
  double v22;
  float v23;
  float v24;
  float v25;
  float v26;
  unsigned __int32 v30;

  if (LANES128(a1[4]).n128_f32[0] > 0x0.0p+0f) {
    {
      v1 = (float32x4_t*)LANES128(*(a1)).n128_u64[1];
      __asm__ volatile("" ::"r"(v1));
    }
    {
      v2 = LANES128(a1[9]).n128_u32[1];
      __asm__ volatile("" ::"r"(v2));
    }
    {
      v3 = v1[19];
      __asm__ volatile("" ::"w"(v3));
    }
    v4 = v3;
    LANES128(v4).n128_u32[1] = v2;
    v5 = vsubq_f32(v3, v4);
    v6 = vmulq_f32(v5, v5);
    LANES128(v6).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v1[19]).n128_u32[0] = LANES128(v3).n128_u32[0];
      LANES128(v1[19]).n128_u32[1] = v2;
      {
        v7 = v1[19];
        __asm__ volatile("" ::"w"(v7));
      }
      LANES128(v1[18]).n128_u32[2] |= 1u;
      LANES128(v7).n128_u64[1] = LANES128(v3).n128_u32[2];
      v1[19] = v7;
      {
        v1 = (float32x4_t*)LANES128(*(a1)).n128_u64[1];
        __asm__ volatile("" ::"r"(v1));
      }
    }
    {
      v8 = a1[10];
      __asm__ volatile("" ::"w"(v8));
    }
    v9 = vsubq_f32(v1[20], v8);
    v10 = vmulq_f32(v9, v9);
    LANES128(v10).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v1[20]).n128_u32[0] = LANES128(v8).n128_u32[0];
      LANES128(v1[20]).n128_u32[1] = LANES128(a1[10]).n128_u32[1];
      {
        v11 = v1[20];
        __asm__ volatile("" ::"w"(v11));
      }
      LANES128(v11).n128_u64[1] = LANES128(a1[10]).n128_u32[2];
      v1[20] = v11;
      {
        v12 = LANES128(a1[10]).n128_f32[1];
        __asm__ volatile("" ::"w"(v12));
      }
      {
        v13 = LANES128(a1[10]).n128_f32[0];
        __asm__ volatile("" ::"w"(v13));
      }
      {
        v14 = LANES128(a1[10]).n128_f32[2] * 0x1.0000000000000p-1;
        __asm__ volatile("" ::"w"(v14));
      }
      v15 = GameRoutine_1a09f80(v14);
      v16 = GameRoutine_1a09f70(v14);
      v17 = v13 * 0x1.0000000000000p-1;
      v18 = GameRoutine_1a09f80(v17);
      v19 = GameRoutine_1a09f70(v17);
      v20 = v12 * 0x1.0000000000000p-1;
      v21 = GameRoutine_1a09f80(v20);
      v22 = GameRoutine_1a09f70(v20);
      v23 = v15 * v19 * v21 - PSEUDO_UNFUSED(v22 * (v16 * v18));
      v24 = PSEUDO_UNFUSED(v16 * v19 * v21) + PSEUDO_UNFUSED(v15 * v18) * v22;
      v25 = PSEUDO_UNFUSED(v16 * v19 * v22) + PSEUDO_UNFUSED(v15 * v18) * v21;
      v26 = v16 * v18 * v21 - PSEUDO_UNFUSED(v22 * (v15 * v19));
      if (COERCE_FLOAT(*(_OWORD*)&v1[21]) != v23 ||
          COERCE_FLOAT(DWORDn(LANES128(v1[21]).n128_u64[0],
                              sizeof(LANES128(v1[21]).n128_u64[0]) / 4 - 1)) !=
              v24 ||
          COERCE_FLOAT(LANES128(v1[21]).n128_u64[1]) != v26 ||
          COERCE_FLOAT(DWORDn(*(_OWORD*)&v1[21],
                              sizeof(*(_OWORD*)&v1[21]) / 4 - 1)) != v25) {
        {
          v30 = LANES128(v1[18]).n128_u32[2];
          __asm__ volatile("" ::"r"(v30));
        }
        LANES128(v1[21]).n128_f32[0] = v23;
        LANES128(v1[21]).n128_f32[1] = v24;
        LANES128(v1[21]).n128_f32[2] = v26;
        LANES128(v1[21]).n128_f32[3] = v25;
        LANES128(v1[18]).n128_u32[2] = v30 | 1;
      }
    }
  }
}

void game_character_10fbc10(float32x4_t* a1)
{
  unsigned __int64 v1;
  __int64 v3;
  float32x4_t* v4;
  __int64 v5;
  float v6;
  int16x4_t v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  _QWORD* v13;
  int8x16_t v14;
  unsigned __int32 v15;
  int8x16_t v16;
  unsigned __int32 v17;
  int8x16_t v18;
  unsigned __int32 v19;
  long double v20;
  unsigned __int32 v21;
  float v22;
  long double v23;
  unsigned __int64 v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  int v50;
  int8x16_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float v55;
  float v56;
  float32x4_t v57;
  bool v58;
  _BOOL4 v59;
  float v60;
  float v61;
  int8x16_t v62;
  unsigned __int32 v63;
  int8x16_t v64;
  float32x4_t v65;
  float32x4_t v66;
  int8x16_t v67;
  long double v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  __int64 v75;
  int v76;
  __int64 v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float32x4_t v84;
  float v85;
  float v86;
  float* v87;
  float32x4_t v88;
  float32x4_t v89;
  int8x16_t v90;
  float v91;
  __int128 v92;
  double v93;
  double v94;
  double v95;
  double v96;
  double v97;
  double v98;
  double v99;
  double v100;
  __int128 v101;
  float v102;
  float v103;
  float v104;
  float v105;
  int v106;
  float v107;
  int v108;
  int8x16_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  int8x16_t v113;
  float32x4_t v114;
  int8x16_t v115;
  float v116;
  float v117;
  int8x16_t v118;
  float v119;
  float v120;
  float v121;
  float32x4_t v122;
  int8x16_t v123;
  int8x16_t v124;
  float v125;
  float v126;
  float32x4_t v127;
  float32x4_t v128;
  int8x16_t v129;
  __int128 v130;
  float32x4_t v131;
  int8x16_t v132;
  float32x4_t v133;
  int8x16_t v134;
  float32x4_t v135;
  int8x16_t v136;
  int8x16_t v137;
  float v138;
  float32x4_t v139;
  float32x4_t v140;
  float v141;
  float32x4_t v142;
  __int128 v143;
  float v144;
  float32x4_t v145;
  float v146;
  int8x16_t v147;
  int8x16_t v148;
  float32x4_t v149;
  float32x4_t v150[2];
  float v151;
  float v152;

  v1 = LANES128(a1[1]).n128_u64[1];
  if (v1 == 0) {
    return;
  }
  v3 = GameData_212d270;
  v4 = *(float32x4_t**)(v1 + 8);
  v5 = *(_QWORD*)GameData_212d270;
  v6 = *(float*)(*(_QWORD*)GameData_212d270 + 284LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_alt1(&GameData_21a6130) != 0) {
    v75 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v75;
    __cxa_guard_release_alt1(&GameData_21a6130);
  }
  LANES64(v7).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(v4[19],
                                     COERCE_AS(float32x4_t, GameData_21a6120))))
          .n64_u64[0];
  if ((LANES64(v7).n64_u8[0] & 1) != 0 && (LANES64(v7).n64_u8[2] & 1) != 0 &&
      (LANES64(v7).n64_u8[4] & 1) != 0) {
    LANES128(a1[3]).n128_u8[9] = 1;
    return;
  }
  if (LANES128(a1[3]).n128_u8[9] == 1) {
    LANES128(a1[3]).n128_u8[9] = 0;
    v8 = 0x1.9000000000000p+6;
  }
  else {
    v8 = LANES128(a1[2]).n128_f32[0];
  }
  v9 = *(_QWORD*)(v1 + 8);
  v10 = 1.0;
  v11 = *(float*)(LANES128(*(a1)).n128_u64[1] + 8);
  v143 = *(_OWORD*)(*(_QWORD*)(LANES128(a1[1]).n128_u64[1] + 104) + 188LL);
  v147 = *(int8x16_t*)(v9 + 304);
  if (v8 < 1.0) {
    v12 = 0.0;
    v13 = *(_QWORD**)(LANES128(a1[2]).n128_u64[1] + 80);
    v14 = vsubq_f32(a1[11], *(float32x4_t*)(v13[10] + 48LL));
    v15 = LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u32[0];
    LANES128(v14).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, v15),
                         COERCE_AS(float32x2_t, v15)),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v14).n128_u32[0]))))
            .n64_u64[0];
    v16 = vsubq_f32(a1[12], *(float32x4_t*)(v13[34] + 48LL));
    v17 = LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u32[0];
    LANES128(v16).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, v17),
                         COERCE_AS(float32x2_t, v17)),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v16).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v16).n128_u32[0]))))
            .n64_u64[0];
    LANES128(v14).n128_f32[0] =
        (float)(LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                    .n64_f32[0] +
                0.0) +
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
            .n64_f32[0];
    v18 = vsubq_f32(a1[13], *(float32x4_t*)(v13[58] + 48LL));
    v19 = LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u32[0];
    LANES128(v18).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, v19),
                         COERCE_AS(float32x2_t, v19)),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u32[0]))))
            .n64_u64[0];
    LANES128(v14).n128_f32[0] =
        LANES128(v14).n128_f32[0] +
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
            .n64_f32[0];
    v20 =
        COERCE_LONG_DOUBLE(vsubq_f32(a1[14], *(float32x4_t*)(v13[82] + 48LL)));
    v21 = LANES128_OF(vextq_s8(*(int8x16_t*)&v20, *(int8x16_t*)&v20, 8u))
              .n128_u32[0];
    *(float32x2_t*)&v20 = vadd_f32(
        vmul_f32(COERCE_AS(float32x2_t, v21), COERCE_AS(float32x2_t, v21)),
        vmul_f32(COERCE_AS(float32x2_t, LODWORD(v20)),
                 COERCE_AS(float32x2_t, LODWORD(v20))));
    *(float32x2_t*)&v20 = vpadd_f32(*(float32x2_t*)&v20, *(float32x2_t*)&v20);
    v22 = sqrtf(LANES128(v14).n128_f32[0] + *(float*)&v20);
    *(float*)&v20 = v22;
    *(float*)&v23 = GameRoutine_10a00a0(*(float*)(*(_QWORD*)v3 + 292LL), v20,
                                        *(float*)(*(_QWORD*)v3 + 296LL));
    *(float*)&v23 = *(float*)&v23 * *(float*)&v23;
    if (!(*(float*)&v23 <= 0.0)) {
      v12 = 1.0;
      if (!(*(float*)&v23 >= 1.0)) {
        v12 = 0.0;
        if (!(v8 <= 0.0)) {
          *(float*)&v23 = 1.0 - *(float*)&v23;
          v12 = 1.0 - GameRoutine_1a0a550(v23, v8 * 0x1.df851e0000000p+4);
        }
      }
    }
    if (!((float)((float)(v22 * v12) + 0.0) > 1.0)) {
      v10 = (float)(v22 * v12) + 0.0;
    }
    else {
      v10 = 1.0;
    }
  }
  v141 = v10;
  if (*(_BYTE*)(v5 + 288) != 0) {
    v24 = 3;
  }
  else {
    v24 = 1;
  }
  v25 = vmlaq_n_f32(
      a1[11],
      vsubq_f32(
          *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(LANES128(a1[2]).n128_u64[1] +
                                                80) +
                                     80LL) +
                          48LL),
          a1[11]),
      v10);
  LANES128(a1[11]).n128_u64[0] = LANES128(v25).n128_u64[0];
  v26 = a1[11];
  LANES128(v26).n128_u64[1] = LANES128(v25).n128_u32[2];
  v27 = a1[7];
  a1[11] = v26;
  v28 =
      vaddq_f32(vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(*(float32x4_t*)(*(_QWORD*)(v1 + 8) + 432LL),
                                    LANES128(v27).n128_f32[0]),
                        *(float32x4_t*)(*(_QWORD*)(v1 + 8) + 448LL),
                        COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]), 1),
                    *(float32x4_t*)(*(_QWORD*)(v1 + 8) + 464LL), v27, 2),
                *(float32x4_t*)(*(_QWORD*)(v1 + 8) + 480LL));
  v29 = vaddq_f32(v28, vmulq_n_f32(vsubq_f32(v26, v28), *(float*)&v143));
  v149 = vaddq_f32(v29, COERCE_AS(float32x4_t, GameData_1a831c0));
  v148 = vaddq_f32(v29, COERCE_AS(float32x4_t, GameData_1a829a0));
  game_character_1085da0((void*)(v150), v1 + 160, &v149, &v148, v24, v6,
                         -0x1.0000000000000p-3);
  v30 = v150[0];
  LANES128(v31).n128_u32[0] = -1027080192;
  v139 = v31;
  LANES128(v30).n128_u32[3] = 0;
  v135 = v30;
  v137 = vbslq_s8(
      vdupq_lane_s32(
          COERCE_AS(
              int32x2_t,
              LANES128_OF(vmvnq_s8(vcgeq_f32(
                              v31, vdupq_lane_s32(
                                       COERCE_AS(int32x2_t,
                                                 LANES128(v150[0]).n128_u64[0]),
                                       1))))
                  .n128_u64[0]),
          0),
      v150[0], v147);
  v32 = vmlaq_n_f32(
      a1[12],
      vsubq_f32(
          *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(LANES128(a1[2]).n128_u64[1] +
                                                80) +
                                     272LL) +
                          48LL),
          a1[12]),
      v141);
  LANES128(a1[12]).n128_u64[0] = LANES128(v32).n128_u64[0];
  v33 = a1[12];
  LANES128(v33).n128_u64[1] = LANES128(v32).n128_u32[2];
  v34 = a1[8];
  a1[12] = v33;
  v35 =
      vaddq_f32(vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(*(float32x4_t*)(*(_QWORD*)(v1 + 8) + 432LL),
                                    LANES128(v34).n128_f32[0]),
                        *(float32x4_t*)(*(_QWORD*)(v1 + 8) + 448LL),
                        COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]), 1),
                    *(float32x4_t*)(*(_QWORD*)(v1 + 8) + 464LL), v34, 2),
                *(float32x4_t*)(*(_QWORD*)(v1 + 8) + 480LL));
  v36 = vaddq_f32(v35, vmulq_n_f32(vsubq_f32(v33, v35), *(float*)&v143));
  v149 = vaddq_f32(v36, COERCE_AS(float32x4_t, GameData_1a831c0));
  v148 = vaddq_f32(v36, COERCE_AS(float32x4_t, GameData_1a829a0));
  game_character_1085da0((void*)(v150), v1 + 160, &v149, &v148, v24, v6,
                         -0x1.0000000000000p-3);
  v37 = v150[0];
  LANES128(v37).n128_u32[3] = 0;
  v133 = v37;
  v134 = vbslq_s8(
      vdupq_lane_s32(
          COERCE_AS(int32x2_t,
                    LANES128_OF(
                        vmvnq_s8(vcgeq_f32(
                            v139, vdupq_lane_s32(
                                      COERCE_AS(int32x2_t,
                                                LANES128(v150[0]).n128_u64[0]),
                                      1))))
                        .n128_u64[0]),
          0),
      v150[0], v147);
  v38 = vmlaq_n_f32(
      a1[13],
      vsubq_f32(
          *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(LANES128(a1[2]).n128_u64[1] +
                                                80) +
                                     464LL) +
                          48LL),
          a1[13]),
      v141);
  LANES128(a1[13]).n128_u64[0] = LANES128(v38).n128_u64[0];
  v39 = a1[13];
  LANES128(v39).n128_u64[1] = LANES128(v38).n128_u32[2];
  v40 = a1[9];
  a1[13] = v39;
  v41 =
      vaddq_f32(vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(*(float32x4_t*)(*(_QWORD*)(v1 + 8) + 432LL),
                                    LANES128(v40).n128_f32[0]),
                        *(float32x4_t*)(*(_QWORD*)(v1 + 8) + 448LL),
                        COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]), 1),
                    *(float32x4_t*)(*(_QWORD*)(v1 + 8) + 464LL), v40, 2),
                *(float32x4_t*)(*(_QWORD*)(v1 + 8) + 480LL));
  v42 = vaddq_f32(v41, vmulq_n_f32(vsubq_f32(v39, v41), *(float*)&v143));
  v149 = vaddq_f32(v42, COERCE_AS(float32x4_t, GameData_1a831c0));
  v148 = vaddq_f32(v42, COERCE_AS(float32x4_t, GameData_1a829a0));
  game_character_1085da0((void*)(v150), v1 + 160, &v149, &v148, v24, v6,
                         -0x1.0000000000000p-3);
  v43 = v150[0];
  LANES128(v43).n128_u32[3] = 0;
  v131 = v43;
  v132 = vbslq_s8(
      vdupq_lane_s32(
          COERCE_AS(int32x2_t,
                    LANES128_OF(
                        vmvnq_s8(vcgeq_f32(
                            v139, vdupq_lane_s32(
                                      COERCE_AS(int32x2_t,
                                                LANES128(v150[0]).n128_u64[0]),
                                      1))))
                        .n128_u64[0]),
          0),
      v150[0], v147);
  v44 = vmlaq_n_f32(
      a1[14],
      vsubq_f32(
          *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(LANES128(a1[2]).n128_u64[1] +
                                                80) +
                                     656LL) +
                          48LL),
          a1[14]),
      v141);
  LANES128(a1[14]).n128_u64[0] = LANES128(v44).n128_u64[0];
  v45 = a1[14];
  LANES128(v45).n128_u64[1] = LANES128(v44).n128_u32[2];
  v46 = a1[10];
  a1[14] = v45;
  v47 =
      vaddq_f32(vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(*(float32x4_t*)(*(_QWORD*)(v1 + 8) + 432LL),
                                    LANES128(v46).n128_f32[0]),
                        *(float32x4_t*)(*(_QWORD*)(v1 + 8) + 448LL),
                        COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]), 1),
                    *(float32x4_t*)(*(_QWORD*)(v1 + 8) + 464LL), v46, 2),
                *(float32x4_t*)(*(_QWORD*)(v1 + 8) + 480LL));
  v48 = vaddq_f32(v47, vmulq_n_f32(vsubq_f32(v45, v47), *(float*)&v143));
  v149 = vaddq_f32(v48, COERCE_AS(float32x4_t, GameData_1a831c0));
  v148 = vaddq_f32(v48, COERCE_AS(float32x4_t, GameData_1a829a0));
  game_character_1085da0((void*)(v150), v1 + 160, &v149, &v148, v24, v6,
                         -0x1.0000000000000p-3);
  v49 = v150[0];
  v50 = LANES128(a1[3]).n128_u8[8];
  v51 = vbslq_s8(
      vdupq_lane_s32(
          COERCE_AS(int32x2_t,
                    LANES128_OF(
                        vmvnq_s8(vcgeq_f32(
                            v139, vdupq_lane_s32(
                                      COERCE_AS(int32x2_t,
                                                LANES128(v150[0]).n128_u64[0]),
                                      1))))
                        .n128_u64[0]),
          0),
      v150[0], v147);
  LANES128(v49).n128_u32[3] = 0;
  LANES128(v52).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v52).n128_u64[1] = 0x3F0000003F000000LL;
  v53 = vmulq_f32(vaddq_f32(v135, v133), v52);
  v54 = vmulq_f32(vaddq_f32(v131, v49), v52);
  v55 = LANES128(v137).n128_f32[1];
  if (LANES128(v134).n128_f32[1] >= LANES128(v137).n128_f32[1]) {
    v56 = LANES128(v137).n128_f32[1];
  }
  else {
    v56 = LANES128(v134).n128_f32[1];
  }
  if (LANES128(v137).n128_f32[1] < LANES128(v134).n128_f32[1]) {
    v55 = LANES128(v134).n128_f32[1];
  }
  LANES128(v57).n128_u32[0] = 0;
  LANES128(v57).n128_u32[3] = 0;
  v58 = v50 == 1;
  if (v50 == 1) {
    v59 = LANES128(v132).n128_f32[1] < LANES128(v51).n128_f32[1];
  }
  else {
    v59 = LANES128(v51).n128_f32[1] < LANES128(v132).n128_f32[1];
  }
  if (v58) {
    v60 = v55;
  }
  else {
    v60 = v56;
  }
  if (v59) {
    v61 = LANES128(v51).n128_f32[1];
  }
  else {
    v61 = LANES128(v132).n128_f32[1];
  }
  LANES128(v53).n128_f32[1] = v60;
  LANES128(v54).n128_f32[1] = v61;
  v62 = vsubq_f32(v53, v54);
  v140 = v54;
  v142 = v53;
  v63 = LANES128_OF(vextq_s8(v62, v62, 8u)).n128_u32[0];
  LANES128(v57).n128_u32[1] = LANES128(v62).n128_u32[1];
  LANES128(v62).n128_u64[0] =
      LANES64_OF(
          vadd_f32(vmul_f32(COERCE_AS(float32x2_t, v63),
                            COERCE_AS(float32x2_t, v63)),
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v62).n128_u32[0]),
                            COERCE_AS(float32x2_t, LANES128(v62).n128_u32[0]))))
          .n64_u64[0];
  LANES128(v57).n128_u32[2] =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]))))
          .n64_u32[0];
  v64 = vmulq_f32(v57, v57);
  LANES128(v64).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v64, v64, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
          .n64_u64[0];
  LANES128(v64).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
          .n64_u64[0];
  LANES128(v64).n128_u64[1] = LANES128(v64).n128_u64[0];
  v65 = vrsqrteq_f32(v64);
  v66 = vmulq_f32(v65, vrsqrtsq_f32(v65, vmulq_f32(v64, v65)));
  v67 = vbicq_s8(
      vmulq_f32(v57, vmulq_f32(v66, vrsqrtsq_f32(v66, vmulq_f32(v64, v66)))),
      vceqzq_f32(v64));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0) {
    v144 = v60;
    v136 = v67;
    v138 = v61;
    v76 = __cxa_guard_acquire_alt1(&GameData_21a61b0);
    v67 = v136;
    v61 = v138;
    v60 = v144;
    if (v76 != 0) {
      v77 = *((_QWORD*)GameData_212c560 + 1);
      *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
      *((_QWORD*)&GameData_21a61a0 + 1) = v77;
      __cxa_guard_release_alt1(&GameData_21a61b0);
      v67 = v136;
      v61 = v138;
      v60 = v144;
    }
  }
  v68 = COERCE_LONG_DOUBLE(
      vmulq_f32(v67, COERCE_AS(float32x4_t, GameData_21a61a0)));
  *(float32x2_t*)&v68 = vadd_f32(
      COERCE_AS(float32x2_t,
                LANES128_OF(vextq_s8(*(int8x16_t*)&v68, *(int8x16_t*)&v68, 8u))
                    .n128_u64[0]),
      *(float32x2_t*)&v68);
  *(float32x2_t*)&v68 = vpadd_f32(*(float32x2_t*)&v68, *(float32x2_t*)&v68);
  if (!(*(float*)&v68 <= 1.0)) {
    v69 = 1.0;
  }
  else {
    v69 = *(float*)&v68;
  }
  if (*(float*)&v68 < -1.0) {
    v70 = -1.0;
  }
  else {
    v70 = v69;
  }
  v71 = sqrtf(__builtin_elementwise_fma(-v70, v70, 1.0f));
  if (v70 >= 0.0) {
    v78 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v79 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v80 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    v81 = v70 / v71;
    v82 = v71 / v70;
    v83 =
        0x1.921fb60000000p+0 -
        (float)(v81 *
                (float)((float)((float)((float)((float)(v80 +
                                                        (float)((float)((float)((float)(v79 + (float)((
                                                                                                          float)((float)((float)(v78 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v81 * v81)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                   1)) *
                                                                                                                                               (float)(v81 *
                                                                                                                                                       v81))) *
                                                                                                                         (float)(v81 *
                                                                                                                                 v81)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v81 *
                                                                                                              v81))) *
                                                                                (float)(v81 *
                                                                                        v81)) -
                                                                        *(float*)((char*)((
                                                                                      __int128*)0x10LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                  4)) *
                                                                (float)(v81 *
                                                                        v81))) *
                                                (float)(v81 * v81)) -
                                        *(float*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  12)) *
                                (float)(v81 * v81)) +
                        1.0));
    v73 = v82 *
          (float)((
                      float)((float)((float)((float)(v80 +
                                                     (float)((float)((float)((
                                                                                 float)(v79 + (float)((
                                                                                                          float)((float)((float)(v78 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v82 * v82)) - *((float*)GameData_212c2f0 + 1)) * (float)(v82 * v82))) * (float)(v82 * v82)) - *(float*)((
                                                                                                                                                                                                                                                                                                               char*)((_UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                                                               GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                           4)) *
                                                                                                      (float)(v82 *
                                                                                                              v82))) *
                                                                             (float)(v82 *
                                                                                     v82)) -
                                                                     *(float*)((char*)((
                                                                                   __int128*)0x10LL) +
                                                                               (_QWORD)
                                                                                   GameData_212c2f0 +
                                                                               4)) *
                                                             (float)(v82 *
                                                                     v82))) *
                                             (float)(v82 * v82)) -
                                     *(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c2f0 + 12)) *
                             (float)(v82 * v82)) +
                  1.0);
    if (v70 <= 0x1.6a09e60000000p-1) {
      v73 = v83;
    }
  }
  else if (!(v70 < -0x1.6a09e60000000p-1)) {
    v74 = (float)-v70 / v71;
    v73 = (float)(v74 * (float)((float)((float)-(float)(*(float*)((char*)((
                                                                      __int128*)0x10LL) +
                                                                  (_QWORD)
                                                                      GameData_212c2f0 +
                                                                  12) -
                                                        (float)((
                                                                    float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8) + (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                          (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((
                                                                                                                                                                                                                                                                         float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                                                                                         (_QWORD)
                                                                                                                                                                                                                                                                                                                                                                                             GameData_212c2f0) +
                                                                                                                                                                                                                                                                                                                                                                               (float)((float)-(float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v74 * v74))) * (float)(v74 * v74))) *
                                                                                                                                                                                                                                                                                                                                                                       (float)(v74 *
                                                                                                                                                                                                                                                                                                                                                                               v74))) *
                                                                                                                                                                                                                                                                     (float)(v74 *
                                                                                                                                                                                                                                                                             v74))) *
                                                                                                                                                                                  (float)(v74 *
                                                                                                                                                                                          v74))) *
                                                                                                                                                          (float)(v74 *
                                                                                                                                                                  v74))) *
                                                                (float)(v74 *
                                                                        v74))) *
                                        (float)(v74 * v74)) +
                                1.0)) +
          0x1.921fb60000000p+0;
  }
  else {
    v72 = (float)-v71 / v70;
    v73 = 0x1.921fb60000000p+1 -
          (float)(v72 *
                  (float)((float)((float)-(float)(*(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                            (_QWORD)
                                                                GameData_212c2f0 +
                                                            12) -
                                                  (float)((float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v72 *
                                                                                                                                                                                                                                                                                                                                                                                                v72))) *
                                                                                                                                                                                                                                                                                                       (float)(v72 *
                                                                                                                                                                                                                                                                                                               v72))) *
                                                                                                                                                                                                                                                                                    (float)(v72 *
                                                                                                                                                                                                                                                                                            v72))) *
                                                                                                                                                                                                                                                            (float)(v72 *
                                                                                                                                                                                                                                                                    v72))) *
                                                                                                                                                                         (float)(v72 *
                                                                                                                                                                                 v72))) *
                                                                          (float)(v72 *
                                                                                  v72))) *
                                                          (float)(v72 * v72))) *
                                  (float)(v72 * v72)) +
                          1.0));
  }
  v84 = *(float32x4_t*)(v9 + 320);
  if (v60 > v61) {
    v85 = -v73;
  }
  else {
    v85 = v73;
  }
  LODWORD(v68) = *(_DWORD*)(*(_QWORD*)v3 + 208LL);
  if (*(float*)&v68 <= 0.0) {
    goto LABEL_61;
  }
  if (*(float*)&v68 >= 1.0) {
    v87 = (float*)&a1[3];
    goto LABEL_65;
  }
  if (v8 <= 0.0) {
  LABEL_61:
    v87 = (float*)&a1[3];
    v85 = LANES128(a1[3]).n128_f32[0];
  }
  else {
    v145 = *(float32x4_t*)(v9 + 320);
    *(float*)&v68 = 1.0 - *(float*)&v68;
    v86 = 1.0 - GameRoutine_1a0a550(v68, v8 * 0x1.df851e0000000p+4);
    v87 = (float*)&a1[3];
    if (v86 <= 0.0) {
      v85 = LANES128(a1[3]).n128_f32[0];
    }
    else if (!(v86 >= 1.0)) {
      v85 = LANES128(a1[3]).n128_f32[0] +
            (float)((float)(v85 - LANES128(a1[3]).n128_f32[0]) * v86);
    }
    v84 = v145;
  }
LABEL_65:
  *v87 = v85;
  v88 = v84;
  v146 = LANES128(v84).n128_f32[0] +
         (float)((float)(v85 - LANES128(v84).n128_f32[0]) * v11);
  LANES128(v88).n128_f32[0] = v146;
  v89 = vsubq_f32(*(float32x4_t*)(v9 + 320), v88);
  v90 = vmulq_f32(v89, v89);
  LANES128(v90).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v90, v90, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])))
          .n64_u64[0];
  v151 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])))
            .n64_f32[0];
  if (__builtin_islessgreater(v151, 0.0f)) {
    v91 = LANES128(v84).n128_f32[1];
    *(float*)(v9 + 320) =
        LANES128(v84).n128_f32[0] +
        (float)((float)(v85 - LANES128(v84).n128_f32[0]) * v11);
    *(_DWORD*)(v9 + 324) = LANES128(v84).n128_u32[1];
    v92 = *(_OWORD*)(v9 + 320);
    *((_QWORD*)&v92 + 1) = LANES128(v84).n128_u32[2];
    v93 = LANES128(v84).n128_f32[2] * 0x1.0000000000000p-1;
    *(_OWORD*)(v9 + 320) = v92;
    v94 = GameRoutine_1a09f80(v93);
    v95 = GameRoutine_1a09f70(v93);
    v96 = GameRoutine_1a09f80(v146 * 0x1.0000000000000p-1);
    v97 = GameRoutine_1a09f70(v146 * 0x1.0000000000000p-1);
    v98 = v91 * 0x1.0000000000000p-1;
    v99 = GameRoutine_1a09f80(v98);
    v100 = GameRoutine_1a09f70(v98);
    v101 = *(_OWORD*)(v9 + 336);
    v102 = v94 * v97 * v99 - v100 * (v95 * v96);
    v103 = v95 * v97 * v100 + v94 * v96 * v99;
    v104 = v95 * v97 * v99 + v94 * v96 * v100;
    v105 = v95 * v96 * v99 - v100 * (v94 * v97);
    if (*(float*)&v101 != v102 || *((float*)&v101 + 1) != v104 ||
        *((float*)&v101 + 2) != v105 || *((float*)&v101 + 3) != v103) {
      v106 = *(_DWORD*)(v9 + 296);
      *(float*)(v9 + 336) = v102;
      *(float*)(v9 + 340) = v104;
      *(float*)(v9 + 344) = v105;
      *(float*)(v9 + 348) = v103;
      *(_DWORD*)(v9 + 296) = v106 | 1;
    }
  }
  v107 = 0.0;
  v108 = *(_DWORD*)(*(_QWORD*)(v1 + 72) + 120LL);
  if (v108 > -77626399) {
    v109 = v147;
    v110 = v142;
    if (v108 == -77626398 || v108 == 1400556095) {
      goto LABEL_78;
    }
  }
  else {
    v109 = v147;
    v110 = v142;
    if (v108 == -972548316 || v108 == -93581017) {
      goto LABEL_78;
    }
  }
  v107 = -v146;
LABEL_78:
  LANES128(a1[6]).n128_f32[0] = v107;
  v111 = vsubq_f32(v140, v110);
  v112 = vaddq_f32(v109, COERCE_AS(float32x4_t, GameData_1a831c0));
  v113 = vmulq_f32(v111, v111);
  v114 = vsubq_f32(vaddq_f32(v109, COERCE_AS(float32x4_t, GameData_1a829a0)),
                   v112);
  LANES128(v113).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v113, v113, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0])))
          .n64_u64[0];
  v115 = vmulq_f32(v114, v114);
  v116 =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0])))
          .n64_f32[0];
  LANES128(v115).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v115, v115, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0])))
          .n64_u64[0];
  v117 =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0])))
          .n64_f32[0];
  v118 = vmulq_f32(v114, v111);
  LANES128(v118).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v118, v118, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v118).n128_u64[0])))
          .n64_u64[0];
  v119 =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v118).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v118).n128_u64[0])))
          .n64_f32[0];
  v120 = (float)((float)-v119 * v119) + (float)(v116 * v117);
  v121 = fabsf(v120);
  if (v121 >= 0x1.a36e2e0000000p-14) {
    v122 = vsubq_f32(v112, v110);
    v123 = vmulq_f32(v122, v111);
    v124 = vmulq_f32(v114, v122);
    LANES128(v123).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v123, v123, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v123).n128_u64[0])))
            .n64_u64[0];
    LANES128(v124).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v124, v124, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v124).n128_u64[0])))
            .n64_u64[0];
    v121 = (float)(1.0 / v120) *
           (float)((float)(v119 *
                           LANES64_OF(
                               vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v123).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v123).n128_u64[0])))
                               .n64_f32[0]) -
                   (float)(LANES64_OF(
                               vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v124).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v124).n128_u64[0])))
                               .n64_f32[0] *
                           v116));
  }
  v125 = LANES128(a1[3]).n128_f32[1] +
         (float)((float)(LANES128_OF(
                             vsubq_f32(vmlaq_n_f32(v112, v114, v121), v109))
                             .n128_f32[1] -
                         LANES128(a1[3]).n128_f32[1]) *
                 *(float*)(v5 + 300));
  LANES128(a1[3]).n128_f32[1] = v125;
  v126 = LANES128(v109).n128_f32[1] +
         (float)((float)((float)(LANES128(v109).n128_f32[1] + v125) -
                         LANES128(v109).n128_f32[1]) *
                 v11);
  LANES128(v127).n128_u64[0] =
      __PAIR64__(LODWORD(v126), LANES128(v109).n128_u32[0]);
  LANES128(v127).n128_u64[1] =
      LANES128_OF(vextq_s8(v109, v109, 8u)).n128_u32[0];
  v128 = vsubq_f32(*(float32x4_t*)(v9 + 304), v127);
  v129 = vmulq_f32(v128, v128);
  LANES128(v129).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v129, v129, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v129).n128_u64[0])))
          .n64_u64[0];
  v152 = LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v129).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v129).n128_u64[0])))
             .n64_f32[0];
  if (__builtin_islessgreater(v152, 0.0f)) {
    *(_DWORD*)(v9 + 304) = LANES128(v109).n128_u32[0];
    *(float*)(v9 + 308) = v126;
    v130 = *(_OWORD*)(v9 + 304);
    *(_DWORD*)(v9 + 296) |= 1u;
    *((_QWORD*)&v130 + 1) = LANES128(v109).n128_u32[2];
    *(_OWORD*)(v9 + 304) = v130;
  }
}

void game_character_112c460(__int64 result)
{
  float v1;
  float v2;
  bool v3;
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  unsigned __int32 v17;
  float32x4_t v18;
  float32x2_t v19;
  float32x4_t v20;
  int8x16_t v21;
  float v22;
  float v23;
  float v24;
  int v25;
  float v26;
  float v27;
  unsigned int v28;
  int v29;
  float v30;
  float v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  float v35;
  int v36;
  float v37;
  float v38;
  int v39;
  unsigned int v40;
  float v41;
  float v42;
  __int64 v43;
  float32x4_t v44;
  float v45;
  __int128 v46;
  float v47;
  __int64 v48;
  __int64 v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  unsigned __int32 v53;
  float32x4_t v54;
  float32x2_t v55;
  float32x4_t v56;
  int8x16_t v57;
  float v58;
  float v59;
  float v60;
  int v61;
  float v62;
  float v63;
  unsigned int v64;
  int v65;
  float v66;
  float v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  float v71;
  int v72;
  float v73;
  float v74;
  int v75;
  unsigned int v76;
  float v77;
  __int64 v78;
  float32x4_t v79;
  __int128 v80;

  {
    v1 = *(float*)(result + 48);
    __asm__ volatile("" ::"w"(v1));
  }
  if (!(v1 < 0x0.0p+0f)) {
    v2 = 0x0.0p+0f;
    {
      v3 = *(_DWORD*)(result + 80) == 2;
      __asm__ volatile("" ::"r"(v3));
    }
    {
      v4 = *(_QWORD*)(result + 40);
      __asm__ volatile("" ::"r"(v4));
    }
    {
      v5 = *(_QWORD*)GameData_212d270;
      __asm__ volatile("" ::"r"(v5));
    }
    {
      v6 = v1 + *(float*)(result + 32);
      __asm__ volatile("" ::"w"(v6));
    }
    *(float*)(result + 48) = v6;
    {
      v7 = *(_QWORD*)(v4 + 80);
      __asm__ volatile("" ::"r"(v7));
    }
    {
      v8 = *(float*)(v5 + 268);
      __asm__ volatile("" ::"w"(v8));
    }
    {
      v9 = *(_QWORD*)(v7 + 8);
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v10 = v6 - *(float*)(v5 + 260);
      __asm__ volatile("" ::"w"(v10));
    }
    {
      v11 = v6 - *(float*)(v5 + 264);
      __asm__ volatile("" ::"w"(v11));
    }
    if (v3) {
      v12 = v11;
    }
    else {
      v12 = v10;
    }
    if (v3) {
      v13 = v10;
    }
    else {
      v13 = v11;
    }
    {
      v16 = *(float32x4_t*)(*(_QWORD*)(v9 + 8) + 48LL);
      __asm__ volatile("" ::"w"(v16));
    }
    {
      v14 = *(float32x4_t*)(*(_QWORD*)(v9 + 72) + 48LL);
      __asm__ volatile("" ::"w"(v14));
    }
    v15 = vsubq_f32(v16, v14);
    v18 = v14;
    LANES128(v16).n128_u32[3] = 0;
    v17 = LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u32[0];
    LANES128(v18).n128_u32[3] = 0;
    LANES64(v19).n64_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, v17),
                         COERCE_AS(float32x2_t, v17)),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v15).n128_u32[0]))))
            .n64_u64[0];
    v20 = vsubq_f32(v16, v18);
    v21 = vmulq_f32(v20, v20);
    LODWORD(v22) = LANES64_OF(vsqrt_f32(vpadd_f32(v19, v19))).n64_u32[0];
    LANES128(v21).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
            .n64_u64[0];
    {
      v23 = *(float*)(v5 + 272);
      __asm__ volatile("" ::"w"(v23));
    }
    LODWORD(v24) =
        LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]))))
            .n64_u32[0];
    if (!(v12 < 0x0.0p+0f)) {
      v2 = v12;
      if (v23 < v12) {
        v2 = *(float*)(v5 + 272);
        __asm__ volatile("" ::"w"(v2));
      }
    }
    {
      v25 = *(_DWORD*)(v5 + 276);
      __asm__ volatile("" ::"r"(v25));
    }
    v26 = v23 * 0x1.0000000000000p-1f;
    v27 = (float)(PSEUDO_UNFUSED((float)(v8 + -0x1.0000000000000p+0f) *
                                 0x1.0000000000000p-1f)) +
          0x1.0000000000000p+0f;
    if (!(v2 < v26)) {
      v34 = v25 - 2;
      v35 = v26 - (float)(v2 - v26);
      if (v25 < 2) {
        v38 = v35;
        v37 = v26;
      }
      else {
        v36 = v25 - 1;
        v37 = v26;
        v38 = v35;
        v39 = (v25 - 1) & 7;
        if (!(v34 < 7)) {
          v37 = v26;
          v38 = v35;
          v40 = v36 & 0xFFFFFFF8;
          do {
            v40 -= 8;
            v38 =
                v35 *
                (float)(v35 *
                        (float)(v35 *
                                (float)(v35 *
                                        (float)(v35 *
                                                (float)(v35 *
                                                        (float)(v35 *
                                                                (float)(v35 *
                                                                        v38)))))));
            v37 =
                v26 *
                (float)(v26 *
                        (float)(v26 *
                                (float)(v26 *
                                        (float)(v26 *
                                                (float)(v26 *
                                                        (float)(v26 *
                                                                (float)(v26 *
                                                                        v37)))))));
          } while (v40 != 0);
        }
        for (; v39 != 0; --v39) {
          v38 = v35 * v38;
          v37 = v26 * v37;
        }
      }
      v41 = v8 - (float)((float)((float)(v8 - v27) * v38) / v37);
    }
    else {
      v28 = v25 - 2;
      if (v25 < 2) {
        v31 = v2;
        v30 = v26;
      }
      else {
        v29 = v25 - 1;
        v30 = v26;
        v31 = v2;
        v32 = (v25 - 1) & 7;
        if (!(v28 < 7)) {
          v30 = v26;
          v31 = v2;
          v33 = v29 & 0xFFFFFFF8;
          do {
            v33 -= 8;
            v31 =
                v2 *
                (float)(v2 *
                        (float)(v2 *
                                (float)(v2 *
                                        (float)(v2 *
                                                (float)(v2 *
                                                        (float)(v2 *
                                                                (float)(v2 *
                                                                        v31)))))));
            v30 =
                v26 *
                (float)(v26 *
                        (float)(v26 *
                                (float)(v26 *
                                        (float)(v26 *
                                                (float)(v26 *
                                                        (float)(v26 *
                                                                (float)(v26 *
                                                                        v30)))))));
          } while (v33 != 0);
        }
        for (; v32 != 0; --v32) {
          v31 = v2 * v31;
          v30 = v26 * v30;
        }
      }
      v41 =
          (float)((float)((float)(v27 + -0x1.0000000000000p+0f) * v31) / v30) +
          0x1.0000000000000p+0f;
    }
    v42 = sqrtf((float)(v24 * v24) -
                (float)(PSEUDO_UNFUSED((float)(v22 * v41) *
                                       (float)(v22 * v41)))) -
          LANES128(v15).n128_f32[1];
    {
      v43 = *(_QWORD*)(v7 + 16);
      __asm__ volatile("" ::"r"(v43));
    }
    v44 = vmlaq_n_f32(v16, vsubq_f32(v18, v16), v41);
    v45 = 0x0.0p+0f;
    *(_DWORD*)(v43 - 16) = LANES128(v44).n128_u32[0];
    *(float*)(v43 - 12) = LANES128(v14).n128_f32[1] - v42;
    v46 = *(_OWORD*)(v43 - 16);
    *((_QWORD*)&v46 + 1) = LANES128(v44).n128_u32[2];
    *(_OWORD*)(v43 - 16) = v46;
    {
      v47 = *(float*)(v5 + 268);
      __asm__ volatile("" ::"w"(v47));
    }
    {
      v48 = *(_QWORD*)(*(_QWORD*)(result + 40) + 80LL);
      __asm__ volatile("" ::"r"(v48));
    }
    {
      v49 = *(_QWORD*)(v48 + 200);
      __asm__ volatile("" ::"r"(v49));
    }
    {
      v52 = *(float32x4_t*)(*(_QWORD*)(v49 + 8) + 48LL);
      __asm__ volatile("" ::"w"(v52));
    }
    {
      v50 = *(float32x4_t*)(*(_QWORD*)(v49 + 72) + 48LL);
      __asm__ volatile("" ::"w"(v50));
    }
    v51 = vsubq_f32(v52, v50);
    v54 = v50;
    LANES128(v52).n128_u32[3] = 0;
    v53 = LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u32[0];
    LANES128(v54).n128_u32[3] = 0;
    LANES64(v55).n64_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, v53),
                         COERCE_AS(float32x2_t, v53)),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v51).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v51).n128_u32[0]))))
            .n64_u64[0];
    v56 = vsubq_f32(v52, v54);
    v57 = vmulq_f32(v56, v56);
    LODWORD(v58) = LANES64_OF(vsqrt_f32(vpadd_f32(v55, v55))).n64_u32[0];
    LANES128(v57).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v57, v57, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
            .n64_u64[0];
    {
      v59 = *(float*)(v5 + 272);
      __asm__ volatile("" ::"w"(v59));
    }
    LODWORD(v60) =
        LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]))))
            .n64_u32[0];
    if (!(v13 < 0x0.0p+0f)) {
      v45 = v13;
      if (v59 < v13) {
        v45 = *(float*)(v5 + 272);
        __asm__ volatile("" ::"w"(v45));
      }
    }
    {
      v61 = *(_DWORD*)(v5 + 276);
      __asm__ volatile("" ::"r"(v61));
    }
    v62 = v59 * 0x1.0000000000000p-1f;
    v63 = (float)(PSEUDO_UNFUSED((float)(v47 + -0x1.0000000000000p+0f) *
                                 0x1.0000000000000p-1f)) +
          0x1.0000000000000p+0f;
    if (!(v45 < v62)) {
      v70 = v61 - 2;
      v71 = v62 - (float)(v45 - v62);
      if (v61 < 2) {
        v74 = v71;
        v73 = v62;
      }
      else {
        v72 = v61 - 1;
        v73 = v62;
        v74 = v71;
        v75 = (v61 - 1) & 7;
        if (!(v70 < 7)) {
          v73 = v62;
          v74 = v71;
          v76 = v72 & 0xFFFFFFF8;
          do {
            v76 -= 8;
            v74 =
                v71 *
                (float)(v71 *
                        (float)(v71 *
                                (float)(v71 *
                                        (float)(v71 *
                                                (float)(v71 *
                                                        (float)(v71 *
                                                                (float)(v71 *
                                                                        v74)))))));
            v73 =
                v62 *
                (float)(v62 *
                        (float)(v62 *
                                (float)(v62 *
                                        (float)(v62 *
                                                (float)(v62 *
                                                        (float)(v62 *
                                                                (float)(v62 *
                                                                        v73)))))));
          } while (v76 != 0);
        }
        for (; v75 != 0; --v75) {
          v74 = v71 * v74;
          v73 = v62 * v73;
        }
      }
      v77 = v47 - (float)((float)((float)(v47 - v63) * v74) / v73);
    }
    else {
      v64 = v61 - 2;
      if (v61 < 2) {
        v67 = v45;
        v66 = v62;
      }
      else {
        v65 = v61 - 1;
        v66 = v62;
        v67 = v45;
        v68 = (v61 - 1) & 7;
        if (!(v64 < 7)) {
          v66 = v62;
          v67 = v45;
          v69 = v65 & 0xFFFFFFF8;
          do {
            v69 -= 8;
            v67 =
                v45 *
                (float)(v45 *
                        (float)(v45 *
                                (float)(v45 *
                                        (float)(v45 *
                                                (float)(v45 *
                                                        (float)(v45 *
                                                                (float)(v45 *
                                                                        v67)))))));
            v66 =
                v62 *
                (float)(v62 *
                        (float)(v62 *
                                (float)(v62 *
                                        (float)(v62 *
                                                (float)(v62 *
                                                        (float)(v62 *
                                                                (float)(v62 *
                                                                        v66)))))));
          } while (v69 != 0);
        }
        for (; v68 != 0; --v68) {
          v67 = v45 * v67;
          v66 = v62 * v66;
        }
      }
      v77 =
          (float)((float)((float)(v63 + -0x1.0000000000000p+0f) * v67) / v66) +
          0x1.0000000000000p+0f;
    }
    {
      v78 = *(_QWORD*)(v48 + 208);
      __asm__ volatile("" ::"r"(v78));
    }
    v79 = vmlaq_n_f32(v52, vsubq_f32(v54, v52), v77);
    *(_DWORD*)(v78 - 16) = LANES128(v79).n128_u32[0];
    *(float*)(v78 - 12) =
        LANES128(v50).n128_f32[1] -
        (float)(sqrtf((float)(v60 * v60) -
                      (float)(PSEUDO_UNFUSED((float)(v58 * v77) *
                                             (float)(v58 * v77)))) -
                LANES128(v51).n128_f32[1]);
    v80 = *(_OWORD*)(v78 - 16);
    *((_QWORD*)&v80 + 1) = LANES128(v79).n128_u32[2];
    *(_OWORD*)(v78 - 16) = v80;
  }
}

#pragma GCC visibility pop
