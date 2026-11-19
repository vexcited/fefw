#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gxc_NvnStateCache_CopyLocks(__int64 result, __int64);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 nn_os_WaitLightEvent(__int64);
__int64 gfx_194dbd0(_QWORD* a1, __int64 a2);

__int64 gfx_194dbd0(_QWORD* a1, __int64 a2)
{
  int* v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  int* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  nn_os_WaitLightEvent((__int64)(a1 + 62));
  v4 = (int*)a1[73];
  v5 = &v4[6 * v4[24]];
  v6 = v4[22];
  v4[22] = v6 + 1;
  v8 = v5 + 10;
  v7 = *((_QWORD*)v5 + 5);
  if (v6 >= (signed __int64)(*((_QWORD*)v8 + 1) - v7) >> 4) {
    return 0;
  }
  v9 = (__int64*)(v7 + 16 * v6);
  ++v4[23];
  v10 = *v9;
  if (*v9 == 0) {
    return 0;
  }
  v11 = v9[1];
  v12 = a1[75];
  a1[70] = v10;
  a1[71] = v12;
  a1[72] = v11;
  gxc_NvnStateCache_Reset(v12);
  gxc_NvnStateCache_CopyLocks(a1[71], *(_QWORD*)(a2 + 8));
  return 1;
}

#pragma GCC visibility pop
