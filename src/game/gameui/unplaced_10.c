#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameRoutine_17b8f40(__int64, char);
__int64 GameRoutine_2b0();
__int64 LayoutAccessor_155e830(__int64 result, char);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_gameui_15e12f4();
void game_gameui_15e1310(__int64* a1);
__int64 game_gameui_15e51c4();
__int64 game_gameui_17bb860(__int64 result);
__int64 game_gameui_17bbe40(__int64 result);
__int64 game_gameui_15e12f4() { return GameRoutine_2b0(); }

void game_gameui_15e1310(__int64* a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *a1;
  if (*a1 != 0) {
    a1[1] = v1;
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2,
                                  v1);
  }
}

__int64 game_gameui_15e51c4() { return GameRoutine_2b0(); }

__int64 game_gameui_17bb860(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned int v7;
  bool v8;
  int v9;

  if (*(_BYTE*)(result + 152) == 1) {
    v1 = result;
    v2 = game_hub_ProgressEventView_instance__ptr[0];
    v3 = LayoutAccessor_155fbe0(
        (__int64*)(*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] +
                   168LL),
        "L_Task");
    LayoutAccessor_155e830((__int64)v3, 1);
    result = *(_QWORD*)v2;
    v5 = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
    v4 = *(unsigned __int8**)(*(_QWORD*)v2 + 16LL);
    if (v5 <= (unsigned __int64)v4) {
      v6 = *(_QWORD*)(*(_QWORD*)v2 + 16LL);
      while (*(_BYTE*)v6 != 2) {
        v6 -= 64LL;
        if (v5 > v6) {
          goto LABEL_15;
        }
      }
      if (*(_DWORD*)(v6 + 32) == 2) {
        if (v4 != nullptr) {
          v7 = *v4;
          v8 = v7 > 0x10;
          v9 = (1 << v7) & 0x1CE00;
          if (!v8 & v9 != 0) {
            *(_WORD*)(result + 136) |= 0x80u;
          }
        }
        *(_WORD*)(result + 136) |= 8u;
      }
    }
  LABEL_15:
    if (result != 0 && (*(_BYTE*)(v1 + 190) & 1) != 0) {
      result = GameRoutine_17b8f40(result, 1);
    }
    *(_BYTE*)(v1 + 152) = 0;
  }
  return result;
}

__int64 game_gameui_17bbe40(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(_BYTE*)(result + 152) == 1) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 & v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
