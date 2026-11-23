#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gsv_GetUserSession_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
__int64 syncpt_api_5d2920(__int64, __int64, __int64, unsigned int);
extern void (*SdkData_e87798[4])();
__int64 nn_syncpt_5d2520(_QWORD* a1, __int64 a2);
__int64 nn_syncpt_5d27a0(unsigned __int64* a1, char* a2, __int64 a3, __int64 a4,
                         unsigned int a5);
__int64 nn_syncpt_5d4c20(__int64 a1, __int64 a2);

__int64 nn_syncpt_5d2520(_QWORD* a1, __int64 a2)
{
  unsigned __int64 StatusReg;
  __int64 v5;
  unsigned int v6;
  int v7;
  unsigned __int64 v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v12;
  void (*explicit)(_QWORD);
  void (*v14)(_QWORD);
  unsigned int v15;

  nn_os_SdkMutexType_Lock_plt(a2);
  if (*(_DWORD*)(a2 + 4) == 0) {
    nn_os_SdkMutexType_Unlock_plt(a2);
    v15 = 164083;
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
  }
  v15 = *(_DWORD*)(a2 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 17;
  v5 = nn_sm_detail_SendSessionRequest(&v15);
  if ((_DWORD)v5 != 0) {
    v12 = v5;
    goto LABEL_15;
  }
  *(_QWORD*)StatusReg = 0x200000011LL;
  if (*(_DWORD*)(StatusReg + 8) != 0) {
    v12 = *(_DWORD*)(StatusReg + 8);
  LABEL_15:
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v12);
    }
    nn_os_SdkMutexType_Unlock_plt(a2);
    v15 = v12;
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
  }
  v6 = *(_DWORD*)(StatusReg + 12);
  if (v6 >= 0x400) {
    nn_diag_detail_AbortImpl_plt_856170(v5);
  }
  nn_os_SdkMutexType_Unlock_plt(a2);
  *a1 = 1;
  nn_os_SdkMutexType_Lock_plt(a2);
  if (*(_DWORD*)(a2 + 4) == 0) {
    nn_os_SdkMutexType_Unlock_plt(a2);
    v15 = 164083;
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
  }
  v15 = *(_DWORD*)(a2 + 4);
  if (v6 >= 0x3F) {
    v7 = 63;
  }
  else {
    v7 = v6;
  }
  v8 = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)v8 = 0x100000025LL;
  *(_DWORD*)(v8 + 8) = v7;
  v9 = nn_sm_detail_SendSessionRequest(&v15);
  if (v9 != 0) {
    v10 = v9;
  LABEL_21:
    v14 = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (v14 != nullptr) {
      v14(v10);
    }
    nn_os_SdkMutexType_Unlock_plt(a2);
    v15 = v10;
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
  }
  *(_QWORD*)v8 = 0x100000025LL;
  v10 = *(_DWORD*)(v8 + 8);
  if (v10 != 0) {
    goto LABEL_21;
  }
  return nn_os_SdkMutexType_Unlock_plt(a2);
}

__int64 nn_syncpt_5d27a0(unsigned __int64* a1, char* a2, __int64 a3, __int64 a4,
                         unsigned int a5)
{
  int v10;
  unsigned __int64 StatusReg;
  unsigned int v12;
  unsigned int v13;
  void (*explicit)(_QWORD);
  unsigned __int64 v17;
  char v18;
  unsigned int v19;

  if (*(_QWORD*)(a3 + 16) == 0 || a5 > *(_DWORD*)(a3 + 4)) {
    nn_os_SdkMutexType_Lock_plt(a4);
    if (*(_DWORD*)(a4 + 4) != 0) {
      v10 = ~a5;
      v19 = *(_DWORD*)(a4 + 4);
      StatusReg = __builtin_arm_rsr64("tpidrro_el0");
      *(_QWORD*)StatusReg = 0x100000077LL;
      *(_DWORD*)(StatusReg + 8) = v10;
      v12 = nn_sm_detail_SendSessionRequest(&v19);
      if (v12 == 0) {
        v12 = *(_DWORD*)(StatusReg + 8);
        *(_QWORD*)StatusReg = 0x400000077LL;
        if (v12 == 0) {
          v18 = *(_BYTE*)(StatusReg + 20);
          v17 = *(_QWORD*)(StatusReg + 12);
          nn_os_SdkMutexType_Unlock_plt(a4);
          goto LABEL_14;
        }
      }
      v13 = v12;
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v12);
      }
      nn_os_SdkMutexType_Unlock_plt(a4);
      return v13;
    }
    else {
      nn_os_SdkMutexType_Unlock_plt(a4);
      return 164083;
    }
  }
  else {
    nn_os_SdkMutexType_Lock_plt(a3 + 64);
    syncpt_api_5d2920(a3, a3 + 72, a3 + 120, a5);
    nn_os_SdkMutexType_Unlock_plt(a3 + 64);
    v17 = atomic_load_explicit(
        (atomic_ullong* volatile)(*(_QWORD*)(a3 + 24) + 8LL * a5),
        memory_order_acquire);
    if (v17 != -1) {
      v18 = 1;
    LABEL_14:
      *a1 = v17;
      *a2 = v18;
      return 0;
    }
    return 65779;
  }
}

__int64 nn_syncpt_5d4c20(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  unsigned __int64 StatusReg;
  unsigned int v7;
  void (*explicit)(_QWORD);
  unsigned int v10;

  v4 = nn_gsv_GetUserSession_plt(a1);
  nn_os_SdkMutexType_Lock_plt(v4);
  if (*(_DWORD*)(v4 + 4) != 0) {
    v10 = *(_DWORD*)(v4 + 4);
    v5 = *(_DWORD*)(a1 + 8);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)(StatusReg + 12) = a2;
    *(_QWORD*)StatusReg = 0x4000000E7LL;
    *(_DWORD*)(StatusReg + 8) = v5;
    *(_BYTE*)(StatusReg + 20) = 1;
    v7 = nn_sm_detail_SendSessionRequest(&v10);
    if (v7 != 0 || (v7 = *(_DWORD*)(StatusReg + 8),
                    *(_QWORD*)StatusReg = 0x1000000E7LL, v7 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v7);
      }
    }
  }
  return nn_os_SdkMutexType_Unlock_plt(v4);
}

#pragma GCC visibility pop
