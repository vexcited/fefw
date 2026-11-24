#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* NgxRoutine_bf140(__int64*, unsigned __int64, int);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_e0d60(__int64, __int64, _DWORD*, unsigned int);
__int64 NgxRoutine_e0e80(__int64, __int64, _DWORD*, unsigned int);
__int64 nvidia_e1920(__int64, _DWORD*);
__int64 nvidia_e1a10(__int64, __int64, __int64);
__int64 wmemchr_plt(__int64, unsigned int, unsigned __int64);
extern char* NgxData_9511c8;
unsigned __int64 NgxRoutine_e0fa0(const char*, unsigned __int8*, _DWORD*, int);
unsigned __int64 NgxRoutine_e10f0(const char*, unsigned __int8*, _DWORD*, int);
_QWORD* nvidia_c5750(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6);
_QWORD* nvidia_c5e00(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6);
_QWORD* nvidia_c64c0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     _WORD* a6);
_QWORD* nvidia_c6b80(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     _DWORD* a6);
void _Unwind_Resume_plt(__int64);
void __attribute__((noreturn)) unplaced_34_c5d9c(__int64 a1);
void __attribute__((noreturn)) unplaced_34_c645c(__int64 a1);
void __attribute__((noreturn)) unplaced_34_c6b1c(__int64 a1);

_QWORD* nvidia_c5750(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6)
{
  __int64 v6;
  int v11;
  unsigned int v12;
  __int64 v13;
  _BYTE* v14;
  int v15;
  char* v16;
  char* v17;
  int* v18;
  int v19;
  _BOOL4 v20;
  int* v21;
  int v22;
  __int64 v23;
  unsigned int* v24;
  unsigned int v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  int v40;
  _DWORD* v41;
  int* v42;
  int* v43;
  int v44;
  _BYTE* v46;
  __int64 v47;
  _DWORD* v48;
  _BYTE* v49;
  int v50;
  unsigned int v51;
  int* v52;
  int v53;
  _BOOL4 v54;
  int* v55;
  int v56;
  __int64 v60;
  struct {
    _BYTE v61[4];
    int v62;
  } v61_;
  struct {
    __int64 v63;
    __int64 v64;
    char* v65;
  } v63_;
  struct {
    _QWORD v66[3];
    char gap232_[4];
    int v67;
    char gap240_[100];
    int v68[3];
    __int64 v69;
  } v66_;

  v66_.v69 = v6;
  v11 = *(_DWORD*)(a4 + 8) & 0x4A;
  if (v11 != 0) {
    if (v11 == 64) {
      v12 = 8;
    }
    else if (v11 == 8) {
      v12 = 16;
    }
    else {
      v12 = 10;
    }
  }
  else {
    v12 = 0;
  }
  v13 = nvidia_e1a10(a1, a4, (__int64)&v66_.v67);
  nvidia_e1920(a4, v66_.v68);
  v63_.v64 = 0;
  v63_.v65 = nullptr;
  v63_.v63 = 0;
  NgxRoutine_bf140(&v63_.v63, 0x16u, 0);
  v14 = v61_.v61;
  v15 = 0;
  v60 = v12;
  if ((v63_.v63 & 1) != 0) {
    v16 = v63_.v65;
  }
  else {
    v16 = (char*)&v63_.v63 + 1;
  }
  v17 = v16;
  while (1) {
    if (a2 != nullptr) {
      v18 = (int*)a2[3];
      if (v18 == (int*)a2[4]) {
        v19 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
      }
      else {
        v19 = *v18;
      }
      v20 = v19 == -1;
      if (v19 == -1) {
        a2 = nullptr;
      }
    }
    else {
      v20 = true;
    }
    if (a3 != nullptr) {
      break;
    }
    if (v20) {
      goto LABEL_88;
    }
  LABEL_29:
    if ((v63_.v63 & 1) != 0) {
      v23 = v63_.v64;
    }
    else {
      v23 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
    }
    if (v16 != &v17[v23]) {
      v24 = (unsigned int*)a2[3];
      if (v24 == (unsigned int*)a2[4]) {
        goto LABEL_48;
      }
      goto LABEL_34;
    }
    if (v23 < 1) {
      if ((v63_.v63 & 1) != 0) {
        v26 = v63_.v65;
        v63_.v64 = 2 * v23;
      }
      else {
        LOBYTE(v63_.v63) = 4 * v23;
        v26 = (char*)&v63_.v63 + 1;
      }
      v26[2 * v23] = 0;
    }
    else {
      NgxRoutine_bf140(&v63_.v63, v23, 0);
    }
    v27 = v63_.v64;
    v28 = 22;
    if ((v63_.v63 & 1) != 0) {
      v28 = (v63_.v63 & 0xFFFFFFFFFFFFFFFELL) - 1;
    }
    else {
      v27 = (unsigned __int8)v63_.v63 >> 1;
    }
    if (v28 > v27) {
      NgxRoutine_bf140(&v63_.v63, v28 - v27, 0);
      v17 = (char*)&v63_.v63 + 1;
      if ((v63_.v63 & 1) == 0) {
        goto LABEL_47;
      }
    LABEL_46:
      v17 = v63_.v65;
      goto LABEL_47;
    }
    if ((v63_.v63 & 1) != 0) {
      v63_.v64 = v28;
      v63_.v65[v28] = 0;
      v17 = (char*)&v63_.v63 + 1;
      if ((v63_.v63 & 1) != 0) {
        goto LABEL_46;
      }
    }
    else {
      LOBYTE(v63_.v63) = 2 * v28;
      *((_BYTE*)&v63_.v63 + v28 + 1) = 0;
      v17 = (char*)&v63_.v63 + 1;
      if ((v63_.v63 & 1) != 0) {
        goto LABEL_46;
      }
    }
  LABEL_47:
    v16 = &v17[v23];
    v24 = (unsigned int*)a2[3];
    if (v24 == (unsigned int*)a2[4]) {
    LABEL_48:
      v25 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
      goto LABEL_49;
    }
  LABEL_34:
    v25 = *v24;
  LABEL_49:
    if (v16 == v17) {
      if (v25 == *(_DWORD*)(v13 + 96)) {
        v34 = 43;
        v15 = 0;
        goto LABEL_86;
      }
      if (v25 == *(_DWORD*)(v13 + 100)) {
        v34 = 45;
        v15 = 0;
        goto LABEL_86;
      }
    }
    if ((v66_.v66[0] & 1) != 0) {
      v29 = v66_.v66[1];
    }
    else {
      v29 = (unsigned __int64)LOBYTE(v66_.v66[0]) >> 1;
    }
    if (v25 != v66_.v68[0] | v29 == 0) {
      v31 = wmemchr_plt(v13, v25, 0x1Au);
      v32 = v13 + 104;
      if (v31 != 0) {
        v32 = v31;
      }
      v33 = (v32 - v13) >> 2;
      if (v33 > 23) {
        goto LABEL_88;
      }
      switch (v12) {
      case 8u:
      LABEL_64:
        if (v33 >= v60) {
          goto LABEL_88;
        }
        break;
      case 0x10u:
        if (v33 < 22) {
          break;
        }
        if (v16 == v17 || v16 - v17 > 2 || *(v16 - 1) != 48) {
          goto LABEL_88;
        }
        v15 = 0;
        v34 = NgxData_9511c8[v33];
      LABEL_86:
        *v16++ = v34;
        v35 = a2[3];
        if (v35 == a2[4]) {
          goto LABEL_87;
        }
        goto LABEL_12;
      case 0xAu:
        goto LABEL_64;
      default:
        break;
      }
      ++v15;
      *v16++ = NgxData_9511c8[v33];
    LABEL_80:
      v35 = a2[3];
      if (v35 != a2[4]) {
        goto LABEL_12;
      }
    LABEL_87:
      (*(void (**)(__int64))(*a2 + 80LL))((__int64)a2);
    }
    else {
      if (v14 - v61_.v61 > 159) {
        goto LABEL_80;
      }
      *(_DWORD*)v14 = v15;
      v14 += 4;
      v15 = 0;
      v35 = a2[3];
      if (v35 == a2[4]) {
        goto LABEL_87;
      }
    LABEL_12:
      a2[3] = v35 + 4;
    }
  }
  v21 = (int*)a3[3];
  if (v21 == (int*)a3[4]) {
    v22 = (*(__int64 (**)(__int64))(*a3 + 72LL))((__int64)a3);
  }
  else {
    v22 = *v21;
  }
  if (v22 == -1) {
    a3 = nullptr;
  }
  if (v20 != (v22 == -1)) {
    goto LABEL_29;
  }
LABEL_88:
  if ((v66_.v66[0] & 1) != 0) {
    v36 = v66_.v66[1];
  }
  else {
    v36 = (unsigned __int64)LOBYTE(v66_.v66[0]) >> 1;
  }
  if (v36 != 0 && v14 - v61_.v61 <= 159) {
    *(_DWORD*)v14 = v15;
    v14 += 4;
  }
  v37 = NgxRoutine_e0d60((__int64)v17, (__int64)v16, a5, v12);
  v38 = LOBYTE(v66_.v66[0]);
  *a6 = v37;
  v39 = v66_.v66[1];
  v40 = v38 & 1;
  if ((v38 & 1) == 0) {
    v39 = v38 >> 1;
  }
  if (v14 - v61_.v61 >= 5 && v39 != 0) {
    v41 = v14 - 4;
    if (v61_.v61 != v14 && v61_.v61 < v14 - 4) {
      v42 = (int*)(v14 - 4);
      v43 = &v61_.v62;
      do {
        v44 = *(v43 - 1);
        *(v43 - 1) = *v42;
        *v42-- = v44;
      } while (v43++ < v42);
      LODWORD(v38) = LOBYTE(v66_.v66[0]);
      v40 = v66_.v66[0] & 1;
    }
    v46 = (_BYTE*)v66_.v66[2];
    if (v40 == 0) {
      v46 = (char*)v66_.v66 + 1;
    }
    if (v61_.v61 >= (_BYTE*)v41) {
    LABEL_117:
      v51 = (unsigned __int8)*v46;
      if (*v46 != 0 && v51 != 255 && *(int*)v41 - 1 >= v51) {
        goto LABEL_120;
      }
    }
    else {
      v47 = (unsigned int)v38 >> 1;
      if (v40 != 0) {
        v47 = v66_.v66[1];
      }
      v48 = v61_.v61;
      v49 = &v46[v47];
      while (1) {
        v50 = (unsigned __int8)*v46;
        if (*v46 != 0 && v50 != 255 && *(_DWORD*)v48 != v50) {
          break;
        }
        ++v48;
        if (v49 - v46 > 1) {
          ++v46;
        }
        if (v48 >= v41) {
          goto LABEL_117;
        }
      }
    LABEL_120:
      *(_DWORD*)a5 = 4;
    }
  }
  if (a2 == nullptr) {
    v54 = true;
    if (a3 != nullptr) {
      goto LABEL_131;
    }
  LABEL_125:
    if (v54) {
      goto LABEL_135;
    }
    goto LABEL_136;
  }
  v52 = (int*)a2[3];
  if (v52 == (int*)a2[4]) {
    v53 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
  }
  else {
    v53 = *v52;
  }
  v54 = v53 == -1;
  if (v53 == -1) {
    a2 = nullptr;
  }
  if (a3 == nullptr) {
    goto LABEL_125;
  }
LABEL_131:
  v55 = (int*)a3[3];
  if (v55 == (int*)a3[4]) {
    v56 = (*(__int64 (**)(__int64))(*a3 + 72LL))((__int64)a3);
  }
  else {
    v56 = *v55;
  }
  if (((v54 ^ (v56 == -1)) & 1) == 0) {
  LABEL_135:
    *(_DWORD*)a5 |= 2u;
  }
LABEL_136:
  if ((v63_.v63 & 1) != 0) {
    NgxRoutine_430(v63_.v65, v63_.v63 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((v66_.v66[0] & 1) != 0) {
    NgxRoutine_430(v66_.v66[2], v66_.v66[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  return a2;
}

void __attribute__((noreturn)) unplaced_34_c5d9c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

_QWORD* nvidia_c5e00(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6)
{
  __int64 v6;
  int v11;
  unsigned int v12;
  __int64 v13;
  _BYTE* v14;
  int v15;
  char* v16;
  char* v17;
  int* v18;
  int v19;
  _BOOL4 v20;
  int* v21;
  int v22;
  __int64 v23;
  unsigned int* v24;
  unsigned int v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  int v40;
  _DWORD* v41;
  int* v42;
  int* v43;
  int v44;
  _BYTE* v46;
  __int64 v47;
  _DWORD* v48;
  _BYTE* v49;
  int v50;
  unsigned int v51;
  int* v52;
  int v53;
  _BOOL4 v54;
  int* v55;
  int v56;
  __int64 v60;
  struct {
    _BYTE v61[4];
    int v62;
  } v61_;
  struct {
    __int64 v63;
    __int64 v64;
    char* v65;
  } v63_;
  struct {
    _QWORD v66[3];
    char gap232_[4];
    int v67;
    char gap240_[100];
    int v68[3];
    __int64 v69;
  } v66_;

  v66_.v69 = v6;
  v11 = *(_DWORD*)(a4 + 8) & 0x4A;
  if (v11 != 0) {
    if (v11 == 64) {
      v12 = 8;
    }
    else if (v11 == 8) {
      v12 = 16;
    }
    else {
      v12 = 10;
    }
  }
  else {
    v12 = 0;
  }
  v13 = nvidia_e1a10(a1, a4, (__int64)&v66_.v67);
  nvidia_e1920(a4, v66_.v68);
  v63_.v64 = 0;
  v63_.v65 = nullptr;
  v63_.v63 = 0;
  NgxRoutine_bf140(&v63_.v63, 0x16u, 0);
  v14 = v61_.v61;
  v15 = 0;
  v60 = v12;
  if ((v63_.v63 & 1) != 0) {
    v16 = v63_.v65;
  }
  else {
    v16 = (char*)&v63_.v63 + 1;
  }
  v17 = v16;
  while (1) {
    if (a2 != nullptr) {
      v18 = (int*)a2[3];
      if (v18 == (int*)a2[4]) {
        v19 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
      }
      else {
        v19 = *v18;
      }
      v20 = v19 == -1;
      if (v19 == -1) {
        a2 = nullptr;
      }
    }
    else {
      v20 = true;
    }
    if (a3 != nullptr) {
      break;
    }
    if (v20) {
      goto LABEL_88;
    }
  LABEL_29:
    if ((v63_.v63 & 1) != 0) {
      v23 = v63_.v64;
    }
    else {
      v23 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
    }
    if (v16 != &v17[v23]) {
      v24 = (unsigned int*)a2[3];
      if (v24 == (unsigned int*)a2[4]) {
        goto LABEL_48;
      }
      goto LABEL_34;
    }
    if (v23 < 1) {
      if ((v63_.v63 & 1) != 0) {
        v26 = v63_.v65;
        v63_.v64 = 2 * v23;
      }
      else {
        LOBYTE(v63_.v63) = 4 * v23;
        v26 = (char*)&v63_.v63 + 1;
      }
      v26[2 * v23] = 0;
    }
    else {
      NgxRoutine_bf140(&v63_.v63, v23, 0);
    }
    v27 = v63_.v64;
    v28 = 22;
    if ((v63_.v63 & 1) != 0) {
      v28 = (v63_.v63 & 0xFFFFFFFFFFFFFFFELL) - 1;
    }
    else {
      v27 = (unsigned __int8)v63_.v63 >> 1;
    }
    if (v28 > v27) {
      NgxRoutine_bf140(&v63_.v63, v28 - v27, 0);
      v17 = (char*)&v63_.v63 + 1;
      if ((v63_.v63 & 1) == 0) {
        goto LABEL_47;
      }
    LABEL_46:
      v17 = v63_.v65;
      goto LABEL_47;
    }
    if ((v63_.v63 & 1) != 0) {
      v63_.v64 = v28;
      v63_.v65[v28] = 0;
      v17 = (char*)&v63_.v63 + 1;
      if ((v63_.v63 & 1) != 0) {
        goto LABEL_46;
      }
    }
    else {
      LOBYTE(v63_.v63) = 2 * v28;
      *((_BYTE*)&v63_.v63 + v28 + 1) = 0;
      v17 = (char*)&v63_.v63 + 1;
      if ((v63_.v63 & 1) != 0) {
        goto LABEL_46;
      }
    }
  LABEL_47:
    v16 = &v17[v23];
    v24 = (unsigned int*)a2[3];
    if (v24 == (unsigned int*)a2[4]) {
    LABEL_48:
      v25 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
      goto LABEL_49;
    }
  LABEL_34:
    v25 = *v24;
  LABEL_49:
    if (v16 == v17) {
      if (v25 == *(_DWORD*)(v13 + 96)) {
        v34 = 43;
        v15 = 0;
        goto LABEL_86;
      }
      if (v25 == *(_DWORD*)(v13 + 100)) {
        v34 = 45;
        v15 = 0;
        goto LABEL_86;
      }
    }
    if ((v66_.v66[0] & 1) != 0) {
      v29 = v66_.v66[1];
    }
    else {
      v29 = (unsigned __int64)LOBYTE(v66_.v66[0]) >> 1;
    }
    if (v25 != v66_.v68[0] | v29 == 0) {
      v31 = wmemchr_plt(v13, v25, 0x1Au);
      v32 = v13 + 104;
      if (v31 != 0) {
        v32 = v31;
      }
      v33 = (v32 - v13) >> 2;
      if (v33 > 23) {
        goto LABEL_88;
      }
      switch (v12) {
      case 8u:
      LABEL_64:
        if (v33 >= v60) {
          goto LABEL_88;
        }
        break;
      case 0x10u:
        if (v33 < 22) {
          break;
        }
        if (v16 == v17 || v16 - v17 > 2 || *(v16 - 1) != 48) {
          goto LABEL_88;
        }
        v15 = 0;
        v34 = NgxData_9511c8[v33];
      LABEL_86:
        *v16++ = v34;
        v35 = a2[3];
        if (v35 == a2[4]) {
          goto LABEL_87;
        }
        goto LABEL_12;
      case 0xAu:
        goto LABEL_64;
      default:
        break;
      }
      ++v15;
      *v16++ = NgxData_9511c8[v33];
    LABEL_80:
      v35 = a2[3];
      if (v35 != a2[4]) {
        goto LABEL_12;
      }
    LABEL_87:
      (*(void (**)(__int64))(*a2 + 80LL))((__int64)a2);
    }
    else {
      if (v14 - v61_.v61 > 159) {
        goto LABEL_80;
      }
      *(_DWORD*)v14 = v15;
      v14 += 4;
      v15 = 0;
      v35 = a2[3];
      if (v35 == a2[4]) {
        goto LABEL_87;
      }
    LABEL_12:
      a2[3] = v35 + 4;
    }
  }
  v21 = (int*)a3[3];
  if (v21 == (int*)a3[4]) {
    v22 = (*(__int64 (**)(__int64))(*a3 + 72LL))((__int64)a3);
  }
  else {
    v22 = *v21;
  }
  if (v22 == -1) {
    a3 = nullptr;
  }
  if (v20 != (v22 == -1)) {
    goto LABEL_29;
  }
LABEL_88:
  if ((v66_.v66[0] & 1) != 0) {
    v36 = v66_.v66[1];
  }
  else {
    v36 = (unsigned __int64)LOBYTE(v66_.v66[0]) >> 1;
  }
  if (v36 != 0 && v14 - v61_.v61 <= 159) {
    *(_DWORD*)v14 = v15;
    v14 += 4;
  }
  v37 = NgxRoutine_e0e80((__int64)v17, (__int64)v16, a5, v12);
  v38 = LOBYTE(v66_.v66[0]);
  *a6 = v37;
  v39 = v66_.v66[1];
  v40 = v38 & 1;
  if ((v38 & 1) == 0) {
    v39 = v38 >> 1;
  }
  if (v14 - v61_.v61 >= 5 && v39 != 0) {
    v41 = v14 - 4;
    if (v61_.v61 != v14 && v61_.v61 < v14 - 4) {
      v42 = (int*)(v14 - 4);
      v43 = &v61_.v62;
      do {
        v44 = *(v43 - 1);
        *(v43 - 1) = *v42;
        *v42-- = v44;
      } while (v43++ < v42);
      LODWORD(v38) = LOBYTE(v66_.v66[0]);
      v40 = v66_.v66[0] & 1;
    }
    v46 = (_BYTE*)v66_.v66[2];
    if (v40 == 0) {
      v46 = (char*)v66_.v66 + 1;
    }
    if (v61_.v61 >= (_BYTE*)v41) {
    LABEL_117:
      v51 = (unsigned __int8)*v46;
      if (*v46 != 0 && v51 != 255 && *(int*)v41 - 1 >= v51) {
        goto LABEL_120;
      }
    }
    else {
      v47 = (unsigned int)v38 >> 1;
      if (v40 != 0) {
        v47 = v66_.v66[1];
      }
      v48 = v61_.v61;
      v49 = &v46[v47];
      while (1) {
        v50 = (unsigned __int8)*v46;
        if (*v46 != 0 && v50 != 255 && *(_DWORD*)v48 != v50) {
          break;
        }
        ++v48;
        if (v49 - v46 > 1) {
          ++v46;
        }
        if (v48 >= v41) {
          goto LABEL_117;
        }
      }
    LABEL_120:
      *(_DWORD*)a5 = 4;
    }
  }
  if (a2 == nullptr) {
    v54 = true;
    if (a3 != nullptr) {
      goto LABEL_131;
    }
  LABEL_125:
    if (v54) {
      goto LABEL_135;
    }
    goto LABEL_136;
  }
  v52 = (int*)a2[3];
  if (v52 == (int*)a2[4]) {
    v53 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
  }
  else {
    v53 = *v52;
  }
  v54 = v53 == -1;
  if (v53 == -1) {
    a2 = nullptr;
  }
  if (a3 == nullptr) {
    goto LABEL_125;
  }
LABEL_131:
  v55 = (int*)a3[3];
  if (v55 == (int*)a3[4]) {
    v56 = (*(__int64 (**)(__int64))(*a3 + 72LL))((__int64)a3);
  }
  else {
    v56 = *v55;
  }
  if (((v54 ^ (v56 == -1)) & 1) == 0) {
  LABEL_135:
    *(_DWORD*)a5 |= 2u;
  }
LABEL_136:
  if ((v63_.v63 & 1) != 0) {
    NgxRoutine_430(v63_.v65, v63_.v63 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((v66_.v66[0] & 1) != 0) {
    NgxRoutine_430(v66_.v66[2], v66_.v66[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  return a2;
}

void __attribute__((noreturn)) unplaced_34_c645c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

_QWORD* nvidia_c64c0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     _WORD* a6)
{
  __int64 v6;
  int v11;
  unsigned int v12;
  __int64 v13;
  _BYTE* v14;
  int v15;
  unsigned __int8* v16;
  char* v17;
  int* v18;
  int v19;
  _BOOL4 v20;
  int* v21;
  int v22;
  __int64 v23;
  unsigned int* v24;
  unsigned int v25;
  unsigned __int8* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  unsigned __int64 v36;
  __int16 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  int v40;
  _DWORD* v41;
  int* v42;
  int* v43;
  int v44;
  _BYTE* v46;
  __int64 v47;
  _DWORD* v48;
  _BYTE* v49;
  int v50;
  unsigned int v51;
  int* v52;
  int v53;
  _BOOL4 v54;
  int* v55;
  int v56;
  __int64 v60;
  struct {
    _BYTE v61[4];
    int v62;
  } v61_;
  struct {
    __int64 v63;
    __int64 v64;
    unsigned __int8* v65;
  } v63_;
  struct {
    _QWORD v66[3];
    char gap232_[4];
    int v67;
    char gap240_[100];
    int v68[3];
    __int64 v69;
  } v66_;

  v66_.v69 = v6;
  v11 = *(_DWORD*)(a4 + 8) & 0x4A;
  if (v11 != 0) {
    if (v11 == 64) {
      v12 = 8;
    }
    else if (v11 == 8) {
      v12 = 16;
    }
    else {
      v12 = 10;
    }
  }
  else {
    v12 = 0;
  }
  v13 = nvidia_e1a10(a1, a4, (__int64)&v66_.v67);
  nvidia_e1920(a4, v66_.v68);
  v63_.v64 = 0;
  v63_.v65 = nullptr;
  v63_.v63 = 0;
  NgxRoutine_bf140(&v63_.v63, 0x16u, 0);
  v14 = v61_.v61;
  v15 = 0;
  v60 = v12;
  if ((v63_.v63 & 1) != 0) {
    v16 = v63_.v65;
  }
  else {
    v16 = (unsigned __int8*)&v63_.v63 + 1;
  }
  v17 = (const char*)v16;
  while (1) {
    if (a2 != nullptr) {
      v18 = (int*)a2[3];
      if (v18 == (int*)a2[4]) {
        v19 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
      }
      else {
        v19 = *v18;
      }
      v20 = v19 == -1;
      if (v19 == -1) {
        a2 = nullptr;
      }
    }
    else {
      v20 = true;
    }
    if (a3 != nullptr) {
      break;
    }
    if (v20) {
      goto LABEL_88;
    }
  LABEL_29:
    if ((v63_.v63 & 1) != 0) {
      v23 = v63_.v64;
    }
    else {
      v23 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
    }
    if (v16 != (unsigned __int8*)&v17[v23]) {
      v24 = (unsigned int*)a2[3];
      if (v24 == (unsigned int*)a2[4]) {
        goto LABEL_48;
      }
      goto LABEL_34;
    }
    if (v23 < 1) {
      if ((v63_.v63 & 1) != 0) {
        v26 = v63_.v65;
        v63_.v64 = 2 * v23;
      }
      else {
        LOBYTE(v63_.v63) = 4 * v23;
        v26 = (unsigned __int8*)&v63_.v63 + 1;
      }
      v26[2 * v23] = 0;
    }
    else {
      NgxRoutine_bf140(&v63_.v63, v23, 0);
    }
    v27 = v63_.v64;
    v28 = 22;
    if ((v63_.v63 & 1) != 0) {
      v28 = (v63_.v63 & 0xFFFFFFFFFFFFFFFELL) - 1;
    }
    else {
      v27 = (unsigned __int8)v63_.v63 >> 1;
    }
    if (v28 > v27) {
      NgxRoutine_bf140(&v63_.v63, v28 - v27, 0);
      v17 = (char*)&v63_.v63 + 1;
      if ((v63_.v63 & 1) == 0) {
        goto LABEL_47;
      }
    LABEL_46:
      v17 = (const char*)v63_.v65;
      goto LABEL_47;
    }
    if ((v63_.v63 & 1) != 0) {
      v63_.v64 = v28;
      v63_.v65[v28] = 0;
      v17 = (char*)&v63_.v63 + 1;
      if ((v63_.v63 & 1) != 0) {
        goto LABEL_46;
      }
    }
    else {
      LOBYTE(v63_.v63) = 2 * v28;
      *((_BYTE*)&v63_.v63 + v28 + 1) = 0;
      v17 = (char*)&v63_.v63 + 1;
      if ((v63_.v63 & 1) != 0) {
        goto LABEL_46;
      }
    }
  LABEL_47:
    v16 = (unsigned __int8*)&v17[v23];
    v24 = (unsigned int*)a2[3];
    if (v24 == (unsigned int*)a2[4]) {
    LABEL_48:
      v25 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
      goto LABEL_49;
    }
  LABEL_34:
    v25 = *v24;
  LABEL_49:
    if (v16 == (unsigned __int8*)v17) {
      if (v25 == *(_DWORD*)(v13 + 96)) {
        v34 = 43;
        v15 = 0;
        goto LABEL_86;
      }
      if (v25 == *(_DWORD*)(v13 + 100)) {
        v34 = 45;
        v15 = 0;
        goto LABEL_86;
      }
    }
    if ((v66_.v66[0] & 1) != 0) {
      v29 = v66_.v66[1];
    }
    else {
      v29 = (unsigned __int64)LOBYTE(v66_.v66[0]) >> 1;
    }
    if (v25 != v66_.v68[0] | v29 == 0) {
      v31 = wmemchr_plt(v13, v25, 0x1Au);
      v32 = v13 + 104;
      if (v31 != 0) {
        v32 = v31;
      }
      v33 = (v32 - v13) >> 2;
      if (v33 > 23) {
        goto LABEL_88;
      }
      switch (v12) {
      case 8u:
      LABEL_64:
        if (v33 >= v60) {
          goto LABEL_88;
        }
        break;
      case 0x10u:
        if (v33 < 22) {
          break;
        }
        if (v16 == (unsigned __int8*)v17 || v16 - (unsigned __int8*)v17 > 2 ||
            *(v16 - 1) != 48) {
          goto LABEL_88;
        }
        v15 = 0;
        v34 = NgxData_9511c8[v33];
      LABEL_86:
        *v16++ = v34;
        v35 = a2[3];
        if (v35 == a2[4]) {
          goto LABEL_87;
        }
        goto LABEL_12;
      case 0xAu:
        goto LABEL_64;
      default:
        break;
      }
      ++v15;
      *v16++ = NgxData_9511c8[v33];
    LABEL_80:
      v35 = a2[3];
      if (v35 != a2[4]) {
        goto LABEL_12;
      }
    LABEL_87:
      (*(void (**)(__int64))(*a2 + 80LL))((__int64)a2);
    }
    else {
      if (v14 - v61_.v61 > 159) {
        goto LABEL_80;
      }
      *(_DWORD*)v14 = v15;
      v14 += 4;
      v15 = 0;
      v35 = a2[3];
      if (v35 == a2[4]) {
        goto LABEL_87;
      }
    LABEL_12:
      a2[3] = v35 + 4;
    }
  }
  v21 = (int*)a3[3];
  if (v21 == (int*)a3[4]) {
    v22 = (*(__int64 (**)(__int64))(*a3 + 72LL))((__int64)a3);
  }
  else {
    v22 = *v21;
  }
  if (v22 == -1) {
    a3 = nullptr;
  }
  if (v20 != (v22 == -1)) {
    goto LABEL_29;
  }
LABEL_88:
  if ((v66_.v66[0] & 1) != 0) {
    v36 = v66_.v66[1];
  }
  else {
    v36 = (unsigned __int64)LOBYTE(v66_.v66[0]) >> 1;
  }
  if (v36 != 0 && v14 - v61_.v61 <= 159) {
    *(_DWORD*)v14 = v15;
    v14 += 4;
  }
  v37 = NgxRoutine_e0fa0(v17, v16, a5, v12);
  v38 = LOBYTE(v66_.v66[0]);
  *a6 = v37;
  v39 = v66_.v66[1];
  v40 = v38 & 1;
  if ((v38 & 1) == 0) {
    v39 = v38 >> 1;
  }
  if (v14 - v61_.v61 >= 5 && v39 != 0) {
    v41 = v14 - 4;
    if (v61_.v61 != v14 && v61_.v61 < v14 - 4) {
      v42 = (int*)(v14 - 4);
      v43 = &v61_.v62;
      do {
        v44 = *(v43 - 1);
        *(v43 - 1) = *v42;
        *v42-- = v44;
      } while (v43++ < v42);
      LODWORD(v38) = LOBYTE(v66_.v66[0]);
      v40 = v66_.v66[0] & 1;
    }
    v46 = (_BYTE*)v66_.v66[2];
    if (v40 == 0) {
      v46 = (char*)v66_.v66 + 1;
    }
    if (v61_.v61 >= (_BYTE*)v41) {
    LABEL_117:
      v51 = (unsigned __int8)*v46;
      if (*v46 != 0 && v51 != 255 && *(int*)v41 - 1 >= v51) {
        goto LABEL_120;
      }
    }
    else {
      v47 = (unsigned int)v38 >> 1;
      if (v40 != 0) {
        v47 = v66_.v66[1];
      }
      v48 = v61_.v61;
      v49 = &v46[v47];
      while (1) {
        v50 = (unsigned __int8)*v46;
        if (*v46 != 0 && v50 != 255 && *(_DWORD*)v48 != v50) {
          break;
        }
        ++v48;
        if (v49 - v46 > 1) {
          ++v46;
        }
        if (v48 >= v41) {
          goto LABEL_117;
        }
      }
    LABEL_120:
      *(_DWORD*)a5 = 4;
    }
  }
  if (a2 == nullptr) {
    v54 = true;
    if (a3 != nullptr) {
      goto LABEL_131;
    }
  LABEL_125:
    if (v54) {
      goto LABEL_135;
    }
    goto LABEL_136;
  }
  v52 = (int*)a2[3];
  if (v52 == (int*)a2[4]) {
    v53 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
  }
  else {
    v53 = *v52;
  }
  v54 = v53 == -1;
  if (v53 == -1) {
    a2 = nullptr;
  }
  if (a3 == nullptr) {
    goto LABEL_125;
  }
LABEL_131:
  v55 = (int*)a3[3];
  if (v55 == (int*)a3[4]) {
    v56 = (*(__int64 (**)(__int64))(*a3 + 72LL))((__int64)a3);
  }
  else {
    v56 = *v55;
  }
  if (((v54 ^ (v56 == -1)) & 1) == 0) {
  LABEL_135:
    *(_DWORD*)a5 |= 2u;
  }
LABEL_136:
  if ((v63_.v63 & 1) != 0) {
    NgxRoutine_430(v63_.v65, v63_.v63 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((v66_.v66[0] & 1) != 0) {
    NgxRoutine_430(v66_.v66[2], v66_.v66[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  return a2;
}

void __attribute__((noreturn)) unplaced_34_c6b1c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

_QWORD* nvidia_c6b80(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     _DWORD* a6)
{
  __int64 v6;
  int v11;
  unsigned int v12;
  __int64 v13;
  _BYTE* v14;
  int v15;
  unsigned __int8* v16;
  char* v17;
  int* v18;
  int v19;
  _BOOL4 v20;
  int* v21;
  int v22;
  __int64 v23;
  unsigned int* v24;
  unsigned int v25;
  unsigned __int8* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  unsigned __int64 v36;
  int v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  int v40;
  _DWORD* v41;
  int* v42;
  int* v43;
  int v44;
  _BYTE* v46;
  __int64 v47;
  _DWORD* v48;
  _BYTE* v49;
  int v50;
  unsigned int v51;
  int* v52;
  int v53;
  _BOOL4 v54;
  int* v55;
  int v56;
  __int64 v60;
  struct {
    _BYTE v61[4];
    int v62;
  } v61_;
  struct {
    __int64 v63;
    __int64 v64;
    unsigned __int8* v65;
  } v63_;
  struct {
    _QWORD v66[3];
    char gap232_[4];
    int v67;
    char gap240_[100];
    int v68[3];
    __int64 v69;
  } v66_;

  v66_.v69 = v6;
  v11 = *(_DWORD*)(a4 + 8) & 0x4A;
  if (v11 != 0) {
    if (v11 == 64) {
      v12 = 8;
    }
    else if (v11 == 8) {
      v12 = 16;
    }
    else {
      v12 = 10;
    }
  }
  else {
    v12 = 0;
  }
  v13 = nvidia_e1a10(a1, a4, (__int64)&v66_.v67);
  nvidia_e1920(a4, v66_.v68);
  v63_.v64 = 0;
  v63_.v65 = nullptr;
  v63_.v63 = 0;
  NgxRoutine_bf140(&v63_.v63, 0x16u, 0);
  v14 = v61_.v61;
  v15 = 0;
  v60 = v12;
  if ((v63_.v63 & 1) != 0) {
    v16 = v63_.v65;
  }
  else {
    v16 = (unsigned __int8*)&v63_.v63 + 1;
  }
  v17 = (const char*)v16;
  while (1) {
    if (a2 != nullptr) {
      v18 = (int*)a2[3];
      if (v18 == (int*)a2[4]) {
        v19 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
      }
      else {
        v19 = *v18;
      }
      v20 = v19 == -1;
      if (v19 == -1) {
        a2 = nullptr;
      }
    }
    else {
      v20 = true;
    }
    if (a3 != nullptr) {
      break;
    }
    if (v20) {
      goto LABEL_88;
    }
  LABEL_29:
    if ((v63_.v63 & 1) != 0) {
      v23 = v63_.v64;
    }
    else {
      v23 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
    }
    if (v16 != (unsigned __int8*)&v17[v23]) {
      v24 = (unsigned int*)a2[3];
      if (v24 == (unsigned int*)a2[4]) {
        goto LABEL_48;
      }
      goto LABEL_34;
    }
    if (v23 < 1) {
      if ((v63_.v63 & 1) != 0) {
        v26 = v63_.v65;
        v63_.v64 = 2 * v23;
      }
      else {
        LOBYTE(v63_.v63) = 4 * v23;
        v26 = (unsigned __int8*)&v63_.v63 + 1;
      }
      v26[2 * v23] = 0;
    }
    else {
      NgxRoutine_bf140(&v63_.v63, v23, 0);
    }
    v27 = v63_.v64;
    v28 = 22;
    if ((v63_.v63 & 1) != 0) {
      v28 = (v63_.v63 & 0xFFFFFFFFFFFFFFFELL) - 1;
    }
    else {
      v27 = (unsigned __int8)v63_.v63 >> 1;
    }
    if (v28 > v27) {
      NgxRoutine_bf140(&v63_.v63, v28 - v27, 0);
      v17 = (char*)&v63_.v63 + 1;
      if ((v63_.v63 & 1) == 0) {
        goto LABEL_47;
      }
    LABEL_46:
      v17 = (const char*)v63_.v65;
      goto LABEL_47;
    }
    if ((v63_.v63 & 1) != 0) {
      v63_.v64 = v28;
      v63_.v65[v28] = 0;
      v17 = (char*)&v63_.v63 + 1;
      if ((v63_.v63 & 1) != 0) {
        goto LABEL_46;
      }
    }
    else {
      LOBYTE(v63_.v63) = 2 * v28;
      *((_BYTE*)&v63_.v63 + v28 + 1) = 0;
      v17 = (char*)&v63_.v63 + 1;
      if ((v63_.v63 & 1) != 0) {
        goto LABEL_46;
      }
    }
  LABEL_47:
    v16 = (unsigned __int8*)&v17[v23];
    v24 = (unsigned int*)a2[3];
    if (v24 == (unsigned int*)a2[4]) {
    LABEL_48:
      v25 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
      goto LABEL_49;
    }
  LABEL_34:
    v25 = *v24;
  LABEL_49:
    if (v16 == (unsigned __int8*)v17) {
      if (v25 == *(_DWORD*)(v13 + 96)) {
        v34 = 43;
        v15 = 0;
        goto LABEL_86;
      }
      if (v25 == *(_DWORD*)(v13 + 100)) {
        v34 = 45;
        v15 = 0;
        goto LABEL_86;
      }
    }
    if ((v66_.v66[0] & 1) != 0) {
      v29 = v66_.v66[1];
    }
    else {
      v29 = (unsigned __int64)LOBYTE(v66_.v66[0]) >> 1;
    }
    if (v25 != v66_.v68[0] | v29 == 0) {
      v31 = wmemchr_plt(v13, v25, 0x1Au);
      v32 = v13 + 104;
      if (v31 != 0) {
        v32 = v31;
      }
      v33 = (v32 - v13) >> 2;
      if (v33 > 23) {
        goto LABEL_88;
      }
      switch (v12) {
      case 8u:
      LABEL_64:
        if (v33 >= v60) {
          goto LABEL_88;
        }
        break;
      case 0x10u:
        if (v33 < 22) {
          break;
        }
        if (v16 == (unsigned __int8*)v17 || v16 - (unsigned __int8*)v17 > 2 ||
            *(v16 - 1) != 48) {
          goto LABEL_88;
        }
        v15 = 0;
        v34 = NgxData_9511c8[v33];
      LABEL_86:
        *v16++ = v34;
        v35 = a2[3];
        if (v35 == a2[4]) {
          goto LABEL_87;
        }
        goto LABEL_12;
      case 0xAu:
        goto LABEL_64;
      default:
        break;
      }
      ++v15;
      *v16++ = NgxData_9511c8[v33];
    LABEL_80:
      v35 = a2[3];
      if (v35 != a2[4]) {
        goto LABEL_12;
      }
    LABEL_87:
      (*(void (**)(__int64))(*a2 + 80LL))((__int64)a2);
    }
    else {
      if (v14 - v61_.v61 > 159) {
        goto LABEL_80;
      }
      *(_DWORD*)v14 = v15;
      v14 += 4;
      v15 = 0;
      v35 = a2[3];
      if (v35 == a2[4]) {
        goto LABEL_87;
      }
    LABEL_12:
      a2[3] = v35 + 4;
    }
  }
  v21 = (int*)a3[3];
  if (v21 == (int*)a3[4]) {
    v22 = (*(__int64 (**)(__int64))(*a3 + 72LL))((__int64)a3);
  }
  else {
    v22 = *v21;
  }
  if (v22 == -1) {
    a3 = nullptr;
  }
  if (v20 != (v22 == -1)) {
    goto LABEL_29;
  }
LABEL_88:
  if ((v66_.v66[0] & 1) != 0) {
    v36 = v66_.v66[1];
  }
  else {
    v36 = (unsigned __int64)LOBYTE(v66_.v66[0]) >> 1;
  }
  if (v36 != 0 && v14 - v61_.v61 <= 159) {
    *(_DWORD*)v14 = v15;
    v14 += 4;
  }
  v37 = NgxRoutine_e10f0(v17, v16, a5, v12);
  v38 = LOBYTE(v66_.v66[0]);
  *(_DWORD*)a6 = v37;
  v39 = v66_.v66[1];
  v40 = v38 & 1;
  if ((v38 & 1) == 0) {
    v39 = v38 >> 1;
  }
  if (v14 - v61_.v61 >= 5 && v39 != 0) {
    v41 = v14 - 4;
    if (v61_.v61 != v14 && v61_.v61 < v14 - 4) {
      v42 = (int*)(v14 - 4);
      v43 = &v61_.v62;
      do {
        v44 = *(v43 - 1);
        *(v43 - 1) = *v42;
        *v42-- = v44;
      } while (v43++ < v42);
      LODWORD(v38) = LOBYTE(v66_.v66[0]);
      v40 = v66_.v66[0] & 1;
    }
    v46 = (_BYTE*)v66_.v66[2];
    if (v40 == 0) {
      v46 = (char*)v66_.v66 + 1;
    }
    if (v61_.v61 >= (_BYTE*)v41) {
    LABEL_117:
      v51 = (unsigned __int8)*v46;
      if (*v46 != 0 && v51 != 255 && *(int*)v41 - 1 >= v51) {
        goto LABEL_120;
      }
    }
    else {
      v47 = (unsigned int)v38 >> 1;
      if (v40 != 0) {
        v47 = v66_.v66[1];
      }
      v48 = v61_.v61;
      v49 = &v46[v47];
      while (1) {
        v50 = (unsigned __int8)*v46;
        if (*v46 != 0 && v50 != 255 && *(_DWORD*)v48 != v50) {
          break;
        }
        ++v48;
        if (v49 - v46 > 1) {
          ++v46;
        }
        if (v48 >= v41) {
          goto LABEL_117;
        }
      }
    LABEL_120:
      *(_DWORD*)a5 = 4;
    }
  }
  if (a2 == nullptr) {
    v54 = true;
    if (a3 != nullptr) {
      goto LABEL_131;
    }
  LABEL_125:
    if (v54) {
      goto LABEL_135;
    }
    goto LABEL_136;
  }
  v52 = (int*)a2[3];
  if (v52 == (int*)a2[4]) {
    v53 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
  }
  else {
    v53 = *v52;
  }
  v54 = v53 == -1;
  if (v53 == -1) {
    a2 = nullptr;
  }
  if (a3 == nullptr) {
    goto LABEL_125;
  }
LABEL_131:
  v55 = (int*)a3[3];
  if (v55 == (int*)a3[4]) {
    v56 = (*(__int64 (**)(__int64))(*a3 + 72LL))((__int64)a3);
  }
  else {
    v56 = *v55;
  }
  if (((v54 ^ (v56 == -1)) & 1) == 0) {
  LABEL_135:
    *(_DWORD*)a5 |= 2u;
  }
LABEL_136:
  if ((v63_.v63 & 1) != 0) {
    NgxRoutine_430(v63_.v65, v63_.v63 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((v66_.v66[0] & 1) != 0) {
    NgxRoutine_430(v66_.v66[2], v66_.v66[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  return a2;
}

#pragma GCC visibility pop
