#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memcpy_plt_alt1(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_features_dlaa_76570(__int64*, __int64, __int64,
                                                   unsigned __int64);
__int64 sqrtf_plt(float);
char* nvidia_dlss_rel_source_features_dlaa_97540(__int64, char*, char*,
                                                 unsigned __int64);
char* nvidia_dlss_rel_source_features_dlaa_97540_alt1(__int64, __int64,
                                                      __int64*,
                                                      unsigned __int64);
float logf_plt(float);
float logf_plt_alt1(float);
float sqrtf_plt_alt1(float);
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
__int64 nvidia_dlss_rel_source_features_dlaa_7f4a0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_7fa60(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
_WORD* nvidia_dlss_rel_source_features_dlaa_80560(_QWORD* a1, __int64* a2,
                                                  _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_83b00(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_84360(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_876c0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_88780(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_8b2a0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_8b5c0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_8da80(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_8f740(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_90740(__int64* a1, __int64* a2,
                                                   __int64* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_94480(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
void nvidia_dlss_rel_source_features_dlaa_94f40(_QWORD* a1, __int64* a2,
                                                _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_962e0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_96580(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_968a0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);

__int64 nvidia_dlss_rel_source_features_dlaa_7f4a0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4)
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
      __asm__("" : "+r"(v15));
      *(_BYTE*)v15 = 0;
      v15 = (_QWORD*)((char*)v15 + 1);
      --v13;
    } while (v13 != 0);
  }
  if ((unsigned __int64)(v9 - v8) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      __asm__("" : "+r"(v15));
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
  } while (v18 != 64);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove")))
__int64 nvidia_dlss_rel_source_features_dlaa_7fa60(_QWORD* a1, __int64* a2,
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
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, v5, a1[2],
                                               (__int64)(a1[2] - v5) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
  }
  v38[0] = v8 >> 5;
  v38[1] = 32;
  v38[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (char*)v38,
                                             (char*)&v39, 3u);
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

_WORD* nvidia_dlss_rel_source_features_dlaa_80560(_QWORD* a1, __int64* a2,
                                                  _QWORD* a3, __int64* a4)
{

#pragma clang fp contract(off)
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
  unsigned __int64* v18;
  unsigned __int64* v19;
  unsigned __int64 v20;
  unsigned __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  float v26;
  _WORD* result;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 i;
  int v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  char v52;
  int v53;
  char v54;
  int v55;
  bool v56;
  int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned __int64 v62;
  _WORD* v63;
  int v64;
  __int64 v65;
  _WORD* v66;
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int16 v75;
  unsigned __int64 v76;
  _WORD* v77;
  int v78;
  __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int16 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _WORD* v96;
  _WORD* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned int v101;
  float v102;

  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w"));
  *a3 = *a1;
  if (a3 == a1) {
    a3[4] = a1[4];
    v9 = *a2;
    v8 = a2[1];
    v10 = v8 - *a2;
    if (v8 != *a2) {
    LABEL_3:
      if (v10 < 0) {
        nvidia_dlss_rel_source_common_33410(),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v11 = NgxRoutine_420(v10),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w"));
      v12 = (_QWORD*)(v11 + v10);
      v13 = v10 & 7;
      v14 = v11;
      v15 = (_QWORD*)v11;
      if ((v10 & 7) != 0) {
        v15 = (_QWORD*)v11;
        do {
          __asm__("" : "+r"(v15));
          *(_BYTE*)v15 = 0;
          v15 = (_QWORD*)((char*)v15 + 1);
          --v13;
        } while (v13 != 0);
      }
      if ((unsigned __int64)(v9 - v8) <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          __asm__("" : "+r"(v15));
          *v15++ = 0;
        } while (v15 != v12);
      }
      v16 = *a4;
      if (*a4 != 0) {
        goto LABEL_10;
      }
      goto LABEL_11;
    }
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (__int64)(a1[2] - a1[1]) >> 3),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w"));
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w"));
    v9 = *a2;
    v8 = a2[1];
    v10 = v8 - *a2;
    if (v8 != *a2) {
      goto LABEL_3;
    }
  }
  v12 = nullptr;
  v14 = 0;
  v16 = *a4;
  if (*a4 != 0) {
  LABEL_10:
    v17 = a4[2];
    a4[1] = v16;
    v16 = NgxRoutine_430(v16, v17 - v16),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w"));
  }
LABEL_11:
  *a4 = v14;
  a4[1] = (__int64)v12;
  a4[2] = (__int64)v12;
  v18 = (unsigned __int64*)a1[1];
  v19 = (unsigned __int64*)a1[2];
  if (v18 == v19) {
    v23 = 0;
  }
  else {
    v20 = 1;
    v21 = (unsigned __int64*)a1[1];
    do {
      v22 = *v21++;
      v20 *= v22;
    } while (v21 != v19);
    v23 = v20 / 3;
  }
  v25 = *v18;
  v24 = v18[1];
  v26 = logf_plt(0x1.0000000000000p+1f),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w"));
  result = (_WORD*)sqrtf_plt(0x1.0000000000000p+5f),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v25 >= 0x60 && v24 >= 0x20) {
    v29 = *a2;
    v30 = 0;
    v31 = 0;
    v89 = v24 << 6;
    v100 = 2 * v24;
    v32 = v29 + 2 * v23 + 8;
    v94 = *a4;
    v33 = 4 * v23 + v29 + 8;
    v34 = (float)(0x1.0000000000000p+0f / v26) *
          (float)(0x1.0000000000000p+0f / v28);
    do {
      v92 = v29;
      v93 = v31;
      v35 = 0;
      v90 = v33;
      v91 = v32;
      v36 = v33;
      v37 = v32;
      do {
        v96 = (_WORD*)v37;
        v97 = (_WORD*)v36;
        v98 = v35;
        v99 = v30;
        v38 = 0;
        v39 = v94 + 2 * v30;
        v95 = v29;
        do {
          for (i = 0; i != 32; ++i) {
            v46 = *(unsigned __int16*)(v29 + 2 * i);
            v47 = v46 << 13;
            v48 = v46 >> 15;
            v49 = (v46 >> 10) & 0x1F;
            v50 = (v46 << 13) & 0x7FE000;
            if (v49 == 31) {
              v57 = 255;
              if (v50 != 0) {
                v48 = 0;
                v50 = 0x7FFFFF;
              }
              else {
                v50 = 0;
              }
            }
            else {
              v51 = __clz(v50);
              v52 = v51 ^ 0x1F;
              v53 = 121 - v51;
              v54 = 23 - v52;
              if (v50 == 0) {
                v53 = 0;
              }
              v55 = (v47 << v54) & 0x7FC000;
              if (v50 == 0) {
                v55 = 0;
              }
              v56 = v49 == 0;
              if (v49 != 0) {
                v57 = v49 + 112;
              }
              else {
                v57 = v53;
              }
              if (v56) {
                v50 = v55;
              }
            }
            v101 = v50 | (v57 << 23) | (v48 << 31);
            memcpy_plt_alt1(&v102, &v101, 4),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v102 = v34 * v102;
            memcpy_plt_alt1(&v101, &v102, 4),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v58 = v101 & 0x7FFFFFFF;
            v41 = HIWORD(v101) & 0x8000;
            if ((unsigned __int8)(v101 >> 23) == 255) {
              LOWORD(v41) = v41 | 0x7C00;
              if (v58 != 2139095040) {
                LOWORD(v41) = 0x7FFF;
              }
              v58 = 0;
            }
            else if (v58 <= 0x477FEFFF) {
              v59 = v58 >> 23;
              if (v58 >> 23 <= 0x70) {
                if (v58 >= 0x33000001) {
                  v61 = v101 & 0x7FFFFF | 0x800000;
                  v58 = v61 << (v59 - 94);
                  v41 |= v61 >> (126 - v59);
                  if (v58 > 0x80000000) {
                  LABEL_26:
                    LOWORD(v41) = v41 + 1;
                    goto LABEL_27;
                  }
                }
              }
              else {
                v60 = (v58 - 939524096) >> 13;
                v58 = v101 << 19;
                LOWORD(v41) = v60 | v41;
                if (v101 << 19 > 0x80000000) {
                  goto LABEL_26;
                }
              }
            }
            else {
              LOWORD(v41) = v41 | 0x7BFF;
              v58 = 0x80000000;
            }
            if (v58 == 0x80000000 && (v41 & 1) != 0) {
              goto LABEL_26;
            }
          LABEL_27:
            v42 = i & 1;
            v43 = v39 + ((((unsigned int)i >> 4) | (v38 >> 3) & 2) << 9);
            v44 = ((unsigned int)i >> 1) & 3 | (4 * (v38 & 7));
            v45 = ((unsigned int)i >> 1) & 4;
            *(_WORD*)(v43 + 16LL * v44 + (v45 | v38 & 8) + 2 * v42) = v41;
          }
          ++v38;
          v29 += v100;
        } while (v38 != 32);
        v62 = 0;
        v63 = v96;
        do {
          v64 = 0;
          v65 = 0;
          v66 = v63;
          do {
            v67 = (unsigned int)v65 >> 4;
            v68 = v64 & 4;
            v65 += 8;
            v64 += 4;
            v69 = v39 + 2048 + ((v67 | (v62 >> 3) & 2) << 9);
            v70 = v68 | (unsigned int)(v62 & 8);
            v71 = v69 + 64 * (v62 & 7);
            *(_WORD*)(v71 + v70) = *(v66 - 4);
            *(_WORD*)(v71 + v70 + 2) = *(v66 - 3);
            v72 = v69 + 16 * ((4 * (v62 & 7)) | 1);
            *(_WORD*)(v72 + v70) = *(v66 - 2);
            *(_WORD*)(v72 + v70 + 2) = *(v66 - 1);
            v73 = v69 + 16 * ((4 * (v62 & 7)) | 2);
            v74 = v69 + 16 * ((4 * (v62 & 7)) | 3);
            *(_WORD*)(v73 + v70) = *v66;
            *(_WORD*)(v73 + v70 + 2) = v66[1];
            *(_WORD*)(v74 + v70) = v66[2];
            v75 = v66[3];
            v66 += 8;
            *(_WORD*)(v74 + v70 + 2) = v75;
          } while (v65 != 32);
          ++v62;
          v63 = (_WORD*)((char*)v63 + v100);
        } while (v62 != 32);
        v76 = 0;
        v77 = v97;
        do {
          v78 = 0;
          v79 = 0;
          result = v77;
          do {
            v80 = (unsigned int)v79 >> 4;
            v81 = v78 & 4;
            v79 += 8;
            v78 += 4;
            v82 = v39 + 4096 + ((v80 | (v76 >> 3) & 2) << 9);
            v83 = v81 | (unsigned int)(v76 & 8);
            v84 = v82 + 64 * (v76 & 7);
            *(_WORD*)(v84 + v83) = *(result - 4);
            *(_WORD*)(v84 + v83 + 2) = *(result - 3);
            v85 = v82 + 16 * ((4 * (v76 & 7)) | 1);
            *(_WORD*)(v85 + v83) = *(result - 2);
            *(_WORD*)(v85 + v83 + 2) = *(result - 1);
            v86 = v82 + 16 * ((4 * (v76 & 7)) | 2);
            v87 = v82 + 16 * ((4 * (v76 & 7)) | 3);
            *(_WORD*)(v86 + v83) = *result;
            *(_WORD*)(v86 + v83 + 2) = result[1];
            *(_WORD*)(v87 + v83) = result[2];
            v88 = result[3];
            result += 8;
            *(_WORD*)(v87 + v83 + 2) = v88;
          } while (v79 != 32);
          ++v76;
          v77 = (_WORD*)((char*)v77 + v100);
        } while (v76 != 32);
        v29 = v95 + 64;
        v37 = (__int64)(v96 + 32);
        v36 = (__int64)(v97 + 32);
        v30 = v99 + 3072;
        v35 = v98 + 1;
      } while (v98 + 1 != v24 >> 5);
      v29 = v92 + v89;
      v32 = v91 + v89;
      v31 = v93 + 1;
      v33 = v90 + v89;
    } while (v93 + 1 != v25 / 0x60);
  }
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove")))
__int64 nvidia_dlss_rel_source_features_dlaa_83b00(_QWORD* a1, __int64* a2,
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

  {
    v5 = a1[1];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v8 = *(_QWORD*)(v5 + 8);
    __asm__ volatile("" ::"r"(v8));
  }
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
  v38[1] = 64;
  v38[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540_alt1((__int64)(a3 + 1),
                                                  (__int64)v38, &v39, 3u);
  {
    v12 = *a2;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v11 = a2[1];
    __asm__ volatile("" ::"r"(v11));
  }
  v13 = v11 - *a2;
  if (v11 == *a2) {
    v15 = nullptr;
    v17 = 0;
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
    LABEL_12:
      {
        v20 = a4[2];
        __asm__ volatile("" ::"r"(v20));
      }
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
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
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
    {
      v23 = *a2 + 8;
      __asm__ volatile("" ::"r"(v23));
    }
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
          v31 = v17 + 2 * v21 + ((v29 | (v24 >> 3) & 6) << 9);
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
          {
            v37 = v28[3];
            __asm__ volatile("" ::"r"(v37));
          }
          v28 += 8;
          *(_WORD*)(v36 + v32 + 2) = v37;
        } while (v27 != 32);
        ++v24;
        v25 += 32 * v9;
      } while (v24 != 64);
      v21 += 2048;
      ++v22;
      v23 += 64;
    } while (v22 != v9);
  }
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove")))
__int64 nvidia_dlss_rel_source_features_dlaa_84360(_QWORD* a1, __int64* a2,
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
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, v5, a1[2],
                                               (__int64)(a1[2] - v5) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
  }
  v38[0] = v8 >> 5;
  v38[1] = 64;
  v38[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540_alt1((__int64)(a3 + 1),
                                                  (__int64)v38, &v39, 3u);
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
          v31 = v17 + 2 * v21 + ((v29 | (v24 >> 3) & 6) << 9);
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
      } while (v24 != 64);
      v21 += 2048;
      ++v22;
      v23 += 64;
    } while (v22 != v9);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_876c0(_QWORD* a1, __int64* a2,
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

  v8 = sqrtf_plt_alt1(0x1.0000000000000p+7f);
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
      __asm__("" : "+r"(v16));
      *(_BYTE*)v16 = 0;
      v16 = (_QWORD*)((char*)v16 + 1);
      --v14;
    } while (v14 != 0);
  }
  if ((unsigned __int64)(v10 - v9) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      __asm__("" : "+r"(v16));
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
  } while (v19 != 256);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove")))
__int64 nvidia_dlss_rel_source_features_dlaa_88780(_QWORD* a1, __int64* a2,
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
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, v5, a1[2],
                                               (__int64)(a1[2] - v5) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
  }
  v38[0] = v8 >> 5;
  v38[1] = 128;
  v38[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540_alt1((__int64)(a3 + 1),
                                                  (__int64)v38, &v39, 3u);
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

__attribute__((no_builtin("memset", "memcpy", "memmove")))
__int64 nvidia_dlss_rel_source_features_dlaa_8b2a0(_QWORD* a1, __int64* a2,
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
  __int64 v23;
  __int64 v24;
  _WORD* v25;
  __int64 v26;
  _WORD* v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int16 v39;
  _QWORD v40[3];
  __int64 v41;

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
  v40[0] = v8 >> 5;
  v40[1] = 32;
  v40[2] = 160;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (char*)v40,
                                             (char*)&v41, 3u);
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
      v23 = v16 + 2 * v20;
      v24 = 0;
      v25 = (_WORD*)v22;
      do {
        v26 = 0;
        v27 = v25;
        v28 = v24 & 8;
        result = 4 * (unsigned int)(v24 & 7);
        v29 = 3;
        v30 = (4 * (v24 & 7)) | 1;
        v31 = (4 * (v24 & 7)) | 2;
        v32 = (4 * (v24 & 7)) | 3;
        v33 = 10 * ((unsigned int)v24 >> 4);
        do {
          v34 = ((_BYTE)v29 - 3) & 4 | v28;
          *(_WORD*)(v23 +
                    ((unsigned __int64)(v33 + ((unsigned int)v26 >> 4)) << 9) +
                    16 * result + v34) = *(v27 - 4);
          *(_WORD*)(v23 +
                    ((unsigned __int64)(v33 + ((unsigned int)(v26 + 1) >> 4))
                     << 9) +
                    16 * result + v34 + 2) = *(v27 - 3);
          v35 = ((_BYTE)v29 - 2) & 4 | v28;
          *(_WORD*)(v23 +
                    ((unsigned __int64)(v33 + ((unsigned int)(v26 + 2) >> 4))
                     << 9) +
                    16 * v30 + v35) = *(v27 - 2);
          *(_WORD*)(v23 +
                    ((unsigned __int64)(v33 + ((unsigned int)(v26 + 3) >> 4))
                     << 9) +
                    16 * v30 + v35 + 2) = *(v27 - 1);
          v36 = ((_BYTE)v29 - 1) & 4 | v28;
          *(_WORD*)(v23 +
                    ((unsigned __int64)(v33 + ((unsigned int)(v26 + 4) >> 4))
                     << 9) +
                    16 * v31 + v36) = *v27;
          v37 =
              v23 +
              ((unsigned __int64)(v33 + ((unsigned int)(v26 + 5) >> 4)) << 9) +
              16 * v31 + v36;
          LODWORD(v36) = v29 & 4;
          v29 += 4;
          *(_WORD*)(v37 + 2) = v27[1];
          v38 = (unsigned int)v36 | v28;
          *(_WORD*)(v23 +
                    ((unsigned __int64)(v33 + ((unsigned int)(v26 + 6) >> 4))
                     << 9) +
                    16 * v32 + v38) = v27[2];
          LODWORD(v37) = v26 + 7;
          v26 += 8;
          v39 = v27[3];
          v27 += 8;
          *(_WORD*)(v23 +
                    ((unsigned __int64)(v33 + ((unsigned int)v37 >> 4)) << 9) +
                    16 * v32 + v38 + 2) = v39;
        } while (v26 != 160);
        ++v24;
        v25 += 160;
      } while (v24 != 32);
      v20 += 5120;
      ++v21;
      v22 += 10240;
    } while (v21 != v8 >> 5);
  }
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove")))
__int64 nvidia_dlss_rel_source_features_dlaa_8b5c0(_QWORD* a1, __int64* a2,
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

  {
    v5 = a1[1];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v8 = *(_QWORD*)(v5 + 8);
    __asm__ volatile("" ::"r"(v8));
  }
  *a3 = *a1;
  v9 = v8 >> 5;
  if (a3 == a1) {
    a3[4] = a1[4];
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, v5, a1[2],
                                               (__int64)(a1[2] - v5) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
  }
  v38[0] = v8 >> 5;
  v38[1] = 160;
  v38[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540_alt1((__int64)(a3 + 1),
                                                  (__int64)v38, &v39, 3u);
  {
    v12 = *a2;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v11 = a2[1];
    __asm__ volatile("" ::"r"(v11));
  }
  v13 = v11 - *a2;
  if (v11 == *a2) {
    v15 = nullptr;
    v17 = 0;
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
    LABEL_12:
      {
        v20 = a4[2];
        __asm__ volatile("" ::"r"(v20));
      }
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
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
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
    {
      v23 = *a2 + 8;
      __asm__ volatile("" ::"r"(v23));
    }
    do {
      v24 = 0;
      v25 = (_WORD*)v23;
      do {
        v26 = 0;
        v27 = 0;
        v28 = v25;
        result = v24 & 8;
        do {
          v29 = (unsigned int)v27 >> 4;
          v30 = v26 & 4;
          v27 += 8;
          v26 += 4;
          v31 = v17 + 2 * v21 + ((v29 | (v24 >> 3) & 0x1E) << 9);
          v32 = v30 | (unsigned int)result;
          v33 = v31 + 64 * (v24 & 7);
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
          {
            v37 = v28[3];
            __asm__ volatile("" ::"r"(v37));
          }
          v28 += 8;
          *(_WORD*)(v36 + v32 + 2) = v37;
        } while (v27 != 32);
        ++v24;
        v25 += 32 * v9;
      } while (v24 != 160);
      v21 += 5120;
      ++v22;
      v23 += 64;
    } while (v22 != v9);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_8da80(_QWORD* a1, __int64* a2,
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

  {
    v5 = a1[1];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v8 = *(_QWORD*)(v5 + 8);
    __asm__ volatile("" ::"r"(v8));
  }
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
  nvidia_dlss_rel_source_features_dlaa_97540_alt1((__int64)(a3 + 1),
                                                  (__int64)v38, &v39, 3u);
  {
    v12 = *a2;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v11 = a2[1];
    __asm__ volatile("" ::"r"(v11));
  }
  v13 = v11 - *a2;
  if (v11 == *a2) {
    v15 = nullptr;
    v17 = 0;
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
    LABEL_12:
      {
        v20 = a4[2];
        __asm__ volatile("" ::"r"(v20));
      }
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
        __asm__("" : "+r"(v18));
        *(_BYTE*)v18 = 0;
        v18 = (_QWORD*)((char*)v18 + 1);
        --v16;
      } while (v16 != 0);
    }
    if ((unsigned __int64)(v12 - v11) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        __asm__("" : "+r"(v18));
        *v18++ = 0;
      } while (v18 != v15);
    }
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
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
    {
      v23 = *a2 + 8;
      __asm__ volatile("" ::"r"(v23));
    }
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
          {
            v37 = v28[3];
            __asm__ volatile("" ::"r"(v37));
          }
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

__attribute__((no_builtin("memset", "memcpy", "memmove")))
__int64 nvidia_dlss_rel_source_features_dlaa_8f740(_QWORD* a1, __int64* a2,
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

  {
    v5 = a1[1];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v8 = *(_QWORD*)(v5 + 8);
    __asm__ volatile("" ::"r"(v8));
  }
  *a3 = *a1;
  v9 = v8 >> 5;
  if (a3 == a1) {
    a3[4] = a1[4];
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, v5, a1[2],
                                               (__int64)(a1[2] - v5) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
  }
  v38[0] = v8 >> 5;
  v38[1] = 96;
  v38[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540_alt1((__int64)(a3 + 1),
                                                  (__int64)v38, &v39, 3u);
  {
    v12 = *a2;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v11 = a2[1];
    __asm__ volatile("" ::"r"(v11));
  }
  v13 = v11 - *a2;
  if (v11 == *a2) {
    v15 = nullptr;
    v17 = 0;
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
    LABEL_12:
      {
        v20 = a4[2];
        __asm__ volatile("" ::"r"(v20));
      }
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
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
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
    {
      v23 = *a2 + 8;
      __asm__ volatile("" ::"r"(v23));
    }
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
          {
            v37 = v28[3];
            __asm__ volatile("" ::"r"(v37));
          }
          v28 += 8;
          *(_WORD*)(v36 + v32 + 2) = v37;
        } while (v27 != 32);
        ++v24;
        v25 += 32 * v9;
      } while (v24 != 96);
      v21 += 3072;
      ++v22;
      v23 += 64;
    } while (v22 != v9);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_90740(__int64* a1, __int64* a2,
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
        __asm__("" : "+r"(v15));
        *(_BYTE*)v15 = 0;
        v15 = (_QWORD*)((char*)v15 + 1);
        --v13;
      } while (v13 != 0);
    }
    if ((unsigned __int64)(v5 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        __asm__("" : "+r"(v15));
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
    *(v22 - 3) = *(_WORD*)(v19 + 2LL * (((_DWORD)v20 + 1028) & 0xE4 | v23));
    *(v22 - 2) = *(_WORD*)(v19 + 2LL * (((_DWORD)v20 + 1032) & 0xE8 | v23));
    *(v22 - 1) = *(_WORD*)(v19 + 2LL * (((_DWORD)v20 + 1036) & 0xEC | v23));
    *v22 = *(_WORD*)(v19 + 2LL * (((_BYTE)v20 + 16) & 0xF0 | v23));
    v22[1] = *(_WORD*)(v19 + 2LL * (((_DWORD)v20 + 1044) & 0xF4 | v23));
    v22[2] = *(_WORD*)(v19 + 2LL * (((_BYTE)v20 + 24) & 0xF8 | v23));
    v24 = v20 + 28;
    v20 += 32;
    v22[3] = *(_WORD*)(v19 + 2LL * (v24 & 0xFC | v23));
    v22 += 8;
  } while (v20 != 0);
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_94480(_QWORD* a1, __int64* a2,
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

  {
    v5 = a1[1];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v8 = *(_QWORD*)(v5 + 8);
    __asm__ volatile("" ::"r"(v8));
  }
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
  v38[1] = 64;
  v38[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540_alt1((__int64)(a3 + 1),
                                                  (__int64)v38, &v39, 3u);
  {
    v12 = *a2;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v11 = a2[1];
    __asm__ volatile("" ::"r"(v11));
  }
  v13 = v11 - *a2;
  if (v11 == *a2) {
    v15 = nullptr;
    v17 = 0;
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
    LABEL_12:
      {
        v20 = a4[2];
        __asm__ volatile("" ::"r"(v20));
      }
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
        __asm__("" : "+r"(v18));
        *(_BYTE*)v18 = 0;
        v18 = (_QWORD*)((char*)v18 + 1);
        --v16;
      } while (v16 != 0);
    }
    if ((unsigned __int64)(v12 - v11) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        __asm__("" : "+r"(v18));
        *v18++ = 0;
      } while (v18 != v15);
    }
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
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
    {
      v23 = *a2 + 8;
      __asm__ volatile("" ::"r"(v23));
    }
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
          v31 = v17 + 2 * v21 + ((v29 | (v24 >> 3) & 6) << 9);
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
          {
            v37 = v28[3];
            __asm__ volatile("" ::"r"(v37));
          }
          v28 += 8;
          *(_WORD*)(v36 + v32 + 2) = v37;
        } while (v27 != 32);
        ++v24;
        v25 += 32 * v9;
      } while (v24 != 64);
      v21 += 2048;
      ++v22;
      v23 += 64;
    } while (v22 != v9);
  }
  return result;
}

void nvidia_dlss_rel_source_features_dlaa_94f40(_QWORD* a1, __int64* a2,
                                                _QWORD* a3, __int64* a4)
{

#pragma clang fp contract(off)
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
  unsigned __int64* v18;
  unsigned __int64* v19;
  unsigned __int64 v20;
  unsigned __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  float v26;
  float v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 i;
  int v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  char v51;
  int v52;
  char v53;
  int v54;
  bool v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned __int64 v61;
  _WORD* v62;
  int v63;
  __int64 v64;
  _WORD* v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int16 v74;
  unsigned __int64 v75;
  _WORD* v76;
  int v77;
  __int64 v78;
  _WORD* v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int16 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _WORD* v96;
  _WORD* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  struct {
    unsigned int v101;
    float v102;
  } v101_;

  *a3 = *a1;
  if (a3 == a1) {
    a3[4] = a1[4];
    {
      v9 = *a2;
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v8 = a2[1];
      __asm__ volatile("" ::"r"(v8));
    }
    v10 = v8 - *a2;
    if (v8 != *a2) {
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
          __asm__("" : "+r"(v15));
          *(_BYTE*)v15 = 0;
          v15 = (_QWORD*)((char*)v15 + 1);
          --v13;
        } while (v13 != 0);
      }
      if ((unsigned __int64)(v9 - v8) <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          __asm__("" : "+r"(v15));
          *v15++ = 0;
        } while (v15 != v12);
      }
      {
        v16 = *a4;
        __asm__ volatile("" ::"r"(v16));
      }
      if (*a4 != 0) {
        goto LABEL_10;
      }
      goto LABEL_11;
    }
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (__int64)(a1[2] - a1[1]) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
    {
      v9 = *a2;
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v8 = a2[1];
      __asm__ volatile("" ::"r"(v8));
    }
    v10 = v8 - *a2;
    if (v8 != *a2) {
      goto LABEL_3;
    }
  }
  v12 = nullptr;
  v14 = 0;
  {
    v16 = *a4;
    __asm__ volatile("" ::"r"(v16));
  }
  if (*a4 != 0) {
  LABEL_10:
    {
      v17 = a4[2];
      __asm__ volatile("" ::"r"(v17));
    }
    a4[1] = v16;
    NgxRoutine_430(v16, v17 - v16);
  }
LABEL_11:
  *a4 = v14;
  a4[1] = (__int64)v12;
  a4[2] = (__int64)v12;
  {
    v18 = (unsigned __int64*)a1[1];
    __asm__ volatile("" ::"r"(v18));
  }
  {
    v19 = (unsigned __int64*)a1[2];
    __asm__ volatile("" ::"r"(v19));
  }
  if (v18 == v19) {
    v23 = 0;
  }
  else {
    v20 = 1;
    {
      v21 = (unsigned __int64*)a1[1];
      __asm__ volatile("" ::"r"(v21));
    }
    do {
      {
        v22 = *v21++;
        __asm__ volatile("" ::"r"(v22));
      }
      v20 *= v22;
    } while (v21 != v19);
    v23 = v20 / 3;
  }
  {
    v25 = *v18;
    __asm__ volatile("" ::"r"(v25));
  }
  {
    v24 = v18[1];
    __asm__ volatile("" ::"r"(v24));
  }
  v26 = logf_plt_alt1(0x1.0000000000000p+1f);
  v27 = sqrtf_plt_alt1(0x1.0000000000000p+5f);
  if (v25 >= 0x60 && v24 >= 0x20) {
    {
      v28 = *a2;
      __asm__ volatile("" ::"r"(v28));
    }
    v29 = 0;
    v30 = 0;
    v89 = v24 << 6;
    v100 = 2 * v24;
    v31 = v28 + 2 * v23 + 8;
    {
      v94 = *a4;
      __asm__ volatile("" ::"r"(v94));
    }
    v32 = 4 * v23 + v28 + 8;
    v33 = (float)(0x1.0000000000000p+0f / v26) *
          (float)(0x1.0000000000000p+0f / v27);
    do {
      v92 = v28;
      v93 = v30;
      v34 = 0;
      v90 = v32;
      v91 = v31;
      v35 = v32;
      v36 = v31;
      do {
        v96 = (_WORD*)v36;
        v97 = (_WORD*)v35;
        v98 = v34;
        v99 = v29;
        v37 = 0;
        v38 = v94 + 2 * v29;
        v95 = v28;
        do {
          for (i = 0; i != 32; ++i) {
            {
              v45 = *(unsigned __int16*)(v28 + 2 * i);
              __asm__ volatile("" ::"r"(v45));
            }
            v46 = v45 << 13;
            v47 = v45 >> 15;
            v48 = (v45 >> 10) & 0x1F;
            v49 = (v45 << 13) & 0x7FE000;
            if (v48 == 31) {
              v56 = 255;
              if (v49 != 0) {
                v47 = 0;
                v49 = 0x7FFFFF;
              }
              else {
                v49 = 0;
              }
            }
            else {
              v50 = __clz((unsigned int)(v49));
              v51 = v50 ^ 0x1F;
              v52 = 121 - v50;
              v53 = 23 - v51;
              if (v49 == 0) {
                v52 = 0;
              }
              v54 = (v46 << v53) & 0x7FC000;
              if (v49 == 0) {
                v54 = 0;
              }
              v55 = v48 == 0;
              if (v48 != 0) {
                v56 = v48 + 112;
              }
              else {
                v56 = v52;
              }
              if (v55) {
                v49 = v54;
              }
            }
            v101_.v101 = v49 | (v56 << 23) | (v47 << 31);
            memcpy_plt((__int64)&v101_.v102, (__int64)&v101_.v101, 4u);
            v101_.v102 = v33 * v101_.v102;
            memcpy_plt((__int64)&v101_.v101, (__int64)&v101_.v102, 4u);
            v57 = v101_.v101 & 0x7FFFFFFF;
            v40 = HIWORD(v101_.v101) & 0x8000;
            if ((unsigned __int8)(v101_.v101 >> 23) == 255) {
              LOWORD(v40) = v40 | 0x7C00;
              if (v57 != 2139095040) {
                LOWORD(v40) = 0x7FFF;
              }
              v57 = 0;
            }
            else if (v57 <= 0x477FEFFF) {
              v58 = v57 >> 23;
              if (v57 >> 23 <= 0x70) {
                if (v57 >= 0x33000001) {
                  v60 = v101_.v101 & 0x7FFFFF | 0x800000;
                  v57 = v60 << (v58 - 94);
                  v40 |= v60 >> (126 - v58);
                  if (v57 > 0x80000000) {
                  LABEL_26:
                    LOWORD(v40) = v40 + 1;
                    goto LABEL_27;
                  }
                }
              }
              else {
                v59 = (v57 - 939524096) >> 13;
                v57 = v101_.v101 << 19;
                LOWORD(v40) = v59 | v40;
                if (v101_.v101 << 19 > 0x80000000) {
                  goto LABEL_26;
                }
              }
            }
            else {
              LOWORD(v40) = v40 | 0x7BFF;
              v57 = 0x80000000;
            }
            if (v57 == 0x80000000 && (v40 & 1) != 0) {
              goto LABEL_26;
            }
          LABEL_27:
            v41 = i & 1;
            v42 = v38 + ((((unsigned int)i >> 4) | (v37 >> 3) & 2) << 9);
            v43 = ((unsigned int)i >> 1) & 3 | (4 * (v37 & 7));
            v44 = ((unsigned int)i >> 1) & 4;
            *(_WORD*)(v42 + 16LL * v43 + (v44 | v37 & 8) + 2 * v41) = v40;
          }
          ++v37;
          v28 += v100;
        } while (v37 != 32);
        v61 = 0;
        v62 = v96;
        do {
          v63 = 0;
          v64 = 0;
          v65 = v62;
          do {
            v66 = (unsigned int)v64 >> 4;
            v67 = v63 & 4;
            v64 += 8;
            v63 += 4;
            v68 = v38 + 2048 + ((v66 | (v61 >> 3) & 2) << 9);
            v69 = v67 | (unsigned int)(v61 & 8);
            v70 = v68 + 64 * (v61 & 7);
            *(_WORD*)(v70 + v69) = *(v65 - 4);
            *(_WORD*)(v70 + v69 + 2) = *(v65 - 3);
            v71 = v68 + 16 * ((4 * (v61 & 7)) | 1);
            *(_WORD*)(v71 + v69) = *(v65 - 2);
            *(_WORD*)(v71 + v69 + 2) = *(v65 - 1);
            v72 = v68 + 16 * ((4 * (v61 & 7)) | 2);
            v73 = v68 + 16 * ((4 * (v61 & 7)) | 3);
            *(_WORD*)(v72 + v69) = *v65;
            *(_WORD*)(v72 + v69 + 2) = v65[1];
            *(_WORD*)(v73 + v69) = v65[2];
            {
              v74 = v65[3];
              __asm__ volatile("" ::"r"(v74));
            }
            v65 += 8;
            *(_WORD*)(v73 + v69 + 2) = v74;
          } while (v64 != 32);
          ++v61;
          v62 = (_WORD*)((char*)v62 + v100);
        } while (v61 != 32);
        v75 = 0;
        v76 = v97;
        do {
          v77 = 0;
          v78 = 0;
          v79 = v76;
          do {
            v80 = (unsigned int)v78 >> 4;
            v81 = v77 & 4;
            v78 += 8;
            v77 += 4;
            v82 = v38 + 4096 + ((v80 | (v75 >> 3) & 2) << 9);
            v83 = v81 | (unsigned int)(v75 & 8);
            v84 = v82 + 64 * (v75 & 7);
            *(_WORD*)(v84 + v83) = *(v79 - 4);
            *(_WORD*)(v84 + v83 + 2) = *(v79 - 3);
            v85 = v82 + 16 * ((4 * (v75 & 7)) | 1);
            *(_WORD*)(v85 + v83) = *(v79 - 2);
            *(_WORD*)(v85 + v83 + 2) = *(v79 - 1);
            v86 = v82 + 16 * ((4 * (v75 & 7)) | 2);
            v87 = v82 + 16 * ((4 * (v75 & 7)) | 3);
            *(_WORD*)(v86 + v83) = *v79;
            *(_WORD*)(v86 + v83 + 2) = v79[1];
            *(_WORD*)(v87 + v83) = v79[2];
            {
              v88 = v79[3];
              __asm__ volatile("" ::"r"(v88));
            }
            v79 += 8;
            *(_WORD*)(v87 + v83 + 2) = v88;
          } while (v78 != 32);
          ++v75;
          v76 = (_WORD*)((char*)v76 + v100);
        } while (v75 != 32);
        v28 = v95 + 64;
        v36 = (__int64)(v96 + 32);
        v35 = (__int64)(v97 + 32);
        v29 = v99 + 3072;
        v34 = v98 + 1;
      } while (v98 + 1 != v24 >> 5);
      v28 = v92 + v89;
      v31 = v91 + v89;
      v30 = v93 + 1;
      v32 = v90 + v89;
    } while (v93 + 1 != v25 / 0x60);
  }
}

__int64 nvidia_dlss_rel_source_features_dlaa_962e0(_QWORD* a1, __int64* a2,
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

  {
    v5 = a1[1];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v8 = *(_QWORD*)(v5 + 8);
    __asm__ volatile("" ::"r"(v8));
  }
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
  nvidia_dlss_rel_source_features_dlaa_97540_alt1((__int64)(a3 + 1),
                                                  (__int64)v38, &v39, 3u);
  {
    v12 = *a2;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v11 = a2[1];
    __asm__ volatile("" ::"r"(v11));
  }
  v13 = v11 - *a2;
  if (v11 == *a2) {
    v15 = nullptr;
    v17 = 0;
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
    LABEL_12:
      {
        v20 = a4[2];
        __asm__ volatile("" ::"r"(v20));
      }
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
        __asm__("" : "+r"(v18));
        *(_BYTE*)v18 = 0;
        v18 = (_QWORD*)((char*)v18 + 1);
        --v16;
      } while (v16 != 0);
    }
    if ((unsigned __int64)(v12 - v11) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        __asm__("" : "+r"(v18));
        *v18++ = 0;
      } while (v18 != v15);
    }
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
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
    {
      v23 = *a2 + 8;
      __asm__ volatile("" ::"r"(v23));
    }
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
          {
            v37 = v28[3];
            __asm__ volatile("" ::"r"(v37));
          }
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

__int64 nvidia_dlss_rel_source_features_dlaa_96580(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4)
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
  unsigned int v42;
  int v43;

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
      __asm__("" : "+r"(v15));
      *(_BYTE*)v15 = 0;
      v15 = (_QWORD*)((char*)v15 + 1);
      --v13;
    } while (v13 != 0);
  }
  if ((unsigned __int64)(v9 - v8) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      __asm__("" : "+r"(v15));
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
    v26 = __clz(v24 & 0x7FE000);
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
    v42 = v32 | (v36 << 23) | (v22 << 31);
    memcpy_plt_alt1(&v43, &v42, 4);
    result = memcpy_plt_alt1(&v42, &v43, 4);
    v38 = v42 & 0x7FFFFFFF;
    v20 = HIWORD(v42) & 0x8000;
    if ((unsigned __int8)(v42 >> 23) == 255) {
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
          v41 = v42 & 0x7FFFFF | 0x800000;
          v40 = v41 << (v39 - 94);
          v20 |= v41 >> (126 - v39);
          if (v40 > 0x80000000) {
          LABEL_12:
            LOWORD(v20) = v20 + 1;
            goto LABEL_13;
          }
        }
        else {
          v40 = v42 << 19;
          v20 |= (v38 - 939524096) >> 13;
          if (v42 << 19 > 0x80000000) {
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
  } while (v18 != 64);
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove")))
__int64 nvidia_dlss_rel_source_features_dlaa_968a0(_QWORD* a1, __int64* a2,
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
  v37[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (char*)v37,
                                             (char*)&v38, 3u);
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
          v30 = v16 + 2 * v20 + ((v28 | (v23 >> 3) & 2) << 9);
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
        } while (v26 != 32);
        ++v23;
        v24 += 32;
      } while (v23 != 32);
      v20 += 1024;
      ++v21;
      v22 += 2048;
    } while (v21 != v8 >> 5);
  }
  return result;
}

#pragma GCC visibility pop
