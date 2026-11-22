#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_7fa50(__int64, int, __int64, __int64, int, __int64,
                                char, __int64, unsigned int, int);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_ba080(__int64, __int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_c40e0(int*, __int64, __int64*, __int64*, char, char);
__int64 CudaDriverRoutine_f60f0(__int64, __int64, __int64, __int64, __int64,
                                __int64, unsigned int, __int64, unsigned int);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_b9660(__int64);
__int64 cuda_driver_1da1b0(__int64, __int64*, __int64, _QWORD*);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD);
__int64 nvidia_ed630(__int64, __int64, __int64, ...);
unsigned __int8 CudaDriverRoutine_1b76a0(__int64, __int64);
bool CudaDriverRoutine_d9f60(__int64, __int64, __int64);
unsigned __int8 cuda_debugger_api_7cff0();
unsigned __int8 cuda_driver_f7b60(int*, __int64);
extern _BYTE CudaDriverData_4398[8];
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN CudaDriverData_1432130;
extern int CudaDriverData_14358d0;
__int64 nvidia_a2b0(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_d9c50(__int64 a1, int* a2, __int64 a3, __int64 a4);
__int64 nvidia_fdc50(__int64 a1, __int64 a2, __int64 a3, __int64 a4);

__int64 nvidia_a2b0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned int v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  unsigned int v52;
  struct {
    _QWORD v53[2];
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    int v59;
    int v60;
    __int128 v61;
    __int128 v62;
  } v53_;
  struct {
    __int128 v63;
    __int128 v64;
  } v63_;

  result = 0;
  v5 = (__int64*)(*(_QWORD*)a3 + 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12)));
  v6 = *v5;
  if ((*v5 & 0xFFF) != 0x992) {
    return result;
  }
  v7 = v5[1];
  if ((v7 & 0x7000) != 0x3000) {
    return result;
  }
  v8 = *(_QWORD*)(a1 + 16104);
  v53_.v53[0] = 0;
  v11 = *(__int64**)(v8 + 3104);
  v12 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_ba080(v12, *(unsigned int*)(a1 + 188), v11[3], 64,
                                   (__int64)v53_.v53);
  if ((_DWORD)result != 0) {
    return result;
  }
  v14 = v53_.v53[0];
  ++*(_DWORD*)&CudaDriverData_4398[(_QWORD)CudaDriverData_1422118];
  v15 = CudaDriverStub_b9660(v11[2]);
  memcpy_plt(v11[4], v15);
  v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
      *(_QWORD*)(a2 + 96));
  v17 = *(unsigned int*)(a3 + 12);
  v18 = v16;
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 19448LL))(v14);
  v20 = v11[4];
  v21 = (unsigned __int64*)(v20 + (v11[10] & 0x7FFFFFFF0LL));
  v22 = v11[8] & 0xFFFFFFFFFFFF0FFFLL | (unsigned __int16)v6 & 0xF000;
  v11[8] = v22;
  *v21 = v22;
  v21[1] = v11[9];
  v23 = v11[6] & 0xFFFFFFFFFFFE7FFFLL | (((v7 >> 15) & 3) << 15);
  v24 = v11[5] & 0xFFFFFFFFFFFF0FFFLL | (unsigned __int16)v6 & 0xF000;
  v25 = v11[7];
  v11[5] = v24;
  v11[6] = v23;
  v26 = (unsigned __int64*)(v20 + (v25 & 0x7FFFFFFF0LL));
  *v26 = v24;
  v26[1] = v11[6];
  v27 = v19;
  v28 = v11[13];
  v29 = v18 + 16LL * (unsigned int)(v17 + 1) - v19 - v28 - 16;
  v30 = (unsigned __int64*)(v20 + (v28 & 0x7FFFFFFF0LL));
  v31 = v11[12] & 0xFFFFFFFFFFFC0000LL | HIDWORD(v29) & 0x3FFFF;
  v32 = v11[11] & 0x3FFFFFFFFLL |
        ((unsigned __int64)(unsigned int)(v29 >> 2) << 34);
  v11[11] = v32;
  v11[12] = v31;
  *v30 = v32;
  v30[1] = v11[12];
  v33 = CudaDriverData_14358d0 == 2 ? 8 : 0;
  result = CudaDriverRoutine_f60f0(a1, v14, 0, v11[4], v11[3],
                                   *(_QWORD*)(a1 + 96), 2u, 0, v33);
  if ((_DWORD)result != 0) {
    return result;
  }
  v34 = v18 + 16 * v17;
  v35 = v27 - v34 - 16;
  v36 = v11[12] & 0xFFFFFFFFFFFC0000LL | HIDWORD(v35) & 0x3FFFF;
  v37 = 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12));
  *(_QWORD*)(*(_QWORD*)a3 + v37) =
      (v35 << 32) & 0xFFFFFFFC00000000LL | v11[11] & 0x3FFFFFFFFLL;
  *(_QWORD*)(*(_QWORD*)a3 + v37 + 8) = v36;
  v63_.v63 = (__typeof__(v63_.v63)){0};
  v63_.v64 = (__typeof__(v63_.v64)){0};
  v53_.v62 = (__typeof__(v53_.v62)){0};
  v38 = *(_DWORD*)(a2 + 392);
  if (v38 <= 6) {
    v38 = 6;
  }
  *(_DWORD*)(a2 + 392) = v38;
  if (!cuda_debugger_api_7cff0()) {
    v39 = 16;
    if (*(_DWORD*)(a1 + 188) == 3) {
      v39 = 168;
    }
    v40 = 132;
    v41 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v39);
    if (*(_DWORD*)(a1 + 188) == 3) {
      v40 = 52;
    }
    if (*(_DWORD*)(v41 + v40) == 0) {
      v34 = 0;
      LODWORD(v44) = 0;
      v27 = 0;
      a2 = 0;
      if (!cuda_debugger_api_7cff0()) {
        goto LABEL_18;
      }
      goto LABEL_17;
    }
  }
  v42 = *(_QWORD*)(a1 + 16104);
  *(_QWORD*)&v63_.v63 = v6;
  *((_QWORD*)&v63_.v63 + 1) = v7;
  *(_QWORD*)&v63_.v64 = v27;
  v43 = *(_QWORD*)(v42 + 3104);
  *(_QWORD*)&v53_.v62 = a2;
  *((_QWORD*)&v53_.v62 + 1) = v18 + 16 * v17;
  v44 = *(_QWORD*)(v43 + 24);
  *((_QWORD*)&v63_.v64 + 1) = v44;
  if (cuda_debugger_api_7cff0()) {
  LABEL_17:
    v45 = CudaDriverStub_1db800(*(_QWORD*)(a2 + 96));
    CudaDriverRoutine_7fa50(a1, 64, v45, v27, v44, v34, 0, (__int64)&v63_.v63,
                            0x10u, 1);
  }
LABEL_18:
  v46 = *(_DWORD*)(a1 + 188);
  v47 = 16;
  if (v46 == 3) {
    v47 = 168;
  }
  v48 = 132;
  v49 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v47);
  if (v46 == 3) {
    v48 = 52;
  }
  if (*(_DWORD*)(v49 + v48) != 0) {
    v53_.v54 = *(_QWORD*)(v53_.v62 + 32);
    v53_.v55 = v53_.v62;
    v50 = *(_QWORD*)(v53_.v54 + 24);
    v53_.v56 = 0;
    v53_.v57 = *((_QWORD*)&v53_.v62 + 1);
    v53_.v61 = v63_.v63;
    v53_.v53[0] = 80;
    v53_.v53[1] = v50;
    v53_.v58 = v63_.v64;
    v53_.v59 = DWORD2(v63_.v64);
    v53_.v60 = 4;
    if (v46 == 3) {
      v51 = 21;
    }
    else {
      v51 = 2;
    }
    if (v46 == 3) {
      v52 = 13;
    }
    else {
      v52 = 33;
    }
    cuda_driver_20b420(v51, v52, (__int64)v53_.v53);
  }
  return 0;
}

__int64 nvidia_d9c50(__int64 a1, int* a2, __int64 a3, __int64 a4)
{
  int* v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 result;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  _DWORD v30[50];
  _DWORD v31[68];

  memcpy_plt(v30, a2);
  if (*(_DWORD*)(a1 + 4) != 0) {
    v8 = (int*)(a1 + 40);
    v9 = a1 + 536;
    v10 = (__int64*)(a1 + 736);
    v11 = (__int64*)(a1 + 744);
    v12 = *(_QWORD*)(a1 + 752);
    if (v12 != 0 && v12 != a4) {
    LABEL_27:
      nvidia_ed630(
          (__int64)"CUDA", 0,
          (__int64)"memcpy context cannot be changed during an update");
      return 5;
    }
  }
  else {
    v21 = *(_QWORD*)(a1 + 800);
    v8 = (int*)(v21 + 24);
    v9 = v21 + 496;
    v10 = (__int64*)(v21 + 696);
    v11 = (__int64*)(v21 + 704);
    v22 = *(_QWORD*)(v21 + 712);
    if (v22 != 0 && v22 != a4) {
      goto LABEL_27;
    }
  }
  v14 = *v11;
  v15 = *v10;
  result = memcmp_plt(v9, a3, 200);
  if ((_DWORD)result == 0) {
    return result;
  }
  if (*(_DWORD*)(v9 + 120) != *(_DWORD*)(a3 + 120)) {
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"memcpy dst operand memory type cannot be changed "
                          "during an update");
    return 5;
  }
  if (*(_DWORD*)(v9 + 32) != *(_DWORD*)(a3 + 32)) {
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"memcpy src operand memory type cannot be changed "
                          "during an update");
    return 5;
  }
  if (*(_QWORD*)(v9 + 184) != 1 || *(_QWORD*)(a3 + 184) != 1 ||
      *(_QWORD*)(v9 + 192) != 1 || *(_QWORD*)(a3 + 192) != 1) {
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"Multi-dimensional memcpy nodes cannot be updated");
    return 5;
  }
  v17 = *v8;
  if (*v8 == 2 && !CudaDriverRoutine_d9f60((__int64)v8, (__int64)v30, v15)) {
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"Replacement src operand is incompatible with "
                          "existing operand");
    return 5;
  }
  v20 = v8[50];
  v18 = (__int64)(v8 + 50);
  v19 = v20;
  if (v20 == 2 && !CudaDriverRoutine_d9f60(v18, (__int64)v31, v14)) {
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"Replacement dst operand is incompatible with "
                          "existing operand");
    return 5;
  }
  if ((v17 == 2 || v30[0] != 2) && (v19 == 2 || v31[0] != 2)) {
    v24 = *(_QWORD*)(a1 + 24);
    v25 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 1200));
    v26 = CudaDriverRoutine_c40e0(a2, v25, &v29, &v28, 1, *(_BYTE*)(v24 + 415));
    if (*(_BYTE*)(v24 + 415) != 0 && v26 == 801) {
      return 5;
    }
    if (v26 != 0) {
      return 1;
    }
    if (v25 != v29) {
      goto LABEL_42;
    }
    v27 = *(_DWORD*)(a1 + 4);
    if (v27 == 0 && v25 != v28) {
      goto LABEL_42;
    }
    if (v27 != 0) {
      if (v27 == 1 && *(_QWORD*)(a1 + 512) != v28) {
      LABEL_42:
        nvidia_ed630((__int64)"CUDA", 0,
                     (__int64)"Context for the memcpy cannot be changed during "
                              "an update");
        return 5;
      }
    }
    else {
      if (!CudaDriverRoutine_1b76a0(v25, (__int64)a2)) {
        nvidia_ed630((__int64)"CUDA", 0,
                     (__int64)"New parameters are not feasible for existing "
                              "memcpy node");
        return 5;
      }
      if (!cuda_driver_f7b60(a2, v29)) {
        cuda_driver_f7b60(a2 + 50, v28);
      }
    }
    return 0;
  }
  nvidia_ed630((__int64)"CUDA", 0,
               (__int64)"Replacement operand type is incompatible with "
                        "existing operand");
  return 5;
}

__int64 nvidia_fdc50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64* v7;
  __int64 v8;
  struct {
    unsigned __int64 v10;
    __int64 v11;
    char gap24_[104];
    __int64 v12;
    char gap136_[48];
    __int64 v13;
    __int64 v14;
    char gap200_[72];
    __int64 v15;
  } v10_;
  __int64 v16;

  v16 = 0;
  memcpy_plt(&v10_.v10, a4 + 240);
  v7 = *(__int64**)(a4 + 632);
  v10_.v13 = a4;
  v8 = *v7;
  v10_.v15 = a1;
  v10_.v12 = a2;
  v10_.v10 = v10_.v10 & 0xFFFEF107FFFFFFFFLL | 0x1041800000000LL;
  v10_.v11 |= 2uLL;
  v10_.v14 = v8;
  return cuda_driver_1da1b0((__int64)v7, (__int64*)&v10_.v10, a2, &v16);
}

#pragma GCC visibility pop
