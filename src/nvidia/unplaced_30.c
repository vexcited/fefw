#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_86eb0(int*);
__int64 CudaDriverRoutine_98190(__int64, unsigned int);
__int64 CudaDriverStub_89350(__int64, __int64, __int64, __int64, __int64);
__int64 cuda_driver_1da1b0(__int64, __int64*, __int64, _QWORD*);
unsigned int CudaDriverRoutine_874e0(_DWORD*, int, unsigned int,
                                     unsigned int, unsigned int);
unsigned int CudaDriverRoutine_8a640(__int64, _DWORD*);
extern _UNKNOWN* CudaDriverData_1411c10;
extern __int64 (*CudaDriverData_1432df8)(__int64*);
__int64 nvidia_1099b0(__int64* a1, __int64 a2, __int64 a3, __int64 a4, char a5);

__int64 nvidia_1099b0(__int64* a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  char v14;
  _DWORD* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v19[4];
    __int64 v20;
    __int64 v21;
    char gap48_[16];
    unsigned int v22;
    char gap68_[644];
    __int128 v23;
    _QWORD v24[3];
    char gap752_[4];
    int v25;
    __int64 v26;
    __int64 v27;
    int v28;
    char gap780_[4];
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int128 v34;
    __int128 v35;
    _QWORD v36[4];
    __int128 v37;
    __int128 v38;
    __int128 v39;
    __int128 v40;
    __int128 v41;
    __int128 v42;
    __int128 v43;
    __int128 v44;
    __int128 v45;
    __int128 v46;
    __int128 v47;
    __int128 v48;
    __int128 v49;
    __int128 v50;
    __int128 v51;
    __int128 v52;
    __int128 v53;
    __int128 v54;
    __int128 v55;
  } f_;
  __int64 v56;

  f_.v19[0] = a3;
  f_.v19[1] = a4;
  *(_QWORD*)&f_.v34 = 3;
  *((_QWORD*)&f_.v34 + 1) = f_.v19;
  f_.v33 = 0x200000001LL;
  CudaDriverData_1432df8(&f_.v33);
  if (DWORDn(f_.v33, sizeof(f_.v33) / 4 - 1) != 0) {
    return 999;
  }
  v9 = 0x40000904000202LL;
  **(_BYTE**)(*a1 + 16128) = 1;
  f_.v37 = (__typeof__(f_.v37)){0};
  f_.v38 = (__typeof__(f_.v38)){0};
  f_.v39 = (__typeof__(f_.v39)){0};
  f_.v40 = (__typeof__(f_.v40)){0};
  f_.v41 = (__typeof__(f_.v41)){0};
  f_.v42 = (__typeof__(f_.v42)){0};
  f_.v43 = (__typeof__(f_.v43)){0};
  f_.v44 = (__typeof__(f_.v44)){0};
  f_.v45 = (__typeof__(f_.v45)){0};
  f_.v46 = (__typeof__(f_.v46)){0};
  f_.v47 = (__typeof__(f_.v47)){0};
  f_.v48 = (__typeof__(f_.v48)){0};
  v56 = 0;
  f_.v34 = (__typeof__(f_.v34)){0};
  f_.v35 = (__typeof__(f_.v35)){0};
  memset(f_.v36, 0, sizeof(f_.v36));
  {
    v10 = *a1;
    __asm__ volatile("" ::"r"(v10));
  }
  f_.v49 = (__typeof__(f_.v49)){0};
  f_.v50 = (__typeof__(f_.v50)){0};
  v11 = f_.v27;
  f_.v55 = (__typeof__(f_.v55)){0};
  f_.v33 = 0x40000904000202LL;
  f_.v51 = (__typeof__(f_.v51)){0};
  f_.v52 = (__typeof__(f_.v52)){0};
  f_.v53 = (__typeof__(f_.v53)){0};
  f_.v54 = (__typeof__(f_.v54)){0};
  if (*(_DWORD*)(*(_QWORD*)(v10 + 64) + 21864LL) == 4) {
    v11 = f_.v27 - f_.v20;
    DWORD2(f_.v46) = f_.v28;
    if (f_.v28 != 0) {
      v9 = 0x40000904008202LL;
    }
    f_.v33 = v9;
  }
  *(_QWORD*)&f_.v46 = f_.v26;
  *(_QWORD*)&f_.v39 = f_.v20;
  result = CudaDriverRoutine_98190(v10, 0);
  if ((_DWORD)result == 0) {
    result = cuda_driver_1da1b0(*(_QWORD*)(*a1 + 80), &f_.v33, v11, &f_.v29);
    if ((_DWORD)result == 0) {
      if (f_.v29 == 0) {
        return 999;
      }
      result = 1;
      f_.v32 = 0;
      v12 = f_.v25 - 1;
      f_.v31 = 0;
      f_.v30 = f_.v21;
      if ((unsigned int)(f_.v25 - 1) <= 0x2F &&
          ((0xFFF001FFFFFFuLL >> v12) & 1) != 0) {
        {
          v13 = (__int64)*(&CudaDriverData_1411c10 + v12);
          __asm__ volatile("" ::"r"(v13));
        }
        LODWORD(f_.v32) = *(_DWORD*)(v13 + 4);
        DWORDn(f_.v31, sizeof(f_.v31) / 4 - 1) = *(_DWORD*)(v13 + 8);
        if ((a5 & 4) != 0) {
          {
            v15 = *(_DWORD**)(*a1 + 64);
            __asm__ volatile("" ::"r"(v15));
          }
          v16 = CudaDriverRoutine_86eb0((int*)&f_.v30);
          if (CudaDriverRoutine_874e0(v15, v16, f_.v30,
                                      DWORDn(f_.v30, sizeof(f_.v30) / 4 - 1),
                                      f_.v31)) {
            return 1;
          }
          v14 = BYTE4(f_.v32) | 2;
          DWORDn(f_.v32, sizeof(f_.v32) / 4 - 1) |= 2u;
        }
        else {
          v14 = 0;
        }
        if ((a5 & 8) != 0) {
          if (CudaDriverRoutine_8a640(*(_QWORD*)(*a1 + 64), &f_.v30)) {
            return 1;
          }
          v14 = BYTE4(f_.v32) | 8;
          DWORDn(f_.v32, sizeof(f_.v32) / 4 - 1) |= 8u;
        }
        {
          v17 = *a1;
          __asm__ volatile("" ::"r"(v17));
        }
        *(_OWORD*)&f_.v36[2] = (__typeof__(*(_OWORD*)&f_.v36[2])){0};
        *(_QWORD*)&f_.v34 = 0;
        qmemcpy(f_.v36, f_.v24, 24);
        f_.v33 = f_.v29;
        f_.v35 = f_.v23;
        *((_QWORD*)&f_.v34 + 1) = LODWORD(f_.v24[2]);
        if ((v14 & 5) != 0) {
          v18 = f_.v22;
        }
        else {
          v18 = 0;
        }
        *(_QWORD*)&f_.v37 = v18;
        LOBYTE(f_.v34) = 1;
        return CudaDriverStub_89350(a2, v17, (__int64)&f_.v30, (__int64)&f_.v33,
                                    0);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
