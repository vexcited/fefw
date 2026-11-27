#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_2208a0(__int64* result, _QWORD*);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 asCContext_SetInternalException(__int64 result, __int64, char);
__int64 asCDataType_GetSizeInMemoryBytes(unsigned int*);
__int64 asCDataType_GetSizeInMemoryDWords();
__int64 asCDataType_GetSizeOnStackDWords(__int64);
__int64 asCScriptEngine_CallFree(__int64, __int64);
bool asCDataType_IsDoubleType(_DWORD*);
bool asCDataType_IsFloatType(_DWORD*);
bool asCDataType_IsObject(__int64);
extern _DWORD GameData_1b0b9f0[4];
extern _DWORD GameData_1b0ba00[7];
extern _UNKNOWN** GameData_212bff8;
extern _UNKNOWN** GameData_2134d10;
void angelscript_angelscript_source_264300(
    _OWORD*, int*, int,
    long double (*)(long double, long double, long double, long double,
                    long double, long double, long double, long double),
    __int64, _QWORD*);
void nn_atk_2639a0(_OWORD*, int*, int,
                   long double (*)(long double, long double, long double,
                                   long double, long double, long double,
                                   long double, long double),
                   _QWORD*);
void nn_atk_263bf0(unsigned int*, int*, int*,
                   long double (*)(int*, int*, int*, long double, long double,
                                   long double, long double, long double,
                                   long double, long double, long double),
                   int*, _QWORD*);
void nn_atk_263e70(unsigned int*, int*, int*, int*, int*, int*, _QWORD*);
void nn_atk_2640d0(_OWORD*, int*, int,
                   long double (*)(__int64, long double, long double,
                                   long double, long double, long double,
                                   long double, long double, long double),
                   __int64, _QWORD*);
void nn_atk_264560(_OWORD*, int*, int,
                   long double (*)(__int64, long double, long double,
                                   long double, long double, long double,
                                   long double, long double, long double),
                   __int64, __int64, _QWORD*);
__int64 angelscript_angelscript_source_1bc0e0(__int64 a1, __int64 a2, int* a3,
                                              __int64 a4, int* a5, _QWORD* a6,
                                              unsigned int a7);
__int64 angelscript_angelscript_source_231400(__int64 a1, __int64 a2,
                                              __int64 a3);

__int64 angelscript_angelscript_source_1bc0e0(__int64 a1, __int64 a2, int* a3,
                                              __int64 a4, int* a5, _QWORD* a6,
                                              unsigned int a7)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  _DWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int* v27;
  _DWORD* v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  _DWORD* v34;
  int v35;
  int v36;
  _DWORD* v37;
  int v38;
  int* v39;
  int v40;
  _DWORD* v41;
  int* v42;
  _DWORD* v43;
  int v44;
  int* v45;
  int v46;
  _DWORD* v47;
  int v48;
  int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int v54;
  int v55;
  int v56;
  __int64 v57;
  int v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  __int64 v63;
  __int64 v64;
  int v65;
  int* v66;
  _DWORD* v67;
  int v68;
  int v69;
  int v70;
  int v71;
  unsigned int* v72;
  int v73;
  long double (*v74)(__int64, long double, long double, long double,
                     long double, long double, long double, long double,
                     long double);
  __int64 v75;
  int v76;
  long double (*v77)(__int64, long double, long double, long double,
                     long double, long double, long double, long double,
                     long double);
  __int64 v78;
  __int64 v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 result;
  __int64 v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  unsigned int v91;
  long double (*v94)(long double, long double, long double, long double,
                     long double, long double, long double, long double);
  unsigned int v96;
  int v97;
  __int64 v98;
  __int64 v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  _DWORD v106[4];
  unsigned int v107[80];
  struct __attribute__((packed)) {
    int v108;
    int v109;
    int v110;
    int v111;
    __int64 v112[42];
    int v113[237];
  } g_;

  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v7 = *(_QWORD*)(a2 + 344);
  v9 = a2;
  v99 = *(_QWORD*)(a1 + 16);
  v10 = *(_DWORD*)(v7 + 12);
  v94 =
      *(long double (**)(long double, long double, long double, long double,
                         long double, long double, long double, long double))v7,
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_BYTE*)(v7 + 16) == 1) {
    if ((*(_DWORD*)(*(_QWORD*)(a2 + 104) + 48LL) & 0x28400) == 0x20000) {
      v11 = a7;
      v12 = asCDataType_GetSizeInMemoryBytes((unsigned int*)(a2 + 96)),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      a7 = v11;
      v10 -= v12 < 9;
    }
    ++v10;
  }
  v98 = v7;
  v91 = a7;
  v96 = v10 & 0xFFFFFFFC;
  if ((v10 & 0xFFFFFFFC) == 0x14) {
    v107[0] = a7;
    v107[1] = a7;
    v103 = 2;
    g_.v113[0] = 2;
    v101 = 6;
    v105 = 1;
    v97 = v10;
    if (*(_DWORD*)(v9 + 128) != 0) {
    LABEL_7:
      v13 = 148;
      v14 = 0;
      v15 = 0;
      v102 = 0;
      v16 = 0;
      v104 = 20;
      v100 = 148;
      while (1) {
        v18 = *(_QWORD*)(v9 + 120);
        v19 = v9;
        v20 = v18 + v14;
        if (!asCDataType_IsObject(v18 + v14) ||
            (*(_BYTE*)(v20 + 16) & 5) != 0 ||
            ((v21 = *(_DWORD*)(*(_QWORD*)(v18 + v14 + 8) + 48LL)) & 0x8000) !=
                0) {
          if (asCDataType_IsFloatType((_DWORD*)(v18 + v14)) &&
              (*(_BYTE*)(v18 + v14 + 16) & 1) == 0) {
            if (v100 > 179) {
              v17 = &v106[v104];
              *(_DWORD*)v17 = *(_DWORD*)(a4 + 4LL * v16);
              v17[1] = 1;
              v102 += 2;
              g_.v113[v105] = 1;
              v104 += 2;
              ++v105;
            }
            else {
              v37 = &v106[v100];
              if (v100 == v13) {
                v13 += 4;
              }
              v100 += 4;
              *(_DWORD*)v37 = *(_DWORD*)(a4 + 4LL * v16);
              v37[1] = 1;
              *((_QWORD*)v37 + 1) = 0x100000001LL;
            }
            v9 = v19;
            ++v16;
            goto LABEL_10;
          }
          if (asCDataType_IsDoubleType((_DWORD*)(v18 + v14)) &&
              (*(_BYTE*)(v18 + v14 + 16) & 1) == 0) {
            v9 = v19;
            if (v13 > 178) {
              v45 = (int*)(a4 + 4LL * v16);
              v16 += 2;
              v46 = *v45;
              LODWORD(v45) = v45[1];
              v47 = &v106[v104];
              *(_DWORD*)v47 = v46;
              v47[1] = (_DWORD)v45;
              v102 += 2;
              g_.v113[v105] = 2;
              v104 += 2;
              ++v105;
            }
            else {
              v38 = v100;
              if (v100 == v13) {
                v38 = v100 + 4;
              }
              v39 = (int*)(a4 + 4LL * v16);
              v16 += 2;
              v100 = v38;
              v40 = *v39;
              LODWORD(v39) = v39[1];
              v41 = &v106[v13];
              v13 += 4;
              *(_DWORD*)v41 = v40;
              v41[1] = (_DWORD)v39;
              *((_QWORD*)v41 + 1) = 0x100000001LL;
            }
            goto LABEL_10;
          }
          v26 = asCDataType_GetSizeOnStackDWords(v18 + v14),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if (v103 <= 15) {
            v9 = v19;
            if (v26 == 2) {
              v42 = (int*)(a4 + 4LL * v16);
              v43 = &v106[v101];
              v16 += 2;
              v44 = *v42;
              LODWORD(v42) = v42[1];
              v101 += 2;
              *(_DWORD*)v43 = v44;
              v43[1] = (_DWORD)v42;
              v103 += 2;
              g_.v113[v105++] = 2;
            }
            else if (v26 == 3) {
              v27 = (int*)(a4 + 4LL * v16);
              v28 = &v106[v101];
              v29 = v16 + 2LL;
              v30 = *v27;
              LODWORD(v27) = v27[1];
              *(_DWORD*)v28 = v30;
              v28[1] = (_DWORD)v27;
              g_.v113[v105] = 2;
              v31 = v105 + 1LL;
              v16 += 3;
              if (v103 > 13) {
                v101 += 2;
                v103 += 2;
                v106[v104] = *(_DWORD*)(a4 + 4LL * (int)v29);
                v104 += 2;
                v105 += 2;
                v102 += 2;
                g_.v113[(int)v31] = 1;
              }
              else {
                v103 += 4;
                v105 += 2;
                v106[v101 + 2] = *(_DWORD*)(a4 + 4 * v29);
                v101 += 4;
                g_.v113[v31] = 1;
              }
            }
            else {
              v48 = *(_DWORD*)(a4 + 4LL * v16++);
              v106[v101] = v48;
              v101 += 2;
              v103 += 2;
              g_.v113[v105++] = 1;
            }
            goto LABEL_10;
          }
          v32 = v104;
          v9 = v19;
          if (v26 != 2) {
            goto LABEL_59;
          }
        }
        else if ((v21 & 0x1400) != 0) {
          if ((v21 & 0x20000) != 0) {
            v54 = asCDataType_GetSizeInMemoryDWords(),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v55 = asCDataType_GetSizeInMemoryBytes((unsigned int*)v20),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            if (v100 <= v13) {
              v56 = v13;
            }
            else {
              v56 = v100;
            }
            if (v54 <= 180 - v56) {
              v57 = *(_QWORD*)(a4 + 4LL * v16);
              GameRoutine_1a0b950((__int64)&v106[v56], v57, v55),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v13 = v54 + v56;
              v100 = v54 + v56;
            }
            else {
              v86 = v55;
              v88 = asCDataType_GetSizeOnStackDWords(v20),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v57 = *(_QWORD*)(a4 + 4LL * v16);
              GameRoutine_1a0b950((__int64)&v106[v104], v57, v86),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v104 += v54;
              v102 += v88;
            }
            v63 = v99;
            v64 = v57;
          LABEL_70:
            asCScriptEngine_CallFree(v63, v64),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v16 += 2;
            v9 = v19;
            goto LABEL_10;
          }
          v22 = asCDataType_GetSizeOnStackDWords(v18 + v14),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if (v103 <= 15) {
            v23 = v101;
            v9 = v19;
            if (v22 > 1) {
              goto LABEL_66;
            }
            goto LABEL_18;
          }
          v32 = v104;
          v9 = v19;
          if (v22 <= 1) {
            goto LABEL_59;
          }
        }
        else {
          v49 = asCDataType_GetSizeInMemoryDWords(),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if ((v21 & 0x20000) != 0) {
            v58 = asCDataType_GetSizeInMemoryBytes((unsigned int*)v20),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            if (v100 <= v13) {
              v59 = v13;
            }
            else {
              v59 = v100;
            }
            if (v49 <= 180 - v59) {
              v60 = *(_QWORD*)(a4 + 4LL * v16);
              GameRoutine_1a0b950((__int64)&v106[v59], v60, v58),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v13 = v49 + v59;
              v100 = v49 + v59;
            }
            else {
              v87 = v58;
              v89 = asCDataType_GetSizeOnStackDWords(v20),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v60 = *(_QWORD*)(a4 + 4LL * v16);
              GameRoutine_1a0b950((__int64)&v106[v104], v60, v87),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v104 += v49;
              v102 += v89;
            }
            v63 = v99;
            v64 = v60;
            goto LABEL_70;
          }
          if (v49 <= 4) {
            v50 = asCDataType_GetSizeInMemoryBytes((unsigned int*)v20),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v51 = *(_QWORD*)(a4 + 4LL * v16);
            GameRoutine_1a0b950((__int64)&v106[v101], v51, v50),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            asCScriptEngine_CallFree(v99, v51),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v16 += 2;
            v101 += v49 + (v49 & 1);
            v52 = v105;
            v103 += v49 + (v49 & 1);
            v53 = v105 + 1LL;
            if (v49 == 2) {
              ++v105;
              v9 = v19;
              g_.v113[v52] = 2;
            }
            else {
              v9 = v19;
              if (v49 == 3) {
                g_.v113[v105] = 2;
                v105 += 2;
                g_.v113[(int)v53] = 1;
              }
              else if (v49 == 4) {
                g_.v113[v105] = 2;
                g_.v113[v53] = 2;
                v105 += 2;
              }
              else {
                ++v105;
                g_.v113[v52] = 1;
              }
            }
            goto LABEL_10;
          }
          v65 = asCDataType_GetSizeOnStackDWords(v20),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if (v103 <= 15) {
            v23 = v101;
            v9 = v19;
            if (v65 > 1) {
            LABEL_66:
              v66 = (int*)(a4 + 4LL * v16);
              v67 = &v106[v23];
              v16 += 2;
              v68 = *v66;
              LODWORD(v66) = v66[1];
              *(_DWORD*)v67 = v68;
              v67[1] = (_DWORD)v66;
              v25 = 2;
              goto LABEL_67;
            }
          LABEL_18:
            v24 = *(_DWORD*)(a4 + 4LL * v16++);
            v106[v23] = v24;
            v25 = 1;
          LABEL_67:
            v62 = v105;
            g_.v113[v105] = v25;
            v103 += 2;
            v101 += 2;
            goto LABEL_61;
          }
          v32 = v104;
          v9 = v19;
          if (v65 <= 1) {
          LABEL_59:
            v61 = *(_DWORD*)(a4 + 4LL * v16++);
            v106[v32] = v61;
            v36 = 1;
            goto LABEL_60;
          }
        }
        v33 = (int*)(a4 + 4LL * v16);
        v34 = &v106[v32];
        v16 += 2;
        v35 = *v33;
        LODWORD(v33) = v33[1];
        *(_DWORD*)v34 = v35;
        v34[1] = (_DWORD)v33;
        v36 = 2;
      LABEL_60:
        v62 = v105;
        g_.v113[v105] = v36;
        v104 += 2;
        v102 += 2;
      LABEL_61:
        v105 = v62 + 1;
      LABEL_10:
        ++v15;
        v14 += 24;
        if (v15 >= *(unsigned int*)(v9 + 128)) {
          goto LABEL_78;
        }
      }
    }
  }
  else {
    v105 = 0;
    v103 = 0;
    v101 = 4;
    v97 = v10;
    if (*(_DWORD*)(v9 + 128) != 0) {
      goto LABEL_7;
    }
  }
  v102 = 0;
  v104 = 20;
LABEL_78:
  if (v96 == 16) {
    v69 = v102;
    v70 = v103;
    v71 = v97;
    if (v103 > 15) {
      v69 = v102 + 2;
      v72 = &v106[v104];
      v104 += 2;
    }
    else {
      v70 = v103 + 2;
      v72 = &v106[v101];
      v101 += 2;
    }
    *v72 = v91;
    v72[1] = v91;
    g_.v113[v105] = 2;
    v73 = v105 + 1;
    if (v69 >= 1) {
    LABEL_85:
      if ((v69 & 3) != 0) {
        v69 += 2;
        *(_QWORD*)&v106[v104] = 0x100000001LL;
        g_.v113[v73++] = 2;
      }
    }
  }
  else {
    v71 = v97;
    v69 = v102;
    v70 = v103;
    v73 = v105;
    if (v102 >= 1) {
      goto LABEL_85;
    }
  }
  g_.v109 = 0;
  g_.v111 = 0;
  g_.v113[v73] = 0;
  g_.v108 = v101 >> 1;
  g_.v110 = 4 * v69;
  switch (v71) {
  case 2:
  case 4:
    nn_atk_2639a0(v107, g_.v113, 4 * v70, v94, a6),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v82 = v98;
    if (*(_BYTE*)(v98 + 17) == 1) {
      goto LABEL_92;
    }
    goto LABEL_97;
  case 3:
  case 5:
    angelscript_angelscript_source_264300(v107, g_.v113, 4 * v70, v94,
                                          (__int64)a5, a6),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v82 = v98;
    if (*(_BYTE*)(v98 + 17) != 1) {
      goto LABEL_97;
    }
    goto LABEL_92;
  case 6:
  case 12:
  case 16:
  case 20:
    v75 = (__int64)a3;
    v74 = (long double (*)(__int64, long double, long double, long double,
                           long double, long double, long double, long double,
                           long double))v94,
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v76 = 4 * v70;
    goto LABEL_96;
  case 7:
  case 13:
  case 17:
  case 21:
    v78 = (__int64)a3;
    v77 = (long double (*)(__int64, long double, long double, long double,
                           long double, long double, long double, long double,
                           long double))v94,
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v79 = (__int64)a5;
    v80 = 4 * v70;
    goto LABEL_91;
  case 8:
  case 18:
  case 22:
    v76 = 4 * v70;
    v75 = (__int64)a3;
    v74 = *(long double (**)(__int64, long double, long double, long double,
                             long double, long double, long double, long double,
                             long double))(*(_QWORD*)a3 +
                                           8 * ((unsigned __int64)v94 >> 2)),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  LABEL_96:
    nn_atk_2640d0(v107, g_.v113, v76, v74, v75, a6),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v82 = v98;
    if (*(_BYTE*)(v98 + 17) != 1) {
      goto LABEL_97;
    }
    goto LABEL_92;
  case 9:
  case 19:
  case 23:
    v79 = (__int64)a5;
    v78 = (__int64)a3;
    v80 = 4 * v70 + 4;
    v77 = *(long double (**)(__int64, long double, long double, long double,
                             long double, long double, long double, long double,
                             long double))(*(_QWORD*)a3 +
                                           8 * ((unsigned __int64)v94 >> 2)),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  LABEL_91:
    nn_atk_264560(v107, g_.v113, v80, v77, v79, v78, a6),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v82 = v98;
    if (*(_BYTE*)(v98 + 17) == 1) {
      goto LABEL_92;
    }
    goto LABEL_97;
  case 10:
    nn_atk_263bf0(v107, g_.v113, (int*)(4 * v70),
                  (long double (*)(int*, int*, int*, long double, long double,
                                   long double, long double, long double,
                                   long double, long double, long double))v94,
                  a3, a6),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v82 = v98;
    if (*(_BYTE*)(v98 + 17) == 1) {
      goto LABEL_92;
    }
    goto LABEL_97;
  case 11:
    nn_atk_263e70(v107, g_.v113, (int*)(4 * v70), (int*)v94, a5, a3, a6),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v82 = v98;
    if (*(_BYTE*)(v98 + 17) != 1) {
      goto LABEL_97;
    }
    goto LABEL_92;
  default:
    asCContext_SetInternalException(a1, (__int64)"Invalid calling convention",
                                    1),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v81 = 0;
    v82 = v98;
    if (*(_BYTE*)(v98 + 17) == 1) {
    LABEL_92:
      if (*(int*)(v82 + 20) <= 1) {
        return LODWORD(g_.v112[0]);
      }
      else {
        return g_.v112[0];
      }
    }
    else {
    LABEL_97:
      v84 = v81;
      if (!asCDataType_IsObject(v9 + 96)) {
        return v84;
      }
      result = v84;
      if ((*(_BYTE*)(v9 + 112) & 5) == 0 &&
          (*(_DWORD*)(*(_QWORD*)(v9 + 104) + 48LL) & 0x28400) == 0x20000) {
        v85 = asCDataType_GetSizeInMemoryBytes((unsigned int*)(v9 + 96)),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        GameRoutine_1a0b950((__int64)a5, (__int64)g_.v112, v85),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        return v84;
      }
    }
    return result;
  }
}

__int64 angelscript_angelscript_source_231400(__int64 a1, __int64 a2,
                                              __int64 a3)
{
  __int64 v3;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  void (**v19)(__int64);
  _QWORD* v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  _DWORD* v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  unsigned __int64 v43;
  unsigned int v44;
  _QWORD* v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned int v49;
  unsigned __int64 v50;
  int v51;
  __int64 result;
  struct {
    __int64 v53;
    _QWORD* v54;
    __int64 v55;
  } v53_;
  _QWORD v56[2];

  v3 = *(_QWORD*)(a2 + 48);
  if (v3 == 0) {
    v8 = 0;
    v11 = 0;
    v53_.v54 = nullptr;
    v53_.v55 = 0;
    goto LABEL_16;
  }
  v6 = -1;
  v7 = 0;
  do {
    v3 = *(_QWORD*)(v3 + 32);
    ++v6;
    v7 += 8;
  } while (v3 != 0);
  v8 = v6 + 1;
  v53_.v54 = nullptr;
  v53_.v55 = 0;
  if (v6 > 1) {
    v10 = (_QWORD*)((__int64 (*)(__int64))*GameData_212bff8)(v7);
    v9 = v7;
    if (v10 == nullptr) {
      goto LABEL_10;
    }
  }
  else {
    v9 = (unsigned int)v7;
    v10 = v56;
  }
  GameRoutine_1a0ba50((__int64)v10, 0, v9);
  v53_.v54 = v10;
  DWORDn(v53_.v55, sizeof(v53_.v55) / 4 - 1) = v6 + 1;
  if (v6 <= 1) {
    v11 = a3 + 16;
    goto LABEL_11;
  }
LABEL_10:
  v11 = ((__int64 (*)(__int64))*GameData_212bff8)(v7);
  if (v11 == 0) {
    goto LABEL_23;
  }
LABEL_11:
  if (*(_QWORD*)a3 == v11) {
    v14 = *(unsigned int*)(a3 + 8);
    if ((unsigned int)v14 > v6) {
      goto LABEL_16;
    }
    v12 = v11 + 8 * v14;
    v13 = 8LL * (v6 - (unsigned int)v14) + 8;
  }
  else {
    v12 = v11;
    v13 = v7;
  }
  GameRoutine_1a0ba50(v12, 0, v13);
LABEL_16:
  v15 = *(_QWORD*)a3;
  if (*(_QWORD*)a3 != 0) {
    *(_DWORD*)(a3 + 8) = 0;
    if (v15 != v11 & v15 != a3 + 16) {
      ((void (*)(__int64))*GameData_2134d10)(v15);
    }
  }
  *(_QWORD*)a3 = v11;
  *(_DWORD*)(a3 + 12) = v8;
LABEL_23:
  v17 = *(_QWORD*)(a2 + 48);
  if (v17 != 0) {
    v18 = a3 + 16;
    v19 = (void (**)(__int64))GameData_2134d10;
    do {
      if (*(_DWORD*)v17 == 15) {
        v22 = 1;
        goto LABEL_53;
      }
      v23 = *(_DWORD*)(v17 + 4);
      if ((unsigned int)(v23 - 16) < 4) {
        v22 = GameData_1b0b9f0[v23 - 16];
        goto LABEL_53;
      }
      if ((v23 & 0xFFFFFFFE) == 0xE) {
        v22 = -2;
        goto LABEL_53;
      }
      v24 = v23 - 46;
      if ((unsigned int)(v23 - 46) <= 6 && ((0x7Bu >> v24) & 1) != 0) {
        v22 = GameData_1b0ba00[(unsigned int)v24];
        goto LABEL_53;
      }
      if ((unsigned int)(v23 - 55) < 4) {
        v22 = -7;
        goto LABEL_53;
      }
      v25 = (unsigned int)(v23 - 53);
      if ((unsigned int)v25 > 0x22) {
        goto LABEL_50;
      }
      if (((1LL << v25) & 0x400300003LL) != 0) {
        v22 = -8;
        goto LABEL_53;
      }
      if (v25 != 32) {
        if (v25 == 33) {
          v22 = -10;
          goto LABEL_53;
        }
      LABEL_50:
        v22 = 0;
        goto LABEL_53;
      }
      v22 = -9;
      while (1) {
      LABEL_53:
        v21 = v53_.v55;
        if ((_DWORD)v53_.v55 == 0) {
          v20 = v53_.v54;
          if (DWORDn(v53_.v55, sizeof(v53_.v55) / 4 - 1) == 0) {
            v56[0] = 0;
            if (v53_.v54 != nullptr) {
              LODWORD(v53_.v55) = 0;
              if (v53_.v54 != v56) {
                (*v19)((__int64)v53_.v54);
              }
            }
            v53_.v54 = v56;
            DWORDn(v53_.v55, sizeof(v53_.v55) / 4 - 1) = 1;
            v21 = v53_.v55;
            goto LABEL_134;
          }
          v21 = 0;
        LABEL_27:
          LODWORD(v53_.v55) = v21 + 1;
          v20[v21] = v17;
          goto LABEL_28;
        }
        v20 = v53_.v54;
        v27 = v53_.v55 - 1;
        v28 = (_DWORD*)v53_.v54[(unsigned int)(v53_.v55 - 1)];
        if (*(_DWORD*)v28 == 15) {
          v29 = 1;
          goto LABEL_68;
        }
        v30 = v28[1];
        if ((unsigned int)(v30 - 16) < 4) {
          v29 = GameData_1b0b9f0[v30 - 16];
          goto LABEL_68;
        }
        if ((v30 & 0xFFFFFFFE) == 0xE) {
          v29 = -2;
          goto LABEL_68;
        }
        v31 = v30 - 46;
        if ((unsigned int)(v30 - 46) <= 6 && ((0x7Bu >> v31) & 1) != 0) {
          v29 = GameData_1b0ba00[(unsigned int)v31];
          goto LABEL_68;
        }
        if ((unsigned int)(v30 - 55) < 4) {
          v29 = -7;
          goto LABEL_68;
        }
        v32 = (unsigned int)(v30 - 53);
        if ((unsigned int)v32 > 0x22) {
          goto LABEL_106;
        }
        if (((1LL << v32) & 0x400300003LL) != 0) {
          v29 = -8;
          goto LABEL_68;
        }
        if (v32 != 32) {
          if (v32 == 33) {
            v29 = -10;
            goto LABEL_68;
          }
        LABEL_106:
          v29 = 0;
          goto LABEL_68;
        }
        v29 = -9;
      LABEL_68:
        if (v22 > v29) {
          break;
        }
        LODWORD(v53_.v55) = v53_.v55 - 1;
        v33 = v53_.v54[v27];
        v34 = *(_DWORD*)(a3 + 8);
        if (v34 != *(_DWORD*)(a3 + 12)) {
          goto LABEL_52;
        }
        if (v34 != 0) {
          v35 = 2 * v34;
          if (2 * v34 == 0) {
            v36 = 0;
            goto LABEL_85;
          }
          v36 = a3 + 16;
          if (v35 < 3 || (v36 = ((__int64 (*)(__int64))*GameData_212bff8)(
                              16LL * v34)) != 0) {
            v37 = *(_QWORD*)a3;
            if (*(_QWORD*)a3 == v36) {
              v41 = *(unsigned int*)(a3 + 8);
              if ((unsigned int)v41 >= v35) {
                goto LABEL_86;
              }
              v39 = v36 + 8 * v41;
              v38 = 8LL * (v35 + ~(_DWORD)v41) + 8;
            }
            else {
              v38 = 8LL * v35;
              v39 = v36;
            }
            GameRoutine_1a0ba50(v39, 0, v38);
          LABEL_85:
            v37 = *(_QWORD*)a3;
          LABEL_86:
            if (v37 == 0) {
              goto LABEL_99;
            }
            v42 = *(_DWORD*)(a3 + 8);
            if (v37 == v36) {
              if (v42 > v35) {
                *(_DWORD*)(a3 + 8) = v35;
              }
              goto LABEL_99;
            }
            if (v42 > v35) {
              *(_DWORD*)(a3 + 8) = v35;
              v42 = v35;
            }
            if (v42 != 0) {
              v43 = 0;
              do {
                *(_QWORD*)(v36 + 8 * v43) = *(_QWORD*)(*(_QWORD*)a3 + 8 * v43);
                ++v43;
              } while (v43 < *(unsigned int*)(a3 + 8));
              v37 = *(_QWORD*)a3;
            }
            if (v37 == v18) {
            LABEL_99:
              *(_QWORD*)a3 = v36;
              *(_DWORD*)(a3 + 12) = v35;
              v34 = *(_DWORD*)(a3 + 8);
              if (v34 != v35) {
                goto LABEL_52;
              }
            }
            else {
              (*v19)(v37);
              *(_QWORD*)a3 = v36;
              *(_DWORD*)(a3 + 12) = v35;
              v34 = *(_DWORD*)(a3 + 8);
              if (v34 != v35) {
                goto LABEL_52;
              }
            }
          }
          else {
            v34 = *(_DWORD*)(a3 + 8);
            if (v34 != *(_DWORD*)(a3 + 12)) {
              goto LABEL_52;
            }
          }
        }
        else {
          v40 = *(_QWORD*)a3;
          *(_QWORD*)(a3 + 16) = 0;
          if (v40 != 0) {
            *(_DWORD*)(a3 + 8) = 0;
            if (v40 != v18) {
              (*v19)(v40);
            }
          }
          *(_QWORD*)a3 = v18;
          *(_DWORD*)(a3 + 12) = 1;
          v34 = *(_DWORD*)(a3 + 8);
          if (v34 != 1) {
          LABEL_52:
            v26 = *(_QWORD*)a3;
            *(_DWORD*)(a3 + 8) = v34 + 1;
            *(_QWORD*)(v26 + 8LL * v34) = v33;
          }
        }
      }
      if ((_DWORD)v53_.v55 != DWORDn(v53_.v55, sizeof(v53_.v55) / 4 - 1)) {
        goto LABEL_27;
      }
      v44 = 2 * v53_.v55;
      if (2 * (int)v53_.v55 == 0) {
        v45 = nullptr;
        goto LABEL_119;
      }
      v45 = v56;
      if (v44 >= 3) {
        v46 = ((__int64 (*)(__int64))*GameData_212bff8)(
            8LL * (unsigned int)(2 * v53_.v55));
        if (v46 == 0) {
          v21 = v53_.v55;
          if ((_DWORD)v53_.v55 == DWORDn(v53_.v55, sizeof(v53_.v55) / 4 - 1)) {
            goto LABEL_28;
          }
        LABEL_134:
          v20 = v53_.v54;
          goto LABEL_27;
        }
        v45 = (_QWORD*)v46;
        v20 = v53_.v54;
      }
      if (v20 != v45) {
        v47 = 8LL * (unsigned int)(2 * v53_.v55);
        v48 = (__int64)v45;
        goto LABEL_118;
      }
      if ((unsigned int)v53_.v55 < v44) {
        v48 = (__int64)&v45[(unsigned int)v53_.v55];
        v47 = 8LL * (v44 + ~(_DWORD)v53_.v55) + 8;
      LABEL_118:
        GameRoutine_1a0ba50(v48, 0, v47);
      LABEL_119:
        v20 = v53_.v54;
      }
      if (v20 == nullptr) {
        goto LABEL_133;
      }
      v49 = v53_.v55;
      if (v20 == v45) {
        if ((unsigned int)v53_.v55 > v44) {
          LODWORD(v53_.v55) = 2 * v53_.v55;
        }
      LABEL_133:
        v53_.v54 = v45;
        DWORDn(v53_.v55, sizeof(v53_.v55) / 4 - 1) = v44;
        v21 = v53_.v55;
        if ((_DWORD)v53_.v55 != v44) {
          goto LABEL_134;
        }
        goto LABEL_28;
      }
      if ((unsigned int)v53_.v55 > v44) {
        LODWORD(v53_.v55) = 2 * v53_.v55;
        v49 = v44;
      }
      if (v49 != 0) {
        v50 = 0;
        do {
          v45[v50] = v53_.v54[v50];
          ++v50;
        } while (v50 < (unsigned int)v53_.v55);
        v20 = v53_.v54;
      }
      if (v20 == v56) {
        goto LABEL_133;
      }
      (*v19)((__int64)v20);
      v53_.v54 = v45;
      DWORDn(v53_.v55, sizeof(v53_.v55) / 4 - 1) = v44;
      v21 = v53_.v55;
      if ((_DWORD)v53_.v55 != v44) {
        goto LABEL_134;
      }
    LABEL_28:
      v17 = *(_QWORD*)(v17 + 32);
    } while (v17 != 0);
  }
  while (1) {
    v51 = v53_.v55;
    if ((_DWORD)v53_.v55 == 0) {
      break;
    }
    LODWORD(v53_.v55) = v53_.v55 - 1;
    v53_.v53 = v53_.v54[v51 - 1];
    GameRoutine_2208a0((__int64*)a3, &v53_.v53);
  }
  result = (__int64)v53_.v54;
  if (v53_.v54 != nullptr) {
    LODWORD(v53_.v55) = 0;
    if (v53_.v54 != v56) {
      return ((__int64 (*)(__int64))*GameData_2134d10)((__int64)v53_.v54);
    }
  }
  return result;
}

#pragma GCC visibility pop
