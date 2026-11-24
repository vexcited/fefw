#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_8ea9a0(__int64);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_menu_1789cf0(__int64, __int64);
bool game_Unit_IsUnlocked(__int64);
extern _UNKNOWN* GameData_212c730;
extern __int16 GameData_225d6f4;
extern __int64 (*GameData_207c4e0[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_207c5b0[])();
extern __int64 (*game_menu_anonymous_ProcRouteMenu_vtable[])();
extern __int64 (*game_menu_anonymous_RouteMenuItem_vtable[])();
extern __int64 GameData_2131bb8[5];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void GameRoutine_717660();
__int64* game_menu_1630850(__int64* result);
void game_menu_166c220(__int64 a1);

__int64* game_menu_1630850(__int64* result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;

  if (*((_BYTE*)result + 276) == 2) {
    v1 = result[110];
    v2 = result[89];
    if (v2 != v1) {
      v3 = *(unsigned __int8*)(v1 + 8);
      if ((*(_BYTE*)(v2 + 8) & 1) != 0) {
        v6 = (v3 & 1) == 0;
        v7 = v3 >> 1;
        if (v6) {
          v8 = v1 + 9;
        }
        else {
          v8 = *(_QWORD*)(v1 + 24);
        }
        if (v6) {
          v9 = v7;
        }
        else {
          v9 = *(_QWORD*)(v1 + 16);
        }
        result = SpineModel_64dde0((__int64*)(v2 + 8), v8, v9);
      }
      else if ((v3 & 1) != 0) {
        result = GameRoutine_64df20((_QWORD*)(v2 + 8), *(_QWORD*)(v1 + 24),
                                    *(_QWORD*)(v1 + 16));
      }
      else {
        v4 = *(_QWORD*)(v1 + 8);
        v5 = *(_QWORD*)(v1 + 24);
        *(_QWORD*)(v2 + 16) = *(_QWORD*)(v1 + 16);
        *(_QWORD*)(v2 + 24) = v5;
        *(_QWORD*)(v2 + 8) = v4;
      }
    }
    v10 = *(_DWORD*)(v1 + 32);
    *(_BYTE*)(v2 + 36) = *(_BYTE*)(v1 + 36);
    *(_DWORD*)(v2 + 32) = v10;
  }
  return result;
}

void game_menu_166c220(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  char** v4;
  char* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;

  GameData_225d6f4 = 0;
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1392, 16, 0);
  game_menu_1789cf0(v3, (__int64)"RouteMenu");
  *(_DWORD*)(v3 + 1184) = 0;
  *(_DWORD*)(v3 + 1208) = 0;
  *(_QWORD*)(v3 + 1216) = 0;
  *(_QWORD*)(v3 + 1224) = 0;
  *(_QWORD*)(v3 + 1232) = 0;
  *(_QWORD*)(v3 + 1280) = 0;
  *(_QWORD*)(v3 + 1296) = 0;
  *(_QWORD*)(v3 + 1304) = 0;
  *(_BYTE*)(v3 + 1312) = 0;
  *(_QWORD*)(v3 + 1328) = 0;
  *(_QWORD*)(v3 + 1336) = 0;
  *(_QWORD*)(v3 + 1200) = 0xFFFFFFFFLL;
  *(_QWORD*)(v3 + 1344) = 0;
  *(_QWORD*)(v3 + 1352) = 0;
  *(_QWORD*)(v3 + 1360) = 0;
  *(_QWORD*)(v3 + 1368) = 0;
  *(_QWORD*)(v3 + 1376) = 0;
  *(_DWORD*)(v3 + 1240) = 2;
  *(_QWORD*)v3 = game_menu_anonymous_ProcRouteMenu_vtable;
  *(_QWORD*)(v3 + 176) = GameData_207c4e0;
  *(_QWORD*)(v3 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_207c5b0;
  GameRoutine_717660();
  ProcInst_657850(v3, (__int64)GameData_212c730, "ProcRouteMenu", 1, a1);
  v4 =
      (char**)GameRoutine_8ea9a0(*(_QWORD*)(game_GameModeData_instance_ + 176));
  v5 = *v4;
  v6 = v4[1];
  if (*v4 != v6) {
    v7 = GameData_2131bb8[0] + 16;
    do {
      v8 = fw_memory_HeapManager_Allocate(*v2, 104, 16, 0);
      v9 = *v5;
      v10 = *((_QWORD*)v5 + 1);
      *(_WORD*)(v8 + 16) = 0;
      *(_DWORD*)(v8 + 40) = 0;
      *(_QWORD*)(v8 + 48) = 0;
      *(_QWORD*)(v8 + 56) = 0;
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 0;
      *(_WORD*)(v8 + 80) = 257;
      *(_BYTE*)(v8 + 82) = 1;
      *(_QWORD*)v8 = v7;
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 88) = v10;
      if (v10 != 0) {
        *(_BYTE*)(v8 + 82) = game_Unit_IsUnlocked(v10);
      }
      *(_QWORD*)v8 = game_menu_anonymous_RouteMenuItem_vtable;
      *(_BYTE*)(v8 + 96) = v9;
      BasicMenuCursor_16e0c00((_QWORD*)v3, v8);
      v5 += 16;
    } while (v5 != v6);
  }
}

#pragma GCC visibility pop
