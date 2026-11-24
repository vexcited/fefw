#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_561430(_QWORD* result);
__attribute__((swiftcall)) void Font_55d700(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void Font_55d7a0(PSEUDO_X8, __int64);
__int64 GameRoutine_561450(_QWORD);
__int64 GameRoutine_561490(__int64, int, float*);
__int64 GameRoutine_561590(__int64, __int64, float*, int);
__int64 GameRoutine_565fe0(__int64);
__int64 GameRoutine_5662e0(_QWORD, long double);
__int64 GameRoutine_567cd0(_QWORD, long double);
__int64 TextBox_567d30(__int64 result);
double TextBox_567d60(_QWORD*, unsigned __int64, int);
extern __int64* GameData_2135f38[2];
float GameRoutine_55c200(__int64);
float GameRoutine_55c300(__int64, __int64, float, double);
float GameRoutine_5691c0(__int64, float*, float*, unsigned __int64, int);
float TextBox_5677c0(__int64, float*, float*, unsigned __int64, int);
float TextBox_568750(__int64, unsigned __int64, int);
float TextTagProcessor_55c240(__int64);
__int64 nn_font_565ba0(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 nn_font_566220(__int64 a1);
__int64 nn_font_5665e0(__int64 a1, float* a2, unsigned __int64* a3, int a4);
float nn_font_566e80(__int64 a1, unsigned __int64 a2, int a3, int a4,
                     _DWORD* a5, __int64 a6);
__int64 nn_font_567fe0(__int64 a1, float* a2, unsigned __int64* a3, int a4);
float nn_font_568880_alt1(__int64 a1, unsigned __int64 a2, int a3, int a4,
                          _DWORD* a5, __int64 a6);
__int64 nn_font_5697e0(__int64 a1, int a2, float* a3);
__int64 nn_font_569bc0(__int64 a1, int a2, float* a3, __int64 a4);
float GameRoutine_55c300_alt1(__int64, __int64,
                              float) __asm__("GameRoutine_55c300");
float game_55c300(__int64, __int64, float);
__int64 GameRoutine_5662e0_alt1(_QWORD);
__int64 GameRoutine_567cd0_alt1(_QWORD);
float GameRoutine_5691c0_alt1(__int64, float*, float*, __int64, unsigned int);
float game_55c300_alt1(__int64, __int64, float, double);
float nn_font_568880(__int64 a1, __int64 a2, signed int a3, int a4, _DWORD* a5,
                     __int64 a6);

__attribute__((noinline)) __int64 nn_font_569bc0(__int64 a1, int a2, float* a3,
                                                 __int64 a4)
{

#pragma clang fp contract(off)
  _WORD* v7;
  _WORD* v8;
  int v9;
  unsigned __int64 v10;
  __int64* v12;
  unsigned __int16* v13;
  _WORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  int v27;
  float v28;
  int v29;
  __int64 v30;
  __int64 v31;
  double v32;
  float v33;
  double v34;
  float v35;
  float v36;
  float v37;
  float v38;
  __int64 v39;
  float v40;
  float v41;
  int v42;
  float v43;
  float v44;
  __int64 v45;
  float v46;
  long double v47;
  struct {
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
  } v48_;
  __int64* v65;

  if ((unsigned int)(a2 - 16) <= 0xFFFFFFFD) {
    if (a4 != 0) {
      return GameRoutine_561590(a1, a4, a3, a2);
    }
    return GameRoutine_561490(a1, a2, a3);
  }
  v7 = *((_WORD**)a3 + 1);
  v8 = v7 - 1;
  v9 = (unsigned __int16)*(v7 - 1);
  if (v9 == 15) {
    v10 = (unsigned __int64)(v7 + 2);
    if ((unsigned __int64)(v7 + 2) > *((_QWORD*)a3 + 2)) {
      return 4;
    }
  }
  else {
    if (v9 != 14) {
      return 4;
    }
    v10 = (unsigned __int64)v8 + (unsigned __int16)v7[2] + 8;
    if (v10 > *((_QWORD*)a3 + 2)) {
      return 4;
    }
  }
  if (*v7 != 0 || v7[1] != 0) {
    return 0;
  }
  *((_QWORD*)a3 + 1) = v10;
  if (a4 != 0) {
    return 0;
  }
  v12 = *(__int64**)a3;
  v13 = (unsigned __int16*)v10;
  v15 = v8;
  v16 = *(_QWORD*)(*(_QWORD*)a3 + 72LL);
  v17 = *(_QWORD*)(*(_QWORD*)a3 + 88LL);
  v18 = *(_QWORD*)(*(_QWORD*)a3 + 96LL);
  v48_.v58 = *(_QWORD*)(*(_QWORD*)a3 + 80LL);
  v19 = v12[7];
  v20 = v12[5];
  v21 = v12[6];
  v48_.v56 = v12[8];
  v22 = v12[3];
  v23 = v12[1];
  v24 = v12[2];
  v48_.v52 = v12[4];
  v25 = *v12;
  v48_.v50 = v24;
  v48_.v51 = v22;
  LODWORD(v22) = (unsigned __int16)v8[4];
  v48_.v53 = v20;
  v48_.v54 = v21;
  v48_.v59 = v17;
  v48_.v60 = v18;
  v48_.v56 = 0;
  v48_.v57 = v16;
  v48_.v55 = v19;
  HIDWORD(v48_.v52) = 0;
  v48_.v48 = v25;
  v48_.v49 = v23;
  v26 = (unsigned int)v22 >> 1;
  LODWORD(v48_.v58) = 768;
  v27 = (unsigned __int16)v8[5] >> 1;
  TextBox_567d30((__int64)&v48_.v48);
  v28 = GameRoutine_55c200(*(_QWORD*)a3) * 0x1.99999a0000000p-2f;
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v48_.v53 + 32LL))(v48_.v53);
  v30 = *(_QWORD*)a3;
  v65 = nullptr;
  v31 = *(_QWORD*)(v30 + 88);
  *((float*)&v48_.v49 + 1) = v28 / (float)v29;
  *(float*)&v48_.v50 = *((float*)&v48_.v49 + 1);
  GameRoutine_561430(&v65);
  v65 = GameData_2135f38[0] + 2;
  *(_QWORD*)(*(_QWORD*)a3 + 88LL) = &v65;
  v32 = TextBox_567d60(*(_QWORD**)a3, (unsigned __int64)v13, v26);
  v33 = *(float*)&v32;
  *(_QWORD*)(*(_QWORD*)a3 + 88LL) = v31;
  v34 = TextBox_567d60(&v48_.v48, (unsigned __int64)(v15 + 6), v27);
  v35 = *(float*)&v34;
  GameRoutine_561450(&v65);
  v36 = v33 - v35;
  if ((float)(v33 - v35) > 0x0.0p+0f) {
    v37 = v36 / (float)(unsigned int)(v27 + 1);
    v38 = v37 + *((float*)&v48_.v50 + 1);
    *(float*)&v48_.v56 = v37;
    *((float*)&v48_.v50 + 1) = v37 + *((float*)&v48_.v50 + 1);
    v39 = *(_QWORD*)a3;
    v40 = *(float*)(*(_QWORD*)a3 + 36LL);
    if (v40 == 0x0.0p+0f) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v38 = (float)(v36 * 0x1.0000000000000p-1f) + *((float*)&v48_.v50 + 1);
  *((float*)&v48_.v50 + 1) = v38;
  v39 = *(_QWORD*)a3;
  v40 = *(float*)(*(_QWORD*)a3 + 36LL);
  if (v40 != 0x0.0p+0f) {
  LABEL_15:
    v41 = v40 * *(float*)(v39 + 12);
    v42 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v39 + 40) + 32LL))(
        *(_QWORD*)(v39 + 40));
    v39 = *(_QWORD*)a3;
    v38 = *((float*)&v48_.v50 + 1) +
          (float)((float)(v41 * (float)v42) * 0x1.0000000000000p-1f);
    *((float*)&v48_.v50 + 1) = v38;
  }
LABEL_16:
  if ((*(_BYTE*)&a3[10] & 1) == 0) {
    *((float*)&v48_.v50 + 1) = *(float*)(v39 + 64) + v38;
  }
  v43 = *(float*)(v39 + 16);
  v44 = v43 * (float)(*(int (**)(_QWORD))(**(_QWORD**)(v39 + 40) + 200LL))(
                  *(_QWORD*)(v39 + 40));
  v45 = *(_QWORD*)(*(_QWORD*)a3 + 40LL);
  *(float*)&v48_.v51 = *(float*)&v48_.v51 - v44;
  if (v45 != 0) {
    v46 = *(float*)(*(_QWORD*)a3 + 12LL) *
          (float)(*(int (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v45 + 184LL))(
              v45, *((unsigned int*)a3 + 11), *v13);
    if (v46 != 0x0.0p+0f) {
      *((float*)&v48_.v50 + 1) = v46 + *((float*)&v48_.v50 + 1);
    }
  }
  *(float*)&v47 =
      TextBox_568750((__int64)&v48_.v48, (unsigned __int64)(v15 + 6), v27);
  GameRoutine_567cd0(&v48_.v48, v47);
  return 0;
}

__int64 nn_font_565ba0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v3 = *(_QWORD*)(a2 + 48);
  v4 = *(_QWORD*)(a2 + 32);
  if (a3 < v3) {
    if (v4 != 0 && *(_BYTE*)(v4 + 57) == 1 ||
        (v5 = *(_QWORD*)(v4 + 32)) != 0 && *(_BYTE*)(v5 + 57) == 1 ||
        (*(_BYTE*)(a2 + 57) = *(_BYTE*)(a2 + 57) == 0,
         *(_BYTE*)(v4 + 57) = *(_BYTE*)(v4 + 57) == 0,
         *(_BYTE*)(*(_QWORD*)(a2 + 40) + 57LL) =
             *(_BYTE*)(*(_QWORD*)(a2 + 40) + 57LL) == 0,
         v6 = *(_QWORD*)(a2 + 40), (v4 = *(_QWORD*)(v6 + 32)) == 0) ||
        *(_BYTE*)(v4 + 57) != 1) {
      v4 = a2;
      *(_QWORD*)(a2 + 32) = nn_font_565ba0(a1, *(_QWORD*)(a2 + 32), a3);
      v7 = *(_QWORD*)(v4 + 40);
      if (v7 == 0) {
        goto LABEL_47;
      }
    }
    else {
      *(_QWORD*)(v6 + 32) = *(_QWORD*)(v4 + 40);
      *(_QWORD*)(v4 + 40) = v6;
      *(_BYTE*)(v4 + 57) = *(_BYTE*)(v6 + 57);
      *(_BYTE*)(v6 + 57) = 1;
      *(_QWORD*)(a2 + 40) = v4;
      *(_QWORD*)(a2 + 40) = *(_QWORD*)(v4 + 32);
      *(_QWORD*)(v4 + 32) = a2;
      *(_BYTE*)(v4 + 57) = *(_BYTE*)(a2 + 57);
      *(_BYTE*)(a2 + 57) = 1;
      *(_BYTE*)(v4 + 57) = *(_BYTE*)(v4 + 57) == 0;
      *(_BYTE*)(*(_QWORD*)(v4 + 32) + 57LL) =
          *(_BYTE*)(*(_QWORD*)(v4 + 32) + 57LL) == 0;
      *(_BYTE*)(*(_QWORD*)(v4 + 40) + 57LL) =
          *(_BYTE*)(*(_QWORD*)(v4 + 40) + 57LL) == 0;
      *(_QWORD*)(v4 + 32) = nn_font_565ba0(a1, *(_QWORD*)(v4 + 32), a3);
      v7 = *(_QWORD*)(v4 + 40);
      if (v7 == 0) {
        goto LABEL_47;
      }
    }
    goto LABEL_44;
  }
  if (v4 != 0 && *(_BYTE*)(v4 + 57) == 1) {
    *(_QWORD*)(a2 + 32) = *(_QWORD*)(v4 + 40);
    *(_QWORD*)(v4 + 40) = a2;
    *(_BYTE*)(v4 + 57) = *(_BYTE*)(a2 + 57);
    *(_BYTE*)(a2 + 57) = 1;
    v8 = *(_QWORD*)(v4 + 40);
    if (a3 != *(_QWORD*)(v4 + 48) || v8 != 0) {
      goto LABEL_24;
    }
  LABEL_17:
    *(_QWORD*)v4 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 8) = v4;
    return 0;
  }
  v4 = a2;
  v8 = *(_QWORD*)(a2 + 40);
  if (a3 == v3 && v8 == 0) {
    goto LABEL_17;
  }
LABEL_24:
  if (*(_BYTE*)(v8 + 57) != 1) {
    v12 = *(_QWORD*)(v8 + 32);
    if (v12 == 0 || *(_BYTE*)(v12 + 57) != 1) {
      *(_BYTE*)(v4 + 57) = *(_BYTE*)(v4 + 57) == 0;
      *(_BYTE*)(*(_QWORD*)(v4 + 32) + 57LL) =
          *(_BYTE*)(*(_QWORD*)(v4 + 32) + 57LL) == 0;
      *(_BYTE*)(*(_QWORD*)(v4 + 40) + 57LL) =
          *(_BYTE*)(*(_QWORD*)(v4 + 40) + 57LL) == 0;
      v13 = *(_QWORD*)(v4 + 32);
      v14 = *(_QWORD*)(v13 + 32);
      if (v14 != 0 && *(_BYTE*)(v14 + 57) == 1) {
        *(_QWORD*)(v4 + 32) = *(_QWORD*)(v13 + 40);
        *(_QWORD*)(v13 + 40) = v4;
        *(_BYTE*)(v13 + 57) = *(_BYTE*)(v4 + 57);
        *(_BYTE*)(v4 + 57) = 1;
        v4 = v13;
        *(_BYTE*)(v13 + 57) = *(_BYTE*)(v13 + 57) == 0;
        *(_BYTE*)(*(_QWORD*)(v13 + 32) + 57LL) =
            *(_BYTE*)(*(_QWORD*)(v13 + 32) + 57LL) == 0;
        *(_BYTE*)(*(_QWORD*)(v13 + 40) + 57LL) =
            *(_BYTE*)(*(_QWORD*)(v13 + 40) + 57LL) == 0;
      }
    }
  }
  v15 = *(_QWORD*)(v4 + 40);
  if (a3 == *(_QWORD*)(v4 + 48)) {
    v16 = *(_QWORD*)(v4 + 40);
    do {
      v17 = v16;
      v16 = *(_QWORD*)(v16 + 32);
    } while (v16 != 0);
    if (v15 != 0) {
      v18 = *(_QWORD*)(v17 + 48);
      v19 = *(_QWORD*)(v4 + 40);
      do {
        while (1) {
          v20 = *(_QWORD*)(v19 + 48);
          if (v18 >= v20) {
            break;
          }
          v19 = *(_QWORD*)(v19 + 32);
          if (v19 == 0) {
            goto LABEL_39;
          }
        }
        if (v18 <= v20) {
          break;
        }
        v19 = *(_QWORD*)(v19 + 40);
      } while (v19 != 0);
    LABEL_39:
      v21 = a1;
    }
    else {
      v21 = a1;
      v19 = 0;
    }
    *(_QWORD*)(v19 + 40) = GameRoutine_565fe0(*(_QWORD*)(v4 + 40));
    *(_QWORD*)(v19 + 32) = *(_QWORD*)(v4 + 32);
    *(_BYTE*)(v19 + 57) = *(_BYTE*)(v4 + 57);
    *(_QWORD*)v4 = *(_QWORD*)(v21 + 8);
    *(_QWORD*)(v21 + 8) = v4;
    v4 = v19;
    v7 = *(_QWORD*)(v19 + 40);
    if (v7 == 0) {
      goto LABEL_47;
    }
  }
  else {
    v22 = nn_font_565ba0(a1, v15, a3);
    *(_QWORD*)(v4 + 40) = v22;
    v7 = v22;
    if (v22 == 0) {
      goto LABEL_47;
    }
  }
LABEL_44:
  if (*(_BYTE*)(v7 + 57) == 1) {
    *(_QWORD*)(v4 + 40) = *(_QWORD*)(v7 + 32);
    *(_QWORD*)(v7 + 32) = v4;
    *(_BYTE*)(v7 + 57) = *(_BYTE*)(v4 + 57);
    *(_BYTE*)(v4 + 57) = 1;
    result = *(_QWORD*)(v7 + 32);
    if (result == 0) {
      return v7;
    }
    goto LABEL_48;
  }
LABEL_47:
  v7 = v4;
  result = *(_QWORD*)(v4 + 32);
  if (result == 0) {
    return v7;
  }
LABEL_48:
  if (*(_BYTE*)(result + 57) != 1) {
    return v7;
  }
  v23 = *(_QWORD*)(result + 32);
  if (v23 == 0 || *(_BYTE*)(v23 + 57) != 1) {
    v24 = result;
    result = v7;
    v25 = *(_QWORD*)(v7 + 40);
    if (v25 == 0) {
      return result;
    }
    goto LABEL_57;
  }
  *(_QWORD*)(v7 + 32) = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 40) = v7;
  *(_BYTE*)(result + 57) = *(_BYTE*)(v7 + 57);
  *(_BYTE*)(v7 + 57) = 1;
  v24 = *(_QWORD*)(result + 32);
  if (v24 != 0 && *(_BYTE*)(v24 + 57) == 1) {
    v25 = *(_QWORD*)(result + 40);
    if (v25 != 0) {
    LABEL_57:
      if (*(_BYTE*)(v25 + 57) == 1) {
        *(_BYTE*)(result + 57) = *(_BYTE*)(result + 57) == 0;
        *(_BYTE*)(v24 + 57) = *(_BYTE*)(v24 + 57) == 0;
        *(_BYTE*)(*(_QWORD*)(result + 40) + 57LL) =
            *(_BYTE*)(*(_QWORD*)(result + 40) + 57LL) == 0;
      }
    }
  }
  return result;
}

__int64 nn_font_566220(__int64 a1)
{
  __int64 result;
  char v3;

  do {
    result = *(_QWORD*)(a1 + 32);
    if ((*(_BYTE*)(a1 + 56) & 5) != 0) {
      v3 = 16;
    }
    else {
      v3 = 0;
    }
    *(_BYTE*)(a1 + 56) = v3 | *(_BYTE*)(a1 + 56) & 0x60;
    if (result != 0) {
      result = nn_font_566220(result);
    }
    a1 = *(_QWORD*)(a1 + 40);
  } while (a1 != 0);
  return result;
}

__int64 nn_font_5665e0(__int64 a1, float* a2, unsigned __int64* a3, int a4)
{
  unsigned __int64 v4;
  unsigned int v5;
  unsigned int v6;
  char v8;
  __int64 v9;
  unsigned __int64 v12;
  char v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  __int64 (*v19)(__int64);
  _QWORD* v20;
  char v21;
  unsigned int v22;
  unsigned __int64 v23;
  char v24;
  float v25;
  unsigned __int64 v26;
  int v27;
  float v28;
  unsigned __int64* v29;
  float v30;
  unsigned int v32;
  char v33;
  unsigned int v34;
  bool v35;
  char v36;
  float v37;
  float v38;
  float v39;
  float v40;
  int v41;
  float v42;
  float v43;
  float v44;
  float v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  _QWORD* v68;
  __int64 v69;
  struct {
    __int64 v70;
    __int64 v71;
  } v70_;
  struct {
    _QWORD v72[2];
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
  } v72_;
  _QWORD v84[6];
  float v85;
  __int64 v86;
  float v87;
  struct {
    unsigned __int64 v88;
    __int64 (*v89)(__int64);
    __int64 v90;
    _QWORD v91[7];
    char gap272_[8];
    unsigned __int64* v92;
  } v88_;

  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
  v4 = *a3;
  v5 = *(_DWORD*)(a1 + 12);
  v6 = *(_DWORD*)(a1 + 16);
  v8 = *(_BYTE*)(a1 + 56);
  v9 = a4;
  v12 = *a3 + a4;
  v13 = *(_BYTE*)(a1 + 99);
  v14 = *(float*)(a1 + 60);
  v88_.v91[0] = a1;
  v88_.v91[1] = v4;
  v15 = *(_QWORD*)(a1 + 40);
  v88_.v91[5] = 0;
  v88_.v89 = nullptr;
  v88_.v90 = 0;
  v88_.v88 = 0;
  v88_.v91[2] = v12;
  v88_.v91[3] = 0;
  v88_.v91[4] = __PAIR64__(v6, v5);
  Font_55d700((void*)(&v88_.v88), v15),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
  v16 = TextTagProcessor_55c240(a1),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
  *a2 = 0x0.0p+0f;
  a2[2] = 0x0.0p+0f;
  v17 = fminf(v16, 0x0.0p+0f);
  v18 = fmaxf(v16, 0x0.0p+0f);
  v88_.v88 = v4;
  a2[1] = v17;
  a2[3] = v18;
  (*(void (**)(__int64, __int64, float, double, float))(
      **(_QWORD**)(a1 + 88) + 64LL))(*(_QWORD*)(a1 + 88), (__int64)v88_.v91,
                                     v18, 0x0.0p+0, v17),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
  v19 = v88_.v89;
  v88_.v92 = a3;
  v20 = (unsigned __int64*)((char*)&v88_.v88 + (v88_.v90 >> 1));
  if ((v88_.v90 & 1) != 0) {
    v19 = *(__int64 (**)(__int64))((char*)v88_.v89 + *v20),
    v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v21 = v8 & v13;
  v22 = v19((__int64)v20),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
  v23 = v88_.v88;
  if (v88_.v88 <= v12) {
    v25 = 0x0.0p+0f;
    v32 = v22;
    v69 = v9;
    v33 = 0;
    v26 = 0;
    v24 = 0;
    while (1) {
      v35 = v26 != 0 & v14 < 0x1.fffffe0000000p+127f;
      v36 = v35;
      while (1) {
        if ((v21 & 1) != 0) {
          if ((v36 & 1) == 0) {
            if (v32 >= 0x20) {
              if ((v32 & 0xFFFFFF00) == 0x2000 &&
                  (v32 == 8203 || (v32 & 0x20FE) == 0x200E || v32 - 8234 < 5 ||
                   v32 == 8288 || v32 - 8294 < 4)) {
                goto LABEL_115;
              }
              if ((v33 & 1) != 0) {
                v25 = v25 + *(float*)(a1 + 64);
              }
              if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
                v61 = v25 + *(float*)(a1 + 32);
              }
              else {
                v61 = v25 + (float)((float)(*(int (**)(__int64, __int64))(
                                        **(_QWORD**)(a1 + 40) + 128LL))(
                                        *(_QWORD*)(a1 + 40), v32) *
                                    *(float*)(a1 + 12)),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(float, "s0", "=w"));
              }
              v44 = 0x0.0p+0f;
              v45 = v61 + 0x0.0p+0f;
            LABEL_104:
              v62 = *a2;
              if (v45 < *a2) {
                v62 = v45;
              }
              *a2 = v62;
              v63 = a2[2];
              if (v63 < v45) {
                v63 = v45;
              }
              a2[2] = v63;
              if (*(_BYTE*)(a1 + 98) == 1) {
                v64 = *(float*)(a1 + 24);
                v65 = a2[1];
                if (v64 < v65) {
                  v65 = *(float*)(a1 + 24);
                }
                a2[1] = v65;
                (*(void (**)(__int64, __int64, float))(
                    **(_QWORD**)(a1 + 88) + 40LL))(*(_QWORD*)(a1 + 88), a1,
                                                   v65),
                    v66 = COERCE_AS(__typeof__(v66),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                v67 = v64 + v66;
                if (!(a2[3] < v67)) {
                  v67 = a2[3];
                }
                a2[3] = v67;
              }
              v23 = v88_.v88;
              v25 = v45 - v44;
              v33 = 1;
              DWORDn(v88_.v91[5], sizeof(v88_.v91[5]) / 4 - 1) = v32;
              goto LABEL_115;
            }
          LABEL_49:
            if (v32 != 10) {
              goto LABEL_64;
            }
            goto LABEL_60;
          }
          if (v32 < 0x20) {
            goto LABEL_49;
          }
          if ((v32 & 0xFFFFFF00) == 0x2000 &&
              (v32 == 8203 || (v32 & 0x20FE) == 0x200E ||
               v32 - 8234 <= 0x36 && ((1LL << ((unsigned __int8)v32 - 42)) &
                                      0x4000000000001FLL) != 0 ||
               v32 - 8294 < 4)) {
            goto LABEL_115;
          }
          if ((v33 & 1) != 0) {
            v37 = v25 + *(float*)(a1 + 64);
          }
          else {
            v37 = v25;
          }
          if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
            v38 = v37 + *(float*)(a1 + 32);
          }
          else {
            v38 = v37 + (float)((float)(*(int (**)(__int64, __int64))(
                                    **(_QWORD**)(a1 + 40) + 128LL))(
                                    *(_QWORD*)(a1 + 40), v32) *
                                *(float*)(a1 + 12)),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v44 = 0x0.0p+0f;
          v45 = v38 + 0x0.0p+0f;
          if ((float)((float)(v38 + 0x0.0p+0f) + *(float*)(a1 + 72)) <=
              *(float*)(a1 + 60)) {
            goto LABEL_104;
          }
          v24 = 1;
          v88_.v88 = v26;
          if (v26 > v12) {
            goto LABEL_7;
          }
        }
        else {
          if (v32 < 0x20) {
            goto LABEL_49;
          }
          if ((v32 & 0xFFFFFF00) == 0x2000 &&
              (v32 == 8203 || (v32 & 0x20FE) == 0x200E ||
               v32 - 8234 <= 0x36 && ((1LL << ((unsigned __int8)v32 - 42)) &
                                      0x4000000000001FLL) != 0 ||
               v32 - 8294 < 4)) {
            goto LABEL_115;
          }
          if ((v33 & 1) != 0) {
            v39 = v25 + *(float*)(a1 + 64);
          }
          else {
            v39 = v25;
          }
          if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
            v40 = v39 + *(float*)(a1 + 32);
          }
          else {
            v40 = v39 + (float)((float)(*(int (**)(__int64, __int64))(
                                    **(_QWORD**)(a1 + 40) + 128LL))(
                                    *(_QWORD*)(a1 + 40), v32) *
                                *(float*)(a1 + 12)),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v41 = (*(__int64 (**)(__int64, __int64, __int64))(
              **(_QWORD**)(a1 + 40) + 184LL))(
              *(_QWORD*)(a1 + 40),
              DWORDn(v88_.v91[5], sizeof(v88_.v91[5]) / 4 - 1), v32),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
          v42 = *(float*)(a1 + 12);
          v43 = v40 + (float)((float)v41 * v42);
          v44 = v42 *
                (float)(*(int (**)(__int64, __int64, __int64, float, float))(
                    **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40), v32, 0,
                                                    (float)v41, v42),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
          v45 = v43 + v44;
          if ((v36 & 1) == 0 ||
              !((float)(v45 + *(float*)(a1 + 72)) > *(float*)(a1 + 60))) {
            goto LABEL_104;
          }
          v24 = 1;
          v88_.v88 = v26;
          if (v26 > v12) {
            goto LABEL_6;
          }
        }
        v32 = 10;
        v23 = v26;
      LABEL_60:
        if ((*(_BYTE*)(a1 + 97) & 1) == 0) {
          if ((v21 & 1) == 0) {
            v46 = (*(__int64 (**)(__int64, __int64, __int64))(
                **(_QWORD**)(a1 + 40) + 184LL))(
                *(_QWORD*)(a1 + 40),
                DWORDn(v88_.v91[5], sizeof(v88_.v91[5]) / 4 - 1), 0),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
            v23 = v88_.v88;
            v25 = v25 + (float)((float)v46 * *(float*)(a1 + 12));
          }
          DWORDn(v88_.v91[5], sizeof(v88_.v91[5]) / 4 - 1) = 0;
        }
      LABEL_64:
        v85 = v25;
        v86 = 0;
        v87 = 0x0.0p+0f;
        v88_.v91[1] = v23;
        LODWORD(v88_.v91[5]) = (v33 & 1) == 0;
        *(float*)(a1 + 20) = v25;
        if (!(v14 < 0x1.fffffe0000000p+127f)|| v32 == 10 || v26 == 0) {
          goto LABEL_72;
        }
        v70_.v70 = 0;
        v70_.v71 = 0;
        qmemcpy(v84, v88_.v91, sizeof(v84));
        v47 = *(_QWORD*)(a1 + 88);
        v72_.v81 = *(_QWORD*)(a1 + 80);
        v72_.v82 = v47;
        v48 = *(_QWORD*)(a1 + 88);
        v72_.v83 = *(_QWORD*)(a1 + 96);
        v84[0] = v72_.v72;
        v49 = *(_QWORD*)(a1 + 56);
        v72_.v77 = *(_QWORD*)(a1 + 48);
        v72_.v78 = v49;
        v50 = *(_QWORD*)(a1 + 72);
        v72_.v79 = *(_QWORD*)(a1 + 64);
        v72_.v80 = v50;
        v51 = *(_QWORD*)(a1 + 24);
        v72_.v73 = *(_QWORD*)(a1 + 16);
        v72_.v74 = v51;
        v52 = *(_QWORD*)(a1 + 40);
        v72_.v75 = *(_QWORD*)(a1 + 32);
        v72_.v76 = v52;
        v53 = *(_QWORD*)(a1 + 8);
        v72_.v72[0] = *(_QWORD*)a1;
        v72_.v72[1] = v53;
        (*(void (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)v48 + 32LL))(v48, (__int64)&v70_.v70, (__int64)v84, v32),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
        if (!(*(float*)&v70_.v71 > *(float*)&v70_.v70)||
            (float)(*((float*)&v72_.v73 + 1) - *(float*)&v88_.v91[3]) <=
                *(float*)(a1 + 60)) {
          break;
        }
        v88_.v88 = v26;
        GameRoutine_5662e0_alt1(v72_.v72),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
        v23 = v88_.v88;
        v32 = 10;
        v24 = 1;
        if (v88_.v88 > v12) {
          goto LABEL_5;
        }
      }
      GameRoutine_5662e0_alt1(v72_.v72),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
    LABEL_72:
      v54 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
          **(_QWORD**)(a1 + 88) + 32LL))(*(_QWORD*)(a1 + 88), (__int64)&v85,
                                         (__int64)v88_.v91, v32),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
      v55 = a2[3];
      if (v32 == 10 && (*(_BYTE*)(a1 + 98) & 1) != 0 &&
          *(float*)(a1 + 24) < v55) {
        *(float*)(a1 + 24) = v55;
        v55 = a2[3];
      }
      v56 = v85;
      v57 = *(float*)&v86;
      v58 = *a2;
      v59 = a2[1];
      v23 = v88_.v91[1];
      v35 = v85 < *a2;
      v88_.v88 = v88_.v91[1];
      if (!v35) {
        v56 = v58;
      }
      if (!(*(float*)&v86 < v59)) {
        v57 = v59;
      }
      *a2 = v56;
      a2[1] = v57;
      v60 = a2[2];
      if (v60 < *((float*)&v86 + 1)) {
        v60 = *((float*)&v86 + 1);
      }
      if (v55 < v87) {
        v55 = v87;
      }
      a2[2] = v60;
      a2[3] = v55;
      v25 = *(float*)(a1 + 20);
      if (v54 <= 1) {
        if (v54 == 1) {
          v33 = 0;
        }
      }
      else {
        switch (v54) {
        case 2:
          v33 = 1;
          break;
        case 4:
          v24 = 0;
          *v88_.v92 += v69;
          return v24 & 1;
        case 3:
          goto LABEL_5;
        default:
          break;
        }
      }
    LABEL_115:
      if (v14 < 0x1.fffffe0000000p+127f) {
        v26 = v23;
      }
      v68 = (unsigned __int64*)((char*)&v88_.v88 + (v88_.v90 >> 1));
      if ((v88_.v90 & 1) != 0) {
        v34 = (*(__int64 (**)(__int64))((char*)v88_.v89 + *v68))((__int64)v68),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v34 = v88_.v89((__int64)v68),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v23 = v88_.v88;
      v32 = v34;
      if (v88_.v88 > v12) {
        goto LABEL_5;
      }
    }
  }
  v24 = 0;
  v25 = 0x0.0p+0f;
LABEL_5:
  v26 = v23;
  if ((v21 & 1) == 0) {
  LABEL_6:
    v27 = (*(__int64 (**)(__int64, __int64, __int64))(**(_QWORD**)(a1 + 40) +
                                                      184LL))(
        *(_QWORD*)(a1 + 40), DWORDn(v88_.v91[5], sizeof(v88_.v91[5]) / 4 - 1),
        0),
    v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
    v26 = v88_.v88;
    v25 = v25 + (float)((float)v27 * *(float*)(a1 + 12));
  }
LABEL_7:
  v28 = *a2;
  v29 = v88_.v92;
  if (v25 < *a2) {
    v28 = v25;
  }
  *a2 = v28;
  v30 = a2[2];
  if (v30 < v25) {
    v30 = v25;
  }
  a2[2] = v30;
  *v29 = v26;
  (*(void (**)(__int64, __int64, float))(**(_QWORD**)(a1 + 88) + 72LL))(
      *(_QWORD*)(a1 + 88), (__int64)v88_.v91, v30),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w"));
  return v24 & 1;
}

float nn_font_566e80(__int64 a1, unsigned __int64 a2, int a3, int a4,
                     _DWORD* a5, __int64 a6)
{
  char v7;
  char v8;
  float v9;
  float v10;
  signed __int64 v12;
  __int64 v16;
  float v17;
  __int64* v18;
  __int64 v19;
  float v20;
  float v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 (*v26)(__int64);
  _QWORD* v27;
  unsigned int v28;
  unsigned __int64 v29;
  float v30;
  float v31;
  __int64 v32;
  int v33;
  float v34;
  unsigned int v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned int v38;
  bool v39;
  int v40;
  _BOOL4 v41;
  bool v42;
  _BOOL4 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  long double v53;
  int v54;
  float v55;
  __int64 v56;
  unsigned int v57;
  __int64 (*v58)(__int64);
  _QWORD* v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  int v65;
  float v66;
  float v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  float v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  long double v81;
  float v82;
  float v83;
  float v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  long double v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  __int64 v101;
  float v102;
  float v103;
  int v104;
  double v105;
  float v106;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  long double v121;
  float v122;
  _QWORD* v123;
  __int64 v124;
  float v125;
  struct {
    _DWORD* v127;
    int v128;
    char gap12_[8];
    float v129;
    __int64 v130;
    unsigned __int64 v131;
    char gap40_[12];
    char v133;
    char gap53_[3];
    char v134;
    char gap57_[3];
    int v135;
    unsigned __int64 v136;
    __int64 v137;
    __int64* v138;
    unsigned __int64 v139;
    __int64 v140;
    unsigned __int64 v141;
    __int64 v142;
    __int64 v143;
    unsigned __int64 v144;
    __int64 (*v145)(__int64);
    __int64 v146;
    __int64* v147;
    unsigned __int64 v148;
    __int64 v149;
    unsigned __int64 v150;
    __int64 v151;
    __int64 v152;
    float v153;
    float v154;
    __int64 v155;
    __int64 v156;
    __int128 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
    __int64 v162;
    __int64 v163;
    __int64 v164;
    __int64 v165;
    __int64 v166;
  } f_;

  v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
  v7 = *(_BYTE*)(a1 + 56);
  v8 = *(_BYTE*)(a1 + 99);
  v9 = *(float*)(a1 + 20);
  v10 = *(float*)(a1 + 24);
  v12 = a3;
  v16 = a2 + a3;
  v17 = *(float*)(a1 + 60);
  v18 = *(__int64**)(a1 + 88);
  v19 = *v18;
  f_.v153 = v10;
  f_.v154 = v9;
  (*(void (**)(__int64, __int64, __int64, __int64, float))(v19 + 80))(
      (__int64)v18, a1, a2, v16, v9),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
  f_.v128 = a3;
  v20 = TextBox_5677c0(a1, &f_.v154, &f_.v153, a2, a3),
  v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
  v21 = *(float*)(a1 + 24);
  f_.v147 = (__int64*)a1;
  f_.v148 = a2;
  f_.v149 = v16;
  f_.v152 = 0;
  f_.v135 = a4;
  f_.v129 = v21;
  f_.v150 = __PAIR64__(LODWORD(f_.v153), LODWORD(f_.v154));
  v22 = *(_DWORD*)(a1 + 16);
  LODWORD(f_.v151) = *(_DWORD*)(a1 + 12);
  DWORDn(f_.v151, sizeof(f_.v151) / 4 - 1) = v22;
  if (a4 != 0) {
    if (a4 < 1) {
      v23 = 0;
    }
    else {
      v23 = *(_DWORD*)a5;
    }
    *(_DWORD*)(a1 + 20) = v23;
  }
  v24 = *(_QWORD*)(a1 + 40);
  f_.v127 = a5;
  f_.v145 = nullptr;
  f_.v146 = 0;
  f_.v144 = 0;
  Font_55d700((void*)(&f_.v144), v24),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
  v25 = *(_QWORD*)(a1 + 88);
  f_.v144 = a2;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v25 + 48LL))(v25,
                                                         (__int64)&f_.v147),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
  v26 = f_.v145;
  f_.v130 = v16;
  v27 = (unsigned __int64*)((char*)&f_.v144 + (f_.v146 >> 1));
  if ((f_.v146 & 1) != 0) {
    v26 = *(__int64 (**)(__int64))((char*)f_.v145 + *v27),
    v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  f_.v134 = v7 & v8;
  v28 = v26((__int64)v27),
  v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
  v29 = f_.v144;
  if ((__int64)(f_.v144 - a2) <= v12) {
    v34 = 0x0.0p+0f;
    v35 = v28;
    f_.v133 = 0;
    LODWORD(v36) = 0;
    v37 = a2;
    f_.v131 = a2;
    while (1) {
      v39 = (int)v36 >= f_.v135 & v37 == f_.v131;
      v40 = v36;
      v41 = v39;
      v42 = v39 || v17 >= 0x1.fffffe0000000p+127f;
      while (1) {
        while (v35 <= 0x1F) {
          f_.v148 = v29;
          LODWORD(f_.v152) = (f_.v133 & 1) == 0;
          v44 = v17 >= 0x1.fffffe0000000p+127f | v35 == 10;
          if (v44 || v41) {
            goto LABEL_64;
          }
          f_.v136 = 0;
          f_.v137 = 0;
          f_.v141 = f_.v150;
          f_.v142 = f_.v151;
          f_.v140 = f_.v149;
          f_.v143 = f_.v152;
          f_.v138 = f_.v147;
          f_.v139 = f_.v148;
          v45 = *(_QWORD*)(a1 + 80);
          v46 = *(_QWORD*)(a1 + 88);
          f_.v138 = &f_.v155;
          f_.v164 = v45;
          f_.v165 = v46;
          v47 = *(_QWORD*)(a1 + 88);
          f_.v166 = *(_QWORD*)(a1 + 96);
          v48 = *(_QWORD*)(a1 + 56);
          f_.v160 = *(_QWORD*)(a1 + 48);
          f_.v161 = v48;
          v49 = *(_QWORD*)(a1 + 72);
          f_.v162 = *(_QWORD*)(a1 + 64);
          f_.v163 = v49;
          v50 = *(_QWORD*)(a1 + 24);
          *(_QWORD*)&f_.v157 = *(_QWORD*)(a1 + 16);
          *((_QWORD*)&f_.v157 + 1) = v50;
          v51 = *(_QWORD*)(a1 + 40);
          f_.v158 = *(_QWORD*)(a1 + 32);
          f_.v159 = v51;
          v52 = *(_QWORD*)(a1 + 8);
          f_.v155 = *(_QWORD*)a1;
          f_.v156 = v52;
          (*(void (**)(__int64, __int64, __int64, __int64))(
              *(_QWORD*)v47 + 32LL))(v47, (__int64)&f_.v136, (__int64)&f_.v138,
                                     v35),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          {
            __typeof__(v53) z_ = (__typeof__(v53)){0};
            LODWORD(z_) = f_.v137;
            v53 = z_;
          }
          if (*(float*)&f_.v137 <= *(float*)&f_.v136) {
            goto LABEL_63;
          }
          *(_QWORD*)&v53 = 0;
          if ((int)v36 < f_.v135) {
            __typeof__(v53) z_ = (__typeof__(v53)){0};
            LODWORD(z_) = *(_DWORD*)(a6 + 4LL * (int)v36);
            v53 = z_;
          }
          *(float*)&v53 = *(float*)(a1 + 60) + *(float*)&v53;
          if ((float)(*((float*)&f_.v157 + 1) - *(float*)&f_.v150) <=
              *(float*)&v53) {
          LABEL_63:
            GameRoutine_5662e0(&f_.v155, v53),
                v83 = COERCE_AS(__typeof__(v83),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          LABEL_64:
            v65 = (*(__int64 (**)(__int64, __int64, __int64))(
                **(_QWORD**)(a1 + 88) + 24LL))(*(_QWORD*)(a1 + 88), v35,
                                               (__int64)&f_.v147),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
            v66 = *(float*)(a1 + 20);
            v67 = f_.v154;
            if (v35 == 10 && (*(_BYTE*)(a1 + 97) & 1) == 0) {
              v68 = *(unsigned __int8*)(a1 + 98);
              DWORDn(f_.v152, sizeof(f_.v152) / 4 - 1) = 0;
              if (v68 == 1) {
                v69 = *(_QWORD*)(a1 + 72);
                v70 = *(_QWORD*)(a1 + 80);
                v71 = *(_QWORD*)(a1 + 88);
                v72 = *(_QWORD*)(a1 + 96);
                v73 = v65;
                v74 = *(float*)(a1 + 24);
                f_.v138 = nullptr;
                f_.v139 = 0;
                f_.v164 = v70;
                f_.v165 = v71;
                f_.v166 = v72;
                v75 = *(_QWORD*)(a1 + 40);
                v76 = *(_QWORD*)(a1 + 56);
                v77 = *(_QWORD*)(a1 + 64);
                f_.v160 = *(_QWORD*)(a1 + 48);
                f_.v161 = v76;
                f_.v162 = v77;
                f_.v163 = v69;
                v78 = *(_QWORD*)(a1 + 24);
                v79 = *(_QWORD*)(a1 + 32);
                *(_QWORD*)&f_.v157 = *(_QWORD*)(a1 + 16);
                *((_QWORD*)&f_.v157 + 1) = v78;
                f_.v158 = v79;
                f_.v159 = v75;
                v80 = *(_QWORD*)(a1 + 8);
                f_.v155 = *(_QWORD*)a1;
                f_.v156 = v80;
                f_.v136 = f_.v144;
                *(_QWORD*)((char*)&f_.v157 + 4) = 0;
                nn_font_5665e0((__int64)&f_.v155, (float*)&f_.v138, &f_.v136,
                               f_.v128 + a2 - f_.v144),
                    v83 = COERCE_AS(__typeof__(v83),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                {
                  __typeof__(v81) z_ = (__typeof__(v81)){0};
                  LODWORD(z_) = DWORDn(f_.v139, sizeof(f_.v139) / 4 - 1);
                  v81 = z_;
                }
                v82 = *((float*)&f_.v139 + 1) - *((float*)&f_.v138 + 1);
                GameRoutine_5662e0(&f_.v155, v81),
                    v83 = COERCE_AS(__typeof__(v83),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                (*(void (**)(__int64, __int64))(**(_QWORD**)(a1 + 88) + 40LL))(
                    *(_QWORD*)(a1 + 88), a1),
                    v83 = COERCE_AS(__typeof__(v83),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                v65 = v73;
                *(float*)(a1 + 24) = v74 + (float)(v82 - v83);
              }
            }
            if (v65 > 2) {
              if (v65 != 3) {
                if (v65 == 4) {
                  goto LABEL_9;
                }
                goto LABEL_90;
              }
              v84 = 0x0.0p+0f;
              v36 = (int)v36 + 1LL;
              if (v40 + 1 < f_.v135) {
                v84 = *(float*)&f_.v127[v36];
              }
              if ((*(_DWORD*)(a1 + 80) & 3) == 2) {
                v112 = *(_QWORD*)(a1 + 80);
                v113 = *(_QWORD*)(a1 + 88);
                v114 = *(_QWORD*)(a1 + 96);
                f_.v138 = nullptr;
                f_.v139 = 0;
                f_.v164 = v112;
                f_.v165 = v113;
                v115 = *(_QWORD*)(a1 + 48);
                v116 = *(_QWORD*)(a1 + 56);
                f_.v166 = v114;
                f_.v136 = f_.v148;
                f_.v160 = v115;
                f_.v161 = v116;
                v117 = *(_QWORD*)(a1 + 72);
                f_.v162 = *(_QWORD*)(a1 + 64);
                f_.v163 = v117;
                v118 = *(_QWORD*)(a1 + 24);
                *(_QWORD*)&f_.v157 = *(_QWORD*)(a1 + 16);
                *((_QWORD*)&f_.v157 + 1) = v118;
                v119 = *(_QWORD*)(a1 + 40);
                f_.v158 = *(_QWORD*)(a1 + 32);
                f_.v159 = v119;
                v120 = *(_QWORD*)(a1 + 8);
                f_.v155 = *(_QWORD*)a1;
                f_.v156 = v120;
                *(_QWORD*)((char*)&f_.v157 + 4) = 0;
                nn_font_5665e0((__int64)&f_.v155, (float*)&f_.v138, &f_.v136,
                               f_.v128 + a2 - f_.v148),
                    v83 = COERCE_AS(__typeof__(v83),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                {
                  __typeof__(v121) z_ = (__typeof__(v121)){0};
                  LODWORD(z_) = f_.v139;
                  v121 = z_;
                }
                v122 = *(float*)&f_.v139 - *(float*)&f_.v138;
                GameRoutine_5662e0(&f_.v155, v121),
                    v83 = COERCE_AS(__typeof__(v83),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                *(float*)(a1 + 20) =
                    v84 + (float)((float)(v20 - v122) + *(float*)&f_.v150);
                if (v17 >= 0x1.fffffe0000000p+127f) {
                  goto LABEL_82;
                }
              }
              else if ((*(_DWORD*)(a1 + 80) & 3) == 1) {
                v85 = *(_QWORD*)(a1 + 80);
                v86 = *(_QWORD*)(a1 + 88);
                v87 = *(_QWORD*)(a1 + 96);
                f_.v138 = nullptr;
                f_.v139 = 0;
                f_.v164 = v85;
                f_.v165 = v86;
                v88 = *(_QWORD*)(a1 + 48);
                v89 = *(_QWORD*)(a1 + 56);
                f_.v166 = v87;
                f_.v136 = f_.v148;
                f_.v160 = v88;
                f_.v161 = v89;
                v90 = *(_QWORD*)(a1 + 72);
                f_.v162 = *(_QWORD*)(a1 + 64);
                f_.v163 = v90;
                v91 = *(_QWORD*)(a1 + 24);
                *(_QWORD*)&f_.v157 = *(_QWORD*)(a1 + 16);
                *((_QWORD*)&f_.v157 + 1) = v91;
                v92 = *(_QWORD*)(a1 + 40);
                f_.v158 = *(_QWORD*)(a1 + 32);
                f_.v159 = v92;
                v93 = *(_QWORD*)(a1 + 8);
                f_.v155 = *(_QWORD*)a1;
                f_.v156 = v93;
                *(_QWORD*)((char*)&f_.v157 + 4) = 0;
                nn_font_5665e0((__int64)&f_.v155, (float*)&f_.v138, &f_.v136,
                               f_.v128 + a2 - f_.v148),
                    v83 = COERCE_AS(__typeof__(v83),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                {
                  __typeof__(v94) z_ = (__typeof__(v94)){0};
                  LODWORD(z_) = f_.v139;
                  v94 = z_;
                }
                v95 = *(float*)&f_.v139 - *(float*)&f_.v138;
                GameRoutine_5662e0(&f_.v155, v94),
                    v83 = COERCE_AS(__typeof__(v83),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                v96 = v20 * 0x1.0000000000000p-1f;
                v97 = ceilf(v20 * 0x1.0000000000000p-1f);
                if (*(_BYTE*)(a1 + 96) != 0) {
                  v96 = v97;
                }
                v98 = v95 * 0x1.0000000000000p-1f;
                v99 = ceilf(v95 * 0x1.0000000000000p-1f);
                if (*(_BYTE*)(a1 + 96) != 0) {
                  v98 = v99;
                }
                *(float*)(a1 + 20) =
                    v84 + (float)(*(float*)&f_.v150 + (float)(v96 - v98));
                if (v17 >= 0x1.fffffe0000000p+127f) {
                  goto LABEL_82;
                }
              }
              else {
                if (v20 < (float)(*(float*)(a1 + 20) - *(float*)&f_.v150)) {
                  v20 = *(float*)(a1 + 20) - *(float*)&f_.v150;
                }
                *(float*)(a1 + 20) = v84 + *(float*)&f_.v150;
                if (v17 >= 0x1.fffffe0000000p+127f) {
                  goto LABEL_82;
                }
              }
              f_.v133 = 0;
              f_.v131 = f_.v144;
            }
            else {
              if (v65 != 1) {
                if (v65 == 2) {
                  f_.v133 = 1;
                }
                goto LABEL_90;
              }
            LABEL_82:
              f_.v133 = 0;
            }
          LABEL_90:
            v29 = f_.v148;
            v34 = v66 - v67;
            f_.v144 = f_.v148;
            goto LABEL_91;
          }
          DWORDn(f_.v152, sizeof(f_.v152) / 4 - 1) = 0;
          f_.v144 = v37;
          GameRoutine_5662e0(&f_.v155, v53),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        LABEL_24:
          v35 = 10;
          v29 = f_.v144;
          if ((__int64)(f_.v144 - a2) > v12) {
            goto LABEL_9;
          }
        }
        if ((v35 & 0xFFFFFF00) == 0x2000 &&
            (v35 == 8203 || (v35 & 0x20FE) == 0x200E ||
             v35 - 8234 <= 0x36 && ((1LL << ((unsigned __int8)v35 - 42)) &
                                    0x4000000000001FLL) != 0 ||
             v35 - 8294 < 4)) {
          goto LABEL_91;
        }
        v54 = *(_DWORD*)(a1 + 24);
        v55 = 0x0.0p+0f;
        if ((f_.v134 & 1) == 0) {
          v55 = *(float*)(a1 + 12) *
                (float)(*(int (**)(__int64, __int64, __int64))(
                    **(_QWORD**)(a1 + 40) + 184LL))(
                    *(_QWORD*)(a1 + 40),
                    DWORDn(f_.v152, sizeof(f_.v152) / 4 - 1), v35),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v56 = *(_QWORD*)(a1 + 40);
        f_.v158 = 0;
        f_.v159 = 0;
        f_.v157 = (__typeof__(f_.v157)){0};
        f_.v155 = 0;
        f_.v156 = 0;
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v56 + 152LL))(
            v56, (__int64)&f_.v155, v35),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
        if ((unsigned __int16)f_.v157 <= (unsigned int)WORD3(f_.v157)) {
          break;
        }
        v58 = f_.v145;
        v59 = (unsigned __int64*)((char*)&f_.v144 + (f_.v146 >> 1));
        if ((f_.v146 & 1) != 0) {
          v58 = *(__int64 (**)(__int64))((char*)f_.v145 + *v59),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v35 = v58((__int64)v59),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
        v29 = f_.v144;
        if ((__int64)(f_.v144 - a2) > v12) {
          goto LABEL_9;
        }
      }
      v60 = v34 + *(float*)(a1 + 64);
      if ((f_.v133 & 1) == 0) {
        v60 = v34;
      }
      if (*(_BYTE*)(a1 + 56) == 1) {
        break;
      }
      {
        __typeof__(v57) z_ = (__typeof__(v57)){0};
        LOWORD(z_) = WORD2(f_.v156);
        v57 = z_;
      }
      v61 = v60 + (float)((float)v57 * *(float*)(a1 + 12));
      v62 = 0x0.0p+0f;
      if ((f_.v134 & 1) == 0) {
        goto LABEL_57;
      }
    LABEL_58:
      v63 = (float)(v55 + v61) + v62;
      if (!v42) {
        v64 = 0x0.0p+0f;
        if ((int)v36 < f_.v135) {
          v64 = *(float*)(a6 + 4LL * (int)v36);
        }
        if (v63 > (float)(*(float*)(a1 + 60) + v64)) {
          DWORDn(f_.v152, sizeof(f_.v152) / 4 - 1) = 0;
          f_.v144 = v37;
          goto LABEL_24;
        }
      }
      v34 = v63 - v62;
      v100 = *(float*)(a1 + 20);
      v101 = *(_QWORD*)(a1 + 40);
      v102 = *(float*)(a1 + 64) + v100;
      if ((f_.v133 & 1) != 0) {
        v100 = *(float*)(a1 + 64) + v100;
      }
      v103 = v55 + v100;
      *(float*)(a1 + 20) = v103;
      v104 = (*(__int64 (**)(__int64, float, float))(*(_QWORD*)v101 + 200LL))(
          v101, v103, v102),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
      {
        __typeof__(v105) z_ = (__typeof__(v105)){0};
        LODWORD(z_) = *(_DWORD*)(a1 + 24);
        v105 = z_;
      }
      v106 = *(float*)&v105 +
             (float)(PSEUDO_UNFUSED(*(float*)(a1 + 16) *
                                    (float)(-SWORD2(f_.v159) - v104)));
      *(float*)(a1 + 24) = v106;
      game_55c300_alt1(a1, (__int64)&f_.v155, v106, v105),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
      *(_DWORD*)(a1 + 24) = v54;
      DWORDn(f_.v152, sizeof(f_.v152) / 4 - 1) = v35;
      f_.v133 = 1;
      v29 = f_.v144;
    LABEL_91:
      if (v17 < 0x1.fffffe0000000p+127f) {
        v37 = v29;
      }
      v123 = (unsigned __int64*)((char*)&f_.v144 + (f_.v146 >> 1));
      if ((f_.v146 & 1) != 0) {
        v38 = (*(__int64 (**)(__int64))((char*)f_.v145 + *v123))((__int64)v123),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v38 = f_.v145((__int64)v123),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v29 = f_.v144;
      v35 = v38;
      if ((__int64)(f_.v144 - a2) > v12) {
        goto LABEL_9;
      }
    }
    v61 = v60 + *(float*)(a1 + 32);
    v62 = 0x0.0p+0f;
    if ((f_.v134 & 1) != 0) {
      goto LABEL_58;
    }
  LABEL_57:
    v62 = *(float*)(a1 + 12) *
          (float)(*(int (**)(__int64, __int64, __int64))(
              **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40), v35, 0),
    v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
    goto LABEL_58;
  }
LABEL_9:
  if ((f_.v134 & 1) != 0) {
    v30 = *(float*)(a1 + 20);
    v31 = *(float*)&f_.v150;
    v32 = f_.v130;
    v33 = *(_DWORD*)(a1 + 80) & 0x300;
    if (v33 == 256) {
      goto LABEL_102;
    }
  }
  else {
    v30 = (float)(PSEUDO_UNFUSED(*(float*)(a1 + 12) *
                                 (float)(*(int (**)(__int64, __int64, __int64))(
                                     **(_QWORD**)(a1 + 40) + 184LL))(
                                     *(_QWORD*)(a1 + 40),
                                     DWORDn(f_.v152, sizeof(f_.v152) / 4 - 1),
                                     0))) +
          *(float*)(a1 + 20),
    v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
    *(float*)(a1 + 20) = v30;
    v31 = *(float*)&f_.v150;
    v32 = f_.v130;
    v33 = *(_DWORD*)(a1 + 80) & 0x300;
    if (v33 == 256) {
      goto LABEL_102;
    }
  }
  if (v33 != 512) {
    v10 = (float)(v10 - f_.v129) + *(float*)(a1 + 24);
  }
LABEL_102:
  v124 = *(_QWORD*)(a1 + 88);
  *(float*)(a1 + 24) = v10;
  v125 = v30 - v31;
  if (v20 < v125) {
    v20 = v125;
  }
  (*(void (**)(__int64, __int64, float))(*(_QWORD*)v124 + 56LL))(
      v124, (__int64)&f_.v147, v125),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64, __int64, __int64, __int64))(
      **(_QWORD**)(a1 + 88) + 88LL))(*(_QWORD*)(a1 + 88), a1, a2, v32),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w"));
  return v20;
}

__int64 nn_font_567fe0(__int64 a1, float* a2, unsigned __int64* a3, int a4)
{
  unsigned __int64 v4;
  unsigned int v5;
  unsigned int v6;
  char v8;
  unsigned __int64 v11;
  char v12;
  float v13;
  __int64 v14;
  float v15;
  __int64 (*v16)(_QWORD*);
  _QWORD* v17;
  char v18;
  unsigned int v19;
  unsigned __int64 v20;
  char v21;
  float v22;
  unsigned __int64 v23;
  int v24;
  float v25;
  unsigned __int64* v26;
  float v27;
  unsigned int v29;
  char v30;
  unsigned int v31;
  bool v32;
  char v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  long double v49;
  int v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  __int64 (*v63)(void);
  struct {
    __int64 v64;
    __int64 v65;
  } v64_;
  struct {
    _QWORD v66[2];
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
  } v66_;
  _QWORD v78[6];
  float v79;
  __int64 v80;
  float v81;
  struct {
    unsigned __int64 v82;
    __int64 (*v83)(_QWORD);
    __int64 v84;
    _QWORD v85[7];
    char gap272_[8];
    unsigned __int64* v86;
  } v82_;

  v4 = *a3;
  v5 = *(_DWORD*)(a1 + 12);
  v6 = *(_DWORD*)(a1 + 16);
  v8 = *(_BYTE*)(a1 + 56);
  v11 = *a3 + 2LL * a4;
  v12 = *(_BYTE*)(a1 + 99);
  v13 = *(float*)(a1 + 60);
  v82_.v85[0] = a1;
  v82_.v85[1] = v4;
  v14 = *(_QWORD*)(a1 + 40);
  v82_.v86 = a3;
  v82_.v85[5] = 0;
  v82_.v83 = nullptr;
  v82_.v84 = 0;
  v82_.v82 = 0;
  v82_.v85[4] = __PAIR64__(v6, v5);
  v82_.v85[2] = v11;
  v82_.v85[3] = 0;
  Font_55d7a0((void*)(&v82_.v82), v14);
  v15 = TextTagProcessor_55c240(a1);
  *a2 = 0x0.0p+0f;
  a2[2] = 0x0.0p+0f;
  v82_.v82 = v4;
  a2[1] = fminf(v15, 0x0.0p+0f);
  a2[3] = fmaxf(v15, 0x0.0p+0f);
  (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)(a1 + 88) + 64LL))(
      *(_QWORD*)(a1 + 88), v82_.v85);
  v16 = (__int64 (*)(_QWORD*))v82_.v83;
  v17 = (unsigned __int64*)((char*)&v82_.v82 + (v82_.v84 >> 1));
  if ((v82_.v84 & 1) != 0) {
    v16 = *(__int64 (**)(_QWORD*))((char*)v82_.v83 + *v17);
  }
  v18 = v8 & v12;
  v19 = v16(v17);
  v20 = v82_.v82;
  if (v82_.v82 <= v11) {
    v22 = 0x0.0p+0f;
    v29 = v19;
    v30 = 0;
    v23 = 0;
    v21 = 0;
    while (1) {
      v32 = v23 != 0 && v13 < 0x1.fffffe0000000p+127f;
      v33 = v32;
      while (1) {
        if ((v18 & 1) != 0) {
          if ((v33 & 1) == 0) {
            if (v29 >= 0x20) {
              if ((v29 & 0xFFFFFF00) == 0x2000 &&
                  (v29 == 8203 || (v29 & 0x20FE) == 0x200E || v29 - 8234 < 5 ||
                   v29 == 8288 || v29 - 8294 < 4)) {
                goto LABEL_114;
              }
              if ((v30 & 1) != 0) {
                v22 = v22 + *(float*)(a1 + 64);
              }
              if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
                v57 = v22 + *(float*)(a1 + 32);
              }
              else {
                v57 = v22 + (float)((float)(*(int (**)(_QWORD, _QWORD))(
                                        **(_QWORD**)(a1 + 40) + 128LL))(
                                        *(_QWORD*)(a1 + 40), v29) *
                                    *(float*)(a1 + 12));
              }
              v39 = 0x0.0p+0f;
              v40 = v57 + 0x0.0p+0f;
            LABEL_103:
              v58 = *a2;
              if (v40 < *a2) {
                v58 = v40;
              }
              *a2 = v58;
              v59 = a2[2];
              if (v59 < v40) {
                v59 = v40;
              }
              a2[2] = v59;
              if (*(_BYTE*)(a1 + 98) == 1) {
                v60 = *(float*)(a1 + 24);
                v61 = a2[1];
                if (v60 < v61) {
                  v61 = *(float*)(a1 + 24);
                }
                a2[1] = v61;
                v62 = v60 + (*(float (**)(_QWORD, __int64))(
                                **(_QWORD**)(a1 + 88) + 40LL))(
                                *(_QWORD*)(a1 + 88), a1);
                if (a2[3] >= v62) {
                  v62 = a2[3];
                }
                a2[3] = v62;
              }
              v20 = v82_.v82;
              v22 = v40 - v39;
              v30 = 1;
              HIDWORD(v82_.v85[5]) = v29;
              goto LABEL_114;
            }
          LABEL_48:
            if (v29 != 10) {
              goto LABEL_63;
            }
            goto LABEL_59;
          }
          if (v29 < 0x20) {
            goto LABEL_48;
          }
          if ((v29 & 0xFFFFFF00) == 0x2000 &&
              (v29 == 8203 || (v29 & 0x20FE) == 0x200E ||
               v29 - 8234 <= 0x36 && ((1LL << ((unsigned __int8)v29 - 42)) &
                                      0x4000000000001FLL) != 0 ||
               v29 - 8294 < 4)) {
            goto LABEL_114;
          }
          if ((v30 & 1) != 0) {
            v34 = v22 + *(float*)(a1 + 64);
          }
          else {
            v34 = v22;
          }
          if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
            v35 = v34 + *(float*)(a1 + 32);
          }
          else {
            v35 = v34 + (float)((float)(*(int (**)(_QWORD, _QWORD))(
                                    **(_QWORD**)(a1 + 40) + 128LL))(
                                    *(_QWORD*)(a1 + 40), v29) *
                                *(float*)(a1 + 12));
          }
          v39 = 0x0.0p+0f;
          v40 = v35 + 0x0.0p+0f;
          if ((float)((float)(v35 + 0x0.0p+0f) + *(float*)(a1 + 72)) <=
              *(float*)(a1 + 60)) {
            goto LABEL_103;
          }
          v21 = 1;
          v82_.v82 = v23;
          if (v23 > v11) {
            goto LABEL_7;
          }
        }
        else {
          if (v29 < 0x20) {
            goto LABEL_48;
          }
          if ((v29 & 0xFFFFFF00) == 0x2000 &&
              (v29 == 8203 || (v29 & 0x20FE) == 0x200E ||
               v29 - 8234 <= 0x36 && ((1LL << ((unsigned __int8)v29 - 42)) &
                                      0x4000000000001FLL) != 0 ||
               v29 - 8294 < 4)) {
            goto LABEL_114;
          }
          if ((v30 & 1) != 0) {
            v36 = v22 + *(float*)(a1 + 64);
          }
          else {
            v36 = v22;
          }
          if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
            v37 = v36 + *(float*)(a1 + 32);
          }
          else {
            v37 = v36 + (float)((float)(*(int (**)(_QWORD, _QWORD))(
                                    **(_QWORD**)(a1 + 40) + 128LL))(
                                    *(_QWORD*)(a1 + 40), v29) *
                                *(float*)(a1 + 12));
          }
          v38 = v37 +
                (float)((float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                            **(_QWORD**)(a1 + 40) + 184LL))(
                            *(_QWORD*)(a1 + 40), HIDWORD(v82_.v85[5]), v29) *
                        *(float*)(a1 + 12));
          v39 =
              *(float*)(a1 + 12) *
              (float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                  **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40), v29, 0);
          v40 = v38 + v39;
          if ((v33 & 1) == 0 ||
              (float)(v40 + *(float*)(a1 + 72)) <= *(float*)(a1 + 60)) {
            goto LABEL_103;
          }
          v21 = 1;
          v82_.v82 = v23;
          if (v23 > v11) {
            goto LABEL_6;
          }
        }
        v29 = 10;
        v20 = v23;
      LABEL_59:
        if ((*(_BYTE*)(a1 + 97) & 1) == 0) {
          if ((v18 & 1) == 0) {
            v41 = (float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40),
                                                HIDWORD(v82_.v85[5]), 0);
            v20 = v82_.v82;
            v22 = v22 + (float)(v41 * *(float*)(a1 + 12));
          }
          HIDWORD(v82_.v85[5]) = 0;
        }
      LABEL_63:
        v79 = v22;
        v80 = 0;
        v81 = 0x0.0p+0f;
        v82_.v85[1] = v20;
        LODWORD(v82_.v85[5]) = (v30 & 1) == 0;
        *(float*)(a1 + 20) = v22;
        if (v13 >= 0x1.fffffe0000000p+127f || v29 == 10 || v23 == 0) {
          goto LABEL_71;
        }
        v64_.v64 = 0;
        v64_.v65 = 0;
        qmemcpy(v78, v82_.v85, sizeof(v78));
        v42 = *(_QWORD*)(a1 + 88);
        v66_.v75 = *(_QWORD*)(a1 + 80);
        v66_.v76 = v42;
        v43 = *(_QWORD*)(a1 + 88);
        v66_.v77 = *(_QWORD*)(a1 + 96);
        v78[0] = v66_.v66;
        v44 = *(_QWORD*)(a1 + 56);
        v66_.v71 = *(_QWORD*)(a1 + 48);
        v66_.v72 = v44;
        v45 = *(_QWORD*)(a1 + 72);
        v66_.v73 = *(_QWORD*)(a1 + 64);
        v66_.v74 = v45;
        v46 = *(_QWORD*)(a1 + 24);
        v66_.v67 = *(_QWORD*)(a1 + 16);
        v66_.v68 = v46;
        v47 = *(_QWORD*)(a1 + 40);
        v66_.v69 = *(_QWORD*)(a1 + 32);
        v66_.v70 = v47;
        v48 = *(_QWORD*)(a1 + 8);
        v66_.v66[0] = *(_QWORD*)a1;
        v66_.v66[1] = v48;
        (*(void (**)(__int64, __int64*, _QWORD*, _QWORD))(
            *(_QWORD*)v43 + 32LL))(v43, &v64_.v64, v78, v29);
        LODWORD(v49) = v64_.v65;
        if (*(float*)&v64_.v65 <= *(float*)&v64_.v64) {
          break;
        }
        *(float*)&v49 = *((float*)&v66_.v67 + 1) - *(float*)&v82_.v85[3];
        if ((float)(*((float*)&v66_.v67 + 1) - *(float*)&v82_.v85[3]) <=
            *(float*)(a1 + 60)) {
          break;
        }
        v82_.v82 = v23;
        GameRoutine_567cd0(v66_.v66, v49);
        v20 = v82_.v82;
        v29 = 10;
        v21 = 1;
        if (v82_.v82 > v11) {
          goto LABEL_5;
        }
      }
      GameRoutine_567cd0(v66_.v66, v49);
    LABEL_71:
      v50 = (*(__int64 (**)(_QWORD, float*, _QWORD*, _QWORD))(
          **(_QWORD**)(a1 + 88) + 32LL))(*(_QWORD*)(a1 + 88), &v79, v82_.v85,
                                         v29);
      v51 = a2[3];
      if (v29 == 10 && (*(_BYTE*)(a1 + 98) & 1) != 0 &&
          *(float*)(a1 + 24) < v51) {
        *(float*)(a1 + 24) = v51;
        v51 = a2[3];
      }
      v52 = v79;
      v53 = *(float*)&v80;
      v54 = *a2;
      v55 = a2[1];
      v20 = v82_.v85[1];
      v32 = v79 < *a2;
      v82_.v82 = v82_.v85[1];
      if (!v32) {
        v52 = v54;
      }
      if (*(float*)&v80 >= v55) {
        v53 = v55;
      }
      *a2 = v52;
      a2[1] = v53;
      v56 = a2[2];
      if (v56 < *((float*)&v80 + 1)) {
        v56 = *((float*)&v80 + 1);
      }
      if (v51 < v81) {
        v51 = v81;
      }
      a2[2] = v56;
      a2[3] = v51;
      v22 = *(float*)(a1 + 20);
      if (v50 <= 1) {
        if (v50 == 1) {
          v30 = 0;
        }
      }
      else {
        switch (v50) {
        case 2:
          v30 = 1;
          break;
        case 4:
          v21 = 0;
          *v82_.v86 += 2LL * a4;
          return v21 & 1;
        case 3:
          goto LABEL_5;
        default:
          break;
        }
      }
    LABEL_114:
      if (v13 < 0x1.fffffe0000000p+127f) {
        v23 = v20;
      }
      v63 = (__int64 (*)(void))v82_.v83;
      if ((v82_.v84 & 1) != 0) {
        v63 = *(__int64 (**)(void))(
            (char*)v82_.v83 +
            *(unsigned __int64*)((char*)&v82_.v82 + (v82_.v84 >> 1)));
      }
      v31 = v63();
      v20 = v82_.v82;
      v29 = v31;
      if (v82_.v82 > v11) {
        goto LABEL_5;
      }
    }
  }
  v21 = 0;
  v22 = 0x0.0p+0f;
LABEL_5:
  v23 = v20;
  if ((v18 & 1) == 0) {
  LABEL_6:
    v24 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
        **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40),
                                        HIDWORD(v82_.v85[5]), 0);
    v23 = v82_.v82;
    v22 = v22 + (float)((float)v24 * *(float*)(a1 + 12));
  }
LABEL_7:
  v25 = *a2;
  v26 = v82_.v86;
  if (v22 < *a2) {
    v25 = v22;
  }
  *a2 = v25;
  v27 = a2[2];
  if (v27 < v22) {
    v27 = v22;
  }
  a2[2] = v27;
  *v26 = v23;
  (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)(a1 + 88) + 72LL))(
      *(_QWORD*)(a1 + 88), v82_.v85);
  return v21 & 1;
}

float nn_font_568880(__int64 a1, __int64 a2, signed int a3, int a4, _DWORD* a5,
                     __int64 a6)
{
  char v7;
  char v8;
  float v9;
  float v10;
  __int64 v11;
  float v17;
  __int64* v18;
  __int64 v19;
  float v21;
  float v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 (*v28)(__int64);
  _QWORD* v29;
  unsigned int v30;
  unsigned __int64 v31;
  float v32;
  float v33;
  __int64 v34;
  int v35;
  float v36;
  unsigned int v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned int v40;
  bool v41;
  int v42;
  _BOOL4 v43;
  bool v44;
  _BOOL4 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  float v55;
  int v56;
  float v57;
  __int64 v58;
  unsigned int v59;
  __int64 (*v60)(__int64);
  _QWORD* v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  int v67;
  float v68;
  float v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  int v75;
  float v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  float v83;
  float v84;
  float v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  __int64 v101;
  float v102;
  float v103;
  int v104;
  double v105;
  float v106;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  float v121;
  _QWORD* v122;
  __int64 v123;
  float v124;
  _DWORD* v126;
  signed int v127;
  float v128;
  __int64 v129;
  unsigned __int64 v130;
  char v132;
  char v133;
  int v134;
  struct {
    unsigned __int64 v135;
    __int64 v136;
  } v135_;
  struct {
    __int64* v137;
    unsigned __int64 v138;
    __int64 v139;
    unsigned __int64 v140;
    __int64 v141;
    __int64 v142;
  } v137_;
  struct {
    unsigned __int64 v143;
    __int64 (*v144)(__int64);
    __int64 v145;
    __int64* v146;
    unsigned __int64 v147;
    __int64 v148;
    unsigned __int64 v149;
    __int64 v150;
    __int64 v151;
    float v152;
    float v153;
    __int64 v154;
    __int64 v155;
    __int128 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
    __int64 v162;
    __int64 v163;
    __int64 v164;
    __int64 v165;
  } v143_;

  v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
  v7 = *(_BYTE*)(a1 + 56);
  v8 = *(_BYTE*)(a1 + 99);
  v9 = *(float*)(a1 + 20);
  v10 = *(float*)(a1 + 24);
  v11 = a2 + 2LL * a3;
  v17 = *(float*)(a1 + 60);
  v18 = *(__int64**)(a1 + 88);
  v19 = *v18;
  v143_.v152 = v10;
  v143_.v153 = v9;
  (*(void (**)(__int64, __int64, __int64, __int64, float))(v19 + 80))(
      (__int64)v18, a1, a2, v11, v9),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
  v21 = GameRoutine_5691c0_alt1(a1, &v143_.v153, &v143_.v152, a2, a3),
  v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
  v22 = *(float*)(a1 + 24);
  v143_.v146 = (__int64*)a1;
  v143_.v147 = a2;
  v143_.v148 = v11;
  v143_.v151 = 0;
  v134 = a4;
  v128 = v22;
  v143_.v149 = __PAIR64__(LODWORD(v143_.v152), LODWORD(v143_.v153));
  v23 = *(_DWORD*)(a1 + 16);
  LODWORD(v143_.v150) = *(_DWORD*)(a1 + 12);
  DWORDn(v143_.v150, sizeof(v143_.v150) / 4 - 1) = v23;
  if (a4 != 0) {
    if (a4 < 1) {
      v24 = 0;
    }
    else {
      v24 = *(_DWORD*)a5;
    }
    *(_DWORD*)(a1 + 20) = v24;
  }
  v25 = *(_QWORD*)(a1 + 40);
  v127 = a3;
  v26 = a3;
  v143_.v144 = nullptr;
  v143_.v145 = 0;
  v143_.v143 = 0;
  Font_55d7a0((void*)(&v143_.v143), v25),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
  v27 = *(_QWORD*)(a1 + 88);
  v143_.v143 = a2;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v27 + 48LL))(v27,
                                                         (__int64)&v143_.v146),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
  v28 = v143_.v144;
  v129 = v11;
  v29 = (unsigned __int64*)((char*)&v143_.v143 + (v143_.v145 >> 1));
  if ((v143_.v145 & 1) != 0) {
    v28 = *(__int64 (**)(__int64))((char*)v143_.v144 + *v29),
    v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v133 = v7 & v8;
  v30 = v28((__int64)v29),
  v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
  v31 = v143_.v143;
  if (a3 >= (__int64)(v143_.v143 - a2) >> 1) {
    v36 = 0x0.0p+0f;
    v37 = v30;
    v126 = a5;
    v132 = 0;
    LODWORD(v38) = 0;
    v39 = a2;
    v130 = a2;
    while (1) {
      v41 = (int)v38 >= v134 & v39 == v130;
      v42 = v38;
      v43 = v41;
      v44 = v41 || v17 >= 0x1.fffffe0000000p+127f;
      while (1) {
        while (v37 <= 0x1F) {
          v143_.v147 = v31;
          LODWORD(v143_.v151) = (v132 & 1) == 0;
          v46 = v17 >= 0x1.fffffe0000000p+127f | v37 == 10;
          if (v46 || v43) {
            goto LABEL_64;
          }
          v135_.v135 = 0;
          v135_.v136 = 0;
          v137_.v140 = v143_.v149;
          v137_.v141 = v143_.v150;
          v137_.v139 = v143_.v148;
          v137_.v142 = v143_.v151;
          v137_.v137 = v143_.v146;
          v137_.v138 = v143_.v147;
          v47 = *(_QWORD*)(a1 + 80);
          v48 = *(_QWORD*)(a1 + 88);
          v137_.v137 = &v143_.v154;
          v143_.v163 = v47;
          v143_.v164 = v48;
          v49 = *(_QWORD*)(a1 + 88);
          v143_.v165 = *(_QWORD*)(a1 + 96);
          v50 = *(_QWORD*)(a1 + 56);
          v143_.v159 = *(_QWORD*)(a1 + 48);
          v143_.v160 = v50;
          v51 = *(_QWORD*)(a1 + 72);
          v143_.v161 = *(_QWORD*)(a1 + 64);
          v143_.v162 = v51;
          v52 = *(_QWORD*)(a1 + 24);
          *(_QWORD*)&v143_.v156 = *(_QWORD*)(a1 + 16);
          *((_QWORD*)&v143_.v156 + 1) = v52;
          v53 = *(_QWORD*)(a1 + 40);
          v143_.v157 = *(_QWORD*)(a1 + 32);
          v143_.v158 = v53;
          v54 = *(_QWORD*)(a1 + 8);
          v143_.v154 = *(_QWORD*)a1;
          v143_.v155 = v54;
          (*(void (**)(__int64, __int64, __int64, __int64))(
              *(_QWORD*)v49 + 32LL))(v49, (__int64)&v135_.v135,
                                     (__int64)&v137_.v137, v37),
              v84 = COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if (*(float*)&v135_.v136 <= *(float*)&v135_.v135) {
            goto LABEL_63;
          }
          v55 = 0x0.0p+0f;
          if ((int)v38 < v134) {
            v55 = *(float*)(a6 + 4LL * (int)v38);
          }
          if ((float)(*((float*)&v143_.v156 + 1) - *(float*)&v143_.v149) <=
              (float)(*(float*)(a1 + 60) + v55)) {
          LABEL_63:
            GameRoutine_567cd0_alt1(&v143_.v154),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          LABEL_64:
            v67 = (*(__int64 (**)(__int64, __int64, __int64))(
                **(_QWORD**)(a1 + 88) + 24LL))(*(_QWORD*)(a1 + 88), v37,
                                               (__int64)&v143_.v146),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
            v68 = *(float*)(a1 + 20);
            v69 = v143_.v153;
            if (v37 == 10 && (*(_BYTE*)(a1 + 97) & 1) == 0) {
              v70 = *(unsigned __int8*)(a1 + 98);
              DWORDn(v143_.v151, sizeof(v143_.v151) / 4 - 1) = 0;
              if (v70 == 1) {
                v71 = *(_QWORD*)(a1 + 72);
                v72 = *(_QWORD*)(a1 + 80);
                v73 = *(_QWORD*)(a1 + 88);
                v74 = *(_QWORD*)(a1 + 96);
                v75 = v67;
                v76 = *(float*)(a1 + 24);
                v137_.v137 = nullptr;
                v137_.v138 = 0;
                v143_.v163 = v72;
                v143_.v164 = v73;
                v143_.v165 = v74;
                v77 = *(_QWORD*)(a1 + 40);
                v78 = *(_QWORD*)(a1 + 56);
                v79 = *(_QWORD*)(a1 + 64);
                v143_.v159 = *(_QWORD*)(a1 + 48);
                v143_.v160 = v78;
                v143_.v161 = v79;
                v143_.v162 = v71;
                v80 = *(_QWORD*)(a1 + 24);
                v81 = *(_QWORD*)(a1 + 32);
                *(_QWORD*)&v143_.v156 = *(_QWORD*)(a1 + 16);
                *((_QWORD*)&v143_.v156 + 1) = v80;
                v143_.v157 = v81;
                v143_.v158 = v77;
                v135_.v135 = v143_.v143;
                v82 = *(_QWORD*)(a1 + 8);
                v143_.v154 = *(_QWORD*)a1;
                v143_.v155 = v82;
                *(_QWORD*)((char*)&v143_.v156 + 4) = 0;
                nn_font_567fe0((__int64)&v143_.v154, (float*)&v137_.v137,
                               &v135_.v135, v127 - ((v143_.v143 - a2) >> 1)),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                v83 = *((float*)&v137_.v138 + 1) - *((float*)&v137_.v137 + 1);
                GameRoutine_567cd0_alt1(&v143_.v154),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                (*(void (**)(__int64, __int64))(**(_QWORD**)(a1 + 88) + 40LL))(
                    *(_QWORD*)(a1 + 88), a1),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                v67 = v75;
                *(float*)(a1 + 24) = v76 + (float)(v83 - v84);
              }
            }
            if (v67 > 2) {
              if (v67 != 3) {
                if (v67 == 4) {
                  goto LABEL_9;
                }
                goto LABEL_90;
              }
              v85 = 0x0.0p+0f;
              v38 = (int)v38 + 1LL;
              if (v42 + 1 < v134) {
                v85 = *(float*)&v126[v38];
              }
              if ((*(_DWORD*)(a1 + 80) & 3) == 2) {
                v112 = *(_QWORD*)(a1 + 80);
                v113 = *(_QWORD*)(a1 + 88);
                v114 = *(_QWORD*)(a1 + 96);
                v137_.v137 = nullptr;
                v137_.v138 = 0;
                v143_.v163 = v112;
                v143_.v164 = v113;
                v115 = *(_QWORD*)(a1 + 48);
                v116 = *(_QWORD*)(a1 + 56);
                v135_.v135 = v143_.v147;
                v143_.v165 = v114;
                v143_.v159 = v115;
                v143_.v160 = v116;
                v117 = *(_QWORD*)(a1 + 72);
                v143_.v161 = *(_QWORD*)(a1 + 64);
                v143_.v162 = v117;
                v118 = *(_QWORD*)(a1 + 24);
                *(_QWORD*)&v143_.v156 = *(_QWORD*)(a1 + 16);
                *((_QWORD*)&v143_.v156 + 1) = v118;
                v119 = *(_QWORD*)(a1 + 40);
                v143_.v157 = *(_QWORD*)(a1 + 32);
                v143_.v158 = v119;
                v120 = *(_QWORD*)(a1 + 8);
                v143_.v154 = *(_QWORD*)a1;
                v143_.v155 = v120;
                *(_QWORD*)((char*)&v143_.v156 + 4) = 0;
                nn_font_567fe0((__int64)&v143_.v154, (float*)&v137_.v137,
                               &v135_.v135, v127 - ((v143_.v147 - a2) >> 1)),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                v121 = *(float*)&v137_.v138 - *(float*)&v137_.v137;
                GameRoutine_567cd0_alt1(&v143_.v154),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                *(float*)(a1 + 20) =
                    v85 + (float)((float)(v21 - v121) + *(float*)&v143_.v149);
                if (v17 >= 0x1.fffffe0000000p+127f) {
                  goto LABEL_82;
                }
              }
              else if ((*(_DWORD*)(a1 + 80) & 3) == 1) {
                v86 = *(_QWORD*)(a1 + 80);
                v87 = *(_QWORD*)(a1 + 88);
                v88 = *(_QWORD*)(a1 + 96);
                v137_.v137 = nullptr;
                v137_.v138 = 0;
                v143_.v163 = v86;
                v143_.v164 = v87;
                v89 = *(_QWORD*)(a1 + 48);
                v90 = *(_QWORD*)(a1 + 56);
                v135_.v135 = v143_.v147;
                v143_.v165 = v88;
                v143_.v159 = v89;
                v143_.v160 = v90;
                v91 = *(_QWORD*)(a1 + 72);
                v143_.v161 = *(_QWORD*)(a1 + 64);
                v143_.v162 = v91;
                v92 = *(_QWORD*)(a1 + 24);
                *(_QWORD*)&v143_.v156 = *(_QWORD*)(a1 + 16);
                *((_QWORD*)&v143_.v156 + 1) = v92;
                v93 = *(_QWORD*)(a1 + 40);
                v143_.v157 = *(_QWORD*)(a1 + 32);
                v143_.v158 = v93;
                v94 = *(_QWORD*)(a1 + 8);
                v143_.v154 = *(_QWORD*)a1;
                v143_.v155 = v94;
                *(_QWORD*)((char*)&v143_.v156 + 4) = 0;
                nn_font_567fe0((__int64)&v143_.v154, (float*)&v137_.v137,
                               &v135_.v135, v127 - ((v143_.v147 - a2) >> 1)),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                v95 = *(float*)&v137_.v138 - *(float*)&v137_.v137;
                GameRoutine_567cd0_alt1(&v143_.v154),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                v96 = v21 * 0x1.0000000000000p-1f;
                v97 = ceilf(v21 * 0x1.0000000000000p-1f);
                if (*(_BYTE*)(a1 + 96) != 0) {
                  v96 = v97;
                }
                v98 = v95 * 0x1.0000000000000p-1f;
                v99 = ceilf(v95 * 0x1.0000000000000p-1f);
                if (*(_BYTE*)(a1 + 96) != 0) {
                  v98 = v99;
                }
                *(float*)(a1 + 20) =
                    v85 + (float)(*(float*)&v143_.v149 + (float)(v96 - v98));
                if (v17 >= 0x1.fffffe0000000p+127f) {
                  goto LABEL_82;
                }
              }
              else {
                if (v21 < (float)(*(float*)(a1 + 20) - *(float*)&v143_.v149)) {
                  v21 = *(float*)(a1 + 20) - *(float*)&v143_.v149;
                }
                *(float*)(a1 + 20) = v85 + *(float*)&v143_.v149;
                if (v17 >= 0x1.fffffe0000000p+127f) {
                  goto LABEL_82;
                }
              }
              v132 = 0;
              v130 = v143_.v143;
            }
            else {
              if (v67 != 1) {
                if (v67 == 2) {
                  v132 = 1;
                }
                goto LABEL_90;
              }
            LABEL_82:
              v132 = 0;
            }
          LABEL_90:
            v31 = v143_.v147;
            v36 = v68 - v69;
            v143_.v143 = v143_.v147;
            goto LABEL_91;
          }
          DWORDn(v143_.v151, sizeof(v143_.v151) / 4 - 1) = 0;
          v143_.v143 = v39;
          GameRoutine_567cd0_alt1(&v143_.v154),
              v84 = COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        LABEL_24:
          v37 = 10;
          v31 = v143_.v143;
          if (v26 < (__int64)(v143_.v143 - a2) >> 1) {
            goto LABEL_9;
          }
        }
        if ((v37 & 0xFFFFFF00) == 0x2000 &&
            (v37 == 8203 || (v37 & 0x20FE) == 0x200E ||
             v37 - 8234 <= 0x36 && ((1LL << ((unsigned __int8)v37 - 42)) &
                                    0x4000000000001FLL) != 0 ||
             v37 - 8294 < 4)) {
          goto LABEL_91;
        }
        v56 = *(_DWORD*)(a1 + 24);
        v57 = 0x0.0p+0f;
        if ((v133 & 1) == 0) {
          v57 = *(float*)(a1 + 12) *
                (float)(*(int (**)(__int64, __int64, __int64))(
                    **(_QWORD**)(a1 + 40) + 184LL))(
                    *(_QWORD*)(a1 + 40),
                    DWORDn(v143_.v151, sizeof(v143_.v151) / 4 - 1), v37),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v58 = *(_QWORD*)(a1 + 40);
        v143_.v157 = 0;
        v143_.v158 = 0;
        v143_.v156 = (__typeof__(v143_.v156)){0};
        v143_.v154 = 0;
        v143_.v155 = 0;
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v58 + 152LL))(
            v58, (__int64)&v143_.v154, v37),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
        if ((unsigned __int16)v143_.v156 <= (unsigned int)WORD3(v143_.v156)) {
          break;
        }
        v60 = v143_.v144;
        v61 = (unsigned __int64*)((char*)&v143_.v143 + (v143_.v145 >> 1));
        if ((v143_.v145 & 1) != 0) {
          v60 = *(__int64 (**)(__int64))((char*)v143_.v144 + *v61),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v37 = v60((__int64)v61),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
        v31 = v143_.v143;
        if (v26 < (__int64)(v143_.v143 - a2) >> 1) {
          goto LABEL_9;
        }
      }
      v62 = v36 + *(float*)(a1 + 64);
      if ((v132 & 1) == 0) {
        v62 = v36;
      }
      if (*(_BYTE*)(a1 + 56) == 1) {
        break;
      }
      {
        __typeof__(v59) z_ = (__typeof__(v59)){0};
        LOWORD(z_) = WORD2(v143_.v155);
        v59 = z_;
      }
      v63 = v62 + (float)((float)v59 * *(float*)(a1 + 12));
      v64 = 0x0.0p+0f;
      if ((v133 & 1) == 0) {
        goto LABEL_57;
      }
    LABEL_58:
      v65 = (float)(v57 + v63) + v64;
      if (!v44) {
        v66 = 0x0.0p+0f;
        if ((int)v38 < v134) {
          v66 = *(float*)(a6 + 4LL * (int)v38);
        }
        if (v65 > (float)(*(float*)(a1 + 60) + v66)) {
          DWORDn(v143_.v151, sizeof(v143_.v151) / 4 - 1) = 0;
          v143_.v143 = v39;
          goto LABEL_24;
        }
      }
      v36 = v65 - v64;
      v100 = *(float*)(a1 + 20);
      v101 = *(_QWORD*)(a1 + 40);
      v102 = *(float*)(a1 + 64) + v100;
      if ((v132 & 1) != 0) {
        v100 = *(float*)(a1 + 64) + v100;
      }
      v103 = v57 + v100;
      *(float*)(a1 + 20) = v103;
      v104 = (*(__int64 (**)(__int64, float, float))(*(_QWORD*)v101 + 200LL))(
          v101, v103, v102),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
      {
        __typeof__(v105) z_ = (__typeof__(v105)){0};
        LODWORD(z_) = *(_DWORD*)(a1 + 24);
        v105 = z_;
      }
      v106 = *(float*)&v105 +
             (float)(PSEUDO_UNFUSED(*(float*)(a1 + 16) *
                                    (float)(-SWORD2(v143_.v158) - v104)));
      *(float*)(a1 + 24) = v106;
      game_55c300_alt1(a1, (__int64)&v143_.v154, v106, v105),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
      *(_DWORD*)(a1 + 24) = v56;
      DWORDn(v143_.v151, sizeof(v143_.v151) / 4 - 1) = v37;
      v132 = 1;
      v31 = v143_.v143;
    LABEL_91:
      if (v17 < 0x1.fffffe0000000p+127f) {
        v39 = v31;
      }
      v122 = (unsigned __int64*)((char*)&v143_.v143 + (v143_.v145 >> 1));
      if ((v143_.v145 & 1) != 0) {
        v40 = (*(__int64 (**)(__int64))((char*)v143_.v144 + *v122))(
            (__int64)v122),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v40 = v143_.v144((__int64)v122),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v31 = v143_.v143;
      v37 = v40;
      if (v26 < (__int64)(v143_.v143 - a2) >> 1) {
        goto LABEL_9;
      }
    }
    v63 = v62 + *(float*)(a1 + 32);
    v64 = 0x0.0p+0f;
    if ((v133 & 1) != 0) {
      goto LABEL_58;
    }
  LABEL_57:
    v64 = *(float*)(a1 + 12) *
          (float)(*(int (**)(__int64, __int64, __int64))(
              **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40), v37, 0),
    v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
    goto LABEL_58;
  }
LABEL_9:
  if ((v133 & 1) != 0) {
    v32 = *(float*)(a1 + 20);
    v33 = *(float*)&v143_.v149;
    v34 = v129;
    v35 = *(_DWORD*)(a1 + 80) & 0x300;
    if (v35 == 256) {
      goto LABEL_102;
    }
  }
  else {
    v32 = (float)(PSEUDO_UNFUSED(
              *(float*)(a1 + 12) *
              (float)(*(int (**)(__int64, __int64, __int64))(
                  **(_QWORD**)(a1 + 40) + 184LL))(
                  *(_QWORD*)(a1 + 40),
                  DWORDn(v143_.v151, sizeof(v143_.v151) / 4 - 1), 0))) +
          *(float*)(a1 + 20),
    v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
    *(float*)(a1 + 20) = v32;
    v33 = *(float*)&v143_.v149;
    v34 = v129;
    v35 = *(_DWORD*)(a1 + 80) & 0x300;
    if (v35 == 256) {
      goto LABEL_102;
    }
  }
  if (v35 != 512) {
    v10 = (float)(v10 - v128) + *(float*)(a1 + 24);
  }
LABEL_102:
  v123 = *(_QWORD*)(a1 + 88);
  *(float*)(a1 + 24) = v10;
  v124 = v32 - v33;
  if (v21 < v124) {
    v21 = v124;
  }
  (*(void (**)(__int64, __int64, float))(*(_QWORD*)v123 + 56LL))(
      v123, (__int64)&v143_.v146, v124),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64, __int64, __int64, __int64))(
      **(_QWORD**)(a1 + 88) + 88LL))(*(_QWORD*)(a1 + 88), a1, a2, v34),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w"));
  return v21;
}

__int64 nn_font_5697e0(__int64 a1, int a2, float* a3)
{
  return nn_font_569bc0(a1, a2, a3, 0);
}

#pragma GCC visibility pop
