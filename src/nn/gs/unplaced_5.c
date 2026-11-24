#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_gs_48fa30(__int64);
__int64 nn_os_GetSystemTick_plt();
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
extern _UNKNOWN SdkData_f3f028;
extern __int64 SdkData_f3f030;
extern void (*SdkData_e87798[4])();
void nn_diag_detail_AbortImpl_plt_856170();
__int64 nn_gs_sdk_QueryApplicationGpuTimeSpan(_QWORD* a1, __int64 a2,
                                              __int64 a3);

__int64 nn_gs_sdk_QueryApplicationGpuTimeSpan(_QWORD* a1, __int64 a2,
                                              __int64 a3)
{
  __int64 v6;
  __int64 v7;
  unsigned int* v8;
  _QWORD* StatusReg;
  int v10;
  int v11;
  __int64 v12;
  unsigned int* v13;
  _QWORD* v14;
  __int64 result;
  void (*explicit)(_QWORD);
  unsigned int v17;
  struct {
    int v18;
    int v19;
  } v18_;

  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_f3f028);
  v6 = SdkData_f3f030;
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_f3f028);
  if (v6 != 0) {
    goto LABEL_6;
  }
  v18_.v19 = nn_gs_48fa30((__int64)&SdkData_f3f028);
  if (v18_.v19 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v18_.v19);
  }
  v7 = nn_os_GetSystemTick_plt();
  v8 = (unsigned int*)SdkData_f3f030;
  StatusReg = (_QWORD*)__builtin_arm_rsr64("tpidrro_el0");
  *StatusReg = 0x200000010LL;
  StatusReg[1] = v7;
  v10 = nn_sm_detail_SendSessionRequest(v8);
  if (v10 != 0) {
    v18_.v18 = v10;
  LABEL_14:
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v18_.v18);
  }
  v11 = *((_DWORD*)StatusReg + 2);
  *StatusReg = 0x300000010LL;
  v12 = *(_QWORD*)((char*)StatusReg + 12);
  v18_.v18 = v11;
  if (v11 != 0) {
    goto LABEL_14;
  }
  if (v7 != v12) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
LABEL_6:
  v13 = (unsigned int*)SdkData_f3f030;
  v14 = (_QWORD*)__builtin_arm_rsr64("tpidrro_el0");
  v14[2] = a3;
  *v14 = 0x40000001BLL;
  v14[1] = a2;
  result = nn_sm_detail_SendSessionRequest(v13);
  if ((_DWORD)result != 0 || (result = *((unsigned int*)v14 + 2),
                              *v14 = 0x30000001BLL, (_DWORD)result != 0)) {
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      v17 = result;
      explicit((unsigned int)result);
      return v17;
    }
  }
  else {
    *a1 = *(_QWORD*)((char*)v14 + 12);
  }
  return result;
}

#pragma GCC visibility pop
