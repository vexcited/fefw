#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nvidia_64b750(__int64 result, __int64, __int64);
extern _DWORD SdkData_c77ce0[5];
extern _DWORD SdkData_c77cf4[5];
extern void (*SdkData_ea42b8)(_QWORD, _QWORD, _QWORD);
extern void (*SdkData_ea42b8_alt1)(_QWORD, __int64, _QWORD);
extern void (*SdkData_ea42c0)(_QWORD, __int64, __int64);
extern void (*SdkData_ea42c8)(_QWORD, __int64, __int64);
extern void (*SdkData_ea42d0)(_QWORD, __int64, _QWORD);
void __attribute__((noreturn)) NvOsAllocAlign_0(__int64 a1, __int64 a2);
void __attribute__((noreturn)) NvOsAlloc_0(__int64 a1);
void __attribute__((noreturn)) NvOsRealloc_0(__int64 a1, __int64 a2);
void __attribute__((noreturn)) NvOsFree_0(__int64 a1);
__int64 nvidia_64fd30(__int64 result, char a2);
__int64 nvidia_64fdc0(__int64 result, int a2, __int64 a3);
__int64 NvOsAtomicCompareExchange32_plt(__int64, unsigned int, unsigned int);
__int64 NvOsFclose_plt(__int64);
__int64 NvOsFopen_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsFstat_plt(__int64, __int64);
__int64 strncpy_plt(__int64, const char*, unsigned __int64);
extern _UNKNOWN SdkData_f72ea4;
extern _UNKNOWN SdkData_f76ea4;
extern __int64 SdkData_f71e60[513];
extern int SdkData_f71e5c;
extern int SdkData_f72e68;
extern void (*SdkData_ea4340)(_QWORD, __int64, __int64);
extern void (*SdkData_ea4350)(_QWORD, unsigned __int64, __int64);
int strcmp_plt(const char*, const char*);
__int64 nvidia_5ef040(char* a1, __int64 a2, unsigned int a3);
void __attribute__((noreturn)) nvidia_5f7750(__int64 a1, __int64 a2);
void __attribute__((noreturn)) nvidia_5f7770(__int64 a1);
void __attribute__((noreturn)) nvidia_5f7790(__int64 a1, __int64 a2);
void __attribute__((noreturn)) nvidia_5f77b0(__int64 a1);
void __attribute__((noreturn)) nvidia_5f7940(unsigned __int64 a1, __int64 a2,
                                             __int64 a3);

__int64 nvidia_5ef040(char* a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v13;
  struct {
    __int64 v15;
    __int64 v16;
    __int64 v17;
  } v15_;
  __int64 v18;

  v3 = a2;
  v5 = 196614;
  if (SdkData_f71e5c != 2) {
    v13 = a3;
    v6 = 0;
    do {
      if ((unsigned int)NvOsAtomicCompareExchange32_plt(
              (__int64)&SdkData_f71e5c, 0, 1u) == 0) {
        v18 = 0;
        v15_.v16 = 0;
        v15_.v17 = 0;
        v15_.v15 = 0;
        SdkData_f71e60[0] = 0;
        SdkData_f72e68 = 0;
        v6 = NvOsFopen_plt("host:/tegra_config.txt", 1, &v18);
        if (v6 == 0) {
          v7 = NvOsFstat_plt(v18, (__int64)&v15_.v15);
          if (v7 != 0) {
            v6 = v7;
            v8 = SdkData_f71e60[0];
            if (SdkData_f71e60[0] != 0) {
              goto LABEL_13;
            }
          }
          else {
            if ((_DWORD)v15_.v16 == 1) {
              nvidia_5f7770(v15_.v15 + 1);
            }
            v6 = 8;
            v8 = SdkData_f71e60[0];
            if (SdkData_f71e60[0] != 0) {
            LABEL_13:
              nvidia_5f77b0(v8);
            }
          }
          if (v18 != 0) {
            NvOsFclose_plt(v18);
          }
        }
        NvOsAtomicCompareExchange32_plt((__int64)&SdkData_f71e5c, 1u, 2u);
      }
    } while (SdkData_f71e5c != 2);
    v3 = a2;
    a3 = v13;
    if (v6 != 0) {
      if (v6 == 196627) {
        return 196614;
      }
      else {
        return v6;
      }
    }
  }
  v9 = (unsigned int)SdkData_f72e68;
  if (SdkData_f72e68 < 1) {
    LODWORD(v11) = 0;
    if (SdkData_f72e68 == 0) {
      return v5;
    }
  LABEL_26:
    strncpy_plt(v3, (const char*)SdkData_f71e60[(unsigned int)v11 + 257], a3);
    return 0;
  }
  v10 = a3;
  v11 = 0;
  while (strcmp_plt((const char*)SdkData_f71e60[v11 + 1], a1) != 0) {
    if (v9 == ++v11) {
      return v5;
    }
  }
  a3 = v10;
  if ((_DWORD)v11 != (_DWORD)v9) {
    goto LABEL_26;
  }
  return v5;
}

void __attribute__((noreturn)) NvOsAllocAlign_0(__int64 a1, __int64 a2)
{
  SdkData_ea42c0(&SdkData_ea42b8, a1, a2);
}

void __attribute__((noreturn)) nvidia_5f7750(__int64 a1, __int64 a2)
{
  SdkData_ea42c0(&SdkData_ea42b8, a1, a2);
}

void __attribute__((noreturn)) NvOsAlloc_0(__int64 a1)
{
  SdkData_ea42b8_alt1(&SdkData_ea42b8_alt1, a1, SdkData_ea42b8_alt1);
}

void __attribute__((noreturn)) nvidia_5f7770(__int64 a1)
{
  SdkData_ea42b8_alt1(&SdkData_ea42b8_alt1, a1, SdkData_ea42b8_alt1);
}

void __attribute__((noreturn)) NvOsRealloc_0(__int64 a1, __int64 a2)
{
  SdkData_ea42c8(&SdkData_ea42b8, a1, a2);
}

void __attribute__((noreturn)) nvidia_5f7790(__int64 a1, __int64 a2)
{
  SdkData_ea42c8(&SdkData_ea42b8, a1, a2);
}

void __attribute__((noreturn)) NvOsFree_0(__int64 a1)
{
  SdkData_ea42d0(&SdkData_ea42b8, a1, SdkData_ea42d0);
}

void __attribute__((noreturn)) nvidia_5f77b0(__int64 a1)
{
  SdkData_ea42d0(&SdkData_ea42b8, a1, SdkData_ea42d0);
}

void __attribute__((noreturn)) nvidia_5f7940(unsigned __int64 a1, __int64 a2,
                                             __int64 a3)
{
  if (a1 != 0 && a1 >= (unsigned __int64)&SdkData_f72ea4 &
                     a1 < (unsigned __int64)&SdkData_f76ea4) {
    SdkData_ea4340(&SdkData_ea4340, a2, a3);
  }
  SdkData_ea4350(&SdkData_ea4340, a1, a2);
}

__int64 nvidia_64fd30(__int64 result, char a2)
{
  unsigned int* v3;
  __int64 v4;
  unsigned int v5;
  _DWORD* v6;
  int v7;

  v3 = *(unsigned int**)result;
  v4 = result;
  if ((unsigned __int64)(*(_QWORD*)result + 8LL) > *(_QWORD*)(result + 8)) {
    result = nvidia_64b750(result, (__int64)v3,
                           4LL * (unsigned int)(*(int*)(result + 104) + 2));
    v3 = *(unsigned int**)v4;
  }
  if (a2 != 0) {
    v5 = -2147418112;
  }
  else {
    v5 = 0x80000000;
  }
  *v3 = v5 | 0x8097;
  v6 = v3 + 1;
  v7 = *(_DWORD*)(v4 + 24);
  if (v7 == 3 | v7 == 0) {
    v3[1] = v5 | 0x609B;
    v6 = v3 + 2;
  }
  *(_QWORD*)v4 = v6;
  return result;
}

__int64 nvidia_64fdc0(__int64 result, int a2, __int64 a3)
{
  _DWORD* v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  _DWORD* v11;
  unsigned __int64 v12;
  __int64 v13;

  v4 = *(_DWORD**)result;
  v6 = result;
  if ((unsigned __int64)(*(_QWORD*)result + 4LL) > *(_QWORD*)(result + 8)) {
    result = nvidia_64b750(result, (__int64)v4,
                           4LL * (unsigned int)(*(int*)(result + 104) + 1));
    v4 = *(_DWORD**)v6;
  }
  v7 = *(unsigned int*)(v6 + 24);
  if ((unsigned int)v7 <= 4) {
    *(_DWORD*)v4++ = SdkData_c77ce0[v7];
  }
  v8 = *(_QWORD*)(v6 + 8);
  *(_QWORD*)v6 = v4;
  if ((unsigned __int64)(v4 + 8) > v8) {
    result = nvidia_64b750(v6, (__int64)v4,
                           4LL * (unsigned int)(*(int*)(v6 + 104) + 8));
    v4 = *(_DWORD**)v6;
  }
  if (a2 != 0) {
    if (a2 != 1) {
      return result;
    }
    v9 = 4;
  }
  else {
    v9 = 3;
  }
  v4[2] = a3;
  v4[3] = v9;
  *(_DWORD*)v4 = 537100437;
  v4[1] = DWORDn(a3, sizeof(a3) / 4 - 1);
  v10 = *(_DWORD*)(v6 + 24);
  if (v10 != 3 && v10 != 0) {
    v11 = v4 + 4;
  }
  else {
    v4[6] = a3;
    v4[7] = v9;
    v4[4] = 537092249;
    v4[5] = DWORDn(a3, sizeof(a3) / 4 - 1);
    v11 = v4 + 8;
  }
  v12 = *(_QWORD*)(v6 + 8);
  *(_QWORD*)v6 = v11;
  if ((unsigned __int64)(v11 + 1) > v12) {
    result = nvidia_64b750(v6, (__int64)v11,
                           4LL * (unsigned int)(*(int*)(v6 + 104) + 1));
    v11 = *(_DWORD**)v6;
  }
  v13 = *(unsigned int*)(v6 + 24);
  if ((unsigned int)v13 <= 4) {
    *(_DWORD*)v11++ = SdkData_c77cf4[v13];
  }
  *(_QWORD*)v6 = v11;
  return result;
}

#pragma GCC visibility pop
