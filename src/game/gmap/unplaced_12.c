#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* CharacterObservable_10cd4e0(_QWORD* result);

__attribute__((swiftcall)) void TroopMgr_134b820(PSEUDO_X8, __int64);

__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, __int64);

__attribute__((swiftcall)) void
game_gmap_TroopMgr_GetEncountEnemyList(PSEUDO_X8, __int64(__fastcall*)());

__int64 CorpsManager_972290(__int64 result);

__int64 GameHr_14a1520(__int64*, char);

__int64 GameRoutine_ae4560(__int64 result);

__int64 GmapCorpsMenu_172b6e0(__int64);

__int64 MultiMenuSequence_17871c0(__int64 result, unsigned int, int);

__int64 ProcTroopAction_14b4920(__int64);

__int64 TroopMgr_13460a0(__int64);

__int64 TroopMgr_1349320(__int64*);

__int64 TroopMgr_134c680();

__int64 TroopMgr_134d2e0(__int64);

__int64 Troop_1342210(_QWORD);

__int64 Troop_1342e60(__int64);

__int64 UnitActor_81a540(__int64, unsigned int, __int64);

__int64 UnitActor_81ab40(__int64, float, float);

__int64 UnitActor_81cda0(__int64, __int128*, float);

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);

__int64 game_14a3920(__int64 result);

__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);

__int64 game_HashString(__int64 result);

__int64 game_gmap_1341ed0(__int64 result);

__int64 memcpy(__int64, __int64, unsigned __int64);

__int64 memmove(__int64, __int64, unsigned __int64);

__int64 nn_os_LockMutex(__int64);

__int64 nn_os_UnlockMutex(__int64);

__int64 std___1___shared_weak_count___release_weak(__int64);

bool GameHr_995200(__int64);

extern _UNKNOWN* GameData_212c2f0;

extern _UNKNOWN* GameData_212ceb8;

extern _UNKNOWN GameData_1abbb2b;

extern _UNKNOWN GameData_1ad0522;

extern _UNKNOWN GameData_1ade186;

extern _UNKNOWN game_g_random_mutex;

extern __int128 GameData_1a83090;

extern __int64 (*GameData_202cfb8[])();

extern __int64 (*GameData_202ddc8[])();

extern __int64 (*GameData_20b6768[])();

extern __int64 (*GameData_20b67e8[])();

extern __int64 (*game_gmap_anonymous_CorpsPoolMenu_vtable[])();

extern __int64 (*game_gmap_anonymous_CorpsUserMenu_vtable[])();

extern __int64* GameData_212c790;

extern __int64* GameData_212cb08[102];

extern __int64* GameData_212e008[9];

extern __int64* game_map_MapRandom_instance__ptr[3];

extern __int64 GameData_20b33d8;

extern __int64 GameData_212d750;

extern __int64 fw_memory_g_heap_manager_ptr;

extern __int64 game_GameModeData_instance_;

float GameRoutine_135bea0();

float cosf(float);

float math_Vec3_Angle(float32x4_t*, float32x4_t*);

float sinf(float);

unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);

void GameHr_133cc40(__int64);

void GameRoutine_1728e00();

void TroopMgr_134e920();

void __attribute__((noreturn)) GameRoutine_132ba50();

void __attribute__((noreturn)) GameRoutine_13549e0();

void __attribute__((noreturn)) GameRoutine_14b6540();

void __attribute__((noreturn)) GameRoutine_60a210();

void __attribute__((noreturn)) GameRoutine_60a310();

void __attribute__((noreturn)) GameRoutine_888610();

void nn_mem_StandardAllocator_Free(__int64, __int64);

__int64 game_gmap_1326c80(float32x4_t* a1, int a2);

__int64 game_gmap_13412c0(float32x4_t* a1, __int64 a2, float a3);

void game_gmap_134fb00();

void game_gmap_14b59c0(_QWORD* a1, float32x4_t*** a2);

__int64 game_gmap_172a580(__int64 a1, int a2);

__int64 BasicMenuCursor_16de1f0(__int64*, int, int);

__int64 GameRoutine_89aac0(_QWORD*, _QWORD*);

__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);

__int64 UnitItem_6e8800(__int64 result, unsigned __int64*);

__int64 game_menu_16dcd30(__int64, __int64, _QWORD*, __int64);

__int64 game_menu_BasicMenu_Destroy_BasicMenu(__int64);

extern _UNKNOWN* GameData_212c730;

extern _UNKNOWN GameData_1ab1df9;

extern __int64 (*GameData_207fd10[])();

extern __int64 (*GameData_20937d0[])();

extern __int64 (*game_gmap_CallAnimalMenu_vtable[])();

extern __int64 (*game_gmap_EmptyMaterialMenuItem_vtable[])();

extern __int64 (*game_gmap_GmapSpotInfoSetter_vtable)();

extern __int64 (*game_gmap_GmapSpotList_vtable[])();

extern __int64 (*game_gmap_anonymous_CallAnimalMenuItem_vtable[])();

extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2093398[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_207fc40[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20932c8[])();

extern __int64* GameData_212d6a8;

extern __int64* GameData_212d7f8[4];

extern __int64* GameData_2130e70;

extern __int64 game_TransporterConst_List_instance__ptr[6];

void BasicMenuCursor_16e0c00(_QWORD*, __int64);

void GmapSpotInfoSetterForGmap_1657240(__int64*);

__int64 game_gmap_167dcf0(_QWORD* a1);

void game_gmap_167de10(_QWORD* a1);

__int64 game_gmap_16c3940(__int64 a1);

__int64 game_gmap_1326c80(float32x4_t* a1, int a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float32x4_t* v16;
  float32x4_t v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  float v41;
  __int64 v43;
  __int64 v44;
  float v46;
  float v48;
  float v50;
  __int64 v52;
  float v54;
  float v59;
  float v63;

  v2 = LANES128(a1[3]).n128_u64[0];
  v3 = LANES128(a1[3]).n128_u64[1];
  if (v2 == v3) {
    v6 = 0;
  LABEL_54:
    v43 = 0;
    if (v6 != 0) {
      goto LABEL_55;
    }
    return v43;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = -*((float*)GameData_212c2f0 + 1);
  v10 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
  v63 = *(float*)GameData_212c2f0;
  v11 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4);
  v12 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
  v13 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4);
  v14 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
  v15 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12);
  do {
    v16 = *(float32x4_t**)(*(_QWORD*)v2 + 8LL);
    if (LANES128(v16[11]).n128_u8[0] == 1) {
      goto LABEL_4;
    }
    v17 = vsubq_f32(v16[2], a1[2]);
    if (LANES128(v17).n128_f32[2] != 0x0.0p+0f ||
        (v18 = 0x0.0p+0f, LANES128(v17).n128_f32[0] != 0x0.0p+0f)) {
      v19 = -LANES128(v17).n128_f32[2];
      if (LANES128(v17).n128_f32[2] > 0x0.0p+0f) {
        if (LANES128(v17).n128_f32[0] >= 0x0.0p+0f) {
          if (LANES128(v17).n128_f32[0] <= LANES128(v17).n128_f32[2]) {
            v20 = LANES128(v17).n128_f32[0] / LANES128(v17).n128_f32[2];
            v21 = v63;
            v22 = 0x1.0000000000000p+0f;
            v23 = 0x1.921fb60000000p+1f;
            goto LABEL_23;
          }
          v24 = LANES128(v17).n128_f32[2] / LANES128(v17).n128_f32[0];
          v25 = v63;
          v26 = 0x1.0000000000000p+0f;
          v27 = 0x1.921fb60000000p+0f;
        }
        else {
          if (LANES128(v17).n128_f32[0] < v19) {
            v20 = v19 / LANES128(v17).n128_f32[0];
            v21 = v63;
            v22 = 0x1.0000000000000p+0f;
            v23 = -0x1.921fb60000000p+0f;
          LABEL_23:
            v18 =
                v23 -
                (float)(PSEUDO_UNFUSED(v20 * (float)(v22 + (float)((float)(v15 + (float)((
                                                                                             float)(v14 + (float)((
                                                                                                                      float)(v13 + (float)((
                                                                                                                                               float)(v12 + (float)((
                                                                                                                                                                        float)(v11 + (float)((
                                                                                                                                                                                                 float)(v10 + (float)((
                                                                                                                                                                                                                          float)(v9 +
                                                                                                                                                                                                                                 (float)(v21 *
                                                                                                                                                                                                                                         (float)(v20 *
                                                                                                                                                                                                                                                 v20))) *
                                                                                                                                                                                                                      (float)(v20 *
                                                                                                                                                                                                                              v20))) *
                                                                                                                                                                                             (float)(v20 *
                                                                                                                                                                                                     v20))) *
                                                                                                                                                                    (float)(v20 *
                                                                                                                                                                            v20))) *
                                                                                                                                           (float)(v20 *
                                                                                                                                                   v20))) *
                                                                                                                  (float)(v20 *
                                                                                                                          v20))) *
                                                                                         (float)(v20 *
                                                                                                 v20))) *
                                                                   (float)(v20 *
                                                                           v20)))));
            goto LABEL_25;
          }
          v24 = LANES128(v17).n128_f32[0] / v19;
          v25 = v63;
          v26 = 0x1.0000000000000p+0f;
          v27 = -0x1.921fb60000000p+1f;
        }
      LABEL_20:
        v18 =
            (float)(PSEUDO_UNFUSED(
                v24 *
                (float)(v26 +
                        (float)((float)(v15 +
                                        (float)((float)(v14 +
                                                        (float)((float)(v13 +
                                                                        (float)((float)(v12 +
                                                                                        (float)((float)(v11 +
                                                                                                        (float)((float)(v10 +
                                                                                                                        (float)((float)(v9 +
                                                                                                                                        (float)(v25 *
                                                                                                                                                (float)(v24 *
                                                                                                                                                        v24))) *
                                                                                                                                (float)(v24 *
                                                                                                                                        v24))) *
                                                                                                                (float)(v24 *
                                                                                                                        v24))) *
                                                                                                (float)(v24 *
                                                                                                        v24))) *
                                                                                (float)(v24 *
                                                                                        v24))) *
                                                                (float)(v24 *
                                                                        v24))) *
                                                (float)(v24 * v24))) *
                                (float)(v24 * v24))))) +
            v27;
        goto LABEL_25;
      }
      if (LANES128(v17).n128_f32[0] < 0x0.0p+0f) {
        if (LANES128(v17).n128_f32[2] <= LANES128(v17).n128_f32[0]) {
          v28 = LANES128(v17).n128_f32[0] / LANES128(v17).n128_f32[2];
          v18 =
              -(float)(v28 *
                       (float)((
                                   float)((float)(v15 +
                                                  (float)((float)(v14 + (float)((
                                                                                    float)(v13 + (float)((
                                                                                                             float)(v12 + (float)((
                                                                                                                                      float)(v11 + (float)((
                                                                                                                                                               float)(v10 + (float)((
                                                                                                                                                                                        float)(v9 + (float)(v63 *
                                                                                                                                                                                                            (float)(v28 * v28))) *
                                                                                                                                                                                    (float)(v28 *
                                                                                                                                                                                            v28))) *
                                                                                                                                                           (float)(v28 *
                                                                                                                                                                   v28))) *
                                                                                                                                  (float)(v28 *
                                                                                                                                          v28))) *
                                                                                                         (float)(v28 *
                                                                                                                 v28))) *
                                                                                (float)(v28 *
                                                                                        v28))) *
                                                          (float)(v28 * v28))) *
                                          (float)(v28 * v28)) +
                               0x1.0000000000000p+0f));
          goto LABEL_25;
        }
        v24 = LANES128(v17).n128_f32[2] / LANES128(v17).n128_f32[0];
        v25 = v63;
        v26 = 0x1.0000000000000p+0f;
        v27 = -0x1.921fb60000000p+0f;
        goto LABEL_20;
      }
      if (LANES128(v17).n128_f32[0] > v19) {
        v20 = v19 / LANES128(v17).n128_f32[0];
        v21 = v63;
        v22 = 0x1.0000000000000p+0f;
        v23 = 0x1.921fb60000000p+0f;
        goto LABEL_23;
      }
      v29 = LANES128(v17).n128_f32[0] / v19;
      v18 =
          v29 *
          (float)((float)((float)(v15 +
                                  (float)((float)(v14 +
                                                  (float)((float)(v13 +
                                                                  (float)((float)(v12 +
                                                                                  (float)((float)(v11 +
                                                                                                  (float)((float)(v10 +
                                                                                                                  (float)((float)(v9 +
                                                                                                                                  (float)(v63 *
                                                                                                                                          (float)(v29 *
                                                                                                                                                  v29))) *
                                                                                                                          (float)(v29 *
                                                                                                                                  v29))) *
                                                                                                          (float)(v29 *
                                                                                                                  v29))) *
                                                                                          (float)(v29 *
                                                                                                  v29))) *
                                                                          (float)(v29 *
                                                                                  v29))) *
                                                          (float)(v29 * v29))) *
                                          (float)(v29 * v29))) *
                          (float)(v29 * v29)) +
                  0x1.0000000000000p+0f);
    }
  LABEL_25:
    v30 = v18 * 0x1.ca5dc00000000p+5f;
    if (v7 < v8) {
      *(_QWORD*)v7 = v16;
      *(float*)(v7 + 8) = v30;
      v7 += 16LL;
    }
    else {
      v31 = v7 - v6;
      v32 = (__int64)(v7 - v6) >> 4;
      v33 = v32 + 1;
      if ((unsigned __int64)(v32 + 1) >> 60 != 0) {
        GameRoutine_132ba50();
      }
      if ((__int64)(v8 - v6) >> 3 > v33) {
        v33 = (__int64)(v8 - v6) >> 3;
      }
      if (v8 - v6 >= 0x7FFFFFFFFFFFFFF0LL) {
        v34 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v34 = v33;
      }
      if (v34 != 0) {
        if (v34 >> 60 != 0) {
          GameRoutine_60a210();
        }
        v35 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v34, 16, 0);
      }
      else {
        v35 = 0;
      }
      v36 = v35 + v31;
      v8 = v35 + 16 * v34;
      v37 = v7 - v6;
      *(_QWORD*)v36 = v16;
      v38 = v35 + v31 - 16 * v32;
      *(float*)(v36 + 8) = v30;
      v7 = v35 + v31 + 16;
      memcpy(v38, v6, v37);
      if (v6 != 0) {
        v39 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v39 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v6);
      }
      v6 = v38;
    }
  LABEL_4:
    v2 += 8LL;
  } while (v2 != v3);
  if (v6 == v7) {
    goto LABEL_54;
  }
  if (a2 > 2) {
    if (a2 == 3) {
      v40 = v6;
      while (1) {
        v50 = *(float*)(v40 + 8);
        if (v50 > -0x1.0e00000000000p+7f & v50 <= -0x1.6800000000000p+5f) {
          break;
        }
        v40 += 16;
        if (v40 == v7) {
          goto LABEL_84;
        }
      }
    }
    else {
      if (a2 != 4) {
        goto LABEL_84;
      }
      v40 = v6;
      while (1) {
        v46 = *(float*)(v40 + 8);
        if (v46 > 0x1.6800000000000p+5f & v46 <= 0x1.0e00000000000p+7f) {
          break;
        }
        v40 += 16;
        if (v40 == v7) {
          goto LABEL_84;
        }
      }
    }
  LABEL_111:
    v43 = *(_QWORD*)v40;
    if (v6 != 0) {
      goto LABEL_55;
    }
    return v43;
  }
  if (a2 == 1) {
    v40 = v6;
    while (1) {
      v48 = *(float*)(v40 + 8);
      if (v48 > -0x1.6800000000000p+5f & v48 <= 0x1.6800000000000p+5f) {
        goto LABEL_111;
      }
      v40 += 16;
      if (v40 == v7) {
        goto LABEL_84;
      }
    }
  }
  if (a2 == 2) {
    v40 = v6;
    do {
      v41 = *(float*)(v40 + 8);
      if (v41 <= -0x1.0e00000000000p+7f | v41 > 0x1.0e00000000000p+7f) {
        goto LABEL_111;
      }
      v40 += 16;
    } while (v40 != v7);
  }
LABEL_84:
  v52 = v6;
  while (2) {
    v54 = *(float*)(v52 + 8);
    if (a2 <= 2) {
      if (a2 == 1) {
        if (v54 > -0x1.0e00000000000p+6f & v54 <= 0x1.0e00000000000p+6f) {
          break;
        }
      }
      else if (a2 == 2 &&
               (v54 <= -0x1.c200000000000p+6f | v54 > 0x1.c200000000000p+6f)) {
        break;
      }
      goto LABEL_90;
    }
    if (a2 != 3) {
      if (a2 == 4 &&
          v54 > 0x1.6800000000000p+4f & v54 <= 0x1.3b00000000000p+7f) {
        break;
      }
      goto LABEL_90;
    }
    if (v54 <= -0x1.3b00000000000p+7f | v54 > -0x1.6800000000000p+4f) {
    LABEL_90:
      v52 += 16;
      if (v52 == v7) {
        v52 = v6;
        while (1) {
          v59 = *(float*)(v52 + 8);
          if (a2 > 2) {
            if (a2 == 3) {
              if (v59 > -0x1.5400000000000p+7f &
                  v59 <= -0x1.4000000000000p+3f) {
                goto LABEL_139;
              }
            }
            else if (a2 == 4 && v59 > 0x1.4000000000000p+3f &
                                    v59 <= 0x1.5400000000000p+7f) {
              goto LABEL_139;
            }
          }
          else if (a2 == 1) {
            if (v59 > -0x1.4000000000000p+6f & v59 <= 0x1.4000000000000p+6f) {
              goto LABEL_139;
            }
          }
          else if (a2 == 2 && (v59 <= -0x1.9000000000000p+6f |
                               v59 > 0x1.9000000000000p+6f)) {
            goto LABEL_139;
          }
          v52 += 16;
          if (v52 == v7) {
            goto LABEL_54;
          }
        }
      }
      continue;
    }
    break;
  }
LABEL_139:
  v43 = *(_QWORD*)v52;
  if (v6 == 0) {
    return v43;
  }
LABEL_55:
  v44 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v44 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v44,
                                v6);
  return v43;
}

__int64 game_gmap_13412c0(float32x4_t* a1, __int64 a2, float a3)
{
  float v6;
  __int64 v7;
  float v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  char v16;
  char v17;
  float v18;
  __int64 result;
  __int128 v20;
  float32x4_t v21;
  float32x4_t v22;
  int8x16_t v23;
  float v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  unsigned __int32* v30;
  unsigned __int32 v31;
  float32x4_t* v32;
  float32x4_t v33;
  _DWORD* v34;
  int v35;
  int v36;
  _QWORD* v38;
  __int64 v39;
  unsigned int v40;
  float32x4_t v41;
  unsigned int i;
  float32x4_t* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  float32x4_t v46;
  __int128 v47;

  *((_QWORD*)&v47 + 1) = &GameData_1ad0522;
  v6 = 0x0.0p+0f;
  *(_QWORD*)&v47 = game_HashString((__int64)&GameData_1ad0522);
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)&v47);
    if (v7 != 0) {
      v6 = (float)*(int*)(v7 + 32);
    }
  }
  v8 = GameRoutine_135bea0();
  v9 = LANES128(a1[23]).n128_u64[1];
  if (v9 != 0) {
    *(float*)(*(_QWORD*)(v9 + 304) + 12LL) =
        a3 * (float)((float)(v6 * v8) / 0x1.9000000000000p+6f);
  }
  if (LANES128(a1[8]).n128_u32[0] != -1080537169 &&
      (UnitActor_81a540((__int64)&a1[7], 0xBF984FAF,
                        (__int64)GameData_212ceb8) &
       1) != 0) {
    v10 = LANES128(a1[23]).n128_u64[1];
    if (v10 != 0) {
      v11 = *(_QWORD*)(v10 + 392);
      v12 = *(_QWORD*)(v10 + 400);
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                  memory_order_relaxed);
      }
      v13 = *(unsigned int*)(v11 + 11784);
      v14 = v13 > 0x21;
      v15 = 0x17FEFFFCFuLL >> v13;
      v16 = v14;
      v17 = v16 | v15;
      if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
      if ((v17 & 1) != 0) {
        CharacterObservable_10cd4e0(
            *(_QWORD**)(LANES128(a1[23]).n128_u64[1] + 120));
      }
    }
  }
  v18 = 0x0.0p+0f;
  result = UnitActor_81cda0((__int64)&a1[7], (__int128*)a2, 0x0.0p+0f);
  v20 = *(_OWORD*)a2;
  v21 = vsubq_f32(*(float32x4_t*)a2, a1[3]);
  if ((float)(vmuls_lane_f32(LANES128(v21).n128_f32[2], v21, 2) +
              (float)(LANES128(v21).n128_f32[0] * LANES128(v21).n128_f32[0])) >=
      0x1.0000000000000p-4f) {
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                             COERCE_AS(float32x2_t, 1065353216LL)))
            .n64_f32[0] > 0x0.0p+0f) {
      LANES128(v22).n128_u64[0] = LANES128(v21).n128_u32[0];
      LANES128(v22).n128_u64[1] = LANES128(v21).n128_u32[2];
      v23 = vmulq_f32(v22, v22);
      LANES128(v23).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
              .n64_f32[0] > 0x0.0p+0f) {
        v46 = v22;
        v44 = LANES128(v21).n128_u32[2];
        v45 = LANES128(v21).n128_u32[0];
        v47 = GameData_1a83090;
        v24 = math_Vec3_Angle((float32x4_t*)&v47, &v46);
        LANES128(v25).n128_u64[0] = v45;
        LANES128(v25).n128_u64[1] = v44;
        LANES128(v26).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v27).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v28).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v26).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v29).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v28).n128_i8[8] =
            vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        *(int8x8_t*)&LANES128(v27).n128_i8[8] =
            vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v29).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        if (LANES128_OF(vmlsq_f32(vmulq_f32(v26, v27), v28, v29)).n128_f32[1] <
            0x0.0p+0f) {
          v24 = -v24;
        }
        v18 = v24 * 0x1.ca5dc00000000p+5f;
      }
    }
    result = UnitActor_81ab40((__int64)&a1[7], v18, 0x1.99999a0000000p-4f);
    v20 = *(_OWORD*)a2;
  }
  LANES128(a1[3]).n128_u32[0] = v20;
  v30 = (unsigned __int32*)(a2 + 8);
  v31 = *(_DWORD*)(a2 + 4);
  v32 = a1 + 41;
  LANES128(a1[3]).n128_u32[1] = v31;
  v33 = a1[3];
  LANES128(v33).n128_u32[2] = *v30;
  v34 = (_DWORD*)LANES128(a1[41]).n128_u64[0];
  LANES128(v33).n128_u64[1] = LANES128(v33).n128_u32[2];
  a1[3] = v33;
  if (*(_QWORD*)v34 == 0) {
  LABEL_32:
    result = GameHr_14a1520((__int64*)&a1[41], 1);
    LANES128(a1[40]).n128_u8[12] = 0;
    return result;
  }
  v35 = *(_DWORD*)(*(_QWORD*)v34 + 16LL);
  v36 = v34[2];
  if (v35 != v36 | LANES128(a1[40]).n128_u8[12] != 5) {
    if (v35 == v36) {
      return result;
    }
    goto LABEL_32;
  }
  UnitActor_81d430((void*)((float32x4_t*)&v47), (__int64)&a1[7]);
  v38 = (_QWORD*)LANES128(*(v32)).n128_u64[0];
  v39 = *(_QWORD*)LANES128(*(v32)).n128_u64[0];
  if (v39 != 0 && *(_DWORD*)(v39 + 16) == *((_DWORD*)v38 + 2)) {
    v40 = *(_DWORD*)(v39 + 36);
    if (v40 != 0) {
      v41 = COERCE_AS(float32x4_t, v47);
      for (i = 0; i < v40; ++i) {
        if ((int)v40 > (int)i) {
          v43 = *(float32x4_t**)(v39 + 40 + 8LL * (int)i);
          if (v43 != nullptr) {
            v43[1] = v41;
            LANES128(v43[8]).n128_u8[0] = 1;
            v40 = *(_DWORD*)(v39 + 36);
          }
        }
      }
    }
  }
  return game_14a3920((__int64)v38);
}

void game_gmap_14b59c0(_QWORD* a1, float32x4_t*** a2)
{

#pragma clang fp contract(off)
  float32x4_t** v2;
  float32x4_t** v3;
  float32x4_t v4;
  __int64* v6;
  float32x4_t* v7;
  float32x4_t* v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  float v13;
  unsigned __int64 v14;
  float32x4_t* v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  float32x4_t v25;
  __int64 v26;
  float32x4_t* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  float32x4_t v31;
  float v32;
  float32x4_t v33;

  v2 = *a2;
  v3 = a2[1];
  if (*a2 != v3) {
    LANES128(v4).n128_u64[0] = 0x4120000041200000LL;
    LANES128(v4).n128_u64[1] = 0x4120000041200000LL;
    v6 = game_map_MapRandom_instance__ptr[0];
    v31 = v4;
    do {
      v8 = *v2;
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v9 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6);
      v10 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4);
      v11 = *(_DWORD*)v6 ^ (*(_DWORD*)v6 << 11);
      *(_DWORD*)v6 = *((_DWORD*)v6 + 1);
      *((_DWORD*)v6 + 1) = v9;
      v12 = (v11 >> 8) ^ (v10 >> 19) ^ v11 ^ v10;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6) = v10;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4) = v12;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v32 = cosf((float)((float)(v12 & 7) * 0x1.921fb60000000p+2f) *
                 0x1.0000000000000p-3f);
      v13 = sinf((float)((float)(v12 & 7) * 0x1.921fb60000000p+2f) *
                 0x1.0000000000000p-3f);
      v15 = (float32x4_t*)a1[21];
      v14 = a1[22];
      LANES128(v16).n128_u64[0] = LODWORD(v32);
      LANES128(v16).n128_u64[1] = LODWORD(v13);
      v17 = v8[3];
      v18 = vaddq_f32(v17, vmulq_f32(v16, v31));
      if ((unsigned __int64)v15 < v14) {
        LANES128(*(v15)).n128_u64[0] = (unsigned __int64)v8;
        v7 = v15 + 3;
        v15[1] = v17;
        v15[2] = v18;
      }
      else {
        v19 = a1[20];
        v20 = 1 - 0x5555555555555555LL * (((__int64)v15 - v19) >> 4);
        if (v20 > 0x555555555555555LL) {
          GameRoutine_14b6540();
        }
        v33 = v18;
        v21 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v14 - v19) >> 4);
        if (2 * v21 > v20) {
          v20 = 2 * v21;
        }
        if (v21 >= 0x2AAAAAAAAAAAAAALL) {
          v22 = 0x555555555555555LL;
        }
        else {
          v22 = v20;
        }
        if (v22 > 0x555555555555555LL) {
          GameRoutine_60a210();
        }
        v23 = 3 * v22;
        v24 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v22, 16, 0);
        v25 = v8[3];
        v26 = (__int64)v15 + v24 - v19;
        *(_QWORD*)v26 = v8;
        *(float32x4_t*)(v26 + 16) = v25;
        *(float32x4_t*)(v26 + 32) = v33;
        if ((float32x4_t*)v19 != v15) {
          v27 = (float32x4_t*)v19;
          v28 = (_QWORD*)v24;
          do {
            *v28 = LANES128(*(v27)).n128_u64[0];
            v28[3] = LANES128(v27[1]).n128_u64[1];
            v28[2] = LANES128(v27[1]).n128_u64[0];
            v28[5] = LANES128(v27[2]).n128_u64[1];
            v29 = LANES128(v27[2]).n128_i64[0];
            v27 += 3;
            v28[4] = v29;
            v28 += 6;
          } while (v27 != v15);
        }
        v7 = (float32x4_t*)(v26 + 48);
        a1[20] = v24;
        a1[21] = v26 + 48;
        a1[22] = v24 + 16 * v23;
        if (v19 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v19);
        }
      }
      ++v2;
      a1[21] = v7;
    } while (v2 != v3);
  }
}

__int64 game_gmap_167dcf0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *a1 = game_gmap_GmapSpotList_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_207fc40;
  a1[132] = GameData_207fd10;
  a1[136] = &game_gmap_GmapSpotInfoSetter_vtable;
  v2 = a1[145];
  a1[145] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[141] != 0) {
    GmapSpotInfoSetterForGmap_1657240(a1 + 141);
    v4 = a1[141];
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, v4);
    }
  }
  v6 = a1[138];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[133];
  if (v7 != 0) {
    v8 = *(_QWORD*)v3;
    a1[134] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
}

void game_gmap_167de10(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *a1 = game_gmap_GmapSpotList_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_207fc40;
  a1[132] = GameData_207fd10;
  a1[136] = &game_gmap_GmapSpotInfoSetter_vtable;
  v2 = a1[145];
  a1[145] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[141] != 0) {
    GmapSpotInfoSetterForGmap_1657240(a1 + 141);
    v4 = a1[141];
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, v4);
    }
  }
  v6 = a1[138];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[133];
  if (v7 != 0) {
    v8 = *(_QWORD*)v3;
    a1[134] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, (__int64)a1);
}

__int64 game_gmap_16c3940(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64** v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  struct {
    __int64* v21;
    void* v22;
    _QWORD* v23;
    char gap72_[8];
    unsigned __int64* v24;
  } v21_;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1184, 16, 0),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21_.v21 = nullptr;
  v21_.v22 = nullptr;
  game_menu_16dcd30(v3, (__int64)"BelongingMenu", &v21_.v21, 0),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = GameData_212d6a8;
  v5 = (__int64)v21_.v22;
  *(_QWORD*)v3 = GameData_212d6a8 + 2;
  *(_QWORD*)(v3 + 176) = v4 + 143;
  *(_QWORD*)(v3 + 1056) = v4 + 169;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v5),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_QWORD*)(v3 + 1104) = 0;
  *(_QWORD*)(v3 + 1096) = 0;
  *(_QWORD*)(v3 + 1064) = 0;
  *(_QWORD*)(v3 + 1072) = 0;
  *(_QWORD*)(v3 + 1080) = 0;
  *(_QWORD*)(v3 + 1112) = 0;
  *(_QWORD*)(v3 + 1120) = 0;
  *(_QWORD*)(v3 + 1128) = 0;
  *(_QWORD*)(v3 + 1088) = v3 + 1096;
  *(_QWORD*)(v3 + 1136) = 0;
  *(_QWORD*)(v3 + 1152) = 0;
  *(_QWORD*)(v3 + 1160) = 0;
  *(_QWORD*)(v3 + 1168) = 0;
  *(_DWORD*)(v3 + 1144) = 1065353216;
  *(_QWORD*)(v3 + 1176) = "MID_GmapMenu_CallAnimal";
  *(_QWORD*)v3 = game_gmap_CallAnimalMenu_vtable;
  *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20932c8;
  *(_QWORD*)(v3 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_2093398;
  BasicMenuCursor_16de1f0((__int64*)v3, 3, 0),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ProcInst_657850(v3, (__int64)GameData_212c730, "CallAnimalMenu", 1, a1),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = fw_memory_HeapManager_Allocate(*v2, 88, 16, 0),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_WORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_BYTE*)(v7 + 82) = 1;
  *(_WORD*)(v7 + 80) = 257;
  *(_QWORD*)v7 = game_gmap_EmptyMaterialMenuItem_vtable;
  *(_DWORD*)(v7 + 40) = -1;
  v8 = *(_QWORD*)(v3 + 344);
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_QWORD*)(v7 + 8) = v3;
  *(_QWORD*)(v3 + 344) = v7;
  if (*(_BYTE*)(*GameData_2130e70 + 52) != 3) {
    v19_.v19[0] = GameData_20937d0;
    v19_.v19[1] = v3;
    v11 = &v21_.v21;
    v19_.v20 = v19_.v19;
    v12 =
        *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
    v21_.v23 = v19_.v19;
    v21_.v24 = (unsigned __int64*)&v21_.v21;
    v13 = *(unsigned int*)(v12 + 80);
    v21_.v21 = GameData_212d7f8[0] + 2;
    v21_.v22 = (__int128*)((char*)0x10LL + 4);
    if ((int)v13 < 1) {
      goto LABEL_17;
    }
    v14 = 0;
    v15 = 12 * v13;
    do {
      v6 = *(_QWORD*)(v12 + 8) + v14;
      if (*(_WORD*)(v6 + 2) != 0) {
        if (v21_.v24 == nullptr) {
          GameRoutine_60a310(),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        (*(void (**)(unsigned __int64*))(*v21_.v24 + 48))(v21_.v24),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v14 += 12;
    } while (v15 != v14);
    v11 = (__int64**)v21_.v24;
    if (v21_.v24 == (unsigned __int64*)&v21_.v21) {
    LABEL_17:
      v16 = 4;
    }
    else {
      if (v21_.v24 == nullptr) {
        goto LABEL_19;
      }
      v16 = 5;
    }
    ((void (*)(__int64**, __int64))(*v11)[v16])(v11, v6),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_19:
    if (v19_.v20 == v19_.v19) {
      v17 = 32;
    }
    else {
      if (v19_.v20 == nullptr) {
        goto LABEL_24;
      }
      v17 = 40;
    }
    (*(void (**)(_QWORD*, __int64))(*v19_.v20 + v17))(v19_.v20, v6),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_24;
  }
  v19_.v19[0] = 0;
  v21_.v22 = &GameData_1ab1df9;
  v21_.v21 = (__int64*)game_HashString((__int64)&GameData_1ab1df9),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  UnitItem_6e8800((__int64)v19_.v19, (unsigned __int64*)&v21_.v21),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = GameRoutine_89aac0(
      *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL),
      v19_.v19),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = fw_memory_HeapManager_Allocate(*v2, 88, 16, 0),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_WORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_DWORD*)(v10 + 40) = v9;
  *(_WORD*)(v10 + 80) = 257;
  *(_BYTE*)(v10 + 82) = 1;
  *(_QWORD*)v10 = game_gmap_anonymous_CallAnimalMenuItem_vtable;
  *(_QWORD*)(v10 + 8) = 0;
  BasicMenuCursor_16e0c00((_QWORD*)v3, v10),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_24:
  (*(void (**)(__int64))(*(_QWORD*)v3 + 1032LL))(v3),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v3;
}

__int64 game_gmap_172a580(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  unsigned __int64 v21;
  _DWORD* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    _QWORD v31[2];
    int* v32;
    char gap24_[8];
    _QWORD* v33;
  } v31_;
  struct {
    __int64 v34;
    char gap56_[4];
    int v35;
  } v34_;
  __int64 v36;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(a1 + 304);
  v34_.v35 = a2;
  if (v2 == 0 ||
      *(__int64 (***)(void))v2 != game_gmap_anonymous_CorpsUserMenu_vtable) {
    v2 = 0;
  }
  v4 = *(_QWORD*)(a1 + 312);
  if (v4 == 0 ||
      *(__int64 (***)(void))v4 != game_gmap_anonymous_CorpsPoolMenu_vtable) {
    v4 = 0;
  }
  v5 = *(_DWORD*)(v4 + 656);
  v34_.v34 = v4;
  if (v5 < 1) {
    v8 = *(_DWORD**)(v4 + 1072);
  }
  else {
    v6 = *(_QWORD*)(v4 + 672);
    v7 = *(int*)(v4 + 660);
    if (v7 < (signed __int64)(*(_QWORD*)(v4 + 680) - v6) >> 2) {
      v7 = *(int*)(v6 + 4 * v7);
    }
    v8 = (_DWORD*)(*(_QWORD*)(v4 + 1072) + 4 * v7);
  }
  if (*(_DWORD*)v8 == -1 &&
      (((__int64 (*)(__int64))GameRoutine_1728e00)(v4) & 1) != 0) {
    v12 = *(_QWORD*)(v4 + 232);
    v11 = *(_QWORD*)(v4 + 240);
    v13 = v31_.v31;
    v31_.v31[0] = GameData_20b6768;
    v31_.v31[1] = &v34_.v34;
    v31_.v33 = v31_.v31;
    v31_.v32 = &v34_.v35;
    if (v11 != v12) {
      v14 = 0;
      v15 = GameData_212e008[0];
      while (1) {
        v16 = *(_QWORD*)(v12 + 8 * v14);
        if (v16 != 0) {
          v17 = __dynamic_cast(v16, v15, &GameData_20b33d8, 0),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v17 != 0) {
            v36 = v17;
            if (v31_.v33 == nullptr) {
              goto LABEL_45;
            }
            if (((*(__int64 (**)(_QWORD*, __int64*))(*v31_.v33 + 48LL))(
                     v31_.v33, &v36) &
                 1) != 0) {
              goto LABEL_39;
            }
            v12 = *(_QWORD*)(v4 + 232);
            v11 = *(_QWORD*)(v4 + 240);
          }
        }
        if (++v14 >= (unsigned __int64)((v11 - v12) >> 3)) {
          goto LABEL_39;
        }
      }
    }
  LABEL_42:
    v29 = 32;
  LABEL_43:
    (*(void (**)(_QWORD*, __int64, __int64))(*v13 + v29))(v13, v9, v10),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return MultiMenuSequence_17871c0(a1, 1u, v34_.v35);
  }
  v18 = __dynamic_cast(*(_QWORD*)(v2 + 336), GameData_212e008[0],
                       &GameData_20b33d8, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(__int64 (**)(__int64))(*(_QWORD*)v18 + 560LL))(v18) == 0) {
    return MultiMenuSequence_17871c0(a1, 1u, v34_.v35);
  }
  if (*(int*)(v4 + 656) < 1) {
    v22 = *(_DWORD**)(v4 + 1072);
  }
  else {
    v20 = *(_QWORD*)(v4 + 672);
    v21 = *(int*)(v4 + 660);
    if (v21 < (signed __int64)(*(_QWORD*)(v4 + 680) - v20) >> 2) {
      v21 = *(int*)(v20 + 4 * v21);
    }
    v22 = (_DWORD*)(*(_QWORD*)(v4 + 1072) + 4 * v21);
  }
  if (*(_DWORD*)v22 == -1 || (int)GmapCorpsMenu_172b6e0(v4) < 1 ||
      (*(_BYTE*)(a1 + 356) & 1) == 0) {
    return MultiMenuSequence_17871c0(a1, 1u, v34_.v35);
  }
  v24 = *(_QWORD*)(v4 + 232);
  v23 = *(_QWORD*)(v4 + 240);
  v13 = v31_.v31;
  v31_.v31[0] = GameData_20b67e8;
  v31_.v31[1] = &v34_.v34;
  v31_.v33 = v31_.v31;
  v31_.v32 = &v34_.v35;
  if (v23 == v24) {
    goto LABEL_42;
  }
  v25 = 0;
  v26 = GameData_212e008[0];
  do {
    v27 = *(_QWORD*)(v24 + 8 * v25);
    if (v27 != 0) {
      v28 = __dynamic_cast(v27, v26, &GameData_20b33d8, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v28 == 0) {
        goto LABEL_33;
      }
      v36 = v28;
      if (v31_.v33 == nullptr) {
      LABEL_45:
        GameRoutine_60a310(),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v31_.v33 + 48LL))(v31_.v33,
                                                                  &v36) &
           1) != 0) {
        break;
      }
      v24 = *(_QWORD*)(v4 + 232);
      v23 = *(_QWORD*)(v4 + 240);
    }
  LABEL_33:
    ++v25;
  } while (v25 < (v23 - v24) >> 3);
LABEL_39:
  v13 = v31_.v33;
  if (v31_.v33 == v31_.v31) {
    goto LABEL_42;
  }
  if (v31_.v33 != nullptr) {
    v29 = 40;
    goto LABEL_43;
  }
  return MultiMenuSequence_17871c0(a1, 1u, v34_.v35);
}

#pragma GCC visibility pop
