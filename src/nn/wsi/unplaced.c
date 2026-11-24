#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_wsi_5edba0(unsigned __int8* a1);

__int64 nn_wsi_5edba0(unsigned __int8* a1)
{
  int v1;
  int v3;
  int v4;

  v1 = *a1;
  if (v1 == 78) {
    if (a1[1] != 86) {
      goto LABEL_6;
    }
    v1 = a1[2];
  }
  if (v1 == 78) {
    return 0;
  }
LABEL_6:
  if (*a1 == 86 && a1[1] == 117 && a1[2] == 108 && a1[3] == 107 &&
      a1[4] == 97 && a1[5] == 110) {
    return 2;
  }
  v3 = *a1;
  if (v3 == 79) {
    v3 = a1[1];
    if (v3 == 112) {
      v3 = a1[2];
      if (v3 == 101) {
        v3 = a1[3];
        if (v3 == 110) {
          v3 = a1[4];
          if (v3 == 71) {
            v3 = a1[5];
            v4 = 76;
          }
          else {
            v4 = 71;
          }
        }
        else {
          v4 = 110;
        }
      }
      else {
        v4 = 101;
      }
    }
    else {
      v4 = 112;
    }
  }
  else {
    v4 = 79;
  }
  if (v3 != v4) {
    GameRoutine_856170();
  }
  return 1;
}

#pragma GCC visibility pop
