#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAlloc_plt(_QWORD);

__int64 NvOsAtomicCompareExchange32_plt(_QWORD, _QWORD, _QWORD);

__int64 NvOsFclose_plt(_QWORD);

__int64 NvOsFopen_plt(_QWORD, _QWORD, _QWORD);

__int64 NvOsFree_plt(_QWORD);

__int64 NvOsFstat_plt(_QWORD, _QWORD);

__int64 NvRmMemRead_plt(_QWORD, _QWORD);

__int64 NvRmMultiplanarSurfaceSetup_plt(void);

__int64 NvRmSurfaceGetAlignment_plt(__int64, __int64);

__int64 NvRmSurfaceSetup_plt(__int64, __int64, __int64, __int64, __int64);

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);

__int64 memcpy_plt_alt1(__int64, __int64,
                        unsigned __int64) __asm__("memcpy_plt");

__int64 memset_plt(void* this_, void*, int);

__int64 memset_plt_alt1(void* this_, void*, int,
                        unsigned __int64) __asm__("memset_plt");

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);

__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(_QWORD, _QWORD);

__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);

__int64 nn_os_GetHostArgc_plt(void);

__int64 nn_os_GetHostArgv_plt(void);

__int64 nn_os_LockMutex_plt(_QWORD);

__int64 nn_os_UnlockMutex_plt(_QWORD);

__int64 nvidia_605fc0(__int64, unsigned int, _QWORD*);

__int64 nvidia_606150(__int64, __int64, char);

__int64 nvidia_626c20(__int64 result, unsigned __int8, __int64);

__int64 nvidia_626ca0(__int64, _BYTE*, __int64*);

__int64 nvidia_627b10(__int64, __int64, __int64, _QWORD*);

__int64 nvidia_627cd0(const char**, __int64, __int64, __int64, __int64, __int64,
                      __int64);

__int64 nvidia_6280e0(__int64*, unsigned __int64);

__int64 nvidia_629c90(__int64);

__int64 nvidia_644c60();

__int64 nvidia_644cf0(__int64, __int64, _QWORD*, __int64, __int64*,
                      unsigned __int64);

__int64 nvrm_surface_query_603d30(__int64);

__int64 strcmp_plt(void* this_, const char*, const char*);

__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);

__int64 unplaced_4_629070(_QWORD*, __int64);

extern _UNKNOWN SdkData_103b108;

extern _UNKNOWN SdkData_c76ebc;

extern _UNKNOWN SdkData_f72ea4;

extern _UNKNOWN SdkData_f76ea4;

extern __int64 (*SdkData_e71a18)();

extern __int64 (*nn_aoc_detail_AddProxyReference_ptr[])();

extern __int64 (*nn_os_detail_GetUserWaitNativeHandle_ptr[])();

extern __int64 SdkData_103b100;

extern __int64 SdkData_103f140;

extern __int64 SdkData_f71e60[513];

extern int SdkData_f71e5c;

extern int SdkData_f72e68;

extern void (*SdkData_ea42b8)(_QWORD, _QWORD, _QWORD);

extern void (*SdkData_ea42b8_alt1)(_QWORD, __int64,
                                   _QWORD) __asm__("SdkData_ea42b8");

extern void (*SdkData_ea42c0)(_QWORD, __int64, __int64);

extern void (*SdkData_ea42c8)(_QWORD, __int64, __int64);

extern void (*SdkData_ea42d0)(_QWORD, __int64, _QWORD);

extern void (*SdkData_ea4340)(_QWORD, __int64, __int64);

extern void (*SdkData_ea4350)(_QWORD, unsigned __int64, __int64);

float atan2f_plt(float, float);

float nvidia_621720(float);

float nvidia_622350(float*, float);

float powf_plt(float, float);

float sqrtf_plt(float);

void nvidia_627100(__int64, __int64*, _DWORD*);

__int64 nvidia_5ef040(char* a1, __int64 a2, const char* a3);

void __attribute__((noreturn)) nvidia_5f7750(__int64 a1, __int64 a2);

void __attribute__((noreturn)) nvidia_5f7770(__int64 a1);

void __attribute__((noreturn)) nvidia_5f7790(__int64 a1, __int64 a2);

void __attribute__((noreturn)) nvidia_5f77b0(__int64 a1);

void __attribute__((noreturn)) nvidia_5f7940(unsigned __int64 a1, __int64 a2,
                                             __int64 a3);

__attribute__((swiftcall)) void nvidia_5f9020(PSEUDO_X8 x8_, int* a1);

__int64 nvidia_5fb130(unsigned int a1, unsigned int a2, __int64 a3);

__int64 nvidia_604ca0(_DWORD* a1, unsigned int a2, unsigned int a3, int a4,
                      int a5, __int64 a6);

__int64 nvidia_60a6e0(_DWORD* a1, int a2, unsigned int a3, unsigned int a4,
                      __int64* a5, int a6, _DWORD* a7);

void nvidia_6225f0(__int64 a1, float a2, float a3, float a4);

__int64 nvidia_62a540(__int64 a1, __int64 a2, __int64 a3, __int64* a4);

__int64 nvidia_637ba0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);

__int64 SdkRoutine_62d0e0(_QWORD);

__int64 gettimeofday_plt(_QWORD, _QWORD);

__int64 nn_sf_hipc_client_DuplicateSessionEx_plt(_QWORD, _QWORD, _QWORD);

__int64 nvidia_644da0(unsigned int, int, __int64, __int64);

extern _BYTE* SdkData_e899e8;

extern __int64 (*nn_aoc_detail_AddProxyReference_ptr_e71998[])();

__attribute__((swiftcall)) void nvidia_5f90c0(PSEUDO_X8 x8_, __int64** a1);

__int64 nvidia_62ea10(__int64 a1, __int64 a2, char a3);

__int64 nvidia_637e60(__int64 a1, int* a2, __int64 a3, unsigned int a4);

__attribute__((swiftcall)) void nvidia_5f9020(PSEUDO_X8 x8_, int* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v3;
  __int64 v5;
  __int64 result;

  if ((a1[1] & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  v3 = *a1;
  nn_os_LockMutex_plt(&SdkData_103b108);
  v5 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_103b100, 32);
  result = nn_os_UnlockMutex_plt(&SdkData_103b108);
  if (v5 != 0) {
    *(_DWORD*)(v5 + 24) = 1;
    *(_DWORD*)(v5 + 8) = 1;
    *(_DWORD*)(v5 + 12) = v3;
    *(_QWORD*)v5 = nn_aoc_detail_AddProxyReference_ptr;
    *(_QWORD*)(v5 + 16) = &SdkData_e71a18;
  }
  *a2 = v5;
  *((_BYTE*)a1 + 4) = 0;
  *a1 = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nvidia_5f90c0(PSEUDO_X8 x8_, __int64** a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v2;
  void (**v4)(__int64*);
  __int64 (***v5)(_QWORD);
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v12;
  int v13;
  int v14;

  v2 = *a1;
  *a2 = 0;
  if (v2 != nullptr) {
    (*(void (**)(__int64*))*v2)(v2);
  }
  v4 = (void (**)(__int64*))*v2;
  v14 = 0;
  v5 = (__int64 (***)(_QWORD))((__int64 (*)(__int64*))v4[2])(v2);
  v6 = (**v5)(v5);
  v7 = nn_sf_hipc_client_DuplicateSessionEx_plt(&v14, *(unsigned int*)(v6 + 4),
                                                1);
  if (v7 != 0) {
    v12 = v7;
    (*(void (**)(__int64*))(*v2 + 8))(v2);
    v13 = v12;
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v8 = v14;
  nn_os_LockMutex_plt(&SdkData_103b108);
  v9 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_103b100, 32);
  nn_os_UnlockMutex_plt(&SdkData_103b108);
  if (v9 != 0) {
    *(_DWORD*)(v9 + 24) = 1;
    *(_DWORD*)(v9 + 8) = 1;
    *(_DWORD*)(v9 + 12) = v8;
    *(_QWORD*)v9 = nn_aoc_detail_AddProxyReference_ptr_e71998;
    *(_QWORD*)(v9 + 16) = &SdkData_e71a18;
  }
  v10 = *v2;
  *a2 = v9;
  {
    (*(__int64 (**)(__int64*))(v10 + 8))(v2);
    return;
  }
}

__int64 nvidia_5fb130(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned int v8;

  v6 = 0;
  v8 = 0;
  v7 = (*(__int64 (**)(__int64, _QWORD, __int64*, _QWORD, unsigned int*))(
      *(_QWORD*)SdkData_103f140 + 56LL))(SdkData_103f140, a1, &v6, a2, &v8);
  if (v7 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v7);
  }
  nn_os_AttachReadableHandleToSystemEvent_plt(a3, (unsigned int)v6, 1, 1);
  result = v8;
  BYTE4(v6) = 0;
  LODWORD(v6) = 0;
  if (v8 == 4096) {
    v5 = nn_os_GetHostArgc_plt();
    if ((int)v5 >= 1) {
      v5 = nn_os_GetHostArgv_plt();
    }
    nn_diag_detail_AbortImpl_plt_856170(v5);
  }
  return result;
}

__int64 nvidia_604ca0(_DWORD* a1, unsigned int a2, unsigned int a3, int a4,
                      int a5, __int64 a6)
{
  unsigned int v9;
  __int64 result;
  bool v11;
  unsigned int v14;
  _DWORD* v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  bool v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  _BOOL4 v42;
  _BOOL4 v43;
  bool v44;
  int v45;
  int v46;
  char v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  bool v52;
  bool v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  int v60;
  char v61;
  unsigned int v62;
  int v63;
  __int64 v64;
  __int64 v66;
  unsigned int v67[3];

  v9 = a1[9];
  result = 65538;
  if (v9 <= 5) {
    result = 4;
    v11 = __CFADD__(a3, a5);
    if (!__CFADD__(a2, a4) && !v11) {
      v14 = a3;
      v16 = a1;
      result = nvrm_surface_query_603d30((__int64)v67);
      if ((_DWORD)result == 0) {
        v17 = v16[7];
        v19 = v16[10];
        v18 = v16[11];
        v20 = v18 >= v17;
        v21 = v18 - v17;
        v66 = 0;
        if (v20) {
          v22 = v21;
        }
        else {
          v22 = 0;
        }
        v23 = nvidia_605fc0((__int64)v16, 1u, &v66);
        if (v14 >= a5 + v14) {
        LABEL_56:
          v24 = (__int64)v16;
        }
        else {
          v60 = a5 + v14;
          v62 = v22;
          v63 = v19;
          v24 = (__int64)v16;
          v61 = v19 == 1;
          v25 = a2;
          v26 = a4 + a2;
          if (a2 < a4 + a2) {
            v27 = v66;
            v28 = a6;
            v64 = v66;
            while (2) {
              v29 = v25;
              v30 = v14 >> v61;
              if (v63 == 1) {
                v31 = ((int)(v14 << 31) >> 31) & v62;
              }
              else {
                v31 = 0;
              }
              do {
                v32 = *(_DWORD*)(v24 + 36);
                if (v32 > 5 ||
                    (v33 = *(_DWORD*)(v24 + 20)) > 0x1FFFFFFFu >> v32) {
                  v23 = 65538;
                  goto LABEL_57;
                }
                v34 = v30 >> (v32 + 3);
                if ((((unsigned int)((8 * v33) << v32) *
                      (unsigned __int64)v34) &
                     0xFFFFFFFF00000000LL) != 0) {
                  goto LABEL_53;
                }
                if (v29 >> 6 > 0x7FFFFFu >> v32) {
                  goto LABEL_53;
                }
                v35 = v34 * v33;
                v36 = v29 >> 6 << 9 << v32;
                v37 = (8 * v35) << v32;
                if (__CFADD__(v37, v36)) {
                  goto LABEL_53;
                }
                v38 = 8 << v32;
                v39 = v37 + v36;
                v40 = (((v38 - 1) & v30) << 6) & 0x7FFFFE00;
                if (__CFADD__(v39, v40)) {
                  goto LABEL_53;
                }
                v41 = v39 + v40;
                v42 = v67[0] > 3;
                v43 = (*(_QWORD*)(v24 + 48) & 4LL) == 0;
                v44 = !v42 || !v43;
                v45 = v42 && v43 ? 128 : 192;
                v46 = v44 ? 32 : 64;
                v47 = v44 ? 1 : 2;
                v48 = v44 ? 16 : 48;
                v49 = v48 & (16 * v30) & 0xFFFFFEF0 |
                      (((v29 & 0x20) != 0) << 8) |
                      (v45 & (32 * (v14 >> v61)) | (v29 << v47) & v46) &
                          0xFFFFFFF0 |
                      v29 & 0xF;
                if (__CFADD__(v41, v49)) {
                LABEL_53:
                  v23 = 11;
                  goto LABEL_57;
                }
                v50 = v49 + v41;
                v23 = 11;
                v51 = 16 - (v29 & 0xF);
                v52 = __CFADD__(v50, v31);
                v53 = __CFADD__(v29, v51);
                if (v52 || v53) {
                  goto LABEL_57;
                }
                v54 = v50 + v31;
                v55 = v31;
                if (v26 - v29 >= v51) {
                  v56 = v51;
                }
                else {
                  v56 = v26 - v29;
                }
                if (v27 != 0) {
                  v57 = v28;
                  memcpy_plt(v28, v27 + (unsigned int)v54, v56);
                }
                else {
                  v57 = v28;
                  v58 = NvRmMemRead_plt(*(unsigned int*)(v24 + 24), v54);
                  if (v58 != 0) {
                    v23 = v58;
                    goto LABEL_56;
                  }
                }
                v25 = a2;
                v27 = v64;
                v28 = v57 + v56;
                v29 += v51;
                v24 = (__int64)v16;
                v31 = v55;
              } while (v29 < v26);
              ++v14;
              v23 = 0;
              if (v14 != v60) {
                continue;
              }
              break;
            }
          }
        }
      LABEL_57:
        LODWORD(result) = nvidia_606150(v24, v66, 0);
        if (v23 != 0 || (_DWORD)result == 0) {
          return v23;
        }
        else {
          return (unsigned int)result;
        }
      }
    }
  }
  return result;
}

__int64 nvidia_60a6e0(_DWORD* a1, int a2, unsigned int a3, unsigned int a4,
                      __int64* a5, int a6, _DWORD* a7)
{
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  _DWORD* v19;
  unsigned int v20;
  unsigned int v21;
  _DWORD* v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;

  v7 = 4;
  if (a1 == nullptr || a5 == nullptr) {
    return v7;
  }
  a1[66] = a2;
  a1[67] = a6;
  if (a7 == nullptr || *a7 == 0) {
  LABEL_64:
    if ((a6 & 0xFFFFFFFE) == 2) {
      a1[68] = 1;
      v7 = 2;
      if (a2 <= 1) {
        goto LABEL_66;
      }
    }
    else if (a6 == 1) {
      a1[68] = 2;
      v7 = 2;
      if (a2 <= 1) {
        goto LABEL_66;
      }
    }
    else {
      a1[68] = 0;
      v7 = 2;
      if (a2 <= 1) {
        goto LABEL_66;
      }
    }
    goto LABEL_33;
  }
  if (*a7 != 12) {
    v9 = a7[2];
    if (v9 == 0) {
      goto LABEL_64;
    }
    if (v9 == 12) {
      v8 = a7[3];
      if ((unsigned int)(v8 - 1) < 9) {
        goto LABEL_32;
      }
    }
    else {
      v10 = a7[4];
      if (v10 == 0) {
        goto LABEL_64;
      }
      if (v10 == 12) {
        v8 = a7[5];
        if ((unsigned int)(v8 - 1) < 9) {
          goto LABEL_32;
        }
      }
      else {
        v11 = a7[6];
        if (v11 == 0) {
          goto LABEL_64;
        }
        if (v11 == 12) {
          v8 = a7[7];
          if ((unsigned int)(v8 - 1) < 9) {
            goto LABEL_32;
          }
        }
        else {
          v12 = a7[8];
          if (v12 == 0) {
            goto LABEL_64;
          }
          if (v12 == 12) {
            v8 = a7[9];
            if ((unsigned int)(v8 - 1) < 9) {
              goto LABEL_32;
            }
          }
          else {
            v13 = a7[10];
            if (v13 == 0) {
              goto LABEL_64;
            }
            if (v13 == 12) {
              v8 = a7[11];
              if ((unsigned int)(v8 - 1) < 9) {
                goto LABEL_32;
              }
            }
            else {
              v14 = (unsigned int)a7[12];
              if ((_DWORD)v14 == 0) {
                goto LABEL_64;
              }
              if ((_DWORD)v14 == 12) {
                v8 = a7[v14 + 1];
                if ((unsigned int)(v8 - 1) < 9) {
                  goto LABEL_32;
                }
              }
              else {
                v23 = a7[14];
                if (v23 == 0) {
                  goto LABEL_64;
                }
                if (v23 == 12) {
                  v8 = a7[15];
                  if ((unsigned int)(v8 - 1) < 9) {
                    goto LABEL_32;
                  }
                }
                else {
                  v24 = a7[16];
                  if (v24 == 0) {
                    goto LABEL_64;
                  }
                  if (v24 == 12) {
                    v25 = 16;
                  }
                  else {
                    v26 = a7[18];
                    if (v26 == 0) {
                      goto LABEL_64;
                    }
                    if (v26 == 12) {
                      v25 = 18;
                    }
                    else {
                      v27 = a7[20];
                      if (v27 == 0) {
                        goto LABEL_64;
                      }
                      if (v27 == 12) {
                        v25 = 20;
                      }
                      else {
                        v28 = a7[22];
                        if (v28 == 0) {
                          goto LABEL_64;
                        }
                        if (v28 == 12) {
                          v25 = 22;
                        }
                        else {
                          v29 = a7[24];
                          if (v29 == 0) {
                            goto LABEL_64;
                          }
                          if (v29 != 12) {
                            if (a7[26] != 12) {
                              goto LABEL_64;
                            }
                            v8 = a7[27];
                            if ((unsigned int)(v8 - 1) >= 9) {
                              goto LABEL_7;
                            }
                            goto LABEL_32;
                          }
                          v25 = 24;
                        }
                      }
                    }
                  }
                  v8 = a7[v25 + 1];
                  if ((unsigned int)(v8 - 1) < 9) {
                    goto LABEL_32;
                  }
                }
              }
            }
          }
        }
      }
    }
  LABEL_7:
    if (v8 != 0) {
      return 4;
    }
    goto LABEL_64;
  }
  v8 = a7[1];
  if ((unsigned int)(v8 - 1) >= 9) {
    goto LABEL_7;
  }
LABEL_32:
  a1[68] = v8;
  v7 = 2;
  if (a2 <= 1) {
  LABEL_66:
    if (a2 != 0) {
      if (a2 != 1) {
        return v7;
      }
      v21 = 2;
    LABEL_69:
      v19 = a7;
      v20 = NvRmMultiplanarSurfaceSetup_plt();
      if (v20 == 0) {
        v22 = a1;
        if (v19 == nullptr) {
        LABEL_125:
          if (v21 < 2) {
            return 0;
          }
          goto LABEL_126;
        }
        goto LABEL_81;
      }
      return v20;
    }
    v19 = a7;
    v20 = NvRmSurfaceSetup_plt((__int64)a1, a3, a4, *a5, (__int64)a7);
    if (v20 != 0) {
      return v20;
    }
    v21 = 1;
    v22 = a1;
    if (v19 == nullptr) {
      goto LABEL_125;
    }
    goto LABEL_81;
  }
LABEL_33:
  if (a2 == 2) {
    v21 = 3;
    goto LABEL_69;
  }
  if (a2 != 3) {
    return v7;
  }
  v19 = a7;
  v20 = NvRmSurfaceSetup_plt((__int64)a1, a3, a4, *a5, (__int64)a7);
  if (v20 != 0) {
    return v20;
  }
  v20 = NvRmSurfaceSetup_plt((__int64)(a1 + 22), a3, a4, a5[1], (__int64)v19);
  if (v20 != 0) {
    return v20;
  }
  v21 = 2;
  v22 = a1;
  if (v19 == nullptr) {
    goto LABEL_125;
  }
LABEL_81:
  if (*v19 == 0) {
    goto LABEL_125;
  }
  if (*v19 == 11) {
    v33 = 0;
  }
  else {
    v34 = v19[2];
    if (v34 == 0) {
      goto LABEL_125;
    }
    if (v34 == 11) {
      v33 = 2;
    }
    else {
      v35 = v19[4];
      if (v35 == 0) {
        goto LABEL_125;
      }
      if (v35 == 11) {
        v33 = 4;
      }
      else {
        v36 = v19[6];
        if (v36 == 0) {
          goto LABEL_125;
        }
        if (v36 == 11) {
          v33 = 6;
        }
        else {
          v37 = v19[8];
          if (v37 == 0) {
            goto LABEL_125;
          }
          if (v37 == 11) {
            v33 = 8;
          }
          else {
            v38 = v19[10];
            if (v38 == 0) {
              goto LABEL_125;
            }
            if (v38 == 11) {
              v33 = 10;
            }
            else {
              v39 = v19[12];
              if (v39 == 0) {
                goto LABEL_125;
              }
              if (v39 == 11) {
                v33 = 12;
              }
              else {
                v40 = v19[14];
                if (v40 == 0) {
                  goto LABEL_125;
                }
                if (v40 == 11) {
                  v33 = 14;
                }
                else {
                  v41 = v19[16];
                  if (v41 == 0) {
                    goto LABEL_125;
                  }
                  if (v41 == 11) {
                    v33 = 16;
                  }
                  else {
                    v42 = v19[18];
                    if (v42 == 0) {
                      goto LABEL_125;
                    }
                    if (v42 == 11) {
                      v33 = 18;
                    }
                    else {
                      v43 = v19[20];
                      if (v43 == 0) {
                        goto LABEL_125;
                      }
                      if (v43 == 11) {
                        v33 = 20;
                      }
                      else {
                        v44 = v19[22];
                        if (v44 == 0) {
                          goto LABEL_125;
                        }
                        if (v44 == 11) {
                          v33 = 22;
                        }
                        else {
                          v45 = v19[24];
                          if (v45 == 0) {
                            goto LABEL_125;
                          }
                          if (v45 == 11) {
                            v33 = 24;
                          }
                          else {
                            if (v19[26] != 11) {
                              goto LABEL_125;
                            }
                            v33 = 26;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v7 = 0;
  if (v19[v33 + 1] == 0 && v21 > 1) {
  LABEL_126:
    v46 = *((_QWORD*)v22 + 7);
    v47 = v21;
    v48 = (__int64)(v22 + 22);
    v49 = v47 - 1;
    while (1) {
      v52 = 0;
      v20 = NvRmSurfaceGetAlignment_plt(v48, (__int64)&v52);
      if (v20 != 0) {
        break;
      }
      if (HIDWORD(v46) != 0) {
        return 2;
      }
      if (v52 == 0 || __CFADD__((_DWORD)v46, v52 - 1)) {
        return 11;
      }
      v50 = *(_QWORD*)(v48 + 56);
      v51 = (v52 - 1 + (_DWORD)v46) & (unsigned int)-v52;
      *(_DWORD*)(v48 + 28) = v51;
      if (__CFADD__(v51, v50)) {
        return 2;
      }
      v46 = v50 + v51;
      v48 += 88;
      --v49;
      v7 = 0;
      if (v49 == 0) {
        return v7;
      }
    }
    return v20;
  }
  return v7;
}

void nvidia_6225f0(__int64 a1, float a2, float a3, float a4)
{
  float v5;
  float v6;
  float v7;
  float v8;
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
  float v21;
  float v22;
  float v23;
  bool v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  int v39;
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
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120[50];
  float v121[50];
  float v122[50];
  float v123[50];
  float v124[50];
  float v125[50];
  float v126[50];

  v5 = (float)((float)(PSEUDO_UNFUSED(a3 * 0x1.6e2a940000000p-2f)) +
               (float)(a2 * 0x1.a649cc0000000p-2f)) +
       (float)(a4 * 0x1.719ff00000000p-3f);
  v6 = (float)((float)(PSEUDO_UNFUSED(a3 * 0x1.6e2a940000000p-1f)) +
               (float)(a2 * 0x1.b37c1c0000000p-3f)) +
       (float)(a4 * 0x1.27b3260000000p-4f);
  v7 = (float)((float)(PSEUDO_UNFUSED(a3 * 0x1.e838ba0000000p-4f)) +
               (float)(a2 * 0x1.3cb7560000000p-6f)) +
       (float)(a4 * 0x1.e6ac2c0000000p-1f);
  v8 = (float)((float)(PSEUDO_UNFUSED(v6 * 0x1.901e1a0000000p-8f)) +
               (float)(v5 * 0x1.0355f00000000p+0f)) +
       (float)(v7 * -0x1.ea91da0000000p-7f);
  v9 = (float)((float)(PSEUDO_UNFUSED(v6 * 0x1.ff0f7c0000000p-1f)) +
               (float)(v5 * 0x1.f882de0000000p-8f)) +
       (float)(v7 * -0x1.49c7740000000p-8f);
  v10 = (float)((float)(PSEUDO_UNFUSED(v6 * 0x1.330bf00000000p-8f)) +
                (float)(v5 * -0x1.746a8c0000000p-9f)) +
        (float)(v7 * 0x1.d958fc0000000p-1f);
  v11 = (float)((float)(PSEUDO_UNFUSED(v9 * -0x0.0p+0f)) +
                (float)(v8 * 0x1.0cc06a0000000p+0f)) +
        (float)(v10 * -0x1.98dc5a0000000p-14f);
  v12 = (float)((float)(PSEUDO_UNFUSED(v9 * 0x1.5f91700000000p+0f)) +
                (float)(v8 * -0x1.fbcdfc0000000p-2f)) +
        (float)(v10 * 0x1.9264240000000p-4f);
  v13 = (float)((float)(PSEUDO_UNFUSED(v9 * -0x0.0p+0f)) +
                (float)(v8 * 0x1.5798ee0000000p-25f)) +
        (float)(v10 * 0x1.fb85660000000p-1f);
  v14 = 0x1.b7cdfe0000000p-34f;
  if (!(v12 < v13)) {
    v15 = v12;
  }
  else {
    v15 = v13;
  }
  if (!(v11 < v15)) {
    v15 = v11;
  }
  if (!(v15 < 0x1.b7cdfe0000000p-34f)) {
    v16 = v15;
  }
  else {
    v16 = 0x1.b7cdfe0000000p-34f;
  }
  if (!(v13 < v12)) {
    v17 = v12;
  }
  else {
    v17 = v13;
  }
  if (!(v17 < v11)) {
    v17 = v11;
  }
  if (!(v17 < 0x1.b7cdfe0000000p-34f)) {
    v14 = v17;
  }
  v18 = v16 - v14;
  if (v15 < 0x1.47ae140000000p-7f) {
    v15 = 0x1.47ae140000000p-7f;
  }
  v19 = v18 / v15;
  v20 = (float)((float)(v11 + (float)(v12 + v13)) +
                (float)(sqrtf_plt((float)((float)(PSEUDO_UNFUSED(
                                              v12 * (float)(v12 - v11))) +
                                          (float)(v13 * (float)(v13 - v12))) +
                                  (float)(v11 * (float)(v11 - v13))) *
                        0x1.c000000000000p+0f)) /
        0x1.8000000000000p+1f;
  v21 = (float)(v19 + -0x1.99999a0000000p-2f) / 0x1.99999a0000000p-3f;
  v22 = 0x1.0000000000000p+0f - fabsf(v21 * 0x1.0000000000000p-1f);
  v23 = 0x0.0p+0f;
  if (v22 < 0x0.0p+0f) {
    v22 = 0x0.0p+0f;
  }
  v24 = v21 < 0x0.0p+0f;
  if (v21 <= 0x0.0p+0f) {
    v25 = 0x0.0p+0f;
  }
  else {
    v25 = 0x1.0000000000000p+0f;
  }
  v26 = 0x1.0000000000000p+0f - (float)(v22 * v22);
  if (v24) {
    v25 = -0x1.0000000000000p+0f;
  }
  v27 = (float)((float)((float)(v25 * v26) + 0x1.0000000000000p+0f) *
                0x1.0000000000000p-1f) *
        0x1.99999a0000000p-5f;
  if (v20 > 0x1.b4e81c0000000p-5f) {
    v24 = v20 < 0x1.47ae140000000p-3f;
    v28 = v27 * (float)((float)(0x1.47ae140000000p-4f / v20) +
                        -0x1.0000000000000p-1f);
    if (v24) {
      v27 = v28;
    }
    else {
      v27 = 0x0.0p+0f;
    }
  }
  v29 = v11 * (float)(v27 + 0x1.0000000000000p+0f);
  v30 = v12 * (float)(v27 + 0x1.0000000000000p+0f);
  v31 = v13 * (float)(v27 + 0x1.0000000000000p+0f);
  if (v29 != v30 || v30 != v31) {
    v33 = sqrtf_plt(0x1.8000000000000p+1f);
    v23 =
        atan2f_plt((float)(v30 - v31) * v33,
                   (float)-(float)(v30 - (float)(v29 * 0x1.0000000000000p+1f)) -
                       v31) *
        0x1.ca5dc1a63c1f8p+5;
  }
  v34 = v23 + 0x1.6800000000000p+8f;
  if (!(v23 < 0x0.0p+0f)) {
    v34 = v23;
  }
  if (!(v34 < -0x1.6800000000000p+7f)) {
    if (v34 <= 0x1.6800000000000p+7f) {
      goto LABEL_41;
    }
    v35 = -0x1.6800000000000p+8f;
  }
  else {
    v35 = 0x1.6800000000000p+8f;
  }
  v34 = v34 + v35;
LABEL_41:
  v36 = 0x0.0p+0f;
  if (!(fabsf(v34) < 0x1.0e00000000000p+6f)) {
    goto LABEL_54;
  }
  v37 = 0x0.0p+0f;
  v38 = (float)((float)(v34 + 0x1.0e00000000000p+6f) * 0x1.0000000000000p+2f) /
        0x1.0e00000000000p+7f;
  v39 = (int)v38;
  v40 = v38 - (float)(int)v38;
  v41 = v40 * v40;
  v42 = v40 * (float)(v40 * v40);
  if (v39 > 1) {
    if (v39 == 2) {
      v46 = 0x1.5555560000000p-1f;
      v45 = (float)(v40 * 0x0.0p+0f) -
            (float)(v41 - (float)(v42 * 0x1.0000000000000p-1f));
      goto LABEL_52;
    }
    if (v39 == 3) {
      v44 = (float)(PSEUDO_UNFUSED(v41 * 0x1.0000000000000p-1f)) +
            (float)(v42 * -0x1.5555560000000p-3f);
      v43 = -0x1.0000000000000p-1f;
      goto LABEL_49;
    }
  }
  else if (v39 != 0) {
    if (v39 == 1) {
      v43 = 0x1.0000000000000p-1f;
      v44 = (float)(PSEUDO_UNFUSED(v41 * 0x1.0000000000000p-1f)) +
            (float)(v42 * -0x1.0000000000000p-1f);
    LABEL_49:
      v45 = v44 + (float)(v40 * v43);
      v46 = 0x1.5555560000000p-3f;
    LABEL_52:
      v37 = v45 + v46;
    }
  }
  else {
    v37 = (float)((float)((float)(PSEUDO_UNFUSED(v41 * 0x0.0p+0f)) +
                          (float)(v42 * 0x1.5555560000000p-3f)) +
                  (float)(v40 * 0x0.0p+0f)) +
          0x0.0p+0f;
  }
  v36 = (float)(v37 * 0x1.8000000000000p+1f) * 0x1.0000000000000p-1f;
LABEL_54:
  v47 = v29 + (float)((float)((float)(0x1.eb851e0000000p-6f - v29) *
                              (float)(v19 * v36)) *
                      0x1.70a3d80000000p-3f);
  if (v47 < 0x0.0p+0f) {
    v47 = 0x0.0p+0f;
  }
  if (!(v30 < 0x0.0p+0f)) {
    v48 = v30;
  }
  else {
    v48 = 0x0.0p+0f;
  }
  if (!(v31 < 0x0.0p+0f)) {
    v49 = v31;
  }
  else {
    v49 = 0x0.0p+0f;
  }
  v50 = (float)((float)(PSEUDO_UNFUSED(v48 * -0x1.e45fc80000000p-3f)) +
                (float)(v47 * 0x1.73918a0000000p+0f)) +
        (float)(v49 * -0x1.b82c760000000p-3f);
  v51 = (float)((float)(PSEUDO_UNFUSED(v48 * 0x1.2d1d6a0000000p+0f)) +
                (float)(v47 * -0x1.3990900000000p-4f)) +
        (float)(v49 * -0x1.9845cc0000000p-4f);
  v52 = (float)((float)(PSEUDO_UNFUSED(v48 * -0x1.8b57b80000000p-8f)) +
                (float)(v47 * 0x1.1080c20000000p-7f)) +
        (float)(v49 * 0x1.fed4aa0000000p-1f);
  if (v50 <= 0x1.ffc0000000000p+15f) {
    v53 = v50;
  }
  else {
    v53 = 0x1.ffc0000000000p+15f;
  }
  if (v51 <= 0x1.ffc0000000000p+15f) {
    v54 = v51;
  }
  else {
    v54 = 0x1.ffc0000000000p+15f;
  }
  v55 = fmaxf(v53, 0x0.0p+0f);
  if (v52 > 0x1.ffc0000000000p+15f) {
    v52 = 0x1.ffc0000000000p+15f;
  }
  v56 = fmaxf(v54, 0x0.0p+0f);
  v57 = fmaxf(v52, 0x0.0p+0f);
  v58 = (float)((float)(PSEUDO_UNFUSED(v56 * 0x1.f953400000000p-1f)) +
                (float)(v55 * 0x1.64d0da0000000p-7f)) +
        (float)(v57 * 0x1.197ce40000000p-9f);
  v59 = (float)((float)(PSEUDO_UNFUSED(v56 * 0x1.b9c4340000000p-6f)) +
                (float)(v55 * 0x1.64d0da0000000p-7f)) +
        (float)(v57 * 0x1.ec9e9a0000000p-1f);
  v60 = nvidia_621720(
      (float)((float)(PSEUDO_UNFUSED(v56 * 0x1.b9c4340000000p-6f)) +
              (float)(v55 * 0x1.f118620000000p-1f)) +
      (float)(v57 * 0x1.197ce40000000p-9f));
  v61 = nvidia_621720(v58);
  v62 = nvidia_621720(v59);
  v63 = (float)((float)(PSEUDO_UNFUSED(v61 * 0x1.201c260000000p-3f)) +
                (float)(v60 * 0x1.64124e0000000p-1f)) +
        (float)(v62 * 0x1.4f9a940000000p-3f);
  v64 = (float)((float)(PSEUDO_UNFUSED(v61 * 0x1.b826ca0000000p-1f)) +
                (float)(v60 * 0x1.6ef51c0000000p-5f)) +
        (float)(v62 * 0x1.874efe0000000p-4f);
  v65 = (float)((float)(PSEUDO_UNFUSED(v61 * 0x1.07cbd20000000p-8f)) +
                (float)(v60 * -0x1.6a24b60000000p-8f)) +
        (float)(v62 * 0x1.00625a0000000p+0f);
  v66 = (float)((float)(PSEUDO_UNFUSED(v64 * -0x1.e45fc80000000p-3f)) +
                (float)(v63 * 0x1.73918a0000000p+0f)) +
        (float)(v65 * -0x1.b82c760000000p-3f);
  v67 = (float)((float)(PSEUDO_UNFUSED(v64 * 0x1.2d1d6a0000000p+0f)) +
                (float)(v63 * -0x1.3990900000000p-4f)) +
        (float)(v65 * -0x1.9845cc0000000p-4f);
  v68 = (float)((float)(PSEUDO_UNFUSED(v64 * -0x1.8b57b80000000p-8f)) +
                (float)(v63 * 0x1.1080c20000000p-7f)) +
        (float)(v65 * 0x1.fed4aa0000000p-1f);
  if (*(_BYTE*)(a1 + 291) == 1) {
    v69 = (float)((float)(PSEUDO_UNFUSED(v67 * 0x1.59213c0000000p-1f)) +
                  (float)(v66 * 0x1.16c3200000000p-2f)) +
          (float)(v68 * 0x1.b7d3160000000p-5f);
    memcpy_plt_alt1((__int64)v126, a1, 0xC8u);
    v70 = nvidia_622350(v126, v69) / v69;
    memcpy_plt_alt1((__int64)v125, a1, 0xC8u);
    v71 = nvidia_622350(v125, v66);
    memcpy_plt_alt1((__int64)v124, a1, 0xC8u);
    v72 = nvidia_622350(v124, v67);
    memcpy_plt_alt1((__int64)v123, a1, 0xC8u);
    v73 = nvidia_622350(v123, v68);
    v74 = *(float*)(a1 + 292);
    v75 = v71 * (float)(0x1.0000000000000p+0f - v74);
    v76 = *(float*)(a1 + 272);
    v77 = v72 * (float)(0x1.0000000000000p+0f - v74);
    v78 = (float)(PSEUDO_UNFUSED((float)(v68 * v70) * v74)) +
          (float)(PSEUDO_UNFUSED(v73 * (float)(0x1.0000000000000p+0f - v74)));
    if ((float)((float)(PSEUDO_UNFUSED((float)(v66 * v70) * v74)) + v75) >=
        v76) {
      v79 = (float)(PSEUDO_UNFUSED((float)(v66 * v70) * v74)) + v75;
    }
    else {
      v79 = *(float*)(a1 + 272);
    }
    if ((float)((float)(PSEUDO_UNFUSED((float)(v67 * v70) * v74)) + v77) >=
        v76) {
      v80 = (float)(PSEUDO_UNFUSED((float)(v67 * v70) * v74)) + v77;
    }
    else {
      v80 = *(float*)(a1 + 272);
    }
    if (v78 < v76) {
      v78 = *(float*)(a1 + 272);
    }
  }
  else {
    memcpy_plt_alt1((__int64)v122, a1, 0xC8u);
    v79 = nvidia_622350(v122, v66);
    memcpy_plt_alt1((__int64)v121, a1, 0xC8u);
    v80 = nvidia_622350(v121, v67);
    memcpy_plt_alt1((__int64)v120, a1, 0xC8u);
    v78 = nvidia_622350(v120, v68);
    v76 = *(float*)(a1 + 272);
  }
  v81 = *(float*)(a1 + 276);
  v82 = v79 - v76;
  v83 = v81 - v76;
  v84 = v82 / (float)(v81 - v76);
  v85 = (float)(v78 - v76) / (float)(v81 - v76);
  v86 = (float)(v80 - v76) / (float)(v81 - v76);
  if (*(_BYTE*)(a1 + 289) == 1) {
    v87 = (float)((float)(PSEUDO_UNFUSED(v86 * 0x1.1270cc0000000p-3f)) +
                  (float)(v84 * 0x1.532d300000000p-1f)) +
          (float)(v85 * 0x1.3fdf540000000p-3f);
    v88 = (float)((float)(PSEUDO_UNFUSED(v86 * 0x1.59213c0000000p-1f)) +
                  (float)(v84 * 0x1.16c3200000000p-2f)) +
          (float)(v85 * 0x1.b7d3160000000p-5f);
    v89 = (float)((float)((float)(PSEUDO_UNFUSED(v86 * 0x1.0a1fbe0000000p-8f)) +
                          (float)(v84 * -0x1.6d57460000000p-8f)) +
                  (float)(v85 * 0x1.02a5940000000p+0f)) +
          (float)(v87 + v88);
    if (v89 == 0x0.0p+0f) {
      v89 = 0x1.b7cdfe0000000p-34f;
    }
    v90 = v87 / v89;
    v91 = v88 / v89;
    v92 = 0x0.0p+0f;
    if (!(v88 < 0x0.0p+0f)) {
      v92 = v88;
    }
    v93 = powf_plt(v92, *(float*)(a1 + 284));
    if (!(v91 < 0x1.b7cdfe0000000p-34f)) {
      v94 = v91;
    }
    else {
      v94 = 0x1.b7cdfe0000000p-34f;
    }
    v95 = (float)(v90 * v93) / v94;
    v96 = (float)((float)((float)(0x1.0000000000000p+0f - v90) - v91) * v93) /
          v94;
    v84 = (float)((float)(PSEUDO_UNFUSED(v93 * -0x1.4c99400000000p-2f)) +
                  (float)(v95 * 0x1.a41a1e0000000p+0f)) +
          (float)(v96 * -0x1.e432a40000000p-3f);
    v86 = (float)((float)(PSEUDO_UNFUSED(v93 * 0x1.9d86640000000p+0f)) +
                  (float)(v95 * -0x1.53cba60000000p-1f)) +
          (float)(v96 * 0x1.12893a0000000p-6f);
    v85 = (float)((float)(PSEUDO_UNFUSED(v93 * -0x1.0f76ec0000000p-7f)) +
                  (float)(v95 * 0x1.801a820000000p-7f)) +
          (float)(v96 * 0x1.fa0ee60000000p-1f);
  }
  if (*(_BYTE*)(a1 + 288) == 1) {
    v97 = v86 * 0x1.828b9c0000000p-5f;
    v98 = (float)(PSEUDO_UNFUSED(v86 * 0x1.828b9c0000000p-5f)) +
          (float)(v84 * 0x1.e5eaac0000000p-1f);
    v99 = (float)(PSEUDO_UNFUSED(v86 * 0x1.f451b00000000p-1f)) +
          (float)(v84 * 0x1.3836b20000000p-6f);
    v100 = v97 + (float)(v84 * 0x1.3836b20000000p-6f);
    v84 = v98 + (float)(v85 * 0x1.ec9a7c0000000p-9f);
    v86 = v99 + (float)(v85 * 0x1.ec9a7c0000000p-9f);
    v85 = v100 + (float)(v85 * 0x1.de15900000000p-1f);
  }
  v101 = (float)((float)(PSEUDO_UNFUSED(v86 * 0x1.1270cc0000000p-3f)) +
                 (float)(v84 * 0x1.532d300000000p-1f)) +
         (float)(v85 * 0x1.3fdf540000000p-3f);
  v102 = (float)((float)(PSEUDO_UNFUSED(v86 * 0x1.59213c0000000p-1f)) +
                 (float)(v84 * 0x1.16c3200000000p-2f)) +
         (float)(v85 * 0x1.b7d3160000000p-5f);
  v103 = (float)((float)(PSEUDO_UNFUSED(v86 * 0x1.0a1fbe0000000p-8f)) +
                 (float)(v84 * -0x1.6d57460000000p-8f)) +
         (float)(v85 * 0x1.02a5940000000p+0f);
  if (*(_BYTE*)(a1 + 290) == 1) {
    v104 = (float)(PSEUDO_UNFUSED(v102 * -0x1.90a3a60000000p-8f)) +
           (float)(v101 * 0x1.f9756c0000000p-1f);
    v105 = (float)(PSEUDO_UNFUSED(v102 * 0x1.0079e60000000p+0f)) +
           (float)(v101 * -0x1.f1f7540000000p-8f);
    v106 = (float)(PSEUDO_UNFUSED(v102 * -0x1.4df7da0000000p-8f)) +
           (float)(v101 * 0x1.92ba580000000p-9f);
    v107 = v104 + (float)(v103 * 0x1.0560fe0000000p-6f);
    v102 = v105 + (float)(v103 * 0x1.5d4ee60000000p-8f);
    v103 = v106 + (float)(v103 * 0x1.14e8fc0000000p+0f);
    v101 = v107;
  }
  v108 = (float)((float)(PSEUDO_UNFUSED(v102 * *(float*)(a1 + 204))) +
                 (float)(v101 * *(float*)(a1 + 200))) +
         (float)(v103 * *(float*)(a1 + 208));
  v109 = (float)((float)(PSEUDO_UNFUSED(v102 * *(float*)(a1 + 216))) +
                 (float)(v101 * *(float*)(a1 + 212))) +
         (float)(v103 * *(float*)(a1 + 220));
  v110 = (float)((float)(PSEUDO_UNFUSED(v102 * *(float*)(a1 + 228))) +
                 (float)(v101 * *(float*)(a1 + 224))) +
         (float)(v103 * *(float*)(a1 + 232));
  if (*(_DWORD*)(a1 + 280) == 1) {
    v111 = v76 + (float)(v108 * v83);
    v112 = v76 + (float)(v110 * v83);
    if (v111 < 0x0.0p+0f) {
      v111 = 0x0.0p+0f;
    }
    v113 = v111 / 0x1.3880000000000p+13f;
    if (!((float)(v76 + (float)(v109 * v83)) < 0x0.0p+0f)) {
      v114 = v76 + (float)(v109 * v83);
    }
    else {
      v114 = 0x0.0p+0f;
    }
    if (!(v112 < 0x0.0p+0f)) {
      v115 = v112;
    }
    else {
      v115 = 0x0.0p+0f;
    }
    v119 = v115;
    v116 = powf_plt(v113, 0x1.4640000000000p-3f);
    powf_plt(
        (float)((float)(v116 * 0x1.2da0000000000p+4f) + 0x1.ac00000000000p-1f) /
            (float)((float)(v116 * 0x1.2b00000000000p+4f) +
                    0x1.0000000000000p+0f),
        0x1.3b60000000000p+6f);
    v117 = powf_plt(v114 / 0x1.3880000000000p+13f, 0x1.4640000000000p-3f);
    powf_plt(
        (float)((float)(v117 * 0x1.2da0000000000p+4f) + 0x1.ac00000000000p-1f) /
            (float)((float)(v117 * 0x1.2b00000000000p+4f) +
                    0x1.0000000000000p+0f),
        0x1.3b60000000000p+6f);
    v118 = powf_plt(v119 / 0x1.3880000000000p+13f, 0x1.4640000000000p-3f);
    powf_plt(
        (float)((float)(v118 * 0x1.2da0000000000p+4f) + 0x1.ac00000000000p-1f) /
            (float)((float)(v118 * 0x1.2b00000000000p+4f) +
                    0x1.0000000000000p+0f),
        0x1.3b60000000000p+6f);
  }
}

__int64 nvidia_62a540(__int64 a1, __int64 a2, __int64 a3, __int64* a4)
{
  __int64 v4;
  _QWORD* v7;
  __int64 v8;
  __int64 (*v10)(__int64, __int64, __int64, __int64);
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 result;
  __int64 v26;
  __int64 v27;
  _QWORD v28[7];
  int v29;
  struct {
    int v30;
    char v31;
  } v30_;

  v4 = *(_QWORD*)(a1 + 24);
  v7 = (_QWORD*)NvOsAlloc_plt(1192);
  if (v7 == nullptr) {
    return 6;
  }
  v8 = (__int64)v7;
  unplaced_4_629070(v7, a2);
  *(_QWORD*)v8 = nn_os_detail_GetUserWaitNativeHandle_ptr;
  memset_plt((void*)(v8 + 24), nullptr, 1104);
  v10 = *(__int64 (**)(__int64, __int64, __int64, __int64))(v4 + 24);
  *(_QWORD*)(v8 + 1128) = v4;
  *(_QWORD*)(v8 + 1136) = 0;
  *(_QWORD*)(v8 + 1144) = 0;
  *(_QWORD*)(v8 + 1152) = 0;
  *(_QWORD*)(v8 + 1160) = 0;
  *(_QWORD*)(v8 + 1168) = 0;
  *(_QWORD*)(v8 + 1176) = 0;
  *(_QWORD*)(v8 + 1184) = 0;
  v30_.v30 = 16843009;
  v30_.v31 = 1;
  nvidia_629c90(v8);
  v11 = nvidia_644c60();
  v12 = v10(v4, v11, v8 + 624, v8 + 1136);
  if (v12 == 0) {
    v12 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v8 + 1136) + 16LL))(
        *(_QWORD*)(v8 + 1136));
    if (v12 == 0) {
      v13 = *(_QWORD*)(v8 + 1128);
      *(_QWORD*)(v8 + 24) = "dummy";
      *(_WORD*)(v8 + 61) = 257;
      *(_BYTE*)(v8 + 57) = 1;
      *(_BYTE*)(v8 + 127) = 1;
      v14 = *(_DWORD*)(v13 + 16);
      *(_DWORD*)(v8 + 232) = v14 & 0xFFFFFFF0;
      *(_DWORD*)(v8 + 236) = v14 & 0xF;
      *(_QWORD*)(v8 + 272) = *(_QWORD*)(v13 + 48);
      *(_DWORD*)(v8 + 244) = *(unsigned __int8*)(v13 + 169) ^ 1;
      v15 = *(_DWORD*)(v13 + 124);
      if (v15 == 0) {
        v15 = (*(_DWORD*)(v13 + 16) << 23) & 0x80000000 |
              ((unsigned __int8)*(_DWORD*)(v13 + 16) << 20) | 0x3D7;
      }
      *(_DWORD*)(v8 + 488) = v15;
      v29 = 0;
      v27 = 0;
      memset(v28, 0, sizeof(v28));
      nvidia_627cd0((const char**)v13, 0, (__int64)&v29, (__int64)v28, 0,
                    (__int64)&v27, v8 + 24);
      v16 = *(_QWORD*)(v8 + 1128);
      *(_QWORD*)(v8 + 280) = 0;
      v12 = nvidia_6280e0((__int64*)(v8 + 912),
                          *(unsigned int*)(*(_QWORD*)(v16 + 48) + 8LL));
      if (v12 == 0) {
        *(_QWORD*)(v8 + 288) = *(_QWORD*)(v8 + 912);
        v12 = nvidia_6280e0(
            (__int64*)(v8 + 936),
            *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v8 + 1128) + 48LL) + 8LL));
        if (v12 == 0) {
          *(_QWORD*)(v8 + 296) = *(_QWORD*)(v8 + 936);
          v12 = nvidia_6280e0(
              (__int64*)(v8 + 960),
              *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v8 + 1128) + 48LL) + 8LL));
          if (v12 == 0) {
            *(_QWORD*)(v8 + 304) = *(_QWORD*)(v8 + 960);
            *(_QWORD*)(v8 + 312) = 0;
            v12 = nvidia_6280e0(
                (__int64*)(v8 + 984),
                *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v8 + 1128) + 48LL) +
                                 4LL));
            if (v12 == 0) {
              *(_QWORD*)(v8 + 320) = *(_QWORD*)(v8 + 984);
              v12 = nvidia_6280e0(
                  (__int64*)(v8 + 1008),
                  *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v8 + 1128) + 48LL) +
                                   4LL));
              if (v12 == 0) {
                *(_QWORD*)(v8 + 328) = *(_QWORD*)(v8 + 1008);
                v12 = nvidia_6280e0(
                    (__int64*)(v8 + 1032),
                    *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v8 + 1128) + 48LL) +
                                     4LL));
                if (v12 == 0) {
                  *(_QWORD*)(v8 + 336) = *(_QWORD*)(v8 + 1032);
                  v12 = nvidia_6280e0(
                      (__int64*)(v8 + 1056),
                      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v8 + 1128) +
                                                  48LL) +
                                       4LL));
                  if (v12 == 0) {
                    v17 = *(_QWORD*)(v8 + 1136);
                    *(_QWORD*)(v8 + 344) = *(_QWORD*)(v8 + 1056);
                    v18 = *(_QWORD*)(v8 + 1128);
                    v19 = *(_DWORD*)(v18 + 92);
                    *(_DWORD*)(v8 + 564) = *(_DWORD*)(v18 + 96);
                    v20 = *(_DWORD*)(v18 + 100);
                    v21 = *(_QWORD*)(v18 + 128);
                    *(_DWORD*)(v8 + 568) = v19;
                    *(_QWORD*)(v8 + 776) = v21;
                    *(_DWORD*)(v8 + 572) = v20;
                    *(_QWORD*)(v8 + 376) = 0x1000000001000LL;
                    *(_QWORD*)(v8 + 384) = &SdkData_c76ebc;
                    *(_QWORD*)(v8 + 392) = 2;
                    *(_DWORD*)(v8 + 408) = (*(__int64 (**)(__int64, __int64))(
                        *(_QWORD*)v17 + 96LL))(v17, 0x10000);
                    nvidia_626c20(*(_QWORD*)(v8 + 1128), 0, v8 + 624);
                    v22 = *(_QWORD*)(v8 + 1128);
                    *(_DWORD*)(v8 + 580) = *(_DWORD*)(v22 + 112);
                    v12 = nvidia_626ca0(v22, &v30_.v30, (__int64*)(v8 + 1104));
                    if (v12 == 0) {
                      v23 = *(_QWORD*)(v8 + 1128);
                      *(_QWORD*)(v8 + 672) = *(_QWORD*)(v8 + 1104);
                      *(_QWORD*)(v8 + 680) = *(_QWORD*)(v8 + 1112);
                      nvidia_627100(v23, (__int64*)(v8 + 1104),
                                    (_DWORD*)(v8 + 24));
                      v12 = nvidia_627b10(*(_QWORD*)(v8 + 1128),
                                          (__int64)&v30_.v30, v8 + 24,
                                          (_QWORD*)(v8 + 1144));
                      if (v12 == 0) {
                        v12 = (*(__int64 (**)(_QWORD, __int64))(
                            **(_QWORD**)(v8 + 1136) + 136LL))(
                            *(_QWORD*)(v8 + 1136), v8 + 1080);
                        if (v12 == 0) {
                          *(_QWORD*)(v8 + 704) = *(_QWORD*)(v8 + 1080);
                          *(_QWORD*)(v8 + 712) = *(_QWORD*)(v8 + 1088);
                          v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 56LL))(
                              v8);
                          result = (*(__int64 (**)(__int64, __int64))(
                              *(_QWORD*)v26 + 328LL))(v26, v8 + 832);
                          v24 = result;
                          if ((_DWORD)result != 0) {
                            goto LABEL_17;
                          }
                          *a4 = v8;
                          return result;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v24 = v12;
LABEL_17:
  (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  NvOsFree_plt(v8);
  return v24;
}

__int64 nvidia_62ea10(__int64 a1, __int64 a2, char a3)
{
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int v14;
  int v15;

  v6 = SdkRoutine_62d0e0(*(_QWORD*)(a1 + 8));
  {
    v7 = *(unsigned int*)(a1 + 24);
    __asm__ volatile("" ::"r"(v7));
  }
  LODWORD(v8) = 11;
  if (((unsigned int)v7 & ((int)v7 - 1)) == 0) {
    if ((a3 & 1) != 0) {
      v9 = (v7 - 1) & a2;
      if (v9 != 0) {
        LODWORD(v8) = 11;
      }
      else {
        LODWORD(v8) = 0;
      }
      if ((_DWORD)v7 != 0 && (v10 = *(_QWORD*)(a1 + 32)) != 0 &&
          (v11 = v10 - 1, (sizeof((v7) * (v11)) > 4
                               ? ((unsigned __int128)(unsigned long long)(v7) *
                                  (unsigned long long)(v11)) >>
                                         64 ==
                                     0
                               : ((unsigned long long)(unsigned int)(v7) *
                                  (unsigned int)(v11)) >>
                                         32 ==
                                     0))) {
        if (__CFADD__(a2, v7 * v11 + v7 - 1) && v9 == 0) {
          LODWORD(v8) = 17;
        }
      }
      else if (v9 != 0) {
        LODWORD(v8) = 11;
      }
      else {
        LODWORD(v8) = 17;
      }
    }
    else if ((_DWORD)v7 != 0) {
      {
        v12 = *(_QWORD*)(a1 + 32);
        __asm__ volatile("" ::"r"(v12));
      }
      if (v12 != 0) {
        {
          v8 = (*(unsigned int*)(a1 + 24) *
                (unsigned __int128)(unsigned __int64)(v12 - 1)) >>
               64;
          __asm__ volatile("" ::"r"(v8));
        }
        if (v8 != 0) {
          LODWORD(v8) = 17;
        }
      }
      else {
        LODWORD(v8) = 17;
      }
    }
    else {
      LODWORD(v8) = 17;
    }
  }
  if ((_DWORD)v8 != 0 | ((*(_DWORD*)(*(_QWORD*)(a1 + 8) + 40LL) |
                          *(_DWORD*)(*(_QWORD*)(a1 + 8) + 44LL) | 0x1000) &
                         (unsigned int)v7) == (_DWORD)v7) {
    v14 = v8;
  }
  else {
    v14 = 11;
  }
  {
    v15 = *(_DWORD*)(a1 + 20);
    __asm__ volatile("" ::"r"(v15));
  }
  if (v15 == 0) {
    return v14;
  }
  if (v15 == 1) {
    if (((unsigned __int8)(((*(_BYTE*)(v6 + 360) & 4) == 0) | *SdkData_e899e8) &
         (v14 == 0)) != 0) {
      return 2;
    }
    return v14;
  }
  if (v14 == 0) {
    return 11;
  }
  return v14;
}

__int64 nvidia_637e60(__int64 a1, int* a2, __int64 a3, unsigned int a4)
{
  __int64 v8;
  __int64 result;
  int v10;
  __int64* i;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  struct {
    unsigned __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    _QWORD v42[2];
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    unsigned int v65;
    int v66;
  } v34_;

  v8 = a4;
  if (*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1) + 776) <
      (unsigned __int64)a4) {
    return 11;
  }
  {
    v10 = *a2;
    __asm__ volatile("" ::"r"(v10));
  }
  if (*a2 == 1) {
    if ((*(_BYTE*)(a1 + 363) & 0x40) == 0) {
      v34_.v63 = 0;
      v34_.v64 = 0;
      v34_.v61 = 0;
      v34_.v62 = 0;
      v34_.v59 = 0;
      v34_.v60 = 0;
      v34_.v57 = 0;
      v34_.v58 = 0;
      v34_.v55 = 0;
      v34_.v56 = 0;
      v34_.v53 = 0;
      v34_.v54 = 0;
      v34_.v51 = 0;
      v34_.v52 = 0;
      v34_.v49 = 0;
      v34_.v50 = 0;
      v34_.v47 = 0;
      v34_.v48 = 0;
      v34_.v45 = 0;
      v34_.v46 = 0;
      v34_.v43 = 0;
      v34_.v44 = 0;
      v34_.v42[0] = 0;
      v34_.v42[1] = 0;
      v34_.v40 = 0;
      v34_.v41 = 0;
      v34_.v38 = 0;
      v34_.v39 = 0;
      v34_.v36 = 0;
      v34_.v37 = 0;
      v34_.v34 = 0;
      v34_.v35 = 0;
      v34_.v66 = 0;
      if (a4 <= 0x10) {
        goto LABEL_22;
      }
      return 11;
    }
    if ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 288) + 72LL))(
            *(_QWORD*)(a1 + 288)) != 0) {
      if (a4 == 0) {
        return 0;
      }
      for (i = (__int64*)(a3 + 8);; i += 2) {
        v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
        v13 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v12 + 88LL))(
            v12, *(_QWORD*)(a1 + 1928));
        if ((gettimeofday_plt(&v34_.v34, 0) & 0x80000000) != 0) {
          break;
        }
        if (!(sizeof((v34_.v34) * (0xF4240u)) > 4
                  ? ((unsigned __int128)(unsigned long long)(v34_.v34) *
                     (unsigned long long)(0xF4240u)) >>
                            64 ==
                        0
                  : ((unsigned long long)(unsigned int)(v34_.v34) *
                     (unsigned int)(0xF4240u)) >>
                            32 ==
                        0) ||
            __CFADD__(1000000 * v34_.v34, v34_.v35)) {
          return 17;
        }
        *(i - 1) = 1000000 * v34_.v34 + v34_.v35;
        *i = v13;
        --v8;
        result = 0;
        if (v8 == 0) {
          return result;
        }
      }
      return 8;
    }
    {
      v10 = *a2;
      __asm__ volatile("" ::"r"(v10));
    }
  }
  v34_.v63 = 0;
  v34_.v64 = 0;
  v34_.v61 = 0;
  v34_.v62 = 0;
  v34_.v59 = 0;
  v34_.v60 = 0;
  v34_.v57 = 0;
  v34_.v58 = 0;
  v34_.v55 = 0;
  v34_.v56 = 0;
  v34_.v53 = 0;
  v34_.v54 = 0;
  v34_.v51 = 0;
  v34_.v52 = 0;
  v34_.v49 = 0;
  v34_.v50 = 0;
  v34_.v47 = 0;
  v34_.v48 = 0;
  v34_.v45 = 0;
  v34_.v46 = 0;
  v34_.v43 = 0;
  v34_.v44 = 0;
  v34_.v42[0] = 0;
  v34_.v42[1] = 0;
  v34_.v40 = 0;
  v34_.v41 = 0;
  v34_.v38 = 0;
  v34_.v39 = 0;
  v34_.v36 = 0;
  v34_.v37 = 0;
  v34_.v34 = 0;
  v34_.v35 = 0;
  if (v10 != 0) {
    if (v10 == 1) {
      v34_.v66 = 0;
      if (a4 <= 0x10) {
        goto LABEL_22;
      }
    }
    return 11;
  }
  v34_.v66 = 1;
  if (a4 > 0x10) {
    return 11;
  }
LABEL_22:
  {
    v14 = *(_QWORD*)(a1 + 928);
    __asm__ volatile("" ::"r"(v14));
  }
  v34_.v65 = a4;
  if (*(_DWORD*)(v14 + 52) < 0x1Du) {
    result = 2;
  }
  else {
    result = nvidia_644da0(*(_DWORD*)(a1 + 920), -1056422115,
                           (__int64)&v34_.v34, 264);
    if (v34_.v65 != a4) {
      if ((_DWORD)result != 0) {
        return (unsigned int)result;
      }
      else {
        return 15;
      }
    }
  }
  if (a4 != 0) {
    v15 = v8 & 7;
    if (a4 >= 8) {
      v17 = (_QWORD*)(a3 + 64);
      v18 = 0;
      v19 = v34_.v42;
      do {
        {
          v20 = *(v19 - 7);
          __asm__ volatile("" ::"r"(v20));
        }
        v18 -= 8;
        *(v17 - 8) = *(v19 - 8);
        *(v17 - 7) = v20;
        {
          v21 = *(v19 - 5);
          __asm__ volatile("" ::"r"(v21));
        }
        *(v17 - 6) = *(v19 - 6);
        *(v17 - 5) = v21;
        {
          v22 = *(v19 - 3);
          __asm__ volatile("" ::"r"(v22));
        }
        *(v17 - 4) = *(v19 - 4);
        *(v17 - 3) = v22;
        {
          v23 = *(v19 - 1);
          __asm__ volatile("" ::"r"(v23));
        }
        *(v17 - 2) = *(v19 - 2);
        *(v17 - 1) = v23;
        {
          v24 = v19[1];
          __asm__ volatile("" ::"r"(v24));
        }
        *v17 = *v19;
        v17[1] = v24;
        {
          v25 = v19[3];
          __asm__ volatile("" ::"r"(v25));
        }
        v17[2] = v19[2];
        v17[3] = v25;
        {
          v26 = v19[5];
          __asm__ volatile("" ::"r"(v26));
        }
        v17[4] = v19[4];
        v17[5] = v26;
        {
          v27 = v19[6];
          __asm__ volatile("" ::"r"(v27));
        }
        {
          v28 = v19[7];
          __asm__ volatile("" ::"r"(v28));
        }
        v19 += 16;
        v17[6] = v27;
        v17[7] = v28;
        v17 += 16;
      } while (-(v8 & 0x18) != v18);
      v16 = -v18;
    }
    else {
      v16 = 0;
    }
    if ((v8 & 7) != 0) {
      v29 = (16 * v16) | 8;
      v30 = (_QWORD*)(a3 + v29);
      v31 = (__int64*)((char*)&v34_.v34 + v29);
      do {
        {
          v32 = *(v31 - 1);
          __asm__ volatile("" ::"r"(v32));
        }
        {
          v33 = *v31;
          __asm__ volatile("" ::"r"(v33));
        }
        v31 += 2;
        --v15;
        *(v30 - 1) = v32;
        *v30 = v33;
        v30 += 2;
      } while (v15 != 0);
    }
  }
  return result;
}

#pragma GCC visibility pop
