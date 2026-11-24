#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
extern __int64 GameData_21f8018;
__int64 game_evt_demo_114eae0(__int64 result);

__int64 game_evt_demo_114eae0(__int64 result)
{
  __int64 v1;
  int v2;
  bool v3;
  int v4;
  __int64 v5;

  if (*(_BYTE*)(result + 268) == 1) {
    v1 = GameData_21f8018;
    if (GameData_21f8018 != 0) {
      v2 = *(_DWORD*)(GameData_21f8018 + 160);
      v3 = __OFSUB__(v2, 1);
      v4 = v2 - 1;
      if (v4 < 0 != v3) {
        if ((*(_WORD*)(GameData_21f8018 + 136) & 1) == 0) {
          v5 = result;
          ProcInst_657a50(GameData_21f8018, 1);
          goto LABEL_8;
        }
      }
      else {
        *(_DWORD*)(GameData_21f8018 + 160) = v4;
        if (v4 == 0) {
          v5 = result;
          (*(void (**)(__int64))(*(_QWORD*)(v1 + 152) + 8LL))(v1 + 152);
        LABEL_8:
          result = v5;
        }
      }
    }
    *(_BYTE*)(result + 268) = 0;
  }
  return result;
}

#pragma GCC visibility pop
