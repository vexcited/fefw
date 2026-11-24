#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_86e8b0(_QWORD, _QWORD);
__int64 SdkRoutine_87c9f0(void);
__int64 SdkRoutine_87cc50(void);
__int64 allocation_84e090(__int64 a1, void* a2);
__int64 new();
__int64 allocation_84e200();
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 allocation_84e050(unsigned __int64 a1);

__int64 allocation_84e050(unsigned __int64 a1)
{

#pragma clang fp contract(on)

  return SdkRoutine_85e050(a1);
}

__int64 allocation_84e090(__int64 a1, void* a2)
{
  return SdkRoutine_86e8b0(a1, a2);
}

__int64 new() { return SdkRoutine_87c9f0(); }

__int64 allocation_84e200() { return SdkRoutine_87cc50(); }

#pragma GCC visibility pop
