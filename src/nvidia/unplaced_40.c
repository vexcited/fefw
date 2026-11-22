#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverStub_116790(__int64*, __int64, signed int*);
__int64 cuda_driver_97bc0(__int64, __int64, unsigned int, int);
__int64 cuda_driver_9bad0(__int64*, __int64*);
__int64 cuda_driver_9bd90(__int64);
__int64 cuda_driver_c2ce0(_DWORD*, __int64, unsigned int, int);
unsigned __int8 CudaDriverStub_985a0(__int64);
extern _UNKNOWN* CudaDriverData_1422118;
extern __int64 (*CudaDriverData_1432000[])();
extern __int64 CudaDriverData_14348c0[];
__int64 nvidia_1b4ca0(__int64 a1, __int128* a2);

__int64 nvidia_1b4ca0(__int64 a1, __int128* a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  int* v8;
  _QWORD* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64* v19;
  int* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 result;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int128 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64** v36;
  unsigned int v37;
  struct {
    char gap0_[8];
    __int64 v38;
    __int64 v39;
    __int64 v40;
    _DWORD v41[4];
    char v42;
    char gap49_[7];
    __int64 v43;
    __int128 v44;
    __int64 v45;
    char gap88_[200];
    _QWORD v46[4];
    char gap320_[12];
    unsigned int v47;
  } f_;

  v2 = *(_QWORD*)a1;
  f_.v38 = 0;
  f_.v39 = 0;
  f_.v47 = 0;
  if (CudaDriverStub_985a0(v2)) {
    return 0;
  }
  if (*(_DWORD*)a2 != 1) {
    return 0;
  }
  f_.v46[0] = 0;
  f_.v46[1] = 0;
  v5 = cuda_driver_c2ce0(&f_.v47, (__int64)f_.v46, 4u, 1);
  v6 = f_.v47;
  if (f_.v47 == 0) {
    return 0;
  }
  if (f_.v47 == 1) {
    v7 = 0;
  }
  else {
    v7 = f_.v47 & 0xFFFFFFFE;
    v8 = (int*)f_.v46 + 1;
    v9 = f_.v41;
    v10 = v7;
    v11 = (char*)CudaDriverData_1422118 + 280;
    do {
      v12 = *(v8 - 1);
      v13 = *v8;
      v8 += 2;
      v10 -= 2;
      v14 = *(_QWORD*)&v11[8 * v13];
      *(v9 - 1) = *(_QWORD*)&v11[8 * v12];
      *v9 = v14;
      v9 += 2;
    } while (v10 != 0);
    if (v7 == v6) {
      goto LABEL_15;
    }
  }
  v15 = v7;
  v16 = ((_BYTE)v6 - (_BYTE)v7) & 7;
  if ((((_BYTE)v6 - (_BYTE)v7) & 7) != 0) {
    v15 = v7;
    v17 = CudaDriverData_1422118;
    do {
      --v16;
      *(_QWORD*)&f_.v41[2 * v15 - 2] = v17[*((int*)f_.v46 + v15) + 35];
      ++v15;
    } while (v16 != 0);
  }
  if ((unsigned __int64)(v7 - v6) <= 0xFFFFFFFFFFFFFFF8LL) {
    v18 = v6 - v15;
    v19 = &f_.v43 + v15;
    v20 = (int*)&f_.v46[2] + v15;
    do {
      v18 -= 8;
      v21 = CudaDriverData_14348c0[*(v20 - 3)];
      *(v19 - 4) = CudaDriverData_14348c0[*(v20 - 4)];
      *(v19 - 3) = v21;
      v22 = CudaDriverData_14348c0[*(v20 - 1)];
      *(v19 - 2) = CudaDriverData_14348c0[*(v20 - 2)];
      *(v19 - 1) = v22;
      v23 = CudaDriverData_14348c0[v20[1]];
      *v19 = CudaDriverData_14348c0[*v20];
      v19[1] = v23;
      v24 = v20[2];
      v25 = v20[3];
      v20 += 8;
      v26 = CudaDriverData_14348c0[v25];
      v19[2] = CudaDriverData_14348c0[v24];
      v19[3] = v26;
      v19 += 8;
    } while (v18 != 0);
  }
LABEL_15:
  if (v5 == 0) {
    v28 = 0;
    while (*(_QWORD*)(v2 + 64) != *(_QWORD*)&f_.v41[2 * v28 - 2]) {
      if (v6 == ++v28) {
        v29 = f_.v40;
        v30 = CudaDriverRoutine_12e510(1, 16);
        *(_QWORD*)(a1 + 104) = v30;
        if (v30 == 0) {
          return 2;
        }
        cuda_driver_97bc0((__int64)&f_.v40, v29, 0,
                          *(_DWORD*)(*(_QWORD*)a1 + 188LL));
        v31 = *(_QWORD*)a1;
        v32 = *a2;
        f_.v42 = 1;
        v33 = *(_DWORD*)(v31 + 192);
        f_.v43 = v31;
        v34 = *((_QWORD*)a2 + 2);
        f_.v44 = v32;
        f_.v41[3] = v33;
        f_.v45 = v34;
        result = cuda_driver_9bad0(&f_.v39, &f_.v40);
        if ((_DWORD)result != 0 ||
            (**(_QWORD**)(a1 + 104) = *(_QWORD*)(f_.v39 + 15984),
             v35 = *(_QWORD*)(a1 + 104),
             DWORDn(f_.v38, sizeof(f_.v38) / 4 - 1) = 4,
             (_DWORD)(result = CudaDriverStub_116790(
                          (__int64*)(v35 + 8), **(_QWORD**)v35,
                          (signed int*)&f_.v38)) != 0)) {
          v36 = *(__int64***)(a1 + 104);
          if (v36 != nullptr) {
            v37 = result;
            if (*v36 != nullptr) {
              cuda_driver_9bd90(**v36);
              **(_QWORD**)(a1 + 104) = 0;
              v36 = *(__int64***)(a1 + 104);
            }
            CudaDriverRoutine_12e340((__int64)v36);
            *(_QWORD*)(a1 + 104) = 0;
            return v37;
          }
        }
        else {
          *(_DWORD*)(a1 + 24) = 9;
          *(_QWORD*)(a1 + 48) = CudaDriverData_1432000;
        }
        return result;
      }
    }
  }
  return 0;
}

#pragma GCC visibility pop
