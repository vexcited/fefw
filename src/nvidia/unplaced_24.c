#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_1a1f40(unsigned int);
_QWORD* CudaDriverRoutine_1b7d00(_QWORD* result, __int64);
__int64 CudaAddMemAllocNode(_QWORD*, __int64, __int64, __int64, __int64,
                            __int64);
__int64 CudaDriverRoutine_105570(_QWORD*, unsigned __int64, __int64*,
                                 unsigned __int64*, unsigned __int64);
__int64 CudaDriverRoutine_11abf0(__int64, unsigned int);
__int64 CudaDriverRoutine_11b100(int**, unsigned int, __int64, int, char,
                                 __int64, __int64, __int64);
__int64 CudaDriverRoutine_1216a0(__int64);
__int64 CudaDriverRoutine_197480(__int64 result, _DWORD*, unsigned int,
                                 unsigned int*, __int64, unsigned int, _QWORD*,
                                 unsigned int*);
__int64 CudaDriverRoutine_197d90(_QWORD*);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverRoutine_1dbb80(__int64 result, __int64);
__int64 CudaDriverRoutine_1dbfd0(__int64);
__int64 CudaDriverRoutine_208ed0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_20b260(_DWORD*, void*, __int64, const char*, __int64,
                                 unsigned __int64);
__int64 CudaDriverRoutine_22d3e0(__int64 result, int);
__int64 CudaDriverRoutine_24ea0(_QWORD*, __int64, int, _DWORD*, unsigned int,
                                int, int, __int64, __int128, __int128, __int128,
                                __int128, __int128, __int128, __int128,
                                __int128, __int128, __int128, __int128,
                                __int128, __int128, __int128, __int128,
                                __int128, __int64, __int64, __int64, __int64,
                                __int64, __int64);
__int64 CudaDriverRoutine_2b260(__int64, __int64);
__int64 CudaDriverRoutine_2b880(_QWORD*, __int64, __int64, __int64, __int64,
                                __int64);
__int64 CudaDriverRoutine_2c300(_QWORD*, __int64, __int64, __int64, __int64,
                                __int64);
__int64 CudaDriverRoutine_2c610(_QWORD*, __int64, __int64, __int64, __int64,
                                __int64, __int64);
__int64 CudaDriverRoutine_2e220(_QWORD*, __int64, __int64, __int64, __int64,
                                __int64, __int64);
__int64 CudaDriverRoutine_2e520(__int64, __int64, _DWORD*);
__int64 CudaDriverRoutine_2e660(_QWORD*, __int64, __int64, __int64, __int64,
                                _QWORD*);
__int64 CudaDriverRoutine_2e940(_QWORD*, __int64, __int64, __int64, __int64,
                                __int64*);
__int64 CudaDriverRoutine_2fff0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_31330(__int64, __int64, __int64, __int64, __int64,
                                __int64);
__int64 CudaDriverRoutine_32660(__int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_37090(__int64, unsigned int);
__int64 CudaDriverRoutine_6cac0(unsigned int, unsigned int, unsigned int,
                                unsigned int, unsigned int);
__int64 CudaDriverRoutine_6fa00(unsigned int*, const char*, const char*,
                                unsigned __int64, __int64, unsigned int, int*,
                                unsigned int*);
__int64 CudaDriverRoutine_8ab20(__int64, __int64, int, int);
__int64 CudaDriverRoutine_8e510();
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_b1250(unsigned int, unsigned int, char*);
__int64 CudaDriverRoutine_b3f80(__int64, unsigned __int64, char,
                                unsigned __int64);
__int64 CudaDriverRoutine_b41c0(__int64, __int64, unsigned int,
                                unsigned __int64);
__int64 CudaDriverRoutine_b42b0(_QWORD*, __int64, int***, __int64, char, char,
                                int, __int64, char*, __int64);
__int64 CudaDriverRoutine_b4500(__int64 result, __int64, _QWORD*, __int64,
                                __int64, unsigned __int64);
__int64 CudaDriverRoutine_bbec0(__int64, _QWORD*, __int64, char, char);
__int64 CudaDriverRoutine_c40e0(_DWORD*, __int64, _QWORD*, _QWORD*, char, char);
__int64 CudaDriverRoutine_d6bf0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_d77c0(__int64 result, __int64);
__int64 CudaDriverRoutine_df060(__int64);
__int64 CudaDriverRoutine_ee970(__int64, __int64);
__int64 CudaDriverRoutine_f6e20(int*);
__int64 CudaDriverRoutine_f8ed0(_DWORD*);
__int64 CudaDriverRoutine_f8f00(_DWORD*);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_108fc0(__int64, __int64, __int64);
__int64 CudaDriverStub_12db60(_QWORD);
__int64 CudaDriverStub_12db80(_QWORD);
__int64 CudaDriverStub_12dca0(_QWORD);
__int64 CudaDriverStub_1a0ee0(void);
__int64 CudaDriverStub_1a2350(__int64, __int64, __int64);
__int64 CudaDriverStub_1a28c0(__int64, __int64, __int64, unsigned int);
__int64 CudaDriverStub_1b7d60(_QWORD, _QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_4f840(_QWORD);
__int64 CudaDriverStub_57450(_QWORD);
__int64 CudaDriverStub_5ab60(_QWORD, _QWORD);
__int64 CudaDriverStub_640d0(__int64, __int64, unsigned __int64);
__int64 cuGraphBatchMemOpNodeSetParams_impl(__int64, __int64);
__int64 cuGraphExternalSemaphoresSignalNodeSetParams_impl(__int64, __int64);
__int64 cuGraphExternalSemaphoresWaitNodeSetParams_impl(__int64, __int64);
__int64 cuGraphHostNodeSetParams_impl(__int64, _QWORD*);
__int64 cuGraphKernelNodeSetParams_v2_impl(__int64, __int64);
__int64 cuda_driver_121e20(__int64);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_2ed10(__int64, __int64);
__int64 cuda_driver_2ef60(__int64, __int64);
__int64 cuda_driver_316f0(__int64, __int64, __int64, __int64, __int64, __int64);
__int64 cuda_driver_5a700(__int64*, char, _BYTE*, unsigned int, unsigned int);
__int64 cuda_driver_5e7e0(__int64);
__int64 cuda_driver_c36c0(__int64);
__int64 cuda_driver_d3530(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                          __int64, __int64);
__int64 cuda_driver_d8220(_QWORD*, __int64, __int64, __int64, __int64, __int64);
__int64 cuda_driver_d82e0(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                          __int64, char);
__int64 cuda_driver_d8550(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                          __int64, __int64);
__int64 cuda_driver_d8770(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                          __int64, __int64);
__int64 cuda_driver_misc_helpers_4bb0(__int64 result);
__int64 cuda_driver_misc_helpers_ded50(__int64, __int64*, unsigned int);
__int64 cuda_driver_misc_helpers_deeb0(__int64, char);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nvidia_121c60(__int64*);
__int64 nvidia_1d9f90(_QWORD);
__int64 nvidia_ed630(__int64, __int64, const char*, ...);
unsigned __int8 CudaDriverRoutine_12b530();
unsigned __int8 CudaDriverRoutine_1b76a0(__int64, __int64);
unsigned __int8 CudaDriverRoutine_86fe0(__int64);
unsigned __int8 CudaDriverRoutine_98110(_BOOL8 result);
unsigned __int8 CudaDriverRoutine_bbdf0(__int64);
unsigned __int8 CudaDriverRoutine_d47e0(__int64);
unsigned __int8 CudaDriverStub_b9300(__int64);
unsigned __int8 cuda_driver_f7b60(int*, __int64);
unsigned __int8 cuda_driver_predicates_1dc880(__int64);
unsigned __int8 cuda_driver_predicates_f7a00(int*);
extern _QWORD CudaDriverData_1132220[115];
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_14321c8;
extern _UNKNOWN CudaDriverData_1130618;
extern int CudaDriverData_1432de0;
extern int CudaDriverData_14358d0;
extern int CudaDriverData_144d334;
int memcmp_plt(__int64, __int64, unsigned __int64);
int snprintf_plt(__int64, unsigned __int64, const char*, ...);
unsigned __int64 CudaDriverRoutine_12dea0(atomic_ullong*);
unsigned __int64 strlen_plt(const char*);
void CudaDriverRoutine_4198();
void CudaDriverRoutine_7418();
void CudaDriverRoutine_74e0();
void CudaDriverRoutine_7500();
__int64 nvidia_3140(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_15970(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_25180(_QWORD* a1, _QWORD* a2, unsigned int a3, int a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                     __int128 a9, __int128 a10, __int128 a11, __int128 a12,
                     __int128 a13, __int128 a14, __int128 a15, __int128 a16,
                     __int128 a17, __int128 a18, __int128 a19, __int128 a20,
                     __int128 a21, __int128 a22, __int128 a23, __int128 a24,
                     __int64 a25, __int64 a26, __int64 a27, __int64 a28,
                     __int64 a29, __int64 a30);
__int64 nvidia_2b3a0(__int64 a1, int a2);
__int64 nvidia_31870(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                     unsigned int* a5);
__int64 nvidia_31dc0(__int64 a1, unsigned int* a2);
__int64 nvidia_375b0(__int64 a1);
__int64 nvidia_59820(__int64 a1, _QWORD* a2, unsigned int a3);
__int64 nvidia_60ac0();
__int64 nvidia_6fbb0(unsigned int a1, unsigned int a2, unsigned int a3,
                     unsigned __int64 a4, char* a5, __int64 a6, unsigned int a7,
                     int* a8, unsigned int* a9);
__int64 nvidia_b0f30(__int64 a1, __int64 a2);
__int64 nvidia_b3850(__int64 a1, __int64* a2);
__int64 nvidia_bc030(__int64 a1, _QWORD* a2, int* a3, _DWORD* a4, char a5);
__int64 nvidia_d2400(__int64 a1, __int64 a2, __int64* a3, __int64 a4, char a5);
__int64 nvidia_edcc0(unsigned int* a1, __int64 a2, unsigned __int64* a3);
__int64 nvidia_f94a0(__int64 a1, __int64 a2, char a3);
bool nvidia_126170(int** a1);
__int64 nvidia_1a7d80(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_1bf0b0(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_1f1030(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_204850(__int64 a1, __int64 a2, int** a3);
__int64 nvidia_204900(int** a1);
__int64 nvidia_20a960(_DWORD* a1, void* a2, __int64 a3);
__int64 nvidia_22bb00(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_22f640(__int64* a1, _DWORD* a2, __int64 a3, __int64 a4,
                      __int64 a5);
__int64 nvidia_230600(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, unsigned int a7);
__int64 nvidia_23bbe0(__int64 a1, __int64 a2, __int64 a3);
bool CudaDriverRoutine_86fe0_alt1(__int64);

__int64 nvidia_3140(__int64 a1, __int64 a2, __int64 a3)
{
  return CudaDriverRoutine_208ed0(*(_QWORD*)(a1 + 2112), a2, a3);
}

__int64 nvidia_15970(__int64 a1, __int64 a2, __int64 a3)
{
  return CudaDriverRoutine_208ed0(*(_QWORD*)(a1 + 2112), a2, a3);
}

__int64 nvidia_25180(_QWORD* a1, _QWORD* a2, unsigned int a3, int a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                     __int128 a9, __int128 a10, __int128 a11, __int128 a12,
                     __int128 a13, __int128 a14, __int128 a15, __int128 a16,
                     __int128 a17, __int128 a18, __int128 a19, __int128 a20,
                     __int128 a21, __int128 a22, __int128 a23, __int128 a24,
                     __int64 a25, __int64 a26, __int64 a27, __int64 a28,
                     __int64 a29, __int64 a30)
{
  _QWORD* v32;
  int v33;
  _DWORD* v34;

  if (a2 != nullptr) {
    v32 = a2;
    a2 = (_QWORD*)*a2;
    {
      v33 = *((_DWORD*)v32 + 2);
      __asm__ volatile("" ::"r"(v33));
    }
    {
      v34 = (_DWORD*)v32[2];
      __asm__ volatile("" ::"r"(v34));
    }
  }
  else {
    v33 = 0;
    v34 = nullptr;
  }
  return CudaDriverRoutine_24ea0(a1, (__int64)a2, v33, v34, a3, a4, 3020, a8,
                                 a9, a10, a11, a12, a13, a14, a15, a16, a17,
                                 a18, a19, a20, a21, a22, a23, a24, a25, a26,
                                 a27, a28, a29, a30);
}

__int64 nvidia_2b3a0(__int64 a1, int a2)
{
  if ((a2 & 0x80000000) == 0) {
    return CudaDriverRoutine_2b260(a1, (unsigned int)-a2);
  }
  nvidia_ed630((__int64)"CUDA", 0, "count cannot exceed INT_MAX");
  return 1;
}

__int64 nvidia_31870(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                     unsigned int* a5)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v14;
  _QWORD* v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  v6 = a4;
  v7 = 0;
  if (a5 == nullptr) {
    nvidia_ed630((__int64)"CUDA", 0, "nodeParams cannot be NULL", 0, v6),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    return 1;
  }
  if ((*(_QWORD*)(a5 + 1) | a5[3]) != 0) {
  LABEL_16:
    nvidia_ed630((__int64)"CUDA", 0,
                 "nodeParams struct must be initialized to zero", v7, v6),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    return 1;
  }
  {
    v8 = *a5;
    __asm__ volatile("" ::"r"(v8));
  }
  v9 = 168;
  v10 = 22;
  switch (*a5) {
  case 0u:
    goto LABEL_15;
  case 1u:
    if ((*((_QWORD*)a5 + 29) | *((_QWORD*)a5 + 30) | *((_QWORD*)a5 + 31)) !=
        0) {
      goto LABEL_16;
    }
    v9 = 8;
    goto LABEL_14;
  case 2u:
    v9 = 192;
    v10 = 16;
    goto LABEL_15;
  case 3u:
  case 4u:
    v9 = 224;
    v10 = 8;
    goto LABEL_15;
  case 5u:
    v9 = 240;
  LABEL_14:
    v10 = 4;
    goto LABEL_15;
  case 6u:
  case 7u:
  case 0xBu:
    v9 = 232;
    v10 = 6;
    goto LABEL_15;
  case 8u:
  case 9u:
    v9 = 216;
    v10 = 10;
    goto LABEL_15;
  case 0xAu:
    v9 = 120;
    v10 = 34;
    goto LABEL_15;
  case 0xCu:
  case 0xDu:
    v9 = 208;
    v10 = 12;
  LABEL_15:
    v14 = v6;
    v15 = a5;
    if (memcmp_plt((__int64)&a5[v10], (__int64)&CudaDriverData_1130618, v9) !=
        0) {
      goto LABEL_16;
    }
    if ((unsigned int)v8 > 0xD) {
    LABEL_22:
      nvidia_ed630((__int64)"CUDA", 0, "Invalid node type: %d", v8),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      return 1;
    }
    switch (v8) {
    case 0LL:
      result = CudaDriverRoutine_2c300(a1, a2, a3, 0, v14, (__int64)(v15 + 2)),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      break;
    case 1LL:
      result = CudaDriverRoutine_2c610(a1, a2, a3, 0, v14, (__int64)(v15 + 4),
                                       v15[3]),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      break;
    case 2LL:
      result = CudaDriverRoutine_2e220(a1, a2, a3, 0, v14, (__int64)(v15 + 2),
                                       v15[7]),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      break;
    case 3LL:
      result = CudaDriverRoutine_2e660(a1, a2, a3, 0, v14, v15 + 2),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      break;
    case 4LL:
      result = CudaDriverRoutine_2e940(a1, a2, a3, 0, v14, v15 + 2),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      break;
    case 5LL:
      if (a1 == nullptr) {
        goto LABEL_53;
      }
      v22 = 0;
      if ((unsigned int)CudaDriverRoutine_2b880(&v22, a2, 5, a3, 0, v14) != 0) {
        return 1;
      }
      result = cuda_driver_d8220(&v23, v22, a3, 0, 0, v14),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      if ((_DWORD)result == 0) {
        goto LABEL_43;
      }
      break;
    case 6LL:
      if (a1 == nullptr) {
        goto LABEL_53;
      }
      {
        v21 = v15[2];
        __asm__ volatile("" ::"r"(v21));
      }
      if (v21 == 0) {
        goto LABEL_54;
      }
      v23 = 0;
      if ((unsigned int)CudaDriverRoutine_2b880(&v23, a2, 6, a3, 0, v14) != 0) {
        return 1;
      }
      result = cuda_driver_d82e0(a1, v23, a3, 0, 0, v14, v21, 0),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      break;
    case 7LL:
      if (a1 == nullptr) {
        goto LABEL_53;
      }
      {
        v20 = v15[2];
        __asm__ volatile("" ::"r"(v20));
      }
      if (v20 == 0) {
      LABEL_54:
        nvidia_ed630((__int64)"CUDA", 0, "event cannot be NULL", 0, v14),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        return 1;
      }
      v23 = 0;
      if ((unsigned int)CudaDriverRoutine_2b880(&v23, a2, 7, a3, 0, v14) != 0) {
        return 1;
      }
      result = cuda_driver_d82e0(a1, v23, a3, 0, 0, v14, v20, 1),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      break;
    case 8LL:
      if (a1 == nullptr) {
        goto LABEL_53;
      }
      v23 = 0;
      if ((unsigned int)CudaDriverRoutine_2b880(&v23, a2, 8, a3, 0, v14) != 0) {
        return 1;
      }
      result = cuda_driver_d8550(a1, v23, a3, 0, 0, v14, (__int64)(v15 + 2), 2),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      break;
    case 9LL:
      if (a1 == nullptr) {
      LABEL_53:
        nvidia_ed630((__int64)"CUDA", 0, "Node pointer cannot be NULL", 0, v14),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        return 1;
      }
      v23 = 0;
      if ((unsigned int)CudaDriverRoutine_2b880(&v23, a2, 9, a3, 0, v14) != 0) {
        return 1;
      }
      result = cuda_driver_d8770(a1, v23, a3, 0, 0, v14, (__int64)(v15 + 2), 2),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      break;
    case 10LL:
      result = CudaAddMemAllocNode(a1, a2, a3, 0, v14, (__int64)(v15 + 2)),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      break;
    case 11LL: {
      v17 = v15[2];
      __asm__ volatile("" ::"r"(v17));
    }
      result = CudaDriverRoutine_df060(0),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      if ((_DWORD)result == 0) {
        if (a1 == nullptr) {
          nvidia_ed630((__int64)"CUDA", 0, "phGraphNode cannot be NULL", v18,
                       v19),
              result =
                  COERCE_AS(__typeof__(result),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
          return 1;
        }
        v22 = 0;
        if ((unsigned int)CudaDriverRoutine_2b880(&v22, a2, 11, a3, 0, v14) !=
            0) {
          return 1;
        }
        result = cuda_driver_d3530(&v23, v22, a3, 0, 0, v14, v17, 2),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        if ((_DWORD)result == 0) {
        LABEL_43:
          *a1 = v23;
        }
      }
      break;
    case 12LL:
      result = CudaDriverRoutine_31330((__int64)a1, a2, a3, 0, v14,
                                       (__int64)(v15 + 2)),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      break;
    case 13LL:
      result =
          cuda_driver_316f0((__int64)a1, a2, a3, 0, v14, (__int64)(v15 + 2)),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      break;
    }
    break;
  default:
    goto LABEL_22;
  }
  return result;
}

__int64 nvidia_31dc0(__int64 a1, unsigned int* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  char* v5;
  unsigned int v8;
  __int64 result;
  unsigned int* v10;
  __int64 v11;
  __int64 v12;
  unsigned int* v13;
  __int64 v14;
  __int64 v15;
  struct {
    int v16;
    char gap12_[4];
    __int64 v17;
    __int64 v18;
    __int64 v19;
  } v16_;
  __int64 v20;

  if (a1 == 0) {
    v5 = "Node cannot be NULL";
  LABEL_21:
    nvidia_ed630((__int64)"CUDA", 0, v5);
    return 1;
  }
  if (a2 == nullptr) {
    nvidia_ed630((__int64)"CUDA", 0, "nodeParams cannot be NULL");
    return 1;
  }
  {
    v2 = *a2;
    __asm__ volatile("" ::"r"(v2));
  }
  if ((_DWORD)v2 != *(_DWORD*)(a1 + 4)) {
    v5 = "Parameter type does not match node type";
    goto LABEL_21;
  }
  if ((*(_QWORD*)(a2 + 1) | a2[3]) != 0) {
  LABEL_20:
    v5 = "nodeParams struct must be initialized to zero";
    goto LABEL_21;
  }
  v3 = 168;
  v4 = 22;
  switch (*a2) {
  case 0u:
    goto LABEL_19;
  case 1u:
    if ((*((_QWORD*)a2 + 29) | *((_QWORD*)a2 + 30) | *((_QWORD*)a2 + 31)) !=
        0) {
      goto LABEL_20;
    }
    v3 = 8;
  LABEL_18:
    v4 = 4;
  LABEL_19:
    v8 = memcmp_plt((__int64)&a2[v4], (__int64)&CudaDriverData_1130618, v3);
    if (v8 != 0) {
      goto LABEL_20;
    }
    break;
  case 2u:
    v3 = 192;
    v4 = 16;
    goto LABEL_19;
  case 3u:
  case 4u:
    v3 = 224;
    v4 = 8;
    goto LABEL_19;
  case 5u:
    v3 = 240;
    goto LABEL_18;
  case 6u:
  case 7u:
  case 0xBu:
    v3 = 232;
    v4 = 6;
    goto LABEL_19;
  case 8u:
  case 9u:
    v3 = 216;
    v4 = 10;
    goto LABEL_19;
  case 0xAu:
    v3 = 120;
    v4 = 34;
    goto LABEL_19;
  case 0xCu:
  case 0xDu:
    v3 = 208;
    v4 = 12;
    goto LABEL_19;
  default:
    return 999;
  }
  v10 = a2;
  v11 = a1;
  switch (v2) {
  case 0LL:
    return cuGraphKernelNodeSetParams_v2_impl(a1, (__int64)(a2 + 4));
  case 1LL:
    return CudaDriverRoutine_2fff0(a1, (__int64)(a2 + 8), *((_QWORD*)a2 + 3));
  case 2LL:
    return CudaDriverRoutine_2e520(a1, (__int64)(a2 + 4), *((_DWORD**)a2 + 7));
  case 3LL:
    return cuGraphHostNodeSetParams_impl(a1, (_QWORD*)a2 + 2);
  case 4LL: {
    v12 = *((_QWORD*)a2 + 2);
    __asm__ volatile("" ::"r"(v12));
  }
    v13 = v10 + 4;
    v14 = v11;
    result =
        CudaDriverRoutine_32660(*((_QWORD*)v10 + 2), (__int64)(v10 + 4), &v20);
    if ((_DWORD)result != 0) {
      return result;
    }
    if (CudaDriverRoutine_d47e0(*(_QWORD*)(v14 + 24))) {
      nvidia_ed630(
          (__int64)"CUDA", 0,
          "Existing child graph contains memory nodes and cannot be replaced");
      return 801;
    }
    if (v12 != 0) {
      if (*(_DWORD*)(v12 + 4) == 1) {
        goto LABEL_50;
      }
      nvidia_ed630((__int64)"CUDA", 0, "The source graph pointer is invalid");
    }
    else {
      nvidia_ed630((__int64)"CUDA", 0, "The source graph pointer is NULL");
    }
    v12 = 0;
  LABEL_50:
    if (CudaDriverRoutine_d47e0(v12)) {
      nvidia_ed630((__int64)"CUDA", 0,
                   "New child graph contains memory nodes and cannot be set as "
                   "a parameter");
      return 801;
    }
    if (v13[2] == 1) {
      cuda_driver_c36c0(*(_QWORD*)(v14 + 24));
      v15 = v20;
      *(_QWORD*)(v14 + 24) = v20;
      CudaDriverRoutine_d77c0(v15, *(_QWORD*)(v15 + 336));
    }
    else {
      result = CudaDriverRoutine_d6bf0(v14, v20, 0);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x58LL) +
                   (_QWORD)CudaDriverData_14321c8) != 0) {
      v16_.v16 = 40;
      v16_.v17 = *(_QWORD*)(v14 + 24);
      v16_.v18 = v14;
      v16_.v19 = *(_QWORD*)(v14 + 48);
      cuda_driver_20b420(0x13u, 0x16u, (__int64)&v16_.v16);
    }
    result = 0;
    break;
  case 5LL:
    return v8;
  case 6LL:
    return cuda_driver_2ef60(a1, *((_QWORD*)a2 + 2));
  case 7LL:
    return cuda_driver_2ed10(a1, *((_QWORD*)a2 + 2));
  case 8LL:
    return cuGraphExternalSemaphoresSignalNodeSetParams_impl(a1,
                                                             (__int64)(a2 + 4));
  case 9LL:
    return cuGraphExternalSemaphoresWaitNodeSetParams_impl(a1,
                                                           (__int64)(a2 + 4));
  case 10LL:
    nvidia_ed630((__int64)"CUDA", 0,
                 "Cannot set parameters of memory allocation nodes");
    return 801;
  case 11LL:
    nvidia_ed630((__int64)"CUDA", 0,
                 "Cannot set parameters of memory free nodes");
    return 801;
  case 12LL:
    return cuGraphBatchMemOpNodeSetParams_impl(a1, (__int64)(a2 + 4));
  case 13LL:
    nvidia_ed630((__int64)"CUDA", 0,
                 "Cannot set parameters of conditional nodes");
    return 801;
  default:
    __builtin_trap();
  }
  return result;
}

__int64 nvidia_375b0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v6 = 0;
  if ((unsigned int)CudaDriverData_14358d0 >= 2) {
    return CudaDriverRoutine_37090(a1, 2u);
  }
  result = nvidia_121c60(&v6);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v6, nullptr, 0);
    if ((_DWORD)result == 0) {
      result = cuda_driver_121e20(v6);
      if ((_DWORD)result == 0) {
        v3 = CudaDriverRoutine_1216a0(v6);
        if (v3 == 0) {
          goto LABEL_10;
        }
        v4 = v3;
        result = cuda_driver_misc_helpers_deeb0(v3, 0);
        if ((_DWORD)result != 0) {
          return result;
        }
        v5 = CudaDriverRoutine_98340(v4);
        if (v5 == 0) {
        LABEL_10:
          if (!CudaDriverRoutine_12b530()) {
            return 201;
          }
          v5 = 0;
        }
        if (a1 != 0) {
          return CudaDriverRoutine_ee970(v5, a1);
        }
        else {
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 nvidia_59820(__int64 a1, _QWORD* a2, unsigned int a3)
{
  _BOOL8 v6;
  __int64 v10;
  int v12;
  int v13;
  __int64 v14;
  __int64 result;
  _BYTE v16[4];

  v6 = CudaDriverRoutine_98110(*(_QWORD*)(*(_QWORD*)a1 + 8LL));
  if ((a3 & 0x20) == 0 && v6) {
    CudaDriverStub_57450(v6);
  }
  v10 = a1;
  if (*(_BYTE*)(a1 + 37) == 0) {
    v10 = *(_QWORD*)(*(_QWORD*)a1 + 48LL);
    __asm__ volatile("" ::"r"(v10));
  }
  CudaDriverStub_107f90(v10 + 8);
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &
          *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)CudaDriverData_1422118) ==
              0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a1 + 33816) + 8LL) + 64LL) +
                17329LL) != 0) {
    {
      v12 = *(_DWORD*)(a1 + 34248);
      __asm__ volatile("" ::"r"(v12));
    }
    __builtin_arm_dmb(0xDu);
    if (v12 != 0) {
      do {
        CudaDriverStub_12dca0(100);
        {
          v13 = *(_DWORD*)(a1 + 34248);
          __asm__ volatile("" ::"r"(v13));
        }
        __builtin_arm_dmb(0xDu);
      } while (v13 != 0);
    }
  }
  {
    v14 = *(_QWORD*)a1;
    __asm__ volatile("" ::"r"(v14));
  }
  *(_QWORD*)(a1 + 33144) =
      CudaDriverRoutine_12dea0((atomic_ullong*)(*(_QWORD*)a1 + 132696LL));
  result = cuda_driver_5e7e0(v14);
  if ((_DWORD)result != 0 ||
      (v16[0] = 0, (_DWORD)(result = cuda_driver_5a700((__int64*)a1, 1, v16,
                                                       0x18000u, a3)) != 0) ||
      (_DWORD)(result = (*(__int64 (**)(__int64, bool, _BYTE*))(a1 + 34112))(
                   a1, v16[0] == 0, v16)) != 0) {
    *a2 = v14 + 34392;
  }
  else {
    result = (*(__int64 (**)(__int64, _QWORD*, __int64, _QWORD))(a1 + 33912))(
        a1, a2, 98304, a3);
  }
  *(_BYTE*)(a1 + 34152) = 1;
  *(_QWORD*)(v14 + 34368) = a1;
  return result;
}

__int64 nvidia_60ac0()
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (CudaDriverData_144d334 == 0) {
    return CudaDriverRoutine_8e510();
  }
  return result;
}

__int64 nvidia_6fbb0(unsigned int a1, unsigned int a2, unsigned int a3,
                     unsigned __int64 a4, char* a5, __int64 a6, unsigned int a7,
                     int* a8, unsigned int* a9)
{
  __int64 result;
  __int64 v18;
  __int64 v19;
  char* v20;

  result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    result = 4;
    if (a5 != nullptr && a6 != 0 && a8 != nullptr && a9 != nullptr) {
      result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
      if ((_DWORD)result == 0) {
        v18 = CudaDriverStub_1a0ee0();
        if (v18 != 0) {
          {
            v19 = *(_QWORD*)(v18 + 8);
            __asm__ volatile("" ::"r"(v19));
          }
          {
            v20 = *(const char**)(v19 + 16);
            __asm__ volatile("" ::"r"(v20));
          }
          *a8 = 0;
          memset_plt(a6, 0, a7);
          return CudaDriverRoutine_6fa00(
              *(unsigned int**)(*(_QWORD*)(v19 + 72) + 80LL), v20, a5, a4, a6,
              a7, a8, a9);
        }
        else {
          return 21;
        }
      }
    }
  }
  return result;
}

__int64 nvidia_b0f30(__int64 a1, __int64 a2)
{
  int v2;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _DWORD* v15;
  __int64 v16;

  {
    v2 = *(_DWORD*)a1;
    __asm__ volatile("" ::"r"(v2));
  }
  result = 999;
  if (v2 <= 1) {
    if (v2 != 0) {
      if (v2 != 1) {
        return result;
      }
      if ((*(_BYTE*)a2 & 2) != 0) {
        {
          v6 = *(_QWORD*)(a1 + 16);
          __asm__ volatile("" ::"r"(v6));
        }
        v7 = CudaDriverRoutine_11abf0(*(_QWORD*)(a2 + 8) + 40LL,
                                      *(_DWORD*)(a1 + 8));
        if (v7 != 0) {
          {
            v8 = *(_QWORD*)(v7 + 80);
            __asm__ volatile("" ::"r"(v8));
          }
          if (v8 != 0) {
            {
              v9 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 320LL);
              __asm__ volatile("" ::"r"(v9));
            }
            if (v9 != 0 ||
                (*(_QWORD*)(*(_QWORD*)(a2 + 8) + 320LL) =
                     CudaDriverRoutine_1a1f40(8),
                 (v9 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 320LL)) != 0)) {
              v10 = CudaDriverStub_1a28c0(v9, v6, 0, 0);
              if (v10 != 0) {
                v11 = (_QWORD*)v10;
                result = CudaDriverRoutine_197d90(&v16);
                if ((_DWORD)result != 0) {
                  return result;
                }
                CudaDriverStub_1b7d60(v16, v8);
                CudaDriverRoutine_1b7d00(v11, v16);
                return 0;
              }
            }
            return 2;
          }
        }
        return 200;
      }
      return 0;
    }
    return CudaDriverRoutine_b1250(*(_DWORD*)(a1 + 8), *(_DWORD*)(a1 + 12),
                                   (char*)a2);
  }
  if (v2 != 2) {
    if (v2 != 3) {
      return result;
    }
    return CudaDriverRoutine_b1250(*(_DWORD*)(a1 + 8), *(_DWORD*)(a1 + 12),
                                   (char*)a2);
  }
  if ((*(_BYTE*)a2 & 2) != 0) {
    {
      v12 = *(_QWORD*)(a1 + 16);
      __asm__ volatile("" ::"r"(v12));
    }
    v13 =
        CudaDriverRoutine_11abf0(*(_QWORD*)(a2 + 8) + 40LL, *(_DWORD*)(a1 + 8));
    if (v13 != 0) {
      {
        v14 = *(_QWORD*)(v13 + 80);
        __asm__ volatile("" ::"r"(v14));
      }
      if (v14 != 0) {
        {
          v15 = *(_DWORD**)(v14 + 1024);
          __asm__ volatile("" ::"r"(v15));
        }
        if (v15 != nullptr) {
          return CudaDriverStub_1a2350((__int64)v15, v12, v12);
        }
        v15 = CudaDriverRoutine_1a1f40(8);
        *(_QWORD*)(v14 + 1024) = v15;
        if (v15 != nullptr) {
          return CudaDriverStub_1a2350((__int64)v15, v12, v12);
        }
        return 2;
      }
    }
    return 200;
  }
  return 0;
}

__int64 nvidia_b3850(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64* v3;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int128 v42;
  __int64 v43;
  _QWORD* v44;
  int*** v45;
  char v46;
  char v47;
  __int64 v48;
  __int16 v49;
  _QWORD v53[4];

  v3 = a2 + 3;
  {
    v2 = a2[3];
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v6 = *((_DWORD*)a2 + 8);
    __asm__ volatile("" ::"r"(v6));
  }
  *((_DWORD*)a2 + 8) = v6 + 1;
  *((_BYTE*)a2 + 88) = 1;
  if (v2 != 0) {
    {
      v7 = *(_QWORD*)(a1 + 24);
      __asm__ volatile("" ::"r"(v7));
    }
    {
      v8 = *((unsigned int*)a2 + 11);
      __asm__ volatile("" ::"r"(v8));
    }
    {
      v9 = *(unsigned int*)(a1 + 8);
      __asm__ volatile("" ::"r"(v9));
    }
    if ((unsigned int)v9 <= 0x72) {
      goto LABEL_3;
    }
  LABEL_15:
    if (a2[10] + 115 > v9) {
      {
        v10 = *(_QWORD*)(a2[9] + 8 * v9 - 920);
        __asm__ volatile("" ::"r"(v10));
      }
      v11 = (__int64*)(v2 + v7 + v8);
      if ((*(_BYTE*)a1 & 1) == 0) {
        goto LABEL_4;
      }
    LABEL_17:
      v20 = CudaDriverRoutine_11abf0(*a2 + 40, *(_DWORD*)(a1 + 4));
      if (v20 != 0) {
        goto LABEL_18;
      }
    }
    return 200;
  }
  v18 = CudaDriverRoutine_105570((_QWORD*)*a2, a2[2], v3, nullptr, 0);
  if (v18 != 0) {
    return v18;
  }
  {
    v2 = *v3;
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v7 = *(_QWORD*)(a1 + 24);
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v8 = *((unsigned int*)a2 + 11);
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v9 = *(unsigned int*)(a1 + 8);
    __asm__ volatile("" ::"r"(v9));
  }
  if ((unsigned int)v9 > 0x72) {
    goto LABEL_15;
  }
LABEL_3:
  {
    v10 = CudaDriverData_1132220[v9];
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = (__int64*)(v2 + v7 + v8);
  if ((*(_BYTE*)a1 & 1) != 0) {
    goto LABEL_17;
  }
LABEL_4:
  v12 = BYTE3(v10);
  v13 = HIBYTE(v10) + BYTE6(v10);
  if (v12 + (unsigned __int64)BYTE4(v10) > v13) {
    v13 = v12 + BYTE4(v10);
  }
  if (v13 > 8) {
    if (v13 > 0x20) {
      if (v13 > 0x40) {
        if (v13 > 0x80) {
          return 200;
        }
        {
          v14 = *v11;
          __asm__ volatile("" ::"r"(v14));
        }
        {
          v17 = v11[1];
          __asm__ volatile("" ::"r"(v17));
        }
        {
          v15 = *v11 & 0xFFFFFF00LL;
          __asm__ volatile("" ::"r"(v15));
        }
        {
          v16 = *v11 & 0xFFFFFFFF00000000LL;
          __asm__ volatile("" ::"r"(v16));
        }
        if ((unsigned int)v12 + BYTE2(v10) > 0x40) {
          return 200;
        }
      }
      else {
        {
          v14 = *v11;
          __asm__ volatile("" ::"r"(v14));
        }
        v17 = 0;
        {
          v15 = *v11 & 0xFFFFFF00LL;
          __asm__ volatile("" ::"r"(v15));
        }
        {
          v16 = *v11 & 0xFFFFFFFF00000000LL;
          __asm__ volatile("" ::"r"(v16));
        }
        if ((unsigned int)v12 + BYTE2(v10) > 0x40) {
          return 200;
        }
      }
    }
    else {
      LODWORD(v14) = *(_DWORD*)v11;
      v16 = 0;
      v17 = 0;
      LODWORD(v15) = *(_DWORD*)v11 & 0xFFFFFF00;
      if ((unsigned int)v12 + BYTE2(v10) > 0x40) {
        return 200;
      }
    }
  }
  else {
    LOBYTE(v14) = *(_BYTE*)v11;
    LODWORD(v15) = 0;
    v16 = 0;
    v17 = 0;
    if ((unsigned int)v12 + BYTE2(v10) > 0x40) {
      return 200;
    }
  }
  v32 = v16 | (unsigned int)v15 | (unsigned __int8)v14;
  v33 = 2 * v17;
  if ((v10 & 0x4000000000LL) != 0) {
    v34 = v17 >> SBYTE4(v10);
  }
  else {
    v34 = ((2 * v17) << ((~BYTE4(v10)) & 63)) | (v32 >> SBYTE4(v10));
  }
  v35 = ((0xFFFFFFFFFFFFFFFFLL >> ((-BYTE3(v10)) & 63)) & v34) << SBYTE1(v10);
  if ((v10 & 0xFF000000) != 0) {
    v36 = BYTE1(v10) + BYTE3(v10);
  }
  else {
    v36 = BYTE1(v10);
  }
  if ((v10 & 0xFF000000) != 0) {
    v37 = v35;
  }
  else {
    v37 = 0;
  }
  if (BYTE6(v10) + (unsigned int)BYTE5(v10) > 0x40) {
    return 200;
  }
  if ((v10 & 0xFF000000000000LL) != 0) {
    v38 = v17 >> SHIBYTE(v10);
    v39 = (v33 << ((~HIBYTE(v10)) & 63)) | (v32 >> SHIBYTE(v10));
    if ((v10 & 0x4000000000000000LL) != 0) {
      v40 = v38;
    }
    else {
      v40 = v39;
    }
    v37 |= ((0xFFFFFFFFFFFFFFFFLL >> ((-BYTE6(v10)) & 63)) & v40) << v36;
  }
  *(_QWORD*)(a1 + 16) = v37;
  v20 = CudaDriverRoutine_11abf0(*a2 + 40, *(_DWORD*)(a1 + 4));
  if (v20 == 0) {
    return 200;
  }
LABEL_18:
  {
    v21 = *(_DWORD*)(v20 + 16);
    __asm__ volatile("" ::"r"(v21));
  }
  if (v21 <= 1) {
    if (v21 == 1) {
      if (*((_BYTE*)a2 + 36) == 0 && *((_BYTE*)a2 + 38) == 0) {
        return 500;
      }
    }
    else if (*((_BYTE*)a2 + 37) == 0) {
      return 500;
    }
    v22 = v20;
    v18 = CudaDriverRoutine_11b100(
        (int**)a2[8], *(_DWORD*)(a1 + 4), *(_QWORD*)v20, v6, *(_BYTE*)a1 & 1,
        *(unsigned int*)(a1 + 8), *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16));
    if (v18 != 0) {
      return v18;
    }
    {
      v21 = *(_DWORD*)(v22 + 16);
      __asm__ volatile("" ::"r"(v21));
    }
    v20 = v22;
  }
  v19 = 200;
  switch (v21) {
  case 0u:
    if (*((_BYTE*)a2 + 37) != 0) {
      return 0;
    }
    else {
      return 500;
    }
  case 1u:
  case 0xAu:
    v42 = *(_OWORD*)(a1 + 16);
    v43 = v20;
    v44 = (_QWORD*)*a2;
    {
      v45 = (int***)a2[7];
      __asm__ volatile("" ::"r"(v45));
    }
    {
      v46 = *((_BYTE*)a2 + 38);
      __asm__ volatile("" ::"r"(v46));
    }
    {
      v47 = *((_BYTE*)a2 + 36);
      __asm__ volatile("" ::"r"(v47));
    }
    {
      v48 = *((unsigned __int8*)a2 + 39);
      __asm__ volatile("" ::"r"(v48));
    }
    *(_OWORD*)v53 = *(_OWORD*)a1;
    *(_OWORD*)&v53[2] = v42;
    v18 = CudaDriverRoutine_b42b0(v44, v43, v45, v48, v47, v46, v6,
                                  (__int64)v11, (char*)v53, v10);
    if (v18 != 0) {
      return v18;
    }
    goto LABEL_86;
  case 2u:
  case 3u:
  case 4u:
  case 6u:
  case 7u:
  case 8u:
  case 9u: {
    v23 = *a2;
    __asm__ volatile("" ::"r"(v23));
  }
    {
      v24 = *((unsigned __int8*)a2 + 40);
      __asm__ volatile("" ::"r"(v24));
    }
    {
      v25 = *(_DWORD*)(a1 + 8);
      __asm__ volatile("" ::"r"(v25));
    }
    {
      v26 = *(_QWORD*)(a1 + 16);
      __asm__ volatile("" ::"r"(v26));
    }
    {
      v27 = *(_QWORD*)(v20 + 40);
      __asm__ volatile("" ::"r"(v27));
    }
    if (v27 == 0) {
      if ((unsigned __int8)v10 != 9 & (*(_BYTE*)(v20 + 8) & 4) != 0) {
        return 200;
      }
      if ((*(_BYTE*)(v20 + 8) & 0x20) == 0) {
        return 500;
      }
    }
    if ((unsigned __int8)v10 == 9) {
      if ((*(_BYTE*)(v20 + 8) & 4) != 0) {
        {
          v31 = *(_QWORD*)(v20 + 88) + v26;
          __asm__ volatile("" ::"r"(v31));
        }
      }
      else {
        {
          v28 = *(_QWORD*)(v23 + 160);
          __asm__ volatile("" ::"r"(v28));
        }
        if (v28 != 0) {
          v29 = v20;
          v30 = CudaDriverStub_102e00(*(_QWORD*)(v23 + 160));
          {
            v27 = *(_QWORD*)(v29 + 40);
            __asm__ volatile("" ::"r"(v27));
          }
          {
            v21 = *(_DWORD*)(v29 + 16);
            __asm__ volatile("" ::"r"(v21));
          }
          {
            v28 = *(_QWORD*)(*(_QWORD*)(v23 + 472) + 4472LL) - v30;
            __asm__ volatile("" ::"r"(v28));
          }
        }
        v31 = v27 + v26 + v28;
      }
    }
    else {
      v31 = v27 + v26;
    }
    {
      v49 = *(_WORD*)(v23 + 36);
      __asm__ volatile("" ::"r"(v49));
    }
    if ((v49 & 0x80) != 0) {
      if (v21 - 5 > 0xFFFFFFFD & v24 == 0 || v21 != 2) {
        goto LABEL_78;
      }
    }
    else if (v21 != 2) {
      goto LABEL_78;
    }
    if ((unsigned __int8)v10 != 1) {
      return 200;
    }
    if ((v49 & 0x10) != 0) {
      if (v25 == 4) {
        return 200;
      }
    }
    else if (v25 == 3) {
      return 200;
    }
  LABEL_78:
    v18 = CudaDriverRoutine_b3f80((__int64)v11, v10, 0, v31);
    if (v18 != 0) {
      return v18;
    }
  LABEL_86:
    v19 = 0;
    break;
  case 5u:
  case 0xCu:
    return v19;
  case 0xDu:
  case 0xEu:
  case 0xFu:
    v18 = CudaDriverRoutine_b41c0(a2[1], v20, *(_DWORD*)(a1 + 8),
                                  *(_QWORD*)(a1 + 24));
    if (v18 != 0) {
      return v18;
    }
    goto LABEL_86;
  case 0x10u:
    CudaDriverRoutine_b4500(a2[6], *((unsigned __int8*)a2 + 36), (_QWORD*)v20,
                            (__int64)v11, *(_QWORD*)(a1 + 16), v10);
    goto LABEL_86;
  case 0x11u:
    goto LABEL_86;
  default:
    return 999;
  }
  return v19;
}

__int64 nvidia_bc030(__int64 a1, _QWORD* a2, int* a3, _DWORD* a4, char a5)
{
  int v5;

  if (a3 == nullptr) {
    return 400;
  }
  {
    v5 = *a3;
    __asm__ volatile("" ::"r"(v5));
  }
  if (a4 != nullptr) {
    *(_DWORD*)a4 = v5;
  }
  if (v5 != 2) {
    if (v5 == 1) {
      return CudaDriverRoutine_bbec0(a1, a2, (__int64)a3, a5, 1);
    }
    return 400;
  }
  return 0;
}

__int64 nvidia_d2400(__int64 a1, __int64 a2, __int64* a3, __int64 a4, char a5)
{
  char* v7;
  __int64* v9;
  char* v10;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  _QWORD* v15;
  __int64 result;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE v22[472];

  v7 = "HOST";
  switch (*(_DWORD*)(a1 + 4)) {
  case 0:
    v9 = a3;
    if ((unsigned __int8)CudaDriverStub_4f840(a1) != 0) {
      v10 = "%s do not support cooperative launch when using multi-process "
            "service (MPS)";
      if (a5 != 0) {
        v7 = "Device graphs";
      }
      else {
        v7 = "Conditional node bodies";
      }
    }
    else {
      if (!CudaDriverStub_b9300(*(_QWORD*)(a1 + 32))) {
        goto LABEL_40;
      }
      v10 = "%s do not support kernels using CUDA dynamic parallelism";
      if (a5 != 0) {
        v7 = "Device graphs";
      }
      else {
        v7 = "Conditional node bodies";
      }
    }
    goto LABEL_21;
  case 1:
    v9 = a3;
    memcpy_plt((__int64)v22, a1 + 40, 0x1D8u);
    v12 = a2;
    v13 = CudaDriverRoutine_98340(a2);
    v14 = (__int64*)(a1 + 1200);
    v15 = (_QWORD*)(a1 + 512);
    if ((unsigned int)CudaDriverRoutine_c40e0((_DWORD*)(a1 + 40), v13,
                                              (_QWORD*)(a1 + 1200),
                                              (_QWORD*)(a1 + 512), 1, 1) != 0) {
      nvidia_ed630((__int64)"CUDA", 0,
                   "The memcopy node's operation is not supported from the "
                   "node's context");
      *v15 = 0;
      *v14 = 0;
      memcpy_plt(a1 + 40, (__int64)v22, 0x1D8u);
    LABEL_33:
      *(_QWORD*)(a4 + 16) = a1;
      *(_DWORD*)(a4 + 24) = 3;
      goto LABEL_34;
    }
    CudaDriverRoutine_98340(v12);
    *v14 = v12;
    v18 = CudaDriverRoutine_98340(v12);
    if (v18 != *v15 || (v19 = v18, cuda_driver_f7b60((int*)(a1 + 40), v18)) ||
        cuda_driver_f7b60((int*)(a1 + 240), v19) || *(_DWORD*)(a1 + 40) == 0 ||
        *(_DWORD*)(a1 + 240) == 0 || !CudaDriverRoutine_1b76a0(v19, a1 + 40)) {
      nvidia_ed630((__int64)"CUDA", 0,
                   "The memcopy operation is not supported in device launched "
                   "graphs or conditional bodies");
      goto LABEL_33;
    }
  LABEL_34:
    {
      v20 = *v14;
      __asm__ volatile("" ::"r"(v20));
    }
    if (*v9 != 0) {
      if (v20 != *v9) {
        nvidia_ed630((__int64)"CUDA", 0,
                     "All nodes within a device graph or conditional body must "
                     "use the same context");
        *(_QWORD*)(a4 + 16) = a1;
        *(_DWORD*)(a4 + 24) = 4;
      }
    }
    else {
      *v9 = v20;
    }
    *v15 = 0;
    *v14 = 0;
    memcpy_plt(a1 + 40, (__int64)v22, 0x1D8u);
    if (*(_QWORD*)(a4 + 16) != 0) {
      return 0;
    }
  LABEL_40:
    a3 = v9;
    if ((*(_DWORD*)(a1 + 4) & 0xFFFFFFFD) != 0) {
      return 1;
    }
  LABEL_41:
    {
      v21 = *(_QWORD*)(a1 + 1200);
      __asm__ volatile("" ::"r"(v21));
    }
    if (*a3 == 0) {
      *a3 = v21;
      return 1;
    }
    if (v21 == *a3) {
      return 1;
    }
    nvidia_ed630((__int64)"CUDA", 0,
                 "All nodes within a device graph or conditional body must use "
                 "the same context",
                 v7);
    v17 = 4;
    result = 0;
    *(_QWORD*)(a4 + 16) = a1;
  LABEL_23:
    *(_DWORD*)(a4 + 24) = v17;
    return result;
  case 2:
    goto LABEL_41;
  case 3:
    goto LABEL_20;
  case 4:
    v7 = "GRAPH";
    goto LABEL_20;
  case 5:
    if (a5 == 0) {
      return 1;
    }
    nvidia_ed630((__int64)"CUDA", 0,
                 "Empty nodes are not supported within device graphs", "HOST");
    goto LABEL_22;
  case 6:
    v7 = "EVENT_WAIT";
    goto LABEL_20;
  case 7:
    v7 = "EVENT_RECORD";
    goto LABEL_20;
  case 8:
    v7 = "EXT_SEMAS_SIGNAL";
    goto LABEL_20;
  case 9:
    v7 = "EXT_SEMAS_WAIT";
    goto LABEL_20;
  case 0xA:
    v7 = "MEM_ALLOC";
    goto LABEL_20;
  case 0xB:
    v7 = "MEM_FREE";
    goto LABEL_20;
  case 0xC:
    v7 = "BATCH_MEM_OP";
    goto LABEL_20;
  case 0xD:
    v7 = "CONDITIONAL";
    goto LABEL_20;
  default:
    v7 = "GRAPH_NODE_TYPE invalid";
  LABEL_20:
    v10 =
        "Device-launched graphs and conditional nodes do not support %s nodes";
  LABEL_21:
    nvidia_ed630((__int64)"CUDA", 0, v10, v7);
  LABEL_22:
    result = 0;
    *(_QWORD*)(a4 + 16) = a1;
    v17 = 3;
    goto LABEL_23;
  }
}

__int64 nvidia_edcc0(unsigned int* a1, __int64 a2, unsigned __int64* a3)
{
  unsigned int v4;
  void* v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  _BOOL4 v18;
  _BOOL4 v19;
  char* v20;
  unsigned __int64 v21;
  char* v22;
  unsigned __int64 v23;
  unsigned int v24;
  __int64 v25;
  unsigned __int64 v26;
  void* v27;
  unsigned __int64* v28;
  unsigned int v29;
  int v30;
  int v33;
  unsigned __int64* v34;

  if (CudaDriverData_1432de0 == 0) {
    *a3 = 0;
    return 0;
  }
  if (a1 != nullptr) {
    v4 = *a1;
    __asm__ volatile("" ::"r"(v4));
  }
  else {
    v4 = 0;
  }
  v6 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)&CudaDriverRoutine_74e0 +
                        (_QWORD)CudaDriverData_1422118);
  v7 = CudaDriverData_1432de0;
  {
    v8 = *(_QWORD*)((char*)&CudaDriverRoutine_7500 + (_QWORD)v6);
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v9 = *a3;
    __asm__ volatile("" ::"r"(v9));
  }
  v10 = 0;
  v11 = 0;
  v34 = a3;
  v12 = CudaDriverData_1432de0 << 8;
  v13 = CudaDriverData_1432de0;
  v33 = CudaDriverData_1432de0 + 1;
  v30 = CudaDriverData_1432de0 << 8;
  while (1) {
    v14 = strlen_plt(
        (const char*)(v8 + (unsigned int)(v12 - 25600 * (v13 / 0x64))));
    if (v14 + v11 > v9) {
      break;
    }
    v11 += v14;
    if (v7 == v10) {
      v10 = v33;
      break;
    }
    ++v10;
    --v13;
    v12 -= 256;
    if (v10 == 100) {
      goto LABEL_13;
    }
  }
  if (v10 == 0) {
    goto LABEL_27;
  }
LABEL_13:
  if (v10 >= 0x64) {
    v15 = 100;
  }
  else {
    v15 = v10;
  }
  v16 = v7 - v4;
  if (v7 < v4) {
    nvidia_ed630((__int64)"CUDA", 0,
                 "CUlogIterator is beyond the end of the logs");
    v17 = 1;
  LABEL_18:
    CudaDriverStub_12db80((char*)&CudaDriverRoutine_74e0 +
                          (_QWORD)CudaDriverData_1422118);
    *a3 = 0;
    return v17;
  }
  if (v16 <= v15) {
    if (v7 == v4) {
      v17 = 0;
      goto LABEL_18;
    }
    v26 = 0;
    v27 = CudaDriverData_1422118;
    v28 = v34;
    v25 = a2;
  }
  else {
    v18 = v10 < 0x64;
    v19 = v10 < v16;
    if (v18 && v19) {
      v20 = "The provided buffer is not large enough to hold all messages. "
            "Some messages will be missing\n";
    }
    else {
      v20 = "Log buffer has rolled over since the previous dump. The oldest "
            "messages will be missing\n";
    }
    if (v18 && v19) {
      v21 = 92;
    }
    else {
      v21 = 88;
    }
    if (v21 > v9) {
    LABEL_27:
      *a3 = 0;
      nvidia_ed630((__int64)"CUDA", 0,
                   "Provided buffer is not large enough to write any logs to");
      v22 = (char*)&CudaDriverRoutine_74e0 + (_QWORD)CudaDriverData_1422118;
    LABEL_28:
      CudaDriverStub_12db80(v22);
      return 1;
    }
    v4 = v7 - v15;
    v23 = v9 - v11;
    if (v9 - v11 < v21) {
      v24 = v30 - (v15 << 8);
      do {
        v11 -= strlen_plt(
            (const char*)(v8 + (unsigned int)(v24 - 25600 * (v4 / 0x64))));
        ++v4;
        v24 += 256;
        v23 = v9 - v11;
      } while (v9 - v11 < v21);
    }
    v25 = a2;
    v26 = snprintf_plt(a2, v23, "%s", v20);
    v7 = CudaDriverData_1432de0;
    v27 = CudaDriverData_1422118;
    v28 = v34;
    if (v4 == CudaDriverData_1432de0) {
      *v34 = v26;
      nvidia_ed630((__int64)"CUDA", 0,
                   "Provided buffer is not large enough to write any logs to");
      v22 = (char*)&CudaDriverRoutine_74e0 + (_QWORD)v27;
      goto LABEL_28;
    }
  }
  if (v4 < v7) {
    v29 = v4 << 8;
    do {
      v26 += snprintf_plt(
          v25 + v26, 0x100u, "%s",
          (const char*)(*(_QWORD*)((char*)&CudaDriverRoutine_7500 +
                                   (_QWORD)v27) +
                        (unsigned int)(v29 - 25600 * (v4 / 0x64))));
      ++v4;
      v29 += 256;
    } while (v4 < CudaDriverData_1432de0);
  }
  if (a1 != nullptr) {
    *a1 = v4;
  }
  CudaDriverStub_12db80((char*)&CudaDriverRoutine_74e0 + (_QWORD)v27);
  *v28 = v26;
  return 0;
}

__int64 nvidia_f94a0(__int64 a1, __int64 a2, char a3)
{
  int v3;
  __int64 v7;
  bool v8;
  char v10;
  bool v11;
  int v12;
  bool v13;
  bool v14;
  char v15;
  bool v17;
  bool v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  int v25;
  unsigned int v26;

  {
    v3 = *(_DWORD*)a2;
    __asm__ volatile("" ::"r"(v3));
  }
  if (*(_DWORD*)a2 > 2u) {
    return 0;
  }
  if (v3 == 0) {
    {
      v7 = *(_QWORD*)(a2 + 24);
      __asm__ volatile("" ::"r"(v7));
    }
    if (v7 != 0) {
      goto LABEL_5;
    }
    goto LABEL_8;
  }
  if (v3 == 1) {
    {
      v7 = *(_QWORD*)(a2 + 32);
      __asm__ volatile("" ::"r"(v7));
    }
    if (v7 != 0) {
    LABEL_5:
      v8 = !cuda_driver_predicates_1dc880(v7);
      goto LABEL_10;
    }
  LABEL_8:
    v10 = 0;
    goto LABEL_13;
  }
  {
    v8 = *(_BYTE*)(a2 + 153) == 0;
    __asm__ volatile("" ::"r"(v8));
  }
LABEL_10:
  v10 = !v8;
LABEL_13:
  v11 = cuda_driver_predicates_f7a00((int*)a2);
  {
    v12 = *(_DWORD*)a2;
    __asm__ volatile("" ::"r"(v12));
  }
  v13 = v11;
  if (*(_DWORD*)(a2 + 168) == 2) {
    if (v12 == 1) {
      CudaDriverStub_1dbab0(*(_QWORD*)(a2 + 32));
      {
        v12 = *(_DWORD*)a2;
        __asm__ volatile("" ::"r"(v12));
      }
      v14 = true;
      if (*(_DWORD*)a2 == 3) {
        goto LABEL_36;
      }
    }
    else {
      v14 = true;
      if (v12 == 3) {
        goto LABEL_36;
      }
    }
  LABEL_32:
    if (v12 == 2) {
      {
        v17 = ((*(_QWORD*)(a2 + 136) >> **(_DWORD**)(a1 + 64)) & 1LL) == 0;
        __asm__ volatile("" ::"r"(v17));
      }
    LABEL_34:
      {
        v18 = ((*(_QWORD*)(a2 + 144) >> **(_DWORD**)(a1 + 64)) & 1LL) == 0;
        __asm__ volatile("" ::"r"(v18));
      }
      goto LABEL_59;
    }
  LABEL_42:
    if (v12 == 1) {
      {
        v20 = *(_QWORD*)(a2 + 32);
        __asm__ volatile("" ::"r"(v20));
      }
      if (v20 != 0) {
        goto LABEL_45;
      }
    }
    else if (v12 == 0) {
      {
        v20 = *(_QWORD*)(a2 + 24);
        __asm__ volatile("" ::"r"(v20));
      }
      if (v20 != 0) {
      LABEL_45:
        v21 = CudaDriverRoutine_1dbb80(v20, *(_QWORD*)(a1 + 80));
        {
          v12 = *(_DWORD*)a2;
          __asm__ volatile("" ::"r"(v12));
        }
        v17 = v21 == 0;
        if (*(_DWORD*)a2 != 0) {
          goto LABEL_49;
        }
        goto LABEL_46;
      }
    }
    v17 = true;
    if (v12 != 0) {
      goto LABEL_49;
    }
  LABEL_46:
    v22 = 24;
    goto LABEL_54;
  }
  if (v12 != 3) {
    v14 = false;
    goto LABEL_32;
  }
  if (*(_BYTE*)(a2 + 88) == 0 &&
      (*((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
       2) != 0 &&
      *(_BYTE*)(*(_QWORD*)(a1 + 64) + 17096LL) != 0) {
    v15 = nvidia_1d9f90(*(_QWORD*)(a1 + 80));
    {
      v12 = *(_DWORD*)a2;
      __asm__ volatile("" ::"r"(v12));
    }
    v14 = v15 == 0 & v12 == 3;
    if (v12 != 3) {
      goto LABEL_32;
    }
  }
  else {
    v14 = true;
  }
LABEL_36:
  if (*(_BYTE*)(a2 + 88) != 0 ||
      (*((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
       2) == 0 ||
      *(_BYTE*)(*(_QWORD*)(a1 + 64) + 17096LL) == 0) {
    goto LABEL_68;
  }
  v19 = nvidia_1d9f90(*(_QWORD*)(a1 + 80));
  {
    v12 = *(_DWORD*)a2;
    __asm__ volatile("" ::"r"(v12));
  }
  if (v19 == 0) {
    goto LABEL_42;
  }
  v17 = false;
  if (v12 == 0) {
    goto LABEL_46;
  }
LABEL_49:
  if (v12 != 1) {
    if (v12 != 2 || a1 == 0) {
      goto LABEL_65;
    }
    goto LABEL_34;
  }
  v22 = 32;
LABEL_54:
  {
    v23 = *(_QWORD*)(a2 + v22);
    __asm__ volatile("" ::"r"(v23));
  }
  if (a1 != 0 && v23 != 0) {
    v23 = CudaDriverRoutine_1dbb80(v23, *(_QWORD*)(a1 + 80));
  }
  if (v23 != 0) {
    v18 = (CudaDriverRoutine_1db1b0(v23) & 0xE0000000000LL) == 0x20000000000LL;
  LABEL_59:
    v24 = v18;
    v25 = (a3 == 0) & (unsigned __int8)v24;
    if (v25 != 0) {
      v13 = false;
    }
    if ((v25 & 1) != 0) {
      goto LABEL_68;
    }
  }
LABEL_65:
  if (v17) {
  LABEL_68:
    if (((unsigned __int8)v10 & v13) != 0) {
      return 16;
    }
    else {
      return 64;
    }
  }
  if (*(_DWORD*)(a2 + 164) == **(_DWORD**)(a1 + 64) ||
      CudaDriverRoutine_f6e20((int*)a2) == *(_QWORD*)(a1 + 64) & !v14 &&
          *(_DWORD*)(a2 + 164) == -2) {
    return 0;
  }
  if (a3 != 0) {
    v26 = 4;
  }
  else {
    v26 = 1;
  }
  if (((unsigned __int8)v10 & v13) != 0) {
    return 0;
  }
  else {
    return v26;
  }
}

bool nvidia_126170(int** a1)
{
  int v1;

  {
    v1 = **a1;
    __asm__ volatile("" ::"r"(v1));
  }
  __builtin_arm_dmb(0xDu);
  return (signed __int32)(v1 - *((_DWORD*)a1 + 2)) >= 0;
}

__int64 nvidia_1a7d80(__int64 a1, __int64 a2, __int64 a3)
{
  return CudaDriverRoutine_208ed0(*(_QWORD*)(a1 + 2112), a2, a3);
}

__int64 nvidia_1bf0b0(__int64 a1, __int64 a2, __int64 a3)
{
  return CudaDriverRoutine_208ed0(*(_QWORD*)(a1 + 2112), a2, a3);
}

__int64 nvidia_1f1030(__int64 a1, __int64 a2, __int64 a3)
{
  return CudaDriverRoutine_208ed0(*(_QWORD*)(a1 + 2112), a2, a3);
}

__int64 nvidia_204850(__int64 a1, __int64 a2, int** a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int* v8;
  int v9;

  {
    v5 = *(_QWORD*)(*(_QWORD*)a1 + 8LL);
    __asm__ volatile("" ::"r"(v5));
  }
  v6 = CudaDriverRoutine_1dbb80((__int64)a3[2], *(_QWORD*)(v5 + 80));
  v7 = CudaDriverStub_1db800(v6);
  {
    v8 = a3[3];
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v9 = **a3;
    __asm__ volatile("" ::"r"(v9));
  }
  __builtin_arm_dmb(0xDu);
  if ((signed __int32)(v9 - *((_DWORD*)a3 + 2)) < 0) {
    return (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64))(
        *(_QWORD*)(v5 + 64) + 19112LL))(a2, 0, 0, v5, (__int64)v8 + v7);
  }
  else {
    return a2;
  }
}

__int64 nvidia_204900(int** a1)
{
  __int64 v2;
  int v3;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;

  v2 = CudaDriverRoutine_1dbfd0((__int64)a1[2]);
  {
    v3 = **a1;
    __asm__ volatile("" ::"r"(v3));
  }
  __builtin_arm_dmb(0xDu);
  if ((signed __int32)(v3 - *((_DWORD*)a1 + 2)) >= 0) {
    return 0;
  }
  v5 = v2;
  if (v2 == 0) {
    return 600;
  }
  CudaDriverStub_107f90(v2 + 1888);
  v6 = 0;
  {
    v7 = **a1;
    __asm__ volatile("" ::"r"(v7));
  }
  __builtin_arm_dmb(0xDu);
  if ((signed __int32)(v7 - *((_DWORD*)a1 + 2)) < 0) {
    do {
      v8 = CudaDriverStub_108fc0(v5 + 1904, v5 + 1888, 0xFFFFFFFFLL);
      {
        v9 = **a1;
        __asm__ volatile("" ::"r"(v9));
      }
      __builtin_arm_dmb(0xDu);
    } while ((signed __int32)(v9 - *((_DWORD*)a1 + 2)) < 0);
    if (v8 != 0) {
      v6 = 304;
    }
    else {
      v6 = 0;
    }
  }
  v10 = v6;
  CudaDriverStub_108070(v5 + 1888);
  return v10;
}

__int64 nvidia_20a960(_DWORD* a1, void* a2, __int64 a3)
{
  return CudaDriverRoutine_20b260(a1, a2, a3, nullptr, 0, 0);
}

__int64 nvidia_22bb00(__int64 a1, __int64 a2, __int64 a3)
{
  return CudaDriverRoutine_208ed0(*(_QWORD*)(a1 + 2112), a2, a3);
}

__int64 nvidia_22f640(__int64* a1, _DWORD* a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v11;
  __int64 v12;
  __int16 v13;
  char v14;
  __int64 v15;
  _DWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  struct {
    unsigned int v25;
    unsigned int v26;
  } v25_;
  struct {
    _DWORD v27[2];
    _QWORD v28[6];
    __int16 v29;
    char gap66_[6];
    __int64* v30;
    char gap80_[8];
    char v31;
    char gap89_[7];
    __int64 v32;
    char tail_[176];
  } v28_;
  _DWORD* v33;

  {
    v5 = *(_QWORD*)(a5 + 8);
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = *(_QWORD*)(a5 + 136);
    __asm__ volatile("" ::"r"(v6));
  }
  v33 = (_DWORD*)*a1;
  {
    v11 = *(_QWORD*)(a3 + 32);
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = *(_QWORD*)(v11 + 24);
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v13 = *(_WORD*)(*(_QWORD*)(v12 + 64) + 17281LL);
    __asm__ volatile("" ::"r"(v13));
  }
  {
    v14 = *(_BYTE*)(*(_QWORD*)(v12 + 16104) + 3096LL);
    __asm__ volatile("" ::"r"(v14));
  }
  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                 *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) +
                            (_QWORD)CudaDriverData_14225e0)) != 0) {
    v28_.v28[0] = *(_QWORD*)(v11 + 24);
    v28_.v28[1] = v11;
    v28_.v28[2] = a3;
    v28_.v28[3] = v5;
    {
      v15 = *(_QWORD*)(v6 + 8);
      __asm__ volatile("" ::"r"(v15));
    }
    v28_.v27[0] = 104;
    v28_.v31 = v14;
    v28_.v29 = v13;
    v28_.v32 = a5;
    v28_.v28[4] = v15;
    v28_.v30 = (__int64*)&v33;
    cuda_driver_20b420(0xBu, 2u, (__int64)&v28_);
  }
  if (CudaDriverStub_b9300(a3) && CudaDriverRoutine_bbdf0(a3)) {
    v16 = v33;
    {
      v17 = (unsigned __int64)(*(_QWORD*)(v6 + 8) + 512LL) >> 8;
      __asm__ volatile("" ::"r"(v17));
    }
    *((_QWORD*)v33 + 1) = 0x3200120AFLL;
    *(_DWORD*)v16 = 536944813;
    v16[1] = v17;
    v33 = v16 + 4;
  }
  if (*(_BYTE*)(*(_QWORD*)(v12 + 16104) + 3096LL) != 0 &&
      *(_BYTE*)(a5 + 197) == 0) {
    if (*(_QWORD*)(a3 + 832) != 0) {
      {
        v21 = *(_QWORD*)(v6 + 8);
        __asm__ volatile("" ::"r"(v21));
      }
      v28_.v27[0] = 541204678;
      v28_.v27[1] = v21 >> 40;
      LODWORD(v28_.v28[0]) = v21 >> 8;
      CudaDriverStub_640d0((__int64)v28_.v28 + 4, v5, 0x100u);
      v25_.v25 = 12;
      v25_.v26 = 64;
      result = CudaDriverRoutine_197480((__int64)v33, a2, 1u, &v25_.v26,
                                        (__int64)&v28_, 0x110u,
                                        (_QWORD*)(a3 + 832), &v25_.v25);
    }
    else {
      v22 = (__int64)v33;
      {
        v23 = *(_QWORD*)(v6 + 8);
        __asm__ volatile("" ::"r"(v23));
      }
      v24 = (__int64)(v33 + 3);
      *(_DWORD*)v33 = 541204678;
      *(_DWORD*)(v22 + 4) = v23 >> 40;
      *(_DWORD*)(v22 + 8) = v23 >> 8;
      CudaDriverStub_640d0(v24, v5, 0x100u);
      result = v22 + 268;
    }
  }
  else {
    v18 = (__int64)v33;
    {
      v19 = *(_QWORD*)(v6 + 8) >> 8;
      __asm__ volatile("" ::"r"(v19));
    }
    result = (__int64)(v33 + 4);
    *(_DWORD*)v33 = 536944813;
    *(_DWORD*)(v18 + 4) = v19;
    *(_QWORD*)(v18 + 8) = 0x3200120AFLL;
  }
  *a1 = result;
  return result;
}

__int64 nvidia_230600(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, unsigned int a7)
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
    _DWORD* v179;
    __int64 v180;
    char gap264_[160];
    unsigned __int64 v181;
    unsigned __int64 v182;
    unsigned __int64 v183;
  } v179_;
  struct {
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
  } v184_;
  _DWORD* v203;

  if (*(_DWORD*)(a6 + 404) == 0 &&
      (*(_DWORD*)a6 == 0 ||
       (unsigned __int64)CudaDriverRoutine_f8f00((_DWORD*)a6) >> 31 == 0)) {
    v8 = (_DWORD*)(a6 + 200);
    if (*(_DWORD*)(a6 + 200) == 0 ||
        (unsigned __int64)CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) >> 31 ==
            0) {
      memcpy_plt((__int64)&v179_.v179, a6, 0x1D8u);
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
          v59 = *(_QWORD*)(a6 + 416);
          if (v59 == 0) {
            return 0;
          }
          goto LABEL_58;
        }
      }
      else {
        v34 = *(_QWORD*)(a6 + 8);
        v35 = *(_DWORD*)(v34 + 44);
        v36 = *(_DWORD*)(v34 + 48);
        v37 = *(unsigned int*)(v34 + 52);
        v38 = v35 + *(int*)(v34 + 40);
        LOBYTE(v35) = v35 + 3;
        v39 = 1LL << v36;
        v40 = v38 + v36;
        v41 = 1LL << v35;
        v42 = 512LL << v40;
        v43 = *(_DWORD*)(v34 + 56);
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
        if (CudaDriverRoutine_86fe0_alt1(v34)) {
          v146 = *(_QWORD*)(v34 + 136);
          if (*(_DWORD*)v8 != 0) {
            goto LABEL_54;
          }
        }
        else {
          v146 = v9 * *(unsigned int*)(v34 + 56);
          if (*(_DWORD*)v8 != 0) {
            goto LABEL_54;
          }
        }
      }
      v46 = *(_QWORD*)(a6 + 208);
      v47 = *(_DWORD*)(v46 + 44);
      v48 = *(_DWORD*)(v46 + 48);
      v49 = *(unsigned int*)(v46 + 52);
      v50 = v47 + *(int*)(v46 + 40);
      LOBYTE(v47) = v47 + 3;
      v51 = 1LL << v48;
      v52 = v50 + v48;
      v53 = 1LL << v47;
      v54 = 512LL << v52;
      v55 = *(_DWORD*)(v46 + 56);
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
      if (CudaDriverRoutine_86fe0_alt1(v46)) {
        v145 = *(_QWORD*)(v46 + 136);
        v59 = *(_QWORD*)(a6 + 416);
        if (v59 == 0) {
          return 0;
        }
      }
      else {
        v145 = v57 * *(unsigned int*)(v46 + 56);
        v59 = *(_QWORD*)(a6 + 416);
        if (v59 == 0) {
          return 0;
        }
      }
    LABEL_58:
      v62 = *(_QWORD*)(a6 + 408);
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
        v64 = *(_QWORD*)(a6 + 192) + v63;
        v65 = *(_QWORD*)(a6 + 392) + v63;
        v179_.v183 = v64 & v148;
        v66 = v150 - (v64 & v148);
        v184_.v188 = v65 & v147;
        if (v66 >= v149 - (v65 & v147)) {
          v66 = v149 - (v65 & v147);
        }
        if (v59 - v63 < v66) {
          v66 = v59 - v63;
        }
        v184_.v191 = v66;
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
        v71 = *(_QWORD*)(a6 + 184);
        v72 = v62 - v67;
        v203 = v68;
        v73 = v71 + v67;
        v74 = *(_QWORD*)(a6 + 384) + v67;
        v179_.v182 = (v71 + v67) & v158;
        v75 = v164 - v179_.v182;
        v184_.v187 = v74 & v157;
        if (v164 - v179_.v182 >= v163 - (v74 & v157)) {
          v75 = v163 - (v74 & v157);
        }
        if (v72 >= v75) {
          v72 = v75;
        }
        v184_.v190 = v72;
        v173 = v184_.v201;
        if ((_DWORD)v179_.v179 != 0) {
          v76 = CudaDriverRoutine_f8f00(&v179_.v179);
          v175 = v67;
          v177 = CudaDriverRoutine_f8ed0(&v179_.v179) * v76;
          if (v184_.v184 != 0) {
            goto LABEL_76;
          }
        }
        else {
          v175 = v67;
          v177 = *(_QWORD*)(v179_.v180 + 136);
          if (v184_.v184 != 0) {
          LABEL_76:
            v77 = CudaDriverRoutine_f8f00(&v184_.v184);
            v78 = CudaDriverRoutine_f8ed0(&v184_.v184) * v77;
            v79 = v166 + (v73 >> v160) * v9;
            if ((_DWORD)v179_.v179 != 0) {
              goto LABEL_77;
            }
            goto LABEL_80;
          }
        }
        v78 = *(_QWORD*)(v184_.v185 + 136);
        v79 = v166 + (v73 >> v160) * v9;
        if ((_DWORD)v179_.v179 != 0) {
        LABEL_77:
          CudaDriverRoutine_f8f00(&v179_.v179);
          *(_DWORD*)v68 = 536969476;
          v80 = 1;
          v81 = CudaDriverRoutine_f8f00(&v179_.v179);
          v82 = v68;
          v83 = v79;
          goto LABEL_99;
        }
      LABEL_80:
        v84 = (_DWORD*)v179_.v180;
        if ((*(_BYTE*)(v179_.v180 + 32) & 0x40) != 0) {
          v85 = *(_DWORD*)(v179_.v180 + 52) << 6;
          v86 = v179_.v181;
          if (v184_.v201 != 0) {
          LABEL_82:
            v87 = *(_DWORD*)(v179_.v180 + 108);
            v85 = *(_DWORD*)(v179_.v180 + 12);
            v86 /= v87;
            goto LABEL_85;
          }
        }
        else {
          v85 = *(_DWORD*)(v179_.v180 + 112);
          v86 = v179_.v181;
          if (v184_.v201 != 0) {
            goto LABEL_82;
          }
        }
        v87 = 1;
      LABEL_85:
        v169 = v87;
        v88 = (unsigned int)(*(int*)(v179_.v180 + 16) +
                             *(int*)(v179_.v180 + 152) - 1) /
              *(_DWORD*)(v179_.v180 + 152);
        v89 = *(_BYTE*)(v179_.v180 + 40) & 0xF |
              (unsigned __int8)(16 * (*(_DWORD*)(v179_.v180 + 44) & 0xF)) |
              ((*(_DWORD*)(v179_.v180 + 48) & 0xF) << 8) | 0x1000;
        v90 = CudaDriverRoutine_86fe0_alt1(v179_.v180);
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
          if (v179_.v181 >= 0x10000) {
            goto LABEL_90;
          }
        }
        else {
          v68[2] = v85;
          v68[3] = v91;
          v92 = 5;
          *(_DWORD*)v68 = 537166282;
          v68[1] = v89;
          v96 = v84[5];
          if (v96 <= 1) {
            v96 = 1;
          }
          v68[4] = v96;
          if (v179_.v181 >= 0x10000) {
          LABEL_90:
            if (v184_.v201 != 0) {
              v93 = v84[27];
              v86 *= v93;
              v94 = v86 & ~(-1 << (v84[10] + 6));
              v95 = v94 / v93;
            }
            else {
              v94 = v86 & ~(-1 << (v84[10] + 6));
              v93 = v84[27];
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
        v82 = &v68[v92];
        v80 = v169;
        v68[v92] = 536969679;
        v81 = (unsigned __int16)v86 | ((unsigned __int16)v179_.v182 << 16);
      LABEL_99:
        v82[1] = v81;
        v98 = v165 + (v74 >> v159) * v161;
        if (v184_.v184 != 0) {
          CudaDriverRoutine_f8f00(&v184_.v184);
          v82[2] = 536969477;
          v99 = CudaDriverRoutine_f8f00(&v184_.v184);
          v100 = v82 + 4;
          v82[3] = v99;
          v101 = v98;
          goto LABEL_120;
        }
        v102 = (_DWORD*)v184_.v185;
        if ((*(_BYTE*)(v184_.v185 + 32) & 0x40) != 0) {
          v103 = *(_DWORD*)(v184_.v185 + 52) << 6;
          v104 = v184_.v186;
          v156 = v83;
          if (v184_.v201 != 0) {
          LABEL_103:
            v104 /= *(_DWORD*)(v184_.v185 + 108);
            v154 = *(_DWORD*)(v184_.v185 + 12);
            v170 = *(_DWORD*)(v184_.v185 + 108);
            goto LABEL_106;
          }
        }
        else {
          v103 = *(_DWORD*)(v184_.v185 + 112);
          v104 = v184_.v186;
          v156 = v83;
          if (v184_.v201 != 0) {
            goto LABEL_103;
          }
        }
        v154 = v103;
        v170 = v80;
      LABEL_106:
        v105 = (unsigned int)(*(int*)(v184_.v185 + 16) +
                              *(int*)(v184_.v185 + 152) - 1) /
               *(_DWORD*)(v184_.v185 + 152);
        v106 = *(_BYTE*)(v184_.v185 + 40) & 0xF |
               (unsigned __int8)(16 * (*(_DWORD*)(v184_.v185 + 44) & 0xF)) |
               ((*(_DWORD*)(v184_.v185 + 48) & 0xF) << 8) | 0x1000;
        v107 = CudaDriverRoutine_86fe0_alt1(v184_.v185);
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
          if (v184_.v186 >= 0x10000) {
            goto LABEL_111;
          }
        }
        else {
          v82[2] = 537166275;
          v82[3] = v106;
          v82[4] = v154;
          v82[5] = v108;
          v109 = 28;
          v113 = v102[5];
          if (v113 <= 1) {
            v113 = 1;
          }
          v82[6] = v113;
          v80 = v170;
          v83 = v156;
          if (v184_.v186 >= 0x10000) {
          LABEL_111:
            v155 = v109;
            if (v184_.v201 != 0) {
              v110 = v102[27];
              v104 *= v110;
              v111 = v104 & ~(-1 << (v102[10] + 6));
              v112 = v111 / v110;
            }
            else {
              v111 = v104 & ~(-1 << (v102[10] + 6));
              v110 = v102[27];
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
        v114[1] = (unsigned __int16)v104 | ((unsigned __int16)v184_.v187 << 16);
        v100 = (_DWORD*)((char*)v82 + v109 + 8);
      LABEL_120:
        *(_DWORD*)v100 = 537035014;
        v100[1] = v184_.v189 / v80;
        v100[2] = v184_.v190;
        v100[3] = 537166080;
        v100[4] = DWORDn(v83, sizeof(v83) / 4 - 1) & 0x1FFFF;
        v100[5] = v83;
        v100[6] = DWORDn(v101, sizeof(v101) / 4 - 1) & 0x1FFFF;
        v100[7] = v101;
        if (v184_.v201 != 0) {
          v115 = v184_.v192 & 7 | (unsigned __int8)(16 * (v184_.v193 & 7)) |
                 ((v184_.v194 & 7) << 8) | ((v184_.v195 & 7) << 12) |
                 ((v184_.v200 << 16) - 0x10000) & 0x30000 |
                 ((v184_.v198 << 20) - 0x100000) & 0x300000 |
                 ((v184_.v199 << 24) - 0x1000000) & 0x3000000;
          v100[8] = 537100736;
          v100[9] = v184_.v196;
          v100[10] = v184_.v197;
          v100[11] = v115;
          v69 = (__int64)(v100 + 12);
        }
        else {
          v69 = (__int64)(v100 + 8);
        }
        v116 = a7;
        v203 = (_DWORD*)v69;
        if ((_DWORD)v179_.v179 != 0) {
          v117 = 128;
        }
        else {
          v117 = 0;
        }
        if (v184_.v184 != 0) {
          v117 |= 0x100u;
        }
        v118 = v117 | 0x400;
        if (v173 == 0) {
          v118 = v117;
        }
        v70 = v184_.v190;
        if (v184_.v190 <= 1) {
          v119 = v118;
        }
        else {
          v119 = v118 | 0x200;
        }
        if (v184_.v191 != 0) {
          v120 = 0;
          v121 = 0;
          while (1) {
            v122 = (__int64)v203;
            if ((_DWORD)v179_.v179 != 0) {
              v123 = true;
              if (v184_.v184 != 0) {
                goto LABEL_139;
              }
            }
            else {
              v130 = CudaDriverRoutine_86fe0_alt1(v179_.v180);
              v116 = a7;
              v123 = v130;
              if (v184_.v184 != 0) {
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
            v131 = CudaDriverRoutine_86fe0_alt1(v184_.v185);
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
                v203[1] = v121 + v179_.v183;
                v133 = v203 + 2;
                v203 += 2;
                if (v124) {
                  goto LABEL_147;
                }
              LABEL_145:
                *(_DWORD*)v133 = 536969671;
                v133[1] = v121 + v184_.v188;
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
            v137 = v135 < 0xFFFFFFFFFFFF8000LL | v184_.v191 - 1 == v120;
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
            if (v184_.v202 != 0) {
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
            v66 = v184_.v191;
            v203 += 2;
            if (v135 < 0xFFFFFFFFFFFF8000LL | v184_.v191 - 1 == v120) {
              v142 = v116;
              if ((unsigned __int8)cuda_driver_misc_helpers_4bb0(v116) != 0) {
                v203 = (_DWORD*)CudaDriverRoutine_22d3e0((__int64)v203, v142);
              }
              v66 = v184_.v191;
              if (v135 >= 0xFFFFFFFFFFFF8000LL) {
                v116 = a7;
              }
              else {
                v116 = a7;
                if (v184_.v191 - 1 > v120) {
                  CudaDriverStub_5ab60(a3, &v203);
                  v116 = a7;
                  v68 = v203;
                  v66 = v184_.v191;
                }
              }
            }
            v120 = ++v121;
            if (v66 <= v121) {
              v69 = (__int64)v203;
              v70 = v184_.v190;
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
        v62 = *(_QWORD*)(a6 + 408);
        if (v67 >= v62) {
          v59 = *(_QWORD*)(a6 + 416);
          v63 = v151;
          goto LABEL_61;
        }
      }
    }
  }
  v11 = *(_QWORD*)(a6 + 416);
  v12 = (_DWORD*)*a1;
  v179_.v179 = (_DWORD*)*a1;
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
          CudaDriverStub_5ab60(a3, &v179_.v179);
        }
        v20 = v179_.v179;
        v21 = *(_QWORD*)(a6 + 400);
        v22 = *(unsigned __int8*)(a6 + 459);
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
            v20 = (_DWORD*)CudaDriverRoutine_22d3e0((__int64)v20, a7);
          }
          v18 += v24;
          v19 += v24;
          v23 -= v24;
        } while (v23 != 0);
        v179_.v179 = v20;
        v19 = CudaDriverRoutine_f8f00((_DWORD*)a6) + v172;
        v18 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) + v174;
        v17 = v176 + 1;
      } while ((unsigned __int64)(v176 + 1) < *(_QWORD*)(a6 + 408));
    }
    ++v168;
  } while (v168 < *(_QWORD*)(a6 + 416));
  v12 = v179_.v179;
LABEL_39:
  *a1 = (__int64)v12;
  return 0;
}

__int64 nvidia_23bbe0(__int64 a1, __int64 a2, __int64 a3)
{
  return CudaDriverRoutine_208ed0(*(_QWORD*)(a1 + 2112), a2, a3);
}

#pragma GCC visibility pop
