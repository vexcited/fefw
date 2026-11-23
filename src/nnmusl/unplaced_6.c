#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __nnmusl_run_thread_dtors();
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nnosFreeMemoryForThreadLocal_plt(_QWORD, _QWORD);
extern _UNKNOWN SdkData_eadc5c;
extern _UNKNOWN SdkData_eadc64;
extern __int64 SdkData_eadc68;
extern __int64 SdkData_eadc70;
extern __int64 SdkData_eadc88;
extern int SdkData_eadc3c;
void nnmusl_b8060();

void nnmusl_b8060()
{
  __int64 v0;
  int v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  if (SdkData_eadc70 != 0) {
    v0 = *(_QWORD*)(__builtin_arm_rsr64("tpidrro_el0") + 496);
    __nnmusl_run_thread_dtors();
    nn_os_SdkMutexType_Lock_plt(&SdkData_eadc64);
    v1 = SdkData_eadc3c;
    if (SdkData_eadc3c > (int)SdkData_eadc88) {
      v2 = (int)SdkData_eadc88 + 1LL;
      do {
        v4 = *(_QWORD*)(*(_QWORD*)(v0 - 24) + 8 * v2);
        if (v4 != 0) {
          nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
          v5 = *(_QWORD*)(SdkData_eadc68 + 8 * v2);
          nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
          v7 = *(_QWORD*)(v4 - 48);
          v6 = *(_QWORD**)(v4 - 40);
          if (v7 != 0) {
            *(_QWORD*)(v7 + 8) = v6;
            v7 = *(_QWORD*)(v4 - 48);
          }
          if (v6 != nullptr) {
            *v6 = v7;
          }
          else {
            *(_QWORD*)(v5 + 304) = v7;
          }
          nnosFreeMemoryForThreadLocal_plt(*(_QWORD*)(v4 - 32),
                                           *(_QWORD*)(v4 - 24));
          *(_QWORD*)(*(_QWORD*)(v0 - 24) + 8 * v2) = 0;
          v1 = SdkData_eadc3c;
        }
      } while (v2++ < v1);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc64);
    v8 = *(_QWORD*)(v0 - 16);
    if (v8 != 0) {
      nnosFreeMemoryForThreadLocal_plt(v8, *(_QWORD*)(v0 - 8));
    }
  }
}

#pragma GCC visibility pop
