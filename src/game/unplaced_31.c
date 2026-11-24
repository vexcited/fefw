#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_633980(_QWORD* result, __int64*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_87dcb0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void Character_cb17a0(PSEUDO_X8, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_632da0(PSEUDO_X8, __int64,
                                                   unsigned int);
__attribute__((swiftcall)) void LocatorDispos_db1ce0(PSEUDO_X8,
                                                     unsigned __int8* result);
__attribute__((swiftcall)) void Manager_d9bf20(PSEUDO_X8, __int64, const char*,
                                               unsigned __int64, __int64*);
__attribute__((swiftcall)) void game_e15460(PSEUDO_X8, unsigned __int64 result,
                                            __int64*);
__attribute__((swiftcall)) void game_e15680(PSEUDO_X8, unsigned __int64 result,
                                            __int64*);
__attribute__((swiftcall)) void game_e15880(PSEUDO_X8, __int64 result,
                                            __int64*);
__int64* GameRoutine_68bdf0(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64* GameRoutine_e07e20(unsigned __int8*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 BattleInfo_790680(__int64 result, __int64);
__int64 GameRoutine_1a09bf0(__int64, const char*, ...);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_631820(__int64);
__int64 GameRoutine_632cd0(__int64, __int64);
__int64 GameRoutine_790080(__int64);
__int64 GameRoutine_7992e0(__int64);
__int64 ProcCmdBtlSeqBattle_e6b430(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fs_635a60(__int64, __int64*, char, char, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_menu_anonymous_e98240(__int64, __int64);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD);
__int64 nn_os_AcquireWriteLock(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_ReleaseWriteLock(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__n128 BattleArea_8b9d00(__int64);
char* GameRoutine_60a020(char*, const char*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6150;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6140;
extern __int64 (*GameData_1fe2cf0[7])();
extern __int64 (*GameData_1fe2d38[])();
extern __int64 (*GameData_1fe74d0[])();
extern __int64 (*GameData_2003d60[])();
extern __int64 (*GameData_2003de0[])();
extern __int64 (*GameData_20167d0[])();
extern __int64 (*GameData_202f498[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d258[2];
extern __int64* GameData_212da50[3];
extern __int64* GameData_212e348;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d238[2];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212f5c8[2];
extern __int64 GameData_21f3d08;
extern __int64 GameData_22127a8;
extern __int64 fw_memory_g_heap_manager_ptr;
float GameRoutine_d90d90(__int64, __int64);
void BattleSide_Destructor(_QWORD*);
void GameRoutine_6b7aa0(__int64, __int64*, __int64*, unsigned __int64);
void GameRoutine_d69060(__int64*);
void GameRoutine_d90ae0(__int64, __int64*);
void ProcCmdBtlSeqBattle_e6b8f0(__int64, unsigned __int8, __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void game_map_790ba0(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void util_cb2640(__int64**);
void game_dbced0(__int64* a1, unsigned __int8* a2);
__int64* game_e08ca0(__int64 a1, __int64 a2);
__int64 game_e149a0(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 game_e6a9b0(__int64 result);
void game_1046180(_QWORD* a1);
__int64 game_11c3400(__int64 a1, __int64 a2);
__int64 game_136a4c0(__int64 a1, __int64 a2);

void game_dbced0(__int64* a1, unsigned __int8* a2)
{
  unsigned __int64 v3;
  char* v4;
  unsigned __int64 v5;
  __int64* v6;
  char v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    unsigned __int64 v15;
    char* v16;
    __int64 v17;
    unsigned __int64 v18;
    char* v19;
  } f_;

  LocatorDispos_db1ce0((void*)((unsigned __int8*)&f_.v14), a2);
  if (a1 == &f_.v14) {
    goto LABEL_24;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    if ((f_.v14 & 1) != 0) {
      v4 = f_.v16;
    }
    else {
      v4 = (char*)&f_.v14 + 1;
    }
    if ((f_.v14 & 1) != 0) {
      v5 = f_.v15;
    }
    else {
      v5 = (unsigned __int64)(unsigned __int8)f_.v14 >> 1;
    }
    SpineModel_64dde0(a1, (__int64)v4, v5);
  }
  else if ((f_.v14 & 1) != 0) {
    GameRoutine_64df20(a1, (__int64)f_.v16, f_.v15);
  }
  else {
    v3 = f_.v15;
    *a1 = f_.v14;
    a1[1] = v3;
    a1[2] = (__int64)f_.v16;
  }
  v7 = *((_BYTE*)a1 + 24);
  v6 = a1 + 3;
  if ((v7 & 1) != 0) {
    if ((f_.v17 & 1) != 0) {
      v10 = f_.v19;
    }
    else {
      v10 = (char*)&f_.v17 + 1;
    }
    if ((f_.v17 & 1) != 0) {
      v11 = f_.v18;
    }
    else {
      v11 = (unsigned __int64)(unsigned __int8)f_.v17 >> 1;
    }
    SpineModel_64dde0(v6, (__int64)v10, v11);
  LABEL_24:
    if ((f_.v17 & 1) == 0) {
      goto LABEL_29;
    }
    goto LABEL_25;
  }
  if ((f_.v17 & 1) != 0) {
    GameRoutine_64df20(v6, (__int64)f_.v19, f_.v18);
    if ((f_.v17 & 1) == 0) {
      goto LABEL_29;
    }
  }
  else {
    v8 = f_.v18;
    v9 = (__int64)f_.v19;
    *v6 = f_.v17;
    v6[1] = v8;
    v6[2] = v9;
    if ((f_.v17 & 1) == 0) {
      goto LABEL_29;
    }
  }
LABEL_25:
  if (f_.v19 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  (__int64)f_.v19);
  }
LABEL_29:
  if ((f_.v14 & 1) != 0 && f_.v16 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  (__int64)f_.v16);
  }
}

__int64* game_e08ca0(__int64 a1, __int64 a2)
{
  __int64* result;
  __int128 v5;
  __int128* v6;
  __int128 v7;
  __int128* v8;
  __int128 v9;
  __int128* v10;
  int v11;
  __int128 v12;
  __int128* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int8* v30;
  unsigned __int64 v31;
  unsigned __int8* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  unsigned __int64 v39;
  char v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  struct {
    char gap0_[8];
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int128 v48;
    __int64 v49;
  } f_;

  *(_QWORD*)a1 = *(_QWORD*)(a2 + 72);
  result = *(__int64**)(a2 + 736);
  if (result != nullptr &&
      (result = X8CALL_X0(
           _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, void*))(
                        *result + 24))((void*)&f_.v48, (void*)result)),
       (f_.v49 & 1) != 0)) {
    v5 = f_.v48;
  }
  else {
    if ((*(_BYTE*)(a2 + 976) & 1) != 0) {
      v6 = (__int128*)(a2 + 960);
    }
    else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                   memory_order_acquire) &
              1) != 0) {
      v6 = &GameData_21a6120;
    }
    else {
      result = (__int64*)__cxa_guard_acquire(&GameData_21a6130);
      v6 = &GameData_21a6120;
      if ((_DWORD)result != 0) {
        v44 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v44;
        result = (__int64*)__cxa_guard_release(&GameData_21a6130);
      }
    }
    v5 = *v6;
  }
  *(_QWORD*)(a1 + 16) = v5;
  v7 = *(_OWORD*)(a1 + 16);
  *((_QWORD*)&v7 + 1) = DWORD2(v5);
  *(_OWORD*)(a1 + 16) = v7;
  if ((*(_BYTE*)(a2 + 1008) & 1) != 0) {
    v8 = (__int128*)(a2 + 992);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v8 = &GameData_21a6120;
  }
  else {
    result = (__int64*)__cxa_guard_acquire(&GameData_21a6130);
    v8 = &GameData_21a6120;
    if ((_DWORD)result != 0) {
      v42 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v42;
      result = (__int64*)__cxa_guard_release(&GameData_21a6130);
    }
  }
  *(_DWORD*)(a1 + 32) = *(_DWORD*)v8;
  *(_DWORD*)(a1 + 36) = *((_DWORD*)v8 + 1);
  v9 = *(_OWORD*)(a1 + 32);
  *((_QWORD*)&v9 + 1) = *((unsigned int*)v8 + 2);
  *(_OWORD*)(a1 + 32) = v9;
  if ((*(_BYTE*)(a2 + 1040) & 1) != 0) {
    v10 = (__int128*)(a2 + 1024);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6150,
                                 memory_order_acquire) &
            1) != 0) {
    v10 = &GameData_21a6140;
  }
  else {
    result = (__int64*)__cxa_guard_acquire(&GameData_21a6150);
    v10 = &GameData_21a6140;
    if ((_DWORD)result != 0) {
      v43 = *((_QWORD*)GameData_212c548 + 1);
      *(_QWORD*)&GameData_21a6140 = *(_QWORD*)GameData_212c548;
      *((_QWORD*)&GameData_21a6140 + 1) = v43;
      result = (__int64*)__cxa_guard_release(&GameData_21a6150);
    }
  }
  v11 = *(_DWORD*)v10;
  f_.v49 = 0;
  f_.v48 = (__typeof__(f_.v48)){0};
  *(_DWORD*)(a1 + 48) = v11;
  *(_DWORD*)(a1 + 52) = *((_DWORD*)v10 + 1);
  v12 = *(_OWORD*)(a1 + 48);
  v13 = (__int128*)(a2 + 920);
  *((_QWORD*)&v12 + 1) = *((unsigned int*)v10 + 2);
  *(_OWORD*)(a1 + 48) = v12;
  v14 = *(unsigned __int8*)(a2 + 920);
  v15 = v14 >> 1;
  if ((v14 & 1) != 0) {
    v15 = *(_QWORD*)(a2 + 928);
  }
  if (&f_.v48 == v13 || v15 == 0) {
    if (v15 != 0) {
      goto LABEL_27;
    }
    if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
      **(_BYTE**)(a1 + 80) = 0;
      *(_QWORD*)(a1 + 72) = 0;
    }
    else {
      *(_WORD*)(a1 + 64) = 0;
    }
    v40 = *(_BYTE*)(a1 + 96);
    *(_BYTE*)(a1 + 88) = 0;
    if ((v40 & 1) != 0) {
      **(_BYTE**)(a1 + 112) = 0;
      *(_QWORD*)(a1 + 104) = 0;
      if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
        goto LABEL_73;
      }
    }
    else {
      *(_WORD*)(a1 + 96) = 0;
      if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
      LABEL_73:
        **(_BYTE**)(a1 + 136) = 0;
        *(_QWORD*)(a1 + 128) = 0;
        goto LABEL_74;
      }
    }
    *(_WORD*)(a1 + 120) = 0;
    if ((f_.v48 & 1) == 0) {
      return result;
    }
    goto LABEL_75;
  }
  if ((v14 & 1) != 0) {
    GameRoutine_64df20(&f_.v48, *(_QWORD*)(a2 + 936), *(_QWORD*)(a2 + 928));
  }
  else {
    v16 = *(_QWORD*)v13;
    v17 = *(_QWORD*)(a2 + 928);
    v18 = *(_QWORD*)(a2 + 936);
    *(_QWORD*)&f_.v48 = v16;
    *((_QWORD*)&f_.v48 + 1) = v17;
    f_.v49 = v18;
  }
LABEL_27:
  v19 = (unsigned __int8*)(a2 + 128);
  v20 = (__int64*)(a1 + 64);
  if (a1 + 64 != a2 + 128) {
    v21 = *v19;
    if ((*(_BYTE*)v20 & 1) != 0) {
      if ((v21 & 1) != 0) {
        v24 = *(_QWORD*)(a2 + 144);
      }
      else {
        v24 = a2 + 129;
      }
      if ((v21 & 1) != 0) {
        v25 = *(_QWORD*)(a2 + 136);
      }
      else {
        v25 = v21 >> 1;
      }
      SpineModel_64dde0(v20, v24, v25);
    }
    else if ((v21 & 1) != 0) {
      GameRoutine_64df20(v20, *(_QWORD*)(a2 + 144), *(_QWORD*)(a2 + 136));
    }
    else {
      v22 = *(_QWORD*)v19;
      v23 = *(_QWORD*)(a2 + 144);
      *(_QWORD*)(a1 + 72) = *(_QWORD*)(a2 + 136);
      *(_QWORD*)(a1 + 80) = v23;
      *v20 = v22;
    }
  }
  v26 = *(_DWORD*)(a2 + 216);
  f_.v46 = 0;
  f_.v47 = 0;
  f_.v45 = 0;
  *(_BYTE*)(a1 + 88) = v26;
  v27 = *(_QWORD*)(a2 + 224);
  if (*(_QWORD*)(a2 + 232) != v27) {
    v28 = 0;
    v29 = 0;
    do {
      v30 = (unsigned __int8*)(v27 + v28);
      v31 = *v30;
      if ((v31 & 1) != 0) {
        v32 = *((unsigned __int8**)v30 + 2);
      }
      else {
        v32 = v30 + 1;
      }
      if ((v31 & 1) != 0) {
        v33 = *((_QWORD*)v30 + 1);
      }
      else {
        v33 = v31 >> 1;
      }
      GameRoutine_1a09ce0(&f_.v45, v32, v33);
      v27 = *(_QWORD*)(a2 + 224);
      v34 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a2 + 232) - v27) >> 3);
      if (v29 != v34 - 1) {
        GameRoutine_1a09ce0(&f_.v45, ",", 1);
        v27 = *(_QWORD*)(a2 + 224);
        v34 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a2 + 232) - v27) >> 3);
      }
      ++v29;
      v28 += 24;
    } while (v34 > v29);
  }
  if ((*(_BYTE*)(a1 + 96) & 1) != 0 && *(_QWORD*)(a1 + 112) != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v35);
  }
  v36 = f_.v46;
  result = (__int64*)(a1 + 120);
  *(_QWORD*)(a1 + 96) = f_.v45;
  *(_QWORD*)(a1 + 104) = v36;
  *(_QWORD*)(a1 + 112) = f_.v47;
  if ((__int128*)(a1 + 120) == &f_.v48) {
  LABEL_74:
    if ((f_.v48 & 1) == 0) {
      return result;
    }
    goto LABEL_75;
  }
  if ((*(_BYTE*)result & 1) != 0) {
    if ((f_.v48 & 1) != 0) {
      v38 = (char*)f_.v49;
    }
    else {
      v38 = (char*)&f_.v48 + 1;
    }
    if ((f_.v48 & 1) != 0) {
      v39 = *((_QWORD*)&f_.v48 + 1);
    }
    else {
      v39 = (unsigned __int64)(unsigned __int8)f_.v48 >> 1;
    }
    result = SpineModel_64dde0(result, (__int64)v38, v39);
    if ((f_.v48 & 1) == 0) {
      return result;
    }
  }
  else if ((f_.v48 & 1) != 0) {
    result =
        GameRoutine_64df20(result, f_.v49, *((unsigned __int64*)&f_.v48 + 1));
    if ((f_.v48 & 1) == 0) {
      return result;
    }
  }
  else {
    v37 = *((_QWORD*)&f_.v48 + 1);
    *result = f_.v48;
    *(_QWORD*)(a1 + 128) = v37;
    *(_QWORD*)(a1 + 136) = f_.v49;
    if ((f_.v48 & 1) == 0) {
      return result;
    }
  }
LABEL_75:
  if (f_.v49 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
  }
  return result;
}

__int64 game_e149a0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  bool v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  bool v34;
  unsigned __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64** v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int128 v55;
  unsigned __int64 v56;
  __int64 v57;
  char* v58;
  char* v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  struct {
    int v72;
    char v73;
    char gap5_[3];
    __int64 v74;
    unsigned __int64 v75;
    __int64* v76;
    __int64 v77;
    unsigned __int64 v78;
    __int64 v79;
    char gap56_[8];
    __int128 v80;
    char gap80_[8];
    int v81;
    char gap92_[4];
    __int64 v82;
    unsigned __int64 v83;
    __int64* v84;
    char v85;
    char gap121_[7];
    int v86;
    char gap132_[4];
    char v87;
    char gap137_[7];
    unsigned __int64 v88;
    __int64 v89;
    char v90;
    char gap161_[7];
    int v91;
    char gap172_[4];
    char v92;
    char gap177_[7];
    unsigned __int64 v93;
    __int64 v94;
    char v95;
    char gap201_[7];
    __int64* v96;
    unsigned __int64 v97;
    unsigned __int64 v98;
    unsigned __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
  } f_;

  GameRoutine_60a060((char*)(a1 + 736), a2, a3);
  v4 = (_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v5 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v5 = 0;
  }
  if (GameData_22127a8 != 0) {
    v6 = GameData_22127a8;
  }
  else {
    v6 = v5;
  }
  v7 = *(unsigned __int8*)(a1 + 168);
  v8 = (v7 & 1) == 0;
  v9 = v7 >> 1;
  if (v8) {
    v10 = (const char*)(a1 + 169);
  }
  else {
    v10 = *(const char**)(a1 + 184);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *(_QWORD*)(a1 + 176);
  }
  Manager_d9bf20((void*)(&f_.v96), v6, v10, v11, (__int64*)(a1 + 192));
  GameRoutine_d90ae0(a1 + 504, (__int64*)&f_.v96);
  if ((unsigned __int8)f_.v104 == 1) {
    v12 = f_.v101;
    if (f_.v101 != 0) {
      v13 = f_.v102;
      if (f_.v101 == f_.v102) {
        goto LABEL_21;
      }
      do {
        v14 = *(unsigned int*)(v13 - 8);
        v15 = v13 - 32;
        if ((_DWORD)v14 != -1) {
          ((void (*)(int*, __int64))GameData_1fe2cf0[v14])(&f_.v72, v13 - 32);
        }
        *(_DWORD*)(v13 - 8) = -1;
        v13 -= 32;
      } while (v15 != v12);
      f_.v102 = v12;
      v12 = f_.v101;
      if (f_.v101 != 0) {
      LABEL_21:
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v12);
      }
    }
    if ((f_.v98 & 1) != 0 && f_.v100 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, f_.v100);
    }
  }
  if (*v4 != 0) {
    v18 = *v4 + 248LL;
  }
  else {
    v18 = 0;
  }
  if (GameData_22127a8 != 0) {
    v19 = GameData_22127a8;
  }
  else {
    v19 = v18;
  }
  v20 = *(unsigned __int8*)(a1 + 216);
  v21 = (v20 & 1) == 0;
  v22 = v20 >> 1;
  if (v21) {
    v23 = (const char*)(a1 + 217);
  }
  else {
    v23 = *(const char**)(a1 + 232);
  }
  if (v21) {
    v24 = v22;
  }
  else {
    v24 = *(_QWORD*)(a1 + 224);
  }
  Manager_d9bf20((void*)(&f_.v96), v19, v23, v24, (__int64*)(a1 + 240));
  GameRoutine_d90ae0(a1 + 576, (__int64*)&f_.v96);
  if ((unsigned __int8)f_.v104 == 1) {
    v25 = f_.v101;
    if (f_.v101 != 0) {
      v26 = f_.v102;
      if (f_.v101 == f_.v102) {
        goto LABEL_49;
      }
      do {
        v27 = *(unsigned int*)(v26 - 8);
        v28 = v26 - 32;
        if ((_DWORD)v27 != -1) {
          ((void (*)(int*, __int64))GameData_1fe2cf0[v27])(&f_.v72, v26 - 32);
        }
        *(_DWORD*)(v26 - 8) = -1;
        v26 -= 32;
      } while (v28 != v25);
      f_.v102 = v25;
      v25 = f_.v101;
      if (f_.v101 != 0) {
      LABEL_49:
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v25);
      }
    }
    if ((f_.v98 & 1) != 0 && f_.v100 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, f_.v100);
    }
  }
  if (*v4 != 0) {
    v31 = *v4 + 248LL;
  }
  else {
    v31 = 0;
  }
  if (GameData_22127a8 != 0) {
    v32 = GameData_22127a8;
  }
  else {
    v32 = v31;
  }
  v33 = *(unsigned __int8*)(a1 + 264);
  v34 = (v33 & 1) == 0;
  v35 = v33 >> 1;
  if (v34) {
    v36 = (const char*)(a1 + 265);
  }
  else {
    v36 = *(const char**)(a1 + 280);
  }
  if (v34) {
    v37 = v35;
  }
  else {
    v37 = *(_QWORD*)(a1 + 272);
  }
  Manager_d9bf20((void*)(&f_.v96), v32, v36, v37, (__int64*)(a1 + 288));
  GameRoutine_d90ae0(a1 + 648, (__int64*)&f_.v96);
  if ((unsigned __int8)f_.v104 == 1) {
    v38 = f_.v101;
    if (f_.v101 != 0) {
      v39 = f_.v102;
      if (f_.v101 == f_.v102) {
        goto LABEL_77;
      }
      do {
        v40 = *(unsigned int*)(v39 - 8);
        v41 = v39 - 32;
        if ((_DWORD)v40 != -1) {
          ((void (*)(int*, __int64))GameData_1fe2cf0[v40])(&f_.v72, v39 - 32);
        }
        *(_DWORD*)(v39 - 8) = -1;
        v39 -= 32;
      } while (v41 != v38);
      f_.v102 = v38;
      v38 = f_.v101;
      if (f_.v101 != 0) {
      LABEL_77:
        v42 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v42 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v38);
      }
    }
    if ((f_.v98 & 1) != 0 && f_.v100 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, f_.v100);
    }
  }
  GameRoutine_e07e20((unsigned __int8*)a1);
  v44 = &f_.v96;
  game_e15460((void*)((__int64)&f_.v96), a1 + 312, (__int64*)(a1 + 336));
  if ((unsigned __int8)f_.v100 == 1) {
    f_.v81 = (int)f_.v96;
    if ((f_.v97 & 1) != 0) {
      v45 = f_.v98;
      v46 = f_.v99;
      goto LABEL_99;
    }
  LABEL_96:
    v47 = (unsigned __int64)v44[2];
    f_.v82 = (__int64)v44[1];
    f_.v83 = v47;
    f_.v84 = v44[3];
    f_.v85 = 1;
    goto LABEL_103;
  }
  v44 = (__int64**)&f_.v72;
  game_e15460((void*)((__int64)&f_.v72), a1 + 360, (__int64*)(a1 + 384));
  if ((unsigned __int8)f_.v77 == 1) {
    f_.v81 = f_.v72;
    if ((f_.v74 & 1) == 0) {
      goto LABEL_96;
    }
    v45 = f_.v75;
    v46 = (__int64)f_.v76;
  }
  else {
    v44 = (__int64**)&f_.v91;
    game_e15680((void*)((__int64)&f_.v91), a1 + 408, (__int64*)(a1 + 432));
    if (f_.v95 == 1) {
      f_.v81 = f_.v91;
      if ((f_.v92 & 1) == 0) {
        goto LABEL_96;
      }
      v45 = f_.v93;
      v46 = f_.v94;
    }
    else {
      v44 = (__int64**)&f_.v86;
      game_e15680((void*)((__int64)&f_.v86), a1 + 456, (__int64*)(a1 + 480));
      if (f_.v90 != 1) {
        LOBYTE(f_.v81) = 0;
        f_.v85 = 0;
        goto LABEL_103;
      }
      f_.v81 = f_.v86;
      if ((f_.v87 & 1) == 0) {
        goto LABEL_96;
      }
      v45 = f_.v88;
      v46 = f_.v89;
    }
  }
LABEL_99:
  fw_text_String_CopyTerminated(&f_.v82, v46, v45);
  f_.v85 = 1;
  if (v46 != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                                  v46);
  }
LABEL_103:
  game_e15880((void*)((__int64)&f_.v96), a1 + 312, (__int64*)(a1 + 336));
  game_e15880((void*)((__int64)&f_.v72), a1 + 360, (__int64*)(a1 + 384));
  if (BYTE4(f_.v96) == 1) {
    v49 = (int)f_.v96;
    if ((f_.v73 & 1) == 0) {
      goto LABEL_109;
    }
    goto LABEL_108;
  }
  if (f_.v73 == 1) {
    v49 = 0;
  LABEL_108:
    v49 |= f_.v72;
  LABEL_109:
    v50 = 1;
  LABEL_110:
    v51 = fw_memory_g_heap_manager_ptr;
    v52 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
    v53 = *(_QWORD*)(a1 + 728);
    v52[1] = 0;
    v52[2] = 0;
    v52[5] = 0;
    v52[6] = 0;
    v52[7] = 0;
    v52[8] = 0;
    v52[9] = 0;
    v52[10] = 0;
    v52[11] = 0;
    v52[12] = 0;
    v52[13] = 0;
    v52[14] = 0;
    v52[15] = 0;
    v52[16] = 0;
    v52[17] = 0;
    *(_QWORD*)(a1 + 728) = v52;
    *v52 = GameData_1fe2d38;
    v52[4] = 0;
    *(_QWORD*)(a1 + 720) = v52 + 4;
    if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
      std___1___shared_weak_count___release_weak(v53);
    }
    if (f_.v85 != 1) {
      goto LABEL_147;
    }
    f_.v80 = (__typeof__(f_.v80)){0};
    f_.v74 = 0;
    f_.v75 = 0;
    f_.v76 = nullptr;
    f_.v77 = 0;
    f_.v78 = 0;
    f_.v79 = 0;
    f_.v72 = f_.v81;
    if ((f_.v82 & 1) != 0) {
      GameRoutine_64df20(&f_.v74, (__int64)f_.v84, f_.v83);
    }
    else {
      f_.v74 = f_.v82;
      f_.v75 = f_.v83;
      f_.v76 = f_.v84;
    }
    v54 = *(_QWORD*)(a1 + 120);
    *(_QWORD*)&f_.v80 = *(_QWORD*)(a1 + 140);
    *(_QWORD*)&v55 = f_.v80;
    v56 = *(unsigned __int8*)(a1 + 112);
    if ((v56 & 1) == 0) {
      v54 = v56 >> 1;
    }
    *((_QWORD*)&v55 + 1) = *(unsigned int*)(a1 + 148);
    f_.v80 = v55;
    if (v54 != 0) {
      f_.v101 = -1;
      f_.v102 = -1;
      f_.v103 = -1;
      f_.v104 = -1;
      f_.v105 = -1;
      f_.v106 = -1;
      v57 = *msg_MessageManager_instance__ptr[0];
      if ((v56 & 1) != 0) {
        v58 = *(const char**)(a1 + 128);
      }
      else {
        v58 = (const char*)(a1 + 113);
      }
      f_.v107 = -1;
      f_.v108 = -1;
      f_.v109 = -1;
      f_.v110 = -1;
      f_.v111 = -1;
      f_.v112 = -1;
      f_.v96 = GameData_212e348 + 2;
      f_.v97 = 0xFFFF0001FFFF0000LL;
      f_.v98 = 0xFFFF0004FFFF0002LL;
      f_.v99 = 0xFFFF0006FFFF0005LL;
      f_.v113 = 8;
      f_.v100 = 0xFFFF0008FFFF0007LL;
      v59 = GameRoutine_a4dbe0(v57, v58, 0);
      GameRoutine_60a020((char*)&f_.v77, v59);
    }
    v60 = *(_QWORD*)(a1 + 720);
    if (*(_BYTE*)(v60 + 80) == 1) {
      GameRoutine_d90d90(*(_QWORD*)(a1 + 720), (__int64)&f_.v72);
      if ((f_.v77 & 1) == 0) {
        goto LABEL_142;
      }
      goto LABEL_138;
    }
    *(_DWORD*)v60 = f_.v72;
    v61 = (__int64*)(v60 + 8);
    if ((f_.v74 & 1) != 0) {
      fw_text_String_CopyTerminated(v61, (__int64)f_.v76, f_.v75);
      if ((f_.v77 & 1) != 0) {
        goto LABEL_131;
      }
    }
    else {
      v62 = f_.v74;
      v63 = (__int64)f_.v76;
      *(_QWORD*)(v60 + 16) = f_.v75;
      *(_QWORD*)(v60 + 24) = v63;
      *v61 = v62;
      if ((f_.v77 & 1) != 0) {
      LABEL_131:
        fw_text_String_CopyTerminated((__int64*)(v60 + 32), f_.v79, f_.v78);
        goto LABEL_137;
      }
    }
    *(_QWORD*)(v60 + 40) = f_.v78;
    v65 = f_.v77;
    *(_QWORD*)(v60 + 48) = f_.v79;
    *(_QWORD*)(v60 + 32) = v65;
  LABEL_137:
    *(_OWORD*)(v60 + 64) = f_.v80;
    *(_BYTE*)(v60 + 80) = 1;
    if ((f_.v77 & 1) == 0) {
    LABEL_142:
      if ((f_.v74 & 1) != 0 && f_.v76 != nullptr) {
        v67 = 128;
        if (*(_QWORD*)(*(_QWORD*)v51 + 200LL) == 0) {
          v67 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v51 + v67, (__int64)f_.v76);
      }
    LABEL_147:
      if (v50 != 0) {
        v68 = *(_QWORD*)(a1 + 720);
        if ((*(_BYTE*)(v68 + 100) & 1) == 0) {
          *(_BYTE*)(v68 + 100) = 1;
        }
        *(_DWORD*)(v68 + 96) = v49;
      }
      goto LABEL_151;
    }
  LABEL_138:
    if (f_.v79 != 0) {
      v66 = 128;
      if (*(_QWORD*)(*(_QWORD*)v51 + 200LL) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v51 + v66, f_.v79);
    }
    goto LABEL_142;
  }
  if (f_.v85 == 1) {
    v50 = 0;
    v49 = 0;
    goto LABEL_110;
  }
  v64 = *(_QWORD*)(a1 + 728);
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  if (v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
    std___1___shared_weak_count___release_weak(v64);
  }
LABEL_151:
  if (f_.v85 == 1 && (f_.v82 & 1) != 0 && f_.v84 != nullptr) {
    v69 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v69,
                                  (__int64)f_.v84);
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v70 = *(_QWORD*)(a1 + 80);
  }
  else {
    v70 = a1 + 65;
  }
  return GameRoutine_1a09bf0(a1 + 760, "AreaErace-%s", v70);
}

__int64 game_e6a9b0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
    char gap40_[784];
    _QWORD v32[3];
    __int64 v33;
    char gap856_[10488];
    __int64* v39;
    __int64 v40;
  } f_;
  struct {
    _QWORD v22[2];
    _QWORD v23[5];
  } v22_;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  struct {
    _QWORD v34[95];
    _QWORD v35[1120];
  } v34_;
  int v36;
  __int16 v37;
  _QWORD v38[2];

  if (*(_QWORD*)(result + 160) == 0) {
    return result;
  }
  v1 = result;
  f_.v20[0] = GameData_1fe74d0;
  f_.v20[1] = result;
  f_.v21 = f_.v20;
  ProcCmdBtlSeqBattle_e6b8f0(result, 0, (__int64)f_.v20);
  ProcCmdBtlSeqBattle_e6b8f0(v1, 2u, (__int64)f_.v20);
  v2 = *(_QWORD*)(v1 + 160);
  v3 = *(_QWORD*)(v2 + 800);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v2 + 40);
    if (v4 != 0) {
      v5 = *(_QWORD*)(v2 + 72);
      GameRoutine_790080((__int64)v22_.v22);
      v6 = *(_DWORD*)(v2 + 56);
      v22_.v22[0] = GameData_212f5c8[0] + 16;
      if (HIBYTE(v37) != 0) {
        GameRoutine_7992e0((__int64)v22_.v23);
        GameRoutine_7992e0((__int64)f_.v32);
        GameRoutine_7992e0((__int64)v34_.v34);
        GameRoutine_7992e0((__int64)v34_.v35);
        v36 = 0;
        v37 = 0;
        v38[0] = 0;
        *(_QWORD*)((char*)v38 + 6) = 0;
        BattleArea_8b9d00((__int64)&f_.v39);
      }
      v7 = *(char*)(v4 + 584);
      v8 = *(char*)(v4 + 585);
      v9 = *(_DWORD*)(v4 + 592);
      v22_.v23[3] = v4;
      v24 = v6;
      v28 = v8;
      v29 = v7;
      v30 = v8;
      v31 = v9;
      v27 = v7;
      BattleInfo_790680((__int64)v22_.v22, v3);
      if (HIBYTE(v37) != 0) {
        GameRoutine_7992e0((__int64)v22_.v23);
        GameRoutine_7992e0((__int64)f_.v32);
        GameRoutine_7992e0((__int64)v34_.v34);
        GameRoutine_7992e0((__int64)v34_.v35);
        v36 = 0;
        v37 = 0;
        v38[0] = 0;
        *(_QWORD*)((char*)v38 + 6) = 0;
        BattleArea_8b9d00((__int64)&f_.v39);
      }
      v26 = v5;
      if (v5 != 0) {
        v10 = *(_QWORD*)(v5 + 576);
        if (v10 != 0) {
          v25 = 0;
          v11 = *(unsigned __int16*)(v10 + 16);
          DWORDn(v25, sizeof(v25) / 4 - 1) = 1;
          LOWORD(v25) = v11;
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v11) +
                        73LL) == 17) {
            nn_os_LockMutex((__int64)&game_g_random_mutex);
            v12 = game_map_MapRandom_instance__ptr[0];
            v13 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v15 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v12 + 1) = v13;
            v16 = (v15 >> 8) ^ (v14 >> 19) ^ v15 ^ v14;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = v14;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4) = v16;
            nn_os_UnlockMutex((__int64)&game_g_random_mutex);
            DWORDn(v25, sizeof(v25) / 4 - 1) =
                DWORDn(v25, sizeof(v25) / 4 - 1) & 0xFFFFC00F |
                (16 *
                 (((16 * (v16 - 1000 * ((v16 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                   4) &
                  0x3FF));
          }
        }
      }
      LODWORD(v38[0]) |= 0x8000u;
      game_map_790ba0((__int64)v22_.v22);
      HIBYTE(v37) |= 1u;
      if (f_.v33 == 0) {
        goto LABEL_21;
      }
      v17 = (unsigned __int16)ProcCmdBtlSeqBattle_e6b430(v1);
      if (v17 >= 0x100) {
        if (f_.v33 != 0 && (v18 = *(_QWORD*)(f_.v33 + 440)) != 0) {
          if (*(unsigned __int8*)(v18 + 16) == (unsigned __int8)v17) {
            goto LABEL_21;
          }
        }
        else if ((unsigned __int8)v17 == 9) {
        LABEL_21:
          v22_.v22[0] = GameData_212d238[0] + 16;
          f_.v39 = GameData_212da50[0] + 2;
          if (f_.v40 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)f_.v40 + 8LL))(f_.v40);
            f_.v40 = 0;
          }
          v22_.v22[1] = GameData_212d258[0] + 2;
          BattleSide_Destructor(v34_.v35);
          BattleSide_Destructor(v34_.v34);
          BattleSide_Destructor(f_.v32);
          BattleSide_Destructor(v22_.v23);
          goto LABEL_24;
        }
      }
      if (f_.v21 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, _QWORD*))(*f_.v21 + 48LL))(f_.v21, f_.v32);
      goto LABEL_21;
    }
  }
LABEL_24:
  result = (__int64)f_.v21;
  if (f_.v21 == f_.v20) {
    v19 = 32;
  }
  else {
    if (f_.v21 == nullptr) {
      return result;
    }
    v19 = 40;
  }
  return (*(__int64 (**)(__int64))(*f_.v21 + v19))((__int64)f_.v21);
}

void game_1046180(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    char gap0_[8];
    __int64 v25;
    __int64 v26;
    __int64 v27;
    _QWORD v28[4];
    _QWORD* v29;
    char gap72_[8];
    __int64 v30[2];
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    _QWORD v35[4];
    _QWORD* v36;
    char gap168_[8];
    char v37;
    char gap177_[7];
    __int64 v38;
    __int64 (**v39)();
    __int64 v40;
    __int64 v41;
    char gap216_[8];
    __int64** v42;
  } f_;
  __int64** v43;

  v2 = a1[20];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = v3;
      v5 = (_QWORD*)a1[19];
      if (v5 == nullptr) {
      LABEL_53:
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v4);
        }
        return;
      }
      f_.v37 = 0;
      f_.v38 = 0;
      f_.v26 = 0;
      f_.v27 = 0;
      f_.v29 = nullptr;
      f_.v30[0] = 0;
      f_.v30[1] = 0;
      f_.v31 = 0;
      f_.v32 = 0;
      f_.v33 = 0;
      f_.v34 = 0;
      f_.v36 = nullptr;
      v24 = v5[2];
      f_.v25 = 0;
      Character_cb17a0((void*)((__int64*)&f_.v39), v5);
      GameRoutine_d69060(f_.v30);
      v6 = (__int64*)f_.v39;
      f_.v39 = nullptr;
      v43 = (__int64**)&f_.v39;
      f_.v30[0] = (__int64)v6;
      f_.v30[1] = f_.v40;
      v7 = f_.v41;
      f_.v40 = 0;
      f_.v41 = 0;
      f_.v31 = v7;
      util_cb2640((__int64**)&v43);
      v9 = a1[19];
      v8 = a1[20];
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
      }
      f_.v41 = v8;
      f_.v42 = (__int64**)&f_.v39;
      f_.v39 = GameData_2003d60;
      f_.v40 = v9;
      GameRoutine_87dcb0(&f_.v39, f_.v35);
      if (f_.v42 == (__int64**)&f_.v39) {
        v10 = 4;
      }
      else {
        if (f_.v42 == nullptr) {
          goto LABEL_11;
        }
        v10 = 5;
      }
      ((void (*)(__int64**))(*f_.v42)[v10])(f_.v42);
    LABEL_11:
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
      }
      f_.v41 = v8;
      f_.v39 = GameData_2003de0;
      f_.v40 = v9;
      f_.v42 = (__int64**)&f_.v39;
      GameRoutine_654050(&f_.v39, f_.v28);
      if (f_.v42 == (__int64**)&f_.v39) {
        v11 = 4;
      }
      else {
        if (f_.v42 == nullptr) {
        LABEL_18:
          if (*(_BYTE*)(GameData_21f3d08 + 96) == 1 &&
              &f_.v32 != (__int64*)(GameData_21f3d08 + 72)) {
            GameRoutine_6b7aa0(
                (__int64)&f_.v32, *(__int64**)(GameData_21f3d08 + 72),
                *(__int64**)(GameData_21f3d08 + 80),
                0xAAAAAAAAAAAAAAABLL *
                    ((__int64)(*(_QWORD*)(GameData_21f3d08 + 80) -
                               *(_QWORD*)(GameData_21f3d08 + 72)) >>
                     3));
          }
          if (&f_.v25 != a1 + 21) {
            GameRoutine_68bdf0(&f_.v25, a1[21], a1[22],
                               (__int64)(a1[22] - a1[21]) >> 3);
          }
          game_menu_anonymous_e98240((__int64)a1, (__int64)&v24);
          if (v8 != 0) {
            std___1___shared_weak_count___release_weak(v8);
          }
          if (f_.v36 == f_.v35) {
            v12 = 32;
          }
          else {
            if (f_.v36 == nullptr) {
            LABEL_30:
              v13 = f_.v32;
              v14 = fw_memory_g_heap_manager_ptr;
              if (f_.v32 != 0) {
                v15 = f_.v33;
                if (f_.v32 == f_.v33) {
                  goto LABEL_41;
                }
                v16 = f_.v33;
                do {
                  v17 = *(_BYTE*)(v16 - 24);
                  v16 -= 24;
                  if ((v17 & 1) != 0) {
                    v18 = *(_QWORD*)(v15 - 8);
                    if (v18 != 0) {
                      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                        v19 = 128;
                      }
                      else {
                        v19 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v19, v18);
                    }
                  }
                  v15 = v16;
                } while (v16 != v13);
                f_.v33 = v13;
                v13 = f_.v32;
                if (f_.v32 != 0) {
                LABEL_41:
                  v20 = 128;
                  if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
                    v20 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v20, v13);
                }
              }
              f_.v39 = (__int64 (**)(void))f_.v30;
              util_cb2640((__int64**)&f_.v39);
              if (f_.v29 == f_.v28) {
                v21 = 32;
              }
              else {
                if (f_.v29 == nullptr) {
                  goto LABEL_49;
                }
                v21 = 40;
              }
              (*(void (**)(_QWORD*))(*f_.v29 + v21))(f_.v29);
            LABEL_49:
              if (f_.v25 != 0) {
                v22 = *(_QWORD*)v14;
                f_.v26 = f_.v25;
                v23 = 128;
                if (*(_QWORD*)(v22 + 200) == 0) {
                  v23 = 56;
                }
                nn_mem_StandardAllocator_Free(v22 + v23, f_.v25);
              }
              goto LABEL_53;
            }
            v12 = 40;
          }
          (*(void (**)(_QWORD*))(*f_.v36 + v12))(f_.v36);
          goto LABEL_30;
        }
        v11 = 5;
      }
      ((void (*)(__int64**))(*f_.v42)[v11])(f_.v42);
      goto LABEL_18;
    }
  }
}

__int64 game_11c3400(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  char v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 (**v14)();
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 (**v19)();
  __int64 v20;
  struct {
    __int64 (**v22)();
    __int64 (**v23)();
    __int64 v24;
    char gap24_[8];
    __int64* v25;
    char gap40_[8];
    __int64 v26;
    char gap56_[24];
    __int64* v27;
  } f_;
  __int64* v28;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex(a1 + 4456),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(__int64**)(a2 + 16);
  f_.v24 = a1;
  f_.v25 = (__int64*)&f_.v22;
  v28 = v4;
  f_.v22 = GameData_20167d0;
  f_.v23 = (__int64 (**)(void))&v28,
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = fs_635a60(a1, (__int64*)a2, 1, 0, 0, (__int64)&f_.v22),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = v6;
  if (f_.v25 == (__int64*)&f_.v22) {
    v8 = 32;
  }
  else {
    if (f_.v25 == nullptr) {
      goto LABEL_6;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*f_.v25 + v8))((__int64)f_.v25),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_6:
  if ((v7 & 1) != 0) {
    v9 = v5;
  }
  else {
    v9 = 0;
  }
  nn_os_UnlockMutex(a1 + 4456),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v7 & 1) == 0) {
    return v5;
  }
  GameRoutine_632da0((void*)((__int64*)&f_.v22), v5, *(_DWORD*)(a2 + 24)),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_633980((_QWORD*)v5, (__int64*)&f_.v22),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_632cd0(a1, v5),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_631820(v5),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_AcquireWriteLock(v5 + 696),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v5 + 656) |= 0x40u;
  nn_os_ReleaseWriteLock(v5 + 696),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = f_.v25;
  f_.v25 = nullptr;
  if (v10 != nullptr) {
    v28 = v10;
    if (f_.v27 == nullptr) {
    LABEL_36:
      GameRoutine_60a310(),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    (*(void (**)(__int64*, __int64**))(*f_.v27 + 48))(f_.v27, &v28),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (f_.v27 == &f_.v26) {
    v11 = 32;
    goto LABEL_17;
  }
  if (f_.v27 != nullptr) {
    v11 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*f_.v27 + v11))((__int64)f_.v27),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v12 = (__int64)f_.v22;
  if (f_.v22 == nullptr) {
    return v9;
  }
  v13 = f_.v23;
  if (f_.v22 == f_.v23) {
    goto LABEL_31;
  }
  v14 = f_.v23;
  do {
    v17 = (__int64*)*(v14 - 10);
    v14 -= 10;
    v16 = v17;
    *v14 = nullptr;
    if (v17 != nullptr) {
      v28 = v16;
      v18 = (__int64)*(v13 - 4);
      if (v18 == 0) {
        goto LABEL_36;
      }
      (*(void (**)(__int64, __int64**))(*(_QWORD*)v18 + 48LL))(v18, &v28),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v19 = (__int64 (**)(void)) * (v13 - 4),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v13 - 8 == v19) {
      v15 = 32;
    LABEL_22:
      (*(void (**)(__int64))((char*)*v19 + v15))((__int64)v19),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_23;
    }
    if (v19 != nullptr) {
      v15 = 40;
      goto LABEL_22;
    }
  LABEL_23:
    v13 = v14;
  } while (v14 != (__int64 (**)(void))v12);
  f_.v23 = (__int64 (**)(void))v12,
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = (__int64)f_.v22;
  if (f_.v22 != nullptr) {
  LABEL_31:
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v12),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v9;
}

__int64 game_136a4c0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  char v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 (**v14)();
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 (**v19)();
  __int64 v20;
  struct {
    __int64 (**v22)();
    __int64 (**v23)();
    __int64 v24;
    char gap24_[8];
    __int64* v25;
    char gap40_[8];
    __int64 v26;
    char gap56_[24];
    __int64* v27;
  } f_;
  __int64* v28;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex(a1 + 4456),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(__int64**)(a2 + 16);
  f_.v24 = a1;
  f_.v25 = (__int64*)&f_.v22;
  v28 = v4;
  f_.v22 = GameData_202f498;
  f_.v23 = (__int64 (**)(void))&v28,
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = fs_635a60(a1, (__int64*)a2, 1, 0, 0, (__int64)&f_.v22),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = v6;
  if (f_.v25 == (__int64*)&f_.v22) {
    v8 = 32;
  }
  else {
    if (f_.v25 == nullptr) {
      goto LABEL_6;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*f_.v25 + v8))((__int64)f_.v25),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_6:
  if ((v7 & 1) != 0) {
    v9 = v5;
  }
  else {
    v9 = 0;
  }
  nn_os_UnlockMutex(a1 + 4456),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v7 & 1) == 0) {
    return v5;
  }
  GameRoutine_632da0((void*)((__int64*)&f_.v22), v5, *(_DWORD*)(a2 + 24)),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_633980((_QWORD*)v5, (__int64*)&f_.v22),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_632cd0(a1, v5),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_631820(v5),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_AcquireWriteLock(v5 + 696),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v5 + 656) |= 0x40u;
  nn_os_ReleaseWriteLock(v5 + 696),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = f_.v25;
  f_.v25 = nullptr;
  if (v10 != nullptr) {
    v28 = v10;
    if (f_.v27 == nullptr) {
    LABEL_36:
      GameRoutine_60a310(),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    (*(void (**)(__int64*, __int64**))(*f_.v27 + 48))(f_.v27, &v28),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (f_.v27 == &f_.v26) {
    v11 = 32;
    goto LABEL_17;
  }
  if (f_.v27 != nullptr) {
    v11 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*f_.v27 + v11))((__int64)f_.v27),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v12 = (__int64)f_.v22;
  if (f_.v22 == nullptr) {
    return v9;
  }
  v13 = f_.v23;
  if (f_.v22 == f_.v23) {
    goto LABEL_31;
  }
  v14 = f_.v23;
  do {
    v17 = (__int64*)*(v14 - 10);
    v14 -= 10;
    v16 = v17;
    *v14 = nullptr;
    if (v17 != nullptr) {
      v28 = v16;
      v18 = (__int64)*(v13 - 4);
      if (v18 == 0) {
        goto LABEL_36;
      }
      (*(void (**)(__int64, __int64**))(*(_QWORD*)v18 + 48LL))(v18, &v28),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v19 = (__int64 (**)(void)) * (v13 - 4),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v13 - 8 == v19) {
      v15 = 32;
    LABEL_22:
      (*(void (**)(__int64))((char*)*v19 + v15))((__int64)v19),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_23;
    }
    if (v19 != nullptr) {
      v15 = 40;
      goto LABEL_22;
    }
  LABEL_23:
    v13 = v14;
  } while (v14 != (__int64 (**)(void))v12);
  f_.v23 = (__int64 (**)(void))v12,
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = (__int64)f_.v22;
  if (f_.v22 != nullptr) {
  LABEL_31:
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v12),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v9;
}

#pragma GCC visibility pop
