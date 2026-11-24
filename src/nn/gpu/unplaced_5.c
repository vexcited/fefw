#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gpu_sdk_boot_46ac60(__int64, _DWORD*, __int64);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gpu_impl_user_CreateUserlandDebuggerSession_plt(_QWORD);
__int64 nn_gpu_impl_user_GetKEventPool_plt(void);
__int64 nn_gs_sdk_CreateNativeMemoryWithGpukMemHandle_plt(_QWORD, _QWORD,
                                                          _QWORD, _QWORD,
                                                          _QWORD);
__int64 nn_gs_sdk_CreateNativeMemoryWithVprMemHandleGpuShared_plt(_QWORD,
                                                                  _QWORD,
                                                                  _QWORD,
                                                                  _QWORD);
__int64 nn_gs_sdk_DestroyNativeMemory_plt(_QWORD);
__int64 nn_gsv_GetUserSession_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_ConvertToTick_plt(_QWORD);
__int64 nn_os_GetSystemTickOrdered_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Broadcast_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SetMemoryAttribute_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_TimedWaitSystemEvent_plt(_QWORD, _QWORD);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
extern __int64 nn_gpu_impl_user_g_pGsvUserSession;
extern void (*SdkData_e87798[4])();
void SdkRoutine_1a5658();
__int64 nn_gpu_466e20(__int64 a1, unsigned int** a2, int* a3);
__int64 nn_gpu_469140(__int64 a1, _QWORD** a2, unsigned __int64* a3,
                      __int64* a4, int* a5, __int64* a6, __int64* a7, char* a8,
                      int* a9);
__int64 nn_gpu_469ae0(_QWORD* a1, __int64* a2);
__int64 nn_gpu_469c10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned int a5, __int64 a6, __int64* a7, int a8);
__int64 nn_gpu_469d80(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                      __int64 a5, __int64* a6);
__int64 nn_gpu_469ef0(__int64* a1);
__int64 nn_gpu_46b020(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                      __int64 a6, int a7);
__int64 nn_gpu_46b360(__int64 a1, int* a2, int a3);
__int64 nn_gpu_46b5f0(__int64 a1, __int64* a2, int a3);
__int64 nn_gpu_46b700(__int64 a1, _QWORD* a2, int a3);
__int64 nn_gpu_46d070(__int64 a1);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_gpu_sdk_GetGpuMemoryHandleMax_plt(void);
__int64 nn_gpu_sdk_GetGpuMemoryHandleMin_plt(__int64);
__int64 nn_gpu_sdk_QueryGpuMemoryInfo_plt(__int64, unsigned int, unsigned int,
                                          __int64, __int64);
__int64 nn_util_SNPrintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 nn_gpu_46d6e0(void* this_);

__int64 nn_gpu_466e20(__int64 a1, unsigned int** a2, int* a3)
{
  int v6;
  unsigned __int64 StatusReg;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  void (*explicit)(_QWORD);
  __int64 v12;
  unsigned int v14;

  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) == 0) {
    v9 = 199411;
    goto LABEL_11;
  }
  v14 = *(_DWORD*)(a1 + 4);
  v6 = *a3;
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 0x80000000000001FDLL;
  *(_DWORD*)(StatusReg + 8) = 2;
  *(_DWORD*)(StatusReg + 12) = v6;
  v8 = nn_sm_detail_SendSessionRequest(&v14);
  if ((_DWORD)v8 != 0) {
    v9 = v8;
    v10 = 0;
    goto LABEL_6;
  }
  v10 = *(_DWORD*)(StatusReg + 12);
  *(_QWORD*)StatusReg = 0x80000001000001FDLL;
  *(_DWORD*)(StatusReg + 8) = 32;
  nn_os_CloseNativeHandle_plt(v8);
  nn_os_CloseNativeHandle_plt(0);
  v9 = *(_DWORD*)(StatusReg + 16);
  if (v9 != 0) {
  LABEL_6:
    nn_os_CloseNativeHandle_plt(v10);
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v9);
    }
    goto LABEL_11;
  }
  v12 = **a2;
  **a2 = v10;
  if ((_DWORD)v12 != 0) {
    nn_os_CloseNativeHandle_plt(v12);
  }
  nn_os_CloseNativeHandle_plt(0);
  v9 = 0;
LABEL_11:
  nn_os_SdkMutexType_Unlock_plt(a1);
  return v9;
}

__int64 nn_gpu_469140(__int64 a1, _QWORD** a2, unsigned __int64* a3,
                      __int64* a4, int* a5, __int64* a6, __int64* a7, char* a8,
                      int* a9)
{
  __int64 v17;
  int v18;
  __int64 v19;
  char v20;
  int v21;
  unsigned __int64 StatusReg;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned int v29;
  void (*explicit)(_QWORD);
  unsigned int v32;

  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) != 0) {
    v32 = *(_DWORD*)(a1 + 4);
    v17 = *a4;
    v18 = *a5;
    v19 = *a7;
    v20 = *a8;
    v21 = *a9;
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 0x7011000E8LL;
    v23 = *a6;
    v24 = a6[1];
    v25 = (unsigned __int64)*a6 >> 4;
    v26 = (unsigned __int64)*a6 >> 34;
    *(_DWORD*)(StatusReg + 8) = v24;
    *(_DWORD*)(StatusReg + 12) = v23;
    *(_DWORD*)(StatusReg + 16) =
        (v24 >> 8) & 0xF000000 | v25 & 0xF0000000 | v26 & 0x3FFFFFFC;
    v27 = *a3;
    v28 = a3[1];
    *(_QWORD*)(StatusReg + 32) = v17;
    *(_DWORD*)(StatusReg + 40) = v18;
    *(_QWORD*)(StatusReg + 44) = v19;
    *(_BYTE*)(StatusReg + 52) = v20;
    *(_DWORD*)(StatusReg + 56) = v21;
    *(_DWORD*)(StatusReg + 20) = v28;
    *(_DWORD*)(StatusReg + 24) = v27;
    *(_DWORD*)(StatusReg + 28) = (v28 >> 8) & 0xF000000 |
                                 (v27 >> 4) & 0xF0000000 |
                                 (v27 >> 34) & 0x3FFFFFFC;
    v29 = nn_sm_detail_SendSessionRequest(&v32);
    if (v29 != 0 || (v29 = *(_DWORD*)(StatusReg + 8),
                     *(_QWORD*)StatusReg = 0x3000000E8LL, v29 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v29);
      }
    }
    else {
      **a2 = *(_QWORD*)(StatusReg + 12);
    }
  }
  else {
    v29 = 199411;
  }
  nn_os_SdkMutexType_Unlock_plt(a1);
  return v29;
}

__int64 nn_gpu_469ae0(_QWORD* a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 StatusReg;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  void (*explicit)(_QWORD);
  __int64 v23;
  struct {
    char gap8_[4];
    unsigned int v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v24_;

  v4 = nn_gpu_impl_user_g_pGsvUserSession;
  nn_os_SdkMutexType_Lock_plt(nn_gpu_impl_user_g_pGsvUserSession);
  if (*(_DWORD*)(v4 + 4) != 0) {
    v24_.v24 = *(_DWORD*)(v4 + 4);
    v5 = a2[5];
    v24_.v29 = a2[4];
    v24_.v30 = v5;
    v6 = a2[7];
    v7 = *a2;
    v8 = a2[1];
    v9 = a2[2];
    v10 = a2[3];
    v24_.v31 = a2[6];
    v24_.v32 = v6;
    v24_.v25 = v7;
    v24_.v26 = v8;
    v24_.v27 = v9;
    v24_.v28 = v10;
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    v12 = v24_.v29;
    v13 = v24_.v31;
    v14 = v24_.v32;
    *(_QWORD*)(StatusReg + 48) = v24_.v30;
    *(_QWORD*)(StatusReg + 56) = v13;
    v15 = v24_.v25;
    v16 = v24_.v26;
    *(_QWORD*)(StatusReg + 64) = v14;
    *(_QWORD*)StatusReg = 0x11000001C3LL;
    *(_QWORD*)(StatusReg + 8) = v15;
    v17 = v24_.v27;
    v18 = v24_.v28;
    *(_QWORD*)(StatusReg + 16) = v16;
    *(_QWORD*)(StatusReg + 24) = v17;
    *(_QWORD*)(StatusReg + 32) = v18;
    *(_QWORD*)(StatusReg + 40) = v12;
    *(_DWORD*)(StatusReg + 72) = 1;
    v19 = nn_sm_detail_SendSessionRequest(&v24_.v24);
    if (v19 != 0) {
      v20 = v19;
    }
    else {
      v20 = *(_DWORD*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x3000001C3LL;
      if (v20 == 0) {
        v23 = *(_QWORD*)(StatusReg + 12);
        nn_os_SdkMutexType_Unlock_plt(v4);
        *a1 = v23;
        return v20;
      }
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v20);
    }
    nn_os_SdkMutexType_Unlock_plt(v4);
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(v4);
    return 199411;
  }
  return v20;
}

__int64 nn_gpu_469c10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned int a5, __int64 a6, __int64* a7, int a8)
{
  __int64 result;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 StatusReg;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  void (*explicit)(_QWORD);
  int v32;
  unsigned int v33;
  struct {
    char gap8_[4];
    unsigned int v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
  } v34_;

  v33 = 0;
  result =
      nn_gs_sdk_CreateNativeMemoryWithGpukMemHandle_plt(&v33, a3, a4, a5, a6);
  if ((_DWORD)result == 0) {
    v13 = v33;
    v14 = nn_gpu_impl_user_g_pGsvUserSession;
    nn_os_SdkMutexType_Lock_plt(nn_gpu_impl_user_g_pGsvUserSession);
    if (*(_DWORD*)(v14 + 4) != 0) {
      v34_.v34 = *(_DWORD*)(v14 + 4);
      v15 = a7[5];
      v34_.v39 = a7[4];
      v34_.v40 = v15;
      v16 = a7[7];
      v17 = *a7;
      v18 = a7[1];
      v19 = a7[2];
      v20 = a7[3];
      v34_.v41 = a7[6];
      v34_.v42 = v16;
      v34_.v35 = v17;
      v34_.v36 = v18;
      v34_.v37 = v19;
      v34_.v38 = v20;
      StatusReg = __builtin_arm_rsr64("tpidrro_el0");
      *(_DWORD*)(StatusReg + 72) = a8;
      *(_DWORD*)(StatusReg + 76) = v13;
      v22 = v34_.v39;
      v23 = v34_.v41;
      v24 = v34_.v42;
      *(_QWORD*)(StatusReg + 48) = v34_.v40;
      *(_QWORD*)(StatusReg + 56) = v23;
      *(_QWORD*)(StatusReg + 64) = v24;
      v25 = v34_.v35;
      v26 = v34_.v36;
      *(_QWORD*)StatusReg = 0x12000001BDLL;
      *(_QWORD*)(StatusReg + 8) = v25;
      v27 = v34_.v37;
      v28 = v34_.v38;
      *(_QWORD*)(StatusReg + 16) = v26;
      *(_QWORD*)(StatusReg + 24) = v27;
      *(_QWORD*)(StatusReg + 32) = v28;
      *(_QWORD*)(StatusReg + 40) = v22;
      v29 = nn_sm_detail_SendSessionRequest(&v34_.v34);
      if (v29 == 0) {
        v29 = *(_DWORD*)(StatusReg + 8);
        *(_QWORD*)StatusReg = 0x2000001BDLL;
        if (v29 == 0) {
          v32 = *(_DWORD*)(StatusReg + 12);
          nn_os_SdkMutexType_Unlock_plt(v14);
          atomic_fetch_add_explicit((atomic_uint* volatile)(a2 + 4), 1u,
                                    memory_order_relaxed);
          *(_QWORD*)(a1 + 8) = 0;
          *(_QWORD*)(a1 + 16) = 0;
          *(_QWORD*)a1 = a2;
          *(_BYTE*)(a1 + 8) = 1;
          *(_DWORD*)(a1 + 12) = v33;
          *(_DWORD*)(a1 + 16) = v32;
          return 0;
        }
      }
      v30 = v29;
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v29);
      }
    }
    else {
      v30 = 199411;
    }
    nn_os_SdkMutexType_Unlock_plt(v14);
    nn_gs_sdk_DestroyNativeMemory_plt(v33);
    return v30;
  }
  return result;
}

__int64 nn_gpu_469d80(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                      __int64 a5, __int64* a6)
{
  __int64 result;
  unsigned int v10;
  __int64 v11;
  unsigned __int64 StatusReg;
  unsigned int v13;
  unsigned int v14;
  void (*explicit)(_QWORD);
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;

  v25 = 0;
  result = nn_gs_sdk_CreateNativeMemoryWithVprMemHandleGpuShared_plt(&v25, a3,
                                                                     a4, a5);
  if ((_DWORD)result == 0) {
    v10 = v25;
    v11 = nn_gpu_impl_user_g_pGsvUserSession;
    nn_os_SdkMutexType_Lock_plt(nn_gpu_impl_user_g_pGsvUserSession);
    if (*(_DWORD*)(v11 + 4) != 0) {
      v26 = *(_DWORD*)(v11 + 4);
      v21 = a6[4];
      v22 = a6[5];
      v23 = a6[6];
      v24 = a6[7];
      v17 = *a6;
      v18 = a6[1];
      v19 = a6[2];
      v20 = a6[3];
      StatusReg = __builtin_arm_rsr64("tpidrro_el0");
      *(_QWORD*)(StatusReg + 48) = v22;
      *(_QWORD*)(StatusReg + 56) = v23;
      *(_QWORD*)(StatusReg + 64) = v24;
      *(_QWORD*)StatusReg = 0x12000001E3LL;
      *(_QWORD*)(StatusReg + 8) = v17;
      *(_QWORD*)(StatusReg + 16) = v18;
      *(_QWORD*)(StatusReg + 24) = v19;
      *(_QWORD*)(StatusReg + 32) = v20;
      *(_QWORD*)(StatusReg + 40) = v21;
      *(_DWORD*)(StatusReg + 72) = 1;
      *(_DWORD*)(StatusReg + 76) = v10;
      v13 = nn_sm_detail_SendSessionRequest(&v26);
      if (v13 == 0) {
        v13 = *(_DWORD*)(StatusReg + 8);
        *(_QWORD*)StatusReg = 0x2000001E3LL;
        if (v13 == 0) {
          v16 = *(_DWORD*)(StatusReg + 12);
          nn_os_SdkMutexType_Unlock_plt(v11);
          atomic_fetch_add_explicit((atomic_uint* volatile)(a2 + 4), 1u,
                                    memory_order_relaxed);
          *(_QWORD*)(a1 + 8) = 0;
          *(_QWORD*)(a1 + 16) = 0;
          *(_QWORD*)a1 = a2;
          *(_BYTE*)(a1 + 8) = 2;
          *(_DWORD*)(a1 + 12) = v25;
          *(_DWORD*)(a1 + 16) = v16;
          return 0;
        }
      }
      v14 = v13;
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v13);
      }
    }
    else {
      v14 = 199411;
    }
    nn_os_SdkMutexType_Unlock_plt(v11);
    nn_gs_sdk_DestroyNativeMemory_plt(v25);
    return v14;
  }
  return result;
}

__int64 nn_gpu_469ef0(__int64* a1)
{
  __int64 v1;
  int v2;
  int v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned int v7;
  int v8;
  unsigned __int64 StatusReg;
  void (*explicit)(_QWORD);
  __int64 result;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;

  v1 = *a1;
  v2 = *((unsigned __int8*)a1 + 8);
  if (v2 == 1) {
    v8 = *((_DWORD*)a1 + 4);
    v5 = nn_gpu_impl_user_g_pGsvUserSession;
    nn_os_SdkMutexType_Lock_plt(nn_gpu_impl_user_g_pGsvUserSession);
    if (*(_DWORD*)(v5 + 4) != 0) {
      v13 = *(_DWORD*)(v5 + 4);
      StatusReg = __builtin_arm_rsr64("tpidrro_el0");
      *(_DWORD*)(StatusReg + 8) = v8;
      *(_QWORD*)StatusReg = 0x1000001BELL;
      v7 = nn_sm_detail_SendSessionRequest(&v13);
      if (v7 == 0) {
        v7 = *(_DWORD*)(StatusReg + 8);
        *(_QWORD*)StatusReg = 0x1000001BELL;
        if (v7 == 0) {
          goto LABEL_12;
        }
      }
      goto LABEL_10;
    }
  LABEL_17:
    nn_os_SdkMutexType_Unlock_plt(v5);
    v7 = 199411;
  LABEL_18:
    v12 = v7;
    nn_diag_detail_AbortImpl_plt_858db0(&v12);
  }
  if (v2 != 2) {
    if (*((_BYTE*)a1 + 8) == 0) {
      nn_diag_detail_AbortImpl_plt_856170(a1);
    }
    nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  v4 = *((_DWORD*)a1 + 4);
  v5 = nn_gpu_impl_user_g_pGsvUserSession;
  nn_os_SdkMutexType_Lock_plt(nn_gpu_impl_user_g_pGsvUserSession);
  if (*(_DWORD*)(v5 + 4) == 0) {
    goto LABEL_17;
  }
  v14 = *(_DWORD*)(v5 + 4);
  v6 = __builtin_arm_rsr64("tpidrro_el0");
  *(_DWORD*)(v6 + 8) = v4;
  *(_QWORD*)v6 = 0x1000001E4LL;
  v7 = nn_sm_detail_SendSessionRequest(&v14);
  if (v7 == 0) {
    v7 = *(_DWORD*)(v6 + 8);
    *(_QWORD*)v6 = 0x1000001E4LL;
    if (v7 == 0) {
      goto LABEL_12;
    }
  }
LABEL_10:
  explicit = (void (*)(_QWORD))atomic_load_explicit(
      (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
  if (explicit != nullptr) {
    explicit(v7);
  }
LABEL_12:
  nn_os_SdkMutexType_Unlock_plt(v5);
  if (v7 != 0) {
    goto LABEL_18;
  }
  result = nn_gs_sdk_DestroyNativeMemory_plt(*((unsigned int*)a1 + 3));
  if ((int)atomic_fetch_add_explicit((atomic_uint* volatile)(v1 + 4),
                                     0xFFFFFFFF, memory_order_relaxed) <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  return result;
}

__int64 nn_gpu_46b020(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                      __int64 a6, int a7)
{
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned __int64 StatusReg;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  void (*explicit)(_QWORD);
  __int64 v24;
  unsigned int v25;
  unsigned int v26;

  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v25 = 0;
  do {
    v13 = nn_os_GetSystemTickOrdered_plt(a1),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v14 = nn_os_ConvertToTick_plt(1000000000),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    a1 = gpu_sdk_boot_46ac60(a3, &v25, v14 + v13),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  } while ((a1 & 1) == 0);
  if (a7 != 0) {
    nn_os_SetMemoryAttribute_plt(a5, a6, 0),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  nn_os_SdkMutexType_Lock_plt(a2),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_DWORD*)(a2 + 4) == 0) {
  LABEL_23:
    v24 = nn_os_SdkMutexType_Unlock_plt(a2),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    nn_diag_detail_AbortImpl_plt_856170(v24),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v26 = *(_DWORD*)(a2 + 4);
  v15 = v25;
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 0x200000076LL;
  *(_DWORD*)(StatusReg + 8) = a4;
  *(_DWORD*)(StatusReg + 12) = v15;
  v17 = nn_sm_detail_SendSessionRequest(&v26),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v17 != 0 || (v17 = *(_DWORD*)(StatusReg + 8),
                   *(_QWORD*)StatusReg = 0x100000076LL, v17 != 0)) {
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (explicit != nullptr) {
      explicit(v17);
    }
    goto LABEL_23;
  }
  nn_os_SdkMutexType_Unlock_plt(a2),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  while ((nn_os_TimedWaitSystemEvent_plt(a3 + 40 + 48LL * v25, 1000000000) &
          1) == 0)
    ;
  SdkRoutine_1a5658(),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v19 = v25;
  if ((v25 & 0x80000000) != 0) {
    goto LABEL_20;
  }
  if (v25 + 1 <= 0x3F) {
    v20 = ~(-1LL << ((unsigned __int8)v25 + 1));
    if (v25 != 0) {
      goto LABEL_16;
    }
    if ((*(_QWORD*)(a3 + 32) & v20) != 0) {
      goto LABEL_18;
    }
  LABEL_20:
    nn_diag_detail_AbortImpl_plt_856170(v18),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v20 = -1;
  v21 = -1;
  if (v25 <= 0x3F) {
  LABEL_16:
    v21 = ~(-1LL << v25);
  }
  if ((*(_QWORD*)(a3 + 32) & (v21 ^ v20)) == 0) {
    goto LABEL_20;
  }
LABEL_18:
  nn_os_SdkMutexType_Lock_plt(a3 + 16),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  atomic_fetch_and_explicit(
      (atomic_ullong* volatile)(a3 + 8LL * (v19 >> 6) + 24), ~(1LL << v19),
      memory_order_release);
  nn_os_SdkConditionVariableType_Broadcast_plt(a3 + 20),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  return nn_os_SdkMutexType_Unlock_plt(a3 + 16);
}

__int64 nn_gpu_46b360(__int64 a1, int* a2, int a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned __int64 StatusReg;
  void (*v12)(_QWORD);
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  void (*explicit)(_QWORD);
  int v23;
  unsigned int v24;
  unsigned int v25;

  v3 = a1 + 16;
  v7 = a1 + 24;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 || *(_DWORD*)(a1 + 24) != 0) {
    if ((*(_BYTE*)(a1 + 17) & 1) != 0 || *(_DWORD*)(a1 + 28) != 0) {
      if ((*(_BYTE*)(a1 + 18) & 1) != 0 || *(_DWORD*)(a1 + 32) != 0) {
        if ((*(_BYTE*)(a1 + 19) & 1) != 0 || *(_DWORD*)(a1 + 36) != 0) {
          if ((*(_BYTE*)(a1 + 20) & 1) != 0 || *(_DWORD*)(a1 + 40) != 0) {
            if ((*(_BYTE*)(a1 + 21) & 1) != 0 || *(_DWORD*)(a1 + 44) != 0) {
              if ((*(_BYTE*)(a1 + 22) & 1) != 0 || *(_DWORD*)(a1 + 48) != 0) {
                v9 = 33011;
                if ((*(_BYTE*)(a1 + 23) & 1) != 0 || *(_DWORD*)(a1 + 52) != 0) {
                  return v9;
                }
                v8 = 7;
              }
              else {
                v8 = 6;
              }
            }
            else {
              v8 = 5;
            }
          }
          else {
            v8 = 4;
          }
        }
        else {
          v8 = 3;
        }
      }
      else {
        v8 = 2;
      }
    }
    else {
      v8 = 1;
    }
  }
  else {
    v8 = 0;
  }
  v10 = *(_QWORD*)(a1 + 8);
  nn_os_SdkMutexType_Lock_plt(v10);
  if (*(_DWORD*)(v10 + 4) != 0) {
    v24 = *(_DWORD*)(v10 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 8) = a3;
    *(_QWORD*)StatusReg = 0x100000031LL;
    v9 = nn_sm_detail_SendSessionRequest(&v24);
    if (v9 == 0) {
      v9 = *(_DWORD*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x200000031LL;
      if (v9 == 0) {
        v14 = *(_DWORD*)(StatusReg + 12);
        nn_os_SdkMutexType_Unlock_plt(v10);
        v15 = a1 + 16 * v8;
        nn_gpu_46b5f0(a1, (__int64*)(v15 + 88), v14);
        v16 = nn_gpu_46b700(a1, (_QWORD*)(v15 + 216), v14);
        v17 = nn_gsv_GetUserSession_plt(v16);
        nn_os_SdkMutexType_Lock_plt(v17);
        if (*(_DWORD*)(v17 + 4) == 0) {
          nn_os_SdkMutexType_Unlock_plt(v17);
          v23 = 199411;
          nn_diag_detail_AbortImpl_plt_858db0(&v23);
        }
        v25 = *(_DWORD*)(v17 + 4);
        v18 = __builtin_arm_rsr64("tpidrro_el0");
        *(_QWORD*)v18 = 0x1000001C2LL;
        *(_DWORD*)(v18 + 8) = v14;
        v19 = nn_sm_detail_SendSessionRequest(&v25);
        if (v19 != 0) {
          v21 = v19;
        }
        else {
          v20 = *(_DWORD*)(v18 + 8);
          *(_QWORD*)v18 = 0x1000001C2LL;
          if (v20 == 0) {
            nn_os_SdkMutexType_Unlock_plt(v17);
            v9 = 0;
            *(_BYTE*)(v3 + v8) = 1;
            *(_DWORD*)(v7 + 4 * v8) = v14;
            *(_DWORD*)(a1 + 4 * v8 + 56) = a3;
            *a2 = v14;
            return v9;
          }
          v21 = v20;
        }
        explicit = (void (*)(_QWORD))atomic_load_explicit(
            (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
        if (explicit != nullptr) {
          explicit(v21);
        }
        nn_os_SdkMutexType_Unlock_plt(v17);
        v23 = v21;
        nn_diag_detail_AbortImpl_plt_858db0(&v23);
      }
    }
    v12 = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (v12 != nullptr) {
      v12(v9);
    }
  }
  else {
    v9 = 199411;
  }
  nn_os_SdkMutexType_Unlock_plt(v10);
  return v9;
}

__int64 nn_gpu_46b5f0(__int64 a1, __int64* a2, int a3)
{
  __int64 v3;
  unsigned __int64 StatusReg;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  void (*explicit)(_QWORD);
  int v16;
  unsigned int v17;

  v3 = *(_QWORD*)(a1 + 8);
  nn_os_SdkMutexType_Lock_plt(v3);
  if (*(_DWORD*)(v3 + 4) == 0) {
    nn_os_SdkMutexType_Unlock_plt(v3);
    v16 = 199411;
    nn_diag_detail_AbortImpl_plt_858db0(&v16);
  }
  v17 = *(_DWORD*)(v3 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_DWORD*)(StatusReg + 8) = a3;
  *(_QWORD*)StatusReg = 0x1000000DBLL;
  v7 = nn_sm_detail_SendSessionRequest(&v17);
  if (v7 != 0) {
    v14 = v7;
    goto LABEL_15;
  }
  *(_QWORD*)StatusReg = 0x13000000DBLL;
  if (*(_DWORD*)(StatusReg + 8) != 0) {
    v14 = *(_DWORD*)(StatusReg + 8);
  LABEL_15:
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v14);
    }
    nn_os_SdkMutexType_Unlock_plt(v3);
    v16 = v14;
    nn_diag_detail_AbortImpl_plt_858db0(&v16);
  }
  v8 = *(_QWORD*)(StatusReg + 28);
  v9 = *(_QWORD*)(StatusReg + 20);
  v10 = *(_QWORD*)(StatusReg + 12);
  result = nn_os_SdkMutexType_Unlock_plt(v3);
  if (v10 >= 5) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  if (v10 != 0) {
    v12 = v9;
  }
  else {
    v12 = -1;
  }
  if (v10 != 0) {
    v13 = v8;
  }
  else {
    v13 = 0;
  }
  *a2 = v12;
  a2[1] = v13;
  return result;
}

__int64 nn_gpu_46b700(__int64 a1, _QWORD* a2, int a3)
{
  __int64 v3;
  unsigned __int64 StatusReg;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  unsigned int v11;
  void (*explicit)(_QWORD);
  int v13;
  unsigned int v14;

  v3 = *(_QWORD*)(a1 + 8);
  nn_os_SdkMutexType_Lock_plt(v3);
  if (*(_DWORD*)(v3 + 4) == 0) {
    nn_os_SdkMutexType_Unlock_plt(v3);
    v13 = 199411;
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v14 = *(_DWORD*)(v3 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_DWORD*)(StatusReg + 8) = a3;
  *(_QWORD*)StatusReg = 0x1000000DALL;
  v7 = nn_sm_detail_SendSessionRequest(&v14);
  if (v7 != 0) {
    v11 = v7;
    goto LABEL_8;
  }
  *(_QWORD*)StatusReg = 0x5000000DALL;
  if (*(_DWORD*)(StatusReg + 8) != 0) {
    v11 = *(_DWORD*)(StatusReg + 8);
  LABEL_8:
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v11);
    }
    nn_os_SdkMutexType_Unlock_plt(v3);
    v13 = v11;
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v8 = *(_QWORD*)(StatusReg + 20);
  v9 = *(_QWORD*)(StatusReg + 12);
  result = nn_os_SdkMutexType_Unlock_plt(v3);
  *a2 = v9;
  a2[1] = v8;
  return result;
}

__int64 nn_gpu_46d070(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  unsigned __int64 StatusReg;
  unsigned int v5;
  unsigned int v6;
  __int16 v7;
  __int16 v8;
  unsigned __int64 v9;
  unsigned int v10;
  void (*explicit)(_QWORD);
  void (*v13)(_QWORD);
  unsigned int v14;

  *(_QWORD*)(a1 + 20) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_WORD*)(a1 + 16) = 0;
  v14 = 0;
  nn_gpu_impl_user_CreateUserlandDebuggerSession_plt(&v14);
  v2 = *(unsigned int*)(a1 + 4);
  *(_DWORD*)(a1 + 4) = v14;
  v14 = v2;
  if ((_DWORD)v2 != 0) {
    nn_os_CloseNativeHandle_plt(v2);
  }
  v3 = 199411;
  *(_QWORD*)(a1 + 8) = nn_gpu_impl_user_GetKEventPool_plt();
  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) == 0) {
  LABEL_14:
    nn_os_SdkMutexType_Unlock_plt(a1);
    v14 = v3;
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
  }
  v14 = *(_DWORD*)(a1 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 8825;
  v5 = nn_sm_detail_SendSessionRequest(&v14);
  if (v5 != 0) {
    v3 = v5;
    goto LABEL_12;
  }
  v6 = *(_DWORD*)(StatusReg + 8);
  *(_QWORD*)StatusReg = 0x300002279LL;
  if (v6 != 0) {
    v3 = v6;
  LABEL_12:
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v3);
    }
    goto LABEL_14;
  }
  v7 = *(unsigned __int8*)(StatusReg + 12);
  v8 = *(unsigned __int8*)(StatusReg + 16);
  nn_os_SdkMutexType_Unlock_plt(a1);
  *(_WORD*)(a1 + 16) = v7 | (v8 << 8);
  *(_QWORD*)(a1 + 20) = 0xFFFFFFFF00000001LL;
  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) == 0) {
    goto LABEL_18;
  }
  v14 = *(_DWORD*)(a1 + 4);
  v9 = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)v9 = 8829;
  v10 = nn_sm_detail_SendSessionRequest(&v14);
  if (v10 != 0) {
    v3 = v10;
  LABEL_16:
    v13 = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (v13 != nullptr) {
      v13(v3);
    }
  LABEL_18:
    nn_os_SdkMutexType_Unlock_plt(a1);
    v14 = v3;
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
  }
  v3 = *(_DWORD*)(v9 + 8);
  *(_QWORD*)v9 = 0x30000227DLL;
  if (v3 != 0) {
    goto LABEL_16;
  }
  *(_QWORD*)(a1 + 32) = *(_QWORD*)(v9 + 12);
  return nn_os_SdkMutexType_Unlock_plt(a1);
}

__int64 nn_gpu_46d6e0(void* this_)
{
  __int64 v1;
  unsigned int v2;
  __int64 result;
  unsigned int v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  struct {
    _QWORD v10[2];
    __int64 v11;
    __int64 v12;
    __int64 v13;
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
    __int64 v24;
    __int64 v25;
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
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    _QWORD v41[250];
    __int64 v42;
    __int64 v43;
    __int64 v44;
  } v10_;

  v1 = memset_plt((__int64)v10_.v41, 0, 0x800u);
  memset(v10_.v41, 0, 40);
  memset(&v10_.v41[8], 0, 40);
  memset(&v10_.v41[16], 0, 40);
  memset(&v10_.v41[24], 0, 40);
  memset(&v10_.v41[32], 0, 40);
  memset(&v10_.v41[40], 0, 40);
  memset(&v10_.v41[48], 0, 40);
  memset(&v10_.v41[56], 0, 40);
  memset(&v10_.v41[64], 0, 40);
  memset(&v10_.v41[72], 0, 40);
  memset(&v10_.v41[80], 0, 40);
  memset(&v10_.v41[88], 0, 40);
  memset(&v10_.v41[96], 0, 40);
  memset(&v10_.v41[104], 0, 40);
  memset(&v10_.v41[112], 0, 40);
  memset(&v10_.v41[120], 0, 40);
  memset(&v10_.v41[128], 0, 40);
  memset(&v10_.v41[136], 0, 40);
  memset(&v10_.v41[144], 0, 40);
  memset(&v10_.v41[152], 0, 40);
  memset(&v10_.v41[160], 0, 40);
  memset(&v10_.v41[168], 0, 40);
  memset(&v10_.v41[176], 0, 40);
  memset(&v10_.v41[184], 0, 40);
  memset(&v10_.v41[192], 0, 40);
  memset(&v10_.v41[200], 0, 40);
  memset(&v10_.v41[208], 0, 40);
  memset(&v10_.v41[216], 0, 40);
  memset(&v10_.v41[224], 0, 40);
  memset(&v10_.v41[232], 0, 40);
  memset(&v10_.v41[240], 0, 40);
  v10_.v44 = 0;
  v10_.v43 = 0;
  v10_.v42 = 0;
  v10_.v41[249] = 0;
  v10_.v41[248] = 0;
  v10_.v39 = 0;
  v10_.v40 = 0;
  v10_.v37 = 0;
  v10_.v38 = 0;
  v10_.v35 = 0;
  v10_.v36 = 0;
  v10_.v33 = 0;
  v10_.v34 = 0;
  v10_.v31 = 0;
  v10_.v32 = 0;
  v10_.v29 = 0;
  v10_.v30 = 0;
  v10_.v27 = 0;
  v10_.v28 = 0;
  v10_.v25 = 0;
  v10_.v26 = 0;
  v10_.v23 = 0;
  v10_.v24 = 0;
  v10_.v21 = 0;
  v10_.v22 = 0;
  v10_.v19 = 0;
  v10_.v20 = 0;
  v10_.v17 = 0;
  v10_.v18 = 0;
  v10_.v15 = 0;
  v10_.v16 = 0;
  v10_.v13 = 0;
  v10_.v14 = 0;
  v10_.v11 = 0;
  v10_.v12 = 0;
  v10_.v10[0] = 0;
  v10_.v10[1] = 0;
  v2 = nn_gpu_sdk_GetGpuMemoryHandleMin_plt(v1);
  result = nn_gpu_sdk_GetGpuMemoryHandleMax_plt();
  if (v2 <= (unsigned int)result) {
    v4 = result;
    v9 = 0;
    result = nn_gpu_sdk_QueryGpuMemoryInfo_plt((__int64)&v9, v2, result,
                                               (__int64)v10_.v41, 32);
    if ((_DWORD)result == 0 && v9 != 0) {
      v5 = 0;
      while (1) {
        while (1) {
          v6 = &v10_.v41[8 * v5];
          v10_.v39 = 0;
          v10_.v40 = 0;
          v10_.v37 = 0;
          v10_.v38 = 0;
          v7 = *((unsigned int*)v6 + 4);
          v10_.v35 = 0;
          v10_.v36 = 0;
          v10_.v33 = 0;
          v10_.v34 = 0;
          v10_.v31 = 0;
          v10_.v32 = 0;
          v10_.v29 = 0;
          v10_.v30 = 0;
          v10_.v27 = 0;
          v10_.v28 = 0;
          v10_.v25 = 0;
          v10_.v26 = 0;
          v10_.v23 = 0;
          v10_.v24 = 0;
          v10_.v21 = 0;
          v10_.v22 = 0;
          v10_.v19 = 0;
          v10_.v20 = 0;
          v10_.v17 = 0;
          v10_.v18 = 0;
          v10_.v15 = 0;
          v10_.v16 = 0;
          v10_.v13 = 0;
          v10_.v14 = 0;
          v10_.v11 = 0;
          v10_.v12 = 0;
          v10_.v10[0] = 0;
          v10_.v10[1] = 0;
          result = nn_util_SNPrintf_plt(v10_.v10, 256,
                                        "[hMem=%X] cpu=[%llX-%llX] %s", v7);
          if ((unsigned int)result <= 0xFE) {
            break;
          }
          v8 = v9;
          if (++v5 >= v9) {
            goto LABEL_8;
          }
        }
        result = nn_util_SNPrintf_plt((char*)v10_.v10 + (unsigned int)result,
                                      256LL - (unsigned int)result,
                                      " lib=%d sL=0x%llX uL=(0x%llX,0x%llX)",
                                      *((unsigned __int8*)v6 + 25), v6[5],
                                      v6[6], v6[7]);
        v8 = v9;
        if (++v5 >= v9) {
        LABEL_8:
          if (v8 < 0x20) {
            return result;
          }
          if ((unsigned int)v10_.v42 >= v4) {
            return result;
          }
          v9 = 0;
          result = nn_gpu_sdk_QueryGpuMemoryInfo_plt(
              (__int64)&v9, (int)v10_.v42 + 1, v4, (__int64)v10_.v41, 32);
          if ((_DWORD)result != 0) {
            return result;
          }
          v5 = 0;
          if (v9 == 0) {
            return result;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
