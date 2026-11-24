#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvRmMemHandleFree_plt(unsigned int);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_gpu_sdk_ExecuteSparseMapRequests_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
__int64 nn_gpu_sdk_NormalUnmapGpuMemory4K_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_util_IntrusiveRbTreeImpl_Remove(_QWORD*, __int64);
unsigned __int64*
nn_gpu_sdk_util_detail_AddressAllocator_Free(unsigned __int64* result,
                                             unsigned __int64*);
void nn_diag_detail_AbortImpl_plt_856170();
__int64 gpu_sdk_util_buffer_473900(__int64 a1, _QWORD* a2);
__int64 gpu_sdk_util_buffer_474520(__int64* a1, __int64 a2);

__int64 gpu_sdk_util_buffer_473900(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64* v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  void (*v11)(__int64*, _QWORD*);
  __int64 v12;

  v2 = (_QWORD*)*(a2 - 4);
  v3 = *(_QWORD*)a1 + 200LL;
  v4 = (_QWORD*)(*(_QWORD*)a1 + 80LL);
  v5 = a2 - 5;
  v6 = *(_QWORD*)a1 + 16LL;
  nn_gpu_sdk_NormalUnmapGpuMemory4K_plt(*(_QWORD*)(*(_QWORD*)a1 + 8LL), a2[5],
                                        (*a2 << 12) | 0xFFFLL, 1);
  v7 = (unsigned __int64*)*v5;
  if (*v5 != 0) {
    if (*v7 < v4[1] || v7[1] > v4[2]) {
      nn_diag_detail_AbortImpl_plt_856170();
    }
    nn_os_SdkMutexType_Lock_plt((__int64)v4);
    nn_gpu_sdk_util_detail_AddressAllocator_Free(v4 + 3, v7);
    nn_os_SdkMutexType_Unlock_plt((__int64)v4);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 24),
                              0xFFFFFFFFFFFFFFFFLL, memory_order_relaxed);
    (*(void (**)(unsigned __int64*, _QWORD))(v6 + 8))(v7, *(_QWORD*)(v6 + 16));
  }
  if ((unsigned int)NvRmMemHandleFree_plt(*((_DWORD*)v5 + 4)) != 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 24),
                            0xFFFFFFFFFFFFFFFFLL, memory_order_relaxed);
  result = (*(__int64 (**)(_QWORD*, _QWORD))(v6 + 8))(v5, *(_QWORD*)(v6 + 16));
  if (v2 != nullptr) {
    nn_os_SdkMutexType_Lock_plt(v3);
    v9 = v2[7];
    if (v9 == 0) {
      nn_diag_detail_AbortImpl_plt_856170();
    }
    v10 = v9 - 1;
    v2[7] = v10;
    if (v10 == 0) {
      nn_util_IntrusiveRbTreeImpl_Remove((_QWORD*)(v3 + 8), (__int64)(v2 + 1));
      v11 = (void (*)(__int64*, _QWORD*))v2[8];
      v12 = v2[9];
      if (v11 != nullptr) {
        v11(&v12, v2);
      }
    }
    return nn_os_SdkMutexType_Unlock_plt(v3);
  }
  return result;
}

__int64 gpu_sdk_util_buffer_474520(__int64* a1, __int64 a2)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  void (*v18)(_QWORD, _QWORD);
  __int64 v19;
  __int64 v21;
  _QWORD v22[5];
  void (*v23)(_QWORD, _QWORD);
  __int64 v24;

  v4 = *a1;
  v5 = (_QWORD*)(a2 - 32);
  v6 = *(_QWORD*)(*a1 + 8);
  v7 = *a1 + 16;
  v8 = v4 + 200;
  v9 = v6;
  v10 = v5;
  v11 = v5[4];
  v12 = v5[9];
  v13 = (_QWORD*)*v5;
  v14 = v7;
  v15 = v8;
  v21 = 0;
  v22[0] = v12;
  v22[1] = (v11 << 12) - v12 + 4096;
  memset(&v22[2], 0, 24);
  LODWORD(v23) =
      ((__int64 (*)(__int64*, _QWORD, _QWORD, __int64, _QWORD*, __int64,
                    __int64))nn_gpu_sdk_ExecuteSparseMapRequests_plt)(
          &v21, 0, 0, v9, v22, 1, 1);
  if ((_DWORD)v23 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v23);
  }
  if ((unsigned int)NvRmMemHandleFree_plt(*((_DWORD*)v10 + 2)) != 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 24),
                            0xFFFFFFFFFFFFFFFFLL, memory_order_relaxed);
  (*(void (**)(_QWORD*, _QWORD))(v14 + 8))(v10, *(_QWORD*)(v14 + 16));
  nn_os_SdkMutexType_Lock_plt(v15);
  v16 = v13[7];
  if (v16 == 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  v17 = v16 - 1;
  v13[7] = v17;
  if (v17 == 0) {
    nn_util_IntrusiveRbTreeImpl_Remove((_QWORD*)(v15 + 8), (__int64)(v13 + 1));
    v18 = (void (*)(_QWORD, _QWORD))v13[8];
    v19 = v13[9];
    v23 = v18;
    v24 = v19;
    if (v18 != nullptr) {
      v18(&v24, v13);
    }
  }
  return nn_os_SdkMutexType_Unlock_plt(v15);
}

#pragma GCC visibility pop
