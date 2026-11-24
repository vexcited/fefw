#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_CloseNativeHandle_plt(unsigned int);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
extern void (*SdkData_e87798[4])();
__int64 vi2_service_client_5e2ac0(__int64 a1, unsigned int* a2, int a3, int a4);

__int64 vi2_service_client_5e2ac0(__int64 a1, unsigned int* a2, int a3, int a4)
{
  unsigned int* v8;
  unsigned __int64 StatusReg;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  void (*explicit)(_QWORD);
  unsigned int v14;

  nn_os_SdkMutexType_Lock_plt(a1);
  v8 = *(unsigned int**)(a1 + 16);
  if (v8 == nullptr) {
    v11 = 511602;
    goto LABEL_11;
  }
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_DWORD*)(StatusReg + 16) = a3;
  *(_DWORD*)(StatusReg + 8) = 2;
  *(_DWORD*)(StatusReg + 12) = a4;
  *(_QWORD*)StatusReg = 0x8000000100000030LL;
  v10 = nn_sm_detail_SendSessionRequest(v8);
  if (v10 != 0) {
    v11 = v10;
    v12 = 0;
    goto LABEL_6;
  }
  v12 = *(_DWORD*)(StatusReg + 12);
  *(_QWORD*)StatusReg = 0x8000000100000030LL;
  *(_DWORD*)(StatusReg + 8) = 32;
  nn_os_CloseNativeHandle_plt(0);
  nn_os_CloseNativeHandle_plt(0);
  v11 = *(_DWORD*)(StatusReg + 16);
  if (v11 != 0) {
  LABEL_6:
    nn_os_CloseNativeHandle_plt(v12);
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v11);
    }
    goto LABEL_11;
  }
  v14 = *a2;
  *a2 = v12;
  if (v14 != 0) {
    nn_os_CloseNativeHandle_plt(v14);
  }
  nn_os_CloseNativeHandle_plt(0);
  v11 = 0;
LABEL_11:
  nn_os_SdkMutexType_Unlock_plt(a1);
  return v11;
}

#pragma GCC visibility pop
