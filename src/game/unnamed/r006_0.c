#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_2011d60[])();

extern __int64 (*GameData_2011e00[6])();

extern __int64 (*GameData_2011e18[3])();

extern __int64 GameData_212bf68;

extern _QWORD GameData_212d280;

extern __int64* GameData_212d460[6];

extern __int64* GameData_212d670[3];

extern __int64 GameData_212d690;

extern __int64 GameData_212dbb8[9];

extern int* GameData_212df08;

extern _UNKNOWN* GameData_212df10;

extern __int64* GameData_212fc38[2];

extern __int64* GameData_2130258[5];

extern char* GameData_2167828;

extern __int64 GameData_21c9608;

extern __int64 GameData_21ee240;

extern __int64 GameData_21f3d10;

extern char GameData_21f3fe4;

extern int GameData_220f854;

extern _UNKNOWN GameData_220f858;

extern __int64 GameData_22336e0;

extern __int64 GameData_22356f0;

extern __int64 GameData_22356f8;

extern __int64 GameData_2235708;

extern __int64 GameData_2236800;

extern __int64 GameData_2258ba8;

extern __int64 GameData_2265ae0;

__int64 GameRoutine_106c6d0(void);

__int64 GameRoutine_106f310(__int64 result);

__int64 GameRoutine_109fee0(_QWORD, float, float);

__int64 GameRoutine_112180(_QWORD, _QWORD);

void GameRoutine_1134ae0(__int64, __int64);

float GameRoutine_113c060(_QWORD);

__int64 GameRoutine_113c310(_QWORD);

__int64 GameRoutine_155f480(_QWORD, _QWORD);

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);

__int64 GameRoutine_1562f00(_QWORD, _QWORD);

__int64 GameRoutine_1563030(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1567000(_QWORD, _QWORD);

__int64 GameRoutine_156c910(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_58dee0(_QWORD, _QWORD);

__int64 GameRoutine_58df60(_QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_657a50(_QWORD, _QWORD);

__int64 GameRoutine_810a70(_QWORD, _QWORD, long double);

__int64 GameRoutine_eaec10(_QWORD, _QWORD);

__int64 GameRoutine_f482e0(void);

__attribute__((swiftcall)) void
GameRoutine_a6ea10_alt1(PSEUDO_X8, __int64, int) __asm__("GameRoutine_a6ea10");

__attribute__((swiftcall)) void game_character_1077d10(PSEUDO_X8,
                                                       __int64 result);

__int64*
GameRoutine_1152360_alt1(_QWORD*,
                         unsigned __int8*) __asm__("GameRoutine_1152360");

__int64* game_8224a0(unsigned __int8);

__int64 CharacterAnimator_107a6f0(__int64);

__int64 GameHr_1562680(__int64 result, const char*, float);

__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);

__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);

__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);

__int64 game_character_10778e0(__int64 result, __int64, unsigned __int64);

__int64 memset(__int64, int, unsigned __int64);

__int64 std___1___shared_weak_count___release_weak(__int64);

__int64 strncpy(__int64, const char*, unsigned __int64);

__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);

__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);

__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);

extern __int64 (*eft_ClampCurve_ptr)();

extern __int64* game_talk_g_window_layout_ptr[5];

extern __int64 fw_memory_g_heap_manager_ptr;

extern __int64 game_GameModeData_instance_;

extern __int64 game_ProcGameSkipView_instance_;

extern char** msg_MessageManager_empty_text__ptr;

int __cxa_guard_acquire(__int64);

int memcmp(__int64, __int64, unsigned __int64);

int strcmp(const char*, const char*);

unsigned __int64 strlen(const char*);

void CharacterAppearance_1075a00(__int64, __int64, unsigned __int64);

void CharacterModel_10711e0(__int64, __int64, __int64);

void GameHr_7f7720(__int64, __int64);

void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");

void GameRoutine_8791a0_alt1(__int64) __asm__("GameRoutine_8791a0");

void __cxa_guard_release(__int64);

void game_113d3c0(__int64, int);

void nn_mem_StandardAllocator_Free(__int64, __int64);

void GameHr_102f2a0(__int64* a1);

void GameHr_102f3c0(__int64* a1, __int64* a2, __int64 a3);

void GameHr_104ed10(__int64 a1);

void GameHr_1070d60(__int64 a1, _QWORD* a2);

void GameHr_10adda0(__int64 a1, __int64 a2);

void GameHr_1133b20(__int64 a1);

__int64 GameHr_1156f80(__int64 a1);

_QWORD* GameRoutine_104c660_alt1(_QWORD* result,
                                 _QWORD*) __asm__("GameRoutine_104c660");

__attribute__((swiftcall)) void game_810a70(PSEUDO_X8, __int64 result, _BYTE*,
                                            float);

__int64 GameHr_14a1390(__int64*, char);

__int64 GameHr_156ca00(__int64, const char*);

__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");

__int64
GameRoutine_113c310_alt1(unsigned __int8*) __asm__("GameRoutine_113c310");

char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");

extern __int64* game_g_frame_clock_ptr[3];

float* GameRoutine_104b900_alt1(float* result,
                                char) __asm__("GameRoutine_104b900");

void GameHr_10aa0a0(__int64**);

void Seq_11331c0(__int64);

void Seq_1134ae0(__int64, __int64);

void __attribute__((noreturn))
GameRoutine_104c620_alt1() __asm__("GameRoutine_104c620");

void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");

void game_113c060(unsigned __int8*);

void GameHr_104af40(__int64 a1);

void GameHr_104b280_alt1(__int64 a1, __int64 a2, unsigned __int64 a3,
                         const char* a4, __int64 a5,
                         __int64 a6) __asm__("GameHr_104b280");

__int64 GameHr_109f640(__int64 a1, const char* a2);

_QWORD* GameHr_112ff80(__int64 a1, const char* a2, const char* a3,
                       const char* a4, int a5, int a6);

void GameHr_1135760(__int64 a1);

__int64 GameHr_113a550(__int64 a1, __int64* a2);

void GameHr_114eb80(_QWORD* a1);

_QWORD* GameRoutine_104c660(_QWORD* result, _QWORD*);

char* GameRoutine_60a060(char*, __int64, unsigned __int64);

float* GameRoutine_104b900(float* result, char);

void __attribute__((noreturn)) GameRoutine_104c620();

void GameHr_104b280(__int64 a1, __int64 a2, unsigned __int64 a3, char* a4,
                    __int64 a5, __int64 a6);

void GameHr_102f2a0(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = a1[1];
  v2 = a1[2];
  for (i = fw_memory_g_heap_manager_ptr; v1 != v2; v2 = a1[2]) {
    a1[2] = v2 - 112;
    v5 = *(_QWORD*)(v2 - 16);
    if (v5 != 0) {
      std___1___shared_weak_count___release_weak(v5);
    }
    if (*(_BYTE*)(v2 - 32) == 1) {
      if ((*(_BYTE*)(v2 - 64) & 1) != 0) {
        v6 = *(_QWORD*)(v2 - 48);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)i + v7, v6);
        }
      }
      if ((*(_BYTE*)(v2 - 88) & 1) != 0) {
        v8 = *(_QWORD*)(v2 - 72);
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)i + v9, v8);
        }
      }
    }
  }
  if (*a1 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)i + v10, *a1);
  }
}

void GameHr_102f3c0(__int64* a1, __int64* a2, __int64 a3)
{
  _QWORD* v3;
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  if (a1 != a2) {
    v3 = (_QWORD*)(a3 + 96);
    v4 = a1 + 6;
    v6 = a1;
    do {
      v9 = *(v4 - 5);
      v8 = v4 - 6;
      *(v3 - 12) = *(v4 - 6);
      *(v3 - 11) = v9;
      LODWORD(v9) = *((_DWORD*)v4 - 8);
      *((_BYTE*)v3 - 72) = 0;
      *((_BYTE*)v3 - 16) = 0;
      *((_DWORD*)v3 - 20) = v9;
      if (*((_BYTE*)v4 + 32) == 1) {
        v10 = *(v4 - 3);
        v11 = *(v4 - 1);
        *(v3 - 8) = *(v4 - 2);
        *(v3 - 7) = v11;
        *(v3 - 9) = v10;
        *(v4 - 2) = 0;
        *(v4 - 1) = 0;
        *(v4 - 3) = 0;
        *(v3 - 5) = v4[1];
        v12 = *v4;
        *(v3 - 4) = v4[2];
        *(v3 - 6) = v12;
        *v4 = 0;
        v4[1] = 0;
        v4[2] = 0;
        LODWORD(v12) = *((_DWORD*)v4 + 6);
        LOBYTE(v10) = *((_BYTE*)v4 + 28);
        *((_BYTE*)v3 - 16) = 1;
        *((_BYTE*)v3 - 20) = v10;
        *((_DWORD*)v3 - 6) = v12;
      }
      *(v3 - 1) = v4[5];
      v7 = v4[6];
      v4 += 14;
      *v3 = v7;
      v3 += 14;
      v8[11] = 0;
      v8[12] = 0;
    } while (v8 + 14 != a2);
    v13 = fw_memory_g_heap_manager_ptr;
    do {
      v14 = v6[12];
      if (v14 != 0) {
        std___1___shared_weak_count___release_weak(v14);
      }
      if (*((_BYTE*)v6 + 80) == 1) {
        if ((v6[6] & 1) != 0) {
          v15 = v6[8];
          if (v15 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
              v16 = 128;
            }
            else {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v16, v15);
          }
        }
        if ((v6[3] & 1) != 0) {
          v17 = v6[5];
          if (v17 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18, v17);
          }
        }
      }
      v6 += 14;
    } while (v6 != a2);
  }
}

__int64 GameHr_1035980(__int64 result, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  const char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = *(_QWORD*)(result + 24);
  v4 = (_QWORD*)result;
  if (*(_QWORD*)(result + 32) != v2) {
    v5 = 0;
    v6 = 0;
    do {
      result = GameRoutine_58df60(*(_QWORD*)(*(_QWORD*)(v2 + v5) + 24LL));
      v2 = v4[3];
      v7 = v4[4];
      ++v6;
      v5 += 64;
    } while (v6 < (v7 - v2) >> 6);
    if (v7 != v2) {
      v8 = 0;
      v9 = 0;
      do {
        v11 = v4[2];
        if (v11 != 0 && (v12 = GameRoutine_1a0a0c0(v11)) != 0) {
          v13 = v12;
          v10 = GameRoutine_155f480(v4[1], "N_NPC");
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v14 = v10;
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            GameRoutine_1a09c50(v13);
            v10 = v14;
          }
        }
        else {
          v10 = GameRoutine_155f480(0, "N_NPC");
        }
        result = GameRoutine_58dee0(v10, *(_QWORD*)(v4[3] + v8));
        ++v9;
        v8 += 64;
      } while (v9 < (__int64)(v4[4] - v4[3]) >> 6);
    }
  }
  v15 = *(_QWORD*)(a2 + 112);
  v16 = *(_QWORD*)(a2 + 120);
  if (v15 != v16) {
    v17 = "Default";
    v18 = 0;
    v34 = v16;
    do {
      v19 = v4[3];
      if (v18 >= (v4[4] - v19) >> 6) {
        break;
      }
      v20 = (__int64*)(v19 + (v18 << 6));
      v21 = *v20;
      v22 = v20[3];
      if (v22 != 0) {
        v23 = GameRoutine_1a0a0c0(v22);
        v24 = v23 != 0 ? v20[2] : 0LL;
      }
      else {
        v24 = 0;
        v23 = 0;
      }
      v25 = (__int64*)v4[7];
      v26 = (__int64*)v4[8];
      if (v25 == v26) {
      LABEL_24:
        result = GameRoutine_1562cf0(v24, v17);
      }
      else {
        while (1) {
          v27 = *v25;
          v25 += 16;
          if (v27 == *(_QWORD*)(v15 + 96)) {
            break;
          }
          if (v25 == v26) {
            goto LABEL_24;
          }
        }
        v28 = v4[2];
        v29 = v17;
        if (v28 != 0) {
          v30 = GameRoutine_1a0a0c0(v28);
          if (v30 != 0) {
            v31 = v4[1];
          }
          else {
            v31 = 0;
          }
        }
        else {
          v31 = 0;
          v30 = 0;
        }
        v32 = GameRoutine_155f480(v31, "N_NPC");
        v33 = GameRoutine_155f480(v31, "N_Select");
        GameRoutine_58df60(v32);
        GameRoutine_58dee0(v33, v21);
        if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
          GameRoutine_1a09c50(v30);
        }
        result = GameRoutine_1563280(v24, "Select", 0);
        v17 = v29;
        v16 = v34;
        if ((result & 1) == 0) {
          result = GameRoutine_1562680(v24, "Select", 1.0);
        }
      }
      if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        result = GameRoutine_1a09c50(v23);
      }
      ++v18;
      v15 += 112;
    } while (v15 != v16);
  }
  return result;
}

void GameHr_104af40(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v1 = *(__int64**)(a1 + 72);
  v2 = *(__int64**)(a1 + 80);
  if (v1 != v2) {
    do {
      v4 = *(_QWORD*)*v1;
      if (v4 != 0 && *(_DWORD*)(v4 + 16) == *(_DWORD*)(*v1 + 8)) {
        GameHr_14a1390(v1, 1);
      }
      v1 += 8;
    } while (v1 != v2);
    v1 = *(__int64**)(a1 + 72);
    v2 = *(__int64**)(a1 + 80);
  }
  v5 = (__int64)v1;
  if (v1 != v2) {
    while (1) {
      v6 = (__int64*)*(v2 - 2);
      if (v2 - 6 == v6) {
        v7 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_16;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
    LABEL_16:
      v8 = *(v2 - 7);
      if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
      v2 -= 8;
      if (v2 == v1) {
        v5 = *(_QWORD*)(a1 + 72);
        break;
      }
    }
  }
  *(_QWORD*)(a1 + 80) = v1;
  if (v5 == 0) {
    goto LABEL_38;
  }
  if ((__int64*)v5 != v1) {
    while (1) {
      v9 = (__int64*)*(v1 - 2);
      if (v1 - 6 == v9) {
        v10 = 32;
      }
      else {
        if (v9 == nullptr) {
          goto LABEL_29;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
    LABEL_29:
      v11 = *(v1 - 7);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
      }
      v1 -= 8;
      if (v1 == (__int64*)v5) {
        v12 = *(_QWORD*)(a1 + 72);
        *(_QWORD*)(a1 + 80) = v5;
        v5 = v12;
        if (v12 == 0) {
          goto LABEL_38;
        }
        goto LABEL_35;
      }
    }
  }
  *(_QWORD*)(a1 + 80) = v5;
LABEL_35:
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v13 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                v5);
LABEL_38:
  v14 = *(_QWORD*)(a1 + 32);
  if (v14 == 0) {
    goto LABEL_60;
  }
  v15 = *(_QWORD*)(a1 + 40);
  if (v14 == v15) {
    goto LABEL_57;
  }
  v16 = fw_memory_g_heap_manager_ptr;
  do {
    v17 = *(_QWORD**)(v15 - 16);
    if ((_QWORD*)(v15 - 48) == v17) {
      v18 = 32;
      goto LABEL_46;
    }
    if (v17 != nullptr) {
      v18 = 40;
    LABEL_46:
      (*(void (**)(__int64))(*v17 + v18))((__int64)v17);
    }
    if ((*(_BYTE*)(v15 - 80) & 1) != 0) {
      v19 = *(_QWORD*)(v15 - 64);
      if (v19 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v20, v19);
      }
    }
    v21 = *(_QWORD*)(v15 - 88);
    if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak(v21);
    }
    v15 -= 96;
  } while (v15 != v14);
  v22 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 40) = v14;
  v14 = v22;
  if (v22 != 0) {
  LABEL_57:
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v14);
  }
LABEL_60:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v24 = *(_QWORD*)(a1 + 16);
    if (v24 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
    }
  }
}

void GameHr_104b280(__int64 a1, __int64 a2, unsigned __int64 a3, char* a4,
                    __int64 a5, __int64 a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  unsigned __int8 explicit;
  int* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  unsigned __int64 v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  char* v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  _QWORD* v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  char* v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  struct {
    __int64 v71;
    unsigned __int64 v72;
    __int64 v73;
  } v71_;
  struct {
    _QWORD v74[4];
    _QWORD* v75;
  } v74_;
  struct {
    _QWORD v76[4];
    _QWORD* v77;
  } v76_;

  v6 = *(_QWORD*)(a1 + 24);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v13 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
    *v13 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release((__int64)GameData_212df10);
  }
  v14 = *(_QWORD*)(v6 + 512);
  v15 = v14;
  do {
    if (v15 == *(_QWORD*)(v6 + 504)) {
      return;
    }
    v16 = *(_DWORD*)(v15 - 16);
    v15 -= 16;
    v14 -= 16;
  } while (v16 != *v13);
  if (*(_QWORD*)(v6 + 512) != v14) {
    v17 = *(_QWORD*)(v14 + 8);
    if (v17 != 0) {
      v18 = *(_QWORD*)(v17 + 24);
      v20 = *(_QWORD**)(v18 + 312);
      v19 = *(_QWORD**)(v18 + 320);
      if (v20 != v19) {
        v21 = fw_memory_g_heap_manager_ptr;
        v64 = a4;
        v65 = a6;
        v62 = a2;
        v63 = a3;
        v68 = *(_QWORD**)(v18 + 320);
        while (1) {
          v22 = (*(_BYTE*)(*v20 + 376LL) & 1) != 0
                    ? *(const char**)(*v20 + 392LL)
                    : (const char*)(*v20 + 377LL);
          if (strcmp(v22, a4) == 0) {
            break;
          }
        LABEL_9:
          v20 += 2;
          if (v20 == v19) {
            goto LABEL_98;
          }
        }
        v74_.v75 = nullptr;
        v71_.v72 = 0;
        v71_.v73 = 0;
        v71_.v71 = 0;
        v23 = *v20;
        v24 = v20[1];
        if (v24 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                    memory_order_relaxed);
          v69 = v23;
          v70 = v24;
        }
        else {
          v69 = *v20;
          v70 = 0;
        }
        GameRoutine_60a060((char*)&v71_.v71, a2, a3);
        v25 = *(_QWORD*)(a6 + 32);
        if (v25 != 0) {
          if (v25 == a6) {
            v76_.v77 = v76_.v76;
            (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v25 + 24LL))(v25,
                                                                   v76_.v76);
          }
          else {
            v76_.v77 =
                (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          }
        }
        else {
          v76_.v77 = nullptr;
        }
        GameRoutine_104c660(v76_.v76, v74_.v74);
        if (v76_.v77 == v76_.v76) {
          v26 = 32;
        }
        else {
          if (v76_.v77 == nullptr) {
          LABEL_27:
            v27 = (__int64*)v21;
            v29 = *(_QWORD**)(a1 + 40);
            v28 = *(_QWORD*)(a1 + 48);
            if ((unsigned __int64)v29 < v28) {
              *v29 = v69;
              v29[1] = v70;
              if (v70 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v70 + 8),
                                          1u, memory_order_relaxed);
              }
              if ((v71_.v71 & 1) != 0) {
                fw_text_String_CopyTerminated(v29 + 2, v71_.v73, v71_.v72);
                v31 = v74_.v75;
                if (v74_.v75 != nullptr) {
                LABEL_32:
                  if (v31 == v74_.v74) {
                    v29[10] = v29 + 6;
                    (*(void (**)(_QWORD*))(*v74_.v75 + 24LL))(v74_.v75);
                  }
                  else {
                    v29[10] = (*(__int64 (**)(_QWORD*))(*v31 + 16LL))(v31);
                  }
                  goto LABEL_53;
                }
              }
              else {
                v29[3] = v71_.v72;
                v30 = v71_.v71;
                v29[4] = v71_.v73;
                v29[2] = v30;
                v31 = v74_.v75;
                if (v74_.v75 != nullptr) {
                  goto LABEL_32;
                }
              }
              v29[10] = 0;
            LABEL_53:
              v42 = v29 + 12;
              v21 = (__int64)v27;
              goto LABEL_85;
            }
            v32 = *(_QWORD*)(a1 + 32);
            v33 = 1 - 0x5555555555555555LL * (((__int64)v29 - v32) >> 5);
            if (v33 > 0x2AAAAAAAAAAAAAALL) {
              GameRoutine_104c620();
            }
            v34 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v28 - v32) >> 5);
            if (2 * v34 > v33) {
              v33 = 2 * v34;
            }
            if (v34 >= 0x155555555555555LL) {
              v35 = 0x2AAAAAAAAAAAAAALL;
            }
            else {
              v35 = v33;
            }
            if (v35 > 0x2AAAAAAAAAAAAAALL) {
              GameRoutine_60a210_alt1();
            }
            v36 = 96 * v35;
            v37 = fw_memory_HeapManager_Allocate(*v27, 96 * v35, 16, 0);
            v38 = (_QWORD*)((char*)v29 + ((char*)v37 - (char*)v32));
            v39 = v37;
            *v38 = v69;
            v38[1] = v70;
            if (v70 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v70 + 8), 1u,
                                        memory_order_relaxed);
            }
            if ((v71_.v71 & 1) != 0) {
              fw_text_String_CopyTerminated(v38 + 2, v71_.v73, v71_.v72);
            }
            else {
              v40 = v71_.v72;
              v38[2] = v71_.v71;
              v38[3] = v40;
              v38[4] = v71_.v73;
            }
            v41 = v74_.v75;
            v67 = v36;
            if (v74_.v75 != nullptr) {
              if (v74_.v75 == v74_.v74) {
                v38[10] = v38 + 6;
                (*(void (**)(_QWORD*))(*v41 + 24LL))(v41);
              }
              else {
                v38[10] = (*(__int64 (**)(__int64))(*v74_.v75 + 16LL))(
                    (__int64)v74_.v75);
              }
            }
            else {
              v38[10] = 0;
            }
            v44 = *(_QWORD*)(a1 + 32);
            v43 = *(_QWORD**)(a1 + 40);
            v66 = (char*)v43 - v44;
            if (v43 == (_QWORD*)v44) {
              v21 = (__int64)v27;
            LABEL_80:
              v42 = v38 + 12;
              *(_QWORD*)(a1 + 32) = (char*)v38 - v66;
              *(_QWORD*)(a1 + 40) = v38 + 12;
              *(_QWORD*)(a1 + 48) = v39 + v67;
              if (v44 != 0) {
                v58 = 128;
                if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
                  v58 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v58, v44);
              }
              a4 = v64;
              a6 = v65;
              a2 = v62;
              a3 = v63;
            LABEL_85:
              v59 = v74_.v75;
              *(_QWORD*)(a1 + 40) = v42;
              if (v59 == v74_.v74) {
                v19 = v68;
                v60 = 32;
              }
              else {
                v19 = v68;
                if (v59 == nullptr) {
                  goto LABEL_90;
                }
                v60 = 40;
              }
              (*(void (**)(__int64))(*v59 + v60))((__int64)v59);
            LABEL_90:
              if ((v71_.v71 & 1) != 0 && v71_.v73 != 0) {
                v61 = 128;
                if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
                  v61 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v61, v71_.v73);
              }
              if (v70 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
                std___1___shared_weak_count___release_weak(v70);
              }
              goto LABEL_9;
            }
            v45 = (char*)v29 - v32 + -32 * (((__int64)v43 - v44) >> 5);
            v46 = *(_QWORD**)(a1 + 32);
            v47 = (__int64)&v45[v39 + 48];
            do {
              *(_QWORD*)(v47 - 48) = *v46;
              *(_QWORD*)(v47 - 40) = v46[1];
              *v46 = 0;
              v46[1] = 0;
              v48 = v46[4];
              v49 = v46[2];
              *(_QWORD*)(v47 - 24) = v46[3];
              *(_QWORD*)(v47 - 16) = v48;
              *(_QWORD*)(v47 - 32) = v49;
              v46[3] = 0;
              v46[4] = 0;
              v46[2] = 0;
              v50 = (_QWORD*)v46[10];
              if (v50 != nullptr) {
                if (v46 + 6 == v50) {
                  *(_QWORD*)(v47 + 32) = v47;
                  (*(void (**)(_QWORD, __int64))(*(_QWORD*)v46[10] + 24LL))(
                      v46[10], v47);
                }
                else {
                  *(_QWORD*)(v47 + 32) = v50;
                  v46[10] = 0;
                }
              }
              else {
                *(_QWORD*)(v47 + 32) = 0;
              }
              v46 += 12;
              v47 += 96;
            } while (v46 != v43);
            v51 = (_QWORD*)(v44 + 48);
            v21 = (__int64)v27;
            while (1) {
              v53 = (_QWORD*)v51[4];
              if (v51 == v53) {
                v54 = 32;
              }
              else {
                if (v53 == nullptr) {
                  goto LABEL_70;
                }
                v54 = 40;
              }
              (*(void (**)(__int64))(*v53 + v54))((__int64)v53);
            LABEL_70:
              if ((*(_BYTE*)(v51 - 4) & 1) != 0) {
                v55 = *(v51 - 2);
                if (v55 != 0) {
                  v56 = 128;
                  if (*(_QWORD*)(*v27 + 200) == 0) {
                    v56 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v27 + v56, v55);
                }
              }
              v57 = *(v51 - 5);
              if (v57 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
                std___1___shared_weak_count___release_weak(v57);
              }
              v52 = v51 + 6;
              v51 += 12;
              if (v52 == v43) {
                v44 = *(_QWORD*)(a1 + 32);
                goto LABEL_80;
              }
            }
          }
          v26 = 40;
        }
        (*(void (**)(__int64))(*v76_.v77 + v26))((__int64)v76_.v77);
        goto LABEL_27;
      }
    LABEL_98:
      GameRoutine_104b900((float*)a1, 1);
    }
  }
}

void GameHr_104ed10(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;

  v1 = *(_QWORD*)(GameData_21f3d10 + 72);
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) == 0) {
    v1 = *(_BYTE*)(GameData_21f3d10 + 64) >> 1;
  }
  if (v1 != 10) {
    goto LABEL_10;
  }
  v2 = GameData_21f3d10 + 65;
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) != 0) {
    v2 = *(_QWORD*)(GameData_21f3d10 + 80);
  }
  v3 = *(_QWORD*)v2;
  v4 = *(unsigned __int16*)(v2 + 8);
  if (v3 != *(_QWORD*)"Hub_101_A1" || v4 != *(unsigned __int16*)"A1") {
  LABEL_10:
    v6 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v6 & 0x10) == 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v6 | 0x10;
      GameRoutine_8791a0_alt1(a1);
    }
  }
}

__int64 GameHr_104efb0()
{
  __int64 v0;
  int v1;

  v0 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
  v1 = *(_DWORD*)(v0 + 232);
  if (v1 <= 2) {
    v1 = 2;
  }
  *(_DWORD*)(v0 + 232) = v1;
  return GameRoutine_f482e0();
}

void GameHr_1070d60(__int64 a1, _QWORD* a2)
{
  unsigned __int64 v4;
  __int64* v5;
  __int64 v6;
  unsigned __int64 v7;
  const char* v8;
  unsigned __int64 v9;
  int v10;
  const char* v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64** v22;
  __int64* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  bool v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  struct {
    unsigned __int8 v34;
    _BYTE v35[7];
    char gap8_[8];
    const char* v36;
  } v35_;
  struct {
    _BYTE v37[8];
    int v38;
  } v37_;
  _QWORD v39[4];
  _BYTE v40[640];

  memset((__int64)v40, 0, 0x280u);
  v4 = a2[1] - *a2;
  __builtin_memset(v39, 0, sizeof(v39));
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((int)(v4 >> 3) >= 1) {
    v6 = ((v4 >> 3) & 0x7FFFFFFF) - 1;
    do {
      v8 = *(const char**)(*a2 + 8 * v6);
      if (v8 != nullptr) {
        if (strcmp((const char*)v39, *(const char**)(*a2 + 8 * v6)) != 0) {
          strncpy((__int64)v39, v8, 0x1Fu);
          HIBYTE(v39[3]) = 0;
          CharacterModel_10711e0(a1, (__int64)v39, (__int64)v40);
        }
        v9 = strlen(v8);
        game_character_10778e0((__int64)v37_.v37, (__int64)v8, v9);
        if ((unsigned int)(v37_.v38 - 1) <= 0xFFFFFFFD) {
          v37_.v38 = 0;
          game_character_1077d10((void*)(&v35_.v34), (__int64)v37_.v37);
          v10 = v35_.v34 & 1;
          if ((v35_.v34 & 1) != 0) {
            v11 = v35_.v36;
          }
          else {
            v11 = v35_.v35;
          }
          if (strcmp((const char*)v39, v11) != 0) {
            strncpy((__int64)v39, v11, 0x1Fu);
            HIBYTE(v39[3]) = 0;
            CharacterModel_10711e0(a1, (__int64)v39, (__int64)v40);
            v10 = v35_.v34 & 1;
          }
          if (v10 != 0 && v35_.v36 != nullptr) {
            if (*(_QWORD*)(*v5 + 200) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free(*v5 + v12, (__int64)v35_.v36);
          }
        }
      }
      v7 = v6-- + 1;
    } while (v7 > 1);
  }
  if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
    v14 = *(_QWORD*)(a1 + 5112);
    if (v14 == 0) {
      return;
    }
    goto LABEL_65;
  }
  v15 = GameData_22356f8 - 1;
  if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
    v16 = -1193575788;
    if ((unsigned __int64)GameData_22356f8 <= 0xFFFFFFFFB8DB7A94LL) {
      v16 = 0xFFFFFFFFB8DB7A94LL % GameData_22356f8;
    }
  }
  else {
    v16 = v15 & 0xFFFFFFFFB8DB7A94LL;
  }
  v17 = *(__int64***)(GameData_22356f0 + 8 * v16);
  if (v17 == nullptr) {
    v14 = *(_QWORD*)(a1 + 5112);
    if (v14 == 0) {
      return;
    }
    goto LABEL_49;
  }
  v18 = *v17;
  if (*v17 == nullptr) {
  LABEL_48:
    v14 = *(_QWORD*)(a1 + 5112);
    if (v14 == 0) {
      return;
    }
    goto LABEL_49;
  }
  if ((GameData_22356f8 & v15) == 0) {
    while (1) {
      v20 = v18[1];
      if (v20 == -1193575788) {
        if (*((_DWORD*)v18 + 4) == -1193575788) {
          goto LABEL_81;
        }
      }
      else if ((v20 & v15) != v16) {
        goto LABEL_48;
      }
      v18 = (__int64*)*v18;
      if (v18 == nullptr) {
        goto LABEL_48;
      }
    }
  }
  while (1) {
    v19 = v18[1];
    if (v19 == -1193575788) {
      break;
    }
    if (v19 >= GameData_22356f8) {
      v19 %= (unsigned __int64)GameData_22356f8;
    }
    if (v19 != v16) {
      goto LABEL_48;
    }
  LABEL_35:
    v18 = (__int64*)*v18;
    if (v18 == nullptr) {
      goto LABEL_48;
    }
  }
  if (*((_DWORD*)v18 + 4) != -1193575788) {
    goto LABEL_35;
  }
LABEL_81:
  v14 = *(_QWORD*)(a1 + 8LL * *((int*)v18 + 5));
  if (v14 == 0) {
    return;
  }
LABEL_49:
  if ((GameData_22356f8 & v15) == 0) {
    v21 = ((_DWORD)GameData_22356f8 - 1) & 0x66401914;
    v22 = *(__int64***)(GameData_22356f0 + 8 * v21);
    if (v22 != nullptr) {
      goto LABEL_55;
    }
    goto LABEL_65;
  }
  v21 = 1715476756;
  if ((unsigned __int64)GameData_22356f8 <= 0x66401914) {
    v21 = 0x66401914 % (unsigned int)GameData_22356f8;
  }
  v22 = *(__int64***)(GameData_22356f0 + 8 * v21);
  if (v22 == nullptr) {
    goto LABEL_65;
  }
LABEL_55:
  v23 = *v22;
  if (v23 == nullptr) {
  LABEL_65:
    v24 = 639;
    goto LABEL_66;
  }
  v24 = 639;
  if ((GameData_22356f8 & v15) == 0) {
    while (1) {
      v33 = v23[1];
      if (v33 == 1715476756) {
        if (*((_DWORD*)v23 + 4) == 1715476756) {
          goto LABEL_83;
        }
      }
      else if ((v33 & v15) != v21) {
        goto LABEL_66;
      }
      v23 = (__int64*)*v23;
      if (v23 == nullptr) {
        goto LABEL_66;
      }
    }
  }
  while (1) {
    v25 = v23[1];
    if (v25 == 1715476756) {
      break;
    }
    if (v25 >= GameData_22356f8) {
      v25 %= (unsigned __int64)GameData_22356f8;
    }
    if (v25 != v21) {
      goto LABEL_66;
    }
  LABEL_59:
    v23 = (__int64*)*v23;
    if (v23 == nullptr) {
      goto LABEL_66;
    }
  }
  if (*((_DWORD*)v23 + 4) != 1715476756) {
    goto LABEL_59;
  }
LABEL_83:
  v24 = *((int*)v23 + 5);
LABEL_66:
  v26 = fw_memory_HeapManager_Allocate(*v5, 336, 16, 0);
  memset(v26, 0, 0x150u);
  v27 = *(_QWORD*)(a1 + 8 * v24);
  *(_QWORD*)(v26 + 8) = 0;
  *(_QWORD*)(v26 + 16) = 0;
  *(_QWORD*)(v26 + 24) = 0;
  *(_QWORD*)(v26 + 32) = 0;
  *(_QWORD*)(v26 + 40) = 0;
  *(_QWORD*)(v26 + 48) = 0;
  *(_QWORD*)(v26 + 56) = 0;
  *(_QWORD*)(v26 + 64) = 0;
  *(_QWORD*)(v26 + 72) = 0;
  *(_QWORD*)(v26 + 80) = 0;
  *(_QWORD*)(v26 + 88) = 0;
  *(_QWORD*)(v26 + 96) = 0;
  *(_QWORD*)(v26 + 104) = 0;
  *(_QWORD*)(v26 + 112) = 0;
  *(_QWORD*)(v26 + 120) = 0;
  *(_QWORD*)(v26 + 128) = 0;
  *(_QWORD*)(v26 + 136) = 0;
  *(_QWORD*)(v26 + 144) = 0;
  *(_QWORD*)(v26 + 152) = 0;
  *(_QWORD*)(v26 + 160) = 0;
  *(_DWORD*)v26 = 18;
  *(_QWORD*)(v26 + 168) = 0;
  *(_QWORD*)(v26 + 176) = 0;
  *(_QWORD*)(v26 + 184) = 0;
  *(_QWORD*)(v26 + 192) = 0;
  *(_QWORD*)(v26 + 200) = 0;
  *(_QWORD*)(v26 + 208) = 0;
  *(_DWORD*)(v26 + 232) = 0;
  *(_DWORD*)(v26 + 312) = 0;
  *(_QWORD*)(v26 + 256) = 0;
  *(_QWORD*)(v26 + 264) = 0;
  *(_QWORD*)(v26 + 272) = 0;
  *(_QWORD*)(v26 + 280) = 0;
  *(_QWORD*)(v26 + 288) = 0;
  *(_QWORD*)(v26 + 296) = 0;
  *(_BYTE*)(v26 + 304) = 0;
  *(_QWORD*)(a1 + 8 * v24) = v26;
  *(_DWORD*)(v26 + 224) = 1051372203;
  *(_QWORD*)(v26 + 240) = 0x3FC0000040400000LL;
  *(_QWORD*)(v26 + 248) = 0;
  if (v27 != 0) {
    GameHr_7f7720(a1 + 8 * v24, v27);
    v26 = *(_QWORD*)(a1 + 8 * v24);
  }
  v28 = *(unsigned __int8*)(v14 + 8);
  v29 = (v28 & 1) == 0;
  v30 = v28 >> 1;
  if (v29) {
    v31 = v14 + 9;
  }
  else {
    v31 = *(_QWORD*)(v14 + 24);
  }
  if (v29) {
    v32 = v30;
  }
  else {
    v32 = *(_QWORD*)(v14 + 16);
  }
  CharacterAppearance_1075a00(v26, v31, v32);
}

bool GameHr_108cb20(int a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64** v4;
  __int64* v5;
  int v6;
  unsigned __int64 v7;
  __int64 v9;

  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v2 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v3 = a1;
      if (GameData_22356f8 <= (unsigned __int64)a1) {
        v3 = a1 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v3 = v2 & a1;
    }
    v4 = *(__int64***)(GameData_22356f0 + 8 * v3);
    if (v4 != nullptr) {
      v5 = *v4;
      if (*v4 != nullptr) {
        v6 = 639;
        if ((GameData_22356f8 & v2) == 0) {
          while (1) {
            v9 = v5[1];
            if (v9 == a1) {
              if (*((_DWORD*)v5 + 4) == a1) {
                goto LABEL_32;
              }
            }
            else if ((v9 & v2) != v3) {
              return a1 == ((_DWORD*)&GameData_2167828)[10 * (__int64)v6 + 3] &&
                     a1 != -574916402 && a1 != 1669996436 && a1 != 0;
            }
            v5 = (__int64*)*v5;
            if (v5 == nullptr) {
              return a1 == ((_DWORD*)&GameData_2167828)[10 * (__int64)v6 + 3] &&
                     a1 != -574916402 && a1 != 1669996436 && a1 != 0;
            }
          }
        }
        while (1) {
          v7 = v5[1];
          if (v7 == a1) {
            if (*((_DWORD*)v5 + 4) == a1) {
            LABEL_32:
              v6 = *((_DWORD*)v5 + 5);
              return a1 == ((_DWORD*)&GameData_2167828)[10 * (__int64)v6 + 3] &&
                     a1 != -574916402 && a1 != 1669996436 && a1 != 0;
            }
          }
          else {
            if (v7 >= GameData_22356f8) {
              v7 %= (unsigned __int64)GameData_22356f8;
            }
            if (v7 != v3) {
              return a1 == ((_DWORD*)&GameData_2167828)[10 * (__int64)v6 + 3] &&
                     a1 != -574916402 && a1 != 1669996436 && a1 != 0;
            }
          }
          v5 = (__int64*)*v5;
          if (v5 == nullptr) {
            return a1 == ((_DWORD*)&GameData_2167828)[10 * (__int64)v6 + 3] &&
                   a1 != -574916402 && a1 != 1669996436 && a1 != 0;
          }
        }
      }
    }
  }
  v6 = 639;
  return a1 == ((_DWORD*)&GameData_2167828)[10 * (__int64)v6 + 3] &&
         a1 != -574916402 && a1 != 1669996436 && a1 != 0;
}

__int64 GameHr_109f640(__int64 a1, const char* a2)
{
  __int64 result;
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int16* v24;
  unsigned __int64 v25;
  __int64 v26;
  const char* v27;
  int v28;

  if (a2 == nullptr) {
    return 0;
  }
  result = 0;
  if (*a2 != 0 && *a2 != 45) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v5 = GameData_212df08;
    if ((explicit & 1) == 0) {
      v26 = a1;
      v27 = a2;
      v28 = __cxa_guard_acquire((__int64)GameData_212df10);
      a2 = v27;
      a1 = v26;
      if (v28 != 0) {
        *v5 = wld_Crc32(0, "ModelModule", 0xBu);
        __cxa_guard_release((__int64)GameData_212df10);
        a1 = v26;
        a2 = v27;
      }
    }
    v7 = *(_QWORD*)(a1 + 504);
    v6 = *(_QWORD*)(a1 + 512);
    v8 = v6;
    v9 = v6;
    do {
      if (v9 == v7) {
        return 0;
      }
      v10 = *(_DWORD*)(v9 - 16);
      v9 -= 16;
      v8 -= 16;
    } while (v10 != *v5);
    if (v6 == v8) {
      return 0;
    }
    v11 = *(_QWORD*)(v8 + 8);
    if (v11 == 0) {
      return 0;
    }
    v12 = *(_QWORD*)(v11 + 24);
    if (v12 == 0) {
      return 0;
    }
    v13 = *(_QWORD**)(v12 + 168);
    if (v13 == nullptr) {
      return 0;
    }
    v14 = *(_QWORD*)(*v13 + 8LL);
    if (v14 == 0) {
      return 0;
    }
    v15 = (__int64)a2;
    v16 = strlen(a2);
    v17 = v14 + 8;
    v18 = *(unsigned __int16*)(v14 + 12);
    v19 = v14 + 8 + 16 * v18;
    v20 = *(_DWORD*)v19;
    if ((signed __int32)*(_DWORD*)(v14 + 8) < (signed __int32)*(_DWORD*)v19) {
      do {
        v23 = (__int64)v20 >> 3;
        if (v16 > v23) {
          v21 = (*(unsigned __int8*)(v15 + v16 + ~v23) >> (v20 & 7)) & 1;
        }
        else {
          v21 = 0;
        }
        v18 = *(unsigned __int16*)(v14 + 12 + 16 * v18 + 2 * v21);
        v22 = v20 < (signed __int32)*(_DWORD*)(v17 + 16 * v18);
        v20 = *(_DWORD*)(v17 + 16 * v18);
      } while (v22);
      v19 = v17 + 16 * v18;
    }
    v24 = *(unsigned __int16**)(v19 + 8);
    if (v16 != *v24) {
      return 0;
    }
    if (memcmp((__int64)(v24 + 1), v15, v16) != 0) {
      return 0;
    }
    v25 = v19 - v14 - 24;
    if ((~v25 & 0xFFFFFFFF0LL) == 0) {
      return 0;
    }
    return v13[3] + 96LL * (int)(v25 >> 4);
  }
  return result;
}

float GameHr_10a00a0(float a1, long double a2, float a3)
{
  float result;

  if (a1 > a3) {
    return 1.0 - GameHr_10a00a0(a3, a2, a1);
  }
  result = 0.0;
  if (*(float*)&a2 > a1) {
    result = 1.0;
    if (a3 > *(float*)&a2) {
      return (float)(*(float*)&a2 - a1) / (float)(a3 - a1);
    }
  }
  return result;
}

void GameHr_10adda0(__int64 a1, __int64 a2)
{
  __int64 v2;
  const char* v3;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int16* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD v25[9];

  v2 = *(_QWORD*)(a1 + 96);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v3 = *(const char**)(a2 + 16);
  }
  else {
    v3 = (const char*)(a2 + 1);
  }
  if (v2 != 0) {
    if (v3 != nullptr) {
      v6 = strlen(v3);
    }
    else {
      v6 = 0;
    }
    v7 = v2 + 8;
    v8 = *(unsigned __int16*)(v2 + 12);
    v9 = v2 + 8 + 16 * v8;
    v10 = *(_DWORD*)v9;
    if ((signed __int32)*(_DWORD*)(v2 + 8) < (signed __int32)*(_DWORD*)v9) {
      do {
        v13 = (__int64)v10 >> 3;
        if (v6 > v13) {
          v11 = ((unsigned __int8)v3[v6 + ~v13] >> (v10 & 7)) & 1;
        }
        else {
          v11 = 0;
        }
        v8 = *(unsigned __int16*)(v2 + 12 + 16 * v8 + 2 * v11);
        v12 = v10 < (signed __int32)*(_DWORD*)(v7 + 16 * v8);
        v10 = *(_DWORD*)(v7 + 16 * v8);
      } while (v12);
      v9 = v7 + 16 * v8;
    }
    v14 = *(unsigned __int16**)(v9 + 8);
    if (v6 == *v14 && memcmp((__int64)(v14 + 1), (__int64)v3, v6) == 0) {
      v15 = (unsigned __int64)(v9 - v2 - 24) >> 4;
      if ((_DWORD)v15 != -1) {
        GameRoutine_a6ea10_alt1((void*)(v25), a1, v15);
        if ((*(_BYTE*)(a2 + 24) & 1) != 0) {
          v16 = *(_QWORD*)(a2 + 40);
          if (v16 != 0) {
            v17 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v17 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
          }
        }
        v18 = v25[1];
        v19 = v25[2];
        v20 = v25[3];
        *(_QWORD*)(a2 + 24) = v25[0];
        *(_QWORD*)(a2 + 32) = v18;
        *(_QWORD*)(a2 + 40) = v19;
        v21 = v25[6];
        v22 = v25[7];
        v23 = v25[4];
        *(_QWORD*)(a2 + 64) = v25[5];
        *(_QWORD*)(a2 + 72) = v21;
        v24 = v25[8];
        *(_QWORD*)(a2 + 48) = v20;
        *(_QWORD*)(a2 + 56) = v23;
        *(_QWORD*)(a2 + 80) = v22;
        *(_QWORD*)(a2 + 88) = v24;
      }
    }
  }
}

__int64 GameHr_10d6cb0(__int64 a1)
{
  __int64 v1;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 8);
  result = *(_QWORD*)(v1 + 160);
  if (result != 0) {
    result = GameRoutine_106c6d0();
    if ((result & 1) != 0) {
      return GameRoutine_106f310(*(_QWORD*)(v1 + 160));
    }
  }
  return result;
}

__int64 GameHr_10eca20(__int64 a1)
{
  float v2;
  float v3;
  __int64 result;
  float* v5;
  float* v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  bool v14;
  float v15;
  float v16;
  bool v17;

  v2 = *(float*)(GameData_2265ae0 + 160);
  v3 = (*(float (**)(__int64))(*(_QWORD*)a1 + 152LL))(a1);
  v5 = *(float**)(a1 + 152);
  v6 = *(float**)(a1 + 160);
  result = a1 + 152;
  if (v5 != v6) {
    v7 = (float)((float)(v2 * 0x1.0aefp+4f) / 1000.0f) / v3;
    if (!(*(float*)(a1 + 184) > *(float*)(a1 + 188))) {
      v8 = v7;
    }
    else {
      v8 = -v7;
    }
    result = GameRoutine_109fee0(result, *(float*)(a1 + 176),
                                 *(float*)(a1 + 176) + v8);
    v5 = *(float**)(a1 + 152);
    v6 = *(float**)(a1 + 160);
    *(float*)(a1 + 176) = v8 + *(float*)(a1 + 176);
  }
  v9 = *(float*)(a1 + 180);
  v10 = v9;
  while (v5 != v6) {
    v11 = *v5;
    if (!(v10 > *v5)) {
      v12 = v10;
    }
    else {
      v12 = *v5;
    }
    if (v9 < v11) {
      v13 = *v5;
    }
    else {
      v13 = v9;
    }
    v14 = v11 < 0.0;
    if (!(v11 < 0.0)) {
      v15 = v13;
    }
    else {
      v15 = v9;
    }
    v9 = v5[1];
    if (!v14) {
      v10 = v12;
    }
    if (v9 < 0.0) {
      goto LABEL_7;
    }
    if (v10 > v9) {
      v10 = v5[1];
    }
    if (!(v15 < v9)) {
    LABEL_7:
      v9 = v15;
    }
    v5 += 16;
  }
  v16 = *(float*)(a1 + 176);
  v17 = v10 <= v16 && v16 < v9;
  if (!v17 && (*(_WORD*)(a1 + 136) & 1) == 0) {
    return GameRoutine_657a50(a1, 1);
  }
  return result;
}

__int64 GameHr_1114a60(__int64 result, __int64 a2, const char* a3,
                       unsigned int a4)
{
  if (a2 != 0 && a3 != nullptr) {
    result = GameRoutine_155f480(result, a2);
    if (result != 0) {
      result =
          GameRoutine_1a0a6c0(result, GameData_212d670[0], GameData_212d690, 0);
      if (result != 0) {
        return GameRoutine_156c910(result, a3, 1, a4);
      }
    }
  }
  return result;
}

__int64 GameHr_11302e0()
{
  return GameRoutine_1562680(GameData_2130258[0], "FaceOut", 1.0);
}

void GameHr_1133b20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  char v6;
  __int64* v7;
  const char* v8;

  GameRoutine_60a020_alt1(a1 + 216, *msg_MessageManager_empty_text__ptr);
  if ((*(_BYTE*)(a1 + 216) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 232);
  }
  else {
    v2 = a1 + 217;
  }
  if (v2 != 0) {
    v3 = ui_LayoutAccessor_FindTextBox(game_talk_g_window_layout_ptr[0],
                                       (__int64)"T_Txt");
    if (v3 != 0) {
      GameRoutine_156c5d0_alt1(v3, v2, 0);
    }
  }
  v4 = game_8224a0(0x13u);
  v6 = game_GameModeData_instance_ != 0 &&
       (v5 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v4)) != 0 &&
       *(_DWORD*)(v5 + 32) == 1;
  *(_BYTE*)(a1 + 289) = v6;
  v7 = game_talk_g_window_layout_ptr[0];
  ui_LayoutAccessor_SetPaneVisible((__int64)game_talk_g_window_layout_ptr[0],
                                   (__int64)"N_Auto", v6);
  ui_LayoutAccessor_SetPaneVisible((__int64)v7, (__int64)"N_Next",
                                   (*(_BYTE*)(a1 + 289) & 1) == 0);
  if (*(_BYTE*)(a1 + 289) != 0) {
    v8 = "Auto";
  }
  else {
    v8 = "Wait";
  }
  GameHr_1562680((__int64)v7, v8, 0x1.0000000000000p+0f);
  game_113d3c0(a1 + 216, *(_DWORD*)(a1 + 200));
}

void GameHr_1135760(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  _DWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  char v13;
  int v14;
  int v15;
  __int64* v16;
  struct {
    __int64 v17[2];
    __int64 v18;
    __int64 v19;
  } v17_;

  Seq_11331c0(a1);
  if (*GameData_212fc38[0] != 0) {
    v2 = *(_QWORD**)(*GameData_212fc38[0] + 576);
    if (v2 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      v4 = (_DWORD*)GameData_212d280;
      v5 = game_g_frame_clock_ptr[0];
      do {
        if ((v2[2] & 1) != 0) {
          fw_text_String_CopyTerminated(v17_.v17, v2[4], v2[3]);
        }
        else {
          v6 = v2[3];
          v7 = v2[4];
          v17_.v17[0] = v2[2];
          v17_.v17[1] = v6;
          v17_.v18 = v7;
        }
        v8 = v2[5];
        v17_.v19 = v8;
        if (v8 != 0 && *(_QWORD*)(v8 + 152) != 0) {
          v9 = *v5;
          *(_DWORD*)(v8 + 376) = 0;
          v10 = 0x1.e000000000000p+5f / (float)*(int*)(v9 + 476);
          if (v10 <= 0x0.0p+0f) {
            v11 = -0x1.e000000000000p+5f;
          }
          else {
            v11 = -0x1.e000000000000p+5f / v10;
          }
          *(_DWORD*)(v8 + 380) = *v4 + (int)v11;
        }
        if ((v17_.v17[0] & 1) != 0 && v17_.v18 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v17_.v18);
        }
        v2 = (_QWORD*)*v2;
      } while (v2 != nullptr);
    }
  }
  v13 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ == 0) {
  LABEL_26:
    if ((v13 & 1) != 0) {
      return;
    }
    goto LABEL_27;
  }
  if ((unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
          1 <=
      2) {
    v14 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v14 & 8) != 0) {
      v15 = 2;
    }
    else {
      v15 = 3;
    }
    v13 = (v15 & v14) == 0;
    goto LABEL_26;
  }
LABEL_27:
  if ((*(_BYTE*)(a1 + 204) & 1) == 0) {
    v16 = game_talk_g_window_layout_ptr[0];
    ui_LayoutAccessor_SetPaneVisible((__int64)game_talk_g_window_layout_ptr[0],
                                     (__int64)"Next", 0);
    GameHr_1562680((__int64)v16, "Wait", 0x1.0000000000000p+0f);
  }
}

__int64 GameHr_113a550(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v6;
  float v7;
  __int64 v8;
  int v9;
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v14[2];
    _BYTE* v15;
  } v14_;
  struct {
    __int64 v16;
    int v17;
  } v16_;
  _BYTE v18[16];

  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(v14_.v14, *(_QWORD*)(v2 + 40),
                                  *(_QWORD*)(v2 + 32)),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
    v2 = *a2;
  }
  else {
    v3 = *(_QWORD*)(*a2 + 32);
    v4 = *(_QWORD*)(*a2 + 40);
    v14_.v14[0] = *(_QWORD*)(*a2 + 24);
    v14_.v14[1] = v3;
    v14_.v15 = (_BYTE*)v4;
  }
  game_113c060((unsigned __int8*)(v2 + 48)),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  v7 = v6;
  v8 = GameRoutine_113c310_alt1((unsigned __int8*)v14_.v14),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  v9 = v8;
  if ((v14_.v14[0] & 1) != 0) {
    v10 = v14_.v15;
  }
  else {
    v10 = (char*)v14_.v14 + 1;
  }
  game_810a70((void*)((__int64)v18), v8, v10, v7),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v9 == 2) {
    v16_.v16 = 0;
    v11 = *GameData_212d460[0];
    v16_.v17 = 0x2000;
    GameRoutine_112180_alt1((__int64)&v16_.v16, (__int64)v18),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
    Seq_1134ae0(v11, (__int64)&v16_.v16),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if ((v14_.v14[0] & 1) != 0 && v14_.v15 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  (__int64)v14_.v15),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  return 1;
}

__int64 GameHr_113a660(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  _QWORD* v9;
  char** v10;
  __int64 v11;
  long double v12;
  int v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v19[2];
    __int64 v20;
  } v19_;
  struct {
    _QWORD v21[2];
    __int64 v22;
  } v21_;
  __int64 v23;
  int v24;
  _BYTE v25[16];

  v2 = *(_QWORD**)a2;
  if ((*(_BYTE*)(*(_QWORD*)a2 + 24LL) & 1) != 0) {
    GameRoutine_60a270(v21_.v21, v2[5], v2[4]);
    v2 = *(_QWORD**)a2;
  }
  else {
    v4 = *(_QWORD*)(*(_QWORD*)a2 + 32LL);
    v5 = *(_QWORD*)(*(_QWORD*)a2 + 40LL);
    v21_.v21[0] = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
    v21_.v21[1] = v4;
    v21_.v22 = v5;
  }
  if ((v2[6] & 1) != 0) {
    GameRoutine_60a270(v19_.v19, v2[8], v2[7]);
    v2 = *(_QWORD**)a2;
  }
  else {
    v6 = v2[7];
    v7 = v2[8];
    v19_.v19[0] = v2[6];
    v19_.v19[1] = v6;
    v19_.v20 = v7;
  }
  v8 = GameRoutine_113c060(v2 + 9);
  if (GameData_21f3fe4 == 1) {
    v9 = v19_.v19;
  }
  else {
    v9 = v21_.v21;
  }
  if (GameData_21f3fe4 == 1) {
    v10 = (char**)&v19_.v20;
  }
  else {
    v10 = (char**)&v21_.v22;
  }
  v11 = GameRoutine_113c310(v9);
  *(float*)&v12 = v8;
  v13 = v11;
  if ((*(_BYTE*)v9 & 1) != 0) {
    v14 = *v10;
  }
  else {
    v14 = (char*)v9 + 1;
  }
  GameRoutine_810a70(v11, v14, v12);
  if (v13 == 2) {
    v23 = 0;
    v15 = *GameData_212d460[0];
    v24 = 0x2000;
    GameRoutine_112180(&v23, v25);
    GameRoutine_1134ae0(v15, (__int64)&v23);
  }
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v16 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v16, (_QWORD)(v19_.v20));
  }
  if ((v21_.v21[0] & 1) != 0 && v21_.v22 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v17 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v17, (_QWORD)(v21_.v22));
  }
  return 1;
}

__int64 GameHr_113d7d0(__int64 result)
{
  int v1;
  int v2;

  if (*(_BYTE*)(result + 72) == 1) {
    *(_BYTE*)(result + 72) = 0;
    if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3 &&
        (((v1 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v2 = 2)
                                                              : (v2 = 3),
         (v2 & v1) == 0)) {
      GameRoutine_1562680(&GameData_2236800, "Out", 1.0);
      GameRoutine_15638b0(&GameData_2236800, "Out", 0);
      GameRoutine_1562f00(&GameData_2236800, "Out");
      GameRoutine_1563030(&GameData_2236800, "Out", 0);
    }
    else {
      GameRoutine_1562680(&GameData_2236800, "Out", 1.0);
    }
    result = GameData_2258ba8;
    if (GameData_2258ba8 != 0) {
      return GameRoutine_1567000(GameData_2258ba8, 0);
    }
  }
  return result;
}

__int64 GameHr_11401e0(__int64 a1, int a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 (*v11)();
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  _QWORD v16[2];
  __int64 v17;
  _BYTE v18[24];
  int v19;
  _BYTE* v20;

  *(_WORD*)(a1 + 8) = 0;
  v4 = (__int64*)(a1 + 8);
  *(_QWORD*)(a1 + 64) = 0;
  *(_WORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 56) = a2;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)a1 = GameData_2011d60;
  if (v4 != a3) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      GameRoutine_64df20(v4, a3[2], a3[1]);
    }
    else {
      v6 = *a3;
      v7 = a3[2];
      v4[1] = a3[1];
      v4[2] = v7;
      *v4 = v6;
    }
  }
  v8 = a3[3];
  for (i = a3[4]; v8 != i; v8 += 32) {
    v18[0] = 0;
    v19 = -1;
    v10 = *(_DWORD*)(v8 + 24);
    if (v10 != -1) {
      v11 = GameData_2011e18[(unsigned int)v10];
      v20 = v18;
      ((void (*)(_BYTE**, __int64))v11)(&v20, v8);
      v19 = v10;
    }
    GameRoutine_eaec10(a1 + 64, v18);
    if (v19 != -1) {
      ((void (*)(_BYTE**, _BYTE*))GameData_2011e00[(unsigned int)v19])(&v20,
                                                                       v18);
    }
  }
  *(_DWORD*)(a1 + 88) = *((_DWORD*)a3 + 12);
  *(_DWORD*)(a1 + 92) = *((_DWORD*)a3 + 13);
  *(_DWORD*)(a1 + 96) = *((_DWORD*)a3 + 14);
  *(_DWORD*)(a1 + 100) = *((_DWORD*)a3 + 15);
  *(_DWORD*)(a1 + 104) = *((_DWORD*)a3 + 16);
  if ((a3[9] & 1) != 0) {
    GameRoutine_60a270(v16, a3[11], a3[10]);
  }
  else {
    v12 = a3[10];
    v13 = a3[11];
    v16[0] = a3[9];
    v16[1] = v12;
    v17 = v13;
  }
  result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 120LL))(a1, v16);
  if ((v16[0] & 1) != 0 && v17 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v15 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15, (_QWORD)(v17));
  }
  return result;
}

void GameHr_114eb80(_QWORD* a1)
{
  __int64** v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64** v16;
  } v13_;

  v2 = (__int64**)a1[75];
  if (v2 != nullptr) {
    GameHr_10aa0a0(v2);
  }
  v3 = (_QWORD*)a1[72];
  if (v3 != nullptr) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      if ((v3[2] & 1) != 0) {
        fw_text_String_CopyTerminated(&v13_.v13, v3[4], v3[3]);
      }
      else {
        v5 = v3[3];
        v6 = v3[4];
        v13_.v13 = v3[2];
        v13_.v14 = v5;
        v13_.v15 = v6;
      }
      v13_.v16 = (__int64**)v3[5];
      GameHr_10aa0a0(v13_.v16);
      if ((v13_.v13 & 1) != 0 && v13_.v15 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, v13_.v15);
      }
      v3 = (_QWORD*)*v3;
    } while (v3 != nullptr);
  }
  v8 = (_QWORD*)a1[83];
  if (v8 != nullptr) {
    v9 = fw_memory_g_heap_manager_ptr;
    do {
      if ((v8[2] & 1) != 0) {
        fw_text_String_CopyTerminated(&v13_.v13, v8[4], v8[3]);
      }
      else {
        v10 = v8[3];
        v11 = v8[4];
        v13_.v13 = v8[2];
        v13_.v14 = v10;
        v13_.v15 = v11;
      }
      v13_.v16 = (__int64**)v8[5];
      GameHr_10aa0a0(v13_.v16);
      if ((v13_.v13 & 1) != 0 && v13_.v15 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v12, v13_.v15);
      }
      v8 = (_QWORD*)*v8;
    } while (v8 != nullptr);
  }
}

__int64 GameHr_1156f80(__int64 a1)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  struct {
    __int64 v21[2];
    __int64 v22;
  } v21_;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0) {
      return 0;
    }
  }
  v5 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v5 & 1) != 0) {
    fw_text_String_CopyTerminated(v21_.v21, v5[2], v5[1]);
  }
  else {
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v21_.v21[1] = v7;
    v21_.v22 = v8;
    v21_.v21[0] = v6;
  }
  if (GameData_22336e0 == 0) {
    goto LABEL_33;
  }
  result = (__int64)GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560),
                                             (unsigned __int8*)v21_.v21);
  if (result == 0) {
    goto LABEL_34;
  }
  v10 = *(_QWORD*)(result + 40);
  if (v10 == 0 || *(_QWORD*)(v10 + 136) == 0 || GameData_22336e0 == 0) {
    goto LABEL_33;
  }
  result = (__int64)GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560),
                                             (unsigned __int8*)v21_.v21);
  if (result == 0) {
    goto LABEL_34;
  }
  v11 = *(_QWORD*)(result + 40);
  if (v11 == 0 || *(_BYTE*)(v11 + 128) != 1) {
    goto LABEL_33;
  }
  if (*(_BYTE*)(v11 + 129) == 1) {
    if (GameData_22336e0 != 0 &&
        (v12 = GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560),
                                        (unsigned __int8*)v21_.v21)) !=
            nullptr &&
        (v13 = v12[5]) != 0) {
      v14 = *(_QWORD*)(v13 + 152);
    }
    else {
      v14 = 0;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f858,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_220f858) != 0) {
      GameData_220f854 = wld_Crc32(0, "CharacterAnimator", 0x11u);
      __cxa_guard_release((__int64)&GameData_220f858);
    }
    v15 = *(_QWORD*)(v14 + 512);
    v16 = v15;
    do {
      v17 = *(_DWORD*)(v16 - 16);
      v16 -= 16;
      v15 -= 16;
    } while (v17 != GameData_220f854);
    result = CharacterAnimator_107a6f0(*(_QWORD*)(v15 + 8));
    if (result == 0) {
    LABEL_34:
      if ((v21_.v21[0] & 1) == 0) {
        return result;
      }
      goto LABEL_35;
    }
    v18 = *(_QWORD*)(result + 16);
    if (v18 != 0 && *(__int64 (**)(void))(v18 + 16) == eft_ClampCurve_ptr) {
      if (*(float*)v18 >= *(float*)(v18 + 8)) {
        result = 0;
      }
      else {
        result = 3;
      }
      if ((v21_.v21[0] & 1) == 0) {
        return result;
      }
      goto LABEL_35;
    }
  LABEL_33:
    result = 0;
    goto LABEL_34;
  }
  result = 3;
  if ((v21_.v21[0] & 1) == 0) {
    return result;
  }
LABEL_35:
  if (v21_.v22 != 0) {
    v19 = result;
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v21_.v22);
    return v19;
  }
  return result;
}

#pragma GCC visibility pop
