#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_114a80(__int64, __int64, int);
__int64 CudaDriverRoutine_116fa0(__int64);
__int64 CudaDriverRoutine_1197e0(__int64 result);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_8ea00(__int64, __int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_116790(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_12db70(_QWORD, _QWORD);
__int64 CudaDriverStub_12dc90(_QWORD);
__int64 CudaDriverStub_57450(_QWORD);
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_unplaced_9_1bb6a0(unsigned __int64, unsigned __int64);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
unsigned __int8 CudaDriverRoutine_9ac20(__int64);
extern __int128 CudaDriverData_1115690;
extern __int64 (*CudaDriverData_14324a0)(_QWORD*);
void CudaDriverStub_10fdf0();
void CudaDriverStub_111420();
__int64 nvidia_60ae0(__int64 a1, int a2, int a3);
__int64 nvidia_8e890(__int64* a1);
__int64 nvidia_bf0d0(__int64* a1, __int64 a2);
__int64 nvidia_12d6e0(__int64 a1, unsigned __int64* a2, __int64 a3);
void nvidia_1b3d20(__int64 a1, _BYTE* a2);
void nvidia_1fb7e0(__int64 a1, _QWORD* a2);
_DWORD* CudaDriverRoutine_1a1f40(unsigned int);
_QWORD* CudaDriverRoutine_5f100(__int64, unsigned int*, __int64);
_QWORD* cuda_driver_checks_1023a0(__int64, unsigned __int64, unsigned __int64);
__int64 CudaDriverRoutine_105c20(__int64, __int64, __int64);
__int64 CudaDriverRoutine_106130(__int64, __int64);
__int64 CudaDriverRoutine_106280(__int64, __int64);
__int64 CudaDriverRoutine_106300(__int64, __int64);
__int64 CudaDriverRoutine_106390(__int64 result, _QWORD*);
__int64 CudaDriverRoutine_1064c0(_WORD*, __int64, _QWORD*);
__int64 CudaDriverRoutine_106940(__int64, char);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_114270(unsigned int);
__int64 CudaDriverRoutine_1181a0(__int64);
__int64 CudaDriverRoutine_11ae30(_QWORD*);
__int64 CudaDriverRoutine_11ce20(__int64, __int64);
__int64 CudaDriverRoutine_11de00(__int64);
__int64 CudaDriverRoutine_11f370(__int64, unsigned int);
__int64 CudaDriverRoutine_11f790(__int64, unsigned int);
__int64 CudaDriverRoutine_11fd60(__int64);
__int64 CudaDriverRoutine_1255b0(__int64);
__int64 CudaDriverRoutine_1274d0(__int64 result, __int64);
__int64 CudaDriverRoutine_127630(__int64 result, __int64);
__int64 CudaDriverRoutine_12dd10(unsigned int, __int64);
__int64 CudaDriverRoutine_1a0a80(__int64, __int64);
__int64 CudaDriverRoutine_1a3d20(__int64, unsigned __int8*);
__int64 CudaDriverRoutine_1e9390(__int64 result);
__int64 CudaDriverRoutine_205860(__int64);
__int64 CudaDriverRoutine_20f580(__int64 result);
__int64 CudaDriverRoutine_6dac0(int, char);
__int64 CudaDriverRoutine_6f0c0(int*, __int64);
__int64 CudaDriverRoutine_76d70();
__int64 CudaDriverRoutine_98190(__int64, unsigned int);
__int64 CudaDriverRoutine_a2830(__int64 result);
__int64 CudaDriverRoutine_a2a80(__int64*, _BYTE*, unsigned __int64);
__int64 CudaDriverRoutine_aa2e0(__int64, __int64, __int64, char*);
__int64 CudaDriverRoutine_d2fe0(__int64, unsigned int*);
__int64 CudaDriverRoutine_e1d00(__int64);
__int64 CudaDriverRoutine_f15a0(_QWORD*, unsigned int*);
__int64 CudaDriverRoutine_f3a80(__int64 result, unsigned __int64);
__int64 CudaDriverStub_102050(_QWORD);
__int64 CudaDriverStub_102350(__int64);
__int64 CudaDriverStub_102360(_QWORD);
__int64 CudaDriverStub_107f90_alt1(char*);
__int64 CudaDriverStub_108070_alt1(char*);
__int64 CudaDriverStub_118070(__int64);
__int64 CudaDriverStub_12dce0(_QWORD);
__int64 CudaDriverStub_12dcf0(_QWORD);
__int64 CudaDriverStub_12dd00(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_12e550(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_8b280(_QWORD);
__int64 CudaDriverStub_f0f50(_QWORD);
__int64 CudaDriverStub_f2df0(_QWORD);
__int64 cuda_driver_108520(__int64);
__int64 cuda_driver_118980(__int64);
__int64 cuda_driver_121520(__int64);
__int64 cuda_driver_1b9740(__int64 result, __int64, int);
__int64 cuda_driver_205940(__int64, __int64, __int64*, unsigned int);
__int64 cuda_driver_a2fc0(__int64);
__int64 cuda_driver_c3200(__int64, char);
__int64 cuda_driver_checks_102100(__int64, unsigned __int64);
__int64 cuda_driver_checks_102d80(__int64, unsigned __int64);
__int64 cuda_driver_checks_102f50(unsigned int, unsigned int);
__int64 cuda_driver_checks_103390(__int64, char);
__int64 cuda_driver_d2c20(_QWORD*, __int64);
__int64 cuda_driver_f1d70(__int64, __int64, _QWORD*);
__int64 cuda_driver_f2040(__int64, int);
__int64 cuda_driver_f3640(__int64, __int64*, __int64, __int64, __int64*);
__int64 cuda_driver_f3920(__int64, __int64*, __int64, _BYTE*);
__int64 cuda_driver_predicates_921f0(__int64);
__int64 cuda_driver_unplaced_5_d3250(__int64*, __int64, __int64*, _QWORD*,
                                     __int64, __int64, int**, __int64, int);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt_alt1(__int64, int, unsigned __int64);
__int64 nvidia_11fa80(__int64);
__int64 nvidia_1213c0_alt1();
__int64 nvidia_ed630(__int64, __int64, __int64, ...);
__int64 nvidia_f2e00(unsigned int*, __int64, unsigned __int64*, __int64*);
unsigned __int8 CudaDriverRoutine_11f2f0(__int64);
unsigned __int8 CudaDriverRoutine_11f690(__int64*);
unsigned __int8 CudaDriverRoutine_11f6d0(__int64);
unsigned __int8 CudaDriverRoutine_92440(_QWORD*);
unsigned __int8 CudaDriverRoutine_98110(_BOOL8 result);
unsigned __int8 CudaDriverStub_985a0(__int64);
unsigned int cuda_driver_12ea30(int*);
bool cuda_driver_checks_1031f0(__int64);
bool cuda_driver_checks_103220(__int64);
unsigned __int8 cuda_driver_checks_103250(__int64);
double CudaDriverRoutine_99e50(__int64, unsigned __int64*);
extern _BYTE CudaDriverData_4c38[8];
extern _DWORD* CudaDriverData_14230c0;
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN** CudaDriverData_1423090;
extern __int128 CudaDriverData_14302d0;
extern __int128 CudaDriverData_14302e0;
extern __int128 CudaDriverData_1432510;
extern __int128 CudaDriverData_1432530;
extern __int64 (*CudaDriverData_1440750)(_DWORD*);
extern __int64 CudaDriverData_14302f0;
extern __int64 CudaDriverData_1432520;
extern __int64 CudaDriverData_1432540;
extern char CudaDriverData_14324b0;
extern char CudaDriverData_14324b4;
extern int* CudaDriverData_1423078;
extern int CudaDriverData_14324b8;
extern int CudaDriverData_14324cc;
extern int CudaDriverData_1434ac0;
extern void (*CudaDriverData_1421fe8[25])();
extern void (*CudaDriverData_1421ff0[24])();
extern void (*CudaDriverData_1421ff8[23])();
extern void (*CudaDriverData_1422000[22])();
extern void (*CudaDriverData_1422008[21])();
extern void (*CudaDriverData_1422010[20])();
extern void (*CudaDriverData_1422018[19])();
extern void (*CudaDriverData_1422028[17])();
extern void (*CudaDriverData_1422030[16])();
extern void (*CudaDriverData_1422038[15])();
extern void (*CudaDriverData_1422060[10])();
extern void (*CudaDriverData_1422090[4])();
extern void (*CudaDriverData_1422098[3])();
float cuda_driver_11f820(_BYTE*, float*);
long double CudaDriverRoutine_11f810(long double*, __int64);
unsigned __int64 CudaDriverRoutine_12dea0(atomic_ullong*);
unsigned __int64 CudaDriverRoutine_8b200(__int64, int, int);
unsigned __int64 CudaDriverRoutine_f0f30(unsigned int*);
unsigned int* CudaDriverRoutine_4edf0(unsigned int* result, int, int, int, int,
                                      unsigned int, int*, int*, int*);
void CudaDriverRoutine_4768();
void CudaDriverRoutine_4780();
void CudaDriverRoutine_4e50();
__int64 nvidia_140e0(__int64 a1);
unsigned __int64 nvidia_4e5a0(__int64* a1, unsigned int a2, unsigned int a3,
                              unsigned int a4, unsigned int a5, unsigned int a6,
                              int a7, unsigned int a8, unsigned int a9, int a10,
                              unsigned int a11, int a12);
__int64 nvidia_4e900(unsigned int* a1, unsigned int a2, unsigned int a3,
                     unsigned int a4, unsigned int a5, unsigned int a6, int a7,
                     unsigned int a8, unsigned int a9, int a10,
                     unsigned int a11, int a12);
unsigned int* nvidia_4ef40(unsigned int* result, unsigned int a2,
                           unsigned int a3, unsigned int a4, unsigned int a5,
                           unsigned int a6, unsigned int a7, unsigned int a8,
                           unsigned int a9, int a10, int a11, unsigned int a12,
                           __int64* a13);
__int64 nvidia_6d860(int a1);
__int64 nvidia_6dc60();
__int64 nvidia_6e2b0(_DWORD* a1);
unsigned __int8 nvidia_6e8f0_alt1(__int64 a1, long double a2);
__int64 nvidia_6f720(_DWORD* a1);
__int64 nvidia_de8e0(__int64 result);
__int64 nvidia_105e80(_QWORD* a1, __int64 a2, _QWORD* a3, __int64 a4, int a5);
__int64 nvidia_1212d0();
__int64 nvidia_1213c0(__int64 result);
__int64 nvidia_121c60(__int64* a1);
__int64 nvidia_12ce00(__int64* a1, unsigned __int64 a2, unsigned __int64 a3);
__int64 nvidia_12cef0(__int64* a1, _QWORD* a2);
__int64 nvidia_12d000(__int64* a1, unsigned __int64 a2, _QWORD* a3);
__int64 nvidia_12d190(__int64* a1, __int64* a2);
__int64 nvidia_1a6340(__int64 a1);
__int64 nvidia_1b8de0(_QWORD* a1, unsigned __int64 a2, __int64* a3, __int64 a4,
                      __int64 a5);
__int64 nvidia_1e60f0(__int64 a1);
__int64 nvidia_1ef5a0(__int64 a1);
__int64 nvidia_205ee0(int a1, __int64 a2, __int64* a3, _QWORD* a4, int a5);
__int64 nvidia_2108a0(unsigned int* a1);
__int64 nvidia_212770(unsigned int* a1);
__int64 nvidia_21aee0(__int64 a1, unsigned int* a2);
__int64 nvidia_23a160(__int64 a1);
__int64 nvidia_6e8f0(__int64 a1, long double a2);
unsigned int* CudaDriverRoutine_4edf0_alt1(unsigned int* result, int, int, int,
                                           int, unsigned int, int*, int*);
bool cuda_driver_checks_103250_alt1(__int64);
__int64 nvidia_1181a0(__int64);
bool cuda_driver_12ea30_alt1(int*);

__int64 nvidia_140e0(__int64 a1)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int* v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  __int16 v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  char v29;
  unsigned int v30;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  __int16 v36;
  int v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  int v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  bool v54;
  unsigned int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  unsigned int v60;
  int v61;
  char v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  unsigned int v72;
  int v73;
  int v74;
  int v75;
  __int64 v76;
  float v77;
  int v78;
  int v79;
  int v80;
  int v81;
  float v82;
  _BOOL4 v83;
  bool v84;
  double v85;
  int v86;
  int v87;
  unsigned int v88;
  float v89;
  _BOOL4 v90;
  bool v91;
  __int16 v92;
  float v93;
  int v94;
  int v95;
  int v96;
  int v97;
  unsigned int v99;
  __int64 v100;
  __int64* v101;
  int v102;
  int v103;
  struct {
    long double v104;
    char gap16_[28];
    _BYTE v105[4];
  } v104_;

  if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) != 0) {
    return CudaDriverRoutine_11de00(a1);
  }
  v3 = *(_DWORD*)(a1 + 40);
  *(_OWORD*)(a1 + 336) = (__typeof__(*(_OWORD*)(a1 + 336))){0};
  *(_OWORD*)(a1 + 352) = (__typeof__(*(_OWORD*)(a1 + 352))){0};
  *(_OWORD*)(a1 + 368) = (__typeof__(*(_OWORD*)(a1 + 368))){0};
  *(_OWORD*)(a1 + 384) = (__typeof__(*(_OWORD*)(a1 + 384))){0};
  if (v3 == 1) {
    if (*(_DWORD*)(a1 + 120) != 0) {
      v4 = 1;
    }
    else {
      v4 = 2;
    }
    v5 = (__int64*)(a1 + 8);
    if (!CudaDriverStub_985a0(*(_QWORD*)(a1 + 8))) {
      goto LABEL_13;
    }
  LABEL_10:
    if (*(_DWORD*)(a1 + 40) == 2 && *(_BYTE*)(a1 + 920) != 0) {
      v4 = 1;
    }
    goto LABEL_13;
  }
  v4 = 0;
  v5 = (__int64*)(a1 + 8);
  if (CudaDriverStub_985a0(*(_QWORD*)(a1 + 8))) {
    goto LABEL_10;
  }
LABEL_13:
  v6 = nvidia_11fa80(a1);
  v7 = 1;
  v8 = 29;
  switch (v6) {
  case 0:
    v8 = 28;
    goto LABEL_36;
  case 3:
    v8 = 20;
    goto LABEL_36;
  case 6:
    v8 = 21;
    goto LABEL_36;
  case 47:
    v8 = 34;
    goto LABEL_36;
  case 48:
    v8 = 35;
    goto LABEL_36;
  case 54:
    v8 = 9;
    goto LABEL_36;
  case 69:
    v8 = 1;
    goto LABEL_36;
  case 76:
    v8 = 3;
    goto LABEL_36;
  case 80:
    v8 = 4;
    goto LABEL_36;
  case 88:
    v8 = 8;
    goto LABEL_36;
  case 93:
    v8 = 12;
    goto LABEL_36;
  case 97:
    v8 = 15;
    goto LABEL_36;
  case 103:
    v8 = 24;
    goto LABEL_36;
  case 107:
    v8 = 27;
    goto LABEL_36;
  case 113:
    goto LABEL_36;
  case 119:
    v8 = 36;
    goto LABEL_36;
  case 121:
    v8 = 37;
    goto LABEL_36;
  case 123:
    v8 = 38;
    goto LABEL_36;
  case 125:
    v8 = 39;
    goto LABEL_36;
  case 127:
    v8 = 40;
    goto LABEL_36;
  case 130:
    v8 = 17;
    goto LABEL_36;
  case 131:
    v8 = 16;
    goto LABEL_36;
  case 132:
    v8 = 23;
  LABEL_36:
    v9 = (unsigned int*)(a1 + 336);
    *(_DWORD*)(a1 + 336) = *(_DWORD*)(a1 + 336) & 0xFFFFFF80 | v8;
    v10 = CudaDriverRoutine_11fd60(a1);
    if (v10 <= 2) {
      if (v10 == 1) {
        v13 = *v9;
        v14 = 1170;
      }
      else {
        if (v10 != 2) {
          return v7;
        }
        v13 = *v9;
        v14 = 585;
      }
    LABEL_52:
      *(_DWORD*)(a1 + 336) = v13 & 0xFFF8007F | ((v14 & 0xFFF) << 7);
      v11 = CudaDriverRoutine_11f370(a1, 0);
      if (v11 <= 2) {
        goto LABEL_41;
      }
      goto LABEL_53;
    }
    if (v10 == 3) {
      v13 = *v9;
      v14 = 2340;
      goto LABEL_52;
    }
    if (v10 == 4) {
      v13 = *v9;
      v14 = 1755;
      goto LABEL_52;
    }
    if (v10 != 5) {
      return v7;
    }
    *(_DWORD*)(a1 + 336) = *v9 | 0x7FF80;
    v11 = CudaDriverRoutine_11f370(a1, 0);
    if (v11 <= 2) {
    LABEL_41:
      if (v11 != 0) {
        if (v11 == 1) {
          *(_DWORD*)(a1 + 336) = *v9 & 0xFFC7FFFF | 0x100000;
          v12 = CudaDriverRoutine_11f370(a1, 1u);
          if (v12 <= 2) {
            goto LABEL_75;
          }
        }
        else {
          if (v11 != 2) {
            return v7;
          }
          *(_DWORD*)(a1 + 336) = *v9 & 0xFFC7FFFF | 0x180000;
          v12 = CudaDriverRoutine_11f370(a1, 1u);
          if (v12 <= 2) {
            goto LABEL_75;
          }
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v9 & 0xFFC7FFFF;
        v12 = CudaDriverRoutine_11f370(a1, 1u);
        if (v12 <= 2) {
          goto LABEL_75;
        }
      }
    LABEL_66:
      if (v12 > 4) {
        if (v12 == 5) {
          *(_DWORD*)(a1 + 336) = *v9 & 0xFE3FFFFF | 0x1800000;
          v15 = CudaDriverRoutine_11f370(a1, 2u);
          if (v15 <= 2) {
            goto LABEL_94;
          }
        }
        else {
          if (v12 != 6) {
            return v7;
          }
          *(_DWORD*)(a1 + 336) = *v9 | 0x1C00000;
          v15 = CudaDriverRoutine_11f370(a1, 2u);
          if (v15 <= 2) {
            goto LABEL_94;
          }
        }
      }
      else if (v12 == 3) {
        *(_DWORD*)(a1 + 336) = *v9 & 0xFE3FFFFF | 0x1000000;
        v15 = CudaDriverRoutine_11f370(a1, 2u);
        if (v15 <= 2) {
          goto LABEL_94;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v9 & 0xFE3FFFFF | 0x1400000;
        v15 = CudaDriverRoutine_11f370(a1, 2u);
        if (v15 <= 2) {
          goto LABEL_94;
        }
      }
    LABEL_85:
      if (v15 > 4) {
        if (v15 == 5) {
          *(_DWORD*)(a1 + 336) = *v9 & 0xF1FFFFFF | 0xC000000;
          v16 = CudaDriverRoutine_11f370(a1, 3u);
          if (v16 <= 2) {
            goto LABEL_111;
          }
        }
        else {
          if (v15 != 6) {
            return v7;
          }
          *(_DWORD*)(a1 + 336) = *v9 | 0xE000000;
          v16 = CudaDriverRoutine_11f370(a1, 3u);
          if (v16 <= 2) {
            goto LABEL_111;
          }
        }
      }
      else if (v15 == 3) {
        *(_DWORD*)(a1 + 336) = *v9 & 0xF1FFFFFF | 0x8000000;
        v16 = CudaDriverRoutine_11f370(a1, 3u);
        if (v16 <= 2) {
          goto LABEL_111;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v9 & 0xF1FFFFFF | 0xA000000;
        v16 = CudaDriverRoutine_11f370(a1, 3u);
        if (v16 <= 2) {
          goto LABEL_111;
        }
      }
    LABEL_104:
      if (v16 > 4) {
        if (v16 == 5) {
          v17 = *v9 & 0x8FFFFFFF | 0x60000000;
        }
        else {
          if (v16 != 6) {
            return v7;
          }
          v17 = *v9 | 0x70000000;
        }
      }
      else if (v16 == 3) {
        v17 = *v9 & 0x8FFFFFFF | 0x40000000;
      }
      else {
        v17 = *v9 & 0x8FFFFFFF | 0x50000000;
      }
      goto LABEL_119;
    }
  LABEL_53:
    if (v11 <= 4) {
      if (v11 == 3) {
        *(_DWORD*)(a1 + 336) = *v9 & 0xFFC7FFFF | 0x200000;
        v12 = CudaDriverRoutine_11f370(a1, 1u);
        if (v12 <= 2) {
          goto LABEL_75;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v9 & 0xFFC7FFFF | 0x280000;
        v12 = CudaDriverRoutine_11f370(a1, 1u);
        if (v12 <= 2) {
          goto LABEL_75;
        }
      }
      goto LABEL_66;
    }
    if (v11 == 5) {
      *(_DWORD*)(a1 + 336) = *v9 & 0xFFC7FFFF | 0x300000;
      v12 = CudaDriverRoutine_11f370(a1, 1u);
      if (v12 <= 2) {
        goto LABEL_75;
      }
      goto LABEL_66;
    }
    if (v11 != 6) {
      return v7;
    }
    *(_DWORD*)(a1 + 336) = *v9 | 0x380000;
    v12 = CudaDriverRoutine_11f370(a1, 1u);
    if (v12 > 2) {
      goto LABEL_66;
    }
  LABEL_75:
    if (v12 == 0) {
      *(_DWORD*)(a1 + 336) = *v9 & 0xFE3FFFFF;
      v15 = CudaDriverRoutine_11f370(a1, 2u);
      if (v15 <= 2) {
        goto LABEL_94;
      }
      goto LABEL_85;
    }
    if (v12 == 1) {
      *(_DWORD*)(a1 + 336) = *v9 & 0xFE3FFFFF | 0x800000;
      v15 = CudaDriverRoutine_11f370(a1, 2u);
      if (v15 <= 2) {
        goto LABEL_94;
      }
      goto LABEL_85;
    }
    if (v12 != 2) {
      return v7;
    }
    *(_DWORD*)(a1 + 336) = *v9 & 0xFE3FFFFF | 0xC00000;
    v15 = CudaDriverRoutine_11f370(a1, 2u);
    if (v15 > 2) {
      goto LABEL_85;
    }
  LABEL_94:
    if (v15 == 0) {
      *(_DWORD*)(a1 + 336) = *v9 & 0xF1FFFFFF;
      v16 = CudaDriverRoutine_11f370(a1, 3u);
      if (v16 <= 2) {
        goto LABEL_111;
      }
      goto LABEL_104;
    }
    if (v15 == 1) {
      *(_DWORD*)(a1 + 336) = *v9 & 0xF1FFFFFF | 0x4000000;
      v16 = CudaDriverRoutine_11f370(a1, 3u);
      if (v16 <= 2) {
        goto LABEL_111;
      }
      goto LABEL_104;
    }
    if (v15 != 2) {
      return v7;
    }
    *(_DWORD*)(a1 + 336) = *v9 & 0xF1FFFFFF | 0x6000000;
    v16 = CudaDriverRoutine_11f370(a1, 3u);
    if (v16 > 2) {
      goto LABEL_104;
    }
  LABEL_111:
    if (v16 != 0) {
      if (v16 == 1) {
        v17 = *v9 & 0x8FFFFFFF | 0x20000000;
      }
      else {
        if (v16 != 2) {
          return v7;
        }
        v17 = *v9 & 0x8FFFFFFF | 0x30000000;
      }
    }
    else {
      v17 = *v9 & 0x8FFFFFFF;
    }
  LABEL_119:
    v18 = *(_DWORD*)(a1 + 328);
    *(_DWORD*)(a1 + 336) = v17;
    if ((v18 & 8) != 0) {
      *v9 = v17 | 0x80000000;
    }
    if (v4 != 0) {
      if (v4 != 1) {
        v38 = *(_QWORD*)(a1 + 128);
        v29 = 1;
        v39 = *(_DWORD*)(a1 + 344) & 0xE11E0000;
        *(_DWORD*)(a1 + 340) = v38;
        *(_DWORD*)(a1 + 344) =
            DWORDn(v38, sizeof(v38) / 4 - 1) & 0x1FFFF | v39 | 0x1E000000;
        LODWORD(v38) = *(int*)(a1 + 104) - 1;
        *(_WORD*)(a1 + 348) = WORD1(v38);
        v30 = *(_DWORD*)(a1 + 352) & 0xF87F0000 | (unsigned __int16)v38 |
              0x3000000;
        *(_DWORD*)(a1 + 352) = v30;
        if ((v18 & 0x10) == 0) {
          goto LABEL_169;
        }
      LABEL_168:
        *(_DWORD*)(a1 + 352) = v30 | 0x400000;
        goto LABEL_169;
      }
      v19 = 0x400000;
      v20 = -32;
      v21 = 31;
    }
    else {
      v19 = 6291456;
      v20 = -512;
      v21 = 511;
    }
    v22 = *(_DWORD*)(a1 + 132);
    *(_DWORD*)(a1 + 340) =
        *(_DWORD*)(a1 + 340) & v21 | v20 & *(_DWORD*)(a1 + 128);
    v23 = v22 & 0x1FFFF | *(_DWORD*)(a1 + 344) & 0xE11E0000 | v19;
    v24 = *(_DWORD*)(a1 + 348);
    *(_DWORD*)(a1 + 344) = v23 | 0x1E000000;
    v25 = v24 | 0x10000;
    *(_DWORD*)(a1 + 348) = v25;
    if (v4 != 1) {
      v31 = *(_QWORD*)(a1 + 64);
      v32 = v25 & 0xFFFFFFF8 | *(_DWORD*)(v31 + 40) & 7;
      *(_DWORD*)(a1 + 348) = v32;
      v33 = v32 & 0xFFFFFFC7 | (8 * (*(_DWORD*)(v31 + 44) & 7));
      *(_DWORD*)(a1 + 348) = v33;
      v34 = v33 & 0xFFFFFE3F | ((*(_DWORD*)(v31 + 48) & 7) << 6);
      *(_DWORD*)(a1 + 348) = v34;
      if ((*(_BYTE*)(v31 + 32) & 0x40) != 0) {
        v35 = *(_DWORD*)(v31 + 144);
        if (v35 < 2) {
          v37 = 0;
        }
        else {
          v36 = 0;
          do {
            v36 += 1024;
            v84 = v35 > 3;
            v35 >>= 1;
          } while (v84);
          v37 = v36 & 0x1C00;
        }
        v34 = v37 | v34 & 0xFFFFE3FF;
        *(_DWORD*)(a1 + 348) = v34;
      }
      v40 = *(_QWORD*)(a1 + 88);
      if (v40 != 0) {
        v34 =
            (v34 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v40 + 40) << 28)) -
            0x10000000;
      }
      v41 = *(_DWORD*)(a1 + 104);
      v42 = *(_DWORD*)(a1 + 108);
      *(_DWORD*)(a1 + 348) = v34 | 0x60000;
      v43 = *(_DWORD*)(a1 + 352) & 0xFFF80000 | (v41 - 1) & 0x1FFFF;
      v44 = (4 * v42 + 524284) & 0x40000;
      if (v42 == 0) {
        v44 = 0;
      }
      v45 = v44 | v43;
      v46 = *(_DWORD*)(a1 + 112);
      if (v46 != 0) {
        v47 = (8 * v46 + 262136) & 0x20000;
      }
      else {
        v47 = 0;
      }
      v48 = v45 | v47;
      *(_DWORD*)(a1 + 352) = v48;
      v49 = *(_DWORD*)(v31 + 8);
      if (v49 > 3) {
        v50 = v48 & 0xF87FFFFF | 0x4000000;
        v51 = v48 & 0xF87FFFFF | 0x1800000;
        v52 = v48 & 0xF87FFFFF | 0x2000000;
        if (v49 != 7) {
          v50 = v48;
        }
        if (v49 != 6) {
          v51 = v50;
        }
        if (v49 == 5) {
          v48 = v48 & 0xF87FFFFF | 0x2800000;
        }
        if (v49 == 4) {
          v48 = v52;
        }
        if (v49 <= 5) {
          v53 = v48;
        }
        else {
          v53 = v51;
        }
        goto LABEL_167;
      }
      if (v49 == 1) {
        if (!CudaDriverRoutine_11f690((__int64*)a1)) {
          v53 = *(_DWORD*)(a1 + 352) & 0xF87FFFFF;
          goto LABEL_167;
        }
      }
      else if (v49 != 2) {
        v54 = v49 == 3;
        v53 = v48 & 0xF87FFFFF | 0x1000000;
        if (!v54) {
          v53 = v48;
        }
      LABEL_167:
        v30 = v53 | 0xE0000000;
        v56 = *(_DWORD*)(a1 + 328);
        v29 = 0;
        *(_DWORD*)(a1 + 352) = v30;
        if ((v56 & 0x10) == 0) {
          goto LABEL_169;
        }
        goto LABEL_168;
      }
      v55 = *(_DWORD*)(a1 + 352) & 0xF87FFFFF;
      if (*(_DWORD*)(a1 + 120) != 0) {
        v53 = v55 | 0x3800000;
      }
      else {
        v53 = v55 | 0x800000;
      }
      goto LABEL_167;
    }
    v26 = *(_DWORD*)(a1 + 116);
    v27 = *(_QWORD*)(a1 + 88);
    v28 = v25 & 0xFFFF0000 | (unsigned __int16)(v26 >> 5);
    *(_DWORD*)(a1 + 348) = v28;
    if (v27 != 0) {
      v28 = (v28 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v27 + 40) << 28)) -
            0x10000000;
    }
    v29 = 0;
    *(_DWORD*)(a1 + 348) = v28 | 0x60000;
    v30 = *(_DWORD*)(a1 + 352) & 0x187C0000 |
          (*(int*)(a1 + 104) - 1) & 0x1FFFF | (v26 >> 4) & 0x20000 | 0xE3800000;
    *(_DWORD*)(a1 + 352) = v30;
    if ((v18 & 0x10) != 0) {
      goto LABEL_168;
    }
  LABEL_169:
    if ((v29 & 1) == 0) {
      v57 = *(_DWORD*)(a1 + 108);
      v58 = *(_DWORD*)(a1 + 112);
      v54 = v57 == 0;
      v59 = (unsigned __int16)(v57 - 1);
      if (v54) {
        v59 = 0;
      }
      v60 = v59 | *(_DWORD*)(a1 + 356) & 0xC0000000;
      v61 = ((v58 << 16) + 1073676288) & 0x3FFF0000;
      if (v58 == 0) {
        v61 = 0;
      }
      *(_DWORD*)(a1 + 356) = v61 | v60;
      if (CudaDriverRoutine_11f6d0(a1)) {
        *(_DWORD*)(a1 + 356) |= 0x80000000;
      }
      v62 = *(_BYTE*)(a1 + 328);
      v63 = *(_DWORD*)(a1 + 360) & 0xF87FFFFF | 0x3000000;
      *(_DWORD*)(a1 + 360) = v63;
      if ((v62 & 0x20) != 0) {
        v64 = *(_DWORD*)(a1 + 296);
        if (v64 > 7) {
          v66 = v63 & 0xFB7FFFC1 | 0x10;
        }
        else {
          v65 = 1 << v64;
          if ((v65 & 0xF0) != 0) {
            v66 = v63 & 0xFB7FFFC1 | 0xC;
          }
          else if ((v65 & 3) != 0) {
            v66 = v63 & 0xFB7FFFC1;
          }
          else {
            v66 = v63 & 0xFB7FFFC1 | 8;
          }
        }
        *(_DWORD*)(a1 + 360) = v66;
      }
    }
    if (*(_QWORD*)(a1 + 88) != 0) {
      *(_DWORD*)(a1 + 364) = *(_DWORD*)(a1 + 364) & 0xFFFFFF00 |
                             *(_DWORD*)(a1 + 136) & 0xF |
                             (16 * (*(_DWORD*)(a1 + 140) & 0xF));
    }
    v67 = CudaDriverRoutine_11f790(a1, 0);
    v7 = 1;
    if (v67 > 2) {
      if ((unsigned int)(v67 - 3) >= 2) {
        return v7;
      }
    }
    else {
      switch (v67) {
      case 0:
        goto LABEL_196;
      case 1:
        v67 = 2;
        break;
      case 2:
        v67 = 1;
        break;
      default:
        return v7;
      }
    }
    *(_DWORD*)(a1 + 368) |= v67;
  LABEL_196:
    v68 = CudaDriverRoutine_11f790(a1, 1u);
    if (v68 <= 1) {
      if (v68 == 0) {
        goto LABEL_207;
      }
      if (v68 != 1) {
        return v7;
      }
      v69 = 16;
    }
    else {
      switch (v68) {
      case 4:
        v69 = 32;
        break;
      case 3:
        v69 = 24;
        break;
      case 2:
        v69 = 8;
        break;
      default:
        return v7;
      }
    }
    *(_DWORD*)(a1 + 368) |= v69;
  LABEL_207:
    v70 = CudaDriverRoutine_11f790(a1, 2u);
    if (v70 <= 1) {
      if (v70 != 0) {
        if (v70 != 1) {
          return v7;
        }
        v71 = *(_DWORD*)(a1 + 368) | 0x80;
      }
      else {
        v71 = *(_DWORD*)(a1 + 368);
      }
    LABEL_218:
      *(_DWORD*)(a1 + 368) = v71 | 0x2000;
      v72 = *(_DWORD*)(a1 + 296);
      v73 = 1056768;
      if ((int)v72 > 5) {
        if (v72 <= 0xF) {
          if (((1 << v72) & 0xF000) != 0) {
            v73 = 6299648;
            goto LABEL_233;
          }
          if (((1 << v72) & 0x300) != 0) {
            v73 = 4202496;
            goto LABEL_233;
          }
          if (((1 << v72) & 0xC00) != 0) {
            v73 = 5251072;
            goto LABEL_233;
          }
        }
        if (v72 - 6 < 2) {
          v73 = 3153920;
          goto LABEL_233;
        }
      }
      else {
        if (v72 < 2) {
          goto LABEL_234;
        }
        if (v72 - 2 < 2) {
        LABEL_233:
          *(_DWORD*)(a1 + 368) = v71 | v73;
        LABEL_234:
          if (*(_DWORD*)(a1 + 276) == 1) {
            v74 = 34;
          }
          else {
            v74 = 17;
          }
          v75 = *(_DWORD*)(a1 + 372) | v74;
          v76 = *(_QWORD*)(a1 + 88);
          if (v76 != 0) {
            v77 = 0x0.0p+0f;
            if (*(_DWORD*)(a1 + 280) == 1) {
              v78 = 192;
            }
            else {
              v78 = 128;
            }
            v79 = v75 | v78;
            if ((v29 & 1) == 0 && (*(_BYTE*)(a1 + 328) & 0x20) == 0) {
              if (v72 > 7) {
                v77 = -0x1.0000000000000p-2f;
                v79 |= 0x20000000u;
              }
              else {
                v80 = 1 << v72;
                if ((v80 & 0xF0) != 0) {
                  v79 |= 0x18000000u;
                  v77 = -0x1.b6db6e0000000p-3f;
                }
                else if ((v80 & 3) != 0) {
                  v77 = -0x0.0p+0f;
                }
                else {
                  v79 |= 0x10000000u;
                  v77 = -0x1.5555560000000p-3f;
                }
              }
            }
            v82 = v77 + *(float*)(a1 + 284);
            v83 = v82 >= 0x1.e000000000000p+3f;
            v84 = v82 <= -0x1.e000000000000p+3f;
            v85 = v82;
            v86 = !v84 || v83;
            if (v84) {
              v83 = true;
            }
            if (v86 != 0) {
              v87 = 3840;
            }
            else {
              v87 = 4352;
            }
            v88 = vcvtd_n_s32_f64(v85, 8u) & 0x1FFF;
            if (!v83) {
              v87 = v88;
            }
            v81 = v79 | (v87 << 12);
            *(_DWORD*)(a1 + 372) = v81;
            if ((v29 & 1) != 0) {
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
                goto LABEL_265;
              }
            }
            else {
              *(_DWORD*)(a1 + 360) =
                  *(_DWORD*)(a1 + 360) & 0xFFF8003F | ((v87 & 0x1FFF) << 6);
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              LABEL_265:
                if (v76 == 0) {
                  goto LABEL_266;
                }
                goto LABEL_270;
              }
            }
          }
          else {
            v81 = v75 | 0x40;
            *(_DWORD*)(a1 + 372) = v75 | 0x40;
            if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              goto LABEL_265;
            }
          }
          *(_DWORD*)(a1 + 372) = v81 | 0x300;
          if (v76 == 0) {
          LABEL_266:
            if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) != 3) {
            LABEL_292:
              if ((unsigned int)CudaDriverRoutine_11f790(a1, 1u) != 3 &&
                  (unsigned int)CudaDriverRoutine_11f790(a1, 2u) != 3) {
                return 0;
              }
            }
          LABEL_294:
            CudaDriverRoutine_11f810(&v104_.v104, a1);
            v100 = *(_QWORD*)&v104_.v104;
            *(_DWORD*)(a1 + 392) = DWORD2(v104_.v104);
            *(_QWORD*)(a1 + 384) = v100;
            if (CudaDriverRoutine_11f2f0(a1)) {
              if (*(_QWORD*)a1 != 0) {
                v101 = (__int64*)(*(_QWORD*)a1 + 24LL);
              }
              else {
                v101 = v5;
              }
              if (!CudaDriverStub_985a0(*v101)) {
                goto LABEL_302;
              }
              v102 = *(_DWORD*)(a1 + 396) | 1;
            }
            else {
              v102 = DWORDn(v104_.v104, sizeof(v104_.v104) / 4 - 1);
            }
            *(_DWORD*)(a1 + 396) = v102;
          LABEL_302:
            if ((*(_BYTE*)(a1 + 328) & 0x10) != 0) {
              cuda_driver_11f820(v104_.v105, (float*)&v104_.v104);
              v103 = v104_.v105[2];
              *(_DWORD*)(a1 + 376) |= v104_.v105[0] << 24;
              *(_DWORD*)(a1 + 380) = (v104_.v105[1] << 12) | (v103 << 20);
            }
            return 0;
          }
        LABEL_270:
          v89 = *(float*)(a1 + 288);
          v90 = v89 >= 0x1.e000000000000p+3f;
          v91 = v89 <= 0x0.0p+0f;
          v92 = vcvtd_n_s32_f64(v89, 8u);
          v93 = *(float*)(a1 + 292);
          v94 = !v91 || v90;
          if (v91) {
            v90 = true;
          }
          if (v94 != 0) {
            v95 = 3840;
          }
          else {
            v95 = 0;
          }
          v96 = v92 & 0xFFF;
          if (v90) {
            v97 = v95;
          }
          else {
            v97 = v96;
          }
          if (v93 <= 0x0.0p+0f && v93 < 0x1.e000000000000p+3f) {
            v99 = 0;
          }
          else {
            v99 = 15728640;
          }
          if (v93 < 0x1.e000000000000p+3f && v93 > 0x0.0p+0f) {
            v99 = (vcvtd_n_s32_f64(v93, 8u) & 0xFFF) << 12;
          }
          *(_DWORD*)(a1 + 376) |= v99 | v97;
          if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) == 3) {
            goto LABEL_294;
          }
          goto LABEL_292;
        }
        if (v72 - 4 < 2) {
          v73 = 2105344;
          goto LABEL_233;
        }
      }
      v73 = 7348224;
      goto LABEL_233;
    }
    switch (v70) {
    case 2:
      v71 = *(_DWORD*)(a1 + 368) | 0x40;
      goto LABEL_218;
    case 3:
      v71 = *(_DWORD*)(a1 + 368) | 0xC0;
      goto LABEL_218;
    case 4:
      v71 = *(_DWORD*)(a1 + 368) | 0x100;
      goto LABEL_218;
    default:
      break;
    }
    return v7;
  default:
    return v7;
  }
}

unsigned __int64 nvidia_4e5a0(__int64* a1, unsigned int a2, unsigned int a3,
                              unsigned int a4, unsigned int a5, unsigned int a6,
                              int a7, unsigned int a8, unsigned int a9, int a10,
                              unsigned int a11, int a12)
{
  int v19;
  unsigned __int64 v20;
  int v21;
  int v22;
  unsigned __int64 v23;
  int v24;
  unsigned __int64 result;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  unsigned int i;
  unsigned int j;
  unsigned int k;
  unsigned int v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  struct {
    __int64 v41;
    int v42;
  } v41_;

  if (a1 != nullptr) {
    v41_.v41 = *a1;
    {
      v19 = *((_DWORD*)a1 + 2);
      __asm__ volatile("" ::"r"(v19));
    }
  }
  else {
    if (a5 == 3) {
      v20 = a4 + ((unsigned __int64)a4 >> 1);
      if (v20 > 0xF) {
        v22 = 0;
        v19 = 4;
      }
      else {
        v21 = v20 > 1;
        if (v20 > 3) {
          v21 = 2;
        }
        v22 = 0;
        if (v20 <= 7) {
          v19 = v21;
        }
        else {
          v19 = 3;
        }
      }
    }
    else {
      v23 = a3 + ((unsigned __int64)a3 >> 1);
      if (v23 >= 0x80) {
        v19 = 0;
        v22 = 4;
      }
      else {
        if (v23 <= 0x1F) {
          v24 = v23 > 0xF;
        }
        else {
          v24 = 2;
        }
        if (v23 <= 0x3F) {
          v22 = v24;
        }
        else {
          v22 = 3;
        }
        v19 = 0;
      }
    }
    LODWORD(v41_.v41) = 0;
    DWORDn(v41_.v41, sizeof(v41_.v41) / 4 - 1) = v22;
  }
  v41_.v42 = v19;
  result = nvidia_4e900((unsigned int*)&v41_.v41, a2, a3, a4, a5, a6, a7, a8,
                        a9, a10, a11, a12);
  if (a11 < 2) {
    v29 = a2 + 2 * a7;
    if (a5 <= 1) {
      v30 = 0;
    }
    else {
      v30 = a3 + 2 * a7;
    }
    if (a8 >= 2) {
      if (v29 / a8 * a8 == v29) {
        v29 /= a8;
      }
      else {
        v29 = v29 / a8 + 1;
      }
      if (a9 >= 2) {
        if (v30 / a9 * a9 == v30) {
          v30 /= a9;
        }
        else {
          v30 = v30 / a9 + 1;
        }
      }
    }
    v31 = v41_.v41;
    v32 = DWORDn(v41_.v41, sizeof(v41_.v41) / 4 - 1);
    v33 = v41_.v42;
    if ((_DWORD)v41_.v41 != 0) {
      v34 = v29 * a6;
      for (i = 64 << (v41_.v41 - 1); i >= v34; i >>= 1) {
        if (--v31 == 0) {
          break;
        }
      }
    }
    if (DWORDn(v41_.v41, sizeof(v41_.v41) / 4 - 1) != 0) {
      for (j = 8 << (BYTE4(v41_.v41) - 1); j >= v30; j >>= 1) {
        if (--v32 == 0) {
          break;
        }
      }
    }
    if (v41_.v42 != 0) {
      for (k = 1 << (v41_.v42 - 1); k >= a4; k >>= 1) {
        if (--v33 == 0) {
          break;
        }
      }
    }
    v38 = v32 + v31 + v33;
    v39 = 512LL << v38;
    if (v38 <= 0x36) {
      v40 = result >> ((unsigned __int8)v38 + 9);
      if (v40 * v39 == result) {
        result = v40;
      }
      else {
        result = v40 + 1;
      }
    }
    if ((result | v39) >> 32 != 0 && result != 0 &&
        !(sizeof((result) * (v39)) > 4
              ? ((unsigned __int128)(unsigned long long)(result) *
                 (unsigned long long)(v39)) >>
                        64 ==
                    0
              : ((unsigned long long)(unsigned int)(result) *
                 (unsigned int)(v39)) >>
                        32 ==
                    0)) {
      return -1;
    }
    else {
      result *= v39;
    }
  }
  else {
    v26 = (unsigned __int64)a11
          << 9 << ((unsigned __int8)v41_.v42 + BYTE4(v41_.v41));
    if (v26 != 0) {
      v27 = -(__int64)v26;
      v28 = (result + v26 - 1) & -(__int64)v26;
      if (result <= v27) {
        return v28;
      }
    }
  }
  return result;
}

__int64 nvidia_4e900(unsigned int* a1, unsigned int a2, unsigned int a3,
                     unsigned int a4, unsigned int a5, unsigned int a6, int a7,
                     unsigned int a8, unsigned int a9, int a10,
                     unsigned int a11, int a12)
{
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  __int64 result;
  char v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  bool v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int i;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  bool v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  char v38;
  unsigned __int64 v39;
  char v40;
  char v41;
  unsigned __int64 v42;
  int v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned int v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned int v51;
  unsigned __int64 v52;
  int v53;
  int v54;
  unsigned __int64 v55;
  int v56;
  int v57;
  unsigned int v58;

  if (a1 != nullptr) {
    {
      v12 = *a1;
      __asm__ volatile("" ::"r"(v12));
    }
    {
      v13 = a1[1];
      __asm__ volatile("" ::"r"(v13));
    }
    {
      v14 = a1[2];
      __asm__ volatile("" ::"r"(v14));
    }
    v15 = 2 * a7;
    if (a5 <= 1) {
      v16 = 0;
    }
    else {
      v16 = 2 * a7;
    }
    if (a5 <= 2) {
      v17 = 0;
    }
    else {
      v17 = 2 * a7;
    }
    if (a10 != 0) {
    LABEL_9:
      v18 = 0;
      result = 0;
      if (a4 <= 1) {
        a4 = 1;
      }
      v58 = 8 << v13;
      v20 = v12 - 1;
      if (a3 <= 1) {
        a3 = 1;
      }
      if (a2 <= 1) {
        a2 = 1;
      }
      while (1) {
        v21 = a2 + v15;
        if (a8 >= 2) {
          if (v21 / a8 * a8 == v21) {
            v21 /= a8;
          }
          else {
            v21 = v21 / a8 + 1;
          }
          v22 = a3 + v16;
          if (a9 < 2) {
          LABEL_28:
            v23 = a4 + v17;
            if (a11 < 2) {
              goto LABEL_43;
            }
            goto LABEL_38;
          }
        }
        else {
          v22 = a3 + v16;
          if (a9 < 2) {
            goto LABEL_28;
          }
        }
        if (v22 / a9 * a9 == v22) {
          v22 /= a9;
        }
        else {
          v22 = v22 / a9 + 1;
        }
        v23 = a4 + v17;
        if (a11 < 2) {
        LABEL_43:
          v25 = 1;
          v26 = v21 * a6;
          if (v12 == 0) {
            goto LABEL_63;
          }
          goto LABEL_44;
        }
      LABEL_38:
        if (a6 != 0) {
          v24 = ((unsigned __int64)a11 << 6) / a6 <= v21 && v22 >= v58;
          if (!v24) {
            goto LABEL_43;
          }
        }
        else if (v22 < v58) {
          goto LABEL_43;
        }
        if (v23 >> v14 != 0) {
          v25 = a11;
        }
        else {
          v25 = 1;
        }
        v26 = v21 * a6;
        if (v12 == 0) {
        LABEL_63:
          v27 = 0;
          if (v13 == 0) {
            goto LABEL_64;
          }
          goto LABEL_48;
        }
      LABEL_44:
        v27 = v12;
        for (i = 64 << v20; i >= v26; i >>= 1) {
          if (--v27 == 0) {
            break;
          }
        }
        if (v13 == 0) {
        LABEL_64:
          v29 = 0;
          if (v14 == 0) {
            goto LABEL_65;
          }
          goto LABEL_53;
        }
      LABEL_48:
        v29 = v13;
        if (8 << (v13 - 1) >= v22) {
          v29 = v13;
          v30 = 8 << (v13 - 1);
          do {
            if (--v29 == 0) {
              break;
            }
            v30 >>= 1;
          } while (v30 >= v22);
        }
        if (v14 == 0) {
        LABEL_65:
          v31 = 0;
          goto LABEL_66;
        }
      LABEL_53:
        v31 = v14;
        if (1 << (v14 - 1) >= v23) {
          v31 = v14;
          v32 = 1 << (v14 - 1);
          do {
            if (--v31 == 0) {
              break;
            }
            v32 >>= 1;
          } while (v32 >= v23);
        }
      LABEL_66:
        v33 = v26 >> 6;
        v34 = (v26 & 0x3F) == 0;
        v35 = v22 >> 3;
        if (!v34) {
          ++v33;
        }
        if ((v22 & 7) != 0) {
          ++v35;
        }
        if ((v33 & ~(-1 << v27)) != 0) {
          v36 = (v33 >> v27) + 1;
        }
        else {
          v36 = v33 >> v27;
        }
        if (v27 > 0x1F) {
          v36 = 0;
        }
        if (v27 == 0) {
          v36 = v33;
        }
        v37 = v35 >> v29;
        if ((v35 & ~(-1 << v29)) != 0) {
          ++v37;
        }
        if (v29 > 0x1F) {
          v37 = 0;
        }
        v34 = v29 == 0;
        v38 = v27 + v29;
        if (v34) {
          v37 = v35;
        }
        LODWORD(v39) = v23 >> v31;
        if ((v23 & ~(-1 << v31)) != 0) {
          LODWORD(v39) = v39 + 1;
        }
        if (v31 > 0x1F) {
          LODWORD(v39) = 0;
        }
        v34 = v31 == 0;
        v40 = v38 + v31;
        if (v34) {
          v39 = v23;
        }
        else {
          v39 = (unsigned int)v39;
        }
        v41 = v40 + 9;
        v42 = 1LL << v41;
        if (v36 <= -v25) {
          v43 = (v25 + v36 - 1) & -v25;
        }
        else {
          v43 = v36;
        }
        if (v25 >= 2) {
          v36 = v43;
        }
        v44 = v36 * (unsigned __int64)v37;
        if (DWORDn(v44, sizeof(v44) / 4 - 1) != 0 &&
            !(sizeof((v44) * (v39)) > 4
                  ? ((unsigned __int128)(unsigned long long)(v44) *
                     (unsigned long long)(v39)) >>
                            64 ==
                        0
                  : ((unsigned long long)(unsigned int)(v44) *
                     (unsigned int)(v39)) >>
                            32 ==
                        0)) {
          v45 = -1;
        LABEL_105:
          if (!(sizeof((v45) * (v42)) > 4
                    ? ((unsigned __int128)(unsigned long long)(v45) *
                       (unsigned long long)(v42)) >>
                              64 ==
                          0
                    : ((unsigned long long)(unsigned int)(v45) *
                       (unsigned int)(v42)) >>
                              32 ==
                          0)) {
            result = -1;
            v48 = a2 >> 1;
            if (a12 != 0) {
              goto LABEL_112;
            }
            goto LABEL_16;
          }
        LABEL_108:
          v49 = v45 << v41;
          v24 = __CFADD__(result, v49);
          v50 = result + v49;
          if (v24) {
            result = -1;
          }
          else {
            result = v50;
          }
          v48 = a2 >> 1;
          if (a12 != 0) {
            goto LABEL_112;
          }
          goto LABEL_16;
        }
        v45 = v44 * v39;
        if ((v45 | v42) >> 32 != 0) {
          if (v45 != 0) {
            goto LABEL_105;
          }
          goto LABEL_108;
        }
        v46 = v45 << v41;
        v24 = __CFADD__(result, v46);
        v47 = result + v46;
        if (v24) {
          result = -1;
        }
        else {
          result = v47;
        }
        v48 = a2 >> 1;
        if (a12 != 0) {
        LABEL_112:
          v51 = a2 - v48;
          if (v51 <= 2) {
            a2 = 2;
          }
          else {
            a2 = v51;
          }
          if (a3 - (a3 >> 1) <= 2) {
            a3 = 2;
          }
          else {
            a3 -= a3 >> 1;
          }
          if (a5 >= 3) {
            if ((a4 & 1) + (a4 >> 1) <= 2) {
              a4 = 2;
            }
            else {
              a4 = (a4 & 1) + (a4 >> 1);
            }
          }
          goto LABEL_25;
        }
      LABEL_16:
        if (v48 <= 1) {
          a2 = 1;
        }
        else {
          a2 = v48;
        }
        if (a3 >> 1 <= 1) {
          a3 = 1;
        }
        else {
          a3 >>= 1;
        }
        if (a4 >> 1 <= 1) {
          a4 = 1;
        }
        else {
          a4 >>= 1;
        }
      LABEL_25:
        if (++v18 == a10) {
          return result;
        }
      }
    }
  }
  else if (a5 == 3) {
    v52 = a4 + ((unsigned __int64)a4 >> 1);
    if (v52 <= 3) {
      v53 = v52 > 1;
    }
    else {
      v53 = 2;
    }
    if (v52 <= 7) {
      v54 = v53;
    }
    else {
      v54 = 3;
    }
    if (v52 <= 0xF) {
      v14 = v54;
    }
    else {
      v14 = 4;
    }
    v13 = 0;
    v12 = 0;
    v15 = 2 * a7;
    v16 = 2 * a7;
    v17 = 2 * a7;
    if (a10 != 0) {
      goto LABEL_9;
    }
  }
  else {
    v55 = a3 + ((unsigned __int64)a3 >> 1);
    if (v55 <= 0x1F) {
      v56 = v55 > 0xF;
    }
    else {
      v56 = 2;
    }
    if (v55 <= 0x3F) {
      v57 = v56;
    }
    else {
      v57 = 3;
    }
    v14 = 0;
    if (v55 >= 0x80) {
      v13 = 4;
    }
    else {
      v13 = v57;
    }
    v12 = 0;
    v15 = 2 * a7;
    if (a5 <= 1) {
      v16 = 0;
    }
    else {
      v16 = 2 * a7;
    }
    if (a5 <= 2) {
      v17 = 0;
    }
    else {
      v17 = 2 * a7;
    }
    if (a10 != 0) {
      goto LABEL_9;
    }
  }
  return 0;
}

unsigned int* nvidia_4ef40(unsigned int* result, unsigned int a2,
                           unsigned int a3, unsigned int a4, unsigned int a5,
                           unsigned int a6, unsigned int a7, unsigned int a8,
                           unsigned int a9, int a10, int a11, unsigned int a12,
                           __int64* a13)
{
  unsigned int* v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned __int64 v24;
  bool v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  __int64 v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int i;
  unsigned int j;
  unsigned int k;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  int v47;
  int v48;

  if (result != nullptr && a13 != nullptr) {
    v16 = result;
    v17 = 0;
    v18 = 0;
    if (a5 <= 1) {
      v19 = 0;
    }
    else {
      v19 = 2 * a10;
    }
    if (a5 <= 2) {
      v20 = 0;
    }
    else {
      v20 = 2 * a10;
    }
    v48 = v19;
    v47 = v20;
    if (a2 <= 1) {
      v21 = 1;
    }
    else {
      v21 = a2;
    }
    if (a3 <= 1) {
      v22 = 1;
    }
    else {
      v22 = a3;
    }
    if (a4 <= 1) {
      v23 = 1;
    }
    else {
      v23 = a4;
    }
    v45 = ((unsigned __int64)a12 << 6) / a6;
    while (1) {
      v30 = v21 + 2 * a10;
      if (a7 >= 2) {
        if (v30 / a7 * a7 == v30) {
          v30 /= a7;
        }
        else {
          v30 = v30 / a7 + 1;
        }
      }
      v31 = v22 + v48;
      if (a8 >= 2) {
        if (v31 / a8 * a8 == v31) {
          v31 /= a8;
        }
        else {
          v31 = v31 / a8 + 1;
        }
      }
      v32 = v23 + v47;
      v33 = *a13;
      v16[2] = *((_DWORD*)a13 + 2);
      *(_QWORD*)v16 = v33;
      if (a12 < 2 || a6 != 0 && v45 > v30 || v31 < 8 << *((_DWORD*)a13 + 1)) {
        v34 = 1;
        v35 = *v16;
        v36 = v16[1];
        v37 = v16[2];
        if (*v16 == 0) {
          goto LABEL_50;
        }
      }
      else {
        if (v32 >> *((_DWORD*)a13 + 2) != 0) {
          v34 = a12;
        }
        else {
          v34 = 1;
        }
        v35 = *v16;
        v36 = v16[1];
        v37 = v16[2];
        if (*v16 == 0) {
          goto LABEL_50;
        }
      }
      for (i = 64 << (v35 - 1); i >= v30 * a6; i >>= 1) {
        if (--v35 == 0) {
          break;
        }
      }
    LABEL_50:
      if (v36 != 0) {
        for (j = 8 << (v36 - 1); j >= v31; j >>= 1) {
          if (--v36 == 0) {
            break;
          }
        }
      }
      if (v37 != 0) {
        for (k = 1 << (v37 - 1); k >= v32; k >>= 1) {
          if (--v37 == 0) {
            break;
          }
        }
      }
      *v16 = v35;
      v16[1] = v36;
      v16[2] = v37;
      result = CudaDriverRoutine_4edf0_alt1(v16, v30, v31, v32, a6, v34,
                                            (int*)v16 + 3, (int*)v16 + 4);
      v41 = v16[5];
      v42 = v16[4] * (unsigned __int64)v16[3];
      v43 = 1LL << (*(_BYTE*)v16 + *((_BYTE*)v16 + 4) + *((_BYTE*)v16 + 8) + 9);
      if (DWORDn(v42, sizeof(v42) / 4 - 1) == 0 ||
          (sizeof((v42) * (v41)) > 4
               ? ((unsigned __int128)(unsigned long long)(v42) *
                  (unsigned long long)(v41)) >>
                         64 ==
                     0
               : ((unsigned long long)(unsigned int)(v42) *
                  (unsigned int)(v41)) >>
                         32 ==
                     0)) {
        v44 = v42 * v41;
        if ((v43 | v44) >> 32 == 0 || v44 == 0) {
          goto LABEL_19;
        }
      }
      else {
        v44 = -1;
      }
      if ((sizeof((v44) * (v43)) > 4
               ? ((unsigned __int128)(unsigned long long)(v44) *
                  (unsigned long long)(v43)) >>
                         64 ==
                     0
               : ((unsigned long long)(unsigned int)(v44) *
                  (unsigned int)(v43)) >>
                         32 ==
                     0)) {
      LABEL_19:
        v24 =
            v44 << (*(_BYTE*)v16 + *((_BYTE*)v16 + 4) + *((_BYTE*)v16 + 8) + 9);
        *((_QWORD*)v16 + 3) = v17;
        *((_QWORD*)v16 + 4) = v24;
        v25 = __CFADD__(v17, v24);
        v26 = v17 + v24;
        if (v25) {
          v17 = -1;
        }
        else {
          v17 = v26;
        }
        v27 = v21 >> 1;
        if (a11 == 0) {
          goto LABEL_65;
        }
      LABEL_23:
        v28 = v21 - v27;
        if (v28 <= 2) {
          v21 = 2;
        }
        else {
          v21 = v28;
        }
        if (v22 - (v22 >> 1) <= 2) {
          v22 = 2;
        }
        else {
          v22 -= v22 >> 1;
        }
        v29 = (v23 & 1) + (v23 >> 1);
        if (v29 <= 2) {
          v29 = 2;
        }
        if (a5 >= 3) {
          v23 = v29;
        }
        if (++v18 > a9) {
          return result;
        }
      }
      else {
        *((_QWORD*)v16 + 3) = v17;
        *((_QWORD*)v16 + 4) = -1;
        v17 = -1;
        v27 = v21 >> 1;
        if (a11 != 0) {
          goto LABEL_23;
        }
      LABEL_65:
        if (v27 <= 1) {
          v21 = 1;
        }
        else {
          v21 = v27;
        }
        if (v22 >> 1 <= 1) {
          v22 = 1;
        }
        else {
          v22 >>= 1;
        }
        if (v23 >> 1 <= 1) {
          v23 = 1;
        }
        else {
          v23 >>= 1;
        }
        if (++v18 > a9) {
          return result;
        }
      }
    }
  }
  return result;
}

__int64 nvidia_6d860(int a1)
{
  int v1;
  unsigned int v2;
  int v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _OWORD* v11;
  _OWORD* v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  unsigned int v17;
  __int128* v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  unsigned int v23;
  __int128* v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  unsigned int v29;
  _OWORD* v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  _OWORD* v35;
  _OWORD* v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  _DWORD* v41;

  if ((unsigned int)CudaDriverData_14324b8 >= 0x3E) {
    v1 = DWORDn(CudaDriverData_1432510, sizeof(CudaDriverData_1432510) / 4 - 1);
    v2 = DWORD1(CudaDriverData_1432510);
    if (DWORDn(CudaDriverData_1432510,
               sizeof(CudaDriverData_1432510) / 4 - 1) != 0 &&
        DWORD1(CudaDriverData_1432510) == (_DWORD)CudaDriverData_1432510) {
      v3 = a1;
      v4 = CudaDriverRoutine_12e510(
          (unsigned int)(2 * DWORD2(CudaDriverData_1432510)), 92);
      v5 = DWORD2(CudaDriverData_1432510);
      v6 = CudaDriverData_1432520;
      if (DWORD2(CudaDriverData_1432510) != 0) {
        v7 = CudaDriverData_1432510;
        v8 = BYTE8(CudaDriverData_1432510) & 3;
        if (DWORD2(CudaDriverData_1432510) >= 4) {
          v10 = DWORD2(CudaDriverData_1432510) & 0xFFFFFFFC;
          v9 = 0;
          v11 = (_OWORD*)v4;
          do {
            v12 = (_OWORD*)(v6 + 92LL * v7);
            v9 += 4;
            v13 = v12[1];
            *v11 = *v12;
            v11[1] = v13;
            v14 = v12[2];
            v15 = v12[3];
            v16 = v12[4];
            *(_OWORD*)((char*)v11 + 76) = *(_OWORD*)((char*)v12 + 76);
            v11[3] = v15;
            v11[4] = v16;
            v11[2] = v14;
            v17 = (v7 + 1) % v5;
            v18 = (__int128*)(v6 + 92LL * v17);
            v20 = v18[3];
            v19 = v18[4];
            v21 = *(__int128*)((char*)v18 + 76);
            *(_OWORD*)((char*)v11 + 124) = v18[2];
            *(_OWORD*)((char*)v11 + 168) = v21;
            *(_OWORD*)((char*)v11 + 156) = v19;
            *(_OWORD*)((char*)v11 + 140) = v20;
            v22 = *v18;
            if (v17 + 1 == v5) {
              v23 = 0;
            }
            else {
              v23 = v17 + 1;
            }
            v24 = (__int128*)(v6 + 92LL * v23);
            *(_OWORD*)((char*)v11 + 108) = v18[1];
            *(_OWORD*)((char*)v11 + 92) = v22;
            v25 = v24[2];
            v27 = v24[3];
            v26 = v24[4];
            *(_OWORD*)((char*)v11 + 260) = *(__int128*)((char*)v24 + 76);
            *(_OWORD*)((char*)v11 + 216) = v25;
            *(_OWORD*)((char*)v11 + 248) = v26;
            *(_OWORD*)((char*)v11 + 232) = v27;
            v28 = *v24;
            *(_OWORD*)((char*)v11 + 200) = v24[1];
            *(_OWORD*)((char*)v11 + 184) = v28;
            v29 = (v23 + 1) % v5;
            v30 = (_OWORD*)(v6 + 92LL * v29);
            v31 = v30[1];
            *(_OWORD*)((char*)v11 + 276) = *v30;
            *(_OWORD*)((char*)v11 + 292) = v31;
            v32 = v30[2];
            v33 = v30[3];
            v34 = v30[4];
            v11[22] = *(_OWORD*)((char*)v30 + 76);
            *(_OWORD*)((char*)v11 + 324) = v33;
            *(_OWORD*)((char*)v11 + 340) = v34;
            *(_OWORD*)((char*)v11 + 308) = v32;
            v11 += 23;
            if (v29 + 1 == v5) {
              v7 = 0;
            }
            else {
              v7 = v29 + 1;
            }
          } while (v10 != v9);
        }
        else {
          v9 = 0;
        }
        if (v8 != 0) {
          v35 = (_OWORD*)(v4 + 92 * v9);
          do {
            v36 = (_OWORD*)(v6 + 92LL * v7);
            --v8;
            v37 = v36[1];
            *v35 = *v36;
            v35[1] = v37;
            v38 = v36[2];
            v39 = v36[3];
            v40 = v36[4];
            *(_OWORD*)((char*)v35 + 76) = *(_OWORD*)((char*)v36 + 76);
            v35[3] = v39;
            v35[4] = v40;
            v35[2] = v38;
            v35 = (_OWORD*)((char*)v35 + 92);
            v7 = (v7 + 1) % v5;
          } while (v8 != 0);
        }
      }
      LODWORD(CudaDriverData_1432510) = 0;
      DWORD1(CudaDriverData_1432510) = v5;
      DWORD2(CudaDriverData_1432510) = 2 * v5;
      CudaDriverRoutine_12e340(v6);
      v2 = DWORD1(CudaDriverData_1432510);
      v1 = DWORDn(CudaDriverData_1432510,
                  sizeof(CudaDriverData_1432510) / 4 - 1);
      CudaDriverData_1432520 = v4;
      a1 = v3;
    }
    DWORDn(CudaDriverData_1432510, sizeof(CudaDriverData_1432510) / 4 - 1) =
        v1 + 1;
    v41 = (_DWORD*)(CudaDriverData_1432520 + 92LL * v2);
    DWORD1(CudaDriverData_1432510) = (v2 + 1) % DWORD2(CudaDriverData_1432510);
    *(_DWORD*)v41 = 4;
    v41[1] = a1;
    CudaDriverRoutine_6dac0(0, 0);
  }
  return 0;
}

__int64 nvidia_6dc60()
{
  int v0;
  unsigned int v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _OWORD* v9;
  _OWORD* v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  unsigned int v15;
  __int128* v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  unsigned int v21;
  __int128* v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  unsigned int v27;
  _OWORD* v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  _OWORD* v33;
  _OWORD* v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;

  if ((unsigned int)CudaDriverData_14324b8 >= 0x1F) {
    v0 = DWORDn(CudaDriverData_1432510, sizeof(CudaDriverData_1432510) / 4 - 1);
    v1 = DWORD1(CudaDriverData_1432510);
    if (DWORDn(CudaDriverData_1432510,
               sizeof(CudaDriverData_1432510) / 4 - 1) != 0 &&
        DWORD1(CudaDriverData_1432510) == (_DWORD)CudaDriverData_1432510) {
      v2 = CudaDriverRoutine_12e510(
          (unsigned int)(2 * DWORD2(CudaDriverData_1432510)), 92);
      v3 = DWORD2(CudaDriverData_1432510);
      v4 = CudaDriverData_1432520;
      if (DWORD2(CudaDriverData_1432510) != 0) {
        v5 = CudaDriverData_1432510;
        v6 = BYTE8(CudaDriverData_1432510) & 3;
        if (DWORD2(CudaDriverData_1432510) >= 4) {
          v8 = DWORD2(CudaDriverData_1432510) & 0xFFFFFFFC;
          v7 = 0;
          v9 = (_OWORD*)v2;
          do {
            v10 = (_OWORD*)(v4 + 92LL * v5);
            v7 += 4;
            v11 = v10[1];
            *v9 = *v10;
            v9[1] = v11;
            v12 = v10[2];
            v13 = v10[3];
            v14 = v10[4];
            *(_OWORD*)((char*)v9 + 76) = *(_OWORD*)((char*)v10 + 76);
            v9[3] = v13;
            v9[4] = v14;
            v9[2] = v12;
            v15 = (v5 + 1) % v3;
            v16 = (__int128*)(v4 + 92LL * v15);
            v18 = v16[3];
            v17 = v16[4];
            v19 = *(__int128*)((char*)v16 + 76);
            *(_OWORD*)((char*)v9 + 124) = v16[2];
            *(_OWORD*)((char*)v9 + 168) = v19;
            *(_OWORD*)((char*)v9 + 156) = v17;
            *(_OWORD*)((char*)v9 + 140) = v18;
            v20 = *v16;
            if (v15 + 1 == v3) {
              v21 = 0;
            }
            else {
              v21 = v15 + 1;
            }
            v22 = (__int128*)(v4 + 92LL * v21);
            *(_OWORD*)((char*)v9 + 108) = v16[1];
            *(_OWORD*)((char*)v9 + 92) = v20;
            v23 = v22[2];
            v25 = v22[3];
            v24 = v22[4];
            *(_OWORD*)((char*)v9 + 260) = *(__int128*)((char*)v22 + 76);
            *(_OWORD*)((char*)v9 + 216) = v23;
            *(_OWORD*)((char*)v9 + 248) = v24;
            *(_OWORD*)((char*)v9 + 232) = v25;
            v26 = *v22;
            *(_OWORD*)((char*)v9 + 200) = v22[1];
            *(_OWORD*)((char*)v9 + 184) = v26;
            v27 = (v21 + 1) % v3;
            v28 = (_OWORD*)(v4 + 92LL * v27);
            v29 = v28[1];
            *(_OWORD*)((char*)v9 + 276) = *v28;
            *(_OWORD*)((char*)v9 + 292) = v29;
            v30 = v28[2];
            v31 = v28[3];
            v32 = v28[4];
            v9[22] = *(_OWORD*)((char*)v28 + 76);
            *(_OWORD*)((char*)v9 + 324) = v31;
            *(_OWORD*)((char*)v9 + 340) = v32;
            *(_OWORD*)((char*)v9 + 308) = v30;
            v9 += 23;
            if (v27 + 1 == v3) {
              v5 = 0;
            }
            else {
              v5 = v27 + 1;
            }
          } while (v8 != v7);
        }
        else {
          v7 = 0;
        }
        if (v6 != 0) {
          v33 = (_OWORD*)(v2 + 92 * v7);
          do {
            v34 = (_OWORD*)(v4 + 92LL * v5);
            --v6;
            v35 = v34[1];
            *v33 = *v34;
            v33[1] = v35;
            v36 = v34[2];
            v37 = v34[3];
            v38 = v34[4];
            *(_OWORD*)((char*)v33 + 76) = *(_OWORD*)((char*)v34 + 76);
            v33[3] = v37;
            v33[4] = v38;
            v33[2] = v36;
            v33 = (_OWORD*)((char*)v33 + 92);
            v5 = (v5 + 1) % v3;
          } while (v6 != 0);
        }
      }
      LODWORD(CudaDriverData_1432510) = 0;
      DWORD1(CudaDriverData_1432510) = v3;
      DWORD2(CudaDriverData_1432510) = 2 * v3;
      CudaDriverRoutine_12e340(v4);
      v1 = DWORD1(CudaDriverData_1432510);
      v0 = DWORDn(CudaDriverData_1432510,
                  sizeof(CudaDriverData_1432510) / 4 - 1);
      CudaDriverData_1432520 = v2;
    }
    DWORDn(CudaDriverData_1432510, sizeof(CudaDriverData_1432510) / 4 - 1) =
        v0 + 1;
    DWORD1(CudaDriverData_1432510) = (v1 + 1) % DWORD2(CudaDriverData_1432510);
    *(_DWORD*)(CudaDriverData_1432520 + 92LL * v1) = 9;
  }
  return 0;
}

__int64 nvidia_6e2b0(_DWORD* a1)
{
  _DWORD* v1;
  int v3;
  unsigned int v4;
  _OWORD* v5;
  __int128 v6;
  __int128 v7;
  struct {
    _QWORD v8[8];
    _QWORD v9[4];
  } v8_;

  if (a1 == nullptr) {
    return 4;
  }
  if (CudaDriverData_14324b0 != 1) {
    return 5;
  }
  if (CudaDriverData_14324b4 == 1) {
    v1 = a1;
    if ((unsigned int)CudaDriverStub_12dd00(
            (unsigned int)CudaDriverData_14324cc) != 0) {
      return 44;
    }
    a1 = v1;
    if (CudaDriverData_14324b0 != 1) {
      return CudaDriverRoutine_6f0c0((int*)v8_.v8, (__int64)a1);
    }
    if (CudaDriverData_14324b4 == 1) {
      v3 = CudaDriverStub_12dd00((unsigned int)CudaDriverData_14324cc);
      a1 = v1;
      if (v3 != 0) {
        return CudaDriverRoutine_6f0c0((int*)v8_.v8, (__int64)a1);
      }
    }
  }
  if (DWORDn(CudaDriverData_1432510, sizeof(CudaDriverData_1432510) / 4 - 1) !=
      0) {
    v4 = CudaDriverData_1432510;
    --DWORDn(CudaDriverData_1432510, sizeof(CudaDriverData_1432510) / 4 - 1);
    LODWORD(CudaDriverData_1432510) =
        (unsigned int)(CudaDriverData_1432510 + 1) %
        DWORD2(CudaDriverData_1432510);
    if (CudaDriverData_1432520 != 0) {
      v5 = (_OWORD*)(CudaDriverData_1432520 + 92LL * v4);
      v6 = v5[3];
      *(_OWORD*)&v8_.v8[4] = v5[2];
      *(_OWORD*)&v8_.v8[6] = v6;
      *(_OWORD*)v8_.v9 = v5[4];
      *(_OWORD*)((char*)&v8_.v9[1] + 4) = *(_OWORD*)((char*)v5 + 76);
      v7 = v5[1];
      *(_OWORD*)v8_.v8 = *v5;
      *(_OWORD*)&v8_.v8[2] = v7;
      return CudaDriverRoutine_6f0c0((int*)v8_.v8, (__int64)a1);
    }
  }
  *(_DWORD*)a1 = 0;
  return 22;
}

__int64 nvidia_6e8f0(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  unsigned __int64 v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  _BYTE v22[36];
  struct {
    __int64 v23;
    _QWORD* v24;
  } v23_;

  if (CudaDriverData_14324b0 != 1) {
    return 5;
  }
  if ((CudaDriverData_14324b4 & 1) != 0) {
    v9 = a1;
    if ((unsigned int)CudaDriverStub_12dd00(
            (unsigned int)CudaDriverData_14324cc) != 0) {
      return 44;
    }
    if (CudaDriverData_14324b0 != 1) {
      v12 = 0;
      v13 = 0;
      v14 = 5;
      goto LABEL_11;
    }
    a1 = v9;
    if (CudaDriverData_14324b4 == 1) {
      if ((unsigned int)CudaDriverStub_12dd00(
              (unsigned int)CudaDriverData_14324cc) != 0) {
        v12 = 0;
        v13 = 0;
        v14 = 44;
      LABEL_11:
        a1 = v9;
        goto LABEL_22;
      }
      a1 = v9;
      if (CudaDriverData_14324b0 != 1) {
        goto LABEL_30;
      }
      if (CudaDriverData_14324b4 == 1) {
        v15 = CudaDriverStub_12dd00((unsigned int)CudaDriverData_14324cc);
        a1 = v9;
        if (v15 != 0) {
          goto LABEL_30;
        }
      }
    }
  }
  if (DWORDn(CudaDriverData_1432510, sizeof(CudaDriverData_1432510) / 4 - 1) ==
          0 ||
      (v16 = CudaDriverData_1432510,
       LODWORD(v3) = DWORD2(CudaDriverData_1432510),
       --DWORDn(CudaDriverData_1432510, sizeof(CudaDriverData_1432510) / 4 - 1),
       v4 = (unsigned int)(CudaDriverData_1432510 + 1) /
            DWORD2(CudaDriverData_1432510),
       v2 = (unsigned int)(CudaDriverData_1432510 + 1) %
            DWORD2(CudaDriverData_1432510),
       LODWORD(CudaDriverData_1432510) =
           (unsigned int)(CudaDriverData_1432510 + 1) %
           DWORD2(CudaDriverData_1432510),
       CudaDriverData_1432520 == 0)) {
    v12 = 0;
    v13 = 0;
    v10 = 0;
    v14 = 22;
    goto LABEL_22;
  }
  v6 = CudaDriverData_1432520 + 92LL * v16;
  a2 = *(long double*)(v6 + 8);
  v10 = *(_DWORD*)v6;
  v17 = *(unsigned int*)(v6 + 4);
  *(_DWORD*)&v22[32] = *(_DWORD*)(v6 + 40);
  *(long double*)v22 = a2;
  *(_OWORD*)&v22[16] = *(_OWORD*)(v6 + 24);
  if (*(int*)v6 > 3) {
    if ((unsigned int)(v10 - 5) < 4) {
      LODWORD(v3) = DWORD1(a2);
      v13 = 0;
      v14 = 0;
      v2 = v17 | ((unsigned __int64)LODWORD(a2) << 32);
      v12 = (*(_OWORD*)&a2 >> 32) & 0xFFFFFFFF00000000LL;
      goto LABEL_22;
    }
    if ((unsigned int)(v10 - 9) < 3) {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      goto LABEL_22;
    }
    if (v10 == 4) {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v2 = *(unsigned int*)(v6 + 4);
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  if (v10 != 1) {
    v4 = *(_QWORD*)(v6 + 44);
    if (v10 == 2) {
      v8 = *(_DWORD*)(v6 + 60);
      v12 = 0;
      v14 = 0;
      v2 = v17 | ((unsigned __int64)(*(_OWORD*)&a2 >> 32) << 32);
      v7 = *(_QWORD*)(v6 + 52);
      v5 = *(_DWORD*)(v6 + 76);
      v13 = DWORDn(a2, sizeof(a2) / 4 - 1);
      v23_.v23 = *(_QWORD*)(v6 + 64);
      a2 = *(long double*)&v22[20];
      LODWORD(v3) = *(_DWORD*)v22;
      LODWORD(v23_.v24) = *(_DWORD*)(v6 + 72);
      v10 = 2;
      LODWORD(v6) = *(_DWORD*)&v22[16];
      goto LABEL_22;
    }
    if (v10 == 3) {
      v13 = DWORD1(a2);
      a2 = *(long double*)&v22[12];
      v2 = v17 | (v4 << 32);
      LODWORD(v3) = *(_DWORD*)v22;
      v7 = *(_QWORD*)(v6 + 44);
      v12 = 0;
      v14 = 0;
      v6 = DWORDn(*(_QWORD*)&v22[4], sizeof(*(_QWORD*)&v22[4]) / 4 - 1);
      v4 = *(_QWORD*)&v22[28];
      goto LABEL_22;
    }
  LABEL_30:
    v12 = 0;
    v13 = 0;
    v10 = 0;
  LABEL_31:
    v14 = 10;
    goto LABEL_22;
  }
  v19 = a1;
  v23_.v23 = *(_QWORD*)(v6 + 32);
  v23_.v24 = nullptr;
  v20 = CudaDriverRoutine_1a0a80((__int64)CudaDriverRoutine_76d70,
                                 (__int64)&v23_.v23);
  v14 = 10;
  v10 = 1;
  v12 = 0;
  if (v20 != 0) {
    v13 = 0;
    a1 = v19;
    goto LABEL_22;
  }
  v13 = 0;
  a1 = v19;
  if (v23_.v24 != nullptr) {
    v21 = v23_.v24[2];
    if (v21 != 0 && *(_QWORD*)(v21 + 8) != 0) {
      v2 = v23_.v24[5];
      v3 = v23_.v24[6];
      v13 = *(_DWORD*)&v22[16];
      v14 = 0;
      LODWORD(v6) = v17;
      v12 = v3 & 0xFFFFFFFF00000000LL;
      a2 = *(long double*)v22;
      v4 = *(_QWORD*)&v22[16];
      goto LABEL_22;
    }
    v12 = 0;
    v13 = 0;
    goto LABEL_31;
  }
LABEL_22:
  *(_DWORD*)a1 = v10;
  *(_QWORD*)(a1 + 8) = v2;
  *(_QWORD*)(a1 + 16) = v12 | (unsigned int)v3;
  v18 = v23_.v23;
  *(long double*)(a1 + 32) = a2;
  *(_QWORD*)(a1 + 48) = v4;
  *(_QWORD*)(a1 + 56) = v7;
  *(_DWORD*)(a1 + 64) = v8;
  *(_QWORD*)(a1 + 24) = v13 | ((unsigned __int64)(unsigned int)v6 << 32);
  *(_QWORD*)(a1 + 68) = v18;
  *(_DWORD*)(a1 + 76) = (_DWORD)v23_.v24;
  *(_DWORD*)(a1 + 80) = v5;
  return v14;
}

__int64 nvidia_6f720(_DWORD* a1)
{
  _DWORD* v1;
  int v3;
  unsigned int v4;
  _OWORD* v5;
  __int128 v6;
  __int128 v7;
  struct {
    _QWORD v8[8];
    _QWORD v9[4];
  } v8_;

  if (a1 == nullptr) {
    return 4;
  }
  if (CudaDriverData_14324b0 != 1) {
    return 5;
  }
  if (CudaDriverData_14324b4 == 1) {
    v1 = a1;
    if ((unsigned int)CudaDriverStub_12dd00(
            (unsigned int)CudaDriverData_14324cc) != 0) {
      return 44;
    }
    a1 = v1;
    if (CudaDriverData_14324b0 != 1) {
      return CudaDriverRoutine_6f0c0((int*)v8_.v8, (__int64)a1);
    }
    if (CudaDriverData_14324b4 == 1) {
      v3 = CudaDriverStub_12dd00((unsigned int)CudaDriverData_14324cc);
      a1 = v1;
      if (v3 != 0) {
        return CudaDriverRoutine_6f0c0((int*)v8_.v8, (__int64)a1);
      }
    }
  }
  if (DWORDn(CudaDriverData_1432530, sizeof(CudaDriverData_1432530) / 4 - 1) !=
      0) {
    v4 = CudaDriverData_1432530;
    --DWORDn(CudaDriverData_1432530, sizeof(CudaDriverData_1432530) / 4 - 1);
    LODWORD(CudaDriverData_1432530) =
        (unsigned int)(CudaDriverData_1432530 + 1) %
        DWORD2(CudaDriverData_1432530);
    if (CudaDriverData_1432540 != 0) {
      v5 = (_OWORD*)(CudaDriverData_1432540 + 92LL * v4);
      v6 = v5[3];
      *(_OWORD*)&v8_.v8[4] = v5[2];
      *(_OWORD*)&v8_.v8[6] = v6;
      *(_OWORD*)v8_.v9 = v5[4];
      *(_OWORD*)((char*)&v8_.v9[1] + 4) = *(_OWORD*)((char*)v5 + 76);
      v7 = v5[1];
      *(_OWORD*)v8_.v8 = *v5;
      *(_OWORD*)&v8_.v8[2] = v7;
      return CudaDriverRoutine_6f0c0((int*)v8_.v8, (__int64)a1);
    }
  }
  *(_DWORD*)a1 = 0;
  return 22;
}

__int64 nvidia_de8e0(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;

  *(_DWORD*)((char*)((_UNKNOWN*)0xFCLL) + (_QWORD)CudaDriverData_1422118 + 4) =
      840743424;
  if (DWORDn(CudaDriverData_14302e0, sizeof(CudaDriverData_14302e0) / 4 - 1) !=
      0) {
    v1 = 0;
    atomic_compare_exchange_strong(
        (atomic_uint* volatile)((char*)&CudaDriverData_14302e0 + 8),
        (unsigned int*)&v1, 1u);
    if (v1 != 0) {
      do {
        result = CudaDriverStub_12dc90(result);
        v2 = 0;
        atomic_compare_exchange_strong(
            (atomic_uint* volatile)((char*)&CudaDriverData_14302e0 + 8),
            (unsigned int*)&v2, 1u);
      } while (v2 != 0);
    }
    v3 = CudaDriverData_14302e0;
    for (DWORDn(CudaDriverData_14302e0,
                sizeof(CudaDriverData_14302e0) / 4 - 1) = 2;
         (_QWORD)CudaDriverData_14302e0 != 0; v3 = CudaDriverData_14302e0) {
      cuda_driver_121520(v3);
    }
    CudaDriverStub_12dcf0(DWORD1(CudaDriverData_14302d0));
    CudaDriverStub_12dcf0(DWORD2(CudaDriverData_14302d0));
    result = CudaDriverStub_12dcf0((unsigned int)CudaDriverData_14302d0);
    __builtin_arm_dmb(0xEu);
    DWORD2(CudaDriverData_14302e0) = 0;
  }
  else {
    DWORDn(CudaDriverData_14302e0, sizeof(CudaDriverData_14302e0) / 4 - 1) = 2;
  }
  return result;
}

__int64 nvidia_105e80(_QWORD* a1, __int64 a2, _QWORD* a3, __int64 a4, int a5)
{
  __int64 v6;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  void* v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v6 = a3[13];
  if (v6 != 0) {
    v24 = CudaDriverRoutine_a2830(v6);
  }
  else {
    v16 = CudaDriverRoutine_a2a80(&v24, (_BYTE*)a3[9], a3[11]);
    if (v16 != 0) {
      goto LABEL_18;
    }
  }
  v11 = CudaDriverStub_12e330(560);
  if (v11 == 0) {
  LABEL_23:
    v15 = 2;
    v18 = v24;
    if (v24 == 0) {
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v12 = v11;
  memset_plt_alt1(v11, 0, 0x230u);
  *(_DWORD*)(v12 + 32) = a5;
  v13 = CudaDriverRoutine_1a1f40(32);
  *(_QWORD*)(v12 + 232) = v13;
  if (v13 == nullptr) {
    CudaDriverRoutine_11ae30((_QWORD*)(v12 + 40));
    v19 = *(_QWORD*)(v12 + 488);
    if (v19 != 0) {
      CudaDriverRoutine_12e340(v19);
    }
    CudaDriverRoutine_12e340(v12);
    goto LABEL_23;
  }
  v14 = CudaDriverData_1422118;
  *(_QWORD*)(v12 + 8) = CudaDriverRoutine_12dea0(
      (atomic_ullong*)((char*)((_UNKNOWN*)0x10D8LL) +
                       (_QWORD)CudaDriverData_1422118));
  *(_DWORD*)v12 = 1;
  a3[16] = v12;
  if (*(_QWORD*)(a4 + 48) == 0) {
    CudaDriverRoutine_127630(*(_QWORD*)(a4 + 16), v12);
    v12 = a3[16];
  }
  v15 = CudaDriverRoutine_aa2e0(a2, v12, v24, (char*)a4);
  v24 = 0;
  if (v15 != 0) {
    goto LABEL_25;
  }
  v16 = CudaDriverRoutine_105c20(a2, a3[16], a4);
  if (v16 != 0) {
    goto LABEL_18;
  }
  v16 = CudaDriverRoutine_1255b0(a3[16]);
  if (v16 != 0) {
    goto LABEL_18;
  }
  v16 = CudaDriverRoutine_98190(a2, 0);
  if (v16 != 0) {
    goto LABEL_18;
  }
  v16 = CudaDriverRoutine_106130(a3[16], a2);
  if (v16 != 0) {
    goto LABEL_18;
  }
  v16 = cuda_driver_predicates_921f0(a3[16]);
  if (v16 != 0) {
    goto LABEL_18;
  }
  v16 = CudaDriverRoutine_11ce20(a2, a3[16]);
  if (v16 != 0) {
    goto LABEL_18;
  }
  v17 = a3[16];
  if ((*(_BYTE*)(v17 + 380) & 1) == 0) {
    v16 = CudaDriverRoutine_106280(a2, v17);
    if (v16 == 0) {
      goto LABEL_31;
    }
  LABEL_18:
    v15 = v16;
    v18 = v24;
    if (v24 == 0) {
      goto LABEL_25;
    }
  LABEL_24:
    cuda_driver_a2fc0(v18);
    goto LABEL_25;
  }
  v16 = CudaDriverRoutine_106300(a2, v17);
  if (v16 != 0) {
    goto LABEL_18;
  }
LABEL_31:
  v22 = a3[16];
  if ((*(_WORD*)(v22 + 36) & 1) == 0 &&
      CudaDriverRoutine_92440((_QWORD*)(v22 + 288)) &&
      CudaDriverRoutine_98110(a2)) {
    nvidia_ed630((__int64)"CUDA", 0, (__int64)"CDP is not supported on MPS\n");
    goto LABEL_39;
  }
  v23 = a3[16];
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v14) != 2 ||
      (*(_WORD*)(v23 + 36) & 1) != 0) {
  LABEL_42:
    *a1 = v23;
    CudaDriverRoutine_106390(a2, a3);
    CudaDriverRoutine_1064c0((_WORD*)a4, a2, a3);
    return 0;
  }
  if (!CudaDriverRoutine_92440((_QWORD*)(v23 + 288))) {
    v23 = a3[16];
    goto LABEL_42;
  }
  nvidia_ed630(
      (__int64)"CUDA", 0,
      (__int64)"CDP is not supported in confidential computing mode\n");
LABEL_39:
  v15 = 811;
  v18 = v24;
  if (v24 != 0) {
    goto LABEL_24;
  }
LABEL_25:
  v20 = a3[16];
  if (v20 != 0) {
    if (*(_QWORD*)(a4 + 48) == 0) {
      CudaDriverRoutine_1274d0(*(_QWORD*)(a4 + 16), v20);
      v20 = a3[16];
    }
    CudaDriverRoutine_106940(v20, 0);
    a3[16] = 0;
  }
  return v15;
}

__int64 nvidia_1212d0()
{
  if (DWORDn(CudaDriverData_14302e0, sizeof(CudaDriverData_14302e0) / 4 - 1) ==
      1) {
    return 0;
  }
  CudaDriverData_14302f0 = 0;
  CudaDriverData_14302d0 = (__typeof__(CudaDriverData_14302d0)){0};
  CudaDriverData_14302e0 = (__typeof__(CudaDriverData_14302e0)){0};
  LODWORD(CudaDriverData_14302d0) = CudaDriverStub_12dce0(nvidia_1213c0_alt1);
  if ((_DWORD)CudaDriverData_14302d0 == -1 ||
      (DWORD2(CudaDriverData_14302d0) = CudaDriverStub_12dce0(0),
       DWORD2(CudaDriverData_14302d0) == -1)) {
    if (DWORD1(CudaDriverData_14302d0) != -1) {
      CudaDriverStub_12dcf0(DWORD1(CudaDriverData_14302d0));
    }
  }
  else {
    DWORD1(CudaDriverData_14302d0) = CudaDriverStub_12dce0(0);
    if (DWORD1(CudaDriverData_14302d0) != -1) {
      DWORDn(CudaDriverData_14302e0, sizeof(CudaDriverData_14302e0) / 4 - 1) =
          1;
      return 0;
    }
  }
  if (DWORD2(CudaDriverData_14302d0) != -1) {
    CudaDriverStub_12dcf0(DWORD2(CudaDriverData_14302d0));
  }
  if ((_DWORD)CudaDriverData_14302d0 != -1) {
    CudaDriverStub_12dcf0((unsigned int)CudaDriverData_14302d0);
  }
  return 2;
}

__int64 nvidia_1213c0(__int64 result)
{
  int v1;
  __int64 v2;
  int v3;

  if (result != 0) {
    v1 = 0;
    v2 = result;
    atomic_compare_exchange_strong(
        (atomic_uint* volatile)((char*)&CudaDriverData_14302e0 + 8),
        (unsigned int*)&v1, 1u);
    if (v1 != 0) {
      do {
        result = CudaDriverStub_12dc90(result);
        v3 = 0;
        atomic_compare_exchange_strong(
            (atomic_uint* volatile)((char*)&CudaDriverData_14302e0 + 8),
            (unsigned int*)&v3, 1u);
      } while (v3 != 0);
    }
    if (DWORDn(CudaDriverData_14302e0,
               sizeof(CudaDriverData_14302e0) / 4 - 1) == 1) {
      result = cuda_driver_121520(v2);
    }
    __builtin_arm_dmb(0xEu);
    DWORD2(CudaDriverData_14302e0) = 0;
  }
  return result;
}

__int64 nvidia_121c60(__int64* a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  int v11;
  __int64 v12;

  if (DWORDn(CudaDriverData_14302e0, sizeof(CudaDriverData_14302e0) / 4 - 1) ==
      0) {
    return 3;
  }
  if (DWORDn(CudaDriverData_14302e0, sizeof(CudaDriverData_14302e0) / 4 - 1) ==
      2) {
    return 4;
  }
  v3 = CudaDriverStub_12dd00((unsigned int)CudaDriverData_14302d0);
  if (v3 != 0) {
    v4 = v3;
  LABEL_7:
    *a1 = v4;
    return 0;
  }
  if (CudaDriverStub_12dd00(DWORD1(CudaDriverData_14302d0)) == 1) {
    v4 = -1;
    goto LABEL_7;
  }
  v5 = CudaDriverStub_12e330(88);
  if (v5 == 0) {
    return 2;
  }
  v6 = (_QWORD*)v5;
  *(_QWORD*)(v5 + 80) = 0;
  *(_OWORD*)(v5 + 16) = (__typeof__(*(_OWORD*)(v5 + 16))){0};
  *(_OWORD*)(v5 + 32) = (__typeof__(*(_OWORD*)(v5 + 32))){0};
  *(_OWORD*)(v5 + 48) = (__typeof__(*(_OWORD*)(v5 + 48))){0};
  *(_OWORD*)(v5 + 64) = (__typeof__(*(_OWORD*)(v5 + 64))){0};
  *(_OWORD*)v5 = (__typeof__(*(_OWORD*)v5)){0};
  *(_BYTE*)(v5 + 64) = 1;
  v7 = CudaDriverStub_12e330(12);
  v6[5] = v7;
  if (v7 != 0) {
    *(_DWORD*)(v7 + 8) = 0;
    *(_QWORD*)v7 = 0;
    *(_DWORD*)v6[5] = 1;
    v6[2] = CudaDriverRoutine_12dea0((atomic_ullong*)&CudaDriverData_14302f0);
    v8 = CudaDriverRoutine_e1d00((__int64)(v6 + 6));
    if ((_DWORD)v8 != 0) {
      v9 = v8;
      CudaDriverRoutine_12e340(v6[5]);
      CudaDriverRoutine_12e340((__int64)v6);
      return v9;
    }
    else {
      v10 = 0;
      atomic_compare_exchange_strong(
          (atomic_uint* volatile)((char*)&CudaDriverData_14302e0 + 8),
          (unsigned int*)&v10, 1u);
      if (v10 != 0) {
        do {
          v8 = CudaDriverStub_12dc90(v8);
          v11 = 0;
          atomic_compare_exchange_strong(
              (atomic_uint* volatile)((char*)&CudaDriverData_14302e0 + 8),
              (unsigned int*)&v11, 1u);
        } while (v11 != 0);
      }
      v12 = CudaDriverData_14302e0;
      *(_QWORD*)&CudaDriverData_14302e0 = v6;
      v6[10] = v12;
      if (v12 != 0) {
        *(_QWORD*)(v12 + 72) = v6;
      }
      __builtin_arm_dmb(0xEu);
      DWORD2(CudaDriverData_14302e0) = 0;
      CudaDriverRoutine_12dd10((unsigned int)CudaDriverData_14302d0,
                               (__int64)v6);
      *a1 = (__int64)v6;
      return 0;
    }
  }
  else {
    CudaDriverRoutine_12e340((__int64)v6);
    return 2;
  }
}

__int64 nvidia_12ce00(__int64* a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = a2;
  if (a3 == 0) {
    return 0;
  }
  v4 = 0;
  if ((sizeof((a2) * (a3)) > 4
           ? ((unsigned __int128)(unsigned long long)(a2) *
              (unsigned long long)(a3)) >>
                     64 ==
                 0
           : ((unsigned long long)(unsigned int)(a2) * (unsigned int)(a3)) >>
                     32 ==
                 0)) {
    if (a3 <= 0x3F / a2 + 1) {
      v5 = 0x3F / a2 + 1;
    }
    else {
      v5 = a3;
    }
    v6 = CudaDriverStub_12e550(0);
    if (v6 != 0) {
      *a1 = v6;
      a1[2] = v5;
      return 0;
    }
    {
      v4 = *a1;
      __asm__ volatile("" ::"r"(v4));
    }
  }
  CudaDriverRoutine_12e340(v4);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return 2;
}

__int64 nvidia_12cef0(__int64* a1, _QWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  {
    v2 = a1[2];
    __asm__ volatile("" ::"r"(v2));
  }
  if ((v2 & 0x8000000000000000LL) != 0) {
    return 2;
  }
  {
    v3 = a1[1];
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 + 1 > v2) {
    v4 = 2 * v2;
    if (v2 == 0) {
      v4 = 1;
    }
    if (v4 != v2) {
      {
        v5 = a1[3];
        __asm__ volatile("" ::"r"(v5));
      }
      if (!(sizeof((v5) * (v4)) > 4
                ? ((unsigned __int128)(unsigned long long)(v5) *
                   (unsigned long long)(v4)) >>
                          64 ==
                      0
                : ((unsigned long long)(unsigned int)(v5) *
                   (unsigned int)(v4)) >>
                          32 ==
                      0)) {
        return 2;
      }
      v7 = a2;
      if (v4 != 0) {
        v8 = a1;
        {
          v9 = *a1;
          __asm__ volatile("" ::"r"(v9));
        }
        if (v4 <= 0x3F / v5 + 1) {
          v10 = 0x3F / v5 + 1;
        }
        else {
          v10 = v4;
        }
        v11 = CudaDriverStub_12e550(v9);
        if (v11 == 0) {
          return 2;
        }
        v12 = v11;
      }
      else {
        v8 = a1;
        CudaDriverRoutine_12e340(*a1);
        v12 = 0;
        v10 = 0;
      }
      {
        v3 = v8[1];
        __asm__ volatile("" ::"r"(v3));
      }
      a1 = v8;
      *v8 = v12;
      v8[2] = v10;
      a2 = v7;
    }
  }
  *a2 = *a1 + a1[3] * v3;
  ++a1[1];
  return 0;
}

__int64 nvidia_12d000(__int64* a1, unsigned __int64 a2, _QWORD* a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  {
    v3 = a1[1];
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 < ~a2) {
    v4 = a2;
    if (v3 != 0) {
      {
        v5 = a1[2];
        __asm__ volatile("" ::"r"(v5));
      }
      do {
        v4 = v5;
        v5 *= 2;
      } while (v3 + a2 > v4);
    }
    if (v4 <= a1[2]) {
      {
        v13 = *a1;
        __asm__ volatile("" ::"r"(v13));
      }
      goto LABEL_14;
    }
    {
      v6 = a1[3];
      __asm__ volatile("" ::"r"(v6));
    }
    if ((sizeof((v6) * (v4)) > 4
             ? ((unsigned __int128)(unsigned long long)(v6) *
                (unsigned long long)(v4)) >>
                       64 ==
                   0
             : ((unsigned long long)(unsigned int)(v6) * (unsigned int)(v4)) >>
                       32 ==
                   0)) {
      v7 = a1;
      {
        v8 = *a1;
        __asm__ volatile("" ::"r"(v8));
      }
      v9 = a2;
      v10 = a3;
      v11 = v4 <= 0x3F / v6 + 1 ? 0x3F / v6 + 1 : v4;
      v12 = CudaDriverStub_12e550(v8);
      if (v12 != 0) {
        {
          v3 = v7[1];
          __asm__ volatile("" ::"r"(v3));
        }
        v13 = v12;
        a1 = v7;
        *v7 = v13;
        v7[2] = v11;
        a2 = v9;
        a3 = v10;
      LABEL_14:
        *a3 = v13 + a1[3] * v3;
        a1[1] += a2;
        return 0;
      }
    }
  }
  return 2;
}

__int64 nvidia_12d190(__int64* a1, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;

  {
    v2 = a1[3];
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v3 = a1[1];
    __asm__ volatile("" ::"r"(v3));
  }
  *a2 = 0;
  a2[1] = 0;
  v6 = 0;
  a2[2] = 0;
  a2[3] = v2;
  if (v3 == 0) {
    goto LABEL_8;
  }
  if ((sizeof((v2) * (v3)) > 4
           ? ((unsigned __int128)(unsigned long long)(v2) *
              (unsigned long long)(v3)) >>
                     64 ==
                 0
           : ((unsigned long long)(unsigned int)(v2) * (unsigned int)(v3)) >>
                     32 ==
                 0)) {
    if (v3 <= 0x3F / v2 + 1) {
      v7 = 0x3F / v2 + 1;
    }
    else {
      v7 = v3;
    }
    v6 = CudaDriverStub_12e550(0);
    if (v6 != 0) {
      *a2 = v6;
      a2[2] = v7;
    LABEL_8:
      memcpy_plt(v6, *a1, a1[3] * a1[1]);
      a2[1] = a1[1];
      return 0;
    }
    {
      v6 = *a2;
      __asm__ volatile("" ::"r"(v6));
    }
  }
  CudaDriverRoutine_12e340(v6);
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  return 2;
}

__int64 nvidia_1a6340(__int64 a1)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  __int16 v29;
  int v30;
  __int64 v31;
  int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  bool v39;
  unsigned int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  char v45;
  unsigned int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  unsigned int v55;
  int v56;
  int v57;
  int v58;
  __int64 v59;
  float v60;
  int v61;
  int v62;
  int v63;
  int v64;
  float v65;
  _BOOL4 v66;
  bool v67;
  double v68;
  int v69;
  int v70;
  unsigned int v71;
  float v72;
  _BOOL4 v73;
  bool v74;
  __int16 v75;
  float v76;
  int v77;
  int v78;
  int v79;
  int v80;
  unsigned int v82;
  __int64 v83;
  __int64* v84;
  int v85;
  int v86;
  _BYTE v87[4];
  long double v88;

  if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) != 0) {
    return CudaDriverRoutine_11de00(a1);
  }
  v3 = *(_DWORD*)(a1 + 40);
  *(_OWORD*)(a1 + 336) = (__typeof__(*(_OWORD*)(a1 + 336))){0};
  *(_OWORD*)(a1 + 352) = (__typeof__(*(_OWORD*)(a1 + 352))){0};
  *(_OWORD*)(a1 + 368) = (__typeof__(*(_OWORD*)(a1 + 368))){0};
  *(_OWORD*)(a1 + 384) = (__typeof__(*(_OWORD*)(a1 + 384))){0};
  if (v3 == 1) {
    if (*(_DWORD*)(a1 + 120) != 0) {
      v4 = 1;
    }
    else {
      v4 = 2;
    }
    v5 = (__int64*)(a1 + 8);
    if (!CudaDriverStub_985a0(*(_QWORD*)(a1 + 8))) {
      goto LABEL_13;
    }
  LABEL_10:
    if (*(_DWORD*)(a1 + 40) == 2 && *(_BYTE*)(a1 + 920) != 0) {
      v4 = 1;
    }
    goto LABEL_13;
  }
  v4 = 0;
  v5 = (__int64*)(a1 + 8);
  if (CudaDriverStub_985a0(*(_QWORD*)(a1 + 8))) {
    goto LABEL_10;
  }
LABEL_13:
  v6 = nvidia_11fa80(a1);
  v7 = 1;
  v8 = 1900544;
  switch (v6) {
  case 0:
    v8 = 1835008;
    goto LABEL_36;
  case 3:
    v8 = 1310720;
    goto LABEL_36;
  case 6:
    v8 = 1376256;
    goto LABEL_36;
  case 47:
    v8 = 2228224;
    goto LABEL_36;
  case 48:
    v8 = 2293760;
    goto LABEL_36;
  case 54:
    v8 = 589824;
    goto LABEL_36;
  case 69:
    v8 = 0x10000;
    goto LABEL_36;
  case 76:
    v8 = 196608;
    goto LABEL_36;
  case 80:
    v8 = 0x40000;
    goto LABEL_36;
  case 88:
    v8 = 0x80000;
    goto LABEL_36;
  case 93:
    v8 = 786432;
    goto LABEL_36;
  case 97:
    v8 = 983040;
    goto LABEL_36;
  case 103:
    v8 = 1572864;
    goto LABEL_36;
  case 107:
    v8 = 1769472;
    goto LABEL_36;
  case 113:
    goto LABEL_36;
  case 119:
    v8 = 2359296;
    goto LABEL_36;
  case 121:
    v8 = 2424832;
    goto LABEL_36;
  case 123:
    v8 = 2490368;
    goto LABEL_36;
  case 125:
    v8 = 2555904;
    goto LABEL_36;
  case 127:
    v8 = 2621440;
    goto LABEL_36;
  case 130:
    v8 = 1114112;
    goto LABEL_36;
  case 131:
    v8 = 0x100000;
    goto LABEL_36;
  case 132:
    v8 = 1507328;
  LABEL_36:
    *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFF80FFFF | v8;
    v9 = CudaDriverRoutine_11fd60(a1);
    if (v9 > 2) {
      switch (v9) {
      case 3:
        *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFF0FFF | 0x6000;
        v10 = CudaDriverRoutine_11f370(a1, 0);
        if (v10 <= 2) {
          goto LABEL_58;
        }
        break;
      case 4:
        *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFF0FFF | 0x7000;
        v10 = CudaDriverRoutine_11f370(a1, 0);
        if (v10 <= 2) {
          goto LABEL_58;
        }
        break;
      case 5:
        *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFF0FFF | 0x2000;
        v10 = CudaDriverRoutine_11f370(a1, 0);
        if (v10 <= 2) {
          goto LABEL_58;
        }
        break;
      default:
        return v7;
      }
    LABEL_49:
      if (v10 > 4) {
        if (v10 == 5) {
          *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFFF8 | 6;
          v11 = CudaDriverRoutine_11f370(a1, 1u);
          if (v11 <= 2) {
            goto LABEL_77;
          }
        }
        else {
          if (v10 != 6) {
            return v7;
          }
          *(_DWORD*)(a1 + 348) |= 7u;
          v11 = CudaDriverRoutine_11f370(a1, 1u);
          if (v11 <= 2) {
            goto LABEL_77;
          }
        }
      }
      else if (v10 == 3) {
        *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFFF8 | 4;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_77;
        }
      }
      else {
        *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFFF8 | 5;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_77;
        }
      }
    LABEL_68:
      if (v11 > 4) {
        if (v11 == 5) {
          *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFFC7 | 0x30;
          v12 = CudaDriverRoutine_11f370(a1, 2u);
          if (v12 <= 2) {
            goto LABEL_96;
          }
        }
        else {
          if (v11 != 6) {
            return v7;
          }
          *(_DWORD*)(a1 + 348) |= 0x38u;
          v12 = CudaDriverRoutine_11f370(a1, 2u);
          if (v12 <= 2) {
            goto LABEL_96;
          }
        }
      }
      else if (v11 == 3) {
        *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFFC7 | 0x20;
        v12 = CudaDriverRoutine_11f370(a1, 2u);
        if (v12 <= 2) {
          goto LABEL_96;
        }
      }
      else {
        *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFFC7 | 0x28;
        v12 = CudaDriverRoutine_11f370(a1, 2u);
        if (v12 <= 2) {
          goto LABEL_96;
        }
      }
    LABEL_87:
      if (v12 > 4) {
        if (v12 == 5) {
          *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFE3F | 0x180;
          v13 = CudaDriverRoutine_11f370(a1, 3u);
          if (v13 <= 2) {
            goto LABEL_113;
          }
        }
        else {
          if (v12 != 6) {
            return v7;
          }
          *(_DWORD*)(a1 + 348) |= 0x1C0u;
          v13 = CudaDriverRoutine_11f370(a1, 3u);
          if (v13 <= 2) {
            goto LABEL_113;
          }
        }
      }
      else if (v12 == 3) {
        *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFE3F | 0x100;
        v13 = CudaDriverRoutine_11f370(a1, 3u);
        if (v13 <= 2) {
          goto LABEL_113;
        }
      }
      else {
        *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFE3F | 0x140;
        v13 = CudaDriverRoutine_11f370(a1, 3u);
        if (v13 <= 2) {
          goto LABEL_113;
        }
      }
    LABEL_106:
      if (v13 > 4) {
        if (v13 == 5) {
          v14 = *(_DWORD*)(a1 + 348) & 0xFFFFF1FF | 0xC00;
        }
        else {
          if (v13 != 6) {
            return v7;
          }
          v14 = *(_DWORD*)(a1 + 348) | 0xE00;
        }
      }
      else if (v13 == 3) {
        v14 = *(_DWORD*)(a1 + 348) & 0xFFFFF1FF | 0x800;
      }
      else {
        v14 = *(_DWORD*)(a1 + 348) & 0xFFFFF1FF | 0xA00;
      }
      goto LABEL_121;
    }
    if (v9 == 1) {
      *(_DWORD*)(a1 + 348) &= 0xFFFF0FFF;
      v10 = CudaDriverRoutine_11f370(a1, 0);
      if (v10 <= 2) {
        goto LABEL_58;
      }
      goto LABEL_49;
    }
    if (v9 != 2) {
      return v7;
    }
    *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFF0FFF | 0x1000;
    v10 = CudaDriverRoutine_11f370(a1, 0);
    if (v10 > 2) {
      goto LABEL_49;
    }
  LABEL_58:
    if (v10 == 0) {
      *(_DWORD*)(a1 + 348) &= 0xFFFFFFF8;
      v11 = CudaDriverRoutine_11f370(a1, 1u);
      if (v11 <= 2) {
        goto LABEL_77;
      }
      goto LABEL_68;
    }
    if (v10 == 1) {
      *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFFF8 | 2;
      v11 = CudaDriverRoutine_11f370(a1, 1u);
      if (v11 <= 2) {
        goto LABEL_77;
      }
      goto LABEL_68;
    }
    if (v10 != 2) {
      return v7;
    }
    *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFFF8 | 3;
    v11 = CudaDriverRoutine_11f370(a1, 1u);
    if (v11 > 2) {
      goto LABEL_68;
    }
  LABEL_77:
    if (v11 == 0) {
      *(_DWORD*)(a1 + 348) &= 0xFFFFFFC7;
      v12 = CudaDriverRoutine_11f370(a1, 2u);
      if (v12 <= 2) {
        goto LABEL_96;
      }
      goto LABEL_87;
    }
    if (v11 == 1) {
      *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFFC7 | 0x10;
      v12 = CudaDriverRoutine_11f370(a1, 2u);
      if (v12 <= 2) {
        goto LABEL_96;
      }
      goto LABEL_87;
    }
    if (v11 != 2) {
      return v7;
    }
    *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFFC7 | 0x18;
    v12 = CudaDriverRoutine_11f370(a1, 2u);
    if (v12 > 2) {
      goto LABEL_87;
    }
  LABEL_96:
    if (v12 == 0) {
      *(_DWORD*)(a1 + 348) &= 0xFFFFFE3F;
      v13 = CudaDriverRoutine_11f370(a1, 3u);
      if (v13 <= 2) {
        goto LABEL_113;
      }
      goto LABEL_106;
    }
    if (v12 == 1) {
      *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFE3F | 0x80;
      v13 = CudaDriverRoutine_11f370(a1, 3u);
      if (v13 <= 2) {
        goto LABEL_113;
      }
      goto LABEL_106;
    }
    if (v12 != 2) {
      return v7;
    }
    *(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 348) & 0xFFFFFE3F | 0xC0;
    v13 = CudaDriverRoutine_11f370(a1, 3u);
    if (v13 > 2) {
      goto LABEL_106;
    }
  LABEL_113:
    if (v13 != 0) {
      if (v13 == 1) {
        v14 = *(_DWORD*)(a1 + 348) & 0xFFFFF1FF | 0x400;
      }
      else {
        if (v13 != 2) {
          return v7;
        }
        v14 = *(_DWORD*)(a1 + 348) & 0xFFFFF1FF | 0x600;
      }
    }
    else {
      v14 = *(_DWORD*)(a1 + 348) & 0xFFFFF1FF;
    }
  LABEL_121:
    v15 = *(_DWORD*)(a1 + 328);
    *(_DWORD*)(a1 + 348) = v14;
    if ((v15 & 8) != 0) {
      v14 |= 0x800000u;
      *(_DWORD*)(a1 + 348) = v14;
    }
    v16 = *(_QWORD*)(a1 + 128);
    if (v4 == 0) {
      v17 = 805306368;
      v18 = -512;
      v19 = 511;
      goto LABEL_127;
    }
    if (v4 == 1) {
      v17 = 0x20000000;
      v18 = -32;
      v19 = 31;
    LABEL_127:
      v20 = *(_DWORD*)(a1 + 336) & v19 | v18 & v16;
      goto LABEL_129;
    }
    v17 = 1342177280;
    v20 = *(_QWORD*)(a1 + 128);
  LABEL_129:
    *(_DWORD*)(a1 + 336) = v20;
    *(_DWORD*)(a1 + 348) = v14 & 0xFFFFFFF | v17;
    *(_DWORD*)(a1 + 340) = *(_DWORD*)(a1 + 340) & 0xFE000000 |
                           DWORDn(v16, sizeof(v16) / 4 - 1) & 0x1FFFFFF;
    if (v4 == 2) {
      *(_DWORD*)(a1 + 344) = *(int*)(a1 + 104) - 1;
      if ((v15 & 0x10) == 0) {
        goto LABEL_169;
      }
    LABEL_168:
      *(_DWORD*)(a1 + 352) |= 0x200000u;
      goto LABEL_169;
    }
    v21 = *(_DWORD*)(a1 + 344);
    *(_DWORD*)(a1 + 344) = v21 | 0x10000;
    if (v4 != 1) {
      v24 = *(_QWORD*)(a1 + 64);
      v25 = v21 & 0xFFFEFFF8 | 0x10000 | *(_DWORD*)(v24 + 40) & 7;
      *(_DWORD*)(a1 + 344) = v25;
      v26 = v25 & 0xFFFFFFC7 | (8 * (*(_DWORD*)(v24 + 44) & 7));
      *(_DWORD*)(a1 + 344) = v26;
      v27 = v26 & 0xFFFFFE3F | ((*(_DWORD*)(v24 + 48) & 7) << 6);
      *(_DWORD*)(a1 + 344) = v27;
      if ((*(_BYTE*)(v24 + 32) & 0x40) != 0) {
        v28 = *(_DWORD*)(v24 + 144);
        if (v28 < 2) {
          v30 = 0;
        }
        else {
          v29 = 0;
          do {
            v29 += 1024;
            v67 = v28 > 3;
            v28 >>= 1;
          } while (v67);
          v30 = v29 & 0x1C00;
        }
        v27 = v30 | v27 & 0xFFFFE3FF;
        *(_DWORD*)(a1 + 344) = v27;
      }
      v31 = *(_QWORD*)(a1 + 88);
      if (v31 != 0) {
        v27 =
            (v27 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v31 + 40) << 28)) -
            0x10000000;
      }
      v32 = *(_DWORD*)(a1 + 104);
      *(_DWORD*)(a1 + 344) = v27 | 0x60000;
      v33 = *(_DWORD*)(a1 + 352) & 0xFFFE0000 | (v32 - 1) & 0x1FFFF;
      *(_DWORD*)(a1 + 352) = v33;
      v34 = *(_DWORD*)(v24 + 8);
      if (v34 > 3) {
        v35 = v33 & 0xFC3FFFFF | 0x2000000;
        v36 = v33 & 0xFC3FFFFF | 0xC00000;
        v37 = v33 & 0xFC3FFFFF | 0x1000000;
        if (v34 != 7) {
          v35 = v33;
        }
        if (v34 != 6) {
          v36 = v35;
        }
        if (v34 == 5) {
          v33 = v33 & 0xFC3FFFFF | 0x1400000;
        }
        if (v34 == 4) {
          v33 = v37;
        }
        if (v34 <= 5) {
          v38 = v33;
        }
        else {
          v38 = v36;
        }
        goto LABEL_167;
      }
      if (v34 == 1) {
        if (!CudaDriverRoutine_11f690((__int64*)a1)) {
          v38 = *(_DWORD*)(a1 + 352) & 0xFC3FFFFF;
          goto LABEL_167;
        }
      }
      else if (v34 != 2) {
        v39 = v34 == 3;
        v38 = v33 & 0xFC3FFFFF | 0x800000;
        if (!v39) {
          v38 = v33;
        }
      LABEL_167:
        *(_DWORD*)(a1 + 352) = v38 | 0x10000000;
        if ((*(_DWORD*)(a1 + 328) & 0x10) == 0) {
          goto LABEL_169;
        }
        goto LABEL_168;
      }
      v40 = *(_DWORD*)(a1 + 352) & 0xFC3FFFFF;
      if (*(_DWORD*)(a1 + 120) != 0) {
        v38 = v40 | 0x1C00000;
      }
      else {
        v38 = v40 | 0x400000;
      }
      goto LABEL_167;
    }
    v22 = v21 & 0xFFFE0000 | (*(_DWORD*)(a1 + 116) >> 5) & 0x1FFFF;
    v23 = *(_QWORD*)(a1 + 88);
    *(_DWORD*)(a1 + 344) = v22;
    if (v23 != 0) {
      v22 = (v22 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v23 + 40) << 28)) -
            0x10000000;
    }
    *(_DWORD*)(a1 + 344) = v22 | 0x60000;
    *(_DWORD*)(a1 + 352) = *(_DWORD*)(a1 + 352) & 0xEC3E0000 |
                           (*(int*)(a1 + 104) - 1) & 0x1FFFF | 0x11C00000;
    if ((v15 & 0x10) != 0) {
      goto LABEL_168;
    }
  LABEL_169:
    if (v4 != 2) {
      v41 = *(_DWORD*)(a1 + 108);
      v42 = *(_DWORD*)(a1 + 112);
      if (v41 != 0) {
        v43 = (v41 - 1) & 0x1FFFF;
      }
      else {
        v43 = 0;
      }
      if (v42 != 0) {
        v44 = (v42 << 17) - 0x20000;
      }
      else {
        v44 = 0;
      }
      *(_DWORD*)(a1 + 356) = v44 | v43;
      if (CudaDriverRoutine_11f6d0(a1)) {
        *(_DWORD*)(a1 + 352) |= 0x20000u;
      }
      v45 = *(_BYTE*)(a1 + 328);
      v46 = *(_DWORD*)(a1 + 360) & 0xF87FFFFF | 0x3000000;
      *(_DWORD*)(a1 + 360) = v46;
      if ((v45 & 0x20) != 0) {
        v47 = *(_DWORD*)(a1 + 296);
        if (v47 > 7) {
          v49 = v46 & 0xFB7FFFC1 | 0x10;
        }
        else {
          v48 = 1 << v47;
          if ((v48 & 0xF0) != 0) {
            v49 = v46 & 0xFB7FFFC1 | 0xC;
          }
          else if ((v48 & 3) != 0) {
            v49 = v46 & 0xFB7FFFC1;
          }
          else {
            v49 = v46 & 0xFB7FFFC1 | 8;
          }
        }
        *(_DWORD*)(a1 + 360) = v49;
      }
    }
    if (*(_QWORD*)(a1 + 88) != 0) {
      *(_DWORD*)(a1 + 364) = *(_DWORD*)(a1 + 364) & 0xFFFFFF00 |
                             *(_DWORD*)(a1 + 136) & 0xF |
                             (16 * (*(_DWORD*)(a1 + 140) & 0xF));
    }
    v50 = CudaDriverRoutine_11f790(a1, 0);
    v7 = 1;
    if (v50 > 2) {
      if ((unsigned int)(v50 - 3) >= 2) {
        return v7;
      }
    }
    else {
      switch (v50) {
      case 0:
        goto LABEL_198;
      case 1:
        v50 = 2;
        break;
      case 2:
        v50 = 1;
        break;
      default:
        return v7;
      }
    }
    *(_DWORD*)(a1 + 368) |= v50;
  LABEL_198:
    v51 = CudaDriverRoutine_11f790(a1, 1u);
    if (v51 <= 1) {
      if (v51 == 0) {
        goto LABEL_209;
      }
      if (v51 != 1) {
        return v7;
      }
      v52 = 16;
    }
    else {
      switch (v51) {
      case 4:
        v52 = 32;
        break;
      case 3:
        v52 = 24;
        break;
      case 2:
        v52 = 8;
        break;
      default:
        return v7;
      }
    }
    *(_DWORD*)(a1 + 368) |= v52;
  LABEL_209:
    v53 = CudaDriverRoutine_11f790(a1, 2u);
    if (v53 <= 1) {
      if (v53 != 0) {
        if (v53 != 1) {
          return v7;
        }
        v54 = *(_DWORD*)(a1 + 368) | 0x80;
      }
      else {
        v54 = *(_DWORD*)(a1 + 368);
      }
    LABEL_220:
      *(_DWORD*)(a1 + 368) = v54 | 0x2000;
      v55 = *(_DWORD*)(a1 + 296);
      v56 = 1056768;
      if ((int)v55 > 5) {
        if (v55 <= 0xF) {
          if (((1 << v55) & 0xF000) != 0) {
            v56 = 6299648;
            goto LABEL_235;
          }
          if (((1 << v55) & 0x300) != 0) {
            v56 = 4202496;
            goto LABEL_235;
          }
          if (((1 << v55) & 0xC00) != 0) {
            v56 = 5251072;
            goto LABEL_235;
          }
        }
        if (v55 - 6 < 2) {
          v56 = 3153920;
          goto LABEL_235;
        }
      }
      else {
        if (v55 < 2) {
          goto LABEL_236;
        }
        if (v55 - 2 < 2) {
        LABEL_235:
          *(_DWORD*)(a1 + 368) = v54 | v56;
        LABEL_236:
          if (*(_DWORD*)(a1 + 276) == 1) {
            v57 = 34;
          }
          else {
            v57 = 17;
          }
          v58 = *(_DWORD*)(a1 + 372) | v57;
          v59 = *(_QWORD*)(a1 + 88);
          if (v59 != 0) {
            v60 = 0x0.0p+0f;
            if (*(_DWORD*)(a1 + 280) == 1) {
              v61 = 192;
            }
            else {
              v61 = 128;
            }
            v62 = v58 | v61;
            if (v4 != 2 && (*(_BYTE*)(a1 + 328) & 0x20) == 0) {
              if (v55 > 7) {
                v60 = -0x1.0000000000000p-2f;
                v62 |= 0x20000000u;
              }
              else {
                v63 = 1 << v55;
                if ((v63 & 0xF0) != 0) {
                  v62 |= 0x18000000u;
                  v60 = -0x1.b6db6e0000000p-3f;
                }
                else if ((v63 & 3) != 0) {
                  v60 = -0x0.0p+0f;
                }
                else {
                  v62 |= 0x10000000u;
                  v60 = -0x1.5555560000000p-3f;
                }
              }
            }
            v65 = v60 + *(float*)(a1 + 284);
            v66 = v65 >= 0x1.e000000000000p+3f;
            v67 = v65 <= -0x1.e000000000000p+3f;
            v68 = v65;
            v69 = !v67 || v66;
            if (v67) {
              v66 = true;
            }
            if (v69 != 0) {
              v70 = 3840;
            }
            else {
              v70 = 4352;
            }
            v71 = vcvtd_n_s32_f64(v68, 8u) & 0x1FFF;
            if (!v66) {
              v70 = v71;
            }
            v64 = v62 | (v70 << 12);
            *(_DWORD*)(a1 + 372) = v64;
            if (v4 == 2) {
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
                goto LABEL_267;
              }
            }
            else {
              *(_DWORD*)(a1 + 360) =
                  *(_DWORD*)(a1 + 360) & 0xFFF8003F | ((v70 & 0x1FFF) << 6);
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              LABEL_267:
                if (v59 == 0) {
                  goto LABEL_268;
                }
                goto LABEL_272;
              }
            }
          }
          else {
            v64 = v58 | 0x40;
            *(_DWORD*)(a1 + 372) = v58 | 0x40;
            if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              goto LABEL_267;
            }
          }
          *(_DWORD*)(a1 + 372) = v64 | 0x300;
          if (v59 == 0) {
          LABEL_268:
            if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) != 3) {
            LABEL_294:
              if ((unsigned int)CudaDriverRoutine_11f790(a1, 1u) != 3 &&
                  (unsigned int)CudaDriverRoutine_11f790(a1, 2u) != 3) {
                return 0;
              }
            }
          LABEL_296:
            CudaDriverRoutine_11f810(&v88, a1);
            v83 = *(_QWORD*)&v88;
            *(_DWORD*)(a1 + 392) = DWORD2(v88);
            *(_QWORD*)(a1 + 384) = v83;
            if (CudaDriverRoutine_11f2f0(a1)) {
              if (*(_QWORD*)a1 != 0) {
                v84 = (__int64*)(*(_QWORD*)a1 + 24LL);
              }
              else {
                v84 = v5;
              }
              if (!CudaDriverStub_985a0(*v84)) {
                goto LABEL_304;
              }
              v85 = *(_DWORD*)(a1 + 396) | 1;
            }
            else {
              v85 = DWORDn(v88, sizeof(v88) / 4 - 1);
            }
            *(_DWORD*)(a1 + 396) = v85;
          LABEL_304:
            if ((*(_BYTE*)(a1 + 328) & 0x10) != 0) {
              cuda_driver_11f820(v87, (float*)&v88);
              v86 = v87[2];
              *(_DWORD*)(a1 + 376) |= v87[0] << 24;
              *(_DWORD*)(a1 + 380) = (v87[1] << 12) | (v86 << 20);
            }
            return 0;
          }
        LABEL_272:
          v72 = *(float*)(a1 + 288);
          v73 = v72 >= 0x1.e000000000000p+3f;
          v74 = v72 <= 0x0.0p+0f;
          v75 = vcvtd_n_s32_f64(v72, 8u);
          v76 = *(float*)(a1 + 292);
          v77 = !v74 || v73;
          if (v74) {
            v73 = true;
          }
          if (v77 != 0) {
            v78 = 3840;
          }
          else {
            v78 = 0;
          }
          v79 = v75 & 0xFFF;
          if (v73) {
            v80 = v78;
          }
          else {
            v80 = v79;
          }
          if (v76 <= 0x0.0p+0f && v76 < 0x1.e000000000000p+3f) {
            v82 = 0;
          }
          else {
            v82 = 15728640;
          }
          if (v76 < 0x1.e000000000000p+3f && v76 > 0x0.0p+0f) {
            v82 = (vcvtd_n_s32_f64(v76, 8u) & 0xFFF) << 12;
          }
          *(_DWORD*)(a1 + 376) |= v82 | v80;
          if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) == 3) {
            goto LABEL_296;
          }
          goto LABEL_294;
        }
        if (v55 - 4 < 2) {
          v56 = 2105344;
          goto LABEL_235;
        }
      }
      v56 = 7348224;
      goto LABEL_235;
    }
    switch (v53) {
    case 2:
      v54 = *(_DWORD*)(a1 + 368) | 0x40;
      goto LABEL_220;
    case 3:
      v54 = *(_DWORD*)(a1 + 368) | 0xC0;
      goto LABEL_220;
    case 4:
      v54 = *(_DWORD*)(a1 + 368) | 0x100;
      goto LABEL_220;
    default:
      break;
    }
    return v7;
  default:
    return v7;
  }
}

__int64 nvidia_1b8de0(_QWORD* a1, unsigned __int64 a2, __int64* a3, __int64 a4,
                      __int64 a5)
{
  unsigned __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  int* v11;
  _QWORD* v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  _DWORD* v16;
  __int64 result;
  __int64* v18;
  unsigned int* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  bool v25;
  __int64 v26;
  bool v27;
  int* v28;
  int v29;
  _BOOL4 v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  int* v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  void* v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  void* v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  int i;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int* v63;
  __int64 v64;
  int* v65;
  int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  __int64 v71;
  __int64* v72;
  unsigned __int64 v73;
  __int64* v74;
  __int64 v75;
  unsigned int v76;
  unsigned int v77;
  int v78;
  __int64* v79;
  __int64 v80;
  bool v81;
  bool v82;
  __int64 v83;
  __int64 v84[96];
  __int64 v85[11];
  __int128 v86;
  __int128 v87;
  int* v88[3];
  _BYTE v89[4];
  __int64* v90;
  _QWORD v91[4];

  v90 = a3;
  v89[0] = 0;
  if (a1 == nullptr) {
    return 1;
  }
  if (a2 == 0) {
    return 0;
  }
  if (*(_QWORD*)(a4 + 992) != 0) {
    v6 = (unsigned __int64)a3;
    if (a3 == nullptr) {
      v7 = a1;
      v8 = a2;
      v9 = a5;
      v10 = CudaDriverRoutine_f0f30(*(unsigned int**)(a5 + 64));
      a5 = v9;
      a2 = v8;
      v6 = v10;
      a1 = v7;
      v90 = (__int64*)v6;
    }
    v11 = *(int**)(a5 + 64);
    v12 = a1;
    v87 = (__typeof__(v87)){0};
    v86 = (__typeof__(v86)){0};
    memset(v85, 0, sizeof(v85));
    LODWORD(v85[0]) = 1;
    if (v6 != 0) {
      v13 = *(_DWORD*)(v6 + 152);
      *(_QWORD*)&v87 = a2;
      HIDWORD(v85[0]) = v13;
      v85[1] = *(_QWORD*)(v6 + 192);
      memset_plt_alt1((__int64)v84, 0, 0x300u);
      if (CudaDriverData_1434ac0 != 0) {
        v14 = 0;
        v15 = 0;
        do {
          if (v14 != **(_DWORD**)(v6 + 176) &&
              (unsigned __int8)cuda_driver_checks_103390(v6 + 176, v14) != 0) {
            v16 = (_DWORD*)v84 + 3 * v15++;
            *v16 = 1;
            v16[1] = v14;
            v16[2] = 3;
          }
          ++v14;
        } while (v14 < CudaDriverData_1434ac0);
      }
      else {
        v15 = 0;
      }
      *(_QWORD*)&v86 = v84;
      *((_QWORD*)&v86 + 1) = v15;
      result = cuda_driver_d2c20(v88, (__int64)v85);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    else {
      LODWORD(v85[1]) = 1;
      v31 = *v11;
      *(_QWORD*)&v87 = a2;
      HIDWORD(v85[1]) = v31;
      result = cuda_driver_d2c20(v88, (__int64)v85);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    result = CudaDriverStub_118070(a4);
    if ((_DWORD)result == 0) {
      result =
          CudaDriverRoutine_d2fe0(*(_QWORD*)(a4 + 992), (unsigned int*)v88[0]);
      if ((_DWORD)result == 0) {
        CudaDriverStub_107f90(*(_QWORD*)(*(_QWORD*)(a4 + 992) + 272LL) + 592LL);
        v32 = cuda_driver_unplaced_5_d3250(
            &v83, *(_QWORD*)(a4 + 992), nullptr, nullptr, *(_QWORD*)(a4 + 1000),
            *(unsigned int*)(a4 + 1036), v88, (__int64)v85, 1);
        if (v32 == 0) {
          v91[0] = v83;
          v91[1] = 0;
          v33 = CudaDriverRoutine_1a3d20(a4 + 1000, (unsigned __int8*)v91);
          if (v33 != 0) {
            v32 = v33;
            cuda_driver_c3200(v83, 0);
          }
          else {
            v32 = 0;
          }
        }
        *v12 = *((_QWORD*)&v87 + 1);
        CudaDriverStub_108070(*(_QWORD*)(*(_QWORD*)(a4 + 992) + 272LL) + 592LL);
        return v32;
      }
    }
    return result;
  }
  v18 = a1;
  v19 = *(unsigned int**)(a5 + 64);
  v20 = a2;
  v21 = a5;
  v84[0] = 0;
  result = nvidia_f2e00(v19, a4, (unsigned __int64*)&v90, v84);
  if ((_DWORD)result != 0) {
    return result;
  }
  v85[0] = 0;
  v22 = CudaDriverStub_f0f50(v90);
  v23 = cuda_driver_checks_1031f0(v22);
  v24 = CudaDriverStub_f0f50(v90);
  v25 = cuda_driver_checks_103220(v24);
  v26 = CudaDriverStub_f0f50(v90);
  v27 = cuda_driver_checks_103250_alt1(v26);
  CudaDriverStub_102350(v84[0]);
  v28 = (int*)cuda_driver_checks_102100(v84[0], v20);
  v88[0] = v28;
  CudaDriverStub_102360(v84[0]);
  v29 = 1;
  if (v28 != nullptr) {
    v30 = false;
    goto LABEL_73;
  }
  v89[0] = 1;
  CudaDriverStub_107f90(v90[11]);
  v84[0] = CudaDriverStub_f2df0(v90);
  v34 = CudaDriverStub_f0f50(v90);
  v35 = (int*)cuda_driver_checks_102d80(v34, v20);
  v88[0] = v35;
  if (v35 != nullptr) {
    v28 = v35;
    v29 = 2;
    v30 = true;
    goto LABEL_73;
  }
  v89[0] = 0;
  CudaDriverStub_108070(v90[11]);
  v81 = v27;
  v82 = v23;
  if (!v23) {
    goto LABEL_53;
  }
  if ((*(_BYTE*)(a4 + 56) & 1) != 0 && *(_DWORD*)(a4 + 344) != 0) {
  LABEL_35:
    v36 = CudaDriverRoutine_98340(v21);
    cuda_driver_1084c0(v36 + 24);
    cuda_driver_108520(*(_QWORD*)(v21 + 88) + 104LL);
  LABEL_36:
    CudaDriverStub_107f90(a4 + 592);
    v37 = nvidia_1181a0(a4);
    CudaDriverStub_108070(a4 + 592);
    if ((*(_BYTE*)(a4 + 56) & 1) != 0) {
      v38 = CudaDriverRoutine_98340(v21);
      CudaDriverRoutine_1085b0(v38 + 24);
      CudaDriverRoutine_1085d0(*(_QWORD*)(v21 + 88) + 104LL);
    }
    if (v37 != 0) {
      result = v37;
      v29 = 0;
      v30 = true;
      goto LABEL_82;
    }
    goto LABEL_40;
  }
  if ((*(_BYTE*)(a4 + 56) & 4) != 0 &&
      cuda_driver_12ea30_alt1(
          (int*)(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 104LL) + 576LL))) {
    if ((*(_BYTE*)(a4 + 56) & 1) == 0) {
      goto LABEL_36;
    }
    goto LABEL_35;
  }
LABEL_40:
  v39 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  v40 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_4780 + (_QWORD)v39);
  if (v40 != 0) {
    v41 = 0;
    v42 = v40;
    do {
      v43 = *(unsigned int*)(a4 + 348);
      if (v41 != v43) {
        v44 = CudaDriverRoutine_8b200(
            (__int64)&CudaDriverRoutine_4780 + (_QWORD)v39, v43, v41);
        if (v44 != 0) {
          v45 = v44;
          if (CudaDriverRoutine_8b200((__int64)&CudaDriverRoutine_4768 +
                                          (_QWORD)v39,
                                      v41, *((_DWORD*)v90 + 28)) != 0) {
            cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v39] +
                               616 * v41);
            v46 = CudaDriverRoutine_114270(v41);
            if (v46 != 0 && v45 > *(_QWORD*)(v46 + 352)) {
              v47 = cuda_driver_checks_102f50(v41, *((_DWORD*)v90 + 28));
              v48 = *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v39];
              v49 = v47;
              v84[0] = v47;
              CudaDriverRoutine_1085b0(v48 + 616 * v41);
              if (v49 != 0) {
                v28 = (int*)cuda_driver_checks_1023a0(v84[0], v45, v20);
                v88[0] = v28;
                CudaDriverStub_102360(v84[0]);
                if (v28 != nullptr) {
                  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 +
                                           (_QWORD)v39);
                  v29 = 3;
                  v30 = false;
                  goto LABEL_73;
                }
              }
            }
            else {
              CudaDriverRoutine_1085b0(
                  *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v39] + 616 * v41);
            }
          }
        }
      }
      ++v41;
    } while (v41 != v42);
  }
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v39);
LABEL_53:
  if (!v25) {
    goto LABEL_71;
  }
  v50 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  v51 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_4780 + (_QWORD)v50);
  if (v51 == 0) {
  LABEL_70:
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v50);
    v27 = v81;
    goto LABEL_71;
  }
  v52 = 1;
  v53 = v51;
  for (i = 0;; ++i) {
    v55 = v52 - 1;
    if (v52 - 1 != *(_DWORD*)(a4 + 348) &&
        CudaDriverRoutine_8b200((__int64)&CudaDriverRoutine_4768 + (_QWORD)v50,
                                v55, *((_DWORD*)v90 + 28)) != 0) {
      cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v50] +
                         616LL * v55);
      v56 = CudaDriverRoutine_114270(v55);
      if (v56 == 0 ||
          (v57 = v56,
           (v58 = cuda_driver_118980(v56)) <= *(_QWORD*)(v57 + 352)) ||
          (v59 = v58, v82) &&
              v58 <= CudaDriverRoutine_8b200(
                         (__int64)&CudaDriverRoutine_4780 + (_QWORD)v50,
                         *(_DWORD*)(a4 + 348), *(_DWORD*)(v57 + 348))) {
        CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v50] +
                                 616LL * v55);
        goto LABEL_57;
      }
      v60 = cuda_driver_checks_102f50(v55, *((_DWORD*)v90 + 28));
      v61 = *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v50];
      v62 = v60;
      v84[0] = v60;
      CudaDriverRoutine_1085b0(v61 + 616LL * v55);
      if (v62 != 0) {
        break;
      }
    }
  LABEL_57:
    if (v52 >= v53) {
      goto LABEL_70;
    }
  LABEL_58:
    ++v52;
  }
  v28 = (int*)cuda_driver_checks_1023a0(v84[0], v59, v20);
  v88[0] = v28;
  CudaDriverStub_102360(v84[0]);
  if (v28 == nullptr && v52 < v53) {
    goto LABEL_58;
  }
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v50);
  v27 = v81;
  if (v28 != nullptr) {
    v30 = false;
    v29 = 4;
    goto LABEL_73;
  }
LABEL_71:
  v30 = true;
  v89[0] = 1;
  CudaDriverStub_107f90(v90[11]);
  v84[0] = CudaDriverStub_f2df0(v90);
  v63 = (int*)cuda_driver_checks_102100(v84[0], v20);
  v88[0] = v63;
  if (v63 == nullptr) {
    v29 = 0;
    LODWORD(result) = 2;
    goto LABEL_81;
  }
  v28 = v63;
  v29 = 5;
LABEL_73:
  v64 = v84[0];
  if (v64 != CudaDriverStub_f2df0(v90)) {
    if (v30) {
      goto LABEL_75;
    }
  LABEL_76:
    v65 = v88[0];
    result = cuda_driver_f1d70((__int64)v88[0], v20, v85);
    v66 = 0;
    goto LABEL_77;
  }
  v74 = v90;
  v75 = CudaDriverStub_102050(v28);
  v76 = CudaDriverRoutine_f15a0(v74, (unsigned int*)(v75 + 8));
  if (v76 == 0) {
    if (v89[0] == 0) {
      goto LABEL_76;
    }
    goto LABEL_75;
  }
  v77 = v76;
  v89[0] = 0;
  CudaDriverStub_108070(v90[11]);
  v66 = 1;
  if (*((_DWORD*)v90 + 48) == 3) {
    v78 = 1;
  }
  else {
    v78 = 2;
  }
  if ((unsigned __int8)cuda_driver_f2040(*(unsigned int*)v90[22], v78) == 0) {
    v65 = v88[0];
    v66 = 0;
    result = v77;
    goto LABEL_77;
  }
  v89[0] = 1;
  CudaDriverStub_107f90(v90[11]);
  v65 = v88[0];
  v79 = v90;
  v80 = CudaDriverStub_102050(v88[0]);
  result = CudaDriverRoutine_f15a0(v79, (unsigned int*)(v80 + 8));
  if ((_DWORD)result == 0) {
  LABEL_75:
    v89[0] = 0;
    CudaDriverStub_108070(v90[11]);
    goto LABEL_76;
  }
LABEL_77:
  v30 = result != 0;
  if ((_DWORD)result != 0 && v65 != nullptr) {
    v67 = result;
    cuda_driver_f3920((__int64)v65, v90, v84[0], v89);
    result = v67;
    v66 = v89[0];
    v88[0] = nullptr;
  }
  if (v66 != 0) {
  LABEL_81:
    v89[0] = 0;
    v68 = result;
    CudaDriverStub_108070(v90[11]);
    result = v68;
  }
LABEL_82:
  if (v30 && v27) {
    result = cuda_driver_f3640((__int64)v90, v84, v20, a4, (__int64*)v88);
    if ((_DWORD)result == 0) {
      CudaDriverStub_f2df0(v90);
      result = cuda_driver_f1d70((__int64)v88[0], v20, v85);
      v29 = 6;
    }
    if ((_DWORD)result != 0 && v88[0] != nullptr) {
      v69 = result;
      cuda_driver_f3920((__int64)v88[0], v90, v84[0], v89);
      result = v69;
    }
    if (v89[0] != 0) {
      v89[0] = 0;
      v70 = result;
      CudaDriverStub_108070(v90[11]);
      result = v70;
    }
  }
  if ((_DWORD)result == 0) {
    if (*((_BYTE*)v90 + 125) != 0 || *((_DWORD*)v90 + 48) == 1) {
      v71 = CudaDriverStub_1db800(v85[0]);
    }
    else {
      v71 = CudaDriverStub_1dbab0(v85[0]);
    }
    *v18 = v71;
    v72 = v90;
    v73 = CudaDriverStub_1dbf90(v85[0]);
    CudaDriverRoutine_f3a80((__int64)v72, v73);
    cuda_driver_1b9740(v85[0], a4, v29);
    return 0;
  }
  return result;
}

__int64 nvidia_1e60f0(__int64 a1)
{
  __int64 v2;
  int v3;
  unsigned int* v4;
  struct {
    __int128 v6;
    __int128 v7;
  } v6_;
  struct {
    __int128 v8;
    __int128 v9;
    __int128 v10;
    __int128 v11;
    __int128 v12;
  } v8_;
  struct {
    __int128 v13;
    int v14;
  } v13_;
  _DWORD v15[6];

  v13_.v14 = 0;
  v6_.v6 = (__typeof__(v6_.v6)){0};
  v6_.v7 = (__typeof__(v6_.v7)){0};
  DWORD2(v6_.v7) = 37904;
  v8_.v8 = (__typeof__(v8_.v8)){0};
  v8_.v9 = (__typeof__(v8_.v9)){0};
  v8_.v10 = (__typeof__(v8_.v10)){0};
  v8_.v11 = (__typeof__(v8_.v11)){0};
  DWORD1(v8_.v10) = 37888;
  v15[0] = 24;
  v8_.v12 = (__typeof__(v8_.v12)){0};
  v13_.v13 = (__typeof__(v13_.v13)){0};
  LODWORD(v13_.v13) = 37904;
  if (*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 64LL) == 0) {
    return 0;
  }
  *(_QWORD*)&v15[3] = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 64LL);
  *(_QWORD*)&v15[1] = &v6_.v6;
  v15[5] = 3;
  v2 = CudaDriverData_1440750(v15);
  if ((_DWORD)v2 != 0) {
    v3 = CudaDriverRoutine_1e9390(v2);
    if ((v3 | DWORD2(v6_.v6)) != 0) {
      return 0;
    }
  }
  else if (DWORD2(v6_.v6) != 0) {
    return 0;
  }
  if ((DWORD1(v8_.v9) | (unsigned int)v8_.v12) != 0) {
    return 0;
  }
  v4 = (unsigned int*)&v13_.v13 + 2;
  if (v8_.v10 < 0) {
    v4 = (unsigned int*)&v8_.v8;
  }
  *(_QWORD*)v15 =
      DWORDn(v8_.v10, sizeof(v8_.v10) / 4 - 1) | ((unsigned __int64)*v4 << 32);
  CudaDriverRoutine_99e50(a1, (unsigned __int64*)v15);
  return *(_QWORD*)v15;
}

__int64 nvidia_1ef5a0(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  int v3;
  __int64* v4;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int* v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  __int16 v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  __int16 v28;
  int v29;
  int v30;
  unsigned int v31;
  int v32;
  __int64 v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  __int64 v37;
  int v38;
  int v39;
  unsigned int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  bool v51;
  unsigned int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  unsigned int v57;
  int v58;
  unsigned int v59;
  unsigned int v60;
  int v61;
  unsigned int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  unsigned int v68;
  int v69;
  int v70;
  int v71;
  __int64 v72;
  float v73;
  int v74;
  int v75;
  int v76;
  int v77;
  float v78;
  _BOOL4 v79;
  bool v80;
  double v81;
  int v82;
  int v83;
  unsigned int v84;
  float v85;
  _BOOL4 v86;
  bool v87;
  __int16 v88;
  float v89;
  int v90;
  int v91;
  int v92;
  int v93;
  unsigned int v95;
  __int64 v96;
  __int64* v97;
  int v98;
  int v99;
  struct {
    long double v101;
    char gap16_[28];
    _BYTE v102[4];
  } v101_;

  {
    v1 = *(_DWORD*)(a1 + 40);
    __asm__ volatile("" ::"r"(v1));
  }
  *(_OWORD*)(a1 + 336) = (__typeof__(*(_OWORD*)(a1 + 336))){0};
  *(_OWORD*)(a1 + 352) = (__typeof__(*(_OWORD*)(a1 + 352))){0};
  *(_OWORD*)(a1 + 368) = (__typeof__(*(_OWORD*)(a1 + 368))){0};
  *(_OWORD*)(a1 + 384) = (__typeof__(*(_OWORD*)(a1 + 384))){0};
  if (v1 == 1) {
    if (*(_DWORD*)(a1 + 120) != 0) {
      v3 = 1;
    }
    else {
      v3 = 2;
    }
    v4 = (__int64*)(a1 + 8);
    if (!CudaDriverStub_985a0(*(_QWORD*)(a1 + 8))) {
      goto LABEL_11;
    }
  LABEL_8:
    if (*(_DWORD*)(a1 + 40) == 2 && *(_BYTE*)(a1 + 920) != 0) {
      v3 = 1;
    }
    goto LABEL_11;
  }
  v3 = 0;
  v4 = (__int64*)(a1 + 8);
  if (CudaDriverStub_985a0(*(_QWORD*)(a1 + 8))) {
    goto LABEL_8;
  }
LABEL_11:
  v5 = nvidia_11fa80(a1);
  v6 = 1;
  v7 = 29;
  switch (v5) {
  case 0:
    v7 = 28;
    goto LABEL_34;
  case 3:
    v7 = 20;
    goto LABEL_34;
  case 6:
    v7 = 21;
    goto LABEL_34;
  case 47:
    v7 = 34;
    goto LABEL_34;
  case 48:
    v7 = 35;
    goto LABEL_34;
  case 54:
    v7 = 9;
    goto LABEL_34;
  case 69:
    v7 = 1;
    goto LABEL_34;
  case 76:
    v7 = 3;
    goto LABEL_34;
  case 80:
    v7 = 4;
    goto LABEL_34;
  case 88:
    v7 = 8;
    goto LABEL_34;
  case 93:
    v7 = 12;
    goto LABEL_34;
  case 97:
    v7 = 15;
    goto LABEL_34;
  case 103:
    v7 = 24;
    goto LABEL_34;
  case 107:
    v7 = 27;
    goto LABEL_34;
  case 113:
    goto LABEL_34;
  case 119:
    v7 = 36;
    goto LABEL_34;
  case 121:
    v7 = 37;
    goto LABEL_34;
  case 123:
    v7 = 38;
    goto LABEL_34;
  case 125:
    v7 = 39;
    goto LABEL_34;
  case 127:
    v7 = 40;
    goto LABEL_34;
  case 130:
    v7 = 17;
    goto LABEL_34;
  case 131:
    v7 = 16;
    goto LABEL_34;
  case 132:
    v7 = 23;
  LABEL_34:
    v8 = (unsigned int*)(a1 + 336);
    *(_DWORD*)(a1 + 336) = *(_DWORD*)(a1 + 336) & 0xFFFFFF80 | v7;
    v9 = CudaDriverRoutine_11fd60(a1);
    if (v9 <= 2) {
      if (v9 == 1) {
        {
          v12 = *v8;
          __asm__ volatile("" ::"r"(v12));
        }
        v13 = 1170;
      }
      else {
        if (v9 != 2) {
          return v6;
        }
        {
          v12 = *v8;
          __asm__ volatile("" ::"r"(v12));
        }
        v13 = 585;
      }
    LABEL_50:
      *(_DWORD*)(a1 + 336) = v12 & 0xFFF8007F | ((v13 & 0xFFF) << 7);
      v10 = CudaDriverRoutine_11f370(a1, 0);
      if (v10 <= 2) {
        goto LABEL_39;
      }
      goto LABEL_51;
    }
    if (v9 == 3) {
      {
        v12 = *v8;
        __asm__ volatile("" ::"r"(v12));
      }
      v13 = 2340;
      goto LABEL_50;
    }
    if (v9 == 4) {
      {
        v12 = *v8;
        __asm__ volatile("" ::"r"(v12));
      }
      v13 = 1755;
      goto LABEL_50;
    }
    if (v9 != 5) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 | 0x7FF80;
    v10 = CudaDriverRoutine_11f370(a1, 0);
    if (v10 <= 2) {
    LABEL_39:
      if (v10 != 0) {
        if (v10 == 1) {
          *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x100000;
          v11 = CudaDriverRoutine_11f370(a1, 1u);
          if (v11 <= 2) {
            goto LABEL_73;
          }
        }
        else {
          if (v10 != 2) {
            return v6;
          }
          *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x180000;
          v11 = CudaDriverRoutine_11f370(a1, 1u);
          if (v11 <= 2) {
            goto LABEL_73;
          }
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_73;
        }
      }
    LABEL_64:
      if (v11 > 4) {
        if (v11 == 5) {
          *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x1800000;
          v14 = CudaDriverRoutine_11f370(a1, 2u);
          if (v14 <= 2) {
            goto LABEL_92;
          }
        }
        else {
          if (v11 != 6) {
            return v6;
          }
          *(_DWORD*)(a1 + 336) = *v8 | 0x1C00000;
          v14 = CudaDriverRoutine_11f370(a1, 2u);
          if (v14 <= 2) {
            goto LABEL_92;
          }
        }
      }
      else if (v11 == 3) {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x1000000;
        v14 = CudaDriverRoutine_11f370(a1, 2u);
        if (v14 <= 2) {
          goto LABEL_92;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x1400000;
        v14 = CudaDriverRoutine_11f370(a1, 2u);
        if (v14 <= 2) {
          goto LABEL_92;
        }
      }
    LABEL_83:
      if (v14 > 4) {
        if (v14 == 5) {
          *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0xC000000;
          v15 = CudaDriverRoutine_11f370(a1, 3u);
          if (v15 <= 2) {
            goto LABEL_111;
          }
        }
        else {
          if (v14 != 6) {
            return v6;
          }
          *(_DWORD*)(a1 + 336) = *v8 | 0xE000000;
          v15 = CudaDriverRoutine_11f370(a1, 3u);
          if (v15 <= 2) {
            goto LABEL_111;
          }
        }
      }
      else if (v14 == 3) {
        *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0x8000000;
        v15 = CudaDriverRoutine_11f370(a1, 3u);
        if (v15 <= 2) {
          goto LABEL_111;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0xA000000;
        v15 = CudaDriverRoutine_11f370(a1, 3u);
        if (v15 <= 2) {
          goto LABEL_111;
        }
      }
    LABEL_102:
      if (v15 > 4) {
        if (v15 == 5) {
          {
            v16 = *v8 & 0x8FFFFFFF | 0x60000000;
            __asm__ volatile("" ::"r"(v16));
          }
          {
            v17 = *(_DWORD*)(a1 + 328);
            __asm__ volatile("" ::"r"(v17));
          }
          *(_DWORD*)(a1 + 336) = v16;
          if ((v17 & 8) == 0) {
            goto LABEL_122;
          }
        }
        else {
          if (v15 != 6) {
            return v6;
          }
          {
            v16 = *v8 | 0x70000000;
            __asm__ volatile("" ::"r"(v16));
          }
          {
            v17 = *(_DWORD*)(a1 + 328);
            __asm__ volatile("" ::"r"(v17));
          }
          *(_DWORD*)(a1 + 336) = v16;
          if ((v17 & 8) == 0) {
            goto LABEL_122;
          }
        }
      }
      else if (v15 == 3) {
        {
          v16 = *v8 & 0x8FFFFFFF | 0x40000000;
          __asm__ volatile("" ::"r"(v16));
        }
        {
          v17 = *(_DWORD*)(a1 + 328);
          __asm__ volatile("" ::"r"(v17));
        }
        *(_DWORD*)(a1 + 336) = v16;
        if ((v17 & 8) == 0) {
          goto LABEL_122;
        }
      }
      else {
        {
          v16 = *v8 & 0x8FFFFFFF | 0x50000000;
          __asm__ volatile("" ::"r"(v16));
        }
        {
          v17 = *(_DWORD*)(a1 + 328);
          __asm__ volatile("" ::"r"(v17));
        }
        *(_DWORD*)(a1 + 336) = v16;
        if ((v17 & 8) == 0) {
          goto LABEL_122;
        }
      }
    LABEL_121:
      *v8 = v16 | 0x80000000;
      goto LABEL_122;
    }
  LABEL_51:
    if (v10 <= 4) {
      if (v10 == 3) {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x200000;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_73;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x280000;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_73;
        }
      }
      goto LABEL_64;
    }
    if (v10 == 5) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x300000;
      v11 = CudaDriverRoutine_11f370(a1, 1u);
      if (v11 <= 2) {
        goto LABEL_73;
      }
      goto LABEL_64;
    }
    if (v10 != 6) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 | 0x380000;
    v11 = CudaDriverRoutine_11f370(a1, 1u);
    if (v11 > 2) {
      goto LABEL_64;
    }
  LABEL_73:
    if (v11 == 0) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF;
      v14 = CudaDriverRoutine_11f370(a1, 2u);
      if (v14 <= 2) {
        goto LABEL_92;
      }
      goto LABEL_83;
    }
    if (v11 == 1) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x800000;
      v14 = CudaDriverRoutine_11f370(a1, 2u);
      if (v14 <= 2) {
        goto LABEL_92;
      }
      goto LABEL_83;
    }
    if (v11 != 2) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0xC00000;
    v14 = CudaDriverRoutine_11f370(a1, 2u);
    if (v14 > 2) {
      goto LABEL_83;
    }
  LABEL_92:
    if (v14 == 0) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF;
      v15 = CudaDriverRoutine_11f370(a1, 3u);
      if (v15 <= 2) {
        goto LABEL_111;
      }
      goto LABEL_102;
    }
    if (v14 == 1) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0x4000000;
      v15 = CudaDriverRoutine_11f370(a1, 3u);
      if (v15 <= 2) {
        goto LABEL_111;
      }
      goto LABEL_102;
    }
    if (v14 != 2) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0x6000000;
    v15 = CudaDriverRoutine_11f370(a1, 3u);
    if (v15 > 2) {
      goto LABEL_102;
    }
  LABEL_111:
    if (v15 == 0) {
      {
        v16 = *v8 & 0x8FFFFFFF;
        __asm__ volatile("" ::"r"(v16));
      }
      {
        v17 = *(_DWORD*)(a1 + 328);
        __asm__ volatile("" ::"r"(v17));
      }
      *(_DWORD*)(a1 + 336) = v16;
      if ((v17 & 8) == 0) {
        goto LABEL_122;
      }
      goto LABEL_121;
    }
    if (v15 == 1) {
      {
        v16 = *v8 & 0x8FFFFFFF | 0x20000000;
        __asm__ volatile("" ::"r"(v16));
      }
      {
        v17 = *(_DWORD*)(a1 + 328);
        __asm__ volatile("" ::"r"(v17));
      }
      *(_DWORD*)(a1 + 336) = v16;
      if ((v17 & 8) == 0) {
        goto LABEL_122;
      }
      goto LABEL_121;
    }
    if (v15 != 2) {
      return v6;
    }
    {
      v16 = *v8 & 0x8FFFFFFF | 0x30000000;
      __asm__ volatile("" ::"r"(v16));
    }
    {
      v17 = *(_DWORD*)(a1 + 328);
      __asm__ volatile("" ::"r"(v17));
    }
    *(_DWORD*)(a1 + 336) = v16;
    if ((v17 & 8) != 0) {
      goto LABEL_121;
    }
  LABEL_122:
    if (v3 == 0) {
      {
        v21 = *(_DWORD*)(a1 + 132);
        __asm__ volatile("" ::"r"(v21));
      }
      *(_DWORD*)(a1 + 340) =
          *(_DWORD*)(a1 + 128) & 0xFFFFFE00 | *(_DWORD*)(a1 + 340) & 0x1FF;
      *(_DWORD*)(a1 + 344) =
          *(_DWORD*)(a1 + 344) & 0xFF1E0000 | v21 & 0x1FFFF | 0x600000;
      {
        v22 = *(_DWORD*)(a1 + 348) | 0x10000;
        __asm__ volatile("" ::"r"(v22));
      }
      {
        v23 = *(_QWORD*)(a1 + 64);
        __asm__ volatile("" ::"r"(v23));
      }
      *(_DWORD*)(a1 + 348) = v22;
      {
        v24 = v22 & 0xFFFFFFF8 | *(_DWORD*)(v23 + 40) & 7;
        __asm__ volatile("" ::"r"(v24));
      }
      *(_DWORD*)(a1 + 348) = v24;
      {
        v25 = v24 & 0xFFFFFFC7 | (8 * (*(_DWORD*)(v23 + 44) & 7));
        __asm__ volatile("" ::"r"(v25));
      }
      *(_DWORD*)(a1 + 348) = v25;
      {
        v26 = v25 & 0xFFFFFE3F | ((*(_DWORD*)(v23 + 48) & 7) << 6);
        __asm__ volatile("" ::"r"(v26));
      }
      *(_DWORD*)(a1 + 348) = v26;
      if ((*(_BYTE*)(v23 + 32) & 0x40) != 0) {
        {
          v27 = *(_DWORD*)(v23 + 144);
          __asm__ volatile("" ::"r"(v27));
        }
        if (v27 < 2) {
          v29 = 0;
        }
        else {
          v28 = 0;
          do {
            v28 += 1024;
            v80 = v27 > 3;
            v27 >>= 1;
          } while (v80);
          v29 = v28 & 0x1C00;
        }
        v26 = v29 | v26 & 0xFFFFE3FF;
        *(_DWORD*)(a1 + 348) = v26;
      }
      {
        v37 = *(_QWORD*)(a1 + 88);
        __asm__ volatile("" ::"r"(v37));
      }
      if (v37 != 0) {
        v26 =
            (v26 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v37 + 40) << 28)) -
            0x10000000;
        __asm__ volatile("" ::"r"(v26));
      }
      {
        v38 = *(_DWORD*)(a1 + 104);
        __asm__ volatile("" ::"r"(v38));
      }
      {
        v39 = *(_DWORD*)(a1 + 108);
        __asm__ volatile("" ::"r"(v39));
      }
      *(_DWORD*)(a1 + 348) = v26 | 0x60000;
      {
        v40 = *(_DWORD*)(a1 + 352) & 0xFFF80000 | (v38 - 1) & 0x1FFFF;
        __asm__ volatile("" ::"r"(v40));
      }
      v41 = (4 * v39 + 524284) & 0x40000;
      if (v39 == 0) {
        v41 = 0;
      }
      v42 = v41 | v40;
      {
        v43 = *(_DWORD*)(a1 + 112);
        __asm__ volatile("" ::"r"(v43));
      }
      if (v43 != 0) {
        v44 = (8 * v43 + 262136) & 0x20000;
      }
      else {
        v44 = 0;
      }
      v45 = v42 | v44;
      *(_DWORD*)(a1 + 352) = v45;
      {
        v46 = *(_DWORD*)(v23 + 8);
        __asm__ volatile("" ::"r"(v46));
      }
      if (v46 > 3) {
        v47 = v45 & 0xF87FFFFF | 0x4000000;
        v48 = v45 & 0xF87FFFFF | 0x1800000;
        v49 = v45 & 0xF87FFFFF | 0x2000000;
        if (v46 != 7) {
          v47 = v45;
        }
        if (v46 != 6) {
          v48 = v47;
        }
        if (v46 == 5) {
          v45 = v45 & 0xF87FFFFF | 0x2800000;
        }
        if (v46 == 4) {
          v45 = v49;
        }
        if (v46 <= 5) {
          v50 = v45;
        }
        else {
          v50 = v48;
        }
        goto LABEL_170;
      }
      if (v46 == 1) {
        if (!CudaDriverRoutine_11f690((__int64*)a1)) {
          {
            v50 = *(_DWORD*)(a1 + 352) & 0xF87FFFFF;
            __asm__ volatile("" ::"r"(v50));
          }
          goto LABEL_170;
        }
      }
      else if (v46 != 2) {
        v51 = v46 == 3;
        v50 = v45 & 0xF87FFFFF | 0x1000000;
        if (!v51) {
          v50 = v45;
        }
      LABEL_170:
        v35 = v50 | 0xE0000000;
        {
          v53 = *(_DWORD*)(a1 + 328);
          __asm__ volatile("" ::"r"(v53));
        }
        v34 = 1;
        *(_DWORD*)(a1 + 352) = v35;
        if ((v53 & 0x10) == 0) {
          goto LABEL_172;
        }
        goto LABEL_171;
      }
      {
        v52 = *(_DWORD*)(a1 + 352) & 0xF87FFFFF;
        __asm__ volatile("" ::"r"(v52));
      }
      if (*(_DWORD*)(a1 + 120) != 0) {
        v50 = v52 | 0x3800000;
      }
      else {
        v50 = v52 | 0x800000;
      }
      goto LABEL_170;
    }
    {
      v18 = *(_QWORD*)(a1 + 128);
      __asm__ volatile("" ::"r"(v18));
    }
    if (v3 == 1) {
      {
        v19 = *(_DWORD*)(a1 + 344);
        __asm__ volatile("" ::"r"(v19));
      }
      *(_DWORD*)(a1 + 340) = v18 & 0xFFFFFFE0 | *(_DWORD*)(a1 + 340) & 0x1F;
      v20 = v19 & 0xFF1FFFFF | 0x400000;
    }
    else {
      {
        v20 = *(_DWORD*)(a1 + 344) & 0xFF1FFFFF;
        __asm__ volatile("" ::"r"(v20));
      }
      *(_DWORD*)(a1 + 340) = v18;
    }
    LODWORD(v18) = *(unsigned __int16*)(a1 + 350);
    *(_DWORD*)(a1 + 344) =
        v20 & 0xFFFE0000 | DWORDn(v18, sizeof(v18) / 4 - 1) & 0x1FFFF;
    v30 = (_DWORD)v18 << 16;
    if (v3 != 1) {
      v34 = 0;
      {
        v36 = *(int*)(a1 + 104) - 1;
        __asm__ volatile("" ::"r"(v36));
      }
      *(_DWORD*)(a1 + 348) = v30 | HIWORD(v36);
      {
        v35 = *(_DWORD*)(a1 + 352) & 0xF87F0000 | (unsigned __int16)v36 |
              0x3000000;
        __asm__ volatile("" ::"r"(v35));
      }
      *(_DWORD*)(a1 + 352) = v35;
      if ((v17 & 0x10) == 0) {
        goto LABEL_172;
      }
    LABEL_171:
      *(_DWORD*)(a1 + 352) = v35 | 0x400000;
      goto LABEL_172;
    }
    {
      v31 = *(_DWORD*)(a1 + 116);
      __asm__ volatile("" ::"r"(v31));
    }
    v32 = (unsigned __int16)(v31 >> 5) | v30;
    {
      v33 = *(_QWORD*)(a1 + 88);
      __asm__ volatile("" ::"r"(v33));
    }
    *(_DWORD*)(a1 + 348) = v32;
    if (v33 != 0) {
      *(_DWORD*)(a1 + 348) =
          (v32 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v33 + 40) << 28)) -
          0x10000000;
    }
    v34 = 0;
    v35 = *(_DWORD*)(a1 + 352) & 0x187C0000 |
          (*(int*)(a1 + 104) - 1) & 0x1FFFF | (v31 >> 4) & 0x20000 | 0xE3800000;
    *(_DWORD*)(a1 + 352) = v35;
    if ((v17 & 0x10) != 0) {
      goto LABEL_171;
    }
  LABEL_172:
    if (v3 != 2) {
      {
        v54 = *(_DWORD*)(a1 + 108);
        __asm__ volatile("" ::"r"(v54));
      }
      {
        v55 = *(_DWORD*)(a1 + 112);
        __asm__ volatile("" ::"r"(v55));
      }
      v51 = v54 == 0;
      v56 = (unsigned __int16)(v54 - 1);
      if (v51) {
        v56 = 0;
      }
      {
        v57 = v56 | *(_DWORD*)(a1 + 356) & 0xC0000000;
        __asm__ volatile("" ::"r"(v57));
      }
      v58 = ((v55 << 16) + 1073676288) & 0x3FFF0000;
      if (v55 == 0) {
        v58 = 0;
      }
      *(_DWORD*)(a1 + 356) = v58 | v57;
      if (CudaDriverRoutine_11f6d0(a1)) {
        *(_DWORD*)(a1 + 356) |= 0x80000000;
      }
      {
        v59 = *(_DWORD*)(a1 + 360) & 0xF87FFFFF | 0x3000000;
        __asm__ volatile("" ::"r"(v59));
      }
      *(_DWORD*)(a1 + 360) = v59;
      if (v34 != 0 && (*(_BYTE*)(a1 + 328) & 0x20) == 0) {
        {
          v60 = *(_DWORD*)(a1 + 296);
          __asm__ volatile("" ::"r"(v60));
        }
        if (v60 > 7) {
          v62 = v59 & 0xFB7FFFC1 | 0x10;
        }
        else {
          v61 = 1 << v60;
          if ((v61 & 0xF0) != 0) {
            v62 = v59 & 0xFB7FFFC1 | 0xC;
          }
          else if ((v61 & 3) != 0) {
            v62 = v59 & 0xFB7FFFC1;
          }
          else {
            v62 = v59 & 0xFB7FFFC1 | 8;
          }
        }
        *(_DWORD*)(a1 + 360) = v62;
      }
    }
    if (*(_QWORD*)(a1 + 88) != 0) {
      *(_DWORD*)(a1 + 364) = *(_DWORD*)(a1 + 364) & 0xFFFFFF00 |
                             *(_DWORD*)(a1 + 136) & 0xF |
                             (16 * (*(_DWORD*)(a1 + 140) & 0xF));
    }
    v63 = CudaDriverRoutine_11f790(a1, 0);
    v6 = 1;
    if (v63 > 2) {
      if ((unsigned int)(v63 - 3) >= 2) {
        return v6;
      }
    }
    else {
      switch (v63) {
      case 0:
        goto LABEL_200;
      case 1:
        v63 = 2;
        break;
      case 2:
        v63 = 1;
        break;
      default:
        return v6;
      }
    }
    *(_DWORD*)(a1 + 368) |= v63;
  LABEL_200:
    v64 = CudaDriverRoutine_11f790(a1, 1u);
    if (v64 <= 1) {
      if (v64 == 0) {
        goto LABEL_211;
      }
      if (v64 != 1) {
        return v6;
      }
      v65 = 16;
    }
    else {
      switch (v64) {
      case 4:
        v65 = 32;
        break;
      case 3:
        v65 = 24;
        break;
      case 2:
        v65 = 8;
        break;
      default:
        return v6;
      }
    }
    *(_DWORD*)(a1 + 368) |= v65;
  LABEL_211:
    v66 = CudaDriverRoutine_11f790(a1, 2u);
    if (v66 <= 1) {
      if (v66 != 0) {
        if (v66 != 1) {
          return v6;
        }
        {
          v67 = *(_DWORD*)(a1 + 368) | 0x80;
          __asm__ volatile("" ::"r"(v67));
        }
      }
      else {
        {
          v67 = *(_DWORD*)(a1 + 368);
          __asm__ volatile("" ::"r"(v67));
        }
      }
    LABEL_222:
      *(_DWORD*)(a1 + 368) = v67 | 0x2000;
      {
        v68 = *(_DWORD*)(a1 + 296);
        __asm__ volatile("" ::"r"(v68));
      }
      v69 = 1056768;
      if ((int)v68 > 5) {
        if (v68 <= 0xF) {
          if (((1 << v68) & 0xF000) != 0) {
            v69 = 6299648;
            goto LABEL_237;
          }
          if (((1 << v68) & 0x300) != 0) {
            v69 = 4202496;
            goto LABEL_237;
          }
          if (((1 << v68) & 0xC00) != 0) {
            v69 = 5251072;
            goto LABEL_237;
          }
        }
        if (v68 - 6 < 2) {
          v69 = 3153920;
          goto LABEL_237;
        }
      }
      else {
        if (v68 < 2) {
          goto LABEL_238;
        }
        if (v68 - 2 < 2) {
        LABEL_237:
          *(_DWORD*)(a1 + 368) = v67 | v69;
        LABEL_238:
          if (*(_DWORD*)(a1 + 276) == 1) {
            v70 = 34;
          }
          else {
            v70 = 17;
          }
          {
            v71 = *(_DWORD*)(a1 + 372) | v70;
            __asm__ volatile("" ::"r"(v71));
          }
          {
            v72 = *(_QWORD*)(a1 + 88);
            __asm__ volatile("" ::"r"(v72));
          }
          if (v72 != 0) {
            v73 = 0x0.0p+0f;
            if (*(_DWORD*)(a1 + 280) == 1) {
              v74 = 192;
            }
            else {
              v74 = 128;
            }
            v75 = v71 | v74;
            if (v34 != 0 && (*(_BYTE*)(a1 + 328) & 0x20) == 0) {
              if (v68 > 7) {
                v73 = -0x1.0000000000000p-2f;
                v75 |= 0x20000000u;
              }
              else {
                v76 = 1 << v68;
                if ((v76 & 0xF0) != 0) {
                  v75 |= 0x18000000u;
                  v73 = -0x1.b6db6e0000000p-3f;
                }
                else if ((v76 & 3) != 0) {
                  v73 = -0x0.0p+0f;
                }
                else {
                  v75 |= 0x10000000u;
                  v73 = -0x1.5555560000000p-3f;
                }
              }
            }
            {
              v78 = v73 + *(float*)(a1 + 284);
              __asm__ volatile("" ::"w"(v78));
            }
            v79 = v78 >= 0x1.e000000000000p+3f;
            v80 = v78 <= -0x1.e000000000000p+3f;
            v81 = v78;
            v82 = !v80 || v79;
            if (v80) {
              v79 = true;
            }
            if (v82 != 0) {
              v83 = 3840;
            }
            else {
              v83 = 4352;
            }
            v84 = vcvtd_n_s32_f64(v81, 8u) & 0x1FFF;
            if (!v79) {
              v83 = v84;
            }
            v77 = v75 | (v83 << 12);
            *(_DWORD*)(a1 + 372) = v77;
            if (v34 != 0) {
              *(_DWORD*)(a1 + 360) =
                  *(_DWORD*)(a1 + 360) & 0xFFF8003F | ((v83 & 0x1FFF) << 6);
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              LABEL_269:
                if (v72 == 0) {
                  goto LABEL_270;
                }
                goto LABEL_274;
              }
            }
            else if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              goto LABEL_269;
            }
          }
          else {
            v77 = v71 | 0x40;
            *(_DWORD*)(a1 + 372) = v71 | 0x40;
            if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              goto LABEL_269;
            }
          }
          *(_DWORD*)(a1 + 372) = v77 | 0x300;
          if (v72 == 0) {
          LABEL_270:
            if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) != 3) {
            LABEL_296:
              if ((unsigned int)CudaDriverRoutine_11f790(a1, 1u) != 3 &&
                  (unsigned int)CudaDriverRoutine_11f790(a1, 2u) != 3) {
                return 0;
              }
            }
          LABEL_298:
            CudaDriverRoutine_11f810(&v101_.v101, a1);
            {
              v96 = *(_QWORD*)&v101_.v101;
              __asm__ volatile("" ::"r"(v96));
            }
            *(_DWORD*)(a1 + 392) = DWORD2(v101_.v101);
            *(_QWORD*)(a1 + 384) = v96;
            if (CudaDriverRoutine_11f2f0(a1)) {
              if (*(_QWORD*)a1 != 0) {
                v97 = (__int64*)(*(_QWORD*)a1 + 24LL);
                __asm__ volatile("" ::"r"(v97));
              }
              else {
                v97 = v4;
              }
              if (!CudaDriverStub_985a0(*v97)) {
                goto LABEL_306;
              }
              {
                v98 = *(_DWORD*)(a1 + 396) | 1;
                __asm__ volatile("" ::"r"(v98));
              }
            }
            else {
              v98 = DWORDn(v101_.v101, sizeof(v101_.v101) / 4 - 1);
            }
            *(_DWORD*)(a1 + 396) = v98;
          LABEL_306:
            if ((*(_BYTE*)(a1 + 328) & 0x10) != 0) {
              cuda_driver_11f820(v101_.v102, (float*)&v101_.v101);
              {
                v99 = v101_.v102[2];
                __asm__ volatile("" ::"r"(v99));
              }
              *(_DWORD*)(a1 + 376) |= v101_.v102[0] << 24;
              *(_DWORD*)(a1 + 380) = (v101_.v102[1] << 12) | (v99 << 20);
            }
            return 0;
          }
        LABEL_274:
          {
            v85 = *(float*)(a1 + 288);
            __asm__ volatile("" ::"w"(v85));
          }
          v86 = v85 >= 0x1.e000000000000p+3f;
          v87 = v85 <= 0x0.0p+0f;
          v88 = vcvtd_n_s32_f64(v85, 8u);
          {
            v89 = *(float*)(a1 + 292);
            __asm__ volatile("" ::"w"(v89));
          }
          v90 = !v87 || v86;
          if (v87) {
            v86 = true;
          }
          if (v90 != 0) {
            v91 = 3840;
          }
          else {
            v91 = 0;
          }
          v92 = v88 & 0xFFF;
          if (v86) {
            v93 = v91;
          }
          else {
            v93 = v92;
          }
          if (v89 <= 0x0.0p+0f && v89 < 0x1.e000000000000p+3f) {
            v95 = 0;
          }
          else {
            v95 = 15728640;
          }
          if (v89 < 0x1.e000000000000p+3f && v89 > 0x0.0p+0f) {
            v95 = (vcvtd_n_s32_f64(v89, 8u) & 0xFFF) << 12;
          }
          *(_DWORD*)(a1 + 376) |= v95 | v93;
          if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) == 3) {
            goto LABEL_298;
          }
          goto LABEL_296;
        }
        if (v68 - 4 < 2) {
          v69 = 2105344;
          goto LABEL_237;
        }
      }
      v69 = 7348224;
      goto LABEL_237;
    }
    switch (v66) {
    case 2: {
      v67 = *(_DWORD*)(a1 + 368) | 0x40;
      __asm__ volatile("" ::"r"(v67));
    }
      goto LABEL_222;
    case 3: {
      v67 = *(_DWORD*)(a1 + 368) | 0xC0;
      __asm__ volatile("" ::"r"(v67));
    }
      goto LABEL_222;
    case 4: {
      v67 = *(_DWORD*)(a1 + 368) | 0x100;
      __asm__ volatile("" ::"r"(v67));
    }
      goto LABEL_222;
    default:
      break;
    }
    return v6;
  default:
    return v6;
  }
}

__int64 nvidia_205ee0(int a1, __int64 a2, __int64* a3, _QWORD* a4, int a5)
{
  __int64 v5;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  unsigned int v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  struct {
    __int128 v16;
    __int128 v17;
  } v16_;

  v5 = *(_QWORD*)(a2 + 16);
  v16_.v16 = (__typeof__(v16_.v16)){0};
  v16_.v17 = (__typeof__(v16_.v17)){0};
  LODWORD(v16_.v16) = a1;
  v9 = *(_QWORD*)(v5 + 72);
  DWORDn(v16_.v17, sizeof(v16_.v17) / 4 - 1) = a5;
  v10 = CudaDriverRoutine_5f100(v9, (unsigned int*)&v16_.v16, a2);
  v11 = (__int64)v10;
  if (a4 != nullptr) {
    *a4 = v10;
  }
  v12 = DWORDn(v16_.v17, sizeof(v16_.v17) / 4 - 1);
  CudaDriverRoutine_205860(a2);
  result = cuda_driver_205940(v11, a2, a3, v12);
  v14 = v16_.v17;
  if ((_QWORD)v16_.v17 != 0) {
    *(_QWORD*)(*(_QWORD*)(v11 + 33816) + 272LL) =
        *(_QWORD*)(*(_QWORD*)(a2 + 16) + 64LL);
    v15 = *(_QWORD*)(v11 + 33816);
    if (*(_QWORD*)(v15 + 272) != *((_QWORD*)&v16_.v16 + 1)) {
      v14 = *((_QWORD*)&v16_.v16 + 1);
    }
    *(_QWORD*)(v15 + 264) = v14;
  }
  return result;
}

__int64 nvidia_2108a0(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v2;
  int v3;
  void(__attribute__((noreturn)) * v4)();
  int v5;
  void(__attribute__((noreturn)) * v6)();
  int v7;
  void* v8;
  int v10;
  void(__attribute__((noreturn)) * v11)();
  int v12;
  void(__attribute__((noreturn)) * v13)();
  int v14;
  int v15;
  struct {
    __int128 v16;
    __int128 v17;
    __int128 v18;
    __int128 v19;
    __int64 v20;
  } v16_;

  v1 = *a1;
  v16_.v20 = 0;
  v16_.v16 = (__typeof__(v16_.v16)){0};
  v16_.v17 = (__typeof__(v16_.v17)){0};
  v16_.v18 = (__typeof__(v16_.v18)){0};
  v16_.v19 = (__typeof__(v16_.v19)){0};
  if (v1 >= 0x48) {
    v2 = 72;
  }
  else {
    v2 = v1;
  }
  memcpy_plt((__int64)&v16_.v16, (__int64)a1, v2);
  v3 = DWORD2(v16_.v16);
  *(_DWORD*)CudaDriverData_1421ff0[0] = DWORD1(v16_.v16);
  v4 = CudaDriverData_1422000[0];
  *(_DWORD*)CudaDriverData_1422018[0] = v3;
  v5 = v16_.v17;
  *(_DWORD*)v4 = DWORDn(v16_.v16, sizeof(v16_.v16) / 4 - 1);
  v6 = CudaDriverData_1422060[0];
  *CudaDriverData_1423078 = v5;
  v7 = DWORD2(v16_.v17);
  *(_DWORD*)v6 = DWORD1(v16_.v17);
  *(_DWORD*)CudaDriverData_1422010[0] = v7;
  *(_DWORD*)CudaDriverData_1422008[0] =
      DWORDn(v16_.v17, sizeof(v16_.v17) / 4 - 1);
  v8 = CudaDriverData_1422118;
  CudaDriverStub_107f90_alt1((char*)((_UNKNOWN*)0x1818LL) +
                             (_QWORD)CudaDriverData_1422118);
  *(_DWORD*)CudaDriverData_1422028[0] = v16_.v18;
  CudaDriverStub_108070_alt1((char*)((_UNKNOWN*)0x1818LL) + (_QWORD)v8);
  v10 = DWORDn(v16_.v18, sizeof(v16_.v18) / 4 - 1);
  *(_DWORD*)CudaDriverData_1422038[0] = DWORD2(v16_.v18);
  v11 = CudaDriverData_1421fe8[0];
  *(_DWORD*)CudaDriverData_1422090[0] = v10;
  v12 = DWORD1(v16_.v19);
  *(_DWORD*)v11 = v16_.v19;
  v13 = CudaDriverData_1421ff8[0];
  *(_DWORD*)CudaDriverData_1422030[0] = v12;
  v14 = DWORDn(v16_.v19, sizeof(v16_.v19) / 4 - 1);
  *(_DWORD*)v13 = DWORD2(v16_.v19);
  *(_DWORD*)((char*)((_UNKNOWN*)0x17F0LL) + (_QWORD)v8) = v14;
  v15 = DWORDn(v16_.v20, sizeof(v16_.v20) / 4 - 1);
  *CudaDriverData_14230c0 = v16_.v20;
  *(_DWORD*)CudaDriverData_1422098[0] = v15;
  return 0;
}

__int64 nvidia_212770(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  struct {
    __int128 v8;
    __int128 v9;
    char gap32_[72];
    _BYTE v12[4];
    int v13;
  } f_;
  __int128 v10;
  _QWORD v11[3];

  if (a1 != nullptr) {
    {
      v1 = *a1;
      __asm__ volatile("" ::"r"(v1));
    }
    f_.v9 = (__typeof__(f_.v9)){0};
    v10 = (__typeof__(v10)){0};
    f_.v8 = (__typeof__(f_.v8)){0};
    if (v1 >= 0x30) {
      v3 = 48;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&f_.v8, (__int64)a1, v3);
    LODWORD(f_.v8) = v3;
    if (*((_QWORD*)&f_.v8 + 1) != 0 && (_QWORD)f_.v9 != 0) {
      {
        v4 = *(_QWORD*)(*((_QWORD*)&f_.v8 + 1) + 8LL);
        __asm__ volatile("" ::"r"(v4));
      }
      v11[0] = f_.v9;
      v11[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, _QWORD, int*, _BYTE*, _QWORD, __int128*))
                  CudaDriverData_1423090[**((_DWORD**)&f_.v8 + 1)] +
              26))(v11, 0, &f_.v13, f_.v12, 0, &v10);
      v6 = CudaDriverRoutine_20f580(v5);
      if (v6 == 0) {
        DWORD2(f_.v9) = f_.v13;
        DWORDn(f_.v9, sizeof(f_.v9) / 4 - 1) = f_.v12[0];
      }
    }
    else {
      v6 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&f_.v8, (unsigned int)f_.v8);
  }
  else {
    return 4;
  }
  return v6;
}

__int64 nvidia_21aee0(__int64 a1, unsigned int* a2)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  struct {
    __int128 v9;
    __int128 v10;
    __int128 v11;
    __int64 v12;
  } v9_;

  v2 = 1;
  v9_.v12 = 0;
  v9_.v10 = (__typeof__(v9_.v10)){0};
  v9_.v11 = (__typeof__(v9_.v11)){0};
  v9_.v9 = (__typeof__(v9_.v9)){0};
  if (a1 != 0 && a2 != nullptr) {
    v3 = *a2;
    if (*a2 != 0) {
      if ((unsigned int)(*(int*)(a1 + 32) - 1) <= 1) {
        DWORD1(v9_.v9) = *(_DWORD*)(a1 + 32);
      }
      v4 = *(_QWORD*)(a1 + 24);
      v5 = *(_QWORD*)(a1 + 72);
      *((_QWORD*)&v9_.v9 + 1) = *(_QWORD*)(a1 + 8);
      *(_QWORD*)&v9_.v10 = v4;
      v6 = *(_QWORD*)(a1 + 40);
      LODWORD(v4) = *(_DWORD*)(a1 + 96);
      *((_QWORD*)&v9_.v10 + 1) = v5;
      *(_QWORD*)&v9_.v11 = v6;
      DWORD2(v9_.v11) = *(_DWORD*)(a1 + 48);
      DWORDn(v9_.v11, sizeof(v9_.v11) / 4 - 1) = v4;
      LODWORD(v9_.v12) = *(_DWORD*)(a1 + 104);
      if (v3 >= 0x38) {
        v7 = 56;
      }
      else {
        v7 = v3;
      }
      LODWORD(v9_.v9) = v7;
      memcpy_plt((__int64)a2, (__int64)&v9_.v9, v7);
      return 0;
    }
  }
  return v2;
}

__int64 nvidia_23a160(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  int v3;
  __int64* v4;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int* v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  __int16 v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  char v28;
  unsigned int v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  __int16 v35;
  int v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  int v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  bool v53;
  unsigned int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  unsigned int v59;
  int v60;
  char v61;
  unsigned int v62;
  unsigned int v63;
  int v64;
  unsigned int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  int v73;
  int v74;
  __int64 v75;
  float v76;
  int v77;
  int v78;
  int v79;
  int v80;
  float v81;
  _BOOL4 v82;
  bool v83;
  double v84;
  int v85;
  int v86;
  unsigned int v87;
  float v88;
  _BOOL4 v89;
  bool v90;
  __int16 v91;
  float v92;
  int v93;
  int v94;
  int v95;
  int v96;
  unsigned int v98;
  __int64 v99;
  __int64* v100;
  int v101;
  int v102;
  struct {
    long double v104;
    char gap16_[28];
    _BYTE v105[4];
  } v104_;

  {
    v1 = *(_DWORD*)(a1 + 40);
    __asm__ volatile("" ::"r"(v1));
  }
  *(_OWORD*)(a1 + 336) = (__typeof__(*(_OWORD*)(a1 + 336))){0};
  *(_OWORD*)(a1 + 352) = (__typeof__(*(_OWORD*)(a1 + 352))){0};
  *(_OWORD*)(a1 + 368) = (__typeof__(*(_OWORD*)(a1 + 368))){0};
  *(_OWORD*)(a1 + 384) = (__typeof__(*(_OWORD*)(a1 + 384))){0};
  if (v1 == 1) {
    if (*(_DWORD*)(a1 + 120) != 0) {
      v3 = 1;
    }
    else {
      v3 = 2;
    }
    v4 = (__int64*)(a1 + 8);
    if (!CudaDriverStub_985a0(*(_QWORD*)(a1 + 8))) {
      goto LABEL_11;
    }
  LABEL_8:
    if (*(_DWORD*)(a1 + 40) == 2 && *(_BYTE*)(a1 + 920) != 0) {
      v3 = 1;
    }
    goto LABEL_11;
  }
  v3 = 0;
  v4 = (__int64*)(a1 + 8);
  if (CudaDriverStub_985a0(*(_QWORD*)(a1 + 8))) {
    goto LABEL_8;
  }
LABEL_11:
  v5 = nvidia_11fa80(a1);
  v6 = 1;
  v7 = 29;
  switch (v5) {
  case 0:
    v7 = 28;
    goto LABEL_34;
  case 3:
    v7 = 20;
    goto LABEL_34;
  case 6:
    v7 = 21;
    goto LABEL_34;
  case 47:
    v7 = 34;
    goto LABEL_34;
  case 48:
    v7 = 35;
    goto LABEL_34;
  case 54:
    v7 = 9;
    goto LABEL_34;
  case 69:
    v7 = 1;
    goto LABEL_34;
  case 76:
    v7 = 3;
    goto LABEL_34;
  case 80:
    v7 = 4;
    goto LABEL_34;
  case 88:
    v7 = 8;
    goto LABEL_34;
  case 93:
    v7 = 12;
    goto LABEL_34;
  case 97:
    v7 = 15;
    goto LABEL_34;
  case 103:
    v7 = 24;
    goto LABEL_34;
  case 107:
    v7 = 27;
    goto LABEL_34;
  case 113:
    goto LABEL_34;
  case 119:
    v7 = 36;
    goto LABEL_34;
  case 121:
    v7 = 37;
    goto LABEL_34;
  case 123:
    v7 = 38;
    goto LABEL_34;
  case 125:
    v7 = 39;
    goto LABEL_34;
  case 127:
    v7 = 40;
    goto LABEL_34;
  case 130:
    v7 = 17;
    goto LABEL_34;
  case 131:
    v7 = 16;
    goto LABEL_34;
  case 132:
    v7 = 23;
  LABEL_34:
    v8 = (unsigned int*)(a1 + 336);
    *(_DWORD*)(a1 + 336) = *(_DWORD*)(a1 + 336) & 0xFFFFFF80 | v7;
    v9 = CudaDriverRoutine_11fd60(a1);
    if (v9 <= 2) {
      if (v9 == 1) {
        {
          v12 = *v8;
          __asm__ volatile("" ::"r"(v12));
        }
        v13 = 1170;
      }
      else {
        if (v9 != 2) {
          return v6;
        }
        {
          v12 = *v8;
          __asm__ volatile("" ::"r"(v12));
        }
        v13 = 585;
      }
    LABEL_50:
      *(_DWORD*)(a1 + 336) = v12 & 0xFFF8007F | ((v13 & 0xFFF) << 7);
      v10 = CudaDriverRoutine_11f370(a1, 0);
      if (v10 <= 2) {
        goto LABEL_39;
      }
      goto LABEL_51;
    }
    if (v9 == 3) {
      {
        v12 = *v8;
        __asm__ volatile("" ::"r"(v12));
      }
      v13 = 2340;
      goto LABEL_50;
    }
    if (v9 == 4) {
      {
        v12 = *v8;
        __asm__ volatile("" ::"r"(v12));
      }
      v13 = 1755;
      goto LABEL_50;
    }
    if (v9 != 5) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 | 0x7FF80;
    v10 = CudaDriverRoutine_11f370(a1, 0);
    if (v10 <= 2) {
    LABEL_39:
      if (v10 != 0) {
        if (v10 == 1) {
          *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x100000;
          v11 = CudaDriverRoutine_11f370(a1, 1u);
          if (v11 <= 2) {
            goto LABEL_73;
          }
        }
        else {
          if (v10 != 2) {
            return v6;
          }
          *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x180000;
          v11 = CudaDriverRoutine_11f370(a1, 1u);
          if (v11 <= 2) {
            goto LABEL_73;
          }
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_73;
        }
      }
    LABEL_64:
      if (v11 > 4) {
        if (v11 == 5) {
          *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x1800000;
          v14 = CudaDriverRoutine_11f370(a1, 2u);
          if (v14 <= 2) {
            goto LABEL_92;
          }
        }
        else {
          if (v11 != 6) {
            return v6;
          }
          *(_DWORD*)(a1 + 336) = *v8 | 0x1C00000;
          v14 = CudaDriverRoutine_11f370(a1, 2u);
          if (v14 <= 2) {
            goto LABEL_92;
          }
        }
      }
      else if (v11 == 3) {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x1000000;
        v14 = CudaDriverRoutine_11f370(a1, 2u);
        if (v14 <= 2) {
          goto LABEL_92;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x1400000;
        v14 = CudaDriverRoutine_11f370(a1, 2u);
        if (v14 <= 2) {
          goto LABEL_92;
        }
      }
    LABEL_83:
      if (v14 > 4) {
        if (v14 == 5) {
          *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0xC000000;
          v15 = CudaDriverRoutine_11f370(a1, 3u);
          if (v15 <= 2) {
            goto LABEL_111;
          }
        }
        else {
          if (v14 != 6) {
            return v6;
          }
          *(_DWORD*)(a1 + 336) = *v8 | 0xE000000;
          v15 = CudaDriverRoutine_11f370(a1, 3u);
          if (v15 <= 2) {
            goto LABEL_111;
          }
        }
      }
      else if (v14 == 3) {
        *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0x8000000;
        v15 = CudaDriverRoutine_11f370(a1, 3u);
        if (v15 <= 2) {
          goto LABEL_111;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0xA000000;
        v15 = CudaDriverRoutine_11f370(a1, 3u);
        if (v15 <= 2) {
          goto LABEL_111;
        }
      }
    LABEL_102:
      if (v15 > 4) {
        if (v15 == 5) {
          {
            v16 = *v8 & 0x8FFFFFFF | 0x60000000;
            __asm__ volatile("" ::"r"(v16));
          }
          {
            v17 = *(_DWORD*)(a1 + 328);
            __asm__ volatile("" ::"r"(v17));
          }
          *(_DWORD*)(a1 + 336) = v16;
          if ((v17 & 8) == 0) {
            goto LABEL_122;
          }
        }
        else {
          if (v15 != 6) {
            return v6;
          }
          {
            v16 = *v8 | 0x70000000;
            __asm__ volatile("" ::"r"(v16));
          }
          {
            v17 = *(_DWORD*)(a1 + 328);
            __asm__ volatile("" ::"r"(v17));
          }
          *(_DWORD*)(a1 + 336) = v16;
          if ((v17 & 8) == 0) {
            goto LABEL_122;
          }
        }
      }
      else if (v15 == 3) {
        {
          v16 = *v8 & 0x8FFFFFFF | 0x40000000;
          __asm__ volatile("" ::"r"(v16));
        }
        {
          v17 = *(_DWORD*)(a1 + 328);
          __asm__ volatile("" ::"r"(v17));
        }
        *(_DWORD*)(a1 + 336) = v16;
        if ((v17 & 8) == 0) {
          goto LABEL_122;
        }
      }
      else {
        {
          v16 = *v8 & 0x8FFFFFFF | 0x50000000;
          __asm__ volatile("" ::"r"(v16));
        }
        {
          v17 = *(_DWORD*)(a1 + 328);
          __asm__ volatile("" ::"r"(v17));
        }
        *(_DWORD*)(a1 + 336) = v16;
        if ((v17 & 8) == 0) {
          goto LABEL_122;
        }
      }
    LABEL_121:
      *v8 = v16 | 0x80000000;
      goto LABEL_122;
    }
  LABEL_51:
    if (v10 <= 4) {
      if (v10 == 3) {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x200000;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_73;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x280000;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_73;
        }
      }
      goto LABEL_64;
    }
    if (v10 == 5) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x300000;
      v11 = CudaDriverRoutine_11f370(a1, 1u);
      if (v11 <= 2) {
        goto LABEL_73;
      }
      goto LABEL_64;
    }
    if (v10 != 6) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 | 0x380000;
    v11 = CudaDriverRoutine_11f370(a1, 1u);
    if (v11 > 2) {
      goto LABEL_64;
    }
  LABEL_73:
    if (v11 == 0) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF;
      v14 = CudaDriverRoutine_11f370(a1, 2u);
      if (v14 <= 2) {
        goto LABEL_92;
      }
      goto LABEL_83;
    }
    if (v11 == 1) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x800000;
      v14 = CudaDriverRoutine_11f370(a1, 2u);
      if (v14 <= 2) {
        goto LABEL_92;
      }
      goto LABEL_83;
    }
    if (v11 != 2) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0xC00000;
    v14 = CudaDriverRoutine_11f370(a1, 2u);
    if (v14 > 2) {
      goto LABEL_83;
    }
  LABEL_92:
    if (v14 == 0) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF;
      v15 = CudaDriverRoutine_11f370(a1, 3u);
      if (v15 <= 2) {
        goto LABEL_111;
      }
      goto LABEL_102;
    }
    if (v14 == 1) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0x4000000;
      v15 = CudaDriverRoutine_11f370(a1, 3u);
      if (v15 <= 2) {
        goto LABEL_111;
      }
      goto LABEL_102;
    }
    if (v14 != 2) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0x6000000;
    v15 = CudaDriverRoutine_11f370(a1, 3u);
    if (v15 > 2) {
      goto LABEL_102;
    }
  LABEL_111:
    if (v15 == 0) {
      {
        v16 = *v8 & 0x8FFFFFFF;
        __asm__ volatile("" ::"r"(v16));
      }
      {
        v17 = *(_DWORD*)(a1 + 328);
        __asm__ volatile("" ::"r"(v17));
      }
      *(_DWORD*)(a1 + 336) = v16;
      if ((v17 & 8) == 0) {
        goto LABEL_122;
      }
      goto LABEL_121;
    }
    if (v15 == 1) {
      {
        v16 = *v8 & 0x8FFFFFFF | 0x20000000;
        __asm__ volatile("" ::"r"(v16));
      }
      {
        v17 = *(_DWORD*)(a1 + 328);
        __asm__ volatile("" ::"r"(v17));
      }
      *(_DWORD*)(a1 + 336) = v16;
      if ((v17 & 8) == 0) {
        goto LABEL_122;
      }
      goto LABEL_121;
    }
    if (v15 != 2) {
      return v6;
    }
    {
      v16 = *v8 & 0x8FFFFFFF | 0x30000000;
      __asm__ volatile("" ::"r"(v16));
    }
    {
      v17 = *(_DWORD*)(a1 + 328);
      __asm__ volatile("" ::"r"(v17));
    }
    *(_DWORD*)(a1 + 336) = v16;
    if ((v17 & 8) != 0) {
      goto LABEL_121;
    }
  LABEL_122:
    if (v3 != 0) {
      if (v3 != 1) {
        {
          v37 = *(_QWORD*)(a1 + 128);
          __asm__ volatile("" ::"r"(v37));
        }
        v28 = 1;
        {
          v38 = *(_DWORD*)(a1 + 344) & 0xE11E0000;
          __asm__ volatile("" ::"r"(v38));
        }
        *(_DWORD*)(a1 + 340) = v37;
        *(_DWORD*)(a1 + 344) =
            DWORDn(v37, sizeof(v37) / 4 - 1) & 0x1FFFF | v38 | 0x1E000000;
        LODWORD(v37) = *(int*)(a1 + 104) - 1;
        *(_WORD*)(a1 + 348) = WORD1(v37);
        {
          v29 = *(_DWORD*)(a1 + 352) & 0xF87F0000 | (unsigned __int16)v37 |
                0x3000000;
          __asm__ volatile("" ::"r"(v29));
        }
        *(_DWORD*)(a1 + 352) = v29;
        if ((v17 & 0x10) == 0) {
          goto LABEL_172;
        }
      LABEL_171:
        *(_DWORD*)(a1 + 352) = v29 | 0x400000;
        goto LABEL_172;
      }
      v18 = 0x400000;
      v19 = -32;
      v20 = 31;
    }
    else {
      v18 = 6291456;
      v19 = -512;
      v20 = 511;
    }
    {
      v21 = *(_DWORD*)(a1 + 132);
      __asm__ volatile("" ::"r"(v21));
    }
    *(_DWORD*)(a1 + 340) =
        *(_DWORD*)(a1 + 340) & v20 | v19 & *(_DWORD*)(a1 + 128);
    {
      v22 = v21 & 0x1FFFF | *(_DWORD*)(a1 + 344) & 0xE11E0000 | v18;
      __asm__ volatile("" ::"r"(v22));
    }
    {
      v23 = *(_DWORD*)(a1 + 348);
      __asm__ volatile("" ::"r"(v23));
    }
    *(_DWORD*)(a1 + 344) = v22 | 0x1E000000;
    v24 = v23 | 0x10000;
    *(_DWORD*)(a1 + 348) = v24;
    if (v3 != 1) {
      {
        v30 = *(_QWORD*)(a1 + 64);
        __asm__ volatile("" ::"r"(v30));
      }
      {
        v31 = v24 & 0xFFFFFFF8 | *(_DWORD*)(v30 + 40) & 7;
        __asm__ volatile("" ::"r"(v31));
      }
      *(_DWORD*)(a1 + 348) = v31;
      {
        v32 = v31 & 0xFFFFFFC7 | (8 * (*(_DWORD*)(v30 + 44) & 7));
        __asm__ volatile("" ::"r"(v32));
      }
      *(_DWORD*)(a1 + 348) = v32;
      {
        v33 = v32 & 0xFFFFFE3F | ((*(_DWORD*)(v30 + 48) & 7) << 6);
        __asm__ volatile("" ::"r"(v33));
      }
      *(_DWORD*)(a1 + 348) = v33;
      if ((*(_BYTE*)(v30 + 32) & 0x40) != 0) {
        {
          v34 = *(_DWORD*)(v30 + 144);
          __asm__ volatile("" ::"r"(v34));
        }
        if (v34 < 2) {
          v36 = 0;
        }
        else {
          v35 = 0;
          do {
            v35 += 1024;
            v83 = v34 > 3;
            v34 >>= 1;
          } while (v83);
          v36 = v35 & 0x1C00;
        }
        v33 = v36 | v33 & 0xFFFFE3FF;
        *(_DWORD*)(a1 + 348) = v33;
      }
      {
        v39 = *(_QWORD*)(a1 + 88);
        __asm__ volatile("" ::"r"(v39));
      }
      if (v39 != 0) {
        v33 =
            (v33 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v39 + 40) << 28)) -
            0x10000000;
        __asm__ volatile("" ::"r"(v33));
      }
      {
        v40 = *(_DWORD*)(a1 + 104);
        __asm__ volatile("" ::"r"(v40));
      }
      {
        v41 = *(_DWORD*)(a1 + 108);
        __asm__ volatile("" ::"r"(v41));
      }
      *(_DWORD*)(a1 + 348) = v33 | 0x60000;
      {
        v42 = *(_DWORD*)(a1 + 352) & 0xFFF80000 | (v40 - 1) & 0x1FFFF;
        __asm__ volatile("" ::"r"(v42));
      }
      v43 = (4 * v41 + 524284) & 0x40000;
      if (v41 == 0) {
        v43 = 0;
      }
      v44 = v43 | v42;
      {
        v45 = *(_DWORD*)(a1 + 112);
        __asm__ volatile("" ::"r"(v45));
      }
      if (v45 != 0) {
        v46 = (8 * v45 + 262136) & 0x20000;
      }
      else {
        v46 = 0;
      }
      v47 = v44 | v46;
      *(_DWORD*)(a1 + 352) = v47;
      {
        v48 = *(_DWORD*)(v30 + 8);
        __asm__ volatile("" ::"r"(v48));
      }
      if (v48 > 3) {
        v49 = v47 & 0xF87FFFFF | 0x4000000;
        v50 = v47 & 0xF87FFFFF | 0x1800000;
        v51 = v47 & 0xF87FFFFF | 0x2000000;
        if (v48 != 7) {
          v49 = v47;
        }
        if (v48 != 6) {
          v50 = v49;
        }
        if (v48 == 5) {
          v47 = v47 & 0xF87FFFFF | 0x2800000;
        }
        if (v48 == 4) {
          v47 = v51;
        }
        if (v48 <= 5) {
          v52 = v47;
        }
        else {
          v52 = v50;
        }
        goto LABEL_170;
      }
      if (v48 == 1) {
        if (!CudaDriverRoutine_11f690((__int64*)a1)) {
          {
            v52 = *(_DWORD*)(a1 + 352) & 0xF87FFFFF;
            __asm__ volatile("" ::"r"(v52));
          }
          goto LABEL_170;
        }
      }
      else if (v48 != 2) {
        v53 = v48 == 3;
        v52 = v47 & 0xF87FFFFF | 0x1000000;
        if (!v53) {
          v52 = v47;
        }
      LABEL_170:
        v29 = v52 | 0xE0000000;
        {
          v55 = *(_DWORD*)(a1 + 328);
          __asm__ volatile("" ::"r"(v55));
        }
        v28 = 0;
        *(_DWORD*)(a1 + 352) = v29;
        if ((v55 & 0x10) == 0) {
          goto LABEL_172;
        }
        goto LABEL_171;
      }
      {
        v54 = *(_DWORD*)(a1 + 352) & 0xF87FFFFF;
        __asm__ volatile("" ::"r"(v54));
      }
      if (*(_DWORD*)(a1 + 120) != 0) {
        v52 = v54 | 0x3800000;
      }
      else {
        v52 = v54 | 0x800000;
      }
      goto LABEL_170;
    }
    {
      v25 = *(_DWORD*)(a1 + 116);
      __asm__ volatile("" ::"r"(v25));
    }
    {
      v26 = *(_QWORD*)(a1 + 88);
      __asm__ volatile("" ::"r"(v26));
    }
    v27 = v24 & 0xFFFF0000 | (unsigned __int16)(v25 >> 5);
    *(_DWORD*)(a1 + 348) = v27;
    if (v26 != 0) {
      v27 = (v27 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v26 + 40) << 28)) -
            0x10000000;
      __asm__ volatile("" ::"r"(v27));
    }
    v28 = 0;
    *(_DWORD*)(a1 + 348) = v27 | 0x60000;
    v29 = *(_DWORD*)(a1 + 352) & 0x187C0000 |
          (*(int*)(a1 + 104) - 1) & 0x1FFFF | (v25 >> 4) & 0x20000 | 0xE3800000;
    *(_DWORD*)(a1 + 352) = v29;
    if ((v17 & 0x10) != 0) {
      goto LABEL_171;
    }
  LABEL_172:
    if ((v28 & 1) == 0) {
      {
        v56 = *(_DWORD*)(a1 + 108);
        __asm__ volatile("" ::"r"(v56));
      }
      {
        v57 = *(_DWORD*)(a1 + 112);
        __asm__ volatile("" ::"r"(v57));
      }
      v53 = v56 == 0;
      v58 = (unsigned __int16)(v56 - 1);
      if (v53) {
        v58 = 0;
      }
      {
        v59 = v58 | *(_DWORD*)(a1 + 356) & 0xC0000000;
        __asm__ volatile("" ::"r"(v59));
      }
      v60 = ((v57 << 16) + 1073676288) & 0x3FFF0000;
      if (v57 == 0) {
        v60 = 0;
      }
      *(_DWORD*)(a1 + 356) = v60 | v59;
      if (CudaDriverRoutine_11f6d0(a1)) {
        *(_DWORD*)(a1 + 356) |= 0x80000000;
      }
      {
        v61 = *(_BYTE*)(a1 + 328);
        __asm__ volatile("" ::"r"(v61));
      }
      {
        v62 = *(_DWORD*)(a1 + 360) & 0xF87FFFFF | 0x3000000;
        __asm__ volatile("" ::"r"(v62));
      }
      *(_DWORD*)(a1 + 360) = v62;
      if ((v61 & 0x20) == 0) {
        {
          v63 = *(_DWORD*)(a1 + 296);
          __asm__ volatile("" ::"r"(v63));
        }
        if (v63 > 7) {
          v65 = v62 & 0xFB7FFFC1 | 0x10;
        }
        else {
          v64 = 1 << v63;
          if ((v64 & 0xF0) != 0) {
            v65 = v62 & 0xFB7FFFC1 | 0xC;
          }
          else if ((v64 & 3) != 0) {
            v65 = v62 & 0xFB7FFFC1;
          }
          else {
            v65 = v62 & 0xFB7FFFC1 | 8;
          }
        }
        *(_DWORD*)(a1 + 360) = v65;
      }
    }
    if (*(_QWORD*)(a1 + 88) != 0) {
      *(_DWORD*)(a1 + 364) = *(_DWORD*)(a1 + 364) & 0xFFFFFF00 |
                             *(_DWORD*)(a1 + 136) & 0xF |
                             (16 * (*(_DWORD*)(a1 + 140) & 0xF));
    }
    v66 = CudaDriverRoutine_11f790(a1, 0);
    v6 = 1;
    if (v66 > 2) {
      if ((unsigned int)(v66 - 3) >= 2) {
        return v6;
      }
    }
    else {
      switch (v66) {
      case 0:
        goto LABEL_199;
      case 1:
        v66 = 2;
        break;
      case 2:
        v66 = 1;
        break;
      default:
        return v6;
      }
    }
    *(_DWORD*)(a1 + 368) |= v66;
  LABEL_199:
    v67 = CudaDriverRoutine_11f790(a1, 1u);
    if (v67 <= 1) {
      if (v67 == 0) {
        goto LABEL_210;
      }
      if (v67 != 1) {
        return v6;
      }
      v68 = 16;
    }
    else {
      switch (v67) {
      case 4:
        v68 = 32;
        break;
      case 3:
        v68 = 24;
        break;
      case 2:
        v68 = 8;
        break;
      default:
        return v6;
      }
    }
    *(_DWORD*)(a1 + 368) |= v68;
  LABEL_210:
    v69 = CudaDriverRoutine_11f790(a1, 2u);
    if (v69 <= 1) {
      if (v69 != 0) {
        if (v69 != 1) {
          return v6;
        }
        {
          v70 = *(_DWORD*)(a1 + 368) | 0x80;
          __asm__ volatile("" ::"r"(v70));
        }
      }
      else {
        {
          v70 = *(_DWORD*)(a1 + 368);
          __asm__ volatile("" ::"r"(v70));
        }
      }
    LABEL_221:
      *(_DWORD*)(a1 + 368) = v70 | 0x2000;
      {
        v71 = *(_DWORD*)(a1 + 296);
        __asm__ volatile("" ::"r"(v71));
      }
      v72 = 1056768;
      if ((int)v71 > 5) {
        if (v71 <= 0xF) {
          if (((1 << v71) & 0xF000) != 0) {
            v72 = 6299648;
            goto LABEL_236;
          }
          if (((1 << v71) & 0x300) != 0) {
            v72 = 4202496;
            goto LABEL_236;
          }
          if (((1 << v71) & 0xC00) != 0) {
            v72 = 5251072;
            goto LABEL_236;
          }
        }
        if (v71 - 6 < 2) {
          v72 = 3153920;
          goto LABEL_236;
        }
      }
      else {
        if (v71 < 2) {
          goto LABEL_237;
        }
        if (v71 - 2 < 2) {
        LABEL_236:
          *(_DWORD*)(a1 + 368) = v70 | v72;
        LABEL_237:
          if (*(_DWORD*)(a1 + 276) == 1) {
            v73 = 34;
          }
          else {
            v73 = 17;
          }
          {
            v74 = *(_DWORD*)(a1 + 372) | v73;
            __asm__ volatile("" ::"r"(v74));
          }
          {
            v75 = *(_QWORD*)(a1 + 88);
            __asm__ volatile("" ::"r"(v75));
          }
          if (v75 != 0) {
            v76 = 0x0.0p+0f;
            if (*(_DWORD*)(a1 + 280) == 1) {
              v77 = 192;
            }
            else {
              v77 = 128;
            }
            v78 = v74 | v77;
            if ((v28 & 1) == 0 && (*(_BYTE*)(a1 + 328) & 0x20) == 0) {
              if (v71 > 7) {
                v76 = -0x1.0000000000000p-2f;
                v78 |= 0x20000000u;
              }
              else {
                v79 = 1 << v71;
                if ((v79 & 0xF0) != 0) {
                  v78 |= 0x18000000u;
                  v76 = -0x1.b6db6e0000000p-3f;
                }
                else if ((v79 & 3) != 0) {
                  v76 = -0x0.0p+0f;
                }
                else {
                  v78 |= 0x10000000u;
                  v76 = -0x1.5555560000000p-3f;
                }
              }
            }
            {
              v81 = v76 + *(float*)(a1 + 284);
              __asm__ volatile("" ::"w"(v81));
            }
            v82 = v81 >= 0x1.e000000000000p+3f;
            v83 = v81 <= -0x1.e000000000000p+3f;
            v84 = v81;
            v85 = !v83 || v82;
            if (v83) {
              v82 = true;
            }
            if (v85 != 0) {
              v86 = 3840;
            }
            else {
              v86 = 4352;
            }
            v87 = vcvtd_n_s32_f64(v84, 8u) & 0x1FFF;
            if (!v82) {
              v86 = v87;
            }
            v80 = v78 | (v86 << 12);
            *(_DWORD*)(a1 + 372) = v80;
            if ((v28 & 1) != 0) {
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
                goto LABEL_268;
              }
            }
            else {
              *(_DWORD*)(a1 + 360) =
                  *(_DWORD*)(a1 + 360) & 0xFFF8003F | ((v86 & 0x1FFF) << 6);
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              LABEL_268:
                if (v75 == 0) {
                  goto LABEL_269;
                }
                goto LABEL_273;
              }
            }
          }
          else {
            v80 = v74 | 0x40;
            *(_DWORD*)(a1 + 372) = v74 | 0x40;
            if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              goto LABEL_268;
            }
          }
          *(_DWORD*)(a1 + 372) = v80 | 0x300;
          if (v75 == 0) {
          LABEL_269:
            if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) != 3) {
            LABEL_295:
              if ((unsigned int)CudaDriverRoutine_11f790(a1, 1u) != 3 &&
                  (unsigned int)CudaDriverRoutine_11f790(a1, 2u) != 3) {
                return 0;
              }
            }
          LABEL_297:
            CudaDriverRoutine_11f810(&v104_.v104, a1);
            {
              v99 = *(_QWORD*)&v104_.v104;
              __asm__ volatile("" ::"r"(v99));
            }
            *(_DWORD*)(a1 + 392) = DWORD2(v104_.v104);
            *(_QWORD*)(a1 + 384) = v99;
            if (CudaDriverRoutine_11f2f0(a1)) {
              if (*(_QWORD*)a1 != 0) {
                v100 = (__int64*)(*(_QWORD*)a1 + 24LL);
                __asm__ volatile("" ::"r"(v100));
              }
              else {
                v100 = v4;
              }
              if (!CudaDriverStub_985a0(*v100)) {
                goto LABEL_305;
              }
              {
                v101 = *(_DWORD*)(a1 + 396) | 1;
                __asm__ volatile("" ::"r"(v101));
              }
            }
            else {
              v101 = DWORDn(v104_.v104, sizeof(v104_.v104) / 4 - 1);
            }
            *(_DWORD*)(a1 + 396) = v101;
          LABEL_305:
            if ((*(_BYTE*)(a1 + 328) & 0x10) != 0) {
              cuda_driver_11f820(v104_.v105, (float*)&v104_.v104);
              {
                v102 = v104_.v105[2];
                __asm__ volatile("" ::"r"(v102));
              }
              *(_DWORD*)(a1 + 376) |= v104_.v105[0] << 24;
              *(_DWORD*)(a1 + 380) = (v104_.v105[1] << 12) | (v102 << 20);
            }
            return 0;
          }
        LABEL_273:
          {
            v88 = *(float*)(a1 + 288);
            __asm__ volatile("" ::"w"(v88));
          }
          v89 = v88 >= 0x1.e000000000000p+3f;
          v90 = v88 <= 0x0.0p+0f;
          v91 = vcvtd_n_s32_f64(v88, 8u);
          {
            v92 = *(float*)(a1 + 292);
            __asm__ volatile("" ::"w"(v92));
          }
          v93 = !v90 || v89;
          if (v90) {
            v89 = true;
          }
          if (v93 != 0) {
            v94 = 3840;
          }
          else {
            v94 = 0;
          }
          v95 = v91 & 0xFFF;
          if (v89) {
            v96 = v94;
          }
          else {
            v96 = v95;
          }
          if (v92 <= 0x0.0p+0f && v92 < 0x1.e000000000000p+3f) {
            v98 = 0;
          }
          else {
            v98 = 15728640;
          }
          if (v92 < 0x1.e000000000000p+3f && v92 > 0x0.0p+0f) {
            v98 = (vcvtd_n_s32_f64(v92, 8u) & 0xFFF) << 12;
          }
          *(_DWORD*)(a1 + 376) |= v98 | v96;
          if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) == 3) {
            goto LABEL_297;
          }
          goto LABEL_295;
        }
        if (v71 - 4 < 2) {
          v72 = 2105344;
          goto LABEL_236;
        }
      }
      v72 = 7348224;
      goto LABEL_236;
    }
    switch (v69) {
    case 2: {
      v70 = *(_DWORD*)(a1 + 368) | 0x40;
      __asm__ volatile("" ::"r"(v70));
    }
      goto LABEL_221;
    case 3: {
      v70 = *(_DWORD*)(a1 + 368) | 0xC0;
      __asm__ volatile("" ::"r"(v70));
    }
      goto LABEL_221;
    case 4: {
      v70 = *(_DWORD*)(a1 + 368) | 0x100;
      __asm__ volatile("" ::"r"(v70));
    }
      goto LABEL_221;
    default:
      break;
    }
    return v6;
  default:
    return v6;
  }
}

#pragma GCC visibility pop
