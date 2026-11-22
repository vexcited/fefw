#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_16ea050(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1612480(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameMenu_16e9f50(__int64, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool game_159e890(__int64, char, __int64);
extern __int64 (*GameData_20c5598[])();
extern __int64 (*GameData_20c5698[])();
extern __int64 (*GameData_20f05e0[])();
extern __int64 (*ui_Event_vtable[])();
extern __int64* GameData_212e0d0[5];
extern __int64* GameData_212f6c0[2];
extern __int64 GameData_20c5788;
extern __int64 GameData_212c610;
extern __int64 GameData_2131c38[51];
extern __int64 GameData_2131c40[50];
extern __int64 GameData_21f4018[];
extern __int64 GameData_21f4228;
void Element_1886580(__int64, char);
void GameRoutine_157e0f0(__int64*, __int64, const char*);
void LayoutAccessor_1572ac0(__int64*, __int64, char, char);
_QWORD* game_menu_1787ce0(_QWORD* result, __int64 a2);
__int64 game_menu_1862240(__int64 a1, __int64 a2);

_QWORD* game_menu_1787ce0(_QWORD* result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
    char gap40_[8];
    _QWORD v15[2];
    __int64 v16;
    char gap72_[8];
    _QWORD* v17;
  } f_;

  v2 = result[4];
  if (v2 == 0) {
    return result;
  }
  result = (_QWORD*)__dynamic_cast(result[4], GameData_212c610,
                                   GameData_212e0d0[0], 0);
  if (result != nullptr) {
    result[147] = a2;
    return result;
  }
  v4 = __dynamic_cast(v2, GameData_212c610, GameData_2131c38[0], 0);
  if (v4 == 0) {
    result =
        (_QWORD*)__dynamic_cast(v2, GameData_212c610, GameData_212f6c0[0], 0);
    if (result == nullptr) {
      return result;
    }
    v5 = result[4];
    v6 = (__int64)result;
    if (v5 == 0) {
      return result;
    }
    v7 = __dynamic_cast(result[4], GameData_212c610, GameData_212e0d0[0], 0);
    if (v7 != 0) {
      v8 = v7;
      f_.v13[2] = a2;
      f_.v16 = a2;
      f_.v13[0] = GameData_20c5598;
      f_.v13[1] = v7;
      f_.v15[0] = GameData_20c5598;
      f_.v15[1] = v7;
      f_.v14 = f_.v13;
      f_.v17 = f_.v15;
      GameRoutine_16ea050(f_.v15, (_QWORD*)(v6 + 1088));
      if (f_.v17 == f_.v15) {
        v9 = 32;
      }
      else {
        if (f_.v17 == nullptr) {
          goto LABEL_23;
        }
        v9 = 40;
      }
      (*(void (**)(__int64))(*f_.v17 + v9))((__int64)f_.v17);
    LABEL_23:
      result = f_.v14;
      if (f_.v14 == f_.v13) {
        v12 = 32;
      }
      else {
        if (f_.v14 == nullptr) {
        LABEL_28:
          *(_QWORD*)(v8 + 1176) = a2;
          return result;
        }
        v12 = 40;
      }
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*f_.v14 + v12))((__int64)f_.v14);
      goto LABEL_28;
    }
    result =
        (_QWORD*)__dynamic_cast(v5, GameData_212c610, GameData_2131c38[0], 0);
    if (result == nullptr) {
      return result;
    }
    result = (_QWORD*)result[39];
    if (result == nullptr) {
      return result;
    }
    result = (_QWORD*)__dynamic_cast(result, &GameData_20c5788,
                                     GameData_2131c40[0], 0);
    if (result == nullptr) {
      return result;
    }
    v10 = result;
    f_.v16 = a2;
    f_.v15[0] = GameData_20c5698;
    f_.v15[1] = result;
    f_.v17 = f_.v15;
    GameMenu_16e9f50(v6, (__int64)f_.v15);
    result = f_.v17;
    if (f_.v17 == f_.v15) {
      v11 = 32;
    }
    else {
      if (f_.v17 == nullptr) {
      LABEL_31:
        v10[134] = a2;
        return result;
      }
      v11 = 40;
    }
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*f_.v17 + v11))((__int64)f_.v17);
    goto LABEL_31;
  }
  result = *(_QWORD**)(v4 + 312);
  if (result != nullptr) {
    result = (_QWORD*)__dynamic_cast(result, &GameData_20c5788,
                                     GameData_2131c40[0], 0);
    if (result != nullptr) {
      result[134] = a2;
    }
  }
  return result;
}

__int64 game_menu_1862240(__int64 a1, __int64 a2)
{
  bool v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  char* v22;
  char* v23;
  _QWORD v24[2];
  struct {
    char gap0_[16];
    _QWORD v25[4];
    _QWORD* v26;
    char gap56_[16];
    __int64* v27;
    __int64 v28;
    __int64 (**v29)();
    __int64 v30;
    __int64 v31;
  } f_;

  LayoutAccessor_1560070((void*)(&f_.v27), (__int64*)(a1 + 848),
                         "L_UnitEquipInfo/L_UnitInfo");
  f_.v25[0] = GameData_20f05e0;
  f_.v25[1] = a1;
  f_.v26 = f_.v25;
  v4 = game_159e890(a2, 0, (__int64)f_.v25);
  if (f_.v28 != 0) {
    v5 = std___1___shared_weak_count_lock(f_.v28);
    if (v5 != 0) {
      v6 = v5;
      if (f_.v27 != nullptr) {
        LayoutAccessor_1572ac0(f_.v27, a2, 0, v4);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  if (f_.v26 == f_.v25) {
    v7 = 32;
  }
  else {
    if (f_.v26 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*f_.v26 + v7))((__int64)f_.v26);
LABEL_12:
  if (f_.v28 != 0) {
    std___1___shared_weak_count___release_weak(f_.v28);
  }
  v8 = LayoutAccessor_155fbe0((__int64*)(a1 + 848),
                              "L_UnitEquipInfo/L_MenuItem_Info");
  GameRoutine_157e0f0(v8, (__int64)"MID_DeployMenu_Ride", nullptr);
  v24[0] = "L_UnitEquipInfo/L_AnimalInfo";
  v24[1] = 28;
  GameRoutine_1612480((void*)(&f_.v29), (__int64*)(a1 + 848), v24);
  result = f_.v30;
  if (f_.v30 != 0) {
    v10 = std___1___shared_weak_count_lock(f_.v30);
    v11 = (__int64)f_.v29;
    result = f_.v30;
    if (v10 != 0) {
      v12 = f_.v29;
    }
    else {
      v12 = nullptr;
    }
    if (f_.v30 != 0) {
      result = std___1___shared_weak_count___release_weak(f_.v30);
    }
    if (v12 != nullptr) {
      *(_QWORD*)(v11 + 1064) = a2;
      *(_DWORD*)(v11 + 1072) = 3;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      Element_1886580(v11, 1);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 384LL))(v11);
      if (v10 == 0) {
        goto LABEL_29;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                memory_order_relaxed);
      f_.v31 = 0;
      f_.v29 = ui_Event_vtable;
      LODWORD(f_.v30) = 20;
      v13 = std___1___shared_weak_count_lock(v10);
      if (v13 != 0) {
        v14 = v13;
        (*((__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64 (**)(void),
                                                 __int64 (***)(void)))v12[9] +
           2))(v24, v12 + 9, &f_.v29);
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v14);
        }
      }
      result = std___1___shared_weak_count___release_weak(v10);
    }
    else if (v10 == 0) {
      goto LABEL_29;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      result = std___1___shared_weak_count___release_weak(v10);
    }
  }
LABEL_29:
  if (a2 == 0) {
    return result;
  }
  LayoutAccessor_1560070((void*)(&f_.v29), (__int64*)(a1 + 848),
                         "L_UnitEquipInfo");
  if (f_.v30 != 0) {
    v15 = std___1___shared_weak_count_lock(f_.v30);
    if (v15 != 0) {
      v16 = (__int64)f_.v29;
    }
    else {
      v16 = 0;
    }
    if (f_.v30 != 0) {
      std___1___shared_weak_count___release_weak(f_.v30);
    }
  }
  else {
    v15 = 0;
    v16 = 0;
  }
  LayoutAccessor_1560070((void*)(&f_.v29), (__int64*)(a1 + 848),
                         "L_UnitEquipInfo/L_UnitInfo");
  result = f_.v30;
  if (f_.v30 != 0) {
    v17 = std___1___shared_weak_count_lock(f_.v30);
    v18 = (__int64)f_.v29;
    result = f_.v30;
    if (f_.v30 != 0) {
      result = std___1___shared_weak_count___release_weak(f_.v30);
    }
    if (v16 != 0 && v17 != 0 && v18 != 0) {
      v19 = *(_QWORD*)(a2 + 400);
      v20 = (__int64*)(a2 + 1880);
      if (*(_BYTE*)(v19 + 96) == 2 && *(_BYTE*)(a2 + 1880) == 0) {
        v21 = *(_QWORD*)(v19 + 112);
        if (v21 != 0) {
          v20 = &GameData_21f4018[8 * (unsigned __int64)*(
                                          unsigned __int8*)(v21 + 32)];
        }
        else {
          v20 = &GameData_21f4228;
        }
      }
      if (*(_BYTE*)v20 != 0) {
        v22 = "InfoOn";
      }
      else {
        v22 = "InfoOff";
      }
      if (*(_BYTE*)v20 != 0) {
        v23 = "Info00";
      }
      else {
        v23 = "Simple00";
      }
      LayoutAccessor_1562cf0(v16, (unsigned int*)v22);
      result = LayoutAccessor_1562cf0(v18, (unsigned int*)v23);
      goto LABEL_57;
    }
    if (v17 != 0) {
    LABEL_57:
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        result = std___1___shared_weak_count___release_weak(v17);
      }
    }
  }
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    return std___1___shared_weak_count___release_weak(v15);
  }
  return result;
}

#pragma GCC visibility pop
