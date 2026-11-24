#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_nlibsdk_detail_GetLazyTlsSlot();
__int64 nn_os_SetTlsValue_plt(__int64, __int64);
int setjmp_plt(__int64);
__int64 posix_thread_172d30(__int64 a1);

__int64 posix_thread_172d30(__int64 a1)
{
  __int64 v1;
  unsigned int v3;
  __int64 result;

  v1 = a1 + 784;
  *(_QWORD*)(__builtin_arm_rsr64("tpidrro_el0") + 480) = a1 + 784;
  v3 = nn_nlibsdk_detail_GetLazyTlsSlot();
  nn_os_SetTlsValue_plt(v3, v1);
  result = setjmp_plt(a1 + 472);
  if ((_DWORD)result == 0) {
    *(_BYTE*)(a1 + 786) = 1;
    result = (*(__int64 (**)(_QWORD))(a1 + 448))(*(_QWORD*)(a1 + 456));
    *(_QWORD*)(a1 + 464) = result;
  }
  *(_BYTE*)(a1 + 786) = 0;
  return result;
}

#pragma GCC visibility pop
