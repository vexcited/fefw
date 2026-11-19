#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* CudaDriverRoutine_a27f0(_BYTE* result);
_QWORD* CudaDriverRoutine_122550(_QWORD* result);
_QWORD* CudaDriverRoutine_208ba0(_QWORD* result, unsigned int, unsigned int,
                                 _QWORD*, _QWORD*);
_QWORD* CudaDriverRoutine_2221c0(__int64, __int64, unsigned __int64);
_QWORD* CudaDriverRoutine_81f80(__int64, __int64);
_QWORD* CudaDriverRoutine_91ae0(_QWORD* result);
_QWORD* CudaDriverRoutine_95cc0(_QWORD* result);
_QWORD* zstd_decompress_227d40(_QWORD* result);
__int64* CudaDriverRoutine_1caa40(__int64* result, unsigned int, unsigned int,
                                  __int64);
__int64 CudaDriverRoutine_1059a0(__int64, _QWORD*, __int64, int, __int64,
                                 __int64, char);
__int64 CudaDriverRoutine_107f40(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_1089c0(__int64 result, __int64);
__int64 CudaDriverRoutine_113ee0(__int64);
__int64 CudaDriverRoutine_11aed0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_123f20(_QWORD*, __int64);
__int64 CudaDriverRoutine_123fd0(__int64, const char*, __int64);
__int64 CudaDriverRoutine_1240c0(__int64);
__int64 CudaDriverRoutine_12a190();
__int64 CudaDriverRoutine_12e300();
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_15fd0(__int64);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64);
__int64 CudaDriverRoutine_1a2b00(__int64 result,
                                 __int64 (*)(_QWORD, _QWORD, __int64), __int64);
__int64 CudaDriverRoutine_1a3840(__int64, __int64);
__int64 CudaDriverRoutine_1a4200(__int64, __int64, unsigned __int64);
__int64 CudaDriverRoutine_1ba480(_QWORD*, __int64);
__int64 CudaDriverRoutine_1c2a70(__int64, unsigned int, unsigned int, __int64);
__int64 CudaDriverRoutine_1dd030(__int64);
__int64 CudaDriverRoutine_1ffda0(__int64**, unsigned int);
__int64 CudaDriverRoutine_200b60(__int64*, __int64);
__int64 CudaDriverRoutine_205fa0(int, __int64, __int64, __int64*);
__int64 CudaDriverRoutine_206060(__int64, __int64);
__int64 CudaDriverRoutine_2222a0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_239ba0(__int64);
__int64 CudaDriverRoutine_23bfe0(__int64);
__int64 CudaDriverRoutine_23c440(__int64, __int64);
__int64 CudaDriverRoutine_5bba0(__int64, unsigned int);
__int64 CudaDriverRoutine_6cac0(unsigned int, unsigned int, unsigned int,
                                unsigned int, unsigned int);
__int64 CudaDriverRoutine_77080();
__int64 CudaDriverRoutine_7f690(__int64, _QWORD*);
__int64 CudaDriverRoutine_816f0(int, int, int, int, int, int, int, int, int,
                                __int64);
__int64 CudaDriverRoutine_822e0(_QWORD*, unsigned int, __int64, __int64);
__int64 CudaDriverRoutine_92bd0();
__int64 CudaDriverRoutine_96e50(__int64 result, __int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_98a90(__int64, __int64, __int64);
__int64 CudaDriverRoutine_99510(__int64);
__int64 CudaDriverRoutine_997f0(__int64);
__int64 CudaDriverRoutine_99810(__int64);
__int64 CudaDriverRoutine_c3ca0(__int64);
__int64 CudaDriverRoutine_c3ef0(__int64 result);
__int64 CudaDriverRoutine_cbbc0(__int64);
__int64 CudaDriverRoutine_cbec0(__int64);
__int64 CudaDriverRoutine_cc3e0(__int64, __int64, _QWORD*, __int64);
__int64 CudaDriverRoutine_cc500(__int64);
__int64 CudaDriverRoutine_cfb90();
__int64 CudaDriverRoutine_d06f0(__int64, __int64);
__int64 CudaDriverRoutine_d1cc0(__int64);
__int64 CudaDriverRoutine_d1e40();
__int64 CudaDriverRoutine_db980(__int64 result);
__int64 CudaDriverRoutine_e61f0(__int64, _DWORD*, _DWORD*, _DWORD*, __int64,
                                __int64);
__int64 CudaDriverRoutine_ee030(__int64, __int64, _QWORD*, __int128*);
__int64 CudaDriverRoutine_f0380(_DWORD*, __int64, __int64, unsigned __int8,
                                unsigned __int8, __int64*);
__int64 CudaDriverRoutine_f2a00(_DWORD*, __int64, __int64, unsigned __int64*);
__int64 CudaDriverStub_102370(_QWORD);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_10f370(__int64);
__int64 CudaDriverStub_10f730(_QWORD);
__int64 CudaDriverStub_116790(_QWORD*, __int64, int*);
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_12dd30(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1a0ee0(void);
__int64 CudaDriverStub_1a0ee0_alt1(_QWORD, _QWORD);
__int64 CudaDriverStub_1a2960(__int64, __int64, __int64);
__int64 CudaDriverStub_1db7a0(__int64);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_4f840(_QWORD);
__int64 CudaDriverStub_5a6f0(__int64);
__int64 CudaDriverStub_b9360(__int64);
__int64 CudaDriverStub_b9660(__int64);
__int64 CudaDriverStub_f0f50(_QWORD);
__int64 cuda_driver_108520(__int64);
__int64 cuda_driver_108740(__int64 result, unsigned __int64*);
__int64 cuda_driver_120c20(__int64, __int64, __int64);
__int64 cuda_driver_1da1b0(__int64, __int64*, __int64, _QWORD*);
__int64 cuda_driver_204330(__int64);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_8c000(__int64, int, int);
__int64 cuda_driver_cc140(__int64, __int64);
__int64 cuda_driver_checks_bae90(__int64, __int64, __int64*);
__int64 cuda_driver_d5f10(__int64, __int64, _QWORD*, char);
__int64 cuda_driver_d6360(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                          __int64, __int64);
__int64 cuda_driver_db0e0(int*, _QWORD*, __int64);
__int64 cuda_driver_dd220(__int64*, __int64, unsigned int);
__int64 cuda_driver_helpers_b92e0(__int64);
__int64 cuda_driver_predicates_10f0d0(_QWORD*, __int64);
__int64 cuda_driver_unplaced_5_d5d50(__int64, __int64);
__int64 cuda_driver_unplaced_9_1bb6a0(__int64, __int64);
__int64 fopen_plt(const char*, const char*);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nvidia_ed630(__int64, __int64, __int64, ...);
bool CudaDriverRoutine_19b350(__int64, unsigned int, unsigned int,
                              unsigned int);
bool CudaDriverRoutine_5c090(__int64, unsigned __int64);
bool CudaDriverRoutine_8f360(__int64);
bool CudaDriverRoutine_8f480(_QWORD*);
bool CudaDriverRoutine_943d0(__int64);
bool CudaDriverRoutine_944a0(__int64);
bool CudaDriverRoutine_985b0(int);
bool CudaDriverRoutine_99df0(_DWORD*, __int64, int);
bool CudaDriverRoutine_9aa30(__int64);
bool CudaDriverRoutine_9aa40(__int64);
bool CudaDriverRoutine_9ab50(__int64);
bool CudaDriverRoutine_bbda0(__int64);
bool CudaDriverRoutine_e5960();
bool CudaDriverStub_b9300(__int64);
bool cuda_driver_helpers_b92e0_alt1(__int64);
bool cuda_driver_predicates_1dc880(__int64);
bool cuda_driver_predicates_1dc930(_QWORD*);
bool cuda_driver_predicates_9ac80(__int64);
bool cuda_driver_predicates_9ae50(__int64);
bool cuda_driver_predicates_f7a00(int*);
extern _QWORD CudaDriverData_1432130[1];
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern __int128 CudaDriverData_1115df0;
extern __int128 CudaDriverData_1115ea0;
extern __int16 CudaDriverData_1438958;
extern __int64 (*CudaDriverData_14230a8)();
extern __int64 (*CudaDriverRoutine_222190_ptr[2])();
extern __int64 CudaDriverData_1423000;
extern __int64 CudaDriverData_1423360;
extern __int64 CudaDriverData_143bd88;
extern char CudaDriverData_143590e;
extern int CudaDriverData_1133ad8[14];
extern int CudaDriverData_14324b8;
extern int CudaDriverData_14358d0;
extern int CudaDriverData_14358e4;
extern int CudaDriverData_143895c;
extern void (*CudaDriverData_1422020[18])();
extern void (*CudaDriverData_1423080)();
int fclose_plt(__int64);
int fprintf_plt(__int64, const char*, ...);
int sscanf_plt(const char*, const char*, ...);
unsigned __int64* CudaDriverRoutine_ee010(unsigned __int64* result, char);
unsigned __int64 CudaDriverRoutine_12dea0(atomic_ullong*);
unsigned __int64 CudaDriverRoutine_5bd00(__int64, unsigned __int64);
unsigned __int64 CudaDriverRoutine_5bda0(__int64);
unsigned __int64 cuda_driver_246d20(__int64);
unsigned __int64 zstd_227e00(unsigned __int64*, const char*);
void CudaDriverRoutine_41b8();
void CudaDriverRoutine_41bc();
void CudaDriverRoutine_4350();
void CudaDriverRoutine_4460();
void CudaDriverRoutine_4484();
void CudaDriverRoutine_7370();
void CudaDriverRoutine_7378();
void CudaDriverRoutine_7418();
void CudaDriverRoutine_7488();
__int64 nvidia_4e0c0(unsigned __int64* a1, unsigned __int64 a2,
                     unsigned __int64 a3, _QWORD* a4);
__int64 nvidia_70720(unsigned int a1, unsigned int a2, unsigned int a3,
                     __int64 a4);
__int64 nvidia_71020(unsigned int a1, unsigned int a2, unsigned int a3,
                     _QWORD* a4);
__int64 nvidia_71ec0(unsigned int a1, unsigned int a2, unsigned int a3,
                     __int64 a4, __int64 a5);
__int64 nvidia_737a0(unsigned int a1, unsigned int a2, unsigned int a3,
                     __int64 a4, __int64 a5);
__int64 nvidia_806c0(__int64 a1, __int64 a2, char* a3, _BYTE* a4, __int64* a5);
__int64 nvidia_8aae0(__int64 a1);
__int64 nvidia_8ee20(__int64 a1, unsigned __int64 a2, unsigned __int64* a3);
__int64 nvidia_91c20(__int64 a1, __int64 a2, _QWORD* a3, int a4, char a5,
                     int a6);
__int64 nvidia_92980(_QWORD* a1);
__int64 nvidia_92a90(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_92b30(__int64 result);
__int64 nvidia_98d00(_QWORD* a1, int a2);
__int64 nvidia_99530(__int64 a1);
bool nvidia_bbe30(__int64 a1);
__int64 nvidia_cc780(_QWORD* a1);
__int64 nvidia_f2cf0(unsigned int* a1, __int64* a2);
__int64 nvidia_fa210(__int64 result, __int64 a2, __int64 a3, int a4, __int64 a5,
                     char a6);
bool nvidia_116260(__int64 a1, __int64 a2);
__int64 nvidia_123860(__int64* a1, __int64 a2);
__int64 nvidia_124250(__int64 a1);
__int64 nvidia_125580(__int64 result);
__int64 nvidia_1c1e00(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4,
                      __int64* a5, __int64* a6, char* a7);
__int64 nvidia_1cd340(_DWORD** a1, __int64 a2);
__int64 nvidia_1fff90(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nvidia_240830(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _QWORD* a5, __int64 a6);

__int64 nvidia_4e0c0(unsigned __int64* a1, unsigned __int64 a2,
                     unsigned __int64 a3, _QWORD* a4)
{
  __int64 result;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 i;
  __int64 v18;
  unsigned __int64 v19;

  result = 0;
  if (a1 != nullptr && a2 <= a3) {
    result = 0;
    if (a4 != nullptr) {
      v6 = *a1;
      if (a3 <= *a1 - 1) {
        v9 = a1[1];
        v7 = a1 + 1;
        v8 = (_QWORD*)v9;
        v10 = a3 >> 6;
        if (v6 >= 0x41) {
          v11 = v8;
        }
        else {
          v11 = v7;
        }
        v12 = a2 >> 6;
        if (v10 >= a2 >> 6) {
          v13 = v10 + 1;
          while (1) {
            v14 = --v13 == v12 ? -1LL << a2 : -1LL;
            v15 =
                v13 == v10 ? 0xFFFFFFFFFFFFFFFFLL >> ((~(_BYTE)a3) & 63) : -1LL;
            v16 = v15 & v14 & v11[v13];
            if (v16 != 0) {
              break;
            }
          LABEL_35:
            result = 0;
            if (v13 <= v12) {
              return result;
            }
          }
          for (i = 51;; i -= 13) {
            if (((v16 >> ((unsigned __int8)i + 12)) & 1) != 0) {
              *a4 = i + 12 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 11)) & 1) != 0) {
              *a4 = i + 11 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 10)) & 1) != 0) {
              *a4 = i + 10 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 9)) & 1) != 0) {
              *a4 = i + 9 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 8)) & 1) != 0) {
              *a4 = i + 8 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 7)) & 1) != 0) {
              *a4 = i + 7 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 6)) & 1) != 0) {
              *a4 = i + 6 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 5)) & 1) != 0) {
              *a4 = i + 5 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 4)) & 1) != 0) {
              *a4 = i + 4 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 3)) & 1) != 0) {
              *a4 = i + 3 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 2)) & 1) != 0) {
              *a4 = i + 2 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 1)) & 1) != 0) {
              break;
            }
            if (i == -1) {
              goto LABEL_35;
            }
            v18 = i - 13;
            v19 = v16 >> i;
            if ((v19 & 1) != 0) {
              *a4 = v18 + 13 + (v13 << 6);
              return 1;
            }
          }
          *a4 = i + 1 + (v13 << 6);
          return 1;
        }
        else {
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 nvidia_70720(unsigned int a1, unsigned int a2, unsigned int a3,
                     __int64 a4)
{
  __int64 result;

  if (a4 == 0) {
    return 4;
  }
  result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    return (*(__int64 (**)(void))(
        *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8LL * a1) +
        23375528LL))();
  }
  return result;
}

__int64 nvidia_71020(unsigned int a1, unsigned int a2, unsigned int a3,
                     _QWORD* a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;

  if (a4 == nullptr) {
    return 4;
  }
  result = CudaDriverRoutine_6cac0(0x4FFu, a1, a2, a3, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_6cac0(0x4FFu, a1, a2, a3, 0xFFFFFFFF);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
      if ((_DWORD)result == 0) {
        if ((unsigned int)CudaDriverData_14324b8 < 0x63 ||
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8LL * a1) +
                      5LL) == 1) {
          v9 = CudaDriverStub_1a0ee0();
          if (v9 != 0) {
            v10 = *(_QWORD*)(v9 + 24);
            result = 0;
            *a4 = v10;
          }
          else {
            return 21;
          }
        }
        else {
          return 16;
        }
      }
    }
  }
  return result;
}

__int64 nvidia_71ec0(unsigned int a1, unsigned int a2, unsigned int a3,
                     __int64 a4, __int64 a5)
{
  __int64 result;

  if (a5 == 0) {
    return 4;
  }
  result = CudaDriverRoutine_6cac0(0x4FFu, a1, a2, a3, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    return (*(__int64 (**)(void))(
        *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8LL * a1) +
        23375664LL))();
  }
  return result;
}

__int64 nvidia_737a0(unsigned int a1, unsigned int a2, unsigned int a3,
                     __int64 a4, __int64 a5)
{
  __int64 result;

  if (a5 == 0) {
    return 4;
  }
  result = CudaDriverRoutine_6cac0(0x4FFu, a1, a2, a3, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    return (*(__int64 (**)(void))(
        *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8LL * a1) +
        23375856LL))();
  }
  return result;
}

__int64 nvidia_806c0(__int64 a1, __int64 a2, char* a3, _BYTE* a4, __int64* a5)
{
  __int64 result;
  int v12;
  __int64 v13;
  char v14;
  __int64 v15;
  int v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  int v30;
  bool v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  __int16 v38;
  bool v39;
  bool v40;
  __int64 v41;
  bool v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  bool v49;
  __int64 v51;
  bool v52;
  int v53;
  int v54;
  int v55;
  char* v56;
  __int64 v57;
  bool v58;
  bool v59;
  __int64 v60;

  *a5 = 0;
  result = (__int64)CudaDriverRoutine_a27f0(a4);
  if ((_DWORD)result == 0) {
    return result;
  }
  v12 = *(_DWORD*)(a2 + 364);
  if (v12 != 0) {
    v13 = a1;
  LABEL_5:
    if (v13 != *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) +
                          (_QWORD)CudaDriverData_1422118) &&
        *(_QWORD*)(v13 + 16320) == 0 && *(_QWORD*)(v13 + 16328) == 0) {
      return 0xFFFFFFFFLL;
    }
    goto LABEL_8;
  }
  v13 = a1;
  if ((*(_WORD*)(a2 + 36) & 1) != 0) {
    goto LABEL_5;
  }
LABEL_8:
  v14 = *(_BYTE*)(a2 + 36);
  v15 = v13;
  v16 = **(_DWORD**)(v13 + 64);
  v17 = *(_DWORD*)(v13 + 15896) != 0;
  v18 = cuda_driver_246d20((__int64)a4);
  v19 = CudaDriverRoutine_12e510(1, 80);
  *(_DWORD*)(v19 + 8) = v16;
  *(_DWORD*)(v19 + 40) = CudaDriverStub_12dd30(v19);
  *(_QWORD*)v19 = v15;
  *(_QWORD*)(v19 + 32) = a2;
  *(_BYTE*)(v19 + 56) = v14 & 1;
  *(_DWORD*)(v19 + 60) = v12;
  *(_QWORD*)(v19 + 16) =
      CudaDriverRoutine_2221c0((__int64)CudaDriverRoutine_222190_ptr[0],
                               (__int64)CudaDriverData_14230a8, 0x11u);
  v20 = zstd_decompress_227d40((char*)((_UNKNOWN*)0x7CLL) + 4);
  *(_QWORD*)(v19 + 48) = v20;
  *(_DWORD*)(v19 + 24) = zstd_227e00(v20, a3);
  *(_BYTE*)(v19 + 64) = v17;
  v21 = CudaDriverRoutine_81f80((__int64)a4, v18);
  *(_QWORD*)(v19 + 72) = v21;
  if (v21 == nullptr) {
    *(_QWORD*)CudaDriverData_1422020[0] = 0x43D680000000ALL;
    (*(void(__attribute__((noreturn))**)(void))CudaDriverData_1423080)();
  }
  v60 = v19;
  CudaDriverRoutine_11aed0(a2 + 40, (__int64)CudaDriverRoutine_816f0,
                           (__int64)&v60);
  v22 = *(_QWORD*)(a2 + 224);
  if (v22 != 0) {
    v51 = v19;
    v47 = a2;
    while (1) {
      if ((CudaDriverRoutine_77080() & 1) != 0 && *(_DWORD*)(v22 + 1000) != 2) {
        goto LABEL_14;
      }
      v24 = *(_QWORD*)(v22 + 96);
      if (v24 == 0) {
        break;
      }
      v25 = CudaDriverStub_1db800(v24);
      if (v25 == 0) {
        goto LABEL_21;
      }
      v26 = v25 -
            (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 18864LL))((void*)a1);
    LABEL_22:
      v27 = *(_DWORD*)(v22 + 980);
      v28 = *(_DWORD*)(a2 + 364);
      v57 = v26;
      v29 = v28 & 0xFFFFFFFD;
      v30 = v28 | 2;
      v32 = v27 == 6 && v29 == 1;
      v59 = v32;
      v58 = v30 == 3 &&
            (v27 <= 0x3E && ((1LL << v27) & 0x6000006000002050LL) != 0 ||
             v27 - 83 < 2);
      v33 = *(_DWORD*)(v22 + 1000);
      v34 = *(_DWORD*)(v22 + 16);
      v35 = *(_DWORD*)(v22 + 392);
      v36 = *(_DWORD*)(v22 + 376);
      v37 = *(_DWORD*)(v22 + 368);
      v56 = *(const char**)(v22 + 8);
      v38 = *(_WORD*)(v22 + 977);
      v54 = *(_DWORD*)(v22 + 128);
      v55 = *(_DWORD*)(v22 + 72);
      v53 = *(_DWORD*)(v22 + 880);
      v39 = CudaDriverStub_b9300(v22) ||
            (unsigned __int8)cuda_driver_helpers_b92e0(v22) != 0;
      v52 = v39;
      v40 = CudaDriverRoutine_bbda0(v22);
      v41 = *(_QWORD*)(v22 + 32);
      if (v41 == 0) {
        v23 = 0x36B40000000ALL;
        goto LABEL_12;
      }
      if (*(_QWORD*)(v41 + 24) == 0) {
        v23 = 0x36D40000000ALL;
      LABEL_12:
        *(_QWORD*)CudaDriverData_1422020[0] =
            v23 & 0xFFFFFFFFFFFFLL | 0x4000000000000LL;
        (*(void(__attribute__((noreturn))**)(void))CudaDriverData_1423080)();
      }
      v49 = v40;
      if (v33 == 2 && (unsigned int)CudaDriverStub_b9360(v22) != 0) {
        v23 = 0x36F40000000ALL;
        goto LABEL_12;
      }
      v42 = (v38 & 0x800) != 0;
      v43 = CudaDriverRoutine_12e510(1, 112);
      v44 = *(_QWORD*)v51;
      *(_QWORD*)(v43 + 24) = v51;
      *(_BYTE*)(v43 + 32) = v42;
      *(_BYTE*)(v43 + 33) = v33 == 2;
      *(_DWORD*)(v43 + 36) = v34;
      *(_DWORD*)(v43 + 64) = v35;
      *(_QWORD*)v43 = v22;
      *(_QWORD*)(v43 + 8) = v44;
      *(_QWORD*)(v43 + 40) = v57;
      *(_QWORD*)(v43 + 48) = v25;
      LODWORD(v44) = *(_DWORD*)(v22 + 64);
      *(_DWORD*)(v43 + 76) = v37;
      v19 = v51;
      *(_DWORD*)(v43 + 68) = v44;
      *(_DWORD*)(v43 + 72) = v36;
      *(_DWORD*)(v43 + 80) = v55;
      *(_DWORD*)(v43 + 84) = v54;
      *(_BYTE*)(v43 + 96) = v53 == 2;
      *(_DWORD*)(v43 + 16) = zstd_227e00(*(unsigned __int64**)(v51 + 48), v56);
      if (v33 == 2) {
        v45 = CudaDriverStub_b9660(v22);
      }
      else {
        v45 = 0;
      }
      *(_QWORD*)(v43 + 88) = v45;
      *(_QWORD*)(v43 + 104) = 0;
      v46 = *(_QWORD*)v43;
      a2 = v47;
      *(_BYTE*)(v43 + 97) = v52;
      *(_BYTE*)(v43 + 98) = v49;
      *(_BYTE*)(v43 + 99) = v58;
      *(_BYTE*)(v43 + 100) = v59;
      CudaDriverRoutine_2222a0(*(_QWORD*)(v51 + 16), v46, v43);
      if (*(_BYTE*)(v43 + 33) == 1 && (unsigned int)CudaDriverRoutine_7f690(
                                          v22, (_QWORD*)(v43 + 56)) != 0) {
        *(_QWORD*)CudaDriverData_1422020[0] = 0x4361C0000000ALL;
        (*(void(__attribute__((noreturn))**)(void))CudaDriverData_1423080)();
      }
      CudaDriverRoutine_822e0(*(_QWORD**)(v51 + 72), *(_DWORD*)(v22 + 16), v43,
                              *(_QWORD*)(v43 + 88));
    LABEL_14:
      v22 = *(_QWORD*)(v22 + 1144);
      if (v22 == 0) {
        goto LABEL_49;
      }
    }
    v25 = 0;
  LABEL_21:
    v26 = 0;
    goto LABEL_22;
  }
LABEL_49:
  *a5 = v19;
  return 0;
}

__int64 nvidia_8aae0(__int64 a1)
{
  return (unsigned int)(1 << (*(_BYTE*)(a1 + 40) + 6));
}

__int64 nvidia_8ee20(__int64 a1, unsigned __int64 a2, unsigned __int64* a3)
{
  *a3 = (16777619 *
         ((16777619 *
           ((16777619 *
             ((16777619 *
               ((16777619 *
                 ((16777619 * ((16777619 * ((unsigned __int8)a2 ^ 0x50C5D1F)) ^
                               BYTE1(a2))) ^
                  BYTE2(a2))) ^
                BYTE3(a2))) ^
              BYTE4(a2))) ^
            BYTE5(a2))) ^
          BYTE6(a2))) ^
        HIBYTE(a2);
  return 0;
}

__int64 nvidia_91c20(__int64 a1, __int64 a2, _QWORD* a3, int a4, char a5,
                     int a6)
{
  int v12;
  __int64 v13;
  char v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  __int128 v19;

  v19 = (__typeof__(v19)){0};
  CudaDriverRoutine_ee010((unsigned __int64*)&v19, 0);
  v12 = v19;
  v13 = v19 & 0xFFFFFFF8FFFFFFFFLL | 0x100000000LL;
  *(_QWORD*)&v19 = v13;
  v14 = *((_BYTE*)((_UNKNOWN*)0x1484LL) + (_QWORD)CudaDriverData_1422118);
  if ((v14 & 1) == 0) {
    if (a5 != 0) {
      v15 = *(_BYTE*)(a1 + 15904) != 0;
      if ((v12 & 0x7C000000) != 0xC000000) {
        goto LABEL_7;
      }
    }
    else {
      v15 = false;
      if ((v12 & 0x7C000000) != 0xC000000) {
        goto LABEL_7;
      }
    }
    goto LABEL_6;
  }
  v15 = true;
  if ((v12 & 0x7C000000) == 0xC000000) {
  LABEL_6:
    *(_QWORD*)&v19 = v13 & 0xFFFFFFF983FFFFFFLL | (unsigned int)(a4 << 26);
  }
LABEL_7:
  if ((v14 & 4) != 0 &&
      (*(_WORD*)((_BYTE*)((_UNKNOWN*)0x1858LL) +
                 (_QWORD)CudaDriverData_1422118) &
       0x200) != 0 &&
      cuda_driver_predicates_9ac80(*(_QWORD*)(a1 + 64)) &&
      (v19 & 0x7C000000) == 0xC000000) {
    v16 = v19 & 0xFFFFFFFF83FF81FFLL | (a4 << 26) | 0x1E00u;
  }
  else {
    v17 = (unsigned int)(a6 << 9);
    v16 = v19 & 0xFFFF7FFFFCFF81C0LL | v17 | 0x800001000011LL;
    if (!v15) {
      v16 = v19 & 0xFFFFFFFFFFFF81FFLL | v17;
    }
  }
  *(_QWORD*)&v19 = v16;
  return CudaDriverRoutine_ee030(a1, a2, a3, &v19);
}

__int64 nvidia_92980(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;

  if (CudaDriverRoutine_8f480(a1 + 106) ||
      CudaDriverRoutine_944a0((__int64)(a1 + 106)) ||
      (_BYTE)(result = ((__int64 (*)(__int64))cuda_driver_helpers_b92e0_alt1)(
                  (__int64)a1)) != 0) {
    if ((*((_BYTE*)&CudaDriverRoutine_4350 + (_QWORD)CudaDriverData_1422118) &
         1) != 0 ||
        (v3 = *(_QWORD*)(a1[4] + 24LL), !CudaDriverRoutine_943d0(v3))) {
      CudaDriverRoutine_91ae0(a1 + 106);
      if (CudaDriverRoutine_8f480(a1 + 106)) {
      LABEL_9:
        v4 = 1088;
      LABEL_13:
        v6 = *(_QWORD*)(a1[4] + 24LL) + v4;
        a1[132] = v6;
        return (*(__int64 (**)(_QWORD*))(v6 + 40))(a1 + 106);
      }
    }
    else {
      if (!CudaDriverRoutine_8f360(v3)) {
        CudaDriverRoutine_95cc0(a1 + 106);
      }
      if (CudaDriverRoutine_8f480(a1 + 106)) {
        goto LABEL_9;
      }
    }
    v5 = cuda_driver_helpers_b92e0_alt1((__int64)a1);
    v4 = 1088;
    if (!v5) {
      v4 = 1144;
    }
    goto LABEL_13;
  }
  return result;
}

__int64 nvidia_92a90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  if (CudaDriverRoutine_8f480((_QWORD*)(a2 + 848)) ||
      cuda_driver_helpers_b92e0_alt1(a2)) {
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)(a1 + 64) + 19664LL))(
        a1, a2, a3);
  }
  result = ((__int64 (*)(__int64))CudaDriverRoutine_944a0)(a2 + 848);
  if ((_BYTE)result != 0) {
    return (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(a1 + 64) +
                                                       19672LL))(a1, a2, a3);
  }
  return result;
}

__int64 nvidia_92b30(__int64 result)
{
  int v1;
  __int64 v2;
  _DWORD* v3;
  _QWORD v4[2];

  {
    v1 = *(_DWORD*)(result + 1072);
    __asm__ volatile("" ::"r"(v1));
  }
  if ((v1 & 1) == 0) {
    v2 = result;
    v3 = (_DWORD*)(result + 1072);
    *(_DWORD*)(result + 1072) = v1 | 1;
    if (CudaDriverRoutine_8f480((_QWORD*)(result + 848))) {
      *(_DWORD*)v3 |= 2u;
    }
    if (CudaDriverRoutine_944a0(v2 + 848)) {
      *(_DWORD*)v3 |= 4u;
    }
    {
      result = *(_QWORD*)(v2 + 1080);
      __asm__ volatile("" ::"r"(result));
    }
    if (result != 0) {
      v4[0] = *(_QWORD*)(v2 + 32);
      v4[1] = v3;
      return CudaDriverRoutine_1a2b00(
          result, (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_92bd0,
          (__int64)v4);
    }
  }
  return result;
}

__int64 nvidia_98d00(_QWORD* a1, int a2)
{
  __int64 result;
  __int64 v5;
  _DWORD* v6;
  _BOOL8 v7;
  int v8;
  __int64* i;
  __int64* j;
  char v11[128];

  result = fopen_plt((const char*)&CudaDriverRoutine_7488 +
                         (_QWORD)CudaDriverData_1422118 + 2,
                     "a");
  if (result != 0) {
    v5 = result;
    v6 = (_DWORD*)a1[8];
    v11[0] = 0;
    v7 = CudaDriverRoutine_99df0(v6, (__int64)v11, 128);
    v8 = CudaDriverStub_12dd30(v7);
    fprintf_plt(v5, "PID %u QMD dump for GPU %d %s after error %d\n", v8,
                *(_DWORD*)a1[8], v11, a2);
    for (i = (__int64*)a1[16]; i != nullptr; i = (__int64*)i[9]) {
      CudaDriverRoutine_200b60(i, v5);
    }
    for (j = (__int64*)a1[17]; j != nullptr; j = (__int64*)j[9]) {
      CudaDriverRoutine_200b60(j, v5);
    }
    return fclose_plt(v5);
  }
  return result;
}

__int64 nvidia_99530(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 64);
  if ((*(_BYTE*)(v1 + 16988) & 0x40) != 0) {
    return (*(__int64 (**)(__int64))(v1 + 21016))((__int64)(a1 + 64));
  }
  else {
    return 801;
  }
}

bool nvidia_bbe30(__int64 a1)
{
  return (*((_BYTE*)&CudaDriverRoutine_4460 + (_QWORD)CudaDriverData_1422118) &
          4) != 0 &&
         *(_QWORD*)(a1 + 1056) == 0 &&
         (*(_WORD*)(*(_QWORD*)(a1 + 32) + 36LL) & 1) == 0;
}

__attribute__((no_builtin("memset", "memcpy", "memmove")))
__int64 nvidia_cc780(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  _DWORD* v5;
  bool v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  _DWORD* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  _DWORD* v28;
  _DWORD* v29;
  _DWORD* v30;
  _DWORD* v31;
  _DWORD* v32;
  _DWORD* v33;
  _DWORD* v34;
  __int64* v35;
  __int64 v36;
  __int64 result;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 i;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  int v53;
  _BYTE* v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _BYTE* v65;
  _BYTE* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned int v70;
  __int64 v71;
  _BYTE* v72;
  __int64 v73;
  _BOOL4 v74;
  unsigned int v75;
  _BYTE* v76;
  int v77;
  int v78;
  __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  unsigned __int8* v83;
  unsigned int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned int v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  int v93;
  _BYTE* v94;
  __int64 v95;
  __int64 v96;
  bool v97;
  _BOOL4 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  bool v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  int v108;
  __int128* v109;
  char* v110;
  __int128 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  char v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  int v130;
  __int64 v131;
  unsigned __int8* v132;
  int v133;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64* v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  unsigned int v144;
  unsigned int v145;
  __int64 v146;
  unsigned int v147;
  int v148;
  bool v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int128 v153;
  __int64 v154;
  __int64 v155;
  _QWORD* v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 j;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  unsigned int v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  _BYTE* v173;
  __int64 v174;
  _BYTE* v175;
  __int64 v176;
  __int64* v177;
  int v178;
  __int64 v179;
  __int64* v180;
  int v181;
  __int64 v182;
  int* v183;
  int* v184;
  int v185;
  __int64 v186;
  _QWORD* v187;
  int* v188;
  int v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  int* v194;
  int v195;
  int* v196;
  int v197;
  int* v198;
  int v199;
  __int64 v200;
  __int64* v201;
  __int64 v202;
  __int64 v203;
  int* v204;
  int v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  int v209;
  __int64 v210;
  __int64 v211;
  __int64* v212;
  int* v213;
  _QWORD* v214;
  __int64 v215;
  __int64 v216;
  unsigned int v217;
  unsigned int v218;
  _QWORD* k;
  __int64 v220;
  _QWORD* v221;
  _BYTE* v222;
  __int64 v223;
  int v224;
  __int64 v225;
  int* v226;
  unsigned __int64 v227;
  _DWORD* v229;
  unsigned int v230;
  int v231;
  _BOOL4 v232;
  _DWORD* v233;
  unsigned int v234;
  __int64 v235;
  unsigned __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  unsigned __int8* v241;
  int v242;
  int v243;
  __int64 v244;
  __int64 v245;
  __int64* v246;
  int v247;
  int v248;
  int v249;
  __int64* v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  int v255;
  __int64 v256;
  int v257;
  __int64 v258;
  __int64* v259;
  unsigned int v260;
  __int64 v261;
  unsigned int v262;
  __int64 v263;
  _OWORD* v264;
  __int64 v265;
  _OWORD* v266;
  __int64 v267;
  void* v268;
  __int64 v269;
  _QWORD* v270;
  __int64 v271;
  __int64 v272;
  int v273;
  __int64 v274;
  __int64 v275;
  unsigned int v276;
  __int64 v277;
  __int64 v278;
  unsigned int v279;
  _QWORD* v280;
  int v281;
  int v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  int v286;
  __int64 v287;
  int* v288;
  unsigned __int64 v289;
  __int64 v291;
  unsigned __int64 v292;
  __int64 v293;
  _BYTE* v294;
  __int64 v295;
  __int64 v296;
  int v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  int v301;
  __int64 v302;
  __int64 v303;
  int v304;
  unsigned __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  int v309;
  unsigned int v310;
  int v311;
  __int64 v312;
  unsigned int v313;
  unsigned int v314;
  __int64 v315;
  int v316;
  __int64 v317;
  __int64 v318;
  int v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  _BYTE* v326;
  _BYTE* v327;
  __int64 v328;
  __int64 v329;
  __int64 v330;
  int* v331;
  unsigned __int64 v332;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  int* v337;
  unsigned __int64 v338;
  __int64 v340;
  int v341;
  __int64 v342;
  __int64 v343;
  __int64 v344;
  __int64 v345;
  __int64 v346;
  bool v347;
  _BOOL8 v348;
  __int64 v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
  __int64 v355;
  unsigned int* v356;
  unsigned __int64 v357;
  bool v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  __int128* v365;
  __int128 v366;
  unsigned int v367;
  __int64 v368;
  int v369;
  int v370;
  __int64 v371;
  bool v372;
  __int64 v373;
  __int64 v374;
  int v375;
  int v377;
  int v379;
  int v381;
  int v382;
  int v383;
  int v384;
  int v385;
  __int64 v386;
  unsigned __int8* v387;
  int v388;
  __int64 v390;
  __int64 v391;
  __int64* v392;
  __int64 v393;
  __int64 v394;
  __int64 v395;
  __int64 v396;
  __int64 v397;
  __int64 v398;
  _BYTE* v399;
  __int64 v400;
  __int64 v401;
  _BOOL4 v402;
  __int64 v403;
  __int64 v404;
  bool v405;
  bool v406;
  __int64 v407;
  __int64 v408;
  __int64 v409;
  int v410;
  __int64 v411;
  char* v412;
  __int64 v413;
  __int128 v414;
  __int128 v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  __int64 v419;
  int* v420;
  unsigned __int64 v421;
  __int64 v423;
  __int64 v424;
  unsigned __int64 v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  __int64 v429;
  unsigned __int8* v430;
  int v431;
  __int64 v432;
  unsigned int v433;
  __int64 v434;
  __int64 v435;
  int v436;
  int v437;
  int v438;
  unsigned int v439;
  __int64 v440;
  __int64* v441;
  __int64 v442;
  __int64* v443;
  __int64 v444;
  __int64 v445;
  unsigned int v446;
  __int64 v447;
  unsigned int v448;
  struct {
    int v449;
    __int16 v450;
  } v449_;
  struct {
    _BYTE v451[4];
    char v452;
  } v451_;
  __int64 v453[48];
  __int128 v454;
  __int128 v455;
  struct {
    __int128 v456;
    _QWORD* v457;
  } v456_;
  struct {
    _QWORD v458[3];
    char gap544_[8];
    _QWORD* v459;
  } v458_;

  {
    v1 = a1[13];
    __asm__ volatile("" ::"r"(v1));
  }
  v2 = (__int64)a1;
  v448 = 0;
  v458_.v459 = a1;
  a1[44] = 0;
  a1[45] = a1 + 44;
  v443 = a1 + 44;
  if (v1 == 0) {
    goto LABEL_361;
  }
  while (1) {
    {
      v3 = *(_DWORD*)(v1 + 1092);
      __asm__ volatile("" ::"r"(v3));
    }
    {
      v4 = *(_QWORD*)(v1 + 1216);
      __asm__ volatile("" ::"r"(v4));
    }
    *(_DWORD*)(v1 + 1324) = v3;
    if (v4 != 0) {
      {
        v5 = *(_DWORD**)(v4 + 1240);
        __asm__ volatile("" ::"r"(v5));
      }
      goto LABEL_8;
    }
    if ((unsigned __int8)CudaDriverRoutine_d1cc0(v1) != 0) {
      goto LABEL_25;
    }
    {
      v21 = *(_DWORD*)(v1 + 1036);
      __asm__ volatile("" ::"r"(v21));
    }
    if (v21 == 0) {
      goto LABEL_25;
    }
    {
      v22 = *(_QWORD*)(v1 + 1000);
      __asm__ volatile("" ::"r"(v22));
    }
    if (v21 < 8) {
      v23 = 0;
      v24 = nullptr;
      v25 = v21 & 7;
      v5 = nullptr;
      if (v25 == 0) {
        goto LABEL_8;
      }
    LABEL_76:
      v35 = (__int64*)(v22 + 16 * v23);
      do {
        {
          v36 = *v35;
          __asm__ volatile("" ::"r"(v36));
        }
        v35 += 2;
        {
          v5 = *(_DWORD**)(v36 + 1240);
          __asm__ volatile("" ::"r"(v5));
        }
        if (v24 != nullptr && *(_DWORD*)v5 <= *(_DWORD*)v24) {
          v5 = v24;
        }
        --v25;
        v24 = v5;
      } while (v25 != 0);
      goto LABEL_8;
    }
    v26 = (_QWORD*)(v22 + 64);
    v27 = 0;
    v24 = nullptr;
    do {
      {
        v28 = *(_DWORD**)(*(v26 - 8) + 1240LL);
        __asm__ volatile("" ::"r"(v28));
      }
      if (v24 != nullptr && *(_DWORD*)v28 <= *(_DWORD*)v24) {
        v28 = v24;
      }
      {
        v29 = *(_DWORD**)(*(v26 - 6) + 1240LL);
        __asm__ volatile("" ::"r"(v29));
      }
      if (v28 != nullptr && *(_DWORD*)v29 <= *(_DWORD*)v28) {
        v29 = v28;
      }
      {
        v30 = *(_DWORD**)(*(v26 - 4) + 1240LL);
        __asm__ volatile("" ::"r"(v30));
      }
      if (v29 != nullptr && *(_DWORD*)v30 <= *(_DWORD*)v29) {
        v30 = v29;
      }
      {
        v31 = *(_DWORD**)(*(v26 - 2) + 1240LL);
        __asm__ volatile("" ::"r"(v31));
      }
      if (v30 != nullptr && *(_DWORD*)v31 <= *(_DWORD*)v30) {
        v31 = v30;
      }
      {
        v32 = *(_DWORD**)(*v26 + 1240LL);
        __asm__ volatile("" ::"r"(v32));
      }
      if (v31 != nullptr && *(_DWORD*)v32 <= *(_DWORD*)v31) {
        v32 = v31;
      }
      {
        v33 = *(_DWORD**)(v26[2] + 1240LL);
        __asm__ volatile("" ::"r"(v33));
      }
      if (v32 != nullptr && *(_DWORD*)v33 <= *(_DWORD*)v32) {
        v33 = v32;
      }
      {
        v34 = *(_DWORD**)(v26[4] + 1240LL);
        __asm__ volatile("" ::"r"(v34));
      }
      if (v33 != nullptr && *(_DWORD*)v34 <= *(_DWORD*)v33) {
        v34 = v33;
      }
      {
        v24 = *(_DWORD**)(v26[6] + 1240LL);
        __asm__ volatile("" ::"r"(v24));
      }
      if (v34 != nullptr && *(_DWORD*)v24 <= *(_DWORD*)v34) {
        v24 = v34;
      }
      v27 -= 8;
      v26 += 16;
    } while (-(__int64)(v21 & 0xFFFFFFF8) != v27);
    v23 = -v27;
    v25 = v21 & 7;
    v5 = v24;
    if (v25 != 0) {
      goto LABEL_76;
    }
  LABEL_8:
    {
      v6 = *(_BYTE*)(v1 + 940) != 0 || v5 == nullptr;
      __asm__ volatile("" ::"r"(v6));
    }
    if (v6) {
      goto LABEL_25;
    }
    if (*(_DWORD*)(v1 + 4) == 0 && *(_BYTE*)(v1 + 1392) != 0) {
      {
        v7 = *(_QWORD*)(*(_QWORD*)(v1 + 1200) + 64LL);
        __asm__ volatile("" ::"r"(v7));
      }
      if ((*(_BYTE*)(v7 + 16996) & 4) == 0) {
        v8 = (*(__int64 (**)(__int64))(v7 + 18424))(34);
        if (v8 == 0) {
          v8 = (*(__int64 (**)(__int64))(v7 + 18424))(33);
        }
        v9 = CudaDriverData_143895c;
        if (CudaDriverData_143895c == 0) {
          v9 = v8;
        }
        if ((CudaDriverData_1438958 & 0x2000) == 0 &&
            *(_BYTE*)(v2 + 415) == 0 && *(_QWORD*)(v1 + 1216) == 0 &&
            v5[8] >= v9) {
        LABEL_25:
          v5 = (_DWORD*)(v1 + 1328);
          {
            v10 = *(int*)(v2 + 368) + 1;
            __asm__ volatile("" ::"r"(v10));
          }
          *(_DWORD*)(v2 + 368) = v10;
          *(_DWORD*)(v1 + 1328) = v10;
          *(_BYTE*)(v1 + 1332) = CudaDriverData_143590e == 0;
          **(_QWORD**)(v2 + 360) = v1 + 1328;
          *(_QWORD*)(v2 + 360) = v1 + 1352;
          {
            v11 = *(unsigned int*)(v1 + 1036);
            __asm__ volatile("" ::"r"(v11));
          }
          if ((_DWORD)v11 != 0) {
            {
              v12 = *(_BYTE**)(v1 + 1000);
              __asm__ volatile("" ::"r"(v12));
            }
            if (v12[15] != 1) {
              do {
                --*(_DWORD*)(*(_QWORD*)v12 + 1324LL);
                v12[15] = 1;
                {
                  v13 = *(_QWORD*)v12;
                  __asm__ volatile("" ::"r"(v13));
                }
                v12 += 16;
                v453[0] = v1;
                --v11;
                *(_BYTE*)(CudaDriverRoutine_1a3840(v13 + 1056, (__int64)v453) +
                          15) = 1;
              } while (v11 != 0);
            }
            v2 = (__int64)v458_.v459;
          }
        }
      }
    }
    ++v5[9];
    *(_QWORD*)(v1 + 1240) = v5;
    {
      v14 = *((_QWORD*)v5 + 2);
      __asm__ volatile("" ::"r"(v14));
    }
    if (v14 != 0) {
      *(_QWORD*)(v1 + 1264) = v14;
      {
        v15 = *(_QWORD*)(*((_QWORD*)v5 + 2) + 1256LL);
        __asm__ volatile("" ::"r"(v15));
      }
      *(_QWORD*)(v1 + 1256) = v15;
      if (v15 != 0) {
        *(_QWORD*)(v15 + 1264) = v1;
      }
      *(_QWORD*)(*((_QWORD*)v5 + 2) + 1256LL) = v1;
    }
    else {
      *(_QWORD*)(v1 + 1256) = *((_QWORD*)v5 + 1);
      *((_QWORD*)v5 + 1) = v1;
      {
        v16 = *(_QWORD*)(v1 + 1256);
        __asm__ volatile("" ::"r"(v16));
      }
      if (v16 != 0) {
        *(_QWORD*)(v16 + 1264) = v1;
      }
    }
    *((_QWORD*)v5 + 2) = v1;
    if (*(_BYTE*)(v1 + 1392) == 0) {
      goto LABEL_85;
    }
    {
      v17 = *(_QWORD*)(v1 + 1240);
      __asm__ volatile("" ::"r"(v17));
    }
    if (*(_DWORD*)(v1 + 1036) != 1 || v1 == *(_QWORD*)(v17 + 8) ||
        (v18 = *(_BYTE**)(v1 + 1000), v19 = *(_QWORD*)v18,
         *(_BYTE*)(*(_QWORD*)v18 + 1392LL) == 0) ||
        *(_DWORD*)(v1 + 4) != 0 || *(_DWORD*)(v19 + 4) != 0 || v18[8] != 0) {
      v20 = v1 + 1368;
      *(_QWORD*)(v1 + 1368) = v1;
      *(_QWORD*)(v1 + 1272) = v1 + 1368;
      *(_BYTE*)(v1 + 1381) = v1 == *(_QWORD*)(v17 + 8);
      if (*(_DWORD*)(v1 + 4) != 0) {
        if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v1 + 1200) + 64LL) + 16996LL) &
             4) == 0) {
          goto LABEL_84;
        }
        goto LABEL_83;
      }
    }
    else {
      {
        v20 = *(_QWORD*)(v19 + 1272);
        __asm__ volatile("" ::"r"(v20));
      }
      *(_QWORD*)(v1 + 1272) = v20;
    }
    ++*(_DWORD*)(v20 + 8);
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v1 + 1200) + 64LL) + 16996LL) & 4) ==
        0) {
      goto LABEL_84;
    }
  LABEL_83:
    if (*(_BYTE*)(*(_QWORD*)(v1 + 1272) + 13LL) != 0) {
    LABEL_84:
      ++*(_DWORD*)(*(_QWORD*)(v1 + 1240) + 32LL);
    }
  LABEL_85:
    if (*(_DWORD*)(v1 + 4) == 13 &&
        v1 == *(_QWORD*)(*(_QWORD*)(v1 + 1240) + 8LL)) {
      result = CudaDriverRoutine_cc500(v1);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    if (*(_BYTE*)(v2 + 415) == 0 && *(_BYTE*)(v2 + 416) == 0) {
      goto LABEL_5;
    }
    if (v3 != 0) {
      goto LABEL_5;
    }
    {
      v38 = *(_QWORD*)(v2 + 448);
      __asm__ volatile("" ::"r"(v38));
    }
    if (v1 == v38) {
      goto LABEL_5;
    }
    v453[0] = *(_QWORD*)(v2 + 448);
    if (v38 == 0) {
      {
        v39 = *(_QWORD*)(v2 + 440);
        __asm__ volatile("" ::"r"(v39));
      }
      v40 = CudaDriverRoutine_99510(v39);
      result = CudaDriverRoutine_cc3e0(v2, v39, v453, *(_QWORD*)(v40 + 40));
      if ((_DWORD)result != 0) {
        return result;
      }
      {
        v38 = v453[0];
        __asm__ volatile("" ::"r"(v38));
      }
      *(_QWORD*)(v2 + 448) = v453[0];
      *(_BYTE*)(v38 + 387) = 1;
      *(_DWORD*)(v38 + 1324) = 0;
    }
    result = cuda_driver_d5f10(v1, v38, nullptr, 1);
    if ((_DWORD)result != 0) {
      return result;
    }
    {
      v41 = *(_QWORD*)(v1 + 1136);
      __asm__ volatile("" ::"r"(v41));
    }
    *(_DWORD*)(v1 + 1324) = 1;
    if (v41 == 0) {
      {
        v42 = *(_QWORD*)(v2 + 448);
        __asm__ volatile("" ::"r"(v42));
      }
      if (*(_QWORD*)(v2 + 112) == v42) {
        *(_QWORD*)(v2 + 112) = *(_QWORD*)(v42 + 1128);
        if (*(_QWORD*)(v2 + 104) != v42) {
        LABEL_99:
          {
            v43 = *(_QWORD*)(v42 + 1136);
            __asm__ volatile("" ::"r"(v43));
          }
          *(_QWORD*)(*(_QWORD*)(v42 + 1128) + 1136LL) = v43;
          if (v43 != 0) {
            {
              v44 = *(_QWORD*)(v42 + 1128);
              __asm__ volatile("" ::"r"(v44));
            }
          LABEL_104:
            *(_QWORD*)(v43 + 1128) = v44;
            goto LABEL_105;
          }
          goto LABEL_105;
        }
      }
      else if (*(_QWORD*)(v2 + 104) != v42) {
        goto LABEL_99;
      }
      {
        v43 = *(_QWORD*)(v42 + 1136);
        __asm__ volatile("" ::"r"(v43));
      }
      *(_QWORD*)(v2 + 104) = v43;
      if (v43 != 0) {
        v44 = 0;
        goto LABEL_104;
      }
    LABEL_105:
      *(_OWORD*)(v42 + 1128) = (__typeof__(*(_OWORD*)(v42 + 1128))){0};
      {
        v45 = *(_QWORD*)(v2 + 112);
        __asm__ volatile("" ::"r"(v45));
      }
      if (v45 != 0) {
        *(_QWORD*)(v42 + 1128) = v45;
        {
          v46 = *(_QWORD*)(*(_QWORD*)(v2 + 112) + 1136LL);
          __asm__ volatile("" ::"r"(v46));
        }
        *(_QWORD*)(v42 + 1136) = v46;
        if (v46 != 0) {
          *(_QWORD*)(v46 + 1128) = v42;
        }
        *(_QWORD*)(*(_QWORD*)(v2 + 112) + 1136LL) = v42;
      }
      else {
        *(_QWORD*)(v42 + 1136) = *(_QWORD*)(v2 + 104);
        *(_QWORD*)(v2 + 104) = v42;
        {
          v47 = *(_QWORD*)(v42 + 1136);
          __asm__ volatile("" ::"r"(v47));
        }
        if (v47 != 0) {
          *(_QWORD*)(v47 + 1128) = v42;
        }
      }
      *(_QWORD*)(v2 + 112) = v42;
    }
  LABEL_5:
    {
      v1 = *(_QWORD*)(v1 + 1136);
      __asm__ volatile("" ::"r"(v1));
    }
    if (v1 == 0) {
      for (i = *(_QWORD*)(v2 + 104); i != 0; i = *(_QWORD*)(i + 1136)) {
        if (*(_DWORD*)(i + 4) != 0) {
          goto LABEL_115;
        }
        {
          v63 = *(_QWORD*)(i + 32);
          __asm__ volatile("" ::"r"(v63));
        }
        {
          v64 = *(unsigned int*)(i + 1092);
          __asm__ volatile("" ::"r"(v64));
        }
        {
          v65 = *(_BYTE**)(i + 1056);
          __asm__ volatile("" ::"r"(v65));
        }
        LODWORD(v453[1]) = 0;
        v453[0] = 0;
        if ((_DWORD)v64 == 0) {
          goto LABEL_315;
        }
        if (CudaDriverStub_b9300(v63)) {
          v66 = v65 + 10;
          do {
            while (*v66 != 1) {
              ++*((_DWORD*)v453 + (unsigned __int8)*(v66 - 2));
              --v64;
              v66 += 16;
              if (v64 == 0) {
                goto LABEL_315;
              }
            }
            {
              v67 = *(_QWORD*)(v66 - 10);
              __asm__ volatile("" ::"r"(v67));
            }
            *(_QWORD*)&v455 = i;
            v68 = CudaDriverRoutine_1a3840(v67 + 1000, (__int64)&v455);
            *(_BYTE*)(v68 + 8) = 0;
            *(_BYTE*)(v68 + 10) = 0;
            *(v66 - 2) = 0;
            *v66 = 0;
            v66 += 16;
            --v64;
          } while (v64 != 0);
          goto LABEL_315;
        }
        v440 = v63;
        v80 = 0;
        v81 = 0;
        v446 = 0;
        do {
          {
            v83 = &v65[16 * v80];
            __asm__ volatile("" ::"r"(v83));
          }
          if (v83[10] != 1) {
            {
              v82 = v83[8];
              __asm__ volatile("" ::"r"(v82));
            }
          LABEL_179:
            ++*((_DWORD*)v453 + v82);
            goto LABEL_180;
          }
          if (v83[15] != 0) {
            if (v83[15] != 2) {
              goto LABEL_191;
            }
            ++*((_DWORD*)v453 + v83[8]);
          LABEL_185:
            ++v81;
            v84 = v446;
            if (*(_BYTE*)(*(_QWORD*)v83 + 414LL) == 0) {
              v84 = v446 + 1;
            }
            v446 = v84;
            goto LABEL_180;
          }
          {
            v85 = *(_QWORD*)v83;
            __asm__ volatile("" ::"r"(v85));
          }
          *(_QWORD*)&v455 = i;
          CudaDriverRoutine_1a3840(v85 + 1000, (__int64)&v455);
          if (*(_DWORD*)(i + 4) != 0) {
            goto LABEL_191;
          }
          if (*(_QWORD*)(i + 1240) != *(_QWORD*)(v85 + 1240)) {
            goto LABEL_191;
          }
          if (*(_DWORD*)(v85 + 4) != 0) {
            goto LABEL_191;
          }
          {
            v88 = *(_DWORD*)(v85 + 1036);
            __asm__ volatile("" ::"r"(v88));
          }
          if (v88 == 0) {
            goto LABEL_191;
          }
          {
            v89 = *(__int64**)(v85 + 1000);
            __asm__ volatile("" ::"r"(v89));
          }
          {
            v90 = *(unsigned int*)(v85 + 1036);
            __asm__ volatile("" ::"r"(v90));
          }
          do {
            {
              v92 = *v89;
              __asm__ volatile("" ::"r"(v92));
            }
            v89 += 2;
            v91 = v92;
            if (*(_QWORD*)(v92 + 1240) != *(_QWORD*)(v85 + 1240)) {
              goto LABEL_191;
            }
            *(_QWORD*)&v455 = v91;
            CudaDriverRoutine_1a3840(v85 + 1000, (__int64)&v455);
            --v90;
          } while (v90 != 0);
          if (v88 > *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v85 + 1200) + 64LL) +
                               17004LL) &&
              v88 != 1 &&
              (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v85 + 1200) + 64LL) + 16996LL) &
               4) == 0) {
          LABEL_191:
            {
              v86 = *(_QWORD*)v83;
              __asm__ volatile("" ::"r"(v86));
            }
            *(_QWORD*)&v455 = i;
            v87 = CudaDriverRoutine_1a3840(v86 + 1000, (__int64)&v455);
            v82 = 0;
            *(_BYTE*)(v87 + 8) = 0;
            *(_BYTE*)(v87 + 10) = 0;
            v83[8] = 0;
            v83[10] = 0;
            goto LABEL_179;
          }
          {
            v93 = v83[10];
            __asm__ volatile("" ::"r"(v93));
          }
          ++*((_DWORD*)v453 + v83[8]);
          if (v93 == 1) {
            goto LABEL_185;
          }
        LABEL_180:
          ++v80;
        } while (v80 != v64);
        v63 = v440;
        if (v81 != 0) {
          v94 = v65 + 10;
          v95 = 0;
          v96 = v64;
          {
            v97 = DWORDn(v453[0], sizeof(v453[0]) / 4 - 1) == 0 ||
                  LODWORD(v453[1]) == 0;
            __asm__ volatile("" ::"r"(v97));
          }
          v98 = !v97;
          do {
            if (v98 && *(v94 - 2) == 1) {
              {
                v99 = *(_QWORD*)(v94 - 10);
                __asm__ volatile("" ::"r"(v99));
              }
              *(_QWORD*)&v455 = i;
              v100 = CudaDriverRoutine_1a3840(v99 + 1000, (__int64)&v455);
              --v81;
              *(_BYTE*)(v100 + 8) = 0;
              *(_BYTE*)(v100 + 10) = 0;
              *(v94 - 2) = 0;
              *v94 = 0;
            }
            if (*v94 == 1) {
              {
                v101 = *(_QWORD*)(v94 - 10);
                __asm__ volatile("" ::"r"(v101));
              }
              if ((*(_BYTE*)(v101 + 414) == 0 ||
                   *(_DWORD*)(v101 + 420) != *(_DWORD*)(i + 420)) &&
                  *(_BYTE*)(v101 + 415) == 0) {
                if (v95 == 0 || (*(_BYTE*)(v101 + 414) == 0
                                     ? (v102 = *(_BYTE*)(v95 + 414) == 0)
                                     : (v102 = true),
                                 !v102)) {
                  {
                    v95 = *(_QWORD*)(v94 - 10);
                    __asm__ volatile("" ::"r"(v95));
                  }
                }
              }
            }
            v94 += 16;
            --v96;
          } while (v96 != 0);
          v63 = v440;
          if (v81 != 0) {
            if (v95 != 0) {
              if (*(_BYTE*)(v95 + 414) != 0) {
                {
                  v130 = *(_DWORD*)(v95 + 420);
                  __asm__ volatile("" ::"r"(v130));
                }
              LABEL_282:
                *(_DWORD*)(i + 416) = v130;
                *(_BYTE*)(i + 413) = 1;
                goto LABEL_309;
              }
              if ((unsigned int)CudaDriverRoutine_1a4200(
                      i + 696,
                      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(i + 1200) + 64LL) +
                                 21648LL),
                      1u) == 0) {
                v130 = CudaDriverStub_f0f50(*(_QWORD*)(i + 696));
                goto LABEL_282;
              }
            }
          LABEL_309:
            while (2) {
              if (v65[10] != 1) {
                goto LABEL_308;
              }
              {
                v137 = *(_QWORD*)v65;
                __asm__ volatile("" ::"r"(v137));
              }
              if (*(_BYTE*)(i + 413) != 0) {
                if (*(_BYTE*)(v137 + 414) == 0) {
                  *(_DWORD*)(v137 + 420) = *(_DWORD*)(i + 416);
                  *(_BYTE*)(*(_QWORD*)v65 + 414LL) = 1;
                  *(_BYTE*)(*(_QWORD*)v65 + 415LL) = v446 > 1;
                  goto LABEL_308;
                }
                if (*(_DWORD*)(v137 + 420) == *(_DWORD*)(i + 416)) {
                LABEL_308:
                  --v64;
                  v65 += 16;
                  if (v64 == 0) {
                    goto LABEL_315;
                  }
                  continue;
                }
              }
              break;
            }
            *(_QWORD*)&v455 = i;
            v136 = CudaDriverRoutine_1a3840(v137 + 1000, (__int64)&v455);
            *(_BYTE*)(v136 + 8) = 0;
            *(_BYTE*)(v136 + 10) = 0;
            v65[8] = 0;
            v65[10] = 0;
            goto LABEL_308;
          }
        }
      LABEL_315:
        if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(i + 1200) + 64LL) + 16996LL) &
             4) != 0) {
          {
            v138 = *(unsigned int*)(i + 1036);
            __asm__ volatile("" ::"r"(v138));
          }
          if ((unsigned int)v138 >= 2) {
            {
              v139 = *(__int64**)(i + 1000);
              __asm__ volatile("" ::"r"(v139));
            }
            if (*((_BYTE*)v139 + 15) != 1) {
              while (*((_BYTE*)v139 + 15) != 2) {
                {
                  v140 = *v139;
                  __asm__ volatile("" ::"r"(v140));
                }
                v139 += 2;
                {
                  v141 = *(_QWORD*)(v140 + 32);
                  __asm__ volatile("" ::"r"(v141));
                }
                if (v141 ==
                    *(_QWORD*)(CudaDriverRoutine_99510(*(_QWORD*)(i + 1200)) +
                               8)) {
                  break;
                }
                if (--v138 == 0) {
                  goto LABEL_323;
                }
              }
              *(_BYTE*)(i + 677) = 1;
              result = CudaDriverRoutine_cbbc0(i);
              if ((_DWORD)result != 0) {
                return result;
              }
            }
          }
        }
      LABEL_323:
        if (*(_BYTE*)(i + 1392) == 0) {
          goto LABEL_334;
        }
        {
          v142 = *(_QWORD*)(i + 1272);
          __asm__ volatile("" ::"r"(v142));
        }
        if (*(_BYTE*)(v142 + 12) != 0) {
          goto LABEL_334;
        }
        {
          v143 = *(_QWORD*)(*(_QWORD*)(i + 1200) + 64LL);
          __asm__ volatile("" ::"r"(v143));
        }
        if ((*(_BYTE*)(v143 + 16996) & 4) == 0) {
          goto LABEL_334;
        }
        {
          v144 = *(_DWORD*)((char*)&CudaDriverRoutine_41bc +
                            (_QWORD)CudaDriverData_1422118);
          __asm__ volatile("" ::"r"(v144));
        }
        if (v144 == 0) {
          v147 = (*(__int64 (**)(__int64))(v143 + 18424))(41);
          {
            v145 = *(_DWORD*)(v142 + 8);
            __asm__ volatile("" ::"r"(v145));
          }
          if (v145 < v147) {
            goto LABEL_328;
          }
        LABEL_332:
          {
            v146 = *(_QWORD*)v142;
            __asm__ volatile("" ::"r"(v146));
          }
          goto LABEL_333;
        }
        {
          v145 = *(_DWORD*)(v142 + 8);
          __asm__ volatile("" ::"r"(v145));
        }
        if (v145 >= v144) {
          goto LABEL_332;
        }
      LABEL_328:
        if (v145 >= 2) {
          {
            v146 = *(_QWORD*)v142;
            __asm__ volatile("" ::"r"(v146));
          }
          if (*(_BYTE*)(*(_QWORD*)v142 + 414LL) == 0) {
            goto LABEL_334;
          }
        LABEL_333:
          result = CudaDriverRoutine_cbec0(v146);
          *(_BYTE*)(v142 + 12) = 1;
          if ((_DWORD)result != 0) {
            return result;
          }
        }
      LABEL_334:
        if (*(_BYTE*)(i + 941) != 0 && *(_BYTE*)(i + 677) != 0) {
          result = CudaDriverRoutine_cbec0(i);
          if ((_DWORD)result != 0) {
            return result;
          }
        }
        if (*(_QWORD*)(i + 1216) != 0) {
          {
            v148 = *(unsigned __int8*)(i + 672);
            __asm__ volatile("" ::"r"(v148));
          }
          v2 = (__int64)v458_.v459;
          *(_BYTE*)(i + 387) = 1;
          if (v148 != 0) {
            continue;
          }
        }
        else {
          v2 = (__int64)v458_.v459;
          if (*(_BYTE*)(i + 672) != 0) {
            continue;
          }
          {
            v131 = *(unsigned int*)(i + 1092);
            __asm__ volatile("" ::"r"(v131));
          }
          if ((_DWORD)v131 != 0 && *(_DWORD*)(i + 1324) >= (unsigned int)v131) {
            {
              v132 = (unsigned __int8*)(*(_QWORD*)(i + 1056) + 10LL);
              __asm__ volatile("" ::"r"(v132));
            }
            while (*(v132 - 2) != 0) {
              {
                v133 = *v132;
                __asm__ volatile("" ::"r"(v133));
              }
              v132 += 16;
              if (v133 == 1) {
                break;
              }
              if (--v131 == 0) {
                goto LABEL_339;
              }
            }
            *(_BYTE*)(i + 387) = 1;
          }
        }
      LABEL_339:
        v149 = CudaDriverStub_b9300(v63);
        *(_BYTE*)(i + 675) = v149;
        if (v149 && *(_QWORD*)(CudaDriverRoutine_98340(*(_QWORD*)(i + 1200)) +
                               1072) != 0) {
          {
            v150 = *(_QWORD*)(i + 1200);
            __asm__ volatile("" ::"r"(v150));
          }
          {
            v151 = *(_QWORD*)(i + 1240);
            __asm__ volatile("" ::"r"(v151));
          }
          *(_QWORD*)&v455 = 0;
          v152 = *(_QWORD*)(CudaDriverRoutine_98340(v150) + 1072);
          *(_QWORD*)&v153 = 0x100000001LL;
          *((_QWORD*)&v153 + 1) = 0x100000001LL;
          v453[3] = 0x100000001LL;
          LODWORD(v453[4]) = 0;
          {
            v154 = *(_QWORD*)(v152 + 392);
            __asm__ volatile("" ::"r"(v154));
          }
          *(_OWORD*)&v453[1] = v153;
          v453[5] = 0;
          v453[6] = 0;
          v453[0] = v154;
          CudaDriverRoutine_98340(v150);
          result =
              cuda_driver_d6360(&v455, v2, 0, 0, 0, 0, (__int64)v453, v150);
          if ((_DWORD)result != 0) {
            return result;
          }
          {
            v155 = *(_QWORD*)(v150 + 64);
            __asm__ volatile("" ::"r"(v155));
          }
          v156 = (_QWORD*)v455;
          v157 = v455;
          *(_DWORD*)(v455 + 956) = *(_DWORD*)(v155 + 4372);
          v453[0] = 0x200000000000000LL;
          result = cuda_driver_d5f10(i, v157, v453, 1);
          if ((_DWORD)result != 0) {
            return result;
          }
          {
            v158 = *(_QWORD*)(i + 24);
            __asm__ volatile("" ::"r"(v158));
          }
          if (*(_QWORD**)(v158 + 112) == v156) {
            *(_QWORD*)(v158 + 112) = v156[141];
            {
              v158 = *(_QWORD*)(i + 24);
              __asm__ volatile("" ::"r"(v158));
            }
            if (*(_QWORD**)(v158 + 104) == v156) {
              goto LABEL_348;
            }
          LABEL_345:
            {
              v159 = v156[142];
              __asm__ volatile("" ::"r"(v159));
            }
            *(_QWORD*)(v156[141] + 1136LL) = v159;
            if (v159 != 0) {
              {
                v160 = v156[141];
                __asm__ volatile("" ::"r"(v160));
              }
              goto LABEL_350;
            }
          }
          else {
            if (*(_QWORD**)(v158 + 104) != v156) {
              goto LABEL_345;
            }
          LABEL_348:
            *(_QWORD*)(v158 + 104) = v156[142];
            {
              v159 = *(_QWORD*)(*(_QWORD*)(i + 24) + 104LL);
              __asm__ volatile("" ::"r"(v159));
            }
            if (v159 != 0) {
              v160 = 0;
            LABEL_350:
              *(_QWORD*)(v159 + 1128) = v160;
            }
          }
          *(_OWORD*)(v156 + 141) = (__typeof__(*(_OWORD*)(v156 + 141))){0};
          {
            v161 = *(_QWORD*)(i + 24);
            __asm__ volatile("" ::"r"(v161));
          }
          if (i == *(_QWORD*)(v161 + 112)) {
            *(_QWORD*)(v161 + 112) = v156;
          }
          v156[141] = i;
          {
            v162 = *(_QWORD*)(i + 1136);
            __asm__ volatile("" ::"r"(v162));
          }
          v156[142] = v162;
          if (v162 != 0) {
            *(_QWORD*)(v162 + 1128) = v156;
          }
          *(_QWORD*)(i + 1136) = v156;
          ++*(_DWORD*)(v151 + 36);
          v156[155] = v151;
          if (i == *(_QWORD*)(v151 + 16)) {
            *(_QWORD*)(v151 + 16) = v156;
          }
          v156[158] = i;
          {
            v163 = *(_QWORD*)(i + 1256);
            __asm__ volatile("" ::"r"(v163));
          }
          v156[157] = v163;
          if (v163 != 0) {
            *(_QWORD*)(v163 + 1264) = v156;
          }
          *(_QWORD*)(i + 1256) = v156;
          *(_QWORD*)(i + 704) = v156;
          CudaDriverRoutine_db980(i);
        }
      LABEL_115:
        {
          v49 = *(_QWORD*)(i + 1056);
          __asm__ volatile("" ::"r"(v49));
        }
        {
          v50 = *(unsigned int*)(i + 1092);
          __asm__ volatile("" ::"r"(v50));
        }
        if ((_DWORD)v50 != 0) {
          v51 = 0;
          v52 = 0;
          v445 = 0;
          v53 = 0;
          while (1) {
            v54 = (_BYTE*)(v49 + 16 * v51);
            if (v54[15] == 0) {
              {
                v55 = *(_QWORD*)v54;
                __asm__ volatile("" ::"r"(v55));
              }
              v453[0] = i;
              CudaDriverRoutine_1a3840(v55 + 1000, (__int64)v453);
              if (*(_DWORD*)(i + 4) != 0 ||
                  *(_QWORD*)(i + 1240) != *(_QWORD*)(v55 + 1240) ||
                  *(_DWORD*)(v55 + 4) != 0 ||
                  (_DWORD)(v59 = *(unsigned int*)(v55 + 1036)) == 0) {
                v56 = 3;
                goto LABEL_124;
              }
              {
                v60 = *(__int64**)(v55 + 1000);
                __asm__ volatile("" ::"r"(v60));
              }
              {
                v439 = *(_DWORD*)(v55 + 1036);
                __asm__ volatile("" ::"r"(v439));
              }
              do {
                {
                  v62 = *v60;
                  __asm__ volatile("" ::"r"(v62));
                }
                v60 += 2;
                v61 = v62;
                if (*(_QWORD*)(v62 + 1240) != *(_QWORD*)(v55 + 1240)) {
                  v56 = 3;
                  goto LABEL_124;
                }
                v453[0] = v61;
                CudaDriverRoutine_1a3840(v55 + 1000, (__int64)v453);
                --v59;
              } while (v59 != 0);
              if (v439 <= *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v55 + 1200) + 64LL) +
                                     17004LL) ||
                  (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v55 + 1200) + 64LL) +
                             16996LL) &
                   4) != 0) {
                v56 = 2;
              }
              else if (v439 == 1) {
                v56 = 2;
              }
              else {
                v56 = 3;
              }
            LABEL_124:
              {
                v57 = *(_QWORD*)v54;
                __asm__ volatile("" ::"r"(v57));
              }
              v453[0] = i;
              *(_BYTE*)(CudaDriverRoutine_1a3840(v57 + 1000, (__int64)v453) +
                        15) = v56;
              v54[15] = v56;
              if (v56 != 2) {
                if (*(_DWORD*)(*(_QWORD*)v54 + 4LL) == 13) {
                  v58 =
                      *(_QWORD*)(CudaDriverRoutine_99510(*(_QWORD*)(i + 1200)) +
                                 24);
                  goto LABEL_129;
                }
                if (v445 == 0) {
                  v58 =
                      *(_QWORD*)(CudaDriverRoutine_99510(*(_QWORD*)(i + 1200)) +
                                 16);
                LABEL_129:
                  v445 = v58;
                }
                v53 = 1;
                goto LABEL_118;
              }
              ++v52;
            }
          LABEL_118:
            if (++v51 == v50) {
              goto LABEL_150;
            }
          }
        }
        v53 = 0;
        v445 = 0;
        v52 = 0;
      LABEL_150:
        if (*(_QWORD*)(i + 1216) != 0 && *(_DWORD*)(i + 1092) == 0) {
          v53 = 1;
          v445 = *(_QWORD*)(CudaDriverRoutine_99510(*(_QWORD*)(i + 1200)) + 24);
        }
        {
          v69 = *(_QWORD*)(i + 1200);
          __asm__ volatile("" ::"r"(v69));
        }
        if (v53 != 0) {
          v70 = v52 + 1;
        }
        else {
          v70 = v52;
        }
        {
          v71 = *(_QWORD*)(v69 + 64);
          __asm__ volatile("" ::"r"(v71));
        }
        if (v70 <= *(_DWORD*)(v71 + 17000)) {
          v74 = true;
          goto LABEL_165;
        }
        if ((*(_BYTE*)(v71 + 16996) & 4) != 0) {
          {
            v75 = *(_DWORD*)((char*)&CudaDriverRoutine_41b8 +
                             (_QWORD)CudaDriverData_1422118);
            __asm__ volatile("" ::"r"(v75));
          }
          if (v75 != 0) {
            if (v70 > v75) {
              goto LABEL_170;
            }
          LABEL_274:
            v74 = false;
          LABEL_165:
            v2 = (__int64)v458_.v459;
          }
          else {
            v75 = (*(__int64 (**)(__int64))(v71 + 18424))(40);
            if (v70 <= v75) {
              goto LABEL_274;
            }
          LABEL_170:
            if ((_DWORD)v50 == 0) {
              v74 = v75 != 0;
              goto LABEL_165;
            }
            v76 = (_BYTE*)(v49 + 15);
            v77 = 0;
            v78 = 0;
            do {
              if (*v76 == 2) {
                if (*(v76 - 7) != 0) {
                  ++v78;
                }
                else {
                  {
                    v79 = *(_QWORD*)(v76 - 15);
                    __asm__ volatile("" ::"r"(v79));
                  }
                  v453[0] = i;
                  *(_BYTE*)(CudaDriverRoutine_1a3840(v79 + 1000,
                                                     (__int64)v453) +
                            15) = 3;
                  *v76 = 3;
                  ++v77;
                }
              }
              --v50;
              v76 += 16;
            } while (v50 != 0);
            v2 = (__int64)v458_.v459;
            v74 = v78 + 1 <= v75;
            if (v77 != 0) {
              if (v445 == 0) {
                v445 = *(
                    _QWORD*)(CudaDriverRoutine_99510(*(_QWORD*)(i + 1200)) + 8);
              }
              goto LABEL_227;
            }
          }
          if (v53 != 0) {
            goto LABEL_227;
          }
          goto LABEL_229;
        }
        if (v445 == 0) {
          v445 = *(_QWORD*)(CudaDriverRoutine_99510(v69) + 16);
          if ((_DWORD)v50 != 0) {
            goto LABEL_160;
          }
        LABEL_225:
          v2 = (__int64)v458_.v459;
          goto LABEL_226;
        }
        if ((_DWORD)v50 == 0) {
          goto LABEL_225;
        }
      LABEL_160:
        v72 = (_BYTE*)(v49 + 15);
        v2 = (__int64)v458_.v459;
        do {
          if (*v72 == 2) {
            {
              v73 = *(_QWORD*)(v72 - 15);
              __asm__ volatile("" ::"r"(v73));
            }
            v453[0] = i;
            *(_BYTE*)(CudaDriverRoutine_1a3840(v73 + 1000, (__int64)v453) +
                      15) = 3;
            *v72 = 3;
          }
          --v50;
          v72 += 16;
        } while (v50 != 0);
      LABEL_226:
        v74 = true;
      LABEL_227:
        if (*(_DWORD*)(i + 4) != 0) {
          continue;
        }
        result = cuda_driver_cc140(i, v445);
        if ((_DWORD)result != 0) {
          return result;
        }
      LABEL_229:
        if (*(_DWORD*)(i + 4) != 0 ||
            v74 &&
                (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(i + 1200) + 64LL) + 17012LL) &
                 1) == 0) {
          continue;
        }
        v451_.v452 = 0;
        v451_.v451[0] = 0;
        v455 = (__typeof__(v455)){0};
        v456_.v456 = (__typeof__(v456_.v456)){0};
        {
          v103 = *(unsigned int*)(i + 1092);
          __asm__ volatile("" ::"r"(v103));
        }
        if ((int)v103 < 1) {
          goto LABEL_297;
        }
        v104 = v103 + 1;
        v105 = 16 * v103;
        while (2) {
          {
            v106 = *(_QWORD*)(i + 1056) + v105;
            __asm__ volatile("" ::"r"(v106));
          }
          {
            v107 = *(_QWORD*)(v106 - 16);
            __asm__ volatile("" ::"r"(v107));
          }
          {
            v108 = *(unsigned __int8*)(v106 - 8);
            __asm__ volatile("" ::"r"(v108));
          }
          v449_.v449 = *(_DWORD*)(v106 - 7);
          v449_.v450 = *(_WORD*)(v106 - 3);
          if (*(_BYTE*)(v106 - 1) == 2) {
            if (*(_QWORD*)(i + 1240) == *(_QWORD*)(v107 + 1240)) {
              v453[0] = i;
              CudaDriverRoutine_1a3840(v107 + 1000, (__int64)v453);
              if (BYTE8(v455) == 0) {
                goto LABEL_243;
              }
            LABEL_240:
              *(_QWORD*)&v454 = v107;
              if (v108 != 0) {
                v109 = &v455;
                v110 = &v451_.v452;
              }
              else {
                v109 = &v456_.v456;
                v110 = v451_.v451;
              }
              BYTE8(v454) = v108;
              *(_DWORD*)((char*)&v454 + 9) = v449_.v449;
              *(_WORD*)((char*)&v454 + 13) = v449_.v450;
              HIBYTE(v454) = 2;
              if (*(_QWORD*)v109 != 0) {
                goto LABEL_248;
              }
            LABEL_234:
              *v109 = v454;
              goto LABEL_235;
            }
            if (BYTE8(v455) != 0) {
              goto LABEL_240;
            }
          LABEL_243:
            v111 = v455;
            *(_QWORD*)&v455 = v107;
            BYTE8(v455) = v108;
            *(_DWORD*)((char*)&v455 + 9) = v449_.v449;
            v454 = v111;
            *(_WORD*)((char*)&v455 + 13) = v449_.v450;
            HIBYTE(v455) = 2;
            if ((_QWORD)v111 != 0) {
              v109 = &v456_.v456;
              v110 = v451_.v451;
              if ((_QWORD)v456_.v456 == 0) {
                goto LABEL_234;
              }
            LABEL_248:
              {
                v112 = *(_QWORD*)(i + 1200);
                __asm__ volatile("" ::"r"(v112));
              }
              {
                v113 = *(_QWORD*)(i + 1240);
                __asm__ volatile("" ::"r"(v113));
              }
              {
                v114 = *(_QWORD*)(i + 24);
                __asm__ volatile("" ::"r"(v114));
              }
              memset(&v453[1], 0, 48);
              v458_.v458[0] = 0;
              v115 = *(_QWORD*)(CudaDriverRoutine_99510(v112) + 32);
              *(__int64*)((char*)&v453[2] + 4) = 0x100000001LL;
              DWORDn(v453[3], sizeof(v453[3]) / 4 - 1) = 1;
              v453[0] = v115;
              CudaDriverRoutine_98340(v112);
              result = cuda_driver_d6360(v458_.v458, v114, 0, 0, 0, 0,
                                         (__int64)v453, v112);
              if ((_DWORD)result != 0) {
                return result;
              }
              {
                v116 = v458_.v458[0];
                __asm__ volatile("" ::"r"(v116));
              }
              *(_BYTE*)(v458_.v458[0] + 673LL) = 1;
              *(_DWORD*)(v116 + 956) =
                  *(_DWORD*)(*(_QWORD*)(v112 + 64) + 4372LL);
              result = CudaDriverRoutine_d06f0(v116, 0);
              if ((_DWORD)result != 0) {
                return result;
              }
              {
                v117 = v458_.v458[0];
                __asm__ volatile("" ::"r"(v117));
              }
              *(_BYTE*)(v458_.v458[0] + 387LL) = 1;
              {
                v118 = *(_QWORD*)(i + 24);
                __asm__ volatile("" ::"r"(v118));
              }
              if (*(_QWORD*)(v118 + 112) == v117) {
                *(_QWORD*)(v118 + 112) = *(_QWORD*)(v117 + 1128);
                {
                  v118 = *(_QWORD*)(i + 24);
                  __asm__ volatile("" ::"r"(v118));
                }
                if (*(_QWORD*)(v118 + 104) == v117) {
                  goto LABEL_255;
                }
              LABEL_252:
                {
                  v119 = *(_QWORD*)(v117 + 1136);
                  __asm__ volatile("" ::"r"(v119));
                }
                *(_QWORD*)(*(_QWORD*)(v117 + 1128) + 1136LL) = v119;
                if (v119 != 0) {
                  {
                    v120 = *(_QWORD*)(v117 + 1128);
                    __asm__ volatile("" ::"r"(v120));
                  }
                  goto LABEL_257;
                }
              }
              else {
                if (*(_QWORD*)(v118 + 104) != v117) {
                  goto LABEL_252;
                }
              LABEL_255:
                *(_QWORD*)(v118 + 104) = *(_QWORD*)(v117 + 1136);
                {
                  v119 = *(_QWORD*)(*(_QWORD*)(i + 24) + 104LL);
                  __asm__ volatile("" ::"r"(v119));
                }
                if (v119 != 0) {
                  v120 = 0;
                LABEL_257:
                  *(_QWORD*)(v119 + 1128) = v120;
                }
              }
              *(_OWORD*)(v117 + 1128) =
                  (__typeof__(*(_OWORD*)(v117 + 1128))){0};
              {
                v121 = *(_QWORD*)(i + 24);
                __asm__ volatile("" ::"r"(v121));
              }
              if (i == *(_QWORD*)(v121 + 112)) {
                *(_QWORD*)(v121 + 112) = v117;
              }
              *(_QWORD*)(v117 + 1128) = i;
              {
                v122 = *(_QWORD*)(i + 1136);
                __asm__ volatile("" ::"r"(v122));
              }
              *(_QWORD*)(v117 + 1136) = v122;
              if (v122 != 0) {
                *(_QWORD*)(v122 + 1128) = v117;
              }
              *(_QWORD*)(i + 1136) = v117;
              ++*(_DWORD*)(v113 + 36);
              *(_QWORD*)(v117 + 1240) = v113;
              if (i == *(_QWORD*)(v113 + 16)) {
                *(_QWORD*)(v113 + 16) = v117;
              }
              *(_QWORD*)(v117 + 1264) = i;
              {
                v123 = *(_QWORD*)(i + 1256);
                __asm__ volatile("" ::"r"(v123));
              }
              *(_QWORD*)(v117 + 1256) = v123;
              if (v123 != 0) {
                *(_QWORD*)(v123 + 1264) = v117;
              }
              {
                v124 = *(_QWORD*)(i + 1216);
                __asm__ volatile("" ::"r"(v124));
              }
              *(_QWORD*)(i + 1256) = v117;
              if (v124 != 0) {
                *(_QWORD*)(v117 + 1216) = v124;
                {
                  v125 = *(unsigned int*)(i + 1232);
                  __asm__ volatile("" ::"r"(v125));
                }
                *(_DWORD*)(v117 + 1232) = v125;
                *(_QWORD*)(v117 + 1224) =
                    *(_QWORD*)(*(_QWORD*)(v124 + 64) + 8 * v125);
                *(_QWORD*)(*(_QWORD*)(v124 + 64) +
                           8LL * *(unsigned int*)(i + 1232)) = v117;
              }
              v126 = BYTE8(v454);
              BYTE8(v454) = 0;
              BYTE10(v454) = 0;
              v127 = v454;
              *((_BYTE*)v109 + 8) = 0;
              cuda_driver_unplaced_5_d5d50(i, v127);
              v128 = v454;
              --*(_DWORD*)(i + 1324);
              HIBYTE(v454) = 2;
              result = cuda_driver_d5f10(v117, v128, (_QWORD*)&v454 + 1, 1);
              if ((_DWORD)result != 0) {
                return result;
              }
              ++*(_DWORD*)(v117 + 1324);
              if (*v110 == 0) {
                cuda_driver_unplaced_5_d5d50(i, *(_QWORD*)v109);
                --*(_DWORD*)(i + 1324);
              }
              {
                v129 = *(_QWORD*)v109;
                __asm__ volatile("" ::"r"(v129));
              }
              *((_BYTE*)v109 + 15) = 2;
              result = cuda_driver_d5f10(v117, v129, (_QWORD*)v109 + 1, 1);
              if ((_DWORD)result != 0) {
                return result;
              }
              ++*(_DWORD*)(v117 + 1324);
              *(_QWORD*)v109 = v117;
              *((_BYTE*)v109 + 8) = v126;
              *((_BYTE*)v109 + 9) = 0;
              *v110 = 1;
            LABEL_235:
              v2 = (__int64)v458_.v459;
            }
          }
          --v104;
          v105 -= 16;
          if (v104 > 1) {
            continue;
          }
          break;
        }
        if ((_QWORD)v456_.v456 != 0 && v451_.v451[0] == 0) {
          cuda_driver_unplaced_5_d5d50(i, v456_.v456);
          --*(_DWORD*)(i + 1324);
        }
      LABEL_297:
        if (v451_.v452 != 0) {
          HIBYTE(v455) = 2;
          result = cuda_driver_d5f10(i, v455, (_QWORD*)&v455 + 1, 1);
          if ((_DWORD)result != 0) {
            return result;
          }
          v135 = v456_.v456;
          ++*(_DWORD*)(i + 1324);
          if (v135 == 0) {
            continue;
          }
        }
        else {
          v135 = v456_.v456;
          if ((_QWORD)v456_.v456 == 0) {
            continue;
          }
        }
        HIBYTE(v456_.v456) = 2;
        result = cuda_driver_d5f10(i, v135, (_QWORD*)&v456_.v456 + 1, 1);
        if ((_DWORD)result != 0) {
          return result;
        }
        ++*(_DWORD*)(i + 1324);
      }
    LABEL_361:
      for (j = *v443; j != 0; j = *(_QWORD*)(j + 24)) {
        {
          v166 = *(_QWORD*)(j + 8);
          __asm__ volatile("" ::"r"(v166));
        }
        if ((*(_DWORD*)(j + 36) > 0x14u || *(_DWORD*)(v166 + 1036) == 0) &&
            *(_DWORD*)(v166 + 4) == 0 &&
            (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v166 + 1200) + 64LL) + 16996LL) &
             4) != 0 &&
            *(_BYTE*)(*(_QWORD*)(v166 + 24) + 415LL) == 0) {
          {
            v176 = *(_QWORD*)(v166 + 1256);
            __asm__ volatile("" ::"r"(v176));
          }
          if (v176 == 0 || *(_DWORD*)(v176 + 4) == 0) {
            v177 = v453;
            v178 = 1;
            v453[0] = 0;
            while (1) {
              {
                v179 = *(unsigned int*)(v166 + 1036);
                __asm__ volatile("" ::"r"(v179));
              }
              if ((_DWORD)v179 == 0) {
                v183 = nullptr;
                goto LABEL_487;
              }
              {
                v180 = *(__int64**)(v166 + 1000);
                __asm__ volatile("" ::"r"(v180));
              }
              if ((unsigned int)v179 >= 4) {
                break;
              }
              v181 = -1;
              v182 = 0;
              v183 = nullptr;
              v184 = nullptr;
              v185 = v178;
            LABEL_463:
              v200 = v179 & 3;
              if ((v179 & 3) != 0) {
                {
                  v201 = &v180[2 * v182];
                  __asm__ volatile("" ::"r"(v201));
                }
                do {
                  {
                    v203 = *v201;
                    __asm__ volatile("" ::"r"(v203));
                  }
                  v201 += 2;
                  v202 = v203;
                  if (j == *(_QWORD*)(v203 + 1240)) {
                    {
                      v204 = (int*)(*(_QWORD*)(v202 + 1248) + 1384LL);
                      __asm__ volatile("" ::"r"(v204));
                    }
                    {
                      v205 = *v204;
                      __asm__ volatile("" ::"r"(v205));
                    }
                    if (v181 < *v204) {
                      v184 = v204;
                    }
                    if (v181 <= v205) {
                      v181 = *v204;
                      __asm__ volatile("" ::"r"(v181));
                    }
                    if (v185 > v205) {
                      v183 = v204;
                    }
                    if (v185 >= v205) {
                      v185 = *v204;
                      __asm__ volatile("" ::"r"(v185));
                    }
                  }
                  --v200;
                } while (v200 != 0);
              }
              if (v184 == nullptr) {
                v2 = (__int64)v458_.v459;
                goto LABEL_487;
              }
              do {
                {
                  v207 = *v180;
                  __asm__ volatile("" ::"r"(v207));
                }
                v180 += 2;
                v206 = v207;
                if (*(_BYTE*)(v207 + 672) == 1) {
                  {
                    v208 = *(_QWORD*)(v206 + 32);
                    __asm__ volatile("" ::"r"(v208));
                  }
                  if (v208 != *(_QWORD*)(CudaDriverRoutine_99510(
                                             *(_QWORD*)(v166 + 1200)) +
                                         8)) {
                    v2 = (__int64)v458_.v459;
                    goto LABEL_496;
                  }
                }
                --v179;
              } while (v179 != 0);
              v2 = (__int64)v458_.v459;
              if (*(_DWORD*)(v166 + 1092) != 0 &&
                  (*(v184 - 87) == 0 &&
                       *(_DWORD*)(*((_QWORD*)v184 - 18) + 36LL) > 8u ||
                   (v209 = v184[1]) > 64 ||
                   v209 >= 17 && *(_BYTE*)(v166 + 1392) != 0)) {
              LABEL_487:
                if (*(_BYTE*)(v166 + 941) != 0 &&
                    v166 != *(_QWORD*)(*(_QWORD*)(v166 + 1240) + 8LL)) {
                  {
                    v210 = **(_QWORD**)(v166 + 1000);
                    __asm__ volatile("" ::"r"(v210));
                  }
                  if (*(_BYTE*)(v210 + 673) != 0 &&
                      (v211 = *(_QWORD*)(v210 + 1248)) != v210 &&
                      v210 == *(_QWORD*)(v166 + 1264)) {
                    v212 = (__int64*)(v166 + 1264);
                    --*(_DWORD*)(v211 + 1388);
                  }
                  else {
                    result = CudaDriverRoutine_cbec0(v166);
                    if ((_DWORD)result != 0) {
                      return result;
                    }
                    v212 = (__int64*)(v166 + 1264);
                  }
                  {
                    v166 = *v212;
                    __asm__ volatile("" ::"r"(v166));
                  }
                }
                *(_DWORD*)(v166 + 1384) = v178;
                *v177 = v166;
                v184 = (int*)(v166 + 1384);
                ++v178;
                v177 = (__int64*)(v166 + 736);
                *(_BYTE*)(v166 + 677) |=
                    v166 != *(_QWORD*)(*(_QWORD*)(v166 + 1240) + 8LL);
              }
            LABEL_496:
              *(_QWORD*)(v166 + 1248) = v184 - 346;
              ++v184[1];
              if (*(_QWORD*)(v166 + 112) == 0) {
                if (v183 != nullptr) {
                  v213 = v183;
                }
                else {
                  v213 = v184;
                }
                *(_QWORD*)(v166 + 112) = v213 - 166;
              }
              {
                v166 = *(_QWORD*)(v166 + 1256);
                __asm__ volatile("" ::"r"(v166));
              }
              if (v166 == 0) {
                goto LABEL_363;
              }
            }
            v186 = (unsigned int)v179 & 0xFFFFFFFC;
            v187 = v180 + 4;
            v181 = -1;
            v182 = 0;
            v183 = nullptr;
            v184 = nullptr;
            v185 = v178;
            while (2) {
              while (2) {
                {
                  v191 = *(v187 - 4);
                  __asm__ volatile("" ::"r"(v191));
                }
                if (j == *(_QWORD*)(v191 + 1240)) {
                  {
                    v194 = (int*)(*(_QWORD*)(v191 + 1248) + 1384LL);
                    __asm__ volatile("" ::"r"(v194));
                  }
                  {
                    v195 = *v194;
                    __asm__ volatile("" ::"r"(v195));
                  }
                  if (v181 < *v194) {
                    v184 = v194;
                  }
                  if (v181 <= v195) {
                    v181 = *v194;
                    __asm__ volatile("" ::"r"(v181));
                  }
                  if (v185 > v195) {
                    v183 = v194;
                  }
                  if (v185 >= v195) {
                    v185 = *v194;
                    __asm__ volatile("" ::"r"(v185));
                  }
                  {
                    v192 = *(v187 - 2);
                    __asm__ volatile("" ::"r"(v192));
                  }
                  if (j == *(_QWORD*)(v192 + 1240)) {
                    goto LABEL_444;
                  }
                LABEL_433:
                  {
                    v193 = *v187;
                    __asm__ volatile("" ::"r"(v193));
                  }
                  if (j == *(_QWORD*)(*v187 + 1240LL)) {
                    goto LABEL_421;
                  }
                LABEL_453:
                  {
                    v190 = v187[2];
                    __asm__ volatile("" ::"r"(v190));
                  }
                  if (j != *(_QWORD*)(v190 + 1240)) {
                    goto LABEL_430;
                  }
                }
                else {
                  {
                    v192 = *(v187 - 2);
                    __asm__ volatile("" ::"r"(v192));
                  }
                  if (j != *(_QWORD*)(v192 + 1240)) {
                    goto LABEL_433;
                  }
                LABEL_444:
                  {
                    v196 = (int*)(*(_QWORD*)(v192 + 1248) + 1384LL);
                    __asm__ volatile("" ::"r"(v196));
                  }
                  {
                    v197 = *v196;
                    __asm__ volatile("" ::"r"(v197));
                  }
                  if (v181 < *v196) {
                    v184 = v196;
                  }
                  if (v181 <= v197) {
                    v181 = *v196;
                    __asm__ volatile("" ::"r"(v181));
                  }
                  if (v185 > v197) {
                    v183 = v196;
                  }
                  if (v185 >= v197) {
                    v185 = *v196;
                    __asm__ volatile("" ::"r"(v185));
                  }
                  {
                    v193 = *v187;
                    __asm__ volatile("" ::"r"(v193));
                  }
                  if (j != *(_QWORD*)(*v187 + 1240LL)) {
                    goto LABEL_453;
                  }
                LABEL_421:
                  {
                    v188 = (int*)(*(_QWORD*)(v193 + 1248) + 1384LL);
                    __asm__ volatile("" ::"r"(v188));
                  }
                  {
                    v189 = *v188;
                    __asm__ volatile("" ::"r"(v189));
                  }
                  if (v181 < *v188) {
                    v184 = v188;
                  }
                  if (v181 <= v189) {
                    v181 = *v188;
                    __asm__ volatile("" ::"r"(v181));
                  }
                  if (v185 > v189) {
                    v183 = v188;
                  }
                  if (v185 >= v189) {
                    v185 = *v188;
                    __asm__ volatile("" ::"r"(v185));
                  }
                  {
                    v190 = v187[2];
                    __asm__ volatile("" ::"r"(v190));
                  }
                  if (j != *(_QWORD*)(v190 + 1240)) {
                  LABEL_430:
                    v182 += 4;
                    v187 += 8;
                    if (v186 == v182) {
                      goto LABEL_463;
                    }
                    continue;
                  }
                }
                break;
              }
              {
                v198 = (int*)(*(_QWORD*)(v190 + 1248) + 1384LL);
                __asm__ volatile("" ::"r"(v198));
              }
              {
                v199 = *v198;
                __asm__ volatile("" ::"r"(v199));
              }
              if (v181 < *v198) {
                v184 = v198;
              }
              if (v181 <= v199) {
                v181 = *v198;
                __asm__ volatile("" ::"r"(v181));
              }
              if (v185 > v199) {
                v183 = v198;
              }
              if (v185 >= v199) {
                v185 = *v198;
                __asm__ volatile("" ::"r"(v185));
              }
              v182 += 4;
              v187 += 8;
              if (v186 == v182) {
                goto LABEL_463;
              }
              continue;
            }
          }
        }
        *(_DWORD*)(v166 + 1384) = 1;
        {
          v167 = *(_QWORD*)(j + 8);
          __asm__ volatile("" ::"r"(v167));
        }
        if (*(_DWORD*)(v167 + 4) != 0) {
          v168 = 0;
        }
        else {
          v168 = v167 + 720;
        }
        do {
          if (*(_DWORD*)(v167 + 4) == 0) {
            *(_QWORD*)(v167 + 112) = v168;
          }
          *(_QWORD*)(v167 + 1248) = *(_QWORD*)(j + 8);
          ++*(_DWORD*)(v166 + 1388);
          {
            v167 = *(_QWORD*)(v167 + 1256);
            __asm__ volatile("" ::"r"(v167));
          }
        } while (v167 != 0);
      LABEL_363:
        {
          v165 = *(_QWORD*)(j + 8);
          __asm__ volatile("" ::"r"(v165));
        }
        if (*(_DWORD*)(v165 + 4) == 0) {
          {
            v169 = *(_DWORD*)(v165 + 1092);
            __asm__ volatile("" ::"r"(v169));
          }
          if (v169 != 0) {
            {
              v170 = *(_QWORD*)(v165 + 1056);
              __asm__ volatile("" ::"r"(v170));
            }
            if (v169 >= 8) {
              v173 = (_BYTE*)(v170 + 63);
              v174 = 0;
              do {
                if (*(v173 - 48) == 1 && *(v173 - 55) == 2) {
                  *(_BYTE*)(v165 + 678) = 1;
                }
                if (*(v173 - 32) == 1 && *(v173 - 39) == 2) {
                  *(_BYTE*)(v165 + 678) = 1;
                }
                if (*(v173 - 16) == 1 && *(v173 - 23) == 2) {
                  *(_BYTE*)(v165 + 678) = 1;
                }
                if (*v173 == 1 && *(v173 - 7) == 2) {
                  *(_BYTE*)(v165 + 678) = 1;
                }
                if (v173[16] == 1 && v173[9] == 2) {
                  *(_BYTE*)(v165 + 678) = 1;
                }
                if (v173[32] == 1 && v173[25] == 2) {
                  *(_BYTE*)(v165 + 678) = 1;
                }
                if (v173[48] == 1 && v173[41] == 2) {
                  *(_BYTE*)(v165 + 678) = 1;
                }
                if (v173[64] == 1 && v173[57] == 2) {
                  *(_BYTE*)(v165 + 678) = 1;
                }
                v174 -= 8;
                v173 += 128;
              } while (-(__int64)(v169 & 0xFFFFFFF8) != v174);
              v171 = -v174;
              v172 = v169 & 7;
              if (v172 == 0) {
                continue;
              }
            LABEL_407:
              v175 = (_BYTE*)(v170 + 16 * v171 + 8);
              do {
                if (v175[7] == 1 && *v175 == 2) {
                  *(_BYTE*)(v165 + 678) = 1;
                }
                v175 += 16;
                --v172;
              } while (v172 != 0);
              continue;
            }
            v171 = 0;
            v172 = v169 & 7;
            if (v172 != 0) {
              goto LABEL_407;
            }
          }
        }
      }
      {
        v214 = *(_QWORD**)(v2 + 104);
        __asm__ volatile("" ::"r"(v214));
      }
      if (v214 != nullptr) {
        do {
          if (v214 == *(_QWORD**)(v214[155] + 8LL)) {
            {
              v215 = v214[150];
              __asm__ volatile("" ::"r"(v215));
            }
            {
              v216 = *(_QWORD*)(v215 + 64);
              __asm__ volatile("" ::"r"(v216));
            }
            v217 = (*(__int64 (**)(__int64))(v216 + 18424))(34);
            if (v217 == 0) {
              v217 = (*(__int64 (**)(__int64))(v216 + 18424))(33);
            }
            v218 = 0;
            for (k = v214; k != nullptr; k = (_QWORD*)k[157]) {
              if (v218 >= v217) {
                if ((*(_BYTE*)(*(_QWORD*)(v215 + 64) + 16996LL) & 4) == 0) {
                  break;
                }
              }
              else if ((*(_BYTE*)(*(_QWORD*)(v215 + 64) + 16996LL) & 4) == 0) {
                goto LABEL_516;
              }
              if (*((_DWORD*)k + 1) == 0) {
                if (*((_BYTE*)k + 941) != 0) {
                  {
                    v222 = (_BYTE*)k[125];
                    __asm__ volatile("" ::"r"(v222));
                  }
                  *((_BYTE*)k + 380) = k == *(_QWORD**)(k[155] + 8LL);
                  if (*((_DWORD*)k + 259) == 1 &&
                      *(_DWORD*)(*(_QWORD*)v222 + 4LL) == 0 && v222[15] == 2 &&
                      (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)v222 + 32LL) + 860LL) &
                       0x78) != 0) {
                    *((_BYTE*)k + 384) = 1;
                  }
                }
                else {
                  {
                    v223 = k[155];
                    __asm__ volatile("" ::"r"(v223));
                  }
                  *((_BYTE*)k + 380) = 1;
                  if (k != *(_QWORD**)(v223 + 8)) {
                    *((_WORD*)k + 191) = 257;
                  }
                }
                continue;
              }
            LABEL_516:
              if (k[152] != 0) {
                continue;
              }
              {
                v220 = k[155];
                __asm__ volatile("" ::"r"(v220));
              }
              {
                v221 = *(_QWORD**)(v220 + 8);
                __asm__ volatile("" ::"r"(v221));
              }
              if (*(_BYTE*)(v2 + 415) != 0) {
                if (k != v221) {
                  continue;
                }
              LABEL_509:
                *((_BYTE*)k + 380) = 1;
                continue;
              }
              {
                v224 = *((_DWORD*)k + 1);
                __asm__ volatile("" ::"r"(v224));
              }
              if (k != v221) {
                if (v224 == 0 && *((_BYTE*)k + 941) == 0 &&
                    *((_BYTE*)k + 1392) != 0 && *(_BYTE*)(k[159] + 13LL) != 0) {
                  *((_BYTE*)k + 380) = 1;
                  if (k != *(_QWORD**)(v220 + 8)) {
                    *((_BYTE*)k + 382) = 1;
                  }
                  ++v218;
                }
                continue;
              }
              if (v224 == 0) {
                goto LABEL_509;
              }
            }
          }
          {
            v214 = (_QWORD*)v214[142];
            __asm__ volatile("" ::"r"(v214));
          }
        } while (v214 != nullptr);
        {
          v225 = *(_QWORD*)(v2 + 104);
          __asm__ volatile("" ::"r"(v225));
        }
        v448 = 0;
        *(_BYTE*)(v2 + 408) = 1;
        if (v225 != 0) {
          while (1) {
            {
              v226 = *(int**)(v2 + 376);
              __asm__ volatile("" ::"r"(v226));
            }
            v227 = CudaDriverRoutine_98340(*(_QWORD*)(v225 + 1200));
            v229 = (_DWORD*)CudaDriverRoutine_1a2980(v226, v227);
            if (*(_BYTE*)(CudaDriverRoutine_98340(*(_QWORD*)(v225 + 1200)) +
                          15891) == 0) {
              goto LABEL_550;
            }
            {
              v230 = *(_DWORD*)(v225 + 4);
              __asm__ volatile("" ::"r"(v230));
            }
            if (v230 > 0xD) {
              goto LABEL_550;
            }
            if (((1 << v230) & 0x3CA5) == 0) {
              if (v230 != 1) {
                break;
              }
              if (*(_DWORD*)(v225 + 40) == 0 || *(_DWORD*)(v225 + 240) == 0) {
                goto LABEL_550;
              }
            }
          LABEL_551:
            {
              v231 = *(_DWORD*)(v225 + 4);
              __asm__ volatile("" ::"r"(v231));
            }
            if (v231 == 13) {
              if (*(_QWORD*)(v225 + 1216) != 0) {
                v229[47] += *(_DWORD*)(v225 + 44);
                {
                  v236 = *(unsigned int*)(v225 + 44);
                  __asm__ volatile("" ::"r"(v236));
                }
                if ((_DWORD)v236 != 0) {
                  goto LABEL_565;
                }
              }
              else {
                ++*(_DWORD*)v229;
                v229[47] += *(_DWORD*)(v225 + 44);
                {
                  v236 = *(unsigned int*)(v225 + 44);
                  __asm__ volatile("" ::"r"(v236));
                }
                if ((_DWORD)v236 != 0) {
                LABEL_565:
                  v237 = 0;
                  while (1) {
                    {
                      v238 = *(_QWORD*)(*(_QWORD*)(v225 + 64) + 8 * v237);
                      __asm__ volatile("" ::"r"(v238));
                    }
                    if (v238 != 0) {
                      break;
                    }
                  LABEL_567:
                    if (++v237 >= v236) {
                      goto LABEL_582;
                    }
                  }
                  while (1) {
                    if (*(_DWORD*)(v238 + 1036) != 0) {
                      if (*(_DWORD*)(v238 + 1092) != 0) {
                      LABEL_571:
                        {
                          v238 = *(_QWORD*)(v238 + 1224);
                          __asm__ volatile("" ::"r"(v238));
                        }
                        if (v238 == 0) {
                          goto LABEL_566;
                        }
                        continue;
                      }
                    }
                    else {
                      ++v229[45];
                      if (*(_DWORD*)(v238 + 1092) != 0) {
                        goto LABEL_571;
                      }
                    }
                    ++v229[45];
                    {
                      v238 = *(_QWORD*)(v238 + 1224);
                      __asm__ volatile("" ::"r"(v238));
                    }
                    if (v238 == 0) {
                    LABEL_566:
                      {
                        v236 = *(unsigned int*)(v225 + 44);
                        __asm__ volatile("" ::"r"(v236));
                      }
                      goto LABEL_567;
                    }
                  }
                }
              }
              goto LABEL_582;
            }
            if (v231 == 0) {
              if ((unsigned __int8)CudaDriverStub_4f840(v225) == 0) {
                v232 = CudaDriverStub_b9300(*(_QWORD*)(v225 + 32));
                ++v229[v232];
                ++v229[4];
                if (*(_BYTE*)(v225 + 673) == 0) {
                  v233 = *(_DWORD**)(CudaDriverRoutine_98340(
                                         *(_QWORD*)(v225 + 1200)) +
                                     64);
                  {
                    v234 = *(_DWORD*)(*(_QWORD*)(v225 + 32) + 244LL);
                    __asm__ volatile("" ::"r"(v234));
                  }
                  if (v234 <= v233[3711]) {
                    v235 = 0;
                  }
                  else if (v234 <= v233[3712]) {
                    v235 = 1;
                  }
                  else if (v234 <= v233[3713]) {
                    v235 = 2;
                  }
                  else if (v234 > v233[3714]) {
                    v235 = 2;
                  }
                  else {
                    v235 = 3;
                  }
                  ++v229[v235 + 30];
                }
              }
              if (*(_DWORD*)(v225 + 888) != 0) {
                ++v229[74];
              }
            LABEL_582:
              {
                v231 = *(_DWORD*)(v225 + 4);
                __asm__ volatile("" ::"r"(v231));
              }
            }
            if (v231 != 13) {
              if (v231 != 0) {
                goto LABEL_540;
              }
              if (*(_QWORD*)(v225 + 1216) == 0 && *(_BYTE*)(v225 + 672) == 0) {
                {
                  v239 = *(unsigned int*)(v225 + 1036);
                  __asm__ volatile("" ::"r"(v239));
                }
                if (*(_BYTE*)(*(_QWORD*)(v225 + 24) + 415LL) == 0 ||
                    (_DWORD)v239 != 0) {
                  if ((_DWORD)v239 != 0) {
                    {
                      v241 = (unsigned __int8*)(*(_QWORD*)(v225 + 1000) + 15LL);
                      __asm__ volatile("" ::"r"(v241));
                    }
                    do {
                      {
                        v243 = *v241;
                        __asm__ volatile("" ::"r"(v243));
                      }
                      v241 += 16;
                      v242 = v243;
                      if (v243 == 1) {
                        break;
                      }
                      if (v242 == 3) {
                        goto LABEL_597;
                      }
                      --v239;
                    } while (v239 != 0);
                  }
                LABEL_540:
                  *(_DWORD*)(v225 + 8) = -1;
                  goto LABEL_541;
                }
              }
            }
          LABEL_597:
            {
              v244 = *(_QWORD*)(v225 + 24);
              __asm__ volatile("" ::"r"(v244));
            }
            {
              v245 = *(unsigned int*)(v225 + 1036);
              __asm__ volatile("" ::"r"(v245));
            }
            {
              v246 = *(__int64**)(v225 + 1000);
              __asm__ volatile("" ::"r"(v246));
            }
            if (*(_BYTE*)(v244 + 415) != 0) {
              if ((_DWORD)v245 != 0) {
                {
                  v247 = v229[44];
                  __asm__ volatile("" ::"r"(v247));
                }
                {
                  v248 = v247 + *(int*)(v244 + 528);
                  __asm__ volatile("" ::"r"(v248));
                }
                v229[44] = v247 + 1;
                *(_DWORD*)(v225 + 8) = v248;
                ++v229[42];
              LABEL_601:
                if (*(_DWORD*)(v225 + 8) != -1) {
                  {
                    v252 = *v246;
                    __asm__ volatile("" ::"r"(v252));
                  }
                  v250 = v246 + 2;
                  v251 = v252;
                  v253 = v245 - 1;
                LABEL_603:
                  if (*(_DWORD*)(v251 + 8) != -1 &&
                      *(_QWORD*)(v225 + 1200) == *(_QWORD*)(v251 + 1200)) {
                    ++v229[45];
                  }
                  while (v253 != 0) {
                    {
                      v254 = *v250;
                      __asm__ volatile("" ::"r"(v254));
                    }
                    v250 += 2;
                    v251 = v254;
                    --v253;
                    if (*(_DWORD*)(v225 + 8) != -1) {
                      goto LABEL_603;
                    }
                  }
                }
                goto LABEL_541;
              }
              {
                v255 = v229[43];
                __asm__ volatile("" ::"r"(v255));
              }
              v229[43] = v255 + 1;
              *(_DWORD*)(v225 + 8) = v255;
              ++v229[42];
            }
            else {
              {
                v249 = v229[42];
                __asm__ volatile("" ::"r"(v249));
              }
              *(_DWORD*)(v225 + 8) = v249;
              v229[42] = v249 + 1;
              if ((_DWORD)v245 != 0) {
                goto LABEL_601;
              }
            }
          LABEL_541:
            {
              v225 = *(_QWORD*)(v225 + 1136);
              __asm__ volatile("" ::"r"(v225));
            }
            if (v225 == 0) {
              goto LABEL_611;
            }
          }
          if (v230 == 6) {
            CudaDriverRoutine_98340(*(_QWORD*)(v225 + 1200));
            goto LABEL_551;
          }
        LABEL_550:
          *(_BYTE*)(v2 + 408) = 0;
          goto LABEL_551;
        }
      }
      else {
        v448 = 0;
        *(_BYTE*)(v2 + 408) = 1;
      }
    LABEL_611:
      cuda_driver_108740(*(unsigned int*)(v2 + 292),
                         *(unsigned __int64**)(v2 + 296));
      {
        v256 = *(_QWORD*)(v2 + 376);
        __asm__ volatile("" ::"r"(v256));
      }
      v449_.v449 = 0;
      *(_QWORD*)&v454 = v2;
      *((_QWORD*)&v454 + 1) = &v449_.v449;
      CudaDriverRoutine_1a2b00(
          v256, (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_d1e40,
          (__int64)&v454);
      if (v449_.v449 != 0) {
        nvidia_ed630((__int64)"CUDA", 0,
                     (__int64)"Failed to allocate resources for the kernel "
                              "nodes on each ctx");
        v257 = v449_.v449;
        goto LABEL_616;
      }
      if (*(_BYTE*)(v2 + 415) == 0 && *(_BYTE*)(v2 + 416) == 0) {
        goto LABEL_625;
      }
      {
        v258 = *(_QWORD*)(*(_QWORD*)(v2 + 448) + 1200LL);
        __asm__ volatile("" ::"r"(v258));
      }
      v259 = (__int64*)CudaDriverRoutine_997f0(v258);
      v257 = cuda_driver_dd220(v259, v2 + 424, 2u);
      v449_.v449 = v257;
      if (v257 != 0) {
        goto LABEL_616;
      }
      {
        v264 = *(_OWORD**)(v2 + 424);
        __asm__ volatile("" ::"r"(v264));
      }
      *v264 = (__typeof__(*v264)){0};
      v264[1] = (__typeof__(v264[1])){0};
      v264[2] = (__typeof__(v264[2])){0};
      v264[3] = (__typeof__(v264[3])){0};
      v264[4] = (__typeof__(v264[4])){0};
      v264[5] = (__typeof__(v264[5])){0};
      v265 = CudaDriverRoutine_99810(v258);
      *(_QWORD*)(*(_QWORD*)(v2 + 424) + 24LL) = CudaDriverStub_1db7a0(v265);
      *(_DWORD*)(*(_QWORD*)(v2 + 424) + 8LL) = *(_DWORD*)(v258 + 56);
      *(_BYTE*)(*(_QWORD*)(v2 + 424) + 77LL) = 0;
      {
        v266 = *(_OWORD**)(v2 + 432);
        __asm__ volatile("" ::"r"(v266));
      }
      *v266 = (__typeof__(*v266)){0};
      v266[1] = (__typeof__(v266[1])){0};
      v266[2] = (__typeof__(v266[2])){0};
      v266[3] = (__typeof__(v266[3])){0};
      v266[4] = (__typeof__(v266[4])){0};
      v266[5] = (__typeof__(v266[5])){0};
      v267 = CudaDriverRoutine_99810(v258);
      *(_QWORD*)(*(_QWORD*)(v2 + 432) + 24LL) = CudaDriverStub_1db7a0(v267);
      *(_DWORD*)(*(_QWORD*)(v2 + 432) + 8LL) = *(_DWORD*)(v258 + 56);
      *(_BYTE*)(*(_QWORD*)(v2 + 432) + 77LL) = 1;
      if (*(_BYTE*)(v2 + 415) == 0) {
        goto LABEL_625;
      }
      v268 = CudaDriverData_1422118;
      cuda_driver_108520((__int64)&CudaDriverRoutine_7378 +
                         (_QWORD)CudaDriverData_1422118);
      v449_.v449 = CudaDriverStub_1a2960(
          *(_QWORD*)((char*)&CudaDriverRoutine_7370 + (_QWORD)v268),
          *(_QWORD*)(*(_QWORD*)(v2 + 424) + 96LL), v2);
      CudaDriverRoutine_1085d0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v268);
      v257 = v449_.v449;
      if (v449_.v449 != 0) {
        goto LABEL_616;
      }
      if (*(_DWORD*)(v2 + 472) == 0) {
        {
          v432 = *(_QWORD*)(v2 + 104);
          __asm__ volatile("" ::"r"(v432));
        }
        if (v432 != 0) {
          v433 = 1;
          do {
            {
              v432 = *(_QWORD*)(v432 + 1136);
              __asm__ volatile("" ::"r"(v432));
            }
            ++v433;
          } while (v432 != 0);
          v434 = 16LL * v433;
        }
        else {
          v434 = 16;
        }
        memset(&v453[1], 0, 376);
        v453[0] = 0x10C000202LL;
        {
          v435 = *(_QWORD*)(*(_QWORD*)(v2 + 448) + 1200LL);
          __asm__ volatile("" ::"r"(v435));
        }
        *(_QWORD*)(v2 + 464) = v434;
        v257 = cuda_driver_1da1b0(*(_QWORD*)(v435 + 80), v453, v434,
                                  (_QWORD*)(v2 + 456));
        v449_.v449 = v257;
        if (v257 != 0) {
          goto LABEL_616;
        }
        **(_QWORD**)(v2 + 424) = CudaDriverStub_1db800(*(_QWORD*)(v2 + 456));
        {
          v269 = *(_QWORD*)(v2 + 104);
          __asm__ volatile("" ::"r"(v269));
        }
        if (v269 != 0) {
          goto LABEL_626;
        }
      }
      else {
      LABEL_625:
        {
          v269 = *(_QWORD*)(v2 + 104);
          __asm__ volatile("" ::"r"(v269));
        }
        if (v269 != 0) {
        LABEL_626:
          v270 = CudaDriverData_14225e0;
          while (1) {
            {
              v272 = *(_QWORD*)(v269 + 24);
              __asm__ volatile("" ::"r"(v272));
            }
            *(_QWORD*)&v455 = 0x2C00000000LL;
            if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                           *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) +
                                      (_QWORD)v270) +
                           4) == 0) {
              goto LABEL_646;
            }
            {
              v273 = *(_DWORD*)(v269 + 4);
              __asm__ volatile("" ::"r"(v273));
            }
            LODWORD(v458_.v458[0]) = 0;
            LODWORD(v453[0]) = 48;
            DWORDn(v453[0], sizeof(v453[0]) / 4 - 1) = v273;
            v453[5] = (__int64)v458_.v458;
            if (v272 != 0) {
              v274 = v272;
              if (*(_BYTE*)(v272 + 415) != 0) {
                v274 = *(_QWORD*)(*(_QWORD*)(v272 + 424) + 96LL);
                __asm__ volatile("" ::"r"(v274));
              }
              v453[1] = v274;
              v453[2] = v269;
              if (v273 != 13) {
              LABEL_641:
                v276 = 0;
                v277 = 0;
                goto LABEL_645;
              }
            }
            else {
              v453[1] = 0;
              v453[2] = v269;
              if (v273 != 13) {
                goto LABEL_641;
              }
            }
            {
              v275 = **(_QWORD**)(v269 + 64);
              __asm__ volatile("" ::"r"(v275));
            }
            if (v275 == 0) {
              break;
            }
            v276 = 0;
            do {
              {
                v275 = *(_QWORD*)(v275 + 1224);
                __asm__ volatile("" ::"r"(v275));
              }
              ++v276;
            } while (v275 != 0);
            v277 = CudaDriverStub_12e330(8LL * v276);
            {
              v278 = **(_QWORD**)(v269 + 64);
              __asm__ volatile("" ::"r"(v278));
            }
            if (v278 != 0) {
              goto LABEL_643;
            }
          LABEL_645:
            LODWORD(v453[3]) = v276;
            v453[4] = v277;
            cuda_driver_20b420(0x13u, 3u, (__int64)v453);
            if (LODWORD(v458_.v458[0]) == 0) {
              CudaDriverRoutine_12e340(v277);
              v280 = (_QWORD*)(v269 + 1208);
              if (*(_QWORD*)(v269 + 1208) != 0) {
                goto LABEL_647;
              }
              goto LABEL_654;
            }
          LABEL_646:
            v280 = (_QWORD*)(v269 + 1208);
            if (*(_QWORD*)(v269 + 1208) == 0) {
            LABEL_654:
              if (*(_BYTE*)(v269 + 1392) != 0 &&
                  (v287 = *(_QWORD*)(v272 + 304)) != 0 &&
                  *(_QWORD*)(v269 + 1200) == *(_QWORD*)(v287 + 16)) {
                *v280 = v287;
              }
              else {
                v281 = CudaDriverStub_116790(v280, *(_QWORD*)(v269 + 1200),
                                             (int*)&v455);
                if (v281 != 0) {
                  goto LABEL_658;
                }
                *(_QWORD*)(*v280 + 960LL) = *(_QWORD*)(v272 + 384);
                {
                  v322 = *v280;
                  __asm__ volatile("" ::"r"(v322));
                }
                *(_QWORD*)(v272 + 384) = *v280;
                {
                  v323 = *(_QWORD*)(v322 + 960);
                  __asm__ volatile("" ::"r"(v323));
                }
                if (v323 != 0) {
                  *(_QWORD*)(v323 + 968) = v322;
                }
              }
            }
          LABEL_647:
            v281 = CudaDriverRoutine_1ba480(
                (_QWORD*)(v269 + 992),
                *(_QWORD*)(*(_QWORD*)(v269 + 1200) + 72LL));
            if (v281 != 0) {
              goto LABEL_658;
            }
            {
              v282 = *(_DWORD*)(v269 + 4);
              __asm__ volatile("" ::"r"(v282));
            }
            switch (v282) {
            case 13:
              if (*(_QWORD*)(v269 + 1216) != 0) {
                goto LABEL_729;
              }
              {
                v331 = *(int**)(*(_QWORD*)(v269 + 24) + 376LL);
                __asm__ volatile("" ::"r"(v331));
              }
              v332 = CudaDriverRoutine_98340(*(_QWORD*)(v269 + 1200));
              v334 = CudaDriverRoutine_1a2980(v331, v332);
              if (*(_DWORD*)(v269 + 4) != 0) {
                v335 = 0;
              }
              else {
                v342 = v334;
                v6 = !CudaDriverStub_b9300(*(_QWORD*)(v269 + 32));
                v334 = v342;
                v335 = !v6;
              }
              v343 = v334 + 8 * v335;
              v344 = v334 + 4 * v335;
              v286 = 0;
              {
                v345 = *(unsigned int*)(v344 + 8);
                __asm__ volatile("" ::"r"(v345));
              }
              {
                v346 = *(_QWORD*)(*(_QWORD*)(v343 + 24) + 8 * v345);
                __asm__ volatile("" ::"r"(v346));
              }
              *(_DWORD*)(v344 + 8) = v345 + 1;
              *(_QWORD*)(v346 + 48) =
                  *(_QWORD*)(*(_QWORD*)(v269 + 1248) + 728LL);
              *(_QWORD*)(*(_QWORD*)(v269 + 1248) + 728LL) = v346;
              ++*(_DWORD*)(*(_QWORD*)(v269 + 1248) + 744LL);
              *(_QWORD*)(v346 + 56) = v269;
              *(_QWORD*)(v269 + 80) = v346;
              break;
            case 1:
              v329 = CudaDriverRoutine_98340(*(_QWORD*)(v269 + 1200));
              {
                v330 = *(_QWORD*)(v269 + 512);
                __asm__ volatile("" ::"r"(v330));
              }
              if (v329 != v330) {
                v286 = 0;
                *(_QWORD*)(v269 + 520) = *(_QWORD*)(v330 + 120);
                break;
              }
            LABEL_729:
              v286 = 0;
              break;
            case 0: {
              v283 = *(_QWORD*)(v269 + 1200);
              __asm__ volatile("" ::"r"(v283));
            }
              {
                v284 = *(_QWORD*)(v269 + 24);
                __asm__ volatile("" ::"r"(v284));
              }
              v285 = CudaDriverRoutine_98340(v283);
              if ((unsigned __int8)CudaDriverStub_4f840(v269) != 0) {
                v286 = 0;
                break;
              }
              {
                v336 = *(_QWORD*)(v269 + 1208);
                __asm__ volatile("" ::"r"(v336));
              }
              {
                v337 = *(int**)(v284 + 376);
                __asm__ volatile("" ::"r"(v337));
              }
              v442 = v285;
              v338 = CudaDriverRoutine_98340(v283);
              v340 = CudaDriverRoutine_1a2980(v337, v338);
              *(_QWORD*)(v269 + 968) = v340 + 304;
              v341 = cuda_driver_120c20(v283, v284, v269);
              if (v341 != 0) {
                v286 = v341;
                v270 = CudaDriverData_14225e0;
                break;
              }
              v444 = v283;
              v447 = v284;
              if (*(_BYTE*)(v336 + 984) == 0) {
                *(_QWORD*)(v336 + 976) = *(_QWORD*)(v340 + 160);
                *(_QWORD*)(v340 + 160) = v336;
                *(_BYTE*)(v336 + 984) = 1;
              }
              *(_QWORD*)(v269 + 176) = CudaDriverRoutine_12dea0(
                  (atomic_ullong*)(*(_QWORD*)(v283 + 64) + 21640LL));
              *(_DWORD*)(v442 + 1296) = 1;
              {
                v347 = *(_BYTE*)(v269 + 387) != 0 &&
                       v269 != *(_QWORD*)(v284 + 448);
                __asm__ volatile("" ::"r"(v347));
              }
              v270 = CudaDriverData_1432130;
              v348 = *(_DWORD*)(v269 + 4) == 0 &&
                     CudaDriverStub_b9300(*(_QWORD*)(v269 + 32));
              v349 = v340 + 4 * v348;
              {
                v350 = *(unsigned int*)(v349 + 8);
                __asm__ volatile("" ::"r"(v350));
              }
              {
                v351 = *(_QWORD*)(*(_QWORD*)(v340 + 8 * v348 + 24) + 8 * v350);
                __asm__ volatile("" ::"r"(v351));
              }
              *(_DWORD*)(v349 + 8) = v350 + 1;
              if (!v347) {
                *(_QWORD*)(v351 + 48) =
                    *(_QWORD*)(*(_QWORD*)(v269 + 1248) + 728LL);
                *(_QWORD*)(*(_QWORD*)(v269 + 1248) + 728LL) = v351;
                ++*(_DWORD*)(*(_QWORD*)(v269 + 1248) + 744LL);
              }
              *(_QWORD*)(v351 + 56) = v269;
              *(_QWORD*)(v269 + 752) = v351;
              {
                v352 = *(_QWORD*)(v269 + 32);
                __asm__ volatile("" ::"r"(v352));
              }
              *(_QWORD*)(v269 + 184) =
                  *(_QWORD*)(v340 + 40) +
                  (unsigned int)(*(_DWORD*)(*(_QWORD*)(v444 + 64) + 17104LL) *
                                 *(int*)(v340 + 20));
              if (CudaDriverStub_b9300(v352) ||
                  (unsigned __int8)cuda_driver_helpers_b92e0(
                      *(_QWORD*)(v269 + 32)) != 0) {
                {
                  v353 = *(_QWORD*)(v340 + 48);
                  __asm__ volatile("" ::"r"(v353));
                }
                if (v353 == 0) {
                  v353 = CudaDriverRoutine_12e510(*(unsigned int*)(v340 + 16),
                                                  2048);
                  *(_QWORD*)(v340 + 48) = v353;
                  if (v353 == 0) {
                    v286 = 2;
                    break;
                  }
                }
                *(_QWORD*)(v269 + 200) =
                    v353 +
                    ((unsigned __int64)*(unsigned int*)(v340 + 20) << 11);
              }
              v441 = (__int64*)v340;
              ++*(_DWORD*)(v340 + 20);
              {
                v354 = *(_QWORD*)(v442 + 1072);
                __asm__ volatile("" ::"r"(v354));
              }
              if (v354 != 0 &&
                  *(_QWORD*)(v269 + 32) == *(_QWORD*)(v354 + 392)) {
                v355 = v444;
                *(_QWORD*)(v269 + 776) =
                    *(_QWORD*)(**(_QWORD**)(v269 + 1000) + 776LL);
              }
              else {
                v355 = v444;
                if (*(_BYTE*)(v269 + 673) == 0) {
                  v356 = *(unsigned int**)(CudaDriverRoutine_98340(
                                               *(_QWORD*)(v269 + 1200)) +
                                           64);
                  {
                    v357 = *(unsigned int*)(*(_QWORD*)(v269 + 32) + 244LL);
                    __asm__ volatile("" ::"r"(v357));
                  }
                  if (v357 <= v356[3711]) {
                    v359 = 0;
                  }
                  else if (v357 <= v356[3712]) {
                    v359 = 1;
                  }
                  else if (v357 <= v356[3713]) {
                    v359 = 2;
                  }
                  else {
                    {
                      v358 = v357 > v356[3714];
                      __asm__ volatile("" ::"r"(v358));
                    }
                    v359 = 2;
                    if (!v358) {
                      v359 = 3;
                    }
                  }
                  v360 = v340 + 4 * v359;
                  v361 = v340 + 8 * v359;
                  *(_QWORD*)(v269 + 776) =
                      *(_QWORD*)(v361 + 88) +
                      24LL * (unsigned int)(*(_DWORD*)(*(_QWORD*)(v444 + 64) +
                                                       3776LL) *
                                            *(int*)(v360 + 136));
                  {
                    v362 = *(_QWORD*)(v361 + 56);
                    __asm__ volatile("" ::"r"(v362));
                  }
                  {
                    v363 = *(unsigned int*)(v360 + 136);
                    __asm__ volatile("" ::"r"(v363));
                  }
                  *(_DWORD*)(v269 + 792) = v359;
                  ++*(_DWORD*)(v360 + 136);
                  CudaDriverRoutine_96e50(v442, *(_QWORD*)(v269 + 776));
                  *(_QWORD*)(v269 + 784) = v362 + 8 * v363;
                  v355 = v444;
                  {
                    v364 = *(_QWORD*)(v269 + 776) +
                           24LL * *(unsigned int*)(*(_QWORD*)(v444 + 64) +
                                                   11708LL);
                    __asm__ volatile("" ::"r"(v364));
                  }
                  {
                    v365 = *(__int128**)(v362 + 8 * v363);
                    __asm__ volatile("" ::"r"(v365));
                  }
                  v366 = *v365;
                  *(_QWORD*)(v364 + 16) = *((_QWORD*)v365 + 2);
                  *(_OWORD*)v364 = v366;
                }
              }
              if (*(_DWORD*)(v269 + 888) != 0) {
                *(_QWORD*)(v269 + 600) =
                    *(_QWORD*)(v340 + 280) +
                    ((unsigned __int64)(unsigned int)(*(_DWORD*)(v340 + 292))++
                     << 6);
                *(_BYTE*)(v269 + 388) = 1;
              }
              if ((*(_BYTE*)(*(_QWORD*)(v355 + 64) + 17012LL) & 1) != 0) {
                {
                  v367 = *(_DWORD*)(v269 + 1092);
                  __asm__ volatile("" ::"r"(v367));
                }
                if (v367 != 0) {
                  {
                    v368 = *(_QWORD*)(v269 + 1056);
                    __asm__ volatile("" ::"r"(v368));
                  }
                  if (v367 >= 8) {
                    v373 = v368 + 63;
                    v374 = 0;
                    v370 = 0;
                    v369 = 0;
                    do {
                      {
                        v375 = *(unsigned __int8*)(v373 - 55);
                        __asm__ volatile("" ::"r"(v375));
                      }
                      if (*(_BYTE*)(v373 - 55) != 0 &&
                          *(_BYTE*)(v373 - 48) == 2) {
                        *(_QWORD*)(v269 + 712) = *(_QWORD*)(v373 - 63);
                        if (v375 == 2) {
                          v369 = 1;
                        }
                        else if (v375 == 1) {
                          v370 = 1;
                        }
                      }
                      {
                        v377 = *(unsigned __int8*)(v373 - 39);
                        __asm__ volatile("" ::"r"(v377));
                      }
                      if (*(_BYTE*)(v373 - 39) != 0 &&
                          *(_BYTE*)(v373 - 32) == 2) {
                        *(_QWORD*)(v269 + 712) = *(_QWORD*)(v373 - 47);
                        if (v377 == 2) {
                          v369 = 1;
                        }
                        else if (v377 == 1) {
                          v370 = 1;
                        }
                      }
                      {
                        v379 = *(unsigned __int8*)(v373 - 23);
                        __asm__ volatile("" ::"r"(v379));
                      }
                      if (*(_BYTE*)(v373 - 23) != 0 &&
                          *(_BYTE*)(v373 - 16) == 2) {
                        *(_QWORD*)(v269 + 712) = *(_QWORD*)(v373 - 31);
                        if (v379 == 2) {
                          v369 = 1;
                        }
                        else if (v379 == 1) {
                          v370 = 1;
                        }
                      }
                      {
                        v381 = *(unsigned __int8*)(v373 - 7);
                        __asm__ volatile("" ::"r"(v381));
                      }
                      if (*(_BYTE*)(v373 - 7) != 0 && *(_BYTE*)v373 == 2) {
                        *(_QWORD*)(v269 + 712) = *(_QWORD*)(v373 - 15);
                        if (v381 == 2) {
                          v369 = 1;
                        }
                        else if (v381 == 1) {
                          v370 = 1;
                        }
                      }
                      {
                        v382 = *(unsigned __int8*)(v373 + 9);
                        __asm__ volatile("" ::"r"(v382));
                      }
                      if (*(_BYTE*)(v373 + 9) != 0 &&
                          *(_BYTE*)(v373 + 16) == 2) {
                        *(_QWORD*)(v269 + 712) = *(_QWORD*)(v373 + 1);
                        if (v382 == 2) {
                          v369 = 1;
                        }
                        else if (v382 == 1) {
                          v370 = 1;
                        }
                      }
                      {
                        v383 = *(unsigned __int8*)(v373 + 25);
                        __asm__ volatile("" ::"r"(v383));
                      }
                      if (*(_BYTE*)(v373 + 25) != 0 &&
                          *(_BYTE*)(v373 + 32) == 2) {
                        *(_QWORD*)(v269 + 712) = *(_QWORD*)(v373 + 17);
                        if (v383 == 2) {
                          v369 = 1;
                        }
                        else if (v383 == 1) {
                          v370 = 1;
                        }
                      }
                      {
                        v384 = *(unsigned __int8*)(v373 + 41);
                        __asm__ volatile("" ::"r"(v384));
                      }
                      if (*(_BYTE*)(v373 + 41) != 0 &&
                          *(_BYTE*)(v373 + 48) == 2) {
                        *(_QWORD*)(v269 + 712) = *(_QWORD*)(v373 + 33);
                        if (v384 == 2) {
                          v369 = 1;
                        }
                        else if (v384 == 1) {
                          v370 = 1;
                        }
                      }
                      {
                        v385 = *(unsigned __int8*)(v373 + 57);
                        __asm__ volatile("" ::"r"(v385));
                      }
                      if (*(_BYTE*)(v373 + 57) != 0 &&
                          *(_BYTE*)(v373 + 64) == 2) {
                        *(_QWORD*)(v269 + 712) = *(_QWORD*)(v373 + 49);
                        if (v385 == 2) {
                          v369 = 1;
                        }
                        else if (v385 == 1) {
                          v370 = 1;
                        }
                      }
                      v374 -= 8;
                      v373 += 128;
                    } while (-(__int64)(v367 & 0xFFFFFFF8) != v374);
                    v371 = -v374;
                  }
                  else {
                    v369 = 0;
                    v370 = 0;
                    v371 = 0;
                  }
                  v386 = v367 & 7;
                  if (v386 != 0) {
                    v387 = (unsigned __int8*)(v368 + 16 * v371 + 8);
                    do {
                      {
                        v388 = *v387;
                        __asm__ volatile("" ::"r"(v388));
                      }
                      if (*v387 != 0 && v387[7] == 2) {
                        *(_QWORD*)(v269 + 712) = *((_QWORD*)v387 - 1);
                        if (v388 == 2) {
                          v369 = 1;
                        }
                        else if (v388 == 1) {
                          v370 = 1;
                        }
                      }
                      v387 += 16;
                      --v386;
                    } while (v386 != 0);
                  }
                  v372 = v370 != 0;
                }
                else {
                  v369 = 0;
                  v372 = false;
                }
                *(_BYTE*)(v269 + 409) = v369;
                *(_BYTE*)(v269 + 408) = v369 != 0 || v372;
              }
              v281 = CudaDriverRoutine_c3ca0(v269);
              if (v281 != 0) {
              LABEL_658:
                v286 = v281;
                break;
              }
              {
                v390 = *(unsigned int*)(v269 + 1036);
                __asm__ volatile("" ::"r"(v390));
              }
              if (*(_BYTE*)(v269 + 677) != 0) {
                {
                  v391 = *(unsigned int*)(v269 + 1036);
                  __asm__ volatile("" ::"r"(v391));
                }
                if ((_DWORD)v390 != 0) {
                  {
                    v392 = *(__int64**)(v269 + 1000);
                    __asm__ volatile("" ::"r"(v392));
                  }
                  {
                    v393 = *(unsigned int*)(v269 + 1036);
                    __asm__ volatile("" ::"r"(v393));
                  }
                  do {
                    {
                      v395 = *v392;
                      __asm__ volatile("" ::"r"(v395));
                    }
                    v392 += 2;
                    v394 = v395;
                    if (*(_QWORD*)(v395 + 1240) != *(_QWORD*)(v269 + 1240)) {
                      break;
                    }
                    v453[0] = v394;
                    CudaDriverRoutine_1a3840(v269 + 1000, (__int64)v453);
                    --v393;
                  } while (v393 != 0);
                }
                CudaDriverRoutine_99510(*(_QWORD*)(v269 + 1200));
                v390 = v391;
                if (v269 == *(_QWORD*)(v269 + 1248)) {
                  v396 = (unsigned int)(v391 + 1);
                }
                else {
                  v396 = (unsigned int)v391;
                }
                (*(void (**)(__int64, __int64))(*(_QWORD*)(v444 + 64) +
                                                18592LL))(v269 + 184, v396);
              }
              v436 = v390;
              if ((_DWORD)v390 != 0) {
                v397 = v444;
                v398 = v390;
                {
                  v399 = (_BYTE*)(*(_QWORD*)(v269 + 1000) + 8LL);
                  __asm__ volatile("" ::"r"(v399));
                }
                v437 = 1;
                v438 = 0;
                do {
                  if (v399[7] == 2) {
                    {
                      v400 = *((_QWORD*)v399 - 1);
                      __asm__ volatile("" ::"r"(v400));
                    }
                    {
                      v401 = *(_QWORD*)(v400 + 712);
                      __asm__ volatile("" ::"r"(v401));
                    }
                    if (v401 != 0) {
                      v402 = v401 != v269;
                    }
                    else {
                      v402 = false;
                      *(_QWORD*)(v400 + 712) = v269;
                    }
                    (*(void (**)(__int64, __int64, _BOOL4))(
                        *(_QWORD*)(v397 + 64) + 18584LL))(v400 + 184,
                                                          v269 + 184, v402);
                    if (*(_BYTE*)(v269 + 677) != 0) {
                      (*(void (**)(__int64, _BOOL4, __int64))(
                          *(_QWORD*)(v397 + 64) + 18600LL))(v400 + 184, v402,
                                                            4);
                    }
                    {
                      v403 = *(_QWORD*)(v397 + 64);
                      __asm__ volatile("" ::"r"(v403));
                    }
                    if ((*(_BYTE*)(v403 + 16996) & 4) != 0) {
                      v284 = v447;
                      if (*(_BYTE*)(v269 + 673) == 0) {
                        if (*(_BYTE*)(v269 + 941) == 0) {
                          if (*v399 == 0) {
                            (*(void (**)(__int64, __int64, __int64, _QWORD,
                                         bool, __int64))(v403 + 18608))(
                                v442, v400 + 184, v269 + 184,
                                *(unsigned __int8*)(v400 + 680),
                                *(_BYTE*)(v400 + 680) == 0, 1);
                            v397 = v444;
                            v437 = 0;
                          }
                          {
                            v404 = *(unsigned __int8*)(v400 + 680);
                            __asm__ volatile("" ::"r"(v404));
                          }
                          *(_DWORD*)(v400 + 4 * v404 + 684) = *(_DWORD*)v269;
                          *(_BYTE*)(v400 + 680) = v404 + 1;
                        }
                        if (*(_BYTE*)(v269 + 1392) != 0 &&
                            *(_BYTE*)(*(_QWORD*)(v269 + 1272) + 12LL) != 0) {
                          v438 = 1;
                          (*(void (**)(__int64, _QWORD, __int64, __int64))(
                              *(_QWORD*)(v397 + 64) + 18616LL))(
                              v442, *(_QWORD*)(v269 + 32), v400 + 184, 1);
                          v397 = v444;
                        }
                      }
                    }
                    else {
                      v284 = v447;
                    }
                  }
                  --v398;
                  v399 += 16;
                } while (v398 != 0);
                v2 = (__int64)v458_.v459;
                v270 = CudaDriverData_14225e0;
                v405 = v438 != 0;
                v406 = v437 != 0;
              }
              else {
                v397 = v444;
                v405 = false;
                v406 = true;
              }
              {
                v407 = *(_QWORD*)(v397 + 64);
                __asm__ volatile("" ::"r"(v407));
              }
              if (*(_BYTE*)(v407 + 17013) != 0 && !v405) {
                (*(void (**)(__int64, _QWORD, __int64, _QWORD))(v407 + 18616))(
                    v442, *(_QWORD*)(v269 + 32), v269 + 184, 0);
                {
                  v407 = *(_QWORD*)(v397 + 64);
                  __asm__ volatile("" ::"r"(v407));
                }
              }
              if ((*(_BYTE*)(v407 + 17012) & v406 & 1) != 0) {
                (*(void (**)(__int64, __int64, __int64, _QWORD, bool, _QWORD))(
                    v407 + 18608))(v442, v269 + 184, v269 + 184,
                                   *(unsigned __int8*)(v269 + 680),
                                   *(_BYTE*)(v269 + 680) == 0, 0);
              }
              if (*(_BYTE*)(v284 + 415) != 0 || *(_BYTE*)(v284 + 416) != 0) {
                {
                  v408 = *(_QWORD*)(v284 + 424);
                  __asm__ volatile("" ::"r"(v408));
                }
                if (*(_BYTE*)(v408 + 112) != 0) {
                  v281 = cuda_driver_unplaced_9_1bb6a0(v441[19],
                                                       *(_QWORD*)(v408 + 104));
                  if (v281 != 0) {
                    goto LABEL_658;
                  }
                  v284 = v447;
                  *(_BYTE*)(*(_QWORD*)(v447 + 424) + 112LL) = 0;
                }
                {
                  v409 = *(_QWORD*)(v284 + 432);
                  __asm__ volatile("" ::"r"(v409));
                }
                if (*(_BYTE*)(v409 + 112) != 0) {
                  v281 = cuda_driver_unplaced_9_1bb6a0(v441[19],
                                                       *(_QWORD*)(v409 + 104));
                  if (v281 != 0) {
                    goto LABEL_658;
                  }
                  v284 = v447;
                  *(_BYTE*)(*(_QWORD*)(v447 + 432) + 112LL) = 0;
                }
                *(_QWORD*)(v269 + 624) =
                    *(_QWORD*)(*(_QWORD*)(v284 + 424) + 96LL);
                {
                  v410 = *(unsigned __int8*)(v284 + 415);
                  __asm__ volatile("" ::"r"(v410));
                }
                *(_BYTE*)(v269 + 632) = v410;
                if (v410 != 0) {
                  if (v436 == 0) {
                    ++*(_DWORD*)(*(_QWORD*)(v284 + 424) + 12LL);
                  }
                  if (v269 == *(_QWORD*)(v284 + 448)) {
                    *(_QWORD*)(*(_QWORD*)(v284 + 424) + 16LL) = v441[31];
                  }
                }
              }
              *(_BYTE*)(v269 + 676) =
                  (*(_QWORD*)(*(_QWORD*)(v269 + 32) + 856LL) &
                   0x7800000000LL) != 0;
              *(_QWORD*)(v269 + 648) = v441[33];
              CudaDriverRoutine_c3ef0(v269);
              v286 = 0;
              break;
            default:
              goto LABEL_729;
            }
            if (*(_DWORD*)((char*)((__int64*)0x10LL) +
                           *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) +
                                      (_QWORD)v270)) != 0) {
              LODWORD(v453[0]) = 32;
              if (v272 != 0 && *(_BYTE*)(v272 + 415) != 0) {
                v272 = *(_QWORD*)(*(_QWORD*)(v272 + 424) + 96LL);
                __asm__ volatile("" ::"r"(v272));
              }
              v453[1] = v272;
              v453[2] = v269;
              LODWORD(v453[3]) = *(_DWORD*)(v269 + 4);
              DWORDn(v453[3], sizeof(v453[3]) / 4 - 1) = v286;
              cuda_driver_20b420(0x13u, 4u, (__int64)v453);
            }
            v449_.v449 = v286;
            if (v286 != 0) {
              {
                v411 = *(unsigned int*)(v269 + 4);
                __asm__ volatile("" ::"r"(v411));
              }
              if ((unsigned int)v411 > 0xD) {
                v412 = "GRAPH_NODE_TYPE invalid";
              }
              else {
                v412 = (char*)CudaDriverData_1133ad8 +
                       CudaDriverData_1133ad8[v411];
                __asm__ volatile("" ::"r"(v412));
              }
              nvidia_ed630((__int64)"CUDA", 0,
                           (__int64)"Failed to instantiate %s node %p", v412,
                           (const void*)v269);
              v257 = v449_.v449;
              goto LABEL_616;
            }
            if (*(_DWORD*)(v269 + 8) != -1) {
              {
                v288 = *(int**)(v2 + 376);
                __asm__ volatile("" ::"r"(v288));
              }
              v289 = CudaDriverRoutine_98340(*(_QWORD*)(v269 + 1200));
              v291 = CudaDriverRoutine_1a2980(v288, v289);
              {
                v292 = *(_QWORD*)(v291 + 208) +
                       ((unsigned __int64)*(unsigned int*)(v269 + 8) << 6);
                __asm__ volatile("" ::"r"(v292));
              }
              {
                v293 = *(unsigned int*)(v269 + 1092);
                __asm__ volatile("" ::"r"(v293));
              }
              {
                v294 = *(_BYTE**)(v269 + 1056);
                __asm__ volatile("" ::"r"(v294));
              }
              *(_DWORD*)(v292 + 4) = 0;
              {
                v295 = *(unsigned int*)(v291 + 184);
                __asm__ volatile("" ::"r"(v295));
              }
              *(_DWORD*)(v292 + 8) = v295;
              if ((_DWORD)v293 != 0) {
                if (*(_DWORD*)(v269 + 8) != -1) {
                  v296 = v293 - 1;
                LABEL_670:
                  {
                    v297 = *(_DWORD*)(*(_QWORD*)v294 + 8LL);
                    __asm__ volatile("" ::"r"(v297));
                  }
                  if (v297 != -1 &&
                      *(_QWORD*)(v269 + 1200) ==
                          *(_QWORD*)(*(_QWORD*)v294 + 1200LL) &&
                      v294[15] == 3) {
                    {
                      v298 = *(unsigned int*)(v291 + 184);
                      __asm__ volatile("" ::"r"(v298));
                    }
                    {
                      v299 = *(_QWORD*)(v291 + 216);
                      __asm__ volatile("" ::"r"(v299));
                    }
                    *(_DWORD*)(v291 + 184) = v298 + 1;
                    *(_DWORD*)(v299 + 4 * v298) = v297;
                    ++*(_DWORD*)(v292 + 4);
                  }
                  while (v296 != 0) {
                    --v296;
                    v294 += 16;
                    if (*(_DWORD*)(v269 + 8) != -1) {
                      goto LABEL_670;
                    }
                  }
                }
              }
              else {
                {
                  v300 = *(_QWORD*)(v269 + 1216);
                  __asm__ volatile("" ::"r"(v300));
                }
                if (v300 != 0) {
                  {
                    v301 = *(_DWORD*)(v300 + 8);
                    __asm__ volatile("" ::"r"(v301));
                  }
                  {
                    v302 = *(_QWORD*)(v291 + 216);
                    __asm__ volatile("" ::"r"(v302));
                  }
                  *(_DWORD*)(v291 + 184) = v295 + 1;
                  *(_DWORD*)(v302 + 4 * v295) = v301;
                  ++*(_DWORD*)(v292 + 4);
                }
              }
              LODWORD(v303) = *(_DWORD*)(v269 + 1036);
              *(_DWORD*)(v292 + 12) = v303;
              if ((_DWORD)v303 == 0) {
                {
                  v303 = *(_QWORD*)(v269 + 1216);
                  __asm__ volatile("" ::"r"(v303));
                }
                if (v303 != 0) {
                  LODWORD(v303) = 1;
                  *(_DWORD*)(v292 + 12) = 1;
                }
              }
              *(_DWORD*)(v292 + 16) = v303;
              *(_DWORD*)(v292 + 20) = -1;
              {
                v304 = *(_DWORD*)(v269 + 4);
                __asm__ volatile("" ::"r"(v304));
              }
              if (v304 == 13) {
                {
                  v309 = *(_DWORD*)(v269 + 40);
                  __asm__ volatile("" ::"r"(v309));
                }
                *(_BYTE*)(v292 + 40) = 0;
                *(_DWORD*)v292 = v309 + 256;
                {
                  v310 = *(_DWORD*)(v291 + 192);
                  __asm__ volatile("" ::"r"(v310));
                }
                *(_DWORD*)(v269 + 72) = v310;
                *(_QWORD*)(v292 + 48) = *(_QWORD*)(v291 + 272) + 24LL * v310;
                {
                  v311 = *(_DWORD*)(v269 + 44);
                  __asm__ volatile("" ::"r"(v311));
                }
                *(_DWORD*)(v292 + 56) = v311;
                if (v311 != 0) {
                  v312 = 0;
                  while (1) {
                    {
                      v313 = *(_DWORD*)(v291 + 192);
                      __asm__ volatile("" ::"r"(v313));
                    }
                    v314 = v313 + 1;
                    {
                      v315 = *(_QWORD*)(v291 + 224) + 24LL * v313;
                      __asm__ volatile("" ::"r"(v315));
                    }
                    {
                      v316 = *(_DWORD*)(v291 + 184);
                      __asm__ volatile("" ::"r"(v316));
                    }
                    *(_DWORD*)(v291 + 192) = v314;
                    *(_DWORD*)(v315 + 16) = 0;
                    *(_QWORD*)v315 = 0;
                    *(_DWORD*)(v315 + 8) = 0;
                    *(_DWORD*)(v315 + 12) = v316;
                    {
                      v317 = *(_QWORD*)(*(_QWORD*)(v269 + 64) + 8 * v312);
                      __asm__ volatile("" ::"r"(v317));
                    }
                    if (v317 != 0) {
                      break;
                    }
                  LABEL_687:
                    if (++v312 >=
                        (unsigned __int64)*(unsigned int*)(v269 + 44)) {
                      goto LABEL_696;
                    }
                  }
                  while (1) {
                    if (*(_DWORD*)(v317 + 1036) != 0) {
                      if (*(_DWORD*)(v317 + 1092) != 0) {
                      LABEL_691:
                        {
                          v317 = *(_QWORD*)(v317 + 1224);
                          __asm__ volatile("" ::"r"(v317));
                        }
                        if (v317 == 0) {
                          goto LABEL_687;
                        }
                        continue;
                      }
                    }
                    else {
                      {
                        v318 = *(unsigned int*)(v291 + 184);
                        __asm__ volatile("" ::"r"(v318));
                      }
                      {
                        v319 = *(_DWORD*)(v317 + 8);
                        __asm__ volatile("" ::"r"(v319));
                      }
                      {
                        v320 = *(_QWORD*)(v291 + 216);
                        __asm__ volatile("" ::"r"(v320));
                      }
                      *(_DWORD*)(v291 + 184) = v318 + 1;
                      *(_DWORD*)(v320 + 4 * v318) = v319;
                      ++*(_DWORD*)(v315 + 8);
                      if (*(_DWORD*)(v317 + 1092) != 0) {
                        goto LABEL_691;
                      }
                    }
                    ++*(_DWORD*)(v315 + 16);
                    {
                      v317 = *(_QWORD*)(v317 + 1224);
                      __asm__ volatile("" ::"r"(v317));
                    }
                    if (v317 == 0) {
                      goto LABEL_687;
                    }
                  }
                }
              LABEL_696:
                *(_QWORD*)(v292 + 24) =
                    *(_QWORD*)(v291 + 264) + 4LL * *(_QWORD*)(v269 + 32) - 4;
                {
                  v321 = *(_QWORD*)(v269 + 80);
                  __asm__ volatile("" ::"r"(v321));
                }
                if (v321 != 0) {
                  *(_QWORD*)(v292 + 32) =
                      CudaDriverStub_1223e0(*(_QWORD*)(v321 + 24));
                }
                else {
                  *(_QWORD*)(v292 + 32) = 0;
                }
              }
              else {
                if (v304 != 0) {
                  v257 = 999;
                  goto LABEL_616;
                }
                *(_DWORD*)v292 = 0;
                if (*(_BYTE*)(v269 + 677) != 0) {
                  *(_QWORD*)(v292 + 12) = 0x100000001LL;
                  v305 = v292 + 24;
                  v306 = 4;
                  {
                    v307 = *(_QWORD*)(v269 + 752);
                    __asm__ volatile("" ::"r"(v307));
                  }
                  {
                    v308 = *(_QWORD*)(*(_QWORD*)(v269 + 1200) + 64LL);
                    __asm__ volatile("" ::"r"(v308));
                  }
                }
                else {
                  {
                    v307 = *(_QWORD*)(v269 + 752);
                    __asm__ volatile("" ::"r"(v307));
                  }
                  v305 = v292 + 24;
                  {
                    v308 = *(_QWORD*)(*(_QWORD*)(v269 + 1200) + 64LL);
                    __asm__ volatile("" ::"r"(v308));
                  }
                  if (*(_BYTE*)(v269 + 382) != 0) {
                    v306 = 3;
                  }
                  else {
                    v306 = 1;
                  }
                }
                (*(void (**)(unsigned __int64, __int64, __int64))(
                    v308 + 18664))(v305, v307, v306);
              }
              v449_.v449 = 0;
            }
            {
              v324 = *(_QWORD*)(v2 + 304);
              __asm__ volatile("" ::"r"(v324));
            }
            if (v324 != 0) {
              {
                v325 = *(unsigned int*)(v269 + 1092);
                __asm__ volatile("" ::"r"(v325));
              }
              {
                v326 = *(_BYTE**)(v269 + 1056);
                __asm__ volatile("" ::"r"(v326));
              }
            }
            else {
              {
                v324 = *v280;
                __asm__ volatile("" ::"r"(v324));
              }
              *(_QWORD*)(v2 + 304) = *v280;
              {
                v325 = *(unsigned int*)(v269 + 1092);
                __asm__ volatile("" ::"r"(v325));
              }
              {
                v326 = *(_BYTE**)(v269 + 1056);
                __asm__ volatile("" ::"r"(v326));
              }
              if (v324 == 0) {
                goto LABEL_713;
              }
            }
            if ((_DWORD)v325 == 0) {
            LABEL_713:
              if ((_DWORD)v325 != 0) {
                goto LABEL_714;
              }
              goto LABEL_629;
            }
            if (*(_BYTE*)(*(_QWORD*)v326 + 1392LL) == 0 ||
                *(_QWORD*)(*(_QWORD*)v326 + 1200LL) != *(_QWORD*)(v324 + 16)) {
            LABEL_714:
              v327 = v326 + 8;
              v328 = 0;
              do {
                if (*v327 == 0 || v327[2] == 1) {
                  {
                    v271 = *((_QWORD*)v327 - 1);
                    __asm__ volatile("" ::"r"(v271));
                  }
                  if (*(_QWORD*)(v271 + 1208) == 0 &&
                      (*(_QWORD*)(v269 + 1200) == *(_QWORD*)(v271 + 1200) ||
                       ((*(int*)(v271 + 4) - 3) & 0xFFFFFFFD) == 0)) {
                    if (v327[7] == 2) {
                      goto LABEL_628;
                    }
                    if (v328 == 0) {
                      v328 = *((_QWORD*)v327 - 1);
                      __asm__ volatile("" ::"r"(v328));
                    }
                  }
                }
                --v325;
                v327 += 16;
              } while (v325 != 0);
              v271 = v328;
              if (v328 == 0) {
                goto LABEL_629;
              }
            LABEL_628:
              *(_QWORD*)(v271 + 1208) = *(_QWORD*)(v269 + 1208);
              *(_QWORD*)(v271 + 1200) = *(_QWORD*)(v269 + 1200);
            }
          LABEL_629:
            {
              v269 = *(_QWORD*)(v269 + 1136);
              __asm__ volatile("" ::"r"(v269));
            }
            if (v269 == 0) {
              {
                v413 = *(_QWORD*)(v2 + 104);
                __asm__ volatile("" ::"r"(v413));
              }
              if (v413 != 0) {
                do {
                  if (*(_DWORD*)(v413 + 4) == 0 && *(_BYTE*)(v413 + 672) != 0) {
                    v414 = *(_OWORD*)(v413 + 32);
                    v415 = *(_OWORD*)(v413 + 48);
                    {
                      v416 = *(_QWORD*)(v413 + 1200);
                      __asm__ volatile("" ::"r"(v416));
                    }
                    v453[6] = *(_QWORD*)(v413 + 80);
                    *(_OWORD*)v453 = v414;
                    *(_OWORD*)&v453[2] = v415;
                    *(_OWORD*)&v453[4] = *(_OWORD*)(v413 + 64);
                    v417 = CudaDriverRoutine_99810(v416);
                    v418 = CudaDriverStub_1db7a0(v417);
                    {
                      v419 = *(_QWORD*)(v413 + 24);
                      __asm__ volatile("" ::"r"(v419));
                    }
                    v458_.v458[0] = v418;
                    {
                      v420 = *(int**)(v419 + 376);
                      __asm__ volatile("" ::"r"(v420));
                    }
                    v421 = CudaDriverRoutine_98340(*(_QWORD*)(v413 + 1200));
                    v423 = CudaDriverRoutine_1a2980(v420, v421);
                    {
                      v424 = *(_QWORD*)(v413 + 24);
                      __asm__ volatile("" ::"r"(v424));
                    }
                    if (v413 == *(_QWORD*)(v424 + 448)) {
                      {
                        v426 = *(_QWORD*)(v424 + 424) + 96LL;
                        __asm__ volatile("" ::"r"(v426));
                      }
                    }
                    else {
                      {
                        v425 =
                            *(_QWORD*)(v423 + 208) +
                            ((unsigned __int64)*(unsigned int*)(v413 + 8) << 6);
                        __asm__ volatile("" ::"r"(v425));
                      }
                      v426 = v425 + 8;
                      *((_QWORD*)&v455 + 1) = v425 + 4;
                      *(_QWORD*)&v456_.v456 = v423 + 248;
                      *((_QWORD*)&v456_.v456 + 1) = v423 + 256;
                      v456_.v457 = v458_.v458;
                    }
                    {
                      v427 = *(_QWORD*)(v413 + 1200);
                      __asm__ volatile("" ::"r"(v427));
                    }
                    *(_QWORD*)&v455 = v426;
                    v453[5] = (__int64)&v455;
                    v257 = cuda_driver_db0e0((int*)v413, v453, v427);
                    v449_.v449 = v257;
                    if (v257 != 0) {
                      break;
                    }
                  }
                  {
                    v428 = *(unsigned int*)(v413 + 1092);
                    __asm__ volatile("" ::"r"(v428));
                  }
                  if ((_DWORD)v428 != 0) {
                    goto LABEL_916;
                  }
                  *(_QWORD*)(v413 + 1168) = *(_QWORD*)(v2 + 184);
                  *(_QWORD*)(v2 + 184) = v413;
                  {
                    v429 = *(_QWORD*)(v413 + 1168);
                    __asm__ volatile("" ::"r"(v429));
                  }
                  if (v429 != 0) {
                    *(_QWORD*)(v429 + 1160) = v413;
                  }
                  {
                    v428 = *(unsigned int*)(v413 + 1092);
                    __asm__ volatile("" ::"r"(v428));
                  }
                  if ((_DWORD)v428 != 0) {
                  LABEL_916:
                    {
                      v430 = (unsigned __int8*)(*(_QWORD*)(v413 + 1056) + 10LL);
                      __asm__ volatile("" ::"r"(v430));
                    }
                    while (*(v430 - 2) != 0) {
                      {
                        v431 = *v430;
                        __asm__ volatile("" ::"r"(v431));
                      }
                      v430 += 16;
                      if (v431 == 1) {
                        break;
                      }
                      if (--v428 == 0) {
                        goto LABEL_904;
                      }
                    }
                  }
                  else {
                  LABEL_904:
                    *(_QWORD*)(v413 + 1176) = *(_QWORD*)(v2 + 272);
                    *(_QWORD*)(v2 + 272) = v413;
                  }
                  {
                    v413 = *(_QWORD*)(v413 + 1136);
                    __asm__ volatile("" ::"r"(v413));
                  }
                  v257 = 0;
                } while (v413 != 0);
              }
              else {
                v257 = 0;
              }
            LABEL_616:
              {
                v260 = *(_DWORD*)(v2 + 292);
                __asm__ volatile("" ::"r"(v260));
              }
              {
                v261 = *(_QWORD*)(v2 + 296);
                __asm__ volatile("" ::"r"(v261));
              }
              v448 = v257;
              v262 = v257;
              CudaDriverRoutine_1089c0(v260, v261);
              result = v262;
              if (v262 == 0) {
                {
                  v263 = *(_QWORD*)(v2 + 384);
                  __asm__ volatile("" ::"r"(v263));
                }
                if (v263 != 0) {
                  while (1) {
                    result =
                        CudaDriverRoutine_1ffda0((__int64**)(v263 + 88), 8u);
                    v448 = result;
                    if ((_DWORD)result != 0) {
                      break;
                    }
                    {
                      v263 = *(_QWORD*)(v263 + 960);
                      __asm__ volatile("" ::"r"(v263));
                    }
                    if (v263 == 0) {
                      goto LABEL_620;
                    }
                  }
                }
                else {
                LABEL_620:
                  CudaDriverRoutine_1a2b00(
                      *(_QWORD*)(v2 + 376),
                      (__int64 (*)(_QWORD, _QWORD,
                                   __int64))CudaDriverRoutine_cfb90,
                      (__int64)&v448);
                  return v448;
                }
              }
              return result;
            }
          }
          v276 = 0;
          v277 = CudaDriverStub_12e330(0);
          {
            v278 = **(_QWORD**)(v269 + 64);
            __asm__ volatile("" ::"r"(v278));
          }
          if (v278 == 0) {
            goto LABEL_645;
          }
        LABEL_643:
          v279 = 0;
          do {
            *(_QWORD*)(v277 + 8LL * v279++) = v278;
            {
              v278 = *(_QWORD*)(v278 + 1224);
              __asm__ volatile("" ::"r"(v278));
            }
          } while (v278 != 0);
          goto LABEL_645;
        }
      }
      v257 = v449_.v449;
      goto LABEL_616;
    }
  }
}

__int64 nvidia_f2cf0(unsigned int* a1, __int64* a2)
{
  unsigned __int64 v2;
  __int64 result;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  struct {
    char gap0_[8];
    _DWORD v9[2];
    __int128 v10;
    __int128 v11;
    __int128 v12;
    __int128 v13;
    __int64 v14;
  } v9_;
  __int64 v15;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v2 = atomic_fetch_or((atomic_ullong* volatile)((char*)CudaDriverData_1422118 +
                                                 8 * *a1 + 18392),
                       0);
  if (v2 != 0) {
    result = 0;
    *a2 = v2;
  }
  else if ((unsigned __int8)CudaDriverStub_4f840(a1) != 0 &&
           cuda_driver_predicates_9ac80((__int64)a1)) {
    v7 = *a1;
    v15 = 0;
    v9_.v14 = 0;
    v9_.v9[0] = 1;
    v9_.v9[1] = v7;
    v9_.v10 = (__typeof__(v9_.v10)){0};
    v9_.v11 = (__typeof__(v9_.v11)){0};
    v9_.v12 = (__typeof__(v9_.v12)){0};
    v9_.v13 = (__typeof__(v9_.v13)){0};
    v8 = 1;
    result = CudaDriverRoutine_f2a00(v9_.v9, 0, v6, (unsigned __int64*)&v15),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((_DWORD)result == 0) {
      return CudaDriverRoutine_f0380(&v8, 0, v15, 1u, 0, a2);
    }
  }
  else {
    return 801;
  }
  return result;
}

__int64 nvidia_fa210(__int64 result, __int64 a2, __int64 a3, int a4, __int64 a5,
                     char a6)
{
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int* v36;
  int v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  _QWORD* v46;
  struct {
    int v47;
    char gap12_[4];
    __int64 v48;
    __int64 v49;
  } v47_;

  if ((_DWORD)result != 0) {
    return result;
  }
  if (a4 != 1) {
    return 0;
  }
  if (*(_BYTE*)(CudaDriverRoutine_98340(*(_QWORD*)(a3 + 16)) + 1008) != 0 ||
      **(_DWORD**)(a3 + 16) == 1 && (*(_BYTE*)(a3 + 56) & 1) != 0) {
    goto LABEL_4;
  }
  if (cuda_driver_predicates_f7a00((int*)a2)) {
    if ((*((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
         2) != 0 &&
        (*((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
         4) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a3 + 16) + 64LL) + 17096LL) != 0) {
      goto LABEL_52;
    }
    if (a6 == 0) {
      goto LABEL_4;
    }
  }
  v29 = *(_DWORD*)a2;
  v30 = a2;
  if (*(_DWORD*)a2 != 0) {
    if (v29 != 1) {
      if (v29 == 2) {
        v31 = *(_BYTE*)(a2 + 153);
      LABEL_44:
        if (v31 != 0) {
          goto LABEL_4;
        }
        v29 = *(_DWORD*)a2;
        v30 = a2;
        goto LABEL_46;
      }
      goto LABEL_46;
    }
    v32 = 32;
  }
  else {
    v32 = 24;
  }
  v33 = *(_QWORD*)(a2 + v32);
  if (v33 != 0) {
    v31 = ((__int64 (*)(__int64))cuda_driver_predicates_1dc880)(v33);
    goto LABEL_44;
  }
LABEL_46:
  if (v29 == 1) {
    v34 = 32;
  }
  else {
    if (v29 != 0) {
      goto LABEL_52;
    }
    v34 = 24;
    v30 = a2;
  }
  v35 = *(_QWORD*)(v30 + v34);
  if (v35 != 0 && (unsigned __int8)CudaDriverRoutine_1dd030(v35) != 0) {
    goto LABEL_4;
  }
LABEL_52:
  v36 = (int*)(a2 + 200);
  if (cuda_driver_predicates_f7a00((int*)(a2 + 200))) {
    if ((*((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
         2) == 0 ||
        (*((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
         4) == 0 ||
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a3 + 16) + 64LL) + 17096LL) == 0) {
      goto LABEL_4;
    }
    goto LABEL_73;
  }
  v37 = *v36;
  if (*v36 != 0) {
    if (v37 != 1) {
      if (v37 == 2) {
        v38 = *(_BYTE*)(a2 + 353);
        goto LABEL_65;
      }
      goto LABEL_67;
    }
    v39 = 8;
  }
  else {
    v39 = 6;
  }
  v40 = *(_QWORD*)&v36[v39];
  if (v40 != 0) {
    v38 = ((__int64 (*)(__int64))cuda_driver_predicates_1dc880)(v40);
  LABEL_65:
    if (v38 == 0) {
      v37 = *v36;
      goto LABEL_67;
    }
  LABEL_4:
    *(_QWORD*)(a5 + 8) = CudaDriverRoutine_12a190();
    *(_DWORD*)(a5 + 68) = 4;
    v12 = CudaDriverRoutine_98340(*(_QWORD*)(*(_QWORD*)(a5 + 40) + 16LL));
    v13 = *(_DWORD*)(v12 + 188);
    v14 = 64;
    v15 = 168;
    v16 = (char*)CudaDriverData_14225e0;
    if (v13 != 3) {
      v15 = 64;
      v14 = 28;
    }
    if (*(_DWORD*)(*(_QWORD*)((char*)CudaDriverData_14225e0 + v15) + v14) !=
        0) {
      v47_.v47 = 24;
      v17 = *(_QWORD*)(a5 + 40);
      v47_.v48 = v12;
      v47_.v49 = v17;
      if (v13 == 3) {
        v18 = 21;
      }
      else {
        v18 = 8;
      }
      if (v13 == 3) {
        v19 = 16;
      }
      else {
        v19 = 7;
      }
      cuda_driver_20b420(v18, v19, (__int64)&v47_.v47);
    }
    v20 = CudaDriverRoutine_113ee0(a3);
    v21 = CudaDriverRoutine_98340(*(_QWORD*)(*(_QWORD*)(a5 + 40) + 16LL));
    v22 = *(_DWORD*)(v21 + 188);
    v23 = 64;
    if (v22 == 3) {
      v23 = 168;
    }
    v24 = 32;
    v25 = *(_QWORD*)&v16[v23];
    if (v22 == 3) {
      v24 = 68;
    }
    if (*(_DWORD*)(v25 + v24) != 0) {
      v47_.v47 = 24;
      v26 = *(_QWORD*)(a5 + 40);
      v47_.v48 = v21;
      v47_.v49 = v26;
      if (v22 == 3) {
        v27 = 21;
      }
      else {
        v27 = 8;
      }
      if (v22 == 3) {
        v28 = 17;
      }
      else {
        v28 = 8;
      }
      cuda_driver_20b420(v27, v28, (__int64)&v47_.v47);
    }
    *(_DWORD*)(a5 + 68) = 0;
    *(_BYTE*)(a5 + 2) = 1;
    return v20;
  }
LABEL_67:
  if (v37 == 1) {
    v41 = 8;
  }
  else {
    if (v37 != 0) {
      goto LABEL_73;
    }
    v41 = 6;
  }
  v42 = *(_QWORD*)&v36[v41];
  if (v42 != 0 && (unsigned __int8)CudaDriverRoutine_1dd030(v42) != 0) {
    goto LABEL_4;
  }
LABEL_73:
  if (*(_DWORD*)a2 == 1) {
    v43 = 32;
    goto LABEL_77;
  }
  if (*(_DWORD*)a2 == 0) {
    v43 = 24;
  LABEL_77:
    v44 = *(_QWORD**)(a2 + v43);
    goto LABEL_79;
  }
  v44 = nullptr;
LABEL_79:
  if (*v36 == 1) {
    v45 = 8;
    goto LABEL_83;
  }
  if (*v36 == 0) {
    v45 = 6;
  LABEL_83:
    v46 = *(_QWORD**)&v36[v45];
    goto LABEL_85;
  }
  v46 = nullptr;
LABEL_85:
  if (v44 != nullptr && cuda_driver_predicates_1dc930(v44)) {
    CudaDriverRoutine_98a90(*(_QWORD*)(a3 + 16), (__int64)v44, a3);
  }
  if (v46 != nullptr && cuda_driver_predicates_1dc930(v46)) {
    CudaDriverRoutine_98a90(*(_QWORD*)(a3 + 16), (__int64)v46, a3);
  }
  return 0;
}

bool nvidia_116260(__int64 a1, __int64 a2)
{
  unsigned int v3;
  unsigned int v4;
  bool v5;
  int v6;

  v3 = *(_DWORD*)((char*)((_UNKNOWN*)0x10CLL) + (_QWORD)CudaDriverData_1422118 +
                  4);
  v4 = *(_DWORD*)((char*)((_UNKNOWN*)0x10CLL) + (_QWORD)CudaDriverData_1422118);
  v5 = CudaDriverRoutine_9aa40(*(_QWORD*)(a1 + 64));
  v6 = *(_DWORD*)(a2 + 1264);
  return (v5 || v6 == 3 || v3 > v4) && v6 != 2;
}

__int64 nvidia_123860(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  bool v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char** v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  unsigned int v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  struct {
    __int64 v54;
    __int64 v55;
    char gap48_[4];
    unsigned int v56;
  } v54_;
  __int64 v57;
  __int64 v58;
  __int64 v59;

  v2 = *(_QWORD*)(a2 + 64);
  if ((*(_BYTE*)(a2 + 1952) & 4) != 0 &&
      CudaDriverRoutine_9aa40(*(_QWORD*)(a2 + 64))) {
    v5 = *(_QWORD*)(*(_QWORD*)(a2 + 64) + 16864LL);
    v7 = *(_QWORD*)(v5 + 232);
    v6 = (__int64*)(v5 + 232);
    if (v7 == 0) {
      v13 = nvidia_123860(v6, *(_QWORD*)(*(_QWORD*)(a2 + 64) + 16864LL));
      if (v13 != 0) {
        v10 = v13;
        goto LABEL_17;
      }
    }
  }
  if (CudaDriverRoutine_9ab50(v2)) {
    v8 = *(_QWORD*)(a2 + 232);
  }
  else {
    v11 = CudaDriverStub_12e330(164112);
    v8 = v11;
    if (v11 == 0) {
      v10 = 2;
      goto LABEL_51;
    }
    memset_plt(v11 + 8, 0, 0x28108u);
    *(_QWORD*)v8 = a2;
    v12 = (*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)(a2 + 64) + 21216LL))(a2, v8 + 48, v8 + 24);
    if (v12 != 0) {
      v10 = v12;
      CudaDriverRoutine_12e340(v8);
    LABEL_17:
      v8 = 0;
      goto LABEL_51;
    }
  }
  v9 = (*(__int64 (**)(__int64, __int64))(v2 + 21224))(a2, v8 + 16);
  if (v9 != 0) {
    goto LABEL_10;
  }
  *(_BYTE*)(v8 + 82112) |= 2u;
  if ((*(_BYTE*)(*(_QWORD*)(a2 + 64) + 16976LL) & 0x20) != 0) {
    v9 = (*(__int64 (**)(__int64, __int64))(v2 + 21232))(a2, v8 + 40);
    if (v9 != 0) {
      goto LABEL_10;
    }
  }
  v9 = cuda_driver_predicates_10f0d0(&v54_.v54, a2);
  if (v9 != 0) {
    goto LABEL_10;
  }
  v14 = *(_QWORD*)(a2 + 64);
  *(_QWORD*)(a2 + 1208) = v54_.v54;
  if ((*(_BYTE*)(v14 + 16976) & 0x40) != 0 &&
      !cuda_driver_predicates_9ae50(v14)) {
    v9 = CudaDriverRoutine_123f20((_QWORD*)(v8 + 32), *(_QWORD*)v8);
    if (v9 != 0) {
      goto LABEL_10;
    }
  }
  v57 = 0;
  v58 = 0;
  v54_.v56 = 0;
  v54_.v55 = 0x1000000000LL;
  v15 = CudaDriverStub_12e330(256);
  v54_.v54 = v15;
  if (v15 == 0 ||
      ((v16 = *(__int64**)v8, v17 = (_QWORD*)v15,
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)v8 + 64LL) + 16978LL) & 1) != 0)
           ? ((v19 = true,
               (unsigned int)CudaDriverStub_10f370(*(_QWORD*)v8) != 2)
                  ? (v20 = 9)
                  : (v20 = 10))
       : (v18 = CudaDriverRoutine_e5960(), v19 = !v18) ? (v20 = 7)
                                                       : (v20 = 8),
       (v21 = cuda_driver_8c000(v20, *(_DWORD*)(v16[8] + 3152),
                                *(_DWORD*)(v16[8] + 3156))) == 0)) {
    v10 = 999;
    goto LABEL_47;
  }
  v51 = v21;
  v22 = CudaDriverStub_102e00(*(_QWORD*)(v8 + 24));
  v23 = (char*)CudaDriverStub_12e330(11);
  *v17 = v23;
  if (v23 == nullptr) {
    goto LABEL_55;
  }
  strcpy(v23, "scratchpad");
  v17[1] = v22;
  v10 = 1;
  v24 = *(_QWORD*)(v8 + 16);
  LODWORD(v54_.v55) = 1;
  if (v24 == 0) {
    goto LABEL_33;
  }
  v25 = CudaDriverStub_102e00(v24);
  v26 = (char*)CudaDriverStub_12e330(10);
  v10 = 2;
  v17[2] = v26;
  if (v26 == nullptr) {
  LABEL_47:
    v37 = v54_.v55;
    v36 = v54_.v54;
    if ((_DWORD)v54_.v55 == 0) {
    LABEL_50:
      CudaDriverRoutine_12e340(v36);
      goto LABEL_51;
    }
  LABEL_48:
    v39 = v37;
    v40 = (__int64*)v36;
    do {
      v41 = *v40;
      v40 += 2;
      CudaDriverRoutine_12e340(v41);
      --v39;
    } while (v39 != 0);
    goto LABEL_50;
  }
  strcpy(v26, "traceBase");
  v17[3] = v25;
  LODWORD(v54_.v55) = 2;
LABEL_33:
  v27 = v16[8];
  if ((*(_BYTE*)(v27 + 16976) & 0x20) == 0) {
    goto LABEL_36;
  }
  v28 = *(_QWORD*)(v8 + 40);
  v29 = (*(__int64 (**)(__int64))(v27 + 18424))(13);
  v30 = (char**)&v17[2 * v10];
  v31 = (char*)CudaDriverStub_12e330(18);
  *v30 = v31;
  if (v31 == nullptr) {
  LABEL_55:
    v10 = 2;
    v37 = v54_.v55;
    v36 = v54_.v54;
    if ((_DWORD)v54_.v55 == 0) {
      goto LABEL_50;
    }
    goto LABEL_48;
  }
  strcpy(v31, "trap_reason_table");
  v30[1] = (char*)(v29 + v28);
  v27 = v16[8];
  LODWORD(v54_.v55) = v10 + 1;
LABEL_36:
  if (!CudaDriverRoutine_9aa30(v27) || (v32 = v16[1981]) == 0 ||
      (v33 = CudaDriverStub_102e00(v32),
       (v34 = CudaDriverRoutine_123fd0((__int64)&v54_.v54, "pause_reason_table",
                                       v33)) == 0)) {
    if ((*(_BYTE*)(v16[8] + 16978) & 1) == 0 ||
        (v43 = CudaDriverStub_102370(v16[151]),
         (v34 = CudaDriverRoutine_123fd0((__int64)&v54_.v54,
                                         "CUDA_PREEMPTION_BUFFER_PATCH_ADDR",
                                         v43)) == 0) &&
            ((unsigned int)CudaDriverStub_10f370((__int64)v16) != 2 ||
             cuda_driver_predicates_9ae50(v16[8]) ||
             (v44 = CudaDriverStub_10f730(v16[151]),
              (v34 = CudaDriverRoutine_123fd0(
                   (__int64)&v54_.v54, "CUDA_PREEMPTION_BARRIER_PATCH_ADDR",
                   v44)) == 0))) {
      v35 = v16[8];
      if ((*(_BYTE*)(v35 + 16976) & 0x40) == 0) {
        goto LABEL_85;
      }
      if (cuda_driver_predicates_9ae50(v35)) {
        goto LABEL_85;
      }
      v45 = *(_QWORD*)(v8 + 32);
      v52 = 0;
      v53 = 0;
      v34 = cuda_driver_checks_bae90(v45, (__int64)"detect_continuation", &v53);
      if (v34 == 0) {
        v34 = cuda_driver_checks_bae90(*(_QWORD*)(v8 + 32),
                                       (__int64)"handle_continuation", &v52);
        if (v34 == 0) {
          v46 = (*(__int64 (**)(__int64))(v16[8] + 18872))(v53);
          v47 = (*(__int64 (**)(__int64))(v16[8] + 18872))(v52);
          v34 = CudaDriverRoutine_123fd0(
              (__int64)&v54_.v54, "arch_traphandler_detect_continuations", v46);
          if (v34 == 0) {
            v34 = CudaDriverRoutine_123fd0(
                (__int64)&v54_.v54, "arch_traphandler_handle_continuations",
                v47);
            if (v34 == 0) {
            LABEL_85:
              if (v19 ||
                  (v34 = CudaDriverRoutine_e61f0(
                       (__int64)v16, (_DWORD*)&v58 + 1, &v58, (_DWORD*)&v57 + 1,
                       (__int64)&v57, (__int64)&v54_.v56)) == 0 &&
                      (v34 = CudaDriverRoutine_123fd0(
                           (__int64)&v54_.v54, "kilp_state_setup",
                           DWORDn(v58, sizeof(v58) / 4 - 1))) == 0 &&
                      (v34 = CudaDriverRoutine_123fd0(
                           (__int64)&v54_.v54, "kilp_setup_trt_callback",
                           (unsigned int)v58)) == 0 &&
                      (v34 = CudaDriverRoutine_123fd0(
                           (__int64)&v54_.v54, "kilp_restore_callback",
                           DWORDn(v57, sizeof(v57) / 4 - 1))) == 0 &&
                      (v34 = CudaDriverRoutine_123fd0(
                           (__int64)&v54_.v54, "kilp_cta_ilp_enable_table",
                           (unsigned int)v57)) == 0 &&
                      (v34 = CudaDriverRoutine_123fd0(
                           (__int64)&v54_.v54, "kilp_cta_stop_continuations",
                           v54_.v56)) == 0) {
                v36 = v54_.v54;
                v37 = v54_.v55;
                v38 = CudaDriverRoutine_1059a0((__int64)v16, &v59, v51, 2,
                                               v54_.v54, (unsigned int)v54_.v55,
                                               1);
                if (v38 != 0) {
                  v10 = v38;
                  if (v37 == 0) {
                    goto LABEL_50;
                  }
                  goto LABEL_48;
                }
                CudaDriverRoutine_1240c0((__int64)&v54_.v54);
                v48 = v59;
                *(_QWORD*)(v8 + 82120) = v59;
                v9 = cuda_driver_checks_bae90(v48, (__int64)"traphandler",
                                              (__int64*)(v8 + 82128));
                if (v9 != 0 ||
                    ((v49 = *(_DWORD*)(*(_QWORD*)(a2 + 64) + 16976LL)) &
                     0x8000) != 0 &&
                        ((v49 & 0x10000) != 0 ? (v50 = "do_pause")
                                              : (v50 = "traphandler_debugger"),
                         (v9 = cuda_driver_checks_bae90(
                              *(_QWORD*)(v8 + 82120), (__int64)v50,
                              (__int64*)(v8 + 82136))) != 0)) {
                LABEL_10:
                  v10 = v9;
                  goto LABEL_51;
                }
                CudaDriverRoutine_205fa0(0, *(_QWORD*)(a2 + 96),
                                         (__int64)&v54_.v54, nullptr);
                v10 = (*(__int64 (**)(__int64, __int64, __int64))(
                    *(_QWORD*)(a2 + 64) + 19520LL))(
                    (__int64)&v54_.v54, a2,
                    *(_QWORD*)(*(_QWORD*)(v8 + 82128) + 96LL));
                CudaDriverRoutine_206060(*(_QWORD*)(a2 + 96), v54_.v54);
                if (v10 == 0) {
                  CudaDriverRoutine_107f40((_QWORD*)(v8 + 82096), 51, 0);
                  *(_DWORD*)(v8 + 8) = 1;
                  *a1 = v8;
                  return v10;
                }
              LABEL_51:
                CudaDriverRoutine_122550((_QWORD*)v8);
                return v10;
              }
            }
          }
        }
      }
    }
  }
  v10 = v34;
  v37 = v54_.v55;
  v36 = v54_.v54;
  if ((_DWORD)v54_.v55 == 0) {
    goto LABEL_50;
  }
  goto LABEL_48;
}

__int64 nvidia_124250(__int64 a1)
{
  __int64 v1;
  void* v3;
  __int64 result;
  unsigned int v5;
  _BOOL4 v6;
  unsigned int v8;
  char v9[64];
  __int64 v10;

  v1 = a1 + 0x4000;
  v3 = CudaDriverData_1422118;
  if ((*(_WORD*)((_BYTE*)((_UNKNOWN*)0x1858LL) +
                 (_QWORD)CudaDriverData_1422118) &
       0x400) != 0) {
    cuda_driver_predicates_9ac80(a1);
    *(_BYTE*)(v1 + 684) &= ~2u;
    cuda_driver_predicates_9ac80(a1);
    *(_BYTE*)(v1 + 685) = 0;
  }
  if ((*(_WORD*)(v1 + 464) & 0x20) != 0) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)CudaDriverData_1423360 + 56LL))(a1);
    if ((*(_BYTE*)(v1 + 888) & 1) == 0) {
      return result;
    }
  }
  else {
    result = 0;
    if ((*(_BYTE*)(v1 + 888) & 1) == 0) {
      return result;
    }
  }
  v5 = result;
  if (!cuda_driver_predicates_9ae50(a1) ||
      (*(_BYTE*)(v1 + 684) & 1) != 0 && *(_BYTE*)(v1 + 712) != 0) {
    return v5;
  }
  v10 = 0;
  v6 = (unsigned int)CudaDriverRoutine_12e300() == 0 &&
       sscanf_plt(v9, "%lli", &v10) == 1 & v10 == 1288634872;
  if (*(_BYTE*)(a1 + 3368) != 0) {
    v6 = true;
  }
  if ((*(_WORD*)((_BYTE*)&CudaDriverRoutine_4484 + (_QWORD)v3) & 4) != 0) {
    v8 = v5;
  }
  else {
    v8 = 802;
  }
  if (v6) {
    return v5;
  }
  else {
    return v8;
  }
}

__int64 nvidia_125580(__int64 result)
{
  if ((*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)result + 8LL) + 64LL) +
                 16848LL) &
       0x20) != 0) {
    return (*(__int64 (**)(__int64))(CudaDriverData_143bd88 + 80))(
        (__int64)&CudaDriverData_143bd88);
  }
  return result;
}

__int64 nvidia_1c1e00(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4,
                      __int64* a5, __int64* a6, char* a7)
{
  unsigned int v7;
  __int64 v8;
  __int64 v10;
  char v11;
  unsigned int v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  unsigned int v32;
  _BYTE v33[4];
  unsigned __int64 v34;

  v7 = 4;
  v33[0] = 0;
  if (a5 != nullptr && a6 != nullptr && a7 != nullptr) {
    v8 = a1 + 23372880;
    if (a2 < *(_DWORD*)(a1 + 23372880)) {
      v10 = a1 + 91280LL * a2 + 1096;
      if (a3 > 0x3F) {
        if (a3 - 64 > 0xFFFFFFBE) {
          return 13;
        }
        v11 = 64 - a3;
        if (a3 > 0x40) {
          v11 = 0;
        }
        if (((*(_QWORD*)(a1 + 91280LL * a2 + 1152) >> a3 << v11) & 1) == 0) {
          return 13;
        }
      }
      else if (((*(_QWORD*)(a1 + 91280LL * a2 + 1144) >> a3) & 1) == 0) {
        return 13;
      }
      *a5 = 0xFFFFFFFFLL;
      *a6 = -1;
      a6[1] = -1;
      *a7 = 1;
      v18 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
          a1 + 23375648))(*(_QWORD*)(a1 + 24), a4, (__int64)&v34, 8);
      if (v18 != 0) {
        return v18;
      }
      if ((*(_BYTE*)(v10 + 97) & 1) != 0) {
        goto LABEL_17;
      }
      v20 = CudaDriverStub_1a0ee0_alt1(a1, *(_QWORD*)(v10 + 1424LL * a3 + 152));
      if (v20 == 0) {
        return 10;
      }
      v21 = *(_QWORD*)(v20 + 8);
      if (v21 == 0) {
        return 10;
      }
      v22 = *(_QWORD*)(v21 + 72);
      if (v22 == 0) {
        return 10;
      }
      if (*(_DWORD*)(v22 + 72) <= 2u &
          (v34 & 0xFFF0000000000000LL) == 0xE260000000000000LL) {
        *a6 = -1;
        a6[1] = -1;
        CudaDriverRoutine_1caa40(a6, a3, 1u, 0);
      }
      else if (v34 >> 51 == 7701) {
        *a6 = -1;
        a6[1] = -1;
        CudaDriverRoutine_1caa40(a6, a3, 1u, 0);
        if (*(_DWORD*)(v8 + 4) != 0) {
          v24 = a2;
          v25 = a1;
          v26 = 0;
          do {
            if (CudaDriverRoutine_19b350(v25, v24, a3, v26)) {
              v28 = 1LL << v26;
              if (v26 > 0x3F) {
                a6[1] &= ~v28;
              }
              else {
                *a6 &= ~v28;
              }
            }
            ++v26;
            v24 = a2;
            v25 = a1;
          } while (v26 < *(unsigned int*)(v8 + 4));
        }
      }
      else {
        v18 = CudaDriverRoutine_1c2a70(a1, a2, a3, (__int64)v33);
        if (v18 != 0) {
          return v18;
        }
        if (v33[0] == 1) {
          *a6 = -1;
          a6[1] = -1;
          CudaDriverRoutine_1caa40(a6, a3, 1u, 0);
          if (*(_DWORD*)(v8 + 4) != 0) {
            v30 = a2;
            v31 = a1;
            v32 = 0;
            do {
              if (CudaDriverRoutine_19b350(v31, v30, a3, v32)) {
                CudaDriverRoutine_1caa40(a6, v32, 1u, 0);
              }
              ++v32;
              v30 = a2;
              v31 = a1;
            } while (v32 < *(_DWORD*)(v8 + 4));
          }
          v29 = a4 | 8;
          if ((a4 & 0x1F) != 0) {
            v29 = a4;
          }
          goto LABEL_39;
        }
        if ((v34 & 0xFFF000FFFFF001C0LL) != 0xE3A00000002000C0LL) {
        LABEL_17:
          v19 = 1;
        LABEL_18:
          v7 = 0;
          *a7 = v19;
          return v7;
        }
        *a6 = 0;
        a6[1] = 0;
      }
      v29 = a4 + 8;
      if (((a4 + 8) & 0x1F) == 0) {
        v29 = a4 + 16;
      }
    LABEL_39:
      v19 = 0;
      *a5 = v29;
      goto LABEL_18;
    }
    return 12;
  }
  return v7;
}

__int64 nvidia_1cd340(_DWORD** a1, __int64 a2)
{
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  _DWORD* v7;
  _DWORD* v8;
  void* v9;
  int v10;
  bool v11;
  int v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;

  v4 = CudaDriverStub_5a6f0(a2);
  v5 = *a1;
  v6 = v4;
  if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)(v4 + 64) + 20792LL))(a2) !=
      0) {
    *(_DWORD*)v5 = 536944640;
    v5[1] = CudaDriverRoutine_5bba0(a2, 0);
    v5 += 2;
  }
  *(_OWORD*)v5 = CudaDriverData_1115ea0;
  v7 = v5 + 4;
  if ((*(_DWORD*)(*(_QWORD*)(v6 + 64) + 3384LL) | 0x100) == 0xB1C0) {
    v7 = v5 + 6;
    v5[4] = 536944836;
    v5[5] = *(unsigned __int8*)(*(_QWORD*)(v6 + 64) + 3164LL) |
            ((unsigned __int8)*(_DWORD*)(*(_QWORD*)(v6 + 64) + 3160LL) << 8);
  }
  v8 = v7 + 128;
  v9 = CudaDriverData_1422118;
  v10 = *(int*)(*(_QWORD*)(v6 + 64) + 3756LL) *
        *(int*)(*(_QWORD*)(v6 + 64) + 3732LL);
  v11 = (*((_BYTE*)((_UNKNOWN*)0x1848LL) + (_QWORD)CudaDriverData_1422118) &
         1) == 0;
  v12 =
      *(_DWORD*)((char*)((_UNKNOWN*)0x184CLL) + (_QWORD)CudaDriverData_1422118);
  v7[64] = 536944786;
  v7[66] = 536944786;
  v7[68] = 536944786;
  v7[70] = 536944786;
  v7[72] = 536944786;
  v7[74] = 536944786;
  v7[76] = 536944786;
  v7[78] = 536944786;
  v7[80] = 536944786;
  v7[82] = 536944786;
  v7[84] = 536944786;
  v7[86] = 536944786;
  v7[88] = 536944786;
  v7[90] = 536944786;
  v7[92] = 536944786;
  v7[94] = 536944786;
  v7[96] = 536944786;
  v7[98] = 536944786;
  v7[100] = 536944786;
  v7[102] = 536944786;
  if (!v11) {
    LOWORD(v10) = v12;
  }
  v7[104] = 536944786;
  v7[106] = 536944786;
  v7[108] = 536944786;
  v7[110] = 536944786;
  v7[112] = 536944786;
  v7[114] = 536944786;
  v7[116] = 536944786;
  v7[118] = 536944786;
  v7[120] = 536944786;
  v7[122] = 536944786;
  v7[124] = 536944786;
  v7[126] = 536944786;
  *(_DWORD*)v7 = 536944786;
  v7[1] = ((unsigned __int16)v10 << 8) | 0x3F;
  v7[2] = 536944786;
  v7[3] = ((unsigned __int16)v10 << 8) | 0x3E;
  v7[12] = 536944786;
  v7[13] = ((unsigned __int16)v10 << 8) | 0x39;
  v7[4] = 536944786;
  v7[5] = ((unsigned __int16)v10 << 8) | 0x3D;
  v7[16] = 536944786;
  v7[17] = ((unsigned __int16)v10 << 8) | 0x37;
  v7[6] = 536944786;
  v7[7] = ((unsigned __int16)v10 << 8) | 0x3C;
  v7[20] = 536944786;
  v7[21] = ((unsigned __int16)v10 << 8) | 0x35;
  v7[8] = 536944786;
  v7[9] = ((unsigned __int16)v10 << 8) | 0x3B;
  v7[24] = 536944786;
  v7[25] = ((unsigned __int16)v10 << 8) | 0x33;
  v7[10] = 536944786;
  v7[11] = ((unsigned __int16)v10 << 8) | 0x3A;
  v7[28] = 536944786;
  v7[29] = ((unsigned __int16)v10 << 8) | 0x31;
  v7[14] = 536944786;
  v7[15] = ((unsigned __int16)v10 << 8) | 0x38;
  v7[30] = 536944786;
  v7[31] = ((unsigned __int16)v10 << 8) | 0x30;
  v7[18] = 536944786;
  v7[19] = ((unsigned __int16)v10 << 8) | 0x36;
  v7[32] = 536944786;
  v7[33] = ((unsigned __int16)v10 << 8) | 0x2F;
  v7[22] = 536944786;
  v7[23] = ((unsigned __int16)v10 << 8) | 0x34;
  v7[34] = 536944786;
  v7[35] = ((unsigned __int16)v10 << 8) | 0x2E;
  v7[26] = 536944786;
  v7[27] = ((unsigned __int16)v10 << 8) | 0x32;
  v7[127] = (unsigned __int16)v10 << 8;
  v7[36] = 536944786;
  v7[37] = ((unsigned __int16)v10 << 8) | 0x2D;
  v7[38] = 536944786;
  v7[39] = ((unsigned __int16)v10 << 8) | 0x2C;
  v7[40] = 536944786;
  v7[41] = ((unsigned __int16)v10 << 8) | 0x2B;
  v7[42] = 536944786;
  v7[43] = ((unsigned __int16)v10 << 8) | 0x2A;
  v7[44] = 536944786;
  v7[45] = ((unsigned __int16)v10 << 8) | 0x29;
  v7[46] = 536944786;
  v7[47] = ((unsigned __int16)v10 << 8) | 0x28;
  v7[48] = 536944786;
  v7[49] = ((unsigned __int16)v10 << 8) | 0x27;
  v7[50] = 536944786;
  v7[51] = ((unsigned __int16)v10 << 8) | 0x26;
  v7[52] = 536944786;
  v7[53] = ((unsigned __int16)v10 << 8) | 0x25;
  v7[54] = 536944786;
  v7[55] = ((unsigned __int16)v10 << 8) | 0x24;
  v7[56] = 536944786;
  v7[57] = ((unsigned __int16)v10 << 8) | 0x23;
  v7[58] = 536944786;
  v7[59] = ((unsigned __int16)v10 << 8) | 0x22;
  v7[60] = 536944786;
  v7[61] = ((unsigned __int16)v10 << 8) | 0x21;
  v7[62] = 536944786;
  v7[63] = ((unsigned __int16)v10 << 8) | 0x20;
  v7[65] = ((unsigned __int16)v10 << 8) | 0x1F;
  v7[67] = ((unsigned __int16)v10 << 8) | 0x1E;
  v7[69] = ((unsigned __int16)v10 << 8) | 0x1D;
  v7[71] = ((unsigned __int16)v10 << 8) | 0x1C;
  v7[73] = ((unsigned __int16)v10 << 8) | 0x1B;
  v7[75] = ((unsigned __int16)v10 << 8) | 0x1A;
  v7[77] = ((unsigned __int16)v10 << 8) | 0x19;
  v7[79] = ((unsigned __int16)v10 << 8) | 0x18;
  v7[81] = ((unsigned __int16)v10 << 8) | 0x17;
  v7[83] = ((unsigned __int16)v10 << 8) | 0x16;
  v7[85] = ((unsigned __int16)v10 << 8) | 0x15;
  v7[87] = ((unsigned __int16)v10 << 8) | 0x14;
  v7[89] = ((unsigned __int16)v10 << 8) | 0x13;
  v7[91] = ((unsigned __int16)v10 << 8) | 0x12;
  v7[93] = ((unsigned __int16)v10 << 8) | 0x11;
  v7[95] = ((unsigned __int16)v10 << 8) | 0x10;
  v7[97] = ((unsigned __int16)v10 << 8) | 0xF;
  v7[99] = ((unsigned __int16)v10 << 8) | 0xE;
  v7[101] = ((unsigned __int16)v10 << 8) | 0xD;
  v7[103] = ((unsigned __int16)v10 << 8) | 0xC;
  v7[105] = ((unsigned __int16)v10 << 8) | 0xB;
  v7[107] = ((unsigned __int16)v10 << 8) | 0xA;
  v7[109] = ((unsigned __int16)v10 << 8) | 9;
  v7[111] = ((unsigned __int16)v10 << 8) | 8;
  v7[113] = ((unsigned __int16)v10 << 8) | 7;
  v7[115] = ((unsigned __int16)v10 << 8) | 6;
  v7[117] = ((unsigned __int16)v10 << 8) | 5;
  v7[119] = ((unsigned __int16)v10 << 8) | 4;
  v7[121] = ((unsigned __int16)v10 << 8) | 3;
  v7[123] = ((unsigned __int16)v10 << 8) | 2;
  v7[125] = ((unsigned __int16)v10 << 8) | 1;
  if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)(v6 + 64) + 21096LL))(
          *(_QWORD*)(v6 + 64)) != 0 &&
      (*((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)v9) & 0x40) != 0) {
    v8 = v7 + 134;
    *((_OWORD*)v7 + 32) = CudaDriverData_1115df0;
    *((_QWORD*)v7 + 66) = 536944966;
  }
  v13 = *(_QWORD*)(v6 + 16104);
  v16 = *(_QWORD*)(v13 + 16);
  v15 = *(_QWORD*)(v13 + 24);
  v8[2] = v16;
  v8[3] = v15;
  *(_DWORD*)v8 = 537075840;
  v8[1] = DWORDn(v16, sizeof(v16) / 4 - 1);
  *a1 = v8 + 4;
  return 0;
}

__int64 nvidia_1fff90(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v9;
  int v10;
  int v11;
  unsigned __int64 v14;

  if (a3 == 0) {
    return 2;
  }
  if (!CudaDriverRoutine_5c090(a3 + 33736, a4)) {
    return 3;
  }
  if (a2 == 0) {
    return 5;
  }
  if ((unsigned int)CudaDriverData_14358d0 < 2 || CudaDriverData_14358e4 != 0) {
    v9 = *(_DWORD*)(a1 + 32);
    __builtin_arm_dmb(0xDu);
    v10 = (4 * a2) | 2;
    if (v9 - v10 >= 0) {
      return 5;
    }
    v11 = cuda_driver_204330(*(_QWORD*)(a1 + 24));
    __builtin_arm_dmb(0xEu);
    *(_DWORD*)(a1 + 32) = v11;
    if (v11 - v10 >= 0) {
      return 5;
    }
    if ((unsigned int)CudaDriverData_14358d0 < 2 ||
        CudaDriverData_14358e4 != 0) {
      return 4;
    }
  }
  v14 = CudaDriverRoutine_5bda0(a3 + 33736);
  if (v14 >= a4) {
    return 5;
  }
  if (CudaDriverRoutine_5bd00(a3 + 33736, v14) < a4) {
    return 4;
  }
  else {
    return 5;
  }
}

__int64 nvidia_240830(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _QWORD* a5, __int64 a6)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;

  v11 = CudaDriverRoutine_98340(a1);
  v12 = CudaDriverRoutine_23bfe0(v11);
  v13 = CudaDriverRoutine_239ba0(v11);
  *(_QWORD*)(a6 + 24) = v12;
  *(_QWORD*)(a6 + 32) = v13;
  *(_DWORD*)a6 = *(_DWORD*)(a4 + 168);
  *(_DWORD*)(a6 + 4) = *(_DWORD*)(a4 + 172);
  *(_DWORD*)(a6 + 8) = *(_DWORD*)(a4 + 176);
  *(_DWORD*)(a6 + 12) = *(_DWORD*)(a4 + 144);
  *(_DWORD*)(a6 + 16) = *(_DWORD*)(a4 + 148);
  *(_DWORD*)(a6 + 20) = *(_DWORD*)(a4 + 152);
  if (*(_BYTE*)(a4 + 352) != 0) {
    *(_DWORD*)(a6 + 40) = 0x1000000 - (*(int*)(a4 + 356) + *(int*)(a4 + 360));
    v14 = *(_QWORD*)(a4 + 136);
    if (v14 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  *(_DWORD*)(a6 + 40) = CudaDriverRoutine_15fd0(a2);
  v14 = *(_QWORD*)(a4 + 136);
  if (v14 != 0) {
  LABEL_3:
    *(_QWORD*)(a6 + 56) = *(_QWORD*)(v14 + 8);
  }
LABEL_4:
  if (CudaDriverRoutine_985b0(*(_DWORD*)(*(_QWORD*)(a2 + 32) + 32LL))) {
    v15 = *(_OWORD*)(a2 + 688);
    v16 = *(_OWORD*)(a2 + 704);
    v17 = *(_OWORD*)(a2 + 720);
    *(_OWORD*)(a6 + 184) = *(_OWORD*)(a2 + 736);
    *(_OWORD*)(a6 + 168) = v17;
    *(_OWORD*)(a6 + 152) = v16;
    *(_OWORD*)(a6 + 136) = v15;
    v18 = *(_OWORD*)(a2 + 752);
    v19 = *(_OWORD*)(a2 + 768);
    v20 = *(_OWORD*)(a2 + 784);
    *(_OWORD*)(a6 + 248) = *(_OWORD*)(a2 + 800);
    *(_OWORD*)(a6 + 232) = v20;
    *(_OWORD*)(a6 + 216) = v19;
    *(_OWORD*)(a6 + 200) = v18;
    CudaDriverRoutine_208ba0(*(_QWORD**)(v11 + 2112), 0, 0, (_QWORD*)(a6 + 112),
                             (_QWORD*)(a6 + 128));
  }
  else {
    *(_QWORD*)(a6 + 112) = 0;
    *(_QWORD*)(a6 + 128) = 0;
  }
  *(_QWORD*)(a6 + 120) = 0;
  *(_QWORD*)(a6 + 64) = *a5;
  *(_QWORD*)(a6 + 72) = a5[1];
  *(_QWORD*)(a6 + 280) = a5[2];
  *(_QWORD*)(a6 + 80) = a5[3];
  *(_QWORD*)(a6 + 88) = a5[4];
  *(_QWORD*)(a6 + 96) = a5[5];
  v21 = a5[6];
  *(_DWORD*)(a6 + 264) = 0;
  *(_QWORD*)(a6 + 104) = v21;
  *(_DWORD*)(a6 + 268) = *(_DWORD*)(v11 + 164);
  LODWORD(v21) = *(_DWORD*)(a4 + 288);
  *(_DWORD*)(a6 + 272) = 0;
  *(_DWORD*)(a6 + 44) = v21;
  v22 = CudaDriverRoutine_23c440(v11, a2);
  v23 = *(_DWORD*)(a2 + 632);
  *(_QWORD*)(a6 + 288) = 0;
  *(_DWORD*)(a6 + 276) = v23 + v22;
  *(_QWORD*)(a6 + 296) = CudaDriverStub_1db800(*(_QWORD*)(v11 + 2232));
  if (*(_BYTE*)(a4 + 204) != 0 && *(_BYTE*)(a4 + 205) != 0) {
    v24 = *(_QWORD*)(a2 + 104);
  }
  else {
    v24 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 19448LL))(
        *(_QWORD*)(a2 + 96));
  }
  *(_QWORD*)(a6 + 304) = v24;
  *(_DWORD*)(a6 + 312) = *(int*)(a4 + 288) + *(int*)(a2 + 128) +
                         *(int*)(a2 + 136) + *(int*)(a2 + 140);
  return 0;
}

#pragma GCC visibility pop
