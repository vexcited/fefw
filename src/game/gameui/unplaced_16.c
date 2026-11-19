#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c3980(__int64 result, __int64);
__int64 GameRoutine_6fc510(__int64);
__int64 Unit_6dfe00(__int64 result, __int64);
__int64 game_Unit_Destroy_Unit(__int64);
__int64 game_Unit_GetJob(__int64);
__int64 game_Unit_Unknown6c8630(__int64);
bool GameRoutine_6fc7a0(__int64, _QWORD*);
bool game_Unit_Unknown6c9980(__int64);
extern __int64* GameData_212c880[5];
void GameRoutine_6c2b50(__int64);
bool game_gameui_157b780(_BOOL8 result, _DWORD* a2);

bool game_gameui_157b780(_BOOL8 result, _DWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  struct {
    _BYTE v17[400];
    __int64 v18;
  } v17_;
  _QWORD v19[48];

  if (!result) {
    return result;
  }
  v3 = result;
  v4 = game_Unit_GetJob(result);
  {
    v5 = GameData_212c880[0];
    __asm__ volatile("" ::"r"(v5));
  }
  if (*(_QWORD*)(*(_QWORD*)(v4 + 24) + 1112LL) != 0 && *(int*)(v3 + 592) >= 2) {
    GameRoutine_6c2b50((__int64)v17_.v17);
    GameRoutine_6c3980((__int64)v17_.v17, v3);
    if (v17_.v18 != *(_QWORD*)(*(_QWORD*)(v3 + 400) + 88LL)) {
      v17_.v18 = *(_QWORD*)(*(_QWORD*)(v3 + 400) + 88LL);
      game_Unit_Unknown6c8630((__int64)v17_.v17);
    }
  LABEL_10:
    if ((*(_DWORD*)a2 & 0xFFF) != 0) {
      {
        v6 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*(_DWORD*)a2 & 0xFFF));
        __asm__ volatile("" ::"r"(v6));
      }
      if ((GameRoutine_6fc510(v6) & 1) == 0) {
        if (*(_BYTE*)(v6 + 273) == 0 ||
            ((v7 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) +
                              8 * (*(_DWORD*)a2 & 0xFFFLL)),
              v8 = *(unsigned __int8*)(v7 + 104),
              v9 = *(unsigned __int8*)(v7 + 273), (unsigned int)(v8 - 5) >= 2)
                 ? (v10 = 0)
                 : (v10 = (*(_DWORD*)a2 >> 19) & 0x1F),
             v10 - ((*(_DWORD*)a2 >> 12) & 0x7F) + v9 >= 1)) {
          if (GameRoutine_6fc7a0(v6, v19)) {
            game_Unit_Destroy_Unit((__int64)v17_.v17);
            return true;
          }
        }
      }
    }
    game_Unit_Destroy_Unit((__int64)v17_.v17);
    goto LABEL_20;
  }
  if (*(_QWORD*)(v3 + 408) != 0) {
    game_Unit_Unknown6c9980(v3);
    GameRoutine_6c2b50((__int64)v17_.v17);
    GameRoutine_6c3980((__int64)v17_.v17, v3);
    if (v17_.v18 != *(_QWORD*)(v3 + 400)) {
      v17_.v18 = *(_QWORD*)(v3 + 400);
      game_Unit_Unknown6c8630((__int64)v17_.v17);
    }
    Unit_6dfe00((__int64)v17_.v17, 0);
    goto LABEL_10;
  }
LABEL_20:
  {
    v11 = *(_DWORD*)a2 & 0xFFF;
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * v11);
    __asm__ volatile("" ::"r"(v12));
  }
  result =
      *(_BYTE*)(v12 + 104) == 2 && (*(_DWORD*)a2 & 0xFFF) != 0 &&
      (GameRoutine_6fc510(*(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * v11)) & 1) ==
          0 &&
      (*(_BYTE*)(v12 + 273) == 0 ||
       ((v13 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * (*(_DWORD*)a2 & 0xFFFLL)),
         v14 = *(unsigned __int8*)(v13 + 104),
         v15 = *(unsigned __int8*)(v13 + 273), (unsigned int)(v14 - 5) >= 2)
            ? (v16 = 0)
            : (v16 = (*(_DWORD*)a2 >> 19) & 0x1F),
        v16 - ((*(_DWORD*)a2 >> 12) & 0x7F) + v15 >= 1)) &&
      GameRoutine_6fc7a0(v12, (_QWORD*)(v3 + 1840));
  return result;
}

#pragma GCC visibility pop
