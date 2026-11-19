#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void angelscript_angelscript_source_264300(
    _OWORD* a1, int* a2, int a3,
    long double (*a4)(long double, long double, long double, long double,
                      long double, long double, long double, long double),
    __int64 a5, _QWORD* a6);

void angelscript_angelscript_source_264300(
    _OWORD* a1, int* a2, int a3,
    long double (*a4)(long double, long double, long double, long double,
                      long double, long double, long double, long double),
    __int64 a5, _QWORD* a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int* v14;
  long double v15;
  long double v16;
  long double v17;
  long double v18;
  long double v19;
  long double v20;
  long double v21;
  long double v22;
  __int64* v23;
  _DWORD* i;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v4", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v5", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v6", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v7", "=w")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v41 = v6;
  v40 = v7;
  v39 = v8;
  v38 = v9;
  v37 = v10;
  v36 = v11;
  v34 = a6;
  v14 = a2;
  v15 = *((long double*)a1 + 36);
  v16 = *((long double*)a1 + 37);
  v17 = *((long double*)a1 + 38);
  v18 = *((long double*)a1 + 39);
  v19 = *((long double*)a1 + 40);
  v20 = *((long double*)a1 + 41);
  v21 = *((long double*)a1 + 42);
  v22 = *((long double*)a1 + 43);
  if (a3 != 0 && *a2 > 0) {
    v14 = a2 + 1;
    if (a2[1] > 0) {
      v14 = a2 + 2;
      if (a2[2] == 1 || *v14 > 1) {
        v14 = a2 + 3;
        if (a2[3] == 1 || *v14 > 1) {
          v14 = a2 + 4;
          if (a2[4] == 1 || *v14 > 1) {
            v14 = a2 + 5;
            if (a2[5] == 1 || *v14 > 1) {
              v14 = a2 + 6;
              if (a2[6] == 1 || *v14 > 1) {
                v14 = a2 + 7;
                if (a2[7] == 1) {
                  v14 = a2 + 8;
                }
                else if (*v14 > 1) {
                  v14 = a2 + 8;
                }
              }
            }
          }
        }
      }
    }
  }
  if (*v14 != 0) {
    v23 = &v33;
    for (i = a1 + 4;; i += 2) {
      if (*v14 == 1) {
        *(_DWORD*)v23 = *(_DWORD*)i;
      }
      else {
        if (*v14 <= 1) {
          break;
        }
        *v23 = *(_QWORD*)i;
      }
      ++v14;
      ++v23;
    }
  }
  *((long double*)a1 +
    36) = a4(v15, v16, v17, v18, v19, v20, v21, v22),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v4", "=w")),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v5", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v6", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v7", "=w")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[37] = v25;
  a1[38] = v26;
  a1[39] = v27;
  a1[40] = v28;
  a1[41] = v29;
  a1[42] = v30;
  a1[43] = v31;
  *v34 = v32;
}

#pragma GCC visibility pop
