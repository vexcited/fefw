#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* nvidia_dlss_ab5c0(_QWORD*, __int64);
_QWORD* nvidia_dlss_ab6e0(__int64);
_QWORD* nvidia_dlss_rel_source_frameworks_cubin_a7910();
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_baf70(__int64, __int64);
__int64 NgxRoutine_e2db0();
__int64 NgxRoutine_e2de0();
__int64 dlaa_34c80(__int64, __int64, __int64, __int64, __int64*);
__int64 nvidia_dlss_ab840(__int64*);
__int64 nvidia_dlss_rel_source_34940(__int64, __int64);
__int64 nvidia_dlss_rel_source_34b70(__int64, __int64);
__int64 nvidia_dlss_rel_source_common_b4b90(__int64, __int64, __int64, __int64,
                                            ...);
__int64 nvidia_dlss_rel_source_common_b4c00(__int64 result, __int64, __int64,
                                            __int64, __int64, __int64);
extern _UNKNOWN NgxData_f555c;
extern __int64 NgxData_2b6adc8;
extern __int64 NgxData_2b6add0;
extern __int64 NgxData_2b6add8;
extern __int64 NgxData_2b6ade0;
extern int NgxData_2b6ade8;
unsigned __int64 NgxRoutine_e2400(unsigned __int64);
void __attribute__((noreturn)) NgxRoutine_27cf0();
bool nvidia_dlss_a9e60(__int64 a1, __int64 a2);
__attribute__((no_builtin("memset", "memcpy", "memmove"))) bool

nvidia_dlss_a9e60(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned int v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  _BOOL8 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD** v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  char v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;

  NgxRoutine_e2db0();
  v4 = nvidia_dlss_rel_source_34b70((__int64)&NgxData_f555c, 0);
  if (v4 >> 20 == 2989) {
    nvidia_dlss_rel_source_common_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel\\source/features/dlaa/ngx_templates.h",
        81, (__int64)"InitCommon",
        (__int64)"Error: NGXDLAA_InitLog() has failed. Bailing out.");
    goto LABEL_5;
  }
  if (NgxData_2b6ade0 != 0) {
    v4 = 1;
    goto LABEL_5;
  }
  if (a2 == 0) {
    nvidia_dlss_rel_source_common_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel\\source/features/dlaa/ngx_templates.h",
        103, (__int64)"InitCommon",
        (__int64)"Error: Device pointer was nullptr");
    v4 = -1160773627;
    goto LABEL_5;
  }
  v55 = a2;
  v6 = NgxRoutine_baf70((__int64)&v55, 8);
  v7 = v6;
  v8 = NgxData_2b6add0;
  if (NgxData_2b6add0 != 0) {
    v9 = NgxData_2b6add0 - 1;
    if ((NgxData_2b6add0 & (NgxData_2b6add0 - 1)) != 0) {
      v2 = v6;
      if (v6 >= NgxData_2b6add0) {
        v2 = v6 % NgxData_2b6add0;
      }
    }
    else {
      v2 = v9 & v6;
    }
    v10 = *(__int64**)(NgxData_2b6adc8 + 8 * v2);
    if (v10 != nullptr) {
      v11 = *v10;
      if (*v10 != 0) {
        if ((NgxData_2b6add0 & v9) == 0) {
          while (1) {
            v13 = *(_QWORD*)(v11 + 8);
            if (v13 == v6) {
              if (*(_QWORD*)(v11 + 16) == a2) {
                goto LABEL_95;
              }
            }
            else if ((v13 & v9) != v2) {
              goto LABEL_29;
            }
            v11 = *(_QWORD*)v11;
            if (v11 == 0) {
              goto LABEL_29;
            }
          }
        }
        do {
          v12 = *(_QWORD*)(v11 + 8);
          if (v12 == v6) {
            if (*(_QWORD*)(v11 + 16) == a2) {
              goto LABEL_95;
            }
          }
          else {
            if (v12 >= NgxData_2b6add0) {
              v12 %= (unsigned __int64)NgxData_2b6add0;
            }
            if (v12 != v2) {
              break;
            }
          }
          v11 = *(_QWORD*)v11;
        } while (v11 != 0);
      }
    }
  }
LABEL_29:
  v11 = NgxRoutine_420(136);
  *(_QWORD*)v11 = 0;
  *(_QWORD*)(v11 + 8) = v7;
  *(_QWORD*)(v11 + 16) = a2;
  *(_QWORD*)(v11 + 24) = 0;
  v14 = NgxData_2b6ade0;
  v15 = *(float*)&NgxData_2b6ade8;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_DWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_QWORD*)(v11 + 80) = 0;
  *(_QWORD*)(v11 + 88) = 0;
  *(_QWORD*)(v11 + 96) = 0;
  *(_QWORD*)(v11 + 104) = 0;
  *(_QWORD*)(v11 + 112) = 0;
  *(_QWORD*)(v11 + 120) = 0;
  *(_QWORD*)(v11 + 128) = 0;
  v16 = (float)(unsigned __int64)(v14 + 1);
  *(_DWORD*)(v11 + 32) = 5;
  if (v8 == 0 || (float)(v15 * (float)v8) < v16) {
    v17 = v16 / v15;
    v18 = true;
    if (v8 >= 3) {
      v18 = (v8 & (v8 - 1)) != 0;
    }
    v19 = v18 | (2 * v8);
    v20 = vcvtps_u64_f32(v17);
    if (v19 <= v20) {
      v21 = v20;
    }
    else {
      v21 = v19;
    }
    if (v21 == 1) {
      v21 = 2;
    }
    else if ((v21 & (v21 - 1)) != 0) {
      v21 = NgxRoutine_e2400(v21);
    }
    v22 = NgxData_2b6add0;
    if (v21 <= NgxData_2b6add0) {
      if (v21 >= NgxData_2b6add0) {
        goto LABEL_87;
      }
      v27 = vcvtps_u64_f32((float)(unsigned __int64)NgxData_2b6ade0 /
                           *(float*)&NgxData_2b6ade8);
      if ((unsigned __int64)NgxData_2b6add0 < 3 ||
          (NgxData_2b6add0 & (NgxData_2b6add0 - 1)) != 0) {
        v27 = NgxRoutine_e2400(v27);
      }
      else {
        v28 = 1LL << ((-(char)__clz((unsigned long long)(v27 - 1))) & 63);
        if (v27 >= 2) {
          v27 = v28;
        }
      }
      if (v21 <= v27) {
        v21 = v27;
      }
      if (v21 >= v22) {
        goto LABEL_87;
      }
      if (v21 == 0) {
        v40 = NgxData_2b6adc8;
        NgxData_2b6adc8 = 0;
        if (v40 != 0) {
          NgxRoutine_430(v40, 8 * NgxData_2b6add0);
        }
        NgxData_2b6add0 = 0;
        goto LABEL_87;
      }
    }
    if (v21 >> 61 != 0) {
      NgxRoutine_27cf0();
    }
    v23 = NgxRoutine_420(8 * v21);
    v24 = NgxData_2b6adc8;
    NgxData_2b6adc8 = v23;
    if (v24 != 0) {
      NgxRoutine_430(v24, 8 * NgxData_2b6add0);
      v23 = NgxData_2b6adc8;
    }
    v25 = v21 & 7;
    NgxData_2b6add0 = v21;
    if (v21 >= 8) {
      v29 = (_QWORD*)(v23 + 32);
      v30 = 0;
      do {
        *(v29 - 4) = 0;
        *(v29 - 3) = 0;
        *(v29 - 2) = 0;
        *(v29 - 1) = 0;
        v30 -= 8;
        *v29 = 0;
        v29[1] = 0;
        v29[2] = 0;
        v29[3] = 0;
        v29 += 8;
      } while (-(__int64)(v21 & 0x1FFFFFFFFFFFFFF8LL) != v30);
      v26 = -v30;
    }
    else {
      v26 = 0;
    }
    if ((v21 & 7) != 0) {
      v31 = (_QWORD*)(v23 + 8 * v26);
      do {
        *v31++ = 0;
        --v25;
      } while (v25 != 0);
    }
    v32 = (_QWORD**)NgxData_2b6add8;
    if (NgxData_2b6add8 != 0) {
      v33 = *(_QWORD*)(NgxData_2b6add8 + 8);
      v34 = v21 - 1;
      if ((v21 & (v21 - 1)) != 0) {
        if (v33 >= v21) {
          v33 %= v21;
        }
        *(_QWORD*)(v23 + 8 * v33) = &NgxData_2b6add8;
        v35 = *v32;
        if (*v32 == nullptr) {
          goto LABEL_87;
        }
        while (1) {
          v36 = v35[1];
          if (v36 >= v21) {
            v36 %= v21;
          }
          if (v36 == v33) {
            goto LABEL_65;
          }
          if (*(_QWORD*)(v23 + 8 * v36) != 0) {
            *v32 = (_QWORD*)*v35;
            *v35 = **(_QWORD**)(v23 + 8 * v36);
            **(_QWORD**)(v23 + 8 * v36) = v35;
            v35 = v32;
          LABEL_65:
            v32 = (_QWORD**)v35;
            v35 = (_QWORD*)*v35;
            if (v35 == nullptr) {
              goto LABEL_87;
            }
          }
          else {
            *(_QWORD*)(v23 + 8 * v36) = v32;
            v32 = (_QWORD**)v35;
            v35 = (_QWORD*)*v35;
            v33 = v36;
            if (v35 == nullptr) {
              goto LABEL_87;
            }
          }
        }
      }
      v37 = v33 & v34;
      *(_QWORD*)(v23 + 8 * v37) = &NgxData_2b6add8;
      while (1) {
        v38 = *v32;
        if (*v32 == nullptr) {
          break;
        }
        v39 = v38[1] & v34;
        if (v39 == v37) {
          v32 = (_QWORD**)*v32;
        }
        else if (*(_QWORD*)(v23 + 8 * v39) != 0) {
          *v32 = (_QWORD*)*v38;
          *v38 = **(_QWORD**)(v23 + 8 * v39);
          **(_QWORD**)(v23 + 8 * v39) = v38;
        }
        else {
          *(_QWORD*)(v23 + 8 * v39) = v32;
          v32 = (_QWORD**)v38;
          v37 = v39;
        }
      }
    }
  LABEL_87:
    v8 = NgxData_2b6add0;
    if ((v8 & (v8 - 1)) != 0) {
      if (v7 >= NgxData_2b6add0) {
        v2 = v7 % NgxData_2b6add0;
      }
      else {
        v2 = v7;
      }
    }
    else {
      v2 = (NgxData_2b6add0 - 1) & v7;
    }
  }
  v41 = NgxData_2b6adc8;
  v42 = *(__int64**)(NgxData_2b6adc8 + 8 * v2);
  if (v42 != nullptr) {
    *(_QWORD*)v11 = *v42;
    *v42 = v11;
  }
  else {
    v53 = NgxData_2b6add8;
    NgxData_2b6add8 = v11;
    *(_QWORD*)v11 = v53;
    *(_QWORD*)(v41 + 8 * v2) = &NgxData_2b6add8;
    if (v53 != 0) {
      v54 = *(_QWORD*)(v53 + 8);
      if ((v8 & (v8 - 1)) != 0) {
        if (v54 >= v8) {
          v54 %= v8;
        }
        *(_QWORD*)(v41 + 8 * v54) = v11;
      }
      else {
        *(_QWORD*)(v41 + 8 * (v54 & (v8 - 1))) = v11;
      }
    }
  }
  ++NgxData_2b6ade0;
LABEL_95:
  *(_QWORD*)(v11 + 24) = 0;
  nvidia_dlss_ab5c0((_QWORD*)(v11 + 40), (__int64)&NgxData_f555c);
  v43 = *(_QWORD*)(v11 + 128);
  *(_QWORD*)(v11 + 80) = 0;
  *(_QWORD*)(v11 + 88) = 0;
  *(_QWORD*)(v11 + 96) = a2;
  *(_QWORD*)(v11 + 104) = 0;
  *(_QWORD*)(v11 + 112) = 0;
  *(_DWORD*)(v11 + 64) = 19;
  nvidia_dlss_rel_source_common_b4c00(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel\\source/features/dlaa/ngx_templates.h",
      116, (__int64)"InitCommon", (__int64)"m_pDevice: 0x%p->0x%p", v43, a2);
  v46 = *(_QWORD*)(v11 + 72);
  *(_QWORD*)(v11 + 128) = a2;
  if (v46 == 0) {
    v47 = NgxRoutine_420(2848);
    nvidia_dlss_rel_source_34940(v47, *(unsigned int*)(v11 + 32));
    *(_QWORD*)(v11 + 72) = v47;
    v48 = nvidia_dlss_rel_source_frameworks_cubin_a7910();
    v49 = *(_BYTE*)(v11 + 40);
    v50 = *(_QWORD*)(v11 + 56);
    *(_QWORD*)(v11 + 120) = v48;
    if ((v49 & 1) != 0) {
      v51 = v50;
    }
    else {
      v51 = v11 + 44;
    }
    v4 = dlaa_34c80(*(_QWORD*)(v11 + 72), a2, 0, v51, v48);
    if (v4 != 1) {
      v52 = nvidia_dlss_ab6e0(a2);
      if (v52 != nullptr) {
        nvidia_dlss_ab840(v52);
      }
    }
  }
LABEL_5:
  NgxRoutine_e2de0();
  return v4 == 1;
}

#pragma GCC visibility pop
