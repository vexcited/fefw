#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameVariable_82e4d0(int);
__int64 ProcList_9bd480(__int64);
__int64 ProcRegistry_65a640(_QWORD*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
__int64 game_d8cf60(__int64 result);
extern __int64 (*GameData_1ffc8d8[])();
extern __int64 (*GameData_1ffc958[])();
extern __int64 GameData_212dbc8[7];
extern __int64 GameData_21c9ca8;
extern __int64 game_GameModeData_instance_;
__int64 game_hub_anonymous_da6f30(__int64 result);
__int64 game_hub_anonymous_fb9fc0(__int64 result);
__int64 game_hub_anonymous_104eb80(__int64 result);

__int64 game_hub_anonymous_da6f30(__int64 result)
{
  __int64 v1;

  if (*(_BYTE*)(result + 192) == 1) {
    v1 = result;
    result = ProcRegistry_65a640((_QWORD*)result);
    *(_BYTE*)(v1 + 192) = 0;
  }
  return result;
}

__int64 game_hub_anonymous_fb9fc0(__int64 result)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  _BOOL4 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  int v16;
  __int64 v17;
  _BOOL4 v18;
  _BOOL4 v19;
  int v20;
  bool v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    _QWORD v26[4];
    _QWORD* v27;
  } v26_;

  if (*(_DWORD*)(result + 164) != 1) {
    return result;
  }
  v3 = result;
  result = ProcList_9bd480(result);
  if (result == 0) {
    return result;
  }
  v4 = *(unsigned __int8*)(v3 + 160);
  v5 = result;
  if (*(_BYTE*)(v3 + 160) != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(v3 + 176) + 8LL) +
         216LL * *(unsigned __int8*)(v3 + 160);
    if (*(_DWORD*)(v3 + 164) == 2) {
      v7 = *(_DWORD*)(v6 + 436);
    }
    else {
      v7 = *(_DWORD*)(v6 + 432);
    }
  }
  else {
    v7 = 0;
  }
  v8 = true;
  v9 = GameVariable_82e4d0(1);
  if (game_GameModeData_instance_ != 0) {
    v10 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v9);
    if (v10 != 0) {
      v8 = (signed __int32)*(_DWORD*)(v10 + 32) < 2;
    }
  }
  if (v7 >= 2) {
    v8 = false;
  }
  v11 = GameVariable_82e4d0(1);
  v12 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v13 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v11);
    if (v13 != 0) {
      v12 = *(_DWORD*)(v13 + 32);
    }
    else {
      v12 = 0;
    }
  }
  v14 = *(__int64**)(GameData_21c9ca8 + 64);
  v15 = *(__int64**)(GameData_21c9ca8 + 72);
  if (v14 == v15) {
    v18 = false;
  }
  else {
    v16 = 0;
    do {
      v17 = *v14++;
      if (v12 == *(unsigned __int8*)(v17 + 59)) {
        ++v16;
      }
    } while (v14 != v15);
    v18 = v16 != 0;
  }
  v19 = v7 < 2;
  if (v7 >= 2) {
    v20 = 4;
  }
  else {
    v20 = 0;
  }
  v22 = v19 && v18;
  v21 = !v19 | !v18;
  LODWORD(v23) = v20 | !v8;
  if (v21) {
    v23 = (unsigned int)v23;
  }
  else {
    v23 = (unsigned int)v23 | 2;
  }
  v26_.v26[0] = GameData_1ffc8d8;
  v26_.v26[1] = v4 | (v23 << 32);
  v26_.v27 = v26_.v26;
  game_ProcList_Call_9bcfa0(v5, (__int64)v26_.v26);
  result = (__int64)v26_.v27;
  if (v26_.v27 == v26_.v26) {
    v24 = 32;
    goto LABEL_34;
  }
  if (v26_.v27 != nullptr) {
    v24 = 40;
  LABEL_34:
    result = (*(__int64 (**)(__int64))(*v26_.v27 + v24))((__int64)v26_.v27);
  }
  if (!v22) {
    return result;
  }
  v26_.v26[0] = GameData_1ffc958;
  v26_.v27 = v26_.v26;
  game_ProcList_Call_9bcfa0(v5, (__int64)v26_.v26);
  result = (__int64)v26_.v27;
  if (v26_.v27 == v26_.v26) {
    v25 = 32;
  }
  else {
    if (v26_.v27 == nullptr) {
      return result;
    }
    v25 = 40;
  }
  return (*(__int64 (**)(__int64))(*v26_.v27 + v25))((__int64)v26_.v27);
}

__int64 game_hub_anonymous_104eb80(__int64 result)
{
  __int64 v1;

  if (*(_BYTE*)(result + 152) == 1) {
    v1 = result;
    result = game_d8cf60(*(_QWORD*)GameData_212dbc8[0]);
    *(_BYTE*)(v1 + 152) = 0;
  }
  return result;
}

#pragma GCC visibility pop
