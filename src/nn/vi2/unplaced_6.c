#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)
__int64 GameRoutine_857150();

__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_gs_sdk_BlankUserImage_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_gs_sdk_ReadUserImageRgba_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD, _QWORD, _QWORD, _DWORD, _QWORD,
                                        _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_gs_sdk_WriteUserImageRgbaFloat_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD, _DWORD);
__int64 nn_gs_sdk_WriteUserImageRgba_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD, _QWORD, _QWORD, _QWORD,
                                         _DWORD);
__int64 nn_gsv_GetUserSession_plt(_QWORD);
__int64 nn_gsv_GetUserSession_plt_alt1(void);
__int64 nn_gsv_GetUserSession_plt_alt2(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                       _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                       _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                       _QWORD, _QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
extern void (*SdkData_e87798[4])();
__int64 nn_vi2_5e1920(__int64* a1, __int64* a2, __int64* a3, int a4);
__int64 nn_vi2_5e9610(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5,
                      unsigned int a6, unsigned int a7, unsigned int a8,
                      __int16 a9);
__int64 nn_vi2_5e97c0(__int64 a1, __int64 a2, int a3, unsigned int a4,
                      unsigned int a5, unsigned int a6, unsigned int a7,
                      __int64 a8, __int64 a9, unsigned int a10);
__int64 nn_vi2_5e99d0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8);
void __attribute__((noreturn)) nn_vi2_5e18a8();
void __attribute__((noreturn)) nn_vi2_5e18a8() { GameRoutine_857150(); }

__int64 nn_vi2_5e1920(__int64* a1, __int64* a2, __int64* a3, int a4)
{
  __int64 v8;
  unsigned __int64 StatusReg;
  unsigned int v10;
  void (*explicit)(_QWORD);
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;

  v8 = nn_gsv_GetUserSession_plt(a1);
  v20 = a3[4];
  v21 = a3[5];
  v22 = a3[6];
  v23 = a3[7];
  v16 = *a3;
  v17 = a3[1];
  v18 = a3[2];
  v19 = a3[3];
  nn_os_SdkMutexType_Lock_plt(v8);
  if (*(_DWORD*)(v8 + 4) != 0) {
    v24 = *(_DWORD*)(v8 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 72) = a4;
    *(_QWORD*)(StatusReg + 48) = v21;
    *(_QWORD*)(StatusReg + 56) = v22;
    *(_QWORD*)(StatusReg + 64) = v23;
    *(_QWORD*)StatusReg = 0x1100000197LL;
    *(_QWORD*)(StatusReg + 8) = v16;
    *(_QWORD*)(StatusReg + 16) = v17;
    *(_QWORD*)(StatusReg + 24) = v18;
    *(_QWORD*)(StatusReg + 32) = v19;
    *(_QWORD*)(StatusReg + 40) = v20;
    v10 = nn_sm_detail_SendSessionRequest(&v24);
    if (v10 != 0 || (v10 = *(_DWORD*)(StatusReg + 8),
                     *(_QWORD*)StatusReg = 0x500000197LL, v10 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v10);
      }
      nn_os_SdkMutexType_Unlock_plt(v8);
    }
    else {
      v13 = *(_QWORD*)(StatusReg + 20);
      v14 = *(_QWORD*)(StatusReg + 12);
      nn_os_SdkMutexType_Unlock_plt(v8);
      v15 = 4096;
      if (v13 > 0x1000) {
        v15 = v13;
      }
      *a1 = (v14 + v15 - 1) & -v15;
      *a2 = v15;
    }
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(v8);
    return 199411;
  }
  return v10;
}

__int64 nn_vi2_5e9610(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5,
                      unsigned int a6, unsigned int a7, unsigned int a8,
                      __int16 a9)
{
  __int64 v9;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned __int64 StatusReg;
  unsigned int v22;
  void (*explicit)(_QWORD);
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  struct {
    _QWORD v33[2];
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
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
  } v33_;
  struct {
    char gap136_[4];
    unsigned int v48;
    __int64 v49;
  } v48_;

  v48_.v49 = v9;
  v33_.v46 = 0;
  v33_.v47 = 0;
  v33_.v44 = 0;
  v33_.v45 = 0;
  v33_.v42 = 0;
  v33_.v43 = 0;
  v33_.v40 = 0;
  v33_.v41 = 0;
  v33_.v38 = 0;
  v33_.v39 = 0;
  v33_.v36 = 0;
  v33_.v37 = 0;
  v33_.v34 = 0;
  v33_.v35 = 0;
  v33_.v33[0] = 0;
  v33_.v33[1] = 0;
  v18 = nn_gsv_GetUserSession_plt_alt1();
  v19 = *(_DWORD*)(a4 + 4);
  v20 = v18;
  nn_os_SdkMutexType_Lock_plt(v18);
  if (*(_DWORD*)(v20 + 4) != 0) {
    v48_.v48 = *(_DWORD*)(v20 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 8) = v19;
    *(_DWORD*)(StatusReg + 12) = a5;
    *(_QWORD*)StatusReg = 0x200000179LL;
    v22 = nn_sm_detail_SendSessionRequest(&v48_.v48);
    if (v22 != 0 || (v22 = *(_DWORD*)(StatusReg + 8),
                     *(_QWORD*)StatusReg = 0x2100000179LL, v22 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v22);
      }
      nn_os_SdkMutexType_Unlock_plt(v20);
    }
    else {
      v25 = *(_QWORD*)(StatusReg + 20);
      v33_.v33[0] = *(_QWORD*)(StatusReg + 12);
      v33_.v33[1] = v25;
      v26 = *(_QWORD*)(StatusReg + 36);
      v33_.v34 = *(_QWORD*)(StatusReg + 28);
      v33_.v35 = v26;
      v27 = *(_QWORD*)(StatusReg + 52);
      v33_.v36 = *(_QWORD*)(StatusReg + 44);
      v33_.v37 = v27;
      v28 = *(_QWORD*)(StatusReg + 68);
      v33_.v38 = *(_QWORD*)(StatusReg + 60);
      v33_.v39 = v28;
      v29 = *(_QWORD*)(StatusReg + 84);
      v33_.v40 = *(_QWORD*)(StatusReg + 76);
      v33_.v41 = v29;
      v30 = *(_QWORD*)(StatusReg + 100);
      v33_.v42 = *(_QWORD*)(StatusReg + 92);
      v33_.v43 = v30;
      v31 = *(_QWORD*)(StatusReg + 116);
      v33_.v44 = *(_QWORD*)(StatusReg + 108);
      v33_.v45 = v31;
      v32 = *(_QWORD*)(StatusReg + 132);
      v33_.v46 = *(_QWORD*)(StatusReg + 124);
      v33_.v47 = v32;
      nn_os_SdkMutexType_Unlock_plt(v20);
      return (unsigned int)((
          __int64 (*)(__int64, __int64, __int64, _QWORD*, _QWORD, _QWORD,
                      _QWORD, _QWORD, __int16))nn_gs_sdk_ReadUserImageRgba_plt)(
          a2, 4LL * (unsigned __int16)a8, a3, v33_.v33, *(_QWORD*)(a4 + 8), a6,
          a7, a8, a9);
    }
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(v20);
    return 199411;
  }
  return v22;
}

__int64 nn_vi2_5e97c0(__int64 a1, __int64 a2, int a3, unsigned int a4,
                      unsigned int a5, unsigned int a6, unsigned int a7,
                      __int64 a8, __int64 a9, unsigned int a10)
{
  __int64 v10;
  __int64 v19;
  int v20;
  __int64 v21;
  unsigned __int64 StatusReg;
  unsigned int v23;
  void (*explicit)(_QWORD);
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  struct {
    __int64 v37;
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
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
  } v37_;
  struct {
    char gap144_[4];
    unsigned int v53[3];
    __int64 v54;
  } v53_;

  v53_.v54 = v10;
  v37_.v51 = 0;
  v37_.v52 = 0;
  v37_.v49 = 0;
  v37_.v50 = 0;
  v37_.v47 = 0;
  v37_.v48 = 0;
  v37_.v45 = 0;
  v37_.v46 = 0;
  v37_.v43 = 0;
  v37_.v44 = 0;
  v37_.v41 = 0;
  v37_.v42 = 0;
  v37_.v39 = 0;
  v37_.v40 = 0;
  v37_.v37 = 0;
  v37_.v38 = 0;
  v19 = nn_gsv_GetUserSession_plt_alt1();
  v20 = *(_DWORD*)(a2 + 4);
  v21 = v19;
  nn_os_SdkMutexType_Lock_plt(v19);
  if (*(_DWORD*)(v21 + 4) != 0) {
    v53_.v53[0] = *(_DWORD*)(v21 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 8) = v20;
    *(_DWORD*)(StatusReg + 12) = a3;
    *(_QWORD*)StatusReg = 0x200000179LL;
    v23 = nn_sm_detail_SendSessionRequest(v53_.v53);
    if (v23 != 0 || (v23 = *(_DWORD*)(StatusReg + 8),
                     *(_QWORD*)StatusReg = 0x2100000179LL, v23 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v23);
      }
      nn_os_SdkMutexType_Unlock_plt(v21);
    }
    else {
      v26 = *(_QWORD*)(StatusReg + 20);
      v37_.v37 = *(_QWORD*)(StatusReg + 12);
      v37_.v38 = v26;
      v27 = *(_QWORD*)(StatusReg + 36);
      v37_.v39 = *(_QWORD*)(StatusReg + 28);
      v37_.v40 = v27;
      v28 = *(_QWORD*)(StatusReg + 52);
      v37_.v41 = *(_QWORD*)(StatusReg + 44);
      v37_.v42 = v28;
      v29 = *(_QWORD*)(StatusReg + 68);
      v37_.v43 = *(_QWORD*)(StatusReg + 60);
      v37_.v44 = v29;
      v30 = *(_QWORD*)(StatusReg + 84);
      v37_.v45 = *(_QWORD*)(StatusReg + 76);
      v37_.v46 = v30;
      v31 = *(_QWORD*)(StatusReg + 100);
      v37_.v47 = *(_QWORD*)(StatusReg + 92);
      v37_.v48 = v31;
      v32 = *(_QWORD*)(StatusReg + 116);
      v37_.v49 = *(_QWORD*)(StatusReg + 108);
      v37_.v50 = v32;
      v33 = *(_QWORD*)(StatusReg + 132);
      v37_.v51 = *(_QWORD*)(StatusReg + 124);
      v37_.v52 = v33;
      v34 = nn_os_SdkMutexType_Unlock_plt(v21);
      if (a10 >= 2) {
        nn_detail_UnexpectedDefaultImpl_plt_857150(v34);
      }
      v35 = *(_QWORD*)(a2 + 8);
      if ((unsigned __int64)(unsigned __int8)v37_.v37 - 17 > 1) {
        return (unsigned int)nn_gs_sdk_WriteUserImageRgba_plt(
            &v37_.v37, v35, a4, a5, a6, a7, a8, a9, 4LL * (unsigned __int16)a6,
            a10);
      }
      else {
        return (unsigned int)nn_gs_sdk_WriteUserImageRgbaFloat_plt(
            &v37_.v37, v35, a4, a5, a6, a7, a8, a9, 8LL * (unsigned __int16)a6,
            a10);
      }
    }
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(v21);
    return 199411;
  }
  return v23;
}

__int64 nn_vi2_5e99d0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int64 StatusReg;
  unsigned int v16;
  void (*explicit)(_QWORD);
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    _QWORD v27[10];
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
  } v27_;
  unsigned int v36;

  v27_.v34 = v8;
  v27_.v32 = 0;
  v27_.v33 = 0;
  v27_.v30 = 0;
  v27_.v31 = 0;
  v27_.v28 = 0;
  v27_.v29 = 0;
  v12 = nn_gsv_GetUserSession_plt_alt2(a2, a1, a3, a4, a5, a6, a7, a8, 0, 0, 0,
                                       0, 0, 0, 0, 0, 0, 0);
  v13 = *(_DWORD*)(a2 + 4);
  v14 = v12;
  nn_os_SdkMutexType_Lock_plt(v12);
  if (*(_DWORD*)(v14 + 4) != 0) {
    v36 = *(_DWORD*)(v14 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 8) = v13;
    *(_DWORD*)(StatusReg + 12) = a3;
    *(_QWORD*)StatusReg = 0x200000179LL;
    v16 = nn_sm_detail_SendSessionRequest(&v36);
    if (v16 != 0 || (v16 = *(_DWORD*)(StatusReg + 8),
                     *(_QWORD*)StatusReg = 0x2100000179LL, v16 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v16);
      }
      nn_os_SdkMutexType_Unlock_plt(v14);
    }
    else {
      v19 = *(_QWORD*)(StatusReg + 20);
      v27_.v27[0] = *(_QWORD*)(StatusReg + 12);
      v27_.v27[1] = v19;
      v20 = *(_QWORD*)(StatusReg + 36);
      v27_.v27[2] = *(_QWORD*)(StatusReg + 28);
      v27_.v27[3] = v20;
      v21 = *(_QWORD*)(StatusReg + 52);
      v27_.v27[4] = *(_QWORD*)(StatusReg + 44);
      v27_.v27[5] = v21;
      v22 = *(_QWORD*)(StatusReg + 68);
      v27_.v27[6] = *(_QWORD*)(StatusReg + 60);
      v27_.v27[7] = v22;
      v23 = *(_QWORD*)(StatusReg + 84);
      v27_.v27[8] = *(_QWORD*)(StatusReg + 76);
      v27_.v27[9] = v23;
      v24 = *(_QWORD*)(StatusReg + 100);
      v27_.v28 = *(_QWORD*)(StatusReg + 92);
      v27_.v29 = v24;
      v25 = *(_QWORD*)(StatusReg + 116);
      v27_.v30 = *(_QWORD*)(StatusReg + 108);
      v27_.v31 = v25;
      v26 = *(_QWORD*)(StatusReg + 132);
      v27_.v32 = *(_QWORD*)(StatusReg + 124);
      v27_.v33 = v26;
      nn_os_SdkMutexType_Unlock_plt(v14);
      return (unsigned int)nn_gs_sdk_BlankUserImage_plt(
          v27_.v27, *(_QWORD*)(a2 + 8), *(_QWORD*)(a2 + 16));
    }
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(v14);
    return 199411;
  }
  return v16;
}

#pragma GCC visibility pop
