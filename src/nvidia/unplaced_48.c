#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CudaDriverRoutine_103410(__int64, unsigned int, __int64);
_QWORD* cuda_driver_helpers_b83c0(_QWORD* result);
__int64 CudaDriverRoutine_101f60(_QWORD*);
__int64 CudaDriverRoutine_101ff0(__int64);
__int64 CudaDriverRoutine_107f60(_QWORD*);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_114270(unsigned int);
__int64 CudaDriverRoutine_1182d0(__int64, __int64);
__int64 CudaDriverRoutine_125470(__int64 result);
__int64 CudaDriverRoutine_125740(__int64);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64);
__int64 CudaDriverRoutine_1ba7d0(__int64, __int64);
__int64 CudaDriverRoutine_1dc000(__int64);
__int64 CudaDriverRoutine_1dc020(__int64);
__int64 CudaDriverRoutine_206120(__int64, __int64);
__int64 CudaDriverRoutine_4d720(unsigned __int64*, unsigned __int64);
__int64 CudaDriverRoutine_56260(_QWORD);
__int64 CudaDriverRoutine_56280(__int64 result, __int64);
__int64 CudaDriverRoutine_56340(__int64, __int64*, unsigned int);
__int64 CudaDriverRoutine_6cac0(unsigned int, unsigned int, unsigned int,
                                unsigned int, unsigned int);
__int64 CudaDriverRoutine_8b180(__int64 result, int, int, unsigned __int64);
__int64 CudaDriverRoutine_8b1c0(__int64, int, int, __int64*, unsigned __int64);
__int64 CudaDriverRoutine_8b420(__int64 result, int, __int64, int);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_fdbf0(__int64, __int64);
__int64 CudaDriverRoutine_ff020(__int64*, _QWORD*);
__int64 CudaDriverStub_102360(_QWORD);
__int64 CudaDriverStub_107f90(char*);
__int64 CudaDriverStub_107f90_alt1(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_108070(char*);
__int64 CudaDriverStub_108070_alt1(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_4f840(_QWORD);
__int64 CudaDriverStub_8b270(_QWORD);
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_108520(__int64);
__int64 cuda_driver_112680(__int64, __int64*, unsigned int, __int64*, _QWORD*,
                           char, unsigned int);
__int64 cuda_driver_117ee0(__int64);
__int64 cuda_driver_1a9930(__int64);
__int64 cuda_driver_1c02d0(__int64);
__int64 cuda_driver_1f2120(__int64);
__int64 cuda_driver_22cbd0(__int64);
__int64 cuda_driver_23cce0(__int64);
__int64 cuda_driver_514c0(_QWORD*, __int64, __int64);
__int64 cuda_driver_9b560(__int64, int, char);
__int64 cuda_driver_checks_102f50(unsigned int, unsigned int);
__int64 cuda_driver_checks_103390(__int64, char);
__int64 cuda_driver_misc_helpers_4be0(__int64 result, int);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nvidia_16d30(__int64);
__int64 nvidia_1d9f90(_QWORD);
unsigned __int8 CudaDriverRoutine_1dc9c0(__int64);
unsigned __int8 CudaDriverRoutine_99720(__int64);
unsigned __int8 CudaDriverRoutine_9aa40(__int64);
unsigned __int8 CudaDriverRoutine_9ad90(__int64);
unsigned int cuda_driver_12ea30(int*);
extern _BYTE CudaDriverData_4bd8[8];
extern _BYTE CudaDriverData_4c38[8];
extern _QWORD CudaDriverData_1131c08[4];
extern _UNKNOWN* CudaDriverData_1422118;
extern __int64 CudaDriverData_1423000;
extern __int64 CudaDriverData_1423360;
extern __int64 CudaDriverData_143bd88;
unsigned __int64 CudaDriverRoutine_1bb040(unsigned __int64 result);
void CudaDriverRoutine_4338();
void CudaDriverRoutine_433c();
void CudaDriverRoutine_43e0();
void CudaDriverRoutine_4768();
void CudaDriverRoutine_4780();
void CudaDriverRoutine_47b0();
void CudaDriverRoutine_4e48();
void CudaDriverRoutine_4e50();
void CudaDriverRoutine_7418();
void CudaDriverRoutine_74d8();
void CudaDriverRoutine_74dc();
void XXH32(int32x4_t*, unsigned __int64, unsigned int);
__int64 nvidia_51dd0(_QWORD* a1, __int64 a2);
__int64 nvidia_73870(unsigned int a1, unsigned int a2, unsigned int a3,
                     __int64 a4, __int64 a5);
__int64 nvidia_73940(unsigned int a1, unsigned int a2, unsigned int a3,
                     unsigned int a4, __int64 a5, __int64 a6);
__int64 nvidia_bc6c0(__int64 a1, int a2, char a3);
__int64 nvidia_f0ba0(__int64 a1);
void nvidia_f29c0(unsigned __int64 a1);
bool nvidia_fa910(__int64 a1, _DWORD* a2);
__int64 nvidia_1181a0(__int64 a1);
__int64 nvidia_128540(__int64 a1, __int64 a2, __int64 a3);
bool nvidia_1288d0(__int64 a1, unsigned __int64* a2);
__int64 nvidia_12f6b0(__int64 a1, __int64 a2);
bool nvidia_19ab80(_DWORD* a1);
__int64 nvidia_202420(__int64* a1, _BYTE* a2);
__int64 nvidia_25c7e0(__int64 a1, __int64 a2, unsigned __int64 a3);

__int64 nvidia_51dd0(_QWORD* a1, __int64 a2)
{
  int v3;
  unsigned int v4;
  __int64* v5;
  __int64 v6;
  __int64 result;

  v3 = *((_DWORD*)a1 + 4);
  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*a1 + 16448LL) + 16LL) + 152LL) != 0;
  if (v3 != 0) {
    v5 = (__int64*)a1[1];
    if (v5 != nullptr) {
      v6 = a2;
      CudaDriverRoutine_56280(a1[1], (__int64)&v5[30 * (unsigned int)(v3 - 1)]);
      result = CudaDriverRoutine_56340((__int64)a1, v5, v4);
      if ((_DWORD)result != 0) {
        return result;
      }
      CudaDriverRoutine_56260(a1);
      a2 = v6;
    }
  }
  return cuda_driver_514c0(a1, a2, 0);
}

__int64 nvidia_73870(unsigned int a1, unsigned int a2, unsigned int a3,
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
        23375848LL))();
  }
  return result;
}

__int64 nvidia_73940(unsigned int a1, unsigned int a2, unsigned int a3,
                     unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 result;

  if (a6 == 0) {
    return 4;
  }
  result = CudaDriverRoutine_6cac0(0x7FFu, a1, a2, a3, a4);
  if ((_DWORD)result == 0) {
    return (*(__int64 (**)(void))(
        *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8LL * a1) +
        23375864LL))();
  }
  return result;
}

__int64 nvidia_bc6c0(__int64 a1, int a2, char a3)
{
  __int64 v6;
  unsigned int v7;

  {
    v6 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL);
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = *(_DWORD*)(*(_QWORD*)(v6 + 64) + 4376LL);
    __asm__ volatile("" ::"r"(v7));
  }
  if (!CudaDriverRoutine_99720(v6) |
      *((_BYTE*)&CudaDriverRoutine_74dc + (_QWORD)CudaDriverData_1422118 + 2) ==
          0) {
    if (*(_QWORD*)(a1 + 1056) == 0) {
      return cuda_driver_9b560(*(_QWORD*)(v6 + 64), a2, a3);
    }
  }
  else {
    return *(unsigned int*)((char*)&CudaDriverRoutine_74d8 +
                            (_QWORD)CudaDriverData_1422118);
  }
  return v7;
}

__int64 nvidia_f0ba0(__int64 a1)
{
  void* v2;
  int v3;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  _DWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v23;

  if (a1 != 0) {
    v23 = a1;
    v2 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                       (_QWORD)CudaDriverData_1422118);
    {
      v3 = *(_DWORD*)(a1 + 112);
      __asm__ volatile("" ::"r"(v3));
    }
    if (v3 == -1) {
      v23 = 0;
    }
    else {
      CudaDriverRoutine_8b1c0((__int64)&CudaDriverRoutine_47b0 + (_QWORD)v2, 0,
                              v3, &v23, 0);
    }
    if (cuda_driver_12ea30(
            (int*)((char*)&CudaDriverRoutine_4e48 + (_QWORD)v2)) &&
        a1 == v23) {
      atomic_fetch_or(
          (atomic_ullong* volatile)((char*)v2 +
                                    8 * **(unsigned int**)(a1 + 176) + 18392),
          0);
      v5 = CudaDriverStub_8b270((char*)&CudaDriverRoutine_4768 + (_QWORD)v2);
      if (v5 != 0) {
        v6 = 0;
        v7 = 0;
        v8 = 616LL * v5;
        do {
          while (1) {
            cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v2] + v6);
            if (CudaDriverRoutine_114270(v7) != 0 && *(_BYTE*)(a1 + 124) == 0) {
              v9 = cuda_driver_checks_102f50(v7, *(_DWORD*)(a1 + 112));
              if (v9 != 0) {
                break;
              }
            }
            CudaDriverRoutine_1085b0(
                *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v2] + v6);
            ++v7;
            v6 += 616;
            if (v8 == v6) {
              goto LABEL_17;
            }
          }
          v10 = v9;
          CudaDriverRoutine_8b180((__int64)&CudaDriverRoutine_4768 + (_QWORD)v2,
                                  v7, *(_DWORD*)(a1 + 112), 0);
          CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v2] +
                                   v6);
          CudaDriverStub_102360(v10);
          CudaDriverRoutine_101ff0(v10);
          ++v7;
          v6 += 616;
        } while (v8 != v6);
      }
    }
  LABEL_17:
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
    if (*(_BYTE*)(a1 + 116) == 0 && *(_BYTE*)(a1 + 124) == 0) {
      CudaDriverStub_107f90((char*)cuda_driver_misc_helpers_4be0 + (_QWORD)v2);
      CudaDriverRoutine_4d720(
          *(unsigned __int64**)&CudaDriverData_4bd8[(_QWORD)v2],
          *(unsigned int*)(a1 + 112));
      CudaDriverStub_108070((char*)cuda_driver_misc_helpers_4be0 + (_QWORD)v2);
    }
    if (*(_QWORD*)a1 != 0) {
      CudaDriverRoutine_101f60(*(_QWORD**)a1);
    }
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 80));
    if (*(_DWORD*)(a1 + 244) != 0) {
      v11 = 0;
      v12 = 0;
      do {
        {
          v13 = *(_QWORD*)(a1 + 224) & ~(1LL << **(_DWORD**)(a1 + 176));
          __asm__ volatile("" ::"r"(v13));
        }
        if (v13 != 0) {
          CudaDriverRoutine_103410(a1 + 176, v12, v13);
        }
        cuda_driver_helpers_b83c0((_QWORD*)(*(_QWORD*)(a1 + 256) + v11));
        ++v12;
        v11 += 8;
      } while (v12 < *(unsigned int*)(a1 + 244));
    }
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 256));
    {
      v14 = *(_QWORD*)(a1 + 184);
      __asm__ volatile("" ::"r"(v14));
    }
    if (v14 != 0) {
      (*(void (**)(__int64))(v14 + 2400))(a1);
    }
    {
      v15 = *(_QWORD*)(*(_QWORD*)(a1 + 176) + 16928LL);
      __asm__ volatile("" ::"r"(v15));
    }
    CudaDriverStub_107f90(v15 + 128);
    if (*(_QWORD*)(v15 + 2056) != 0) {
      {
        v16 = *(_QWORD*)(a1 + 160);
        __asm__ volatile("" ::"r"(v16));
      }
      {
        v17 = *(_QWORD*)(a1 + 168);
        __asm__ volatile("" ::"r"(v17));
      }
      if (v17 != 0) {
        *(_QWORD*)(v17 + 160) = v16;
      }
      if (v16 != 0) {
        *(_QWORD*)(v16 + 168) = *(_QWORD*)(a1 + 168);
      }
      if (*(_QWORD*)(v15 + 2056) == a1) {
        *(_QWORD*)(v15 + 2056) = *(_QWORD*)(a1 + 168);
      }
      *(_QWORD*)(a1 + 160) = 0;
      *(_QWORD*)(a1 + 168) = 0;
      CudaDriverRoutine_125740(*(_QWORD*)(a1 + 200));
    }
    CudaDriverStub_108070(v15 + 128);
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v2) != 0) {
      v18 = 0;
      do {
        if ((unsigned __int8)cuda_driver_checks_103390(a1 + 176, v18) != 0 &&
            *(_DWORD*)(a1 + 192) == 1) {
          {
            v19 = *(_DWORD**)(a1 + 176);
            __asm__ volatile("" ::"r"(v19));
          }
          if (v18 == *(_DWORD*)v19) {
            CudaDriverRoutine_125470((__int64)v19);
          }
          else {
            {
              v20 = *(_QWORD**)(a1 + 184);
              __asm__ volatile("" ::"r"(v20));
            }
            if (v20 != nullptr) {
              CudaDriverRoutine_ff020(
                  *(__int64**)(*((_QWORD*)v2 + v18 + 35) + 16928LL), v20);
            }
          }
        }
        ++v18;
      } while (v18 <
               *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v2));
    }
    if (*(_BYTE*)(a1 + 124) != 0) {
      CudaDriverRoutine_107f60((_QWORD*)(a1 + 96));
    }
    {
      v21 = *(_QWORD*)(a1 + 200);
      __asm__ volatile("" ::"r"(v21));
    }
    if (v21 != 0) {
      CudaDriverRoutine_fdbf0(v21, *(_QWORD*)(a1 + 208));
    }
    *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
    *(_OWORD*)(a1 + 16) = (__typeof__(*(_OWORD*)(a1 + 16))){0};
    *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
    *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
    *(_OWORD*)(a1 + 64) = (__typeof__(*(_OWORD*)(a1 + 64))){0};
    *(_OWORD*)(a1 + 80) = (__typeof__(*(_OWORD*)(a1 + 80))){0};
    *(_OWORD*)(a1 + 96) = (__typeof__(*(_OWORD*)(a1 + 96))){0};
    *(_OWORD*)(a1 + 112) = (__typeof__(*(_OWORD*)(a1 + 112))){0};
    *(_OWORD*)(a1 + 128) = (__typeof__(*(_OWORD*)(a1 + 128))){0};
    *(_OWORD*)(a1 + 144) = (__typeof__(*(_OWORD*)(a1 + 144))){0};
    *(_OWORD*)(a1 + 160) = (__typeof__(*(_OWORD*)(a1 + 160))){0};
    *(_OWORD*)(a1 + 176) = (__typeof__(*(_OWORD*)(a1 + 176))){0};
    *(_OWORD*)(a1 + 192) = (__typeof__(*(_OWORD*)(a1 + 192))){0};
    *(_OWORD*)(a1 + 208) = (__typeof__(*(_OWORD*)(a1 + 208))){0};
    *(_OWORD*)(a1 + 224) = (__typeof__(*(_OWORD*)(a1 + 224))){0};
    *(_OWORD*)(a1 + 240) = (__typeof__(*(_OWORD*)(a1 + 240))){0};
    *(_OWORD*)(a1 + 256) = (__typeof__(*(_OWORD*)(a1 + 256))){0};
    *(_OWORD*)(a1 + 272) = (__typeof__(*(_OWORD*)(a1 + 272))){0};
  }
  return CudaDriverRoutine_12e340(a1);
}

void nvidia_f29c0(unsigned __int64 a1)
{
  char* v1;
  __int64 v2;
  __int64 v3;

  v1 = (char*)CudaDriverData_1422118 + 8 * **(unsigned int**)(a1 + 176);
  do {
    v2 = *((_QWORD*)v1 + 2299);
    v3 = v2;
    atomic_compare_exchange_strong((atomic_ullong* volatile)(v1 + 18392),
                                   (unsigned __int64*)&v3, a1);
  } while (v3 != v2);
}

bool nvidia_fa910(__int64 a1, _DWORD* a2)
{
  int v2;
  _DWORD* v4;
  char v5;
  __int64 v6;
  _DWORD* v7;
  bool v8;
  int v9;
  char v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;

  v2 = *(_DWORD*)a2;
  if (a2[42] == 2) {
    if (v2 == 1) {
      CudaDriverStub_1dbab0(*((_QWORD*)a2 + 4));
      return true;
    }
    return true;
  }
  if (v2 == 3) {
    if (*((_BYTE*)a2 + 88) != 0) {
      return true;
    }
    if ((*((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
         2) == 0) {
      return true;
    }
    if (*(_BYTE*)(*(_QWORD*)(a1 + 64) + 17096LL) == 0) {
      return true;
    }
    v4 = a2;
    v5 = nvidia_1d9f90(*(_QWORD*)(a1 + 80));
    v2 = *(_DWORD*)v4;
    a2 = v4;
    if (v5 == 0 && v2 == 3) {
      return true;
    }
  }
  if (v2 != 0) {
    if (v2 != 1) {
      if (v2 != 2 || *((_BYTE*)a2 + 152) == 0) {
        return false;
      }
      goto LABEL_19;
    }
    v6 = *((_QWORD*)a2 + 4);
    if (v6 == 0) {
      return false;
    }
  }
  else {
    v6 = *((_QWORD*)a2 + 3);
    if (v6 == 0) {
      return false;
    }
  }
  v7 = a2;
  v8 = CudaDriverRoutine_1dc9c0(v6);
  a2 = v7;
  if (!v8) {
    return false;
  }
LABEL_19:
  v9 = a2[50];
  if (v9 == 0) {
    v11 = 6;
  LABEL_25:
    v12 = *(_QWORD*)&a2[v11 + 50];
    if (v12 != 0) {
      v13 = a2;
      v10 = ((__int64 (*)(__int64))CudaDriverRoutine_1dc9c0)(v12);
      a2 = v13;
      return v10 != 0 && a2[41] == -1;
    }
    return false;
  }
  if (v9 == 1) {
    v11 = 8;
    goto LABEL_25;
  }
  if (v9 != 2) {
    return false;
  }
  v10 = *((_BYTE*)a2 + 352);
  return v10 != 0 && a2[41] == -1;
}

__int64 nvidia_1181a0(__int64 a1)
{
  void* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;

  if ((*(_BYTE*)(a1 + 56) & 1) == 0) {
    if ((*(_BYTE*)(a1 + 56) & 4) != 0) {
      cuda_driver_12ea30((int*)(a1 + 576));
      if (cuda_driver_12ea30(
              (int*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 104LL) + 576LL))) {
        v2 = CudaDriverData_1422118;
        cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                           (_QWORD)CudaDriverData_1422118);
        CudaDriverRoutine_8b420(
            (__int64)&CudaDriverRoutine_4780 + (_QWORD)v2, *(_DWORD*)(a1 + 348),
            (__int64)&CudaDriverRoutine_4780 + (_QWORD)v2,
            *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 104LL) + 348LL));
        CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
      }
    }
    result = CudaDriverRoutine_1182d0(*(_QWORD*)(a1 + 584), a1);
    if ((_DWORD)result != 0) {
      return result;
    }
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 16);
  v5 = *(_QWORD*)(v4 + 88);
  CudaDriverStub_107f90_alt1(v5 + 72, 0, 0);
  CudaDriverRoutine_1bb040(*(_QWORD*)(v5 + 32));
  v6 = CudaDriverRoutine_1ba7d0(*(_QWORD*)(a1 + 584), *(_QWORD*)(v5 + 32));
  if (v6 != 0) {
    v7 = v6;
    CudaDriverStub_108070_alt1(v5 + 72);
    return v7;
  }
  *(_BYTE*)(v5 + 40) = 0;
  CudaDriverStub_108070_alt1(v5 + 72);
  result = CudaDriverRoutine_206120(*(_QWORD*)(v4 + 88), a1);
  if ((_DWORD)result == 0) {
    result = cuda_driver_117ee0(a1);
    if ((_DWORD)result == 0) {
      return 0;
    }
  }
  return result;
}

__int64 nvidia_128540(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  void* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  _QWORD v36[2];

  CudaDriverRoutine_98340(a1);
  if (a3 == 0) {
    return 0;
  }
  v6 = 0;
  v7 = CudaDriverData_1422118;
  while (1) {
    v8 = *(_QWORD*)(a2 + 8 * v6);
    CudaDriverRoutine_98340(a1);
    v9 = CudaDriverRoutine_1a2980(
        *(int**)(*(_QWORD*)CudaDriverData_1423360 + 40LL), v8);
    if (v8 == 2 || v9 != 0) {
      if (v8 == 3) {
        break;
      }
      if (v8 == 2) {
        v10 = *(_QWORD*)(CudaDriverData_143bd88 + 24);
        v11 = *(_DWORD*)((char*)((_UNKNOWN*)0x104LL) + (_QWORD)v7);
        if (v10 != 0 & v11 != 0) {
          goto LABEL_23;
        }
      }
      else {
        v10 = *(_QWORD*)(v9 + 928);
        v11 = *(_DWORD*)((char*)((_UNKNOWN*)0x104LL) + (_QWORD)v7);
        if (v10 != 0 & v11 != 0) {
          goto LABEL_23;
        }
      }
    }
  LABEL_3:
    if (++v6 == a3) {
      return 0;
    }
  }
  v10 = *(_QWORD*)(CudaDriverData_143bd88 + 32);
  v11 = *(_DWORD*)((char*)((_UNKNOWN*)0x104LL) + (_QWORD)v7);
  if (v10 == 0 | v11 == 0) {
    goto LABEL_3;
  }
LABEL_23:
  if (v11 == 0) {
    goto LABEL_30;
  }
LABEL_24:
  v15 = CudaDriverRoutine_1dc020(v10);
  if (!CudaDriverRoutine_9aa40(v15)) {
    if (*(_BYTE*)(v10 + 440) == 0) {
      goto LABEL_30;
    }
    v19 = CudaDriverStub_1dbab0(v10);
    CudaDriverStub_1dbf90(v10);
    if ((unsigned int)CudaDriverStub_4f840(v19) != 0) {
      v20 = 304;
      if (v6 == 0) {
        return v20;
      }
    LABEL_38:
      v22 = 0;
      while (2) {
        v23 = *(_QWORD*)(a2 + 8 * v22);
        v24 = (__int64*)CudaDriverData_1423360;
        v25 = CudaDriverRoutine_1a2980(
            *(int**)(*(_QWORD*)CudaDriverData_1423360 + 40LL), v23);
        CudaDriverRoutine_98340(a1);
        v26 = *v24;
        if (v23 == 2) {
          v27 = *(_QWORD*)(v26 + 24);
          v28 = *(_DWORD*)((char*)((_UNKNOWN*)0x104LL) + (_QWORD)v7);
          if (v27 != 0 & v28 != 0) {
            goto LABEL_58;
          }
        }
        else {
          if (CudaDriverRoutine_1a2980(*(int**)(v26 + 40), v23) == 0) {
            goto LABEL_39;
          }
          if (v23 == 3) {
            v27 = *(_QWORD*)(CudaDriverData_143bd88 + 32);
            v28 = *(_DWORD*)((char*)((_UNKNOWN*)0x104LL) + (_QWORD)v7);
            if (v27 == 0 | v28 == 0) {
              goto LABEL_39;
            }
          }
          else {
            v27 = *(_QWORD*)(v25 + 928);
            v28 = *(_DWORD*)((char*)((_UNKNOWN*)0x104LL) + (_QWORD)v7);
            if (v27 == 0 | v28 == 0) {
              goto LABEL_39;
            }
          }
        LABEL_58:
          if (v28 == 0) {
            goto LABEL_65;
          }
        LABEL_59:
          v32 = CudaDriverRoutine_1dc020(v27);
          if (CudaDriverRoutine_9aa40(v32)) {
            v33 = *(unsigned __int8*)(v27 + 440);
            v36[0] = v27;
            v36[1] = 0;
            *(_DWORD*)((char*)&v36[1] + 2) = v33 == 0;
            LOBYTE(v36[1]) = *(_BYTE*)(v27 + 464) != 0;
            BYTE5(v36[1]) = *(_QWORD*)(v27 + 408) == 3;
            v34 = CudaDriverRoutine_1dc000(v27);
            if ((*(unsigned int (**)(__int64))(v34 + 2240))((__int64)v36) !=
                0) {
              goto LABEL_39;
            }
          }
          else {
            if (*(_BYTE*)(v27 + 440) == 1) {
              goto LABEL_65;
            }
            v35 = CudaDriverStub_1dbab0(v27);
            CudaDriverStub_1dbf90(v27);
            if ((unsigned int)CudaDriverStub_4f840(v35) != 0) {
              goto LABEL_39;
            }
          }
          *(_BYTE*)(v27 + 440) = 1;
        LABEL_65:
          while (1) {
            v27 = *(_QWORD*)(v27 + 456);
            if (v27 == 0) {
              break;
            }
            if (*(_DWORD*)((char*)((_UNKNOWN*)0x104LL) + (_QWORD)v7) != 0) {
              goto LABEL_59;
            }
          }
        }
      LABEL_39:
        if (++v22 == v6) {
          return v20;
        }
        continue;
      }
    }
    goto LABEL_29;
  }
  v16 = *(unsigned __int8*)(v10 + 440);
  v36[0] = v10;
  v36[1] = 256;
  *(_DWORD*)((char*)&v36[1] + 2) = v16 == 0;
  BYTE5(v36[1]) = *(_QWORD*)(v10 + 408) == 3;
  v17 = CudaDriverRoutine_1dc000(v10);
  v18 = (*(__int64 (**)(__int64))(v17 + 2240))((__int64)v36);
  if (v18 == 0) {
  LABEL_29:
    *(_BYTE*)(v10 + 440) = 0;
  LABEL_30:
    while (1) {
      v10 = *(_QWORD*)(v10 + 456);
      if (v10 == 0) {
        goto LABEL_3;
      }
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x104LL) + (_QWORD)v7) != 0) {
        goto LABEL_24;
      }
    }
  }
  v20 = v18;
  if (v6 != 0) {
    goto LABEL_38;
  }
  return v20;
}

bool nvidia_1288d0(__int64 a1, unsigned __int64* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  _BOOL8 result;

  v3 = *a2 & 0xFFFFFFFFFFFFFFF8LL | 1;
  *a2 = v3;
  v4 = v3 & 0xFFFFFFFFFFFFFFC1LL;
  v5 = 16;
  if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) &
       1) == 0) {
    v5 = 24;
  }
  *a2 = v5 | v4;
  result = CudaDriverRoutine_9aa40(a1);
  if (result) {
    *a2 = *a2 & 0xFFFF7FFFFFFFFE07LL | 0x800000000090LL;
  }
  return result;
}

__int64 nvidia_12f6b0(__int64 a1, __int64 a2)
{
  int v2;
  int v3;
  bool v5;
  bool v6;

  v2 = *(_DWORD*)(a1 + 21864);
  if (v2 != 2 && (v3 = *(_DWORD*)(a2 + 21864)) != 2 &&
      (v2 == v3 || (v2 == 0 ? (v5 = v3 == 1) : (v5 = false),
                    v5 || (v2 == 1 ? (v6 = v3 == 0) : (v6 = false), v6)))) {
    return (*(__int64 (**)(__int64, __int64))(a1 + 21088))(a1, a2);
  }
  else {
    return 0;
  }
}

bool nvidia_19ab80(_DWORD* a1)
{
  int v2;
  _BOOL8 result;
  int v4;
  void* v5;
  unsigned int v6;
  unsigned int v7;

  v2 = a1[786];
  result = false;
  if (v2 <= 5) {
    switch (v2) {
    case 3:
      v4 = cuda_driver_1c02d0((__int64)a1);
      v5 = CudaDriverData_1422118;
      if ((*((_BYTE*)&CudaDriverRoutine_4338 + (_QWORD)CudaDriverData_1422118) &
           3) == 0) {
        return v4 == 0;
      }
      break;
    case 4:
      v4 = cuda_driver_1f2120((__int64)a1);
      v5 = CudaDriverData_1422118;
      if ((*((_BYTE*)&CudaDriverRoutine_4338 + (_QWORD)CudaDriverData_1422118) &
           3) == 0) {
        return v4 == 0;
      }
      break;
    case 5:
      v4 = cuda_driver_23cce0((__int64)a1);
      v5 = CudaDriverData_1422118;
      if ((*((_BYTE*)&CudaDriverRoutine_4338 + (_QWORD)CudaDriverData_1422118) &
           3) == 0) {
        return v4 == 0;
      }
      break;
    default:
      return result;
    }
    goto LABEL_20;
  }
  if (v2 <= 7) {
    if (v2 == 6) {
      v4 = cuda_driver_22cbd0((__int64)a1);
      v5 = CudaDriverData_1422118;
      if ((*((_BYTE*)&CudaDriverRoutine_4338 + (_QWORD)CudaDriverData_1422118) &
           3) == 0) {
        return v4 == 0;
      }
    }
    else {
      v4 = nvidia_16d30((__int64)a1);
      v5 = CudaDriverData_1422118;
      if ((*((_BYTE*)&CudaDriverRoutine_4338 + (_QWORD)CudaDriverData_1422118) &
           3) == 0) {
        return v4 == 0;
      }
    }
  LABEL_20:
    v6 = a1[1059];
    if (v6 >= 8) {
      v6 = 8;
    }
    a1[1059] = v6;
    v7 = *(_DWORD*)((char*)&CudaDriverRoutine_433c + (_QWORD)v5);
    if (v7 >= a1[971]) {
      v7 = a1[971];
    }
    a1[971] = v7;
    return v4 == 0;
  }
  if (v2 == 8) {
    v4 = cuda_driver_1a9930((__int64)a1);
    v5 = CudaDriverData_1422118;
    if ((*((_BYTE*)&CudaDriverRoutine_4338 + (_QWORD)CudaDriverData_1422118) &
         3) != 0) {
      goto LABEL_20;
    }
  }
  else {
    if (v2 != 9) {
      return result;
    }
    v4 = ((__int64 (*)(_DWORD*))CudaDriverRoutine_43e0)(a1);
    v5 = CudaDriverData_1422118;
    if ((*((_BYTE*)&CudaDriverRoutine_4338 + (_QWORD)CudaDriverData_1422118) &
         3) != 0) {
      goto LABEL_20;
    }
  }
  return v4 == 0;
}

__int64 nvidia_202420(__int64* a1, _BYTE* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v8 = 0;
  v7 = 0;
  result = cuda_driver_112680(0, a1, 2u, &v8, &v7, 1, 0);
  if ((_DWORD)result == 0) {
    if (*(_BYTE*)(v7 + 16456) != 0 &&
        CudaDriverRoutine_9ad90(*(_QWORD*)((char*)((char*)0x40LL) + v7))) {
      v4 = CudaDriverRoutine_98340(v7);
      cuda_driver_108520(v4 + 24);
      v5 = v7;
      *a2 = *((_BYTE*)((_UNKNOWN*)0x50LL) + v8);
      v6 = CudaDriverRoutine_98340(v5);
      CudaDriverRoutine_1085d0(v6 + 24);
      return 0;
    }
    else {
      return 801;
    }
  }
  return result;
}

__int64 nvidia_25c7e0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3;
  unsigned int v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v11;
  unsigned __int8 v13;
  __int64 v14;

  if (a3 >= 7) {
    *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
    *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
    if ((*(_DWORD*)a2 & 0xFFFFFFF0) == 0x184D2A50) {
      *(_DWORD*)(a1 + 44) = 1;
      if (a2 == a1 + 268) {
        *(_QWORD*)(a1 + 104) = a3;
        *(_QWORD*)(a1 + 112) = 8;
        v3 = 13;
      }
      else {
        v3 = 12;
        a3 = 4;
      }
    LABEL_15:
      *(_DWORD*)(a1 + 68) = v3;
      return a3;
    }
    if (*(_DWORD*)a2 != 407708164) {
      return -13;
    }
    v4 = *(unsigned __int8*)(a2 + 4);
    if ((v4 & 2) == 0) {
      if ((v4 & 0xC0) != 0x40) {
        return -6;
      }
      v5 = (v4 & 8 | (4 * (v4 & 1))) + 7;
      if (a3 < v5) {
        if (a2 != a1 + 268) {
          v6 = a1;
          v7 = a3;
          memcpy_plt(a1 + 268, a2, a3);
          a3 = v7;
          a1 = v6;
        }
        *(_QWORD*)(a1 + 104) = a3;
        *(_QWORD*)(a1 + 112) = v5;
        v3 = 1;
        goto LABEL_15;
      }
      v8 = *(char*)(a2 + 5);
      if ((v8 & 0x80000000) == 0) {
        v9 = (v8 >> 4) & 7;
        if (v9 < 4) {
          return -2;
        }
        if ((v8 & 0xF) == 0) {
          v11 = a1;
          XXH32((int32x4_t*)(a2 + 4), v5 - 5, 0);
          if (*(unsigned __int8*)(a2 + v5 - 1) != v13) {
            return -17;
          }
          *(_DWORD*)(v11 + 32) = v9;
          a1 = v11;
          *(_DWORD*)(v11 + 60) = (v4 & 0x10) != 0;
          *(_QWORD*)(v11 + 36) =
              LANES64_OF(vshl_u32(vdup_n_s32(v4),
                                  COERCE_AS(uint32x2_t, 0xFFFFFFFEFFFFFFFBLL)))
                  .n64_u64[0] &
              0xFFFFFF01FFFFFF01LL;
          *(_QWORD*)(v11 + 80) = CudaDriverData_1131c08[v9 - 4];
          if ((v4 & 8) != 0) {
            v14 = *(_QWORD*)(a2 + 6);
            *(_QWORD*)(v11 + 48) = v14;
            *(_QWORD*)(v11 + 72) = v14;
          }
          if ((v4 & 1) != 0) {
            *(_DWORD*)(v11 + 56) = *(_DWORD*)(a2 + v5 - 5);
          }
          v3 = 2;
          a3 = (v4 & 8 | (4 * (v4 & 1))) + 7;
          goto LABEL_15;
        }
      }
    }
    return -8;
  }
  return -12;
}

#pragma GCC visibility pop
