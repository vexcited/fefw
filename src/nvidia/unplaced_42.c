#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CudaDriverRoutine_1a4850(__int64, __int64, unsigned __int64);
__int64 CudaDriverRoutine_116120(__int64, char);
__int64 CudaDriverRoutine_125760(__int64, unsigned int, __int64);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_1a4510(__int64, __int64, __int64);
__int64 CudaDriverRoutine_1a4580(__int64);
__int64 CudaDriverRoutine_1d8c20(__int64, __int64);
__int64 CudaDriverRoutine_1d8d20(_QWORD*, __int64);
__int64 CudaDriverRoutine_1dd280(__int64*);
__int64 CudaDriverRoutine_206a70(__int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_206c10(__int64, _QWORD*, __int64, __int64);
__int64 CudaDriverRoutine_96c00(_QWORD*);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverStub_107f90(unsigned int**);
__int64 CudaDriverStub_108070(unsigned int**);
__int64 CudaDriverStub_1a4c70(_QWORD, _QWORD);
__int64 CudaDriverStub_1a4c80(_QWORD);
__int64 cuda_driver_ef460(__int64);
__int64 cuda_driver_f2040(__int64, int);
__int64 cuda_driver_helpers_1db5e0(_QWORD*);
__int64 cuda_driver_unplaced_9_1d8110(__int64*, __int64*, __int64, __int64*);
__int64 memcpy_plt(_QWORD, _QWORD);
__int64 nvidia_ed630(__int64, __int64, __int64, ...);
unsigned __int8 CudaDriverRoutine_1da060(__int64, _QWORD*, _QWORD*);
unsigned __int8 CudaDriverRoutine_98110(_BOOL8 result);
unsigned __int8 CudaDriverRoutine_9aa60(__int64, int);
extern _UNKNOWN* CudaDriverData_1422118;
extern __int64 (*CudaDriverData_1434738)(_QWORD, _QWORD);
unsigned __int64 CudaDriverRoutine_12dea0(atomic_ullong*);
void CudaDriverRoutine_43d8();
void CudaDriverRoutine_44d8();
__int64 nvidia_1da4a0(unsigned int** a1, __int64 a2, unsigned __int64 a3,
                      __int64* a4, _BYTE* a5);

__int64 nvidia_1da4a0(unsigned int** a1, __int64 a2, unsigned __int64 a3,
                      __int64* a4, _BYTE* a5)
{
  unsigned __int64 v5;
  char v8;
  void* v9;
  unsigned int* v10;
  __int64 (**v11)(unsigned int**, __int64);
  unsigned __int64 v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  int v27;
  int v28;
  _BOOL4 v29;
  _BOOL4 v30;
  unsigned int v31;
  __int64 v32;
  int v33;
  _BOOL4 v34;
  _BOOL4 v35;
  _BOOL4 v36;
  int v37;
  int v38;
  __int64 v39;
  int v40;
  char v41;
  unsigned int* v42;
  __int64 v43;
  unsigned int* v44;
  _QWORD* v45;
  _QWORD* v46;
  _QWORD* v47;
  _QWORD* v48;
  _BOOL4 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned int v55;
  unsigned __int64 v56;
  char v57;
  unsigned __int64 v58;
  _QWORD* v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64* v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  _QWORD* v68;
  _QWORD* v69;
  _QWORD* v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned int v79;
  _QWORD* v80;
  __int64 v81;
  _BOOL4 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned int v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  _QWORD* v99;
  __int64 v100;
  bool v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  unsigned int v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  char v116;
  unsigned __int64 v117;
  struct {
    char gap0_[8];
    __int64 v118;
    union {
      unsigned __int64 v119;
      char v120;
    };
    char gap24_[24];
    __int64 v124;
    __int128 v125;
    __int128 v126;
    __int128 v127;
    __int64 v128;
    char gap112_[32];
    __int64 v129;
    char gap152_[32];
    __int64 v130;
    __int64 v131;
  } f_;
  _QWORD* v132;

  v5 = a3;
  v8 = 0;
  v9 = CudaDriverData_1422118;
  while (1) {
    CudaDriverStub_107f90(a1 + 16);
    if (a2 == 0) {
      goto LABEL_42;
    }
    v10 = a1[1];
    if (v10 != nullptr && *((_BYTE*)v10 + 16379) != 0) {
      *(_QWORD*)a2 |= 0x800000000000uLL;
    }
    v11 = (__int64 (**)(unsigned int**, __int64))*a1;
    v12 = *(_QWORD*)a2;
    v13 = (*a1)[3684];
    if (*((_BYTE*)&CudaDriverRoutine_43d8 + (_QWORD)v9 + 3) != 0) {
      if (v13 == 0) {
        v14 = *((_DWORD*)v9 + ((v12 >> 9) & 0x3F) + 4343);
        if (v14 != 1) {
          v15 = *((_DWORD*)v11 + 3685);
          if (v14 != 2 && v15 == 0) {
            goto LABEL_23;
          }
          goto LABEL_114;
        }
      }
    }
    else if (v13 == 0) {
      if (*((_DWORD*)v11 + 3685) == 0) {
        goto LABEL_23;
      }
    LABEL_114:
      if ((*(_QWORD*)a2 & 7LL) == 1 && a1[249] != nullptr) {
        v12 = v12 & 0xFFEFFFFFFCFFFFF8LL | 0x10000001000002LL;
      LABEL_22:
        *(_QWORD*)a2 = v12;
        goto LABEL_23;
      }
      goto LABEL_23;
    }
    if ((*(_QWORD*)a2 & 7LL) != 1) {
      *(_DWORD*)(a2 + 348) = -1;
      v12 = v12 & 0xFF7FFFFFFFFFFF8LL | 0x8000000000001LL;
      *(_QWORD*)a2 = v12;
    }
    if ((v12 & 0x3000000) != 0) {
      v17 = v12 & 0xFFFFFFFFFFFFFFC7LL;
      v18 = 16;
      if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)v9 + 2) & 1) == 0) {
        v18 = 24;
      }
      v12 = v18 | v17;
      goto LABEL_22;
    }
  LABEL_23:
    v19 = v12 & 0xF800000000LL;
    v20 = v12 & 0x7E00;
    if ((*((_BYTE*)&CudaDriverRoutine_44d8 + (_QWORD)v9) & 2) != 0) {
      v21 = *(_QWORD*)(a2 + 8);
      if ((v12 & 0x7C0000000000000LL) != 0 && v20 != 7680 && v19 == 0) {
        v21 |= 0x3000uLL;
        *(_QWORD*)(a2 + 8) = v21;
      }
    }
    else {
      v21 = *(_QWORD*)(a2 + 8);
    }
    if (v20 == 7680 || v19 != 0) {
      if ((v21 & 0xF800) != 0) {
        goto LABEL_35;
      }
    }
    else if ((v12 & 0x7C0000000000000LL) == 0 && (v21 & 0xF800) != 0) {
    LABEL_35:
      *(_QWORD*)(a2 + 8) = v21 & 0xFFFFFFFFFFFF07FFLL;
    }
    v22 = *(_DWORD*)((char*)((_UNKNOWN*)0x1850LL) + (_QWORD)v9);
    if ((v22 & 0x80000000) == 0 && (v12 & 0x8000000000007LL) != 1 &&
        v20 != 7680 && (v12 & 0x7C0000000000000LL) != 0 &&
        CudaDriverRoutine_9aa60((__int64)*a1, v22)) {
      *(_QWORD*)(a2 + 8) =
          *(_QWORD*)(a2 + 8) & 0xFFFFFFFFFFFFF9FFLL |
          ((*(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1850LL) + (_QWORD)v9) & 3LL) << 9);
    }
  LABEL_42:
    v23 = CudaDriverRoutine_12e510(1, 568);
    if (v23 != 0) {
      break;
    }
    v31 = 2;
    CudaDriverStub_108070(a1 + 16);
    if ((v8 & 1) != 0) {
      return v31;
    }
  LABEL_77:
    v41 = cuda_driver_f2040(**a1, *(_DWORD*)a2 & 7);
    v42 = a1[1];
    if (v42 != nullptr && (v43 = *((_QWORD*)v42 + 11)) != 0 &&
        *(_QWORD*)(v43 + 8) != 0 && *(_QWORD*)(v43 + 16) != 0) {
      CudaDriverRoutine_98340((__int64)a1[1]);
      CudaDriverRoutine_116120(*(_QWORD*)(*((_QWORD*)a1[1] + 11) + 8LL), 0);
      CudaDriverRoutine_96c00(*(_QWORD**)(*((_QWORD*)a1[1] + 11) + 16LL));
      v44 = a1[1];
      v45 = *((_QWORD**)v44 + 128);
      if (v45 != nullptr) {
        CudaDriverRoutine_96c00(v45);
        v44 = a1[1];
      }
      v46 = *((_QWORD**)v44 + 129);
      if (v46 != nullptr) {
        CudaDriverRoutine_96c00(v46);
        v44 = a1[1];
      }
      v47 = *((_QWORD**)v44 + 130);
      if (v47 != nullptr) {
        CudaDriverRoutine_96c00(v47);
        v44 = a1[1];
      }
      v48 = *((_QWORD**)v44 + 131);
      v8 = 1;
      if (v48 != nullptr) {
        CudaDriverRoutine_96c00(v48);
      }
    }
    else {
      v8 = 1;
      if (v41 == 0) {
        return 2;
      }
    }
  }
  v24 = v23;
  if (*((_BYTE*)((_UNKNOWN*)0x1120LL) + (_QWORD)v9) != 0) {
    *(_BYTE*)(v23 + 464) = 1;
  }
  v25 = *(_QWORD*)(a2 + 8);
  if ((v25 & 0xE000000000LL) == 0x2000000000LL) {
    *(_QWORD*)(v23 + 528) = *(_QWORD*)(a2 + 328);
    v108 = *(_QWORD*)(a2 + 336);
    *(_QWORD*)(v23 + 64) = v5;
    *(_QWORD*)(v23 + 536) = v108;
    v109 = *(_QWORD*)(a2 + 264) + v108;
    *(_QWORD*)(v23 + 96) = v109;
    *(_QWORD*)(v23 + 104) = v109;
    *(_QWORD*)(v23 + 504) = 1;
    *a4 = v23;
    goto LABEL_200;
  }
  v26 = *(_QWORD*)a2;
  v132 = nullptr;
  v27 = (v26 & 0x7E00) == 0;
  if ((v26 & 7) == 0) {
    ++v27;
  }
  if ((v26 & 0x700000000LL) != 0) {
    v28 = v27;
  }
  else {
    v28 = v27 + 1;
  }
  if ((v26 & 0x2000000000000LL) != 0) {
    v29 = *(_QWORD*)(a2 + 256) == 0;
    if ((v26 & 0x1000000000000LL) == 0) {
      goto LABEL_57;
    }
  LABEL_53:
    v30 = *(_QWORD*)(a2 + 264) == 0;
  }
  else {
    v29 = false;
    if ((v26 & 0x1000000000000LL) != 0) {
      goto LABEL_53;
    }
  LABEL_57:
    v30 = false;
  }
  v32 = v26 & 0x800000000000LL;
  v33 = v29 + v30;
  v34 = (v26 & 0x800000000000LL) == 0;
  v35 = (v26 & 0x2000000000000LL) != 0 && (v26 & 0x800000000000LL) == 0;
  v36 = (v26 & 0x1000000000000LL) != 0 && (v26 & 0x800000000000LL) == 0;
  v37 = v35 + v36;
  if (*(_QWORD*)(a2 + 296) == 0) {
    v34 = false;
  }
  v38 = v28 + v37 + v33 + v34;
  v39 = v26 & 0xF800000000LL;
  if ((v26 & 0xF800000000LL) == 0x1800000000LL) {
    v49 = *(unsigned int***)(*(_QWORD*)(a2 + 176) + 632LL) == a1 &&
          (v25 & 2) == 0;
    if ((v49 | v38) != 0) {
      goto LABEL_75;
    }
  }
  else {
    if (v39 == 0x1000000000LL) {
      if ((v26 & 7) == 1) {
        v40 = v38;
      }
      else {
        v40 = v38 + 1;
      }
      if (*(_QWORD*)(a2 + 96) != 0) {
        v38 = v40;
      }
      else {
        v38 = v40 + 1;
      }
    }
    if ((((v26 & 0x10000000000LL) != 0) | v38) != 0) {
    LABEL_75:
      v31 = 999;
      goto LABEL_76;
    }
  }
  if (v39 != 0x1800000000LL || (v50 = *(_QWORD*)(a2 + 168)) == 0) {
    CudaDriverRoutine_98110((_BOOL8)a1[1]);
    v54 = *(_QWORD*)a2;
    if ((*(_QWORD*)a2 & 0x7C000F800000000LL) == 0x280000800000000LL) {
      v52 = *(_QWORD*)(a2 + 112);
      if ((v54 & 0x800000000000LL) == 0) {
        v53 = CudaDriverRoutine_1d8d20(a1, a2);
        v132 = (_QWORD*)v53;
        v51 = v5;
        if (v53 == 0) {
          goto LABEL_123;
        }
        goto LABEL_101;
      }
    }
    else if ((v54 & 0xF800000000LL) == 0x1000000000LL) {
      v64 = *(_QWORD*)(a2 + 96);
      v65 = *(_QWORD*)((char*)((_UNKNOWN*)0x10A0LL) + (_QWORD)v9);
      v66 = v64 & ~v65;
      v67 = (v65 + v64 + v5 - 1) & ~v65;
      v68 = CudaDriverRoutine_1a4850(
          *(_QWORD*)((char*)((_UNKNOWN*)0x1510LL) + (_QWORD)v9), v64, v64 + v5);
      v69 = CudaDriverRoutine_1a4850(
          *(_QWORD*)((char*)((_UNKNOWN*)0x1510LL) + (_QWORD)v9), v66,
          *(_QWORD*)((char*)((_UNKNOWN*)0x10A0LL) + (_QWORD)v9) + v66);
      v70 = CudaDriverRoutine_1a4850(
          *(_QWORD*)((char*)((_UNKNOWN*)0x1510LL) + (_QWORD)v9),
          v67 - *(_QWORD*)((char*)((_UNKNOWN*)0x10A0LL) + (_QWORD)v9), v67);
      if (v68 != nullptr) {
        nvidia_ed630((__int64)"CUDA", 0,
                     (__int64)"Request overlaps with overlapping allocation\n");
        v31 = 712;
        goto LABEL_76;
      }
      v97 = *(_QWORD*)(a2 + 96);
      v98 = *(_QWORD*)((char*)((_UNKNOWN*)0x10A0LL) + (_QWORD)v9);
      if (v69 != nullptr) {
        v99 = v70;
        v100 = CudaDriverStub_1a4c80(v69);
        v101 = CudaDriverRoutine_1da060(
            v100, (_QWORD*)(*(_QWORD*)(v100 + 72) + 240LL), (_QWORD*)a2);
        v70 = v99;
        if (!v101) {
          nvidia_ed630(
              (__int64)"CUDA", 0,
              (__int64)"Request is in the same page as another allocation that "
                       "has an incompatable configuration\n");
          v5 = a3;
          v31 = 1;
          goto LABEL_76;
        }
      }
      v52 = v98 & v97;
      if (v70 != nullptr) {
        v5 = a3;
        if (v69 != v70) {
          v102 = CudaDriverStub_1a4c80(v70);
          v51 = a3;
          if (CudaDriverRoutine_1da060(v102,
                                       (_QWORD*)(*(_QWORD*)(v102 + 72) + 240LL),
                                       (_QWORD*)a2)) {
            goto LABEL_123;
          }
          nvidia_ed630(
              (__int64)"CUDA", 0,
              (__int64)"Request is in the same page as another allocation that "
                       "has an incompatable configuration\n");
          v31 = 1;
          goto LABEL_76;
        }
      }
      else {
        v5 = a3;
      }
    }
    else {
      if ((*(_BYTE*)(a2 + 10) & 0x10) != 0) {
        v53 = *(_QWORD*)(a2 + 312);
        v52 = *(_QWORD*)(a2 + 320);
        v132 = (_QWORD*)v53;
        v51 = v5;
        if (v53 == 0) {
          goto LABEL_123;
        }
        goto LABEL_101;
      }
      v52 = 0;
    }
    v51 = v5;
    goto LABEL_123;
  }
  v52 = *(_QWORD*)(v50 + 80);
  v51 = *(_QWORD*)(v50 + 88);
  if ((v32 | v25 & 2) == 0) {
    v53 = CudaDriverRoutine_1d8c20((__int64)a1, *(_QWORD*)(a2 + 176));
    v132 = (_QWORD*)v53;
    if (v53 != 0) {
    LABEL_101:
      *(_QWORD*)(v24 + 80) = v52;
      v55 = 0;
      v56 = *(_QWORD*)(v53 + 136);
      *(_QWORD*)(v24 + 72) = v53;
      *(_QWORD*)(v24 + 88) = (v51 + v56 - 1) / v56 * v56;
      goto LABEL_102;
    }
  }
LABEL_123:
  v71 = (*((__int64 (**)(unsigned int**, __int64))*a1 + 2429))(a1, a2);
  v72 = *(_QWORD*)a2;
  if ((*(_QWORD*)a2 & 0x7F000000LL) == 0 || (v72 & 0x3800000000000LL) != 0 ||
      (v72 & 0x7C0000000000000LL) != 0 &&
          *((_BYTE*)((_UNKNOWN*)0x1164LL) + (_QWORD)v9 + 3) != 0) {
    v73 = v72 | 0x800000000000LL;
    *(_QWORD*)a2 = v72 | 0x800000000000LL;
    goto LABEL_128;
  }
  v82 = (v72 & 0xF800000000LL) == 0 && v5 <= v71;
  v83 = 0x800000000000LL;
  if ((v72 & 0xF800000000LL) == 0 && v5 <= v71) {
    v83 = 0;
  }
  v73 = v83 | v72;
  *(_QWORD*)a2 = v83 | v72;
  if (!v82) {
  LABEL_128:
    memcpy_plt(&f_.v124, a2);
    v74 = (v73 >> 35) & 0x1F;
    if ((_DWORD)v74 == 3) {
      v78 = *(_QWORD*)(a2 + 176);
      v5 = a3;
    }
    else {
      v5 = a3;
      if ((_DWORD)v74 == 2) {
        v75 = *(_QWORD*)(a2 + 96);
        v76 = *(_QWORD*)((char*)((_UNKNOWN*)0x10A0LL) + (_QWORD)v9);
        v77 = v75 & ~v76;
        f_.v130 = v75;
        f_.v131 = a3;
        f_.v129 = v77;
        if (v77 == 0) {
          nvidia_ed630((__int64)"CUDA", 0,
                       (__int64)"Address is null after page alignment\n");
          v31 = 1;
          goto LABEL_76;
        }
        v51 = ((v75 + a3 + v76) & ~v76) - v77;
      LABEL_135:
        v79 = cuda_driver_unplaced_9_1d8110((__int64*)a1, &f_.v124, v51,
                                            (__int64*)&v132);
        if (v79 != 0) {
        LABEL_136:
          v31 = v79;
          goto LABEL_76;
        }
        v80 = v132;
        *(_QWORD*)(a2 + 8) =
            *(_QWORD*)(a2 + 8) & 0xFFFFFFFFBFFFFFFFLL |
            ((unsigned __int64)((v132[31] & 0x40000000LL) != 0) << 30);
        v81 = v80[30];
        if ((v81 & 0x1000000000000LL) != 0 && (v81 & 0x7C000000) != 0) {
          v52 = v80[63] - v80[14];
        }
        if ((v81 & 0x800000000000LL) != 0) {
          *(_QWORD*)(v24 + 80) = v52;
          *(_QWORD*)(v24 + 88) = v51;
        }
        else {
          v79 = CudaDriverRoutine_206c10((__int64)a1, v80, v24, v5);
          if (v79 != 0) {
            goto LABEL_136;
          }
          v80 = v132;
        }
        *(_QWORD*)(v24 + 72) = v80;
        v55 = 1;
        v57 = 0;
        v59 = v80;
        v60 = v5;
        if ((*(_QWORD*)(a2 + 8) & 0x100000) == 0) {
          goto LABEL_103;
        }
        goto LABEL_106;
      }
      CudaDriverRoutine_98110((_BOOL8)a1[1]);
      v78 = a2;
      if ((*(_QWORD*)a2 & 0x7C000F800000000LL) != 0x280000800000000LL) {
        goto LABEL_135;
      }
    }
    v51 = *(_QWORD*)(v78 + 128);
    goto LABEL_135;
  }
  f_.v119 = v71;
  v5 = a3;
  v31 = CudaDriverRoutine_206a70((__int64)a1, a2, v24, v51);
  if (v31 != 0) {
    goto LABEL_76;
  }
  if (*(_QWORD*)(v24 + 72) == 0) {
    v73 = *(_QWORD*)a2;
    v103 = *(_QWORD*)a2 & 7LL;
    if ((_DWORD)v103 == 1) {
      v51 = ((unsigned __int64)a1[9] + f_.v119 - 1) / (unsigned __int64)a1[9] *
            (_QWORD)a1[9];
    }
    else {
      v104 = f_.v119;
      v51 = f_.v119;
      if ((_DWORD)v103 == 2) {
        v105 = *((_DWORD*)a1 + 16);
        LODWORD(f_.v124) = v105;
        if (v73 >> 60 != 0) {
          if ((*((unsigned int (**)(unsigned __int64, __int64*))*a1 + 2433))(
                  v73 >> 60, &f_.v124) != 0) {
            v105 = *((_DWORD*)a1 + 16);
          }
          else {
            v105 = f_.v124;
          }
          v104 = f_.v119;
        }
        v73 = *(_QWORD*)a2;
        v51 = (v104 + v105 - 1) / v105 * v105;
      }
    }
    goto LABEL_128;
  }
  v55 = 0;
LABEL_102:
  v57 = 1;
  v58 = *(_QWORD*)(a2 + 8) & 0xFFFFFFFFBFFFFFFFLL;
  *(_QWORD*)(a2 + 8) = v58;
  v59 = *(_QWORD**)(v24 + 72);
  v60 = v5;
  if ((v58 & 0x100000) == 0) {
  LABEL_103:
    if (v5 >= v59[16]) {
      v60 = v59[16];
    }
    else {
      v60 = v5;
    }
  }
LABEL_106:
  *(_QWORD*)(v24 + 64) = v60;
  *(_QWORD*)(v24 + 120) = CudaDriverRoutine_12dea0(
      (atomic_ullong*)&(*(_BYTE(*)[12])0x10C4LL)[(_QWORD)v9 + 4]);
  *(_QWORD*)(v24 + 504) = 1;
  v61 = v59[78];
  *(_QWORD*)v24 = 0;
  *(_QWORD*)(v24 + 8) = 0;
  if (v61 != 0) {
    v62 = *(__int64**)(v61 + 8);
    if (v62 != nullptr) {
      *v62 = v24;
    }
    *(_QWORD*)v24 = v61;
    *(_QWORD*)(v24 + 8) = *(_QWORD*)(v61 + 8);
    *(_QWORD*)(v61 + 8) = v24;
    v63 = cuda_driver_helpers_1db5e0((_QWORD*)v24);
    if (v63 != 0) {
    LABEL_110:
      v31 = v63;
      if (v63 != 2) {
        nvidia_ed630((__int64)"CUDA", 0,
                     (__int64)"CPU virtual address assignment failure\n");
      }
      goto LABEL_76;
    }
  }
  else {
    v59[78] = v24;
    v63 = cuda_driver_helpers_1db5e0((_QWORD*)v24);
    if (v63 != 0) {
      goto LABEL_110;
    }
  }
  v84 = *(_QWORD*)(v24 + 72);
  f_.v120 = v57;
  v85 = *(_QWORD*)(v84 + 240);
  v86 = *(_QWORD*)(v24 + 80) + *(_QWORD*)(v84 + 112);
  v87 = ((unsigned int)v85 >> 26) & 0x1F;
  if ((*(_DWORD*)(v84 + 240) & 0x78000000) != 0x8000000 &&
      v87 - 9 < 0xFFFFFFFE) {
    v88 = 0;
  }
  else {
    v88 = *(_QWORD*)(v24 + 80) + *(_QWORD*)(v84 + 112);
  }
  if ((v85 & 0x20000) == 0 && (*(_BYTE*)(v84 + 250) & 0x10) == 0) {
    v89 = *(_QWORD*)(v84 + 632);
    if ((*(_DWORD*)(v84 + 240) & 0x78000000) == 0x8000000 ||
        v87 - 9 >= 0xFFFFFFFE) {
      f_.v118 = *(_QWORD*)(v84 + 632);
      f_.v128 = 0;
      f_.v127 = (__typeof__(f_.v127)){0};
      f_.v126 = (__typeof__(f_.v126)){0};
      f_.v125 = (__typeof__(f_.v125)){0};
      v90 = *(_QWORD*)(v24 + 64);
      *((_QWORD*)&f_.v125 + 1) = v86;
      v91 = *(_QWORD*)(v89 + 24);
      f_.v124 = v90;
      LOBYTE(f_.v125) = 1;
      v92 = CudaDriverRoutine_1a4510(v24 + 128, v91, (__int64)&f_.v124);
      if (v92 == 0) {
        CudaDriverStub_1a4c70(*(_QWORD*)(v24 + 128), v24);
        v89 = f_.v118;
        v87 = (*(_DWORD*)(v84 + 240) >> 26) & 0x1F;
        goto LABEL_158;
      }
    LABEL_161:
      v31 = v92;
      v95 = *(_QWORD*)(v24 + 128);
      v5 = a3;
      if (v95 != 0) {
        CudaDriverRoutine_1a4580(v95);
        *(_QWORD*)(v24 + 128) = 0;
      }
      v96 = *(_QWORD*)(v24 + 136);
      if (v96 != 0) {
        CudaDriverRoutine_1a4580(v96);
        *(_QWORD*)(v24 + 136) = 0;
      }
      *(_QWORD*)(v24 + 96) = 0;
      *(_QWORD*)(v24 + 104) = 0;
      if (v31 != 2) {
        nvidia_ed630((__int64)"CUDA", 0,
                     (__int64)"GPU virtual address assignment failure\n");
      }
    LABEL_76:
      CudaDriverRoutine_1dd280((__int64*)v24);
      CudaDriverStub_108070(a1 + 16);
      if ((v8 & 1 | (v31 != 2)) != 0) {
        return v31;
      }
      goto LABEL_77;
    }
  LABEL_158:
    if (v87 != 0 && v87 != 5) {
      f_.v128 = 0;
      f_.v127 = (__typeof__(f_.v127)){0};
      f_.v126 = (__typeof__(f_.v126)){0};
      f_.v125 = (__typeof__(f_.v125)){0};
      v93 = *(_QWORD*)(v24 + 64);
      *((_QWORD*)&f_.v125 + 1) = v86;
      v94 = *(_QWORD*)(v89 + 32);
      f_.v124 = v93;
      LOBYTE(f_.v125) = 1;
      v92 = CudaDriverRoutine_1a4510(v24 + 136, v94, (__int64)&f_.v124);
      if (v92 != 0) {
        goto LABEL_161;
      }
      CudaDriverStub_1a4c70(*(_QWORD*)(v24 + 136), v24);
    }
  }
  v106 = *(_QWORD*)(v24 + 528);
  v5 = a3;
  *(_QWORD*)(v24 + 96) = v88;
  *(_QWORD*)(v24 + 104) = v86;
  if (v106 == 0 &&
      (*(_QWORD*)(*(_QWORD*)(v24 + 72) + 240LL) & 0x7E00LL) == 0x1E00) {
    if ((*(_QWORD*)a2 & 0x700000000000LL) != 0) {
      v107 = 3;
    }
    else {
      v107 = 2;
    }
    v31 = CudaDriverRoutine_125760(v24, v55, v107);
    if (v31 != 0) {
      goto LABEL_76;
    }
    *(_BYTE*)(v24 + 472) |= 1u;
  }
  if ((*(_QWORD*)a2 & 0xF800000000LL) == 0x1800000000LL) {
    v111 = *(_QWORD*)(a2 + 168);
    if (v111 != 0 && (*(_BYTE*)(a2 + 11) & 8) == 0) {
      *(_QWORD*)(v24 + 360) = v111;
      *(_BYTE*)(v24 + 368) = *(_BYTE*)(a2 + 5) & 1;
      CudaDriverStub_107f90(*(_QWORD*)(*(_QWORD*)(v111 + 72) + 632LL) + 144LL);
      v112 = *(_QWORD*)(v24 + 360);
      *(_QWORD*)(v24 + 384) = *(_QWORD*)(v112 + 328);
      *(_QWORD*)(v112 + 328) = v24;
      v113 = *(_QWORD*)(v24 + 360);
      v114 = *(_QWORD*)(v113 + 328);
      v115 = *(_QWORD*)(v114 + 384);
      if (v115 != 0) {
        *(_QWORD*)(v115 + 376) = v114;
        v113 = *(_QWORD*)(v24 + 360);
      }
      CudaDriverStub_108070(*(_QWORD*)(*(_QWORD*)(v113 + 72) + 632LL) + 144LL);
    }
  }
  cuda_driver_ef460(v24);
  v116 = f_.v120;
  if (CudaDriverData_1434738 == nullptr) {
    v116 = 1;
  }
  if ((v116 & 1) == 0) {
    v117 = *(_QWORD*)(v24 + 72);
    f_.v124 = *(_QWORD*)(*(_QWORD*)(v117 + 632) + 8LL);
    f_.v125 = v117;
    CudaDriverData_1434738(5, &f_.v124);
  }
  *a4 = v24;
  if (a5 != nullptr) {
    *a5 = v55;
  }
LABEL_200:
  CudaDriverStub_108070(a1 + 16);
  return 0;
}

#pragma GCC visibility pop
