#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern unsigned int SdkData_c77b4c[13];
__int64 nvidia_64a9b0(__int64 a1, __int64 a2);

__int64 nvidia_64a9b0(__int64 a1, __int64 a2)
{
  if ((unsigned __int64)(a2 - 2) > 0xC) {
    return 10;
  }
  else {
    return SdkData_c77b4c[a2 - 2];
  }
}

#pragma GCC visibility pop
