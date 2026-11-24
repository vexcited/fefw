#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10289e0(__int64);
__int64 GameRoutine_e1e440(__int64 result, char);
__int64 TelopParts_17cc5d0(__int64, __int64);
__int64 TelopParts_17cc7d0(__int64, __int64, __int64, char, __int64, char);
__int64 game_d8cf60(__int64 result);
__int64 game_telop_17cc6d0(__int64, __int64);
extern __int64 GameData_212ebf8[2];
extern __int64 GameData_21f3cb0;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_2241720;
void BattleUtil_7a96a0(float);
__int64 game_hub_d894a0(__int64 result);
__int64 game_hub_da3900(__int64 result);
float game_hub_da3bd0(__int64 a1);
__int64 game_hub_ef8890(__int64 result);
__int64 game_hub_ef9470(__int64 result);
__int64 game_hub_f2ed40(__int64 result);

__int64 game_hub_d894a0(__int64 result)
{
  __int64 v1;

  if (*(_BYTE*)(result + 241) == 1) {
    v1 = result;
    result = GameRoutine_10289e0(result);
    *(_BYTE*)(v1 + 241) = 0;
  }
  return result;
}

__int64 game_hub_da3900(__int64 result)
{
  if (*(_QWORD*)(result + 200) != *(_QWORD*)(result + 192)) {
    result = GameData_2241720;
    if (GameData_2241720 != 0) {
      return TelopParts_17cc7d0(
          GameData_2241720, (__int64)"MID_Sys_InfoTelop_GainExp", 0, 0, 0, 0);
    }
  }
  return result;
}

float game_hub_da3bd0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  float v2;
  float result;

  if (*(_BYTE*)(a1 + 225) == 1) {
    *(_BYTE*)(a1 + 225) = 0;
  }
  BattleUtil_7a96a0(0x0.0p+0f);
  v1 = GameData_21f3cb0;
  v2 = *(float*)(GameData_21f3cb0 + 1016);
  *(_DWORD*)(GameData_21f3cb0 + 1012) = 0;
  result = v2 + 0x0.0p+0f;
  *(float*)(v1 + 1008) = result;
  return result;
}

__int64 game_hub_ef8890(__int64 result)
{
  if (*(_BYTE*)(result + 208) == 1) {
    *(_BYTE*)(result + 208) = 0;
    result = GameData_21f3cb8;
    if (GameData_21f3cb8 != 0) {
      return game_d8cf60(GameData_21f3cb8);
    }
  }
  return result;
}

__int64 game_hub_ef9470(__int64 result)
{
  __int64 v1;

  if (*(_BYTE*)(result + 268) == 1) {
    v1 = result;
    result = GameRoutine_e1e440(*(_QWORD*)GameData_212ebf8[0], 1);
    *(_BYTE*)(v1 + 268) = 0;
  }
  return result;
}

__int64 game_hub_f2ed40(__int64 result)
{
  __int64 v1;

  if (*(_BYTE*)(result + 168) == 1) {
    if (GameData_2241720 != 0) {
      return TelopParts_17cc5d0(GameData_2241720, *(_QWORD*)(result + 152));
    }
  }
  else if (*(_QWORD*)(result + 160) == 0) {
    v1 = *(_QWORD*)(result + 152);
    if ((((0x10000000000LL << *(_BYTE*)(v1 + 72)) |
          (1LL << *(_BYTE*)(v1 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0) {
      result = GameData_2241720;
      if (GameData_2241720 != 0) {
        return game_telop_17cc6d0(GameData_2241720, v1);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
