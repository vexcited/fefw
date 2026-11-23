#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1692f0(__int64, __int64);
__int64 SdkRoutine_1a5550(void);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_os_169290(__int64 result);
__int64 nn_os_detail_CallFiberFunction_plt(_QWORD, _QWORD);
void __attribute__((noreturn)) nn_os_169240(__int64 a1);
unsigned __int8* nn_os_16cce0(__int64 a1);

void __attribute__((noreturn)) nn_os_169240(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = nn_os_detail_CallFiberFunction_plt(*(_QWORD*)(a1 + 48),
                                          *(_QWORD*)(a1 + 40));
  v3 = nn_os_169290(v2);
  *(_BYTE*)(a1 + 32) = 4;
  *(_BYTE*)(v3 + 32) = 2;
  *(_QWORD*)(*(_QWORD*)(__builtin_arm_rsr64("tpidrro_el0") + 504) + 112LL) = v3;
  v4 = SdkRoutine_1692f0(a1, v3);
  nn_diag_detail_AbortImpl_plt_856170(v4);
}

unsigned __int8* nn_os_16cce0(__int64 a1)
{
  unsigned __int8* result;
  unsigned __int64 StatusReg;
  int v3;

  result = (unsigned __int8*)(a1 + 2);
  atomic_store(*result + 1, result);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  v3 = *(unsigned __int16*)(StatusReg + 256) - 1;
  *(_WORD*)(StatusReg + 256) = v3;
  if (v3 == 0 && *(_WORD*)(StatusReg + 258) != 0) {
    return (unsigned __int8*)SdkRoutine_1a5550();
  }
  return result;
}

#pragma GCC visibility pop
