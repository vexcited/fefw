#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* NgxRoutine_36f0(_DWORD* result, unsigned int*, unsigned int);
extern _UNKNOWN NgxData_f55ac;
extern _UNKNOWN NgxData_f5830;
extern _UNKNOWN NgxData_f591c;
extern _UNKNOWN NgxData_f59e4;
extern _UNKNOWN NgxData_f5a84;
extern _UNKNOWN NgxData_f5adc;
extern _UNKNOWN NgxData_f5b74;
extern _UNKNOWN NgxData_f5c64;
extern _UNKNOWN NgxData_f5d48;
extern _UNKNOWN NgxData_f5df4;
extern _UNKNOWN NgxData_f5eb8;
extern _UNKNOWN NgxData_f5f48;
_DWORD* nvidia_4c00(__int64 a1);
_DWORD* nvidia_4d80(__int64 a1);
_DWORD* nvidia_5680(__int64 a1);
char* nvidia_b4020(int a1);

_DWORD* nvidia_4c00(__int64 a1)
{
  int v1;
  int v2;
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  _DWORD* result;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  int v22;
  int v23;
  int v24;

  v1 = *(_DWORD*)(a1 + 100);
  v2 = *(_DWORD*)(a1 + 104);
  v5 = v1 + 3;
  v4 = v1 < -3;
  v6 = v1 + 6;
  if (!v4) {
    v6 = v5;
  }
  v7 = v2 + 7;
  v4 = v2 < -7;
  v8 = v2 + 14;
  if (!v4) {
    v8 = v7;
  }
  v9 = v8 >> 3;
  v10 = v9 * (v6 >> 2);
  *(_DWORD*)(a1 + 308) = v9;
  *(_DWORD*)(a1 + 304) = v10;
  NgxRoutine_36f0((_DWORD*)(a1 + 312), (unsigned int*)(a1 + 316), v10);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 160) = 64;
  v12 = *(int*)(a1 + 120) * *(int*)(a1 + 116);
  v13 = *(int*)(a1 + 92);
  v14 = v12 - 1;
  v15 = v12 - 2;
  if (v12 >= 2) {
    v16 = 2 * v13;
    v17 = v14 & 7;
    if (v15 < 7) {
      v18 = 0;
      if ((v14 & 7) == 0) {
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    v19 = (__int64*)(a1 + 224);
    v20 = 0;
    do {
      *(v19 - 7) = v16;
      *(v19 - 6) = v16;
      *(v19 - 5) = v16;
      *(v19 - 4) = v16;
      v20 -= 8;
      *(v19 - 3) = v16;
      *(v19 - 2) = v16;
      *(v19 - 1) = v16;
      *v19 = v16;
      v19 += 8;
    } while (-(__int64)(v14 & 0x7FFFFFF8) != v20);
    v18 = -v20;
    if ((v14 & 7) != 0) {
    LABEL_12:
      v21 = (__int64*)(a1 + 8 * v18 + 168);
      do {
        *v21++ = v16;
        --v17;
      } while (v17 != 0);
    }
  }
LABEL_14:
  *(_QWORD*)(a1 + 8LL * v14 + 168) = 64 - 2LL * (int)v13 * v14;
  v22 = v13 + 31;
  v4 = (int)v13 < -31;
  v23 = v13 + 62;
  if (!v4) {
    v23 = v22;
  }
  v24 = (v23 >> 5) - 1;
  *(_DWORD*)(a1 + 352) = v24;
  *(_DWORD*)(a1 + 356) = 32 * v24;
  return result;
}

_DWORD* nvidia_4d80(__int64 a1)
{
  int v1;
  int v2;
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  _DWORD* result;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  int v22;
  int v23;
  int v24;

  v1 = *(_DWORD*)(a1 + 100);
  v2 = *(_DWORD*)(a1 + 104);
  v5 = v1 + 3;
  v4 = v1 < -3;
  v6 = v1 + 6;
  if (!v4) {
    v6 = v5;
  }
  v7 = v2 + 7;
  v4 = v2 < -7;
  v8 = v2 + 14;
  if (!v4) {
    v8 = v7;
  }
  v9 = v8 >> 3;
  v10 = v9 * (v6 >> 2);
  *(_DWORD*)(a1 + 308) = v9;
  *(_DWORD*)(a1 + 304) = v10;
  NgxRoutine_36f0((_DWORD*)(a1 + 312), (unsigned int*)(a1 + 316), v10);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 160) = 32;
  v12 = *(int*)(a1 + 120) * *(int*)(a1 + 116);
  v13 = *(int*)(a1 + 92);
  v14 = v12 - 1;
  v15 = v12 - 2;
  if (v12 >= 2) {
    v16 = 2 * v13;
    v17 = v14 & 7;
    if (v15 < 7) {
      v18 = 0;
      if ((v14 & 7) == 0) {
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    v19 = (__int64*)(a1 + 224);
    v20 = 0;
    do {
      *(v19 - 7) = v16;
      *(v19 - 6) = v16;
      *(v19 - 5) = v16;
      *(v19 - 4) = v16;
      v20 -= 8;
      *(v19 - 3) = v16;
      *(v19 - 2) = v16;
      *(v19 - 1) = v16;
      *v19 = v16;
      v19 += 8;
    } while (-(__int64)(v14 & 0x7FFFFFF8) != v20);
    v18 = -v20;
    if ((v14 & 7) != 0) {
    LABEL_12:
      v21 = (__int64*)(a1 + 8 * v18 + 168);
      do {
        *v21++ = v16;
        --v17;
      } while (v17 != 0);
    }
  }
LABEL_14:
  *(_QWORD*)(a1 + 8LL * v14 + 168) = 64 - 2LL * (int)v13 * v14;
  v22 = v13 + 31;
  v4 = (int)v13 < -31;
  v23 = v13 + 62;
  if (!v4) {
    v23 = v22;
  }
  v24 = (v23 >> 5) - 1;
  *(_DWORD*)(a1 + 352) = v24;
  *(_DWORD*)(a1 + 356) = 32 * v24;
  return result;
}

_DWORD* nvidia_5680(__int64 a1)
{
  int v1;
  int v2;
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  _DWORD* result;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  int v22;
  int v23;
  int v24;

  v1 = *(_DWORD*)(a1 + 100);
  v2 = *(_DWORD*)(a1 + 104);
  v5 = v1 + 3;
  v4 = v1 < -3;
  v6 = v1 + 6;
  if (!v4) {
    v6 = v5;
  }
  v7 = v2 + 7;
  v4 = v2 < -7;
  v8 = v2 + 14;
  if (!v4) {
    v8 = v7;
  }
  v9 = v8 >> 3;
  v10 = v9 * (v6 >> 2);
  *(_DWORD*)(a1 + 308) = v9;
  *(_DWORD*)(a1 + 304) = v10;
  NgxRoutine_36f0((_DWORD*)(a1 + 312), (unsigned int*)(a1 + 316), v10);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 160) = 64;
  v12 = *(int*)(a1 + 120) * *(int*)(a1 + 116);
  v13 = *(int*)(a1 + 92);
  v14 = v12 - 1;
  v15 = v12 - 2;
  if (v12 >= 2) {
    v16 = 2 * v13;
    v17 = v14 & 7;
    if (v15 < 7) {
      v18 = 0;
      if ((v14 & 7) == 0) {
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    v19 = (__int64*)(a1 + 224);
    v20 = 0;
    do {
      *(v19 - 7) = v16;
      *(v19 - 6) = v16;
      *(v19 - 5) = v16;
      *(v19 - 4) = v16;
      v20 -= 8;
      *(v19 - 3) = v16;
      *(v19 - 2) = v16;
      *(v19 - 1) = v16;
      *v19 = v16;
      v19 += 8;
    } while (-(__int64)(v14 & 0x7FFFFFF8) != v20);
    v18 = -v20;
    if ((v14 & 7) != 0) {
    LABEL_12:
      v21 = (__int64*)(a1 + 8 * v18 + 168);
      do {
        *v21++ = v16;
        --v17;
      } while (v17 != 0);
    }
  }
LABEL_14:
  *(_QWORD*)(a1 + 8LL * v14 + 168) = 64 - 2LL * (int)v13 * v14;
  v22 = v13 + 31;
  v4 = (int)v13 < -31;
  v23 = v13 + 62;
  if (!v4) {
    v23 = v22;
  }
  v24 = (v23 >> 5) - 1;
  *(_DWORD*)(a1 + 352) = v24;
  *(_DWORD*)(a1 + 356) = 32 * v24;
  return result;
}

char* nvidia_b4020(int a1)
{
  char* result;

  switch (a1) {
  case -1160773632:
    result = (const char*)&NgxData_f5a84;
    break;
  case -1160773631:
    result = (const char*)&NgxData_f5b74;
    break;
  case -1160773630:
    result = (const char*)&NgxData_f5eb8;
    break;
  case -1160773629:
    result = (const char*)&NgxData_f5d48;
    break;
  case -1160773628:
    result = (const char*)&NgxData_f5adc;
    break;
  case -1160773627:
    result = "N";
    break;
  case -1160773626:
    result = "N";
    break;
  case -1160773625:
    result = (const char*)&NgxData_f5f48;
    break;
  case -1160773624:
    result = "N";
    break;
  case -1160773623:
    result = (const char*)&NgxData_f5c64;
    break;
  case -1160773622:
    result = (const char*)&NgxData_f591c;
    break;
  case -1160773621:
    result = (const char*)&NgxData_f5830;
    break;
  case -1160773620:
    result = "N";
    break;
  case -1160773619:
    result = "N";
    break;
  case -1160773618:
    result = (const char*)&NgxData_f59e4;
    break;
  case -1160773617:
    result = (const char*)&NgxData_f5df4;
    break;
  case -1160773616:
    result = (const char*)&NgxData_f55ac;
    break;
  case -1160773615:
    result = "N";
    break;
  case -1160773614:
    result = "N";
    break;
  default:
    if (a1 == 1) {
      result = "N";
    }
    else {
      result = "u";
    }
    break;
  }
  return result;
}

#pragma GCC visibility pop
