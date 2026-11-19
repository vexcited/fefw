#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_e2db0();
__int64 NgxRoutine_e2de0();
__int64 nvidia_dlss_rel_source_b6980(__int64*, __int64*);
__int64 nvidia_dlss_rel_source_features_dlaa_7c2a0(__int64);
const char* NgxRoutine_a9d20();
extern __int64* NgxData_9547b0[2];
extern __int64 NgxData_2b88b30;
extern __int64 NgxData_2b88b38;
extern __int64 NgxData_2b88b40;
extern __int64 NgxData_2b88b48;
extern __int64 NgxData_2b88b68;
extern __int64 NgxData_2b88b70;
extern __int64 NgxData_2b88b78;
extern __int64 NgxData_2b88b80;
char* nvidia_dlss_rel_source_a3ef0(__int64* a1);
__int64 nvidia_dlss_rel_source_b59a0();

char* nvidia_dlss_rel_source_a3ef0(__int64* a1)
{
  __int64 v1;
  int v3;

  {
    v1 = *a1;
    __asm__ volatile("" ::"r"(v1));
  }
  v3 = 1;
  if ((*(unsigned int (**)(__int64, int*))(*(_QWORD*)v1 + 104LL))(v1, &v3) !=
      0) {
    return "n/a";
  }
  if (v3 > 2) {
    switch (v3) {
    case 3:
      return "CUDA";
    case 4:
      return "PPE";
    case 5:
      return NgxRoutine_a9d20();
    default:
      return "n/a";
    }
  }
  else if (v3 != 0) {
    if (v3 != 1) {
      if (v3 == 2) {
        return "VK";
      }
      return "n/a";
    }
    return "D3D12";
  }
  else {
    return "D3D11";
  }
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_b59a0()
{
  __int64* v0;
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;

  NgxRoutine_e2db0();
  v0 = (__int64*)NgxData_2b88b40;
  if (NgxData_2b88b40 != 0) {
    v1 = NgxData_9547b0[0];
    do {
      nvidia_dlss_rel_source_features_dlaa_7c2a0((__int64)(v0 + 3));
      v0 = (__int64*)nvidia_dlss_rel_source_b6980(v1, v0);
    } while (v0 != nullptr);
  }
  if (NgxData_2b88b48 != 0) {
    v2 = (_QWORD*)NgxData_2b88b40;
    if (NgxData_2b88b40 != 0) {
      do {
        v6 = (_QWORD*)*v2;
        nvidia_dlss_rel_source_features_dlaa_7c2a0((__int64)(v2 + 3));
        if ((v2[5] & 1) != 0) {
          NgxRoutine_430(v2[7], (4LL * v2[5]) & 0xFFFFFFFFFFFFFFF8LL);
        }
        NgxRoutine_430(v2, 136);
        v2 = v6;
      } while (v6 != nullptr);
    }
    NgxData_2b88b40 = 0;
    if (NgxData_2b88b38 == 0) {
      goto LABEL_19;
    }
    v3 = NgxData_2b88b30;
    v4 = NgxData_2b88b38 & 7;
    if ((unsigned __int64)NgxData_2b88b38 >= 8) {
      v7 = (_QWORD*)(NgxData_2b88b30 + 32);
      v8 = 0;
      v9 = -(__int64)(NgxData_2b88b38 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        *(v7 - 4) = 0;
        *(v7 - 3) = 0;
        *(v7 - 2) = 0;
        *(v7 - 1) = 0;
        v8 -= 8;
        *v7 = 0;
        v7[1] = 0;
        v7[2] = 0;
        v7[3] = 0;
        v7 += 8;
      } while (v9 != v8);
      v5 = -v8;
      if (v4 == 0) {
        goto LABEL_19;
      }
    }
    else {
      v5 = 0;
      if ((NgxData_2b88b38 & 7) == 0) {
      LABEL_19:
        NgxData_2b88b48 = 0;
        goto LABEL_20;
      }
    }
    v10 = (_QWORD*)(v3 + 8 * v5);
    do {
      *v10++ = 0;
      --v4;
    } while (v4 != 0);
    goto LABEL_19;
  }
LABEL_20:
  if (NgxData_2b88b80 != 0) {
    v11 = (_QWORD*)NgxData_2b88b78;
    if (NgxData_2b88b78 != 0) {
      do {
        v12 = (_QWORD*)*v11;
        NgxRoutine_430(v11, 32);
        v11 = v12;
      } while (v12 != nullptr);
    }
    NgxData_2b88b78 = 0;
    if (NgxData_2b88b70 == 0) {
      goto LABEL_32;
    }
    v13 = NgxData_2b88b68;
    v14 = NgxData_2b88b70 & 7;
    if ((unsigned __int64)NgxData_2b88b70 >= 8) {
      v16 = (_QWORD*)(NgxData_2b88b68 + 32);
      v17 = 0;
      v18 = -(__int64)(NgxData_2b88b70 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        *(v16 - 4) = 0;
        *(v16 - 3) = 0;
        *(v16 - 2) = 0;
        *(v16 - 1) = 0;
        v17 -= 8;
        *v16 = 0;
        v16[1] = 0;
        v16[2] = 0;
        v16[3] = 0;
        v16 += 8;
      } while (v18 != v17);
      v15 = -v17;
      if (v14 == 0) {
        goto LABEL_32;
      }
    }
    else {
      v15 = 0;
      if ((NgxData_2b88b70 & 7) == 0) {
      LABEL_32:
        NgxData_2b88b80 = 0;
        goto LABEL_33;
      }
    }
    v19 = (_QWORD*)(v13 + 8 * v15);
    do {
      *v19++ = 0;
      --v14;
    } while (v14 != 0);
    goto LABEL_32;
  }
LABEL_33:
  NgxRoutine_e2de0();
  return 1;
}

#pragma GCC visibility pop
