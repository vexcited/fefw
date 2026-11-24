#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_20700();
__int64 nndetailImageJpeg_jzero_far_plt(_QWORD, _QWORD);
extern _UNKNOWN SdkData_bb70e8;
extern __int16 SdkData_bb7068[4];
extern __int64 SdkData_e86938;
__int64 libjpegturbonx_1ff00(__int64 result, double a2, double a3);
__int64 libjpegturbonx_54ae0(__int64 result, __int64 a2, __int64* a3,
                             unsigned int a4);
__int64 libjpegturbonx_54e00(__int64 result, __int64 a2, __int64* a3, int a4);

__int64 libjpegturbonx_1ff00(__int64 result, double a2, double a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  _DWORD* v12;
  _WORD* v13;
  __int64 v14;
  double v15;
  double v16;
  double v17;
  double v18;
  double v19;
  double v20;
  double v21;
  double v22;
  __int64 v23;
  __int16 v24;
  unsigned int v25;
  unsigned __int16 v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  bool v38;
  int v39;
  __int16 v40;
  bool v41;
  unsigned int v42;
  __int16 v43;
  __int16 v44;
  _WORD* v45;
  int v46;
  bool v47;
  unsigned int v48;
  __int16 v49;
  unsigned int v50;
  unsigned __int16 v51;
  int v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  int v64;
  bool v65;
  __int16 v66;
  _WORD* v67;
  __int64 v68;
  _WORD* v69;
  __int64 v70;
  int v71;
  unsigned int v72;
  int v73;
  unsigned int v74;
  int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  bool v82;
  __int16 v83;
  __int16 v84;
  unsigned int v85;
  __int16 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;

  if (*(int*)(result + 100) >= 1) {
    v3 = *(_QWORD*)(result + 560);
    v4 = *(_QWORD*)(result + 112);
    v5 = result;
    v6 = 0;
    v87 = v3 + 104;
    v88 = v3 + 40;
    v89 = result + 120;
    v7 = SdkData_e86938;
    v90 = result;
    while (1) {
      v8 = *(unsigned int*)(v4 + 16);
      if ((unsigned int)v8 <= 3 && (v9 = *(_QWORD*)(v89 + 8 * v8)) != 0) {
        v10 = *(unsigned int*)(v4 + 16);
        v11 = *(_DWORD*)(v5 + 320);
        if (v11 == 2) {
          goto LABEL_8;
        }
      }
      else {
        v10 = (int)v8;
        *(_DWORD*)(*(_QWORD*)v5 + 40LL) = 54;
        *(_DWORD*)(*(_QWORD*)v5 + 44LL) = v8;
        (**(void (***)(__int64))v5)(v5);
        v5 = v90;
        v9 = *(_QWORD*)(v89 + 8 * v10);
        v11 = *(_DWORD*)(v90 + 320);
        if (v11 == 2) {
        LABEL_8:
          result = *(_QWORD*)(v87 + 8 * v10);
          if (result == 0) {
            result = (**(__int64 (***)(__int64, __int64, __int64))(v5 + 8))(
                v5, 1, 256);
            v5 = v90;
            *(_QWORD*)(v87 + 8 * v10) = result;
          }
          v12 = (_DWORD*)(result + 16);
          v13 = (_WORD*)(v9 + 8);
          v14 = 0;
          do {
            {
              __typeof__(a3) z_ = (__typeof__(a3)){0};
              LOWORD(z_) = *(v13 - 4);
              a3 = z_;
            }
            v15 = *(double*)((char*)&SdkData_bb70e8 + v14);
            v14 += 8;
            v16 =
                0x1.0000000000000p+0 /
                (v15 * (double)*(unsigned __int64*)&a3 * 0x1.0000000000000p+3);
            *(float*)&v16 = v16;
            *(v12 - 4) = LODWORD(v16);
            {
              __typeof__(v16) z_ = (__typeof__(v16)){0};
              LOWORD(z_) = *(v13 - 3);
              v16 = z_;
            }
            v17 = 0x1.0000000000000p+0 /
                  (v15 * (double)*(unsigned __int64*)&v16 *
                   0x1.63150b14861efp+0 * 0x1.0000000000000p+3);
            *(float*)&v17 = v17;
            *(v12 - 3) = LODWORD(v17);
            {
              __typeof__(v17) z_ = (__typeof__(v17)){0};
              LOWORD(z_) = *(v13 - 2);
              v17 = z_;
            }
            v18 = 0x1.0000000000000p+0 /
                  (v15 * (double)*(unsigned __int64*)&v17 *
                   0x1.4e7ae914d6fcap+0 * 0x1.0000000000000p+3);
            *(float*)&v18 = v18;
            *(v12 - 2) = LODWORD(v18);
            {
              __typeof__(v18) z_ = (__typeof__(v18)){0};
              LOWORD(z_) = *(v13 - 1);
              v18 = z_;
            }
            v19 = 0x1.0000000000000p+0 /
                  (v15 * (double)*(unsigned __int64*)&v18 *
                   0x1.2d062ef6c11aap+0 * 0x1.0000000000000p+3);
            *(float*)&v19 = v19;
            *(v12 - 1) = LODWORD(v19);
            {
              __typeof__(v19) z_ = (__typeof__(v19)){0};
              LOWORD(z_) = *v13;
              v19 = z_;
            }
            v20 =
                0x1.0000000000000p+0 /
                (v15 * (double)*(unsigned __int64*)&v19 * 0x1.0000000000000p+3);
            *(float*)&v20 = v20;
            *(_DWORD*)v12 = LODWORD(v20);
            {
              __typeof__(v20) z_ = (__typeof__(v20)){0};
              LOWORD(z_) = v13[1];
              v20 = z_;
            }
            v21 = 0x1.0000000000000p+0 /
                  (v15 * (double)*(unsigned __int64*)&v20 *
                   0x1.92469c0a7bf3bp-1 * 0x1.0000000000000p+3);
            *(float*)&v21 = v21;
            v12[1] = LODWORD(v21);
            {
              __typeof__(v21) z_ = (__typeof__(v21)){0};
              LOWORD(z_) = v13[2];
              v21 = z_;
            }
            v22 = 0x1.0000000000000p+0 /
                  (v15 * (double)*(unsigned __int64*)&v21 *
                   0x1.1517a7bc720bbp-1 * 0x1.0000000000000p+3);
            *(float*)&v22 = v22;
            v12[2] = LODWORD(v22);
            {
              __typeof__(v22) z_ = (__typeof__(v22)){0};
              LOWORD(z_) = v13[3];
              v22 = z_;
            }
            v13 += 8;
            a3 = (double)*(unsigned __int64*)&v22;
            *(float*)&v15 =
                0x1.0000000000000p+0 /
                (v15 * a3 * 0x1.1a855de72ab5dp-2 * 0x1.0000000000000p+3);
            v12[3] = LODWORD(v15);
            v12 += 8;
          } while (v14 != 64);
          goto LABEL_4;
        }
      }
      if (v11 == 1) {
        break;
      }
      if (v11 == 0) {
        result = *(_QWORD*)(v88 + 8 * v10);
        if (result == 0) {
          result = (**(__int64 (***)(__int64, __int64, __int64))(v5 + 8))(v5, 1,
                                                                          512);
          v5 = v90;
          *(_QWORD*)(v88 + 8 * v10) = result;
        }
        v23 = 0;
        while (1) {
          v24 = *(_WORD*)(v9 + v23);
          v25 = 8 * (v24 & 0x1FFF);
          if (v25 != 0) {
            v26 = v24 << 11;
            if (v25 < 0x100) {
              v27 = 8;
            }
            else {
              v26 = v25;
              v27 = 16;
            }
            v28 = v26;
            if (v26 < 0x1000u) {
              v26 *= 16;
            }
            if (v28 < 0x1000) {
              v27 -= 4;
            }
            v29 = v26;
            if (v26 < 0x4000u) {
              v26 *= 4;
            }
            if (v29 >= 0x4000) {
              v30 = v27;
            }
            else {
              v30 = v27 - 2;
            }
            v31 = (__PAIR64__(v30, v26 & 0x8000) - 1) >> 32;
          }
          else {
            v31 = 0;
          }
          v32 = 0x8000 << v31;
          v33 = v25 >> 1;
          v34 = v31 + 15;
          v35 = v31 + 14;
          v36 = v32 / v25;
          v37 = v32 % v25;
          v38 = v37 > v25 >> 1;
          v39 = (v25 >> 1) | 1;
          if (v38) {
            v40 = v36 + 1;
          }
          else {
            v40 = v36;
          }
          if (v38) {
            LOWORD(v39) = v33;
          }
          v41 = v37 == 0;
          v42 = v36 >> 1;
          if (v37 != 0) {
            v35 = v34;
            v43 = v40;
          }
          else {
            v43 = v42;
          }
          if (v41) {
            v44 = v33;
          }
          else {
            v44 = v39;
          }
          v45 = (_WORD*)(result + v23);
          v46 = -v35;
          v47 = v35 >= 0x10;
          v48 = v35 - 16;
          *v45 = v43;
          v45[64] = v44;
          v45[192] = v48;
          v45[128] = 1 << v46;
          if ((v48 == 0 | !v47) && *(_QWORD*)(v3 + 32) == v7) {
            *(_QWORD*)(v3 + 32) = SdkRoutine_20700;
            v49 = *(_WORD*)(v9 + v23 + 2);
            v50 = 8 * (v49 & 0x1FFF);
            if (v50 != 0) {
            LABEL_49:
              v51 = v49 << 11;
              if (v50 < 0x100) {
                v52 = 8;
              }
              else {
                v51 = v50;
                v52 = 16;
              }
              v53 = v51;
              if (v51 < 0x1000u) {
                v51 *= 16;
              }
              if (v53 < 0x1000) {
                v52 -= 4;
              }
              v54 = v51;
              if (v51 < 0x4000u) {
                v51 *= 4;
              }
              if (v54 >= 0x4000) {
                v55 = v52;
              }
              else {
                v55 = v52 - 2;
              }
              v56 = (__PAIR64__(v55, v51 & 0x8000) - 1) >> 32;
              goto LABEL_64;
            }
          }
          else {
            v49 = *(_WORD*)(v9 + v23 + 2);
            v50 = 8 * (v49 & 0x1FFF);
            if (v50 != 0) {
              goto LABEL_49;
            }
          }
          v56 = 0;
        LABEL_64:
          v57 = 0x8000 << v56;
          v58 = v50 >> 1;
          v59 = v56 + 15;
          v60 = v56 + 14;
          v61 = v57 / v50;
          v62 = v57 % v50;
          v63 = v61 >> 1;
          v38 = v62 > v50 >> 1;
          v64 = (v50 >> 1) | 1;
          if (v38) {
            LOWORD(v61) = v61 + 1;
            LOWORD(v64) = v58;
          }
          v65 = v62 == 0;
          if (v62 != 0) {
            v66 = v61;
          }
          else {
            v66 = v63;
          }
          if (v65) {
            LOWORD(v64) = v58;
          }
          else {
            v60 = v59;
          }
          v45[1] = v66;
          v67 = (_WORD*)(result + v23);
          v67[65] = v64;
          v67[129] = 1 << ((-(char)v60) & 63);
          v67[193] = v60 - 16;
          if (v60 <= 0x10 && *(_QWORD*)(v3 + 32) == v7) {
            *(_QWORD*)(v3 + 32) = SdkRoutine_20700;
          }
          v23 += 4;
          if (v23 == 128) {
            goto LABEL_4;
          }
        }
      }
      *(_DWORD*)(*(_QWORD*)v5 + 40LL) = 49;
      result = (**(__int64 (***)(__int64))v5)(v5);
      v5 = v90;
    LABEL_4:
      ++v6;
      v4 += 96;
      if (v6 >= (signed __int32)*(_DWORD*)(v5 + 100)) {
        return result;
      }
    }
    v68 = *(_QWORD*)(v88 + 8 * v10);
    if (v68 == 0) {
      v68 = (**(__int64 (***)(__int64, __int64, __int64))(v5 + 8))(v5, 1, 512);
      v5 = v90;
      *(_QWORD*)(v88 + 8 * v10) = v68;
    }
    v69 = (_WORD*)(v68 + 256);
    result = 1024;
    v70 = 0;
    while (1) {
      v71 = *(unsigned __int16*)(v9 + 2 * v70);
      v72 =
          (unsigned __int16)((unsigned int)(SdkData_bb7068[v70] * v71 + 1024) >>
                             11);
      if ((unsigned __int16)((unsigned int)(SdkData_bb7068[v70] * v71 + 1024) >>
                             11) != 0) {
        if (v72 == 1) {
          *(v69 - 128) = 1;
          *(v69 - 64) = 0;
          *v69 = 1;
          v69[64] = -16;
        LABEL_104:
          if (*(_QWORD*)(v3 + 32) == v7) {
            *(_QWORD*)(v3 + 32) = SdkRoutine_20700;
          }
          goto LABEL_78;
        }
        v74 = v72 << 8;
        if (v72 < 0x100) {
          v75 = 8;
        }
        else {
          v74 = v72;
          v75 = 16;
        }
        if (v74 < 0x1000) {
          v74 *= 16;
          v75 -= 4;
        }
        if (v74 < 0x4000) {
          LOWORD(v74) = 4 * v74;
          v75 -= 2;
        }
        v73 = (__PAIR64__(v75, (unsigned __int16)v74 & 0x8000) - 1) >> 32;
      }
      else {
        v73 = (unsigned __int16)((unsigned int)(SdkData_bb7068[v70] * v71 +
                                                1024) >>
                                 11);
      }
      v76 = 0x8000 << v73;
      v77 = v72 >> 1;
      v78 = v73 + 15;
      v79 = v73 + 14;
      v80 = v76 / v72;
      v81 = v76 % v72;
      v82 = v81 > v72 >> 1;
      if (v81 <= v72 >> 1) {
        v83 = v80;
      }
      else {
        v83 = v80 + 1;
      }
      if (v82) {
        v84 = v77;
      }
      else {
        v84 = v77 + 1;
      }
      v85 = v80 >> 1;
      if (v81 != 0) {
        v79 = v78;
      }
      else {
        v83 = v85;
      }
      if (v81 != 0) {
        v86 = v84;
      }
      else {
        v86 = v77;
      }
      *(v69 - 128) = v83;
      *(v69 - 64) = v86;
      *v69 = 1 << ((-(char)v79) & 63);
      v69[64] = v79 - 16;
      if (v79 <= 0x10) {
        goto LABEL_104;
      }
    LABEL_78:
      ++v70;
      ++v69;
      if (v70 == 64) {
        goto LABEL_4;
      }
    }
  }
  return result;
}

__int64 libjpegturbonx_54ae0(__int64 result, __int64 a2, __int64* a3,
                             unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 j;
  unsigned __int8* v13;
  _BYTE* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned __int8* v20;
  __int64 v21;
  unsigned __int8* v22;
  __int64 v23;
  unsigned __int8* v24;
  __int64 v25;
  unsigned __int8* v26;
  __int64 v27;
  unsigned __int8* v28;
  __int64 v29;
  unsigned __int8* v30;
  __int64 v31;
  unsigned __int8* v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 i;
  __int64 v40;
  __int64 v41;

  if ((int)a4 >= 1) {
    v4 = *(unsigned int*)(result + 152);
    v5 = *(unsigned int*)(result + 144);
    v6 = *(_QWORD*)(result + 656);
    if ((int)v4 <= 0) {
      for (i = a4; i != 0; --i) {
        v40 = *a3++;
        result = nndetailImageJpeg_jzero_far_plt(v40, v5);
        *(_DWORD*)(v6 + 76) = ((unsigned __int8)*(int*)(v6 + 76) + 1) & 0xF;
      }
    }
    else {
      v8 = a4;
      if ((_DWORD)v5 != 0) {
        v10 = 0;
        v41 = a4;
        do {
          result = nndetailImageJpeg_jzero_far_plt(a3[v10], v5);
          v11 = *(int*)(v6 + 76);
          for (j = 0; j != v4; ++j) {
            v13 = (unsigned __int8*)(*(_QWORD*)(a2 + 8 * v10) + j);
            v14 = (_BYTE*)a3[v10];
            v15 = *(_QWORD*)(*(_QWORD*)(v6 + 48) + 8 * j);
            v16 = *(_QWORD*)(v6 + 80 + 8 * j) + (v11 << 6);
            if ((unsigned int)v5 >= 8) {
              v17 = 0;
              v18 = v5 & 0xFFFFFFF8;
              do {
                v19 = *v13;
                v20 = &v13[(int)v4];
                v18 -= 8;
                *v14 += *(_BYTE*)(v15 + *(int*)(v16 + 4 * v17) + v19);
                v21 = *v20;
                v22 = &v20[(int)v4];
                v14[1] +=
                    *(_BYTE*)(v15 +
                              *(int*)(v16 + 4LL * (((_BYTE)v17 + 1) & 0xF)) +
                              v21);
                v23 = *v22;
                v24 = &v22[(int)v4];
                v14[2] +=
                    *(_BYTE*)(v15 +
                              *(int*)(v16 + 4LL * (((_BYTE)v17 + 2) & 0xF)) +
                              v23);
                v25 = *v24;
                v26 = &v24[(int)v4];
                v14[3] +=
                    *(_BYTE*)(v15 +
                              *(int*)(v16 + 4LL * (((_BYTE)v17 + 3) & 0xF)) +
                              v25);
                v27 = *v26;
                v28 = &v26[(int)v4];
                v14[4] +=
                    *(_BYTE*)(v15 +
                              *(int*)(v16 + 4LL * (((_BYTE)v17 + 4) & 0xF)) +
                              v27);
                v29 = *v28;
                v30 = &v28[(int)v4];
                v14[5] +=
                    *(_BYTE*)(v15 +
                              *(int*)(v16 + 4LL * (((_BYTE)v17 + 5) & 0xF)) +
                              v29);
                v31 = *v30;
                v32 = &v30[(int)v4];
                v14[6] +=
                    *(_BYTE*)(v15 +
                              *(int*)(v16 + 4LL * (((_BYTE)v17 + 6) & 0xF)) +
                              v31);
                LOBYTE(v19) = v17 + 7;
                v17 ^= 8uLL;
                v33 = *v32;
                v13 = &v32[(int)v4];
                v14[7] += *(_BYTE*)(v15 + *(int*)(v16 + 4 * (v19 & 0xF)) + v33);
                v14 += 8;
              } while (v18 != 0);
            }
            else {
              v17 = 0;
            }
            if ((v5 & 7) != 0) {
              v34 = v5 & 7;
              do {
                v35 = *v13;
                v36 = *(int*)(v16 + 4 * v17);
                v13 += (int)v4;
                --v34;
                v17 = ((_BYTE)v17 + 1) & 0xF;
                *v14++ += *(_BYTE*)(v15 + v36 + v35);
              } while (v34 != 0);
            }
          }
          ++v10;
          *(_DWORD*)(v6 + 76) = ((_BYTE)v11 + 1) & 0xF;
        } while (v10 != v41);
      }
      else {
        do {
          v37 = *a3++;
          v38 = v8;
          result = nndetailImageJpeg_jzero_far_plt(v37, v5);
          *(_DWORD*)(v6 + 76) = ((unsigned __int8)*(int*)(v6 + 76) + 1) & 0xF;
          v8 = v38 - 1;
        } while (v38 != 1);
      }
    }
  }
  return result;
}

__int64 libjpegturbonx_54e00(__int64 result, __int64 a2, __int64* a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  _BYTE* v16;
  int v17;
  __int64 v18;
  _WORD* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  __int16 v24;
  int v25;
  _WORD* v26;
  _WORD* v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  _WORD* v31;
  __int64 v32;
  _BYTE* v33;
  int v34;
  __int64 v35;
  unsigned __int8* v36;
  __int64 v37;
  __int64 v38;
  _BYTE* v39;
  __int16 v40;
  __int64 v41;
  unsigned __int8* v42;
  __int64 v43;
  __int64 v44;
  _BYTE* v45;
  __int16 v46;
  __int64 v47;
  unsigned __int8* v48;
  __int64 v49;
  __int64 v50;
  __int16 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 i;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  int v70;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;

  if (a4 >= 1) {
    v4 = *(unsigned int*)(result + 152);
    v5 = *(unsigned int*)(result + 144);
    v6 = *(_QWORD*)(result + 656);
    if ((int)v4 > 0) {
      v8 = (unsigned int)(v5 + 1);
      v68 = (unsigned int)a4;
      if ((_DWORD)v5 != 0) {
        v9 = *(_QWORD*)(result + 440);
        v10 = v6 + 112;
        v11 = *(_DWORD*)(result + 144) & 3;
        v12 = a2;
        v13 = 0;
        v72 = *(unsigned int*)(result + 152);
        v75 = (unsigned int)(v5 - 1);
        v74 = (unsigned int)(v75 * v4);
        v73 = -(int)v4;
        v69 = v5 & 0xFFFFFFFC;
        v70 = v11;
        while (1) {
          result = nndetailImageJpeg_jzero_far_plt(a3[v13], v5);
          v14 = 0;
          do {
            v15 = (unsigned __int8*)(*(_QWORD*)(v12 + 8 * v13) + v14);
            v16 = (_BYTE*)a3[v13];
            if (*(_DWORD*)(v6 + 144) != 0) {
              v17 = v73;
              v16 += v75;
              v15 += v74;
              v18 = -1;
              v19 = (_WORD*)(*(_QWORD*)(v10 + 8 * v14) + 2 * v8);
            }
            else {
              v19 = *(_WORD**)(v10 + 8 * v14);
              v18 = 1;
              v17 = v4;
            }
            v20 = *(_QWORD*)(*(_QWORD*)(v6 + 48) + 8 * v14);
            v21 = *(_QWORD*)(*(_QWORD*)(v6 + 32) + 8 * v14);
            if ((unsigned int)v5 < 4) {
              v22 = 0;
              LOWORD(v23) = 0;
              v24 = 0;
              if (v11 == 0) {
                goto LABEL_7;
              }
            LABEL_17:
              LODWORD(result) = v11;
              do {
                v55 = *v15;
                v15 += v17;
                result = (unsigned int)(result - 1);
                v56 = *(unsigned __int8*)(v9 + v55 +
                                          ((v22 + (__int16)v19[v18] + 8) >> 4));
                v57 = *(unsigned __int8*)(v20 + v56);
                *v16 += v57;
                v16 += v18;
                LODWORD(v56) = v56 - *(unsigned __int8*)(v21 + v57);
                *v19 = 3 * v56 + v24;
                v24 = 5 * v56 + v23;
                v19 += v18;
                v22 = 7 * v56;
                LOWORD(v23) = v56;
              } while ((_DWORD)result != 0);
              goto LABEL_7;
            }
            v25 = v69;
            v26 = &v19[v18];
            v27 = &v19[2 * v18];
            v28 = v5;
            v29 = a3;
            v30 = 0;
            result = 0;
            v22 = 0;
            LOWORD(v23) = 0;
            v24 = 0;
            v31 = &v19[3 * (int)v18];
            do {
              v32 = result;
              v33 = &v16[result];
              result += 4 * v18;
              v30 -= 8 * v18;
              v25 -= 4;
              v34 = v22 + (__int16)v26[v32];
              v35 = *v15;
              v36 = &v15[v17];
              v37 = *(unsigned __int8*)(v9 + v35 + ((v34 + 8) >> 4));
              v38 = *(unsigned __int8*)(v20 + v37);
              *v33 += v38;
              v39 = &v33[v18];
              LODWORD(v37) = v37 - *(unsigned __int8*)(v21 + v38);
              v19[v32] = 3 * v37 + v24;
              v40 = 5 * v37 + v23;
              v41 = *v36;
              v42 = &v36[v17];
              v43 = *(unsigned __int8*)(v9 + v41 +
                                        (((__int16)v27[v32] - (int)v37 +
                                          8 * (int)v37 + 8) >>
                                         4));
              v44 = *(unsigned __int8*)(v20 + v43);
              *v39 += v44;
              v45 = &v39[v18];
              LODWORD(v43) = v43 - *(unsigned __int8*)(v21 + v44);
              v26[v32] = 3 * v43 + v40;
              v46 = 5 * v43 + v37;
              v47 = *v42;
              v48 = &v42[v17];
              v49 = *(unsigned __int8*)(v9 + v47 +
                                        (((__int16)v31[v32] - (int)v43 +
                                          8 * (int)v43 + 8) >>
                                         4));
              v50 = *(unsigned __int8*)(v20 + v49);
              *v45 += v50;
              LODWORD(v49) = v49 - *(unsigned __int8*)(v21 + v50);
              v27[v32] = 3 * v49 + v46;
              v51 = 5 * v49 + v43;
              v52 = *v48;
              v15 = &v48[v17];
              v53 = *(unsigned __int8*)(v9 + v52 +
                                        (((__int16)v19[4 * v18 + v32] -
                                          (int)v49 + 8 * (int)v49 + 8) >>
                                         4));
              v54 = *(unsigned __int8*)(v20 + v53);
              v45[v18] += v54;
              v23 = v53 - *(unsigned __int8*)(v21 + v54);
              v31[v32] = 3 * v23 + v51;
              v22 = 7 * v23;
              v24 = 5 * v23 + v49;
            } while (v25 != 0);
            a3 = v29;
            v5 = v28;
            v12 = a2;
            v4 = v72;
            v10 = v6 + 112;
            v16 += result;
            v19 = (_WORD*)((char*)v19 - v30);
            v11 = v70;
            if (v70 != 0) {
              goto LABEL_17;
            }
          LABEL_7:
            ++v14;
            *v19 = v24;
          } while (v14 != v4);
          ++v13;
          *(_DWORD*)(v6 + 144) = *(_DWORD*)(v6 + 144) == 0;
          if (v13 == v68) {
            return result;
          }
        }
      }
      v60 = 0;
      while (1) {
        result = nndetailImageJpeg_jzero_far_plt(a3[v60], v5);
        if ((unsigned int)v4 >= 8) {
          break;
        }
        v61 = 0;
        if ((v4 & 7) != 0) {
          goto LABEL_31;
        }
      LABEL_24:
        ++v60;
        *(_DWORD*)(v6 + 144) = *(_DWORD*)(v6 + 144) == 0;
        if (v60 == v68) {
          return result;
        }
      }
      v62 = 0;
      v63 = (__int64*)(v6 + 168);
      do {
        v62 -= 8;
        *(_WORD*)(*(v63 - 7) + 2LL * (*(_DWORD*)(v6 + 144) != 0)) = 0;
        *(_WORD*)(*(v63 - 6) + 2LL * (*(_DWORD*)(v6 + 144) != 0)) = 0;
        *(_WORD*)(*(v63 - 5) + 2LL * (*(_DWORD*)(v6 + 144) != 0)) = 0;
        *(_WORD*)(*(v63 - 4) + 2LL * (*(_DWORD*)(v6 + 144) != 0)) = 0;
        *(_WORD*)(*(v63 - 3) + 2LL * (*(_DWORD*)(v6 + 144) != 0)) = 0;
        *(_WORD*)(*(v63 - 2) + 2LL * (*(_DWORD*)(v6 + 144) != 0)) = 0;
        *(_WORD*)(*(v63 - 1) + 2LL * (*(_DWORD*)(v6 + 144) != 0)) = 0;
        v64 = *v63;
        v63 += 8;
        *(_WORD*)(v64 + 2LL * (*(_DWORD*)(v6 + 144) != 0)) = 0;
      } while (-(v4 & 0x7FFFFFF8) != v62);
      v61 = -v62;
      if ((v4 & 7) == 0) {
        goto LABEL_24;
      }
    LABEL_31:
      v65 = (__int64*)(v6 + 112 + 8 * v61);
      v66 = v4 & 7;
      do {
        v67 = *v65++;
        --v66;
        *(_WORD*)(v67 + 2LL * (*(_DWORD*)(v6 + 144) != 0)) = 0;
      } while (v66 != 0);
      goto LABEL_24;
    }
    for (i = (unsigned int)a4; i != 0; --i) {
      v59 = *a3++;
      result = nndetailImageJpeg_jzero_far_plt(v59, v5);
      *(_DWORD*)(v6 + 144) = *(_DWORD*)(v6 + 144) == 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
