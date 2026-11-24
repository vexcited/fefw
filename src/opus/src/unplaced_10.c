#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 opus_667f0(int a1);
__int64 opus_68710(int a1);
__int64 opus_6f660(unsigned __int8* a1, int a2);
__int64 opus_6f8a0(unsigned __int8* a1, int a2, int a3);
__int64 opus_752e0(unsigned int* a1, unsigned int a2, unsigned int a3, int a4,
                   int a5, __int64 a6);
__int64 opus_75d80(__int64 result, int a2, int a3, __int16* a4, int a5, int a6);
__int64 opus_packet_pad_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_packet_parse_impl(unsigned __int8*, int, int, _BYTE*, __int64,
                               _WORD*, _DWORD*, _DWORD*);
__int64 unplaced_10_6f780(unsigned __int8* a1, int a2, int a3, int a4);

__int64 opus_667f0(int a1)
{
  unsigned int v3;

  if ((unsigned int)(a1 - 3) < 0xFFFFFFFE) {
    return 0;
  }
  v3 = 0;
  if ((unsigned int)GameRoutine_4f810(&v3) != 0) {
    return 0;
  }
  v3 = (v3 + 7) & 0xFFFFFFF8;
  return (unsigned int)GameRoutine_25350(a1) + v3 + 80;
}

__int64 opus_68710(int a1)
{
  unsigned int v3;

  if ((unsigned int)(a1 - 3) < 0xFFFFFFFE) {
    return 0;
  }
  v3 = 0;
  if ((unsigned int)GameRoutine_527c0(&v3) != 0) {
    return 0;
  }
  v3 = (v3 + 7) & 0xFFFFFFF8;
  return (unsigned int)GameRoutine_2b090(a1) + 16224 + v3;
}

__int64 opus_6f660(unsigned __int8* a1, int a2)
{
  int v6;
  int v7;
  int v8;
  __int64 result;
  int v10;
  struct {
    char v11[4];
    int v12;
  } v11_;
  __int64 v13;
  struct {
    _WORD v14[48];
    int v15;
  } v14_;
  _BYTE v18[4];

  if (a2 < 1) {
    return 0xFFFFFFFFLL;
  }
  GameRoutine_82ce0((__int64)v11_.v11, 0, 0x1F0u);
  v11_.v11[0] = *a1;
  v6 = GameRoutine_84620(a1, 8000);
  v14_.v15 = v6;
  v7 = GameRoutine_84680(a1, (unsigned int)a2);
  if (v7 < 1) {
    return 4294967292LL;
  }
  v8 = v7;
  if (v7 * v6 > 960) {
    return 4294967292LL;
  }
  v18[0] = 0;
  result = GameRoutine_66220(a1, a2, 0, v18, (__int64)&v13, v14_.v14, nullptr,
                             nullptr);
  if ((int)result < 1) {
    if ((result & 0x80000000) != 0) {
      return result;
    }
    v10 = v11_.v12;
  }
  else {
    v10 = v11_.v12 + v8;
    v11_.v12 += v8;
  }
  return GameRoutine_6eea0(v11_.v11, 0, v10, a1, a2, 0, 0);
}

__int64 unplaced_10_6f780(unsigned __int8* a1, int a2, int a3, int a4)
{
  int v6;
  int v7;
  __int64 result;
  int v10;
  int v11;
  struct {
    _QWORD v12[12];
    char gap104_[4];
    _BYTE v13[4];
  } v12_;

  if (a2 < 1) {
    return 0xFFFFFFFFLL;
  }
  v6 = a3 - a2;
  v7 = a2;
  if (a3 == a2) {
    return 0;
  }
  if (a3 < a2) {
    return 0xFFFFFFFFLL;
  }
  v12_.v13[0] = 0;
  memset(v12_.v12, 0, sizeof(v12_.v12));
  v11 = 0;
  if (a4 < 2) {
    return opus_packet_pad_plt(a1, (unsigned int)v7, (unsigned int)(v6 + v7));
  }
  v10 = a4 - 1;
  while (v7 >= 1) {
    result =
        opus_packet_parse_impl(a1, v7, 1, v12_.v13, 0, v12_.v12, nullptr, &v11);
    if ((result & 0x80000000) != 0) {
      return result;
    }
    --v10;
    a1 += v11;
    v7 -= v11;
    if (v10 == 0) {
      return opus_packet_pad_plt(a1, (unsigned int)v7, (unsigned int)(v6 + v7));
    }
  }
  return 4294967292LL;
}

__int64 opus_6f8a0(unsigned __int8* a1, int a2, int a3)
{
  int v5;
  int v7;
  unsigned int v8;
  unsigned __int8* v9;
  _BOOL4 v10;
  __int64 result;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  struct {
    char v16[4];
    int v17;
  } v16_;
  struct {
    _QWORD v18[60];
    int v19;
    char gap500_[8];
    int v20;
  } v18_;
  _WORD v21[48];
  struct {
    _BYTE v22[4];
    _BYTE v23[12];
  } v22_;

  if (a2 < 1) {
    return 0xFFFFFFFFLL;
  }
  v5 = a3;
  if (a3 < 1) {
    return 0;
  }
  v7 = a2;
  v22_.v22[0] = 0;
  memset(v21, 0, sizeof(v21));
  v18_.v20 = 0;
  GameRoutine_82ce0((__int64)v16_.v16, 0, 0x1F0u);
  v8 = 0;
  v9 = a1;
  while (1) {
    v10 = v5 != 1;
    if (v7 < 1) {
      break;
    }
    v16_.v17 = 0;
    result =
        GameRoutine_66220(v9, v7, v10, v22_.v22, 0, v21, nullptr, &v18_.v20);
    if ((result & 0x80000000) != 0) {
      return result;
    }
    v12 = v18_.v20;
    if (v18_.v20 < 1) {
      break;
    }
    if (v16_.v17 != 0) {
      if ((*v9 ^ (unsigned int)(unsigned __int8)v16_.v16[0]) > 3) {
        return 4294967292LL;
      }
      v13 = GameRoutine_84680(v9, (unsigned int)v18_.v20);
      if (v13 < 1) {
        return 4294967292LL;
      }
    }
    else {
      v16_.v16[0] = *v9;
      v18_.v19 = GameRoutine_84620(v9, 8000);
      v13 = GameRoutine_84680(v9, v12);
      if (v13 < 1) {
        return 4294967292LL;
      }
    }
    v14 = v13;
    if ((v16_.v17 + v13) * v18_.v19 > 960) {
      return 4294967292LL;
    }
    v22_.v23[0] = 0;
    result =
        GameRoutine_66220(v9, v12, v10, v22_.v23, (__int64)&v18_.v18[v16_.v17],
                          (_WORD*)&v18_.v18[48] + v16_.v17, nullptr, nullptr);
    if ((int)result < 1) {
      if ((result & 0x80000000) != 0) {
        return result;
      }
      v15 = v16_.v17;
    }
    else {
      v15 = v16_.v17 + v14;
      v16_.v17 += v14;
    }
    result = GameRoutine_6eea0(v16_.v16, 0, v15, a1, v7, v10, 0);
    if ((result & 0x80000000) == 0) {
      a1 += (unsigned int)result;
      v8 += result;
      --v5;
      result = v8;
      v9 += v18_.v20;
      v7 -= v18_.v20;
      if (v5 != 0) {
        continue;
      }
    }
    return result;
  }
  return 4294967292LL;
}

__int64 opus_752e0(unsigned int* a1, unsigned int a2, unsigned int a3, int a4,
                   int a5, __int64 a6)
{
  __int64 result;
  __int64 v8;
  __int64 v10;
  _BYTE* v11;
  _BYTE* v12;
  __int64 v13;
  char v14;
  char* v15;
  char* v16;
  _BYTE* v17;
  char v18;
  unsigned int* v19;
  int v20;
  int v21;
  signed int v22;
  __int64 v23;
  __int64 v24;

  if (a3 - 256 < 0xFFFFFF01) {
    return 0xFFFFFFFFLL;
  }
  result = 0xFFFFFFFFLL;
  if ((a5 & 0x80000000) == 0 && a4 >= 1 && a5 <= a4 && a4 <= 255 - a5) {
    v8 = a3 & 7;
    *a1 = a3;
    a1[1] = a4;
    a1[2] = a5;
    if (a3 - 1 >= 7) {
      v11 = (char*)a1 + 19;
      v12 = (_BYTE*)(a6 + 3);
      v13 = 0;
      do {
        v13 -= 8;
        *(v11 - 7) = *(v12 - 3);
        *(v11 - 6) = *(v12 - 2);
        *(v11 - 5) = *(v12 - 1);
        *(v11 - 4) = *v12;
        *(v11 - 3) = v12[1];
        *(v11 - 2) = v12[2];
        *(v11 - 1) = v12[3];
        v14 = v12[4];
        v12 += 8;
        *v11 = v14;
        v11 += 8;
      } while (-(__int64)((unsigned __int8)a3 & 0xF8) != v13);
      v10 = -v13;
      if ((a3 & 7) == 0) {
      LABEL_15:
        if ((unsigned int)GameRoutine_750e0(a1) == 0) {
          return 0xFFFFFFFFLL;
        }
        v19 = a1 + 68;
        v20 = GameRoutine_84630(2);
        v21 = GameRoutine_84630(1);
        if ((int)a1[2] < 1) {
          v22 = 0;
          if ((int)a1[1] > 0) {
          LABEL_21:
            v24 = (int)((v21 + 7) & 0xFFFFFFF8);
            do {
              result = GameRoutine_84640(v19, a2, 1);
              if ((_DWORD)result != 0) {
                break;
              }
              v19 = (unsigned int*)((char*)v19 + v24);
              ++v22;
            } while (v22 < (int)a1[1]);
          }
          else {
            return 0;
          }
        }
        else {
          v22 = 0;
          v23 = (int)((v20 + 7) & 0xFFFFFFF8);
          while (1) {
            result = GameRoutine_84640(v19, a2, 2);
            if ((_DWORD)result != 0) {
              break;
            }
            v19 = (unsigned int*)((char*)v19 + v23);
            if (++v22 >= (int)a1[2]) {
              if (v22 >= (int)a1[1]) {
                return 0;
              }
              goto LABEL_21;
            }
          }
        }
        return result;
      }
    }
    else {
      v10 = 0;
      if ((a3 & 7) == 0) {
        goto LABEL_15;
      }
    }
    v15 = (char*)a1 + v10;
    v16 = (char*)(a6 + v10);
    v17 = v15 + 12;
    do {
      v18 = *v16++;
      --v8;
      *v17++ = v18;
    } while (v8 != 0);
    goto LABEL_15;
  }
  return result;
}

__int64 opus_75d80(__int64 result, int a2, int a3, __int16* a4, int a5, int a6)
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
