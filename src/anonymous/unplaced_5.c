#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameRoutine_159d0c0(__int64 result, char, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64* GameData_212ce90[3];
extern __int64 game_GameModeData_instance_;
extern __int64 ui_LayoutAccessor_empty_;
__int64 anonymous_185c1a0(__int64 result);

__int64 anonymous_185c1a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  atomic_ullong* v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  atomic_ullong* v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  atomic_ullong* v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  atomic_ullong* v34;
  __int64* v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  struct {
    __int64 v40;
    __int64 v41;
  } v40_;

  {
    v1 = *(_QWORD*)(game_GameModeData_instance_ + 160);
    __asm__ volatile("" ::"r"(v1));
  }
  {
    v2 = *(_QWORD*)(v1 + 8);
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v3 = *(_QWORD*)(v1 + 16) - v2;
    __asm__ volatile("" ::"r"(v3));
  }
  if ((int)(v3 >> 5) < 1) {
    return result;
  }
  v4 = (v3 >> 5) & 0x7FFFFFFF;
  v5 = (_BYTE*)(v2 + 8);
  v6 = result;
  {
    v7 = *GameData_212ce90[0];
    __asm__ volatile("" ::"r"(v7));
  }
  while (1) {
    if ((*v5 & 1) != 0 && v7 != 0) {
      {
        v8 = *(char*)(v7 + 28);
        __asm__ volatile("" ::"r"(v8));
      }
      if (*((_DWORD*)v5 - 2) == v8) {
        break;
      }
    }
    v5 += 32;
    if (--v4 == 0) {
      return result;
    }
  }
  if (**(_DWORD**)(result + 96) == v8) {
    {
      v9 = *(_QWORD*)(result + 56);
      __asm__ volatile("" ::"r"(v9));
    }
    if (v9 == 0) {
      goto LABEL_13;
    }
    v10 = std___1___shared_weak_count_lock(v9);
    if (v10 == 0) {
      goto LABEL_13;
    }
    v11 = v10;
    v12 = (atomic_ullong*)(v10 + 8);
    {
      v13 = *(__int64**)(v6 + 48);
      __asm__ volatile("" ::"r"(v13));
    }
    if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v14 = v13;
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
      v13 = v14;
    }
    if (v13 == nullptr) {
    LABEL_13:
      v13 = &ui_LayoutAccessor_empty_;
    }
    LayoutAccessor_1562cf0((__int64)v13, "BattleDecide");
    {
      v15 = *(_QWORD*)(v6 + 56);
      __asm__ volatile("" ::"r"(v15));
    }
    if (v15 == 0) {
      goto LABEL_19;
    }
    v16 = std___1___shared_weak_count_lock(v15);
    if (v16 == 0) {
      goto LABEL_19;
    }
    v17 = v16;
    v18 = (atomic_ullong*)(v16 + 8);
    {
      v19 = *(__int64**)(v6 + 48);
      __asm__ volatile("" ::"r"(v19));
    }
    if (atomic_fetch_add(v18, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v20 = v19;
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak(v17);
      v19 = v20;
    }
    if (v19 == nullptr) {
    LABEL_19:
      v19 = &ui_LayoutAccessor_empty_;
    }
    LayoutAccessor_1560070((void*)(&v40_.v40), v19, "L_MiracleLV");
    if (v40_.v41 == 0) {
      goto LABEL_41;
    }
    v21 = std___1___shared_weak_count_lock(v40_.v41);
    v22 = v40_.v40;
    if (v40_.v41 != 0) {
      std___1___shared_weak_count___release_weak(v40_.v41);
    }
    if (v21 != 0 && v22 != 0) {
      LayoutAccessor_1562cf0(v22, "Default");
    }
    else if (v21 == 0) {
    LABEL_41:
      {
        v31 = *(_QWORD*)(v6 + 56);
        __asm__ volatile("" ::"r"(v31));
      }
      if (v31 == 0) {
        goto LABEL_46;
      }
      v32 = std___1___shared_weak_count_lock(v31);
      if (v32 == 0) {
        goto LABEL_46;
      }
      v33 = v32;
      v34 = (atomic_ullong*)(v32 + 8);
      {
        v35 = *(__int64**)(v6 + 48);
        __asm__ volatile("" ::"r"(v35));
      }
      if (atomic_fetch_add(v34, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v36 = v35;
        (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
        std___1___shared_weak_count___release_weak(v33);
        v35 = v36;
      }
      if (v35 == nullptr) {
      LABEL_46:
        v35 = &ui_LayoutAccessor_empty_;
      }
      v37 = LayoutAccessor_155fbe0(v35, "L_MiracleLV");
      v38 = std___1___shared_weak_count_lock(v37[1]);
      if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v39 = v38;
        (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
        std___1___shared_weak_count___release_weak(v39);
      }
      return GameRoutine_159d0c0(*(_QWORD*)(v37[2] + 24) + 32LL, 0, 1);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak(v21);
    }
    goto LABEL_41;
  }
  {
    v23 = *(_QWORD*)(result + 56);
    __asm__ volatile("" ::"r"(v23));
  }
  if (v23 == 0) {
    goto LABEL_31;
  }
  v24 = std___1___shared_weak_count_lock(v23);
  if (v24 == 0) {
    goto LABEL_31;
  }
  v25 = v24;
  v26 = (atomic_ullong*)(v24 + 8);
  {
    v27 = *(__int64**)(v6 + 48);
    __asm__ volatile("" ::"r"(v27));
  }
  if (atomic_fetch_add(v26, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v28 = v27;
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak(v25);
    v27 = v28;
  }
  if (v27 == nullptr) {
  LABEL_31:
    v27 = &ui_LayoutAccessor_empty_;
  }
  LayoutAccessor_1560070((void*)(&v40_.v40), v27, "L_MiracleLV");
  result = v40_.v41;
  if (v40_.v41 != 0) {
    v29 = std___1___shared_weak_count_lock(v40_.v41);
    v30 = v40_.v40;
    result = v40_.v41;
    if (v40_.v41 != 0) {
      result = std___1___shared_weak_count___release_weak(v40_.v41);
    }
    if (v29 != 0 && v30 != 0) {
      result = LayoutAccessor_1562cf0(v30, "Disable");
    }
    else if (v29 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      return std___1___shared_weak_count___release_weak(v29);
    }
  }
  return result;
}

#pragma GCC visibility pop
