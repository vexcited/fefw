#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b0();
__int64 GameSideStoryData_12b3d60(__int64 result);
extern __int64 GameData_21c9728;
__int64 game_cmdbtl_anonymous_e68144();
__int64 game_cmdbtl_anonymous_e6d954();
__int64 game_cmdbtl_anonymous_ebf720(__int64 result);
__int64 game_cmdbtl_anonymous_e68144() { return GameRoutine_2b0(); }

__int64 game_cmdbtl_anonymous_e6d954() { return GameRoutine_2b0(); }

__int64 game_cmdbtl_anonymous_ebf720(__int64 result)
{
  __int64* v1;
  __int64* i;
  __int64 v3;

  if (*(_QWORD*)(result + 160) != *(_QWORD*)(result + 152)) {
    v1 = *(__int64**)(GameData_21c9728 + 16);
    for (i = *(__int64**)(GameData_21c9728 + 24); v1 != i;
         result = GameSideStoryData_12b3d60(v3)) {
      v3 = *v1++;
    }
  }
  return result;
}

#pragma GCC visibility pop
