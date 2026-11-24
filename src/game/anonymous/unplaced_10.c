#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
__int64 GameRoutine_657460(__int64*, const char*, char);
__int64 GameRoutine_878850(__int64);
__int64 GameRoutine_8a9eb0(__int64 result);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562680(__int64 result, const char*, float);
__int64 Stream_Unknown2(__int64, unsigned int*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 save_18d3a00(__int64);
__int64 save_18d4220(__int64, __int64, __int64, __int64);
__int64 save_Task_Close(__int64);
__int64 save_Task_GetSize(__int64, __int64);
__int64 save_Task_Mount(__int64);
bool Stream_65d2d0(__int64, int*, int*, int*);
char* game_util_Format(const char*, ...);
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_1ae96fa;
extern _UNKNOWN GameData_21c6868;
extern __int64 (**game_anonymous_MountBind_vtable_ptr)();
extern __int64 (*game_anonymous_ProcGameSaveIcon_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d6e0[2];
extern __int64 GameData_212d6e8;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21c9600;
extern __int64 GameData_21eea58;
extern __int64 GameData_21eef18;
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21668e0;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
int __cxa_guard_acquire(__int64);
void Stream_660820(__int64, __int64);
void Stream_Unknown3(__int64, int);
void TelopParts_17ccc20(__int64, char, char);
void __cxa_guard_release(__int64);
void nn_os_YieldThread();
__int64 game_anonymous_87ad60(__int64 result);
__int64 game_anonymous_87b0a0(__int64 result);
void game_anonymous_87b0e0(__int64 a1);
__int64 game_anonymous_87b3e0(__int64 result);
__int64 game_anonymous_9ac060(__int64 result);

__int64 game_anonymous_87ad60(__int64 result)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  int v5;
  __int64 v6;
  int v7;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16[4];

  v3 = *(unsigned __int8**)(result + 160);
  v4 = *(unsigned __int8**)(result + 168);
  if (v3 != v4) {
    v16[2] = v1;
    v16[3] = v2;
    while (1) {
      v5 = *v3;
      v3 += 32;
      if (v5 == 1) {
        break;
      }
      if (v3 == v4) {
        return result;
      }
    }
    v6 = GameData_21eef18;
    if (GameData_21eef18 == 0) {
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
      v10 = GameData_212c608[0];
      *(_QWORD*)(v6 + 96) = 0;
      *(_QWORD*)(v6 + 104) = 0;
      *(_QWORD*)(v6 + 112) = 0;
      *(_QWORD*)(v6 + 120) = 0;
      *(_QWORD*)(v6 + 128) = 0;
      *(_WORD*)(v6 + 136) = 0;
      *(_QWORD*)(v6 + 16) = 0;
      *(_QWORD*)(v6 + 24) = "NULL";
      *(_QWORD*)(v6 + 138) = 0;
      *(_QWORD*)(v6 + 144) = 0;
      *(_QWORD*)(v6 + 32) = 0;
      *(_QWORD*)(v6 + 40) = 0;
      *(_QWORD*)(v6 + 48) = 0;
      *(_QWORD*)(v6 + 56) = 0;
      *(_QWORD*)(v6 + 64) = 0;
      *(_QWORD*)(v6 + 72) = 0;
      *(_QWORD*)(v6 + 80) = 0;
      *(_QWORD*)(v6 + 88) = 0;
      *(_QWORD*)v6 = v10 + 16;
      *(_QWORD*)(v6 + 8) = 0;
      game_ProcInst_Register(v6);
      GameData_21eef18 = v6;
      *(_BYTE*)(v6 + 152) = 0;
      *(_QWORD*)v6 = game_anonymous_ProcGameSaveIcon_vtable;
      v11 = *(_QWORD*)GameData_212d6e0[0];
      if (*(_QWORD*)GameData_212d6e0[0] != 0) {
        LayoutAccessor_155e830(v11 + 24, 1);
        LayoutAccessor_1562680(v11 + 24, "Wait", 0x1.0000000000000p+0f);
      }
      v12 = GameData_21c9600;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                memory_order_acquire) &
           1) == 0) {
        v14 = v12;
        v15 = __cxa_guard_acquire((__int64)&GameData_21c6868);
        v12 = v14;
        if (v15 != 0) {
          GameData_21c67a8 = 3;
          GameData_21c67d0 = 0;
          GameData_21c67d8 = 0;
          GameData_21c67e0 = 0;
          GameData_21c67b0 = 0;
          GameData_21c67b8 = 0;
          GameData_21c67c0 = 0;
          GameData_21c67c8 = 0;
          GameData_21c6808 = 0;
          GameData_21c6810 = 0;
          GameData_21c6818 = 0;
          GameData_21c6820 = 0;
          GameData_21c6828 = 0;
          GameData_21c6850 = 0;
          GameData_21c6858 = 0;
          GameData_21c6860 = 0;
          GameData_21c6848 = 0;
          GameData_21c6838 = 0;
          GameData_21c6840 = 0;
          GameData_21c6830 = 0;
          GameData_21c67e8 = 14;
          GameData_21c67f0 = 0;
          GameData_21c67f8 = 16;
          GameData_21c6800 = 1;
          __cxa_guard_release((__int64)&GameData_21c6868);
          v12 = v14;
        }
      }
      if (v12 != 0) {
        v13 = *(_QWORD*)(v12 + 40);
        if (v13 != 0) {
          *(_QWORD*)(v13 + 48) = v6;
          *(_QWORD*)(v6 + 56) = *(_QWORD*)(v12 + 40);
        }
        *(_QWORD*)(v12 + 40) = v6;
        *(_QWORD*)(v6 + 24) = "ProcGameSaveIcon";
        *(_QWORD*)(v6 + 32) = v12;
        *(_DWORD*)(v6 + 140) =
            (unsigned int)game_HashString32("ProcGameSaveIcon");
        *(_QWORD*)(v6 + 64) = 0;
        *(_QWORD*)(v6 + 72) = 24;
        *(_QWORD*)(v6 + 80) = 1;
        *(_QWORD*)(v6 + 8) = &GameData_21c67a8;
        *(_QWORD*)(v6 + 16) = &GameData_21c67a8;
        (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
            (*(_WORD*)(v6 + 136) & 0x100) == 0) {
          *(_WORD*)(v6 + 136) |= 0x100u;
        }
      }
      else if ((*(_WORD*)(v6 + 136) & 1) == 0) {
        ProcInst_657a50(v6, 1);
      }
    }
    v16[1] = (unsigned __int64)&GameData_1ae96fa;
    result = game_HashString((__int64)&GameData_1ae96fa);
    v16[0] = result;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v16);
      if (result != 0) {
        v7 = (int)(float)((float)*(int*)(result + 32) * 0x1.eb851e0000000p-5f);
        if (v7 >= 1) {
          v8 = *(float*)(v6 + 144);
          v9 = (float)(unsigned int)v7;
          *(_WORD*)(v6 + 136) &= 0xFF97u;
          if (v8 >= (float)(unsigned int)v7) {
            v9 = v8;
          }
          *(float*)(v6 + 144) = v9;
        }
      }
    }
    *(_BYTE*)(v6 + 152) = 0;
  }
  return result;
}

__int64 game_anonymous_87b0a0(__int64 result)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  int v3;

  v1 = *(unsigned __int8**)(result + 160);
  v2 = *(unsigned __int8**)(result + 168);
  if (v1 != v2) {
    while (1) {
      v3 = *v1;
      v1 += 32;
      if (v3 == 1) {
        break;
      }
      if (v1 == v2) {
        return result;
      }
    }
    if (GameData_21eef18 != 0) {
      *(_BYTE*)(GameData_21eef18 + 152) = 1;
    }
  }
  return result;
}

void game_anonymous_87b0e0(__int64 a1)
{
  unsigned __int8* v3;
  unsigned __int8* v4;
  int v5;
  char* v6;
  int v7;
  __int64 v8;
  __int64** v9;
  int v10;
  __int64* v11;
  unsigned int* v12;
  unsigned int v13;
  unsigned int v14;
  __int64* v15;
  unsigned int* v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  __int64* v21;
  unsigned int* v22;
  unsigned int v23;
  unsigned int v24;
  __int64* v25;
  __int64 v26;
  unsigned int* v27;
  unsigned int v28;
  unsigned int v29;
  __int64* v30;
  unsigned int* v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  __int64* v35;
  unsigned int* v36;
  unsigned int v37;
  unsigned int v38;
  __int64* v39;
  unsigned int* v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  unsigned __int64 v44;
  struct {
    int v45;
    int v46;
  } v45_;

  v3 = *(unsigned __int8**)(a1 + 160);
  v4 = *(unsigned __int8**)(a1 + 168);
  if (v3 != v4) {
    while (1) {
      v5 = *v3;
      v3 += 32;
      if (v5 == 5) {
        break;
      }
      if (v3 == v4) {
        return;
      }
    }
    v6 = game_util_Format("%s/%s", "000", "Global");
    v7 = GameData_21668e0;
    v8 = GameData_21eea58;
    ++GameData_21668e0;
    v9 = (__int64**)GameData_212d6e8;
    if (v7 == 0) {
      ((__int64 (*)(__int64))*game_anonymous_MountBind_vtable_ptr)(
          (__int64)&game_anonymous_MountBind_vtable_ptr);
      v21 = *v9;
      save_Task_Mount(**v9);
      v22 = (unsigned int*)(*v21 + 804);
      v23 = atomic_load(v22);
      if (v23 != 0) {
        do {
          nn_os_YieldThread();
          v24 = atomic_load(v22);
        } while (v24 != 0);
      }
    }
    v10 = GameRoutine_657460(*v9, v6, 0);
    if (v10 == 0) {
      v11 = *v9;
      v44 = 0;
      v43 = 0;
      save_Task_GetSize(*v11, (__int64)&v44);
      v12 = (unsigned int*)(*v11 + 804);
      v13 = atomic_load(v12);
      if (v13 != 0) {
        do {
          nn_os_YieldThread();
          v14 = atomic_load(v12);
        } while (v14 != 0);
      }
      if (v44 < 4) {
        v19 = 0;
        v20 = 0;
      }
      else {
        v15 = *v9;
        save_18d4220(**v9, (__int64)&v43, 0, 4);
        v16 = (unsigned int*)(*v15 + 804);
        v17 = atomic_load(v16);
        if (v17 != 0) {
          do {
            nn_os_YieldThread();
            v18 = atomic_load(v16);
          } while (v18 != 0);
        }
        v19 = v43;
        v20 = 4;
      }
      v25 = *v9;
      v44 = 0;
      v26 = *(_QWORD*)(v8 + 472);
      save_Task_GetSize(*v25, (__int64)&v44);
      v27 = (unsigned int*)(*v25 + 804);
      v28 = atomic_load(v27);
      if (v28 != 0) {
        do {
          nn_os_YieldThread();
          v29 = atomic_load(v27);
        } while (v29 != 0);
      }
      if (v44 >= v20 + v19) {
        v39 = *v9;
        save_18d4220(**v9, v26, v20, v19);
        v40 = (unsigned int*)(*v39 + 804);
        v41 = atomic_load(v40);
        if (v41 != 0) {
          do {
            nn_os_YieldThread();
            v42 = atomic_load(v40);
          } while (v42 != 0);
        }
      }
      Stream_660820(v8 + 464, v8 + 464);
      if (Stream_65d2d0(v8 + 464, (int*)&v44, &v45_.v46, &v45_.v45)) {
        *(_DWORD*)(v8 + 484) = v44;
      }
    }
    v30 = *v9;
    save_Task_Close(**v9);
    v31 = (unsigned int*)(*v30 + 804);
    v32 = atomic_load(v31);
    if (v32 != 0) {
      do {
        nn_os_YieldThread();
        v33 = atomic_load(v31);
      } while (v33 != 0);
    }
    if (--GameData_21668e0 == 0) {
      (*(void (**)(__int64))((char*)((_UNKNOWN**)0x8LL) +
                             (_QWORD)game_anonymous_MountBind_vtable_ptr))(
          (__int64)&game_anonymous_MountBind_vtable_ptr);
      v35 = *v9;
      save_18d3a00(**v9);
      v36 = (unsigned int*)(*v35 + 804);
      v37 = atomic_load(v36);
      if (v37 != 0) {
        do {
          nn_os_YieldThread();
          v38 = atomic_load(v36);
        } while (v38 != 0);
      }
    }
    if (v10 == 0) {
      v34 = GameData_21eea58;
      LODWORD(v44) = 0;
      Stream_Unknown2(GameData_21eea58 + 464, (unsigned int*)&v44);
      GameRoutine_8a9eb0(v34 + 464);
      Stream_Unknown3(v34 + 464, 0);
    }
  }
}

__int64 game_anonymous_87b3e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  _QWORD v12[4];

  v3 = *(_QWORD*)(result + 160);
  v4 = *(_QWORD*)(result + 168);
  if (v3 != v4) {
    v12[2] = v1;
    v12[3] = v2;
    while (*(_BYTE*)v3 != 2) {
      v3 += 32;
      if (v3 == v4) {
        return result;
      }
    }
    v5 = *(unsigned __int8*)(v3 + 8);
    v6 = v3 + 9;
    v9 = v3 + 16;
    v7 = *(_QWORD*)(v3 + 16);
    v8 = *(_QWORD*)(v9 + 8);
    v10 = (v5 & 1) == 0;
    v11 = v5 >> 1;
    if (v10) {
      v7 = v11;
    }
    else {
      v6 = v8;
    }
    v12[0] = v6;
    v12[1] = v7;
    return GameRoutine_878850((__int64)v12);
  }
  return result;
}

__int64 game_anonymous_9ac060(__int64 result)
{
  __int64 v1;

  if (*(_BYTE*)(result + 330) == 1) {
    if (GameData_2241720 != 0) {
      v1 = result;
      TelopParts_17ccc20(GameData_2241720, 1, 1);
      result = v1;
    }
    if (GameData_21c9600 != 0) {
      *(_DWORD*)(GameData_21c9600 + 152) = 1;
    }
    *(_DWORD*)(result + 152) = 6;
  }
  return result;
}

#pragma GCC visibility pop
