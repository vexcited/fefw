#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* Se_80e330(__int64, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_HashString32(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__n128 GameRoutine_1378190(__int64, __int64);
__n128 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_1a86f9b;
extern _UNKNOWN GameData_1aa9d31;
extern _UNKNOWN GameData_1ab7dd7;
extern _UNKNOWN GameData_1adfa87;
extern _UNKNOWN GameData_2170810;
extern __int64 (*game_telop_TelopReminder_vtable[])();
extern __int64* GameData_2130240[8];
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_1a9f09e;
void GameRoutine_8679c0();
void __attribute__((noreturn)) String_60a1d0();
__int64 game_telop_1377920(__int64 a1, __int64 a2);

__int64 game_telop_1377920(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  _BYTE* v14;
  char v15;
  char* v16;
  char* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  char* v43;
  char* v44;
  unsigned __int64 v45;
  void* v46;
  char* v47;
  __int64 v48;
  __int64* v49;
  void* v50;
  char* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64* v54;
  char* v55;
  __int64 v56;
  const char* v57;
  __int64 v58;
  __int64 v59;
  void* v60;
  char* v61;
  unsigned __int64 v62;
  __int64 v63;
  const char* v64;
  const char* v65;
  __int64 v66;
  struct {
    __int64 v67;
    void* v68;
    char* v69;
  } v67_;
  struct {
    __int64 v70;
    void* v71;
  } v70_;

  if (a2 == 0) {
    return 0;
  }
  v67_.v68 = &GameData_1ab7dd7;
  v67_.v67 = game_HashString((__int64)&GameData_1ab7dd7);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  v4 =
      game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  (unsigned __int64*)&v67_.v67);
  if (v4 == 0) {
    return 0;
  }
  if (*(_DWORD*)(v4 + 32) != 1) {
    return 0;
  }
  v67_.v68 = &GameData_1ab7dd7;
  v67_.v67 = game_HashString((__int64)&GameData_1ab7dd7);
  game_VariableManager_SetFlag((__int64)&v67_.v67, 0);
  if (a1 == 0) {
    return 0;
  }
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      896, 16, 0);
  GameRoutine_1a0ba50(v6 + 144, 0, 752);
  v10 = GameData_212c608[0];
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = "NULL";
  *(_QWORD*)(v6 + 32) = 0;
  v11 = (_QWORD*)(v6 + 32);
  *(_QWORD*)(v6 + 138) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)v6 = v10 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  game_ProcInst_Register(v6);
  *(_QWORD*)(v6 + 200) = 0;
  *(_QWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 160) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 208) = 0;
  *(_QWORD*)(v6 + 216) = 0;
  *(_QWORD*)(v6 + 224) = 0;
  *(_QWORD*)(v6 + 232) = 0;
  *(_QWORD*)(v6 + 240) = 0;
  *(_QWORD*)(v6 + 256) = 0;
  *(_QWORD*)(v6 + 264) = 0;
  *(_QWORD*)(v6 + 272) = 0;
  *(_QWORD*)(v6 + 280) = 0;
  *(_QWORD*)(v6 + 288) = 0;
  *(_QWORD*)(v6 + 296) = 0;
  *(_DWORD*)(v6 + 320) = 3;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)(v6 + 192) = v6 + 200;
  *(_QWORD*)(v6 + 304) = 0;
  *(_QWORD*)(v6 + 312) = 0;
  *(_DWORD*)(v6 + 332) = 0;
  *(_BYTE*)(v6 + 338) = 0;
  *(_QWORD*)(v6 + 344) = 0;
  *(_QWORD*)(v6 + 352) = 0;
  *(_QWORD*)(v6 + 360) = 0;
  *(_QWORD*)(v6 + 368) = 0;
  *(_QWORD*)(v6 + 376) = 0;
  *(_QWORD*)(v6 + 384) = 0;
  *(_QWORD*)(v6 + 392) = 0;
  *(_QWORD*)(v6 + 400) = 0;
  *(_QWORD*)(v6 + 408) = 0;
  *(_QWORD*)(v6 + 416) = 0;
  *(_QWORD*)(v6 + 324) = 0;
  *(_DWORD*)(v6 + 248) = 1065353216;
  *(_QWORD*)(v6 + 424) = 0;
  *(_QWORD*)(v6 + 472) = 0;
  *(_QWORD*)(v6 + 480) = 0;
  *(_QWORD*)(v6 + 440) = 0;
  *(_QWORD*)(v6 + 448) = 0;
  *(_QWORD*)(v6 + 504) = 0;
  *(_QWORD*)(v6 + 512) = 0;
  *(_QWORD*)(v6 + 488) = 0;
  *(_QWORD*)(v6 + 496) = 0;
  *(_DWORD*)(v6 + 520) = 1065353216;
  *(_QWORD*)(v6 + 528) = 0;
  *(_QWORD*)(v6 + 536) = 0;
  *(_QWORD*)(v6 + 544) = 0;
  *(_WORD*)(v6 + 336) = 1;
  *(_DWORD*)(v6 + 552) = 1065353216;
  *(_WORD*)(v6 + 560) = 0;
  *(_WORD*)(v6 + 584) = 0;
  *(_BYTE*)(v6 + 608) = 0;
  *(_QWORD*)(v6 + 656) = 0;
  *(_QWORD*)(v6 + 648) = 0;
  *(_QWORD*)(v6 + 632) = 0;
  *(_QWORD*)(v6 + 624) = 0;
  *(_QWORD*)(v6 + 616) = 0;
  *(_QWORD*)(v6 + 688) = 0;
  *(_DWORD*)(v6 + 432) = 0x2000;
  *(_QWORD*)(v6 + 680) = 0;
  *(_QWORD*)(v6 + 672) = 0;
  *(_QWORD*)(v6 + 664) = 0;
  *(_DWORD*)(v6 + 696) = 1065353216;
  *(_QWORD*)(v6 + 720) = 0;
  *(_QWORD*)(v6 + 712) = 0;
  *(_QWORD*)(v6 + 704) = 0;
  *(_DWORD*)(v6 + 728) = 1065353216;
  *(_WORD*)(v6 + 736) = 0;
  *(_QWORD*)(v6 + 456) = 0;
  *(_QWORD*)(v6 + 464) = v6 + 472;
  *(_WORD*)(v6 + 760) = 0;
  *(_BYTE*)(v6 + 784) = 0;
  *(_QWORD*)(v6 + 792) = 0;
  *(_BYTE*)(v6 + 800) = 0;
  *(_QWORD*)(v6 + 640) = v6 + 648;
  v12 = GameData_2130240[0] + 2;
  *(_BYTE*)(v6 + 816) = 0;
  *(_BYTE*)(v6 + 820) = 0;
  *(_QWORD*)(v6 + 888) = 0;
  *(_QWORD*)(v6 + 880) = 0;
  *(_QWORD*)(v6 + 872) = 0;
  *(_QWORD*)(v6 + 864) = 0;
  *(_QWORD*)(v6 + 856) = 0;
  *(_QWORD*)(v6 + 848) = 0;
  *(_QWORD*)(v6 + 840) = 0;
  *(_QWORD*)(v6 + 832) = 0;
  *(_QWORD*)(v6 + 824) = 0;
  *(_QWORD*)(v6 + 808) = v12;
  *(_QWORD*)v6 = game_telop_TelopReminder_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v6;
    *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v6;
  *(_QWORD*)(v6 + 24) = "TelopReminder";
  *(_QWORD*)(v6 + 32) = a1;
  *(_DWORD*)(v6 + 140) = game_HashString32((__int64)"TelopReminder");
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 24;
  *(_QWORD*)(v6 + 80) = 1;
  *(_QWORD*)(v6 + 8) = &GameData_2170810;
  *(_QWORD*)(v6 + 16) = &GameData_2170810;
  (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
      (*(_WORD*)(v6 + 136) & 0x100) == 0) {
    *(_WORD*)(v6 + 136) |= 0x100u;
  }
  v14 = (_BYTE*)*v11;
  v15 = *(_BYTE*)(*v11 + 138LL);
  if (v15 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v14 + 64LL))(*v11);
    v15 = v14[138];
  }
  v14[138] = v15 + 1;
  *(_WORD*)(v6 + 136) |= 2u;
  if ((*(_BYTE*)(v6 + 272) & 1) != 0) {
    *(_QWORD*)(v6 + 280) = 17;
    v16 = *(char**)(v6 + 288);
  }
  else {
    *(_BYTE*)(v6 + 272) = 34;
    v16 = (char*)(v6 + 273);
  }
  strcpy(v16, "Layout/Common.arc");
  if ((*(_BYTE*)(v6 + 296) & 1) != 0) {
    *(_QWORD*)(v6 + 304) = 18;
    v18 = *(char**)(v6 + 312);
  }
  else {
    *(_BYTE*)(v6 + 296) = 36;
    v18 = (char*)(v6 + 297);
  }
  strcpy(v18, "Common_TlpReminder");
  if (*(_DWORD*)(v6 + 320) == 2) {
    v19 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v21 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v20 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v23 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v22 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v24 = v22 == v23;
      v25 = v20 - 1 + v21;
      v26 = v25 >> 7;
      v27 = v25 & 0x7F;
      v28 = 16 * (v22 - v23) - 1;
      v29 = *(_QWORD*)(v23 + 8 * v26);
      if (v24) {
        v28 = 0;
      }
      v30 = v29 + 32 * v27;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v30 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v19[21] = *(_QWORD*)(v30 + 24);
      v31 = *(_QWORD*)(v30 + 16);
      v19[27] = v20 - 1;
      v19[20] = v31;
      if ((unsigned __int64)(v28 - (v20 + v21) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        if (*(_QWORD*)(v22 - 8) != 0) {
          v32 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free(*v5 + v32);
          v22 = v19[24];
        }
        v19[24] = v22 - 8;
      }
    }
  }
  *(_DWORD*)(v6 + 320) = 2;
  GameRoutine_8679c0();
  v33 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v34 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v34 & 0x10) == 0) {
      v34 = v34 & 0xFFFFFFE2 | 1;
      if (*(float*)(game_ProcGameSkipView_instance_ + 224) > 0x0.0p+0f) {
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 224) = 0;
      }
    }
    *(_DWORD*)(v33 + 156) = v34 | 0x10;
  }
  v35 = *(_QWORD*)(a2 + 24);
  if (*(_BYTE*)(v35 + 32) == 1) {
    v36 = a2;
    v37 = game_gmap_GmapClock_kDefaultTime_ptr;
    while (*(unsigned __int8*)(v36 + 89) == *(unsigned __int8*)(a2 + 89)) {
      v38 = *(unsigned __int8*)(v36 + 33);
      v39 = *(_QWORD*)(v36 + 24);
      if (v38 == 18) {
        v37 = v39 + 96;
        break;
      }
      v36 = *(_QWORD*)(v39 + 16);
      if (v36 == 0) {
        break;
      }
    }
  }
  else {
    v37 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v40 = *(_QWORD*)(v35 + 96);
  *(_DWORD*)(v6 + 880) = *(_DWORD*)(v35 + 104);
  *(_QWORD*)(v6 + 872) = v40;
  v41 = *(_QWORD*)v37;
  v42 = *(_DWORD*)(v37 + 8);
  *(_QWORD*)(v6 + 884) = v41;
  v43 = *(char**)(a2 + 144);
  *(_DWORD*)(v6 + 892) = v42;
  if (v43 != nullptr) {
    v44 = v43;
  }
  else {
    v44 = &GameData_1a9f09e;
  }
  v45 = GameRoutine_1a09c70(v44);
  if (v45 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v46 = (void*)v45;
  if (v45 >= 0x17) {
    if ((v45 | 7) == 0x17) {
      v48 = 26;
    }
    else {
      v48 = (v45 | 7) + 1;
    }
    v47 = (char*)fw_memory_HeapManager_Allocate(*v5, v48, 16, 0);
    v67_.v68 = v46;
    v67_.v69 = v47;
    v67_.v67 = v48 | 1;
    goto LABEL_55;
  }
  LOBYTE(v67_.v67) = 2 * v45;
  v47 = (char*)&v67_.v67 + 1;
  if (v45 != 0) {
  LABEL_55:
    GameRoutine_1a0b940(v47, v44, v46);
  }
  *((_BYTE*)v46 + (_QWORD)v47) = 0;
  v49 = (__int64*)(v6 + 848);
  if ((*(_BYTE*)(v6 + 848) & 1) != 0) {
    if ((v67_.v67 & 1) != 0) {
      v51 = v67_.v69;
    }
    else {
      v51 = (char*)&v67_.v67 + 1;
    }
    if ((v67_.v67 & 1) != 0) {
      v52 = (unsigned __int64)v67_.v68;
    }
    else {
      v52 = (unsigned __int64)(unsigned __int8)v67_.v67 >> 1;
    }
    SpineModel_64dde0(v49, (__int64)v51, v52);
    if ((v67_.v67 & 1) == 0) {
      goto LABEL_72;
    }
  }
  else {
    if ((v67_.v67 & 1) == 0) {
      v50 = v67_.v68;
      *v49 = v67_.v67;
      *(_QWORD*)(v6 + 856) = v50;
      *(_QWORD*)(v6 + 864) = v67_.v69;
      goto LABEL_72;
    }
    GameRoutine_64df20(v49, (__int64)v67_.v69, (unsigned __int64)v67_.v68);
  }
  if (v67_.v69 != nullptr) {
    v53 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v53);
  }
LABEL_72:
  v54 = (__int64*)(v6 + 824);
  v55 = (char*)fw_memory_HeapManager_Allocate(*v5, 32, 16, 0);
  v67_.v67 = 33;
  v67_.v68 = (__int128*)((char*)0x10LL + 8);
  v67_.v69 = v55;
  strcpy(v55, "MID_Sys_FreeAction_Start");
  v70_.v71 = &GameData_1a86f9b;
  v70_.v70 = game_HashString((__int64)&GameData_1a86f9b);
  if (game_GameModeData_instance_ != 0 &&
      (v56 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v70_.v70)) != 0 &&
      *(_DWORD*)(v56 + 32) != 0) {
    v57 = "MID_Sys_FinishPeriod_Start";
  }
  else {
    v70_.v71 = &GameData_1adfa87;
    v70_.v70 = game_HashString((__int64)&GameData_1adfa87);
    if (game_GameModeData_instance_ != 0 &&
        (v58 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v70_.v70)) != 0 &&
        *(_DWORD*)(v58 + 32) != 0) {
      v57 = "MID_Sys_HellGatePeriod_Start";
    }
    else {
      v70_.v71 = &GameData_1aa9d31;
      v70_.v70 = game_HashString((__int64)&GameData_1aa9d31);
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_85;
      }
      v59 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v70_.v70);
      if (v59 == 0 || *(_DWORD*)(v59 + 32) == 0) {
        goto LABEL_85;
      }
      v57 = "MID_Sys_SearchAction_Start";
    }
  }
  GameRoutine_60a020((__int64)&v67_.v67, (__int64)v57);
LABEL_85:
  if ((*(_BYTE*)v54 & 1) != 0) {
    if ((v67_.v67 & 1) != 0) {
      v61 = v67_.v69;
    }
    else {
      v61 = (char*)&v67_.v67 + 1;
    }
    if ((v67_.v67 & 1) != 0) {
      v62 = (unsigned __int64)v67_.v68;
    }
    else {
      v62 = (unsigned __int64)(unsigned __int8)v67_.v67 >> 1;
    }
    SpineModel_64dde0((__int64*)(v6 + 824), (__int64)v61, v62);
  }
  else if ((v67_.v67 & 1) != 0) {
    GameRoutine_64df20((_QWORD*)(v6 + 824), (__int64)v67_.v69,
                       (unsigned __int64)v67_.v68);
  }
  else {
    v60 = v67_.v68;
    *v54 = v67_.v67;
    *(_QWORD*)(v6 + 832) = v60;
    *(_QWORD*)(v6 + 840) = v67_.v69;
  }
  v70_.v71 = &GameData_1adfa87;
  v70_.v70 = game_HashString((__int64)&GameData_1adfa87);
  if (game_GameModeData_instance_ != 0 &&
      (v63 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v70_.v70)) != 0 &&
      *(_DWORD*)(v63 + 32) != 0) {
    Se_80e330(v6, (__int64)"SE_SYS_Telop_GateDestroyTime_In");
    v64 = "SE_SYS_Telop_GateDestroyTime_Out";
  }
  else {
    v65 = "SE_SYS_Telop_FreeTime_In";
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
      v65 = "SE_SYS_Telop_PrepareBattle_In";
    }
    Se_80e330(v6, (__int64)v65);
    v64 = "SE_SYS_Telop_FreeTime_Out";
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
      v64 = "SE_SYS_Telop_PrepareBattle_Out";
    }
  }
  GameRoutine_1378190(v6, (__int64)v64);
  if ((v67_.v67 & 1) != 0 && v67_.v69 != nullptr) {
    v66 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v66);
  }
  return v6;
}

#pragma GCC visibility pop
