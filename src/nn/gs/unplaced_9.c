#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_485840();
__int64 SdkRoutine_485c90();
__int64 SdkRoutine_4860f0();
__int64 SdkRoutine_486550();
__int64 SdkRoutine_4869b0();
__int64 SdkRoutine_486e10();
__int64 SdkRoutine_487270();
__int64 SdkRoutine_4876d0();
__int64 SdkRoutine_487b30();
__int64 nn_gs_47f8a0(__int64 result, char*, __int64, __int64, char);
void nn_diag_detail_AbortImpl_plt_856170();
__attribute__((swiftcall)) void nn_gs_484fc0(PSEUDO_X8 x8_, __int64 a1);
_QWORD* nn_gs_481a60(_QWORD*, __int64,
                     __int64 (*)(unsigned __int64, __int64, __int64), __int64,
                     __int64, unsigned __int64, unsigned __int64, __int64);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_TryLock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
void SdkRoutine_47c4e0();
__int64 nn_gs_4860f0(atomic_uint* volatile*** a1, unsigned __int64* a2,
                     _QWORD* a3, __int64 a4);
__int64 nn_gs_486e10(atomic_uint* volatile*** a1, unsigned __int64* a2,
                     _QWORD* a3, __int64 a4);
__int64 nn_gs_487270(atomic_uint* volatile*** a1, unsigned __int64* a2,
                     _QWORD* a3, __int64 a4);
__int64 nn_gs_4876d0(atomic_uint* volatile*** a1, unsigned __int64* a2,
                     _QWORD* a3, __int64 a4);

__attribute__((swiftcall)) void nn_gs_484fc0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (*v12)();
  __int64 (*v13)();
  __int64 (*v14)();
  __int64 (*v15)();
  __int64 (*v16)();
  __int64 (*v17)();
  __int64 (*v18)();
  __int64 (*v19)();
  __int64 (*v20)();
  struct {
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
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    char v49[7];
    char v50;
  } f_;

  f_.v22 = 0;
  f_.v23 = 0;
  f_.v24 = 64;
  f_.v25 = 0;
  f_.v26 = 1;
  f_.v27 = 400;
  f_.v28 = 0;
  f_.v29 = 2;
  f_.v30 = 448;
  f_.v31 = 0;
  f_.v32 = 3;
  f_.v33 = 512;
  f_.v34 = 0;
  f_.v35 = 4;
  f_.v36 = 576;
  f_.v37 = 0;
  f_.v38 = 5;
  f_.v39 = 672;
  f_.v44 = 7;
  f_.v45 = 1024;
  f_.v40 = 0;
  f_.v41 = 6;
  f_.v46 = 0;
  f_.v47 = 8;
  f_.v42 = 816;
  f_.v43 = 0;
  f_.v48 = 1360;
  nn_gs_47f8a0((__int64)&f_.v22, f_.v49, (__int64)&f_.v50, 6, 1);
  if ((_DWORD)f_.v22 != 0) {
    goto LABEL_182;
  }
  v4 = f_.v27;
  v5 = f_.v30;
  v6 = f_.v33;
  v7 = f_.v36;
  v8 = f_.v39;
  v9 = f_.v42;
  v10 = f_.v45;
  v11 = f_.v48;
  if (f_.v23 <= 3) {
    if (f_.v23 > 1) {
      v12 = f_.v23 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v23 != 0) {
      if (f_.v23 != 1) {
        goto LABEL_183;
      }
      v12 = SdkRoutine_485c90;
    }
    else {
      v12 = SdkRoutine_485840;
    }
  }
  else if (f_.v23 <= 5) {
    v12 = f_.v23 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v23) {
    case 6LL:
      v12 = SdkRoutine_487270;
      break;
    case 7LL:
      v12 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v12 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v25 != 0) {
    goto LABEL_182;
  }
  if (f_.v26 <= 3) {
    if (f_.v26 > 1) {
      v13 = f_.v26 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v26 != 0) {
      if (f_.v26 != 1) {
        goto LABEL_183;
      }
      v13 = SdkRoutine_485c90;
    }
    else {
      v13 = SdkRoutine_485840;
    }
  }
  else if (f_.v26 <= 5) {
    v13 = f_.v26 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v26) {
    case 6LL:
      v13 = SdkRoutine_487270;
      break;
    case 7LL:
      v13 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v13 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v28 != 0) {
    goto LABEL_182;
  }
  if (f_.v29 <= 3) {
    if (f_.v29 > 1) {
      v14 = f_.v29 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v29 != 0) {
      if (f_.v29 != 1) {
        goto LABEL_183;
      }
      v14 = SdkRoutine_485c90;
    }
    else {
      v14 = SdkRoutine_485840;
    }
  }
  else if (f_.v29 <= 5) {
    v14 = f_.v29 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v29) {
    case 6LL:
      v14 = SdkRoutine_487270;
      break;
    case 7LL:
      v14 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v14 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v31 != 0) {
    goto LABEL_182;
  }
  if (f_.v32 <= 3) {
    if (f_.v32 > 1) {
      v15 = f_.v32 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v32 != 0) {
      if (f_.v32 != 1) {
        goto LABEL_183;
      }
      v15 = SdkRoutine_485c90;
    }
    else {
      v15 = SdkRoutine_485840;
    }
  }
  else if (f_.v32 <= 5) {
    v15 = f_.v32 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v32) {
    case 6LL:
      v15 = SdkRoutine_487270;
      break;
    case 7LL:
      v15 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v15 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v34 != 0) {
    goto LABEL_182;
  }
  if (f_.v35 <= 3) {
    if (f_.v35 > 1) {
      v16 = f_.v35 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v35 != 0) {
      if (f_.v35 != 1) {
        goto LABEL_183;
      }
      v16 = SdkRoutine_485c90;
    }
    else {
      v16 = SdkRoutine_485840;
    }
  }
  else if (f_.v35 <= 5) {
    v16 = f_.v35 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v35) {
    case 6LL:
      v16 = SdkRoutine_487270;
      break;
    case 7LL:
      v16 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v16 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v37 != 0) {
    goto LABEL_182;
  }
  if (f_.v38 <= 3) {
    if (f_.v38 > 1) {
      v17 = f_.v38 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v38 != 0) {
      if (f_.v38 != 1) {
        goto LABEL_183;
      }
      v17 = SdkRoutine_485c90;
    }
    else {
      v17 = SdkRoutine_485840;
    }
  }
  else if (f_.v38 <= 5) {
    v17 = f_.v38 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v38) {
    case 6LL:
      v17 = SdkRoutine_487270;
      break;
    case 7LL:
      v17 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v17 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v40 != 0) {
    goto LABEL_182;
  }
  if (f_.v41 <= 3) {
    if (f_.v41 > 1) {
      v18 = f_.v41 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v41 != 0) {
      if (f_.v41 != 1) {
        goto LABEL_183;
      }
      v18 = SdkRoutine_485c90;
    }
    else {
      v18 = SdkRoutine_485840;
    }
  }
  else if (f_.v41 <= 5) {
    v18 = f_.v41 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v41) {
    case 6LL:
      v18 = SdkRoutine_487270;
      break;
    case 7LL:
      v18 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v18 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v43 != 0) {
    goto LABEL_182;
  }
  if (f_.v44 <= 3) {
    if (f_.v44 > 1) {
      v19 = f_.v44 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v44 != 0) {
      if (f_.v44 != 1) {
        goto LABEL_183;
      }
      v19 = SdkRoutine_485c90;
    }
    else {
      v19 = SdkRoutine_485840;
    }
  }
  else if (f_.v44 <= 5) {
    v19 = f_.v44 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v44) {
    case 6LL:
      v19 = SdkRoutine_487270;
      break;
    case 7LL:
      v19 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v19 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v46 != 0) {
  LABEL_182:
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if (f_.v47 <= 3) {
    if (f_.v47 <= 1) {
      if (f_.v47 == 0) {
        v20 = SdkRoutine_485840;
        goto LABEL_181;
      }
      if (f_.v47 == 1) {
        v20 = SdkRoutine_485c90;
        goto LABEL_181;
      }
      goto LABEL_183;
    }
    if (f_.v47 == 2) {
      v20 = SdkRoutine_4860f0;
    }
    else {
      v20 = SdkRoutine_486550;
    }
  }
  else {
    if (f_.v47 > 5) {
      switch (f_.v47) {
      case 6LL:
        v20 = SdkRoutine_487270;
        goto LABEL_181;
      case 7LL:
        v20 = SdkRoutine_4876d0;
        goto LABEL_181;
      case 8LL:
        v20 = SdkRoutine_487b30;
        goto LABEL_181;
      default:
        break;
      }
    LABEL_183:
      nn_diag_detail_AbortImpl_plt_856170();
    }
    if (f_.v47 == 4) {
      v20 = SdkRoutine_4869b0;
    }
    else {
      v20 = SdkRoutine_486e10;
    }
  }
LABEL_181:
  *a2 = f_.v24;
  a2[1] = (__int64)v12;
  a2[6] = v5;
  a2[7] = (__int64)v14;
  a2[12] = v7;
  a2[13] = (__int64)v16;
  a2[18] = v9;
  a2[19] = (__int64)v18;
  a2[24] = v11;
  a2[25] = (__int64)v20;
  a2[2] = a1 + 8;
  a2[3] = v4;
  a2[4] = (__int64)v13;
  a2[5] = a1 + 8;
  a2[8] = a1 + 8;
  a2[9] = v6;
  a2[10] = (__int64)v15;
  a2[11] = a1 + 8;
  a2[14] = a1 + 8;
  a2[15] = v8;
  a2[16] = (__int64)v17;
  a2[17] = a1 + 8;
  a2[20] = a1 + 8;
  a2[21] = v10;
  a2[22] = (__int64)v19;
  a2[23] = a1 + 8;
  a2[26] = a1 + 8;
  {
    a1 + 8;
    return;
  }
}

__int64 nn_gs_4860f0(atomic_uint* volatile*** a1, unsigned __int64* a2,
                     _QWORD* a3, __int64 a4)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  atomic_uint* volatile* v9;
  unsigned __int64 explicit;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  atomic_uint* volatile v42;
  unsigned __int64 v43;
  __int64 (*v44)(unsigned __int64, __int64, __int64);
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;

  v5 = (__int64)(*a1 + 9);
  v6 = *(_QWORD*)(a4 + 16);
  v7 = a4;
  v8 = v5;
  v9 = **a1;
  *(_QWORD*)(a4 + 16) = 0;
  if (v6 == 0) {
    goto LABEL_17;
  }
  explicit = atomic_load_explicit((atomic_ullong* volatile)(v6 + 24),
                                  memory_order_acquire);
  v13 = explicit & 0xFFFFFFFFFFFFFFFELL;
  if ((explicit & 0xFFFFFFFFFFFFFFFELL) == 0) {
  LABEL_6:
    v16 = 0;
  LABEL_7:
    v17 = *(_QWORD**)(a4 + 16);
    *(_QWORD*)(a4 + 16) = v6;
    if (v17 != nullptr) {
      if ((nn_os_SdkMutexType_TryLock_plt(v5) & 1) != 0) {
        v18 = *(_QWORD*)(v8 + 8);
        v19 = *(_QWORD**)(v18 + 8);
        *v19 = v17;
        *(_QWORD*)(v18 + 8) = v17;
        v17[1] = v19;
        *v17 = v18;
        nn_os_SdkMutexType_Unlock_plt(v8);
      }
      else {
        v20 = *(_QWORD*)(v8 + 24);
        *v17 = v20;
        v21 = v20;
        atomic_compare_exchange_strong_explicit(
            (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v21,
            (unsigned __int64)v17, memory_order_release, memory_order_relaxed);
        if (v21 != v20) {
          v22 = v21;
          do {
            *v17 = v21;
            atomic_compare_exchange_strong_explicit(
                (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v22,
                (unsigned __int64)v17, memory_order_release,
                memory_order_relaxed);
            v23 = v22 == v21;
            v21 = v22;
          } while (!v23);
        }
      }
    }
    goto LABEL_16;
  }
  v14 = explicit;
  while (1) {
    v15 = explicit & -(__int64)v13;
    atomic_compare_exchange_strong((atomic_ullong* volatile)(v6 + 24), &v14,
                                   v15 ^ explicit);
    if (v14 == explicit) {
      break;
    }
    v13 = v14 & 0xFFFFFFFFFFFFFFFELL;
    explicit = v14;
    if ((v14 & 0xFFFFFFFFFFFFFFFELL) == 0) {
      goto LABEL_6;
    }
  }
  v16 = (v6 & 0xFFFFFFFFFFFFF000LL) +
        448LL * (unsigned int)__clz((unsigned long long)(__rbit64(v15)));
  if (v15 != explicit) {
    goto LABEL_7;
  }
LABEL_16:
  if (v16 != 0) {
    goto LABEL_41;
  }
LABEL_17:
  nn_os_SdkMutexType_Lock_plt(v8);
  v25 = *(_QWORD*)(v8 + 8);
  v26 = v8 + 8;
  do {
    if (v25 != v26) {
      while (1) {
        v27 = (_QWORD*)(v25 + 8);
        __atomic_exchange_n((unsigned int*)(v25 + 8), (unsigned int)v24, 5);
        __atomic_exchange_n((unsigned int*)v25, v25 + 8, 5);
        *v24 = v25 + 8;
        *(_QWORD*)(v25 + 16) = v24;
        v31 = atomic_load_explicit((atomic_ullong* volatile)(v25 + 24),
                                   memory_order_acquire);
        v32 = v31 & 0xFFFFFFFFFFFFFFFELL;
        if ((v31 & 0xFFFFFFFFFFFFFFFELL) != 0) {
          break;
        }
      LABEL_26:
        v24 = *(_QWORD**)(v25 + 16);
        *v24 = v25;
        *(_QWORD*)(v25 + 16) = v25;
        *(_QWORD*)(v25 + 8) = v24;
        *(_QWORD*)v25 = v27;
        v25 += 8;
        if ((_QWORD*)v26 == v27) {
          goto LABEL_20;
        }
      }
      v33 = v31;
      while (1) {
        v34 = v31 & -(__int64)v32;
        atomic_compare_exchange_strong((atomic_ullong* volatile)(v25 + 24),
                                       &v33, v34 ^ v31);
        if (v33 == v31) {
          break;
        }
        v32 = v33 & 0xFFFFFFFFFFFFFFFELL;
        v31 = v33;
        if ((v33 & 0xFFFFFFFFFFFFFFFELL) == 0) {
          goto LABEL_26;
        }
      }
      v16 = (v25 & 0xFFFFFFFFFFFFF000LL) +
            448LL * (unsigned int)__clz((unsigned long long)(__rbit64(v34)));
      nn_os_SdkMutexType_Unlock_plt(v8);
      if (v34 == v31) {
        goto LABEL_41;
      }
      goto LABEL_33;
    }
    v27 = (_QWORD*)v25;
  LABEL_20:
    v24 = (_QWORD*)atomic_exchange_explicit((atomic_ullong* volatile)(v8 + 24),
                                            0, memory_order_acquire);
    if (v24 != nullptr) {
      v28 = (_QWORD*)v27[1];
      v29 = v24;
      *v28 = v24;
      do {
        v29[1] = v28;
        v30 = v29;
        v28 = v29;
        v29 = (_QWORD*)*v29;
      } while (v29 != nullptr);
      *v30 = v27;
      v27[1] = v30;
      v27 = v24;
    }
    v25 = (__int64)v27;
  } while (v27 != (_QWORD*)v26);
  nn_os_SdkMutexType_Unlock_plt(v8);
  v42 = *v9;
  if (atomic_load_explicit(*v9, memory_order_acquire) != 1) {
    return 0;
  }
  v43 = atomic_load_explicit((atomic_uint* volatile)((char*)v42 + 40),
                             memory_order_acquire);
  v44 = *((__int64 (**)(unsigned __int64, __int64, __int64))v42 + 1);
  v45 = *((_QWORD*)v42 + 4);
  v55 = 0;
  if (((unsigned __int8)nn_gs_481a60(&v55, (__int64)v42 + 48, v44, v45, 2,
                                     0x1000u, v43, 4096) &
       1) == 0) {
    return 0;
  }
  v46 = v55;
  v47 = 40;
  if ((v55 & 0xFFF) != 0) {
    v47 = 0;
  }
  v25 = v47 + v55;
  *(_QWORD*)(v25 + 16) = 0;
  *(_QWORD*)(v25 + 24) = 0;
  *(_QWORD*)v25 = 0;
  *(_QWORD*)(v25 + 8) = 0;
  atomic_store(2u, (unsigned __int64*)(v47 + v46 + 16));
  v48 = *(_QWORD*)(v47 + v46 + 24);
  v49 = v48;
  atomic_compare_exchange_strong_explicit(
      (atomic_ullong* volatile)(v25 + 24), (unsigned __int64*)&v49, 0x1FEu,
      memory_order_relaxed, memory_order_relaxed);
  if (v49 != v48) {
    v50 = v49;
    do {
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v25 + 24), (unsigned __int64*)&v50, 0x1FEu,
          memory_order_relaxed, memory_order_relaxed);
      v23 = v50 == v49;
      v49 = v50;
    } while (!v23);
  }
  v51 = atomic_load_explicit((atomic_ullong* volatile)(v25 + 24),
                             memory_order_acquire);
  v52 = v51 & 0xFFFFFFFFFFFFFFFELL;
  if ((v51 & 0xFFFFFFFFFFFFFFFELL) == 0) {
  LABEL_54:
    if (*(_QWORD*)(v25 + 24) != 510) {
      nn_diag_detail_AbortImpl_plt_856170();
    }
    ((void (*)(char*, _QWORD, _QWORD, unsigned __int64, __int64,
               __int64))SdkRoutine_47c4e0)((char*)*v9 + 48, *((_QWORD*)*v9 + 2),
                                           *((_QWORD*)*v9 + 4),
                                           v25 & 0xFFFFFFFFFFFFF000LL, 2, 4096);
    return 0;
  }
  v53 = v51;
  while (1) {
    v54 = v51 & -(__int64)v52;
    atomic_compare_exchange_strong((atomic_ullong* volatile)(v25 + 24), &v53,
                                   v54 ^ v51);
    if (v53 == v51) {
      break;
    }
    v52 = v53 & 0xFFFFFFFFFFFFFFFELL;
    v51 = v53;
    if ((v53 & 0xFFFFFFFFFFFFFFFELL) == 0) {
      goto LABEL_54;
    }
  }
  v16 = (v25 & 0xFFFFFFFFFFFFF000LL) +
        448LL * (unsigned int)__clz((unsigned long long)(__rbit64(v54)));
  if (v54 == v51) {
    goto LABEL_41;
  }
LABEL_33:
  if (v25 != 0) {
    v35 = *(_QWORD**)(v7 + 16);
    *(_QWORD*)(v7 + 16) = v25;
    if (v35 != nullptr) {
      if ((nn_os_SdkMutexType_TryLock_plt(v8) & 1) != 0) {
        v36 = *(_QWORD*)(v8 + 8);
        v37 = *(_QWORD**)(v36 + 8);
        *v37 = v35;
        *(_QWORD*)(v36 + 8) = v35;
        v35[1] = v37;
        *v35 = v36;
        nn_os_SdkMutexType_Unlock_plt(v8);
      }
      else {
        v38 = *(_QWORD*)(v8 + 24);
        *v35 = v38;
        v39 = v38;
        atomic_compare_exchange_strong_explicit(
            (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v39,
            (unsigned __int64)v35, memory_order_release, memory_order_relaxed);
        if (v39 != v38) {
          v40 = v39;
          do {
            *v35 = v39;
            atomic_compare_exchange_strong_explicit(
                (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v40,
                (unsigned __int64)v35, memory_order_release,
                memory_order_relaxed);
            v23 = v40 == v39;
            v39 = v40;
          } while (!v23);
        }
      }
    }
  }
LABEL_41:
  *a2 = v16;
  *a3 = 448;
  return 1;
}

__int64 nn_gs_486e10(atomic_uint* volatile*** a1, unsigned __int64* a2,
                     _QWORD* a3, __int64 a4)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  atomic_uint* volatile* v9;
  unsigned __int64 explicit;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  atomic_uint* volatile v42;
  unsigned __int64 v43;
  __int64 (*v44)(unsigned __int64, __int64, __int64);
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;

  v5 = (__int64)(*a1 + 21);
  v6 = *(_QWORD*)(a4 + 40);
  v7 = a4;
  v8 = v5;
  v9 = **a1;
  *(_QWORD*)(a4 + 40) = 0;
  if (v6 == 0) {
    goto LABEL_17;
  }
  explicit = atomic_load_explicit((atomic_ullong* volatile)(v6 + 24),
                                  memory_order_acquire);
  v13 = explicit & 0xFFFFFFFFFFFFFFFELL;
  if ((explicit & 0xFFFFFFFFFFFFFFFELL) == 0) {
  LABEL_6:
    v16 = 0;
  LABEL_7:
    v17 = *(_QWORD**)(a4 + 40);
    *(_QWORD*)(a4 + 40) = v6;
    if (v17 != nullptr) {
      if ((nn_os_SdkMutexType_TryLock_plt(v5) & 1) != 0) {
        v18 = *(_QWORD*)(v8 + 8);
        v19 = *(_QWORD**)(v18 + 8);
        *v19 = v17;
        *(_QWORD*)(v18 + 8) = v17;
        v17[1] = v19;
        *v17 = v18;
        nn_os_SdkMutexType_Unlock_plt(v8);
      }
      else {
        v20 = *(_QWORD*)(v8 + 24);
        *v17 = v20;
        v21 = v20;
        atomic_compare_exchange_strong_explicit(
            (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v21,
            (unsigned __int64)v17, memory_order_release, memory_order_relaxed);
        if (v21 != v20) {
          v22 = v21;
          do {
            *v17 = v21;
            atomic_compare_exchange_strong_explicit(
                (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v22,
                (unsigned __int64)v17, memory_order_release,
                memory_order_relaxed);
            v23 = v22 == v21;
            v21 = v22;
          } while (!v23);
        }
      }
    }
    goto LABEL_16;
  }
  v14 = explicit;
  while (1) {
    v15 = explicit & -(__int64)v13;
    atomic_compare_exchange_strong((atomic_ullong* volatile)(v6 + 24), &v14,
                                   v15 ^ explicit);
    if (v14 == explicit) {
      break;
    }
    v13 = v14 & 0xFFFFFFFFFFFFFFFELL;
    explicit = v14;
    if ((v14 & 0xFFFFFFFFFFFFFFFELL) == 0) {
      goto LABEL_6;
    }
  }
  v16 = (v6 & 0xFFFFFFFFFFFFF000LL) +
        672LL * (unsigned int)__clz((unsigned long long)(__rbit64(v15)));
  if (v15 != explicit) {
    goto LABEL_7;
  }
LABEL_16:
  if (v16 != 0) {
    goto LABEL_41;
  }
LABEL_17:
  nn_os_SdkMutexType_Lock_plt(v8);
  v25 = *(_QWORD*)(v8 + 8);
  v26 = v8 + 8;
  do {
    if (v25 != v26) {
      while (1) {
        v27 = (_QWORD*)(v25 + 8);
        __atomic_exchange_n((unsigned int*)(v25 + 8), (unsigned int)v24, 5);
        __atomic_exchange_n((unsigned int*)v25, v25 + 8, 5);
        *v24 = v25 + 8;
        *(_QWORD*)(v25 + 16) = v24;
        v31 = atomic_load_explicit((atomic_ullong* volatile)(v25 + 24),
                                   memory_order_acquire);
        v32 = v31 & 0xFFFFFFFFFFFFFFFELL;
        if ((v31 & 0xFFFFFFFFFFFFFFFELL) != 0) {
          break;
        }
      LABEL_26:
        v24 = *(_QWORD**)(v25 + 16);
        *v24 = v25;
        *(_QWORD*)(v25 + 16) = v25;
        *(_QWORD*)(v25 + 8) = v24;
        *(_QWORD*)v25 = v27;
        v25 += 8;
        if ((_QWORD*)v26 == v27) {
          goto LABEL_20;
        }
      }
      v33 = v31;
      while (1) {
        v34 = v31 & -(__int64)v32;
        atomic_compare_exchange_strong((atomic_ullong* volatile)(v25 + 24),
                                       &v33, v34 ^ v31);
        if (v33 == v31) {
          break;
        }
        v32 = v33 & 0xFFFFFFFFFFFFFFFELL;
        v31 = v33;
        if ((v33 & 0xFFFFFFFFFFFFFFFELL) == 0) {
          goto LABEL_26;
        }
      }
      v16 = (v25 & 0xFFFFFFFFFFFFF000LL) +
            672LL * (unsigned int)__clz((unsigned long long)(__rbit64(v34)));
      nn_os_SdkMutexType_Unlock_plt(v8);
      if (v34 == v31) {
        goto LABEL_41;
      }
      goto LABEL_33;
    }
    v27 = (_QWORD*)v25;
  LABEL_20:
    v24 = (_QWORD*)atomic_exchange_explicit((atomic_ullong* volatile)(v8 + 24),
                                            0, memory_order_acquire);
    if (v24 != nullptr) {
      v28 = (_QWORD*)v27[1];
      v29 = v24;
      *v28 = v24;
      do {
        v29[1] = v28;
        v30 = v29;
        v28 = v29;
        v29 = (_QWORD*)*v29;
      } while (v29 != nullptr);
      *v30 = v27;
      v27[1] = v30;
      v27 = v24;
    }
    v25 = (__int64)v27;
  } while (v27 != (_QWORD*)v26);
  nn_os_SdkMutexType_Unlock_plt(v8);
  v42 = *v9;
  if (atomic_load_explicit(*v9, memory_order_acquire) != 1) {
    return 0;
  }
  v43 = atomic_load_explicit((atomic_uint* volatile)((char*)v42 + 40),
                             memory_order_acquire);
  v44 = *((__int64 (**)(unsigned __int64, __int64, __int64))v42 + 1);
  v45 = *((_QWORD*)v42 + 4);
  v55 = 0;
  if (((unsigned __int8)nn_gs_481a60(&v55, (__int64)v42 + 48, v44, v45, 2,
                                     0x1000u, v43, 4096) &
       1) == 0) {
    return 0;
  }
  v46 = v55;
  v47 = 40;
  if ((v55 & 0xFFF) != 0) {
    v47 = 0;
  }
  v25 = v47 + v55;
  *(_QWORD*)(v25 + 16) = 0;
  *(_QWORD*)(v25 + 24) = 0;
  *(_QWORD*)v25 = 0;
  *(_QWORD*)(v25 + 8) = 0;
  atomic_store(5u, (unsigned __int64*)(v47 + v46 + 16));
  v48 = *(_QWORD*)(v47 + v46 + 24);
  v49 = v48;
  atomic_compare_exchange_strong_explicit(
      (atomic_ullong* volatile)(v25 + 24), (unsigned __int64*)&v49, 0x3Eu,
      memory_order_relaxed, memory_order_relaxed);
  if (v49 != v48) {
    v50 = v49;
    do {
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v25 + 24), (unsigned __int64*)&v50, 0x3Eu,
          memory_order_relaxed, memory_order_relaxed);
      v23 = v50 == v49;
      v49 = v50;
    } while (!v23);
  }
  v51 = atomic_load_explicit((atomic_ullong* volatile)(v25 + 24),
                             memory_order_acquire);
  v52 = v51 & 0xFFFFFFFFFFFFFFFELL;
  if ((v51 & 0xFFFFFFFFFFFFFFFELL) == 0) {
  LABEL_54:
    if (*(_QWORD*)(v25 + 24) != 62) {
      nn_diag_detail_AbortImpl_plt_856170();
    }
    ((void (*)(char*, _QWORD, _QWORD, unsigned __int64, __int64,
               __int64))SdkRoutine_47c4e0)((char*)*v9 + 48, *((_QWORD*)*v9 + 2),
                                           *((_QWORD*)*v9 + 4),
                                           v25 & 0xFFFFFFFFFFFFF000LL, 2, 4096);
    return 0;
  }
  v53 = v51;
  while (1) {
    v54 = v51 & -(__int64)v52;
    atomic_compare_exchange_strong((atomic_ullong* volatile)(v25 + 24), &v53,
                                   v54 ^ v51);
    if (v53 == v51) {
      break;
    }
    v52 = v53 & 0xFFFFFFFFFFFFFFFELL;
    v51 = v53;
    if ((v53 & 0xFFFFFFFFFFFFFFFELL) == 0) {
      goto LABEL_54;
    }
  }
  v16 = (v25 & 0xFFFFFFFFFFFFF000LL) +
        672LL * (unsigned int)__clz((unsigned long long)(__rbit64(v54)));
  if (v54 == v51) {
    goto LABEL_41;
  }
LABEL_33:
  if (v25 != 0) {
    v35 = *(_QWORD**)(v7 + 40);
    *(_QWORD*)(v7 + 40) = v25;
    if (v35 != nullptr) {
      if ((nn_os_SdkMutexType_TryLock_plt(v8) & 1) != 0) {
        v36 = *(_QWORD*)(v8 + 8);
        v37 = *(_QWORD**)(v36 + 8);
        *v37 = v35;
        *(_QWORD*)(v36 + 8) = v35;
        v35[1] = v37;
        *v35 = v36;
        nn_os_SdkMutexType_Unlock_plt(v8);
      }
      else {
        v38 = *(_QWORD*)(v8 + 24);
        *v35 = v38;
        v39 = v38;
        atomic_compare_exchange_strong_explicit(
            (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v39,
            (unsigned __int64)v35, memory_order_release, memory_order_relaxed);
        if (v39 != v38) {
          v40 = v39;
          do {
            *v35 = v39;
            atomic_compare_exchange_strong_explicit(
                (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v40,
                (unsigned __int64)v35, memory_order_release,
                memory_order_relaxed);
            v23 = v40 == v39;
            v39 = v40;
          } while (!v23);
        }
      }
    }
  }
LABEL_41:
  *a2 = v16;
  *a3 = 672;
  return 1;
}

__int64 nn_gs_487270(atomic_uint* volatile*** a1, unsigned __int64* a2,
                     _QWORD* a3, __int64 a4)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  atomic_uint* volatile* v9;
  unsigned __int64 explicit;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  atomic_uint* volatile v42;
  unsigned __int64 v43;
  __int64 (*v44)(unsigned __int64, __int64, __int64);
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;

  v5 = (__int64)(*a1 + 25);
  v6 = *(_QWORD*)(a4 + 48);
  v7 = a4;
  v8 = v5;
  v9 = **a1;
  *(_QWORD*)(a4 + 48) = 0;
  if (v6 == 0) {
    goto LABEL_17;
  }
  explicit = atomic_load_explicit((atomic_ullong* volatile)(v6 + 24),
                                  memory_order_acquire);
  v13 = explicit & 0xFFFFFFFFFFFFFFFELL;
  if ((explicit & 0xFFFFFFFFFFFFFFFELL) == 0) {
  LABEL_6:
    v16 = 0;
  LABEL_7:
    v17 = *(_QWORD**)(a4 + 48);
    *(_QWORD*)(a4 + 48) = v6;
    if (v17 != nullptr) {
      if ((nn_os_SdkMutexType_TryLock_plt(v5) & 1) != 0) {
        v18 = *(_QWORD*)(v8 + 8);
        v19 = *(_QWORD**)(v18 + 8);
        *v19 = v17;
        *(_QWORD*)(v18 + 8) = v17;
        v17[1] = v19;
        *v17 = v18;
        nn_os_SdkMutexType_Unlock_plt(v8);
      }
      else {
        v20 = *(_QWORD*)(v8 + 24);
        *v17 = v20;
        v21 = v20;
        atomic_compare_exchange_strong_explicit(
            (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v21,
            (unsigned __int64)v17, memory_order_release, memory_order_relaxed);
        if (v21 != v20) {
          v22 = v21;
          do {
            *v17 = v21;
            atomic_compare_exchange_strong_explicit(
                (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v22,
                (unsigned __int64)v17, memory_order_release,
                memory_order_relaxed);
            v23 = v22 == v21;
            v21 = v22;
          } while (!v23);
        }
      }
    }
    goto LABEL_16;
  }
  v14 = explicit;
  while (1) {
    v15 = explicit & -(__int64)v13;
    atomic_compare_exchange_strong((atomic_ullong* volatile)(v6 + 24), &v14,
                                   v15 ^ explicit);
    if (v14 == explicit) {
      break;
    }
    v13 = v14 & 0xFFFFFFFFFFFFFFFELL;
    explicit = v14;
    if ((v14 & 0xFFFFFFFFFFFFFFFELL) == 0) {
      goto LABEL_6;
    }
  }
  v16 = (v6 & 0xFFFFFFFFFFFFF000LL) +
        816LL * (unsigned int)__clz((unsigned long long)(__rbit64(v15)));
  if (v15 != explicit) {
    goto LABEL_7;
  }
LABEL_16:
  if (v16 != 0) {
    goto LABEL_41;
  }
LABEL_17:
  nn_os_SdkMutexType_Lock_plt(v8);
  v25 = *(_QWORD*)(v8 + 8);
  v26 = v8 + 8;
  do {
    if (v25 != v26) {
      while (1) {
        v27 = (_QWORD*)(v25 + 8);
        __atomic_exchange_n((unsigned int*)(v25 + 8), (unsigned int)v24, 5);
        __atomic_exchange_n((unsigned int*)v25, v25 + 8, 5);
        *v24 = v25 + 8;
        *(_QWORD*)(v25 + 16) = v24;
        v31 = atomic_load_explicit((atomic_ullong* volatile)(v25 + 24),
                                   memory_order_acquire);
        v32 = v31 & 0xFFFFFFFFFFFFFFFELL;
        if ((v31 & 0xFFFFFFFFFFFFFFFELL) != 0) {
          break;
        }
      LABEL_26:
        v24 = *(_QWORD**)(v25 + 16);
        *v24 = v25;
        *(_QWORD*)(v25 + 16) = v25;
        *(_QWORD*)(v25 + 8) = v24;
        *(_QWORD*)v25 = v27;
        v25 += 8;
        if ((_QWORD*)v26 == v27) {
          goto LABEL_20;
        }
      }
      v33 = v31;
      while (1) {
        v34 = v31 & -(__int64)v32;
        atomic_compare_exchange_strong((atomic_ullong* volatile)(v25 + 24),
                                       &v33, v34 ^ v31);
        if (v33 == v31) {
          break;
        }
        v32 = v33 & 0xFFFFFFFFFFFFFFFELL;
        v31 = v33;
        if ((v33 & 0xFFFFFFFFFFFFFFFELL) == 0) {
          goto LABEL_26;
        }
      }
      v16 = (v25 & 0xFFFFFFFFFFFFF000LL) +
            816LL * (unsigned int)__clz((unsigned long long)(__rbit64(v34)));
      nn_os_SdkMutexType_Unlock_plt(v8);
      if (v34 == v31) {
        goto LABEL_41;
      }
      goto LABEL_33;
    }
    v27 = (_QWORD*)v25;
  LABEL_20:
    v24 = (_QWORD*)atomic_exchange_explicit((atomic_ullong* volatile)(v8 + 24),
                                            0, memory_order_acquire);
    if (v24 != nullptr) {
      v28 = (_QWORD*)v27[1];
      v29 = v24;
      *v28 = v24;
      do {
        v29[1] = v28;
        v30 = v29;
        v28 = v29;
        v29 = (_QWORD*)*v29;
      } while (v29 != nullptr);
      *v30 = v27;
      v27[1] = v30;
      v27 = v24;
    }
    v25 = (__int64)v27;
  } while (v27 != (_QWORD*)v26);
  nn_os_SdkMutexType_Unlock_plt(v8);
  v42 = *v9;
  if (atomic_load_explicit(*v9, memory_order_acquire) != 1) {
    return 0;
  }
  v43 = atomic_load_explicit((atomic_uint* volatile)((char*)v42 + 40),
                             memory_order_acquire);
  v44 = *((__int64 (**)(unsigned __int64, __int64, __int64))v42 + 1);
  v45 = *((_QWORD*)v42 + 4);
  v55 = 0;
  if (((unsigned __int8)nn_gs_481a60(&v55, (__int64)v42 + 48, v44, v45, 2,
                                     0x1000u, v43, 4096) &
       1) == 0) {
    return 0;
  }
  v46 = v55;
  v47 = 40;
  if ((v55 & 0xFFF) != 0) {
    v47 = 0;
  }
  v25 = v47 + v55;
  *(_QWORD*)(v25 + 16) = 0;
  *(_QWORD*)(v25 + 24) = 0;
  *(_QWORD*)v25 = 0;
  *(_QWORD*)(v25 + 8) = 0;
  atomic_store(6u, (unsigned __int64*)(v47 + v46 + 16));
  v48 = *(_QWORD*)(v47 + v46 + 24);
  v49 = v48;
  atomic_compare_exchange_strong_explicit(
      (atomic_ullong* volatile)(v25 + 24), (unsigned __int64*)&v49, 0x1Eu,
      memory_order_relaxed, memory_order_relaxed);
  if (v49 != v48) {
    v50 = v49;
    do {
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v25 + 24), (unsigned __int64*)&v50, 0x1Eu,
          memory_order_relaxed, memory_order_relaxed);
      v23 = v50 == v49;
      v49 = v50;
    } while (!v23);
  }
  v51 = atomic_load_explicit((atomic_ullong* volatile)(v25 + 24),
                             memory_order_acquire);
  v52 = v51 & 0xFFFFFFFFFFFFFFFELL;
  if ((v51 & 0xFFFFFFFFFFFFFFFELL) == 0) {
  LABEL_54:
    if (*(_QWORD*)(v25 + 24) != 30) {
      nn_diag_detail_AbortImpl_plt_856170();
    }
    ((void (*)(char*, _QWORD, _QWORD, unsigned __int64, __int64,
               __int64))SdkRoutine_47c4e0)((char*)*v9 + 48, *((_QWORD*)*v9 + 2),
                                           *((_QWORD*)*v9 + 4),
                                           v25 & 0xFFFFFFFFFFFFF000LL, 2, 4096);
    return 0;
  }
  v53 = v51;
  while (1) {
    v54 = v51 & -(__int64)v52;
    atomic_compare_exchange_strong((atomic_ullong* volatile)(v25 + 24), &v53,
                                   v54 ^ v51);
    if (v53 == v51) {
      break;
    }
    v52 = v53 & 0xFFFFFFFFFFFFFFFELL;
    v51 = v53;
    if ((v53 & 0xFFFFFFFFFFFFFFFELL) == 0) {
      goto LABEL_54;
    }
  }
  v16 = (v25 & 0xFFFFFFFFFFFFF000LL) +
        816LL * (unsigned int)__clz((unsigned long long)(__rbit64(v54)));
  if (v54 == v51) {
    goto LABEL_41;
  }
LABEL_33:
  if (v25 != 0) {
    v35 = *(_QWORD**)(v7 + 48);
    *(_QWORD*)(v7 + 48) = v25;
    if (v35 != nullptr) {
      if ((nn_os_SdkMutexType_TryLock_plt(v8) & 1) != 0) {
        v36 = *(_QWORD*)(v8 + 8);
        v37 = *(_QWORD**)(v36 + 8);
        *v37 = v35;
        *(_QWORD*)(v36 + 8) = v35;
        v35[1] = v37;
        *v35 = v36;
        nn_os_SdkMutexType_Unlock_plt(v8);
      }
      else {
        v38 = *(_QWORD*)(v8 + 24);
        *v35 = v38;
        v39 = v38;
        atomic_compare_exchange_strong_explicit(
            (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v39,
            (unsigned __int64)v35, memory_order_release, memory_order_relaxed);
        if (v39 != v38) {
          v40 = v39;
          do {
            *v35 = v39;
            atomic_compare_exchange_strong_explicit(
                (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v40,
                (unsigned __int64)v35, memory_order_release,
                memory_order_relaxed);
            v23 = v40 == v39;
            v39 = v40;
          } while (!v23);
        }
      }
    }
  }
LABEL_41:
  *a2 = v16;
  *a3 = 816;
  return 1;
}

__int64 nn_gs_4876d0(atomic_uint* volatile*** a1, unsigned __int64* a2,
                     _QWORD* a3, __int64 a4)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  atomic_uint* volatile* v9;
  unsigned __int64 explicit;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  atomic_uint* volatile v42;
  unsigned __int64 v43;
  __int64 (*v44)(unsigned __int64, __int64, __int64);
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;

  v5 = (__int64)(*a1 + 29);
  v6 = *(_QWORD*)(a4 + 56);
  v7 = a4;
  v8 = v5;
  v9 = **a1;
  *(_QWORD*)(a4 + 56) = 0;
  if (v6 == 0) {
    goto LABEL_17;
  }
  explicit = atomic_load_explicit((atomic_ullong* volatile)(v6 + 24),
                                  memory_order_acquire);
  v13 = explicit & 0xFFFFFFFFFFFFFFFELL;
  if ((explicit & 0xFFFFFFFFFFFFFFFELL) == 0) {
  LABEL_6:
    v16 = 0;
  LABEL_7:
    v17 = *(_QWORD**)(a4 + 56);
    *(_QWORD*)(a4 + 56) = v6;
    if (v17 != nullptr) {
      if ((nn_os_SdkMutexType_TryLock_plt(v5) & 1) != 0) {
        v18 = *(_QWORD*)(v8 + 8);
        v19 = *(_QWORD**)(v18 + 8);
        *v19 = v17;
        *(_QWORD*)(v18 + 8) = v17;
        v17[1] = v19;
        *v17 = v18;
        nn_os_SdkMutexType_Unlock_plt(v8);
      }
      else {
        v20 = *(_QWORD*)(v8 + 24);
        *v17 = v20;
        v21 = v20;
        atomic_compare_exchange_strong_explicit(
            (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v21,
            (unsigned __int64)v17, memory_order_release, memory_order_relaxed);
        if (v21 != v20) {
          v22 = v21;
          do {
            *v17 = v21;
            atomic_compare_exchange_strong_explicit(
                (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v22,
                (unsigned __int64)v17, memory_order_release,
                memory_order_relaxed);
            v23 = v22 == v21;
            v21 = v22;
          } while (!v23);
        }
      }
    }
    goto LABEL_16;
  }
  v14 = explicit;
  while (1) {
    v15 = explicit & -(__int64)v13;
    atomic_compare_exchange_strong((atomic_ullong* volatile)(v6 + 24), &v14,
                                   v15 ^ explicit);
    if (v14 == explicit) {
      break;
    }
    v13 = v14 & 0xFFFFFFFFFFFFFFFELL;
    explicit = v14;
    if ((v14 & 0xFFFFFFFFFFFFFFFELL) == 0) {
      goto LABEL_6;
    }
  }
  v16 = (v6 & 0xFFFFFFFFFFFFF000LL) +
        (__clz((unsigned long long)(__rbit64(v15))) << 10);
  if (v15 != explicit) {
    goto LABEL_7;
  }
LABEL_16:
  if (v16 != 0) {
    goto LABEL_41;
  }
LABEL_17:
  nn_os_SdkMutexType_Lock_plt(v8);
  v25 = *(_QWORD*)(v8 + 8);
  v26 = v8 + 8;
  do {
    if (v25 != v26) {
      while (1) {
        v27 = (_QWORD*)(v25 + 8);
        __atomic_exchange_n((unsigned int*)(v25 + 8), (unsigned int)v24, 5);
        __atomic_exchange_n((unsigned int*)v25, v25 + 8, 5);
        *v24 = v25 + 8;
        *(_QWORD*)(v25 + 16) = v24;
        v31 = atomic_load_explicit((atomic_ullong* volatile)(v25 + 24),
                                   memory_order_acquire);
        v32 = v31 & 0xFFFFFFFFFFFFFFFELL;
        if ((v31 & 0xFFFFFFFFFFFFFFFELL) != 0) {
          break;
        }
      LABEL_26:
        v24 = *(_QWORD**)(v25 + 16);
        *v24 = v25;
        *(_QWORD*)(v25 + 16) = v25;
        *(_QWORD*)(v25 + 8) = v24;
        *(_QWORD*)v25 = v27;
        v25 += 8;
        if ((_QWORD*)v26 == v27) {
          goto LABEL_20;
        }
      }
      v33 = v31;
      while (1) {
        v34 = v31 & -(__int64)v32;
        atomic_compare_exchange_strong((atomic_ullong* volatile)(v25 + 24),
                                       &v33, v34 ^ v31);
        if (v33 == v31) {
          break;
        }
        v32 = v33 & 0xFFFFFFFFFFFFFFFELL;
        v31 = v33;
        if ((v33 & 0xFFFFFFFFFFFFFFFELL) == 0) {
          goto LABEL_26;
        }
      }
      v16 = (v25 & 0xFFFFFFFFFFFFF000LL) +
            (__clz((unsigned long long)(__rbit64(v34))) << 10);
      nn_os_SdkMutexType_Unlock_plt(v8);
      if (v34 == v31) {
        goto LABEL_41;
      }
      goto LABEL_33;
    }
    v27 = (_QWORD*)v25;
  LABEL_20:
    v24 = (_QWORD*)atomic_exchange_explicit((atomic_ullong* volatile)(v8 + 24),
                                            0, memory_order_acquire);
    if (v24 != nullptr) {
      v28 = (_QWORD*)v27[1];
      v29 = v24;
      *v28 = v24;
      do {
        v29[1] = v28;
        v30 = v29;
        v28 = v29;
        v29 = (_QWORD*)*v29;
      } while (v29 != nullptr);
      *v30 = v27;
      v27[1] = v30;
      v27 = v24;
    }
    v25 = (__int64)v27;
  } while (v27 != (_QWORD*)v26);
  nn_os_SdkMutexType_Unlock_plt(v8);
  v42 = *v9;
  if (atomic_load_explicit(*v9, memory_order_acquire) != 1) {
    return 0;
  }
  v43 = atomic_load_explicit((atomic_uint* volatile)((char*)v42 + 40),
                             memory_order_acquire);
  v44 = *((__int64 (**)(unsigned __int64, __int64, __int64))v42 + 1);
  v45 = *((_QWORD*)v42 + 4);
  v55 = 0;
  if (((unsigned __int8)nn_gs_481a60(&v55, (__int64)v42 + 48, v44, v45, 2,
                                     0x1000u, v43, 4096) &
       1) == 0) {
    return 0;
  }
  v46 = v55;
  v47 = 40;
  if ((v55 & 0xFFF) != 0) {
    v47 = 0;
  }
  v25 = v47 + v55;
  *(_QWORD*)(v25 + 16) = 0;
  *(_QWORD*)(v25 + 24) = 0;
  *(_QWORD*)v25 = 0;
  *(_QWORD*)(v25 + 8) = 0;
  atomic_store(7u, (unsigned __int64*)(v47 + v46 + 16));
  v48 = *(_QWORD*)(v47 + v46 + 24);
  v49 = v48;
  atomic_compare_exchange_strong_explicit(
      (atomic_ullong* volatile)(v25 + 24), (unsigned __int64*)&v49, 0xEu,
      memory_order_relaxed, memory_order_relaxed);
  if (v49 != v48) {
    v50 = v49;
    do {
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v25 + 24), (unsigned __int64*)&v50, 0xEu,
          memory_order_relaxed, memory_order_relaxed);
      v23 = v50 == v49;
      v49 = v50;
    } while (!v23);
  }
  v51 = atomic_load_explicit((atomic_ullong* volatile)(v25 + 24),
                             memory_order_acquire);
  v52 = v51 & 0xFFFFFFFFFFFFFFFELL;
  if ((v51 & 0xFFFFFFFFFFFFFFFELL) == 0) {
  LABEL_54:
    if (*(_QWORD*)(v25 + 24) != 14) {
      nn_diag_detail_AbortImpl_plt_856170();
    }
    ((void (*)(char*, _QWORD, _QWORD, unsigned __int64, __int64,
               __int64))SdkRoutine_47c4e0)((char*)*v9 + 48, *((_QWORD*)*v9 + 2),
                                           *((_QWORD*)*v9 + 4),
                                           v25 & 0xFFFFFFFFFFFFF000LL, 2, 4096);
    return 0;
  }
  v53 = v51;
  while (1) {
    v54 = v51 & -(__int64)v52;
    atomic_compare_exchange_strong((atomic_ullong* volatile)(v25 + 24), &v53,
                                   v54 ^ v51);
    if (v53 == v51) {
      break;
    }
    v52 = v53 & 0xFFFFFFFFFFFFFFFELL;
    v51 = v53;
    if ((v53 & 0xFFFFFFFFFFFFFFFELL) == 0) {
      goto LABEL_54;
    }
  }
  v16 = (v25 & 0xFFFFFFFFFFFFF000LL) +
        (__clz((unsigned long long)(__rbit64(v54))) << 10);
  if (v54 == v51) {
    goto LABEL_41;
  }
LABEL_33:
  if (v25 != 0) {
    v35 = *(_QWORD**)(v7 + 56);
    *(_QWORD*)(v7 + 56) = v25;
    if (v35 != nullptr) {
      if ((nn_os_SdkMutexType_TryLock_plt(v8) & 1) != 0) {
        v36 = *(_QWORD*)(v8 + 8);
        v37 = *(_QWORD**)(v36 + 8);
        *v37 = v35;
        *(_QWORD*)(v36 + 8) = v35;
        v35[1] = v37;
        *v35 = v36;
        nn_os_SdkMutexType_Unlock_plt(v8);
      }
      else {
        v38 = *(_QWORD*)(v8 + 24);
        *v35 = v38;
        v39 = v38;
        atomic_compare_exchange_strong_explicit(
            (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v39,
            (unsigned __int64)v35, memory_order_release, memory_order_relaxed);
        if (v39 != v38) {
          v40 = v39;
          do {
            *v35 = v39;
            atomic_compare_exchange_strong_explicit(
                (atomic_ullong* volatile)(v8 + 24), (unsigned __int64*)&v40,
                (unsigned __int64)v35, memory_order_release,
                memory_order_relaxed);
            v23 = v40 == v39;
            v39 = v40;
          } while (!v23);
        }
      }
    }
  }
LABEL_41:
  *a2 = v16;
  *a3 = 1024;
  return 1;
}

#pragma GCC visibility pop
