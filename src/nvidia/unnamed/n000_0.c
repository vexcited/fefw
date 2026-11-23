#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 NgxData_2b6ab70;

extern _UNKNOWN* NgxData_94c0b0;

extern __int64 (*NgxData_94c448[])();

extern __int64 (*NgxData_94c518[])();

extern __int64 (*NgxData_94c578[])();

extern __int64* NgxData_9521d8[10];

extern __int64* NgxData_9521f0[7];

extern __int64* NgxData_9521f8[6];

extern __int64* NgxData_952208[4];

__int64 NgxRoutine_27b20(_QWORD, _QWORD);

__int64 NgxRoutine_27b30(_DWORD*);

__int64 NgxRoutine_27bf0(_DWORD*, __int64);

void __attribute__((noreturn)) NgxRoutine_27cb0();

void __attribute__((noreturn)) NgxRoutine_27cd0(_QWORD);

__int64 NgxRoutine_294b0(_QWORD, _QWORD);

__int64 NgxRoutine_29780(_QWORD, _QWORD);

__int64 NgxRoutine_29a20(_QWORD, _QWORD);

__int64 NgxRoutine_29b90(_QWORD, _QWORD);

__int64 NgxRoutine_29ca0(_QWORD);

__int64 NgxRoutine_29cc0(_QWORD);

__int64 NgxRoutine_312c0(_QWORD, _QWORD);

__int64 NgxRoutine_340(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_420(__int64);

__int64 NgxRoutine_430(_QWORD, _QWORD);

__int64 NgxRoutine_baf10(_QWORD);

void __attribute__((noreturn)) NgxRoutine_e2370(const char*, ...);

__int64 NgxRoutine_e30c0(_QWORD);

__int64 NgxRoutine_e30e0(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e3120(_QWORD, _QWORD, _QWORD);

__int64 NgxHr_200()
{
  return NgxRoutine_340(&NgxData_94c0b0, 0, NgxData_2b6ab70);
}

void NgxHr_270() { __udf(0x8003u); }

__int64 NgxHr_2b0() { return 0xFFFFFFFFLL; }

void NgxHr_340() { ; }

__int64 NgxHr_440(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = a2 * a1;
  v3 = NgxRoutine_e30c0(a2 * a1);
  NgxRoutine_e30e0(v3, 0, v2);
  return v3;
}

_DWORD* NgxHr_36f0(_DWORD* result, unsigned int* a2, unsigned int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  int v6;

  v3 = a3 - 1;
  if (a3 == 1) {
    *result = 0;
    *a2 = v3;
  }
  else {
    if ((a3 & 0x80000000) != 0) {
      v4 = 31;
    }
    else if (a3 >> 30 != 0) {
      v4 = 30;
    }
    else if (a3 >> 29 != 0) {
      v4 = 29;
    }
    else if (a3 >> 28 != 0) {
      v4 = 28;
    }
    else if (a3 >> 27 != 0) {
      v4 = 27;
    }
    else if (a3 >> 26 != 0) {
      v4 = 26;
    }
    else if (a3 >> 25 != 0) {
      v4 = 25;
    }
    else if (HIBYTE(a3) != 0) {
      v4 = 24;
    }
    else if (a3 >> 23 != 0) {
      v4 = 23;
    }
    else if (a3 >> 22 != 0) {
      v4 = 22;
    }
    else if (a3 >> 21 != 0) {
      v4 = 21;
    }
    else if (a3 >> 20 != 0) {
      v4 = 20;
    }
    else if (a3 >> 19 != 0) {
      v4 = 19;
    }
    else if (a3 >> 18 != 0) {
      v4 = 18;
    }
    else if (a3 >> 17 != 0) {
      v4 = 17;
    }
    else if (HIWORD(a3) != 0) {
      v4 = 16;
    }
    else if (a3 >> 15 != 0) {
      v4 = 15;
    }
    else if (a3 >> 14 != 0) {
      v4 = 14;
    }
    else if (a3 >> 13 != 0) {
      v4 = 13;
    }
    else if (a3 > 0xFFF) {
      v4 = 12;
    }
    else if (a3 > 0x7FF) {
      v4 = 11;
    }
    else if (a3 > 0x3FF) {
      v4 = 10;
    }
    else if (a3 > 0x1FF) {
      v4 = 9;
    }
    else if (a3 > 0xFF) {
      v4 = 8;
    }
    else if (a3 > 0x7F) {
      v4 = 7;
    }
    else if (a3 > 0x3F) {
      v4 = 6;
    }
    else if (a3 > 0x1F) {
      v4 = 5;
    }
    else if (a3 > 0xF) {
      v4 = 4;
    }
    else if (a3 > 7) {
      v4 = 3;
    }
    else {
      v4 = 2;
      if (a3 <= 3) {
        if (a3 >= 2) {
          v5 = 2;
        }
        else {
          v5 = a3;
        }
        v4 = v5 - 1;
      }
    }
    if ((a3 & v3) != 0) {
      v6 = v4 + 1;
    }
    else {
      v6 = v4;
    }
    *result =
        ((unsigned __int64)a3 + (1LL << ((unsigned __int8)v6 + 31)) - 1) / a3;
    *a2 = v6 - 1;
  }
  return result;
}

void __attribute__((noreturn)) NgxHr_27cb0()
{
  NgxRoutine_27cd0("basic_string");
}

void __attribute__((noreturn)) NgxHr_27cd0(const char* a1)
{
  NgxRoutine_e2370(
      "length_error was thrown in -fno-exceptions mode with message \"%s\"",
      a1);
}

void __attribute__((noreturn)) NgxHr_27cf0()
{
  NgxRoutine_e2370("bad_array_new_length was thrown in -fno-exceptions mode");
}

__int64 NgxHr_27d10(__int64 a1, __int64 a2)
{
  __int64 result;

  NgxRoutine_312c0(a1, a2);
  *(_QWORD*)a1 = NgxData_9521d8[0] + 2;
  *(_QWORD*)(a1 + 104) = NgxData_94c448;
  NgxRoutine_29ca0(a1 + 112);
  NgxRoutine_29ca0(a1 + 160);
  NgxRoutine_29ca0(a1 + 208);
  NgxRoutine_29ca0(a1 + 256);
  NgxRoutine_29ca0(a1 + 304);
  NgxRoutine_29ca0(a1 + 352);
  NgxRoutine_29ca0(a1 + 400);
  NgxRoutine_29ca0(a1 + 448);
  result = NgxRoutine_29ca0(a1 + 496);
  *(_BYTE*)(a1 + 544) = 0;
  *(_BYTE*)(a1 + 552) = 0;
  *(_WORD*)(a1 + 2112) = 0;
  *(_BYTE*)(a1 + 2156) = 0;
  *(_QWORD*)(a1 + 2116) = -1;
  *(_QWORD*)(a1 + 2124) = -1;
  *(_QWORD*)(a1 + 2132) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 2140) = -1;
  *(_QWORD*)(a1 + 2148) = -1;
  if (*(_DWORD*)(a1 + 84) == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 96LL))(a1);
  }
  return result;
}

__int64 NgxHr_27e20(__int64 a1)
{
  NgxRoutine_294b0(a1 + 104, a1 + 88);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
}

void NgxHr_27fe0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (a2 != nullptr) {
    v2 = a2[8];
    if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      NgxRoutine_baf10(v2);
    }
    v4 = a2[6];
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      NgxRoutine_baf10(v4);
    }
    v5 = a2[4];
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      NgxRoutine_baf10(v5);
    }
    v6 = a2[2];
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      NgxRoutine_baf10(v6);
      NgxRoutine_430(a2, 72);
    }
    else {
      NgxRoutine_430(a2, 72);
    }
  }
}

__int64 NgxHr_28100(__int64 a1)
{
  NgxRoutine_29780(a1 + 104, a1 + 88);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
}

__int64 NgxHr_282c0(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = NgxData_9521f0[0] + 2;
  NgxRoutine_29ca0(a1 + 8);
  NgxRoutine_29ca0(a1 + 56);
  NgxRoutine_29ca0(a1 + 104);
  NgxRoutine_29ca0(a1 + 152);
  NgxRoutine_29ca0(a1 + 200);
  NgxRoutine_29ca0(a1 + 248);
  NgxRoutine_29ca0(a1 + 296);
  NgxRoutine_29ca0(a1 + 344);
  NgxRoutine_29ca0(a1 + 392);
  NgxRoutine_29ca0(a1 + 440);
  NgxRoutine_29ca0(a1 + 488);
  NgxRoutine_29ca0(a1 + 536);
  NgxRoutine_29ca0(a1 + 584);
  NgxRoutine_29ca0(a1 + 632);
  result = NgxRoutine_29ca0(a1 + 680);
  *(_BYTE*)(a1 + 730) = 0;
  *(_WORD*)(a1 + 728) = 256;
  *(_QWORD*)(a1 + 732) = 0x3E2AAAC13E800000LL;
  *(_QWORD*)(a1 + 740) = 0xBE2AAAC100000000LL;
  *(_QWORD*)(a1 + 748) = 0;
  *(_QWORD*)(a1 + 756) = 0;
  *(_QWORD*)(a1 + 764) = 0;
  return result;
}

__int64 NgxHr_283b0(__int64 a1, __int64 a2)
{
  __int64 result;

  NgxRoutine_312c0(a1, a2);
  *(_QWORD*)a1 = NgxData_9521f8[0] + 2;
  *(_QWORD*)(a1 + 104) = NgxData_94c518;
  NgxRoutine_29ca0(a1 + 112);
  NgxRoutine_29ca0(a1 + 160);
  NgxRoutine_29ca0(a1 + 208);
  result = NgxRoutine_29ca0(a1 + 256);
  *(_BYTE*)(a1 + 312) = 0;
  *(_WORD*)(a1 + 1824) = 0;
  *(_BYTE*)(a1 + 1868) = 0;
  *(_BYTE*)(a1 + 304) = 1;
  *(_QWORD*)(a1 + 1828) = -1;
  *(_QWORD*)(a1 + 1836) = -1;
  *(_QWORD*)(a1 + 1844) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 1852) = -1;
  *(_QWORD*)(a1 + 1860) = -1;
  if (*(_DWORD*)(a1 + 84) == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 96LL))(a1);
  }
  return result;
}

__int64 NgxHr_28490(__int64 a1)
{
  NgxRoutine_29a20(a1 + 104, a1 + 88);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
}

__int64 NgxHr_28650(__int64 a1, __int64 a2)
{
  __int64 result;

  NgxRoutine_312c0(a1, a2);
  *(_QWORD*)a1 = NgxData_952208[0] + 2;
  *(_QWORD*)(a1 + 104) = NgxData_94c578;
  NgxRoutine_29ca0(a1 + 112);
  NgxRoutine_29ca0(a1 + 160);
  NgxRoutine_29ca0(a1 + 208);
  NgxRoutine_29ca0(a1 + 256);
  result = NgxRoutine_29ca0(a1 + 304);
  *(_BYTE*)(a1 + 360) = 0;
  *(_WORD*)(a1 + 1920) = 0;
  *(_BYTE*)(a1 + 1964) = 0;
  *(_BYTE*)(a1 + 352) = 1;
  *(_QWORD*)(a1 + 1924) = -1;
  *(_QWORD*)(a1 + 1932) = -1;
  *(_QWORD*)(a1 + 1940) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 1948) = -1;
  *(_QWORD*)(a1 + 1956) = -1;
  if (*(_DWORD*)(a1 + 84) == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 96LL))(a1);
  }
  return result;
}

__int64 NgxHr_28740(__int64 a1)
{
  NgxRoutine_29b90(a1 + 104, a1 + 88);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
}

__int64 NgxHr_28c80(_QWORD* a1)
{
  _QWORD* v1;
  __int64 result;
  _QWORD* v4;

  v1 = (_QWORD*)a1[5];
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if ((v1[2] & 1) != 0) {
        NgxRoutine_430(v1[4], v1[2] & 0xFFFFFFFFFFFFFFFELL);
      }
      NgxRoutine_430(v1, 48);
      v1 = v4;
    } while (v4 != nullptr);
  }
  result = a1[3];
  a1[3] = 0;
  if (result != 0) {
    return NgxRoutine_430(result, 8LL * a1[4]);
  }
  return result;
}

__int64 NgxHr_29320(__int64* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  __int64 v8;

  if (a3 > 0x16) {
    if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
      NgxRoutine_27cb0();
    }
    v7 = a2;
    if ((a3 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (a3 | 7) + 1;
    }
    v4 = NgxRoutine_420(v8);
    a1[1] = a3;
    a1[2] = v4;
    a2 = v7;
    *a1 = v8 | 1;
    v5 = a3 + 1;
  }
  else {
    *(_BYTE*)a1 = 2 * a3;
    v4 = (__int64)a1 + 1;
    v5 = a3 + 1;
  }
  return NgxRoutine_e3120(v4, a2, v5);
}

__int64 NgxHr_293c0(__int64 a1, _QWORD* a2)
{
  NgxRoutine_27b20(*a2, a1 + 8);
  NgxRoutine_27b20(*a2, a1 + 56);
  NgxRoutine_27b20(*a2, a1 + 104);
  NgxRoutine_27b20(*a2, a1 + 152);
  NgxRoutine_27b20(*a2, a1 + 200);
  NgxRoutine_27b20(*a2, a1 + 248);
  NgxRoutine_27b20(*a2, a1 + 296);
  NgxRoutine_27b20(*a2, a1 + 344);
  return NgxRoutine_27b20(*a2, a1 + 392);
}

__int64 NgxHr_29450(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  return NgxRoutine_27b30(*a2);
}

__int64 NgxHr_294b0(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  return NgxRoutine_27b30(*a2);
}

__int64 NgxHr_29510(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27bf0(*a2, a1 + 8);
  NgxRoutine_27bf0(*a2, a1 + 56);
  NgxRoutine_27bf0(*a2, a1 + 104);
  NgxRoutine_27bf0(*a2, a1 + 152);
  NgxRoutine_27bf0(*a2, a1 + 200);
  NgxRoutine_27bf0(*a2, a1 + 248);
  NgxRoutine_27bf0(*a2, a1 + 296);
  NgxRoutine_27bf0(*a2, a1 + 344);
  return NgxRoutine_27bf0(*a2, a1 + 392);
}

__int64 NgxHr_295a0(__int64 a1)
{
  NgxRoutine_29cc0(a1 + 8);
  NgxRoutine_29cc0(a1 + 56);
  NgxRoutine_29cc0(a1 + 104);
  NgxRoutine_29cc0(a1 + 152);
  NgxRoutine_29cc0(a1 + 200);
  NgxRoutine_29cc0(a1 + 248);
  NgxRoutine_29cc0(a1 + 296);
  NgxRoutine_29cc0(a1 + 344);
  return NgxRoutine_29cc0(a1 + 392);
}

__int64 NgxHr_29610(__int64 a1, _QWORD* a2)
{
  NgxRoutine_27b20(*a2, a1 + 8);
  NgxRoutine_27b20(*a2, a1 + 56);
  NgxRoutine_27b20(*a2, a1 + 104);
  NgxRoutine_27b20(*a2, a1 + 152);
  NgxRoutine_27b20(*a2, a1 + 200);
  NgxRoutine_27b20(*a2, a1 + 248);
  NgxRoutine_27b20(*a2, a1 + 296);
  NgxRoutine_27b20(*a2, a1 + 344);
  NgxRoutine_27b20(*a2, a1 + 392);
  NgxRoutine_27b20(*a2, a1 + 440);
  NgxRoutine_27b20(*a2, a1 + 488);
  NgxRoutine_27b20(*a2, a1 + 536);
  NgxRoutine_27b20(*a2, a1 + 584);
  NgxRoutine_27b20(*a2, a1 + 632);
  return NgxRoutine_27b20(*a2, a1 + 680);
}

__int64 NgxHr_296f0(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  return NgxRoutine_27b30(*a2);
}

__int64 NgxHr_29780(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  return NgxRoutine_27b30(*a2);
}

__int64 NgxHr_297f0(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27bf0(*a2, a1 + 8);
  NgxRoutine_27bf0(*a2, a1 + 56);
  NgxRoutine_27bf0(*a2, a1 + 104);
  NgxRoutine_27bf0(*a2, a1 + 152);
  NgxRoutine_27bf0(*a2, a1 + 200);
  NgxRoutine_27bf0(*a2, a1 + 248);
  NgxRoutine_27bf0(*a2, a1 + 296);
  NgxRoutine_27bf0(*a2, a1 + 344);
  NgxRoutine_27bf0(*a2, a1 + 392);
  NgxRoutine_27bf0(*a2, a1 + 440);
  NgxRoutine_27bf0(*a2, a1 + 488);
  NgxRoutine_27bf0(*a2, a1 + 536);
  NgxRoutine_27bf0(*a2, a1 + 584);
  NgxRoutine_27bf0(*a2, a1 + 632);
  return NgxRoutine_27bf0(*a2, a1 + 680);
}

__int64 NgxHr_298d0(__int64 a1)
{
  NgxRoutine_29cc0(a1 + 8);
  NgxRoutine_29cc0(a1 + 56);
  NgxRoutine_29cc0(a1 + 104);
  NgxRoutine_29cc0(a1 + 152);
  NgxRoutine_29cc0(a1 + 200);
  NgxRoutine_29cc0(a1 + 248);
  NgxRoutine_29cc0(a1 + 296);
  NgxRoutine_29cc0(a1 + 344);
  NgxRoutine_29cc0(a1 + 392);
  NgxRoutine_29cc0(a1 + 440);
  NgxRoutine_29cc0(a1 + 488);
  NgxRoutine_29cc0(a1 + 536);
  NgxRoutine_29cc0(a1 + 584);
  NgxRoutine_29cc0(a1 + 632);
  return NgxRoutine_29cc0(a1 + 680);
}

__int64 NgxHr_29970(__int64 a1, _QWORD* a2)
{
  NgxRoutine_27b20(*a2, a1 + 8);
  NgxRoutine_27b20(*a2, a1 + 56);
  NgxRoutine_27b20(*a2, a1 + 152);
  return NgxRoutine_27b20(*a2, a1 + 104);
}

__int64 NgxHr_299d0(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  return NgxRoutine_27b30(*a2);
}

__int64 NgxHr_29a30(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27bf0(*a2, a1 + 8);
  NgxRoutine_27bf0(*a2, a1 + 56);
  NgxRoutine_27bf0(*a2, a1 + 152);
  return NgxRoutine_27bf0(*a2, a1 + 104);
}

__int64 NgxHr_29a90(__int64 a1)
{
  NgxRoutine_29cc0(a1 + 8);
  NgxRoutine_29cc0(a1 + 56);
  NgxRoutine_29cc0(a1 + 152);
  return NgxRoutine_29cc0(a1 + 104);
}

__int64 NgxHr_29ad0(__int64 a1, _QWORD* a2)
{
  NgxRoutine_27b20(*a2, a1 + 8);
  NgxRoutine_27b20(*a2, a1 + 104);
  NgxRoutine_27b20(*a2, a1 + 152);
  NgxRoutine_27b20(*a2, a1 + 200);
  return NgxRoutine_27b20(*a2, a1 + 56);
}

__int64 NgxHr_29b30(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  return NgxRoutine_27b30(*a2);
}

#pragma GCC visibility pop
