#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_109da60(PSEUDO_X8, float32x4_t*,
                                             float32x4_t*, int8x16_t result);
__int64* game_8224a0(unsigned __int8);
__int64 GameHr_7e74e0(__int64);
__int64 GameHr_7e94a0(__int64);
__int64 GameRoutine_868450(__int64);
__int64 GameRoutine_90f1e0(__int64, __int64, _DWORD*, char, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 strchr(const char*, int);
bool GameRoutine_97dc00(__int64, const char*, const char*, unsigned int);
bool game_97e640(unsigned __int8*, const char*, const char*, const char*,
                 unsigned int, char);
char* game_90f590(__int64, _DWORD*, unsigned int, unsigned int, unsigned int);
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c8a8;
extern __int64* GameData_212c880[5];
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_2233740;
extern __int64 GameData_2233750;
extern __int64 GameData_2233760;
extern __int64 game_GameModeData_instance_;
long double GameRoutine_bceb90(__int64);
void GameRoutine_1013ad0(__int64);
void GameRoutine_1758ae0(__int64, __int64, unsigned int);
__int64 game_846d80(__int64 a1);
__int64 game_90f440(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4,
                    char a5);
__int64 game_90f520(__int64 a1, __int64 a2, _DWORD* a3, unsigned int a4,
                    unsigned int a5, char a6);
bool game_97e140(unsigned __int8* a1, __int64* a2, int a3, signed int a4);
bool game_97e2c0(__int64 a1, __int64* a2, unsigned int a3);
float game_e9f200(__int64 result);
void game_1000c00(__int64 a1);
void game_1013d60(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                  unsigned __int64 a11, char* a12);
__int64 game_108cfd0(int a1);
float32x4_t game_1102cc0(__int64 a1, float32x4_t result);
long double game_14a1af0(__int64 a1);

__int64 game_846d80(__int64 a1)
{
  __int64 result;

  result = (__int64)game_8224a0(0x18u);
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)result);
    if (result != 0 && *(_DWORD*)(result + 32) == 1 &&
        *(_BYTE*)(GameData_21ca2f8 +
                  *(unsigned __int8*)(GameData_21ca2f8 + 24) + 16) != 1) {
      return GameRoutine_868450(a1);
    }
  }
  return result;
}

__int64 game_90f440(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4,
                    char a5)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _DWORD* v12;
  char* v13;
  _DWORD* v15;

  if ((*(_WORD*)(a2 + 1536) & 0x40) == 0 ||
      (v8 = *(_QWORD*)(a2 + 1496), v9 = *(_QWORD*)(a2 + 1488), v8 == v9)) {
    v12 = GameData_212c8a8;
  }
  else {
    v10 = (v8 - v9) >> 2;
    v11 = 0;
    v12 = GameData_212c8a8;
    while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                8LL * (*(_DWORD*)(v9 + 4 * v11) & 0xFFF)) +
                     104LL) != 6) {
      if (v10 == ++v11) {
        goto LABEL_8;
      }
    }
    v15 = (_DWORD*)(v9 + 4LL * (unsigned int)v11);
    if (v11 > -1) {
      v12 = v15;
    }
  }
LABEL_8:
  v13 = game_90f590(a2, v12, a3, a4, 0);
  return GameRoutine_90f1e0(a1, a2, v12, a5 & 1, (__int64)v13);
}

__int64 game_90f520(__int64 a1, __int64 a2, _DWORD* a3, unsigned int a4,
                    unsigned int a5, char a6)
{
  char* v10;

  v10 = game_90f590(a2, a3, a4, a5, 0);
  return GameRoutine_90f1e0(a1, a2, a3, a6, (__int64)v10);
}

bool game_97e140(unsigned __int8* a1, __int64* a2, int a3, signed int a4)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v16;
  __int64 v17;
  char* v18;
  char* v19;
  __int64 v20;
  char* v21;

  v4 = *a2;
  if (a3 == 2) {
    if (v4 != 0) {
      v7 = GameHr_7e74e0(*a2);
      if (v7 == 0) {
        v8 = *(_QWORD*)(v4 + 392);
        if (v8 != 0) {
          v9 = *(const char**)(v8 + 40);
          return game_97e640(a1, "MID_Skill_LevelUp_Max", v9, nullptr,
                             a4 & ~(a4 >> 31), 0);
        }
      LABEL_16:
        v9 = nullptr;
        return game_97e640(a1, "MID_Skill_LevelUp_Max", v9, nullptr,
                           a4 & ~(a4 >> 31), 0);
      }
    }
    else {
      v13 = a2[1];
      if (v13 == 0) {
        goto LABEL_16;
      }
      v7 = GameHr_7e94a0(a2[1]);
      if (v7 == 0) {
        v9 = *(const char**)(v13 + 8);
        if (v9 != nullptr) {
          v16 = *(const char**)(v13 + 8);
          v17 = strchr(v16, 95);
          if (v17 != 0) {
            v18 = (const char*)(v17 + 1);
          }
          else {
            v18 = v16;
          }
          if (*v18 == 62) {
            v9 = v18 + 1;
          }
          else {
            v9 = v16;
            if (v17 != 0) {
              v9 = (const char*)(v17 + 1);
            }
          }
        }
        return game_97e640(a1, "MID_Skill_LevelUp_Max", v9, nullptr,
                           a4 & ~(a4 >> 31), 0);
      }
    }
    v9 = *(const char**)(v7 + 32);
    return game_97e640(a1, "MID_Skill_LevelUp_Max", v9, nullptr,
                       a4 & ~(a4 >> 31), 0);
  }
  if (v4 == 0) {
    v14 = a2[1];
    if (v14 == 0) {
      goto LABEL_18;
    }
    v10 = GameHr_7e94a0(a2[1]);
    if (v10 == 0) {
      v12 = *(const char**)(v14 + 8);
      if (v12 != nullptr) {
        v19 = *(const char**)(v14 + 8);
        v20 = strchr(v19, 95);
        if (v20 != 0) {
          v21 = (const char*)(v20 + 1);
        }
        else {
          v21 = v19;
        }
        if (*v21 == 62) {
          v12 = v21 + 1;
        }
        else {
          v12 = v19;
          if (v20 != 0) {
            v12 = (const char*)(v20 + 1);
          }
        }
      }
      return GameRoutine_97dc00((__int64)a1, "MID_Skill_LevelUp", v12, a4);
    }
  LABEL_15:
    v12 = *(const char**)(v10 + 32);
    return GameRoutine_97dc00((__int64)a1, "MID_Skill_LevelUp", v12, a4);
  }
  v10 = GameHr_7e74e0(*a2);
  if (v10 != 0) {
    goto LABEL_15;
  }
  v11 = *(_QWORD*)(v4 + 392);
  if (v11 == 0) {
  LABEL_18:
    v12 = nullptr;
    return GameRoutine_97dc00((__int64)a1, "MID_Skill_LevelUp", v12, a4);
  }
  v12 = *(const char**)(v11 + 40);
  return GameRoutine_97dc00((__int64)a1, "MID_Skill_LevelUp", v12, a4);
}

bool game_97e2c0(__int64 a1, __int64* a2, unsigned int a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  char* v11;
  __int64 v12;
  char* v13;

  v3 = *a2;
  if (*a2 != 0) {
    v6 = GameHr_7e74e0(*a2);
    if (v6 == 0) {
      v7 = *(_QWORD*)(v3 + 392);
      if (v7 != 0) {
        v8 = *(const char**)(v7 + 40);
        return GameRoutine_97dc00(a1, "MID_SV_ClassChange", v8, a3);
      }
    LABEL_8:
      v8 = nullptr;
      return GameRoutine_97dc00(a1, "MID_SV_ClassChange", v8, a3);
    }
    goto LABEL_7;
  }
  v9 = a2[1];
  if (v9 == 0) {
    goto LABEL_8;
  }
  v6 = GameHr_7e94a0(a2[1]);
  if (v6 != 0) {
  LABEL_7:
    v8 = *(const char**)(v6 + 32);
    return GameRoutine_97dc00(a1, "MID_SV_ClassChange", v8, a3);
  }
  v8 = *(const char**)(v9 + 8);
  if (v8 != nullptr) {
    v11 = *(const char**)(v9 + 8);
    v12 = strchr(v11, 95);
    if (v12 != 0) {
      v13 = (const char*)(v12 + 1);
    }
    else {
      v13 = v11;
    }
    if (*v13 == 62) {
      v8 = v13 + 1;
    }
    else {
      v8 = v11;
      if (v12 != 0) {
        v8 = (const char*)(v12 + 1);
      }
    }
  }
  return GameRoutine_97dc00(a1, "MID_SV_ClassChange", v8, a3);
}

float game_e9f200(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;

  v1 = *(_QWORD*)(result + 8);
  if (v1 == 0) {
    return 0x1.3333340000000p-1f;
  }
  v2 = *(_QWORD*)(v1 + 8);
  v3 = *(_QWORD*)(result + 16);
  if (v2 == -1 | v3 == 0) {
    return 0x1.3333340000000p-1f;
  }
  v6 = *(_QWORD*)(v3 + 392);
  v7 = *(_QWORD*)(v3 + 400);
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v6 != 0) {
    v8 = *(_QWORD*)(v3 + 392);
    v9 = *(_QWORD*)(v3 + 400);
    if (v9 == 0) {
      v5 = *(float*)(*(_QWORD*)(v8 + 11792) + 40LL) *
           (float)(*(float*)(v8 + 32) *
                   (float)(*(float*)(v8 + 40) +
                           (float)((float)(0x1.0000000000000p+0f -
                                           *(float*)(v8 + 40)) *
                                   *(float*)(v3 + 336))));
      if (v7 == 0) {
        return v5;
      }
      goto LABEL_18;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(float*)(*(_QWORD*)(v8 + 11792) + 40LL) *
         (float)(*(float*)(v8 + 32) *
                 (float)(*(float*)(v8 + 40) +
                         (float)((float)(0x1.0000000000000p+0f -
                                         *(float*)(v8 + 40)) *
                                 *(float*)(v3 + 336))));
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v10 = v5;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
      v5 = v10;
      if (v7 == 0) {
        return v5;
      }
      goto LABEL_18;
    }
  }
  else {
    v5 = 0x1.3333340000000p-1f;
  }
  if (v7 == 0) {
    return v5;
  }
LABEL_18:
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    return v11;
  }
  return v5;
}

void game_1000c00(__int64 a1)
{
  GameRoutine_1758ae0(
      a1, *(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL) + 16LL, 4u);
}

void game_1013d60(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                  unsigned __int64 a11, char* a12)
{
  int v12;
  int v14;

  v12 = *(_DWORD*)(a1 + 8);
  if ((a2 & 1) != 0) {
    v14 = 2;
  }
  else {
    v14 = 0;
  }
  *(_DWORD*)(a1 + 8) = v12 & 0xFFFFFFFD | v14;
  game_VariableManager_SetFlag((__int64)&GameData_2233760, (v12 & 8) != 0);
  game_VariableManager_SetFlag((__int64)&GameData_2233740,
                               (*(_DWORD*)(a1 + 8) & 4) != 0);
  game_VariableManager_SetFlag((__int64)&GameData_2233750,
                               (*(_DWORD*)(a1 + 8) & 2) != 0);
  GameRoutine_1013ad0(a1);
}

__int64 game_108cfd0(int a1)
{
  __int64 result;
  unsigned __int16 v3;
  bool v4;
  int v5;

  result = 0;
  if (a1 > 603384485) {
    v4 = (unsigned int)(a1 - 989295305) > 0x21 |
         ((1LL << ((a1 - 989295305) & 63)) & 0x200040007LL) == 0;
    if (v4 && ((unsigned int)(a1 - 603384486) > 0x12 ||
               ((1 << ((a1 - 603384486) & 31)) & 0x40007) == 0)) {
      v5 = 1525034596;
      goto LABEL_20;
    }
  }
  else if (a1 > 309207190) {
    if (((unsigned int)(a1 - 603384300) > 0x12 ||
         ((1 << ((a1 - 603384300) & 31)) & 0x40007) == 0) &&
        a1 != 309207191) {
      v3 = 8361;
      goto LABEL_19;
    }
  }
  else if (((unsigned int)(a1 + 2068235592) > 0x12 ||
            ((1 << ((a1 + 2068235592) & 31)) & 0x40003) == 0) &&
           a1 != -1790555660) {
    v3 = 8175;
  LABEL_19:
    v5 = v3 | 0x126E0000;
  LABEL_20:
    if (a1 != v5) {
      return result;
    }
  }
  return 1;
}

float32x4_t game_1102cc0(__int64 a1, float32x4_t result)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float32x4_t v6;
  float32x4_t v7;
  __int64 v8;
  _QWORD* v9;
  int v11;
  float v12;
  bool v13;
  int v14;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  int v27;
  float v28;
  bool v29;
  int v30;
  float32x4_t v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  int8x16_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  float v40;
  float v41;
  float v42;
  float v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  float v48;
  __int64 v49;
  __int64 v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float32x4_t v57;
  __int64 v58;
  __int128 v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  int8x16_t v64;
  float32x4_t v65;
  float32x4_t v66;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 80);
  if (v3 == 0) {
    return result;
  }
  v4 = *(_QWORD*)(v2 + 88);
  if (*(_QWORD*)(v3 + 8) == -1 | v4 == 0) {
    return result;
  }
  *(_DWORD*)(a1 + 40) = 0;
  v6 = (__typeof__(v6)){0};
  v7 = (__typeof__(v7)){0};
  v8 = *(_QWORD*)(v2 + 80);
  if (v8 != 0) {
    v9 = *(_QWORD**)(v2 + 88);
    if (*(_QWORD*)(v8 + 8) != -1 & v9 != nullptr) {
      v7 = *(float32x4_t*)(v9[1] + 304LL);
      v11 = *(_DWORD*)(v9[9] + 120LL);
      {
        __typeof__(v12) z_ = (__typeof__(v12)){0};
        LODWORD(z_) = DWORDn(*(_QWORD*)(v9[1] + 304LL),
                             sizeof(*(_QWORD*)(v9[1] + 304LL)) / 4 - 1);
        v12 = z_;
      }
      LANES128(v7).n128_u32[3] = 0;
      if (v11 > -77626399) {
        v13 = v11 == 1400556095;
        v14 = -77626398;
      }
      else {
        v13 = v11 == -972548316;
        v14 = -93581017;
      }
      if (v13 || v11 == v14) {
        v16 = 0x1.0000000000000p-1f;
      }
      else {
        v44 = v9[49];
        v45 = v9[50];
        if (v45 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                    memory_order_relaxed);
          LANES128(v7).n128_f32[1] =
              v12 + (float)(PSEUDO_UNFUSED(
                        *(float*)(*(_QWORD*)(v44 + 11792) + 36LL) *
                        (float)(*(float*)(v44 + 32) *
                                (float)(*(float*)(v44 + 40) +
                                        (float)(0x1.0000000000000p+0f -
                                                *(float*)(v44 + 40))))));
          if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v46 = a1;
            v62 = v7;
            (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
            std___1___shared_weak_count___release_weak(v45);
            v7 = v62;
            v6 = (__typeof__(v6)){0};
            a1 = v46;
          }
          goto LABEL_21;
        }
        v16 = *(float*)(*(_QWORD*)(v44 + 11792) + 36LL) *
              (float)(*(float*)(v44 + 32) *
                      (float)(*(float*)(v44 + 40) +
                              (float)(0x1.0000000000000p+0f -
                                      *(float*)(v44 + 40))));
      }
      LANES128(v7).n128_f32[1] = v12 + v16;
    }
  }
LABEL_21:
  if (GameData_21ec7b0 == 0) {
    goto LABEL_42;
  }
  v17 = GameData_21ec7b0 +
        24LL * (((*(int*)(*(_QWORD*)(a1 + 8) + 96LL) - 1) & 0xFFFFFFFD) != 0);
  v18 = *(_QWORD*)(v17 + 32);
  if (v18 == 0) {
    goto LABEL_42;
  }
  v61 = v7;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                            memory_order_relaxed);
  v19 = *(_QWORD*)(v17 + 40);
  v20 = *(_QWORD*)(v18 + 8) == -1 | v19 == 0;
  if (v20 || (v21 = *(_QWORD*)(v19 + 80)) == 0 ||
      (*(_QWORD*)(v21 + 8) != -1 ? (v22 = *(_QWORD*)(v19 + 88) == 0)
                                 : (v22 = true),
       v22 || *(_QWORD*)(v18 + 8) == -1)) {
    std___1___shared_weak_count___release_weak(v18);
    goto LABEL_41;
  }
  std___1___shared_weak_count___release_weak(v18);
  v23 = *(_QWORD*)(v19 + 80);
  if (v23 == 0) {
  LABEL_41:
    v7 = v61;
    v6 = (__typeof__(v6)){0};
    goto LABEL_42;
  }
  v24 = *(_QWORD*)(v23 + 8);
  v25 = *(_QWORD**)(v19 + 88);
  v7 = v61;
  v6 = (__typeof__(v6)){0};
  if (v24 != -1 & v25 != nullptr) {
    v6 = *(float32x4_t*)(v25[1] + 304LL);
    v27 = *(_DWORD*)(v25[9] + 120LL);
    {
      __typeof__(v28) z_ = (__typeof__(v28)){0};
      LODWORD(z_) = DWORDn(*(_QWORD*)(v25[1] + 304LL),
                           sizeof(*(_QWORD*)(v25[1] + 304LL)) / 4 - 1);
      v28 = z_;
    }
    LANES128(v6).n128_u32[3] = 0;
    if (v27 > -77626399) {
      v29 = v27 == 1400556095;
      v30 = -77626398;
    }
    else {
      v29 = v27 == -972548316;
      v30 = -93581017;
    }
    if (v29 || v27 == v30) {
      v48 = 0x1.0000000000000p-1f;
    }
    else {
      v49 = v25[49];
      v50 = v25[50];
      if (v50 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                                  memory_order_relaxed);
        LANES128(v6).n128_f32[1] =
            v28 + (float)(PSEUDO_UNFUSED(
                      *(float*)(*(_QWORD*)(v49 + 11792) + 36LL) *
                      (float)(*(float*)(v49 + 32) *
                              (float)(*(float*)(v49 + 40) +
                                      (float)(0x1.0000000000000p+0f -
                                              *(float*)(v49 + 40))))));
        if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v60 = v6;
          (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
          std___1___shared_weak_count___release_weak(v50);
          v6 = v60;
          v7 = v61;
        }
        goto LABEL_42;
      }
      v48 =
          *(float*)(*(_QWORD*)(v49 + 11792) + 36LL) *
          (float)(*(float*)(v49 + 32) *
                  (float)(*(float*)(v49 + 40) + (float)(0x1.0000000000000p+0f -
                                                        *(float*)(v49 + 40))));
    }
    LANES128(v6).n128_f32[1] = v28 + v48;
  }
LABEL_42:
  v31 = vsubq_f32(v6, v7);
  v32 = vmulq_f32(v31, v31);
  LANES128(v32).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
          .n64_u64[0];
  LANES128(v32).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
          .n64_u64[0];
  LANES128(v32).n128_u64[1] = LANES128(v32).n128_u64[0];
  v33 = vrsqrteq_f32(v32);
  v34 = vmulq_f32(v33, vrsqrtsq_f32(v33, vmulq_f32(v32, v33)));
  v35 = vbicq_s8(
      vmulq_f32(v31, vmulq_f32(v34, vrsqrtsq_f32(v34, vmulq_f32(v32, v34)))),
      vceqzq_f32(v32));
  v66 = v35;
  LANES128(v65).n128_u64[0] = LANES128(v35).n128_u32[0];
  LANES128(v65).n128_u64[1] = LANES128(v35).n128_u64[1];
  v36 = vmulq_f32(v65, v65);
  LANES128(v36).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
          .n64_u64[0];
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
          .n64_u64[0];
  LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
  v37 = vrsqrteq_f32(v36);
  v38 = vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v36, v37)));
  v65 = vbicq_s8(
      vmulq_f32(v65, vmulq_f32(v38, vrsqrtsq_f32(v38, vmulq_f32(v36, v38)))),
      vceqzq_f32(v36));
  v39 = vmulq_f32(v35, v65);
  LANES128(v39).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v39, v39, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
          .n64_u64[0];
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v39).n128_f32[0] > 0x1.0000000000000p+0f) {
    v40 = 0x1.0000000000000p+0f;
  }
  else {
    v40 = LANES128(v39).n128_f32[0];
  }
  if (LANES128(v39).n128_f32[0] < -0x1.0000000000000p+0f) {
    v40 = -0x1.0000000000000p+0f;
  }
  v41 = sqrtf(0x1.0000000000000p+0f - (float)(v40 * v40));
  if (v40 >= 0x0.0p+0f) {
    v51 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v52 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v53 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    v54 = v40 / v41;
    v55 = v41 / v40;
    PSEUDO_LOW_LANE128(v39, n128_f32,
                       v55 *
                           (float)((float)((float)((float)((float)(v53 +
                                                                   (float)((float)((
                                                                                       float)((
                                                                                                  float)(v52 + (float)((float)((float)((float)(v51 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v55 * v55)) - *((float*)GameData_212c2f0 + 1)) * (float)(v55 * v55))) * (float)(v55 * v55)) - *(
                                                                                                                                                                                                                                                                                                                   float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                       (float)(v55 *
                                                                                                                               v55))) *
                                                                                              (float)(v55 *
                                                                                                      v55)) -
                                                                                   *(float*)((char*)((
                                                                                                 __int128*)0x10LL) +
                                                                                             (_QWORD)
                                                                                                 GameData_212c2f0 +
                                                                                             4)) *
                                                                           (float)(v55 *
                                                                                   v55))) *
                                                           (float)(v55 * v55)) -
                                                   *(float*)((char*)((
                                                                 __int128*)0x10LL) +
                                                             (_QWORD)
                                                                 GameData_212c2f0 +
                                                             12)) *
                                           (float)(v55 * v55)) +
                                   0x1.0000000000000p+0f));
    v56 =
        0x1.921fb60000000p+0f -
        (float)(PSEUDO_UNFUSED(
            v54 * (float)((
                              float)((float)((float)((float)(v53 + (float)((float)((
                                                                                       float)((
                                                                                                  float)(v52 + (float)((float)((float)((float)(v51 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v54 * v54)) - *((float*)GameData_212c2f0 + 1)) * (float)(v54 * v54))) * (float)(v54 * v54)) - *(
                                                                                                                                                                                                                                                                                                                   float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                       (float)(v54 *
                                                                                                                               v54))) *
                                                                                              (float)(v54 *
                                                                                                      v54)) -
                                                                                   *(float*)((char*)((
                                                                                                 __int128*)0x10LL) +
                                                                                             (_QWORD)
                                                                                                 GameData_212c2f0 +
                                                                                             4)) *
                                                                           (float)(v54 *
                                                                                   v54))) *
                                                     (float)(v54 * v54)) -
                                             *(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                       (_QWORD)
                                                           GameData_212c2f0 +
                                                       12)) *
                                     (float)(v54 * v54)) +
                          0x1.0000000000000p+0f)));
    if (v40 <= 0x1.6a09e60000000p-1f) {
      PSEUDO_LOW_LANE128(v39, n128_f32, v56);
    }
  }
  else if (v40 >= -0x1.6a09e60000000p-1f) {
    v43 = (float)-v40 / v41;
    PSEUDO_LOW_LANE128(
        v39, n128_f32,
        (float)(PSEUDO_UNFUSED(
            v43 *
            (float)((
                        float)((float)-(float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                         (_QWORD)
                                                             GameData_212c2f0 +
                                                         12) -
                                               (float)((
                                                           float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((
                                                                                                                                                                                                                                                                                                               char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                                                               GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v43 *
                                                                                                                                                                                                                                                                                                                                                                                                v43))) *
                                                                                                                                                                                                                                                                                                       (float)(v43 *
                                                                                                                                                                                                                                                                                                               v43))) *
                                                                                                                                                                                                                                                                                    (float)(v43 *
                                                                                                                                                                                                                                                                                            v43))) *
                                                                                                                                                                                                                                                            (float)(v43 *
                                                                                                                                                                                                                                                                    v43))) *
                                                                                                                                                                         (float)(v43 *
                                                                                                                                                                                 v43))) *
                                                                          (float)(v43 *
                                                                                  v43))) *
                                                       (float)(v43 * v43))) *
                               (float)(v43 * v43)) +
                    0x1.0000000000000p+0f))) +
            0x1.921fb60000000p+0f);
  }
  else {
    v42 = (float)-v41 / v40;
    PSEUDO_LOW_LANE128(
        v39, n128_f32,
        0x1.921fb60000000p+1f -
            (float)(PSEUDO_UNFUSED(
                v42 *
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c2f0 +
                                                     12) -
                                           (float)((
                                                       float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8) + (float)((float)-(
                                                                                                                                                 float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(
                                                                                                                                                                                                                                                   float*)((char*)((
                                                                                                                                                                                                                                                               __int128*)0x10LL) +
                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                               GameData_212c2f0) +
                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                           float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                                                       _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                                                                   (_QWORD)
                                                                                                                                                                                                                                                                                                                                                                       GameData_212c2f0) +
                                                                                                                                                                                                                                                                                                                                                         (float)((
                                                                                                                                                                                                                                                                                                                                                                     float)-(float)(*((float*)
                                                                                                                                                                                                                                                                                                                                                                                          GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                                      1) -
                                                                                                                                                                                                                                                                                                                                                                                    (float)(*(float*)
                                                                                                                                                                                                                                                                                                                                                                                                GameData_212c2f0 *
                                                                                                                                                                                                                                                                                                                                                                                            (float)(v42 *
                                                                                                                                                                                                                                                                                                                                                                                                    v42))) *
                                                                                                                                                                                                                                                                                                                                                                 (float)(v42 *
                                                                                                                                                                                                                                                                                                                                                                         v42))) *
                                                                                                                                                                                                                                                                                                                                                 (float)(v42 *
                                                                                                                                                                                                                                                                                                                                                         v42))) *
                                                                                                                                                                                                                                                       (float)(v42 *
                                                                                                                                                                                                                                                               v42))) *
                                                                                                                                                                                                                                       (float)(v42 *
                                                                                                                                                                                                                                               v42))) *
                                                                                                                                             (float)(v42 *
                                                                                                                                                     v42))) *
                                                   (float)(v42 * v42))) *
                                (float)(v42 * v42)) +
                        0x1.0000000000000p+0f))));
  }
  if (LANES128(v39).n128_f32[0] > 0x1.6571840000000p-2f) {
    v63 = v7;
    PSEUDO_LOW_LANE128(v39, n128_f32,
                       0x1.6571840000000p-2f / LANES128(v39).n128_f32[0]);
    game_109da60((void*)(&v64), &v65, &v66, v39);
    v7 = v63;
    LANES128(v66).n128_u64[0] = LANES128(v64).n128_u64[0];
    LANES128(v35).n128_u64[0] = LANES128(v64).n128_u64[0];
    LANES128(v35).n128_u64[1] = LANES128(v64).n128_u32[2];
  }
  LANES128(v57).n128_u64[0] = 0x41A0000041A00000LL;
  LANES128(v57).n128_u64[1] = 0x41A0000041A00000LL;
  v58 = *(_QWORD*)(v4 + 112);
  *(_QWORD*)(v58 + 156) = 0x3F8000003F800000LL;
  *(_DWORD*)(v58 + 164) = 1065353216;
  result = vaddq_f32(v7, vmulq_f32(v35, v57));
  *(_QWORD*)(v58 + 128) = LANES128(result).n128_u64[0];
  v59 = *(_OWORD*)(v58 + 128);
  *((_QWORD*)&v59 + 1) = LANES128(result).n128_u32[2];
  *(_OWORD*)(v58 + 128) = v59;
  return result;
}

long double game_14a1af0(__int64 a1)
{
  return GameRoutine_bceb90(*(_QWORD*)(**(_QWORD**)a1 + 40LL));
}

#pragma GCC visibility pop
