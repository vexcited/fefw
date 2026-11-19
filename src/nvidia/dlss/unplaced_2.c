#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_baf70(__int64, __int64);
__int64 NgxRoutine_e2db0();
__int64 NgxRoutine_e2de0();
__int64 nvidia_dlss_ab840(__int64*);
__int64 nvidia_dlss_rel_source_features_dlaa_7c2a0(__int64);
extern __int64 NgxData_2b6adc8;
extern __int64 NgxData_2b6add0;
extern __int64 NgxData_2b6add8;
extern __int64 NgxData_2b6ade0;
extern __int64 NgxData_2b70a18;
extern __int64 NgxData_2b70a20;
extern __int64 NgxData_2b70a28;
extern __int64 NgxData_2b70a30;
int memcmp_plt(__int64, __int64, unsigned __int64);
unsigned __int64 NgxRoutine_e2400(unsigned __int64);
void __attribute__((noreturn)) NgxRoutine_27cf0();
__int64 nvidia_dlss_aa4a0(__int64 a1, __int64 a2);
_QWORD* nvidia_dlss_ac720(__int64 a1, __int64* a2);
__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_dlss_aa4a0(__int64 a1, __int64 a2)
{
  __int64* v3;
  int v4;
  __int64* v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;

  NgxRoutine_e2db0();
  v3 = (__int64*)NgxData_2b6add8;
  if (NgxData_2b6add8 != 0) {
    if (a2 != 0) {
      v4 = 0;
      do {
        while (v3[2] == a2) {
          v5 = v3;
          nvidia_dlss_rel_source_features_dlaa_7c2a0((__int64)(v3 + 3));
          v3 = (__int64*)nvidia_dlss_ab840(v5);
          if (v3 == nullptr) {
            goto LABEL_8;
          }
        }
        v3 = (__int64*)*v3;
        ++v4;
      } while (v3 != nullptr);
    LABEL_8:
      if (v4 != 0) {
        return NgxRoutine_e2de0();
      }
    }
    else {
      do {
        v6 = v3;
        nvidia_dlss_rel_source_features_dlaa_7c2a0((__int64)(v3 + 3));
        v3 = (__int64*)nvidia_dlss_ab840(v6);
      } while (v3 != nullptr);
    }
  }
  if (NgxData_2b6ade0 != 0) {
    v7 = (_QWORD*)NgxData_2b6add8;
    if (NgxData_2b6add8 != 0) {
      do {
        v11 = (_QWORD*)*v7;
        nvidia_dlss_rel_source_features_dlaa_7c2a0((__int64)(v7 + 3));
        if ((v7[5] & 1) != 0) {
          NgxRoutine_430(v7[7], (4LL * v7[5]) & 0xFFFFFFFFFFFFFFF8LL);
        }
        NgxRoutine_430(v7, 136);
        v7 = v11;
      } while (v11 != nullptr);
    }
    NgxData_2b6add8 = 0;
    if (NgxData_2b6add0 == 0) {
      goto LABEL_25;
    }
    v8 = NgxData_2b6adc8;
    v9 = NgxData_2b6add0 & 7;
    if ((unsigned __int64)NgxData_2b6add0 >= 8) {
      v12 = (_QWORD*)(NgxData_2b6adc8 + 32);
      v13 = 0;
      v14 = -(__int64)(NgxData_2b6add0 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        *(v12 - 4) = 0;
        *(v12 - 3) = 0;
        *(v12 - 2) = 0;
        *(v12 - 1) = 0;
        v13 -= 8;
        *v12 = 0;
        v12[1] = 0;
        v12[2] = 0;
        v12[3] = 0;
        v12 += 8;
      } while (v14 != v13);
      v10 = -v13;
      if (v9 == 0) {
        goto LABEL_25;
      }
    }
    else {
      v10 = 0;
      if ((NgxData_2b6add0 & 7) == 0) {
      LABEL_25:
        NgxData_2b6ade0 = 0;
        goto LABEL_26;
      }
    }
    v15 = (_QWORD*)(v8 + 8 * v10);
    do {
      *v15++ = 0;
      --v9;
    } while (v9 != 0);
    goto LABEL_25;
  }
LABEL_26:
  if (NgxData_2b70a30 != 0) {
    v16 = (_QWORD*)NgxData_2b70a28;
    if (NgxData_2b70a28 != 0) {
      do {
        v17 = (_QWORD*)*v16;
        NgxRoutine_430(v16, 32);
        v16 = v17;
      } while (v17 != nullptr);
    }
    NgxData_2b70a28 = 0;
    if (NgxData_2b70a20 == 0) {
      goto LABEL_38;
    }
    v18 = NgxData_2b70a18;
    v19 = NgxData_2b70a20 & 7;
    if ((unsigned __int64)NgxData_2b70a20 >= 8) {
      v21 = (_QWORD*)(NgxData_2b70a18 + 32);
      v22 = 0;
      v23 = -(__int64)(NgxData_2b70a20 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        *(v21 - 4) = 0;
        *(v21 - 3) = 0;
        *(v21 - 2) = 0;
        *(v21 - 1) = 0;
        v22 -= 8;
        *v21 = 0;
        v21[1] = 0;
        v21[2] = 0;
        v21[3] = 0;
        v21 += 8;
      } while (v23 != v22);
      v20 = -v22;
      if (v19 == 0) {
        goto LABEL_38;
      }
    }
    else {
      v20 = 0;
      if ((NgxData_2b70a20 & 7) == 0) {
      LABEL_38:
        NgxData_2b70a30 = 0;
        return NgxRoutine_e2de0();
      }
    }
    v24 = (_QWORD*)(v18 + 8 * v20);
    do {
      *v24++ = 0;
      --v19;
    } while (v19 != 0);
    goto LABEL_38;
  }
  return NgxRoutine_e2de0();
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) _QWORD*

nvidia_dlss_ac720(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v3;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* i;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  _BOOL8 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  _QWORD* v43;
  _QWORD* v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v58;
  unsigned __int64 v59;

  v3 = *(unsigned __int8*)a2;
  v6 = (v3 & 1) == 0;
  v7 = v3 >> 1;
  if (v6) {
    v8 = (__int64)a2 + 1;
  }
  else {
    v8 = a2[2];
  }
  if (v6) {
    v9 = v7;
  }
  else {
    v9 = a2[1];
  }
  v10 = NgxRoutine_baf70(v8, v9);
  v11 = *(_QWORD*)(a1 + 8);
  v12 = v10;
  if (v11 == 0) {
    goto LABEL_38;
  }
  v13 = v11 - 1;
  if ((v11 & (v11 - 1)) != 0) {
    v2 = v10;
    if (v10 >= v11) {
      v2 = v10 % v11;
    }
    v14 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v2);
    if (v14 == nullptr) {
      goto LABEL_38;
    }
  }
  else {
    v2 = v13 & v10;
    v14 = *(_QWORD**)(*(_QWORD*)a1 + 8 * (v13 & v10));
    if (v14 == nullptr) {
      goto LABEL_38;
    }
  }
  for (i = (_QWORD*)*v14; i != nullptr; i = (_QWORD*)*i) {
    v16 = i[1];
    if (v16 == v12) {
      v17 = *((unsigned __int8*)i + 16);
      if ((v17 & 1) != 0) {
        v18 = i[3];
      }
      else {
        v18 = v17 >> 1;
      }
      v19 = *(unsigned __int8*)a2;
      v20 = a2[1];
      if ((v19 & 1) == 0) {
        v20 = v19 >> 1;
      }
      if (v18 == v20) {
        v21 = (v17 & 1) != 0 ? i[4] : (__int64)i + 17;
        v22 = (v19 & 1) != 0 ? a2[2] : (__int64)a2 + 1;
        if (memcmp_plt(v21, v22, v18) == 0) {
          return i + 5;
        }
      }
    }
    else {
      if ((v11 & v13) != 0) {
        if (v16 >= v11) {
          v16 %= v11;
        }
      }
      else {
        v16 &= v13;
      }
      if (v16 != v2) {
        break;
      }
    }
  }
LABEL_38:
  v23 = (_QWORD*)NgxRoutine_420(48);
  v24 = *a2;
  v25 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  i = v23;
  *v23 = 0;
  v23[1] = v12;
  v23[2] = v24;
  v23[3] = v25;
  v26 = a2[2];
  a2[2] = 0;
  v27 = *(float*)(a1 + 32);
  v23[4] = v26;
  v23[5] = 0;
  v28 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v11 != 0 && (float)(v27 * (float)v11) >= v28) {
  LABEL_103:
    v55 = *(_QWORD*)a1;
    v56 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v2);
    if (v56 == nullptr) {
      goto LABEL_108;
    }
    goto LABEL_104;
  }
  v29 = v28 / v27;
  v30 = true;
  if (v11 >= 3) {
    v30 = (v11 & (v11 - 1)) != 0;
  }
  v31 = v30 | (2 * v11);
  v32 = vcvtps_u64_f32(v29);
  if (v31 <= v32) {
    v33 = v32;
  }
  else {
    v33 = v31;
  }
  if (v33 == 1) {
    v33 = 2;
  }
  else if ((v33 & (v33 - 1)) != 0) {
    v33 = NgxRoutine_e2400(v33);
  }
  v34 = *(_QWORD*)(a1 + 8);
  if (v33 <= v34) {
    if (v33 >= v34) {
      goto LABEL_98;
    }
    v39 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                         *(float*)(a1 + 32));
    if (v34 < 3 || (v34 & (v34 - 1)) != 0) {
      v53 = NgxRoutine_e2400(v39);
      if (v33 <= v53) {
        v33 = v53;
      }
      if (v33 >= v34) {
        goto LABEL_98;
      }
    }
    else {
      v40 = 1LL << ((-(char)__clz((unsigned long long)(v39 - 1))) & 63);
      if (v39 >= 2) {
        v39 = v40;
      }
      if (v33 <= v39) {
        v33 = v39;
      }
      if (v33 >= v34) {
        goto LABEL_98;
      }
    }
    if (v33 == 0) {
      v54 = *(_QWORD*)a1;
      *(_QWORD*)a1 = 0;
      if (v54 != 0) {
        NgxRoutine_430(v54, 8LL * *(_QWORD*)(a1 + 8));
      }
      *(_QWORD*)(a1 + 8) = 0;
      goto LABEL_98;
    }
  }
  if (v33 >> 61 != 0) {
    NgxRoutine_27cf0();
  }
  v35 = NgxRoutine_420(8 * v33);
  v36 = *(_QWORD*)a1;
  *(_QWORD*)a1 = v35;
  if (v36 != 0) {
    NgxRoutine_430(v36, 8LL * *(_QWORD*)(a1 + 8));
    v35 = *(_QWORD*)a1;
  }
  v37 = v33 & 7;
  *(_QWORD*)(a1 + 8) = v33;
  if (v33 < 8) {
    v38 = 0;
    if ((v33 & 7) == 0) {
      goto LABEL_70;
    }
    goto LABEL_68;
  }
  v41 = (_QWORD*)(v35 + 32);
  v42 = 0;
  do {
    *(v41 - 4) = 0;
    *(v41 - 3) = 0;
    *(v41 - 2) = 0;
    *(v41 - 1) = 0;
    v42 -= 8;
    *v41 = 0;
    v41[1] = 0;
    v41[2] = 0;
    v41[3] = 0;
    v41 += 8;
  } while (-(__int64)(v33 & 0x1FFFFFFFFFFFFFF8LL) != v42);
  v38 = -v42;
  if ((v33 & 7) != 0) {
  LABEL_68:
    v43 = (_QWORD*)(v35 + 8 * v38);
    do {
      *v43++ = 0;
      --v37;
    } while (v37 != 0);
  }
LABEL_70:
  v45 = a1 + 16;
  v44 = *(_QWORD**)(a1 + 16);
  if (v44 == nullptr) {
    goto LABEL_98;
  }
  v46 = v44[1];
  v47 = v33 - 1;
  if ((v33 & (v33 - 1)) == 0) {
    v50 = v46 & v47;
    *(_QWORD*)(v35 + 8 * v50) = v45;
    while (1) {
      v51 = (_QWORD*)*v44;
      if (*v44 == 0) {
        break;
      }
      v52 = v51[1] & v47;
      if (v52 == v50) {
        v44 = (_QWORD*)*v44;
      }
      else if (*(_QWORD*)(v35 + 8 * v52) != 0) {
        *v44 = *v51;
        *v51 = **(_QWORD**)(v35 + 8 * v52);
        **(_QWORD**)(v35 + 8 * v52) = v51;
      }
      else {
        *(_QWORD*)(v35 + 8 * v52) = v44;
        v44 = v51;
        v50 = v52;
      }
    }
    goto LABEL_98;
  }
  if (v46 >= v33) {
    v46 %= v33;
  }
  *(_QWORD*)(v35 + 8 * v46) = v45;
  v48 = (_QWORD*)*v44;
  if (*v44 != 0) {
    while (1) {
      v49 = v48[1];
      if (v49 >= v33) {
        v49 %= v33;
      }
      if (v49 == v46) {
        goto LABEL_77;
      }
      if (*(_QWORD*)(v35 + 8 * v49) != 0) {
        *v44 = *v48;
        *v48 = **(_QWORD**)(v35 + 8 * v49);
        **(_QWORD**)(v35 + 8 * v49) = v48;
        v48 = v44;
      LABEL_77:
        v44 = v48;
        v48 = (_QWORD*)*v48;
        if (v48 == nullptr) {
          break;
        }
      }
      else {
        *(_QWORD*)(v35 + 8 * v49) = v44;
        v44 = v48;
        v48 = (_QWORD*)*v48;
        v46 = v49;
        if (v48 == nullptr) {
          break;
        }
      }
    }
  }
LABEL_98:
  v11 = *(_QWORD*)(a1 + 8);
  if ((v11 & (v11 - 1)) == 0) {
    v2 = (v11 - 1) & v12;
    goto LABEL_103;
  }
  if (v12 >= v11) {
    v2 = v12 % v11;
    v55 = *(_QWORD*)a1;
    v56 = *(_QWORD**)(*(_QWORD*)a1 + 8 * (v12 % v11));
    if (v56 == nullptr) {
      goto LABEL_108;
    }
  }
  else {
    v2 = v12;
    v55 = *(_QWORD*)a1;
    v56 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v12);
    if (v56 == nullptr) {
    LABEL_108:
      v58 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a1 + 16) = i;
      *i = v58;
      *(_QWORD*)(v55 + 8 * v2) = a1 + 16;
      if (v58 != 0) {
        v59 = *(_QWORD*)(v58 + 8);
        if ((v11 & (v11 - 1)) != 0) {
          if (v59 >= v11) {
            v59 %= v11;
          }
          *(_QWORD*)(v55 + 8 * v59) = i;
        }
        else {
          *(_QWORD*)(v55 + 8 * (v59 & (v11 - 1))) = i;
        }
      }
      goto LABEL_105;
    }
  }
LABEL_104:
  *i = *v56;
  *v56 = i;
LABEL_105:
  ++*(_QWORD*)(a1 + 24);
  return i + 5;
}

#pragma GCC visibility pop
