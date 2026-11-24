#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float physx_source_lowlevelaabb_src_3c98c0(__int64 a1);

float physx_source_lowlevelaabb_src_3c98c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float** v6;
  unsigned int* v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  float* v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  float result;
  unsigned int v16;
  unsigned int* v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_DWORD*)(a1 + 48) >= 2u) {
    v1 = *(_QWORD*)(a1 + 40);
    v2 = *(_DWORD*)(v1 + 728);
    if (v2 != 0) {
      v3 = *(_QWORD*)(v1 + 720);
      v4 = *(_QWORD*)(*(_QWORD*)(v1 + 392) + 24LL);
      if (v2 == 1) {
        v5 = 0;
      }
      else {
        v6 = (float**)(v3 + 8);
        v5 = 0;
        do {
          v7 = (unsigned int*)*(v6 - 1);
          v5 += 2;
          v8 = v4 + 24LL * *v7;
          *(_QWORD*)v8 = *(_QWORD*)(v7 + 15);
          v9 = v7[18];
          *(_DWORD*)(v8 + 8) = v7[17];
          *(_DWORD*)(v8 + 12) = v9;
          v10 = v7[20];
          *(_DWORD*)(v8 + 16) = v7[19];
          *(_DWORD*)(v8 + 20) = v10;
          v11 = *v6;
          v6 += 2;
          v12 = *((_DWORD*)v11 + 16);
          v13 = v4 + 24LL * *(unsigned int*)v11;
          *(float*)v13 = v11[15];
          *(_DWORD*)(v13 + 4) = v12;
          v14 = *((_DWORD*)v11 + 18);
          *(float*)(v13 + 8) = v11[17];
          *(_DWORD*)(v13 + 12) = v14;
          result = v11[19];
          v16 = *((_DWORD*)v11 + 20);
          *(float*)(v13 + 16) = result;
          *(_DWORD*)(v13 + 20) = v16;
        } while ((v2 & 0xFFFFFFFE) != v5);
      }
      if ((v2 & 1) != 0) {
        v17 = *(unsigned int**)(v3 + 8 * v5);
        v18 = v4 + 24LL * *v17;
        *(_QWORD*)v18 = *(_QWORD*)(v17 + 15);
        v19 = v17[18];
        *(_DWORD*)(v18 + 8) = v17[17];
        *(_DWORD*)(v18 + 12) = v19;
        result = *((float*)v17 + 19);
        v20 = v17[20];
        *(float*)(v18 + 16) = result;
        *(_DWORD*)(v18 + 20) = v20;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
