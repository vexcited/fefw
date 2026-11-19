#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
extern _DWORD* game_g_shared_system_skills_ptr;
__int64 game_map_1835620(_QWORD* a1, unsigned __int8 a2);

__int64 game_map_1835620(_QWORD* a1, unsigned __int8 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  int v8;
  char* v9;
  char* v10;
  __int64 v11;
  int v12;
  unsigned int* v13;
  char v14;
  __int64 v15;
  char v16;
  char v17;
  __int64 v18;
  char* v19;
  char* v20;
  struct {
    _BYTE v21[4];
    int v22;
  } v21_;

  v2 = a1[19];
  v21_.v21[0] = a2;
  v4 = v2 + 760 * (unsigned int)a2;
  result = (*(__int64 (**)(_QWORD*, _BYTE*))(*a1 + 40LL))(a1, v21_.v21);
  v6 = *(_QWORD*)(v4 + 40);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v6 + 440);
    if (v7 == 0) {
      return result;
    }
    v8 = *(unsigned __int8*)(v7 + 16);
    if (v8 > 1) {
      if (v8 == 2) {
        v9 = "TargetType_Third";
        v10 = "PlayerType_Third";
      }
      else {
        if (v8 != 3) {
          return result;
        }
        v9 = "TargetType_Ally";
        v10 = "PlayerType_Ally";
      }
      goto LABEL_18;
    }
    if (v8 != 0) {
      v9 = "TargetType_Enemy";
      v10 = "PlayerType_Enemy";
    LABEL_18:
      if ((result & 1) != 0) {
        v13 = (unsigned int*)v10;
      }
      else {
        v13 = (unsigned int*)v9;
      }
      goto LABEL_21;
    }
    v14 = result;
    v21_.v22 = *game_g_shared_system_skills_ptr & 0xFFF;
    if ((game_HasSkill((_QWORD*)(v6 + 1744), (unsigned int*)&v21_.v22) & 1) !=
        0) {
      v15 = *(_QWORD*)(v6 + 440);
      v16 = v14;
      if (v15 != 0) {
        v17 = *(_BYTE*)(v15 + 16);
      }
      else {
        v17 = 9;
      }
      v18 = (__int64)(a1 + 3);
      if (((1 << v17) & 0xF1) != 0) {
        v19 = "TargetType_Guest";
        v20 = "PlayerType_Guest";
        goto LABEL_29;
      }
    }
    else {
      v18 = (__int64)(a1 + 3);
      v16 = v14;
    }
    v19 = "TargetType_Player";
    v20 = "PlayerType_Player";
  LABEL_29:
    if ((v16 & 1) != 0) {
      v13 = (unsigned int*)v20;
    }
    else {
      v13 = (unsigned int*)v19;
    }
    return LayoutAccessor_1562cf0(v18, v13);
  }
  v11 = a1[19];
  if (*(_QWORD*)(v11 + 808) != 0) {
    v12 = *(unsigned __int8*)(*(_QWORD*)(v11 + 784) + 11277LL) >> 7;
  }
  else {
    v12 = 1;
  }
  if ((((unsigned int)result | v12) & 1) == 0) {
    v13 = (unsigned int*)"TargetType_Enemy";
  LABEL_21:
    v18 = (__int64)(a1 + 3);
    return LayoutAccessor_1562cf0(v18, v13);
  }
  return result;
}

#pragma GCC visibility pop
