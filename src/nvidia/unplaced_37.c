#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_202960(__int64, __int64, __int64, __int64,
                                 unsigned __int64, char);
__int64 CudaDriverRoutine_7fa50(__int64, int, __int64, __int64, int, __int64,
                                char, __int64, unsigned int, int);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_99f40(__int64, _DWORD*, int);
__int64 CudaDriverRoutine_ba080(__int64, __int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_bbd70(__int64 result, _QWORD*);
__int64 CudaDriverRoutine_f60f0(__int64, __int64, __int64, __int64, __int64,
                                __int64, unsigned int, __int64, unsigned int);
__int64 CudaDriverStub_1223f0(void);
__int64 CudaDriverStub_1db7a0(__int64);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_b9660(__int64);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_8fb40(__int64 result, __int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nvidia_97e80(__int64 result);
unsigned __int8 CudaDriverStub_985a0(__int64);
unsigned __int8 cuda_debugger_api_7cff0();
extern _QWORD CudaDriverData_1422bb0;
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_1440968;
extern _UNKNOWN CudaDriverData_1432130;
extern int CudaDriverData_14358d0;
void CudaDriverRoutine_43b0();
void CudaDriverRoutine_7540();
__int64 nvidia_aef0(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_944c0(__int64* a1);
__int64 nvidia_1eaed0(__int64 result, __int64 a2, __int64 a3, int a4);
__int64 nvidia_20bb00(__int64 a1, unsigned int* a2);
__int64 nvidia_21e940(__int64 a1, __int64 a2, unsigned int* a3);

__int64 nvidia_aef0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64* v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  struct {
    char gap0_[16];
    __int64 v46;
    unsigned __int64 v47;
    _QWORD v48[2];
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    int v54;
    int v55;
    __int128 v56;
    __int128 v57;
    __int128 v58;
    __int128 v59;
  } f_;

  result = 0;
  v5 = (__int64*)(*(_QWORD*)a3 + 8LL * (unsigned int)(2 * *(int*)(a3 + 12)));
  v6 = *v5;
  if ((*v5 & 0xFFF) != 0x992) {
    return result;
  }
  v7 = v5[1];
  if ((v7 & 0x7000) != 0x3000) {
    return result;
  }
  v8 = *(_QWORD*)(a1 + 16104);
  f_.v48[0] = 0;
  v11 = *(__int64**)(v8 + 4512);
  v12 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_ba080(v12, *(unsigned int*)(a1 + 188), v11[24], 64,
                                   (__int64)f_.v48);
  if ((_DWORD)result != 0) {
    return result;
  }
  v14 = f_.v48[0];
  ++*(_DWORD*)((char*)&CudaDriverRoutine_43b0 + (_QWORD)CudaDriverData_1422118);
  v15 = CudaDriverStub_b9660(v11[23]);
  memcpy_plt(v11[25], v15, v11[24]);
  v16 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 19448LL))(
      *(_QWORD*)(a2 + 96));
  v17 = *(unsigned int*)(a3 + 12);
  f_.v46 = v16;
  v18 = v16 + 16LL * (unsigned int)(v17 + 1);
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 19448LL))(v14);
  v20 = v11[25];
  f_.v47 = v19;
  v21 = (_QWORD*)(v20 + (v11[28] & 0x7FFFFFFF0LL));
  *v21 = v6;
  v21[1] = v7;
  v22 = v11[30] & 0xFFFFFFFFFFFE0000LL | (v18 >> 40) & 0x1FFFF;
  v23 = ((_DWORD)v18 << 14) & 0xFF0000 |
        ((unsigned __int64)(unsigned int)(v18 >> 10) << 34) |
        v11[29] & 0x3FF00FFFFLL;
  v24 = v11[31];
  v11[29] = v23;
  v11[30] = v22;
  v25 = (unsigned __int64*)(v20 + (v24 & 0x7FFFFFFF0LL));
  *v25 = v23;
  v25[1] = v11[30];
  v26 = CudaDriverData_14358d0 == 2 ? 8 : 0;
  result = CudaDriverRoutine_f60f0(a1, v14, 0, v11[25], v11[24],
                                   *(_QWORD*)(a1 + 96), 2u, 0, v26);
  if ((_DWORD)result != 0) {
    return result;
  }
  v27 = v17;
  v28 = f_.v47;
  v29 = v11[30] & 0xFFFFFFFFFFFE0000LL | (f_.v47 >> 40) & 0x1FFFF;
  v30 = 8LL * (unsigned int)(2 * *(int*)(a3 + 12));
  *(_QWORD*)(*(_QWORD*)a3 + v30) =
      ((_DWORD)f_.v47 << 14) & 0xFF0000 |
      ((unsigned __int64)(unsigned int)(f_.v47 >> 10) << 34) |
      v11[29] & 0x3FF00FFFFLL;
  *(_QWORD*)(*(_QWORD*)a3 + v30 + 8) = v29;
  f_.v58 = (__typeof__(f_.v58)){0};
  f_.v59 = (__typeof__(f_.v59)){0};
  f_.v57 = (__typeof__(f_.v57)){0};
  v31 = *(_DWORD*)(a2 + 392);
  if (v31 <= 6) {
    v31 = 6;
  }
  *(_DWORD*)(a2 + 392) = v31;
  if (!cuda_debugger_api_7cff0()) {
    v32 = 16;
    if (*(_DWORD*)(a1 + 188) == 3) {
      v32 = 168;
    }
    v33 = 132;
    v34 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v32);
    if (*(_DWORD*)(a1 + 188) == 3) {
      v33 = 52;
    }
    if (*(_DWORD*)(v34 + v33) == 0) {
      v36 = 0;
      LODWORD(v37) = 0;
      v28 = 0;
      a2 = 0;
      if (!cuda_debugger_api_7cff0()) {
        goto LABEL_18;
      }
      goto LABEL_17;
    }
  }
  v35 = *(_QWORD*)(a1 + 16104);
  v36 = f_.v46 + 16 * v27;
  *(_QWORD*)&f_.v58 = v6;
  *((_QWORD*)&f_.v58 + 1) = v7;
  *(_QWORD*)&f_.v57 = a2;
  *((_QWORD*)&f_.v57 + 1) = v36;
  v37 = *(_QWORD*)(*(_QWORD*)(v35 + 4512) + 192LL);
  *(_QWORD*)&f_.v59 = f_.v47;
  *((_QWORD*)&f_.v59 + 1) = v37;
  if (cuda_debugger_api_7cff0()) {
  LABEL_17:
    v38 = CudaDriverStub_1db800(*(_QWORD*)(a2 + 96));
    CudaDriverRoutine_7fa50(a1, 64, v38, v28, v37, v36, 0, (__int64)&f_.v58,
                            0x10u, 1);
  }
LABEL_18:
  v39 = *(_DWORD*)(a1 + 188);
  v40 = 16;
  if (v39 == 3) {
    v40 = 168;
  }
  v41 = 132;
  v42 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v40);
  if (v39 == 3) {
    v41 = 52;
  }
  if (*(_DWORD*)(v42 + v41) != 0) {
    f_.v49 = *(_QWORD*)(f_.v57 + 32);
    f_.v50 = f_.v57;
    v43 = *(_QWORD*)(f_.v49 + 24);
    f_.v51 = 0;
    f_.v52 = *((_QWORD*)&f_.v57 + 1);
    f_.v56 = f_.v58;
    f_.v48[0] = 80;
    f_.v48[1] = v43;
    f_.v53 = f_.v59;
    f_.v54 = DWORD2(f_.v59);
    f_.v55 = 8;
    if (v39 == 3) {
      v44 = 21;
    }
    else {
      v44 = 2;
    }
    if (v39 == 3) {
      v45 = 13;
    }
    else {
      v45 = 33;
    }
    cuda_driver_20b420(v44, v45, (__int64)f_.v48);
  }
  return 0;
}

__int64 nvidia_944c0(__int64* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  void* v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    char gap0_[8];
    __int64 v12;
    char gap16_[24];
    int v13;
    int v14;
  } f_;

  v2 = *a1;
  result = CudaDriverRoutine_202960(
      a1[1], *a1 + 13800,
      (__int64)"cnpv2ConstExitedWarpsIfBarsNotAvailableCounterTable",
      (__int64)(a1 + 46), 8u, 0);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_202960(a1[1], v2 + 13800,
                                      (__int64)"cnpv2ConstEventBitPool",
                                      (__int64)(a1 + 22), 0x30u, 0);
    if ((_DWORD)result == 0 &&
        (!CudaDriverStub_985a0(*a1) ||
         (_DWORD)(result = CudaDriverRoutine_202960(
                      a1[1], v2 + 13800, (__int64)"cnpv2DseConstListBitPool",
                      (__int64)(a1 + 34), 0x30u, 0)) == 0)) {
      v4 = a1[3];
      if (v4 != 0) {
        v4 = CudaDriverStub_1db7a0(v4);
      }
      f_.v12 = v4;
      result = CudaDriverRoutine_202960(a1[1], v2 + 13800,
                                        (__int64)"cnpv2ConstSkedReflectedAddr",
                                        (__int64)&f_.v12, 8u, 0);
      if ((_DWORD)result == 0) {
        result = CudaDriverRoutine_202960(a1[1], v2 + 13800,
                                          (__int64)"cnpv2ConstQmdSched",
                                          (__int64)(a1 + 48), 8u, 0);
        if ((_DWORD)result == 0) {
          result = CudaDriverRoutine_202960(a1[1], v2 + 13800,
                                            (__int64)"cnpv2GridId64",
                                            (__int64)(a1 + 47), 8u, 0);
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_202960(a1[1], v2 + 13800,
                                              (__int64)"cnpv2Stats",
                                              (__int64)(a1 + 70), 8u, 0);
            if ((_DWORD)result == 0) {
              v5 = CudaDriverData_1422118;
              result = CudaDriverRoutine_202960(
                  a1[1], v2 + 13800, (__int64)"cnpv2ConstDeviceCount",
                  (__int64)CudaDriverData_1422118 + 792, 4u, 0);
              if ((_DWORD)result == 0) {
                result = CudaDriverRoutine_202960(
                    a1[1], v2 + 13800, (__int64)"cnpv2ConstCurrentDevice",
                    *(_QWORD*)(v2 + 16), 4u, 0);
                if ((_DWORD)result == 0) {
                  result = CudaDriverRoutine_202960(
                      a1[1], v2 + 13800, (__int64)"cnpv2ConstDevState",
                      (__int64)(a1 + 71), 8u, 0);
                  if ((_DWORD)result == 0) {
                    f_.v12 = (*(__int64 (**)(__int64))(*(_QWORD*)(v2 + 64) +
                                                       18448LL))(v2);
                    result = CudaDriverRoutine_202960(
                        a1[1], v2 + 13800, (__int64)"cnpv2ConstLastErrorAddr",
                        (__int64)&f_.v12, 8u, 0);
                    if ((_DWORD)result == 0) {
                      result = CudaDriverRoutine_202960(
                          a1[1], v2 + 13800, (__int64)"cnpv2DeviceLimit",
                          (__int64)(a1 + 72), 0x50u, 0);
                      if ((_DWORD)result == 0) {
                        result = CudaDriverRoutine_202960(
                            a1[1], v2 + 13800,
                            (__int64)"cnpv2ConstGpuQmdBitPool",
                            (__int64)(a1 + 4), 0x30u, 0);
                        if ((_DWORD)result == 0) {
                          result = CudaDriverRoutine_202960(
                              a1[1], v2 + 13800,
                              (__int64)"cnpv2ConstGpuQmdCompletionBits",
                              (__int64)(a1 + 40), 8u, 0);
                          if ((_DWORD)result == 0) {
                            result = CudaDriverRoutine_202960(
                                a1[1], v2 + 13800,
                                (__int64)"cnpv2ConstQmdCacheBitPool",
                                (__int64)(a1 + 44), 8u, 0);
                            if ((_DWORD)result == 0) {
                              result = CudaDriverRoutine_202960(
                                  a1[1], v2 + 13800,
                                  (__int64)"cnpv2ConstParamBankPoolBase",
                                  (__int64)(a1 + 41), 8u, 0);
                              if ((_DWORD)result == 0) {
                                v6 = a1[1];
                                f_.v12 = a1[42] + a1[41];
                                result = CudaDriverRoutine_202960(
                                    v6, v2 + 13800,
                                    (__int64)"cnpv2ConstParamBankPoolEnd",
                                    (__int64)&f_.v12, 8u, 0);
                                if ((_DWORD)result == 0) {
                                  result = CudaDriverRoutine_202960(
                                      a1[1], v2 + 13800,
                                      (__int64)"cnpv2ConstParamBankSize",
                                      (__int64)(a1 + 43), 4u, 0);
                                  if ((_DWORD)result == 0) {
                                    result = CudaDriverRoutine_202960(
                                        a1[1], v2 + 13800,
                                        (__int64)"cnpv2SmCount", v2 + 164, 4u,
                                        0);
                                    if ((_DWORD)result == 0) {
                                      v7 = *(_BYTE*)(v2 + 1080) != 0;
                                      f_.v13 = 0;
                                      f_.v14 = v7;
                                      if (*((_BYTE*)((_UNKNOWN*)0x1D58LL) +
                                            (_QWORD)v5) != 0) {
                                        f_.v13 = 1;
                                        f_.v14 = 1;
                                      }
                                      result = CudaDriverRoutine_202960(
                                          a1[1], v2 + 13800,
                                          (__int64)"cnpv2ControlEnabled",
                                          (__int64)&f_.v14, 4u, 0);
                                      if ((_DWORD)result == 0) {
                                        result = CudaDriverRoutine_202960(
                                            a1[1], v2 + 13800,
                                            (__int64)"cnpv2UnittestPerThreadStr"
                                                     "eamCounterEnabled",
                                            (__int64)&f_.v13, 4u, 0);
                                        if ((_DWORD)result == 0) {
                                          v8 = a1[1];
                                          f_.v12 =
                                              *(_QWORD*)(*(_QWORD*)(v2 + 1072) +
                                                         416LL);
                                          result = CudaDriverRoutine_202960(
                                              v8, v2 + 13800,
                                              (__int64)"cnpv2ConstEntryExitFunc"
                                                       "PC",
                                              (__int64)&f_.v12, 8u, 0);
                                          if ((_DWORD)result == 0) {
                                            if (*((_BYTE*)&CudaDriverRoutine_7540 +
                                                  (_QWORD)v5) != 0 ||
                                                *(_QWORD*)(v2 + 232) == 0) {
                                              v9 = 0;
                                            }
                                            else {
                                              v10 = CudaDriverStub_1223f0();
                                              v9 = (*(__int64 (**)(__int64))(
                                                       *(_QWORD*)(v2 + 64) +
                                                       18424LL))(13) +
                                                   v10;
                                            }
                                            v11 = a1[1];
                                            f_.v12 = v9;
                                            result = CudaDriverRoutine_202960(
                                                v11, v2 + 13800,
                                                (__int64)"cnpv2ConstTrtBasePtr",
                                                (__int64)&f_.v12, 8u, 0);
                                            if ((_DWORD)result == 0) {
                                              result = CudaDriverRoutine_202960(
                                                  a1[1], v2 + 13800,
                                                  (__int64)"cnpv2CPUInterruptDi"
                                                           "sabled",
                                                  (__int64)((
                                                      _UNKNOWN*)0x1480LL) +
                                                      (_QWORD)v5,
                                                  4u, 0);
                                              if ((_DWORD)result == 0) {
                                                cuda_driver_8fb40(v2,
                                                                  (__int64)a1);
                                                nvidia_97e80(v2);
                                                return 0;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 nvidia_1eaed0(__int64 result, __int64 a2, __int64 a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 (*v6)(__int64);
  __int64 v7;
  struct {
    int v8;
    __int64 v9;
    __int64 v10;
    int v11;
    int v12;
    __int64 v13;
    __int64 v14;
  } f_;
  int v15;

  if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) &
       1) == 0) {
    v4 = **(_QWORD**)(result + 208);
    v5 = *(_QWORD*)(result + 104) + a2;
    f_.v8 = 24;
    LODWORD(v4) = *(_DWORD*)(v4 + 4);
    f_.v13 = v5;
    f_.v14 = a3;
    f_.v9 = v5;
    f_.v10 = a3;
    f_.v11 = v4;
    f_.v12 = 24;
    v15 = v4;
    __builtin_arm_dmb(0xEu);
    switch (a4) {
    case 2:
      v7 = CudaDriverData_1422bb0;
      (*(void (**)(__int64))((char*)((_UNKNOWN*)0x248LL) +
                             CudaDriverData_1422bb0))((__int64)&f_.v8);
      v6 = *(__int64 (**)(__int64))((char*)((_UNKNOWN*)0x250LL) + v7);
      break;
    case 1:
      v6 = (__int64 (*)(__int64))CudaDriverData_1440968;
      break;
    case 0:
      return (*(__int64 (**)(__int64))((char*)((_UNKNOWN*)0x248LL) +
                                       CudaDriverData_1422bb0))(
          (__int64)&f_.v8);
    default:
      return result;
    }
    return v6((__int64)&f_.v12);
  }
  return result;
}

__int64 nvidia_20bb00(__int64 a1, unsigned int* a2)
{
  unsigned int v2;
  __int64 result;
  struct {
    unsigned int v5;
    __int128 v6;
    __int128 v7;
    __int128 v8;
    __int128 v9;
    __int128 v10;
    __int128 v11;
    __int128 v12;
    __int128 v13;
  } f_;
  _DWORD v14[7];

  if (a1 == 0) {
    return 201;
  }
  if (a2 == nullptr) {
    return 1;
  }
  v2 = *a2;
  memset(v14, 0, sizeof(v14));
  f_.v13 = (__typeof__(f_.v13)){0};
  f_.v12 = (__typeof__(f_.v12)){0};
  f_.v11 = (__typeof__(f_.v11)){0};
  f_.v10 = (__typeof__(f_.v10)){0};
  f_.v9 = (__typeof__(f_.v9)){0};
  f_.v8 = (__typeof__(f_.v8)){0};
  f_.v7 = (__typeof__(f_.v7)){0};
  f_.v6 = (__typeof__(f_.v6)){0};
  if (v2 >= 0xA0) {
    v2 = 160;
  }
  f_.v5 = v2;
  result = (*(__int64 (**)(__int64, __int64, __n128))(
      *(_QWORD*)(a1 + 64) + 19704LL))(a1, (__int64)&f_.v5,
                                      COERCE_AS(__n128, 0LL));
  if ((_DWORD)result == 0) {
    memcpy_plt((__int64)a2, (__int64)&f_.v5, f_.v5);
    return 0;
  }
  return result;
}

__int64 nvidia_21e940(__int64 a1, __int64 a2, unsigned int* a3)
{
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  __int128 v19;
  int v20;
  __int128 v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned __int64 v25;
  struct {
    __int128 v27;
    __int128 v28;
    __int128 v29;
    _QWORD v30[4];
    __int128 v31;
    __int128 v32;
    __int128 v33;
    __int128 v34;
    __int128 v35;
  } f_;
  __int64 v36;

  v3 = 1;
  f_.v27 = (__typeof__(f_.v27)){0};
  f_.v28 = (__typeof__(f_.v28)){0};
  f_.v29 = (__typeof__(f_.v29)){0};
  memset(f_.v30, 0, sizeof(f_.v30));
  f_.v31 = (__typeof__(f_.v31)){0};
  f_.v32 = (__typeof__(f_.v32)){0};
  f_.v33 = (__typeof__(f_.v33)){0};
  f_.v34 = (__typeof__(f_.v34)){0};
  f_.v35 = (__typeof__(f_.v35)){0};
  if (a1 != 0 && a2 != 0 && a3 != nullptr) {
    if (*a3 != 0) {
      v4 = *(_QWORD*)(a2 + 32);
      v5 = *(_DWORD*)(a2 + 72);
      v36 = 0;
      v8 = a2;
      v9 = *(_QWORD*)(v4 + 24);
      DWORD2(f_.v27) = *(_DWORD*)(a2 + 392);
      DWORDn(f_.v27, sizeof(f_.v27) / 4 - 1) = v5;
      v10 = *(_QWORD*)(a2 + 368);
      LODWORD(f_.v30[0]) = *(_QWORD*)(a2 + 376);
      DWORDn(f_.v30[0], sizeof(f_.v30[0]) / 4 - 1) = v10;
      (*(void (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)(v9 + 64) + 18744LL))(a2, 0, (__int64)&v36, 0);
      LODWORD(f_.v28) = v36;
      *(_QWORD*)&f_.v34 = v36;
      CudaDriverRoutine_bbd70(v8, (_QWORD*)&f_.v28 + 1);
      v11 = *(_DWORD*)(v8 + 128);
      v8 += 128;
      v12 = *(_DWORD*)(a1 + 288);
      v13 = *(unsigned __int8*)(v8 + 24);
      v14 = *(_QWORD*)(v8 + 228);
      DWORDn(f_.v29, sizeof(f_.v29) / 4 - 1) = *(_DWORD*)(v8 - 52);
      v15 = *(_DWORD*)(v8 + 236);
      *(_QWORD*)&f_.v31 = v14;
      LODWORD(f_.v32) = v13 != 0;
      DWORD2(f_.v31) = v15;
      v16 = *(_DWORD*)(v8 + 8);
      DWORD2(f_.v32) = *(_DWORD*)(v8 + 12);
      v17 = *(_QWORD*)(v9 + 64);
      LODWORD(f_.v29) = v11;
      DWORD1(f_.v29) = v16 + v12;
      v18 = CudaDriverRoutine_99f40(v17, (_DWORD*)v8, v12);
      *(_QWORD*)&v19 = *(_QWORD*)(a1 + 172);
      *((_QWORD*)&v19 + 1) = *(_QWORD*)(a1 + 144);
      LODWORD(f_.v30[1]) = *(_DWORD*)(a1 + 168);
      v20 = *(_DWORD*)(a1 + 152);
      v21 = *(_OWORD*)(a1 + 180);
      DWORD2(f_.v29) = v18;
      DWORDn(f_.v30[3], sizeof(f_.v30[3]) / 4 - 1) = v20;
      v22 = *(_DWORD*)(a1 + 220);
      f_.v33 = v21;
      *(_QWORD*)&v21 = *(_QWORD*)(a1 + 212);
      *(_OWORD*)((char*)&f_.v30[1] + 4) = v19;
      DWORD2(f_.v35) = v22;
      LOBYTE(v22) = *(_BYTE*)(v8 + 851);
      *(_QWORD*)&f_.v35 = v21;
      v23 = DWORDn(f_.v34, sizeof(f_.v34) / 4 - 1) & 0xFFFFFFFE | v22 & 1;
      v24 = *a3;
      DWORDn(f_.v34, sizeof(f_.v34) / 4 - 1) = v23;
      if (v24 >= 0xA0) {
        v25 = 160;
      }
      else {
        v25 = v24;
      }
      LODWORD(f_.v27) = v25;
      memcpy_plt((__int64)a3, (__int64)&f_.v27, v25);
      return 0;
    }
    else {
      return 1;
    }
  }
  return v3;
}

#pragma GCC visibility pop
