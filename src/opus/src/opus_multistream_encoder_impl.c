#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 free_plt(_QWORD);
__int64 lrint_plt(double);
__int64 malloc_plt(_QWORD);
__int64 nncodecLibopus_opus_encoder_get_size_plt(_QWORD);
__int64 opus_multistream_encoder_init_impl(_QWORD, _QWORD, _QWORD, _QWORD,
                                           _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nncodecLibopus_opus_multistream_encoder_create(
    unsigned int a1, unsigned int a2, int a3, unsigned int a4, __int64 a5,
    unsigned int a6, int* a7);
__int64 opus_multistream_encoder_321880(__int64 a1);
__int64 opus_copy_channel_in_float(__int64 result, int a2, __int64 a3, int a4,
                                   int a5, int a6);
_WORD* opus_multistream_encoder_321a40(_WORD* result, int a2, __int64 a3,
                                       int a4, int a5, int a6);

__int64 nncodecLibopus_opus_multistream_encoder_create(unsigned int a1,
                                                       unsigned int a2, int a3,
                                                       unsigned int a4,
                                                       __int64 a5,
                                                       unsigned int a6, int* a7)
{
  __int64 result;
  int v8;
  unsigned int v10;
  int* v16;
  int v17;
  int v18;
  __int64 v19;

  if (a2 - 256 < 0xFFFFFF01 || (a4 & 0x80000000) != 0 || a3 < 1 ||
      (v10 = a3 - a4, a3 < (int)a4) || a3 > (int)(255 - a4)) {
    result = 0;
    if (a7 == nullptr) {
      return result;
    }
    v8 = -1;
    goto LABEL_4;
  }
  v16 = a7;
  v17 = nncodecLibopus_opus_encoder_get_size_plt(2);
  v18 = nncodecLibopus_opus_encoder_get_size_plt(1);
  result = malloc_plt((int)(((v18 + 7) & 0xFFFFFFF8) * v10 +
                            ((v17 + 7) & 0xFFFFFFF8) * a4 + 296));
  if (result == 0) {
    if (v16 == nullptr) {
      return result;
    }
    a7 = v16;
    v8 = -7;
    goto LABEL_4;
  }
  v19 = result;
  v8 = opus_multistream_encoder_init_impl(result, a1, a2, (unsigned int)a3, a4,
                                          a5, a6, 0);
  if (v8 == 0) {
    result = v19;
    a7 = v16;
    if (v16 == nullptr) {
      return result;
    }
    goto LABEL_4;
  }
  free_plt(v19);
  result = 0;
  a7 = v16;
  if (v16 != nullptr) {
  LABEL_4:
    *a7 = v8;
  }
  return result;
}

__int64 opus_multistream_encoder_321880(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  int v27;

  v2 = nncodecLibopus_opus_encoder_get_size_plt(2);
  v3 = nncodecLibopus_opus_encoder_get_size_plt(1);
  v4 = *(_DWORD*)(a1 + 4);
  v5 = a1 + 296;
  if (v4 >= 1) {
    v6 = *(_DWORD*)(a1 + 8);
    v7 = *(_DWORD*)(a1 + 4) & 7;
    if ((unsigned int)v4 >= 8) {
      v9 = v4 & 0x7FFFFFF8;
      v8 = 0;
      do {
        if (v8 >= v6) {
          v10 = v3;
        }
        else {
          v10 = v2;
        }
        v11 = v5 + (int)((v10 + 7) & 0xFFFFFFF8);
        if (v8 + 1 >= v6) {
          v12 = v3;
        }
        else {
          v12 = v2;
        }
        v13 = v11 + (int)((v12 + 7) & 0xFFFFFFF8);
        if (v8 + 2 >= v6) {
          v14 = v3;
        }
        else {
          v14 = v2;
        }
        v15 = v13 + (int)((v14 + 7) & 0xFFFFFFF8);
        if (v8 + 3 >= v6) {
          v16 = v3;
        }
        else {
          v16 = v2;
        }
        v17 = v15 + (int)((v16 + 7) & 0xFFFFFFF8);
        if (v8 + 4 >= v6) {
          v18 = v3;
        }
        else {
          v18 = v2;
        }
        v19 = v17 + (int)((v18 + 7) & 0xFFFFFFF8);
        if (v8 + 5 >= v6) {
          v20 = v3;
        }
        else {
          v20 = v2;
        }
        v21 = v19 + (int)((v20 + 7) & 0xFFFFFFF8);
        if (v8 + 6 >= v6) {
          v22 = v3;
        }
        else {
          v22 = v2;
        }
        v23 = v21 + (int)((v22 + 7) & 0xFFFFFFF8);
        v24 = v8 + 7;
        v8 += 8;
        if (v24 >= v6) {
          v25 = v3;
        }
        else {
          v25 = v2;
        }
        v5 = v23 + (int)((v25 + 7) & 0xFFFFFFF8);
      } while (v8 != v9);
    }
    else {
      v8 = 0;
    }
    for (; v7 != 0; v5 += (int)((v27 + 7) & 0xFFFFFFF8)) {
      if (v8++ < v6) {
        v27 = v2;
      }
      else {
        v27 = v3;
      }
      --v7;
    }
  }
  return v5;
}

_WORD* opus_multistream_encoder_321a40(_WORD* result, int a2, __int64 a3,
                                       int a4, int a5, int a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _WORD* v12;
  __int64 v13;
  _WORD* v14;
  _WORD* v15;
  __int16* v16;
  __int16 v17;
  __int16* v18;
  _WORD* v19;
  __int16 v20;
  __int16* v21;
  _WORD* v22;
  __int16 v23;
  __int16* v24;
  _WORD* v25;
  __int16 v26;
  __int16* v27;
  _WORD* v28;
  __int16 v29;
  __int16* v30;
  __int16* v31;
  _WORD* v32;
  __int16* v33;
  __int16 v34;

  if (a6 >= 1) {
    v6 = a4;
    v7 = a2;
    v8 = a6 & 7;
    v9 = a2;
    v10 = a4;
    if ((unsigned int)a6 >= 8) {
      v12 = (_WORD*)(a3 + 2LL * a5);
      v13 = a6 & 0x7FFFFFF8;
      v11 = 0;
      v14 = result;
      do {
        v15 = &v14[v7];
        v11 += 8;
        *v14 = *v12;
        v16 = &v12[v6];
        v14 += 8 * v7;
        v12 += 8 * v6;
        v17 = *v16;
        v18 = &v16[v10];
        *v15 = v17;
        v19 = &v15[v9];
        v20 = *v18;
        v21 = &v18[v10];
        *v19 = v20;
        v22 = &v19[v9];
        v23 = *v21;
        v24 = &v21[v10];
        *v22 = v23;
        v25 = &v22[v9];
        v26 = *v24;
        v27 = &v24[v10];
        *v25 = v26;
        v28 = &v25[v9];
        v29 = *v27;
        v30 = &v27[v10];
        *v28 = v29;
        v31 = &v28[v9];
        *v31 = *v30;
        v31[v9] = v30[v10];
      } while (v13 != v11);
    }
    else {
      v11 = 0;
    }
    if (v8 != 0) {
      v32 = &result[v11 * v7];
      v33 = (__int16*)(a3 + 2 * v11 * v6 + 2LL * a5);
      do {
        v34 = *v33;
        v33 = (__int16*)((char*)v33 + v10 * 2);
        --v8;
        *v32 = v34;
        v32 = (_WORD*)((char*)v32 + v9 * 2);
      } while (v8 != 0);
    }
  }
  return result;
}

__int64 opus_copy_channel_in_float(__int64 result, int a2, __int64 a3, int a4,
                                   int a5, int a6)
{
  float* v6;
  __int64 v7;
  __int64 v8;
  _WORD* v9;
  __int64 i;

  if (a6 >= 1) {
    v6 = (float*)(a3 + 4LL * a5);
    v7 = 2LL * a2;
    v8 = 4LL * a4;
    v9 = (_WORD*)result;
    for (i = (unsigned int)a6; i != 0; --i) {
      result = lrint_plt(fminf(fmaxf(*v6 * 32768.0, -32768.0), 32767.0));
      *v9 = result;
      v9 = (_WORD*)((char*)v9 + v7);
      v6 = (float*)((char*)v6 + v8);
    }
  }
  return result;
}

#pragma GCC visibility pop
