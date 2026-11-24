#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21f5250[];
extern __int64 eft_g_effectSystem;
__int64 game_proc_9a61a0(__int64 result);

__int64 game_proc_9a61a0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned int v12;
  bool v13;
  int v14;

  v1 = *(_DWORD*)(result + 168);
  v2 = result;
  if (v1 == 0) {
    v8 = *(_QWORD*)(result + 152);
    if (v8 != 0 && *(_DWORD*)(v8 + 16) == *(_DWORD*)(result + 160)) {
      v9 = *(unsigned int*)(v8 + 36);
      if ((_DWORD)v9 != 0) {
        v10 = 0;
        while (1) {
          result = *(_QWORD*)(v8 + 40 + 8 * v10);
          if (result != 0) {
            result =
                (*(__int64 (**)(__int64))(*(_QWORD*)result + 96LL))(result);
            if ((result & 1) != 0) {
              return result;
            }
            v9 = *(unsigned int*)(v8 + 36);
          }
          if (++v10 >= v9) {
            goto LABEL_22;
          }
        }
      }
    }
    else if (*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem + 104) + 32LL) !=
             *(_QWORD*)(eft_g_effectSystem + 104) + 24LL) {
      return result;
    }
    goto LABEL_22;
  }
  v3 = *(_QWORD*)(eft_g_effectSystem + 104);
  if (v3 == 0 || (v4 = GameData_21f5250[5LL * v1 + 2]) == 0) {
  LABEL_22:
    v11 = *(unsigned __int8**)(v2 + 16);
    if (v11 != nullptr) {
      v12 = *v11;
      v13 = v12 > 0x10;
      v14 = (1 << v12) & 0x1CE00;
      if (!v13 & v14 != 0) {
        *(_WORD*)(v2 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v2 + 136) |= 8u;
    return result;
  }
  v5 = v3 + 24;
  while (1) {
    v6 = *(__int16*)(v4 + 24);
    if ((v6 & 0x80000000) == 0) {
      v7 = *(_QWORD*)(v3 + 32);
      if (v7 != v5) {
        while (*(_DWORD*)(v7 + 16) != v6) {
          v7 = *(_QWORD*)(v7 + 8);
          if (v7 == v5) {
            goto LABEL_6;
          }
        }
        if (*(_BYTE*)(v7 - 7) != 1) {
          return result;
        }
      }
    }
  LABEL_6:
    v4 = *(_QWORD*)v4;
    if (v4 == 0) {
      goto LABEL_22;
    }
  }
}

#pragma GCC visibility pop
