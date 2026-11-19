#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nvidia_dlss_rel_source_features_dlaa_76570(__int64*, __int64, __int64,
                                                   unsigned __int64);
char* nvidia_dlss_rel_source_features_dlaa_97540(__int64, __int64, __int64*,
                                                 unsigned __int64);
float sqrtf_plt(float);
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
_WORD* nvidia_dlss_rel_source_features_dlaa_7d8c0(_QWORD* a1, _QWORD* a2,
                                                  _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_7db20(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_80220(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_81ba0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_84d40(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_860a0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_88a20(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_8bf40(__int64* a1, __int64* a2,
                                                   __int64* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_8d220(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_8f9e0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_91cc0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_92520(__int64* a1, __int64* a2,
                                                   __int64* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_92940(__int64* a1, __int64* a2,
                                                   __int64* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_92b60(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_93ec0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_94720(__int64* a1, __int64* a2,
                                                   __int64* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_949e0(__int64* a1, __int64* a2,
                                                   __int64* a3, __int64* a4);
__attribute__((no_builtin("memset", "memcpy", "memmove"))) _WORD*

nvidia_dlss_rel_source_features_dlaa_7d8c0(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                                           __int64* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  _WORD* v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  _WORD* v27;
  __int64 v28;
  _WORD* v29;
  __int64 v30;
  __int64 v31;
  _WORD* result;
  _WORD* v33;
  __int64 v34;
  _WORD* v35;
  _WORD* v36;
  _WORD* v37;
  _WORD* v38;
  _QWORD v39[2];
  __int64 v40;

  *a3 = *a1;
  if (a3 == a1) {
    a3[4] = a1[4];
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (__int64)(a1[2] - a1[1]) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
  }
  v39[0] = 32;
  v39[1] = 16;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (__int64)v39,
                                             &v40, 2u);
  v9 = *a2;
  v8 = a2[1];
  v10 = v8 - *a2;
  if (v8 == *a2) {
    v12 = nullptr;
    v14 = 0;
    v16 = *a4;
    if (*a4 == 0) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  if (v10 < 0) {
    nvidia_dlss_rel_source_common_33410();
  }
  v11 = NgxRoutine_420(v8 - *a2);
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
  if ((unsigned __int64)(v9 - v8) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      *v15++ = 0;
    } while (v15 != v12);
  }
  v16 = *a4;
  if (*a4 != 0) {
  LABEL_12:
    v17 = a4[2];
    a4[1] = v16;
    NgxRoutine_430(v16, v17 - v16);
  }
LABEL_13:
  *a4 = v14;
  a4[1] = (__int64)v12;
  v18 = 0;
  v19 = 0;
  a4[2] = (__int64)v12;
  v20 = (_WORD*)(*a2 + 16LL);
  do {
    v21 = (unsigned int)v19 >> 4;
    v22 = v18 & 0x1C;
    v23 = v19++ & 8;
    v18 += 4;
    v24 = v14 + (v21 << 9);
    v25 = (unsigned int)v23 >> 2;
    v26 = v24 + 16LL * v22;
    v27 = (_WORD*)(v26 + v23);
    *v27 = *(v20 - 8);
    v27[1] = *(v20 - 7);
    v28 = v24 + 16LL * (v22 | 1);
    v29 = (_WORD*)(v28 + v23);
    *v29 = *(v20 - 6);
    v29[1] = *(v20 - 5);
    v30 = v24 + 16LL * (v22 | 2);
    v31 = v24 + 16LL * (v22 | 3);
    result = (_WORD*)(v30 + v23);
    v33 = (_WORD*)(v31 + v23);
    *result = *(v20 - 4);
    result[1] = *(v20 - 3);
    *v33 = *(v20 - 2);
    v33[1] = *(v20 - 1);
    v34 = 4LL * (v25 | 1);
    v35 = (_WORD*)(v26 + v34);
    v36 = (_WORD*)(v31 + v34);
    *v35 = *v20;
    v35[1] = v20[1];
    v37 = (_WORD*)(v28 + v34);
    *v37 = v20[2];
    v37[1] = v20[3];
    v38 = (_WORD*)(v30 + v34);
    *v38 = v20[4];
    v38[1] = v20[5];
    *v36 = v20[6];
    LOWORD(v33) = v20[7];
    v20 += 16;
    v36[1] = (_WORD)v33;
  } while (v19 != 32);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_7db20(_QWORD* a1, __int64* a2, _QWORD* a3,
                                           __int64* a4)
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
  } while (v19 != 64);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_80220(_QWORD* a1, __int64* a2, _QWORD* a3,
                                           __int64* a4)
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

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_81ba0(_QWORD* a1, __int64* a2, _QWORD* a3,
                                           __int64* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  char v27;
  unsigned int v28;
  char v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  bool v35;
  int v36;
  __int64 result;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  struct {
    unsigned int v42;
    int v43;
  } v42_;

  *a3 = *a1;
  if (a3 != a1) {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (__int64)(a1[2] - a1[1]) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
    v9 = *a2;
    v8 = a2[1];
    v10 = v8 - *a2;
    if (v8 != *a2) {
      goto LABEL_3;
    }
  LABEL_46:
    v12 = nullptr;
    v14 = 0;
    v16 = *a4;
    if (*a4 == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  a3[4] = a1[4];
  v9 = *a2;
  v8 = a2[1];
  v10 = v8 - *a2;
  if (v8 == *a2) {
    goto LABEL_46;
  }
LABEL_3:
  if (v10 < 0) {
    nvidia_dlss_rel_source_common_33410();
  }
  v11 = NgxRoutine_420(v10);
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
  if ((unsigned __int64)(v9 - v8) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      *v15++ = 0;
    } while (v15 != v12);
  }
  v16 = *a4;
  if (*a4 != 0) {
  LABEL_10:
    v17 = a4[2];
    a4[1] = v16;
    NgxRoutine_430(v16, v17 - v16);
  }
LABEL_11:
  *a4 = v14;
  a4[1] = (__int64)v12;
  a4[2] = (__int64)v12;
  v18 = 0;
  v19 = *a2;
  do {
    v21 = *(unsigned __int16*)(v19 + v18);
    v22 = v21 >> 15;
    v23 = (v21 >> 10) & 0x1F;
    v24 = v21 << 13;
    v25 = v24 & 0x7FE000;
    v26 = __clz((unsigned int)(v24 & 0x7FE000));
    v27 = v26 ^ 0x1F;
    v28 = 121 - v26;
    v29 = 23 - v27;
    if ((v24 & 0x7FE000) == 0) {
      v28 = 0;
    }
    v30 = v24 << v29;
    v31 = v23 + 112;
    v32 = v30 & 0x7FC000;
    if (v25 != 0) {
      v33 = 0;
    }
    else {
      v32 = 0;
      v33 = v22;
    }
    if (v25 != 0) {
      v34 = 0x7FFFFF;
    }
    else {
      v34 = 0;
    }
    if (v23 == 31) {
      v31 = 255;
      v25 = v34;
    }
    else {
      v33 = v22;
    }
    v35 = v23 == 0;
    if (v23 != 0) {
      v36 = v31;
    }
    else {
      v36 = v28;
    }
    if (!v35) {
      v32 = v25;
      v22 = v33;
    }
    v42_.v42 = v32 | (v36 << 23) | (v22 << 31);
    memcpy_plt((__int64)&v42_.v43, (__int64)&v42_.v42, 4u);
    result = memcpy_plt((__int64)&v42_.v42, (__int64)&v42_.v43, 4u);
    v38 = v42_.v42 & 0x7FFFFFFF;
    v20 = HIWORD(v42_.v42) & 0x8000;
    if ((unsigned __int8)(v42_.v42 >> 23) == 255) {
      LOWORD(v20) = v20 | 0x7C00;
      if (v38 != 2139095040) {
        LOWORD(v20) = 0x7FFF;
      }
    }
    else {
      if (v38 < 0x477FF000) {
        v39 = v38 >> 23;
        if (v38 >> 23 < 0x71) {
          if (v38 < 0x33000001) {
            goto LABEL_13;
          }
          v41 = v42_.v42 & 0x7FFFFF | 0x800000;
          v40 = v41 << (v39 - 94);
          v20 |= v41 >> (126 - v39);
          if (v40 > 0x80000000) {
          LABEL_12:
            LOWORD(v20) = v20 + 1;
            goto LABEL_13;
          }
        }
        else {
          v40 = v42_.v42 << 19;
          v20 |= (v38 - 939524096) >> 13;
          if (v42_.v42 << 19 > 0x80000000) {
            goto LABEL_12;
          }
        }
        if (v40 != 0x80000000) {
          goto LABEL_13;
        }
      }
      else {
        LOWORD(v20) = v20 | 0x7BFF;
      }
      if ((v20 & 1) != 0) {
        goto LABEL_12;
      }
    }
  LABEL_13:
    *(_WORD*)(v14 + v18) = v20;
    v18 += 2;
  } while (v18 != 128);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_84d40(_QWORD* a1, __int64* a2, _QWORD* a3,
                                           __int64* a4)
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

  v8 = sqrtf_plt(0x1.8000000000000p+6f);
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
  } while (v19 != 192);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_860a0(_QWORD* a1, __int64* a2, _QWORD* a3,
                                           __int64* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  char v27;
  unsigned int v28;
  char v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  bool v35;
  int v36;
  __int64 result;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  struct {
    unsigned int v42;
    int v43;
  } v42_;

  *a3 = *a1;
  if (a3 != a1) {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (__int64)(a1[2] - a1[1]) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
    v9 = *a2;
    v8 = a2[1];
    v10 = v8 - *a2;
    if (v8 != *a2) {
      goto LABEL_3;
    }
  LABEL_46:
    v12 = nullptr;
    v14 = 0;
    v16 = *a4;
    if (*a4 == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  a3[4] = a1[4];
  v9 = *a2;
  v8 = a2[1];
  v10 = v8 - *a2;
  if (v8 == *a2) {
    goto LABEL_46;
  }
LABEL_3:
  if (v10 < 0) {
    nvidia_dlss_rel_source_common_33410();
  }
  v11 = NgxRoutine_420(v10);
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
  if ((unsigned __int64)(v9 - v8) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      *v15++ = 0;
    } while (v15 != v12);
  }
  v16 = *a4;
  if (*a4 != 0) {
  LABEL_10:
    v17 = a4[2];
    a4[1] = v16;
    NgxRoutine_430(v16, v17 - v16);
  }
LABEL_11:
  *a4 = v14;
  a4[1] = (__int64)v12;
  a4[2] = (__int64)v12;
  v18 = 0;
  v19 = *a2;
  do {
    v21 = *(unsigned __int16*)(v19 + v18);
    v22 = v21 >> 15;
    v23 = (v21 >> 10) & 0x1F;
    v24 = v21 << 13;
    v25 = v24 & 0x7FE000;
    v26 = __clz((unsigned int)(v24 & 0x7FE000));
    v27 = v26 ^ 0x1F;
    v28 = 121 - v26;
    v29 = 23 - v27;
    if ((v24 & 0x7FE000) == 0) {
      v28 = 0;
    }
    v30 = v24 << v29;
    v31 = v23 + 112;
    v32 = v30 & 0x7FC000;
    if (v25 != 0) {
      v33 = 0;
    }
    else {
      v32 = 0;
      v33 = v22;
    }
    if (v25 != 0) {
      v34 = 0x7FFFFF;
    }
    else {
      v34 = 0;
    }
    if (v23 == 31) {
      v31 = 255;
      v25 = v34;
    }
    else {
      v33 = v22;
    }
    v35 = v23 == 0;
    if (v23 != 0) {
      v36 = v31;
    }
    else {
      v36 = v28;
    }
    if (!v35) {
      v32 = v25;
      v22 = v33;
    }
    v42_.v42 = v32 | (v36 << 23) | (v22 << 31);
    memcpy_plt((__int64)&v42_.v43, (__int64)&v42_.v42, 4u);
    result = memcpy_plt((__int64)&v42_.v42, (__int64)&v42_.v43, 4u);
    v38 = v42_.v42 & 0x7FFFFFFF;
    v20 = HIWORD(v42_.v42) & 0x8000;
    if ((unsigned __int8)(v42_.v42 >> 23) == 255) {
      LOWORD(v20) = v20 | 0x7C00;
      if (v38 != 2139095040) {
        LOWORD(v20) = 0x7FFF;
      }
    }
    else {
      if (v38 < 0x477FF000) {
        v39 = v38 >> 23;
        if (v38 >> 23 < 0x71) {
          if (v38 < 0x33000001) {
            goto LABEL_13;
          }
          v41 = v42_.v42 & 0x7FFFFF | 0x800000;
          v40 = v41 << (v39 - 94);
          v20 |= v41 >> (126 - v39);
          if (v40 > 0x80000000) {
          LABEL_12:
            LOWORD(v20) = v20 + 1;
            goto LABEL_13;
          }
        }
        else {
          v40 = v42_.v42 << 19;
          v20 |= (v38 - 939524096) >> 13;
          if (v42_.v42 << 19 > 0x80000000) {
            goto LABEL_12;
          }
        }
        if (v40 != 0x80000000) {
          goto LABEL_13;
        }
      }
      else {
        LOWORD(v20) = v20 | 0x7BFF;
      }
      if ((v20 & 1) != 0) {
        goto LABEL_12;
      }
    }
  LABEL_13:
    *(_WORD*)(v14 + v18) = v20;
    v18 += 2;
  } while (v18 != 192);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_88a20(_QWORD* a1, __int64* a2, _QWORD* a3,
                                           __int64* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  char v27;
  unsigned int v28;
  char v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  bool v35;
  int v36;
  __int64 result;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  struct {
    unsigned int v42;
    int v43;
  } v42_;

  *a3 = *a1;
  if (a3 != a1) {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (__int64)(a1[2] - a1[1]) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
    v9 = *a2;
    v8 = a2[1];
    v10 = v8 - *a2;
    if (v8 != *a2) {
      goto LABEL_3;
    }
  LABEL_46:
    v12 = nullptr;
    v14 = 0;
    v16 = *a4;
    if (*a4 == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  a3[4] = a1[4];
  v9 = *a2;
  v8 = a2[1];
  v10 = v8 - *a2;
  if (v8 == *a2) {
    goto LABEL_46;
  }
LABEL_3:
  if (v10 < 0) {
    nvidia_dlss_rel_source_common_33410();
  }
  v11 = NgxRoutine_420(v10);
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
  if ((unsigned __int64)(v9 - v8) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      *v15++ = 0;
    } while (v15 != v12);
  }
  v16 = *a4;
  if (*a4 != 0) {
  LABEL_10:
    v17 = a4[2];
    a4[1] = v16;
    NgxRoutine_430(v16, v17 - v16);
  }
LABEL_11:
  *a4 = v14;
  a4[1] = (__int64)v12;
  a4[2] = (__int64)v12;
  v18 = 0;
  v19 = *a2;
  do {
    v21 = *(unsigned __int16*)(v19 + v18);
    v22 = v21 >> 15;
    v23 = (v21 >> 10) & 0x1F;
    v24 = v21 << 13;
    v25 = v24 & 0x7FE000;
    v26 = __clz((unsigned int)(v24 & 0x7FE000));
    v27 = v26 ^ 0x1F;
    v28 = 121 - v26;
    v29 = 23 - v27;
    if ((v24 & 0x7FE000) == 0) {
      v28 = 0;
    }
    v30 = v24 << v29;
    v31 = v23 + 112;
    v32 = v30 & 0x7FC000;
    if (v25 != 0) {
      v33 = 0;
    }
    else {
      v32 = 0;
      v33 = v22;
    }
    if (v25 != 0) {
      v34 = 0x7FFFFF;
    }
    else {
      v34 = 0;
    }
    if (v23 == 31) {
      v31 = 255;
      v25 = v34;
    }
    else {
      v33 = v22;
    }
    v35 = v23 == 0;
    if (v23 != 0) {
      v36 = v31;
    }
    else {
      v36 = v28;
    }
    if (!v35) {
      v32 = v25;
      v22 = v33;
    }
    v42_.v42 = v32 | (v36 << 23) | (v22 << 31);
    memcpy_plt((__int64)&v42_.v43, (__int64)&v42_.v42, 4u);
    result = memcpy_plt((__int64)&v42_.v42, (__int64)&v42_.v43, 4u);
    v38 = v42_.v42 & 0x7FFFFFFF;
    v20 = HIWORD(v42_.v42) & 0x8000;
    if ((unsigned __int8)(v42_.v42 >> 23) == 255) {
      LOWORD(v20) = v20 | 0x7C00;
      if (v38 != 2139095040) {
        LOWORD(v20) = 0x7FFF;
      }
    }
    else {
      if (v38 < 0x477FF000) {
        v39 = v38 >> 23;
        if (v38 >> 23 < 0x71) {
          if (v38 < 0x33000001) {
            goto LABEL_13;
          }
          v41 = v42_.v42 & 0x7FFFFF | 0x800000;
          v40 = v41 << (v39 - 94);
          v20 |= v41 >> (126 - v39);
          if (v40 > 0x80000000) {
          LABEL_12:
            LOWORD(v20) = v20 + 1;
            goto LABEL_13;
          }
        }
        else {
          v40 = v42_.v42 << 19;
          v20 |= (v38 - 939524096) >> 13;
          if (v42_.v42 << 19 > 0x80000000) {
            goto LABEL_12;
          }
        }
        if (v40 != 0x80000000) {
          goto LABEL_13;
        }
      }
      else {
        LOWORD(v20) = v20 | 0x7BFF;
      }
      if ((v20 & 1) != 0) {
        goto LABEL_12;
      }
    }
  LABEL_13:
    *(_WORD*)(v14 + v18) = v20;
    v18 += 2;
  } while (v18 != 256);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_8bf40(__int64* a1, __int64* a2,
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
  unsigned int v21;
  _WORD* v22;
  unsigned int v23;
  __int16 v24;

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
  v20 = -2048;
  v21 = 0;
  v22 = (_WORD*)(*a4 + 8);
  do {
    v23 = v21 >> 7;
    v21 += 8;
    *(v22 - 4) = *(_WORD*)(v19 + 2LL * (((_WORD)v20 + 2048) & 0x1E0 | v23));
    *(v22 - 3) = *(_WORD*)(v19 + 2LL * (((int)v20 + 2052) & 0x1E4 | v23));
    *(v22 - 2) = *(_WORD*)(v19 + 2LL * (((int)v20 + 2056) & 0x1E8 | v23));
    *(v22 - 1) = *(_WORD*)(v19 + 2LL * (((int)v20 + 2060) & 0x1EC | v23));
    *v22 = *(_WORD*)(v19 + 2LL * (((_WORD)v20 + 2064) & 0x1F0 | v23));
    v22[1] = *(_WORD*)(v19 + 2LL * (((int)v20 + 2068) & 0x1F4 | v23));
    v22[2] = *(_WORD*)(v19 + 2LL * (((_WORD)v20 + 2072) & 0x1F8 | v23));
    v24 = v20 + 2076;
    v20 += 32;
    v22[3] = *(_WORD*)(v19 + 2LL * (v24 & 0x1FC | v23));
    v22 += 8;
  } while (v20 != 0);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_8d220(_QWORD* a1, __int64* a2, _QWORD* a3,
                                           __int64* a4)
{
  __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  _WORD* v25;
  int v26;
  __int64 v27;
  _WORD* v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int16 v37;
  _QWORD v38[3];
  __int64 v39;

  v5 = a1[1];
  v8 = *(_QWORD*)(v5 + 8);
  *a3 = *a1;
  v9 = v8 >> 5;
  if (a3 == a1) {
    a3[4] = a1[4];
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(
        a3 + 1, v5, a1[2], (signed __int64)(a1[2] - v5) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
  }
  v38[0] = v8 >> 5;
  v38[1] = 128;
  v38[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (__int64)v38,
                                             &v39, 3u);
  v12 = *a2;
  v11 = a2[1];
  v13 = v11 - *a2;
  if (v11 == *a2) {
    v15 = nullptr;
    v17 = 0;
    result = *a4;
    if (*a4 != 0) {
    LABEL_12:
      v20 = a4[2];
      a4[1] = result;
      result = NgxRoutine_430(result, v20 - result);
    }
  }
  else {
    if (v13 < 0) {
      nvidia_dlss_rel_source_common_33410();
    }
    v14 = NgxRoutine_420(v11 - *a2);
    v15 = (_QWORD*)(v14 + v13);
    v16 = v13 & 7;
    v17 = v14;
    v18 = (_QWORD*)v14;
    if ((v13 & 7) != 0) {
      v18 = (_QWORD*)v14;
      do {
        *(_BYTE*)v18 = 0;
        v18 = (_QWORD*)((char*)v18 + 1);
        --v16;
      } while (v16 != 0);
    }
    if ((unsigned __int64)(v12 - v11) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        *v18++ = 0;
      } while (v18 != v15);
    }
    result = *a4;
    if (*a4 != 0) {
      goto LABEL_12;
    }
  }
  *a4 = v17;
  a4[1] = (__int64)v15;
  a4[2] = (__int64)v15;
  if (v8 >= 0x20) {
    v21 = 0;
    v22 = 0;
    v23 = *a2 + 8;
    do {
      v24 = 0;
      v25 = (_WORD*)v23;
      do {
        v26 = 0;
        v27 = 0;
        v28 = v25;
        result = 4 * (unsigned int)(v24 & 7);
        do {
          v29 = (unsigned int)v27 >> 4;
          v30 = v26 & 4;
          v27 += 8;
          v26 += 4;
          v31 = v17 + 2 * v21 + ((v29 | (v24 >> 3) & 0xE) << 9);
          v32 = v30 | (unsigned int)(v24 & 8);
          v33 = v31 + 16 * result;
          *(_WORD*)(v33 + v32) = *(v28 - 4);
          *(_WORD*)(v33 + v32 + 2) = *(v28 - 3);
          v34 = v31 + 16 * ((4 * (v24 & 7)) | 1);
          *(_WORD*)(v34 + v32) = *(v28 - 2);
          *(_WORD*)(v34 + v32 + 2) = *(v28 - 1);
          v35 = v31 + 16 * ((4 * (v24 & 7)) | 2);
          v36 = v31 + 16 * ((4 * (v24 & 7)) | 3);
          *(_WORD*)(v35 + v32) = *v28;
          *(_WORD*)(v35 + v32 + 2) = v28[1];
          *(_WORD*)(v36 + v32) = v28[2];
          v37 = v28[3];
          v28 += 8;
          *(_WORD*)(v36 + v32 + 2) = v37;
        } while (v27 != 32);
        ++v24;
        v25 += 32 * v9;
      } while (v24 != 128);
      v21 += 4096;
      ++v22;
      v23 += 64;
    } while (v22 != v9);
  }
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_8f9e0(_QWORD* a1, __int64* a2, _QWORD* a3,
                                           __int64* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  char v27;
  unsigned int v28;
  char v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  bool v35;
  int v36;
  __int64 result;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  struct {
    unsigned int v42;
    int v43;
  } v42_;

  *a3 = *a1;
  if (a3 != a1) {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (__int64)(a1[2] - a1[1]) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
    v9 = *a2;
    v8 = a2[1];
    v10 = v8 - *a2;
    if (v8 != *a2) {
      goto LABEL_3;
    }
  LABEL_46:
    v12 = nullptr;
    v14 = 0;
    v16 = *a4;
    if (*a4 == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  a3[4] = a1[4];
  v9 = *a2;
  v8 = a2[1];
  v10 = v8 - *a2;
  if (v8 == *a2) {
    goto LABEL_46;
  }
LABEL_3:
  if (v10 < 0) {
    nvidia_dlss_rel_source_common_33410();
  }
  v11 = NgxRoutine_420(v10);
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
  if ((unsigned __int64)(v9 - v8) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      *v15++ = 0;
    } while (v15 != v12);
  }
  v16 = *a4;
  if (*a4 != 0) {
  LABEL_10:
    v17 = a4[2];
    a4[1] = v16;
    NgxRoutine_430(v16, v17 - v16);
  }
LABEL_11:
  *a4 = v14;
  a4[1] = (__int64)v12;
  a4[2] = (__int64)v12;
  v18 = 0;
  v19 = *a2;
  do {
    v21 = *(unsigned __int16*)(v19 + v18);
    v22 = v21 >> 15;
    v23 = (v21 >> 10) & 0x1F;
    v24 = v21 << 13;
    v25 = v24 & 0x7FE000;
    v26 = __clz((unsigned int)(v24 & 0x7FE000));
    v27 = v26 ^ 0x1F;
    v28 = 121 - v26;
    v29 = 23 - v27;
    if ((v24 & 0x7FE000) == 0) {
      v28 = 0;
    }
    v30 = v24 << v29;
    v31 = v23 + 112;
    v32 = v30 & 0x7FC000;
    if (v25 != 0) {
      v33 = 0;
    }
    else {
      v32 = 0;
      v33 = v22;
    }
    if (v25 != 0) {
      v34 = 0x7FFFFF;
    }
    else {
      v34 = 0;
    }
    if (v23 == 31) {
      v31 = 255;
      v25 = v34;
    }
    else {
      v33 = v22;
    }
    v35 = v23 == 0;
    if (v23 != 0) {
      v36 = v31;
    }
    else {
      v36 = v28;
    }
    if (!v35) {
      v32 = v25;
      v22 = v33;
    }
    v42_.v42 = v32 | (v36 << 23) | (v22 << 31);
    memcpy_plt((__int64)&v42_.v43, (__int64)&v42_.v42, 4u);
    result = memcpy_plt((__int64)&v42_.v42, (__int64)&v42_.v43, 4u);
    v38 = v42_.v42 & 0x7FFFFFFF;
    v20 = HIWORD(v42_.v42) & 0x8000;
    if ((unsigned __int8)(v42_.v42 >> 23) == 255) {
      LOWORD(v20) = v20 | 0x7C00;
      if (v38 != 2139095040) {
        LOWORD(v20) = 0x7FFF;
      }
    }
    else {
      if (v38 < 0x477FF000) {
        v39 = v38 >> 23;
        if (v38 >> 23 < 0x71) {
          if (v38 < 0x33000001) {
            goto LABEL_13;
          }
          v41 = v42_.v42 & 0x7FFFFF | 0x800000;
          v40 = v41 << (v39 - 94);
          v20 |= v41 >> (126 - v39);
          if (v40 > 0x80000000) {
          LABEL_12:
            LOWORD(v20) = v20 + 1;
            goto LABEL_13;
          }
        }
        else {
          v40 = v42_.v42 << 19;
          v20 |= (v38 - 939524096) >> 13;
          if (v42_.v42 << 19 > 0x80000000) {
            goto LABEL_12;
          }
        }
        if (v40 != 0x80000000) {
          goto LABEL_13;
        }
      }
      else {
        LOWORD(v20) = v20 | 0x7BFF;
      }
      if ((v20 & 1) != 0) {
        goto LABEL_12;
      }
    }
  LABEL_13:
    *(_WORD*)(v14 + v18) = v20;
    v18 += 2;
  } while (v18 != 192);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_91cc0(_QWORD* a1, __int64* a2, _QWORD* a3,
                                           __int64* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  char v27;
  unsigned int v28;
  char v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  bool v35;
  int v36;
  __int64 result;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  struct {
    unsigned int v42;
    int v43;
  } v42_;

  *a3 = *a1;
  if (a3 != a1) {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (__int64)(a1[2] - a1[1]) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
    v9 = *a2;
    v8 = a2[1];
    v10 = v8 - *a2;
    if (v8 != *a2) {
      goto LABEL_3;
    }
  LABEL_46:
    v12 = nullptr;
    v14 = 0;
    v16 = *a4;
    if (*a4 == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  a3[4] = a1[4];
  v9 = *a2;
  v8 = a2[1];
  v10 = v8 - *a2;
  if (v8 == *a2) {
    goto LABEL_46;
  }
LABEL_3:
  if (v10 < 0) {
    nvidia_dlss_rel_source_common_33410();
  }
  v11 = NgxRoutine_420(v10);
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
  if ((unsigned __int64)(v9 - v8) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      *v15++ = 0;
    } while (v15 != v12);
  }
  v16 = *a4;
  if (*a4 != 0) {
  LABEL_10:
    v17 = a4[2];
    a4[1] = v16;
    NgxRoutine_430(v16, v17 - v16);
  }
LABEL_11:
  *a4 = v14;
  a4[1] = (__int64)v12;
  a4[2] = (__int64)v12;
  v18 = 0;
  v19 = *a2;
  do {
    v21 = *(unsigned __int16*)(v19 + v18);
    v22 = v21 >> 15;
    v23 = (v21 >> 10) & 0x1F;
    v24 = v21 << 13;
    v25 = v24 & 0x7FE000;
    v26 = __clz((unsigned int)(v24 & 0x7FE000));
    v27 = v26 ^ 0x1F;
    v28 = 121 - v26;
    v29 = 23 - v27;
    if ((v24 & 0x7FE000) == 0) {
      v28 = 0;
    }
    v30 = v24 << v29;
    v31 = v23 + 112;
    v32 = v30 & 0x7FC000;
    if (v25 != 0) {
      v33 = 0;
    }
    else {
      v32 = 0;
      v33 = v22;
    }
    if (v25 != 0) {
      v34 = 0x7FFFFF;
    }
    else {
      v34 = 0;
    }
    if (v23 == 31) {
      v31 = 255;
      v25 = v34;
    }
    else {
      v33 = v22;
    }
    v35 = v23 == 0;
    if (v23 != 0) {
      v36 = v31;
    }
    else {
      v36 = v28;
    }
    if (!v35) {
      v32 = v25;
      v22 = v33;
    }
    v42_.v42 = v32 | (v36 << 23) | (v22 << 31);
    memcpy_plt((__int64)&v42_.v43, (__int64)&v42_.v42, 4u);
    result = memcpy_plt((__int64)&v42_.v42, (__int64)&v42_.v43, 4u);
    v38 = v42_.v42 & 0x7FFFFFFF;
    v20 = HIWORD(v42_.v42) & 0x8000;
    if ((unsigned __int8)(v42_.v42 >> 23) == 255) {
      LOWORD(v20) = v20 | 0x7C00;
      if (v38 != 2139095040) {
        LOWORD(v20) = 0x7FFF;
      }
    }
    else {
      if (v38 < 0x477FF000) {
        v39 = v38 >> 23;
        if (v38 >> 23 < 0x71) {
          if (v38 < 0x33000001) {
            goto LABEL_13;
          }
          v41 = v42_.v42 & 0x7FFFFF | 0x800000;
          v40 = v41 << (v39 - 94);
          v20 |= v41 >> (126 - v39);
          if (v40 > 0x80000000) {
          LABEL_12:
            LOWORD(v20) = v20 + 1;
            goto LABEL_13;
          }
        }
        else {
          v40 = v42_.v42 << 19;
          v20 |= (v38 - 939524096) >> 13;
          if (v42_.v42 << 19 > 0x80000000) {
            goto LABEL_12;
          }
        }
        if (v40 != 0x80000000) {
          goto LABEL_13;
        }
      }
      else {
        LOWORD(v20) = v20 | 0x7BFF;
      }
      if ((v20 & 1) != 0) {
        goto LABEL_12;
      }
    }
  LABEL_13:
    *(_WORD*)(v14 + v18) = v20;
    v18 += 2;
  } while (v18 != 128);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_92520(__int64* a1, __int64* a2,
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
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  _WORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int16 v37;
  __int64 v38;
  __int64 v39;
  unsigned int i;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 result;
  int v48;
  __int16* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int16 v55;
  _QWORD v56[2];
  __int64 v57;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = *a2;
  v4 = a2[1];
  v10 = v4 - *a2;
  if (v4 == *a2) {
    v12 = nullptr;
    v14 = 0;
    v16 = *a4;
    if (*a4 != 0) {
    LABEL_9:
      v17 = a4[2];
      a4[1] = v16;
      NgxRoutine_430(v16, v17 - v16),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  else {
    if (v10 < 0) {
      nvidia_dlss_rel_source_common_33410(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    v11 = NgxRoutine_420(v4 - *a2),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
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
    v16 = *a4;
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
                                               (a1[2] - a1[1]) >> 3),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (a1[6] - a1[5]) >> 3),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v56[0] = 2;
  v56[1] = 0x2000;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (__int64)v56,
                                             &v57, 2u),
      result = COERCE_AS(__typeof__(result),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v19 = *a2;
  v20 = *a4;
  v21 = 0;
  v22 = *a2 + 8;
  do {
    v23 = 0;
    v24 = v21 & 8;
    v25 = 4 * (v21 & 7);
    v26 = 3;
    v27 = (4 * (v21 & 7)) | 1;
    v28 = (4 * (v21 & 7)) | 2;
    v29 = (4 * (v21 & 7)) | 3;
    v30 = (v21 >> 2) & 0x1C;
    v31 = (_WORD*)(v22 + 2LL * ((v21 & 0xFFFFFFC0) + ((v21 & 0x3F) << 8)));
    do {
      v32 = ((_BYTE)v26 - 3) & 4 | (unsigned int)v24;
      *(_WORD*)(v20 +
                ((unsigned __int64)(v30 | ((unsigned int)v23 >> 4)) << 9) +
                16 * v25 + v32) = *(v31 - 4);
      *(_WORD*)(v20 +
                ((unsigned __int64)(v30 | ((unsigned int)(v23 + 1) >> 4))
                 << 9) +
                16 * v25 + v32 + 2) = *(v31 - 3);
      v33 = ((_BYTE)v26 - 2) & 4 | (unsigned int)v24;
      *(_WORD*)(v20 +
                ((unsigned __int64)(v30 | ((unsigned int)(v23 + 2) >> 4))
                 << 9) +
                16 * v27 + v33) = *(v31 - 2);
      *(_WORD*)(v20 +
                ((unsigned __int64)(v30 | ((unsigned int)(v23 + 3) >> 4))
                 << 9) +
                16 * v27 + v33 + 2) = *(v31 - 1);
      v34 = ((_BYTE)v26 - 1) & 4 | (unsigned int)v24;
      *(_WORD*)(v20 +
                ((unsigned __int64)(v30 | ((unsigned int)(v23 + 4) >> 4))
                 << 9) +
                16 * v28 + v34) = *v31;
      v35 = v20 +
            ((unsigned __int64)(v30 | ((unsigned int)(v23 + 5) >> 4)) << 9) +
            16 * v28 + v34;
      LODWORD(v34) = v26 & 4;
      v26 += 4;
      *(_WORD*)(v35 + 2) = v31[1];
      v36 = (unsigned int)v34 | v24;
      *(_WORD*)(v20 +
                ((unsigned __int64)(v30 | ((unsigned int)(v23 + 6) >> 4))
                 << 9) +
                16 * v29 + v36) = v31[2];
      LODWORD(v35) = v23 + 7;
      v23 += 8;
      v37 = v31[3];
      v31 += 8;
      *(_WORD*)(v20 +
                ((unsigned __int64)(v30 | ((unsigned int)v35 >> 4)) << 9) +
                16 * v29 + v36 + 2) = v37;
    } while (v23 != 64);
    ++v21;
  } while (v21 != 128);
  v38 = v20 + 0x4000;
  v39 = v19 + 270;
  for (i = 0; i != 128; ++i) {
    v41 = 0;
    v42 = i & 8;
    v43 = 4 * (i & 7);
    v44 = 3;
    v45 = (4 * (i & 7)) | 1;
    v46 = (4 * (i & 7)) | 2;
    result = (4 * (i & 7)) | 3;
    v48 = (i >> 2) & 0x1C;
    v49 = (__int16*)(v39 + 2LL * ((i & 0xFFFFFFC0) + ((i & 0x3F) << 8)));
    do {
      v50 = ((_BYTE)v44 - 3) & 4 | (unsigned int)v42;
      *(_WORD*)(v38 +
                ((unsigned __int64)(v48 | ((unsigned int)v41 >> 4)) << 9) +
                16 * v43 + v50) = *(v49 - 7);
      *(_WORD*)(v38 +
                ((unsigned __int64)(v48 | ((unsigned int)(v41 + 1) >> 4))
                 << 9) +
                16 * v43 + v50 + 2) = *(v49 - 6);
      v51 = ((_BYTE)v44 - 2) & 4 | (unsigned int)v42;
      *(_WORD*)(v38 +
                ((unsigned __int64)(v48 | ((unsigned int)(v41 + 2) >> 4))
                 << 9) +
                16 * v45 + v51) = *(v49 - 5);
      *(_WORD*)(v38 +
                ((unsigned __int64)(v48 | ((unsigned int)(v41 + 3) >> 4))
                 << 9) +
                16 * v45 + v51 + 2) = *(v49 - 4);
      v52 = ((_BYTE)v44 - 1) & 4 | (unsigned int)v42;
      *(_WORD*)(v38 +
                ((unsigned __int64)(v48 | ((unsigned int)(v41 + 4) >> 4))
                 << 9) +
                16 * v46 + v52) = *(v49 - 3);
      v53 = v38 +
            ((unsigned __int64)(v48 | ((unsigned int)(v41 + 5) >> 4)) << 9) +
            16 * v46 + v52;
      LODWORD(v52) = v44 & 4;
      v44 += 4;
      *(_WORD*)(v53 + 2) = *(v49 - 2);
      v54 = (unsigned int)v52 | v42;
      *(_WORD*)(v38 +
                ((unsigned __int64)(v48 | ((unsigned int)(v41 + 6) >> 4))
                 << 9) +
                16 * result + v54) = *(v49 - 1);
      LODWORD(v53) = v41 + 7;
      v41 += 8;
      v55 = *v49;
      v49 += 8;
      *(_WORD*)(v38 +
                ((unsigned __int64)(v48 | ((unsigned int)v53 >> 4)) << 9) +
                16 * result + v54 + 2) = v55;
    } while (v41 != 64);
  }
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_92940(__int64* a1, __int64* a2,
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
  unsigned int v21;
  _WORD* v22;
  unsigned int v23;
  char v24;

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
  v20 = -1024;
  v21 = 0;
  v22 = (_WORD*)(*a4 + 8);
  do {
    v23 = v21 >> 6;
    v21 += 8;
    *(v22 - 4) = *(_WORD*)(v19 + 2 * (v20 & 0xE0 | v23));
    *(v22 - 3) = *(_WORD*)(v19 + 2LL * (((int)v20 + 1028) & 0xE4 | v23));
    *(v22 - 2) = *(_WORD*)(v19 + 2LL * (((int)v20 + 1032) & 0xE8 | v23));
    *(v22 - 1) = *(_WORD*)(v19 + 2LL * (((int)v20 + 1036) & 0xEC | v23));
    *v22 = *(_WORD*)(v19 + 2LL * (((_BYTE)v20 + 16) & 0xF0 | v23));
    v22[1] = *(_WORD*)(v19 + 2LL * (((int)v20 + 1044) & 0xF4 | v23));
    v22[2] = *(_WORD*)(v19 + 2LL * (((_BYTE)v20 + 24) & 0xF8 | v23));
    v24 = v20 + 28;
    v20 += 32;
    v22[3] = *(_WORD*)(v19 + 2LL * (v24 & 0xFC | v23));
    v22 += 8;
  } while (v20 != 0);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_92b60(_QWORD* a1, __int64* a2, _QWORD* a3,
                                           __int64* a4)
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

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_93ec0(_QWORD* a1, __int64* a2, _QWORD* a3,
                                           __int64* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  char v27;
  unsigned int v28;
  char v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  bool v35;
  int v36;
  __int64 result;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  struct {
    unsigned int v42;
    int v43;
  } v42_;

  *a3 = *a1;
  if (a3 != a1) {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (__int64)(a1[2] - a1[1]) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
    v9 = *a2;
    v8 = a2[1];
    v10 = v8 - *a2;
    if (v8 != *a2) {
      goto LABEL_3;
    }
  LABEL_46:
    v12 = nullptr;
    v14 = 0;
    v16 = *a4;
    if (*a4 == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  a3[4] = a1[4];
  v9 = *a2;
  v8 = a2[1];
  v10 = v8 - *a2;
  if (v8 == *a2) {
    goto LABEL_46;
  }
LABEL_3:
  if (v10 < 0) {
    nvidia_dlss_rel_source_common_33410();
  }
  v11 = NgxRoutine_420(v10);
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
  if ((unsigned __int64)(v9 - v8) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      *v15++ = 0;
    } while (v15 != v12);
  }
  v16 = *a4;
  if (*a4 != 0) {
  LABEL_10:
    v17 = a4[2];
    a4[1] = v16;
    NgxRoutine_430(v16, v17 - v16);
  }
LABEL_11:
  *a4 = v14;
  a4[1] = (__int64)v12;
  a4[2] = (__int64)v12;
  v18 = 0;
  v19 = *a2;
  do {
    v21 = *(unsigned __int16*)(v19 + v18);
    v22 = v21 >> 15;
    v23 = (v21 >> 10) & 0x1F;
    v24 = v21 << 13;
    v25 = v24 & 0x7FE000;
    v26 = __clz((unsigned int)(v24 & 0x7FE000));
    v27 = v26 ^ 0x1F;
    v28 = 121 - v26;
    v29 = 23 - v27;
    if ((v24 & 0x7FE000) == 0) {
      v28 = 0;
    }
    v30 = v24 << v29;
    v31 = v23 + 112;
    v32 = v30 & 0x7FC000;
    if (v25 != 0) {
      v33 = 0;
    }
    else {
      v32 = 0;
      v33 = v22;
    }
    if (v25 != 0) {
      v34 = 0x7FFFFF;
    }
    else {
      v34 = 0;
    }
    if (v23 == 31) {
      v31 = 255;
      v25 = v34;
    }
    else {
      v33 = v22;
    }
    v35 = v23 == 0;
    if (v23 != 0) {
      v36 = v31;
    }
    else {
      v36 = v28;
    }
    if (!v35) {
      v32 = v25;
      v22 = v33;
    }
    v42_.v42 = v32 | (v36 << 23) | (v22 << 31);
    memcpy_plt((__int64)&v42_.v43, (__int64)&v42_.v42, 4u);
    result = memcpy_plt((__int64)&v42_.v42, (__int64)&v42_.v43, 4u);
    v38 = v42_.v42 & 0x7FFFFFFF;
    v20 = HIWORD(v42_.v42) & 0x8000;
    if ((unsigned __int8)(v42_.v42 >> 23) == 255) {
      LOWORD(v20) = v20 | 0x7C00;
      if (v38 != 2139095040) {
        LOWORD(v20) = 0x7FFF;
      }
    }
    else {
      if (v38 < 0x477FF000) {
        v39 = v38 >> 23;
        if (v38 >> 23 < 0x71) {
          if (v38 < 0x33000001) {
            goto LABEL_13;
          }
          v41 = v42_.v42 & 0x7FFFFF | 0x800000;
          v40 = v41 << (v39 - 94);
          v20 |= v41 >> (126 - v39);
          if (v40 > 0x80000000) {
          LABEL_12:
            LOWORD(v20) = v20 + 1;
            goto LABEL_13;
          }
        }
        else {
          v40 = v42_.v42 << 19;
          v20 |= (v38 - 939524096) >> 13;
          if (v42_.v42 << 19 > 0x80000000) {
            goto LABEL_12;
          }
        }
        if (v40 != 0x80000000) {
          goto LABEL_13;
        }
      }
      else {
        LOWORD(v20) = v20 | 0x7BFF;
      }
      if ((v20 & 1) != 0) {
        goto LABEL_12;
      }
    }
  LABEL_13:
    *(_WORD*)(v14 + v18) = v20;
    v18 += 2;
  } while (v18 != 128);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_94720(__int64* a1, __int64* a2,
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
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 result;
  int v29;
  _WORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int16 v36;
  _QWORD v37[2];
  __int64 v38;

  v5 = *a2;
  v4 = a2[1];
  v10 = v4 - *a2;
  if (v4 == *a2) {
    v12 = nullptr;
    v14 = 0;
    v16 = *a4;
    if (*a4 != 0) {
    LABEL_9:
      v17 = a4[2];
      a4[1] = v16;
      NgxRoutine_430(v16, v17 - v16);
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
    v16 = *a4;
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
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (a1[6] - a1[5]) >> 3);
  }
  v37[0] = 1;
  v37[1] = 0x2000;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (__int64)v37,
                                             &v38, 2u);
  v19 = *a4;
  v20 = 0;
  v21 = *a2 + 8;
  do {
    v22 = 0;
    v23 = v20 & 8;
    v24 = 4 * (v20 & 7);
    v25 = 3;
    v26 = (4 * (v20 & 7)) | 1;
    v27 = (4 * (v20 & 7)) | 2;
    result = (4 * (v20 & 7)) | 3;
    v29 = (v20 >> 2) & 0x1C;
    v30 = (_WORD*)(v21 + 2LL * (((v20 & 0x1F) << 8) + (v20 >> 5 << 6)));
    do {
      v31 = ((_BYTE)v25 - 3) & 4 | (unsigned int)v23;
      *(_WORD*)(v19 +
                ((unsigned __int64)(v29 | ((unsigned int)v22 >> 4)) << 9) +
                16 * v24 + v31) = *(v30 - 4);
      *(_WORD*)(v19 +
                ((unsigned __int64)(v29 | ((unsigned int)(v22 + 1) >> 4))
                 << 9) +
                16 * v24 + v31 + 2) = *(v30 - 3);
      v32 = ((_BYTE)v25 - 2) & 4 | (unsigned int)v23;
      *(_WORD*)(v19 +
                ((unsigned __int64)(v29 | ((unsigned int)(v22 + 2) >> 4))
                 << 9) +
                16 * v26 + v32) = *(v30 - 2);
      *(_WORD*)(v19 +
                ((unsigned __int64)(v29 | ((unsigned int)(v22 + 3) >> 4))
                 << 9) +
                16 * v26 + v32 + 2) = *(v30 - 1);
      v33 = ((_BYTE)v25 - 1) & 4 | (unsigned int)v23;
      *(_WORD*)(v19 +
                ((unsigned __int64)(v29 | ((unsigned int)(v22 + 4) >> 4))
                 << 9) +
                16 * v27 + v33) = *v30;
      v34 = v19 +
            ((unsigned __int64)(v29 | ((unsigned int)(v22 + 5) >> 4)) << 9) +
            16 * v27 + v33;
      LODWORD(v33) = v25 & 4;
      v25 += 4;
      *(_WORD*)(v34 + 2) = v30[1];
      v35 = (unsigned int)v33 | v23;
      *(_WORD*)(v19 +
                ((unsigned __int64)(v29 | ((unsigned int)(v22 + 6) >> 4))
                 << 9) +
                16 * result + v35) = v30[2];
      LODWORD(v34) = v22 + 7;
      v22 += 8;
      v36 = v30[3];
      v30 += 8;
      *(_WORD*)(v19 +
                ((unsigned __int64)(v29 | ((unsigned int)v34 >> 4)) << 9) +
                16 * result + v35 + 2) = v36;
    } while (v22 != 64);
    ++v20;
  } while (v20 != 128);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_949e0(__int64* a1, __int64* a2,
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
  unsigned int v21;
  _WORD* v22;
  unsigned int v23;
  char v24;

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
  v20 = -512;
  v21 = 0;
  v22 = (_WORD*)(*a4 + 8);
  do {
    v23 = v21 >> 5;
    v21 += 8;
    *(v22 - 4) = *(_WORD*)(v19 + 2 * (v20 & 0x60 | v23));
    *(v22 - 3) = *(_WORD*)(v19 + 2LL * (((int)v20 + 516) & 0x64 | v23));
    *(v22 - 2) = *(_WORD*)(v19 + 2LL * (((int)v20 + 520) & 0x68 | v23));
    *(v22 - 1) = *(_WORD*)(v19 + 2LL * (((int)v20 + 524) & 0x6C | v23));
    *v22 = *(_WORD*)(v19 + 2LL * (((_BYTE)v20 + 16) & 0x70 | v23));
    v22[1] = *(_WORD*)(v19 + 2LL * (((int)v20 + 532) & 0x74 | v23));
    v22[2] = *(_WORD*)(v19 + 2LL * (((_BYTE)v20 + 24) & 0x78 | v23));
    v24 = v20 + 28;
    v20 += 32;
    v22[3] = *(_WORD*)(v19 + 2LL * (v24 & 0x7C | v23));
    v22 += 8;
  } while (v20 != 0);
  return result;
}

#pragma GCC visibility pop
