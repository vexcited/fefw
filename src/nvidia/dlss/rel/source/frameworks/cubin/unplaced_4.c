#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 ngx_cubin_generic_a4110(__int64*);
__int64 vkDestroyDescriptorSetLayout_plt(_QWORD, _QWORD, _QWORD);
__int64 vkDestroyPipelineLayout_plt(_QWORD, _QWORD, _QWORD);
__int64 vkDestroyPipeline_plt(_QWORD, _QWORD, _QWORD);
__int64 vkDestroySampler_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_frameworks_cubin_b7820(__int64 a1);
__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_frameworks_cubin_b7820(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* i;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;

  v1 = *(_QWORD*)(a1 + 960);
  if (v1 != 0) {
    vkDestroySampler_plt(*(_QWORD*)(a1 + 840), v1, 0);
    *(_QWORD*)(a1 + 960) = 0;
  }
  v3 = *(_QWORD*)(a1 + 968);
  if (v3 != 0) {
    vkDestroySampler_plt(*(_QWORD*)(a1 + 840), v3, 0);
    *(_QWORD*)(a1 + 968) = 0;
  }
  v4 = *(_QWORD*)(a1 + 976);
  if (v4 != 0) {
    vkDestroySampler_plt(*(_QWORD*)(a1 + 840), v4, 0);
    *(_QWORD*)(a1 + 976) = 0;
  }
  vkDestroyDescriptorSetLayout_plt(*(_QWORD*)(a1 + 840), *(_QWORD*)(a1 + 1656),
                                   0);
  vkDestroyPipelineLayout_plt(*(_QWORD*)(a1 + 840), *(_QWORD*)(a1 + 1640), 0);
  vkDestroyPipeline_plt(*(_QWORD*)(a1 + 840), *(_QWORD*)(a1 + 1664), 0);
  ngx_cubin_generic_a4110((__int64*)a1);
  for (i = *(_QWORD**)(a1 + 24); i != nullptr; i = (_QWORD*)*i) {
    v12 = i[3];
    (*(void (**)(__int64, __int64, __int64))(a1 + 904))(
        *(_QWORD*)(a1 + 840), *(_QWORD*)(v12 + 16), 0);
    (*(void (**)(__int64, __int64, __int64))(a1 + 896))(*(_QWORD*)(a1 + 840),
                                                        *(_QWORD*)(v12 + 8), 0);
    v13 = i[3];
    if (v13 != 0) {
      NgxRoutine_430(v13, 4);
    }
  }
  if (*(_QWORD*)(a1 + 32) != 0) {
    v6 = *(_QWORD**)(a1 + 24);
    if (v6 != nullptr) {
      do {
        v7 = (_QWORD*)*v6;
        NgxRoutine_430(v6, 32);
        v6 = v7;
      } while (v7 != nullptr);
    }
    v8 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 24) = 0;
    if (v8 == 0) {
      goto LABEL_23;
    }
    v9 = *(_QWORD*)(a1 + 8);
    v10 = v8 & 7;
    if (v8 >= 8) {
      v14 = (_QWORD*)(v9 + 32);
      v15 = 0;
      v16 = -(__int64)(v8 & 0xFFFFFFFFFFFFFFF8LL);
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
      v11 = -v15;
      if (v10 == 0) {
        goto LABEL_23;
      }
    }
    else {
      v11 = 0;
      if ((v8 & 7) == 0) {
      LABEL_23:
        *(_QWORD*)(a1 + 32) = 0;
        return 0;
      }
    }
    v17 = (_QWORD*)(v9 + 8 * v11);
    do {
      *v17++ = 0;
      --v10;
    } while (v10 != 0);
    goto LABEL_23;
  }
  return 0;
}

#pragma GCC visibility pop
