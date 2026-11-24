#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD SdkData_e51868[3];
void nn_detail_UnexpectedDefaultImpl_plt_857150();
__int64 nn_fs_12be40(__int64 a1, unsigned int a2);

__int64 nn_fs_12be40(__int64 a1, unsigned int a2)
{
  _QWORD* v2;
  __int64 v3;

  if (a2 >= 3) {
    nn_detail_UnexpectedDefaultImpl_plt_857150();
  }
  v2 = *(_QWORD**)(a1 + 16);
  v3 = SdkData_e51868[a2];
  v2[3] = 0;
  v2[4] = v2 + 4;
  v2[5] = v2 + 4;
  v2[6] = v2 + 6;
  v2[7] = v2 + 6;
  v2[8] = 0;
  *v2 = v3;
  *(_QWORD*)(a1 + 16) = v2;
  return 0;
}

#pragma GCC visibility pop
