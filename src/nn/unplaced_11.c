#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvRmSyncClose_plt(_QWORD);

__int64 NvRmSyncWait_plt(_QWORD, _QWORD);

__int64 SdkRoutine_65cc80(_QWORD);

__int64 SdkRoutine_65cce0(_QWORD);

__int64 SdkRoutine_65ccf0();

__int64 SdkRoutine_65cd00();

__int64 SdkRoutine_65cd10(void);

__int64 SdkRoutine_65cd20();

__int64 SdkRoutine_65cd50();

__int64 SdkRoutine_65cd80(_QWORD);

__int64 SdkRoutine_65cd90(_QWORD, _QWORD);

__int64 SdkRoutine_65cda0();

__int64 SdkRoutine_65cdf0();

__int64 SdkRoutine_664dc0(__int64);

__int64 SdkRoutine_66eca0(__int64);

__int64 nn_65cc90();

__int64 nn_65cd30();

__int64 nn_65cdb0();

__int64 nn_66eba0(__int64 result, unsigned int);

__int64 nn_audio_CreateAudioRendererManager_plt(_QWORD);

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);

__int64 nn_os_LockMutex_plt(_QWORD);

__int64 nn_os_UnlockMutex_plt(_QWORD);

extern _UNKNOWN* SdkData_e89bd8;

extern __int64 (*SdkData_e89d58)();

extern __int64 (*SdkData_e89d68[3])();

extern __int64 (*SdkData_e89d70[2])();

extern __int64 (*SdkData_e89d78)();

extern __int64 (*SdkData_e89d88[6])();

extern __int64 (*SdkData_e89d90[5])();

extern __int64 (*SdkData_e89d98[4])();

extern __int64 (*SdkData_e89da0[3])();

extern __int64 (*SdkData_e89da8[2])();

extern __int64 (*SdkData_e89db0)();

extern __int64 (*nn_65c5e0_ptr)(int, int, int, int, int, int, int, int, char);

extern __int64 (*nn_65ca10_ptr)(int, int, int, int, int, int, int, int, char);

__int64 nn_22f7a0(unsigned int* a1);

void nn_65cb70();

__int64 nn_6650a0(__int64 a1, __int64 a2);

_QWORD* nn_65e620(__int64, _QWORD*, _QWORD*);

__int64 SdkRoutine_689560(__int64*, unsigned int, char, __int64, unsigned int,
                          char, int, char);

__int64 SdkRoutine_699ec0(__int64 result, __int64, int, int, int, char);

__int64 SdkRoutine_699fb0(__int64 result, __int64, int, int, char, char);

__int64 SdkRoutine_69a080(__int64 result, __int64, int, int, char);

__int64 SdkRoutine_69a230(__int64 result, int, __int64, int);

__int64 SdkRoutine_69a2c0(__int64 result, int, __int64, int);

__int64 nn_66a170(unsigned __int16*, __int64);

__int64 nvidia_64b750(__int64 result, __int64, __int64);

extern _DWORD SdkData_c77cf4[5];

extern _DWORD SdkData_c7de80[5];

extern _DWORD SdkData_c7de94[5];

extern _DWORD SdkData_ea4528[1956];

int* SdkRoutine_69aee0(int* result, char, char, __int16, char, int);

__int64 nn_65ba90(__int64 a1, __int64* a2, int a3, int a4);

__int64 nn_65bcb0(__int64 a1, __int64* a2, int a3, int a4, int a5,
                  unsigned int a6, char a7, char a8);

unsigned __int64 nn_669a20(__int64 a1, unsigned __int64* a2);

__int64 nn_65ba90(__int64 a1, __int64* a2, int a3, int a4)
{
  _DWORD* v8;
  int v9;
  bool v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 result;
  _DWORD* v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  bool v21;
  _DWORD* v22;
  int v23;
  int v24;
  __int128 v25;

  if (*(_DWORD*)(a1 + 24) == 2) {
    {
      v8 = *(_DWORD**)a1;
      __asm__ volatile("" ::"r"(v8));
    }
  }
  else {
    SdkRoutine_69aee0((int*)&v25, 6, 0, 16, 1, a3);
    DWORDn(v25, sizeof(v25) / 4 - 1) = a4;
    *(_QWORD*)((char*)&v25 + 4) = a2;
    {
      v9 = *(_DWORD*)(a1 + 24);
      __asm__ volatile("" ::"r"(v9));
    }
    v10 = v9 == 1 || v9 == 4;
    {
      v11 = *(_QWORD*)a1;
      __asm__ volatile("" ::"r"(v11));
    }
    v12 = v10;
    if ((unsigned __int64)(v11 + 20) > *(_QWORD*)(a1 + 8)) {
      nvidia_64b750(a1, v11, 4LL * (unsigned int)(*(int*)(a1 + 104) + 5));
      {
        v11 = *(_QWORD*)a1;
        __asm__ volatile("" ::"r"(v11));
      }
    }
    if (v12 != 0) {
      v13 = -1610338676;
    }
    else {
      v13 = -1610346868;
    }
    *(_DWORD*)v11 = v13;
    *(_OWORD*)(v11 + 4) = v25;
    v8 = (_DWORD*)(v11 + 20);
    *(_QWORD*)a1 = v8;
  }
  if ((unsigned __int64)(v8 + 1) > *(_QWORD*)(a1 + 8)) {
    nvidia_64b750(a1, (__int64)v8, 4LL * (unsigned int)(*(int*)(a1 + 104) + 1));
    {
      v8 = *(_DWORD**)a1;
      __asm__ volatile("" ::"r"(v8));
    }
  }
  {
    v14 = *(unsigned int*)(a1 + 24);
    __asm__ volatile("" ::"r"(v14));
  }
  if ((unsigned int)v14 <= 4) {
    *(_DWORD*)v8++ = SdkData_c7de80[v14];
  }
  *(_QWORD*)a1 = v8;
  result = SdkRoutine_69a230(a1, a3, *a2, a4);
  {
    v16 = *(_DWORD**)a1;
    __asm__ volatile("" ::"r"(v16));
  }
  if ((unsigned __int64)(*(_QWORD*)a1 + 4LL) > *(_QWORD*)(a1 + 8)) {
    result = nvidia_64b750(a1, (__int64)v16,
                           4LL * (unsigned int)(*(int*)(a1 + 104) + 1));
    {
      v16 = *(_DWORD**)a1;
      __asm__ volatile("" ::"r"(v16));
    }
  }
  {
    v17 = *(unsigned int*)(a1 + 24);
    __asm__ volatile("" ::"r"(v17));
  }
  if ((unsigned int)v17 > 4) {
    *(_QWORD*)a1 = v16;
  }
  else {
    *(_DWORD*)v16 = SdkData_c77cf4[v17];
    {
      v18 = *(_DWORD*)(a1 + 24);
      __asm__ volatile("" ::"r"(v18));
    }
    *(_QWORD*)a1 = v16 + 1;
    if (v18 == 2) {
      return result;
    }
  }
  result = (__int64)SdkRoutine_69aee0((int*)&v25, 7, 0, 4, 0, 0);
  {
    v19 = *(_DWORD*)(a1 + 24);
    __asm__ volatile("" ::"r"(v19));
  }
  v20 = v25;
  v21 = v19 == 1 || v19 == 4;
  {
    v22 = *(_DWORD**)a1;
    __asm__ volatile("" ::"r"(v22));
  }
  v23 = v21;
  if ((unsigned __int64)(v22 + 1) > *(_QWORD*)(a1 + 8)) {
    result = nvidia_64b750(a1, (__int64)v22,
                           4LL * (unsigned int)(*(int*)(a1 + 104) + 1));
    {
      v22 = *(_DWORD**)a1;
      __asm__ volatile("" ::"r"(v22));
    }
  }
  if (v23 != 0) {
    v24 = 0x2000;
  }
  else {
    v24 = 0;
  }
  *(_DWORD*)v22 = v24 | (v20 << 16) | 0x80000E8C;
  *(_QWORD*)a1 = v22 + 1;
  return result;
}

__int64 nn_65bcb0(__int64 a1, __int64* a2, int a3, int a4, int a5,
                  unsigned int a6, char a7, char a8)
{
  __int64 v8;
  char v12;
  int v17;
  int v18;
  __int64 v20;
  _DWORD* v21;
  char v23;
  __int64 v24;
  int v25;
  __int64 result;
  __int64 v27;
  __int64 v28;
  _DWORD* v29;
  __int64 v30;
  char v31;
  char v32;
  int v33;
  int v34;
  unsigned int* v36;
  int v37;
  __int128 v38;

  {
    v8 = *a2;
    __asm__ volatile("" ::"r"(v8));
  }
  v12 = a5;
  if ((a8 & 1) != 0 || (*(_DWORD*)(a1 + 356) & 0x10) != 0) {
    {
      v21 = *(_DWORD**)(a1 + 11240);
      __asm__ volatile("" ::"r"(v21));
    }
  }
  else {
    v17 = -1610338676;
    SdkRoutine_69aee0((int*)&v38, 4, 0, 16, 1, (16 * a4) | (a5 << 8) | a3);
    DWORDn(v38, sizeof(v38) / 4 - 1) = a6;
    *(_QWORD*)((char*)&v38 + 4) = a2;
    if ((a7 & 1) == 0) {
      {
        v18 = *(_DWORD*)(a1 + 11264);
        __asm__ volatile("" ::"r"(v18));
      }
      if (v18 == 4 || v18 == 1) {
        v17 = -1610338676;
      }
      else {
        v17 = -1610346868;
      }
    }
    {
      v20 = *(_QWORD*)(a1 + 11240);
      __asm__ volatile("" ::"r"(v20));
    }
    if ((unsigned __int64)(v20 + 20) > *(_QWORD*)(a1 + 11248)) {
      nvidia_64b750(a1 + 11240, v20,
                    4LL * (unsigned int)(*(int*)(a1 + 11344) + 5));
      {
        v20 = *(_QWORD*)(a1 + 11240);
        __asm__ volatile("" ::"r"(v20));
      }
    }
    *(_DWORD*)v20 = v17;
    *(_OWORD*)(v20 + 4) = v38;
    v21 = (_DWORD*)(v20 + 20);
    *(_QWORD*)(a1 + 11240) = v21;
  }
  v23 = (v12 & 1) == 0 && a4 != 0;
  if ((unsigned __int64)(v21 + 1) > *(_QWORD*)(a1 + 11248)) {
    nvidia_64b750(a1 + 11240, (__int64)v21,
                  4LL * (unsigned int)(*(int*)(a1 + 11344) + 1));
    {
      v21 = *(_DWORD**)(a1 + 11240);
      __asm__ volatile("" ::"r"(v21));
    }
  }
  {
    v24 = *(unsigned int*)(a1 + 11264);
    __asm__ volatile("" ::"r"(v24));
  }
  if ((unsigned int)v24 <= 4) {
    *(_DWORD*)v21++ = SdkData_c7de94[v24];
  }
  *(_QWORD*)(a1 + 11240) = v21;
  if (a4 != 0) {
    if ((a7 & 1) != 0 || ((v25 = *(_DWORD*)(a1 + 356)) & 4) != 0) {
      if (*(_BYTE*)(a1 + 11136) == 1) {
        {
          v27 = *(_QWORD*)(a1 + 16) + 16LL * *(int*)(a1 + 320);
          __asm__ volatile("" ::"r"(v27));
        }
        {
          v28 = *(_QWORD*)(v27 + 3128);
          __asm__ volatile("" ::"r"(v28));
        }
        *(_QWORD*)(v27 + 3128) = v28 + 1;
        result = SdkRoutine_689560((__int64*)(a1 + 11128), (int)v28 + 1, 1, v8,
                                   a6, 0, a3, v23);
      }
      else {
        result = SdkRoutine_699fb0(a1, v8, a6, a3, 1, v23);
      }
    }
    else if ((a8 & 1) != 0 || (v25 & 0x10) != 0) {
      result = SdkRoutine_69a080(a1, v8, a6, a3, v23);
    }
    else {
      result = SdkRoutine_699ec0(a1, v8, a6, a4, a3, v23);
    }
  }
  else {
    result = SdkRoutine_69a2c0(a1 + 11240, a3, v8, a6);
  }
  {
    v29 = *(_DWORD**)(a1 + 11240);
    __asm__ volatile("" ::"r"(v29));
  }
  if ((unsigned __int64)(v29 + 1) > *(_QWORD*)(a1 + 11248)) {
    result = nvidia_64b750(a1 + 11240, (__int64)v29,
                           4LL * (unsigned int)(*(int*)(a1 + 11344) + 1));
    {
      v29 = *(_DWORD**)(a1 + 11240);
      __asm__ volatile("" ::"r"(v29));
    }
  }
  {
    v30 = *(unsigned int*)(a1 + 11264);
    __asm__ volatile("" ::"r"(v30));
  }
  if ((unsigned int)v30 <= 4) {
    *(_DWORD*)v29++ = SdkData_c77cf4[v30];
  }
  *(_QWORD*)(a1 + 11240) = v29;
  if ((a8 & 1) == 0 && (*(_DWORD*)(a1 + 356) & 0x10) == 0) {
    if ((a7 & 1 | ((*(_DWORD*)(a1 + 356) & 4) != 0)) != 0) {
      v31 = 2;
    }
    else {
      v31 = 1;
    }
    if (a4 != 0) {
      v32 = v31;
    }
    else {
      v32 = 0;
    }
    result = (__int64)SdkRoutine_69aee0((int*)&v38, 5, v32, 4, 0, 0);
    v33 = 0x2000;
    if ((a7 & 1) == 0) {
      {
        v34 = *(_DWORD*)(a1 + 11264);
        __asm__ volatile("" ::"r"(v34));
      }
      if (v34 == 4 || v34 == 1) {
        v33 = 0x2000;
      }
      else {
        v33 = 0;
      }
    }
    {
      v36 = *(unsigned int**)(a1 + 11240);
      __asm__ volatile("" ::"r"(v36));
    }
    v37 = v38;
    if ((unsigned __int64)(v36 + 1) > *(_QWORD*)(a1 + 11248)) {
      result = nvidia_64b750(a1 + 11240, (__int64)v36,
                             4LL * (unsigned int)(*(int*)(a1 + 11344) + 1));
      {
        v36 = *(unsigned int**)(a1 + 11240);
        __asm__ volatile("" ::"r"(v36));
      }
    }
    *v36 = v33 | (v37 << 16) | 0x80000E8C;
    *(_QWORD*)(a1 + 11240) = v36 + 1;
  }
  return result;
}

void nn_65cb70()
{
  void* v0;
  __int64 (*v1)();
  __int64 (*v2)();
  __int64 (*v3)();
  __int64 (*v4)(int, int, int, int, int, int, int, int, char);
  __int64 (*v5)();
  __int64 (*v6)();
  __int64 (*v7)();
  __int64 (*v8)();
  __int64 (*v9)();

  v0 = SdkData_e89bd8;
  *(_QWORD*)SdkData_e89bd8 = SdkRoutine_65cc80;
  *((_QWORD*)v0 + 1) = nn_65cc90;
  *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 4) =
      (__int64)SdkData_e89d58;
  *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 12) =
      (__int64)SdkRoutine_65cce0;
  *(_QWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v0] = SdkRoutine_65ccf0;
  *(_QWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v0 + 8] = SdkRoutine_65cd00;
  *(__int64*)((char*)((__int64*)0x30LL) + (_QWORD)v0) = (__int64)nn_65c5e0_ptr;
  *(__int64*)((char*)((__int64*)0x30LL) + (_QWORD)v0 + 8) =
      (__int64)SdkRoutine_65cd10;
  v1 = SdkData_e89d68[0];
  *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v0) = SdkRoutine_65cd20;
  *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v0 + 8) = nn_65cd30;
  v2 = SdkData_e89d70[0];
  v3 = SdkData_e89d78;
  *(__int64*)((char*)((__int64*)0x50LL) + (_QWORD)v0) = (__int64)v1;
  *(__int64*)((char*)((__int64*)0x50LL) + (_QWORD)v0 + 8) = (__int64)v2;
  *(_QWORD*)((char*)((char*)0x60LL) + (_QWORD)v0) = SdkRoutine_65cd50;
  *(_QWORD*)((char*)((char*)0x60LL) + (_QWORD)v0 + 8) = SdkRoutine_65cd90;
  v4 = nn_65ca10_ptr;
  *(_QWORD*)((char*)((_UNKNOWN*)0x70LL) + (_QWORD)v0) = SdkRoutine_65cd80;
  *(_QWORD*)((char*)((_UNKNOWN*)0x70LL) + (_QWORD)v0 + 8) = SdkRoutine_65cda0;
  v5 = SdkData_e89d88[0];
  *(_QWORD*)((char*)((_UNKNOWN*)0x9CLL) + (_QWORD)v0 + 4) = v3;
  *(_QWORD*)((char*)((_UNKNOWN*)0x9CLL) + (_QWORD)v0 + 12) = v4;
  v6 = SdkData_e89d90[0];
  *(_QWORD*)((char*)((_UNKNOWN*)0xB0LL) + (_QWORD)v0) = v5;
  *(_QWORD*)((char*)((_UNKNOWN*)0xB0LL) + (_QWORD)v0 + 8) = v6;
  v7 = SdkData_e89d98[0];
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v0) = nn_65cdb0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v0 + 8) = SdkRoutine_65cdf0;
  v8 = SdkData_e89da0[0];
  *(_QWORD*)((char*)((_UNKNOWN*)0xC0LL) + (_QWORD)v0) = v7;
  *(_QWORD*)((char*)((_UNKNOWN*)0xC0LL) + (_QWORD)v0 + 8) = v8;
  v9 = SdkData_e89db0;
  *(__int64 (**)(void))((char*)((_UNKNOWN*)0xD0LL) + (_QWORD)v0) =
      SdkData_e89da8[0];
  *(_QWORD*)((char*)((_UNKNOWN*)0xD0LL) + (_QWORD)v0 + 8) = v9;
}

__int64 nn_6650a0(__int64 a1, __int64 a2)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  void* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;

  result = a1 + 40;
  v3 = *(_DWORD*)(result + 184);
  if (v3 != 0) {
    v4 = *(_QWORD*)(result + 208);
    v5 = result;
    if ((*(_BYTE*)(v4 + 24) & 1) == 0) {
      if (*(_BYTE*)(result + 129) == 1) {
        v6 = *(_DWORD*)(result + 188);
        if (v6 != 0) {
          v7 = *(_QWORD*)(*(_QWORD*)(v4 + 16) + 7232LL);
          if (*(_DWORD*)v7 == 0 && (*(_BYTE*)(v7 + 16) & 1) != 0) {
            v8 = 0;
          }
          else {
            v8 = *(_QWORD*)(v7 + 48);
          }
          v9 = v3 + 1;
          v10 = v8 + 16LL * *(int*)(v4 + 320);
          v11 = SdkData_e89bd8;
          v12 = *(_DWORD*)(v10 + 4096) - v6 + *(_DWORD*)(result + 40);
          v13 = (*(__int64 (**)(__int64, __int64))(
                    (char*)((__int64*)0x38LL) + (_QWORD)SdkData_e89bd8))(result,
                                                                         a2) +
                100000;
          do {
            if (v12 >= v9) {
              break;
            }
            v14 = (*(__int64 (**)(__int64))((char*)((_UNKNOWN*)0x90LL) +
                                            (_QWORD)v11))(3);
            v15 = *(_DWORD*)(v10 + 4096);
            v16 = *(_DWORD*)(v5 + 40);
            v17 = (*(__int64 (**)(__int64))((char*)((__int64*)0x38LL) +
                                            (_QWORD)v11))(v14);
            if (v17 > v13) {
              v13 = v17 + 100000;
              SdkRoutine_664dc0(*(_QWORD*)(*(_QWORD*)(v5 + 208) + 16LL));
            }
            v12 = v15 - v6 + v16;
          } while (*(_BYTE*)(*(_QWORD*)(v5 + 208) + 24LL) != 1);
        }
        SdkRoutine_66eca0(v5);
        v4 = *(_QWORD*)(v5 + 208);
      }
      v18 = *(_QWORD*)(v4 + 16);
      nn_os_LockMutex_plt(v18 + 2344);
      v19 = *(_QWORD*)(*(_QWORD*)(v5 + 208) + 16LL);
      v20 = *(_QWORD*)(v19 + 2408);
      if (v20 != 0) {
        NvRmSyncWait_plt(*(_QWORD*)(v19 + 2408), 0xFFFFFFFFLL);
        NvRmSyncClose_plt(v20);
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 208) + 16LL) + 2408LL) = 0;
      }
      nn_66eba0(v5, *(_DWORD*)(v5 + 184));
      result = nn_os_UnlockMutex_plt(v18 + 2344);
      v3 = *(_DWORD*)(v5 + 184);
    }
    v21 = *(_DWORD*)(v5 + 188) + v3;
    *(_DWORD*)(v5 + 184) = 0;
    *(_DWORD*)(v5 + 188) = v21;
  }
  return result;
}

unsigned __int64 nn_669a20(__int64 a1, unsigned __int64* a2)
{
  __int128 v2;
  __int128 v3;
  unsigned __int64 v4;
  __int128 v5;
  unsigned __int64 v6;
  __int128 v7;
  unsigned int v8;
  unsigned __int64 result;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  unsigned __int64 v15;
  unsigned __int64 v16;
  struct {
    _QWORD v17[4];
    __int128 v18;
    __int128 v19;
    __int128 v20;
    __int128 v21;
    __int64 v22;
  } v17_;
  struct {
    unsigned __int16 v23[8];
    unsigned __int64 v24;
  } v23_;
  __int64 v25;

  v2 = *(_OWORD*)(a1 + 64);
  v3 = *(_OWORD*)(a1 + 80);
  v17_.v22 = *(_QWORD*)(a1 + 96);
  {
    v4 = *a2;
    __asm__ volatile("" ::"r"(v4));
  }
  v17_.v20 = v2;
  v17_.v21 = v3;
  v5 = *(_OWORD*)(a1 + 16);
  v6 = v4;
  *(_OWORD*)v17_.v17 = *(_OWORD*)a1;
  *(_OWORD*)&v17_.v17[2] = v5;
  v7 = *(_OWORD*)(a1 + 48);
  v17_.v18 = *(_OWORD*)(a1 + 32);
  v17_.v19 = v7;
  if ((v4 & 0x2000000000000000LL) == 0) {
    v6 = (unsigned __int64)*(unsigned __int8*)(a1 + 36) << 48;
    __asm__ volatile("" ::"r"(v6));
  }
  v8 = DWORD1(v17_.v18);
  if ((DWORD1(v17_.v18) & 0xFFFFFFFE) == 8) {
    v8 = 4;
    DWORD1(v17_.v18) = 4;
  }
  result = 0;
  if ((v4 & 0x200000000000000LL) == 0 || (__int16)v4 < 1 ||
      (result = 0, v8 > 6) || ((1 << v8) & 0x58) == 0) {
  LABEL_12:
    {
      v12 = *a2;
      __asm__ volatile("" ::"r"(v12));
    }
    if ((*a2 & 0x100000000000000LL) == 0) {
      return result;
    }
    goto LABEL_13;
  }
  v10 = v4 & 0x7FFF;
  v11 = v6 & 0xFF000000000000LL;
  if (v11 == 0x3000000000000LL) {
    DWORDn(v17_.v18, sizeof(v17_.v18) / 4 - 1) = v10;
    if (DWORDn(v17_.v21, sizeof(v17_.v21) / 4 - 1) != 0) {
    LABEL_11:
      result = 0;
      goto LABEL_12;
    }
  }
  else {
    if (v11 == 0x9000000000000LL) {
      v10 *= 6;
    }
    LODWORD(v17_.v19) = v10;
    if (DWORDn(v17_.v21, sizeof(v17_.v21) / 4 - 1) != 0) {
      goto LABEL_11;
    }
  }
  if ((v17_.v18 & 1) != 0) {
    nn_65e620((__int64)v17_.v17, v23_.v23, &v25);
    {
      result = *(_QWORD*)v23_.v23;
      __asm__ volatile("" ::"r"(result));
    }
  }
  else {
    nn_66a170(v23_.v23, (__int64)v17_.v17);
    if ((SdkData_ea4528[12LL * SDWORD2(v17_.v19)] & 1) != 0) {
      result = v23_.v24 >> 16;
    }
    else {
      result = 0;
    }
  }
  {
    v12 = *a2;
    __asm__ volatile("" ::"r"(v12));
  }
  if ((*a2 & 0x100000000000000LL) == 0) {
    return result;
  }
LABEL_13:
  if ((v12 & 0xFF00000000LL) == 0) {
    return result;
  }
  switch (DWORD1(v17_.v18)) {
  case 6:
    LODWORD(v17_.v19) = 1;
    v13 = 5;
    goto LABEL_27;
  case 4:
    v13 = 1;
    LODWORD(v17_.v19) = 1;
    goto LABEL_27;
  case 3:
    v13 = 0;
    DWORDn(v17_.v18, sizeof(v17_.v18) / 4 - 1) = 1;
  LABEL_27:
    DWORD1(v17_.v18) = v13;
    break;
  default:
    break;
  }
  DWORD1(v17_.v19) = BYTE4(v12);
  if (DWORDn(v17_.v21, sizeof(v17_.v21) / 4 - 1) != 0) {
    v15 = 0;
  }
  else {
    v16 = result;
    if ((v17_.v18 & 1) != 0) {
      nn_65e620((__int64)v17_.v17, v23_.v23, &v25);
      {
        v15 = *(_QWORD*)v23_.v23;
        __asm__ volatile("" ::"r"(v15));
      }
    }
    else {
      nn_66a170(v23_.v23, (__int64)v17_.v17);
      if ((SdkData_ea4528[12LL * SDWORD2(v17_.v19)] & 1) != 0) {
        v15 = v23_.v24 >> 16;
      }
      else {
        v15 = 0;
      }
    }
    result = v16;
  }
  result += v15;
  return result;
}

#pragma GCC visibility pop
