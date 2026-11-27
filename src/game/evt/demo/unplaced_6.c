#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* Seq_114a9c0(__int64);
__attribute__((swiftcall)) void wld_map_c20fe0(PSEUDO_X8, __int64, __int64,
                                               __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_9a28e0(int);
__int64 GameHr_1151f30();
__int64 GameHr_f41c80();
__int64 GameManager_a21ca0(__int64 result, const char*, const char*, char, char,
                           char);
__int64 GameRoutine_10f3440(float32x4_t*, __int64);
__int64 GameRoutine_1151c60();
__int64 GameRoutine_1151d00();
__int64 GameRoutine_1151d50();
__int64 GameRoutine_11520a0();
__int64 GameRoutine_1152170();
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameVariable_82e3a0(int);
__int64 ObjectBuildCreate_c21360(__int64, __int64, unsigned __int64);
__int64 Seq_114a7d0(__int64, unsigned __int8*);
__int64 Seq_114d0d0(__int64, char);
__int64 Seq_114d340(__int64, __int64);
__int64 Seq_114d520(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_ProcInst_Register(__int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Fade_10cb00(__int64, __int64);
__int64 snd_a2e7c0(__int64 result);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool Seq_114ab50(__int64, _QWORD*);
const char* game_HashString32(const char* result);
double cos(double);
double sin(double);
double snd_getDefineValue(__int64);
extern _QWORD GameData_212d168;
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN GameData_2236970;
extern _UNKNOWN GameData_2236a78;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int64 (*game_evt_demo_LoadMapProc_vtable[])();
extern __int64 (*game_evt_demo_Seq_ChangeMap_lambda0_Destructor_ptr[])();
extern __int64 (*game_evt_demo_Seq_ChangeMap_lambda1_Destructor_ptr[])();
extern __int64 (*game_evt_demo_SwitchMapSituationProc_vtable[])();
extern __int64* GameData_212d460[6];
extern __int64* GameData_212fc38[2];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_2236878;
extern __int64 GameData_2236880;
extern __int64 GameData_2236888;
extern __int64 GameData_2236898;
extern __int64 GameData_22368a8;
extern __int64 GameData_22368b8;
extern __int64 GameData_22368c0;
extern __int64 GameData_22368c8;
extern __int64 GameData_22368d8;
extern __int64 GameData_22368e8;
extern __int64 GameData_22368f8;
extern __int64 GameData_2236900;
extern __int64 GameData_2236908;
extern __int64 GameData_2236918;
extern __int64 GameData_2236928;
extern __int64 GameData_2236938;
extern __int64 GameData_2236940;
extern __int64 GameData_2236948;
extern __int64 GameData_2236958;
extern __int64 GameData_2236968;
extern __int64 GameData_2236980;
extern __int64 GameData_2236988;
extern __int64 GameData_2236990;
extern __int64 GameData_22369a0;
extern __int64 GameData_22369b0;
extern __int64 GameData_22369c0;
extern __int64 GameData_22369c8;
extern __int64 GameData_22369d0;
extern __int64 GameData_22369e0;
extern __int64 GameData_22369f0;
extern __int64 GameData_2236a00;
extern __int64 GameData_2236a08;
extern __int64 GameData_2236a10;
extern __int64 GameData_2236a20;
extern __int64 GameData_2236a30;
extern __int64 GameData_2236a40;
extern __int64 GameData_2236a48;
extern __int64 GameData_2236a50;
extern __int64 GameData_2236a60;
extern __int64 GameData_2236a70;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_1a9f09e;
extern char GameData_2236870;
extern char GameData_22368b0;
extern char GameData_22368f0;
extern char GameData_2236930;
extern char GameData_2236978;
extern char GameData_22369b8;
extern char GameData_22369f8;
extern char GameData_2236a38;
extern int* GameData_212deb0;
extern int GameData_21ec57c;
extern int GameData_2236890;
extern int GameData_22368a0;
extern int GameData_22368d0;
extern int GameData_22368e0;
extern int GameData_2236910;
extern int GameData_2236920;
extern int GameData_2236950;
extern int GameData_2236960;
extern int GameData_2236998;
extern int GameData_22369a8;
extern int GameData_22369d8;
extern int GameData_22369e8;
extern int GameData_2236a18;
extern int GameData_2236a28;
extern int GameData_2236a58;
extern int GameData_2236a68;
float Cursor_734120(int, int, float, float, float, float);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
int strcmp(const char*, const char*);
unsigned __int64 strlen(const char*);
void Seq_114cda0(__int64, __int64, __int16*, char);
void Seq_a85600(__int64);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void game_112ce60(__int64, __int64*, __int64);
void game_112daa0(unsigned __int8*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_evt_demo_114a040(__int64 a1, char* a2, __int64 a3);
bool game_evt_demo_114af80(__int64 a1, __int64 a2, __int16* a3, char a4);
void game_evt_demo_11c5ae0(__int64 a1);
void game_evt_demo_11ca3a0(__int64 a1);
double GameRoutine_1a09f70(double);
double GameRoutine_1a09f80(double);

void game_evt_demo_114a040(__int64 a1, char* a2, __int64 a3)
{
  char v3;
  __int64 v6;
  __int64* v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 i;
  __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64* v29;
  __int64* j;
  __int64 v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64* v34;
  unsigned __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64* v54;
  __int64 v55;
  __int64* v56;
  __int64* v57;
  __int64 v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  char v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  struct {
    __int64* v80;
    __int64 v81;
    __int64 v82;
  } v80_;
  struct {
    __int64 v83;
    unsigned __int64 v84;
    __int64* v85;
  } v83_;
  struct {
    _BYTE* v86;
    _BYTE* v87;
    _BYTE* v88;
  } v86_;
  struct {
    __int64 v89[2];
    __int64 v90;
  } v89_;
  struct {
    _BYTE* v91;
    _BYTE* v92;
    _BYTE* v93;
  } v91_;
  struct {
    __int64 v94[2];
    __int64 v95;
  } v94_;
  struct {
    __int64* v96;
    __int64 v97;
    __int64 v98;
  } v96_;
  struct {
    __int64* v99;
    __int64 v100;
    __int64 v101;
  } v99_;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *a2;
  v99_.v100 = 0;
  v99_.v101 = 0;
  v96_.v98 = 0;
  v99_.v99 = nullptr;
  v96_.v96 = nullptr;
  v96_.v97 = 0;
  if ((v3 & 1) != 0) {
    fw_text_String_CopyTerminated(v94_.v94, *((_QWORD*)a2 + 2),
                                  *((_QWORD*)a2 + 1)),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v6 = *((_QWORD*)a2 + 1);
    v94_.v94[0] = *(_QWORD*)a2;
    v94_.v94[1] = v6;
    v94_.v95 = *((_QWORD*)a2 + 2);
  }
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = (_BYTE*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1, 16, 0),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v91_.v91 = v8;
  *v8 = 10;
  v91_.v92 = v8 + 1;
  v91_.v93 = v8 + 1;
  game_112ce60((__int64)v94_.v94, (__int64*)&v91_.v91, (__int64)&v99_.v99),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v9 = *v7;
  v91_.v92 = v8;
  v10 = 128;
  if (*(_QWORD*)(v9 + 200) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free(v9 + v10, (__int64)v8),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v94_.v94[0] & 1) != 0 && v94_.v95 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*v7 + v11, v94_.v95),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    fw_text_String_CopyTerminated(v89_.v89, *(_QWORD*)(a3 + 16),
                                  *(_QWORD*)(a3 + 8)),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v12 = *(_QWORD*)(a3 + 8);
    v89_.v89[0] = *(_QWORD*)a3;
    v89_.v89[1] = v12;
    v89_.v90 = *(_QWORD*)(a3 + 16);
  }
  v13 = (_BYTE*)fw_memory_HeapManager_Allocate(*v7, 1, 16, 0),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v86_.v86 = v13;
  *v13 = 10;
  v86_.v87 = v13 + 1;
  v86_.v88 = v13 + 1;
  game_112ce60((__int64)v89_.v89, (__int64*)&v86_.v86, (__int64)&v96_.v96),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v14 = *v7;
  v86_.v87 = v13;
  v15 = 128;
  if (*(_QWORD*)(v14 + 200) == 0) {
    v15 = 56;
  }
  nn_mem_StandardAllocator_Free(v14 + v15, (__int64)v13),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v89_.v89[0] & 1) != 0 && v89_.v90 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*v7 + v17, v89_.v90),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v18 = v99_.v99;
  v19 = (__int64*)v99_.v100;
  for (i = GameData_212c638; v18 != v19; v18 += 3) {
    if ((*(_BYTE*)v18 & 1) != 0) {
      v16 = fw_text_String_CopyTerminated(&v83_.v83, v18[2], v18[1]);
    }
    else {
      v21 = *v18;
      v22 = (__int64*)v18[2];
      v83_.v84 = v18[1];
      v83_.v85 = v22;
      v83_.v83 = v21;
    }
    if ((v83_.v83 & 1) != 0) {
      v23 = v83_.v84;
    }
    else {
      v23 = (unsigned __int64)(unsigned __int8)v83_.v83 >> 1;
    }
    if (v23 != 0) {
      game_112daa0((unsigned __int8*)&v83_.v83),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v24 = (v83_.v83 & 1) != 0 ? v83_.v85 : (__int64*)((char*)&v83_.v83 + 1);
      v25 = (v83_.v83 & 1) != 0
                ? v83_.v84
                : (unsigned __int64)(unsigned __int8)v83_.v83 >> 1;
      v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)i + 32LL) - 8LL) + 64LL);
      if (v16 != 0) {
        v26 = *(_QWORD*)(v16 + 96);
        if (v26 != 0 && *(_DWORD*)(v26 + 240) == 5) {
          v27 = (_QWORD*)(v16 + 120);
          while (1) {
            v27 = (_QWORD*)*v27;
            if (v27 == nullptr) {
              break;
            }
            if (*(_DWORD*)(v27[5] + 240LL) != 5) {
              goto LABEL_46;
            }
          }
          v16 = ObjectBuildCreate_c21360(v16, (__int64)v24, v25);
          if (v16 != 0) {
            *(_BYTE*)(v16 + 289) = 1;
          }
        }
      }
    }
  LABEL_46:
    if ((v83_.v83 & 1) != 0 && v83_.v85 != nullptr) {
      if (*(_QWORD*)(*v7 + 200) != 0) {
        v28 = 128;
      }
      else {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*v7 + v28, (__int64)v83_.v85),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v29 = v96_.v96;
  for (j = (__int64*)v96_.v97; v29 != j; v29 += 3) {
    if ((*(_BYTE*)v29 & 1) != 0) {
      v16 = fw_text_String_CopyTerminated(&v83_.v83, v29[2], v29[1]);
    }
    else {
      v31 = *v29;
      v32 = (__int64*)v29[2];
      v83_.v84 = v29[1];
      v83_.v85 = v32;
      v83_.v83 = v31;
    }
    if ((v83_.v83 & 1) != 0) {
      v33 = v83_.v84;
    }
    else {
      v33 = (unsigned __int64)(unsigned __int8)v83_.v83 >> 1;
    }
    if (v33 != 0) {
      game_112daa0((unsigned __int8*)&v83_.v83),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v34 = (v83_.v83 & 1) != 0 ? v83_.v85 : (__int64*)((char*)&v83_.v83 + 1);
      v35 = (v83_.v83 & 1) != 0
                ? v83_.v84
                : (unsigned __int64)(unsigned __int8)v83_.v83 >> 1;
      v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)i + 32LL) - 8LL) + 64LL);
      if (v16 != 0) {
        v36 = *(_QWORD*)(v16 + 96);
        if (v36 != 0 && *(_DWORD*)(v36 + 240) == 5) {
          v37 = (_QWORD*)(v16 + 120);
          while (1) {
            v37 = (_QWORD*)*v37;
            if (v37 == nullptr) {
              break;
            }
            if (*(_DWORD*)(v37[5] + 240LL) != 5) {
              goto LABEL_77;
            }
          }
          v16 = ObjectBuildCreate_c21360(v16, (__int64)v34, v35);
          if (v16 != 0) {
            *(_BYTE*)(v16 + 289) = 0;
          }
        }
      }
    }
  LABEL_77:
    if ((v83_.v83 & 1) != 0 && v83_.v85 != nullptr) {
      if (*(_QWORD*)(*v7 + 200) != 0) {
        v38 = 128;
      }
      else {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(*v7 + v38, (__int64)v83_.v85),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  if ((Seq_114a7d0(v16, (unsigned __int8*)(a1 + 304)) & 1) != 0) {
    v39 = *(_QWORD*)(*(_QWORD*)i + 32LL);
    v40 = *(_QWORD*)(*(_QWORD*)(v39 - 8) + 64LL);
    if (v40 != 0 && (v41 = *(_QWORD*)(v40 + 96)) != 0 &&
        *(_DWORD*)(v41 + 240) == 5) {
      v42 = (_QWORD*)(v40 + 120);
      while (1) {
        v42 = (_QWORD*)*v42;
        if (v42 == nullptr) {
          break;
        }
        if (*(_DWORD*)(v42[5] + 240LL) != 5) {
          goto LABEL_90;
        }
      }
      wld_map_c20fe0((void*)(&v83_.v83), v40, (__int64)"Com_01", 6),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v39 = *(_QWORD*)(*(_QWORD*)i + 32LL);
    }
    else {
    LABEL_90:
      v83_.v84 = 0;
      v83_.v85 = nullptr;
      v83_.v83 = 0;
    }
    v43 = *(_QWORD*)(*(_QWORD*)(v39 - 8) + 64LL);
    if (v43 != 0 && (v44 = *(_QWORD*)(v43 + 96)) != 0 &&
        *(_DWORD*)(v44 + 240) == 5) {
      v45 = (_QWORD*)(v43 + 120);
      while (1) {
        v45 = (_QWORD*)*v45;
        if (v45 == nullptr) {
          break;
        }
        if (*(_DWORD*)(v45[5] + 240LL) != 5) {
          goto LABEL_97;
        }
      }
      wld_map_c20fe0((void*)((__int64*)&v80_.v80), v43, (__int64)"Com_02", 6),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    else {
    LABEL_97:
      v80_.v81 = 0;
      v80_.v82 = 0;
      v80_.v80 = nullptr;
    }
    if (game_GameModeData_instance_ == 0 ||
        *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
        (v46 = game_9a28e0(71), game_GameModeData_instance_ != 0) &&
            (v47 = game_GameVariableTable_Find(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)v46)) != 0 &&
            *(_DWORD*)(v47 + 32) != 0) {
      v48 = v83_.v83;
      v49 = (__int64*)v83_.v84;
      if (v83_.v83 != v83_.v84) {
        v50 = (__int64*)v83_.v83;
        do {
          v51 = *v50++;
          *(_BYTE*)(v51 + 289) = 1;
        } while (v50 != v49);
      }
      v52 = (__int64)v80_.v80;
      v53 = (__int64*)v80_.v81;
      if (v80_.v80 != (__int64*)v80_.v81) {
        v54 = v80_.v80;
        do {
          v55 = *v54++;
          *(_BYTE*)(v55 + 289) = 0;
        } while (v54 != v53);
      }
    }
    else {
      v48 = v83_.v83;
      v56 = (__int64*)v83_.v84;
      if (v83_.v83 != v83_.v84) {
        v57 = (__int64*)v83_.v83;
        do {
          v58 = *v57++;
          *(_BYTE*)(v58 + 289) = 0;
        } while (v57 != v56);
      }
      v52 = (__int64)v80_.v80;
      v59 = (__int64*)v80_.v81;
      if (v80_.v80 != (__int64*)v80_.v81) {
        v60 = v80_.v80;
        do {
          v61 = *v60++;
          *(_BYTE*)(v61 + 289) = 1;
        } while (v60 != v59);
      }
    }
    if (v52 != 0) {
      v62 = *v7;
      v80_.v81 = v52;
      v63 = 128;
      if (*(_QWORD*)(v62 + 200) == 0) {
        v63 = 56;
      }
      nn_mem_StandardAllocator_Free(v62 + v63, v52),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v48 = v83_.v83;
    }
    if (v48 != 0) {
      v64 = *v7;
      v83_.v84 = v48;
      v65 = 128;
      if (*(_QWORD*)(v64 + 200) == 0) {
        v65 = 56;
      }
      nn_mem_StandardAllocator_Free(v64 + v65, v48),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v66 = (__int64)v96_.v96;
  if (v96_.v96 != nullptr) {
    v67 = v96_.v97;
    if (v96_.v96 == (__int64*)v96_.v97) {
      goto LABEL_135;
    }
    v68 = v96_.v97;
    do {
      v69 = *(_BYTE*)(v68 - 24);
      v68 -= 24;
      if ((v69 & 1) != 0) {
        v70 = *(_QWORD*)(v67 - 8);
        if (v70 != 0) {
          if (*(_QWORD*)(*v7 + 200) != 0) {
            v71 = 128;
          }
          else {
            v71 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v71, v70),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
      }
      v67 = v68;
    } while (v68 != v66);
    v96_.v97 = v66;
    v66 = (__int64)v96_.v96;
    if (v96_.v96 != nullptr) {
    LABEL_135:
      v72 = 128;
      if (*(_QWORD*)(*v7 + 200) == 0) {
        v72 = 56;
      }
      nn_mem_StandardAllocator_Free(*v7 + v72, v66),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v73 = (__int64)v99_.v99;
  if (v99_.v99 != nullptr) {
    v74 = v99_.v100;
    if (v99_.v99 == (__int64*)v99_.v100) {
      goto LABEL_149;
    }
    v75 = v99_.v100;
    do {
      v76 = *(_BYTE*)(v75 - 24);
      v75 -= 24;
      if ((v76 & 1) != 0) {
        v77 = *(_QWORD*)(v74 - 8);
        if (v77 != 0) {
          if (*(_QWORD*)(*v7 + 200) != 0) {
            v78 = 128;
          }
          else {
            v78 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v78, v77),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
      }
      v74 = v75;
    } while (v75 != v73);
    v99_.v100 = v73;
    v73 = (__int64)v99_.v99;
    if (v99_.v99 != nullptr) {
    LABEL_149:
      v79 = 128;
      if (*(_QWORD*)(*v7 + 200) == 0) {
        v79 = 56;
      }
      nn_mem_StandardAllocator_Free(*v7 + v79, v73),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
}

bool game_evt_demo_114af80(__int64 a1, __int64 a2, __int16* a3, char a4)
{

#pragma clang fp contract(off)
  const char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  bool v12;
  __int64 v13;
  const char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  const char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  const char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  const char* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  const char* v37;
  _QWORD* v38;
  __int128 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  const char* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  bool v50;
  bool v51;
  __int64* v53;
  const char* v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  char* v57;
  __int64 v59;
  __int64 v60;
  const char* v61;
  _QWORD* v62;
  __int64 v63;
  _DWORD* v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned int v70;
  __int64 v71;
  char v72;
  bool v73;
  __int64 v74;
  const char* v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  char* v78;
  __int64 v79;
  char v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  char* v85;
  int v86;
  char v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  char* v92;
  _BOOL4 v93;
  __int64 v94;
  char v95;
  __int64 v96;
  __int64 v97;
  const char* v98;
  char v99;
  _BYTE* v100;
  _QWORD* v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  _QWORD* v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  __int16 v123;
  __int16 v124;
  __int16 v125;
  __int16 v126;
  __int16 v127;
  __int16 v128;
  __int64* v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  _BYTE* v149;
  char v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  _QWORD* v154;
  _DWORD* v155;
  unsigned __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  unsigned int v161;
  __int64 v162;
  __int64* v163;
  unsigned __int64 v164;
  unsigned __int64 v165;
  unsigned __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  const char* v171;
  const char* v172;
  const char* v173;
  const char* v174;
  __int16 v175;
  __int16 v176;
  __int16 v177;
  __int16 v178;
  __int16 v179;
  __int16 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  unsigned __int64 v185;
  __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  _QWORD* v193;
  unsigned __int64 v194;
  unsigned __int64 v195;
  const char* v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  unsigned __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  __int64 v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  __int64 v207;
  __int64 v208;
  unsigned __int64 v209;
  unsigned __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  _BYTE* v219;
  char v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64* v224;
  const char* v225;
  char v226;
  const char* v227;
  char v228;
  char v229;
  double v230;
  float v231;
  const char* v232;
  __int64 v233;
  _QWORD* v234;
  _DWORD* v235;
  unsigned __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  unsigned int v241;
  __int64 v242;
  unsigned __int64 v243;
  char* v244;
  unsigned __int64 v245;
  __int64* v246;
  unsigned __int64 v247;
  char* v248;
  unsigned __int64 v249;
  bool v250;
  unsigned __int64 v251;
  char* v252;
  unsigned __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v261;
  const char* v262;
  __int16 v263;
  char v264;
  __int64 v265;
  const char* v266;
  char v267;
  __int16 v268;
  const char* v269;
  const char* v270;
  const char* v271;
  bool v272;
  unsigned int v273;
  char v274;
  struct {
    __int64 v275;
    unsigned __int64 v276;
    char* v277;
  } v275_;
  struct {
    __int64 v278;
    unsigned __int64 v279;
    char* v280;
    __int16 v281;
    __int16 v282;
    __int16 v283;
    __int16 v284;
    __int16 v285;
    __int16 v286;
    char gap172_[4];
    __int64 v287;
    char v288;
    char gap185_[7];
    __int64 v289;
  } v278_;
  struct {
    __int64 v290;
    unsigned __int64 v291;
    char* v292;
  } v290_;
  struct {
    __int64 v293;
    unsigned __int64 v294;
    char* v295;
    __int16 v296;
    __int16 v297;
    __int16 v298;
    __int16 v299;
    __int16 v300;
    __int16 v301;
    char gap260_[4];
    __int64 v302;
    char v303;
  } v293_;
  struct {
    __int64 v304[2];
    char* v305;
  } v304_;
  struct {
    __int64 v306[2];
    char* v307;
  } v306_;
  struct {
    __int64 v308;
    unsigned __int64 v309;
    char* v310;
  } v308_;
  struct {
    __int64 v311;
    __int64 v312;
    char* v313;
  } v311_;
  struct {
    __int64 v314;
    __int64 v315;
    char* v316;
  } v314_;
  struct {
    __int64 v317;
    unsigned __int64 v318;
    const char* v319;
  } v317_;
  struct {
    __int64 v320;
    unsigned __int64 v321;
    const char* v322;
  } v320_;
  struct {
    __int64 v323;
    unsigned __int64 v324;
    const char* v325;
  } v323_;
  struct {
    __int64 v326;
    unsigned __int64 v327;
    char* v328;
  } v326_;
  struct {
    __int64 v329;
    unsigned __int64 v330;
    char* v331;
    __int64 v332;
    char gap528_[184];
    const char* v333;
  } v329_;

  if (a2 == 0) {
    return false;
  }
  v329_.v333 = *(const char**)(a2 + 8);
  if (*(_QWORD*)(a2 + 32) != 0) {
    v8 = *(const char**)(a2 + 32);
  }
  else {
    v8 = &GameData_1a9f09e;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_515;
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0);
    v323_.v324 = v10;
    v323_.v325 = v11;
    v323_.v323 = v13 | 1;
    goto LABEL_14;
  }
  LOBYTE(v323_.v323) = 2 * v9;
  v11 = (char*)&v323_.v323 + 1;
  if (v9 != 0) {
  LABEL_14:
    memmove((__int64)v11, (__int64)v8, v10);
  }
  v11[v10] = 0;
  if (*(_QWORD*)(a2 + 40) != 0) {
    v14 = *(const char**)(a2 + 40);
  }
  else {
    v14 = &GameData_1a9f09e;
  }
  v15 = strlen(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_515;
  }
  v16 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0);
    v320_.v321 = v16;
    v320_.v322 = v17;
    v320_.v320 = v18 | 1;
    goto LABEL_26;
  }
  LOBYTE(v320_.v320) = 2 * v15;
  v17 = (char*)&v320_.v320 + 1;
  if (v15 != 0) {
  LABEL_26:
    memmove((__int64)v17, (__int64)v14, v16);
  }
  v17[v16] = 0;
  if (*(_QWORD*)(a2 + 48) != 0) {
    v19 = *(const char**)(a2 + 48);
  }
  else {
    v19 = &GameData_1a9f09e;
  }
  v20 = strlen(v19);
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_515;
  }
  v21 = v20;
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v20 | 7) + 1;
    }
    v22 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v23, 16, 0);
    v317_.v318 = v21;
    v317_.v319 = v22;
    v317_.v317 = v23 | 1;
    goto LABEL_38;
  }
  LOBYTE(v317_.v317) = 2 * v20;
  v22 = (char*)&v317_.v317 + 1;
  if (v20 != 0) {
  LABEL_38:
    memmove((__int64)v22, (__int64)v19, v21);
  }
  v22[v21] = 0;
  v24 = *(_DWORD*)(a2 + 76);
  v25 = *(_DWORD*)(a2 + 64);
  v26 = *(_DWORD*)(a2 + 68);
  if (*(_QWORD*)(a2 + 80) != 0) {
    v27 = *(const char**)(a2 + 80);
  }
  else {
    v27 = &GameData_1a9f09e;
  }
  v273 = *(_DWORD*)(a2 + 72);
  v28 = strlen(v27);
  if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_515;
  }
  v29 = v28;
  if (v28 >= 0x17) {
    if ((v28 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (v28 | 7) + 1;
    }
    v30 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v31, 16, 0);
    v314_.v315 = v29;
    v314_.v316 = v30;
    v314_.v314 = v31 | 1;
    goto LABEL_50;
  }
  LOBYTE(v314_.v314) = 2 * v28;
  v30 = (char*)&v314_.v314 + 1;
  if (v28 != 0) {
  LABEL_50:
    memmove((__int64)v30, (__int64)v27, v29);
  }
  v30[v29] = 0;
  if (*(_QWORD*)(a2 + 88) != 0) {
    v32 = *(const char**)(a2 + 88);
  }
  else {
    v32 = &GameData_1a9f09e;
  }
  v33 = strlen(v32);
  if (v33 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_515;
  }
  v34 = v33;
  if (v33 >= 0x17) {
    if ((v33 | 7) == 0x17) {
      v36 = 26;
    }
    else {
      v36 = (v33 | 7) + 1;
    }
    v35 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v36, 16, 0);
    v311_.v312 = v34;
    v311_.v313 = v35;
    v311_.v311 = v36 | 1;
    goto LABEL_62;
  }
  LOBYTE(v311_.v311) = 2 * v33;
  v35 = (char*)&v311_.v311 + 1;
  if (v33 != 0) {
  LABEL_62:
    memmove((__int64)v35, (__int64)v32, v34);
  }
  v35[v34] = 0;
  if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
    v37 = *(const char**)(a1 + 296);
  }
  else {
    v37 = (const char*)(a1 + 281);
  }
  if (strcmp(v37, *(const char**)(a2 + 8)) != 0) {
    *(_DWORD*)(a1 + 432) = v25;
    *(_DWORD*)(a1 + 436) = v26;
    v38 = *(_QWORD**)(a1 + 576);
    *(_DWORD*)(a1 + 448) = v24;
    v39 = *(_OWORD*)(a1 + 432);
    *((_QWORD*)&v39 + 1) = v273;
    *(_OWORD*)(a1 + 432) = v39;
    if (v38 != nullptr) {
      v40 = fw_memory_g_heap_manager_ptr;
      do {
        if ((v38[2] & 1) != 0) {
          fw_text_String_CopyTerminated(&v329_.v329, v38[4], v38[3]);
        }
        else {
          v41 = v38[3];
          v42 = v38[4];
          v329_.v329 = v38[2];
          v329_.v330 = v41;
          v329_.v331 = (char*)v42;
        }
        v43 = v38[5];
        v329_.v332 = v43;
        *(_BYTE*)(v43 + 192) = 1;
        *(_BYTE*)(v43 + 228) = 1;
        if ((v329_.v329 & 1) != 0 && v329_.v331 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) != 0) {
            v44 = 128;
          }
          else {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v40 + v44,
                                        (__int64)v329_.v331);
        }
        v38 = (_QWORD*)*v38;
      } while (v38 != nullptr);
    }
    if (*(_QWORD*)(a2 + 32) != 0) {
      v45 = *(const char**)(a2 + 32);
    }
    else {
      v45 = &GameData_1a9f09e;
    }
    v46 = strlen(v45);
    if (v46 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_515;
    }
    v47 = v46;
    if (v46 >= 0x17) {
      if ((v46 | 7) == 0x17) {
        v49 = 26;
      }
      else {
        v49 = (v46 | 7) + 1;
      }
      v48 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v49, 16, 0);
      v308_.v309 = v47;
      v308_.v310 = v48;
      v308_.v308 = v49 | 1;
    }
    else {
      LOBYTE(v308_.v308) = 2 * v46;
      v48 = (char*)&v308_.v308 + 1;
      if (v46 == 0) {
      LABEL_92:
        v48[v47] = 0;
        if ((v308_.v308 & 1) != 0 && v308_.v309 == 26) {
          v50 = *(_QWORD*)v308_.v310 == 0x2F6275482F70614DLL &&
                *((_QWORD*)v308_.v310 + 1) == 0x2F3030315F627548LL;
          v51 = v50 && *((_QWORD*)v308_.v310 + 2) == 0x5F3030315F627548LL;
          if (v51 && *((_WORD*)v308_.v310 + 12) == 12609) {
            if ((GameVariable_82e3a0(1) & 1) != 0) {
              v53 = &v314_.v314;
            }
            else {
              v53 = &v311_.v311;
            }
            GameRoutine_1a09ce0((__int64)v53, "\n", 1u);
            GameRoutine_1a09ce0((__int64)v53, "Bg_Obelisk_A009_005", 0x13u);
          }
        }
        v272 = Seq_114ab50(a1, (_QWORD*)a2);
        v274 = v308_.v308;
        if (v272) {
          Seq_114cda0(a1, a2, a3, a4 & 1);
          GameHr_f41c80();
          if ((v314_.v314 & 1) != 0) {
            fw_text_String_CopyTerminated(v306_.v306, (__int64)v314_.v316,
                                          v314_.v315);
            if ((v311_.v311 & 1) != 0) {
              goto LABEL_112;
            }
          }
          else {
            v306_.v306[0] = v314_.v314;
            v306_.v306[1] = v314_.v315;
            v306_.v307 = v314_.v316;
            if ((v311_.v311 & 1) != 0) {
            LABEL_112:
              fw_text_String_CopyTerminated(v304_.v304, (__int64)v311_.v313,
                                            v311_.v312);
              goto LABEL_122;
            }
          }
          v304_.v304[0] = v311_.v311;
          v304_.v304[1] = v311_.v312;
          v304_.v305 = v311_.v313;
        LABEL_122:
          game_evt_demo_114a040(a1, (char*)v306_.v306, (__int64)v304_.v304);
          if ((v304_.v304[0] & 1) != 0 && v304_.v305 != nullptr) {
            v59 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v59 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v59,
                (__int64)v304_.v305);
          }
          if ((v306_.v306[0] & 1) != 0 && v306_.v307 != nullptr) {
            v60 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v60 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v60,
                (__int64)v306_.v307);
          }
          Seq_114d0d0(a1, 0);
          if (*(_QWORD*)(a2 + 96) != 0) {
            v61 = *(const char**)(a2 + 96);
          }
          else {
            v61 = &GameData_1a9f09e;
          }
          GameRoutine_60a020(a1 + 376, v61);
          Seq_114a9c0(a1);
          v62 = *(_QWORD**)(a1 + 576);
          *(_DWORD*)(a1 + 416) = *(unsigned __int8*)(a2 + 104);
          if (v62 != nullptr) {
            v63 = fw_memory_g_heap_manager_ptr;
            v64 = (_DWORD*)GameData_212d168;
            do {
              if ((v62[2] & 1) != 0) {
                fw_text_String_CopyTerminated(&v329_.v329, v62[4], v62[3]);
              }
              else {
                v65 = v62[3];
                v66 = v62[4];
                v329_.v329 = v62[2];
                v329_.v330 = v65;
                v329_.v331 = (char*)v66;
              }
              v67 = *(_QWORD*)(v62[5] + 160LL);
              v329_.v332 = v62[5];
              if (v67 == 0 || *(_DWORD*)(v67 + 384) != 0) {
                goto LABEL_154;
              }
              if (*v64 != 2) {
                goto LABEL_153;
              }
              v68 = *(_QWORD*)(v67 + 392);
              v69 = *(_QWORD*)(v67 + 400);
              if (v69 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 8),
                                          1u, memory_order_relaxed);
                v70 = *(_DWORD*)(v68 + 11784);
                if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
                  std___1___shared_weak_count___release_weak(v69);
                }
              }
              else {
                v70 = *(_DWORD*)(v68 + 11784);
              }
              if (v70 > 0x1A) {
                goto LABEL_153;
              }
              if (((1 << v70) & 0x410C) != 0) {
                *(_DWORD*)(*(_QWORD*)(v67 + 104) + 212LL) = 0;
                goto LABEL_154;
              }
              if (((1 << v70) & 0x5000080) != 0) {
                *(_DWORD*)(*(_QWORD*)(v67 + 104) + 212LL) = 0;
              }
              else {
              LABEL_153:
                *(_DWORD*)(v67 + 384) = 1;
              }
            LABEL_154:
              if ((v329_.v329 & 1) != 0 && v329_.v331 != nullptr) {
                if (*(_QWORD*)(*(_QWORD*)v63 + 200LL) != 0) {
                  v71 = 128;
                }
                else {
                  v71 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v63 + v71,
                                              (__int64)v329_.v331);
              }
              v62 = (_QWORD*)*v62;
            } while (v62 != nullptr);
          }
          GameRoutine_60a020(a1 + 280, v329_.v333);
          v73 = v272;
          v72 = v274;
          goto LABEL_484;
        }
        if (*(_QWORD*)(a2 + 32) != 0) {
          v54 = *(const char**)(a2 + 32);
        }
        else {
          v54 = &GameData_1a9f09e;
        }
        v55 = strlen(v54);
        if (v55 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_515;
        }
        v56 = v55;
        if (v55 >= 0x17) {
          if ((v55 | 7) == 0x17) {
            v74 = 26;
          }
          else {
            v74 = (v55 | 7) + 1;
          }
          v57 = (char*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v74, 16, 0);
          v329_.v330 = v56;
          v329_.v331 = v57;
          v329_.v329 = v74 | 1;
        }
        else {
          LOBYTE(v329_.v329) = 2 * v55;
          v57 = (char*)&v329_.v329 + 1;
          if (v55 == 0) {
          LABEL_166:
            v57[v56] = 0;
            if (*(_QWORD*)(a2 + 40) != 0) {
              v75 = *(const char**)(a2 + 40);
            }
            else {
              v75 = &GameData_1a9f09e;
            }
            v76 = strlen(v75);
            if (v76 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_515;
            }
            v77 = v76;
            if (v76 >= 0x17) {
              if ((v76 | 7) == 0x17) {
                v79 = 26;
              }
              else {
                v79 = (v76 | 7) + 1;
              }
              v78 = (char*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v79, 16, 0);
              v326_.v327 = v77;
              v326_.v328 = v78;
              v326_.v326 = v79 | 1;
            }
            else {
              LOBYTE(v326_.v326) = 2 * v76;
              v78 = (char*)&v326_.v326 + 1;
              if (v76 == 0) {
              LABEL_178:
                v78[v77] = 0;
                v80 = v329_.v329;
                v81 = *(unsigned __int8*)(a1 + 304);
                if ((v81 & 1) != 0) {
                  v82 = *(_QWORD*)(a1 + 312);
                }
                else {
                  v82 = v81 >> 1;
                }
                v83 = v329_.v330;
                if ((v329_.v329 & 1) == 0) {
                  v83 = (unsigned __int64)(unsigned __int8)v329_.v329 >> 1;
                }
                if (v82 == v83) {
                  if ((v81 & 1) != 0) {
                    v84 = *(_QWORD*)(a1 + 320);
                  }
                  else {
                    v84 = a1 + 305;
                  }
                  if ((v329_.v329 & 1) != 0) {
                    v85 = v329_.v331;
                  }
                  else {
                    v85 = (char*)&v329_.v329 + 1;
                  }
                  v86 = memcmp(v84, (__int64)v85, v82);
                  v87 = v326_.v326;
                  if (v86 == 0) {
                    v88 = *(unsigned __int8*)(a1 + 328);
                    if ((v88 & 1) != 0) {
                      v89 = *(_QWORD*)(a1 + 336);
                    }
                    else {
                      v89 = v88 >> 1;
                    }
                    v90 = v326_.v327;
                    if ((v326_.v326 & 1) == 0) {
                      v90 = (unsigned __int64)(unsigned __int8)v326_.v326 >> 1;
                    }
                    if (v89 == v90) {
                      if ((v88 & 1) != 0) {
                        v91 = *(_QWORD*)(a1 + 344);
                      }
                      else {
                        v91 = a1 + 329;
                      }
                      if ((v326_.v326 & 1) != 0) {
                        v92 = v326_.v328;
                      }
                      else {
                        v92 = (char*)&v326_.v326 + 1;
                      }
                      v93 = memcmp(v91, (__int64)v92, v89) == 0;
                    LABEL_206:
                      if ((v87 & 1) != 0 && v326_.v328 != nullptr) {
                        v94 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v94 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v94,
                            (__int64)v326_.v328);
                      }
                      v95 = a4 & 1;
                      if ((v80 & 1) != 0 && v329_.v331 != nullptr) {
                        v96 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v96 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v96,
                            (__int64)v329_.v331);
                      }
                      if (v93) {
                        v278_.v289 = a1;
                        v97 = *GameData_212d460[0];
                        if (*GameData_212d460[0] == 0) {
                          v97 = a1;
                        }
                        v265 = v97;
                        if ((v317_.v317 & 1) != 0) {
                          v98 = v317_.v319;
                        }
                        else {
                          v98 = (char*)&v317_.v317 + 1;
                        }
                        if ((v314_.v314 & 1) != 0) {
                          fw_text_String_CopyTerminated(
                              &v290_.v290, (__int64)v314_.v316, v314_.v315);
                        }
                        else {
                          v290_.v290 = v314_.v314;
                          v290_.v291 = v314_.v315;
                          v290_.v292 = v314_.v316;
                        }
                        v270 = v98;
                        if ((v311_.v311 & 1) != 0) {
                          fw_text_String_CopyTerminated(
                              &v293_.v293, (__int64)v311_.v313, v311_.v312);
                        }
                        else {
                          v293_.v293 = v311_.v311;
                          v293_.v294 = v311_.v312;
                          v293_.v295 = v311_.v313;
                        }
                        v123 = *a3;
                        v124 = a3[1];
                        v125 = a3[2];
                        v126 = a3[3];
                        v127 = a3[4];
                        v128 = a3[5];
                        v293_.v302 = a2;
                        v293_.v303 = v95;
                        v268 = v123;
                        v293_.v296 = v123;
                        v293_.v297 = v124;
                        v293_.v298 = v125;
                        v293_.v299 = v126;
                        v293_.v300 = v127;
                        v293_.v301 = v128;
                        v129 = (__int64*)fw_memory_g_heap_manager_ptr;
                        v130 = fw_memory_HeapManager_Allocate(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
                        v131 = v278_.v289;
                        v132 = v293_.v302;
                        *(_WORD*)(v130 + 66) = v124;
                        v133 = v130;
                        *(_WORD*)(v130 + 68) = v125;
                        *(_WORD*)(v130 + 70) = v126;
                        *(_WORD*)(v130 + 72) = v127;
                        *(_WORD*)(v130 + 74) = v128;
                        *(_QWORD*)v130 =
                            game_evt_demo_Seq_ChangeMap_lambda0_Destructor_ptr;
                        *(_QWORD*)(v130 + 8) = v131;
                        *(_QWORD*)(v130 + 80) = v132;
                        v134 = v290_.v290;
                        v135 = v290_.v291;
                        v290_.v290 = 0;
                        v290_.v291 = 0;
                        *(_QWORD*)(v130 + 16) = v134;
                        *(_QWORD*)(v130 + 24) = v135;
                        v136 = (__int64)v290_.v292;
                        v137 = v293_.v293;
                        v138 = v293_.v294;
                        v290_.v292 = nullptr;
                        v293_.v293 = 0;
                        *(_QWORD*)(v130 + 32) = v136;
                        *(_QWORD*)(v130 + 40) = v137;
                        v139 = (__int64)v293_.v295;
                        v293_.v294 = 0;
                        v293_.v295 = nullptr;
                        *(_QWORD*)(v130 + 48) = v138;
                        *(_QWORD*)(v130 + 56) = v139;
                        *(_WORD*)(v130 + 64) = v268;
                        *(_BYTE*)(v130 + 88) = v293_.v303;
                        if ((atomic_load_explicit(
                                 (atomic_uchar* volatile)&GameData_2236970,
                                 memory_order_acquire) &
                             1) == 0 &&
                            __cxa_guard_acquire((__int64)&GameData_2236970) !=
                                0) {
                          GameData_2236870 = 14;
                          GameData_2236888 = 0;
                          GameData_2236890 = 0;
                          GameData_2236898 = 0;
                          GameData_22368a0 = 0;
                          GameData_22368a8 = 0;
                          GameData_22368b8 = 0;
                          GameData_22368c0 = (__int64)GameRoutine_1151d00;
                          GameData_22368c8 = 0;
                          GameData_22368d0 = 0;
                          GameData_22368d8 = 0;
                          GameData_22368e0 = 0;
                          GameData_22368e8 = 0;
                          GameData_2236908 = 0;
                          GameData_2236910 = 0;
                          GameData_2236918 = 0;
                          GameData_2236878 = 0;
                          GameData_2236880 = (__int64)GameRoutine_1151c60;
                          GameData_2236920 = 0;
                          GameData_2236928 = 0;
                          GameData_2236930 = 0;
                          GameData_2236958 = 0;
                          GameData_2236960 = 0;
                          GameData_2236968 = 0;
                          GameData_2236950 = 0;
                          GameData_2236940 = 0;
                          GameData_2236948 = 0;
                          GameData_2236938 = 0;
                          GameData_22368b0 = 13;
                          GameData_22368f0 = 13;
                          GameData_22368f8 = 0;
                          GameData_2236900 = (__int64)GameRoutine_1151d50;
                          __cxa_guard_release((__int64)&GameData_2236970);
                        }
                        v140 =
                            fw_memory_HeapManager_Allocate(*v129, 224, 16, 0);
                        v141 = (*(__int64 (**)(__int64))(*(_QWORD*)v133 +
                                                         16LL))(v133);
                        v142 = GameData_212c608[0];
                        *(_QWORD*)(v140 + 88) = 0;
                        *(_QWORD*)(v140 + 96) = 0;
                        *(_QWORD*)(v140 + 104) = 0;
                        *(_QWORD*)(v140 + 112) = 0;
                        *(_QWORD*)(v140 + 120) = 0;
                        *(_QWORD*)(v140 + 128) = 0;
                        *(_WORD*)(v140 + 136) = 0;
                        *(_QWORD*)(v140 + 32) = 0;
                        *(_QWORD*)(v140 + 16) = 0;
                        *(_QWORD*)(v140 + 24) = "NULL";
                        *(_QWORD*)(v140 + 138) = 0;
                        *(_QWORD*)(v140 + 144) = 0;
                        *(_QWORD*)(v140 + 40) = 0;
                        *(_QWORD*)(v140 + 48) = 0;
                        *(_QWORD*)(v140 + 56) = 0;
                        *(_QWORD*)(v140 + 64) = 0;
                        *(_QWORD*)(v140 + 72) = 0;
                        *(_QWORD*)(v140 + 80) = 0;
                        *(_QWORD*)v140 = v142 + 16;
                        *(_QWORD*)(v140 + 8) = 0;
                        game_ProcInst_Register(v140);
                        *(_QWORD*)v140 =
                            game_evt_demo_SwitchMapSituationProc_vtable;
                        v143 = strlen(v270);
                        if (v143 < 0xFFFFFFFFFFFFFFF7LL) {
                          v144 = v143;
                          if (v143 >= 0x17) {
                            if ((v143 | 7) == 0x17) {
                              v146 = 26;
                            }
                            else {
                              v146 = (v143 | 7) + 1;
                            }
                            v145 = fw_memory_HeapManager_Allocate(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr, v146,
                                16, 0);
                            *(_QWORD*)(v140 + 160) = v144;
                            *(_QWORD*)(v140 + 168) = v145;
                            *(_QWORD*)(v140 + 152) = v146 | 1;
                          }
                          else {
                            v145 = v140 + 153;
                            *(_BYTE*)(v140 + 152) = 2 * v143;
                            if (v143 == 0) {
                              goto LABEL_285;
                            }
                          }
                          memcpy(v145, (__int64)v270, v144);
                        LABEL_285:
                          *(_BYTE*)(v145 + v144) = 0;
                          if (v141 != 0) {
                            v147 = (*(__int64 (**)(__int64))(*(_QWORD*)v141 +
                                                             16LL))(v141);
                          }
                          else {
                            v147 = 0;
                          }
                          *(_QWORD*)(v140 + 208) = v147;
                          v148 = *(_QWORD*)(v265 + 40);
                          if (v148 != 0) {
                            *(_QWORD*)(v148 + 48) = v140;
                            *(_QWORD*)(v140 + 56) = *(_QWORD*)(v265 + 40);
                          }
                          *(_QWORD*)(v265 + 40) = v140;
                          *(_QWORD*)(v140 + 24) = "SwitchMapSituationProc";
                          *(_QWORD*)(v140 + 32) = v265;
                          *(_DWORD*)(v140 + 140) =
                              (unsigned int)game_HashString32(
                                  "SwitchMapSituationProc");
                          *(_QWORD*)(v140 + 64) = 0;
                          *(_QWORD*)(v140 + 72) = 24;
                          *(_QWORD*)(v140 + 80) = 1;
                          *(_QWORD*)(v140 + 8) = &GameData_2236870;
                          *(_QWORD*)(v140 + 16) = &GameData_2236870;
                          (*(void (**)(__int64))(*(_QWORD*)v140 + 32LL))(v140);
                          if (((*(__int64 (**)(__int64))(*(_QWORD*)v140 +
                                                         136LL))(v140) &
                               1) != 0 &&
                              (*(_WORD*)(v140 + 136) & 0x100) == 0) {
                            *(_WORD*)(v140 + 136) |= 0x100u;
                          }
                          v149 = *(_BYTE**)(v140 + 32);
                          v150 = v149[138];
                          if (v150 == 0) {
                            (*(void (**)(_QWORD))(*(_QWORD*)v149 + 64LL))(
                                *(_QWORD*)(v140 + 32));
                            v150 = v149[138];
                          }
                          v149[138] = v150 + 1;
                          *(_WORD*)(v140 + 136) |= 2u;
                          if (v141 != 0) {
                            (*(void (**)(__int64))(*(_QWORD*)v141 + 40LL))(
                                v141);
                          }
                          (*(void (**)(__int64))(*(_QWORD*)v133 + 40LL))(v133);
                          v151 = fw_memory_g_heap_manager_ptr;
                          if ((v293_.v293 & 1) != 0 && v293_.v295 != nullptr) {
                            v152 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v152 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v152,
                                (__int64)v293_.v295);
                          }
                          if ((v290_.v290 & 1) != 0 && v290_.v292 != nullptr) {
                            v153 = 128;
                            if (*(_QWORD*)(*(_QWORD*)v151 + 200LL) == 0) {
                              v153 = 56;
                            }
                            nn_mem_StandardAllocator_Free(*(_QWORD*)v151 + v153,
                                                          (__int64)v290_.v292);
                          }
                          v154 = *(_QWORD**)(a1 + 576);
                          if (v154 != nullptr) {
                            v155 = (_DWORD*)GameData_212d168;
                            do {
                              if ((v154[2] & 1) != 0) {
                                fw_text_String_CopyTerminated(&v329_.v329,
                                                              v154[4], v154[3]);
                              }
                              else {
                                v156 = v154[3];
                                v157 = v154[4];
                                v329_.v329 = v154[2];
                                v329_.v330 = v156;
                                v329_.v331 = (char*)v157;
                              }
                              v158 = *(_QWORD*)(v154[5] + 160LL);
                              v329_.v332 = v154[5];
                              if (v158 == 0 || *(_DWORD*)(v158 + 384) != 0) {
                                goto LABEL_326;
                              }
                              if (*v155 != 2) {
                                goto LABEL_325;
                              }
                              v159 = *(_QWORD*)(v158 + 392);
                              v160 = *(_QWORD*)(v158 + 400);
                              if (v160 != 0) {
                                atomic_fetch_add_explicit(
                                    (atomic_ullong* volatile)(v160 + 8), 1u,
                                    memory_order_relaxed);
                                v161 = *(_DWORD*)(v159 + 11784);
                                if (atomic_fetch_add(
                                        (atomic_ullong* volatile)(v160 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
                                  (*(void (**)(__int64))(*(_QWORD*)v160 +
                                                         16LL))(v160);
                                  std___1___shared_weak_count___release_weak(
                                      v160);
                                }
                              }
                              else {
                                v161 = *(_DWORD*)(v159 + 11784);
                              }
                              v151 = fw_memory_g_heap_manager_ptr;
                              if (v161 > 0x1A) {
                                goto LABEL_325;
                              }
                              if (((1 << v161) & 0x410C) != 0) {
                                *(_DWORD*)(*(_QWORD*)(v158 + 104) + 212LL) = 0;
                                goto LABEL_326;
                              }
                              if (((1 << v161) & 0x5000080) != 0) {
                                *(_DWORD*)(*(_QWORD*)(v158 + 104) + 212LL) = 0;
                              }
                              else {
                              LABEL_325:
                                *(_DWORD*)(v158 + 384) = 1;
                              }
                            LABEL_326:
                              if ((v329_.v329 & 1) != 0 &&
                                  v329_.v331 != nullptr) {
                                if (*(_QWORD*)(*(_QWORD*)v151 + 200LL) != 0) {
                                  v162 = 128;
                                }
                                else {
                                  v162 = 56;
                                }
                                nn_mem_StandardAllocator_Free(
                                    *(_QWORD*)v151 + v162, (__int64)v329_.v331);
                              }
                              v154 = (_QWORD*)*v154;
                            } while (v154 != nullptr);
                          }
                          GameRoutine_60a020(a1 + 280, v329_.v333);
                          v73 = v272;
                          v72 = v274;
                          v163 = (__int64*)(a1 + 352);
                          if ((__int64*)(a1 + 352) == &v317_.v317) {
                          LABEL_484:
                            v12 = !v73;
                            if ((v72 & 1) != 0 && v308_.v310 != nullptr) {
                              v254 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v254 = 56;
                              }
                              nn_mem_StandardAllocator_Free(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v254,
                                  (__int64)v308_.v310);
                            }
                            goto LABEL_489;
                          }
                          v164 = (unsigned __int8)v317_.v317;
                          if ((*(_BYTE*)v163 & 1) == 0) {
                            if ((v317_.v317 & 1) == 0) {
                            LABEL_335:
                              v165 = v317_.v318;
                              *v163 = v317_.v317;
                              v163[1] = v165;
                              v163[2] = (__int64)v317_.v319;
                              goto LABEL_484;
                            }
                          LABEL_476:
                            GameRoutine_64df20(v163, (__int64)v317_.v319,
                                               v317_.v318);
                            goto LABEL_484;
                          }
                        LABEL_477:
                          v250 = (v164 & 1) == 0;
                          v251 = v164 >> 1;
                          if (v250) {
                            v252 = (char*)&v317_.v317 + 1;
                          }
                          else {
                            v252 = (char*)v317_.v319;
                          }
                          if (v250) {
                            v253 = v251;
                          }
                          else {
                            v253 = v317_.v318;
                          }
                          SpineModel_64dde0(v163, (__int64)v252, v253);
                          goto LABEL_484;
                        }
                      LABEL_515:
                        String_60a1d0();
                      }
                      Seq_a85600(*(_QWORD*)GameData_212c638);
                      v99 = *(_BYTE*)(a1 + 376);
                      *(_DWORD*)(a1 + 272) = 0;
                      v267 = v95;
                      if ((v99 & 1) != 0) {
                        v100 = *(_BYTE**)(a1 + 392);
                        *(_QWORD*)(a1 + 384) = 0;
                      }
                      else {
                        v100 = (_BYTE*)(a1 + 377);
                        *(_BYTE*)(a1 + 376) = 0;
                      }
                      *v100 = 0;
                      v101 = *(_QWORD**)(a1 + 624);
                      *(_BYTE*)(a1 + 552) = 1;
                      if (v101 != nullptr) {
                        v102 = fw_memory_g_heap_manager_ptr;
                        do {
                          if ((v101[2] & 1) != 0) {
                            fw_text_String_CopyTerminated(&v329_.v329, v101[4],
                                                          v101[3]);
                          }
                          else {
                            v103 = v101[3];
                            v104 = v101[4];
                            v329_.v329 = v101[2];
                            v329_.v330 = v103;
                            v329_.v331 = (char*)v104;
                          }
                          v105 = v101[5];
                          v329_.v332 = v105;
                          if (v105 != 0) {
                            v106 = *(_QWORD*)(v105 + 32);
                            if (v106 != 0) {
                              v107 = *(_QWORD*)v102;
                              *(_QWORD*)(v105 + 40) = v106;
                              if (*(_QWORD*)(v107 + 200) != 0) {
                                v108 = 128;
                              }
                              else {
                                v108 = 56;
                              }
                              nn_mem_StandardAllocator_Free(v107 + v108, v106);
                            }
                            if ((*(_BYTE*)v105 & 1) != 0) {
                              v109 = *(_QWORD*)(v105 + 16);
                              if (v109 != 0) {
                                if (*(_QWORD*)(*(_QWORD*)v102 + 200LL) != 0) {
                                  v110 = 128;
                                }
                                else {
                                  v110 = 56;
                                }
                                nn_mem_StandardAllocator_Free(
                                    *(_QWORD*)v102 + v110, v109);
                              }
                            }
                            if (*(_QWORD*)(*(_QWORD*)v102 + 200LL) != 0) {
                              v111 = 128;
                            }
                            else {
                              v111 = 56;
                            }
                            nn_mem_StandardAllocator_Free(*(_QWORD*)v102 + v111,
                                                          v105);
                          }
                          if ((v329_.v329 & 1) != 0 && v329_.v331 != nullptr) {
                            if (*(_QWORD*)(*(_QWORD*)v102 + 200LL) != 0) {
                              v112 = 128;
                            }
                            else {
                              v112 = 56;
                            }
                            nn_mem_StandardAllocator_Free(*(_QWORD*)v102 + v112,
                                                          (__int64)v329_.v331);
                          }
                          v101 = (_QWORD*)*v101;
                        } while (v101 != nullptr);
                      }
                      if (*(_QWORD*)(a1 + 632) != 0) {
                        v113 = *(_QWORD**)(a1 + 624);
                        if (v113 != nullptr) {
                          v114 = fw_memory_g_heap_manager_ptr;
                          do {
                            v116 = (__int64)v113;
                            v113 = (_QWORD*)*v113;
                            if ((*(_BYTE*)(v116 + 16) & 1) != 0 &&
                                *(_QWORD*)(v116 + 32) != 0) {
                              v117 = v116;
                              v118 = *(_QWORD*)(v116 + 32);
                              if (*(_QWORD*)(*(_QWORD*)v114 + 200LL) != 0) {
                                v119 = 128;
                              }
                              else {
                                v119 = 56;
                              }
                              nn_mem_StandardAllocator_Free(
                                  *(_QWORD*)v114 + v119, v118);
                              v116 = v117;
                            }
                            if (*(_QWORD*)(*(_QWORD*)v114 + 200LL) != 0) {
                              v115 = 128;
                            }
                            else {
                              v115 = 56;
                            }
                            nn_mem_StandardAllocator_Free(*(_QWORD*)v114 + v115,
                                                          v116);
                          } while (v113 != nullptr);
                        }
                        v120 = *(_QWORD*)(a1 + 616);
                        *(_QWORD*)(a1 + 624) = 0;
                        if (v120 != 0) {
                          v121 = v120 & 7;
                          if (v120 >= 8) {
                            v166 = v120 & 0xFFFFFFFFFFFFFFF8LL;
                            v122 = 0;
                            do {
                              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v122) = 0;
                              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v122 + 8) =
                                  0;
                              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v122 + 16) =
                                  0;
                              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v122 + 24) =
                                  0;
                              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v122 + 32) =
                                  0;
                              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v122 + 40) =
                                  0;
                              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v122 + 48) =
                                  0;
                              v167 = *(_QWORD*)(a1 + 608) + 8 * v122;
                              v122 += 8;
                              *(_QWORD*)(v167 + 56) = 0;
                            } while (v166 != v122);
                          }
                          else {
                            v122 = 0;
                          }
                          if (v121 != 0) {
                            v168 = 8 * v122;
                            do {
                              --v121;
                              *(_QWORD*)(*(_QWORD*)(a1 + 608) + v168) = 0;
                              v168 += 8;
                            } while (v121 != 0);
                          }
                        }
                        *(_QWORD*)(a1 + 632) = 0;
                      }
                      v169 = snd_a2e7c0(*game_sound_g_game_sound_ptr[0]);
                      v170 = *GameData_212d460[0];
                      if (*GameData_212d460[0] == 0) {
                        v170 = a1;
                      }
                      v261 = v170;
                      if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
                        v171 = *(const char**)(a1 + 176);
                      }
                      else {
                        v171 = (const char*)(a1 + 161);
                      }
                      v266 = v171;
                      if ((v323_.v323 & 1) != 0) {
                        v172 = v323_.v325;
                      }
                      else {
                        v172 = (char*)&v323_.v323 + 1;
                      }
                      if ((v320_.v320 & 1) != 0) {
                        v173 = v320_.v322;
                      }
                      else {
                        v173 = (char*)&v320_.v320 + 1;
                      }
                      v269 = v173;
                      v271 = v172;
                      if ((v317_.v317 & 1) != 0) {
                        v174 = v317_.v319;
                      }
                      else {
                        v174 = (char*)&v317_.v317 + 1;
                      }
                      v262 = v174;
                      v264 = Seq_114d340(v169, a2);
                      if ((v314_.v314 & 1) != 0) {
                        fw_text_String_CopyTerminated(
                            &v275_.v275, (__int64)v314_.v316, v314_.v315);
                      }
                      else {
                        v275_.v275 = v314_.v314;
                        v275_.v276 = v314_.v315;
                        v275_.v277 = v314_.v316;
                      }
                      if ((v311_.v311 & 1) != 0) {
                        fw_text_String_CopyTerminated(
                            &v278_.v278, (__int64)v311_.v313, v311_.v312);
                      }
                      else {
                        v278_.v278 = v311_.v311;
                        v278_.v279 = v311_.v312;
                        v278_.v280 = v311_.v313;
                      }
                      v175 = *a3;
                      v176 = a3[1];
                      v177 = a3[2];
                      v178 = a3[3];
                      v179 = a3[4];
                      v180 = a3[5];
                      v278_.v287 = a2;
                      v263 = v175;
                      v278_.v281 = v175;
                      v278_.v282 = v176;
                      v278_.v283 = v177;
                      v278_.v284 = v178;
                      v278_.v285 = v179;
                      v278_.v286 = v180;
                      v278_.v288 = v267;
                      v181 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
                      v182 = v278_.v287;
                      *(_WORD*)(v181 + 66) = v176;
                      v183 = v181;
                      *(_WORD*)(v181 + 68) = v177;
                      *(_WORD*)(v181 + 70) = v178;
                      *(_WORD*)(v181 + 72) = v179;
                      *(_WORD*)(v181 + 74) = v180;
                      *(_QWORD*)v181 =
                          game_evt_demo_Seq_ChangeMap_lambda1_Destructor_ptr;
                      *(_QWORD*)(v181 + 8) = a1;
                      *(_QWORD*)(v181 + 80) = v182;
                      v184 = v275_.v275;
                      v185 = v275_.v276;
                      v275_.v275 = 0;
                      v275_.v276 = 0;
                      *(_QWORD*)(v181 + 16) = v184;
                      *(_QWORD*)(v181 + 24) = v185;
                      v186 = (__int64)v275_.v277;
                      v187 = v278_.v278;
                      v188 = v278_.v279;
                      v275_.v277 = nullptr;
                      v278_.v278 = 0;
                      *(_QWORD*)(v181 + 32) = v186;
                      *(_QWORD*)(v181 + 40) = v187;
                      v189 = (__int64)v278_.v280;
                      v278_.v279 = 0;
                      v278_.v280 = nullptr;
                      *(_QWORD*)(v181 + 48) = v188;
                      *(_QWORD*)(v181 + 56) = v189;
                      *(_WORD*)(v181 + 64) = v263;
                      *(_BYTE*)(v181 + 88) = v278_.v288;
                      if ((atomic_load_explicit(
                               (atomic_uchar* volatile)&GameData_2236a78,
                               memory_order_acquire) &
                           1) == 0 &&
                          __cxa_guard_acquire((__int64)&GameData_2236a78) !=
                              0) {
                        GameData_2236980 = 0;
                        GameData_2236988 = (__int64)GameHr_1151f30;
                        GameData_2236978 = 13;
                        GameData_22369f8 = 13;
                        GameData_2236990 = 0;
                        GameData_2236998 = 0;
                        GameData_22369a0 = 0;
                        GameData_22369a8 = 0;
                        GameData_22369b0 = 0;
                        GameData_22369d0 = 0;
                        GameData_22369d8 = 0;
                        GameData_22369e0 = 0;
                        GameData_22369e8 = 0;
                        GameData_22369f0 = 0;
                        GameData_2236a10 = 0;
                        GameData_22369b8 = 14;
                        GameData_2236a00 = 0;
                        GameData_2236a08 = (__int64)GameRoutine_1152170;
                        GameData_2236a18 = 0;
                        GameData_2236a20 = 0;
                        GameData_2236a28 = 0;
                        GameData_2236a30 = 0;
                        GameData_2236a38 = 0;
                        GameData_2236a60 = 0;
                        GameData_2236a68 = 0;
                        GameData_2236a70 = 0;
                        GameData_22369c0 = 0;
                        GameData_22369c8 = (__int64)GameRoutine_11520a0;
                        GameData_2236a58 = 0;
                        GameData_2236a48 = 0;
                        GameData_2236a50 = 0;
                        GameData_2236a40 = 0;
                        __cxa_guard_release((__int64)&GameData_2236a78);
                      }
                      v190 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
                      v191 = (*(__int64 (**)(__int64))(*(_QWORD*)v183 + 16LL))(
                          v183);
                      v192 = GameData_212c608[0];
                      *(_QWORD*)(v190 + 88) = 0;
                      *(_QWORD*)(v190 + 96) = 0;
                      *(_QWORD*)(v190 + 104) = 0;
                      *(_QWORD*)(v190 + 112) = 0;
                      *(_QWORD*)(v190 + 120) = 0;
                      *(_QWORD*)(v190 + 128) = 0;
                      *(_WORD*)(v190 + 136) = 0;
                      *(_QWORD*)(v190 + 32) = 0;
                      v193 = (_QWORD*)(v190 + 32);
                      *(_QWORD*)(v190 + 138) = 0;
                      *(_QWORD*)(v190 + 144) = 0;
                      *(_QWORD*)(v190 + 40) = 0;
                      *(_QWORD*)(v190 + 48) = 0;
                      *(_QWORD*)(v190 + 56) = 0;
                      *(_QWORD*)(v190 + 64) = 0;
                      *(_QWORD*)(v190 + 72) = 0;
                      *(_QWORD*)(v190 + 80) = 0;
                      *(_QWORD*)v190 = v192 + 16;
                      *(_QWORD*)(v190 + 8) = 0;
                      *(_QWORD*)(v190 + 16) = 0;
                      *(_QWORD*)(v190 + 24) = "NULL";
                      game_ProcInst_Register(v190);
                      *(_BYTE*)(v190 + 152) = v264 & 1;
                      *(_QWORD*)v190 = game_evt_demo_LoadMapProc_vtable;
                      v194 = strlen(v266);
                      if (v194 >= 0xFFFFFFFFFFFFFFF7LL) {
                        goto LABEL_515;
                      }
                      v195 = v194;
                      if (v194 >= 0x17) {
                        if ((v194 | 7) == 0x17) {
                          v198 = 26;
                        }
                        else {
                          v198 = (v194 | 7) + 1;
                        }
                        v199 = fw_memory_HeapManager_Allocate(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, v198, 16,
                            0);
                        v200 = v198 | 1;
                        v196 = v262;
                        v197 = v199;
                        *(_QWORD*)(v190 + 168) = v195;
                        *(_QWORD*)(v190 + 176) = v199;
                        *(_QWORD*)(v190 + 160) = v200;
                      }
                      else {
                        v196 = v262;
                        v197 = v190 + 161;
                        *(_BYTE*)(v190 + 160) = 2 * v194;
                        if (v194 == 0) {
                        LABEL_372:
                          *(_BYTE*)(v197 + v195) = 0;
                          v201 = strlen(v271);
                          if (v201 >= 0xFFFFFFFFFFFFFFF7LL) {
                            goto LABEL_515;
                          }
                          v202 = v201;
                          if (v201 >= 0x17) {
                            if ((v201 | 7) == 0x17) {
                              v204 = 26;
                            }
                            else {
                              v204 = (v201 | 7) + 1;
                            }
                            v203 = fw_memory_HeapManager_Allocate(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr, v204,
                                16, 0);
                            *(_QWORD*)(v190 + 192) = v202;
                            *(_QWORD*)(v190 + 200) = v203;
                            *(_QWORD*)(v190 + 184) = v204 | 1;
                          }
                          else {
                            v203 = v190 + 185;
                            *(_BYTE*)(v190 + 184) = 2 * v201;
                            if (v201 == 0) {
                            LABEL_381:
                              *(_BYTE*)(v203 + v202) = 0;
                              v205 = strlen(v269);
                              if (v205 >= 0xFFFFFFFFFFFFFFF7LL) {
                                goto LABEL_515;
                              }
                              v206 = v205;
                              if (v205 >= 0x17) {
                                if ((v205 | 7) == 0x17) {
                                  v208 = 26;
                                }
                                else {
                                  v208 = (v205 | 7) + 1;
                                }
                                v207 = fw_memory_HeapManager_Allocate(
                                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                    v208, 16, 0);
                                *(_QWORD*)(v190 + 216) = v206;
                                *(_QWORD*)(v190 + 224) = v207;
                                *(_QWORD*)(v190 + 208) = v208 | 1;
                              }
                              else {
                                v207 = v190 + 209;
                                *(_BYTE*)(v190 + 208) = 2 * v205;
                                if (v205 == 0) {
                                LABEL_390:
                                  *(_BYTE*)(v207 + v206) = 0;
                                  v209 = strlen(v196);
                                  if (v209 >= 0xFFFFFFFFFFFFFFF7LL) {
                                    goto LABEL_515;
                                  }
                                  v210 = v209;
                                  if (v209 >= 0x17) {
                                    if ((v209 | 7) == 0x17) {
                                      v213 = 26;
                                    }
                                    else {
                                      v213 = (v209 | 7) + 1;
                                    }
                                    v214 = fw_memory_HeapManager_Allocate(
                                        *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v213, 16, 0);
                                    v215 = v213 | 1;
                                    v211 = a1 + 161;
                                    v212 = v214;
                                    *(_QWORD*)(v190 + 240) = v210;
                                    *(_QWORD*)(v190 + 248) = v214;
                                    *(_QWORD*)(v190 + 232) = v215;
                                  }
                                  else {
                                    v211 = a1 + 161;
                                    v212 = v190 + 233;
                                    *(_BYTE*)(v190 + 232) = 2 * v209;
                                    if (v209 == 0) {
                                      goto LABEL_399;
                                    }
                                  }
                                  memcpy(v212, (__int64)v196, v210);
                                LABEL_399:
                                  *(_BYTE*)(v212 + v210) = 0;
                                  if (v191 != 0) {
                                    v216 = (*(__int64 (**)(__int64))(
                                        *(_QWORD*)v191 + 16LL))(v191);
                                  }
                                  else {
                                    v216 = 0;
                                  }
                                  v217 = fw_memory_g_heap_manager_ptr;
                                  *(_QWORD*)(v190 + 288) = v216;
                                  v218 = *(_QWORD*)(v261 + 40);
                                  if (v218 != 0) {
                                    *(_QWORD*)(v218 + 48) = v190;
                                    *(_QWORD*)(v190 + 56) =
                                        *(_QWORD*)(v261 + 40);
                                  }
                                  *(_QWORD*)(v261 + 40) = v190;
                                  *(_QWORD*)(v190 + 24) = "LoadMapProc";
                                  *(_QWORD*)(v190 + 32) = v261;
                                  *(_DWORD*)(v190 + 140) =
                                      (unsigned int)game_HashString32(
                                          "LoadMapProc");
                                  *(_QWORD*)(v190 + 64) = 0;
                                  *(_QWORD*)(v190 + 72) = 24;
                                  *(_QWORD*)(v190 + 80) = 1;
                                  *(_QWORD*)(v190 + 8) = &GameData_2236978;
                                  *(_QWORD*)(v190 + 16) = &GameData_2236978;
                                  (*(void (**)(__int64))(*(_QWORD*)v190 +
                                                         32LL))(v190);
                                  if (((*(__int64 (**)(__int64))(
                                           *(_QWORD*)v190 + 136LL))(v190) &
                                       1) != 0 &&
                                      (*(_WORD*)(v190 + 136) & 0x100) == 0) {
                                    *(_WORD*)(v190 + 136) |= 0x100u;
                                  }
                                  v219 = (_BYTE*)*v193;
                                  v220 = *(_BYTE*)(*v193 + 138LL);
                                  if (v220 == 0) {
                                    (*(void (**)(_QWORD))(*(_QWORD*)v219 +
                                                          64LL))(*v193);
                                    v220 = v219[138];
                                  }
                                  v219[138] = v220 + 1;
                                  *(_WORD*)(v190 + 136) |= 2u;
                                  if (v191 != 0) {
                                    (*(void (**)(__int64))(*(_QWORD*)v191 +
                                                           40LL))(v191);
                                  }
                                  v221 = (*(__int64 (**)(__int64))(
                                      *(_QWORD*)v183 + 40LL))(v183);
                                  if ((v278_.v278 & 1) != 0 &&
                                      v278_.v280 != nullptr) {
                                    v222 = 128;
                                    if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) ==
                                        0) {
                                      v222 = 56;
                                    }
                                    nn_mem_StandardAllocator_Free(
                                        *(_QWORD*)v217 + v222,
                                        (__int64)v278_.v280);
                                  }
                                  if ((v275_.v275 & 1) != 0 &&
                                      v275_.v277 != nullptr) {
                                    v223 = 128;
                                    if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) ==
                                        0) {
                                      v223 = 56;
                                    }
                                    nn_mem_StandardAllocator_Free(
                                        *(_QWORD*)v217 + v223,
                                        (__int64)v275_.v277);
                                  }
                                  v224 = (__int64*)(a1 + 304);
                                  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
                                    v225 = *(const char**)(a1 + 176);
                                  }
                                  else {
                                    v225 = (const char*)v211;
                                  }
                                  v226 = Seq_114d340(v221, a2);
                                  v227 = v329_.v333;
                                  v228 = v226;
                                  v229 = Seq_114d520(a1, (__int64)v329_.v333);
                                  v230 = snd_getDefineValue(
                                      (__int64)"SetVolume_SE_PuppetDemo_"
                                               "AMBVolume");
                                  v231 = *(float*)&v230 / 0x1.9000000000000p+6f;
                                  snd_Fade_Fade_10cb00(
                                      (__int64)&v329_.v329,
                                      (__int64)"FadeTime_ENV_Combat_Cross");
                                  snd_startSlotVolume_100b50(
                                      &GameData_21ec57c, (__int64)&v329_.v329,
                                      v231);
                                  snd_Fade_Destroy_Fade(&v329_.v329);
                                  v232 = v225;
                                  v233 = fw_memory_g_heap_manager_ptr;
                                  GameManager_a21ca0(
                                      *game_sound_g_game_sound_ptr[0], v232,
                                      v227, v228 & 1, v229 & 1, 0);
                                  v234 = *(_QWORD**)(a1 + 576);
                                  if (v234 == nullptr) {
                                  LABEL_449:
                                    GameRoutine_60a020(a1 + 280, v329_.v333);
                                    v73 = v272;
                                    v72 = v274;
                                    if (v224 != &v323_.v323) {
                                      if ((*(_BYTE*)v224 & 1) != 0) {
                                        if ((v323_.v323 & 1) != 0) {
                                          v244 = (char*)v323_.v325;
                                        }
                                        else {
                                          v244 = (char*)&v323_.v323 + 1;
                                        }
                                        if ((v323_.v323 & 1) != 0) {
                                          v245 = v323_.v324;
                                        }
                                        else {
                                          v245 =
                                              (unsigned __int64)(unsigned __int8)
                                                  v323_.v323 >>
                                              1;
                                        }
                                        SpineModel_64dde0((__int64*)(a1 + 304),
                                                          (__int64)v244, v245);
                                      }
                                      else if ((v323_.v323 & 1) != 0) {
                                        GameRoutine_64df20((_QWORD*)(a1 + 304),
                                                           (__int64)v323_.v325,
                                                           v323_.v324);
                                      }
                                      else {
                                        v243 = v323_.v324;
                                        *v224 = v323_.v323;
                                        *(_QWORD*)(a1 + 312) = v243;
                                        *(_QWORD*)(a1 + 320) = v323_.v325;
                                      }
                                    }
                                    v246 = (__int64*)(a1 + 328);
                                    if ((__int64*)(a1 + 328) != &v320_.v320) {
                                      if ((*(_BYTE*)v246 & 1) != 0) {
                                        if ((v320_.v320 & 1) != 0) {
                                          v248 = (char*)v320_.v322;
                                        }
                                        else {
                                          v248 = (char*)&v320_.v320 + 1;
                                        }
                                        if ((v320_.v320 & 1) != 0) {
                                          v249 = v320_.v321;
                                        }
                                        else {
                                          v249 =
                                              (unsigned __int64)(unsigned __int8)
                                                  v320_.v320 >>
                                              1;
                                        }
                                        SpineModel_64dde0(v246, (__int64)v248,
                                                          v249);
                                      }
                                      else if ((v320_.v320 & 1) != 0) {
                                        GameRoutine_64df20(v246,
                                                           (__int64)v320_.v322,
                                                           v320_.v321);
                                      }
                                      else {
                                        v247 = v320_.v321;
                                        *v246 = v320_.v320;
                                        *(_QWORD*)(a1 + 336) = v247;
                                        *(_QWORD*)(a1 + 344) = v320_.v322;
                                      }
                                    }
                                    v163 = (__int64*)(a1 + 352);
                                    if ((__int64*)(a1 + 352) == &v317_.v317) {
                                      goto LABEL_484;
                                    }
                                    v164 = (unsigned __int8)v317_.v317;
                                    if ((*(_BYTE*)v163 & 1) == 0) {
                                      if ((v317_.v317 & 1) == 0) {
                                        goto LABEL_335;
                                      }
                                      goto LABEL_476;
                                    }
                                    goto LABEL_477;
                                  }
                                  v235 = (_DWORD*)GameData_212d168;
                                  while (1) {
                                    if ((v234[2] & 1) != 0) {
                                      fw_text_String_CopyTerminated(
                                          &v329_.v329, v234[4], v234[3]);
                                    }
                                    else {
                                      v236 = v234[3];
                                      v237 = v234[4];
                                      v329_.v329 = v234[2];
                                      v329_.v330 = v236;
                                      v329_.v331 = (char*)v237;
                                    }
                                    v238 = *(_QWORD*)(v234[5] + 160LL);
                                    v329_.v332 = v234[5];
                                    if (v238 == 0 ||
                                        *(_DWORD*)(v238 + 384) != 0) {
                                      goto LABEL_443;
                                    }
                                    if (*v235 != 2) {
                                      goto LABEL_442;
                                    }
                                    v239 = *(_QWORD*)(v238 + 392);
                                    v240 = *(_QWORD*)(v238 + 400);
                                    if (v240 != 0) {
                                      atomic_fetch_add_explicit(
                                          (atomic_ullong* volatile)(v240 + 8),
                                          1u, memory_order_relaxed);
                                      v241 = *(_DWORD*)(v239 + 11784);
                                      if (atomic_fetch_add(
                                              (atomic_ullong* volatile)(v240 +
                                                                        8),
                                              0xFFFFFFFFFFFFFFFFLL) == 0) {
                                        (*(void (**)(__int64))(*(_QWORD*)v240 +
                                                               16LL))(v240);
                                        std___1___shared_weak_count___release_weak(
                                            v240);
                                      }
                                    }
                                    else {
                                      v241 = *(_DWORD*)(v239 + 11784);
                                    }
                                    v233 = fw_memory_g_heap_manager_ptr;
                                    if (v241 > 0x1A) {
                                      goto LABEL_442;
                                    }
                                    if (((1 << v241) & 0x410C) != 0) {
                                      *(_DWORD*)(*(_QWORD*)(v238 + 104) +
                                                 212LL) = 0;
                                      goto LABEL_443;
                                    }
                                    if (((1 << v241) & 0x5000080) != 0) {
                                      *(_DWORD*)(*(_QWORD*)(v238 + 104) +
                                                 212LL) = 0;
                                    }
                                    else {
                                    LABEL_442:
                                      *(_DWORD*)(v238 + 384) = 1;
                                    }
                                  LABEL_443:
                                    if ((v329_.v329 & 1) != 0 &&
                                        v329_.v331 != nullptr) {
                                      if (*(_QWORD*)(*(_QWORD*)v233 + 200LL) !=
                                          0) {
                                        v242 = 128;
                                      }
                                      else {
                                        v242 = 56;
                                      }
                                      nn_mem_StandardAllocator_Free(
                                          *(_QWORD*)v233 + v242,
                                          (__int64)v329_.v331);
                                    }
                                    v234 = (_QWORD*)*v234;
                                    if (v234 == nullptr) {
                                      goto LABEL_449;
                                    }
                                  }
                                }
                              }
                              memcpy(v207, (__int64)v269, v206);
                              goto LABEL_390;
                            }
                          }
                          memcpy(v203, (__int64)v271, v202);
                          goto LABEL_381;
                        }
                      }
                      memcpy(v197, (__int64)v266, v195);
                      goto LABEL_372;
                    }
                  }
                }
                else {
                  v87 = v326_.v326;
                }
                v93 = false;
                goto LABEL_206;
              }
            }
            memmove((__int64)v78, (__int64)v75, v77);
            goto LABEL_178;
          }
        }
        memmove((__int64)v57, (__int64)v54, v56);
        goto LABEL_166;
      }
    }
    memmove((__int64)v48, (__int64)v45, v47);
    goto LABEL_92;
  }
  Seq_114cda0(a1, a2, a3, a4 & 1);
  v12 = false;
LABEL_489:
  if ((v311_.v311 & 1) != 0 && v311_.v313 != nullptr) {
    v255 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v255 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v255,
                                  (__int64)v311_.v313);
  }
  if ((v314_.v314 & 1) != 0 && v314_.v316 != nullptr) {
    v256 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v256 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v256,
                                  (__int64)v314_.v316);
  }
  if ((v317_.v317 & 1) != 0 && v317_.v319 != nullptr) {
    v257 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v257 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v257,
                                  (__int64)v317_.v319);
  }
  if ((v320_.v320 & 1) != 0 && v320_.v322 != nullptr) {
    v258 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v258 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v258,
                                  (__int64)v320_.v322);
  }
  if ((v323_.v323 & 1) != 0 && v323_.v325 != nullptr) {
    v259 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v259 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v259,
                                  (__int64)v323_.v325);
  }
  return v12;
}

void game_evt_demo_11c5ae0(__int64 a1)
{
  float32x4_t* v2;
  float32x4_t v3;
  float v4;
  double v5;
  double v6;
  float32x4_t* v7;
  float32x4_t v8;
  unsigned int v9;
  unsigned __int64 v10;
  unsigned int v11;
  float32x4_t v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  int8x16_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  float32x4_t v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  __int64 v38;
  float v39;
  unsigned __int64 v40;
  float32x4_t v41;
  int8x16_t v42;
  double v43;
  double v44;
  double v45;
  float v46;
  float v47;
  float v48;
  bool v49;
  bool v50;
  int v52;
  __int64 v53;
  atomic_uchar* v54;
  unsigned __int8 explicit;
  int* v56;
  __int64 v57;
  __int64 v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int128 v71;
  int v72;
  int v73;
  int8x16_t v74;
  float32x4_t v75;
  __int64 v76;

  v2 = (float32x4_t*)*GameData_212fc38[0];
  if (*GameData_212fc38[0] != 0) {
    v3 = v2[27];
    v4 = LANES128(v2[28]).n128_f32[0];
  }
  else {
    v4 = 0x0.0p+0f;
    v3 = (__typeof__(v3)){0};
  }
  if (*(_BYTE*)(a1 + 192) == 1) {
    v75 = v3;
    v74 = *(int8x16_t*)(a1 + 176);
    v5 = GameRoutine_1a09f80((float)(v4 * 0x1.1df46a0000000p-6f) *
                             0x1.0000000000000p-1);
    v6 = GameRoutine_1a09f70((float)(v4 * 0x1.1df46a0000000p-6f) *
                             0x1.0000000000000p-1);
    v7 = *(float32x4_t**)(a1 + 152);
    if (v7 != nullptr) {
      LANES128(v8).n128_u64[0] = LANES128(v74).n128_u64[0];
      *(float*)&v9 = v5 + PSEUDO_UNFUSED(v6 * 0x0.0p+0);
      *(float*)&v10 = PSEUDO_UNFUSED(v6 * -0x0.0p+0) + v5 * 0x0.0p+0;
      *(float*)&v11 = v6 + PSEUDO_UNFUSED(v5 * 0x0.0p+0);
      LANES128(v12).n128_u64[0] = __PAIR64__(v11, v10);
      LANES128(v12).n128_u64[1] = __PAIR64__(v9, v10);
      v13 = vmulq_f32(v12, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v12).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v14).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v12).n128_u64[1] = LANES128(v12).n128_u64[0];
      LANES128(v15).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v16).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v8).n128_u64[1] = LANES128(v15).n128_u64[0];
      *(int32x2_t*)&LANES128(v16).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v13).n128_u64[0]), 1);
      *(int8x8_t*)&LANES128(v14).n128_i8[8] =
          vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      v17 = vmlaq_f32(vmulq_f32(v12, v13),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v8, v14));
      LANES128(v8).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v15).n128_u64[1] = LANES128(v8).n128_u64[0];
      LANES128(v8).n128_u64[1] = LANES128(v74).n128_u64[0];
      v18 = vmlaq_f32(v17, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v8, v16));
      LANES128(v8).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v8).n128_i8[8] =
          vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v13).n128_u64[0] = __PAIR64__(v11, v10);
      HIDWORD(v10) = v9;
      v19 = vmlsq_f32(v18, v8, v15);
      LANES128(v20).n128_u64[0] = __PAIR64__(v11, v10);
      LANES128(v21).n128_u64[0] = __PAIR64__(v11, v10);
      LANES128(v20).n128_u64[1] = v10;
      LANES128(v22).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v23).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v24).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v20).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v25).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
      LANES128(v21).n128_u64[1] = LANES128(v23).n128_u64[0];
      *(int8x8_t*)&LANES128(v24).n128_i8[8] =
          vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v23).n128_u64[1] = LANES128(v20).n128_u64[0];
      LANES128(v20).n128_u64[1] = LANES128(v13).n128_u64[0];
      *(int32x2_t*)&LANES128(v25).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v19).n128_u64[0]), 1);
      v26 = vmlaq_f32(vmlaq_f32(vmulq_f32(v22, v19),
                                COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v21, v24)),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v20, v25));
      LANES128(v20).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v20).n128_i8[8] =
          vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v27 = vmlsq_f32(v26, v20, v23);
      LANES128(v27).n128_u32[3] = 0;
      v28 = vaddq_f32(v75, v27);
      v29 = vsubq_f32(v7[19], v28);
      v30 = vmulq_f32(v29, v29);
      LANES128(v30).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        LANES128(v7[19]).n128_u64[0] = LANES128(v28).n128_u64[0];
        v31 = v7[19];
        LANES128(v7[18]).n128_u32[2] |= 1u;
        LANES128(v31).n128_u64[1] = LANES128(v28).n128_u32[2];
        v7[19] = v31;
      }
    }
    *(_BYTE*)(a1 + 192) = 0;
  }
  v32 = *(float*)(a1 + 204);
  v33 =
      0x1.e000000000000p+5f / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
  if (!(v33 > 0x0.0p+0f)) {
    v34 = 0x1.119ce00000000p-6f;
  }
  else {
    v34 = v33 * 0x1.119ce00000000p-6f;
  }
  v35 = *(float*)(a1 + 220);
  v36 = *(float*)(a1 + 216) + v34;
  *(float*)(a1 + 216) = v36;
  if (v36 > v35) {
    v36 = v35;
    *(float*)(a1 + 216) = v35;
  }
  v37 = Cursor_734120(*(_DWORD*)(a1 + 224), 2, *(float*)(a1 + 208),
                      *(float*)(a1 + 212), v36, v35);
  *(float*)(a1 + 204) = v37;
  if (v37 == v32) {
    if (*(_BYTE*)(a1 + 228) != 1) {
      goto LABEL_31;
    }
  }
  else {
    *(_BYTE*)(a1 + 228) = 1;
  }
  v38 = *(_QWORD*)(a1 + 152);
  if (v38 != 0) {
    v39 = (float)(v4 + v37) * 0x1.1df46a0000000p-6f;
    LODWORD(v40) = 0;
    *((float*)&v40 + 1) = v39;
    v41 = vsubq_f32(*(float32x4_t*)(v38 + 320), COERCE_AS(float32x4_t, v40));
    v42 = vmulq_f32(v41, v41);
    LANES128(v42).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      *(_DWORD*)(v38 + 320) = 0;
      *(float*)(v38 + 324) = v39;
      *(_OWORD*)(v38 + 320) = *(unsigned __int64*)(v38 + 320);
      v43 = v39 * 0x1.0000000000000p-1;
      v44 = GameRoutine_1a09f80(v43);
      v45 = GameRoutine_1a09f70(v43);
      v46 = v44 + PSEUDO_UNFUSED(v45 * 0x0.0p+0);
      v47 = PSEUDO_UNFUSED(v45 * -0x0.0p+0) + v44 * 0x0.0p+0;
      v48 = v45 + PSEUDO_UNFUSED(v44 * 0x0.0p+0);
      v49 = COERCE_FLOAT(*(_OWORD*)(v38 + 336)) == v47 &&
            COERCE_FLOAT(HIDWORD(*(_QWORD*)(v38 + 336))) == v48;
      v50 = v49 && COERCE_FLOAT(*(_QWORD*)(v38 + 344)) == v47;
      if (!v50 || COERCE_FLOAT(HIDWORD(*(_OWORD*)(v38 + 336))) != v46) {
        v52 = *(_DWORD*)(v38 + 296);
        *(float*)(v38 + 336) = v47;
        *(float*)(v38 + 340) = v48;
        *(float*)(v38 + 344) = v47;
        *(float*)(v38 + 348) = v46;
        *(_DWORD*)(v38 + 296) = v52 | 1;
      }
    }
  }
  *(_BYTE*)(a1 + 228) = 0;
LABEL_31:
  v53 = *(_QWORD*)(a1 + 152);
  if (v53 != 0) {
    v54 = (atomic_uchar*)GameData_212deb8;
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                    memory_order_acquire);
    v56 = GameData_212deb0;
    if ((explicit & 1) == 0) {
      v72 = __cxa_guard_acquire((__int64)GameData_212deb8);
      v54 = (atomic_uchar*)GameData_212deb8;
      v56 = GameData_212deb0;
      if (v72 != 0) {
        *GameData_212deb0 = wld_Crc32(0, "CharacterBuilder", 0x10u);
        __cxa_guard_release((__int64)GameData_212deb8);
        v54 = (atomic_uchar*)GameData_212deb8;
        v56 = GameData_212deb0;
      }
    }
    v57 = *(_QWORD*)(v53 + 512);
    v58 = v57;
    while (v58 != *(_QWORD*)(v53 + 504)) {
      v59 = *(_DWORD*)(v58 - 16);
      v58 -= 16;
      v57 -= 16;
      if (v59 == *v56) {
        if (*(_QWORD*)(v53 + 512) != v57) {
          v60 = *(_QWORD*)(v57 + 8);
          if (v60 != 0) {
            v61 = *(_QWORD*)(v60 + 112);
            if (v61 != 0) {
              v62 = *(_QWORD*)(a1 + 152);
              if (v62 != 0) {
                if ((atomic_load_explicit(v54, memory_order_acquire) & 1) ==
                    0) {
                  v76 = v62;
                  v73 = __cxa_guard_acquire((__int64)GameData_212deb8);
                  v62 = v76;
                  v56 = GameData_212deb0;
                  if (v73 != 0) {
                    *GameData_212deb0 = wld_Crc32(0, "CharacterBuilder", 0x10u);
                    __cxa_guard_release((__int64)GameData_212deb8);
                    v62 = v76;
                    v56 = GameData_212deb0;
                  }
                }
                v63 = *v56;
                v65 = *(_QWORD*)(v62 + 504);
                v64 = *(_QWORD*)(v62 + 512);
                v66 = v64;
                v67 = v64;
                while (v67 != v65) {
                  v68 = *(_DWORD*)(v67 - 16);
                  v67 -= 16;
                  v66 -= 16;
                  if (v68 == v63) {
                    if (v64 != v66) {
                      v69 = *(_QWORD*)(v66 + 8);
                      goto LABEL_47;
                    }
                    break;
                  }
                }
                v69 = 0;
              LABEL_47:
                v70 = *(_QWORD*)(a1 + 152);
                if (*(_BYTE*)(v70 + 289) == 1 &&
                    (*(_BYTE*)(v70 + 288) & 1) != 0 &&
                    (*(_BYTE*)(v70 + 300) & 0xFD) != 1) {
                  do {
                    v70 = *(_QWORD*)(v70 + 736);
                  } while (v70 != 0 && *(_BYTE*)(v70 + 289) == 1 &&
                           *(_BYTE*)(v70 + 288) == 1 &&
                           (*(_BYTE*)(v70 + 300) & 0xFD) != 1);
                }
                if ((GameRoutine_10f3440((float32x4_t*)(a1 + 240), v69) & 1) !=
                    0) {
                  *(_QWORD*)(v61 + 156) = 0x3F8000003F800000LL;
                  *(_DWORD*)(v61 + 164) = 1065353216;
                  *(_DWORD*)(v61 + 128) = *(_DWORD*)(a1 + 352);
                  *(_DWORD*)(v61 + 132) = *(_DWORD*)(a1 + 356);
                  v71 = *(_OWORD*)(v61 + 128);
                  *((_QWORD*)&v71 + 1) = *(unsigned int*)(a1 + 360);
                  *(_OWORD*)(v61 + 128) = v71;
                }
              }
            }
          }
        }
        return;
      }
    }
  }
}

void game_evt_demo_11ca3a0(__int64 a1)
{

#pragma clang fp contract(fast)

  __int64* v2;
  float32x4_t* v3;
  double v4;
  double v5;
  double v6;
  float v7;
  float32x4_t** v8;
  float32x4_t** v9;
  unsigned int v10;
  float32x4_t v11;
  unsigned int v12;
  unsigned __int64 v13;
  float32x4_t v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  unsigned __int64 v21;
  float32x4_t v22;
  int8x16_t v23;
  int8x16_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  unsigned __int32 v30;
  unsigned __int64 v31;
  double v32;
  float32x4_t* v33;
  float32x4_t v34;
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x2_t v39;
  double v40;
  double v41;
  double v42;
  double v43;
  float32x4_t v44;
  float v45;
  float v46;
  bool v47;
  bool v48;
  unsigned __int32 v49;
  float32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  float32x4_t v53;
  unsigned __int32 v54;
  int8x16_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;

  v2 = GameData_212fc38[0];
  v3 = (float32x4_t*)*GameData_212fc38[0];
  if (*GameData_212fc38[0] != 0) {
    v57 = v3[27];
    v4 = (float)(LANES128(v3[28]).n128_f32[0] * 0x1.1df46a0000000p-6) * 0.5;
  }
  else {
    v4 = 0.0;
    v57 = (__typeof__(v57)){0};
  }
  v55 = *(int8x16_t*)(a1 + 64);
  v5 = GameRoutine_1a09f80(v4);
  v6 = GameRoutine_1a09f70(v4);
  if (*v2 != 0) {
    v7 = *(float*)(*v2 + 448);
  }
  else {
    v7 = 0.0;
  }
  v8 = *(float32x4_t***)(a1 + 32);
  v9 = *(float32x4_t***)(a1 + 40);
  if (v8 != v9) {
    *(float*)&v10 = v6 + v5 * 0.0;
    LANES128(v11).n128_u64[0] = LANES128(v55).n128_u64[0];
    *(float*)&v12 = v5 + v6 * 0.0;
    *(float*)&v13 = v6 * -0.0 + v5 * 0.0;
    LANES128(v14).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v15).n128_u64[0] = __PAIR64__(v10, v13);
    LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
    LANES128(v15).n128_u64[1] = __PAIR64__(v12, v13);
    v16 = vmulq_f32(v15, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v17).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v18).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v19).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v20).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v17).n128_i8[8] =
        vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v11).n128_u64[1] = LANES128(v18).n128_u64[0];
    LANES128(v18).n128_u64[1] = LANES128(v19).n128_u64[0];
    LANES128(v19).n128_u64[1] = LANES128(v55).n128_u64[0];
    *(int32x2_t*)&LANES128(v20).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v16).n128_u64[0]), 1);
    LANES128(v22).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    HIDWORD(v13) = v12;
    *(int8x8_t*)&LANES128(v22).n128_i8[8] =
        vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v23).n128_u64[0] = __PAIR64__(v10, v13);
    v21 = LANES128(v23).n128_u64[0];
    LANES128(v23).n128_u64[1] = v13;
    v24 =
        vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v14, v16),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v11, v17)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v19, v20)),
                  v22, v18);
    LANES128(v18).n128_u64[0] = LANES128(v23).n128_u64[0];
    LANES128(v16).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v25).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v26).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v15).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v25).n128_u64[1] = LANES128(v25).n128_u64[0];
    LANES128(v18).n128_u64[1] = LANES128(v26).n128_u64[0];
    *(int8x8_t*)&LANES128(v16).n128_i8[8] =
        vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v27).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 1);
    LANES128(v26).n128_u64[1] = LANES128(v23).n128_u64[0];
    LANES128(v23).n128_u64[1] = v21;
    *(int8x8_t*)&LANES128(v15).n128_i8[8] =
        vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v28 =
        vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v25, v24),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v18, v16)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v23, v27)),
                  v15, v26);
    LANES128(v28).n128_u32[3] = 0;
    v29 = vaddq_f32(v57, v28);
    v30 = LANES128(v29).n128_u32[1];
    LANES128(v15).n128_f32[0] =
        (float)(v7 + *(float*)(a1 + 80)) * 0x1.1df46a0000000p-6;
    LODWORD(v31) = 0;
    v54 = LANES128(v15).n128_u32[0];
    HIDWORD(v31) = LANES128(v15).n128_u32[0];
    v56 = v29;
    v58 = COERCE_AS(float32x4_t, v31);
    v32 = LANES128(v15).n128_f32[0] * 0.5;
    do {
      v33 = *v8;
      v34 = vsubq_f32((*v8)[19], v29);
      v35 = vmulq_f32(v34, v34);
      LANES128(v35).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
              .n64_f32[0] != 0.0) {
        LANES128(v33[19]).n128_u32[0] = LANES128(v29).n128_u32[0];
        LANES128(v33[19]).n128_u32[1] = v30;
        v36 = v33[19];
        LANES128(v33[18]).n128_u32[2] |= 1u;
        LANES128(v36).n128_u64[1] = LANES128(v29).n128_u32[2];
        v33[19] = v36;
      }
      v37 = vsubq_f32(v33[20], v58);
      v38 = vmulq_f32(v37, v37);
      LANES128(v38).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
              .n64_u64[0];
      LANES64(v39).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
              .n64_u64[0];
      if (LANES64(v39).n64_f32[0] != 0.0) {
        LANES128(v33[20]).n128_u32[0] = 0;
        LANES128(v33[20]).n128_u32[1] = v54;
        v33[20] = COERCE_AS(float32x4_t, LANES128(v33[20]).n128_u64[0]);
        v40 = GameRoutine_1a09f80(v32);
        v41 = GameRoutine_1a09f70(v32);
        v42 = v41 * 0.0;
        v29 = v56;
        v43 = v41 * -0.0;
        LANES64(v39).n64_f64[0] = v41 + v40 * 0.0;
        v44 = v33[21];
        v45 = v40 + v42;
        LANES64(v39).n64_f32[0] = LANES64(v39).n64_f64[0];
        v46 = v43 + v40 * 0.0;
        if (LANES128(v44).n128_f32[0] != v46 ||
            (LANES128(v44).n128_f32[1] == LANES64(v39).n64_f32[0]
                 ? (v47 = LANES128(v44).n128_f32[2] == v46)
                 : (v47 = false),
             v47 ? (v48 = LANES128(v44).n128_f32[3] == v45) : (v48 = false),
             !v48)) {
          v49 = LANES128(v33[18]).n128_u32[2];
          LANES128(v33[21]).n128_f32[0] = v46;
          LANES128(v33[21]).n128_u32[1] = LANES64(v39).n64_u32[0];
          LANES128(v33[21]).n128_f32[2] = v46;
          LANES128(v33[21]).n128_f32[3] = v45;
          LANES128(v33[18]).n128_u32[2] = v49 | 1;
        }
      }
      LANES64(v39).n64_u32[0] = *(_DWORD*)(a1 + 84);
      v50 = vdupq_lane_s32(v39, 0);
      LANES128(v50).n128_u32[3] = 0;
      v51 = vsubq_f32(v33[22], v50);
      v52 = vmulq_f32(v51, v51);
      LANES128(v52).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v52, v52, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
              .n64_f32[0] != 0.0) {
        LANES128(v33[22]).n128_u32[0] = LANES64(v39).n64_u32[0];
        LANES128(v33[22]).n128_u32[1] = LANES64(v39).n64_u32[0];
        v53 = v33[22];
        LANES128(v33[18]).n128_u32[2] |= 1u;
        LANES128(v53).n128_u64[1] = LANES64(v39).n64_u32[0];
        v33[22] = v53;
      }
      ++v8;
    } while (v8 != v9);
  }
}

#pragma GCC visibility pop
