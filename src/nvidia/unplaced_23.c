#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_62d0e0(_QWORD);
__int64 SdkRoutine_6567c0(__int64, unsigned __int64*);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_diag_detail_AbortImpl_plt_859ba0(const char*, const char*,
                                            const char*, int);
__int64 nvidia_61de50(__int64);
__int64 nvidia_61e690(__int64, __int64, __int64, __int64, __int64, __int64,
                      __int64, __int64, __int64, __int64);
__int64 nvidia_62f550(__int64 result);
__int64 nvidia_62f660(__int64*, __int64);
__int64 nvidia_644cf0(__int64, __int64, __int64*, __int64, __int64*,
                      unsigned __int64);
extern _BYTE* SdkData_e899f8;
extern _BYTE* SdkData_e89a08;
extern _BYTE* SdkData_e89a10;
extern _QWORD SdkData_e899e8;
extern __int64 (***nvrm_host1x_g_pProxy)();
__int64 nvidia_5fec50(unsigned int a1, int a2, __int64 a3, __int64 a4);
__attribute__((swiftcall)) void
nvidia_61e5f0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3, __int64 a4,
              __int64 a5, __int64 a6, __int64 a7, __int64 a8, __int64 a10);
__int64 nvidia_62e340(__int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4);
__int64 nvidia_62f780(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 nvidia_64b4e0(__int64 a1);
__int64 nvidia_64b750(__int64 result, __int64 a2, __int64 a3);
__int64 nvidia_64cb80(__int64 result, _QWORD* a2, unsigned int a3);
__int64 nvidia_64cf80(__int64 a1, __int64 a2, unsigned int a3);

__int64 nvidia_5fec50(unsigned int a1, int a2, __int64 a3, __int64 a4)
{
  return (*(__int64 (**)(__int64, unsigned int, int, __int64, __int64)) &
          (*(_BYTE(*)[4])0x20LL)[(_QWORD)*nvrm_host1x_g_pProxy])(
      (__int64)nvrm_host1x_g_pProxy, a1, a2, a3, a4);
}

__attribute__((swiftcall)) void

nvidia_61e5f0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3, __int64 a4,
              __int64 a5, __int64 a6, __int64 a7, __int64 a8, __int64 a10)
{
  __int64 a9 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  _BYTE v12[2664];

  nvidia_61e690((__int64)v12, a1, a2, a3, a4, a5, a6, a7, a8, a10);
  result = nvidia_61de50((__int64)v12);
  if ((_DWORD)result != 0) {
    *(_DWORD*)(a9 + 8) = result;
    *(_BYTE*)a9 = 0;
  }
  else {
    result = memcpy_plt(a9 + 8, (__int64)v12, 0xA68u);
    *(_BYTE*)a9 = 1;
  }
  {
    result;
    return;
  }
}

__int64 nvidia_62e340(__int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4)
{
  unsigned __int64 v5;
  __int64 v9;
  __int64 result;
  int v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _DWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  _DWORD* v25;
  __int64 v26;
  __int64* v27;
  int v28;
  int v29;
  int v30;
  _DWORD* v31;
  int* v32;
  int v33;
  int v34;
  int* v35;
  __int64 v36;
  unsigned __int64 i;
  int v38;
  int v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  _BYTE* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  __int64 v51;
  _DWORD* v53;
  __int64 v54;
  int v55;
  _DWORD* v56;
  __int64 v57;
  unsigned __int16* v58;
  int v59;
  int v61;
  __int64 v63;
  _DWORD* v64;
  int v65;
  _BYTE* v66;
  int v67;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  _QWORD* v72;
  _DWORD* v73;
  unsigned __int64* v74;
  __int64 v75;
  __int64 v76[2];
  _DWORD v77[2];
  __int64 v78;
  _BYTE v79[1016];
  struct {
    _BYTE v80[46];
    __int16 v81;
  } v80_;
  __int64 v82;
  struct {
    _BYTE* v83;
    __int64 v84;
  } v83_;

  {
    v5 = *a4;
    __asm__ volatile("" ::"r"(v5));
  }
  v9 = SdkRoutine_62d0e0(*(_QWORD*)(a1 + 8));
  memset_plt((__int64)v77, 0, 0x400u);
  if (*(_DWORD*)(v9 + 312) < 0xDu |
      (*(_QWORD*)(v9 + 360) & 0x800000000LL) == 0) {
    result = 2;
    goto LABEL_129;
  }
  if (v5 > 0x100) {
    result = 11;
    goto LABEL_130;
  }
  {
    v12 = *(_DWORD*)(a1 + 24);
    __asm__ volatile("" ::"r"(v12));
  }
  if (*(_DWORD*)a2 != 0 && *(_DWORD*)a2 != v12) {
  LABEL_11:
    result = 11;
    goto LABEL_129;
  }
  v74 = a4;
  v75 = a1;
  if (v5 != 0) {
    v13 = v5 & 7;
    if (v5 >= 8) {
      v15 = 0;
      v16 = &v82;
      do {
        *(v16 - 18) = 0;
        *(v16 - 17) = 0;
        *(v16 - 20) = 0;
        *(v16 - 19) = 0;
        v15 -= 8;
        *(v16 - 16) = 0;
        *(v16 - 15) = 0;
        *(v16 - 14) = 0;
        *(v16 - 13) = 0;
        *(v16 - 12) = 0;
        *(v16 - 11) = 0;
        *(v16 - 10) = 0;
        *(v16 - 9) = 0;
        *(v16 - 8) = 0;
        *(v16 - 7) = 0;
        *(v16 - 6) = 0;
        *(v16 - 5) = 0;
        *(v16 - 4) = 0;
        *(v16 - 3) = 0;
        *(v16 - 2) = 0;
        *(v16 - 1) = 0;
        v16[2] = 0;
        v16[3] = 0;
        *v16 = 0;
        v16[1] = 0;
        v16[8] = 0;
        v16[9] = 0;
        v16[6] = 0;
        v16[7] = 0;
        v16[4] = 0;
        v16[5] = 0;
        v16[12] = 0;
        v16[13] = 0;
        v16[10] = 0;
        v16[11] = 0;
        v16[18] = 0;
        v16[19] = 0;
        v16[16] = 0;
        v16[17] = 0;
        v16[14] = 0;
        v16[15] = 0;
        v16 += 40;
      } while (-(__int64)(v5 & 0x1F8) != v15);
      v14 = -v15;
    }
    else {
      v14 = 0;
    }
    if ((v5 & 7) != 0) {
      {
        v17 = &v80_.v80[40 * v14];
        __asm__ volatile("" ::"r"(v17));
      }
      do {
        v17[3] = 0;
        v17[4] = 0;
        v17[1] = 0;
        v17[2] = 0;
        --v13;
        *v17 = 0;
        v17 += 5;
      } while (v13 != 0);
    }
    v18 = v5 & 7;
    if (v5 >= 8) {
      v20 = 0;
      v21 = v79;
      do {
        *(v21 - 2) = 0;
        *(v21 - 1) = 0;
        *v21 = 0;
        v21[1] = 0;
        v21 += 4;
        v20 -= 8;
      } while (-(__int64)(v5 & 0x1F8) != v20);
      v19 = -v20;
    }
    else {
      v19 = 0;
    }
    if ((v5 & 7) != 0) {
      {
        v22 = &v77[v19];
        __asm__ volatile("" ::"r"(v22));
      }
      do {
        *(_DWORD*)v22++ = 0;
        --v18;
      } while (v18 != 0);
    }
    v23 = v5 & 3;
    if (v5 >= 4) {
      v25 = (_DWORD*)(a3 + 80);
      v26 = 0;
      result = 0;
      v27 = &v78;
      do {
        {
          v28 = *(v25 - 20);
          __asm__ volatile("" ::"r"(v28));
        }
        if (v28 != 0) {
          if (*((_DWORD*)v27 - 2) != 0) {
            if ((_DWORD)result == 0) {
              result = 8;
            }
          }
          else {
            *((_DWORD*)v27 - 2) = v28;
          }
        }
        {
          v29 = *(v25 - 10);
          __asm__ volatile("" ::"r"(v29));
        }
        if (v29 != 0) {
          if (*((_DWORD*)v27 - 1) != 0) {
            if ((_DWORD)result == 0) {
              result = 8;
            }
          }
          else {
            *((_DWORD*)v27 - 1) = v29;
          }
        }
        if (*(_DWORD*)v25 != 0) {
          if (*(_DWORD*)v27 != 0) {
            if ((_DWORD)result == 0) {
              result = 8;
            }
          }
          else {
            *(_DWORD*)v27 = *(_DWORD*)v25;
          }
        }
        {
          v30 = v25[10];
          __asm__ volatile("" ::"r"(v30));
        }
        if (v30 != 0) {
          if (*((_DWORD*)v27 + 1) != 0) {
            if ((_DWORD)result == 0) {
              result = 8;
            }
          }
          else {
            *((_DWORD*)v27 + 1) = v30;
          }
        }
        v26 -= 4;
        v25 += 40;
        v27 += 2;
      } while (-(__int64)(v5 & 0x1FC) != v26);
      v24 = -v26;
    }
    else {
      v24 = 0;
      result = 0;
    }
    if ((v5 & 3) != 0) {
      {
        v31 = &v77[v24];
        __asm__ volatile("" ::"r"(v31));
      }
      v32 = (int*)(a3 + 40 * v24);
      do {
        {
          v34 = *v32;
          __asm__ volatile("" ::"r"(v34));
        }
        v32 += 10;
        v33 = v34;
        if (v34 != 0) {
          if (*(_DWORD*)v31 != 0) {
            if ((_DWORD)result != 0) {
              result = (unsigned int)result;
            }
            else {
              result = 8;
            }
          }
          else {
            *(_DWORD*)v31 = v33;
          }
        }
        ++v31;
        --v23;
      } while (v23 != 0);
    }
    if ((_DWORD)result != 0) {
      goto LABEL_130;
    }
    v35 = v77;
    v36 = 0;
    for (i = v5; i != 0; --i) {
      {
        v40 = *v35++;
        __asm__ volatile("" ::"r"(v40));
      }
      v39 = v40;
      if (*(_DWORD*)(a3 + v36) != 0) {
        v41 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9);
        v42 = a3;
        v43 = a3 + v36;
        (*(void (**)(__int64, _QWORD, _BYTE**))(*(_QWORD*)v41 + 144LL))(
            v41, *(unsigned int*)(v43 + 4), &v83_.v83);
        if ((unsigned __int8)v83_.v83 != 1) {
          goto LABEL_11;
        }
        if (BYTE3(v83_.v83) == 1) {
          *(_WORD*)&v80_.v80[v36 + 4] = *(_DWORD*)(v43 + 4);
          LOWORD(v44) = v83_.v84;
        }
        else {
          *(_WORD*)&v80_.v80[v36 + 4] = -1;
          {
            v44 = *(_DWORD*)(v43 + 4);
            __asm__ volatile("" ::"r"(v44));
          }
        }
        a3 = v42;
      }
      else {
        LOWORD(v44) = -1;
        *(_WORD*)&v80_.v80[v36 + 4] = -1;
      }
      {
        v45 = &v80_.v80[v36];
        __asm__ volatile("" ::"r"(v45));
      }
      *((_WORD*)v45 + 3) = v44;
      v46 = a3 + v36;
      *((_DWORD*)v45 + 2) = v39;
      {
        v47 = *(_QWORD*)(a3 + v36 + 24);
        __asm__ volatile("" ::"r"(v47));
      }
      *((_QWORD*)v45 + 2) = *(_QWORD*)(a3 + v36 + 16);
      *((_QWORD*)v45 + 3) = v47;
      *((_QWORD*)v45 + 4) = *(unsigned int*)(a3 + v36 + 8);
      if (*(_BYTE*)(a3 + v36 + 32) == 1) {
        *(_DWORD*)&v80_.v80[v36] |= 4u;
        if (*(_BYTE*)(v46 + 33) == 1) {
        LABEL_79:
          *(_DWORD*)&v80_.v80[v36] |= 0x8000u;
          v38 = v12;
          if (v12 == 4096) {
            goto LABEL_66;
          }
          goto LABEL_80;
        }
      }
      else if (*(_BYTE*)(v46 + 33) == 1) {
        goto LABEL_79;
      }
      v38 = v12;
      if (v12 != 4096) {
      LABEL_80:
        if (v12 == 0x20000) {
          v38 = 0x4000;
        }
        else {
          if (v12 != 0x10000) {
            goto LABEL_11;
          }
          v38 = 0x2000;
        }
      }
    LABEL_66:
      *(_DWORD*)&v80_.v80[v36] |= v38;
      v36 += 40;
    }
  }
  v83_.v83 = v80_.v80;
  v83_.v84 = 40 * v5;
  v76[0] = (__int64)v80_.v80;
  v76[1] = 40 * v5;
  {
    v48 = *(_QWORD*)(v75 + 8);
    __asm__ volatile("" ::"r"(v48));
  }
  {
    v49 = *(_QWORD*)(v48 + 32);
    __asm__ volatile("" ::"r"(v49));
  }
  {
    v50 = *(_DWORD*)(v49 + 32);
    __asm__ volatile("" ::"r"(v50));
  }
  {
    v51 = *(_QWORD*)(v49 + 80) & 0x800000000LL;
    __asm__ volatile("" ::"r"(v51));
  }
  if (v50 < 0xD | v51 == 0) {
    result = 2;
  LABEL_89:
    *v74 = 0;
    goto LABEL_129;
  }
  result = nvidia_644cf0(*(unsigned int*)(v48 + 24), 3223863565LL,
                         (__int64*)&v83_.v83, 1, v76, 1u);
  if ((_DWORD)result != 0) {
    goto LABEL_89;
  }
  {
    v53 = *(_DWORD**)(a2 + 8);
    __asm__ volatile("" ::"r"(v53));
  }
  if (v53 != nullptr) {
    if (v5 != 0) {
      if (v5 == 1) {
        v54 = 0;
        v55 = 0;
      }
      else {
        v56 = (_DWORD*)(a3 + 44);
        v57 = 0;
        v55 = 0;
        v58 = (unsigned __int16*)&v80_.v81;
        do {
          if (*(v56 - 11) != 0) {
            {
              v59 = *(v58 - 21);
              __asm__ volatile("" ::"r"(v59));
            }
            if (v59 == 0xFFFF) {
              v59 = *(v58 - 20);
              __asm__ volatile("" ::"r"(v59));
            }
            if (*(v56 - 10) != v59 || (v59 & 0x8000u) != 0) {
              ++v55;
            }
          }
          if (*(v56 - 1) != 0) {
            {
              v61 = *(v58 - 1);
              __asm__ volatile("" ::"r"(v61));
            }
            if (v61 == 0xFFFF) {
              v61 = *v58;
              __asm__ volatile("" ::"r"(v61));
            }
            if (*(_DWORD*)v56 != v61 || (v61 & 0x8000u) != 0) {
              ++v55;
            }
          }
          v57 -= 2;
          v58 += 40;
          v56 += 20;
        } while (-(__int64)(v5 & 0x1FE) != v57);
        v54 = -v57;
      }
      if ((v5 & 1) != 0) {
        v63 = 5 * v54;
        v64 = (_DWORD*)(a3 + 40 * v54);
        if (*(_DWORD*)v64 != 0) {
          {
            v65 = v64[1];
            __asm__ volatile("" ::"r"(v65));
          }
          {
            v66 = &v80_.v80[8 * v63];
            __asm__ volatile("" ::"r"(v66));
          }
          {
            v67 = *((unsigned __int16*)v66 + 2);
            __asm__ volatile("" ::"r"(v67));
          }
          if (v67 == 0xFFFF) {
            v67 = *((unsigned __int16*)v66 + 3);
            __asm__ volatile("" ::"r"(v67));
          }
          if (v65 != v67 | (v67 & 0x8000u) != 0) {
            ++v55;
          }
        }
      }
    }
    else {
      v55 = 0;
    }
    result = 0;
    *(_DWORD*)v53 = v55;
  }
  else {
    result = 0;
  }
LABEL_129:
  if (v5 == 0) {
    return result;
  }
LABEL_130:
  v69 = v5 & 7;
  if (v5 - 1 < 7) {
    v70 = 0;
    if ((v5 & 7) == 0) {
      return result;
    }
    goto LABEL_136;
  }
  v71 = 0;
  v72 = v79;
  do {
    *(v72 - 2) = 0;
    *(v72 - 1) = 0;
    *v72 = 0;
    v72[1] = 0;
    v72 += 4;
    v71 -= 8;
  } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v71);
  v70 = -v71;
  if ((v5 & 7) != 0) {
  LABEL_136:
    {
      v73 = &v77[v70];
      __asm__ volatile("" ::"r"(v73));
    }
    do {
      *(_DWORD*)v73++ = 0;
      --v69;
    } while (v69 != 0);
  }
  return result;
}

__int64 nvidia_62f780(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  bool v11;
  bool v12;
  char v13;
  __int64 result;
  unsigned int v15;
  unsigned int v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  int v20;
  char v21;
  char v22;
  char v23;
  unsigned int v24;
  int v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  char v34;
  _BYTE* v35;
  __int64 v36;
  bool v37;
  unsigned int v38;
  bool v39;
  bool v40;
  unsigned int v41;
  unsigned __int64 v42;
  bool v43;
  unsigned __int64 v44;
  char* v45;
  int v46;
  unsigned int v47;
  char v48;
  char v49;
  bool v50;
  unsigned int v51;
  bool v53;
  __int64 v54;
  bool v55;
  char v56;
  char v57;
  unsigned int v58;
  bool v59;
  bool v60;
  int v61;
  unsigned int v62;
  bool v63;
  __int64 v64;
  char v65;
  unsigned int v66;
  int v67;
  unsigned int v68;
  bool v69;
  char v70;
  bool v71;

  v7 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[4] + 72LL))(a1[4]);
  {
    v8 = *((_DWORD*)a1 + 12);
    __asm__ volatile("" ::"r"(v8));
  }
  *(_DWORD*)(a2 + 8) = v7;
  v69 = v8 > 0xA;
  {
    v9 = a1[12];
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v10 = ~*((_DWORD*)a1 + 24);
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = (v9 & 0x4000000) != 0;
  if (!v69) {
    v11 = false;
  }
  *(_BYTE*)(a2 + 35) = v11;
  *(_BYTE*)(a2 + 52) = (v9 & 0x40000) != 0;
  *(_BYTE*)(a2 + 53) = (*(_QWORD*)&v10 & 0xC0000LL) == 0;
  *(_BYTE*)(a2 + 54) = *((_DWORD*)a1 + 14) > 7u;
  v12 = (v9 & 0x40000000) != 0 &&
        (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[3] + 72LL))(a1[3]) != 0;
  *(_BYTE*)(a2 + 55) = v12;
  {
    v13 = *((_BYTE*)a1 + 159);
    __asm__ volatile("" ::"r"(v13));
  }
  *(_BYTE*)(a2 + 56) = 0;
  *(_BYTE*)(a2 + 59) = 0;
  *(_BYTE*)(a2 + 65) = 0;
  *(_BYTE*)(a2 + 58) = v13;
  *(_DWORD*)(a2 + 60) = *((_DWORD*)a1 + 31);
  if ((*SdkData_e899f8 & 1) != 0) {
    return 2;
  }
  if (a1[22] != 0) {
    return 17;
  }
  result = 2;
  a1[22] = 1;
  {
    v15 = *((_DWORD*)a1 + 12);
    __asm__ volatile("" ::"r"(v15));
  }
  *((_DWORD*)a1 + 42) = 2;
  if (v15 >= 6) {
    nvidia_62f550((__int64)a1);
    {
      v16 = *((_DWORD*)a1 + 14);
      __asm__ volatile("" ::"r"(v16));
    }
    v17 = false;
    *(_BYTE*)(a2 + 112) = 0;
    if (v16 >= 0x1F) {
      v17 = *(_DWORD*)(a1[11] + 16LL) > 0x12Fu;
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v18 = a1[72];
      __asm__ volatile("" ::"r"(v18));
    }
    *(_BYTE*)(a2 + 111) = v17;
    *(_BYTE*)(a2 + 113) = 0;
    *(_QWORD*)(a2 + 120) = a1 + 71;
    *(_QWORD*)(a2 + 128) = v18;
    {
      v19 = a1[75];
      __asm__ volatile("" ::"r"(v19));
    }
    *(_WORD*)(a2 + 154) = 0;
    {
      v20 = *((unsigned __int8*)a1 + 163);
      __asm__ volatile("" ::"r"(v20));
    }
    *(_QWORD*)(a2 + 136) = a1 + 73;
    *(_QWORD*)(a2 + 144) = v19;
    *(_BYTE*)(a2 + 107) = 1;
    {
      v21 = *((_BYTE*)a1 + 157);
      __asm__ volatile("" ::"r"(v21));
    }
    if (*((_DWORD*)a1 + 13) > 0x26u) {
      v22 = *((_BYTE*)a1 + 157);
      __asm__ volatile("" ::"r"(v22));
    }
    else {
      v22 = 0;
    }
    *(_BYTE*)(a2 + 86) = v22;
    if (*((_DWORD*)a1 + 13) > 0x24u) {
      v23 = v21;
    }
    else {
      v23 = 0;
    }
    *(_BYTE*)(a2 + 87) = v23;
    {
      v24 = *((_DWORD*)a1 + 13);
      __asm__ volatile("" ::"r"(v24));
    }
    *(_BYTE*)(a2 + 73) = 0;
    v69 = v24 > 0x2A;
    {
      v25 = *((unsigned __int8*)a1 + 162);
      __asm__ volatile("" ::"r"(v25));
    }
    if (!v69) {
      v21 = 0;
    }
    *(_BYTE*)(a2 + 88) = v21;
    *(_BYTE*)(a2 + 74) = v25 & ((a1[12] & 0x800000000000LL) != 0);
    *(_BYTE*)(a2 + 75) = v20 & ((a1[12] & 0x400000000000LL) != 0);
    *(_BYTE*)(a2 + 170) = v20 & ((a1[12] & 0x10000000000000LL) != 0);
    {
      v26 = a1[12];
      __asm__ volatile("" ::"r"(v26));
    }
    if (v20 == 1 && (v26 & 0x400000000000LL) != 0 ||
        v25 != 0 && (v26 & 0x800000000000LL) != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)a1[3] + 344LL))(a1[3]);
      {
        v16 = *((_DWORD*)a1 + 14);
        __asm__ volatile("" ::"r"(v16));
      }
      {
        v26 = a1[12];
        __asm__ volatile("" ::"r"(v26));
      }
    }
    {
      v27 = *((_DWORD*)a1 + 17);
      __asm__ volatile("" ::"r"(v27));
    }
    *(_BYTE*)(a2 + 856) = 0;
    *(_BYTE*)(a2 + 101) = v27 > 6;
    *(_WORD*)(a2 + 102) = 256;
    *(_BYTE*)(a2 + 43) = v16 > 0x15;
    *(_BYTE*)(a2 + 36) = ((v26 & 0x10000000) != 0) & (*SdkData_e89a08 ^ 1);
    v29 = (v26 & 0x40000000) != 0 &&
              (v28 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[3] + 72LL))(a1[3]),
               v27 = *((_DWORD*)a1 + 17), v28 != 0) ||
          v27 > 0x1B;
    *(_BYTE*)(a2 + 104) = v29;
    *(_BYTE*)(a2 + 106) = v27 > 0x1C;
    v30 = 16;
    if (v27 <= 0x1C) {
      v30 = 0;
    }
    *(_QWORD*)(a2 + 776) = v30;
    *(_BYTE*)(a2 + 105) = 1;
    {
      v31 = a1[12];
      __asm__ volatile("" ::"r"(v31));
    }
    if (*(_BYTE*)(a1[11] + 169LL) == 1) {
      if ((v31 & 0x8000000) == 0) {
        goto LABEL_41;
      }
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)a1[4] + 56LL))(a1[4]) & 1) == 0) {
        {
          v32 = a1[12];
          __asm__ volatile("" ::"r"(v32));
        }
        if (*(_BYTE*)(a1[11] + 169LL) == 1) {
          if ((v32 & 0x8000000) != 0 &&
              ((*(__int64 (**)(_QWORD))(*(_QWORD*)a1[4] + 56LL))(a1[4]) & 1) !=
                  0) {
            goto LABEL_45;
          }
        }
        else if ((v32 & 0x8000000) != 0) {
          goto LABEL_45;
        }
      LABEL_41:
        if ((*(unsigned int (**)(_QWORD))(*(_QWORD*)a1[4] + 72LL))(a1[4]) ==
            2) {
          v33 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[4] + 56LL))(a1[4]);
        LABEL_46:
          *(_BYTE*)(a2 + 32) = v33 & 1;
          *(_WORD*)(a2 + 33) = 1;
          {
            v34 = *((_DWORD*)a1 + 24);
            __asm__ volatile("" ::"r"(v34));
          }
          v35 = (_BYTE*)SdkData_e899e8;
          *(_BYTE*)(a2 + 38) = 1;
          {
            v69 = *((_DWORD*)a1 + 12) > 0xBu;
            __asm__ volatile("" ::"r"(v69));
          }
          *(_BYTE*)(a2 + 37) = (*v35 ^ 1) & ((v34 & 4) != 0);
          {
            v36 = a1[12];
            __asm__ volatile("" ::"r"(v36));
          }
          *(_BYTE*)(a2 + 160) = 0;
          *(_BYTE*)(a2 + 168) = 0;
          v37 = (v36 & 0x400000000LL) != 0;
          *(_BYTE*)(a2 + 841) = (v36 & 0x8000000000LL) != 0;
          {
            v38 = *((_DWORD*)a1 + 14);
            __asm__ volatile("" ::"r"(v38));
          }
          if (!v69) {
            v37 = false;
          }
          *(_BYTE*)(a2 + 41) = v37;
          *(_BYTE*)(a2 + 42) = v38 > 0xB;
          *(_BYTE*)(a2 + 44) = v38 > 0xD;
          *(_BYTE*)(a2 + 45) = v38 > 0xE;
          *(_BYTE*)(a2 + 46) = v38 > 0xF;
          v39 = v38 > 0x10;
          v40 = v38 > 0x11;
          *(_BYTE*)(a2 + 47) = v39;
          *(_BYTE*)(a2 + 48) = v40;
          *(_BYTE*)(a2 + 49) = v40;
          *(_BYTE*)(a2 + 50) = v40;
          *(_BYTE*)(a2 + 51) = v40;
          {
            v41 = *((_DWORD*)a1 + 17);
            __asm__ volatile("" ::"r"(v41));
          }
          {
            v42 = a1[12];
            __asm__ volatile("" ::"r"(v42));
          }
          *(_BYTE*)(a2 + 64) = 0;
          v43 = (v42 & 0x1000000) != 0;
          v44 = v42 >> 44;
          if (v41 <= 0x1D) {
            v43 = false;
          }
          *(_BYTE*)(a2 + 57) = v43;
          v45 = (char*)SdkData_e89a10;
          v46 = (unsigned __int8)v44 & (v41 > 3) &
                ((unsigned __int8)*SdkData_e89a10 ^ 1);
          *(_BYTE*)(a2 + 66) = v46;
          if (v46 == 1) {
            *(_DWORD*)(a2 + 824) =
                (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 200LL))(*a1);
            *(_DWORD*)(a2 + 828) =
                (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 208LL))(*a1);
            *(_DWORD*)(a2 + 832) =
                (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 216LL))(*a1);
            *(_DWORD*)(a2 + 836) =
                (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 224LL))(*a1);
          }
          {
            v47 = *((_DWORD*)a1 + 13);
            __asm__ volatile("" ::"r"(v47));
          }
          if (v47 <= 1) {
            *(_DWORD*)(a2 + 784) = 0;
          }
          else {
            {
              v48 = *((_BYTE*)a1 + 157);
              __asm__ volatile("" ::"r"(v48));
            }
            *(_DWORD*)(a2 + 784) = 1;
            *(_QWORD*)(a2 + 792) = *(_QWORD*)(a4 + 56);
            *(_QWORD*)(a2 + 800) = *(_QWORD*)(a4 + 40);
            *(_BYTE*)(a2 + 69) = *((_BYTE*)a1 + 158);
            if (*((_DWORD*)a1 + 13) > 0x29u) {
              v49 = v48;
            }
            else {
              v49 = 0;
            }
            *(_BYTE*)(a2 + 71) = v49;
            {
              v47 = *((_DWORD*)a1 + 13);
              __asm__ volatile("" ::"r"(v47));
            }
            if (v47 <= 0x22) {
              v48 = 0;
            }
            *(_BYTE*)(a2 + 72) = v48;
            *(_BYTE*)(a2 + 70) = v47 > 1;
          }
          v50 = false;
          *(_BYTE*)(a2 + 114) = 0;
          *(_BYTE*)(a2 + 76) = v47 > 0xC;
          *(_BYTE*)(a2 + 115) = (a1[12] & 0x200000000LL) != 0;
          {
            v51 = *((_DWORD*)a1 + 17);
            __asm__ volatile("" ::"r"(v51));
          }
          *(_BYTE*)(a2 + 77) = v51 > 0xE;
          if (v51 >= 0xE) {
            v50 = (a1[12] & 0x100000000LL) == 0 | v47 < 0x22;
            __asm__ volatile("" ::"r"(v50));
          }
          *(_BYTE*)(a2 + 78) = v50;
          if (*((_BYTE*)a1 + 157) == 1) {
            {
              v53 = (a1[12] & 0x100000000LL) != 0;
              __asm__ volatile("" ::"r"(v53));
            }
            if (v47 <= 0x21) {
              v53 = false;
            }
          }
          else {
            v53 = false;
          }
          *(_BYTE*)(a2 + 79) = v53;
          v69 = v47 > 0x27;
          {
            v54 = a1[12];
            __asm__ volatile("" ::"r"(v54));
          }
          *(_BYTE*)(a2 + 81) = 0;
          v55 = (v54 & 0x80000000000000LL) != 0;
          if (!v69) {
            v55 = false;
          }
          v69 = v51 > 0x13;
          {
            v56 = *v45;
            __asm__ volatile("" ::"r"(v56));
          }
          *(_BYTE*)(a2 + 80) = v55;
          v57 = v69;
          *(_BYTE*)(a2 + 67) = v57 & (v56 ^ 1);
          {
            v58 = *((_DWORD*)a1 + 14);
            __asm__ volatile("" ::"r"(v58));
          }
          {
            v59 = (a1[12] & 0x10) != 0;
            __asm__ volatile("" ::"r"(v59));
          }
          if (v58 <= 6) {
            v59 = false;
          }
          *(_BYTE*)(a2 + 82) = v59;
          {
            v60 = (a1[12] & 0x40) != 0;
            __asm__ volatile("" ::"r"(v60));
          }
          if (v58 <= 0x12) {
            v60 = false;
          }
          *(_BYTE*)(a2 + 83) = v60;
          {
            v61 = *((_DWORD*)a1 + 30);
            __asm__ volatile("" ::"r"(v61));
          }
          *(_BYTE*)(a2 + 153) = v58 > 2;
          {
            v62 = *((_DWORD*)a1 + 12);
            __asm__ volatile("" ::"r"(v62));
          }
          *(_DWORD*)(a2 + 92) = v61;
          {
            v63 = v62 <= 0xC | (a1[12] & 0x800000000LL) == 0;
            __asm__ volatile("" ::"r"(v63));
          }
          v64 = 256;
          if (v63) {
            v64 = 0;
          }
          *(_QWORD*)(a2 + 192) = v64;
          nvidia_62f660(a1, a2);
          {
            v65 = *((_BYTE*)a1 + 156);
            __asm__ volatile("" ::"r"(v65));
          }
          result = 0;
          *(_BYTE*)(a2 + 108) = 1;
          *(_BYTE*)(a2 + 110) = 1;
          *(_BYTE*)(a2 + 109) = v65;
          {
            v69 = *((_DWORD*)a1 + 17) > 0x1Eu;
            __asm__ volatile("" ::"r"(v69));
          }
          {
            v66 = *((_DWORD*)a1 + 14);
            __asm__ volatile("" ::"r"(v66));
          }
          *(_BYTE*)(a2 + 161) = 1;
          {
            v67 = *((_DWORD*)a1 + 35);
            __asm__ volatile("" ::"r"(v67));
          }
          *(_BYTE*)(a2 + 169) = 0;
          *(_BYTE*)(a2 + 204) = 0;
          *(_DWORD*)(a2 + 200) = v67;
          {
            v68 = *((_DWORD*)a1 + 19);
            __asm__ volatile("" ::"r"(v68));
          }
          v69 = v69 && v66 > 0x1F;
          v70 = v69;
          *(_BYTE*)(a2 + 162) = v70;
          v69 = v68 > 0xC;
          {
            v71 = (a1[12] & 0x100) != 0;
            __asm__ volatile("" ::"r"(v71));
          }
          if (!v69) {
            v71 = false;
          }
          *(_BYTE*)(a2 + 205) = v71;
          return result;
        }
      LABEL_45:
        v33 = 0;
        goto LABEL_46;
      }
    }
    else if ((v31 & 0x8000000) == 0) {
      goto LABEL_41;
    }
    v33 = 1;
    goto LABEL_46;
  }
  return result;
}

__int64 nvidia_64b4e0(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  bool v14;
  char v15;
  void (*v16)(__int64, __int64, __int64, _QWORD);
  __int64 result;
  _BYTE* v18;
  char v19;
  unsigned __int64 v20;
  void (*v21)(__int64, __int64, __int64, _QWORD);
  __int64 v22;
  unsigned __int64 v23;
  bool v24;
  __int64 v25;
  char* v26;
  __int64 v27;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (*(_BYTE*)(a1 + 17) == 0) {
    return 0;
  }
  {
    v1 = *(_QWORD*)(a1 + 72);
    __asm__ volatile("" ::"r"(v1));
  }
  {
    v3 = *(_QWORD*)a1 - v1;
    __asm__ volatile("" ::"r"(v3));
  }
  if (*(_QWORD*)a1 != v1) {
    {
      v4 = *(_QWORD*)(a1 + 56);
      __asm__ volatile("" ::"r"(v4));
    }
    *(_QWORD*)(a1 + 72) = *(_QWORD*)a1;
    {
      v5 = *(_QWORD*)(a1 + 40);
      __asm__ volatile("" ::"r"(v5));
    }
    v6 = v3 >> 2;
    v7 = v1 - v4;
    {
      v8 = *(_QWORD*)(a1 + 88);
      __asm__ volatile("" ::"r"(v8));
    }
    {
      v9 = v7 + *(_QWORD*)(a1 + 96);
      __asm__ volatile("" ::"r"(v9));
    }
    if (v8 != 0 &&
        ((v10 = *(unsigned int*)(v5 - 8), v11 = *(_QWORD*)(v5 - 24) + 4 * v10,
          v12 = v10 + v6, v13 = (unsigned int)(v10 + v6) >> 21, v11 == v9)
             ? (v14 = v13 == 0)
             : (v14 = false),
         v14 && ((v15 = *(_BYTE*)(v5 - 4)) & 1) != 0)) {
      *(_DWORD*)(v5 - 8) = v12;
      *(_BYTE*)(v5 - 4) = v15 | 2;
    }
    else {
      if ((unsigned __int64)(v5 + 32) > *(_QWORD*)(a1 + 48) &&
          *(_BYTE*)(a1 + 21) != 0) {
        v16 = *(void (**)(__int64, __int64, __int64, _QWORD))(a1 + 120),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v16 == nullptr) {
        LABEL_40:
          v26 = "CommandBuffer has run out of control memory with no "
                "out-of-memory callback.";
          goto LABEL_42;
        }
        v16(a1, 1, 256, *(_QWORD*)(a1 + 128)),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        {
          v5 = *(_QWORD*)(a1 + 40);
          __asm__ volatile("" ::"r"(v5));
        }
        if ((signed __int64)(*(_QWORD*)(a1 + 48) - v5 + 16) < 48) {
        LABEL_41:
          v26 = "CommandBuffer out-of-memory callback didn't add enough "
                "control memory.";
        LABEL_42:
          nn_diag_detail_AbortImpl_plt_859ba0(v26, nullptr, nullptr, 0),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        {
          v8 = *(_QWORD*)(a1 + 88);
          __asm__ volatile("" ::"r"(v8));
        }
      }
      if (v8 != 0) {
        *(_DWORD*)(v8 + 4) =
            (((unsigned __int64)*(unsigned int*)(v8 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v5 + 8) = 0;
        *(_QWORD*)(v5 + 16) = 0;
        *(_QWORD*)(v5 + 24) = 0;
        *(_QWORD*)v5 = 0x100000003LL;
        *(_QWORD*)(a1 + 88) = v5;
        v5 += 8;
      }
      *(_QWORD*)v5 = v9;
      *(_QWORD*)(v5 + 8) = v1;
      *(_DWORD*)(v5 + 16) = v6;
      *(_BYTE*)(v5 + 20) = 3;
      *(_QWORD*)(a1 + 40) = v5 + 24;
    }
  }
  {
    v18 = *(_BYTE**)(a1 + 40);
    __asm__ volatile("" ::"r"(v18));
  }
  if (v18 == (_BYTE*)(*(_QWORD*)(a1 + 80) + 16LL)) {
    *(_BYTE*)(a1 + 18) = 1;
    {
      v19 = *(_BYTE*)(a1 + 19) | 1;
      __asm__ volatile("" ::"r"(v19));
    }
  }
  else {
    {
      v19 = *(_BYTE*)(a1 + 19) & 0xFE;
      __asm__ volatile("" ::"r"(v19));
    }
  }
  {
    v20 = *(_QWORD*)(a1 + 48);
    __asm__ volatile("" ::"r"(v20));
  }
  *(_BYTE*)(a1 + 19) = v19;
  if ((unsigned __int64)(v18 + 8) > v20 && *(_BYTE*)(a1 + 21) != 0) {
    v21 = *(void (**)(__int64, __int64, __int64, _QWORD))(a1 + 120),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v21 == nullptr) {
      goto LABEL_40;
    }
    v21(a1, 1, 256, *(_QWORD*)(a1 + 128)),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    {
      v18 = *(_BYTE**)(a1 + 40);
      __asm__ volatile("" ::"r"(v18));
    }
    if ((signed __int64)(*(_QWORD*)(a1 + 48) - (_QWORD)v18 + 16LL) <= 23) {
      goto LABEL_41;
    }
  }
  *v18 = 2;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 40) = v18 + 8;
  {
    v22 = *(_QWORD*)(a1 + 80);
    __asm__ volatile("" ::"r"(v22));
  }
  if ((unsigned int)(*(int*)(a1 + 24) - 3) <= 1 &&
      (SdkRoutine_6567c0(a1, (unsigned __int64*)&v27) & 1) != 0) {
    result = v27;
  }
  else if (*(_BYTE*)(a1 + 18) == 0 &&
           ((v23 = *(_QWORD*)(v22 + 16)) >> 48 == 0
                ? (v24 = (unsigned __int64)(v22 + 24) >> 48 == 0)
                : (v24 = false),
            v24)) {
    result = (v22 + 24) | ((unsigned __int64)HIDWORD(v23) << 48) | 1;
  }
  else {
    result = v22 + 16;
  }
  {
    v25 = *(_QWORD*)(a1 + 40);
    __asm__ volatile("" ::"r"(v25));
  }
  *(_WORD*)(a1 + 17) = 0;
  *(_QWORD*)(a1 + 80) = v25;
  return result;
}

__int64 nvidia_64b750(__int64 result, __int64 a2, __int64 a3)
{
  int v3;
  __int64 (*v4)(void);
  __int64 v5;
  char* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  unsigned int v19;
  bool v20;
  char v21;
  void (*v23)(void);
  _QWORD* v24;
  unsigned __int64 v25;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if ((unsigned __int64)(a2 + 4 * a3) <= *(_QWORD*)(result + 32)) {
    {
      v8 = *(_QWORD*)(result + 72);
      __asm__ volatile("" ::"r"(v8));
    }
    if (a2 != v8) {
      {
        v9 = *(_QWORD*)(result + 56);
        __asm__ volatile("" ::"r"(v9));
      }
      v10 = (unsigned __int64)(a2 - v8) >> 2;
      {
        v11 = *(_QWORD*)(result + 40);
        __asm__ volatile("" ::"r"(v11));
      }
      *(_QWORD*)result = a2;
      v12 = v8 - v9;
      {
        v13 = *(_QWORD*)(result + 88);
        __asm__ volatile("" ::"r"(v13));
      }
      {
        v14 = *(_QWORD*)(result + 96);
        __asm__ volatile("" ::"r"(v14));
      }
      *(_QWORD*)(result + 72) = a2;
      v15 = v12 + v14;
      if (v13 == 0 || ((v16 = *(unsigned int*)(v11 - 8),
                        v17 = *(_QWORD*)(v11 - 24) + 4 * v16, v18 = v16 + v10,
                        v19 = (unsigned int)(v16 + v10) >> 21, v17 == v15)
                           ? (v20 = v19 == 0)
                           : (v20 = false),
                       !v20 || ((v21 = *(_BYTE*)(v11 - 4)) & 1) == 0)) {
        if ((unsigned __int64)(v11 + 32) <= *(_QWORD*)(result + 48) |
            *(_BYTE*)(result + 21) == 0) {
          goto LABEL_21;
        }
        v23 = *(void (**)(void))(result + 120),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v23 != nullptr) {
          v24 = (_QWORD*)result;
          v23(),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          {
            v11 = v24[5];
            __asm__ volatile("" ::"r"(v11));
          }
          if ((signed __int64)(v24[6] - v11 + 16) >= 48) {
            {
              v13 = v24[11];
              __asm__ volatile("" ::"r"(v13));
            }
            result = (__int64)v24;
          LABEL_21:
            if (v13 != 0) {
              *(_DWORD*)(v13 + 4) =
                  (((unsigned __int64)*(unsigned int*)(v13 + 4) << 32) +
                   0x100000000LL) >>
                  32;
            }
            else {
              *(_QWORD*)(v11 + 8) = 0;
              *(_QWORD*)(v11 + 16) = 0;
              *(_QWORD*)(v11 + 24) = 0;
              *(_QWORD*)v11 = 0x100000003LL;
              *(_QWORD*)(result + 88) = v11;
              v11 += 8;
            }
            *(_QWORD*)v11 = v15;
            *(_QWORD*)(v11 + 8) = v8;
            *(_DWORD*)(v11 + 16) = v10;
            *(_BYTE*)(v11 + 20) = 3;
            *(_QWORD*)(result + 40) = v11 + 24;
            goto LABEL_25;
          }
          v7 = "CommandBuffer out-of-memory callback didn't add enough control "
               "memory.";
        }
        else {
          v7 = "CommandBuffer has run out of control memory with no "
               "out-of-memory callback.";
        }
      LABEL_33:
        nn_diag_detail_AbortImpl_plt_859ba0(v7, nullptr, nullptr, 0),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      *(_DWORD*)(v11 - 8) = v18;
      *(_BYTE*)(v11 - 4) = v21 | 2;
    }
  LABEL_25:
    {
      v25 = *(_QWORD*)(result + 32);
      __asm__ volatile("" ::"r"(v25));
    }
    if (v25 >= *(_QWORD*)(result + 72) -
                   4 * (unsigned __int64)*(unsigned int*)(result + 104) +
                   8388604) {
      v25 = *(_QWORD*)(result + 72) - 4LL * *(unsigned int*)(result + 104) +
            8388604;
      __asm__ volatile("" ::"r"(v25));
    }
    *(_QWORD*)(result + 8) = v25;
    return result;
  }
  {
    v3 = *(unsigned __int8*)(result + 20);
    __asm__ volatile("" ::"r"(v3));
  }
  *(_QWORD*)result = a2;
  if (v3 == 0) {
    return result;
  }
  v4 = *(__int64 (**)(void))(result + 120),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v4 == nullptr) {
    v7 = "CommandBuffer has run out of command memory with no out-of-memory "
         "callback.";
    goto LABEL_33;
  }
  v5 = result;
  result = v4(),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (a3 > (signed __int64)(*(_QWORD*)(v5 + 8) +
                            4LL * *(unsigned int*)(v5 + 104) - *(_QWORD*)v5)) {
    v7 = "CommandBuffer out-of-memory callback didn't add enough command "
         "memory.";
    goto LABEL_33;
  }
  return result;
}

__int64 nvidia_64cb80(__int64 result, _QWORD* a2, unsigned int a3)
{
  __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  bool v18;
  char v19;
  __int64 (*v21)(__int64, __int64, __int64, _QWORD);
  __int64 v22;
  __int64 v23;
  __int64 (*v24)(__int64, __int64, __int64, _QWORD);
  __int64 v25;
  __int64 v26;
  char* v27;

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  {
    v3 = *(_QWORD*)(result + 72);
    __asm__ volatile("" ::"r"(v3));
  }
  v6 = result;
  {
    v7 = *(_QWORD*)result - v3;
    __asm__ volatile("" ::"r"(v7));
  }
  if (*(_QWORD*)result != v3) {
    {
      v8 = *(_QWORD*)(result + 56);
      __asm__ volatile("" ::"r"(v8));
    }
    *(_QWORD*)(result + 72) = *(_QWORD*)result;
    {
      v9 = *(_QWORD*)(result + 40);
      __asm__ volatile("" ::"r"(v9));
    }
    v10 = v7 >> 2;
    v11 = v3 - v8;
    {
      v12 = *(_QWORD*)(result + 88);
      __asm__ volatile("" ::"r"(v12));
    }
    {
      v13 = v11 + *(_QWORD*)(result + 96);
      __asm__ volatile("" ::"r"(v13));
    }
    if (v12 != 0 &&
        ((v14 = *(unsigned int*)(v9 - 8), v15 = *(_QWORD*)(v9 - 24) + 4 * v14,
          v16 = v14 + v10, v17 = (unsigned int)(v14 + v10) >> 21, v15 == v13)
             ? (v18 = v17 == 0)
             : (v18 = false),
         v18 && ((v19 = *(_BYTE*)(v9 - 4)) & 1) != 0)) {
      *(_DWORD*)(v9 - 8) = v16;
      *(_BYTE*)(v9 - 4) = v19 | 2;
    }
    else {
      if ((unsigned __int64)(v9 + 32) > *(_QWORD*)(result + 48) &
          *(_BYTE*)(result + 21) != 0) {
        v21 = *(__int64 (**)(__int64, __int64, __int64, _QWORD))(result + 120),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v21 == nullptr) {
        LABEL_29:
          v27 = "CommandBuffer has run out of control memory with no "
                "out-of-memory callback.";
          goto LABEL_31;
        }
        result = v21(result, 1, 256, *(_QWORD*)(result + 128)),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        {
          v9 = *(_QWORD*)(v6 + 40);
          __asm__ volatile("" ::"r"(v9));
        }
        if ((signed __int64)(*(_QWORD*)(v6 + 48) - v9 + 16) < 48) {
        LABEL_30:
          v27 = "CommandBuffer out-of-memory callback didn't add enough "
                "control memory.";
        LABEL_31:
          nn_diag_detail_AbortImpl_plt_859ba0(v27, nullptr, nullptr, 0),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        {
          v12 = *(_QWORD*)(v6 + 88);
          __asm__ volatile("" ::"r"(v12));
        }
      }
      if (v12 != 0) {
        *(_DWORD*)(v12 + 4) =
            (((unsigned __int64)*(unsigned int*)(v12 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v9 + 8) = 0;
        *(_QWORD*)(v9 + 16) = 0;
        *(_QWORD*)(v9 + 24) = 0;
        *(_QWORD*)v9 = 0x100000003LL;
        *(_QWORD*)(v6 + 88) = v9;
        v9 += 8;
      }
      *(_QWORD*)v9 = v13;
      *(_QWORD*)(v9 + 8) = v3;
      *(_DWORD*)(v9 + 16) = v10;
      *(_BYTE*)(v9 + 20) = 3;
      *(_QWORD*)(v6 + 40) = v9 + 24;
    }
  }
  {
    v22 = *(_QWORD*)(v6 + 40);
    __asm__ volatile("" ::"r"(v22));
  }
  v23 = a3 >> 3;
  if (v22 + 8 * (unsigned __int64)(unsigned int)v23 > *(_QWORD*)(v6 + 48) &&
      *(_BYTE*)(v6 + 21) != 0) {
    v24 = *(__int64 (**)(__int64, __int64, __int64, _QWORD))(v6 + 120),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v24 == nullptr) {
      goto LABEL_29;
    }
    v25 = 8 * v23 + 16;
    if ((unsigned __int64)v25 <= 0x100) {
      v26 = 256;
    }
    else {
      v26 = 8 * v23 + 16;
    }
    result = v24(v6, 1, v26, *(_QWORD*)(v6 + 128)),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    {
      v22 = *(_QWORD*)(v6 + 40);
      __asm__ volatile("" ::"r"(v22));
    }
    if (v25 > (signed __int64)(*(_QWORD*)(v6 + 48) - v22 + 16)) {
      goto LABEL_30;
    }
  }
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)(v6 + 40) = v22 + a3;
  *(_BYTE*)(v6 + 18) = 1;
  *a2 = v22;
  return result;
}

__int64 nvidia_64cf80(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  bool v18;
  char v19;
  void (*v21)(__int64, __int64, __int64, _QWORD);
  __int64 v22;
  __int64 v23;
  void (*v24)(__int64, __int64, __int64, _QWORD);
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  int* v29;
  int* v30;
  __int64 v31;
  _OWORD* v32;
  __int128* v33;
  __int64 v34;
  __int128 v35;
  __int128 v36;
  unsigned int v37;
  int v38;
  int v39;
  int v40;
  char* v42;

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  {
    v3 = *(_QWORD*)(a1 + 72);
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v7 = *(_QWORD*)a1 - v3;
    __asm__ volatile("" ::"r"(v7));
  }
  if (*(_QWORD*)a1 != v3) {
    {
      v8 = *(_QWORD*)(a1 + 56);
      __asm__ volatile("" ::"r"(v8));
    }
    *(_QWORD*)(a1 + 72) = *(_QWORD*)a1;
    {
      v9 = *(_QWORD*)(a1 + 40);
      __asm__ volatile("" ::"r"(v9));
    }
    v10 = v7 >> 2;
    v11 = v3 - v8;
    {
      v12 = *(_QWORD*)(a1 + 88);
      __asm__ volatile("" ::"r"(v12));
    }
    {
      v13 = v11 + *(_QWORD*)(a1 + 96);
      __asm__ volatile("" ::"r"(v13));
    }
    if (v12 != 0 &&
        ((v14 = *(unsigned int*)(v9 - 8), v15 = *(_QWORD*)(v9 - 24) + 4 * v14,
          v16 = v14 + v10, v17 = (unsigned int)(v14 + v10) >> 21, v15 == v13)
             ? (v18 = v17 == 0)
             : (v18 = false),
         v18 && ((v19 = *(_BYTE*)(v9 - 4)) & 1) != 0)) {
      *(_DWORD*)(v9 - 8) = v16;
      *(_BYTE*)(v9 - 4) = v19 | 2;
    }
    else {
      if ((unsigned __int64)(v9 + 32) > *(_QWORD*)(a1 + 48) &
          *(_BYTE*)(a1 + 21) != 0) {
        v21 = *(void (**)(__int64, __int64, __int64, _QWORD))(a1 + 120),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v21 == nullptr) {
        LABEL_42:
          v42 = "CommandBuffer has run out of control memory with no "
                "out-of-memory callback.";
          goto LABEL_44;
        }
        v21(a1, 1, 256, *(_QWORD*)(a1 + 128)),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        {
          v9 = *(_QWORD*)(a1 + 40);
          __asm__ volatile("" ::"r"(v9));
        }
        if ((signed __int64)(*(_QWORD*)(a1 + 48) - v9 + 16) < 48) {
        LABEL_43:
          v42 = "CommandBuffer out-of-memory callback didn't add enough "
                "control memory.";
        LABEL_44:
          nn_diag_detail_AbortImpl_plt_859ba0(v42, nullptr, nullptr, 0),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        {
          v12 = *(_QWORD*)(a1 + 88);
          __asm__ volatile("" ::"r"(v12));
        }
      }
      if (v12 != 0) {
        *(_DWORD*)(v12 + 4) =
            (((unsigned __int64)*(unsigned int*)(v12 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v9 + 8) = 0;
        *(_QWORD*)(v9 + 16) = 0;
        *(_QWORD*)(v9 + 24) = 0;
        *(_QWORD*)v9 = 0x100000003LL;
        *(_QWORD*)(a1 + 88) = v9;
        v9 += 8;
      }
      *(_QWORD*)v9 = v13;
      *(_QWORD*)(v9 + 8) = v3;
      *(_DWORD*)(v9 + 16) = v10;
      *(_BYTE*)(v9 + 20) = 3;
      *(_QWORD*)(a1 + 40) = v9 + 24;
    }
  }
  {
    v22 = *(_QWORD*)(a1 + 40);
    __asm__ volatile("" ::"r"(v22));
  }
  v23 = a3 >> 3;
  if (v22 + 8 * (unsigned __int64)(unsigned int)v23 > *(_QWORD*)(a1 + 48) &&
      *(_BYTE*)(a1 + 21) != 0) {
    v24 = *(void (**)(__int64, __int64, __int64, _QWORD))(a1 + 120),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v24 == nullptr) {
      goto LABEL_42;
    }
    v25 = 8 * v23 + 16;
    if ((unsigned __int64)v25 <= 0x100) {
      v26 = 256;
    }
    else {
      v26 = 8 * v23 + 16;
    }
    v24(a1, 1, v26, *(_QWORD*)(a1 + 128)),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    {
      v22 = *(_QWORD*)(a1 + 40);
      __asm__ volatile("" ::"r"(v22));
    }
    if (v25 > (signed __int64)(*(_QWORD*)(a1 + 48) - v22 + 16)) {
      goto LABEL_43;
    }
  }
  if (a3 < 4) {
    goto LABEL_40;
  }
  v27 = a3 >> 2;
  v28 = (a3 >> 2) - 1;
  if ((unsigned int)v28 < 7) {
    v29 = (int*)a2;
    v30 = (int*)v22;
  }
  else {
    v29 = (int*)a2;
    v30 = (int*)v22;
    if ((unsigned __int64)(v22 - a2) >= 0x20) {
      v31 = v28 + 1;
      v32 = (_OWORD*)(v22 + 16);
      v33 = (__int128*)(a2 + 16);
      v29 = (int*)(a2 + 4 * (v31 & 0x1FFFFFFF8LL));
      v30 = (int*)(v22 + 4 * (v31 & 0x1FFFFFFF8LL));
      v27 -= v31 & 0xFFFFFFF8;
      v34 = v31 & 0x1FFFFFFF8LL;
      do {
        v35 = *(v33 - 1);
        v36 = *v33;
        v33 += 2;
        v34 -= 8;
        *(v32 - 1) = v35;
        *v32 = v36;
        v32 += 2;
      } while (v34 != 0);
      if (v31 == (v31 & 0x1FFFFFFF8LL)) {
        goto LABEL_40;
      }
    }
  }
  v37 = v27 - 1;
  v38 = v27 & 7;
  if ((v27 & 7) != 0) {
    v27 &= 0xFFFFFFF8;
    do {
      {
        v39 = *v29++;
        __asm__ volatile("" ::"r"(v39));
      }
      --v38;
      *v30++ = v39;
    } while (v38 != 0);
  }
  if (v37 >= 7) {
    do {
      v27 -= 8;
      *v30 = *v29;
      v30[1] = v29[1];
      v30[2] = v29[2];
      v30[3] = v29[3];
      v30[4] = v29[4];
      v30[5] = v29[5];
      v30[6] = v29[6];
      {
        v40 = v29[7];
        __asm__ volatile("" ::"r"(v40));
      }
      v29 += 8;
      v30[7] = v40;
      v30 += 8;
    } while (v27 != 0);
  }
LABEL_40:
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 40) = v22 + a3;
  *(_BYTE*)(a1 + 18) = 1;
  return a2 + a3;
}

#pragma GCC visibility pop
