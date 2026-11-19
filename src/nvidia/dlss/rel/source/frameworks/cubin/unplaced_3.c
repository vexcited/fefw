#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_common_b4b90(__int64, __int64, __int64, __int64,
                                            ...);
__int64 nvidia_dlss_rel_source_common_b4c00(__int64 result, __int64, __int64,
                                            __int64);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a5720(_QWORD* a1, __int64 a2,
                                                      char a3);

__int64 nvidia_dlss_rel_source_frameworks_cubin_a5720(_QWORD* a1, __int64 a2,
                                                      char a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  int v5;
  __int64 result;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  unsigned int v22;

  if (a2 == 0) {
    return 0;
  }
  v3 = a1[14];
  v5 = *(int*)(v3 + 8) - 1;
  *(_DWORD*)(v3 + 8) = v5;
  if (v5 != 0) {
    return 0;
  }
  (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
  if (*(_QWORD*)(v3 + 40) != 0) {
    v8 = *(_QWORD**)(v3 + 32);
    if (v8 != nullptr) {
      do {
        v9 = (_QWORD*)*v8;
        NgxRoutine_430(v8, 40);
        v8 = v9;
      } while (v9 != nullptr);
    }
    v10 = *(_QWORD*)(v3 + 24);
    *(_QWORD*)(v3 + 32) = 0;
    if (v10 != 0) {
      v11 = *(_QWORD*)(v3 + 16);
      v12 = v10 & 7;
      if (v10 >= 8) {
        v14 = (_QWORD*)(v11 + 32);
        v15 = 0;
        v16 = -(__int64)(v10 & 0xFFFFFFFFFFFFFFF8LL);
        do {
          *(v14 - 4) = 0;
          *(v14 - 3) = 0;
          *(v14 - 2) = 0;
          *(v14 - 1) = 0;
          v15 -= 8;
          *v14 = 0;
          v14[1] = 0;
          v14[2] = 0;
          v14[3] = 0;
          v14 += 8;
        } while (v16 != v15);
        v13 = -v15;
      }
      else {
        v13 = 0;
      }
      if (v12 != 0) {
        v17 = (_QWORD*)(v11 + 8 * v13);
        do {
          *v17++ = 0;
          --v12;
        } while (v12 != 0);
      }
    }
    *(_QWORD*)(v3 + 40) = 0;
  }
  if ((a3 & 1) != 0) {
    (*(void (**)(__int64, double))(*a1 + 112LL))((__int64)a1, 0x0.0p+0);
    nvidia_dlss_rel_source_common_b4c00(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_generic.cpp",
        968, (__int64)"DestroyFeature",
        (__int64)"CollectGarbage(0.0) completed");
  }
  result =
      (*(__int64 (**)(__int64, __int64))(*a1 + 680LL))((__int64)a1, a1[14]);
  if ((_DWORD)result != 0) {
    v22 = result;
    nvidia_dlss_rel_source_common_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_generic.cpp",
        973, (__int64)"DestroyFeature",
        (__int64)"error: ClearCache failed - nvapi status %d", result);
    result = v22;
  }
  a1[14] = 0;
  return result;
}

#pragma GCC visibility pop
