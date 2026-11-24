#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 free_plt(_QWORD);
__int64 malloc_plt(_QWORD);
__int64 nncodecLibopus_opus_decoder_get_size_plt(_QWORD);
__int64 nncodecLibopus_opus_multistream_decoder_init_plt(_QWORD, _QWORD, _QWORD,
                                                         _QWORD, _QWORD,
                                                         _QWORD);
__int64 nncodecLibopus_opus_multistream_decoder_create(unsigned int a1,
                                                       unsigned int a2, int a3,
                                                       unsigned int a4,
                                                       __int64 a5, _DWORD* a6);
__int64 opus_multistream_decoder_31dec0(__int64 result, int a2, int a3,
                                        _WORD* a4, int a5, int a6);
__int64 opus_multistream_decoder_31e0e0(__int64 result, int a2, int a3,
                                        __int16* a4, int a5, int a6);

__int64 nncodecLibopus_opus_multistream_decoder_create(unsigned int a1,
                                                       unsigned int a2, int a3,
                                                       unsigned int a4,
                                                       __int64 a5, _DWORD* a6)
{
  unsigned int v8;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;

  if (a2 - 256 < 0xFFFFFF01 || (a4 & 0x80000000) != 0 || a3 < 1 ||
      (v8 = a3 - a4, a3 < (int)a4) || a3 > (int)(255 - a4)) {
    if (a6 != nullptr) {
      *a6 = -1;
      return 0;
    }
  }
  else {
    v14 = nncodecLibopus_opus_decoder_get_size_plt(2);
    v15 = nncodecLibopus_opus_decoder_get_size_plt(1);
    v16 = malloc_plt((int)(((v15 + 7) & 0xFFFFFFF8) * v8 +
                           ((v14 + 7) & 0xFFFFFFF8) * a4 + 272));
    if (v16 != 0) {
      v17 = v16;
      v18 = nncodecLibopus_opus_multistream_decoder_init_plt(
          v16, a1, a2, (unsigned int)a3, a4, a5);
      if (a6 != nullptr) {
        *a6 = v18;
      }
      if (v18 == 0) {
        return v17;
      }
      free_plt(v17);
    }
    else if (a6 != nullptr) {
      *a6 = -7;
      return 0;
    }
  }
  return 0;
}

__int64 opus_multistream_decoder_31dec0(__int64 result, int a2, int a3,
                                        _WORD* a4, int a5, int a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _WORD* v15;
  __int64 v16;
  _WORD* v17;
  _WORD* v18;
  __int16* v19;
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
  _WORD* v31;
  __int16 v32;
  __int16* v33;
  __int16* v34;
  __int16* v35;
  _WORD* v36;
  __int16 v37;
  _WORD* v38;
  _WORD* v39;
  _WORD* v40;
  _WORD* v41;
  _WORD* v42;
  _WORD* v43;
  _WORD* v44;
  _WORD* v45;

  if (a4 != nullptr) {
    if (a6 >= 1) {
      v6 = a5;
      v7 = a2;
      v8 = a6 & 7;
      v9 = a2;
      v10 = a5;
      if ((unsigned int)a6 >= 8) {
        v15 = (_WORD*)(result + 2LL * a3);
        v16 = a6 & 0x7FFFFFF8;
        v11 = 0;
        v17 = a4;
        do {
          v18 = &v15[v7];
          v11 += 8;
          *v15 = *v17;
          v19 = &v17[v6];
          v15 += 8 * v7;
          v17 += 8 * v6;
          v20 = *v19;
          v21 = &v19[v10];
          *v18 = v20;
          v22 = &v18[v9];
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
          v32 = *v30;
          v33 = &v30[v10];
          *v31 = v32;
          v34 = &v31[v9];
          *v34 = *v33;
          v34[v9] = v33[v10];
        } while (v16 != v11);
      }
      else {
        v11 = 0;
      }
      if (v8 != 0) {
        v35 = &a4[v11 * v6];
        v36 = (_WORD*)(result + 2 * v11 * v7 + 2LL * a3);
        do {
          v37 = *v35;
          v35 = (__int16*)((char*)v35 + v10 * 2);
          --v8;
          *v36 = v37;
          v36 = (_WORD*)((char*)v36 + v9 * 2);
        } while (v8 != 0);
      }
    }
  }
  else if (a6 >= 1) {
    v12 = a6 & 7;
    v13 = a2;
    if ((unsigned int)a6 >= 8) {
      v38 = (_WORD*)(result + 2LL * a3);
      v14 = 0;
      do {
        v39 = &v38[a2];
        *v38 = 0;
        v14 += 8;
        v38 += 8 * a2;
        *v39 = 0;
        v40 = &v39[v13];
        *v40 = 0;
        v41 = &v40[v13];
        *v41 = 0;
        v42 = &v41[v13];
        *v42 = 0;
        v43 = &v42[v13];
        *v43 = 0;
        v44 = &v43[v13];
        *v44 = 0;
        v44[a2] = 0;
      } while ((a6 & 0x7FFFFFF8) != v14);
    }
    else {
      v14 = 0;
    }
    if ((a6 & 7) != 0) {
      v45 = (_WORD*)(result + 2 * v14 * a2 + 2LL * a3);
      do {
        *v45 = 0;
        v45 = (_WORD*)((char*)v45 + v13 * 2);
        --v12;
      } while (v12 != 0);
    }
  }
  return result;
}

__int64 opus_multistream_decoder_31e0e0(__int64 result, int a2, int a3,
                                        __int16* a4, int a5, int a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float* v15;
  __int64 v16;
  __int16* v17;
  float v18;
  __int16* v19;
  unsigned int v20;
  __int16* v21;
  float v22;
  float* v23;
  float* v24;
  unsigned int v25;
  __int16* v26;
  float* v27;
  unsigned int v28;
  __int16* v29;
  float* v30;
  unsigned int v31;
  __int16* v32;
  float* v33;
  unsigned int v34;
  __int16* v35;
  float* v36;
  __int16* v37;
  float* v38;
  unsigned int v39;
  _DWORD* v40;
  _DWORD* v41;
  _DWORD* v42;
  _DWORD* v43;
  _DWORD* v44;
  _DWORD* v45;
  _DWORD* v46;
  _DWORD* v47;

  if (a4 != nullptr) {
    if (a6 >= 1) {
      v6 = a5;
      v7 = a2;
      v8 = a6 & 7;
      v9 = a2;
      v10 = a5;
      if ((unsigned int)a6 >= 8) {
        v15 = (float*)(result + 4LL * a3);
        v16 = a6 & 0x7FFFFFF8;
        v11 = 0;
        v17 = a4;
        do {
          v11 += 8;
          v18 = vcvts_n_f32_s32(*v17, 0xFu);
          v19 = &v17[v6];
          v17 += 8 * v6;
          *v15 = v18;
          v20 = *v19;
          v21 = &v19[v10];
          v22 = vcvts_n_f32_s32(v20, 0xFu);
          v23 = &v15[v7];
          v15 += 8 * v7;
          *v23 = v22;
          v24 = &v23[v9];
          v25 = *v21;
          v26 = &v21[v10];
          *v24 = vcvts_n_f32_s32(v25, 0xFu);
          v27 = &v24[v9];
          v28 = *v26;
          v29 = &v26[v10];
          *v27 = vcvts_n_f32_s32(v28, 0xFu);
          v30 = &v27[v9];
          v31 = *v29;
          v32 = &v29[v10];
          *v30 = vcvts_n_f32_s32(v31, 0xFu);
          v33 = &v30[v9];
          v34 = *v32;
          v35 = &v32[v10];
          *v33 = vcvts_n_f32_s32(v34, 0xFu);
          v36 = &v33[v9];
          *v36 = vcvts_n_f32_s32(*v35, 0xFu);
          v36[v9] = vcvts_n_f32_s32(v35[v10], 0xFu);
        } while (v16 != v11);
      }
      else {
        v11 = 0;
      }
      if (v8 != 0) {
        v37 = &a4[v11 * v6];
        v38 = (float*)(result + 4 * v11 * v7 + 4LL * a3);
        do {
          v39 = *v37;
          v37 = (__int16*)((char*)v37 + v10 * 2);
          --v8;
          *v38 = vcvts_n_f32_s32(v39, 0xFu);
          v38 = (float*)((char*)v38 + v9 * 4);
        } while (v8 != 0);
      }
    }
  }
  else if (a6 >= 1) {
    v12 = a6 & 7;
    v13 = a2;
    if ((unsigned int)a6 >= 8) {
      v40 = (_DWORD*)(result + 4LL * a3);
      v14 = 0;
      do {
        v41 = &v40[a2];
        *(_DWORD*)v40 = 0;
        v14 += 8;
        v40 += 8 * a2;
        *(_DWORD*)v41 = 0;
        v42 = &v41[v13];
        *(_DWORD*)v42 = 0;
        v43 = &v42[v13];
        *(_DWORD*)v43 = 0;
        v44 = &v43[v13];
        *(_DWORD*)v44 = 0;
        v45 = &v44[v13];
        *(_DWORD*)v45 = 0;
        v46 = &v45[v13];
        *(_DWORD*)v46 = 0;
        v46[a2] = 0;
      } while ((a6 & 0x7FFFFFF8) != v14);
    }
    else {
      v14 = 0;
    }
    if ((a6 & 7) != 0) {
      v47 = (_DWORD*)(result + 4 * v14 * a2 + 4LL * a3);
      do {
        *(_DWORD*)v47 = 0;
        v47 = (_DWORD*)((char*)v47 + v13 * 4);
        --v12;
      } while (v12 != 0);
    }
  }
  return result;
}

#pragma GCC visibility pop
