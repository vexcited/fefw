#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*NgxData_94c3f8[])();

extern __int64 (*NgxData_94f350[])();

extern __int64 (*NgxData_94f470[])();

__int64 NgxRoutine_430(_QWORD, _QWORD);

__int64 NgxRoutine_baf00(void);

void __attribute__((noreturn)) NgxRoutine_baf40(_QWORD);

__int64 NgxRoutine_be660(_QWORD);

__int64 NgxRoutine_be820(_QWORD);

__int64 NgxRoutine_db240(_QWORD);

__int64 NgxRoutine_dfc20(_QWORD);

__int64 NgxRoutine_e3720(_QWORD);

__int64 NgxRoutine_e37a0(void);

__int64 NgxRoutine_e37e0(_QWORD);

void __attribute__((noreturn)) NgxHr_0() { __udf(1u); }

const char* NgxHr_400() { return "Device 0x%x"; }

__int64 NgxHr_28c20(_QWORD* a1)
{
  *a1 = NgxData_94c3f8;
  return NgxRoutine_baf00();
}

__int64 NgxHr_b1080(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    return NgxRoutine_430(result, 16);
  }
  return result;
}

__int64 NgxHr_ba2b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, unsigned int a7)
{
  return (*(__int64 (**)(__int64, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)a1 + 384LL))(a1, a2, a3, a5, a7);
}

__int64 NgxHr_bca20(_QWORD* a1)
{
  *a1 = NgxData_94f350;
  return NgxRoutine_db240(a1 + 1);
}

__int64 NgxHr_bca70() { return 0; }

__int64 NgxHr_bccd0(_QWORD* a1)
{
  return NgxRoutine_be660((char*)a1 + *(_QWORD*)(*a1 - 24LL) + 16);
}

void __attribute__((noreturn)) NgxHr_bce50(__int64 a1)
{
  __int64 v2;

  NgxRoutine_e37a0();
  v2 = NgxRoutine_e3720(a1);
  NgxRoutine_baf40(v2);
}

__int64 NgxHr_bce80(_QWORD* a1)
{
  return NgxRoutine_be660((char*)a1 + *(_QWORD*)(*a1 - 24LL) + 8);
}

__int64 NgxHr_bd2f0(_QWORD* a1)
{
  return NgxRoutine_be660((char*)a1 + *(_QWORD*)(*a1 - 24LL) + 24);
}

__int64 NgxHr_bd3d0(_QWORD* a1)
{
  *a1 = NgxData_94f470;
  return NgxRoutine_db240(a1 + 1);
}

__int64 NgxHr_bddf0(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 32LL))(
      a1, a3, 0);
}

const char* NgxHr_be4a0() { return "iostream"; }

void __attribute__((noreturn)) NgxHr_be70c(__int64 a1) { NgxRoutine_baf40(a1); }

__int64 NgxHr_be80c(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  NgxRoutine_e37e0(v1);
  v3 = NgxRoutine_e3720(a1);
  return NgxRoutine_be820(v3);
}

const char* NgxHr_be9e0() { return "generic"; }

void __attribute__((noreturn)) NgxHr_bf6fc(__int64 a1) { NgxRoutine_baf40(a1); }

__int64 NgxHr_c03a0(__int64 a1, unsigned int a2) { return a2; }

void __attribute__((noreturn)) NgxHr_d18f4(__int64 a1) { NgxRoutine_baf40(a1); }

__int64 NgxHr_d1940() { return 67109634; }

void __attribute__((noreturn)) NgxHr_d3290(__int64 a1) { NgxRoutine_baf40(a1); }

void __attribute__((noreturn)) NgxHr_d3294(__int64 a1) { NgxRoutine_baf40(a1); }

void __attribute__((noreturn)) NgxHr_d5504(__int64 a1) { NgxRoutine_baf40(a1); }

void __attribute__((noreturn)) NgxHr_d5508(__int64 a1) { NgxRoutine_baf40(a1); }

void __attribute__((noreturn)) NgxHr_d550c(__int64 a1) { NgxRoutine_baf40(a1); }

__int64 NgxHr_db570(__int64 a1, unsigned int a2)
{
  if (a2 - 91 >= 0xFFFFFFE6) {
    return a2 | 0x20;
  }
  else {
    return a2;
  }
}

__int64 NgxHr_db5d0(__int64 a1, unsigned __int8 a2) { return a2; }

__int64 NgxHr_db680(__int64 a1, unsigned int a2, unsigned int a3)
{
  if (a2 >= 0x80) {
    return a3;
  }
  else {
    return a2;
  }
}

__int64 NgxHr_dba20(__int64 a1, unsigned int a2) { return a2; }

__int64 NgxHr_dbae0(__int64 a1, unsigned int a2, unsigned int a3)
{
  if ((a2 & 0x80u) == 0) {
    return a2;
  }
  else {
    return a3;
  }
}

__int64 NgxHr_dbbe0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD* a5,
                    __int64 a6, __int64 a7, _QWORD* a8)
{
  *a5 = a3;
  *a8 = a6;
  return 3;
}

__int64 NgxHr_dbbf0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD* a5)
{
  *a5 = a3;
  return 3;
}

unsigned __int64 NgxHr_dbc10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             unsigned __int64 a5)
{
  if (a4 - a3 >= a5) {
    return a5;
  }
  else {
    return a4 - a3;
  }
}

void __attribute__((noreturn)) NgxHr_dc094(__int64 a1) { NgxRoutine_baf40(a1); }

void __attribute__((noreturn)) NgxHr_dc448(__int64 a1) { NgxRoutine_baf40(a1); }

void __attribute__((noreturn)) NgxHr_dc65c(__int64 a1) { NgxRoutine_baf40(a1); }

void __attribute__((noreturn)) NgxHr_dc734(__int64 a1) { NgxRoutine_baf40(a1); }

void __attribute__((noreturn)) NgxHr_dc74c(__int64 a1) { NgxRoutine_baf40(a1); }

void __attribute__((noreturn)) NgxHr_dc864(__int64 a1) { NgxRoutine_baf40(a1); }

void __attribute__((noreturn)) NgxHr_dc8e8(__int64 a1) { NgxRoutine_baf40(a1); }

void __attribute__((noreturn)) NgxHr_dc8ec(__int64 a1, __int64 a2, __int64 a3,
                                           __int64 a4, __int64 a5, __int64 a6,
                                           __int64 a7, __int64 a8, __int64 a9,
                                           char a10)
{
  NgxRoutine_dfc20(&a10);
  NgxRoutine_baf40(a1);
}

void __attribute__((noreturn)) NgxHr_e21b8(__int64 a1) { NgxRoutine_baf40(a1); }

void __attribute__((noreturn)) NgxHr_e231c(__int64 a1) { NgxRoutine_baf40(a1); }

const char* NgxHr_e2e00() { return "future"; }

#pragma GCC visibility pop
