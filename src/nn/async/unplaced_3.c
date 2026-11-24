#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_async_detail_CancellationState_Destroy_CancellationState_plt(_QWORD);
__int64 std___1___shared_weak_count_Destroy___shared_weak_count_plt(void);
extern __int64 SdkData_e86c48;
__int64 nn_async_adb50(_QWORD* a1);
__int64 nn_async_adbb0(__int64 a1);

__int64 nn_async_adb50(_QWORD* a1)
{
  *a1 = SdkData_e86c48 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_async_adbb0(__int64 a1)
{
  return nn_async_detail_CancellationState_Destroy_CancellationState_plt(a1 +
                                                                         32);
}

#pragma GCC visibility pop
