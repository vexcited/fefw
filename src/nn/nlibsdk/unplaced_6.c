#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_SdkConditionVariableType_Wait_plt(__int64, __int64);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
extern _UNKNOWN SdkData_eb7e94;
extern _UNKNOWN SdkData_eb7e98;
extern __int64 SdkData_eb7ea8;
extern __int64 SdkData_eb7eb0;
void nn_nlibsdk_detail_JoinAndFreePosixThread(__int64, _QWORD*);
void __attribute__((noreturn)) nn_nlibsdk_173980();

void __attribute__((noreturn)) nn_nlibsdk_173980()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;

  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_eb7e94);
  while (1) {
    nn_os_SdkConditionVariableType_Wait_plt((__int64)&SdkData_eb7e98,
                                            (__int64)&SdkData_eb7e94);
    v0 = (__int64*)SdkData_eb7ea8;
    v1 = SdkData_eb7eb0;
    if (SdkData_eb7ea8 != SdkData_eb7eb0) {
      do {
        v2 = *v0++;
        nn_nlibsdk_detail_JoinAndFreePosixThread(v2, nullptr);
      } while (v0 != (__int64*)v1);
      v0 = (__int64*)SdkData_eb7ea8;
    }
    SdkData_eb7eb0 = (__int64)v0;
  }
}

#pragma GCC visibility pop
