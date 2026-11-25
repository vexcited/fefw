#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_cutscene_17ffa60(PSEUDO_X8, __int64,
                                                      unsigned __int64);
__int64 GameRoutine_17fd3a0(__int64 result, __int64, const char*);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_ce5d20(__int64, __int64, __int64, __int64, unsigned __int64,
                           char);
__int64 GameRoutine_ce6740(__int64, __int64);
__int64 GameRoutine_ecb40(void);
__int64 fs_Manager_createFileAsync_fs_File(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_cutscene_17ffbf0(__int64, unsigned __int64);
__int64 nn_oe_SetCpuBoostMode(_QWORD);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_ClearEvent(__int64);
__int64 nn_os_ReleaseReadLock(__int64);
__int64 nn_os_SignalEvent(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_20dded8;
extern _UNKNOWN GameData_21f4d48;
extern __int64 (***GameData_212c3c8)();
extern __int64 (**game_cutscene_anonymous_DefaultCamera_vtable_ptr)();
extern __int64 (*GameData_1fd7c18[])();
extern __int64 (*GameData_20df330[])();
extern __int64 (*GameData_20df380[])();
extern __int64 (*GameData_2131e80)();
extern __int64* GameData_212ece8;
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_212c638;
extern __int64 GameData_21c6978;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 snd_g_fileIndex;
extern char GameData_21c9699;
extern int GameData_21f4d44;
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_1802fe0(_QWORD*, float, float);
unsigned __int128
GameRoutine_1802fe0_pair(_QWORD*, float, float) __asm__("GameRoutine_1802fe0");
unsigned __int64 strlen(const char*);
void GameRoutine_180db80(__int64*, __int64, __int64);
void GameRoutine_1811e40();
void GameRoutine_bc6f60(__int64, __int64);
void GameRoutine_ce5c00(__int64);
void __attribute__((noreturn)) GameRoutine_1800840();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __cxa_guard_release(__int64);
void game_cutscene_ActorList_SetupSorted(__int64, __int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
float game_cutscene_17fb4a0(__int64* a1, float a2, float a3);
__int64 game_cutscene_17ffec0(__int64 result, const char* a2);
__int64 game_cutscene_1800020(__int64 result, const char* a2);
__int64 game_cutscene_1811840(__int64 result);
__int64 game_cutscene_1811fa0(__int64 a1, float a2, float a3);
void game_cutscene_181a480(__int64 a1, char a2);
__int64 game_cutscene_181a7e0(__int64 a1, char a2);
float game_cutscene_181acc0(__int64 result);
__int64 game_ce5d20(__int64, __int64, __int64, __int64, unsigned __int64, char);
extern __int64 (*game_17e70c0_ptr)();
void GameHr_ce5c00(__int64);
__int64 GameRoutine_1811e80();
__int64 game_cutscene_17ffec0_alt1(__int64 result, __int64, __int64);
__int64 game_cutscene_1800020_alt1(__int64 result, __int64, __int64);

float game_cutscene_17fb4a0(__int64* a1, float a2, float a3)
{
  float v7;
  bool v9;
  float v10;
  float v11;
  float v12;
  __int64 v13;
  __int64 v14;
  float result;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  float v20;
  unsigned __int64 v21;
  unsigned int* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned int v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  int v30;
  unsigned __int64 v31;
  float v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v13 = *a1;
  v14 = a1[1];
  result = 0x0.0p+0f;
  v17 = v14 - *a1;
  v18 = v17 >> 2;
  v19 = (v17 >> 2) / 3uLL;
  if ((_DWORD)v19 == 0) {
    return result;
  }
  if ((int)v19 <= 1) {
    if ((_DWORD)v19 != 1) {
      return result;
    }
    if (v14 != v13 && v18 > 1 && v17 != 8) {
      return *(float*)(v13 + 4);
    }
    goto LABEL_30;
  }
  v20 = a3 - a2;
  v21 = ((v17 >> 2) / 3uLL) & 0x7FFFFFFF;
  v22 = (unsigned int*)(v13 + 12);
  v23 = 1;
  v24 = 5;
  while (1) {
    if (v23 <= v21) {
      v28 = (int)v24 - 5;
      if (v18 <= v28) {
        goto LABEL_30;
      }
      v29 = (int)v24 - 4;
      if (v18 <= v29 || v18 <= (int)v24 - 3) {
        goto LABEL_30;
      }
      v25 = *(unsigned int*)(v13 + 4 * v28) |
            ((unsigned __int64)*(unsigned int*)(v13 + 4 * v29) << 32);
      if (v23 >= v21) {
      LABEL_19:
        v27 = 0;
        v26 = 0;
        goto LABEL_20;
      }
    }
    else {
      v25 = 0;
      if (v23 >= v21) {
        goto LABEL_19;
      }
    }
    if (v18 <= v24 - 2 || v18 <= v24 - 1 || v18 <= v24) {
      goto LABEL_30;
    }
    v26 = *v22 | ((unsigned __int64)v22[1] << 32);
    v27 = (int)*(float*)(v13 + 4 * v24);
  LABEL_20:
    if (!(v20 > *(float*)&v26)) {
      break;
    }
    ++v23;
    v22 += 3;
    v24 += 3LL;
    if (v21 == v23) {
      v30 = 3 * v19;
      if (v18 > v30 - 3) {
        v31 = v30 - 2;
        if (v18 > v31 && v18 > v30 - 1) {
          return *(float*)(v13 + 4 * v31);
        }
      }
    LABEL_30:
      GameRoutine_1800840();
    }
  }
  result = *((float*)&v25 + 1);
  v32 = (float)(v20 - *(float*)&v25) / (float)(*(float*)&v26 - *(float*)&v25);
  if (v27 > 5) {
    v34 = 0;
    v35 = 0;
  }
  else {
    v33 = (__int64)*(&GameData_20dded8 + v27);
    v34 = *(_QWORD*)(v33 + 8);
    v35 = *(_QWORD*)(v33 + 16);
  }
  if (v35 > 6) {
    if (v35 != 7) {
      if (v35 != 9) {
        if (v35 == 10 && *(_QWORD*)v34 == 0x745368746F6F6D53LL &&
            *(_WORD*)(v34 + 8) == 28773) {
          v32 = (float)(v32 * v32) *
                (float)((float)(v32 * -0x1.0000000000000p+1f) +
                        0x1.8000000000000p+1f);
        }
        goto LABEL_68;
      }
      if (*(_QWORD*)v34 != 0x754F6E4965736145LL || *(_BYTE*)(v34 + 8) != 116) {
        goto LABEL_68;
      }
      v9 = v32 < 0x1.0000000000000p-1f;
      v10 = (float)(v32 * -0x1.0000000000000p+1f) + 0x1.0000000000000p+1f;
      v32 = v32 * (float)(v32 + v32);
      v11 =
          (float)(PSEUDO_UNFUSED((float)(v10 * v10) * -0x1.0000000000000p-1f)) +
          0x1.0000000000000p+0f;
      if (!v9) {
        v32 = v11;
      }
      v12 = 0x1.0000000000000p+0f - v32;
      return (float)(PSEUDO_UNFUSED(*((float*)&v26 + 1) * v32)) +
             (float)(*((float*)&v25 + 1) * v12);
    }
    if (*(_DWORD*)v34 != 1702060357 || *(_DWORD*)(v34 + 3) != 1953845093) {
      goto LABEL_68;
    }
    v7 = 0x1.0000000000000p+0f;
    v32 = 0x1.0000000000000p+0f - (float)((float)(0x1.0000000000000p+0f - v32) *
                                          (float)(0x1.0000000000000p+0f - v32));
  LABEL_69:
    v12 = v7 - v32;
    return (float)(PSEUDO_UNFUSED(*((float*)&v26 + 1) * v32)) +
           (float)(*((float*)&v25 + 1) * v12);
  }
  if (v35 != 4) {
    if (v35 == 6 &&
        (*(_DWORD*)v34 != 1701734732 || *(_WORD*)(v34 + 4) != 29281) &&
        *(_DWORD*)v34 == 1702060357 && *(_WORD*)(v34 + 4) == 28233) {
      v32 = v32 * v32;
    }
  LABEL_68:
    v7 = 0x1.0000000000000p+0f;
    goto LABEL_69;
  }
  if (*(_DWORD*)v34 != 1885697107) {
    goto LABEL_68;
  }
  if (v32 >= 0x1.0000000000000p+0f) {
    return *((float*)&v26 + 1);
  }
  return result;
}

__int64 game_cutscene_17ffec0(__int64 result, const char* a2)
{
  __int64 v2;
  int* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;
  struct {
    __int64 v15;
    __int64 v16;
  } v15_;

  if (result == 0) {
    v10 = -1;
  LABEL_24:
    LODWORD(v13_.v14) = v10;
    return result;
  }
  v2 = result;
  GameRoutine_17fd3a0((__int64)&v13_.v13, result, a2);
  result = v13_.v13;
  if (v13_.v13 == 0 || (_DWORD)v13_.v14 == -1) {
    GameRoutine_17fd3a0((__int64)&v15_.v15, v2, "Loc_C_Trans");
    result = v15_.v15;
    if (v15_.v15 == 0 || (_DWORD)v15_.v16 == -1) {
      v15_.v15 = 0;
      LODWORD(v15_.v16) = -1;
      v4 = &GameData_21f4d44;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                                memory_order_acquire) &
           1) == 0) {
        v12 = __cxa_guard_acquire((__int64)&GameData_21f4d48);
        v4 = &GameData_21f4d44;
        if (v12 != 0) {
          GameData_21f4d44 = wld_Crc32(0, "ModelModule", 0xBu);
          __cxa_guard_release((__int64)&GameData_21f4d48);
          v4 = &GameData_21f4d44;
        }
      }
      v5 = *(_QWORD*)(v2 + 512);
      v6 = v5;
      while (v6 != *(_QWORD*)(v2 + 504)) {
        v7 = *(_DWORD*)(v6 - 16);
        v6 -= 16;
        v5 -= 16;
        if (v7 == *v4) {
          if (*(_QWORD*)(v2 + 512) != v5) {
            v8 = *(_QWORD*)(v5 + 8);
            if (v8 != 0) {
              v9 = *(_QWORD*)(v8 + 24);
              if (v9 != 0) {
                result = *(_QWORD*)(v9 + 168);
                goto LABEL_19;
              }
            }
          }
          break;
        }
      }
      result = 0;
    LABEL_19:
      if (result != 0) {
        v11 = 0;
      }
      else {
        v11 = -1;
      }
      LODWORD(v15_.v16) = v11;
    }
    v10 = v15_.v16;
    goto LABEL_24;
  }
  return result;
}

__int64 game_cutscene_1800020(__int64 result, const char* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;

  if (result == 0) {
    v9 = -1;
  LABEL_24:
    LODWORD(v11_.v12) = v9;
    return result;
  }
  v2 = result;
  GameRoutine_17fd3a0((__int64)&v11_.v11, result, a2);
  result = v11_.v11;
  if (v11_.v11 == 0 || (_DWORD)v11_.v12 == -1) {
    GameRoutine_17fd3a0((__int64)&v13_.v13, v2, "Anime");
    result = v13_.v13;
    if (v13_.v13 == 0 || (_DWORD)v13_.v14 == -1) {
      v13_.v13 = 0;
      LODWORD(v13_.v14) = -1;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21f4d48) != 0) {
        GameData_21f4d44 = wld_Crc32(0, "ModelModule", 0xBu);
        __cxa_guard_release((__int64)&GameData_21f4d48);
      }
      v4 = *(_QWORD*)(v2 + 512);
      v5 = v4;
      while (v5 != *(_QWORD*)(v2 + 504)) {
        v6 = *(_DWORD*)(v5 - 16);
        v5 -= 16;
        v4 -= 16;
        if (v6 == GameData_21f4d44) {
          if (*(_QWORD*)(v2 + 512) != v4) {
            v7 = *(_QWORD*)(v4 + 8);
            if (v7 != 0) {
              v8 = *(_QWORD*)(v7 + 24);
              if (v8 != 0) {
                result = *(_QWORD*)(v8 + 168);
                goto LABEL_19;
              }
            }
          }
          break;
        }
      }
      result = 0;
    LABEL_19:
      if (result != 0) {
        v10 = 0;
      }
      else {
        v10 = -1;
      }
      LODWORD(v13_.v14) = v10;
    }
    v9 = v13_.v14;
    goto LABEL_24;
  }
  return result;
}

__int64 game_cutscene_1811840(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64* i;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  bool v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  bool v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  bool v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned int v61;
  bool v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  _QWORD* v66;
  __int64* v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  struct {
    _QWORD v73[4];
    _QWORD* v74;
  } v73_;

  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v61 = COERCE_AS(__typeof__(v61),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = result;
  if ((*(_BYTE*)(result + 200) & 1) != 0) {
    goto LABEL_21;
  }
  if (*(_BYTE*)(*(_QWORD*)(result + 24) + 8LL) != 1) {
    goto LABEL_15;
  }
  v2 = *(_QWORD*)(GameData_21c6978 + 32);
  if (*(_QWORD*)(GameData_21c6978 + 24) == v2) {
    v3 = 0;
    result = GameRoutine_ecb40(),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((result & 1) == 0) {
      goto LABEL_13;
    }
  }
  else {
    v3 = *(_QWORD*)(v2 - 8);
    result = GameRoutine_ecb40(),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((result & 1) == 0) {
      goto LABEL_13;
    }
  }
  v4 = *(_QWORD*)(v3 + 64);
  if (v4 == 0) {
  LABEL_15:
    v7 = *(__int64**)(v1 + 176);
    for (i = *(__int64**)(v1 + 184); v7 != i; v7 += 2) {
      v9 = std___1___shared_weak_count_lock(v7[1]),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = (*(__int64 (**)(__int64))(*(_QWORD*)*v7 + 48LL))(*v7),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = std___1___shared_weak_count___release_weak(v9),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    *(_BYTE*)(v1 + 200) = 1;
  LABEL_21:
    if ((*(_BYTE*)(v1 + 201) & 1) != 0) {
      return result;
    }
    v10 = *(__int64**)(v1 + 176);
    v11 = *(__int64**)(v1 + 184);
    if (v10 != v11) {
      do {
        v12 = std___1___shared_weak_count_lock(v10[1]),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64))(*(_QWORD*)*v10 + 16LL))(*v10),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v12),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v10 += 2;
      } while (v10 != v11);
      v10 = *(__int64**)(v1 + 176);
      v11 = *(__int64**)(v1 + 184);
    }
    if (v10 != v11) {
      do {
        v13 = std___1___shared_weak_count_lock(v10[1]),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = (*(__int64 (**)(__int64))(*(_QWORD*)*v10 + 24LL))(*v10),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v14 = result;
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          result = std___1___shared_weak_count___release_weak(v13),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if ((v14 & 1) == 0) {
          return result;
        }
        v10 += 2;
      } while (v10 != v11);
      v10 = *(__int64**)(v1 + 176);
      v11 = *(__int64**)(v1 + 184);
    }
    for (; v10 != v11; v10 += 2) {
      v15 = std___1___shared_weak_count_lock(v10[1]),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)*v10 + 56LL))(*v10),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v15),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v16 = *(__int64**)v1;
    v17 = *(__int64**)(v1 + 8);
    if (*(__int64**)v1 != v17) {
      while (1) {
        v20 = v16[1];
        if (v20 != 0) {
          v19 = std___1___shared_weak_count_lock(v20),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v19 != 0) {
            break;
          }
        }
      LABEL_45:
        v16 += 4;
        if (v16 == v17) {
          goto LABEL_94;
        }
      }
      v21 = *v16;
      if (*v16 != 0) {
        v22 = *(_DWORD*)(v21 + 52);
        if (v22 == 2) {
          v18 = v19;
          v66 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v66[1] = 0;
          v66[2] = 0;
          *v66 = GameData_20df330;
          v66[3] = &game_cutscene_anonymous_DefaultCamera_vtable_ptr;
          v66[4] = 0;
          v66[5] = 0xFFFFFFFFLL;
          v28 = v16[3];
          v16[2] = (__int64)(v66 + 3);
          v16[3] = (__int64)v66;
          if (v28 == 0) {
            goto LABEL_42;
          }
          v19 = v18;
          if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
          LABEL_41:
            v18 = v19;
            (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
                v40 =
                    COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v61 =
                    COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v28),
                v40 =
                    COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v61 =
                    COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          LABEL_42:
            v19 = v18;
          }
        }
        else {
          if (v22 == 1) {
            v46 = *(unsigned int*)(v21 + 60);
            if ((v46 & 0x80000000) != 0) {
              goto LABEL_43;
            }
            v47 = *(_QWORD*)(v1 + 80);
            if (v46 >= (signed __int64)(*(_QWORD*)(v1 + 88) - v47) >> 4) {
              goto LABEL_43;
            }
            v48 = (__int64*)(v47 + 16 * v46);
            v26 = v19;
            v49 = *v48;
            v28 = v48[1];
            if (v28 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                        memory_order_relaxed);
            }
            v50 = *(_QWORD*)(v49 + 144);
            v51 = *(unsigned __int8*)(v21 + 64);
            v52 = v21 + 65;
            v55 = v21 + 72;
            v53 = *(_QWORD*)(v21 + 72);
            v54 = *(_QWORD*)(v55 + 8);
            v56 = (v51 & 1) == 0;
            v57 = v51 >> 1;
            if (v56) {
              v58 = v52;
            }
            else {
              v58 = v54;
            }
            if (v56) {
              v59 = v57;
            }
            else {
              v59 = v53;
            }
            v60 = game_cutscene_1800020_alt1(v50, v58, v59),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v62 = v60 == 0 || v61 == 0xFFFFFFFFLL;
            v72 = v72 & 0xFFFFFFFF00000000LL | v61;
            if (!v62) {
              v63 = v60;
              v64 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v64[1] = 0;
              v64[2] = 0;
              *v64 = GameData_20df330;
              v64[3] = &game_cutscene_anonymous_DefaultCamera_vtable_ptr;
              v64[4] = v63;
              v64[5] = v72;
              v65 = v16[3];
              v16[2] = (__int64)(v64 + 3);
              v16[3] = (__int64)v64;
              if (v65 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v61 = COERCE_AS(
                        __typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak(v65),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v61 = COERCE_AS(
                        __typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            if (v28 == 0) {
              goto LABEL_70;
            }
          }
          else {
            if (v22 != 0) {
              goto LABEL_43;
            }
            v23 = *(unsigned int*)(v21 + 56);
            if ((v23 & 0x80000000) != 0) {
              goto LABEL_43;
            }
            v24 = *(_QWORD*)(v1 + 56);
            if (v23 >= (signed __int64)(*(_QWORD*)(v1 + 64) - v24) >> 4) {
              goto LABEL_43;
            }
            v25 = (__int64*)(v24 + 16 * v23);
            v26 = v19;
            v27 = *v25;
            v28 = v25[1];
            if (v28 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                        memory_order_relaxed);
            }
            v29 = *(_QWORD*)(v27 + 272);
            v30 = *(unsigned __int8*)(v21 + 64);
            v31 = v21 + 65;
            v34 = v21 + 72;
            v32 = *(_QWORD*)(v21 + 72);
            v33 = *(_QWORD*)(v34 + 8);
            v35 = (v30 & 1) == 0;
            v36 = v30 >> 1;
            if (v35) {
              v37 = v31;
            }
            else {
              v37 = v33;
            }
            if (v35) {
              v38 = v36;
            }
            else {
              v38 = v32;
            }
            v39 = game_cutscene_17ffec0_alt1(v29, v37, v38),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v41 = v39 == 0 || v40 == 0xFFFFFFFFLL;
            v71 = v71 & 0xFFFFFFFF00000000LL | v40;
            if (!v41) {
              v42 = v39;
              v43 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v43[1] = 0;
              v43[2] = 0;
              *v43 = GameData_20df330;
              v43[3] = &game_cutscene_anonymous_DefaultCamera_vtable_ptr;
              v43[4] = v42;
              v43[5] = v71;
              v44 = v16[3];
              v16[2] = (__int64)(v43 + 3);
              v16[3] = (__int64)v43;
              if (v44 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v61 = COERCE_AS(
                        __typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak(v44),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v61 = COERCE_AS(
                        __typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            if (v28 == 0) {
            LABEL_70:
              v19 = v26;
              goto LABEL_43;
            }
          }
          v19 = v26;
          if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            goto LABEL_41;
          }
        }
      }
    LABEL_43:
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v45 = v19;
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v45),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_45;
    }
  LABEL_94:
    v67 = *(__int64**)(v1 + 176);
    v68 = *(__int64**)(v1 + 184);
    v73_.v73[2] = 0;
    v73_.v73[3] = v1;
    v73_.v73[0] = GameData_20df380;
    v73_.v73[1] = GameRoutine_1811e80;
    result = (__int64)v73_.v73;
    v73_.v74 = v73_.v73;
    if (v67 == v68) {
      goto LABEL_102;
    }
    do {
      v69 = std___1___shared_weak_count_lock(v67[1]),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64))(*(_QWORD*)*v67 + 64LL))(
          *v67, (__int64)v73_.v73),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v69),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v67 += 2;
    } while (v67 != v68);
    result = (__int64)v73_.v74;
    if (v73_.v74 == v73_.v73) {
    LABEL_102:
      v70 = 32;
    }
    else {
      if (v73_.v74 == nullptr) {
      LABEL_104:
        *(_BYTE*)(v1 + 201) = 1;
        return result;
      }
      v70 = 40;
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v70))(result),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_104;
  }
  v5 = *(_QWORD*)(v4 + 96);
  if (v5 != 0 && *(_DWORD*)(v5 + 240) == 5) {
    v6 = (_QWORD*)(v4 + 120);
    do {
      v6 = (_QWORD*)*v6;
      if (v6 == nullptr) {
        goto LABEL_15;
      }
    } while (*(_DWORD*)(v6[5] + 240LL) == 5);
  }
LABEL_13:
  if (*(_BYTE*)(v1 + 200) == 1) {
    goto LABEL_21;
  }
  return result;
}

__int64 game_cutscene_1811fa0(__int64 a1, float a2, float a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64* i;
  __int64 v8;
  __int64 result;
  char v10;
  __int64* v11;
  __int64* j;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15;
    char v16;
  } v15_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(__int64**)(a1 + 176);
  for (i = *(__int64**)(a1 + 184); v3 != i; v3 += 2) {
    v8 = std___1___shared_weak_count_lock(v3[1]),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, float, float))(*(_QWORD*)*v3 + 32LL))(*v3, a2, a3),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v8),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  result = ({
    unsigned __int128 r_ =
        GameRoutine_1802fe0_pair(*(_QWORD**)(a1 + 24), a2, a3);
    v10 = COERCE_AS(__typeof__(v10), (unsigned long long)(r_ >> 64));
    (unsigned __int64)(unsigned long long)r_;
  });
  v15_.v15 = result;
  v15_.v16 = v10;
  if ((v10 & 1) != 0) {
    v11 = *(__int64**)(a1 + 176);
    for (j = *(__int64**)(a1 + 184); v11 != j; v11 += 2) {
      v13 = v11[1];
      if (v13 != 0) {
        v13 = std___1___shared_weak_count_lock(v13),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v14 = v13;
        if (v13 != 0) {
          v13 = *v11;
        }
        if ((v15_.v16 & 1) == 0) {
        LABEL_20:
          GameRoutine_8123d0(),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else {
        v14 = 0;
        if ((v15_.v16 & 1) == 0) {
          goto LABEL_20;
        }
      }
      result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v13 + 72LL))(
          v13, &v15_.v15),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = std___1___shared_weak_count___release_weak(v14),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  *(float*)(a1 + 204) = a3;
  return result;
}

void game_cutscene_181a480(__int64 a1, char a2)
{
  __int64 v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  const char* v10;
  unsigned __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  struct {
    _QWORD v26[4];
    _QWORD* v27;
    _BYTE pad1[16];
    _QWORD v28[2];
    const char* v29;
    _QWORD v30[3];
    __int64 v31;
    __int64 (***v32)();
    int v33;
    _BYTE pad3[4];
  } f;

  if ((a2 & 1) == 0) {
    goto LABEL_26;
  }
  if ((GameData_21c9699 & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                              GameData_212c638 +
                                                          32LL) -
                                               8LL) +
                                    40LL) +
                         16LL) +
              48LL) = 0;
    nn_oe_SetCpuBoostMode(1);
    v3 = *snd_g_fileIndex_ptr[0];
    if (*(_DWORD*)(*snd_g_fileIndex_ptr[0] + 4736) != 1 &&
        (*(_BYTE*)(v3 + 4742) & 1) == 0) {
      *(_DWORD*)(v3 + 4736) = 1;
      nn_os_SignalEvent(v3 + 4144);
    }
    GameData_21c9699 = 1;
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0 ||
      (game_cutscene_17ffbf0(
           (*(_BYTE*)(a1 + 8) & 1) == 0 ? a1 + 9 : *(_QWORD*)(a1 + 24),
           (*(_BYTE*)(a1 + 8) & 1) == 0 ? *(unsigned __int8*)(a1 + 8) >> 1
                                        : *(_QWORD*)(a1 + 16)) &
       1) == 0) {
    *(_BYTE*)(a1 + 43) = 1;
  LABEL_32:
    if (GameData_21c9699 == 1) {
      nn_oe_SetCpuBoostMode(0);
      v21 = *snd_g_fileIndex_ptr[0];
      if (*(_DWORD*)(*snd_g_fileIndex_ptr[0] + 4736) != 0) {
        *(_DWORD*)(v21 + 4736) = 0;
        nn_os_ClearEvent(v21 + 4144);
      }
      v22 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
      GameData_21c9699 = 0;
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v22 + 40) + 16LL) + 48LL) = 1;
    }
    v23 = 5;
    goto LABEL_53;
  }
  v4 = *(unsigned __int8*)(a1 + 8);
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = a1 + 9;
  }
  else {
    v7 = *(_QWORD*)(a1 + 24);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *(_QWORD*)(a1 + 16);
  }
  game_cutscene_17ffa60((void*)(f.v28), v7, v8);
  v9 = *snd_g_fileIndex_ptr[0];
  if ((f.v28[0] & 1) != 0) {
    v10 = f.v29;
  }
  else {
    v10 = (char*)f.v28 + 1;
  }
  v11 = strlen(v10);
  f.v30[0] = v10;
  f.v30[1] = v11;
  f.v30[2] = 0;
  f.v31 = 0;
  f.v33 = 0;
  f.v32 = GameData_212c3c8;
  v12 = fs_Manager_createFileAsync_fs_File(v9, (__int64)f.v30);
  if (f.v31 != 0) {
    std___1___shared_weak_count___release_weak(f.v31);
  }
  v13 = f.v28[0];
  *(_QWORD*)(a1 + 88) = v12;
  if ((v13 & 1) != 0 && f.v29 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  (__int64)f.v29);
  }
  if ((*(_BYTE*)(a1 + 43) & 1) != 0) {
    goto LABEL_32;
  }
LABEL_26:
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    goto LABEL_50;
  }
  v15 = *(_QWORD*)(a1 + 88);
  nn_os_AcquireReadLock(v15 + 696);
  v16 = *(_DWORD*)(v15 + 656);
  nn_os_ReleaseReadLock(v15 + 696);
  if ((v16 & 8) == 0) {
    return;
  }
  v17 = *(_QWORD*)(a1 + 88);
  v18 = *(_QWORD*)(a1 + 48);
  v19 = *(_QWORD*)(v17 + 592);
  v20 = *(_QWORD*)(v17 + 576);
  f.v27 = f.v26;
  f.v26[0] = GameData_212ece8 + 2;
  f.v26[1] = game_17e70c0_ptr;
  GameHr_ce5c00(v18);
  if (f.v27 != nullptr) {
    if (f.v27 == f.v26) {
      f.v32 = (__int64 (***)(void))f.v30;
      (*(void (**)(__int64))(*f.v27 + 24LL))((__int64)f.v27);
    }
    else {
      f.v32 = (__int64 (***)(void))(*(__int64 (**)(__int64))(*f.v27 + 16LL))(
          (__int64)f.v27);
    }
  }
  else {
    f.v32 = nullptr;
  }
  game_ce5d20(v18, v19, v20, (__int64)f.v30, 0x800u, 1);
  if (f.v32 == f.v30) {
    v24 = 4;
  }
  else {
    if (f.v32 == nullptr) {
      goto LABEL_44;
    }
    v24 = 5;
  }
  ((__int64 (*)(__int64))(*f.v32)[v24])((__int64)f.v32);
LABEL_44:
  if (f.v27 == f.v26) {
    v25 = 32;
    goto LABEL_48;
  }
  if (f.v27 != nullptr) {
    v25 = 40;
  LABEL_48:
    (*(void (**)(__int64))(*f.v27 + v25))((__int64)f.v27);
  }
  GameRoutine_634d80(*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8LL),
                     *(_QWORD*)(a1 + 88));
LABEL_50:
  if (*(int*)(a1 + 4) <= 2) {
    v23 = 2;
  }
  else {
    v23 = 5;
  }
LABEL_53:
  *(_DWORD*)(a1 + 4) = v23;
}

__int64 game_cutscene_181a7e0(__int64 a1, char a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;

  if ((a2 & 1) != 0) {
    GameRoutine_180db80(*(__int64**)(a1 + 56), *(_QWORD*)(a1 + 48),
                        *(_QWORD*)(a1 + 32));
    v3 = *(_QWORD*)(a1 + 48);
    v21_.v21[0] = GameData_1fd7c18;
    v21_.v22 = v21_.v21;
    GameRoutine_ce6740(v3, (__int64)v21_.v21);
    if (v21_.v22 == v21_.v21) {
      v4 = 32;
    }
    else {
      if (v21_.v22 == nullptr) {
        goto LABEL_7;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v21_.v22 + v4))((__int64)v21_.v22);
  LABEL_7:
    game_cutscene_ActorList_SetupSorted(
        *(_QWORD*)(a1 + 56), *(_QWORD*)(a1 + 48), *(_QWORD*)(a1 + 32));
    v5 = *(_QWORD*)(a1 + 72);
    if ((*(_BYTE*)v5 & 1) == 0) {
      v6 = *(unsigned int*)(v5 + 4);
      *(_BYTE*)v5 = 1;
      if ((_DWORD)v6 != -1) {
        GameRoutine_bc6f60(eft_g_effectSystem, v6);
      }
      v7 = *(unsigned int*)(v5 + 8);
      if ((_DWORD)v7 != -1) {
        GameRoutine_bc6f60(eft_g_effectSystem, v7);
      }
    }
  }
  result = game_cutscene_1811840(*(_QWORD*)(a1 + 56));
  if (*(_BYTE*)(*(_QWORD*)(a1 + 56) + 201LL) == 1) {
    v9 = *(_QWORD*)(a1 + 72);
    if (*(_BYTE*)v9 != 1) {
      goto LABEL_26;
    }
    v10 = *(_DWORD*)(v9 + 4);
    if (v10 == -1) {
      goto LABEL_25;
    }
    v11 = *(_QWORD*)(eft_g_effectSystem + 104);
    v12 = v11 + 8;
    v13 = *(_QWORD*)(v11 + 16);
    if (v13 != v12) {
      while (*(_DWORD*)(v13 + 16) != v10) {
        v13 = *(_QWORD*)(v13 + 8);
        if (v13 == v12) {
          return result;
        }
      }
      if ((*(_BYTE*)(v13 - 7) & 1) == 0) {
      LABEL_25:
        v14 = *(_DWORD*)(v9 + 8);
        if (v14 == -1) {
          goto LABEL_26;
        }
        v15 = *(_QWORD*)(eft_g_effectSystem + 104);
        v16 = v15 + 8;
        v17 = *(_QWORD*)(v15 + 16);
        if (v17 != v16) {
          while (*(_DWORD*)(v17 + 16) != v14) {
            v17 = *(_QWORD*)(v17 + 8);
            if (v17 == v16) {
              return result;
            }
          }
          if ((*(_BYTE*)(v17 - 7) & 1) == 0) {
          LABEL_26:
            if (GameData_21c9699 == 1) {
              result = nn_oe_SetCpuBoostMode(0);
              v18 = snd_g_fileIndex;
              if (*(_DWORD*)(snd_g_fileIndex + 4736) != 0) {
                *(_DWORD*)(snd_g_fileIndex + 4736) = 0;
                result = nn_os_ClearEvent(v18 + 4144);
              }
              v19 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                               8LL);
              GameData_21c9699 = 0;
              *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v19 + 40) + 16LL) + 48LL) = 1;
            }
            if (*(int*)(a1 + 4) <= 3) {
              v20 = 3;
            }
            else {
              v20 = 5;
            }
            *(_DWORD*)(a1 + 4) = v20;
          }
        }
      }
    }
  }
  return result;
}

float game_cutscene_181acc0(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  float v4;
  float v5;
  __int64 v6;
  float v7;
  unsigned __int64 v8;
  float v9;
  __int64 v10;

  if (*(_QWORD*)(result + 48) == 0) {
    return 0x0.0p+0f;
  }
  v1 = *(_QWORD*)(result + 56);
  if (v1 == 0) {
    return *(float*)(*(_QWORD*)(result + 48) + 104LL) / 0x1.e000000000000p+5f;
  }
  v3 = *(_QWORD**)(v1 + 24);
  v2 = *(_QWORD*)(v1 + 32);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v3 == nullptr) {
    v5 = *(float*)(*(_QWORD*)(result + 48) + 104LL) / 0x1.e000000000000p+5f;
    if (v2 == 0) {
      return v5;
    }
    goto LABEL_18;
  }
  v4 = (float)(*(float*)(*(_QWORD*)(result + 48) + 104LL) /
               0x1.e000000000000p+5f) *
       0x1.e000000000000p+5f;
  v5 = 0x0.0p+0f;
  if (!(v4 <= 0x0.0p+0f)) {
    v6 = v3[26];
    // The original loads the second table before the loop, on every path.
    v10 = v3[23];
    __asm__ volatile("" ::"r"(v10));
    v7 = 0x0.0p+0f;
    do {
      v8 = (unsigned __int64)(v3[27] - v6) >> 2;
      while (1) {
        v9 = 0x1.0000000000000p+0f;
        if ((int)v8 < 1) {
          break;
        }
        LODWORD(v8) = v8 - 1;
        if (*(float*)(v6 + 4LL * (unsigned int)v8) <= v7) {
          if ((v8 & 0x80000000) == 0) {
            v9 = *(float*)(v10 + 4 * (v8 & 0x7FFFFFFF));
          }
          break;
        }
      }
      v7 = v7 + 0x1.0000000000000p+0f;
      v5 = v5 + (float)(0x1.0000000000000p+0f / v9);
    } while (v7 < v4);
  }
  v5 = v5 / 0x1.e000000000000p+5f;
  if (v2 != 0) {
  LABEL_18:
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
  return v5;
}

#pragma GCC visibility pop
