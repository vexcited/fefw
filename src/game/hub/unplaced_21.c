#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_17b8dd0(__int64);
extern __int64 GameData_212c6a0[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64 game_script_hub_talk_g_select_menu;
void ScheduleManager_d9ed40();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_hub_e2a980();

void game_hub_e2a980()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 v8;
    __int64 v9;
    __int64 v10;
  } v8_;

  {
    v0 = GameData_212c6a0[0];
    __asm__ volatile("" ::"r"(v0));
  }
  LOWORD(v8_.v8) = 0;
  {
    v1 = (__int64*)(*(_QWORD*)GameData_212c6a0[0] + 256LL);
    __asm__ volatile("" ::"r"(v1));
  }
  if (v1 != &v8_.v8) {
    if ((*(_BYTE*)v1 & 1) != 0) {
      SpineModel_64dde0(v1, (__int64)&v8_.v8 + 1, 0);
      if ((v8_.v8 & 1) != 0 && v8_.v10 != 0) {
        v3 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v8_.v10);
      }
    }
    else {
      v2 = v8_.v9;
      *v1 = v8_.v8;
      v1[1] = v2;
      v1[2] = v8_.v10;
    }
  }
  {
    v4 = *(_QWORD**)v0;
    __asm__ volatile("" ::"r"(v4));
  }
  LOWORD(v8_.v8) = 0;
  v5 = v4 + 35;
  if (v4 + 35 != &v8_.v8) {
    if ((*(_BYTE*)v5 & 1) != 0) {
      SpineModel_64dde0(v5, (__int64)&v8_.v8 + 1, 0);
      if ((v8_.v8 & 1) != 0 && v8_.v10 != 0) {
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v8_.v10);
      }
    }
    else {
      v6 = v8_.v9;
      *v5 = v8_.v8;
      v4[36] = v6;
      v4[37] = v8_.v10;
    }
  }
  *(_QWORD*)(*(_QWORD*)v0 + 328LL) &= 0xFFFFFFFFFFFFFFF8LL;
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8dd0(game_hub_ProgressEventView_instance_);
  }
  if (game_script_hub_talk_g_select_menu != 0) {
    *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
  }
  ScheduleManager_d9ed40();
}

#pragma GCC visibility pop
