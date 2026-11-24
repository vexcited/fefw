#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
__int64 game_gmap_anonymous_1537a90(__int64 result);

__int64 game_gmap_anonymous_1537a90(__int64 result)
{
  __int64 v3;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;
  char* v8;

  if (*(_BYTE*)(result + 168) == 1) {
    v8 = "MID_Result_LegionFull_Message";
    result =
        game_menu_Dialog__CreateBind_game_menu_Dialog(result, (__int64)&v8);
    if (result != 0) {
      v4_.v5 = nullptr;
      GameRoutine_6680e0(v4_.v4, (_QWORD*)(result + 1248));
      result = (__int64)v4_.v5;
      if (v4_.v5 == v4_.v4) {
        v3 = 32;
      }
      else {
        if (v4_.v5 == nullptr) {
          return result;
        }
        v3 = 40;
      }
      return (*(__int64 (**)(__int64))(*v4_.v5 + v3))((__int64)v4_.v5);
    }
  }
  return result;
}

#pragma GCC visibility pop
