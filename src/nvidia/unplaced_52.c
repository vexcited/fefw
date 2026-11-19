#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_6165a0(_QWORD, _QWORD);
__int64 SdkRoutine_65f8b0();
__int64 graphics_616510(_QWORD*, __int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nvidia_617a80(_QWORD*);
__int64 nvidia_6280e0(__int64*, unsigned __int64);
__int64 nvidia_644cf0(__int64, __int64, __int64*, __int64, __int64*,
                      unsigned __int64);
extern _UNKNOWN* SdkData_1040968;
extern _UNKNOWN* SdkData_e89bd8;
extern _UNKNOWN SdkData_c77b90;
__int64 nvidia_620ae0(__int64 a1, unsigned int a2, __int64 a3);
__int64 nvidia_62fe00(int* a1, unsigned int* a2, __int64 a3, __int64 a4);
__int64 (*nvidia_64adc0(_OWORD* a1))(__int64, __int64);
__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_620ae0(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD* v4;
  __int64 v7;
  _QWORD* v8;
  char v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  char v19;
  __int64 v20;
  int v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a2 == 0) {
    goto LABEL_18;
  }
  if (a2 > 0x3E8) {
    LODWORD(v4) = 11;
    return (unsigned int)v4;
  }
  v7 = 4LL * a2;
  v8 = (_QWORD*)nvidia_617a80((_QWORD*)(a1 + 8)),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = graphics_616510(v8, 32LL * a2),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = v10;
  if ((v9 & 1) == 0) {
    if ((_DWORD)v10 != 0) {
      return (unsigned int)v4;
    }
    v13 = *(unsigned int*)(a1 + 24);
    if ((_DWORD)v13 != 0) {
      v4 = *(_QWORD**)(a1 + 16);
      v14 = &v4[4 * v13];
      goto LABEL_16;
    }
  LABEL_18:
    LODWORD(v4) = 0;
    return (unsigned int)v4;
  }
  v11 = a2 & 7;
  *(_QWORD*)(a1 + 16) = v10;
  *(_DWORD*)(a1 + 24) = a2;
  if (a2 >= 8) {
    v15 = 0;
    v12 = 0;
    do {
      v16 = &v10[v15 / 8];
      v12 += 8;
      v15 += 256LL;
      *v16 = 0;
      v16[1] = 0;
      v16[2] = 0;
      v16[3] = 0;
      v16[4] = 0;
      v16[5] = 0;
      v16[6] = 0;
      v16[7] = 0;
      v16[8] = 0;
      v16[9] = 0;
      v16[10] = 0;
      v16[11] = 0;
      v16[12] = 0;
      v16[13] = 0;
      v16[14] = 0;
      v16[15] = 0;
      v16[16] = 0;
      v16[17] = 0;
      v16[18] = 0;
      v16[19] = 0;
      v16[20] = 0;
      v16[21] = 0;
      v16[22] = 0;
      v16[23] = 0;
      v16[24] = 0;
      v16[25] = 0;
      v16[26] = 0;
      v16[27] = 0;
      v16[28] = 0;
      v16[29] = 0;
      v16[30] = 0;
      v16[31] = 0;
    } while (((32 * (_WORD)a2) & 0x7F00) != v15);
  }
  else {
    v12 = 0;
  }
  if ((a2 & 7) != 0) {
    v17 = &v10[4 * v12 + 2];
    do {
      *(v17 - 2) = 0;
      *(v17 - 1) = 0;
      *v17 = 0;
      v17[1] = 0;
      v17 += 4;
      --v11;
    } while (v11 != 0);
  }
  v14 = &v10[v7];
LABEL_16:
  while (1) {
    v18 = (_QWORD*)nvidia_617a80((_QWORD*)a1),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19 = graphics_616510(v18, a3),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v21 = v20;
    if ((v19 & 1) == 0) {
      break;
    }
    *v4 = 0;
    v4[1] = 0;
    v4[2] = v20;
    v4[3] = a3;
    v4 += 4;
    if (v4 == v14) {
      goto LABEL_18;
    }
  }
  v23 = *(_QWORD*)(a1 + 16);
  v24 = *(unsigned int*)(a1 + 24);
  if ((_DWORD)v24 != 0) {
    v25 = 32 * v24;
    v26 = (_QWORD*)(v23 + 16);
    do {
      if (*v26 != 0) {
        v27 = nvidia_617a80((_QWORD*)a1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        SdkRoutine_6165a0(v27, *v26),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v25 -= 32;
      v26 += 4;
    } while (v25 != 0);
    v23 = *(_QWORD*)(a1 + 16);
  }
  if (v23 != 0) {
    v28 = nvidia_617a80((_QWORD*)(a1 + 8)),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    SdkRoutine_6165a0(v28, *(_QWORD*)(a1 + 16)),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(a1 + 16) = 0;
    *(_DWORD*)(a1 + 24) = 0;
  }
  LODWORD(v4) = v21;
  return (unsigned int)v4;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

nvidia_62fe00(int* a1, unsigned int* a2, __int64 a3, __int64 a4)
{
  __int64 result;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _DWORD* v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  unsigned int* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  unsigned int* v42;
  unsigned int v43;
  struct {
    char gap0_[8];
    _QWORD v44[3];
    _DWORD v45[4];
    _BYTE v46[112];
    __int64 v47[4];
  } f_;
  __int64 v48[2];

  result = nvidia_6280e0((__int64*)(a3 + 304),
                         *(unsigned int*)(*(_QWORD*)(a4 + 248) + 8LL));
  *((_BYTE*)a1 + 4) = 1;
  v9 = *a1;
  if ((_DWORD)result != 0) {
  LABEL_54:
    if (v9 == 0) {
      *a1 = result;
    }
    return result;
  }
  if (v9 != 0) {
    return result;
  }
  if (*(_DWORD*)(a3 + 68) > 5u) {
    v10 = *(unsigned int*)(*(_QWORD*)(a4 + 248) + 8LL);
    if ((unsigned int)v10 > 0x20) {
      *a1 = 17;
      *((_BYTE*)a1 + 4) = 1;
      return result;
    }
    if ((_DWORD)v10 != 0) {
      v11 = v10 & 7;
      if ((unsigned int)v10 >= 8) {
        v24 = 0;
        v25 = f_.v46;
        do {
          *(v25 - 2) = 0;
          *(v25 - 1) = 0;
          *v25 = 0;
          v25[1] = 0;
          v25 += 4;
          v24 -= 8;
        } while (-(v10 & 0x38) != v24);
        v12 = -v24;
      }
      else {
        v12 = 0;
      }
      if ((v10 & 7) != 0) {
        v26 = &f_.v45[v12];
        do {
          *(_DWORD*)v26++ = 0;
          --v11;
        } while (v11 != 0);
      }
    }
    v27 = 4 * v10;
    f_.v44[1] = 0;
    f_.v44[2] = 0;
    v48[0] = (__int64)f_.v44;
    v48[1] = 24;
    f_.v47[0] = (__int64)f_.v44;
    f_.v47[1] = 24;
    f_.v44[0] = (unsigned int)v27;
    *((_BYTE*)a1 + 4) = 1;
    f_.v47[2] = (__int64)f_.v45;
    f_.v47[3] = v27;
    if (*(_DWORD*)(*((_QWORD*)a2 + 1) + 52LL) <= 5u) {
      *((_BYTE*)a1 + 4) = 1;
      *a1 = 2;
      return 2;
    }
    result = nvidia_644cf0(*a2, 3222816518LL, v48, 1, f_.v47, 2u);
    v9 = *a1;
    *((_BYTE*)a1 + 4) = 1;
    if ((_DWORD)result == 0) {
      if (v9 == 0) {
        v28 = *(_DWORD*)(*(_QWORD*)(a4 + 248) + 8LL);
        if (v28 != 0) {
          v29 = *(_QWORD*)(a3 + 304);
          v30 = v28 & 7;
          if (v28 >= 8) {
            v32 = (_QWORD*)(v29 + 32);
            v33 = 0;
            v34 = -(__int64)(v28 & 0xFFFFFFF8);
            v35 = (unsigned int*)f_.v46;
            do {
              v36 = *(v35 - 3);
              v33 -= 8;
              *(v32 - 4) = *(v35 - 4);
              *(v32 - 3) = v36;
              v37 = *(v35 - 1);
              *(v32 - 2) = *(v35 - 2);
              *(v32 - 1) = v37;
              v38 = v35[1];
              *v32 = *v35;
              v32[1] = v38;
              v39 = v35[2];
              v40 = v35[3];
              v35 += 8;
              v32[2] = v39;
              v32[3] = v40;
              v32 += 8;
            } while (v34 != v33);
            v31 = -v33;
          }
          else {
            v31 = 0;
          }
          if (v30 != 0) {
            v41 = (_QWORD*)(v29 + 8 * v31);
            v42 = &f_.v45[v31];
            do {
              v43 = *v42++;
              --v30;
              *v41++ = v43;
            } while (v30 != 0);
          }
        }
      }
      return result;
    }
    goto LABEL_54;
  }
  v13 = *(_QWORD*)(a4 + 248);
  v14 = *(_DWORD*)(v13 + 8);
  if (v14 != 0) {
    v15 = *(_QWORD*)(a3 + 304);
    if (v14 == 1) {
      v16 = 0;
    }
    else {
      v20 = (__int64*)(v15 + 8);
      v16 = 0;
      do {
        v21 = 1LL << v16;
        v22 = 0;
        if (v16 >= 0x40) {
          v21 = 0;
        }
        if ((v21 & ~*(_QWORD*)(a4 + 256)) == 0) {
          if ((unsigned int)(*(int*)(v13 + 44) - 1) >= 0x40) {
            v22 = -1;
          }
          else {
            v22 = (1LL << (*(_BYTE*)(v13 + 44) - 1)) |
                  ~(-1LL << (*(_BYTE*)(v13 + 44) - 1));
          }
        }
        *(v20 - 1) = v22;
        result = 2LL << v16;
        v23 = 0;
        if (v16 >= 0x40) {
          result = 0;
        }
        if ((result & ~*(_QWORD*)(a4 + 256)) == 0) {
          result = 1LL << (*(_BYTE*)(v13 + 44) - 1);
          v23 = result | ~(-1LL << (*(_BYTE*)(v13 + 44) - 1));
          if ((unsigned int)(*(int*)(v13 + 44) - 1) >= 0x40) {
            v23 = -1;
          }
        }
        *v20 = v23;
        v20 += 2;
        v16 += 2LL;
      } while ((v14 & 0xFFFFFFFE) != v16);
    }
    if ((v14 & 1) != 0) {
      v17 = 0;
      v18 = 1LL << v16;
      if (v16 >= 0x40) {
        v18 = 0;
      }
      if ((v18 & ~*(_QWORD*)(a4 + 256)) == 0) {
        v19 = *(int*)(v13 + 44) - 1;
        v17 = (1LL << v19) | ~(-1LL << v19);
        if (v19 >= 0x40) {
          v17 = -1;
        }
      }
      *(_QWORD*)(v15 + 8 * v16) = v17;
    }
  }
  return result;
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64 (
    *nvidia_64adc0(_OWORD* a1))(__int64, __int64)
{
  __int64 (*v2)(__int64, __int64);
  __int64 (*result)(__int64, __int64);
  __int64 v4;

  v2 = (__int64 (*)(__int64, __int64))SdkData_1040968;
  a1[1] = (__typeof__(a1[1])){0};
  a1[2] = (__typeof__(a1[2])){0};
  a1[3] = (__typeof__(a1[3])){0};
  a1[4] = (__typeof__(a1[4])){0};
  *a1 = (__typeof__(*a1)){0};
  a1[5] = (__typeof__(a1[5])){0};
  a1[6] = (__typeof__(a1[6])){0};
  a1[7] = (__typeof__(a1[7])){0};
  a1[8] = (__typeof__(a1[8])){0};
  a1[9] = (__typeof__(a1[9])){0};
  a1[10] = (__typeof__(a1[10])){0};
  a1[11] = (__typeof__(a1[11])){0};
  a1[12] = (__typeof__(a1[12])){0};
  a1[13] = (__typeof__(a1[13])){0};
  a1[14] = (__typeof__(a1[14])){0};
  a1[15] = (__typeof__(a1[15])){0};
  a1[16] = (__typeof__(a1[16])){0};
  a1[17] = (__typeof__(a1[17])){0};
  a1[18] = (__typeof__(a1[18])){0};
  a1[19] = (__typeof__(a1[19])){0};
  a1[20] = (__typeof__(a1[20])){0};
  a1[21] = (__typeof__(a1[21])){0};
  a1[22] = (__typeof__(a1[22])){0};
  a1[23] = (__typeof__(a1[23])){0};
  a1[24] = (__typeof__(a1[24])){0};
  a1[25] = (__typeof__(a1[25])){0};
  a1[26] = (__typeof__(a1[26])){0};
  a1[27] = (__typeof__(a1[27])){0};
  a1[28] = (__typeof__(a1[28])){0};
  if (v2 == nullptr) {
    result = (__int64 (*)(__int64, __int64))SdkRoutine_65f8b0();
    if (result != nullptr) {
      result =
          (__int64 (*)(__int64, __int64))(*(__int64 (**)(__int64, __int64))(
              (char*)((_UNKNOWN*)0xD8LL) + (_QWORD)SdkData_e89bd8))(
              (__int64)result, (__int64)"cuGetExportTable");
      v2 = result;
      SdkData_1040968 = result;
      if (result == nullptr) {
        return result;
      }
    }
    else {
      v2 = (__int64 (*)(__int64, __int64))SdkData_1040968;
      if (SdkData_1040968 == nullptr) {
        return result;
      }
    }
  }
  result =
      (__int64 (*)(__int64, __int64))v2((__int64)&v4, (__int64)&SdkData_c77b90);
  if ((_DWORD)result == 0) {
    return (__int64 (*)(__int64, __int64))memcpy_plt((__int64)a1, v4, 0x1D0u);
  }
  return result;
}

#pragma GCC visibility pop
