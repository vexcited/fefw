#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_170c1a0(__int64 result, __int64*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern __int64* game_talk_g_window_layout_ptr[5];
__int64 game_talk_1135940(__int64 result);

__int64 game_talk_1135940(__int64 result)
{
  __int64* v1;
  __int64 v2;

  if (*(_DWORD*)(result + 200) == 2) {
    v1 = *(__int64**)(result + 1328);
    if (v1 != nullptr) {
      v2 = result;
      result = GameRoutine_170c1a0(result, v1);
      if (*(_BYTE*)(v2 + 289) == 1) {
        return ui_LayoutAccessor_SetPaneVisible(
            (__int64)game_talk_g_window_layout_ptr[0], (__int64)"N_Auto", 0);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
