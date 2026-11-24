#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_79e950(__int64 result, __int64);
__int64 GameRoutine_629ac0(__int64 result, __int64);
extern __int64* GameData_212cfb0[12];
extern __int64* as_g_script_manager_ptr;
extern __int64 GameData_21eea58;
extern __int64 game_GameModeData_instance_;
void GameVariable_828620(__int64, unsigned __int8);
_BYTE* game_map_7279c0(_BYTE* result);
__int64 game_map_7b1220(__int64 result);

_BYTE* game_map_7279c0(_BYTE* result)
{
  _BYTE* v1;
  __int64* v2;

  if (result[233] == 1) {
    v1 = result;
    v2 = GameData_212cfb0[0];
    if (game_GameModeData_instance_ != 0 &&
        *(_QWORD*)(game_GameModeData_instance_ + 16) != 0) {
      GameRoutine_629ac0(*as_g_script_manager_ptr, *GameData_212cfb0[0] + 16);
    }
    if (GameData_21eea58 == 0 || (*(_BYTE*)(GameData_21eea58 + 32) & 1) == 0) {
      GameVariable_828620(game_GameModeData_instance_ + 40, 1u);
    }
    (*(void (**)(__int64))(*(_QWORD*)*v2 + 24LL))(*v2);
    result = (_BYTE*)*v2;
    if (*v2 != 0) {
      result =
          (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 8LL))(result);
    }
    *v2 = 0;
    v1[233] = 0;
  }
  return result;
}

__int64 game_map_7b1220(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (*(int*)(result + 11432) >= 1) {
    v1 = result + 3240;
    v2 = result;
    v3 = 0;
    do {
      BattleSide_79e950(v2 + 192, v1);
      BattleSide_79e950(v2 + 952, v1);
      BattleSide_79e950(v2 + 1712, v1);
      result = BattleSide_79e950(v2 + 2472, v1);
      ++v3;
      v1 += 64;
    } while (v3 < *(int*)(v2 + 11432));
  }
  return result;
}

#pragma GCC visibility pop
