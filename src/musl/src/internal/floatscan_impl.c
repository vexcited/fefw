#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_78ead0(_QWORD);
unsigned __int64 scanexp(_QWORD* a1, int a2);
_QWORD* musl_78eaa0(_QWORD* result, __int64);
__int64 __errno_location_plt();
__int64 musl_src_78ead0(_QWORD*);
double __trunctfdf2();
double copysign_plt(double, double);
double fabs_plt(double);
double fmod_plt(double, double);
double scalbn_plt(_QWORD, double, long double, long double);
extern _DWORD SdkData_bb05b0[8];
extern __int128 SdkData_bb22c0;
long double SdkRoutine_854fd0(long double, long double);
long double __addtf3(long double, long double);
long double __extenddftf2(double);
long double __floatunsitf(unsigned int);
void SdkRoutine_77cca0();
double __floatscan(_QWORD* a1, int a2, unsigned int a3, double a4);

double __floatscan(_QWORD* a1, int a2, unsigned int a3, double a4)
{
  double v4;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned __int8* v11;
  unsigned int v12;
  unsigned __int8* v13;
  double v14;
  unsigned int v15;
  _BYTE* v16;
  _BYTE* v17;
  _BYTE* v18;
  long double v19;
  _BYTE* v21;
  int v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  bool v26;
  _BYTE* v27;
  _BYTE* v28;
  int v29;
  _BYTE* v30;
  unsigned __int8* v31;
  int v32;
  unsigned __int8* v33;
  unsigned __int8* v34;
  unsigned __int8* v35;
  _BYTE* v36;
  __int64 v37;
  unsigned __int8* v39;
  int v40;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  unsigned __int8* v49;
  _BOOL4 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int8* v55;
  int v56;
  int v57;
  double v58;
  double v59;
  int v60;
  int v61;
  int v62;
  unsigned __int8* v63;
  int v64;
  int v66;
  int v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  int v72;
  int v73;
  unsigned int v74;
  int v75;
  __int64 v76;
  int v77;
  unsigned int v78;
  int* v79;
  unsigned int v80;
  int v81;
  int v82;
  int v83;
  unsigned int v84;
  int v85;
  __int64 v86;
  int v87;
  __int64 v88;
  _BOOL4 v89;
  _BOOL4 v90;
  unsigned int v91;
  int v92;
  int v93;
  int v94;
  unsigned int v95;
  unsigned int v96;
  bool i;
  char v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  int v101;
  int v102;
  __int64 v104;
  int v105;
  unsigned int v106;
  int v108;
  unsigned int v109;
  int v110;
  unsigned int v111;
  int v112;
  unsigned int v113;
  int v114;
  unsigned int v115;
  signed int v117;
  int v118;
  long double v119;
  long double v120;
  long double v121;
  double v122;
  double v123;
  int v124;
  unsigned int v125;
  double v126;
  double v127;
  long double v128;
  long double v129;
  double v130;
  signed int v131;
  unsigned int v132;
  double v133;
  double v134;
  double v135;
  _BOOL4 v136;
  unsigned int v138;
  unsigned int v139;
  int v140;
  unsigned int v141;
  long double v142;
  unsigned int v143;
  long double v144;
  _DWORD v145[64];
  int v146;
  int v147;

  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v4 = 0x0.0p+0;
  if (a2 != 0) {
    if (a2 != 1) {
      return v4;
    }
    v7 = -1074;
    v8 = 53;
    v9 = 1;
  }
  else {
    v9 = 0;
    v7 = -149;
    v8 = 24;
  }
  do {
    do {
      while (1) {
        v11 = (unsigned __int8*)a1[1];
        if (v11 != (unsigned __int8*)a1[22]) {
          break;
        }
        v10 = musl_src_78ead0(a1),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
        if ((unsigned int)(v10 - 9) >= 5) {
          goto LABEL_8;
        }
      }
      a1[1] = v11 + 1;
      v10 = *v11;
    } while ((unsigned int)(v10 - 9) < 5);
  LABEL_8:;
  } while (v10 == 32);
  if (v10 != 45 && v10 != 43) {
    v14 = 0x1.0000000000000p+0;
    v15 = v10 & 0xFFFFFFDF;
    if ((v10 & 0xFFFFFFDF) != 0x49) {
      goto LABEL_20;
    }
    goto LABEL_16;
  }
  if (v10 == 45) {
    v12 = 2;
  }
  else {
    v12 = 0;
  }
  a4 = (double)v12;
  v13 = (unsigned __int8*)a1[1];
  v14 = 0x1.0000000000000p+0 - a4;
  if (v13 == (unsigned __int8*)a1[22]) {
    v10 = musl_src_78ead0(a1),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
    v15 = v10 & 0xFFFFFFDF;
    if ((v10 & 0xFFFFFFDF) != 0x49) {
      goto LABEL_20;
    }
  LABEL_16:
    v16 = (_BYTE*)a1[1];
    if (v16 == (_BYTE*)a1[22]) {
      if ((musl_src_78ead0(a1) & 0xFFFFFFDF) != 0x4E) {
        goto LABEL_191;
      }
    }
    else {
      a1[1] = v16 + 1;
      if ((*v16 & 0xDF) != 0x4E) {
        goto LABEL_191;
      }
    }
    v21 = (_BYTE*)a1[1];
    if (v21 == (_BYTE*)a1[22]) {
      if ((musl_src_78ead0(a1) & 0xFFFFFFDF) != 0x46) {
        goto LABEL_191;
      }
    }
    else {
      a1[1] = v21 + 1;
      if ((*v21 & 0xDF) != 0x46) {
        goto LABEL_191;
      }
    }
    v28 = (_BYTE*)a1[1];
    if (v28 == (_BYTE*)a1[22]) {
      v29 = musl_src_78ead0(a1) & 0xFFFFFFDF,
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
      if (v29 == 73) {
      LABEL_44:
        v30 = (_BYTE*)a1[1];
        if (v30 == (_BYTE*)a1[22]) {
          if ((musl_src_78ead0(a1) & 0xFFFFFFDF) == 0x4E) {
          LABEL_46:
            v31 = (unsigned __int8*)a1[1];
            if (v31 == (unsigned __int8*)a1[22]) {
              v32 = musl_src_78ead0(a1),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v128 = COERCE_AS(__typeof__(v128),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
            else {
              a1[1] = v31 + 1;
              v32 = *v31;
            }
            if ((v32 & 0xFFFFFFDF) == 0x49) {
              v55 = (unsigned __int8*)a1[1];
              if (v55 == (unsigned __int8*)a1[22]) {
                v56 = musl_src_78ead0(a1),
                v120 = COERCE_AS(__typeof__(v120),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v121 = COERCE_AS(__typeof__(v121),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v128 = COERCE_AS(__typeof__(v128),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v129 = COERCE_AS(__typeof__(v129),
                                 PSEUDO_REGISTER(__n128, "v2", "=w"));
              }
              else {
                a1[1] = v55 + 1;
                v56 = *v55;
              }
              if ((v56 & 0xFFFFFFDF) == 0x54) {
                v63 = (unsigned __int8*)a1[1];
                if (v63 == (unsigned __int8*)a1[22]) {
                  v64 = musl_src_78ead0(a1),
                  v120 = COERCE_AS(__typeof__(v120),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v128 = COERCE_AS(__typeof__(v128),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v129 = COERCE_AS(__typeof__(v129),
                                   PSEUDO_REGISTER(__n128, "v2", "=w"));
                }
                else {
                  a1[1] = v63 + 1;
                  v64 = *v63;
                }
                if ((v64 & 0xFFFFFFDF) == 0x59) {
                LABEL_189:
                  v58 = __builtin_inff();
                  return v14 * v58;
                }
                v43 = -7;
              }
              else {
                v43 = -6;
              }
            }
            else {
              v43 = -5;
            }
            goto LABEL_184;
          }
        }
        else {
          a1[1] = v30 + 1;
          if ((*v30 & 0xDF) == 0x4E) {
            goto LABEL_46;
          }
        }
        v43 = -4;
      LABEL_184:
        if (a3 == 0) {
          goto LABEL_191;
        }
        goto LABEL_185;
      }
    }
    else {
      a1[1] = v28 + 1;
      v29 = *v28 & 0xDF;
      if (v29 == 73) {
        goto LABEL_44;
      }
    }
    v43 = -3;
  LABEL_185:
    if ((a1[23] & 0x8000000000000000LL) == 0) {
      --a1[1];
      if (a3 != 0 && v29 == 73) {
        a1[1] += v43 + 3;
      }
    }
    goto LABEL_189;
  }
  a1[1] = v13 + 1;
  v10 = *v13;
  v15 = v10 & 0xFFFFFFDF;
  if ((v10 & 0xFFFFFFDF) == 0x49) {
    goto LABEL_16;
  }
LABEL_20:
  if (v15 != 78) {
    if (v10 == 48) {
      v18 = (_BYTE*)a1[1];
      if (v18 == (_BYTE*)a1[22]) {
        if ((musl_src_78ead0(a1) & 0xFFFFFFDF) == 0x58) {
          goto LABEL_29;
        }
      }
      else {
        a1[1] = v18 + 1;
        if ((*v18 & 0xDF) == 0x58) {
        LABEL_29:
          v19 = __extenddftf2(v14),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v128 =
              COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
          ((void (*)(_QWORD*, _QWORD, _QWORD, _QWORD,
                     long double))SdkRoutine_77cca0)(a1, v8, v7, a3, v19),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v128 = COERCE_AS(__typeof__(v128),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(__n128, "v2", "=w"));
          return __trunctfdf2();
        }
      }
      v33 = (unsigned __int8*)a1[1];
      if ((a1[23] & 0x8000000000000000LL) == 0) {
        a1[1] = --v33;
      }
      v143 = -v7;
      v138 = -v7 - v8;
      if (v33 == (unsigned __int8*)a1[22]) {
        goto LABEL_54;
      }
      while (1) {
        a1[1] = v33 + 1;
        v10 = *v33;
        if (v10 != 48) {
          break;
        }
        while (1) {
          v33 = (unsigned __int8*)a1[1];
          if (v33 != (unsigned __int8*)a1[22]) {
            break;
          }
        LABEL_54:
          v10 = musl_src_78ead0(a1),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v128 =
              COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
          if (v10 != 48) {
            goto LABEL_57;
          }
        }
      }
    LABEL_57:
      if (v10 == 46) {
        v22 = 1;
      LABEL_59:
        v34 = (unsigned __int8*)a1[1];
        if (v34 == (unsigned __int8*)a1[22]) {
          v10 = musl_src_78ead0(a1),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v128 =
              COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v140 = v9;
          v141 = v8;
          if (v10 == 48) {
          LABEL_61:
            v23 = 0;
            do {
              while (1) {
                v35 = (unsigned __int8*)a1[1];
                if (v35 != (unsigned __int8*)a1[22]) {
                  break;
                }
                v10 = musl_src_78ead0(a1),
                v120 = COERCE_AS(__typeof__(v120),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v121 = COERCE_AS(__typeof__(v121),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v128 = COERCE_AS(__typeof__(v128),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v129 = COERCE_AS(__typeof__(v129),
                                 PSEUDO_REGISTER(__n128, "v2", "=w"));
                --v23;
                if (v10 != 48) {
                  goto LABEL_65;
                }
              }
              a1[1] = v35 + 1;
              v10 = *v35;
              --v23;
            } while (v10 == 48);
          LABEL_65:
            v22 = 1;
          LABEL_92:
            v24 = 1;
            v139 = v7;
            v145[0] = 0;
            v25 = v10 - 48;
            v26 = v10 == 46;
            if (v10 == 46) {
              goto LABEL_97;
            }
            goto LABEL_95;
          }
        }
        else {
          a1[1] = v34 + 1;
          v10 = *v34;
          v140 = v9;
          v141 = v8;
          if (v10 == 48) {
            goto LABEL_61;
          }
        }
        v23 = 0;
        goto LABEL_92;
      }
      v22 = 1;
      v140 = v9;
      v141 = v8;
      v23 = 0;
      v24 = 0;
      v139 = v7;
      v145[0] = 0;
      v25 = v10 - 48;
      v26 = false;
    }
    else {
      v22 = 0;
      v143 = -v7;
      v138 = -v7 - v8;
      if (v10 == 46) {
        goto LABEL_59;
      }
      v140 = v9;
      v141 = v8;
      v23 = 0;
      v24 = 0;
      v139 = v7;
      v145[0] = 0;
      v25 = v10 - 48;
      v26 = v10 == 46;
    }
  LABEL_95:
    if (v25 <= 9) {
    LABEL_97:
      v47 = 0;
      v46 = 0;
      v45 = 0;
      v44 = 0;
      while (1) {
        if (v26) {
          if (v24 != 0) {
            v51 = v22 == 0;
            if ((a1[23] & 0x8000000000000000LL) != 0) {
              goto LABEL_134;
            }
          LABEL_131:
            --a1[1];
            if (!v51) {
              goto LABEL_157;
            }
          LABEL_135:
            *(_DWORD*)
                __errno_location_plt() = 22,
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
          LABEL_136:
            musl_78eaa0(a1, 0),
                v120 = COERCE_AS(__typeof__(v120),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v121 = COERCE_AS(__typeof__(v121),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v128 = COERCE_AS(__typeof__(v128),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v129 = COERCE_AS(__typeof__(v129),
                                 PSEUDO_REGISTER(__n128, "v2", "=w"));
            return 0x0.0p+0;
          }
          v24 = 1;
          v23 = v44;
        }
        else {
          ++v44;
          if (v46 > 60) {
            if (v10 != 48) {
              v45 = 540;
              v147 |= 1u;
            }
          }
          else {
            if (v10 != 48) {
              v45 = v44;
            }
            if (v47 != 0) {
              v25 = v10 + 10 * v145[v46] - 48;
            }
            v145[v46] = v25;
            v22 = 1;
            if (v47 == 8) {
              ++v46;
              v47 = 0;
            }
            else {
              ++v47;
            }
          }
        }
        v49 = (unsigned __int8*)a1[1];
        if (v49 == (unsigned __int8*)a1[22]) {
          v10 = musl_src_78ead0(a1),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v128 =
              COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v25 = v10 - 48;
          v26 = v10 == 46;
          if (v10 != 46 & v25 >= 0xA) {
            goto LABEL_121;
          }
        }
        else {
          a1[1] = v49 + 1;
          v10 = *v49;
          v25 = v10 - 48;
          v26 = v10 == 46;
          if (v10 != 46 & v25 >= 0xA) {
            goto LABEL_121;
          }
        }
      }
    }
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
  LABEL_121:
    if (v24 == 0) {
      v23 = v44;
    }
    v51 = v22 == 0;
    if (v22 != 0 && (v10 & 0xFFFFFFDF) == 0x45) {
      v52 = scanexp(a1, a3),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
      if (v52 == 0x8000000000000000LL) {
        if (a3 == 0) {
          goto LABEL_136;
        }
        v52 = 0;
        if ((a1[23] & 0x8000000000000000LL) == 0) {
          --a1[1];
        }
      }
      v23 += v52;
      goto LABEL_157;
    }
    if ((v10 & 0x80000000) == 0 && (a1[23] & 0x8000000000000000LL) == 0) {
      goto LABEL_131;
    }
  LABEL_134:
    if (v51) {
      goto LABEL_135;
    }
  LABEL_157:
    if (v145[0] == 0) {
      v58 = 0x0.0p+0;
      return v14 * v58;
    }
    if (v44 <= 9 && v23 == v44) {
      v57 = v140;
      if (v145[0] >> v141 == 0) {
        v57 = 1;
      }
      if (v57 == 1) {
        v58 = (double)v145[0];
        return v14 * v58;
      }
    }
    if (v23 > v143 >> 1) {
      *(_DWORD*)__errno_location_plt() = 34,
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
      v59 = 0x1.fffffffffffffp+1023;
      return v14 * v59 * v59;
    }
    if (v23 < (int)(v139 - 106)) {
      *(_DWORD*)__errno_location_plt() = 34,
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
      v59 = 0x1.0000000000000p-1022;
      return v14 * v59 * v59;
    }
    if (v47 != 0) {
      if (v47 <= 8) {
        v60 = v145[v46];
        v61 = (1 - (_BYTE)v47) & 7;
        if (((1 - (_BYTE)v47) & 7) != 0) {
          v62 = v47;
          do {
            ++v62;
            --v61;
            v60 *= 10;
          } while (v61 != 0);
        }
        else {
          v62 = v47;
        }
        if ((unsigned int)(v47 - 2) >= 7) {
          v66 = v62 - 9;
          do {
            v60 *= 100000000;
            v66 += 8;
          } while (v66 != 0);
        }
        v145[v46] = v60;
      }
      ++v46;
    }
    if (v45 <= 8 && v23 <= 17 && v45 <= (int)v23) {
      if (v23 == 9) {
        {
          __typeof__(a4) z_ = (__typeof__(a4)){0};
          LODWORD(z_) = v145[0];
          a4 = z_;
        }
        v58 = (double)*(unsigned __int64*)&a4;
        return v14 * v58;
      }
      if (v23 <= 8) {
        {
          __typeof__(a4) z_ = (__typeof__(a4)){0};
          LODWORD(z_) = v145[0];
          a4 = z_;
        }
        return v14 * (double)*(unsigned __int64*)&a4 /
               (double)(int)SdkData_bb05b0[8 - v23];
      }
      v67 = v141 - 3 * v23 + 27;
      if (v67 > 30 || v145[0] >> v67 == 0) {
        return v14 * (double)v145[0] *
               (double)*(int*)((char*)SdkData_bb05b0 +
                               (((v23 << 32) - 0xA00000000LL) >> 30));
      }
    }
    v68 = 0;
    v69 = ((__int64)v46 << 32) + 0x100000000LL;
    do {
      v70 = v145[v46 - 1 + v68--];
      v69 -= 0x100000000LL;
    } while (v70 == 0);
    LODWORD(v71) = v68 + v46 + 1;
    if ((int)v23 % 9 != 0) {
      v72 = v46 + v68 + 1;
      v73 = (int)v23 % 9 + 9;
      if (v23 >= 0) {
        v73 = (int)v23 % 9;
      }
      if (v46 + v68 == -1) {
        v78 = 0;
        LODWORD(v71) = 0;
      }
      else {
        v74 = SdkData_bb05b0[8LL - v73];
        v75 = 1000000000 / (int)v74;
        if (v46 + (int)v68 != 0) {
          v76 = 0;
          v77 = 0;
          v78 = 0;
          v79 = &v146;
          do {
            v80 = *(v79 - 1);
            v81 = v80 / v74;
            v82 = v80 % v74;
            v83 = v81 + v77;
            v84 = *v79;
            if (v76 == v78 & v83 == 0) {
              v85 = v23 - 9;
            }
            else {
              v85 = v23;
            }
            if (v76 == v78 & v83 == 0) {
              v86 = ((_BYTE)v78 + 1) & 0x3F;
            }
            else {
              v86 = v78;
            }
            v87 = v84 / v74 + v82 * v75;
            v88 = v76 + 1;
            v76 += 2;
            v89 = v88 == v86;
            v77 = v84 % v74 * v75;
            *(v79 - 1) = v83;
            *v79 = v87;
            v79 += 2;
            v90 = v87 == 0;
            if (v89 && v90) {
              LODWORD(v23) = v85 - 9;
            }
            else {
              LODWORD(v23) = v85;
            }
            if (v89 && v90) {
              v78 = ((_BYTE)v86 + 1) & 0x3F;
            }
            else {
              v78 = v86;
            }
          } while (v76 != (v72 & 0xFFFFFFFE));
        }
        else {
          v76 = 0;
          v77 = 0;
          v78 = 0;
        }
        if ((v72 & 1) != 0) {
          v91 = v145[v76];
          v92 = v91 / v74;
          v93 = v91 % v74;
          v94 = v92 + v77;
          v145[v76] = v92 + v77;
          v77 = v93 * v75;
          if (v76 == v78 & v94 == 0) {
            LODWORD(v23) = v23 - 9;
            v78 = ((_BYTE)v78 + 1) & 0x3F;
          }
        }
        if (v77 != 0) {
          LODWORD(v71) = v46 + v68 + 2;
          *(_DWORD*)((char*)v145 + (v69 >> 30)) = v77;
        }
      }
      LODWORD(v23) = v23 - v73 + 9;
    }
    else {
      v78 = 0;
    }
    v95 = 0;
    v96 = 9007199;
    for (i = (_DWORD)v23 == 18; (int)v23 < 18; i = (_DWORD)v23 == 18) {
    LABEL_247:
      while (1) {
        v98 = v71 + 63;
        v99 = 0;
        do {
          v104 = v98 & 0x3F;
          v105 = v71;
          v100 = v99 + ((unsigned __int64)(unsigned int)v145[v104] << 29);
          if (v100 > 0x3B9ACA00) {
            v99 = v100 / 0x3B9ACA00;
            v100 %= 0x3B9ACA00u;
          }
          else {
            v99 = 0;
          }
          v145[v104] = v100;
          v101 = ((_BYTE)v71 - 1) & 0x3F;
          if (v100 != 0) {
            v102 = v71;
          }
          else {
            v102 = v98 & 0x3F;
          }
          if ((_DWORD)v104 != v78 & (_DWORD)v104 == v101) {
            LODWORD(v71) = v102;
          }
          v98 = v104 - 1;
        } while ((_DWORD)v104 != v78);
        v95 -= 29;
        LODWORD(v71) = v105;
        if (v99 != 0) {
          break;
        }
        i = (_DWORD)v23 == 18;
        if ((int)v23 >= 18) {
          goto LABEL_244;
        }
      }
      v78 = (v78 - 1) & 0x3F;
      if (v78 == v105) {
        v145[((_BYTE)v105 + 62) & 0x3F] |= v145[v101];
        v105 = v101;
      }
      LODWORD(v23) = v23 + 9;
      v145[v78] = v99;
      LODWORD(v71) = v105;
    }
  LABEL_244:
    if (i && v145[v78] < 0x89705Fu) {
      goto LABEL_247;
    }
    while (1) {
      if ((v78 & 0x3F) == (_DWORD)v71) {
        if ((_DWORD)v23 == 18) {
        LABEL_306:
          v145[(((_BYTE)v71 + 1) & 0x3F) - 1] = 0;
          v96 = v145[(unsigned int)v71];
          LODWORD(v71) = ((_BYTE)v71 + 1) & 0x3F;
        LABEL_307:
          v117 = v141;
          v118 = (v78 + 1) & 0x3F;
          if (v118 == (_DWORD)v71) {
            v71 = ((_BYTE)v78 + 2) & 0x3F;
            v145[v71 - 1] = 0;
          }
          v144 = __floatunsitf(v96),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v128 =
              COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v142 = __floatunsitf(v145[v118]),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v128 =
              COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v119 = SdkRoutine_854fd0(v144, *(long double*)&SdkData_bb22c0),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v128 =
              COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
          __addtf3(v119, v142),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v128 = COERCE_AS(__typeof__(v128),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(__n128, "v2", "=w"));
          v122 = v14 * __trunctfdf2(),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v128 =
              COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v123 = 0x0.0p+0;
          v124 = v95 + 53 - v139;
          if (v117 <= v124) {
            v125 = v117;
          }
          else {
            v125 = v124 & ~(v124 >> 31);
          }
          if (v125 > 0x34) {
            v127 = 0x0.0p+0;
          }
          else {
            v126 = scalbn_plt(105 - v125, 0x1.0000000000000p+0, v120, v121),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(__n128, "v2", "=w"));
            v127 = copysign_plt(v126, v122),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(__n128, "v2", "=w"));
            v130 = scalbn_plt(53 - v125, 0x1.0000000000000p+0, v128, v129),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(__n128, "v2", "=w"));
            v123 = fmod_plt(v122, v130),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(__n128, "v2", "=w"));
            v122 = v127 + v122 - v123;
          }
          if ((((_BYTE)v78 + 2) & 0x3F) == (_DWORD)v71) {
            v131 = v138;
            goto LABEL_329;
          }
          v132 = v145[((_BYTE)v78 + 2) & 0x3F];
          if (v132 >= 0x1DCD6500) {
            if (v132 == 500000000 && (((_BYTE)v78 + 3) & 0x3F) == (_DWORD)v71) {
              v133 = 0x1.0000000000000p-1;
            }
            else {
              v133 = 0x1.8000000000000p-1;
            }
          LABEL_325:
            v123 = v123 + v14 * v133;
          }
          else if (v132 != 0 || (((_BYTE)v78 + 3) & 0x3F) != (_DWORD)v71) {
            v133 = 0x1.0000000000000p-2;
            goto LABEL_325;
          }
          v131 = v138;
          if (v125 <= 0x33 &&
              fmod_plt(v123, 0x1.0000000000000p+0) == 0x0.0p+0) {
            v123 = v123 + 0x1.0000000000000p+0;
          }
        LABEL_329:
          v134 = v122 + v123 - v127;
          if ((int)((v95 + 53) & 0x7FFFFFFF) > v131 - 2) {
            v135 = fabs_plt(v122 + v123 - v127),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(__n128, "v2", "=w"));
            *(_QWORD*)&v121 = 0x4340000000000000LL;
            v136 = v125 != v124;
            *(double*)&v120 = v134 * 0x1.0000000000000p-1;
            if (v135 < 0x1.0000000000000p+53) {
              v136 = true;
            }
            else {
              ++v95;
            }
            if (v135 >= 0x1.0000000000000p+53) {
              v134 = v134 * 0x1.0000000000000p-1;
            }
            if (v117 <= v124) {
              v136 = false;
            }
            if (v123 == 0x0.0p+0) {
              v136 = false;
            }
            if ((int)(v95 + 50) > v131 || v136) {
              *(_DWORD*)
                  __errno_location_plt() = 34,
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
          }
          return scalbn_plt(v95, v134, v120, v121);
        }
      }
      else {
        v106 = v145[v78 & 0x3F];
        if (v106 < 0x89705F) {
          goto LABEL_269;
        }
        if (v106 != 9007199) {
          goto LABEL_277;
        }
        if ((((_BYTE)v78 + 1) & 0x3F) == (_DWORD)v71) {
        LABEL_269:
          if ((_DWORD)v23 == 18) {
            v96 = v145[v78 & 0x3F];
            goto LABEL_307;
          }
        }
        else if (v145[((_BYTE)v78 + 1) & 0x3F] < 0xF2F0A00u &&
                 (_DWORD)v23 == 18) {
          goto LABEL_307;
        }
      }
    LABEL_277:
      if ((int)v23 <= 27) {
        v108 = 1;
      }
      else {
        v108 = 9;
      }
      v95 += v108;
      if (v78 == (_DWORD)v71) {
        if ((int)v23 <= 27) {
          v114 = 1;
        }
        else {
          v114 = 9;
        }
        while (1) {
          if ((unsigned int)v71 < 0x40) {
            if ((_DWORD)v23 == 18) {
              v78 = v71;
              goto LABEL_306;
            }
          }
          else {
            v115 = v145[v71 & 0x3F];
            if (v115 >= 0x89705F) {
              if (v115 == 9007199 &&
                  v145[((_BYTE)v71 + 1) & 0x3F] < 0xF2F0A00u &&
                  (_DWORD)v23 == 18) {
                v78 = v71;
                goto LABEL_307;
              }
            }
            else if ((_DWORD)v23 == 18) {
              v78 = v71;
              v96 = v145[v71 & 0x3F];
              goto LABEL_307;
            }
          }
          v95 += v114;
        }
      }
      v109 = 0;
      v110 = v78;
      do {
        v111 = v145[v110];
        v112 = v111 & ~(-1 << v108);
        v113 = (v111 >> v108) + v109;
        v109 = v112 * (0x3B9ACA00u >> v108);
        LOBYTE(v112) = v110 == v78;
        v145[v110] = v113;
        v110 = ((_BYTE)v110 + 1) & 0x3F;
        if (((unsigned __int8)v112 & (v113 == 0)) != 0) {
          LODWORD(v23) = v23 - 9;
          v78 = ((_BYTE)v78 + 1) & 0x3F;
        }
      } while (v110 != (_DWORD)v71);
      if (v109 != 0) {
        if ((((_BYTE)v71 + 1) & 0x3F) == v78) {
          v145[((_BYTE)v71 - 1) & 0x3F] |= 1u;
        }
        else {
          v145[(unsigned int)v71] = v109;
          LODWORD(v71) = ((_BYTE)v71 + 1) & 0x3F;
        }
      }
    }
  }
  v17 = (_BYTE*)a1[1];
  if (v17 == (_BYTE*)a1[22]) {
    if ((musl_src_78ead0(a1) & 0xFFFFFFDF) == 0x41) {
      goto LABEL_38;
    }
    goto LABEL_191;
  }
  a1[1] = v17 + 1;
  if ((*v17 & 0xDF) != 0x41) {
  LABEL_191:
    if ((a1[23] & 0x8000000000000000LL) == 0) {
      --a1[1];
    }
    goto LABEL_193;
  }
LABEL_38:
  v27 = (_BYTE*)a1[1];
  if (v27 == (_BYTE*)a1[22]) {
    if ((musl_src_78ead0(a1) & 0xFFFFFFDF) == 0x4E) {
      goto LABEL_67;
    }
    goto LABEL_191;
  }
  a1[1] = v27 + 1;
  if ((*v27 & 0xDF) != 0x4E) {
    goto LABEL_191;
  }
LABEL_67:
  v36 = (_BYTE*)a1[1];
  if (v36 != (_BYTE*)a1[22]) {
    a1[1] = v36 + 1;
    if (*v36 == 40) {
      goto LABEL_69;
    }
  LABEL_147:
    if ((a1[23] & 0x8000000000000000LL) == 0) {
      v54 = a1[1] - 1LL;
    LABEL_149:
      a1[1] = v54;
    }
    return __builtin_nanf("");
  }
  if ((unsigned int)musl_src_78ead0(a1) != 40) {
    goto LABEL_147;
  }
LABEL_69:
  v37 = 1;
  while (2) {
    v39 = (unsigned __int8*)a1[1];
    if (v39 == (unsigned __int8*)a1[22]) {
      v40 = musl_src_78ead0(a1),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
      if ((unsigned int)(v40 - 48) < 0xA | (unsigned int)(v40 - 65) < 0x1A) {
        goto LABEL_74;
      }
    }
    else {
      a1[1] = v39 + 1;
      v40 = *v39;
      if ((unsigned int)(v40 - 48) < 0xA | (unsigned int)(v40 - 65) < 0x1A) {
        goto LABEL_74;
      }
    }
    if (v40 == 95 | (unsigned int)(v40 - 97) < 0x1A) {
    LABEL_74:
      ++v37;
      continue;
    }
    break;
  }
  if (v40 == 41) {
    return __builtin_nanf("");
  }
  v53 = a1[23];
  if ((v53 & 0x8000000000000000LL) == 0) {
    --a1[1];
  }
  if (a3 == 0) {
  LABEL_193:
    *(_DWORD*)__errno_location_plt() = 22,
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
    musl_78eaa0(a1, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v2", "=w"));
    return v4;
  }
  v4 = __builtin_nanf("");
  if (v37 != 0 && (v53 & 0x8000000000000000LL) == 0) {
    v54 = a1[1] - v37;
    goto LABEL_149;
  }
  return v4;
}

unsigned __int64 scanexp(_QWORD* a1, int a2)
{
  unsigned __int8* v2;
  unsigned int v5;
  _BOOL4 v6;
  unsigned __int8* v7;
  unsigned int v8;
  unsigned __int64 result;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned __int8* v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned __int8* v19;
  unsigned __int8* v20;

  v2 = (unsigned __int8*)a1[1];
  if (v2 == (unsigned __int8*)a1[22]) {
    v5 = SdkRoutine_78ead0(a1);
    v6 = v5 == 45;
    if (v5 == 43) {
      goto LABEL_6;
    }
  }
  else {
    a1[1] = v2 + 1;
    v5 = *v2;
    v6 = v5 == 45;
    if (v5 == 43) {
      goto LABEL_6;
    }
  }
  if (v5 != 45) {
    v8 = v5 - 58;
    v6 = false;
    goto LABEL_14;
  }
LABEL_6:
  v7 = (unsigned __int8*)a1[1];
  if (v7 == (unsigned __int8*)a1[22]) {
    v5 = SdkRoutine_78ead0(a1);
    v8 = v5 - 58;
    if (a2 == 0) {
      goto LABEL_14;
    }
  }
  else {
    a1[1] = v7 + 1;
    v5 = *v7;
    v8 = v5 - 58;
    if (a2 == 0) {
      goto LABEL_14;
    }
  }
  if (v8 <= 0xFFFFFFF5) {
    if ((a1[23] & 0x8000000000000000LL) == 0) {
      --a1[1];
    }
    goto LABEL_15;
  }
LABEL_14:
  if (v8 < 0xFFFFFFF6) {
  LABEL_15:
    result = 0x8000000000000000LL;
    if ((a1[23] & 0x8000000000000000LL) == 0) {
      --a1[1];
    }
    return result;
  }
  if (v5 - 48 > 9) {
    v15 = 0;
  }
  else {
    v10 = 0;
    do {
      v14 = (unsigned __int8*)a1[1];
      if (v14 == (unsigned __int8*)a1[22]) {
        v11 = SdkRoutine_78ead0(a1);
      }
      else {
        a1[1] = v14 + 1;
        v11 = *v14;
      }
      v12 = v5 + 10 * v10;
      v5 = v11;
      v10 = v12 - 48;
    } while (v11 - 48 <= 9 && v10 < 214748364);
    v15 = v10;
    if (v11 - 48 <= 9) {
      do {
        v19 = (unsigned __int8*)a1[1];
        if (v19 == (unsigned __int8*)a1[22]) {
          v16 = SdkRoutine_78ead0(a1);
        }
        else {
          a1[1] = v19 + 1;
          v16 = *v19;
        }
        v17 = 10 * v15 + v11;
        v11 = v16;
        v15 = v17 - 48;
      } while (v16 - 48 <= 9 && v15 < 0x147AE147AE147AELL);
      if (v16 - 48 <= 9) {
        do {
          while (1) {
            v20 = (unsigned __int8*)a1[1];
            if (v20 != (unsigned __int8*)a1[22]) {
              break;
            }
            if ((unsigned int)SdkRoutine_78ead0(a1) - 48 >= 0xA) {
              goto LABEL_44;
            }
          }
          a1[1] = v20 + 1;
        } while ((unsigned int)*v20 - 48 < 0xA);
      }
    }
  }
LABEL_44:
  if ((a1[23] & 0x8000000000000000LL) == 0) {
    --a1[1];
  }
  if (v6) {
    return -v15;
  }
  else {
    return v15;
  }
}

#pragma GCC visibility pop
