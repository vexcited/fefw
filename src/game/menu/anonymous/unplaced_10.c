#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _DWORD GameData_1b9cfec[3];
extern _UNKNOWN as_g_context_slots;
extern int GameData_222e468;
extern int game_script_hub_talk_g_choice_menu_result;
bool game_menu_anonymous_e99250(__int64 a1);
__int64 game_menu_anonymous_f70420(__int64 result);
__int64 game_menu_anonymous_fdda00(__int64 result);
__int64 game_menu_anonymous_fddbe0(__int64 result);
__int64 game_menu_anonymous_fdddc0(__int64 result);
__int64 game_menu_anonymous_fe0040(__int64 result);
__int64 game_menu_anonymous_fe02c0(__int64 result);

bool game_menu_anonymous_e99250(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  _BOOL8 result;

  v1 = *(unsigned int*)(a1 + 416);
  result = false;
  if ((_DWORD)v1 != 0x2000) {
    v2 = (_QWORD*)((char*)&as_g_context_slots + 16 * v1);
    v3 = v2[1];
    if (v3 != 0 && *v2 == *(_QWORD*)(a1 + 408) && *(_DWORD*)(v3 + 52) == 1) {
      return true;
    }
  }
  return result;
}

__int64 game_menu_anonymous_f70420(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;

  v1 = *(unsigned int*)(result + 164);
  if ((unsigned int)v1 <= 2) {
    v2 = *(_QWORD*)(result + 8);
    if (v2 != 0) {
      v3 = GameData_1b9cfec[v1];
      while (1) {
        if (*(_BYTE*)v2 == 2) {
          if (*(_DWORD*)(v2 + 32) == v3) {
            *(_QWORD*)(result + 16) = v2;
            *(_WORD*)(result + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v2 == 0) {
          return result;
        }
        v2 += 64;
      }
    }
  }
  return result;
}

__int64 game_menu_anonymous_fdda00(__int64 result)
{
  int v1;
  __int64 v2;

  if (game_script_hub_talk_g_choice_menu_result == 1) {
    v1 = 2;
  }
  else {
    v1 = 4;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

__int64 game_menu_anonymous_fddbe0(__int64 result)
{
  int v1;
  __int64 v2;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v1 = 4;
  }
  else {
    v1 = 3;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

__int64 game_menu_anonymous_fdddc0(__int64 result)
{
  __int64 v1;

  GameData_222e468 = 1;
  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 4) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64;
    }
  }
  return result;
}

__int64 game_menu_anonymous_fe0040(__int64 result)
{
  __int64 v1;

  if (game_script_hub_talk_g_choice_menu_result == 0) {
    GameData_222e468 = 1;
  }
  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 4) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64;
    }
  }
  return result;
}

__int64 game_menu_anonymous_fe02c0(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  __int16 v4;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v1 = *(_DWORD*)(result + 176);
    if (v1 == 10) {
      GameData_222e468 = 2;
      v2 = 3;
      v3 = *(_QWORD*)(result + 8);
      if (v3 != 0) {
        goto LABEL_11;
      }
    }
    else {
      *(_DWORD*)(result + 176) = v1 + 1;
      v2 = 1;
      v3 = *(_QWORD*)(result + 8);
      if (v3 != 0) {
        while (1) {
        LABEL_11:
          if (*(_BYTE*)v3 == 2) {
            if (*(_DWORD*)(v3 + 32) == v2) {
              v4 = *(_WORD*)(result + 136);
              *(_QWORD*)(result + 16) = v3;
              *(_WORD*)(result + 136) = v4 & 0xFF7F;
              return result;
            }
          }
          else if (*(_BYTE*)v3 == 0) {
            return result;
          }
          v3 += 64;
        }
      }
    }
  }
  else {
    v2 = 2;
    v3 = *(_QWORD*)(result + 8);
    if (v3 != 0) {
      goto LABEL_11;
    }
  }
  return result;
}

#pragma GCC visibility pop
