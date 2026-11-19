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
__int64 nvidia_dlss_rel_source_features_dlaa_82a40(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_83da0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_8e680(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_96b40(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_rel_source_features_dlaa_82a40(_QWORD* a1, __int64* a2, _QWORD* a3,
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

nvidia_dlss_rel_source_features_dlaa_83da0(_QWORD* a1, __int64* a2, _QWORD* a3,
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

nvidia_dlss_rel_source_features_dlaa_8e680(_QWORD* a1, __int64* a2, _QWORD* a3,
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

__int64 nvidia_dlss_rel_source_features_dlaa_96b40(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4)
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
  v38[1] = 32;
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
          v31 = v17 + 2 * v21 + ((v29 | (v24 >> 3) & 2) << 9);
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
      } while (v24 != 32);
      v21 += 1024;
      ++v22;
      v23 += 64;
    } while (v22 != v9);
  }
  return result;
}

#pragma GCC visibility pop
