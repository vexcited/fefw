#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* nvidia_dlss_rel_source_39180(_QWORD*);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 dlaa_36630(__int64, __int64, char);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nvidia_dlss_rel_source_features_dlaa_60200(_QWORD*);
__int64 nvidia_dlss_rel_source_features_dlaa_76570(__int64*, __int64, __int64,
                                                   unsigned __int64);
char* nvidia_dlss_rel_source_features_dlaa_97540(__int64, __int64, __int64*,
                                                 unsigned __int64);
float sqrtf_plt(float);
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
__int64 nvidia_dlss_rel_source_features_dlaa_36500(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_8e4a0(__int64* a1, __int64* a2,
                                                   __int64* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_90960(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_91fe0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_94c00(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);

__int64 nvidia_dlss_rel_source_features_dlaa_36500(_QWORD* a1)
{
  _QWORD* i;
  _QWORD* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;

  for (i = (_QWORD*)a1[298]; i != nullptr; i = (_QWORD*)*i) {
    dlaa_36630((__int64)a1, (__int64)(i + 3), 0);
  }
  if (a1[299] != 0) {
    v3 = (_QWORD*)a1[298];
    if (v3 != nullptr) {
      do {
        v4 = (_QWORD*)*v3;
        nvidia_dlss_rel_source_39180(v3 + 24);
        NgxRoutine_430(v3, 3056);
        v3 = v4;
      } while (v4 != nullptr);
    }
    v5 = a1[297];
    a1[298] = 0;
    if (v5 == 0) {
      goto LABEL_15;
    }
    v6 = a1[296];
    v7 = v5 & 7;
    if (v5 >= 8) {
      v9 = (_QWORD*)(v6 + 32);
      v10 = 0;
      v11 = -(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        *(v9 - 4) = 0;
        *(v9 - 3) = 0;
        *(v9 - 2) = 0;
        *(v9 - 1) = 0;
        v10 -= 8;
        *v9 = 0;
        v9[1] = 0;
        v9[2] = 0;
        v9[3] = 0;
        v9 += 8;
      } while (v11 != v10);
      v8 = -v10;
      if (v7 == 0) {
        goto LABEL_15;
      }
    }
    else {
      v8 = 0;
      if ((v5 & 7) == 0) {
      LABEL_15:
        a1[299] = 0;
        goto LABEL_16;
      }
    }
    v12 = (_QWORD*)(v6 + 8 * v8);
    do {
      *v12++ = 0;
      --v7;
    } while (v7 != 0);
    goto LABEL_15;
  }
LABEL_16:
  nvidia_dlss_rel_source_features_dlaa_60200(a1 + 1);
  v13 = a1[301];
  if (v13 != 0 &&
      (*(unsigned int (**)(__int64))(*(_QWORD*)v13 + 24LL))(v13) != 0) {
    return 3134193666LL;
  }
  else {
    return 1;
  }
}

__int64 nvidia_dlss_rel_source_features_dlaa_8e4a0(__int64* a1, __int64* a2,
                                                   __int64* a3, __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _WORD* v21;
  __int16 v22;
  __int16 v23;

  v5 = *a2;
  v4 = a2[1];
  v10 = v4 - *a2;
  if (v4 == *a2) {
    v12 = nullptr;
    v14 = 0;
    result = *a4;
    if (*a4 != 0) {
    LABEL_9:
      v17 = a4[2];
      a4[1] = result;
      result = NgxRoutine_430(result, v17 - result);
    }
  }
  else {
    if (v10 < 0) {
      nvidia_dlss_rel_source_common_33410();
    }
    v11 = NgxRoutine_420(v4 - *a2);
    v12 = (_QWORD*)(v11 + v10);
    v13 = v10 & 7;
    v14 = v11;
    v15 = (_QWORD*)v11;
    if ((v10 & 7) != 0) {
      v15 = (_QWORD*)v11;
      do {
        *(_BYTE*)v15 = 0;
        v15 = (_QWORD*)((char*)v15 + 1);
        --v13;
      } while (v13 != 0);
    }
    if ((unsigned __int64)(v5 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        *v15++ = 0;
      } while (v15 != v12);
    }
    result = *a4;
    if (*a4 != 0) {
      goto LABEL_9;
    }
  }
  v18 = *a1;
  *a4 = v14;
  a4[1] = (__int64)v12;
  a4[2] = (__int64)v12;
  *a3 = v18;
  if (a3 == a1) {
    a3[4] = a1[4];
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (a1[2] - a1[1]) >> 3);
    a3[4] = a1[4];
    result = nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                                        (a1[6] - a1[5]) >> 3);
  }
  v19 = *a2;
  v20 = 3;
  v21 = (_WORD*)(*a4 + 4);
  do {
    *(v21 - 2) =
        *(_WORD*)(v19 +
                  2LL * (unsigned __int16)((unsigned __int16)(v20 - 3) / 0x60u +
                                           4 * ((unsigned __int16)(v20 - 3) %
                                                0x60u)));
    *(v21 - 1) =
        *(_WORD*)(v19 +
                  2LL * (unsigned __int16)((unsigned __int16)(v20 - 2) / 0x60u +
                                           4 * ((unsigned __int16)(v20 - 2) %
                                                0x60u)));
    *v21 =
        *(_WORD*)(v19 +
                  2LL * (unsigned __int16)((unsigned __int16)(v20 - 1) / 0x60u +
                                           4 * ((unsigned __int16)(v20 - 1) %
                                                0x60u)));
    v22 = (unsigned __int16)v20 / 0x60u;
    v23 = (unsigned __int16)v20 % 0x60u;
    v20 += 4;
    v21[1] = *(_WORD*)(v19 + 2LL * (unsigned __int16)(v22 + 4 * v23));
    v21 += 4;
  } while (v20 != 387);
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_90960(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4)
{

#pragma clang fp contract(off)
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  char v28;
  unsigned int v29;
  char v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  int v35;
  bool v36;
  int v37;
  __int64 result;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  struct {
    unsigned int v43;
    float v44;
  } v43_;

  v8 = sqrtf_plt(0x1.0000000000000p+6f);
  *a3 = *a1;
  if (a3 != a1) {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (__int64)(a1[2] - a1[1]) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
    v10 = *a2;
    v9 = a2[1];
    v11 = v9 - *a2;
    if (v9 != *a2) {
      goto LABEL_3;
    }
  LABEL_46:
    v13 = nullptr;
    v15 = 0;
    v17 = *a4;
    if (*a4 == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  a3[4] = a1[4];
  v10 = *a2;
  v9 = a2[1];
  v11 = v9 - *a2;
  if (v9 == *a2) {
    goto LABEL_46;
  }
LABEL_3:
  if (v11 < 0) {
    nvidia_dlss_rel_source_common_33410();
  }
  v12 = NgxRoutine_420(v11);
  v13 = (_QWORD*)(v12 + v11);
  v14 = v11 & 7;
  v15 = v12;
  v16 = (_QWORD*)v12;
  if ((v11 & 7) != 0) {
    v16 = (_QWORD*)v12;
    do {
      *(_BYTE*)v16 = 0;
      v16 = (_QWORD*)((char*)v16 + 1);
      --v14;
    } while (v14 != 0);
  }
  if ((unsigned __int64)(v10 - v9) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      *v16++ = 0;
    } while (v16 != v13);
  }
  v17 = *a4;
  if (*a4 != 0) {
  LABEL_10:
    v18 = a4[2];
    a4[1] = v17;
    NgxRoutine_430(v17, v18 - v17);
  }
LABEL_11:
  *a4 = v15;
  a4[1] = (__int64)v13;
  a4[2] = (__int64)v13;
  v19 = 0;
  v20 = *a2;
  do {
    v22 = *(unsigned __int16*)(v20 + v19);
    v23 = v22 >> 15;
    v24 = (v22 >> 10) & 0x1F;
    v25 = v22 << 13;
    v26 = v25 & 0x7FE000;
    v27 = __clz((unsigned int)(v25 & 0x7FE000));
    v28 = v27 ^ 0x1F;
    v29 = 121 - v27;
    v30 = 23 - v28;
    if ((v25 & 0x7FE000) == 0) {
      v29 = 0;
    }
    v31 = v25 << v30;
    v32 = v24 + 112;
    v33 = v31 & 0x7FC000;
    if (v26 != 0) {
      v34 = 0;
    }
    else {
      v33 = 0;
      v34 = v23;
    }
    if (v26 != 0) {
      v35 = 0x7FFFFF;
    }
    else {
      v35 = 0;
    }
    if (v24 == 31) {
      v32 = 255;
      v26 = v35;
    }
    else {
      v34 = v23;
    }
    v36 = v24 == 0;
    if (v24 != 0) {
      v37 = v32;
    }
    else {
      v37 = v29;
    }
    if (!v36) {
      v33 = v26;
      v23 = v34;
    }
    v43_.v43 = v33 | (v37 << 23) | (v23 << 31);
    memcpy_plt((__int64)&v43_.v44, (__int64)&v43_.v43, 4u);
    v43_.v44 = v8 * v43_.v44;
    result = memcpy_plt((__int64)&v43_.v43, (__int64)&v43_.v44, 4u);
    v39 = v43_.v43 & 0x7FFFFFFF;
    v21 = HIWORD(v43_.v43) & 0x8000;
    if ((unsigned __int8)(v43_.v43 >> 23) == 255) {
      LOWORD(v21) = v21 | 0x7C00;
      if (v39 != 2139095040) {
        LOWORD(v21) = 0x7FFF;
      }
    }
    else {
      if (v39 < 0x477FF000) {
        v40 = v39 >> 23;
        if (v39 >> 23 < 0x71) {
          if (v39 < 0x33000001) {
            goto LABEL_13;
          }
          v42 = v43_.v43 & 0x7FFFFF | 0x800000;
          v41 = v42 << (v40 - 94);
          v21 |= v42 >> (126 - v40);
          if (v41 > 0x80000000) {
          LABEL_12:
            LOWORD(v21) = v21 + 1;
            goto LABEL_13;
          }
        }
        else {
          v41 = v43_.v43 << 19;
          v21 |= (v39 - 939524096) >> 13;
          if (v43_.v43 << 19 > 0x80000000) {
            goto LABEL_12;
          }
        }
        if (v41 != 0x80000000) {
          goto LABEL_13;
        }
      }
      else {
        LOWORD(v21) = v21 | 0x7BFF;
      }
      if ((v21 & 1) != 0) {
        goto LABEL_12;
      }
    }
  LABEL_13:
    *(_WORD*)(v15 + v19) = v21;
    v19 += 2;
  } while (v19 != 128);
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_91fe0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4)
{
  unsigned __int64* v5;
  unsigned __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  _WORD* v24;
  int v25;
  __int64 v26;
  _WORD* v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int16 v36;
  _QWORD v37[3];
  __int64 v38;

  v5 = (unsigned __int64*)a1[1];
  v8 = *v5;
  *a3 = *a1;
  if (a3 == a1) {
    a3[4] = a1[4];
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(
        a3 + 1, (__int64)v5, a1[2], (__int64)(a1[2] - (_QWORD)v5) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
  }
  v37[0] = v8 >> 5;
  v37[1] = 32;
  v37[2] = 64;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (__int64)v37,
                                             &v38, 3u);
  v11 = *a2;
  v10 = a2[1];
  v12 = v10 - *a2;
  if (v10 == *a2) {
    v14 = nullptr;
    v16 = 0;
    result = *a4;
    if (*a4 != 0) {
    LABEL_12:
      v19 = a4[2];
      a4[1] = result;
      result = NgxRoutine_430(result, v19 - result);
    }
  }
  else {
    if (v12 < 0) {
      nvidia_dlss_rel_source_common_33410();
    }
    v13 = NgxRoutine_420(v10 - *a2);
    v14 = (_QWORD*)(v13 + v12);
    v15 = v12 & 7;
    v16 = v13;
    v17 = (_QWORD*)v13;
    if ((v12 & 7) != 0) {
      v17 = (_QWORD*)v13;
      do {
        *(_BYTE*)v17 = 0;
        v17 = (_QWORD*)((char*)v17 + 1);
        --v15;
      } while (v15 != 0);
    }
    if ((unsigned __int64)(v11 - v10) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        *v17++ = 0;
      } while (v17 != v14);
    }
    result = *a4;
    if (*a4 != 0) {
      goto LABEL_12;
    }
  }
  *a4 = v16;
  a4[1] = (__int64)v14;
  a4[2] = (__int64)v14;
  if (v8 >= 0x20) {
    v20 = 0;
    v21 = 0;
    v22 = *a2 + 8;
    do {
      v23 = 0;
      v24 = (_WORD*)v22;
      do {
        v25 = 0;
        v26 = 0;
        v27 = v24;
        result = (4 * (v23 & 7)) | 1;
        do {
          v28 = (unsigned int)v26 >> 4;
          v29 = v25 & 4;
          v26 += 8;
          v25 += 4;
          v30 = v16 + 2 * v20 + ((v28 | (v23 >> 2) & 4) << 9);
          v31 = v29 | (unsigned int)(v23 & 8);
          v32 = v30 + 64 * (v23 & 7);
          *(_WORD*)(v32 + v31) = *(v27 - 4);
          *(_WORD*)(v32 + v31 + 2) = *(v27 - 3);
          v33 = v30 + 16 * result;
          *(_WORD*)(v33 + v31) = *(v27 - 2);
          *(_WORD*)(v33 + v31 + 2) = *(v27 - 1);
          v34 = v30 + 16 * ((4 * (v23 & 7)) | 2);
          v35 = v30 + 16 * ((4 * (v23 & 7)) | 3);
          *(_WORD*)(v34 + v31) = *v27;
          *(_WORD*)(v34 + v31 + 2) = v27[1];
          *(_WORD*)(v35 + v31) = v27[2];
          v36 = v27[3];
          v27 += 8;
          *(_WORD*)(v35 + v31 + 2) = v36;
        } while (v26 != 64);
        ++v23;
        v24 += 64;
      } while (v23 != 32);
      v20 += 2048;
      ++v21;
      v22 += 4096;
    } while (v21 != v8 >> 5);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_94c00(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4)
{

#pragma clang fp contract(off)
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  char v28;
  unsigned int v29;
  char v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  int v35;
  bool v36;
  int v37;
  __int64 result;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  struct {
    unsigned int v43;
    float v44;
  } v43_;

  v8 = sqrtf_plt(0x1.0000000000000p+5f);
  *a3 = *a1;
  if (a3 != a1) {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (__int64)(a1[2] - a1[1]) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
    {
      v10 = *a2;
      __asm__ volatile("" ::"r"(v10));
    }
    {
      v9 = a2[1];
      __asm__ volatile("" ::"r"(v9));
    }
    v11 = v9 - *a2;
    if (v9 != *a2) {
      goto LABEL_3;
    }
  LABEL_46:
    v13 = nullptr;
    v15 = 0;
    {
      v17 = *a4;
      __asm__ volatile("" ::"r"(v17));
    }
    if (*a4 == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  a3[4] = a1[4];
  {
    v10 = *a2;
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v9 = a2[1];
    __asm__ volatile("" ::"r"(v9));
  }
  v11 = v9 - *a2;
  if (v9 == *a2) {
    goto LABEL_46;
  }
LABEL_3:
  if (v11 < 0) {
    nvidia_dlss_rel_source_common_33410();
  }
  v12 = NgxRoutine_420(v11);
  v13 = (_QWORD*)(v12 + v11);
  v14 = v11 & 7;
  v15 = v12;
  v16 = (_QWORD*)v12;
  if ((v11 & 7) != 0) {
    v16 = (_QWORD*)v12;
    do {
      *(_BYTE*)v16 = 0;
      v16 = (_QWORD*)((char*)v16 + 1);
      --v14;
    } while (v14 != 0);
  }
  if ((unsigned __int64)(v10 - v9) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      *v16++ = 0;
    } while (v16 != v13);
  }
  {
    v17 = *a4;
    __asm__ volatile("" ::"r"(v17));
  }
  if (*a4 != 0) {
  LABEL_10:
    {
      v18 = a4[2];
      __asm__ volatile("" ::"r"(v18));
    }
    a4[1] = v17;
    NgxRoutine_430(v17, v18 - v17);
  }
LABEL_11:
  *a4 = v15;
  a4[1] = (__int64)v13;
  a4[2] = (__int64)v13;
  v19 = 0;
  {
    v20 = *a2;
    __asm__ volatile("" ::"r"(v20));
  }
  do {
    {
      v22 = *(unsigned __int16*)(v20 + v19);
      __asm__ volatile("" ::"r"(v22));
    }
    v23 = v22 >> 15;
    v24 = (v22 >> 10) & 0x1F;
    v25 = v22 << 13;
    v26 = v25 & 0x7FE000;
    v27 = __clz((unsigned int)(v25 & 0x7FE000));
    v28 = v27 ^ 0x1F;
    v29 = 121 - v27;
    v30 = 23 - v28;
    if ((v25 & 0x7FE000) == 0) {
      v29 = 0;
    }
    v31 = v25 << v30;
    v32 = v24 + 112;
    v33 = v31 & 0x7FC000;
    if (v26 != 0) {
      v34 = 0;
    }
    else {
      v33 = 0;
      v34 = v23;
    }
    if (v26 != 0) {
      v35 = 0x7FFFFF;
    }
    else {
      v35 = 0;
    }
    if (v24 == 31) {
      v32 = 255;
      v26 = v35;
    }
    else {
      v34 = v23;
    }
    v36 = v24 == 0;
    if (v24 != 0) {
      v37 = v32;
    }
    else {
      v37 = v29;
    }
    if (!v36) {
      v33 = v26;
      v23 = v34;
    }
    v43_.v43 = v33 | (v37 << 23) | (v23 << 31);
    memcpy_plt((__int64)&v43_.v44, (__int64)&v43_.v43, 4u);
    v43_.v44 = v8 * v43_.v44;
    result = memcpy_plt((__int64)&v43_.v43, (__int64)&v43_.v44, 4u);
    v39 = v43_.v43 & 0x7FFFFFFF;
    v21 = HIWORD(v43_.v43) & 0x8000;
    if ((unsigned __int8)(v43_.v43 >> 23) == 255) {
      LOWORD(v21) = v21 | 0x7C00;
      if (v39 != 2139095040) {
        LOWORD(v21) = 0x7FFF;
      }
    }
    else {
      if (v39 < 0x477FF000) {
        v40 = v39 >> 23;
        if (v39 >> 23 < 0x71) {
          if (v39 < 0x33000001) {
            goto LABEL_13;
          }
          v42 = v43_.v43 & 0x7FFFFF | 0x800000;
          v41 = v42 << (v40 - 94);
          v21 |= v42 >> (126 - v40);
          if (v41 > 0x80000000) {
          LABEL_12:
            LOWORD(v21) = v21 + 1;
            goto LABEL_13;
          }
        }
        else {
          v41 = v43_.v43 << 19;
          v21 |= (v39 - 939524096) >> 13;
          if (v43_.v43 << 19 > 0x80000000) {
            goto LABEL_12;
          }
        }
        if (v41 != 0x80000000) {
          goto LABEL_13;
        }
      }
      else {
        LOWORD(v21) = v21 | 0x7BFF;
      }
      if ((v21 & 1) != 0) {
        goto LABEL_12;
      }
    }
  LABEL_13:
    *(_WORD*)(v15 + v19) = v21;
    v19 += 2;
  } while (v19 != 64);
  return result;
}

#pragma GCC visibility pop
