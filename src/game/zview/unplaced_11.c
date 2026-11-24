#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_2b0();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 (*GameData_1fe3568[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_e200b0();
__int64 game_zview_d43b74();
_QWORD* game_zview_e20380(__int64 a1);
__int64 game_zview_d43b74() { return GameRoutine_2b0(); }

_QWORD* game_zview_e20380(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v3[2] = 0;
  v3[3] = 0;
  *v3 = GameData_1fe3568;
  v3[1] = 0;
  v5 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  v6 = v4 - v5;
  if (v4 != v5) {
    if ((v6 & 0x8000000000000000LL) != 0) {
      GameRoutine_e200b0();
    }
    v7 = fw_memory_HeapManager_Allocate(*v2, v4 - v5, 16, 0);
    v8 = v7 + v6;
    v3[1] = v7;
    v3[3] = v7 + v6;
    GameRoutine_1a0b950(v7, v5, v6);
    v3[2] = v8;
  }
  return v3;
}

#pragma GCC visibility pop
