#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_8641a0(__int64, int, int);
__int64 SdkRoutine_8641b0(__int64, __int16, int);
__int64 nn_audio_util_MemSet_plt(__int64, int, unsigned __int64);
__int64 nn_sf_cmif_client_2b3f00(__int64 result, _QWORD* a2, __int64 a3, int a4,
                                 char a5, __int64 a6);

__int64 nn_sf_cmif_client_2b3f00(__int64 result, _QWORD* a2, __int64 a3, int a4,
                                 char a5, __int64 a6)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  _QWORD v31[4];
  _QWORD v32[4];

  if ((a5 & 1) != 0) {
    {
      v7 = *(int*)(result + 112);
      __asm__ volatile("" ::"r"(v7));
    }
    {
      v8 = *a2 + a3 * v7;
      __asm__ volatile("" ::"r"(v8));
    }
    v9 = (int)v7 * (__int64)a4;
    if (a6 == 4) {
      return SdkRoutine_8641a0(v8, 0, v9);
    }
    if (a6 == 2) {
      return SdkRoutine_8641b0(v8, 0, v9);
    }
    return nn_audio_util_MemSet_plt(v8, 0, a6 * v9);
  }
  {
    v10 = *(unsigned int*)(result + 112);
    __asm__ volatile("" ::"r"(v10));
  }
  memset(v32, 0, sizeof(v32));
  memset(v31, 0, sizeof(v31));
  if ((int)v10 >= 1) {
    v11 = v10 & 7;
    if ((unsigned int)v10 < 8) {
      v12 = 0;
      if ((v10 & 7) == 0) {
        goto LABEL_16;
      }
      goto LABEL_14;
    }
    v13 = a2 + 4;
    v14 = 0;
    v15 = v32;
    do {
      v14 -= 8;
      {
        v16 = *(v13 - 3) + a3;
        __asm__ volatile("" ::"r"(v16));
      }
      *(v15 - 4) = *(v13 - 4) + a3;
      *(v15 - 3) = v16;
      {
        v17 = *(v13 - 1) + a3;
        __asm__ volatile("" ::"r"(v17));
      }
      *(v15 - 2) = *(v13 - 2) + a3;
      *(v15 - 1) = v17;
      {
        v18 = v13[1] + a3;
        __asm__ volatile("" ::"r"(v18));
      }
      *v15 = *v13 + a3;
      v15[1] = v18;
      {
        v19 = v13[2];
        __asm__ volatile("" ::"r"(v19));
      }
      {
        v20 = v13[3];
        __asm__ volatile("" ::"r"(v20));
      }
      v13 += 8;
      v15[2] = v19 + a3;
      v15[3] = v20 + a3;
      v15 += 8;
    } while (-(v10 & 0x7FFFFFF8) != v14);
    v12 = -v14;
    if ((v10 & 7) != 0) {
    LABEL_14:
      {
        v21 = &v31[v12];
        __asm__ volatile("" ::"r"(v21));
      }
      {
        v22 = &a2[v12];
        __asm__ volatile("" ::"r"(v22));
      }
      do {
        {
          v23 = *v22++;
          __asm__ volatile("" ::"r"(v23));
        }
        --v11;
        *v21++ = v23 + a3;
      } while (v11 != 0);
    }
  }
LABEL_16:
  if (a6 == 2) {
    if ((int)v10 >= 1) {
      v26 = v31;
      do {
        {
          v27 = *v26++;
          __asm__ volatile("" ::"r"(v27));
        }
        result = SdkRoutine_8641b0(v27, 0, a4);
        --v10;
      } while (v10 != 0);
    }
  }
  else if (a6 == 4) {
    if ((int)v10 >= 1) {
      v24 = v31;
      do {
        {
          v25 = *v24++;
          __asm__ volatile("" ::"r"(v25));
        }
        result = SdkRoutine_8641a0(v25, 0, a4);
        --v10;
      } while (v10 != 0);
    }
  }
  else if ((int)v10 >= 1) {
    v28 = v31;
    v29 = a6 * a4;
    do {
      {
        v30 = *v28++;
        __asm__ volatile("" ::"r"(v30));
      }
      result = nn_audio_util_MemSet_plt(v30, 0, v29);
      --v10;
    } while (v10 != 0);
  }
  return result;
}

#pragma GCC visibility pop
