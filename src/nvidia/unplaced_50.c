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
