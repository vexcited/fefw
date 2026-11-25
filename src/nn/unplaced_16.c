#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* SdkRoutine_65d940(_DWORD* result);
_DWORD* nvidia_647700(_DWORD* result, __int64, char*, int);
_QWORD* SdkRoutine_6565e0(_QWORD* result);
_QWORD* SdkRoutine_66fa00(_QWORD* result);
__int64 NvOsFree_plt(_QWORD);
__int64 NvRmGpuMappingClose_plt(void);
__int64 NvRmMemHandleFree_plt(unsigned int);
__int64 NvWsiNativeDisplayUnref_plt(_QWORD, _QWORD);
__int64 SdkRoutine_64fff0(__int64);
__int64 SdkRoutine_653cc0(__int64, __int64);
__int64 SdkRoutine_6589a0(_QWORD);
__int64 SdkRoutine_65b950();
__int64 SdkRoutine_65c230(__int64 result);
__int64 SdkRoutine_65d380(__int64);
__int64 SdkRoutine_65eff0(__int64 result);
__int64 SdkRoutine_664fc0(__int64 result);
__int64 SdkRoutine_6704c0(__int64 result, __int64);
__int64 SdkRoutine_6730c0(__int64, __int128*, __int64);
__int64 SdkRoutine_6a0860(__int64);
__int64 SdkRoutine_6a0870(__int64 result);
__int64 SdkRoutine_6ade40(__int64 result);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nn_6584b0(__int64 result);
__int64 nn_65dbc0(__int64*, unsigned int*);
__int64 nn_6addf0(__int64 result);
__int64 nn_6ade20();
__int64 nn_os_FinalizeMutex_plt(__int64);
__int64 nn_os_LockMutex_plt(__int64);
__int64 nn_os_UnlockMutex_plt(__int64);
__int64 nvidia_6474d0(__int64 result, int, int, int, int, int, int, int, int,
                      unsigned int, int);
__int64 unplaced_9_6499c0(_QWORD*);
extern _UNKNOWN* SdkData_1042158;
extern _UNKNOWN* SdkData_e89ba0;
extern _UNKNOWN* SdkData_e89bd8;
extern _UNKNOWN* SdkData_e89c10;
extern _UNKNOWN* SdkData_e89c38;
extern _UNKNOWN* SdkData_e89e80;
extern _UNKNOWN** SdkData_e89c30;
extern _UNKNOWN** SdkData_e89eb0;
extern __int64* SdkData_e89c18;
extern __int64* SdkData_e89c40;
extern __int64* SdkData_e89eb8;
extern __int64 SdkData_10420c0;
extern char SdkData_10420b0;
extern int SdkData_10420ac;
extern void (*SdkData_e88fd8[89])();
__int64 nn_646360(__int64 a1);
__int64 nn_650730(__int64 a1);
__int64 nn_65d9a0(__int64 a1, __int64 a2);
_DWORD* nn_66b8d0(_DWORD* a1, _QWORD* a2);
__int64 nn_670360(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4, _QWORD* a5);
__int64 nn_672ee0(_QWORD* a1);
__int64 nn_673060(__int64 a1, int a2);
__int64 nn_69b010(__int64 a1);
bool nn_6a50c0(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6,
               uint8x8_t a7);

__int64 nn_646360(__int64 a1)
{
  (**(void (***)(__int64))(a1 + 368))(*(_QWORD*)(a1 + 368));
  NvWsiNativeDisplayUnref_plt(*(_QWORD*)(a1 + 360),
                              *(_QWORD*)(*(_QWORD*)(a1 + 360) + 32LL));
  return NvOsFree_plt(a1);
}

__int64 nn_650730(__int64 a1)
{
  __int64 v2;
  int v4;
  __int64 v5;
  void* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  unsigned int v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;

  v2 = a1 + 4096;
  *(_DWORD*)SdkData_e88fd8[0] = 0;
  nn_os_LockMutex_plt((__int64)SdkData_e89c10);
  SdkRoutine_664fc0(a1);
  if (*(_BYTE*)(v2 + 3617) == 1) {
    nn_6584b0(a1);
    v20 = *(_QWORD*)(a1 + 7720);
    v21 = *(_QWORD*)(v20 + 11534344);
    if (v21 == 0 || (SdkRoutine_6a0870(v21),
                     *(_QWORD*)(*(_QWORD*)(a1 + 7720) + 11534344LL) = 0,
                     (v20 = *(_QWORD*)(a1 + 7720)) != 0)) {
      SdkRoutine_6589a0(v20);
      SdkRoutine_6ade40(v20);
    }
    *(_BYTE*)(v2 + 3617) = 0;
    v4 = *(_DWORD*)(a1 + 8);
    if ((v4 & 0x200) == 0) {
    LABEL_3:
      if ((v4 & 0x600) == 0) {
        goto LABEL_5;
      }
      goto LABEL_4;
    }
  }
  else {
    v4 = *(_DWORD*)(a1 + 8);
    if ((v4 & 0x200) == 0) {
      goto LABEL_3;
    }
  }
  SdkRoutine_66fa00((_QWORD*)a1);
  if ((*(_DWORD*)(a1 + 8) & 0x600) != 0) {
  LABEL_4:
    unplaced_9_6499c0((_QWORD*)a1);
    *(_QWORD*)(a1 + 7648) = 0;
    *(_QWORD*)(a1 + 7624) = 0;
  }
LABEL_5:
  v5 = *(_QWORD*)(a1 + 7232);
  v6 = SdkData_e89bd8;
  if (v5 != 0) {
    SdkRoutine_65d380(v5);
    (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v6))(
        *(_QWORD*)(a1 + 7232));
    *(_QWORD*)(a1 + 7232) = 0;
  }
  v7 = *(_QWORD*)(a1 + 7240);
  if (v7 != 0) {
    SdkRoutine_65d380(v7);
    (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v6))(
        *(_QWORD*)(a1 + 7240));
    *(_QWORD*)(a1 + 7240) = 0;
  }
  v8 = *(_QWORD*)(a1 + 7256);
  if (v8 != 0) {
    SdkRoutine_65d380(v8);
    (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v6))(
        *(_QWORD*)(a1 + 7256));
    *(_QWORD*)(a1 + 7256) = 0;
  }
  v9 = *(_QWORD*)(a1 + 7224);
  if (v9 != 0) {
    nn_6addf0(v9);
    *(_QWORD*)(a1 + 7224) = 0;
  }
  v10 = *(_QWORD*)(a1 + 7248);
  if (v10 != 0) {
    nn_6addf0(v10);
    *(_QWORD*)(a1 + 7248) = 0;
  }
  v11 = *(_QWORD*)(a1 + 7560);
  if (v11 != 0) {
    SdkRoutine_65c230(v11);
    *(_QWORD*)(a1 + 7560) = 0;
  }
  v12 = *(_QWORD*)(a1 + 7568);
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    *(_QWORD*)(a1 + 7568) = 0;
  }
  v13 = *(_DWORD**)(a1 + 7552);
  if (v13 != nullptr) {
    SdkRoutine_65d940(v13);
    *(_QWORD*)(a1 + 7552) = 0;
  }
  v14 = *(_QWORD*)(a1 + 7736);
  *(_QWORD*)(a1 + 7744) = 0;
  if (v14 != 0) {
    NvRmGpuMappingClose_plt();
  }
  v15 = *(_DWORD*)(a1 + 7728);
  if (v15 != 0) {
    NvRmMemHandleFree_plt(v15);
  }
  SdkRoutine_65eff0(a1 + 2520);
  SdkRoutine_64fff0(0);
  v16 = atomic_load((unsigned __int64*)&SdkData_10420c0);
  if (v16 == 0) {
    memcpy_plt((__int64)SdkData_e89c30, (__int64)SdkData_e89c38, 0x16F8u);
  }
  nn_os_UnlockMutex_plt((__int64)SdkData_e89c10);
  if (--SdkData_10420ac == 0 && SdkData_10420b0 != 0) {
    SdkRoutine_65b950();
    SdkData_10420b0 = 0;
    *SdkData_e89c40 = 0;
    *SdkData_e89c18 = 0;
  }
  nn_os_FinalizeMutex_plt(a1 + 7776);
  v17 = *(_QWORD*)(a1 + 7752);
  if (v17 != 0) {
    if ((*(_BYTE*)(v2 + 3676) & 2) != 0) {
      (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v6))(v17);
    }
    *(_QWORD*)(a1 + 7752) = 0;
    *(_QWORD*)(a1 + 7760) = 0;
  }
  nn_os_FinalizeMutex_plt(a1 + 2488);
  SdkRoutine_6565e0((_QWORD*)(a1 + 2472));
  *(_OWORD*)(a1 + 2472) = (__typeof__(*(_OWORD*)(a1 + 2472))){0};
  nn_os_FinalizeMutex_plt(a1 + 2440);
  v18 = *(_QWORD*)(a1 + 2416);
  if (v18 != 0) {
    if ((*(_BYTE*)(a1 + 2436) & 2) != 0) {
      (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v6))(v18);
    }
    *(_QWORD*)(a1 + 2416) = 0;
    *(_QWORD*)(a1 + 2424) = 0;
  }
  nn_os_FinalizeMutex_plt(a1 + 2376);
  return nn_os_FinalizeMutex_plt(a1 + 2344);
}

__int64 nn_65d9a0(__int64 a1, __int64 a2)
{
  unsigned int* v4;
  unsigned int* v5;
  unsigned __int64 v6;
  unsigned int v7;
  bool v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  int* v13;
  int* v14;
  int* v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned int v28;

  nn_os_LockMutex_plt(a1 + 128);
  if (a2 != 0xFFFFFFFFLL) {
    v4 = *(unsigned int**)(a1 + 112);
    v5 = nullptr;
    v6 = (a2 + (unsigned __int64)*(unsigned int*)(a1 + 32) - 1) /
         *(unsigned int*)(a1 + 32);
    v28 = v6;
    while (1) {
      v7 = v4[4];
      v8 = v7 > (unsigned int)v6;
      if (v7 == (_DWORD)v6) {
        break;
      }
      if (v7 <= (unsigned int)v6) {
        v9 = 10;
      }
      else {
        v9 = 8;
      }
      if (!v8) {
        v5 = v4;
      }
      v4 = *(unsigned int**)&v4[v9];
      if (v4 == nullptr) {
        goto LABEL_12;
      }
    }
    v5 = v4;
  LABEL_12:
    v10 = *v5;
    v11 = v5[1];
    v12 = *(_QWORD*)(a1 + 64);
    v13 = (int*)(a1 + 48);
    if (v12 == a1 + 48) {
    LABEL_21:
      if (*(_QWORD*)(a1 + 40) != 0) {
        v18 = (*(__int64 (**)(__int64))SdkData_e89bd8)(32);
        if (v18 == 0) {
        LABEL_27:
          nn_65dbc0((__int64*)(a1 + 112), &v28);
          return nn_os_UnlockMutex_plt(a1 + 128);
        }
        v19 = (_QWORD*)(v18 + 16);
        *(_DWORD*)v18 = v10;
        *(_DWORD*)(v18 + 4) = v11;
        *(_QWORD*)(v18 + 8) = 0;
      }
      else {
        *(_DWORD*)(a1 + 80) = v10;
        *(_DWORD*)(a1 + 84) = v11;
        v18 = a1 + 80;
        *(_QWORD*)(a1 + 88) = 0;
        v19 = (_QWORD*)(a1 + 96);
      }
      *v19 = 0;
      v19[1] = 0;
      v20 = *(_QWORD*)(v12 + 24);
      *(_QWORD*)(v18 + 16) = v12;
      *(_QWORD*)(v18 + 24) = v20;
      *(_QWORD*)(v12 + 24) = v18;
      *(_QWORD*)(*(_QWORD*)(v18 + 24) + 16LL) = v18;
      v21 = 1;
    }
    else {
      v14 = *(int**)(a1 + 64);
      v15 = (int*)(a1 + 48);
      while (1) {
        v16 = *v14;
        v17 = v14[1];
        if (v17 + *v14 == v10) {
          break;
        }
        if (v11 + v10 == v16) {
          *v14 = v10;
          v14[1] = v17 + v11;
          if (v14 == *(int**)(a1 + 64)) {
            goto LABEL_27;
          }
          v25 = *((_QWORD*)v14 + 3);
          v26 = *(_DWORD*)(v25 + 4);
          if (v26 + *(int*)v25 != v10) {
            goto LABEL_27;
          }
          v23 = *(_QWORD*)(v25 + 16);
          *(_DWORD*)(v25 + 4) = v26 + v17 + v11;
          if ((int*)v23 == v13) {
            goto LABEL_27;
          }
          goto LABEL_35;
        }
        if (v10 > v16) {
          v15 = v14;
        }
        v14 = *((int**)v14 + 2);
        if (v14 == v13) {
          if (v15 != v13) {
            v12 = *((_QWORD*)v15 + 2);
          }
          goto LABEL_21;
        }
      }
      v23 = *((_QWORD*)v14 + 2);
      v24 = v17 + v11;
      v14[1] = v17 + v11;
      if ((int*)v23 == v13 || v24 + v16 != *(_DWORD*)v23) {
        goto LABEL_27;
      }
      v14[1] = *(int*)(v23 + 4) + v24;
    LABEL_35:
      v27 = *(_QWORD*)(v23 + 24);
      *(_QWORD*)(*(_QWORD*)(v23 + 16) + 24LL) = v27;
      *(_QWORD*)(v27 + 16) = *(_QWORD*)(v23 + 16);
      if (v23 != a1 + 80) {
        ((void (*)(__int64))SdkData_1042158)(v23);
      }
      v21 = -1;
    }
    *(_QWORD*)(a1 + 40) += v21;
    goto LABEL_27;
  }
  return nn_os_UnlockMutex_plt(a1 + 128);
}

_DWORD* nn_66b8d0(_DWORD* a1, _QWORD* a2)
{
  int v3;
  int v4;
  unsigned __int8* v7;
  char v9[3];
  _DWORD v10[12];

  v3 = a1[8];
  v4 = a1[9];
  if (v4 == 10 | (a1[8] & 0x50) != 0) {
    *a2 = 0;
    a2[1] = 0;
    v3 = a1[8];
    v4 = a1[9];
  }
  v7 = (unsigned __int8*)SdkData_e89ba0 + 48 * a1[14];
  nvidia_6474d0((__int64)v10, v3, v4, v7[16], a1[15], v7[8], v7[9], a1[13],
                a1[10], a1[11], a1[12]);
  return nvidia_647700(v10, (__int64)a2, v9, (a1[8] & 0x800) != 0);
}

__int64 nn_670360(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4, _QWORD* a5)
{
  unsigned int v5;
  int v6;
  void* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  _QWORD v20[3];
  int v21;
  unsigned int v22;
  _BOOL4 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  int v27;

  v5 = *(_DWORD*)a2;
  v6 = *(_DWORD*)(a2 + 4);
  v27 = 0;
  v24 = (__typeof__(v24)){0};
  v25 = (__typeof__(v25)){0};
  v26 = (__typeof__(v26)){0};
  v21 = 3;
  v22 = v5;
  v23 = v6 == 1;
  LODWORD(v25) = 1;
  DWORD2(v25) = 1;
  *(_QWORD*)((char*)&v24 + 4) = 0x100000001LL;
  if ((v5 & 0x10000000) != 0) {
    v27 = 1;
    v22 = v5 & 0xEFFFFFFF;
  }
  v12 = SdkData_e89bd8;
  v13 = (*(__int64 (**)(__int64, __int64))(
      (char*)((__int64*)0x4LL) + (_QWORD)SdkData_e89bd8 + 4))(*(int*)(a2 + 16),
                                                              80);
  v14 = *(unsigned int*)(a2 + 16);
  v15 = v13;
  if ((int)v14 >= 1) {
    v16 = 0;
    v17 = 0;
    v18 = v13;
    do {
      SdkRoutine_6704c0(v18, *(_QWORD*)(a2 + 8) + v16);
      v14 = *(int*)(a2 + 16);
      ++v17;
      v16 += 64;
      v18 += 80;
    } while (v17 < v14);
  }
  (*(void (**)(__int64, __int64, __int64, __int64, __int64, __int64))(
      *(_QWORD*)(a1 + 7688) + 208LL))(*(_QWORD*)(a1 + 7696), (__int64)&v21, v14,
                                      v15, 0, (__int64)v20);
  result = (*(__int64 (**)(__int64))((char*)(*(void*(*)[1])0x18LL) +
                                     (_QWORD)v12))(v15);
  if (a3 != nullptr) {
    *a3 = v20[0];
  }
  if (a4 != nullptr) {
    *a4 = v20[1];
  }
  if (a5 != nullptr) {
    *a5 = v20[2];
  }
  return result;
}

__int64 nn_672ee0(_QWORD* a1)
{
  __int64 i;
  __int64 v3;
  __int64 v4;

  *a1 = (char*)SdkData_e89e80 + 16;
  SdkRoutine_653cc0(a1[1], (__int64)a1);
  for (i = 8; i != 40; i += 2) {
    v3 = a1[i];
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1[3] + 16LL) + 7688LL) +
                             120LL))(v3);
    }
  }
  v4 = a1[4];
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1[3] + 16LL) + 7688LL) +
                           120LL))(v4);
  }
  return nn_6ade20();
}

__int64 nn_673060(__int64 a1, int a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;

  v2 = a1 + 16LL * a2;
  v6 = *(_QWORD*)(v2 + 64);
  v5 = v2 + 64;
  result = v6;
  if (v6 != 0) {
    result = (*(__int64 (**)(__int64))(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL) + 7688LL) + 120LL))(
        result);
  }
  v7 = *(_DWORD*)(v5 + 8);
  v8 = *(_DWORD*)(a1 + 44);
  *(_QWORD*)v5 = 0;
  *(_DWORD*)(v5 + 8) = 0;
  *(_DWORD*)(a1 + 44) = v8 - v7;
  return result;
}

__int64 nn_69b010(__int64 a1)
{
  __int64* v2;
  unsigned int v3;
  unsigned int v4;
  _QWORD* v5;
  void (*v6)(__int64);
  __int64 v7;
  void (*v8)(__int64);
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v14[2];
    _QWORD* v15;
    char gap32_[8];
    int v16;
  } v14_;

  v2 = SdkData_e89eb8;
  v3 = (*(__int64 (**)(__int64))(*SdkData_e89eb8 + 4224))(a1);
  if ((_BYTE)v3 == 0) {
    return 0;
  }
  v4 = v3;
  v5 = (_QWORD*)SdkRoutine_6a0860(24);
  if (v5 == nullptr) {
    v12 = *(_QWORD*)(a1 + 7888);
    if (v12 != 0) {
      SdkRoutine_6a0870(v12);
    }
    v13 = *v2;
    *(_QWORD*)(a1 + 7888) = 0;
    (*(void (**)(__int64))(v13 + 4160))(a1);
    return 0;
  }
  *v5 = 0;
  v5[1] = a1;
  v5[2] = 0;
  *(_DWORD*)v5 = 2;
  *(_QWORD*)(a1 + 7888) = v5;
  v6 = *(void (**)(__int64))((char*)((char*)0x60LL) + (_QWORD)SdkData_e89eb0);
  if (v6 != nullptr) {
    v7 = v5[2];
    v14_.v15 = v5;
    v14_.v14[0] = 0x2800070001LL;
    v14_.v14[1] = v7;
    v14_.v16 = 4;
    v6((__int64)v14_.v14);
  }
  v8 =
      *(void (**)(__int64))((char*)((__int64*)0x30LL) + (_QWORD)SdkData_e89eb0);
  if (v8 != nullptr) {
    v9 = *(_QWORD*)(a1 + 7888);
    if (v9 != 0) {
      v10 = *(_QWORD*)(v9 + 16);
      v14_.v15 = *(_QWORD**)(a1 + 7888);
      v14_.v16 = 4;
      v14_.v14[0] = 0x2800010001LL;
      v14_.v14[1] = v10;
      v8((__int64)v14_.v14);
    }
  }
  return v4;
}

bool nn_6a50c0(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6,
               uint8x8_t a7)
{
  __int64* v7;
  __int64 i;
  __int128 v14;
  __int64 v15;
  int v16;
  __int128 v17;
  __int64 v18;
  __int64 v19;
  _BYTE v21[44];
  struct {
    _QWORD v22[2];
    char v23;
  } v22_;
  _BYTE v24[8];

  v7 = *(__int64**)(a1 + 152);
  LODWORD(i) = a2;
  if (*v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7688LL) + 320LL))(
        *v7);
  }
  if ((_DWORD)i != 0) {
    for (i = (unsigned int)i; i != 0; --i) {
      v14 = *(_OWORD*)(a3 + 12);
      v15 = *(_QWORD*)(a1 + 152);
      *(_QWORD*)v21 = *(_QWORD*)a3;
      v16 = *(_DWORD*)(a3 + 8);
      *(_OWORD*)&v21[12] = v14;
      v17 = *(_OWORD*)(a3 + 28);
      *(_DWORD*)&v21[8] = v16;
      *(_OWORD*)&v21[28] = v17;
      nn_os_LockMutex_plt(v15 + 136);
      v18 = *(_QWORD*)(a1 + 152);
      v22_.v22[0] = 0;
      v22_.v22[1] = 0;
      v22_.v23 = 0;
      SdkRoutine_6730c0(v18 + 128, (__int128*)v21, (__int64)v22_.v22);
      nn_os_UnlockMutex_plt(v15 + 136);
      a3 += 44;
    }
  }
  *(_QWORD*)&v21[24] = 0;
  PSEUDO_LOW_LANE64(a7, n64_u32, *((_DWORD*)v7 + 28));
  *(uint32x4_t*)v21 =
      vmovl_u16(COERCE_AS(uint16x4_t, LANES128_OF(vmovl_u8(a7)).n128_u64[0]));
  *(_QWORD*)&v21[16] = *(__int64*)((char*)v7 + 116);
  if (a5 != 0) {
    *(_DWORD*)&v21[24] = a5;
  }
  v19 = *(_QWORD*)(a1 + 8);
  v22_.v22[0] = "descriptorBaseArray";
  LODWORD(v22_.v22[1]) = 5168;
  *(_QWORD*)(v19 + 7624) = a6;
  if (*((_DWORD*)v7 + 42) == 0) {
    *((_DWORD*)v7 + 42) = *(_DWORD*)(v19 + 7632);
  }
  (*(void (**)(__int64, __int64, __int64, __int64, __int64, __int64, __int64,
               __int64))(*(_QWORD*)(v19 + 7688) + 312LL))(
      *(_QWORD*)(v19 + 7696), (__int64)v21, *((unsigned int*)v7 + 16), v7[9], 1,
      (__int64)v22_.v22, a4 != 0, a4);
  if (*((_DWORD*)v7 + 43) == 0) {
    *((_DWORD*)v7 + 43) = *(_DWORD*)(v19 + 7632);
  }
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)(v19 + 7688) + 336LL))(
      *v7, (__int64)(v7 + 1), (__int64)(v7 + 2));
  (*(void (**)(__int64, __int64, __int64, __int64))(
      *(_QWORD*)(v19 + 7688) + 344LL))(*v7, (__int64)"descriptorBaseArray",
                                       (__int64)(v7 + 4), (__int64)v24);
  (*(void (**)(__int64, __int64, __int64, __int64))(
      *(_QWORD*)(v19 + 7688) + 328LL))(*v7, 5, 8, (__int64)(v7 + 5));
  return (*(unsigned int (**)(__int64, __int64, __int64, __int64))(
             *(_QWORD*)(v19 + 7688) + 328LL))(*v7, 7, 8, (__int64)(v7 + 3)) ==
         0;
}

#pragma GCC visibility pop
