#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CudaDriverRoutine_5f7d0(__int64, unsigned int, __int64);
__int64 CudaDriverRoutine_114150(__int64, __int64);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12f800(__int64, __int64);
unsigned int CudaDriverRoutine_1bbf50(__int64);
unsigned int CudaDriverRoutine_1d7600(__int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_205810(__int64, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_206060(__int64, __int64);
__int64 CudaDriverRoutine_20f580(__int64 result);
__int64 CudaDriverRoutine_5f050(__int64, __int64, char);
__int64 CudaDriverRoutine_7fa50(__int64, int, __int64, __int64, int, __int64,
                                char, __int64, unsigned int, int);
__int64 CudaDriverRoutine_8ab20(__int64, __int64, int, int);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_99f40(__int64, _DWORD*, int);
__int64 CudaDriverRoutine_ba080(__int64, __int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_bbd70(__int64 result, _QWORD*);
__int64 CudaDriverRoutine_ebf40(__int64, __int64, __int64 (*)(int*, __int64),
                                __int64, _BYTE*);
__int64 CudaDriverRoutine_f60f0(__int64, __int64, __int64, __int64, __int64,
                                __int64, unsigned int, __int64, unsigned int);
__int64 CudaDriverRoutine_f6230(__int64, __int64, __int64, __int64, __int64,
                                __int64, unsigned int, __int64);
unsigned __int8 CudaDriverRoutine_f6cd0(int*);
unsigned __int8 CudaDriverRoutine_f6d50(int*);
unsigned __int8 CudaDriverRoutine_f7c20(int*);
__int64 CudaDriverRoutine_f7f50(__int64);
__int64 CudaDriverRoutine_f8ed0(_DWORD*);
__int64 CudaDriverRoutine_f8f00(_DWORD*);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_108070(__int64);
unsigned int CudaDriverStub_112e40(_QWORD, _QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_5ab60(_QWORD, _QWORD);
__int64 CudaDriverStub_b9660(__int64);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_ec420(__int64, _DWORD*, __int64 (*)(_DWORD*, __int64),
                          __int64);
__int64 cuda_driver_fc8b0(__int64, _QWORD*, __int64, __int64, int, __int64*);
__int64 cuda_driver_fc9d0(__int64, __int64*);
__int64 cuda_driver_fd380(__int64 result, _QWORD*, _QWORD*, _QWORD*);
__int64 cuda_driver_misc_helpers_4bb0(__int64 result);
__int64 cuda_driver_misc_helpers_4be0(__int64 result, int);
__int64 cuda_driver_predicates_9af30(__int64, __int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nvidia_ed630(__int64, __int64, const char*, ...);
bool CudaDriverRoutine_11f740(unsigned int*, __int64, unsigned int);
unsigned __int8 CudaDriverRoutine_1bc430(__int64, int);
unsigned __int8 CudaDriverRoutine_86fe0(__int64);
unsigned __int8 CudaDriverRoutine_9ab40(__int64);
unsigned __int8 CudaDriverRoutine_9b670(__int64);
unsigned __int8 cuda_debugger_api_7cff0();
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_1432068;
extern _UNKNOWN** CudaDriverData_1423090;
extern _UNKNOWN CudaDriverData_1432130;
extern _UNKNOWN CudaDriverData_14347a8;
extern int CudaDriverData_14358d0;
void CudaDriverRoutine_4198();
void CudaDriverRoutine_4378();
void CudaDriverRoutine_43a8();
void CudaDriverRoutine_4484();
__int64 nvidia_ab40(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_df80(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_e7e0(__int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, unsigned int a7);
__int64 nvidia_ebb40(__int64 a1, _DWORD* a2, __int64 (*a3)(int*, __int64),
                     __int64 a4);
__int64 nvidia_1d6cc0(_QWORD* a1, __int64 a2, int a3, __int64 a4);
__int64 nvidia_211d90(unsigned int* a1);
__int64 nvidia_213a60(unsigned int* a1);
__int64 nvidia_213c20(unsigned int* a1);
__int64 nvidia_213de0(unsigned int* a1);
__int64 nvidia_21a3c0(__int64 a1, unsigned int* a2);
__int64 nvidia_21d1a0(__int64 a1, unsigned int* a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8);

__int64 nvidia_ab40(__int64 a1, __int64 a2, __int64 a3)
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
  unsigned __int64 v37;
  __int64 v38;
  unsigned int v39;
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
    char gap0_[16];
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
    __int128 v63;
    __int128 v64;
  } f_;

  result = 0;
  {
    v5 = (__int64*)(*(_QWORD*)a3 + 8LL * (unsigned int)(2 * *(int*)(a3 + 12)));
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = *v5;
    __asm__ volatile("" ::"r"(v6));
  }
  if ((*v5 & 0xFFF) != 0x992) {
    return result;
  }
  {
    v7 = v5[1];
    __asm__ volatile("" ::"r"(v7));
  }
  if ((v7 & 0x7000) != 0x3000) {
    return result;
  }
  {
    v8 = *(_QWORD*)(a1 + 16104);
    __asm__ volatile("" ::"r"(v8));
  }
  f_.v53[0] = 0;
  {
    v11 = *(__int64**)(v8 + 4512);
    __asm__ volatile("" ::"r"(v11));
  }
  v12 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_ba080(v12, *(unsigned int*)(a1 + 188), v11[8], 64,
                                   (__int64)f_.v53);
  if ((_DWORD)result != 0) {
    return result;
  }
  {
    v14 = f_.v53[0];
    __asm__ volatile("" ::"r"(v14));
  }
  ++*(_DWORD*)((char*)&CudaDriverRoutine_43a8 + (_QWORD)CudaDriverData_1422118);
  v15 = CudaDriverStub_b9660(v11[7]);
  memcpy_plt(v11[9], v15, v11[8]);
  v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
      *(_QWORD*)(a2 + 96));
  {
    v17 = *(unsigned int*)(a3 + 12);
    __asm__ volatile("" ::"r"(v17));
  }
  v18 = v16;
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 19448LL))(v14);
  {
    v20 = v11[9];
    __asm__ volatile("" ::"r"(v20));
  }
  {
    v21 = (unsigned __int64*)(v20 + (v11[15] & 0x7FFFFFFF0LL));
    __asm__ volatile("" ::"r"(v21));
  }
  {
    v22 = v11[13] & 0xFFFFFFFFFFFF0FFFLL | (unsigned __int16)v6 & 0xF000;
    __asm__ volatile("" ::"r"(v22));
  }
  v11[13] = v22;
  *v21 = v22;
  v21[1] = v11[14];
  {
    v23 = v11[11] & 0xFFFFFFFFFFFE7FFFLL | (((v7 >> 15) & 3) << 15);
    __asm__ volatile("" ::"r"(v23));
  }
  {
    v24 = v11[10] & 0xFFFFFFFFFFFF0FFFLL | (unsigned __int16)v6 & 0xF000;
    __asm__ volatile("" ::"r"(v24));
  }
  {
    v25 = v11[12];
    __asm__ volatile("" ::"r"(v25));
  }
  v11[10] = v24;
  v11[11] = v23;
  v26 = (unsigned __int64*)(v20 + (v25 & 0x7FFFFFFF0LL));
  *v26 = v24;
  v26[1] = v11[11];
  v27 = v19;
  {
    v28 = v11[18];
    __asm__ volatile("" ::"r"(v28));
  }
  v29 = v18 + 16LL * (unsigned int)(v17 + 1) - v19 - v28 - 16;
  v30 = (unsigned __int64*)(v20 + (v28 & 0x7FFFFFFF0LL));
  {
    v31 = v11[17] & 0xFFFFFFFFFFFC0000LL | (v29 >> 40) & 0x3FFFF;
    __asm__ volatile("" ::"r"(v31));
  }
  v32 = v11[16] & 0x3FF00FFFFLL |
        ((unsigned __int64)(unsigned __int8)(v29 >> 2) << 16) |
        ((unsigned __int64)(unsigned int)(v29 >> 10) << 34);
  v11[16] = v32;
  v11[17] = v31;
  *v30 = v32;
  v30[1] = v11[17];
  v33 = CudaDriverData_14358d0 == 2 ? 8 : 0;
  result = CudaDriverRoutine_f60f0(a1, v14, 0, v11[9], v11[8],
                                   *(_QWORD*)(a1 + 96), 2u, 0, v33);
  if ((_DWORD)result != 0) {
    return result;
  }
  v34 = v18 + 16 * v17;
  v35 = v27 - v34 - 16;
  {
    v36 = v11[17] & 0xFFFFFFFFFFFC0000LL | (v35 >> 40) & 0x3FFFF;
    __asm__ volatile("" ::"r"(v36));
  }
  v37 = ((_DWORD)v35 << 14) & 0xFF0000 |
        ((unsigned __int64)(unsigned int)(v35 >> 10) << 34);
  {
    v38 = 8LL * (unsigned int)(2 * *(int*)(a3 + 12));
    __asm__ volatile("" ::"r"(v38));
  }
  *(_QWORD*)(*(_QWORD*)a3 + v38) = v37 | v11[16] & 0x3FF00FFFFLL;
  *(_QWORD*)(*(_QWORD*)a3 + v38 + 8) = v36;
  f_.v63 = (__typeof__(f_.v63)){0};
  f_.v64 = (__typeof__(f_.v64)){0};
  f_.v62 = (__typeof__(f_.v62)){0};
  {
    v39 = *(_DWORD*)(a2 + 392);
    __asm__ volatile("" ::"r"(v39));
  }
  if (v39 <= 6) {
    v39 = 6;
  }
  *(_DWORD*)(a2 + 392) = v39;
  if (!cuda_debugger_api_7cff0()) {
    v40 = 16;
    if (*(_DWORD*)(a1 + 188) == 3) {
      v40 = 168;
    }
    v41 = 132;
    {
      v42 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v40);
      __asm__ volatile("" ::"r"(v42));
    }
    if (*(_DWORD*)(a1 + 188) == 3) {
      v41 = 52;
    }
    if (*(_DWORD*)(v42 + v41) == 0) {
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
  {
    v43 = *(_QWORD*)(a1 + 16104);
    __asm__ volatile("" ::"r"(v43));
  }
  *(_QWORD*)&f_.v63 = v6;
  *((_QWORD*)&f_.v63 + 1) = v7;
  *(_QWORD*)&f_.v62 = a2;
  *((_QWORD*)&f_.v62 + 1) = v18 + 16 * v17;
  {
    v44 = *(_QWORD*)(*(_QWORD*)(v43 + 4512) + 64LL);
    __asm__ volatile("" ::"r"(v44));
  }
  *(_QWORD*)&f_.v64 = v27;
  *((_QWORD*)&f_.v64 + 1) = v44;
  if (cuda_debugger_api_7cff0()) {
  LABEL_17:
    v45 = CudaDriverStub_1db800(*(_QWORD*)(a2 + 96));
    CudaDriverRoutine_7fa50(a1, 64, v45, v27, v44, v34, 0, (__int64)&f_.v63,
                            0x10u, 1);
  }
LABEL_18:
  {
    v46 = *(_DWORD*)(a1 + 188);
    __asm__ volatile("" ::"r"(v46));
  }
  v47 = 16;
  if (v46 == 3) {
    v47 = 168;
  }
  v48 = 132;
  {
    v49 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v47);
    __asm__ volatile("" ::"r"(v49));
  }
  if (v46 == 3) {
    v48 = 52;
  }
  if (*(_DWORD*)(v49 + v48) != 0) {
    f_.v54 = *(_QWORD*)(f_.v62 + 32);
    f_.v55 = f_.v62;
    {
      v50 = *(_QWORD*)(f_.v54 + 24);
      __asm__ volatile("" ::"r"(v50));
    }
    f_.v56 = 0;
    f_.v57 = *((_QWORD*)&f_.v62 + 1);
    f_.v61 = f_.v63;
    f_.v53[0] = 80;
    f_.v53[1] = v50;
    f_.v58 = f_.v64;
    f_.v59 = DWORD2(f_.v64);
    f_.v60 = 7;
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
    cuda_driver_20b420(v51, v52, (__int64)f_.v53);
  }
  return 0;
}

__int64 nvidia_df80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v10;
  __int64 v11;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  unsigned int v46;
  struct {
    char gap0_[16];
    _QWORD v47[2];
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    int v53;
    int v54;
    __int128 v55;
    __int128 v56;
    __int128 v57;
    __int128 v58;
  } f_;

  {
    v3 = (__int64*)(*(_QWORD*)a3 + 8LL * (unsigned int)(2 * *(int*)(a3 + 12)));
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v4 = *v3;
    __asm__ volatile("" ::"r"(v4));
  }
  if ((*v3 & 0x1FF) != 0x15D) {
    return 0;
  }
  {
    v5 = v3[1];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = *(_QWORD*)(a1 + 16104);
    __asm__ volatile("" ::"r"(v6));
  }
  f_.v47[0] = 0;
  {
    v10 = *(__int64**)(v6 + 3104);
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_ba080(v11, *(unsigned int*)(a1 + 188), v10[50], 64,
                                   (__int64)f_.v47);
  if ((_DWORD)result == 0) {
    atomic_fetch_add((atomic_uint* volatile)((char*)&CudaDriverRoutine_4378 +
                                             (_QWORD)CudaDriverData_1422118),
                     1u);
    {
      v14 = f_.v47[0];
      __asm__ volatile("" ::"r"(v14));
    }
    v15 = CudaDriverStub_b9660(v10[49]);
    memcpy_plt(v10[51], v15, v10[50]);
    v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
        *(_QWORD*)(a2 + 96));
    {
      v17 = *(unsigned int*)(a3 + 12);
      __asm__ volatile("" ::"r"(v17));
    }
    v18 = v16;
    v19 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 19448LL))(v14);
    {
      v20 = v10[54];
      __asm__ volatile("" ::"r"(v20));
    }
    {
      v21 = v10[51];
      __asm__ volatile("" ::"r"(v21));
    }
    v22 = v19;
    v23 = v18 + 16LL * (unsigned int)(v17 + 1) - v19 - v20 - 16;
    {
      v24 = v10[53] & 0xFFFFFFFFFFFC0000LL |
            DWORDn(v23, sizeof(v23) / 4 - 1) & 0x3FFFF;
      __asm__ volatile("" ::"r"(v24));
    }
    {
      v25 = v10[52] & 0x3FFFFFFFFLL |
            ((unsigned __int64)(unsigned int)(v23 >> 2) << 34);
      __asm__ volatile("" ::"r"(v25));
    }
    v26 = (unsigned __int64*)(v21 + (v20 & 0x7FFFFFFF0LL));
    v10[52] = v25;
    v10[53] = v24;
    *v26 = v25;
    v26[1] = v10[53];
    {
      v27 = v10[57];
      __asm__ volatile("" ::"r"(v27));
    }
    v10[55] = v4;
    v10[56] = v5 | 0x200000;
    v28 = (__int64*)(v21 + (v27 & 0x7FFFFFFF0LL));
    *v28 = v4;
    v28[1] = v10[56];
    result = CudaDriverRoutine_f6230(a1, v14, 0, v10[51], v10[50],
                                     *(_QWORD*)(a1 + 96), 2u, 0);
    if ((_DWORD)result == 0) {
      v29 = v18 + 16 * v17;
      v30 = v22 - v29 - 16;
      {
        v31 = v10[53] & 0xFFFFFFFFFFFC0000LL |
              DWORDn(v30, sizeof(v30) / 4 - 1) & 0x3FFFF;
        __asm__ volatile("" ::"r"(v31));
      }
      {
        v32 = (unsigned __int16)v4 & 0xF000 |
              ((unsigned __int64)(unsigned int)(v30 >> 2) << 34) |
              v10[52] & 0x3FFFF0FFFLL;
        __asm__ volatile("" ::"r"(v32));
      }
      {
        v33 = 8LL * (unsigned int)(2 * *(int*)(a3 + 12));
        __asm__ volatile("" ::"r"(v33));
      }
      *(_QWORD*)(*(_QWORD*)a3 + v33) = v32;
      *(_QWORD*)(*(_QWORD*)a3 + v33 + 8) = v31;
      f_.v57 = (__typeof__(f_.v57)){0};
      f_.v58 = (__typeof__(f_.v58)){0};
      f_.v56 = (__typeof__(f_.v56)){0};
      if (cuda_debugger_api_7cff0()) {
        goto LABEL_10;
      }
      v34 = 16;
      if (*(_DWORD*)(a1 + 188) == 3) {
        v34 = 168;
      }
      v35 = 132;
      {
        v36 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v34);
        __asm__ volatile("" ::"r"(v36));
      }
      if (*(_DWORD*)(a1 + 188) == 3) {
        v35 = 52;
      }
      if (*(_DWORD*)(v36 + v35) != 0) {
      LABEL_10:
        {
          v37 = *(_QWORD*)(a1 + 16104);
          __asm__ volatile("" ::"r"(v37));
        }
        *(_QWORD*)&f_.v57 = v4;
        *((_QWORD*)&f_.v57 + 1) = v5;
        *(_QWORD*)&f_.v56 = a2;
        *((_QWORD*)&f_.v56 + 1) = v18 + 16 * v17;
        {
          v38 = *(_QWORD*)(*(_QWORD*)(v37 + 3104) + 400LL);
          __asm__ volatile("" ::"r"(v38));
        }
        *(_QWORD*)&f_.v58 = v22;
        *((_QWORD*)&f_.v58 + 1) = v38;
        if (!cuda_debugger_api_7cff0()) {
        LABEL_12:
          {
            v40 = *(_DWORD*)(a1 + 188);
            __asm__ volatile("" ::"r"(v40));
          }
          v41 = 16;
          if (v40 == 3) {
            v41 = 168;
          }
          v42 = 132;
          {
            v43 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v41);
            __asm__ volatile("" ::"r"(v43));
          }
          if (v40 == 3) {
            v42 = 52;
          }
          if (*(_DWORD*)(v43 + v42) != 0) {
            f_.v48 = *(_QWORD*)(f_.v56 + 32);
            f_.v49 = f_.v56;
            {
              v44 = *(_QWORD*)(f_.v48 + 24);
              __asm__ volatile("" ::"r"(v44));
            }
            f_.v50 = 0;
            f_.v51 = *((_QWORD*)&f_.v56 + 1);
            f_.v55 = f_.v57;
            f_.v47[0] = 80;
            f_.v47[1] = v44;
            f_.v52 = f_.v58;
            f_.v53 = DWORD2(f_.v58);
            f_.v54 = 2;
            if (v40 == 3) {
              v45 = 21;
            }
            else {
              v45 = 2;
            }
            if (v40 == 3) {
              v46 = 13;
            }
            else {
              v46 = 33;
            }
            cuda_driver_20b420(v45, v46, (__int64)f_.v47);
          }
          return 0;
        }
      }
      else {
        v29 = 0;
        LODWORD(v38) = 0;
        v22 = 0;
        a2 = 0;
        if (!cuda_debugger_api_7cff0()) {
          goto LABEL_12;
        }
      }
      v39 = CudaDriverStub_1db800(*(_QWORD*)(a2 + 96));
      CudaDriverRoutine_7fa50(a1, 512, v39, v22, v38, v29, 0, (__int64)&f_.v57,
                              0x10u, 1);
      goto LABEL_12;
    }
  }
  return result;
}

__int64 nvidia_e7e0(__int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, unsigned int a7)
{
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _DWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _DWORD* v20;
  unsigned __int64 v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned __int64 v26;
  int v27;
  int v28;
  _DWORD* v29;
  int v30;
  int v31;
  int v32;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  char v38;
  unsigned __int64 v39;
  char v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned int v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  __int64 v49;
  char v50;
  unsigned __int64 v51;
  char v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned int v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  _DWORD* v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  unsigned int v80;
  int v81;
  _DWORD* v82;
  unsigned __int64 v83;
  _DWORD* v84;
  int v85;
  unsigned int v86;
  unsigned int v87;
  unsigned int v88;
  int v89;
  _BOOL4 v90;
  int v91;
  __int64 v92;
  unsigned int v93;
  unsigned int v94;
  int v95;
  unsigned int v96;
  __int64 v97;
  unsigned __int64 v98;
  int v99;
  _DWORD* v100;
  __int64 v101;
  _DWORD* v102;
  int v103;
  unsigned int v104;
  unsigned int v105;
  int v106;
  _BOOL4 v107;
  int v108;
  __int64 v109;
  unsigned int v110;
  unsigned int v111;
  int v112;
  unsigned int v113;
  _DWORD* v114;
  int v115;
  unsigned int v116;
  int v117;
  int v118;
  int v119;
  unsigned __int64 v120;
  unsigned int v121;
  __int64 v122;
  _BOOL4 v123;
  _BOOL4 v124;
  _DWORD* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  _DWORD* v129;
  bool v130;
  bool v131;
  __int64 v132;
  _DWORD* v133;
  __int64 v134;
  unsigned __int64 v135;
  _BOOL4 v137;
  int v138;
  int v139;
  int v140;
  int v142;
  char v143;
  char v144;
  __int64 v145;
  __int64 v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  __int64 v150;
  unsigned __int64 v151;
  int v154;
  __int64 v155;
  unsigned __int64 v156;
  unsigned __int64 v157;
  unsigned __int64 v158;
  char v159;
  char v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  unsigned __int64 v168;
  unsigned int v169;
  unsigned int v170;
  __int64 v172;
  int v173;
  __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  struct {
    char gap0_[248];
    _DWORD* v179;
    __int64 v180;
    char gap264_[160];
    unsigned __int64 v181;
    unsigned __int64 v182;
    unsigned __int64 v183;
    int v184;
    char gap452_[4];
    __int64 v185;
    char gap464_[160];
    unsigned __int64 v186;
    unsigned __int64 v187;
    unsigned __int64 v188;
    unsigned int v189;
    char gap652_[4];
    unsigned __int64 v190;
    unsigned __int64 v191;
    int v192;
    int v193;
    int v194;
    int v195;
    char gap688_[8];
    int v196;
    int v197;
    unsigned __int8 v198;
    unsigned __int8 v199;
    unsigned __int8 v200;
    unsigned __int8 v201;
    char v202;
  } f_;
  _DWORD* v203;

  if (*(_DWORD*)(a6 + 404) == 0 &&
      (*(_DWORD*)a6 == 0 ||
       (unsigned __int64)CudaDriverRoutine_f8f00((_DWORD*)a6) >> 31 == 0)) {
    v8 = (_DWORD*)(a6 + 200);
    if (*(_DWORD*)(a6 + 200) == 0 ||
        (unsigned __int64)CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) >> 31 ==
            0) {
      memcpy_plt((__int64)&f_.v179, a6, 0x1D8u);
      if (*(_DWORD*)a6 != 0) {
        v9 = CudaDriverRoutine_f8f00((_DWORD*)a6);
        if (CudaDriverRoutine_f8ed0((_DWORD*)a6) != 0) {
          v10 = CudaDriverRoutine_f8ed0((_DWORD*)a6);
        }
        else {
          v10 = 1;
        }
        v39 = 1;
        v41 = 1;
        v146 = CudaDriverRoutine_f8f00((_DWORD*)a6) * v10;
        v150 = -1;
        v164 = -1;
        if (*(_DWORD*)v8 != 0) {
        LABEL_54:
          v57 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200));
          if (CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200)) != 0) {
            v60 = CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200));
          }
          else {
            v60 = 1;
          }
          v61 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) * v60;
          v51 = 1;
          v53 = 1;
          v145 = v61;
          v149 = -1;
          v163 = -1;
          {
            v59 = *(_QWORD*)(a6 + 416);
            __asm__ volatile("" ::"r"(v59));
          }
          if (v59 == 0) {
            return 0;
          }
          goto LABEL_58;
        }
      }
      else {
        {
          v34 = *(_QWORD*)(a6 + 8);
          __asm__ volatile("" ::"r"(v34));
        }
        {
          v35 = *(_DWORD*)(v34 + 44);
          __asm__ volatile("" ::"r"(v35));
        }
        {
          v36 = *(_DWORD*)(v34 + 48);
          __asm__ volatile("" ::"r"(v36));
        }
        {
          v37 = *(unsigned int*)(v34 + 52);
          __asm__ volatile("" ::"r"(v37));
        }
        {
          v38 = v35 + *(int*)(v34 + 40);
          __asm__ volatile("" ::"r"(v38));
        }
        LOBYTE(v35) = v35 + 3;
        v39 = 1LL << v36;
        v40 = v38 + v36;
        v41 = 1LL << v35;
        v42 = 512LL << v40;
        {
          v43 = *(_DWORD*)(v34 + 56);
          __asm__ volatile("" ::"r"(v43));
        }
        v44 = (0x4000000uLL >> v40) / (unsigned int)v37;
        v9 = v42 * v37;
        v164 = v44 << v35;
        if ((unsigned int)v44 < v43) {
          v45 = 1;
        }
        else {
          v45 = (unsigned int)v44 / v43;
        }
        v150 = v45 << v36;
        if (CudaDriverRoutine_86fe0(v34)) {
          {
            v146 = *(_QWORD*)(v34 + 136);
            __asm__ volatile("" ::"r"(v146));
          }
          if (*(_DWORD*)v8 != 0) {
            goto LABEL_54;
          }
        }
        else {
          {
            v146 = v9 * *(unsigned int*)(v34 + 56);
            __asm__ volatile("" ::"r"(v146));
          }
          if (*(_DWORD*)v8 != 0) {
            goto LABEL_54;
          }
        }
      }
      {
        v46 = *(_QWORD*)(a6 + 208);
        __asm__ volatile("" ::"r"(v46));
      }
      {
        v47 = *(_DWORD*)(v46 + 44);
        __asm__ volatile("" ::"r"(v47));
      }
      {
        v48 = *(_DWORD*)(v46 + 48);
        __asm__ volatile("" ::"r"(v48));
      }
      {
        v49 = *(unsigned int*)(v46 + 52);
        __asm__ volatile("" ::"r"(v49));
      }
      {
        v50 = v47 + *(int*)(v46 + 40);
        __asm__ volatile("" ::"r"(v50));
      }
      LOBYTE(v47) = v47 + 3;
      v51 = 1LL << v48;
      v52 = v50 + v48;
      v53 = 1LL << v47;
      v54 = 512LL << v52;
      {
        v55 = *(_DWORD*)(v46 + 56);
        __asm__ volatile("" ::"r"(v55));
      }
      v56 = (0x4000000uLL >> v52) / (unsigned int)v49;
      v57 = v54 * v49;
      v163 = v56 << v47;
      if ((unsigned int)v56 < v55) {
        v58 = 1;
      }
      else {
        v58 = (unsigned int)v56 / v55;
      }
      v149 = v58 << v48;
      if (CudaDriverRoutine_86fe0(v46)) {
        {
          v145 = *(_QWORD*)(v46 + 136);
          __asm__ volatile("" ::"r"(v145));
        }
        {
          v59 = *(_QWORD*)(a6 + 416);
          __asm__ volatile("" ::"r"(v59));
        }
        if (v59 == 0) {
          return 0;
        }
      }
      else {
        {
          v145 = v57 * *(unsigned int*)(v46 + 56);
          __asm__ volatile("" ::"r"(v145));
        }
        {
          v59 = *(_QWORD*)(a6 + 416);
          __asm__ volatile("" ::"r"(v59));
        }
        if (v59 == 0) {
          return 0;
        }
      }
    LABEL_58:
      {
        v62 = *(_QWORD*)(a6 + 408);
        __asm__ volatile("" ::"r"(v62));
      }
      if (v62 == 0) {
        return 0;
      }
      v63 = 0;
      v161 = v57;
      v162 = v9;
      v143 = __clz((unsigned long long)(__rbit64(v51)));
      v144 = __clz((unsigned long long)(__rbit64(v39)));
      v147 = v51 - 1;
      v148 = v39 - 1;
      v159 = __clz((unsigned long long)(__rbit64(v53)));
      v160 = __clz((unsigned long long)(__rbit64(v41)));
      v157 = v53 - 1;
      v158 = v41 - 1;
      while (1) {
        {
          v64 = *(_QWORD*)(a6 + 192) + v63;
          __asm__ volatile("" ::"r"(v64));
        }
        {
          v65 = *(_QWORD*)(a6 + 392) + v63;
          __asm__ volatile("" ::"r"(v65));
        }
        f_.v183 = v64 & v148;
        v66 = v150 - (v64 & v148);
        f_.v188 = v65 & v147;
        if (v66 >= v149 - (v65 & v147)) {
          v66 = v149 - (v65 & v147);
        }
        if (v59 - v63 < v66) {
          v66 = v59 - v63;
        }
        f_.v191 = v66;
        if (v62 != 0) {
          break;
        }
      LABEL_61:
        v63 += v66;
        if (v63 >= v59) {
          return 0;
        }
      }
      v151 = v63;
      v67 = 0;
      v166 = a5 + (v64 >> v144) * v146;
      v165 = a4 + (v65 >> v143) * v145;
      v68 = (_DWORD*)*a1;
      while (1) {
        {
          v71 = *(_QWORD*)(a6 + 184);
          __asm__ volatile("" ::"r"(v71));
        }
        v72 = v62 - v67;
        v203 = v68;
        v73 = v71 + v67;
        {
          v74 = *(_QWORD*)(a6 + 384) + v67;
          __asm__ volatile("" ::"r"(v74));
        }
        f_.v182 = (v71 + v67) & v158;
        v75 = v164 - f_.v182;
        f_.v187 = v74 & v157;
        if (v164 - f_.v182 >= v163 - (v74 & v157)) {
          v75 = v163 - (v74 & v157);
        }
        if (v72 >= v75) {
          v72 = v75;
        }
        f_.v190 = v72;
        v173 = f_.v201;
        if ((_DWORD)f_.v179 != 0) {
          v76 = CudaDriverRoutine_f8f00(&f_.v179);
          v175 = v67;
          v177 = CudaDriverRoutine_f8ed0(&f_.v179) * v76;
          if (f_.v184 != 0) {
            goto LABEL_76;
          }
        }
        else {
          v175 = v67;
          {
            v177 = *(_QWORD*)(f_.v180 + 136);
            __asm__ volatile("" ::"r"(v177));
          }
          if (f_.v184 != 0) {
          LABEL_76:
            v77 = CudaDriverRoutine_f8f00(&f_.v184);
            v78 = CudaDriverRoutine_f8ed0(&f_.v184) * v77;
            v79 = v166 + (v73 >> v160) * v9;
            if ((_DWORD)f_.v179 != 0) {
              goto LABEL_77;
            }
            goto LABEL_80;
          }
        }
        {
          v78 = *(_QWORD*)(f_.v185 + 136);
          __asm__ volatile("" ::"r"(v78));
        }
        v79 = v166 + (v73 >> v160) * v9;
        if ((_DWORD)f_.v179 != 0) {
        LABEL_77:
          CudaDriverRoutine_f8f00(&f_.v179);
          *(_DWORD*)v68 = 536969476;
          v80 = 1;
          v81 = CudaDriverRoutine_f8f00(&f_.v179);
          v82 = v68;
          v83 = v79;
          goto LABEL_99;
        }
      LABEL_80:
        v84 = (_DWORD*)f_.v180;
        if ((*(_BYTE*)(f_.v180 + 32) & 0x40) != 0) {
          {
            v85 = *(_DWORD*)(f_.v180 + 52) << 6;
            __asm__ volatile("" ::"r"(v85));
          }
          v86 = f_.v181;
          if (f_.v201 != 0) {
          LABEL_82:
            {
              v87 = *(_DWORD*)(f_.v180 + 108);
              __asm__ volatile("" ::"r"(v87));
            }
            {
              v85 = *(_DWORD*)(f_.v180 + 12);
              __asm__ volatile("" ::"r"(v85));
            }
            v86 /= v87;
            goto LABEL_85;
          }
        }
        else {
          {
            v85 = *(_DWORD*)(f_.v180 + 112);
            __asm__ volatile("" ::"r"(v85));
          }
          v86 = f_.v181;
          if (f_.v201 != 0) {
            goto LABEL_82;
          }
        }
        v87 = 1;
      LABEL_85:
        v169 = v87;
        {
          v88 = (unsigned int)(*(int*)(f_.v180 + 16) + *(int*)(f_.v180 + 152) -
                               1) /
                *(_DWORD*)(f_.v180 + 152);
          __asm__ volatile("" ::"r"(v88));
        }
        v89 = *(_BYTE*)(f_.v180 + 40) & 0xF |
              (unsigned __int8)(16 * (*(_DWORD*)(f_.v180 + 44) & 0xF)) |
              ((*(_DWORD*)(f_.v180 + 48) & 0xF) << 8) | 0x1000;
        v90 = CudaDriverRoutine_86fe0(f_.v180);
        if (v88 <= 1) {
          v91 = 1;
        }
        else {
          v91 = v88;
        }
        if (v90) {
          v68[2] = v85;
          v68[3] = v91;
          v92 = 6;
          v68[4] = 1;
          v68[5] = 0;
          *(_DWORD*)v68 = 537231818;
          v68[1] = v89;
          if (f_.v181 >= 0x10000) {
            goto LABEL_90;
          }
        }
        else {
          v68[2] = v85;
          v68[3] = v91;
          v92 = 5;
          *(_DWORD*)v68 = 537166282;
          v68[1] = v89;
          {
            v96 = v84[5];
            __asm__ volatile("" ::"r"(v96));
          }
          if (v96 <= 1) {
            v96 = 1;
          }
          v68[4] = v96;
          if (f_.v181 >= 0x10000) {
          LABEL_90:
            if (f_.v201 != 0) {
              {
                v93 = v84[27];
                __asm__ volatile("" ::"r"(v93));
              }
              v86 *= v93;
              {
                v94 = v86 & ~(-1 << (v84[10] + 6));
                __asm__ volatile("" ::"r"(v94));
              }
              v95 = v94 / v93;
            }
            else {
              {
                v94 = v86 & ~(-1 << (v84[10] + 6));
                __asm__ volatile("" ::"r"(v94));
              }
              {
                v93 = v84[27];
                __asm__ volatile("" ::"r"(v93));
              }
              LOWORD(v95) = v94;
            }
            v97 = CudaDriverRoutine_8ab20((__int64)v84, v79, (v86 - v94) / v93,
                                          0);
            LOWORD(v86) = v95;
            v83 = v97;
            goto LABEL_98;
          }
        }
        v83 = v79;
      LABEL_98:
        {
          v82 = &v68[v92];
          __asm__ volatile("" ::"r"(v82));
        }
        v80 = v169;
        v68[v92] = 536969679;
        v81 = (unsigned __int16)v86 | ((unsigned __int16)f_.v182 << 16);
      LABEL_99:
        v82[1] = v81;
        v98 = v165 + (v74 >> v159) * v161;
        if (f_.v184 != 0) {
          CudaDriverRoutine_f8f00(&f_.v184);
          v82[2] = 536969477;
          v99 = CudaDriverRoutine_f8f00(&f_.v184);
          v100 = v82 + 4;
          v82[3] = v99;
          v101 = v98;
          goto LABEL_120;
        }
        v102 = (_DWORD*)f_.v185;
        if ((*(_BYTE*)(f_.v185 + 32) & 0x40) != 0) {
          {
            v103 = *(_DWORD*)(f_.v185 + 52) << 6;
            __asm__ volatile("" ::"r"(v103));
          }
          v104 = f_.v186;
          v156 = v83;
          if (f_.v201 != 0) {
          LABEL_103:
            v104 /= *(_DWORD*)(f_.v185 + 108);
            {
              v154 = *(_DWORD*)(f_.v185 + 12);
              __asm__ volatile("" ::"r"(v154));
            }
            {
              v170 = *(_DWORD*)(f_.v185 + 108);
              __asm__ volatile("" ::"r"(v170));
            }
            goto LABEL_106;
          }
        }
        else {
          {
            v103 = *(_DWORD*)(f_.v185 + 112);
            __asm__ volatile("" ::"r"(v103));
          }
          v104 = f_.v186;
          v156 = v83;
          if (f_.v201 != 0) {
            goto LABEL_103;
          }
        }
        v154 = v103;
        v170 = v80;
      LABEL_106:
        {
          v105 = (unsigned int)(*(int*)(f_.v185 + 16) + *(int*)(f_.v185 + 152) -
                                1) /
                 *(_DWORD*)(f_.v185 + 152);
          __asm__ volatile("" ::"r"(v105));
        }
        v106 = *(_BYTE*)(f_.v185 + 40) & 0xF |
               (unsigned __int8)(16 * (*(_DWORD*)(f_.v185 + 44) & 0xF)) |
               ((*(_DWORD*)(f_.v185 + 48) & 0xF) << 8) | 0x1000;
        v107 = CudaDriverRoutine_86fe0(f_.v185);
        if (v105 <= 1) {
          v108 = 1;
        }
        else {
          v108 = v105;
        }
        if (v107) {
          v82[2] = 537231811;
          v82[3] = v106;
          v82[4] = v154;
          v82[5] = v108;
          v109 = 32;
          v82[6] = 1;
          v82[7] = 0;
          v80 = v170;
          v83 = v156;
          if (f_.v186 >= 0x10000) {
            goto LABEL_111;
          }
        }
        else {
          v82[2] = 537166275;
          v82[3] = v106;
          v82[4] = v154;
          v82[5] = v108;
          v109 = 28;
          {
            v113 = v102[5];
            __asm__ volatile("" ::"r"(v113));
          }
          if (v113 <= 1) {
            v113 = 1;
          }
          v82[6] = v113;
          v80 = v170;
          v83 = v156;
          if (f_.v186 >= 0x10000) {
          LABEL_111:
            v155 = v109;
            if (f_.v201 != 0) {
              {
                v110 = v102[27];
                __asm__ volatile("" ::"r"(v110));
              }
              v104 *= v110;
              {
                v111 = v104 & ~(-1 << (v102[10] + 6));
                __asm__ volatile("" ::"r"(v111));
              }
              v112 = v111 / v110;
            }
            else {
              {
                v111 = v104 & ~(-1 << (v102[10] + 6));
                __asm__ volatile("" ::"r"(v111));
              }
              {
                v110 = v102[27];
                __asm__ volatile("" ::"r"(v110));
              }
              LOWORD(v112) = v111;
            }
            v101 = CudaDriverRoutine_8ab20((__int64)v102, v98,
                                           (v104 - v111) / v110, 0);
            LOWORD(v104) = v112;
            v80 = v170;
            v109 = v155;
            goto LABEL_119;
          }
        }
        v101 = v98;
      LABEL_119:
        v114 = (_DWORD*)((char*)v82 + v109);
        *(_DWORD*)v114 = 536969672;
        v114[1] = (unsigned __int16)v104 | ((unsigned __int16)f_.v187 << 16);
        v100 = (_DWORD*)((char*)v82 + v109 + 8);
      LABEL_120:
        *(_DWORD*)v100 = 537035014;
        v100[1] = f_.v189 / v80;
        v100[2] = f_.v190;
        v100[3] = 537166080;
        v100[4] = DWORDn(v83, sizeof(v83) / 4 - 1) & 0x1FFFF;
        v100[5] = v83;
        v100[6] = DWORDn(v101, sizeof(v101) / 4 - 1) & 0x1FFFF;
        v100[7] = v101;
        if (f_.v201 != 0) {
          v115 = f_.v192 & 7 | (unsigned __int8)(16 * (f_.v193 & 7)) |
                 ((f_.v194 & 7) << 8) | ((f_.v195 & 7) << 12) |
                 ((f_.v200 << 16) - 0x10000) & 0x30000 |
                 ((f_.v198 << 20) - 0x100000) & 0x300000 |
                 ((f_.v199 << 24) - 0x1000000) & 0x3000000;
          v100[8] = 537100736;
          v100[9] = f_.v196;
          v100[10] = f_.v197;
          v100[11] = v115;
          v69 = (__int64)(v100 + 12);
        }
        else {
          v69 = (__int64)(v100 + 8);
        }
        v116 = a7;
        v203 = (_DWORD*)v69;
        if ((_DWORD)f_.v179 != 0) {
          v117 = 128;
        }
        else {
          v117 = 0;
        }
        if (f_.v184 != 0) {
          v117 |= 0x100u;
        }
        v118 = v117 | 0x400;
        if (v173 == 0) {
          v118 = v117;
        }
        v70 = f_.v190;
        if (f_.v190 <= 1) {
          v119 = v118;
        }
        else {
          v119 = v118 | 0x200;
        }
        if (f_.v191 != 0) {
          v120 = 0;
          v121 = 0;
          while (1) {
            v122 = (__int64)v203;
            if ((_DWORD)f_.v179 != 0) {
              v123 = true;
              if (f_.v184 != 0) {
                goto LABEL_139;
              }
            }
            else {
              v130 = CudaDriverRoutine_86fe0(f_.v180);
              v116 = a7;
              v123 = v130;
              if (f_.v184 != 0) {
              LABEL_139:
                v124 = true;
                v125 = v203;
                v126 = DWORDn(v79, sizeof(v79) / 4 - 1) & 0x1FFFF;
                v127 = DWORDn(v98, sizeof(v98) / 4 - 1) & 0x1FFFF;
                if (!v123) {
                  goto LABEL_143;
                }
                goto LABEL_140;
              }
            }
            v131 = CudaDriverRoutine_86fe0(f_.v185);
            v116 = a7;
            v124 = v131;
            v125 = v203;
            v126 = DWORDn(v79, sizeof(v79) / 4 - 1) & 0x1FFFF;
            v127 = DWORDn(v98, sizeof(v98) / 4 - 1) & 0x1FFFF;
            if (!v123 | !v124) {
            LABEL_143:
              if (v123) {
                *(_DWORD*)v125 = 537035008;
                v203[1] = v126;
                v132 = (__int64)v203;
                v203[2] = v79;
                v133 = (_DWORD*)(v132 + 12);
                v79 += v177;
                v203 = v133;
                if (!v124) {
                  goto LABEL_145;
                }
              LABEL_147:
                *(_DWORD*)v133 = 537035010;
                v133[1] = v127;
                v134 = (__int64)v203;
                v203[2] = v98;
                v129 = (_DWORD*)(v134 + 12);
                v98 += v78;
              }
              else {
                *(_DWORD*)v125 = 536969678;
                v203[1] = v121 + f_.v183;
                v133 = v203 + 2;
                v203 += 2;
                if (v124) {
                  goto LABEL_147;
                }
              LABEL_145:
                *(_DWORD*)v133 = 536969671;
                v133[1] = v121 + f_.v188;
                v129 = v203 + 2;
              }
              v203 = v129;
              goto LABEL_149;
            }
          LABEL_140:
            *(_DWORD*)v125 = 537166080;
            v203[1] = v126;
            v128 = (__int64)v203;
            v203[2] = v79;
            *(_DWORD*)(v128 + 12) = v127;
            *(_DWORD*)(v128 + 16) = v98;
            v129 = (_DWORD*)(v128 + 20);
            v98 += v78;
            v203 = v129;
            v79 += v177;
          LABEL_149:
            v135 = v122 - (_QWORD)v68 - 32688;
            v137 = v135 < 0xFFFFFFFFFFFF8000LL | f_.v191 - 1 == v120;
            if (v116 != 0 || !v137 ||
                (*((_BYTE*)&CudaDriverRoutine_4198 +
                   (_QWORD)CudaDriverData_1422118) &
                 1) != 0) {
              v138 = 0;
            }
            else {
              v138 = 4;
            }
            v139 = v138 | v119;
            if (f_.v202 != 0) {
              v140 = 2;
            }
            else {
              v140 = 1;
            }
            if (v121 == 0) {
              v140 = 2;
            }
            *(_DWORD*)v129 = 536969408;
            v129[1] = v139 | v140;
            v66 = f_.v191;
            v203 += 2;
            if (v135 < 0xFFFFFFFFFFFF8000LL | f_.v191 - 1 == v120) {
              v142 = v116;
              if ((unsigned __int8)cuda_driver_misc_helpers_4bb0(v116) != 0) {
                v203 =
                    (_DWORD*)cuda_driver_misc_helpers_4be0((__int64)v203, v142);
              }
              v66 = f_.v191;
              if (v135 >= 0xFFFFFFFFFFFF8000LL) {
                v116 = a7;
              }
              else {
                v116 = a7;
                if (f_.v191 - 1 > v120) {
                  CudaDriverStub_5ab60(a3, &v203);
                  v116 = a7;
                  v68 = v203;
                  v66 = f_.v191;
                }
              }
            }
            v120 = ++v121;
            if (v66 <= v121) {
              v69 = (__int64)v203;
              v70 = f_.v190;
              goto LABEL_69;
            }
          }
        }
        v66 = 0;
      LABEL_69:
        v9 = v162;
        v68 = (_DWORD*)v69;
        v67 = v70 + v175;
        *a1 = v69;
        {
          v62 = *(_QWORD*)(a6 + 408);
          __asm__ volatile("" ::"r"(v62));
        }
        if (v67 >= v62) {
          {
            v59 = *(_QWORD*)(a6 + 416);
            __asm__ volatile("" ::"r"(v59));
          }
          v63 = v151;
          goto LABEL_61;
        }
      }
    }
  }
  {
    v11 = *(_QWORD*)(a6 + 416);
    __asm__ volatile("" ::"r"(v11));
  }
  v12 = (_DWORD*)*a1;
  f_.v179 = (_DWORD*)*a1;
  if (v11 == 0) {
    goto LABEL_39;
  }
  v168 = 0;
  do {
    v13 = CudaDriverRoutine_f8f00((_DWORD*)a6);
    v14 = CudaDriverRoutine_f8ed0((_DWORD*)a6);
    v15 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200));
    v16 = CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200));
    if (*(_QWORD*)(a6 + 408) != 0) {
      v17 = 0;
      v18 = a4 + v15 * v168 * v16;
      v19 = a5 + v13 * v168 * v14;
      do {
        v176 = v17;
        if ((v17 | v168) != 0) {
          CudaDriverStub_5ab60(a3, &f_.v179);
        }
        v20 = f_.v179;
        {
          v21 = *(_QWORD*)(a6 + 400);
          __asm__ volatile("" ::"r"(v21));
        }
        {
          v22 = *(unsigned __int8*)(a6 + 459);
          __asm__ volatile("" ::"r"(v22));
        }
        v172 = v19;
        v174 = v18;
        v23 = v21;
        do {
          if (v23 >= 0xFFFFFFFF) {
            v24 = 0xFFFFFFFFLL;
          }
          else {
            v24 = v23;
          }
          if (v22 != 0) {
            v25 = (unsigned int)v24 /
                  (*(unsigned __int8*)(a6 + 456) *
                   (unsigned int)*(unsigned __int8*)(a6 + 458));
            __asm__ volatile("" ::"r"(v25));
          }
          else {
            v25 = v24;
          }
          v20[6] = v25;
          *(_DWORD*)v20 = 537166080;
          v20[1] = DWORDn(v19, sizeof(v19) / 4 - 1) & 0x1FFFF;
          v20[2] = v19;
          v20[3] = DWORDn(v18, sizeof(v18) / 4 - 1) & 0x1FFFF;
          v20[4] = v18;
          v20[5] = 536969478;
          v26 = DWORDn(v23, sizeof(v23) / 4 - 1);
          if (a7 != 0 || v26 != 0 ||
              (*((_BYTE*)&CudaDriverRoutine_4198 +
                 (_QWORD)CudaDriverData_1422118) &
               1) != 0) {
            v27 = 0;
            if (v22 == 0) {
            LABEL_29:
              v28 = 0;
              v29 = v20 + 7;
              goto LABEL_32;
            }
          }
          else {
            v27 = 4;
            if (v22 == 0) {
              goto LABEL_29;
            }
          }
          v30 = *(_BYTE*)(a6 + 424) & 7 |
                (unsigned __int8)(16 * (*(_BYTE*)(a6 + 428) & 7)) |
                ((*(_DWORD*)(a6 + 432) & 7) << 8) |
                ((*(_DWORD*)(a6 + 436) & 7) << 12) |
                ((*(unsigned __int8*)(a6 + 458) << 16) - 0x10000) & 0x30000 |
                ((*(unsigned __int8*)(a6 + 456) << 20) - 0x100000) & 0x300000 |
                ((*(unsigned __int8*)(a6 + 457) << 24) - 0x1000000) & 0x3000000;
          v20[7] = 537100736;
          v20[8] = *(_DWORD*)(a6 + 448);
          v20[9] = *(_DWORD*)(a6 + 452);
          v20[10] = v30;
          v29 = v20 + 11;
          v28 = 1024;
        LABEL_32:
          v20 = v29 + 2;
          v31 = v27 | v28;
          if (v23 == v21) {
            v32 = 386;
          }
          else {
            v32 = 385;
          }
          *(_DWORD*)v29 = 536969408;
          v29[1] = v31 | v32;
          if (v26 == 0 &&
              (unsigned __int8)cuda_driver_misc_helpers_4bb0(a7) != 0) {
            v20 = (_DWORD*)cuda_driver_misc_helpers_4be0((__int64)v20, a7);
          }
          v18 += v24;
          v19 += v24;
          v23 -= v24;
        } while (v23 != 0);
        f_.v179 = v20;
        v19 = CudaDriverRoutine_f8f00((_DWORD*)a6) + v172;
        v18 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) + v174;
        v17 = v176 + 1;
      } while ((unsigned __int64)(v176 + 1) < *(_QWORD*)(a6 + 408));
    }
    ++v168;
  } while (v168 < *(_QWORD*)(a6 + 416));
  v12 = f_.v179;
LABEL_39:
  *a1 = (__int64)v12;
  return 0;
}

__int64 nvidia_ebb40(__int64 a1, _DWORD* a2, __int64 (*a3)(int*, __int64),
                     __int64 a4)
{
  int v8;
  int v9;
  __int64* v10;
  __int64 result;
  __int16 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  _DWORD* v22;
  int v23;
  unsigned int v24;
  int v25;
  __int64 v26;
  struct {
    __int64 v27;
    _DWORD v28[2];
    char gap16_[1];
    int v29;
    char gap21_[3];
    int v30;
    _DWORD v31[64];
    unsigned int v32;
    _DWORD v33[68];
    __int64 v34;
    int v35;
    char gap572_[4];
    _DWORD* v36;
    int v37;
    char gap588_[4];
    __int64 v38;
    __int64 v39;
    char gap608_[24];
    _BYTE v40[4];
    int v41;
  } f_;

  f_.v40[0] = 0;
  if (a2 != nullptr && *(_DWORD*)(a1 + 21864) != a2[5466]) {
    return 0;
  }
  if (a2 == (_DWORD*)a1) {
    if ((*(_WORD*)((_BYTE*)((_UNKNOWN*)0x1859LL) +
                   (_QWORD)CudaDriverData_1422118) &
         0x200) != 0 &&
        ((unsigned __int8)cuda_driver_predicates_9af30(a1, a1) == 0 ||
         !CudaDriverRoutine_9b670(a1)) &&
        *(_DWORD*)(a1 + 21864) != 1) {
      return 0;
    }
    CudaDriverRoutine_12f800(a1, (__int64)a2);
  LABEL_13:
    f_.v38 = 0;
    f_.v39 = 0;
    if (a2 != nullptr) {
      result = (*(__int64 (**)(__int64, __int64, __int64))(a1 + 21080))(
          (__int64)a2, a1, (__int64)&f_.v38);
      if ((_DWORD)result != 0) {
        return result;
      }
      if (BYTE4(f_.v38) == 0) {
      LABEL_28:
        result = CudaDriverRoutine_ebf40(a1, (__int64)a2, a3, a4, f_.v40);
        if ((_DWORD)result != 0) {
          return result;
        }
        if (f_.v40[0] == 0 && (unsigned int)(*(int*)(a1 + 3204) - 1) <= 4) {
          return cuda_driver_ec420(a1, a2, a3, a4);
        }
        return 0;
      }
    }
    else if ((*(_BYTE*)(a1 + 17272) & 1) != 0) {
      BYTE5(f_.v38) = 1;
    }
    v12 = *(_WORD*)(a1 + 16848);
    f_.v41 = 0;
    if ((v12 & 2) == 0) {
      result = (*(__int64 (**)(__int64, __int64))(a1 + 21272))(a1, a1 + 16820);
      if ((_DWORD)result != 0) {
        return result;
      }
      *(_WORD*)(a1 + 16848) |= 2u;
    }
    if (*(_BYTE*)(a1 + 16820) == 0) {
      goto LABEL_28;
    }
    memset_plt((__int64)f_.v28, 0, 0x248u);
    v13 = *(_DWORD*)(a1 + 16832);
    v14 = 16;
    f_.v34 = a1;
    f_.v35 = 16;
    if (v13 != 1) {
      if (v13 == 2) {
        v14 = 32;
        goto LABEL_34;
      }
      if (v13 != 3) {
      LABEL_35:
        f_.v28[0] = *(int*)(a1 + 16824) * *(int*)(a1 + 16828);
        LOWORD(f_.v29) = WORD2(f_.v38);
        f_.v27 = 0x100000040LL;
        f_.v30 = 0;
        f_.v32 = 0;
        BYTE2(f_.v29) = (*(_WORD*)((_BYTE*)&CudaDriverRoutine_4484 +
                                   (_QWORD)CudaDriverData_1422118) &
                         0x200) == 0;
        HIBYTE(f_.v29) = 1;
        if (a2 != nullptr) {
          if (*(_DWORD*)(a1 + 21864) != a2[5466]) {
            LOBYTE(f_.v29) = 0;
          }
          v15 = *(_DWORD*)(a1 + 14472);
          if (v15 != 0) {
            v17 = f_.v39;
            v16 = DWORDn(f_.v39, sizeof(f_.v39) / 4 - 1);
            if (v15 == 1) {
              v18 = 0;
              v19 = 0;
            }
            else {
              v18 = 0;
              v19 = 0;
              v22 = (_DWORD*)(a1 + 13204);
              do {
                v23 = 1 << *(v22 - 5);
                if ((v23 & v17) != 0) {
                  f_.v31[v18++] = v19;
                }
                if ((v23 & v16) != 0) {
                  v24 = f_.v32 + 1;
                  f_.v33[f_.v32] = v19;
                  f_.v32 = v24;
                }
                v25 = 1 << *(_DWORD*)v22;
                if ((v25 & v17) != 0) {
                  f_.v31[v18++] = v19 + 1;
                }
                if ((v25 & v16) != 0) {
                  v26 = f_.v32++;
                  f_.v33[v26] = v19 + 1;
                }
                v19 += 2;
                v22 += 10;
              } while ((v15 & 0xFFFFFFFE) != v19);
            }
            if ((v15 & 1) != 0) {
              v20 = 1 << *(_DWORD*)(a1 + 13184 + 20 * v19);
              if ((v20 & v17) != 0) {
                f_.v31[v18++] = v19;
              }
              if ((v20 & v16) != 0) {
                v21 = f_.v32 + 1;
                f_.v33[f_.v32] = v19;
                f_.v32 = v21;
              }
            }
            f_.v30 = v18;
          }
        }
        v10 = (__int64*)&f_.v41;
        goto LABEL_48;
      }
      v14 = 34;
    }
    f_.v36 = a2;
  LABEL_34:
    f_.v37 = v14;
    goto LABEL_35;
  }
  if ((unsigned __int8)CudaDriverRoutine_12f800(a1, (__int64)a2) == 0) {
    goto LABEL_13;
  }
  LODWORD(f_.v38) = 0;
  memset_plt((__int64)f_.v28, 0, 0x248u);
  f_.v34 = a1;
  f_.v36 = a2;
  v8 = a2[5466];
  f_.v35 = 16;
  f_.v37 = 16;
  f_.v28[0] = a2[1044];
  f_.v29 = 16843009;
  v9 = *(_DWORD*)(a1 + 21864);
  f_.v27 = 0x100000080LL;
  if (v9 != v8) {
    LOBYTE(f_.v29) = 0;
  }
  v10 = &f_.v38;
LABEL_48:
  *(_QWORD*)&f_.v33[64] = v10;
  *(_QWORD*)&f_.v33[66] = v10;
  return a3((int*)&f_.v27, a4);
}

__int64 nvidia_1d6cc0(_QWORD* a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7;
  void* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  unsigned __int64 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  __int128 v43;
  __int128 v44;
  __int128 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  bool v52;
  int v53;
  __int128 v54;
  __int128 v55;
  unsigned int v56;
  _QWORD* v57;
  __int64 v58;
  __int128 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  __int128* v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v81[24];
  __int64 v82;
  int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  int v87;
  unsigned __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  __int128 v92;
  __int128 v93;
  __int128 v94;
  __int128 v95;
  __int128 v96;
  __int128 v97;
  __int128 v98;
  __int128 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  struct {
    char gap0_[672];
    _QWORD v104[12];
    __int128 v105;
    __int128 v106;
    __int128 v107;
    __int128 v108;
    __int128 v109;
    __int128 v110;
    _QWORD v111[34];
    __int64 v112;
    char gap1144_[8];
    __int128 v113;
    __int128 v114;
    __int128 v115;
    __int128 v116;
    __int128 v117;
    __int128 v118;
    __int128 v119;
    __int128 v120;
    __int128 v121;
    __int128 v122;
    __int128 v123;
    _QWORD v124[12];
    __int128 v125;
    __int128 v126;
    __int128 v127;
    __int128 v128;
    __int128 v129;
    __int128 v130;
    __int64 v131;
    char gap1528_[952];
    _QWORD v133[2];
    __int64 v134;
    __int64 v135;
    __int64 v136;
  } f_;
  _QWORD v132[118];

  f_.v134 = 0;
  f_.v135 = 0;
  f_.v136 = 0;
  f_.v133[0] = 0;
  f_.v133[1] = 0;
  memset_plt((__int64)v132, 0, 0x3B0u);
  v7 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 16));
  v8 = &CudaDriverData_14347a8;
  if ((unsigned int)CudaDriverData_14358d0 < 2) {
    nvidia_ed630((__int64)"CUDA", 0,
                 "Secure staged copies are only supported in HW-enforced "
                 "confidential computing mode\n");
    return 801;
  }
  if (*((_BYTE*)a1 + 459) != 0) {
    nvidia_ed630(
        (__int64)"CUDA", 0,
        "Component remapping is not supported for secure staged copies\n");
    return 801;
  }
  if (a3 == 3) {
    nvidia_ed630((__int64)"CUDA", 0,
                 "Fully asynchronous secure staged copies are not supported\n");
    return 801;
  }
  v9 = v7;
  if (!CudaDriverRoutine_9ab40(*(_QWORD*)(v7 + 64))) {
    nvidia_ed630(
        (__int64)"CUDA", 0,
        "Secure staged copies are not supported for non-IO-coherent devices\n");
    return 801;
  }
  if (*(_DWORD*)a1 == 0 ||
      (v69 = (__int128*)(a1 + 25), *((_DWORD*)a1 + 50) == 0)) {
    nvidia_ed630((__int64)"CUDA", 0,
                 "Staged secure copies do not support block-linear layout "
                 "(CU_MEMORYTYPE_ARRAY)\n");
    return 801;
  }
  v68 = *(_QWORD*)(v9 + 1336);
  CudaDriverStub_107f90(v68 + 168);
  v10 = a1[52];
  if (v10 != 0 && a1[51] != 0) {
    v11 = 0;
    v77 = v9;
    v75 = a2;
    v66 = a1;
    v70 = 0;
    v12 = a1[51];
    v65 = 1;
    do {
      if (v12 != 0) {
        v19 = a1[50];
        if (v19 != 0) {
          v67 = 0;
          do {
          LABEL_27:
            v79 = v19;
            v20 = a1[50] - v19;
            v21 = (*(_DWORD*)(v68 + 184) & 1) == 0;
            *(_DWORD*)(v68 + 184) = v21;
            v22 = v68 + 192 + (v21 << 6);
            if (f_.v133[v11] != 0) {
              v17 = CudaDriverRoutine_1d7600(v22, a2, (__int64)&v132[59 * v11],
                                             a4);
              if (v17 != 0) {
                goto LABEL_54;
              }
              f_.v133[v11] = 0;
              v65 = v11;
            }
            else {
              v23 = CudaDriverRoutine_114150(v9, a2);
              v24 = CudaDriverRoutine_98340(v9);
              if (CudaDriverRoutine_1bc430(v24, v23)) {
                f_.v134 = CudaDriverRoutine_5f050(
                    *(_QWORD*)(*(_QWORD*)(a2 + 16) + 72LL), a2, 1);
                LODWORD(f_.v136) = 0;
              }
              v17 = CudaDriverRoutine_1bbf50(*(_QWORD*)(v22 + 8));
              if (v17 != 0) {
                goto LABEL_54;
              }
            }
            v74 = v11;
            v25 = *(unsigned int*)(*(_QWORD*)(v9 + 1336) + 8LL);
            if (*((_BYTE*)((_UNKNOWN*)0x1130LL) + (_QWORD)v8) != 0) {
              v26 = CudaDriverStub_1dbab0(*(_QWORD*)v22);
              memset_plt(v26, 0, v25);
            }
            v27 = CudaDriverStub_1dbab0(*(_QWORD*)(v22 + 32));
            v28 = CudaDriverStub_1dbf90(*(_QWORD*)(v22 + 32));
            memset_plt(v27, 0, v28);
            v29 = v79;
            *(_DWORD*)(v22 + 48) = 0;
            f_.v104[0] = v20;
            f_.v104[1] = v67;
            f_.v104[2] = v70;
            *(int64x2_t*)&v81[1] = vdupq_n_s64(1u);
            if (v79 >= v25) {
              v29 = v25;
            }
            v78 = v29;
            v81[0] = v29;
            cuda_driver_fd380(a4, a1, f_.v104, v81);
            v30 = *((_OWORD*)a1 + 10);
            v31 = *((_OWORD*)a1 + 11);
            f_.v131 = a1[24];
            f_.v129 = v30;
            f_.v130 = v31;
            v32 = *((_OWORD*)a1 + 7);
            f_.v125 = *((_OWORD*)a1 + 6);
            f_.v126 = v32;
            v34 = *((_OWORD*)a1 + 8);
            v33 = *((_OWORD*)a1 + 9);
            f_.v131 += v70;
            *((_QWORD*)&f_.v130 + 1) += v67;
            f_.v128 = v33;
            f_.v127 = v34;
            *(_QWORD*)&f_.v130 = f_.v130 + v20;
            v35 = *((_OWORD*)a1 + 3);
            *(_OWORD*)&f_.v124[4] = *((_OWORD*)a1 + 2);
            *(_OWORD*)&f_.v124[6] = v35;
            v36 = *((_OWORD*)a1 + 4);
            *(_OWORD*)&f_.v124[10] = *((_OWORD*)a1 + 5);
            *(_OWORD*)&f_.v124[8] = v36;
            v37 = *(_OWORD*)a1;
            *(_OWORD*)&f_.v124[2] = *((_OWORD*)a1 + 1);
            *(_OWORD*)f_.v124 = v37;
            v38 = v69[9];
            v39 = *(_QWORD*)(v22 + 56);
            f_.v121 = v69[8];
            v40 = v69[10];
            f_.v122 = v38;
            f_.v123 = v40;
            v41 = v69[5];
            f_.v117 = v69[4];
            f_.v118 = v41;
            v42 = v69[6];
            f_.v120 = v69[7];
            f_.v119 = v42;
            v43 = v69[1];
            f_.v113 = *v69;
            f_.v114 = v43;
            v45 = v69[2];
            v44 = v69[3];
            v46 = *(_QWORD*)v22;
            f_.v112 = 0;
            v76 = v46;
            v47 = a1[47];
            v48 = a1[48];
            f_.v116 = v44;
            f_.v115 = v45;
            v73 = v47 + v20;
            f_.v105 = (__typeof__(f_.v105)){0};
            f_.v106 = (__typeof__(f_.v106)){0};
            f_.v107 = (__typeof__(f_.v107)){0};
            f_.v108 = (__typeof__(f_.v108)){0};
            f_.v109 = (__typeof__(f_.v109)){0};
            f_.v110 = (__typeof__(f_.v110)){0};
            memset(f_.v111, 0, sizeof(f_.v111));
            memset(f_.v104, 0, sizeof(f_.v104));
            v72 = v48 + v67;
            v71 = a1[49] + v70;
            v49 = CudaDriverRoutine_f7f50((__int64)f_.v124);
            v50 = *(unsigned int*)(*(_QWORD*)(v9 + 64) + 4252LL);
            v52 = false;
            if ((unsigned __int8)CudaDriverRoutine_f6cd0((int*)f_.v124) != 0) {
              v52 =
                  (unsigned __int8)CudaDriverRoutine_f6d50((int*)f_.v124) == 0;
            }
            if (((v50 - 1) & v49) != 0 ||
                (v53 = 0,
                 (unsigned __int8)CudaDriverRoutine_f7c20((int*)f_.v124) != 0 ||
                     v52)) {
              memcpy_plt((__int64)v81, (__int64)f_.v104, 0x1D8u);
              v53 = 1;
              v88 = v39;
              v89 = 0;
              v101 = v78;
              v90 = v25;
              v91 = 1;
              *(_OWORD*)&v81[20] = f_.v129;
              *(_OWORD*)&v81[22] = f_.v130;
              v54 = f_.v125;
              v55 = f_.v126;
              v82 = f_.v131;
              v84 = 0;
              v86 = 0;
              v85 = 0;
              v87 = 0;
              *(_DWORD*)(a4 + 56) = 1;
              v83 = 1;
              v102 = 1;
              v103 = 1;
              v100 = 0;
              *(_OWORD*)&v81[12] = v54;
              *(_OWORD*)&v81[14] = v55;
              *(_OWORD*)&v81[16] = f_.v127;
              *(_OWORD*)&v81[18] = f_.v128;
              qmemcpy(v81, f_.v124, 96);
              v92 = (__typeof__(v92)){0};
              v93 = (__typeof__(v93)){0};
              v94 = (__typeof__(v94)){0};
              v95 = (__typeof__(v95)){0};
              v96 = (__typeof__(v96)){0};
              v97 = (__typeof__(v97)){0};
              v98 = (__typeof__(v98)){0};
              v99 = (__typeof__(v99)){0};
              v17 = (*(__int64 (**)(__int64, __int64*, __int64, __int64))(
                  v9 + 16392))(v9, v81, a2, a4);
              *(_DWORD*)(a4 + 56) = 0;
              if (v17 != 0) {
                goto LABEL_54;
              }
            }
            if (CudaDriverData_14358d0 == 2) {
              v56 = 8;
            }
            else {
              v56 = 2;
            }
            v57 = CudaDriverRoutine_5f7d0(
                *(_QWORD*)(*(_QWORD*)(a2 + 16) + 72LL), v56, a2);
            if (*((_BYTE*)v57 + 34233) == 0) {
              v18 = 999;
              goto LABEL_55;
            }
            v58 = (__int64)v57;
            if (v53 != 0) {
              v59 = (__typeof__(v59)){0};
              *(_OWORD*)&f_.v104[4] = v39;
              f_.v104[6] = v25;
              LODWORD(f_.v104[0]) = 1;
              f_.v104[7] = 1;
              memset((char*)f_.v104 + 4, 0, 28);
              memset(&f_.v104[8], 0, 32);
              f_.v111[0] = 0;
              f_.v105 = (__typeof__(f_.v105)){0};
              f_.v106 = (__typeof__(f_.v106)){0};
              f_.v107 = (__typeof__(f_.v107)){0};
              f_.v108 = (__typeof__(f_.v108)){0};
              f_.v109 = (__typeof__(f_.v109)){0};
              f_.v110 = (__typeof__(f_.v110)){0};
            }
            else {
              f_.v111[0] = f_.v131;
              f_.v109 = f_.v129;
              f_.v110 = f_.v130;
              f_.v105 = f_.v125;
              f_.v106 = f_.v126;
              f_.v107 = f_.v127;
              f_.v108 = f_.v128;
              qmemcpy(f_.v104, f_.v124, sizeof(f_.v104));
              v59 = (__typeof__(v59)){0};
            }
            memset((char*)&f_.v111[1] + 4, 0, 28);
            LODWORD(f_.v111[1]) = 1;
            f_.v111[5] = v76;
            f_.v111[6] = 0;
            f_.v111[7] = v25;
            f_.v111[8] = 1;
            *(_OWORD*)&f_.v111[9] = v59;
            *(_OWORD*)&f_.v111[11] = v59;
            f_.v111[25] = 0;
            f_.v111[26] = v78;
            f_.v111[27] = 1;
            f_.v111[28] = 1;
            v81[0] = 0;
            *(_OWORD*)&f_.v111[13] = v59;
            *(_OWORD*)&f_.v111[15] = v59;
            *(_OWORD*)&f_.v111[17] = v59;
            *(_OWORD*)&f_.v111[19] = v59;
            *(_OWORD*)&f_.v111[21] = v59;
            *(_OWORD*)&f_.v111[23] = v59;
            CudaDriverRoutine_205810((__int64)v57, v75, (__int64)v81, 0);
            cuda_driver_fc8b0(a4, f_.v104, v75, v58, 3, v81);
            v60 = CudaDriverRoutine_f7f50((__int64)f_.v104);
            v61 = CudaDriverRoutine_f7f50((__int64)&f_.v111[1]);
            v62 = CudaDriverStub_1db800(*(_QWORD*)(v22 + 40));
            v63 = CudaDriverStub_1db800(*(_QWORD*)(v22 + 32));
            v81[0] = (*(__int64 (**)(__int64, __int64, __int64, __int64, _QWORD,
                                     __int64, __int64, __int64,
                                     int))(*(_QWORD*)(v77 + 64) + 19232LL))(
                v81[0], v77, v61, v60, LODWORD(f_.v111[26]), v62, v63, 2, 1);
            cuda_driver_fc9d0(a4, v81);
            CudaDriverRoutine_206060(v75, v81[0]);
            v64 = *(_QWORD*)(v22 + 8);
            *(_DWORD*)(v22 + 48) = 1;
            v17 = CudaDriverStub_112e40(v64, v75);
            if (v17 != 0) {
              v9 = v77;
              goto LABEL_54;
            }
            *(_OWORD*)&f_.v104[4] = v76;
            LODWORD(f_.v104[0]) = 1;
            f_.v104[7] = 1;
            f_.v104[6] = v25;
            f_.v111[0] = 0;
            memset((char*)f_.v104 + 4, 0, 28);
            memset(&f_.v104[8], 0, 32);
            f_.v111[26] = v78;
            f_.v111[24] = v72;
            *(_OWORD*)&f_.v111[19] = f_.v122;
            *(_OWORD*)&f_.v111[21] = f_.v123;
            f_.v111[23] = v73;
            f_.v111[25] = v71;
            *(_OWORD*)&f_.v111[15] = f_.v120;
            *(_OWORD*)&f_.v111[17] = f_.v121;
            f_.v105 = (__typeof__(f_.v105)){0};
            f_.v106 = (__typeof__(f_.v106)){0};
            f_.v107 = (__typeof__(f_.v107)){0};
            f_.v108 = (__typeof__(f_.v108)){0};
            f_.v109 = (__typeof__(f_.v109)){0};
            f_.v110 = (__typeof__(f_.v110)){0};
            *(_OWORD*)&f_.v111[1] = f_.v113;
            *(_OWORD*)&f_.v111[11] = f_.v118;
            *(_OWORD*)&f_.v111[13] = f_.v119;
            *(_OWORD*)&f_.v111[7] = f_.v116;
            *(_OWORD*)&f_.v111[9] = f_.v117;
            *(_OWORD*)&f_.v111[3] = f_.v114;
            *(_OWORD*)&f_.v111[5] = f_.v115;
            *(int64x2_t*)&f_.v111[27] = vdupq_n_s64(1u);
            memcpy_plt((__int64)&v132[59 * v74], (__int64)f_.v104, 0x1D8u);
            f_.v133[v74] = v22;
            v11 = v74 ^ 1;
            v8 = CudaDriverData_1422118;
            v9 = v77;
            a2 = v75;
            a1 = v66;
            v19 = v79 - v78;
          } while (v79 != v78);
          while ((unsigned __int64)++v67 < v66[51]) {
            v19 = v66[50];
            if (v19 != 0) {
              goto LABEL_27;
            }
          }
          v10 = v66[52];
          v12 = v66[51];
        }
      }
      ++v70;
    } while (v70 < v10);
    v14 = v65 ^ 1;
    v15 = &f_.v133[v65 ^ 1];
    v16 = *v15;
    if (*v15 != 0) {
    LABEL_17:
      while (1) {
        v17 = CudaDriverRoutine_1d7600(v16, a2, (__int64)&v132[59 * v14], a4);
        if (v17 != 0) {
          break;
        }
        v14 ^= 1uLL;
        *v15 = 0;
        v15 = &f_.v133[v14];
        v16 = *v15;
        if (*v15 == 0) {
          goto LABEL_19;
        }
      }
    LABEL_54:
      v18 = v17;
      goto LABEL_55;
    }
  }
  else {
    v14 = 0;
    v15 = f_.v133;
    v16 = f_.v133[0];
    if (f_.v133[0] != 0) {
      goto LABEL_17;
    }
  }
LABEL_19:
  v18 = 0;
LABEL_55:
  CudaDriverStub_108070(*(_QWORD*)(v9 + 1336) + 168LL);
  return v18;
}

__int64 nvidia_211d90(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  struct {
    __int128 v11;
    __int128 v12;
    _QWORD v13[4];
    __int64 v14;
    _QWORD v15[2];
    __int64 v16;
  } f_;

  if (a1 != nullptr) {
    {
      v1 = *a1;
      __asm__ volatile("" ::"r"(v1));
    }
    f_.v14 = 0;
    f_.v11 = (__typeof__(f_.v11)){0};
    f_.v12 = (__typeof__(f_.v12)){0};
    memset(f_.v13, 0, sizeof(f_.v13));
    if (v1 >= 0x48) {
      v3 = 72;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&f_.v11, (__int64)a1, v3);
    LODWORD(f_.v11) = v3;
    f_.v16 = 0;
    if (*((_QWORD*)&f_.v11 + 1) != 0 && (_QWORD)f_.v12 != 0) {
      {
        v4 = *(_QWORD*)(*((_QWORD*)&f_.v11 + 1) + 8LL);
        __asm__ volatile("" ::"r"(v4));
      }
      f_.v15[0] = f_.v12;
      f_.v15[1] = v4;
      {
        v5 = (unsigned int)**((_DWORD**)&f_.v11 + 1);
        __asm__ volatile("" ::"r"(v5));
      }
      if ((_DWORD)v5 == 2 || (_DWORD)v5 == 1) {
        v6 = DWORD1(f_.v11);
      LABEL_14:
        v8 = (*((__int64 (**)(_QWORD*, __int64, _QWORD*)) *
                    (&CudaDriverData_1432068 + v5) +
                8))(f_.v15, v6, &f_.v13[1]);
        v9 = CudaDriverRoutine_20f580(v8);
        LODWORD(v3) = f_.v11;
        if (v9 != 0) {
          v7 = v9;
        }
        else {
          v7 = 0;
          if ((unsigned int)f_.v11 >= 0x40) {
            f_.v13[3] = f_.v16;
          }
        }
        goto LABEL_19;
      }
      if ((_DWORD)v5 == 0) {
        {
          v6 = *((_QWORD*)&f_.v12 + 1);
          __asm__ volatile("" ::"r"(v6));
        }
        goto LABEL_14;
      }
      v7 = 45;
    }
    else {
      v7 = 4;
    }
  LABEL_19:
    memcpy_plt((__int64)a1, (__int64)&f_.v11, (unsigned int)v3);
    return v7;
  }
  return 4;
}

__int64 nvidia_213a60(unsigned int* a1)
{

#pragma clang fp contract(off)
  unsigned int v1;
  unsigned __int64 v3;
  _DWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  void* v10;
  __int64 v11;
  long double v12;
  int* v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  struct {
    __int128 v21;
    __int128 v22;
    __int128 v23;
    __int128 v24;
    __int64 v25;
  } f_;
  _QWORD v26[3];

  if (a1 == nullptr) {
    return 4;
  }
  {
    v1 = *a1;
    __asm__ volatile("" ::"r"(v1));
  }
  f_.v25 = 0;
  f_.v21 = (__typeof__(f_.v21)){0};
  f_.v22 = (__typeof__(f_.v22)){0};
  f_.v23 = (__typeof__(f_.v23)){0};
  f_.v24 = (__typeof__(f_.v24)){0};
  if (v1 >= 0x48) {
    v3 = 72;
  }
  else {
    v3 = v1;
  }
  memcpy_plt((__int64)&f_.v21, (__int64)a1, v3);
  {
    v4 = *((_DWORD**)&f_.v21 + 1);
    __asm__ volatile("" ::"r"(v4));
  }
  LODWORD(f_.v21) = v3;
  if (*((_QWORD*)&f_.v21 + 1) == 0 || *((_QWORD*)&f_.v23 + 1) == 0 ||
      (v5 = *((_QWORD*)&f_.v22 + 1), *((_QWORD*)&f_.v22 + 1) == 0) ||
      (v6 = DWORD1(f_.v24), DWORD1(f_.v24) == 0) ||
      (v7 = f_.v22, (_QWORD)f_.v22 == 0) ||
      (v8 = f_.v24, (_DWORD)f_.v24 == 0)) {
    v19 = 4;
    goto LABEL_21;
  }
  {
    v9 = *(_QWORD*)(*((_QWORD*)&f_.v21 + 1) + 8LL);
    __asm__ volatile("" ::"r"(v9));
  }
  v26[0] = *((_QWORD*)&f_.v23 + 1);
  v26[1] = v9;
  {
    v10 = CudaDriverData_1423090[**((_DWORD**)&f_.v21 + 1)];
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = CudaDriverStub_12e330(24LL * DWORD1(f_.v24));
  if (v11 == 0) {
    v19 = 37;
    goto LABEL_21;
  }
  *(_QWORD*)&v12 = 0xFFFFFFFFLL;
  v13 = (int*)(v5 + 4);
  v14 = 0;
  v15 = v11;
  while (*(_DWORD*)v4 == 2) {
    *(_QWORD*)v15 = 0xFFFFFFFFLL;
  LABEL_17:
    if (*v13 == 0) {
      v19 = 4;
      goto LABEL_27;
    }
    ++v14;
    *(_QWORD*)(v15 + 8) = *(_QWORD*)(v13 + 1);
    {
      v16 = *v13;
      __asm__ volatile("" ::"r"(v16));
    }
    v13 += 4;
    *(_DWORD*)(v15 + 16) = v16;
    v15 += 24;
    if (v14 >= v6) {
      v17 = v11;
      v18 = (*((__int64 (**)(_QWORD*, __int64, __int64, _QWORD, __int64, _QWORD,
                             char*, long double))v10 +
               17))(v26, 1, v11, (unsigned int)v6, v7, v8, (char*)&f_.v24 + 8,
                    v12);
      v19 = CudaDriverRoutine_20f580(v18);
      v11 = v17;
      goto LABEL_27;
    }
  }
  if (*(_DWORD*)v4 == 1) {
    *(_DWORD*)v15 = *(v13 - 1);
    goto LABEL_17;
  }
  v19 = 45;
LABEL_27:
  CudaDriverRoutine_12e340(v11);
  v3 = (unsigned int)f_.v21;
LABEL_21:
  memcpy_plt((__int64)a1, (__int64)&f_.v21, v3);
  return v19;
}

__int64 nvidia_213c20(unsigned int* a1)
{

#pragma clang fp contract(off)
  unsigned int v1;
  unsigned __int64 v3;
  _DWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  void* v10;
  __int64 v11;
  long double v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  struct {
    __int128 v21;
    __int128 v22;
    __int128 v23;
    __int128 v24;
    __int64 v25;
  } f_;
  _QWORD v26[3];

  if (a1 == nullptr) {
    return 4;
  }
  {
    v1 = *a1;
    __asm__ volatile("" ::"r"(v1));
  }
  f_.v25 = 0;
  f_.v21 = (__typeof__(f_.v21)){0};
  f_.v22 = (__typeof__(f_.v22)){0};
  f_.v23 = (__typeof__(f_.v23)){0};
  f_.v24 = (__typeof__(f_.v24)){0};
  if (v1 >= 0x48) {
    v3 = 72;
  }
  else {
    v3 = v1;
  }
  memcpy_plt((__int64)&f_.v21, (__int64)a1, v3);
  {
    v4 = *((_DWORD**)&f_.v21 + 1);
    __asm__ volatile("" ::"r"(v4));
  }
  LODWORD(f_.v21) = v3;
  if (*((_QWORD*)&f_.v21 + 1) == 0 || *((_QWORD*)&f_.v23 + 1) == 0 ||
      (v5 = *((_QWORD*)&f_.v22 + 1), *((_QWORD*)&f_.v22 + 1) == 0) ||
      (v6 = DWORD1(f_.v24), DWORD1(f_.v24) == 0) ||
      (v7 = f_.v22, (_QWORD)f_.v22 == 0) ||
      (v8 = f_.v24, (_DWORD)f_.v24 == 0)) {
    v19 = 4;
    goto LABEL_21;
  }
  {
    v9 = *(_QWORD*)(*((_QWORD*)&f_.v21 + 1) + 8LL);
    __asm__ volatile("" ::"r"(v9));
  }
  v26[0] = *((_QWORD*)&f_.v23 + 1);
  v26[1] = v9;
  {
    v10 = CudaDriverData_1423090[**((_DWORD**)&f_.v21 + 1)];
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = CudaDriverStub_12e330(24LL * DWORD1(f_.v24));
  if (v11 == 0) {
    v19 = 37;
    goto LABEL_21;
  }
  *(_QWORD*)&v12 = 0xFFFFFFFFLL;
  v13 = v5 + 8;
  v14 = 0;
  v15 = v11;
  while (*(_DWORD*)v4 == 2) {
    *(_QWORD*)v15 = 0xFFFFFFFFLL;
  LABEL_17:
    if (*(_DWORD*)(v13 - 4) == 0) {
      v19 = 4;
      goto LABEL_27;
    }
    ++v14;
    *(_QWORD*)(v15 + 8) = *(_QWORD*)v13;
    *(_DWORD*)(v15 + 16) = *(_DWORD*)(v13 + 8);
    {
      v16 = *(_DWORD*)(v13 - 4);
      __asm__ volatile("" ::"r"(v16));
    }
    v13 += 24;
    *(_DWORD*)(v15 + 20) = v16;
    v15 += 24;
    if (v14 >= v6) {
      v17 = v11;
      v18 = (*((__int64 (**)(_QWORD*, _QWORD, __int64, _QWORD, __int64, _QWORD,
                             char*, long double))v10 +
               16))(v26, 0, v11, (unsigned int)v6, v7, v8, (char*)&f_.v24 + 8,
                    v12);
      v19 = CudaDriverRoutine_20f580(v18);
      v11 = v17;
      goto LABEL_27;
    }
  }
  if (*(_DWORD*)v4 == 1) {
    *(_DWORD*)v15 = *(_DWORD*)(v13 - 8);
    goto LABEL_17;
  }
  v19 = 45;
LABEL_27:
  CudaDriverRoutine_12e340(v11);
  v3 = (unsigned int)f_.v21;
LABEL_21:
  memcpy_plt((__int64)a1, (__int64)&f_.v21, v3);
  return v19;
}

__int64 nvidia_213de0(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  int v12;
  unsigned int v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int128 v19;
    __int128 v20;
    __int128 v21;
    __int64 v22;
  } f_;
  _BYTE v23[16];
  __int64 v24;
  __int64 v25;
  _QWORD v26[3];

  if (a1 != nullptr) {
    {
      v1 = *a1;
      __asm__ volatile("" ::"r"(v1));
    }
    f_.v22 = 0;
    f_.v20 = (__typeof__(f_.v20)){0};
    f_.v21 = (__typeof__(f_.v21)){0};
    f_.v19 = (__typeof__(f_.v19)){0};
    if (v1 >= 0x38) {
      v3 = 56;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&f_.v19, (__int64)a1, v3);
    LODWORD(f_.v19) = v3;
    if (*((_QWORD*)&f_.v19 + 1) != 0 && (_QWORD)f_.v20 != 0 &&
        DWORD1(f_.v19) != 0 && *((_QWORD*)&f_.v20 + 1) != 0) {
      {
        v4 = *(_QWORD*)(*((_QWORD*)&f_.v19 + 1) + 8LL);
        __asm__ volatile("" ::"r"(v4));
      }
      v26[0] = f_.v20;
      v26[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, _QWORD, _QWORD, _QWORD, _BYTE*, char*))
                  CudaDriverData_1423090[**((_DWORD**)&f_.v19 + 1)] +
              26))(v26, DWORD1(f_.v19), 0, 0, v23, (char*)&f_.v21 + 8);
      v6 = CudaDriverRoutine_20f580(v5);
      if (v6 == 0) {
        if (DWORD1(f_.v19) != 0) {
          {
            v7 = **((_DWORD**)&f_.v20 + 1);
            __asm__ volatile("" ::"r"(v7));
          }
          if (**((_DWORD**)&f_.v20 + 1) <= 0x2Fu) {
            v14 = 0;
            v15 = 0;
            v16 = &v24;
            do {
              ++v15;
              v6 = 0;
              {
                v17 = *((_QWORD*)&f_.v20 + 1) + v14;
                __asm__ volatile("" ::"r"(v17));
              }
              v14 += v7;
              *(_DWORD*)(v17 + 4) = *((_DWORD*)v16 - 4);
              *(_DWORD*)(v17 + 8) = *((_DWORD*)v16 - 3);
              *(_DWORD*)(v17 + 12) = *((_DWORD*)v16 - 2);
              *(_DWORD*)(v17 + 16) = *((_DWORD*)v16 - 1);
              *(_DWORD*)(v17 + 20) = *(_DWORD*)v16;
              *(_QWORD*)(v17 + 24) = v16[1];
              {
                v18 = v16[2];
                __asm__ volatile("" ::"r"(v18));
              }
              v16 += 6;
              *(_QWORD*)(v17 + 32) = v18;
            } while (v15 < DWORD1(f_.v19));
          }
          else {
            v8 = 0;
            v9 = 0;
            v10 = &v25;
            do {
              ++v9;
              v6 = 0;
              {
                v11 = *((_QWORD*)&f_.v20 + 1) + v8;
                __asm__ volatile("" ::"r"(v11));
              }
              v8 += v7;
              *(_DWORD*)(v11 + 4) = *((_DWORD*)v10 - 6);
              *(_DWORD*)(v11 + 8) = *((_DWORD*)v10 - 5);
              *(_DWORD*)(v11 + 12) = *((_DWORD*)v10 - 4);
              *(_DWORD*)(v11 + 16) = *((_DWORD*)v10 - 3);
              *(_DWORD*)(v11 + 20) = *((_DWORD*)v10 - 2);
              *(_QWORD*)(v11 + 24) = *v10;
              *(_QWORD*)(v11 + 32) = v10[1];
              *(_DWORD*)(v11 + 40) = *((_DWORD*)v10 + 4);
              {
                v12 = *((_DWORD*)v10 + 5);
                __asm__ volatile("" ::"r"(v12));
              }
              v10 += 6;
              *(_DWORD*)(v11 + 44) = v12;
            } while (v9 < DWORD1(f_.v19));
          }
        }
        else {
          v6 = 0;
        }
      }
    }
    else {
      v6 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&f_.v19, (unsigned int)f_.v19);
  }
  else {
    return 4;
  }
  return v6;
}

__int64 nvidia_21a3c0(__int64 a1, unsigned int* a2)
{
  unsigned int v2;
  unsigned int v4;
  __int64 v5;
  __int128 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int128 v12;
  _BOOL4 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  unsigned __int64 v21;
  unsigned int v22;
  struct {
    _QWORD v24[6];
    __int128 v25;
    __int128 v26;
    _QWORD v27[8];
    __int64 v28;
  } f_;

  v2 = 1;
  f_.v28 = 0;
  f_.v25 = (__typeof__(f_.v25)){0};
  f_.v26 = (__typeof__(f_.v26)){0};
  memset(f_.v24, 0, sizeof(f_.v24));
  memset(f_.v27, 0, sizeof(f_.v27));
  if (a1 != 0 && a2 != nullptr) {
    if (*a2 != 0) {
      {
        v4 = *(int*)(a1 + 40) - 3;
        __asm__ volatile("" ::"r"(v4));
      }
      if (v4 >= 0xFFFFFFFE) {
        DWORDn(f_.v24[0], sizeof(f_.v24[0]) / 4 - 1) = *(_DWORD*)(a1 + 40);
      }
      {
        v5 = *(_QWORD*)(a1 + 24);
        __asm__ volatile("" ::"r"(v5));
      }
      v6 = *(_OWORD*)(a1 + 48);
      f_.v24[4] = 0;
      f_.v24[5] = v5;
      {
        v8 = *(unsigned int*)(a1 + 112);
        __asm__ volatile("" ::"r"(v8));
      }
      {
        v9 = *(unsigned int*)(a1 + 116);
        __asm__ volatile("" ::"r"(v9));
      }
      *(_OWORD*)&f_.v24[1] = v6;
      *(_QWORD*)&v6 = *(_QWORD*)(a1 + 96);
      {
        v10 = *(_QWORD*)(a1 + 104);
        __asm__ volatile("" ::"r"(v10));
      }
      f_.v27[3] = v8;
      {
        v11 = *(_QWORD*)(a1 + 64);
        __asm__ volatile("" ::"r"(v11));
      }
      *(_QWORD*)&f_.v26 = v9;
      *((_QWORD*)&f_.v26 + 1) = v6;
      *(_QWORD*)&v12 = (unsigned int)v10;
      *((_QWORD*)&v12 + 1) = DWORDn(v10, sizeof(v10) / 4 - 1);
      f_.v24[3] = v11;
      LODWORD(v11) = *(_DWORD*)(a1 + 120);
      f_.v25 = v12;
      v14 = (_DWORD)v11 != 0 | v4 < 0xFFFFFFFE;
      LODWORD(f_.v27[0]) = v14;
      CudaDriverRoutine_11f740((unsigned int*)f_.v27 + 1, a1, 0);
      CudaDriverRoutine_11f740((unsigned int*)&f_.v27[1], a1, 1u);
      CudaDriverRoutine_11f740((unsigned int*)&f_.v27[1] + 1, a1, 2u);
      {
        v15 = *(_QWORD*)(a1 + 136);
        __asm__ volatile("" ::"r"(v15));
      }
      {
        v16 = *(_DWORD*)(a1 + 328);
        __asm__ volatile("" ::"r"(v16));
      }
      f_.v27[4] = *(_QWORD*)a1;
      {
        v17 = *(_DWORD*)(a1 + 296);
        __asm__ volatile("" ::"r"(v17));
      }
      *(_QWORD*)((char*)&f_.v27[5] + 4) = v15;
      {
        v18 = *(_QWORD*)(a1 + 288);
        __asm__ volatile("" ::"r"(v18));
      }
      LODWORD(f_.v27[5]) = v17;
      {
        v19 = *(_DWORD*)(a1 + 280);
        __asm__ volatile("" ::"r"(v19));
      }
      *(_QWORD*)((char*)&f_.v27[6] + 4) = v18;
      {
        __typeof__(v18) z_ = (__typeof__(v18)){0};
        LODWORD(z_) = *(_DWORD*)(a1 + 284);
        v18 = z_;
      }
      LODWORD(f_.v28) = v19;
      {
        v20 = *a2;
        __asm__ volatile("" ::"r"(v20));
      }
      DWORDn(f_.v27[7], sizeof(f_.v27[7]) / 4 - 1) = v18;
      if (v20 >= 0x98) {
        v21 = 152;
      }
      else {
        v21 = v20;
      }
      {
        v22 = *(_DWORD*)(a1 + 276);
        __asm__ volatile("" ::"r"(v22));
      }
      LODWORD(f_.v24[0]) = v21;
      f_.v27[2] = __PAIR64__(v16, v22);
      memcpy_plt((__int64)a2, (__int64)f_.v24, v21);
      return 0;
    }
    else {
      return 1;
    }
  }
  return v2;
}

__int64 nvidia_21d1a0(__int64 a1, unsigned int* a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned int v8;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  __int128 v28;
  int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int128 v37;
  int v38;
  int v39;
  unsigned int v40;
  unsigned __int64 v41;
  __int128 v43;
  struct {
    char gap0_[16];
    __int128 v44;
    __int128 v45;
    _QWORD v46[4];
    __int128 v47;
    __int128 v48;
    __int128 v49;
    __int128 v50;
    __int128 v51;
  } f_;
  __int64 v52;

  v8 = 1;
  v43 = (__typeof__(v43)){0};
  f_.v44 = (__typeof__(f_.v44)){0};
  f_.v45 = (__typeof__(f_.v45)){0};
  memset(f_.v46, 0, sizeof(f_.v46));
  f_.v47 = (__typeof__(f_.v47)){0};
  f_.v48 = (__typeof__(f_.v48)){0};
  f_.v49 = (__typeof__(f_.v49)){0};
  f_.v50 = (__typeof__(f_.v50)){0};
  f_.v51 = (__typeof__(f_.v51)){0};
  if (a1 != 0 && a2 != nullptr) {
    if (*a2 != 0) {
      {
        v10 = *(_QWORD*)(a1 + 32);
        __asm__ volatile("" ::"r"(v10));
      }
      {
        v11 = *(_DWORD*)(a1 + 72);
        __asm__ volatile("" ::"r"(v11));
      }
      v12 = (__int64*)(a1 + 356);
      v52 = 0;
      {
        v14 = *(_QWORD*)(v10 + 24);
        __asm__ volatile("" ::"r"(v14));
      }
      DWORD2(v43) = *(_DWORD*)(a1 + 392);
      DWORDn(v43, sizeof(v43) / 4 - 1) = v11;
      {
        v15 = *(_QWORD*)(a1 + 368);
        __asm__ volatile("" ::"r"(v15));
      }
      LODWORD(f_.v46[0]) = *(_QWORD*)(a1 + 376);
      DWORDn(f_.v46[0], sizeof(f_.v46[0]) / 4 - 1) = v15;
      (*(void (**)(__int64, _QWORD, __int64*, _QWORD, __int64, __int64, __int64,
                   __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                   _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                   _QWORD))(*(_QWORD*)(v14 + 64) + 18744LL))(
          a1, 0, &v52, 0, a5, a6, a7, a8, v43, *((_QWORD*)&v43 + 1), f_.v44,
          *((_QWORD*)&f_.v44 + 1), f_.v45, *((_QWORD*)&f_.v45 + 1), f_.v46[0],
          f_.v46[1], f_.v46[2], f_.v46[3], f_.v47, *((_QWORD*)&f_.v47 + 1));
      LODWORD(f_.v44) = v52;
      *(_QWORD*)&f_.v50 = v52;
      CudaDriverRoutine_bbd70(a1, (_QWORD*)&f_.v44 + 1);
      v16 = a1 + 128;
      {
        v17 = *(_DWORD*)(a1 + 128);
        __asm__ volatile("" ::"r"(v17));
      }
      {
        v18 = *v12;
        __asm__ volatile("" ::"r"(v18));
      }
      v19 = a1;
      {
        v20 = *(_DWORD*)(a1 + 76);
        __asm__ volatile("" ::"r"(v20));
      }
      {
        v21 = *(_QWORD*)(a1 + 992);
        __asm__ volatile("" ::"r"(v21));
      }
      LODWORD(f_.v45) = v17;
      {
        v22 = *(_DWORD*)(v16 + 236);
        __asm__ volatile("" ::"r"(v22));
      }
      DWORDn(f_.v45, sizeof(f_.v45) / 4 - 1) = v20;
      {
        v23 = *(unsigned __int8*)(v16 + 24);
        __asm__ volatile("" ::"r"(v23));
      }
      *(_QWORD*)&f_.v47 = v18;
      DWORD2(f_.v47) = v22;
      LODWORD(f_.v48) = v23 != 0;
      {
        v24 = *(_DWORD*)(v16 + 8);
        __asm__ volatile("" ::"r"(v24));
      }
      DWORD2(f_.v48) = *(_DWORD*)(v16 + 12);
      if (v21 != 0) {
        {
          v25 = *(_DWORD*)(v21 + 288);
          __asm__ volatile("" ::"r"(v25));
        }
        {
          v26 = *(_QWORD*)(v14 + 64);
          __asm__ volatile("" ::"r"(v26));
        }
        DWORD1(f_.v45) = v24 + v25;
        v27 = CudaDriverRoutine_99f40(v26, (_DWORD*)v16, v25);
        *(_QWORD*)&v28 = *(_QWORD*)(v21 + 172);
        *((_QWORD*)&v28 + 1) = *(_QWORD*)(v21 + 144);
        LODWORD(f_.v46[1]) = *(_DWORD*)(v21 + 168);
        {
          v29 = *(_DWORD*)(v21 + 152);
          __asm__ volatile("" ::"r"(v29));
        }
        {
          v30 = *(_DWORD*)(v21 + 220);
          __asm__ volatile("" ::"r"(v30));
        }
        DWORD2(f_.v45) = v27;
        DWORDn(f_.v46[3], sizeof(f_.v46[3]) / 4 - 1) = v29;
        {
          v31 = *(_DWORD*)(v21 + 212);
          __asm__ volatile("" ::"r"(v31));
        }
        {
          v32 = *(_DWORD*)(v21 + 216);
          __asm__ volatile("" ::"r"(v32));
        }
        *(_OWORD*)((char*)&f_.v46[1] + 4) = v28;
        f_.v49 = *(_OWORD*)(v21 + 180);
      }
      else {
        {
          v33 = *(_DWORD*)(v19 + 132);
          __asm__ volatile("" ::"r"(v33));
        }
        {
          v34 = *(_QWORD*)(v14 + 64);
          __asm__ volatile("" ::"r"(v34));
        }
        v35 = v19;
        DWORD1(f_.v45) = v24 + v33;
        v36 = CudaDriverRoutine_99f40(v34, (_DWORD*)v16, v33);
        *(_QWORD*)&v37 = v12[8];
        *((_QWORD*)&v37 + 1) = *(_QWORD*)(v35 + 816);
        {
          v38 = *(_DWORD*)(v35 + 824);
          __asm__ volatile("" ::"r"(v38));
        }
        LODWORD(f_.v46[1]) = *(_DWORD*)(v35 + 416);
        {
          v31 = *(_DWORD*)(v35 + 444);
          __asm__ volatile("" ::"r"(v31));
        }
        DWORDn(f_.v46[3], sizeof(f_.v46[3]) / 4 - 1) = v38;
        {
          v32 = *(_DWORD*)(v35 + 448);
          __asm__ volatile("" ::"r"(v32));
        }
        {
          v30 = *(_DWORD*)(v35 + 452);
          __asm__ volatile("" ::"r"(v30));
        }
        {
          v39 = *(_DWORD*)(v35 + 460);
          __asm__ volatile("" ::"r"(v39));
        }
        DWORD2(f_.v45) = v36;
        DWORDn(f_.v49, sizeof(f_.v49) / 4 - 1) = v39;
        LODWORD(f_.v49) = v31;
        *(_QWORD*)((char*)&f_.v49 + 4) = __PAIR64__(v30, v32);
        *(_OWORD*)((char*)&f_.v46[1] + 4) = v37;
      }
      *(_QWORD*)((char*)&f_.v51 + 4) = __PAIR64__(v30, v32);
      {
        v40 = *a2;
        __asm__ volatile("" ::"r"(v40));
      }
      LODWORD(f_.v51) = v31;
      if (v40 >= 0xA0) {
        v41 = 160;
      }
      else {
        v41 = v40;
      }
      LODWORD(v43) = v41;
      memcpy_plt((__int64)a2, (__int64)&v43, v41);
      return 0;
    }
    else {
      return 1;
    }
  }
  return v8;
}

#pragma GCC visibility pop
