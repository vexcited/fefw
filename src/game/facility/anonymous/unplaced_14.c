#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_9db8a0(unsigned __int8, int);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 game_19307a0(__int64, char);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_facility_anonymous_1930ce0(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 GameData_21f84a0;
extern __int64 GameData_21f84b8;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_LayoutAccessor_empty_;
__int64* game_facility_anonymous_192f500(__int64 a1);

__int64* game_facility_anonymous_192f500(__int64 a1)
{
  unsigned __int8 v1;
  unsigned __int64* v3;
  __int64 v4;
  int v5;
  __int64* result;
  unsigned __int64* v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  unsigned __int64* v14;
  __int64 v15;
  bool v16;
  unsigned int v17;
  unsigned __int64* v18;
  __int64 v19;
  int v20;
  char* v21;
  __int64 v22;

  v1 = *(_BYTE*)(a1 + 96);
  v3 = (unsigned __int64*)(GameData_21f84a0 + 40LL * v1);
  if (*v3 != 0 && game_GameModeData_instance_ != 0 &&
      (v4 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48), v3)) != 0) {
    v5 = *(_DWORD*)(v4 + 32);
  }
  else {
    v5 = 0;
  }
  result = GameRoutine_9db8a0(v1, v5);
  if (result != nullptr) {
    v7 = (unsigned __int64*)(GameData_21f84b8 +
                             40LL * *(unsigned __int8*)(a1 + 96));
    v9 = *v7 == 0 || game_GameModeData_instance_ == 0 ||
         (v8 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48), v7)) == 0 ||
         *(unsigned __int8*)(v8 + 32) != 1;
    v10 = (_QWORD*)(GameData_21f84b8 + 40LL * *(unsigned __int8*)(a1 + 96));
    if (*v10 != 0) {
      game_VariableManager_SetFlag((__int64)v10, v9);
    }
    game_facility_anonymous_1930ce0(a1);
    game_19307a0(a1, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1);
    v11 = *(_QWORD*)(a1 + 56);
    if (v11 != 0) {
      v12 = std___1___shared_weak_count_lock(v11);
      if (v12 != 0) {
        v13 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v13 != nullptr) {
            goto LABEL_19;
          }
        }
        else {
          v22 = v12;
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak(v22);
          if (v13 != nullptr) {
          LABEL_19:
            v14 = (unsigned __int64*)(GameData_21f84b8 +
                                      40LL * *(unsigned __int8*)(a1 + 96));
            v16 = *v14 == 0 || game_GameModeData_instance_ == 0 ||
                  (v15 = game_GameVariableTable_Find(
                       *(_QWORD**)(game_GameModeData_instance_ + 48), v14)) ==
                      0 ||
                  *(_BYTE*)(v15 + 32) != 1;
            v17 = *(unsigned __int8*)(a1 + 96);
            v18 = (unsigned __int64*)(GameData_21f84a0 + 40LL * v17);
            if (*v18 != 0 && game_GameModeData_instance_ != 0 &&
                (v19 = game_GameVariableTable_Find(
                     *(_QWORD**)(game_GameModeData_instance_ + 48), v18)) !=
                    0) {
              v20 = *(_DWORD*)(v19 + 32);
            }
            else {
              v20 = 0;
            }
            if ((v16 & (GameRoutine_9db8a0(v17, v20) != nullptr)) != 0) {
              v21 = "KeyOn";
            }
            else {
              v21 = "KeyOff";
            }
            LayoutAccessor_1562cf0((__int64)v13, v21);
            return (__int64*)(((_UNKNOWN**)((char*)0x8LL + 5)));
          }
        }
      }
    }
    v13 = &ui_LayoutAccessor_empty_;
    goto LABEL_19;
  }
  return result;
}

#pragma GCC visibility pop
