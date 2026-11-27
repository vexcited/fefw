#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_633980(_QWORD* result, __int64*);
__attribute__((swiftcall)) void GameRoutine_632da0(PSEUDO_X8, __int64,
                                                   unsigned int);
__int64 GameRoutine_631820(__int64);
__int64 GameRoutine_632cd0(__int64, __int64);
__int64 fs_635a60(__int64, __int64*, char, char, __int64, __int64);
__int64 nn_os_AcquireWriteLock(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_ReleaseWriteLock(__int64);
__int64 nn_os_UnlockMutex(__int64);
extern __int64 (*GameData_1fbf880[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 fs_Manager_a51920(__int64 a1, __int64 a2);

__int64 fs_Manager_a51920(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  char v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 (**v14)();
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 (**v19)();
  __int64 v20;
  struct {
    __int64 (**v22)();
    __int64 (**v23)();
    __int64 v24;
    char gap24_[8];
    __int64* v25;
    char gap28_[8];
    __int64 v26;
    char gap56_[24];
    __int64* v27;
  } v22_;
  __int64* v28;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex(a1 + 4456),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(__int64**)(a2 + 16);
  v22_.v24 = a1;
  v22_.v25 = (__int64*)&v22_.v22;
  v28 = v4;
  v22_.v22 = GameData_1fbf880;
  v22_.v23 = (__int64 (**)(void))&v28,
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = fs_635a60(a1, (__int64*)a2, 1, 0, 0, (__int64)&v22_.v22),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = v6;
  if (v22_.v25 == (__int64*)&v22_.v22) {
    v8 = 32;
  }
  else {
    if (v22_.v25 == nullptr) {
      goto LABEL_6;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v22_.v25 + v8))((__int64)v22_.v25),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_6:
  if ((v7 & 1) != 0) {
    v9 = v5;
  }
  else {
    v9 = 0;
  }
  nn_os_UnlockMutex(a1 + 4456),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v7 & 1) == 0) {
    return v5;
  }
  GameRoutine_632da0((void*)(&v22_.v22), v5, *(_DWORD*)(a2 + 24)),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_633980((_QWORD*)v5, (__int64*)&v22_.v22),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_632cd0(a1, v5),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_631820(v5),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_AcquireWriteLock(v5 + 696),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v5 + 656) |= 0x40u;
  nn_os_ReleaseWriteLock(v5 + 696),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = v22_.v25;
  v22_.v25 = nullptr;
  if (v10 != nullptr) {
    v28 = v10;
    if (v22_.v27 == nullptr) {
    LABEL_36:
      GameRoutine_60a310(),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    (*(void (**)(__int64*, __int64**))(*v22_.v27 + 48))(v22_.v27, &v28),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v22_.v27 == &v22_.v26) {
    v11 = 32;
    goto LABEL_17;
  }
  if (v22_.v27 != nullptr) {
    v11 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*v22_.v27 + v11))((__int64)v22_.v27),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v12 = (__int64)v22_.v22;
  if (v22_.v22 == nullptr) {
    return v9;
  }
  v13 = v22_.v23;
  if (v22_.v22 == v22_.v23) {
    goto LABEL_31;
  }
  v14 = v22_.v23;
  do {
    v17 = (__int64*)*(v14 - 10);
    v14 -= 10;
    v16 = v17;
    *v14 = nullptr;
    if (v17 != nullptr) {
      v28 = v16;
      v18 = (__int64)*(v13 - 4);
      if (v18 == 0) {
        goto LABEL_36;
      }
      (*(void (**)(__int64, __int64**))(*(_QWORD*)v18 + 48LL))(v18, &v28),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v19 = (__int64 (**)(void)) * (v13 - 4),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v13 - 8 == v19) {
      v15 = 32;
    LABEL_22:
      (*(void (**)(__int64))((char*)*v19 + v15))((__int64)v19),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_23;
    }
    if (v19 != nullptr) {
      v15 = 40;
      goto LABEL_22;
    }
  LABEL_23:
    v13 = v14;
  } while (v14 != (__int64 (**)(void))v12);
  v22_.v23 = (__int64 (**)(void))v12,
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = (__int64)v22_.v22;
  if (v22_.v22 != nullptr) {
  LABEL_31:
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v12),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v9;
}

#pragma GCC visibility pop
