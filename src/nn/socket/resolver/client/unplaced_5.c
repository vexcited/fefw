#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1a51a0(__int64, __int64, _DWORD*);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_os_GetSystemTick_plt();
__int64 nn_socket_resolver_CreateRandomId(void* this_, int* a2);

__int64 nn_socket_resolver_CreateRandomId(void* this_, int* a2)
{
  unsigned int v3;
  unsigned int* v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  _DWORD v17[4];
  _QWORD v18[311];
  __int64 v19;

  v3 = nn_os_GetSystemTick_plt();
  memset_plt((__int64)v17, 0, 0x9C0u);
  v4 = (unsigned int*)v18;
  v5 = -623;
  v6 = 1;
  v17[0] = v3;
  do {
    v7 = v5 + 1812433253 * (v3 ^ (v3 >> 30)) + 624;
    v8 = v5 + 1812433253 * (v7 ^ (v7 >> 30)) + 625;
    *(v4 - 3) = v7;
    *(v4 - 2) = v8;
    v9 = v5 + 1812433253 * (v8 ^ (v8 >> 30)) + 626;
    v10 = v5 + 1812433253 * (v9 ^ (v9 >> 30)) + 627;
    *(v4 - 1) = v9;
    *v4 = v10;
    v11 = v5 + 1812433253 * (v10 ^ (v10 >> 30)) + 628;
    v12 = v5 + 1812433253 * (v11 ^ (v11 >> 30)) + 629;
    v4[1] = v11;
    v4[2] = v12;
    v13 = 1812433253 * (v12 ^ (v12 >> 30));
    v14 = v6 + v13;
    v15 = v5 + v13;
    v6 += 7;
    v5 += 7;
    v3 = v14 + 6;
    v4[3] = v15 + 630;
    v4 += 7;
  } while (v5 != 0);
  v18[310] = 0;
  v19 = 0x7FFFFFFF00000004LL;
  *(_DWORD*)this_ = SdkRoutine_1a51a0((__int64)&v19, (__int64)v17, &v19);
  return 0;
}

#pragma GCC visibility pop
