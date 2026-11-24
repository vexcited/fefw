#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_87a2a0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a2b0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void fw_math_MapStateIndices9(PSEUDO_X8, __int64,
                                                         _QWORD*);
__attribute__((swiftcall)) void math_71a690(PSEUDO_X8, __int64, _QWORD*,
                                            __int64*);
__attribute__((swiftcall)) void math_71be60(PSEUDO_X8, __int64, _QWORD*,
                                            __int64);
__int64 SdkRoutine_87a290(__int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__attribute__((swiftcall)) void math_716e80(PSEUDO_X8 x8_, __int64 result,
                                            __int64 a2);
__attribute__((swiftcall)) void math_719ca0(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            __int64* a2);
__int64 math_735c60(__int64 this_);

__attribute__((swiftcall)) void math_716e80(PSEUDO_X8 x8_, __int64 result,
                                            __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  float* v7;
  __int64 v8;
  char* v9;
  char* v10;
  unsigned __int64 v11;
  float v12;
  float* v13;
  unsigned __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  unsigned __int64 v19;
  float v20;
  float v21;
  float v22;
  unsigned __int64 v23;
  float v24;
  float v25;
  float v26;
  float v27;
  unsigned __int64 i;
  float v29;
  unsigned __int64 j;
  float v31;
  float v32;
  float v33;
  unsigned __int64 k;
  float v35;
  unsigned __int64 m;
  float v37;
  float v38;
  float v39;
  unsigned __int64 n;
  float v41;
  __int64 v42;
  unsigned __int64 v43;
  float v44;
  __int64 v45;
  float v46;
  float v47;
  float v48;
  __int64 v49;
  unsigned __int64 v50;
  float v51;
  float v52;
  __int64 v53;
  float v54;
  float v55;
  __int64 v56;
  __int64 v57;
  struct {
    __int64 v58;
    int v59;
  } v58_;
  struct {
    __int64 v60;
    float v61;
  } v60_;

  v3 = a2 + 4;
  v4 = a2 + 16;
  v5 = a2 + 28;
  v6 = 0;
  v60_.v61 = 0x0.0p+0f;
  v60_.v60 = 0;
  v58_.v59 = 0;
  v7 = (float*)(result + 12);
  v8 = result + 16;
  v58_.v58 = 0;
  v9 = (char*)&v60_.v60 + 4;
  v10 = (char*)&v58_.v58 + 4;
  do {
    v11 = v6;
    *((_DWORD*)&v60_.v60 + v6++) = 0;
    if (!(v11 > 1)) {
      v12 = 0x0.0p+0f;
      v13 = v7;
      v14 = v6;
      do {
        v15 = *v13;
        v13 += 3;
        *((float*)&v60_.v60 + v14++) = v15;
        v12 = v12 + (float)(PSEUDO_UNFUSED(v15 * v15));
      } while (v14 != 3);
      if (v12 != 0x0.0p+0f) {
        v16 = sqrtf(v12);
        v17 = *((float*)&v60_.v60 + v6);
        v18 = -v16;
        v19 = v6;
        if (!(v17 > 0x0.0p+0f)) {
          v18 = v16;
        }
        *((float*)&v60_.v60 + v6) = v17 - v18;
        v20 = 0x0.0p+0f;
        do {
          v21 = *((float*)&v60_.v60 + v19++);
          v20 = v20 + (float)(PSEUDO_UNFUSED(v21 * v21));
        } while (v19 != 3);
        v22 = sqrtf(0x1.0000000000000p+1f / v20);
        if (!(fabs(v22) > 0x1.fffffe0000000p+127f)) {
          v23 = v11;
          *(float*)&v60_.v60 = v22 * *(float*)&v60_.v60;
          *((float*)&v60_.v60 + 1) = v22 * *((float*)&v60_.v60 + 1);
          v60_.v61 = v22 * v60_.v61;
          v24 = 0x0.0p+0f;
          do {
            v25 = *(float*)(v3 + 4 * v23);
            v26 = *((float*)&v60_.v60 + ++v23);
            v24 = v24 + (float)(v25 * v26);
          } while (v23 != 2);
          v27 = -v24;
          for (i = v11; i != 2; ++i) {
            *(float*)(v3 + 4 * i) = *(float*)(v3 + 4 * i) +
                                    (float)(v27 * *((float*)&v60_.v60 + i + 1));
          }
          v29 = 0x0.0p+0f;
          for (j = v11; j != 2; ++j) {
            v31 = *(float*)(v4 + 4 * j);
            v32 = *((float*)&v60_.v60 + j + 1);
            v29 = v29 + (float)(v31 * v32);
          }
          v33 = -v29;
          for (k = v11; k != 2; ++k) {
            *(float*)(v4 + 4 * k) = *(float*)(v4 + 4 * k) +
                                    (float)(v33 * *((float*)&v60_.v60 + k + 1));
          }
          v35 = 0x0.0p+0f;
          for (m = v11; m != 2; ++m) {
            v37 = *(float*)(v5 + 4 * m);
            v38 = *((float*)&v60_.v60 + m + 1);
            v35 = v35 + (float)(v37 * v38);
          }
          v39 = -v35;
          for (n = v11; n != 2; ++n) {
            *(float*)(v5 + 4 * n) = *(float*)(v5 + 4 * n) +
                                    (float)(v39 * *((float*)&v60_.v60 + n + 1));
          }
          v41 = 0x0.0p+0f;
          v42 = v8;
          v43 = v6;
          do {
            v44 = 0x0.0p+0f;
            v45 = 0;
            do {
              v46 = *(float*)(v42 + 4 * v45);
              v47 = *(float*)&v9[4 * v45++];
              v44 = v44 + (float)(v46 * v47);
            } while (v11 + v45 != 2);
            v48 = *((float*)&v60_.v60 + v43);
            *((float*)&v58_.v58 + v43++) = v44;
            v42 += 12;
            v41 = v41 + (float)(v48 * v44);
          } while (v43 != 3);
          v49 = v8;
          v50 = v6;
          do {
            v51 = *((float*)&v60_.v60 + v50);
            v52 = *((float*)&v58_.v58 + v50);
            v53 = 0;
            v54 = v41 * v51;
            v55 = -v51;
            do {
              *(float*)(v49 + 4 * v53) =
                  *(float*)(v49 + 4 * v53) +
                  (float)((float)((float)(v54 * *(float*)&v9[4 * v53]) -
                                  (float)(PSEUDO_ROUNDED(*(float*)&v9[4 * v53] *
                                                         v52))) +
                          (float)(v55 * *(float*)&v10[4 * v53]));
              ++v53;
            } while (v11 + v53 != 2);
            ++v50;
            v49 += 12;
          } while (v50 != 3);
          *(float*)(result + 4 * (3 * v6 + v11)) = v18;
          *(float*)(result + 4 * (3 * v11 + v6)) = v18;
          if (v11 == 0) {
            *(_DWORD*)(result + 8) = 0;
            *(_DWORD*)(result + 24) = 0;
          }
        }
      }
    }
    v7 += 4;
    v9 += 4;
    v8 += 16;
    v10 += 4;
  } while (v6 != 3);
  v56 = *(_QWORD*)(result + 24);
  *(_QWORD*)(a3 + 16) = *(_QWORD*)(result + 16);
  *(_QWORD*)(a3 + 24) = v56;
  *(_DWORD*)(a3 + 32) = *(_DWORD*)(result + 32);
  v57 = *(_QWORD*)(result + 8);
  *(_QWORD*)a3 = *(_QWORD*)result;
  *(_QWORD*)(a3 + 8) = v57;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_719ca0(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            __int64* a2)
{

#pragma clang fp contract(off)
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  char* v26;
  char* v27;
  unsigned __int64 v28;
  unsigned __int64* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  _DWORD* v37;
  int v38;
  int v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  __int64 v49;
  __int64* v50;
  unsigned __int64 v51;
  _DWORD* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64* v58;
  float* v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  _QWORD* result;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  _BYTE v83[872];
  _BYTE v84[2320];
  _BYTE v85[872];
  struct {
    _QWORD v86[109];
    char gap5000_[4];
    float v87[81];
  } v86_;
  _QWORD v88[4];
  struct {
    _QWORD v89[20];
    unsigned __int64 v90;
  } v89_;
  _QWORD v91[9];
  struct {
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
  } v92_;
  struct {
    unsigned __int64 v101;
    unsigned __int64 v102;
    __int64 v103;
    _QWORD v104[287];
    unsigned __int64 v105;
    __int64 v106;
    char gap8008_[4];
    float v107[213];
  } v101_;

  v4 = a2[6];
  v5 = a2[7];
  v6 = a2[8];
  v92_.v100 = 0;
  v92_.v99 = 0;
  v92_.v98 = 0;
  v92_.v97 = 0;
  v92_.v96 = 0;
  v92_.v95 = 0;
  v92_.v94 = 0;
  v92_.v93 = 0;
  v92_.v92 = 0;
  v91[6] = v4;
  v91[7] = v5;
  v8 = a2[2];
  v9 = a2[3];
  v91[8] = v6;
  v91[2] = v8;
  v91[3] = v9;
  v10 = a2[4];
  v91[5] = a2[5];
  v91[4] = v10;
  v11 = *a2;
  v91[1] = a2[1];
  v91[0] = v11;
  fw_math_MapStateIndices9((void*)(&v92_.v92), (__int64)(a1 + 548), v91);
  v12 = *a1;
  v101_.v104[0] = 0;
  v101_.v103 = 0;
  v101_.v102 = 0;
  v101_.v101 = 0;
  v101_.v104[1] = 0;
  v101_.v104[2] = v12;
  if (v12 != 0) {
    memset_plt((__int64)&v101_.v101, 0, v12);
  }
  v13 = v92_.v93;
  memset(v88, 0, sizeof(v88));
  memset(v89_.v89, 0, sizeof(v89_.v89));
  *((_BYTE*)&v101_.v101 + v92_.v92) = 1;
  v14 = v92_.v94;
  *((_BYTE*)&v101_.v101 + v13) = 1;
  v15 = v92_.v95;
  *((_BYTE*)&v101_.v101 + v14) = 1;
  v16 = v92_.v96;
  *((_BYTE*)&v101_.v101 + v15) = 1;
  v17 = v92_.v97;
  *((_BYTE*)&v101_.v101 + v16) = 1;
  v18 = v92_.v98;
  *((_BYTE*)&v101_.v101 + v17) = 1;
  v19 = v92_.v99;
  *((_BYTE*)&v101_.v101 + v18) = 1;
  v20 = v92_.v100;
  *((_BYTE*)&v101_.v101 + v19) = 1;
  *((_BYTE*)&v101_.v101 + v20) = 1;
  v89_.v90 = v12 - 9;
  if (v12 != 9) {
    memset_plt((__int64)v88, 0, 8 * (v12 - 9));
    if (v12 == 0) {
      goto LABEL_32;
    }
  }
  v21 = v12 & 7;
  if (v12 - 1 >= 7) {
    v24 = 3;
    v23 = 0;
    while (1) {
      v25 = (char*)&v101_.v101 + v24;
      if ((*((_BYTE*)&v92_.v100 + v24 + 5) & 1) != 0) {
        if ((*(v25 - 2) & 1) != 0) {
          goto LABEL_12;
        }
      }
      else {
        v88[v23++] = v24 - 3;
        if ((*(v25 - 2) & 1) != 0) {
        LABEL_12:
          if ((*((_BYTE*)&v101_.v101 + v24 - 1) & 1) != 0) {
            goto LABEL_13;
          }
          goto LABEL_21;
        }
      }
      v88[v23++] = v24 - 2;
      if ((*((_BYTE*)&v101_.v101 + v24 - 1) & 1) != 0) {
      LABEL_13:
        if ((*((_BYTE*)&v101_.v101 + v24) & 1) != 0) {
          goto LABEL_14;
        }
        goto LABEL_22;
      }
    LABEL_21:
      v88[v23++] = v24 - 1;
      if ((*((_BYTE*)&v101_.v101 + v24) & 1) != 0) {
      LABEL_14:
        v26 = (char*)&v101_.v101 + v24;
        if ((*((_BYTE*)&v101_.v101 + v24 + 1) & 1) != 0) {
          goto LABEL_15;
        }
        goto LABEL_23;
      }
    LABEL_22:
      v88[v23++] = v24;
      v26 = (char*)&v101_.v101 + v24;
      if ((*((_BYTE*)&v101_.v101 + v24 + 1) & 1) != 0) {
      LABEL_15:
        if ((v26[2] & 1) != 0) {
          goto LABEL_16;
        }
        goto LABEL_24;
      }
    LABEL_23:
      v88[v23++] = v24 + 1;
      if ((v26[2] & 1) != 0) {
      LABEL_16:
        v27 = (char*)&v101_.v101 + v24;
        if ((*((_BYTE*)&v101_.v101 + v24 + 3) & 1) != 0) {
          goto LABEL_17;
        }
        goto LABEL_25;
      }
    LABEL_24:
      v88[v23++] = v24 + 2;
      v27 = (char*)&v101_.v101 + v24;
      if ((*((_BYTE*)&v101_.v101 + v24 + 3) & 1) != 0) {
      LABEL_17:
        if ((v27[4] & 1) == 0) {
          goto LABEL_26;
        }
        goto LABEL_9;
      }
    LABEL_25:
      v88[v23++] = v24 + 3;
      if ((v27[4] & 1) == 0) {
      LABEL_26:
        v88[v23++] = v24 + 4;
      }
    LABEL_9:
      v24 += 8;
      if (v24 - (v12 & 0xFFFFFFFFFFFFFFF8LL) == 3) {
        v22 = v24 - 3;
        if ((v12 & 7) != 0) {
          goto LABEL_30;
        }
        goto LABEL_32;
      }
    }
  }
  v22 = 0;
  v23 = 0;
  if ((v12 & 7) != 0) {
    do {
    LABEL_30:
      if ((*((_BYTE*)&v101_.v101 + v22) & 1) == 0) {
        v88[v23++] = v22;
      }
      ++v22;
      --v21;
    } while (v21 != 0);
  }
LABEL_32:
  math_71a690((void*)((__int64)v86_.v87), (__int64)a1, &v92_.v92, &v92_.v92);
  math_71be60((void*)((__int64)v85), (__int64)a1, &v92_.v92, (__int64)v88);
  v28 = v89_.v90;
  v101_.v101 = v89_.v90;
  v101_.v102 = v89_.v90;
  memset_plt((__int64)&v101_.v103, 0, 0x900u);
  if (v28 != 0) {
    v29 = a1 + 2;
    v30 = v101_.v104;
    v31 = 0;
    v32 = 0;
    while (1) {
      v33 = 33LL * v88[v32];
      if (v28 >= 8) {
        break;
      }
      v34 = 0;
      if ((v28 & 7) != 0) {
        goto LABEL_41;
      }
    LABEL_34:
      ++v32;
      v30 += 12;
      v31 += 24;
      if (v32 == v28) {
        goto LABEL_44;
      }
    }
    v35 = 0;
    v36 = v89_.v89;
    v37 = v30;
    do {
      v35 -= 8;
      v38 = *((_DWORD*)v29 + *(v36 - 3) + v33);
      v39 = *((_DWORD*)v29 + *(v36 - 2) + v33);
      v40 = *((_DWORD*)v29 + *(v36 - 1) + v33);
      v41 = *v36;
      v42 = v36[1];
      *(v37 - 2) = *((_DWORD*)v29 + *(v36 - 4) + v33);
      *(v37 - 1) = v38;
      v43 = *((_DWORD*)v29 + v41 + v33);
      v44 = *((_DWORD*)v29 + v42 + v33);
      v45 = v36[2];
      v46 = v36[3];
      *(_DWORD*)v37 = v39;
      v37[1] = v40;
      v36 += 8;
      v47 = *((_DWORD*)v29 + v45 + v33);
      v37[2] = v43;
      v37[3] = v44;
      v48 = *((_DWORD*)v29 + v46 + v33);
      v37[4] = v47;
      v37[5] = v48;
      v37 += 8;
    } while (-(__int64)(v28 & 0xFFFFFFFFFFFFFFF8LL) != v35);
    v34 = -v35;
    if ((v28 & 7) == 0) {
      goto LABEL_34;
    }
  LABEL_41:
    v49 = v34 + v31;
    v50 = &v88[v34];
    v51 = v28 & 7;
    v52 = (_DWORD*)&v101_.v104[-1] + v49;
    do {
      v53 = *v50++;
      --v51;
      *(_DWORD*)v52++ = *((_DWORD*)v29 + v53 + v33);
    } while (v51 != 0);
    goto LABEL_34;
  }
LABEL_44:
  memcpy_plt((__int64)v84, (__int64)&v101_.v101, 0x910u);
  SdkRoutine_87a290((__int64)v84);
  memcpy_plt((__int64)&v101_.v101, (__int64)v84, 0x910u);
  SdkRoutine_87a2a0((void*)(v86_.v86), v85, &v101_.v101);
  v54 = v89_.v90;
  v101_.v105 = v89_.v90;
  memset_plt((__int64)&v101_.v106, 0, 0x360u);
  if (v54 != 0) {
    v55 = v92_.v92;
    v56 = v92_.v93;
    v57 = v92_.v94;
    v58 = a1 + 2;
    v59 = v101_.v107;
    v60 = v88;
    v61 = v92_.v95;
    v62 = v92_.v96;
    v63 = v92_.v97;
    v64 = v92_.v98;
    v65 = v92_.v99;
    v66 = v92_.v100;
    do {
      v67 = *v60++;
      --v54;
      v68 = *((_DWORD*)v58 + 33 * v67 + v56);
      v69 = *((_DWORD*)v58 + 33 * v67 + v57);
      v70 = *((_DWORD*)v58 + 33 * v67 + v61);
      *(v59 - 3) = *((float*)v58 + 33 * v67 + v55);
      *((_DWORD*)v59 - 2) = v68;
      v71 = *((_DWORD*)v58 + 33 * v67 + v62);
      v72 = *((_DWORD*)v58 + 33 * v67 + v63);
      *((_DWORD*)v59 - 1) = v69;
      *(_DWORD*)v59 = v70;
      *((_DWORD*)v59 + 1) = v71;
      *((_DWORD*)v59 + 2) = v72;
      v73 = *((_DWORD*)v58 + 33 * v67 + v65);
      v59[3] = *((float*)v58 + 33 * v67 + v64);
      *((_DWORD*)v59 + 4) = v73;
      v59[5] = *((float*)v58 + 33 * v67 + v66);
      v59 += 9;
    } while (v54 != 0);
  }
  memcpy_plt((__int64)v83, (__int64)&v101_.v105, 0x368u);
  result =
      X8CALL_X0(void*, SdkRoutine_87a2b0((void*)(&v101_.v105), v86_.v86, v83));
  v75 = sqrtf(v86_.v87[10] - v101_.v107[5]);
  v76 = sqrtf(v86_.v87[20] - v101_.v107[15]);
  v77 = sqrtf(v86_.v87[30] - v101_.v107[25]);
  v78 = sqrtf(v86_.v87[40] - v101_.v107[35]);
  v79 = sqrtf(v86_.v87[50] - v101_.v107[45]);
  v80 = sqrtf(v86_.v87[60] - v101_.v107[55]);
  v81 = sqrtf(v86_.v87[70] - v101_.v107[65]);
  v82 = sqrtf(v86_.v87[80] - v101_.v107[75]);
  *a3 = sqrtf(v86_.v87[0] - *(float*)&v101_.v105);
  a3[1] = v75;
  a3[2] = v76;
  a3[3] = v77;
  a3[4] = v78;
  a3[5] = v79;
  a3[6] = v80;
  a3[7] = v81;
  a3[8] = v82;
  {
    result;
    return;
  }
}

__int64 math_735c60(__int64 this_)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float* v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float* v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  int v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  __int64 v50;
  float v51;
  float v52;
  float v53;
  int v54;
  float v55;
  float v56;
  float v57;
  __int64 v58;
  char v59;

  {
    v1 = *(_QWORD*)(this_ + 3616);
    __asm__ volatile("" ::"r"(v1));
  }
  if (v1 != 0) {
    {
      v2 = *(_QWORD*)(this_ + 3632);
      __asm__ volatile("" ::"r"(v2));
    }
    {
      v3 = *(_QWORD*)(this_ + 3624);
      __asm__ volatile("" ::"r"(v3));
    }
    v4 = this_ + 32;
    if (v1 <= v2) {
      v5 = 0;
    }
    else {
      v5 = *(_QWORD*)(this_ + 3624);
      __asm__ volatile("" ::"r"(v5));
    }
    v6 = v5 + v2;
    if (v6 - 1 >= v3) {
      v7 = *(_QWORD*)(this_ + 3624);
      __asm__ volatile("" ::"r"(v7));
    }
    else {
      v7 = 0;
    }
    v8 = (float*)(v4 + 56 * (v6 - 1 - v7));
    {
      v9 = v8[2];
      __asm__ volatile("" ::"w"(v9));
    }
    {
      v10 = v8[3];
      __asm__ volatile("" ::"w"(v10));
    }
    {
      v12 = v8[4];
      __asm__ volatile("" ::"w"(v12));
    }
    {
      v11 = v8[5];
      __asm__ volatile("" ::"w"(v11));
    }
    {
      v14 = v8[6];
      __asm__ volatile("" ::"w"(v14));
    }
    {
      v13 = v8[7];
      __asm__ volatile("" ::"w"(v13));
    }
    v15 = v13;
    v16 = v14;
    v17 = v11;
    v18 = v12;
    v19 = v10;
    v20 = v9;
    if (v1 != 1) {
      if (v6 - 2 < v3) {
        v3 = 0;
      }
      v21 = (float*)(v4 + 56 * (v6 - 2 - v3));
      {
        v20 = v9 - v21[2];
        __asm__ volatile("" ::"w"(v20));
      }
      {
        v19 = v10 - v21[3];
        __asm__ volatile("" ::"w"(v19));
      }
      {
        v18 = v12 - v21[4];
        __asm__ volatile("" ::"w"(v18));
      }
      {
        v17 = v11 - v21[5];
        __asm__ volatile("" ::"w"(v17));
      }
      {
        v16 = v14 - v21[6];
        __asm__ volatile("" ::"w"(v16));
      }
      {
        v15 = v13 - v21[7];
        __asm__ volatile("" ::"w"(v15));
      }
    }
    {
      v22 = *(float*)(this_ + 8);
      __asm__ volatile("" ::"w"(v22));
    }
    {
      v23 = *(_QWORD*)(this_ + 4464);
      __asm__ volatile("" ::"r"(v23));
    }
    {
      v24 = *(float*)(this_ + 4) * *(float*)(this_ + 4);
      __asm__ volatile("" ::"w"(v24));
    }
    {
      v25 = *(float*)(this_ + 12);
      __asm__ volatile("" ::"w"(v25));
    }
    v26 = v18 * v22;
    v27 = (float)(v19 * v22) * (float)(v19 * v22);
    v28 = (float)(v12 * v25) * (float)(v12 * v25);
    v29 = v24 + (float)((float)(v10 * v25) * (float)(v10 * v25));
    v30 = (float)(v24 + (float)((float)(v9 * v25) * (float)(v9 * v25))) +
          (float)((float)(v20 * v22) * (float)(v20 * v22));
    {
      v31 = *(float*)(this_ + 4596);
      __asm__ volatile("" ::"w"(v31));
    }
    v32 = v31 * 0x1.0000000000000p-1f;
    v33 = (float)(v31 * v31) * (float)((2 * v23) | 1uLL);
    if (fabsf(v9 + v20) > v32 ||
        (v34 = 0, *((_BYTE*)v8 + 45) == 1) && ((_BYTE)v8[11] & 1) != 0) {
      v30 = v30 + v33;
      v34 = 1;
    }
    v35 = v29 + v27;
    if (fabsf(v10 + v19) > v32 ||
        *((_BYTE*)v8 + 45) == 1 && ((_BYTE)v8[11] & 1) != 0) {
      v35 = v35 + v33;
      v34 = 1;
    }
    v36 = (float)(v24 + v28) + (float)(v26 * v26);
    if (fabsf(v12 + v18) > v32 ||
        *((_BYTE*)v8 + 45) == 1 && ((_BYTE)v8[11] & 1) != 0) {
      v36 = v36 + v33;
    }
    else if (v34 == 0) {
      if (v23 != 0 &&
          (float)((float)(__int64)(*(_QWORD*)v8 - *(_QWORD*)(this_ + 4472)) /
                  0x1.dcd6500000000p+29f) > 0x1.0000000000000p+0f) {
        *(_QWORD*)(this_ + 4464) = 0;
      }
    LABEL_25:
      {
        v37 = *(float*)(this_ + 24);
        __asm__ volatile("" ::"w"(v37));
      }
      {
        v38 = *(float*)(this_ + 20);
        __asm__ volatile("" ::"w"(v38));
      }
      v39 = v37 * v11;
      v40 = v37 * v14;
      {
        v41 = *(float*)(this_ + 16) * *(float*)(this_ + 16);
        __asm__ volatile("" ::"w"(v41));
      }
      v42 = v16 * v38;
      v43 = v17 * v38;
      v44 = v15 * v38;
      {
        v45 = *(float*)(this_ + 4600);
        __asm__ volatile("" ::"w"(v45));
      }
      v46 = (float)(v37 * v13) * (float)(v37 * v13);
      v47 = v41 + (float)(v39 * v39);
      v48 = v41 + (float)(v40 * v40);
      v49 = v42 * v42;
      {
        v50 = *(_QWORD*)(this_ + 4480);
        __asm__ volatile("" ::"r"(v50));
      }
      v51 = v47 + (float)(v43 * v43);
      v52 = v45 * 0x1.cccccc0000000p-1f;
      v53 = (float)(v45 * v45) * (float)((2 * v50) | 1uLL);
      if (fabsf(v11) > v52 ||
          (v54 = 0, *((_BYTE*)v8 + 47) == 1) && (*((_BYTE*)v8 + 46) & 1) != 0) {
        v51 = v51 + v53;
        v54 = 1;
      }
      v55 = v41 + v46;
      v56 = v48 + v49;
      if (fabsf(v14) > v52 ||
          *((_BYTE*)v8 + 47) == 1 && (*((_BYTE*)v8 + 46) & 1) != 0) {
        v56 = v56 + v53;
        v54 = 1;
      }
      v57 = v55 + (float)(v44 * v44);
      if (fabsf(v13) > v52 ||
          *((_BYTE*)v8 + 47) == 1 && (*((_BYTE*)v8 + 46) & 1) != 0) {
        v57 = v57 + v53;
      }
      else if (v54 == 0) {
        if (v50 != 0 &&
            (float)((float)(__int64)(*(_QWORD*)v8 - *(_QWORD*)(this_ + 4488)) /
                    0x1.dcd6500000000p+29f) > 0x1.0000000000000p+0f) {
          *(_QWORD*)(this_ + 4480) = 0;
        }
        goto LABEL_38;
      }
      {
        v58 = *(_QWORD*)v8;
        __asm__ volatile("" ::"r"(v58));
      }
      *(_QWORD*)(this_ + 4480) = v50 + 1;
      *(_QWORD*)(this_ + 4488) = v58;
    LABEL_38:
      *(float*)(this_ + 4432) = v30;
      *(float*)(this_ + 4436) = v35;
      {
        v59 = *(_BYTE*)(this_ + 4456);
        __asm__ volatile("" ::"r"(v59));
      }
      *(float*)(this_ + 4440) = v36;
      *(float*)(this_ + 4444) = v51;
      *(float*)(this_ + 4448) = v56;
      *(float*)(this_ + 4452) = v57;
      if ((v59 & 1) == 0) {
        *(_BYTE*)(this_ + 4456) = 1;
      }
      return this_;
    }
    *(_QWORD*)(this_ + 4464) = v23 + 1;
    *(_QWORD*)(this_ + 4472) = *(_QWORD*)v8;
    {
      v11 = v8[5];
      __asm__ volatile("" ::"w"(v11));
    }
    goto LABEL_25;
  }
  return this_;
}

#pragma GCC visibility pop
