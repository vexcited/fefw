#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* CudaDriverRoutine_e5c70(__int64* result);
__int64 CudaDriverRoutine_104cd0(__int64, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_12a920(__int64 result, unsigned int, unsigned __int64,
                                 char, char);
__int64 CudaDriverRoutine_12ae20(_QWORD*, unsigned int, __int64, __int64);
__int64 CudaDriverRoutine_12c3a0(unsigned __int64, __int64, __int64, __int64,
                                 char);
__int64 CudaDriverRoutine_12cbc0(_QWORD*, __int64, unsigned int);
__int64 CudaDriverRoutine_12e2e0();
__int64 CudaDriverRoutine_1a4510(__int64, __int64, __int64);
__int64 CudaDriverRoutine_1e86b0(__int64, char);
__int64 CudaDriverRoutine_1e86d0(__int64, char);
__int64 CudaDriverRoutine_6cac0(unsigned int, unsigned int, unsigned int,
                                unsigned int, unsigned int);
__int64 CudaDriverRoutine_98190(__int64, unsigned int);
__int64 CudaDriverRoutine_e5bd0(__int64);
__int64 CudaDriverRoutine_ee160(__int64, __int64, _QWORD*, char, unsigned int);
__int64 CudaDriverStub_107f90(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_108070(_QWORD);
__int64 CudaDriverStub_124f70(_QWORD, _QWORD);
__int64 CudaDriverStub_12db70(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1a0ee0(_QWORD, _QWORD);
__int64 CudaDriverStub_1a4c70(_QWORD, _QWORD);
__int64 CudaDriverStub_57450(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_f0f50(_QWORD);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_helpers_1db920(__int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
unsigned __int8 CudaDriverRoutine_9aa40(__int64);
unsigned __int8 CudaDriverRoutine_e5960(__int64);
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN CudaDriverData_14347a8;
extern __int64 CudaDriverData_1423000;
extern __int64 CudaDriverData_1423370;
extern int CudaDriverData_1434ac0;
extern unsigned int CudaDriverData_1133f78[37];
__int64 nvidia_71340(unsigned int a1, unsigned int a2, unsigned int a3,
                     _DWORD* a4);
__int64 nvidia_71840(unsigned int a1, unsigned int a2, unsigned int a3,
                     __int64 a4, unsigned int a5);
__int64 nvidia_8ea30(__int64 a1);
__int64 nvidia_8eb90(__int64 a1);
__int64 nvidia_e5a00(__int64* a1, _QWORD* a2);
__int64 nvidia_107fa0(__int64 a1, unsigned __int64 a2);
__int64 nvidia_12b580(_QWORD* a1, __int64 a2, unsigned int a3);

__int64 nvidia_71340(unsigned int a1, unsigned int a2, unsigned int a3,
                     _DWORD* a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a4 == nullptr) {
    return 4;
  }
  result = CudaDriverRoutine_6cac0(0x4FFu, a1, a2, a3, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
    if ((_DWORD)result == 0) {
      v9 = *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8LL * a1);
      v10 = CudaDriverStub_1a0ee0(
          v9, *(_QWORD*)(v9 + 91280LL * a2 + 1424LL * a3 + 1248));
      if (v10 != 0) {
        v11 = *(_QWORD*)(v10 + 8);
        result = 0;
        *(_DWORD*)a4 =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 72) + 16LL) + 32LL);
      }
      else {
        return 21;
      }
    }
  }
  return result;
}

__int64 nvidia_71840(unsigned int a1, unsigned int a2, unsigned int a3,
                     __int64 a4, unsigned int a5)
{
  unsigned int v10;
  unsigned int v11;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  int v17;

  if (a4 == 0) {
    return 4;
  }
  v10 = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
  if (v10 != 0) {
    return v10;
  }
  v10 = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
  if (v10 != 0) {
    return v10;
  }
  else {
    v13 = *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8LL * a1);
    v14 = CudaDriverStub_1a0ee0(
        v13, *(_QWORD*)(v13 + 91280LL * a2 + 1424LL * a3 + 1248));
    if (v14 != 0) {
      if (a5 != 0) {
        v15 = (_QWORD*)(a4 + 8);
        v16 = a5;
        while (1) {
          while (1) {
            v17 = *((_DWORD*)v15 - 2);
            if (v17 != 1) {
              break;
            }
            *v15 =
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 8) + 72LL) +
                                      16LL) +
                           32LL);
            v15 += 2;
            --v16;
            v11 = 0;
            if (v16 == 0) {
              return v11;
            }
          }
          if (v17 != 0) {
            break;
          }
          *v15 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 8) +
                                                           72LL) +
                                                16LL) +
                                     84LL);
          v15 += 2;
          --v16;
          v11 = 0;
          if (v16 == 0) {
            return v11;
          }
        }
        return 25;
      }
      else {
        return 0;
      }
    }
    else {
      return 21;
    }
  }
}

__int64 nvidia_8ea30(__int64 a1)
{
  unsigned int v2;
  _DWORD v4[523];

  memset_plt((__int64)v4, 0, 0x80Cu);
  v2 = 304;
  if ((unsigned int)CudaDriverStub_12db70(a1) == 0) {
    if ((unsigned int)CudaDriverStub_12db70(a1) != 0) {
      return 304;
    }
    else {
      return v4[521];
    }
  }
  return v2;
}

__int64 nvidia_8eb90(__int64 a1)
{
  unsigned int v2;
  _DWORD v4[523];

  memset_plt((__int64)v4, 0, 0x80Cu);
  v2 = 304;
  if ((unsigned int)CudaDriverStub_12db70(a1) == 0) {
    if ((unsigned int)CudaDriverStub_12db70(a1) != 0) {
      return 304;
    }
    else {
      return v4[521];
    }
  }
  return v2;
}

__int64 nvidia_e5a00(__int64* a1, _QWORD* a2)
{
  __int64 v4;
  unsigned __int64* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 result;
  unsigned __int64 v15;

  if (!CudaDriverRoutine_e5960((__int64)a2)) {
    return 0;
  }
  v4 = CudaDriverStub_12e330(72);
  if (v4 == 0) {
    return 2;
  }
  v5 = (unsigned __int64*)v4;
  *(_OWORD*)(v4 + 56) = (__typeof__(*(_OWORD*)(v4 + 56))){0};
  *(_OWORD*)(v4 + 40) = (__typeof__(*(_OWORD*)(v4 + 40))){0};
  *(_OWORD*)(v4 + 24) = (__typeof__(*(_OWORD*)(v4 + 24))){0};
  *(_OWORD*)(v4 + 8) = (__typeof__(*(_OWORD*)(v4 + 8))){0};
  *a1 = v4;
  *(_QWORD*)v4 = a2;
  v6 = a2[8];
  v7 = CudaDriverRoutine_ee160((__int64)a2, 40, (_QWORD*)(v4 + 16), 0, 3u);
  if (v7 != 0) {
    goto LABEL_9;
  }
  v8 = cuda_driver_helpers_1db920(a2[10], v5[2]);
  v7 = CudaDriverRoutine_104cd0((__int64)a2, v8, 40, 2u);
  if (v7 != 0) {
    goto LABEL_9;
  }
  v7 =
      CudaDriverRoutine_ee160((__int64)a2,
                              4 * *(unsigned int*)(v6 + 3732) *
                                  (unsigned __int64)*(unsigned int*)(v6 + 3768),
                              &v15, 0, 3u);
  if (v7 != 0) {
    goto LABEL_9;
  }
  v9 = v15;
  v5[3] = v15;
  v10 = cuda_driver_helpers_1db920(a2[10], v9);
  v7 = CudaDriverRoutine_104cd0(
      (__int64)a2, v10,
      4 * *(unsigned int*)(v6 + 3732) *
          (unsigned __int64)*(unsigned int*)(v6 + 3768),
      2u);
  if (v7 != 0 ||
      (v7 = CudaDriverRoutine_ee160(
           (__int64)a2,
           8 * *(unsigned int*)(v6 + 3732) *
               (unsigned __int64)*(unsigned int*)(v6 + 3768),
           &v15, 0, 3u)) != 0 ||
      (v11 = v15, v5[4] = v15, v12 = cuda_driver_helpers_1db920(a2[10], v11),
       (v7 = CudaDriverRoutine_104cd0(
            (__int64)a2, v12,
            8 * *(unsigned int*)(v6 + 3732) *
                (unsigned __int64)*(unsigned int*)(v6 + 3768),
            2u)) != 0)) {
  LABEL_9:
    v13 = v7;
    CudaDriverRoutine_e5c70(a2 + 150);
    return v13;
  }
  else {
    result = CudaDriverRoutine_e5bd0((__int64)v5);
    if ((_DWORD)result == 0) {
      return CudaDriverRoutine_98190((__int64)a2, 0);
    }
  }
  return result;
}

__int64 nvidia_107fa0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4;

  if (*(_BYTE*)(a1 + 8) != 0) {
    if (a2 != 0) {
      while (1) {
        v4 = CudaDriverStub_12db70(a1);
        if (v4 != -2) {
          break;
        }
        if (CudaDriverRoutine_12e2e0() >= a2) {
          return 600;
        }
      }
      goto LABEL_11;
    }
  }
  else if (a2 != 0) {
    while (1) {
      v4 = CudaDriverStub_12db70(a1);
      if (v4 != -2) {
        break;
      }
      if (CudaDriverRoutine_12e2e0() >= a2) {
        return 600;
      }
    }
  LABEL_11:
    if (v4 != 0 & v4 < 0xFFFFFFFD) {
      return 999;
    }
    else {
      return CudaDriverData_1133f78[v4 + 3];
    }
  }
  v4 = CudaDriverStub_12db70(a1);
  goto LABEL_11;
}

__int64 nvidia_12b580(_QWORD* a1, __int64 a2, unsigned int a3)
{
  __int64 v6;
  int v7;
  _QWORD* v8;
  unsigned int v9;
  unsigned int v10;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  _QWORD* v19;
  char v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  char v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  struct {
    int v43;
    char gap28_[4];
    __int64 v44;
    __int64 v45;
  } v43_;

  v6 = CudaDriverData_1423370;
  v7 = *(unsigned __int8*)(*(_QWORD*)CudaDriverData_1423370 + 146LL);
  CudaDriverStub_107f90(*(_QWORD*)CudaDriverData_1423370 + 152LL, 0, 0);
  v8 = *(_QWORD**)v6;
  v42 = 0;
  if (*(_QWORD*)a2 <= *v8) {
    v10 = CudaDriverRoutine_12cbc0(&v42, a2, a3);
    v9 = v10;
    if (v7 != 0 | v10 != 2) {
      goto LABEL_8;
    }
  }
  else {
    v9 = 2;
    if (v7 != 0) {
      goto LABEL_8;
    }
  }
  if (*(_BYTE*)(a2 + 48) != 0) {
    v12 = *(_QWORD*)(a2 + 56);
    if (*(_QWORD*)a2 >> 30 != 0) {
      goto LABEL_28;
    }
    goto LABEL_21;
  }
  if (CudaDriverData_1434ac0 == 0) {
    goto LABEL_27;
  }
  v13 = 0;
  v12 = 0;
  do {
    v14 = (char*)&CudaDriverData_14347a8 + 8 * v13;
    if (CudaDriverRoutine_9aa40(*((_QWORD*)v14 + 35)) &&
        v12 <= (*(__int64 (**)(__int64))(*((_QWORD*)v14 + 35) + 21440LL))(
                   *((_QWORD*)v14 + 35))) {
      v12 = (*(__int64 (**)(__int64))(
          *((_QWORD*)&CudaDriverData_14347a8 + v13 + 35) + 21440LL))(
          *((_QWORD*)&CudaDriverData_14347a8 + v13 + 35));
    }
    ++v13;
  } while (v13 < (unsigned int)CudaDriverData_1434ac0);
  if (v12 != 0) {
    if (*(_QWORD*)a2 >> 30 == 0) {
      goto LABEL_21;
    }
  }
  else {
  LABEL_27:
    v12 = 0x100000000LL;
    if (*(_QWORD*)a2 >> 30 == 0) {
    LABEL_21:
      if (*(_BYTE*)(a2 + 8) != 0 || *(_BYTE*)(a2 + 24) != 0) {
        goto LABEL_28;
      }
      v9 = CudaDriverRoutine_12a920(0x40000000, a3, v12, 1, 0);
      if (v9 == 0) {
        v9 = CudaDriverRoutine_12cbc0(&v42, a2, a3);
      }
      if (v9 == 2) {
        goto LABEL_28;
      }
    LABEL_8:
      if (v9 != 0) {
        goto LABEL_36;
      }
    LABEL_9:
      *a1 = CudaDriverStub_f0f50(v42);
      CudaDriverStub_1a4c70(v42, 1);
      v9 = 0;
      goto LABEL_36;
    }
  }
LABEL_28:
  if (*(_BYTE*)(a2 + 24) != 0) {
    v15 = *(_QWORD*)(a2 + 32);
    v16 = *(_QWORD*)(a2 + 40);
  }
  else if (*(_BYTE*)(*(_QWORD*)v6 + 144LL) != 0) {
    v19 = CudaDriverData_1422118;
    v20 = a3 == 0;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                   (_QWORD)CudaDriverData_1422118) != 0) {
      v21 = 0;
      v15 = 0;
      do {
        v22 = (char*)&v19[v21];
        if (CudaDriverRoutine_9aa40(*((_QWORD*)v22 + 35)) &&
            v15 <= CudaDriverRoutine_1e86b0(*((_QWORD*)v22 + 35), v20)) {
          v15 = CudaDriverRoutine_1e86b0(v19[v21 + 35], v20);
        }
        ++v21;
      } while (v21 <
               *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v19));
      if (*(_BYTE*)(a2 + 24) != 0) {
        v16 = *(_QWORD*)(a2 + 40);
      }
      else if (*(_BYTE*)(*(_QWORD*)v6 + 144LL) != 0 &&
               (v33 = a3 == 0,
                *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v19) != 0)) {
        v16 = 0xFFF8000000LL;
        v40 = a1;
        v34 = 0;
        do {
          v35 = (char*)&v19[v34];
          if (CudaDriverRoutine_9aa40(*((_QWORD*)v35 + 35)) &&
              v16 >= CudaDriverRoutine_1e86d0(*((_QWORD*)v35 + 35), v33)) {
            v16 = CudaDriverRoutine_1e86d0(v19[v34 + 35], v33);
          }
          ++v34;
        } while (v34 <
                 *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v19));
        a1 = v40;
      }
      else {
        v16 = 0xFFF8000000LL;
      }
    }
    else {
      v15 = 0;
      v16 = 0xFFF8000000LL;
    }
  }
  else {
    v16 = 0xFFF8000000LL;
    v15 = 0x200000000LL;
  }
  v17 = *(_QWORD*)(*(_QWORD*)v6 + 168LL);
  if (!__CFADD__(v17, *(_QWORD*)a2)) {
    if (__CFADD__(v12, v15)) {
      v9 = 1;
      goto LABEL_36;
    }
    v23 = *(_QWORD*)a2 + v17;
    v24 = -v17;
    v25 = (char*)CudaDriverData_1422118;
    v26 = v23 - 1;
    v27 = v26 & v24;
    v28 = *((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)CudaDriverData_1422118 +
            2) != 0 &
          (a3 & 0xFFFFFFFD) == 0;
    v29 = CudaDriverRoutine_12c3a0(v26 & v24, (v12 + v15 - 1) & -(__int64)v12,
                                   v16 & -(__int64)v12, v12, v28);
    if (v29 != 0) {
      v30 = v29;
      v31 = CudaDriverRoutine_12ae20(&v41, a3, v29, v27);
      if (v31 == 0) {
        v32 = v41;
        v9 = CudaDriverRoutine_1a4510((__int64)&v42, *(_QWORD*)(v41 + 24), a2);
        if (v9 != 0) {
          goto LABEL_36;
        }
        ++*(_QWORD*)(v32 + 16);
        goto LABEL_9;
      }
      v9 = v31;
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x14CLL) +
                     *(__int64*)((char*)((__int64*)0x10LL) +
                                 (_QWORD)CudaDriverData_14225e0)) != 0) {
        v43_.v44 = v30;
        v43_.v45 = v27;
        v43_.v43 = 24;
        cuda_driver_20b420(2u, 0x53u, (__int64)&v43_.v43);
      }
      if ((a3 & 0xFFFFFFFD) != 0 ||
          *((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)v25 + 2) == 0) {
        CudaDriverStub_57450(v30, v27, 2);
      }
      else {
        CudaDriverStub_124f70(v30, v27);
      }
      v36 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v25);
      if ((_DWORD)v36 != 0) {
        v37 = (__int64*)(v25 + 280);
        do {
          v39 = *v37++;
          v38 = v39;
          if ((*(_WORD*)(v39 + 16848) & 4) != 0) {
            (*(void (**)(__int64, __int64, __int64))(v38 + 21032))(v38, v30,
                                                                   v27);
          }
          --v36;
        } while (v36 != 0);
      }
    LABEL_36:
      CudaDriverStub_108070(*(_QWORD*)v6 + 152LL);
      return v9;
    }
  }
  v9 = 2;
  goto LABEL_36;
}

#pragma GCC visibility pop
