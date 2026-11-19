#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* nn_vfx_5d7520(__int64* result, __int64* a2, __int64* a3, __int64* a4);

__int64* nn_vfx_5d7520(__int64* result, __int64* a2, __int64* a3, __int64* a4)
{

#pragma clang fp contract(off)
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v4 = *(float*)a2;
  if (*(float*)a2 < *(float*)result ||
      *(float*)a2 <= *(float*)result &&
          (signed __int32)*((_DWORD*)a2 + 1) >=
              (signed __int32)*((_DWORD*)result + 1)) {
    v5 = *(float*)a3;
    if (*(float*)a3 >= v4 &&
        (*(float*)a3 > v4 || (signed __int32)*((_DWORD*)a3 + 1) <
                                 (signed __int32)*((_DWORD*)a2 + 1))) {
      v6 = *a2;
      *a2 = *a3;
      *a3 = v6;
      v5 = *(float*)&v6;
      if (*(float*)a2 >= *(float*)result &&
          (*(float*)a2 > *(float*)result ||
           (signed __int32)*((_DWORD*)a2 + 1) <
               (signed __int32)*((_DWORD*)result + 1))) {
        v7 = *result;
        *result = *a2;
        *a2 = v7;
        v5 = *(float*)a3;
      }
    }
  }
  else if (*(float*)a3 < v4 ||
           *(float*)a3 <= v4 && (signed __int32)*((_DWORD*)a3 + 1) >=
                                    (signed __int32)*((_DWORD*)a2 + 1)) {
    v8 = *result;
    *result = *a2;
    *a2 = v8;
    v5 = *(float*)a3;
    if (*(float*)a3 >= *(float*)&v8 &&
        (*(float*)a3 > *(float*)&v8 ||
         (signed __int32)*((_DWORD*)a3 + 1) < SHIDWORD(v8))) {
      v5 = *(float*)&v8;
      *a2 = *a3;
      *a3 = v8;
    }
  }
  else {
    v9 = *result;
    *result = *a3;
    *a3 = v9;
    v5 = *(float*)&v9;
  }
  if (*(float*)a4 >= v5 &&
      (*(float*)a4 > v5 || (signed __int32)*((_DWORD*)a4 + 1) <
                               (signed __int32)*((_DWORD*)a3 + 1))) {
    v10 = *a3;
    *a3 = *a4;
    *a4 = v10;
    if (*(float*)a3 >= *(float*)a2 &&
        (*(float*)a3 > *(float*)a2 || (signed __int32)*((_DWORD*)a3 + 1) <
                                          (signed __int32)*((_DWORD*)a2 + 1))) {
      v11 = *a2;
      *a2 = *a3;
      *a3 = v11;
      if (*(float*)a2 >= *(float*)result &&
          (*(float*)a2 > *(float*)result ||
           (signed __int32)*((_DWORD*)a2 + 1) <
               (signed __int32)*((_DWORD*)result + 1))) {
        v12 = *result;
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
