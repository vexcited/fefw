#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nndetailImageJpeg_jsimd_can_idct_2x2_plt(void);
__int64 nndetailImageJpeg_jsimd_can_idct_4x4_plt(void);
__int64 nndetailImageJpeg_jsimd_can_idct_float_plt(void);
__int64 nndetailImageJpeg_jsimd_can_idct_ifast_plt(void);
__int64 nndetailImageJpeg_jsimd_can_idct_islow_plt(void);
extern _UNKNOWN SdkData_bb7070;
extern __int64 SdkData_e86968;
extern __int64 SdkData_e86970;
extern __int64 SdkData_e86978;
extern __int64 SdkData_e86980;
extern __int64 SdkData_e86988;
extern __int64 SdkData_e86990;
extern __int64 SdkData_e86998;
extern __int64 SdkData_e869a0;
extern __int64 SdkData_e869a8;
extern __int64 SdkData_e869b0;
extern __int64 SdkData_e869b8;
extern __int64 SdkData_e869c0;
extern __int64 SdkData_e869c8;
extern __int64 SdkData_e869d0;
extern __int64 SdkData_e869d8;
extern __int64 SdkData_e869e0;
extern __int64 SdkData_e869e8;
extern __int64 SdkData_e869f0;
extern __int64 SdkData_e869f8;
extern __int64 SdkData_e86a00;
extern __int64 SdkData_e86a08;
extern __int64 SdkData_e86a10;
extern __int64 SdkData_e86a18;
__int64 SdkHr_40d60(__int64 result, double a2);

__int64 SdkHr_40d60(__int64 result, double a2)
{

#pragma clang fp contract(off)
  int* v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  _WORD* v14;
  __int64 v15;
  double v16;
  double v17;
  double v18;
  double v19;
  double v20;
  double v21;
  double v22;
  double v23;
  double v24;
  double v25;
  double v26;
  double v27;
  double v28;
  double v29;
  double v30;
  double v31;
  double v32;
  double v33;
  double v34;
  double v35;
  double v36;
  double v37;
  double v38;
  double v39;
  double v40;
  double v41;
  double v42;
  double v43;
  double v44;
  double v45;
  double v46;
  double v47;
  double v48;
  double v49;
  double v50;
  double v51;
  double v52;
  double v53;
  double v54;
  double v55;
  double v56;
  double v57;
  double v58;
  double v59;
  double v60;
  double v61;
  double v62;
  double v63;
  double v64;
  double v65;
  double v66;
  double v67;
  double v68;
  double v69;
  double v70;
  double v71;
  double v72;
  double v73;
  double v74;
  _WORD* v75;
  unsigned __int16* v76;
  __int16* v77;
  __int64 v78;
  int v79;
  int v80;

  if (*(int*)(result + 64) >= 1) {
    v2 = (int*)result;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = SdkData_e86968;
    v7 = *(_QWORD*)(result + 632);
    v8 = *(_QWORD*)(result + 312);
    v9 = v7 + 8;
    v10 = v7 + 88;
    do {
      v11 = v5;
      v12 = v4;
      v5 = 0;
      v4 = v6;
      switch (*(_DWORD*)(v8 + 36)) {
      case 1:
        break;
      case 2:
        result = nndetailImageJpeg_jsimd_can_idct_2x2_plt();
        v5 = 0;
        v4 = SdkData_e86970;
        if ((_DWORD)result == 0) {
          v4 = SdkData_e86978;
        }
        break;
      case 3:
        v5 = 0;
        v4 = SdkData_e869a8;
        break;
      case 4:
        result = nndetailImageJpeg_jsimd_can_idct_4x4_plt();
        v5 = 0;
        v4 = SdkData_e869b8;
        if ((_DWORD)result == 0) {
          v4 = SdkData_e869c0;
        }
        break;
      case 5:
        v5 = 0;
        v4 = SdkData_e86990;
        break;
      case 6:
        v5 = 0;
        v4 = SdkData_e869d8;
        break;
      case 7:
        v5 = 0;
        v4 = SdkData_e869e8;
        break;
      case 8:
        v13 = v2[26];
        switch (v13) {
        case 2:
          result = nndetailImageJpeg_jsimd_can_idct_float_plt();
          v4 = SdkData_e86a18;
          if ((_DWORD)result != 0) {
            v4 = SdkData_e86a10;
          }
          v5 = 2;
          break;
        case 1:
          result = nndetailImageJpeg_jsimd_can_idct_ifast_plt();
          v4 = SdkData_e86a08;
          if ((_DWORD)result != 0) {
            v4 = SdkData_e86a00;
          }
          v5 = 1;
          break;
        case 0:
          result = nndetailImageJpeg_jsimd_can_idct_islow_plt();
          v5 = 0;
          v4 = SdkData_e869c8;
          if ((_DWORD)result == 0) {
            v4 = SdkData_e869d0;
          }
          break;
        default:
          *(_DWORD*)(*(_QWORD*)v2 + 40LL) = 49;
          goto LABEL_38;
        }
        break;
      case 9:
        v5 = 0;
        v4 = SdkData_e869f8;
        break;
      case 0xA:
        v5 = 0;
        v4 = SdkData_e869a0;
        break;
      case 0xB:
        v5 = 0;
        v4 = SdkData_e869f0;
        break;
      case 0xC:
        v5 = 0;
        v4 = SdkData_e86988;
        break;
      case 0xD:
        v5 = 0;
        v4 = SdkData_e86998;
        break;
      case 0xE:
        v5 = 0;
        v4 = SdkData_e869e0;
        break;
      case 0xF:
        v5 = 0;
        v4 = SdkData_e86980;
        break;
      case 0x10:
        v5 = 0;
        v4 = SdkData_e869b0;
        break;
      default:
        *(_DWORD*)(*(_QWORD*)v2 + 40LL) = 7;
        *(_DWORD*)(*(_QWORD*)v2 + 44LL) = *(_DWORD*)(v8 + 36);
      LABEL_38:
        result = (**(__int64 (***)(int*))v2)(v2);
        v5 = v11;
        v4 = v12;
        break;
      }
      *(_QWORD*)(v9 + 8 * v3) = v4;
      if (*(_DWORD*)(v8 + 52) != 0 && *(_DWORD*)(v10 + 4 * v3) != v5) {
        v14 = *(_WORD**)(v8 + 80);
        if (v14 != nullptr) {
          *(_DWORD*)(v10 + 4 * v3) = v5;
          v15 = *(_QWORD*)(v8 + 88);
          if (v5 != 0) {
            if (v5 == 2) {
              {
                __typeof__(a2) z_ = (__typeof__(a2)){0};
                LOWORD(z_) = *v14;
                a2 = z_;
              }
              *(float*)&a2 = (float)LODWORD(a2);
              *(_DWORD*)v15 = LODWORD(a2);
              {
                __typeof__(a2) z_ = (__typeof__(a2)){0};
                LOWORD(z_) = v14[1];
                a2 = z_;
              }
              v16 = (double)*(unsigned __int64*)&a2 * 0x1.63150b14861efp+0;
              *(float*)&v16 = v16;
              *(_DWORD*)(v15 + 4) = LODWORD(v16);
              {
                __typeof__(v16) z_ = (__typeof__(v16)){0};
                LOWORD(z_) = v14[2];
                v16 = z_;
              }
              v17 = (double)*(unsigned __int64*)&v16 * 0x1.4e7ae914d6fcap+0;
              *(float*)&v17 = v17;
              *(_DWORD*)(v15 + 8) = LODWORD(v17);
              {
                __typeof__(v17) z_ = (__typeof__(v17)){0};
                LOWORD(z_) = v14[3];
                v17 = z_;
              }
              v18 = (double)*(unsigned __int64*)&v17 * 0x1.2d062ef6c11aap+0;
              *(float*)&v18 = v18;
              *(_DWORD*)(v15 + 12) = LODWORD(v18);
              {
                __typeof__(v18) z_ = (__typeof__(v18)){0};
                LOWORD(z_) = v14[4];
                v18 = z_;
              }
              *(float*)&v18 = (float)LODWORD(v18);
              *(_DWORD*)(v15 + 16) = LODWORD(v18);
              {
                __typeof__(v18) z_ = (__typeof__(v18)){0};
                LOWORD(z_) = v14[5];
                v18 = z_;
              }
              v19 = (double)*(unsigned __int64*)&v18 * 0x1.92469c0a7bf3bp-1;
              *(float*)&v19 = v19;
              *(_DWORD*)(v15 + 20) = LODWORD(v19);
              {
                __typeof__(v19) z_ = (__typeof__(v19)){0};
                LOWORD(z_) = v14[6];
                v19 = z_;
              }
              v20 = (double)*(unsigned __int64*)&v19 * 0x1.1517a7bc720bbp-1;
              *(float*)&v20 = v20;
              *(_DWORD*)(v15 + 24) = LODWORD(v20);
              {
                __typeof__(v20) z_ = (__typeof__(v20)){0};
                LOWORD(z_) = v14[7];
                v20 = z_;
              }
              v21 = (double)*(unsigned __int64*)&v20 * 0x1.1a855de72ab5dp-2;
              *(float*)&v21 = v21;
              *(_DWORD*)(v15 + 28) = LODWORD(v21);
              {
                __typeof__(v21) z_ = (__typeof__(v21)){0};
                LOWORD(z_) = v14[8];
                v21 = z_;
              }
              v22 = (double)*(unsigned __int64*)&v21 * 0x1.63150b14861efp+0;
              *(float*)&v22 = v22;
              *(_DWORD*)(v15 + 32) = LODWORD(v22);
              {
                __typeof__(v22) z_ = (__typeof__(v22)){0};
                LOWORD(z_) = v14[9];
                v22 = z_;
              }
              v23 = (double)*(unsigned __int64*)&v22 * 0x1.63150b14861efp+0 *
                    0x1.63150b14861efp+0;
              *(float*)&v23 = v23;
              *(_DWORD*)(v15 + 36) = LODWORD(v23);
              {
                __typeof__(v23) z_ = (__typeof__(v23)){0};
                LOWORD(z_) = v14[10];
                v23 = z_;
              }
              v24 = (double)*(unsigned __int64*)&v23 * 0x1.63150b14861efp+0 *
                    0x1.4e7ae914d6fcap+0;
              *(float*)&v24 = v24;
              *(_DWORD*)(v15 + 40) = LODWORD(v24);
              {
                __typeof__(v24) z_ = (__typeof__(v24)){0};
                LOWORD(z_) = v14[11];
                v24 = z_;
              }
              v25 = (double)*(unsigned __int64*)&v24 * 0x1.63150b14861efp+0 *
                    0x1.2d062ef6c11aap+0;
              *(float*)&v25 = v25;
              *(_DWORD*)(v15 + 44) = LODWORD(v25);
              {
                __typeof__(v25) z_ = (__typeof__(v25)){0};
                LOWORD(z_) = v14[12];
                v25 = z_;
              }
              v26 = (double)*(unsigned __int64*)&v25 * 0x1.63150b14861efp+0;
              *(float*)&v26 = v26;
              *(_DWORD*)(v15 + 48) = LODWORD(v26);
              {
                __typeof__(v26) z_ = (__typeof__(v26)){0};
                LOWORD(z_) = v14[13];
                v26 = z_;
              }
              v27 = (double)*(unsigned __int64*)&v26 * 0x1.63150b14861efp+0 *
                    0x1.92469c0a7bf3bp-1;
              *(float*)&v27 = v27;
              *(_DWORD*)(v15 + 52) = LODWORD(v27);
              {
                __typeof__(v27) z_ = (__typeof__(v27)){0};
                LOWORD(z_) = v14[14];
                v27 = z_;
              }
              v28 = (double)*(unsigned __int64*)&v27 * 0x1.63150b14861efp+0 *
                    0x1.1517a7bc720bbp-1;
              *(float*)&v28 = v28;
              *(_DWORD*)(v15 + 56) = LODWORD(v28);
              {
                __typeof__(v28) z_ = (__typeof__(v28)){0};
                LOWORD(z_) = v14[15];
                v28 = z_;
              }
              v29 = (double)*(unsigned __int64*)&v28 * 0x1.63150b14861efp+0 *
                    0x1.1a855de72ab5dp-2;
              *(float*)&v29 = v29;
              *(_DWORD*)(v15 + 60) = LODWORD(v29);
              {
                __typeof__(v29) z_ = (__typeof__(v29)){0};
                LOWORD(z_) = v14[16];
                v29 = z_;
              }
              v30 = (double)*(unsigned __int64*)&v29 * 0x1.4e7ae914d6fcap+0;
              *(float*)&v30 = v30;
              *(_DWORD*)(v15 + 64) = LODWORD(v30);
              {
                __typeof__(v30) z_ = (__typeof__(v30)){0};
                LOWORD(z_) = v14[17];
                v30 = z_;
              }
              v31 = (double)*(unsigned __int64*)&v30 * 0x1.4e7ae914d6fcap+0 *
                    0x1.63150b14861efp+0;
              *(float*)&v31 = v31;
              *(_DWORD*)(v15 + 68) = LODWORD(v31);
              {
                __typeof__(v31) z_ = (__typeof__(v31)){0};
                LOWORD(z_) = v14[18];
                v31 = z_;
              }
              v32 = (double)*(unsigned __int64*)&v31 * 0x1.4e7ae914d6fcap+0 *
                    0x1.4e7ae914d6fcap+0;
              *(float*)&v32 = v32;
              *(_DWORD*)(v15 + 72) = LODWORD(v32);
              {
                __typeof__(v32) z_ = (__typeof__(v32)){0};
                LOWORD(z_) = v14[19];
                v32 = z_;
              }
              v33 = (double)*(unsigned __int64*)&v32 * 0x1.4e7ae914d6fcap+0 *
                    0x1.2d062ef6c11aap+0;
              *(float*)&v33 = v33;
              *(_DWORD*)(v15 + 76) = LODWORD(v33);
              {
                __typeof__(v33) z_ = (__typeof__(v33)){0};
                LOWORD(z_) = v14[20];
                v33 = z_;
              }
              v34 = (double)*(unsigned __int64*)&v33 * 0x1.4e7ae914d6fcap+0;
              *(float*)&v34 = v34;
              *(_DWORD*)(v15 + 80) = LODWORD(v34);
              {
                __typeof__(v34) z_ = (__typeof__(v34)){0};
                LOWORD(z_) = v14[21];
                v34 = z_;
              }
              v35 = (double)*(unsigned __int64*)&v34 * 0x1.4e7ae914d6fcap+0 *
                    0x1.92469c0a7bf3bp-1;
              *(float*)&v35 = v35;
              *(_DWORD*)(v15 + 84) = LODWORD(v35);
              {
                __typeof__(v35) z_ = (__typeof__(v35)){0};
                LOWORD(z_) = v14[22];
                v35 = z_;
              }
              v36 = (double)*(unsigned __int64*)&v35 * 0x1.4e7ae914d6fcap+0 *
                    0x1.1517a7bc720bbp-1;
              *(float*)&v36 = v36;
              *(_DWORD*)(v15 + 88) = LODWORD(v36);
              {
                __typeof__(v36) z_ = (__typeof__(v36)){0};
                LOWORD(z_) = v14[23];
                v36 = z_;
              }
              v37 = (double)*(unsigned __int64*)&v36 * 0x1.4e7ae914d6fcap+0 *
                    0x1.1a855de72ab5dp-2;
              *(float*)&v37 = v37;
              *(_DWORD*)(v15 + 92) = LODWORD(v37);
              {
                __typeof__(v37) z_ = (__typeof__(v37)){0};
                LOWORD(z_) = v14[24];
                v37 = z_;
              }
              v38 = (double)*(unsigned __int64*)&v37 * 0x1.2d062ef6c11aap+0;
              *(float*)&v38 = v38;
              *(_DWORD*)(v15 + 96) = LODWORD(v38);
              {
                __typeof__(v38) z_ = (__typeof__(v38)){0};
                LOWORD(z_) = v14[25];
                v38 = z_;
              }
              v39 = (double)*(unsigned __int64*)&v38 * 0x1.2d062ef6c11aap+0 *
                    0x1.63150b14861efp+0;
              *(float*)&v39 = v39;
              *(_DWORD*)(v15 + 100) = LODWORD(v39);
              {
                __typeof__(v39) z_ = (__typeof__(v39)){0};
                LOWORD(z_) = v14[26];
                v39 = z_;
              }
              v40 = (double)*(unsigned __int64*)&v39 * 0x1.2d062ef6c11aap+0 *
                    0x1.4e7ae914d6fcap+0;
              *(float*)&v40 = v40;
              *(_DWORD*)(v15 + 104) = LODWORD(v40);
              {
                __typeof__(v40) z_ = (__typeof__(v40)){0};
                LOWORD(z_) = v14[27];
                v40 = z_;
              }
              v41 = (double)*(unsigned __int64*)&v40 * 0x1.2d062ef6c11aap+0 *
                    0x1.2d062ef6c11aap+0;
              *(float*)&v41 = v41;
              *(_DWORD*)(v15 + 108) = LODWORD(v41);
              {
                __typeof__(v41) z_ = (__typeof__(v41)){0};
                LOWORD(z_) = v14[28];
                v41 = z_;
              }
              v42 = (double)*(unsigned __int64*)&v41 * 0x1.2d062ef6c11aap+0;
              *(float*)&v42 = v42;
              *(_DWORD*)(v15 + 112) = LODWORD(v42);
              {
                __typeof__(v42) z_ = (__typeof__(v42)){0};
                LOWORD(z_) = v14[29];
                v42 = z_;
              }
              v43 = (double)*(unsigned __int64*)&v42 * 0x1.2d062ef6c11aap+0 *
                    0x1.92469c0a7bf3bp-1;
              *(float*)&v43 = v43;
              *(_DWORD*)(v15 + 116) = LODWORD(v43);
              {
                __typeof__(v43) z_ = (__typeof__(v43)){0};
                LOWORD(z_) = v14[30];
                v43 = z_;
              }
              v44 = (double)*(unsigned __int64*)&v43 * 0x1.2d062ef6c11aap+0 *
                    0x1.1517a7bc720bbp-1;
              *(float*)&v44 = v44;
              *(_DWORD*)(v15 + 120) = LODWORD(v44);
              {
                __typeof__(v44) z_ = (__typeof__(v44)){0};
                LOWORD(z_) = v14[31];
                v44 = z_;
              }
              v45 = (double)*(unsigned __int64*)&v44 * 0x1.2d062ef6c11aap+0 *
                    0x1.1a855de72ab5dp-2;
              *(float*)&v45 = v45;
              *(_DWORD*)(v15 + 124) = LODWORD(v45);
              {
                __typeof__(v45) z_ = (__typeof__(v45)){0};
                LOWORD(z_) = v14[32];
                v45 = z_;
              }
              *(float*)&v45 = (float)LODWORD(v45);
              *(_DWORD*)(v15 + 128) = LODWORD(v45);
              {
                __typeof__(v45) z_ = (__typeof__(v45)){0};
                LOWORD(z_) = v14[33];
                v45 = z_;
              }
              v46 = (double)*(unsigned __int64*)&v45 * 0x1.63150b14861efp+0;
              *(float*)&v46 = v46;
              *(_DWORD*)(v15 + 132) = LODWORD(v46);
              {
                __typeof__(v46) z_ = (__typeof__(v46)){0};
                LOWORD(z_) = v14[34];
                v46 = z_;
              }
              v47 = (double)*(unsigned __int64*)&v46 * 0x1.4e7ae914d6fcap+0;
              *(float*)&v47 = v47;
              *(_DWORD*)(v15 + 136) = LODWORD(v47);
              {
                __typeof__(v47) z_ = (__typeof__(v47)){0};
                LOWORD(z_) = v14[35];
                v47 = z_;
              }
              v48 = (double)*(unsigned __int64*)&v47 * 0x1.2d062ef6c11aap+0;
              *(float*)&v48 = v48;
              *(_DWORD*)(v15 + 140) = LODWORD(v48);
              {
                __typeof__(v48) z_ = (__typeof__(v48)){0};
                LOWORD(z_) = v14[36];
                v48 = z_;
              }
              *(float*)&v48 = (float)LODWORD(v48);
              *(_DWORD*)(v15 + 144) = LODWORD(v48);
              {
                __typeof__(v48) z_ = (__typeof__(v48)){0};
                LOWORD(z_) = v14[37];
                v48 = z_;
              }
              v49 = (double)*(unsigned __int64*)&v48 * 0x1.92469c0a7bf3bp-1;
              *(float*)&v49 = v49;
              *(_DWORD*)(v15 + 148) = LODWORD(v49);
              {
                __typeof__(v49) z_ = (__typeof__(v49)){0};
                LOWORD(z_) = v14[38];
                v49 = z_;
              }
              v50 = (double)*(unsigned __int64*)&v49 * 0x1.1517a7bc720bbp-1;
              *(float*)&v50 = v50;
              *(_DWORD*)(v15 + 152) = LODWORD(v50);
              {
                __typeof__(v50) z_ = (__typeof__(v50)){0};
                LOWORD(z_) = v14[39];
                v50 = z_;
              }
              v51 = (double)*(unsigned __int64*)&v50 * 0x1.1a855de72ab5dp-2;
              *(float*)&v51 = v51;
              *(_DWORD*)(v15 + 156) = LODWORD(v51);
              {
                __typeof__(v51) z_ = (__typeof__(v51)){0};
                LOWORD(z_) = v14[40];
                v51 = z_;
              }
              v52 = (double)*(unsigned __int64*)&v51 * 0x1.92469c0a7bf3bp-1;
              *(float*)&v52 = v52;
              *(_DWORD*)(v15 + 160) = LODWORD(v52);
              {
                __typeof__(v52) z_ = (__typeof__(v52)){0};
                LOWORD(z_) = v14[41];
                v52 = z_;
              }
              v53 = (double)*(unsigned __int64*)&v52 * 0x1.92469c0a7bf3bp-1 *
                    0x1.63150b14861efp+0;
              *(float*)&v53 = v53;
              *(_DWORD*)(v15 + 164) = LODWORD(v53);
              {
                __typeof__(v53) z_ = (__typeof__(v53)){0};
                LOWORD(z_) = v14[42];
                v53 = z_;
              }
              v54 = (double)*(unsigned __int64*)&v53 * 0x1.92469c0a7bf3bp-1 *
                    0x1.4e7ae914d6fcap+0;
              *(float*)&v54 = v54;
              *(_DWORD*)(v15 + 168) = LODWORD(v54);
              {
                __typeof__(v54) z_ = (__typeof__(v54)){0};
                LOWORD(z_) = v14[43];
                v54 = z_;
              }
              v55 = (double)*(unsigned __int64*)&v54 * 0x1.92469c0a7bf3bp-1 *
                    0x1.2d062ef6c11aap+0;
              *(float*)&v55 = v55;
              *(_DWORD*)(v15 + 172) = LODWORD(v55);
              {
                __typeof__(v55) z_ = (__typeof__(v55)){0};
                LOWORD(z_) = v14[44];
                v55 = z_;
              }
              v56 = (double)*(unsigned __int64*)&v55 * 0x1.92469c0a7bf3bp-1;
              *(float*)&v56 = v56;
              *(_DWORD*)(v15 + 176) = LODWORD(v56);
              {
                __typeof__(v56) z_ = (__typeof__(v56)){0};
                LOWORD(z_) = v14[45];
                v56 = z_;
              }
              v57 = (double)*(unsigned __int64*)&v56 * 0x1.92469c0a7bf3bp-1 *
                    0x1.92469c0a7bf3bp-1;
              *(float*)&v57 = v57;
              *(_DWORD*)(v15 + 180) = LODWORD(v57);
              {
                __typeof__(v57) z_ = (__typeof__(v57)){0};
                LOWORD(z_) = v14[46];
                v57 = z_;
              }
              v58 = (double)*(unsigned __int64*)&v57 * 0x1.92469c0a7bf3bp-1 *
                    0x1.1517a7bc720bbp-1;
              *(float*)&v58 = v58;
              *(_DWORD*)(v15 + 184) = LODWORD(v58);
              {
                __typeof__(v58) z_ = (__typeof__(v58)){0};
                LOWORD(z_) = v14[47];
                v58 = z_;
              }
              v59 = (double)*(unsigned __int64*)&v58 * 0x1.92469c0a7bf3bp-1 *
                    0x1.1a855de72ab5dp-2;
              *(float*)&v59 = v59;
              *(_DWORD*)(v15 + 188) = LODWORD(v59);
              {
                __typeof__(v59) z_ = (__typeof__(v59)){0};
                LOWORD(z_) = v14[48];
                v59 = z_;
              }
              v60 = (double)*(unsigned __int64*)&v59 * 0x1.1517a7bc720bbp-1;
              *(float*)&v60 = v60;
              *(_DWORD*)(v15 + 192) = LODWORD(v60);
              {
                __typeof__(v60) z_ = (__typeof__(v60)){0};
                LOWORD(z_) = v14[49];
                v60 = z_;
              }
              v61 = (double)*(unsigned __int64*)&v60 * 0x1.1517a7bc720bbp-1 *
                    0x1.63150b14861efp+0;
              *(float*)&v61 = v61;
              *(_DWORD*)(v15 + 196) = LODWORD(v61);
              {
                __typeof__(v61) z_ = (__typeof__(v61)){0};
                LOWORD(z_) = v14[50];
                v61 = z_;
              }
              v62 = (double)*(unsigned __int64*)&v61 * 0x1.1517a7bc720bbp-1 *
                    0x1.4e7ae914d6fcap+0;
              *(float*)&v62 = v62;
              *(_DWORD*)(v15 + 200) = LODWORD(v62);
              {
                __typeof__(v62) z_ = (__typeof__(v62)){0};
                LOWORD(z_) = v14[51];
                v62 = z_;
              }
              v63 = (double)*(unsigned __int64*)&v62 * 0x1.1517a7bc720bbp-1 *
                    0x1.2d062ef6c11aap+0;
              *(float*)&v63 = v63;
              *(_DWORD*)(v15 + 204) = LODWORD(v63);
              {
                __typeof__(v63) z_ = (__typeof__(v63)){0};
                LOWORD(z_) = v14[52];
                v63 = z_;
              }
              v64 = (double)*(unsigned __int64*)&v63 * 0x1.1517a7bc720bbp-1;
              *(float*)&v64 = v64;
              *(_DWORD*)(v15 + 208) = LODWORD(v64);
              {
                __typeof__(v64) z_ = (__typeof__(v64)){0};
                LOWORD(z_) = v14[53];
                v64 = z_;
              }
              v65 = (double)*(unsigned __int64*)&v64 * 0x1.1517a7bc720bbp-1 *
                    0x1.92469c0a7bf3bp-1;
              *(float*)&v65 = v65;
              *(_DWORD*)(v15 + 212) = LODWORD(v65);
              {
                __typeof__(v65) z_ = (__typeof__(v65)){0};
                LOWORD(z_) = v14[54];
                v65 = z_;
              }
              v66 = (double)*(unsigned __int64*)&v65 * 0x1.1517a7bc720bbp-1 *
                    0x1.1517a7bc720bbp-1;
              *(float*)&v66 = v66;
              *(_DWORD*)(v15 + 216) = LODWORD(v66);
              {
                __typeof__(v66) z_ = (__typeof__(v66)){0};
                LOWORD(z_) = v14[55];
                v66 = z_;
              }
              v67 = (double)*(unsigned __int64*)&v66 * 0x1.1517a7bc720bbp-1 *
                    0x1.1a855de72ab5dp-2;
              *(float*)&v67 = v67;
              *(_DWORD*)(v15 + 220) = LODWORD(v67);
              {
                __typeof__(v67) z_ = (__typeof__(v67)){0};
                LOWORD(z_) = v14[56];
                v67 = z_;
              }
              v68 = (double)*(unsigned __int64*)&v67 * 0x1.1a855de72ab5dp-2;
              *(float*)&v68 = v68;
              *(_DWORD*)(v15 + 224) = LODWORD(v68);
              {
                __typeof__(v68) z_ = (__typeof__(v68)){0};
                LOWORD(z_) = v14[57];
                v68 = z_;
              }
              v69 = (double)*(unsigned __int64*)&v68 * 0x1.1a855de72ab5dp-2 *
                    0x1.63150b14861efp+0;
              *(float*)&v69 = v69;
              *(_DWORD*)(v15 + 228) = LODWORD(v69);
              {
                __typeof__(v69) z_ = (__typeof__(v69)){0};
                LOWORD(z_) = v14[58];
                v69 = z_;
              }
              v70 = (double)*(unsigned __int64*)&v69 * 0x1.1a855de72ab5dp-2 *
                    0x1.4e7ae914d6fcap+0;
              *(float*)&v70 = v70;
              *(_DWORD*)(v15 + 232) = LODWORD(v70);
              {
                __typeof__(v70) z_ = (__typeof__(v70)){0};
                LOWORD(z_) = v14[59];
                v70 = z_;
              }
              v71 = (double)*(unsigned __int64*)&v70 * 0x1.1a855de72ab5dp-2 *
                    0x1.2d062ef6c11aap+0;
              *(float*)&v71 = v71;
              *(_DWORD*)(v15 + 236) = LODWORD(v71);
              {
                __typeof__(v71) z_ = (__typeof__(v71)){0};
                LOWORD(z_) = v14[60];
                v71 = z_;
              }
              v72 = (double)*(unsigned __int64*)&v71 * 0x1.1a855de72ab5dp-2;
              *(float*)&v72 = v72;
              *(_DWORD*)(v15 + 240) = LODWORD(v72);
              {
                __typeof__(v72) z_ = (__typeof__(v72)){0};
                LOWORD(z_) = v14[61];
                v72 = z_;
              }
              v73 = (double)*(unsigned __int64*)&v72 * 0x1.1a855de72ab5dp-2 *
                    0x1.92469c0a7bf3bp-1;
              *(float*)&v73 = v73;
              *(_DWORD*)(v15 + 244) = LODWORD(v73);
              {
                __typeof__(v73) z_ = (__typeof__(v73)){0};
                LOWORD(z_) = v14[62];
                v73 = z_;
              }
              v74 = (double)*(unsigned __int64*)&v73 * 0x1.1a855de72ab5dp-2 *
                    0x1.1517a7bc720bbp-1;
              *(float*)&v74 = v74;
              *(_DWORD*)(v15 + 248) = LODWORD(v74);
              {
                __typeof__(v74) z_ = (__typeof__(v74)){0};
                LOWORD(z_) = v14[63];
                v74 = z_;
              }
              a2 = (double)*(unsigned __int64*)&v74 * 0x1.1a855de72ab5dp-2 *
                   0x1.1a855de72ab5dp-2;
              *(float*)&a2 = a2;
              *(_DWORD*)(v15 + 252) = LODWORD(a2);
            }
            else {
              v75 = (_WORD*)(v15 + 8);
              v76 = v14 + 4;
              v77 = (__int16*)&SdkData_bb7070;
              v78 = 64;
              do {
                v78 -= 8;
                *(v75 - 4) =
                    (*(v77 - 4) * (unsigned int)*(v76 - 4) + 2048) >> 12;
                *(v75 - 3) =
                    (*(v77 - 3) * (unsigned int)*(v76 - 3) + 2048) >> 12;
                *(v75 - 2) =
                    (*(v77 - 2) * (unsigned int)*(v76 - 2) + 2048) >> 12;
                *(v75 - 1) =
                    (*(v77 - 1) * (unsigned int)*(v76 - 1) + 2048) >> 12;
                *v75 = (*v77 * (unsigned int)*v76 + 2048) >> 12;
                v75[1] = (v77[1] * (unsigned int)v76[1] + 2048) >> 12;
                v75[2] = (v77[2] * (unsigned int)v76[2] + 2048) >> 12;
                v79 = v76[3];
                v80 = v77[3];
                v77 += 8;
                v76 += 8;
                v75[3] = (unsigned int)(v80 * v79 + 2048) >> 12;
                v75 += 8;
              } while (v78 != 0);
            }
          }
          else {
            *(_WORD*)v15 = *v14;
            *(_WORD*)(v15 + 2) = v14[1];
            *(_WORD*)(v15 + 4) = v14[2];
            *(_WORD*)(v15 + 6) = v14[3];
            *(_WORD*)(v15 + 8) = v14[4];
            *(_WORD*)(v15 + 10) = v14[5];
            *(_WORD*)(v15 + 12) = v14[6];
            *(_WORD*)(v15 + 14) = v14[7];
            *(_WORD*)(v15 + 16) = v14[8];
            *(_WORD*)(v15 + 18) = v14[9];
            *(_WORD*)(v15 + 20) = v14[10];
            *(_WORD*)(v15 + 22) = v14[11];
            *(_WORD*)(v15 + 24) = v14[12];
            *(_WORD*)(v15 + 26) = v14[13];
            *(_WORD*)(v15 + 28) = v14[14];
            *(_WORD*)(v15 + 30) = v14[15];
            *(_WORD*)(v15 + 32) = v14[16];
            *(_WORD*)(v15 + 34) = v14[17];
            *(_WORD*)(v15 + 36) = v14[18];
            *(_WORD*)(v15 + 38) = v14[19];
            *(_WORD*)(v15 + 40) = v14[20];
            *(_WORD*)(v15 + 42) = v14[21];
            *(_WORD*)(v15 + 44) = v14[22];
            *(_WORD*)(v15 + 46) = v14[23];
            *(_WORD*)(v15 + 48) = v14[24];
            *(_WORD*)(v15 + 50) = v14[25];
            *(_WORD*)(v15 + 52) = v14[26];
            *(_WORD*)(v15 + 54) = v14[27];
            *(_WORD*)(v15 + 56) = v14[28];
            *(_WORD*)(v15 + 58) = v14[29];
            *(_WORD*)(v15 + 60) = v14[30];
            *(_WORD*)(v15 + 62) = v14[31];
            *(_WORD*)(v15 + 64) = v14[32];
            *(_WORD*)(v15 + 66) = v14[33];
            *(_WORD*)(v15 + 68) = v14[34];
            *(_WORD*)(v15 + 70) = v14[35];
            *(_WORD*)(v15 + 72) = v14[36];
            *(_WORD*)(v15 + 74) = v14[37];
            *(_WORD*)(v15 + 76) = v14[38];
            *(_WORD*)(v15 + 78) = v14[39];
            *(_WORD*)(v15 + 80) = v14[40];
            *(_WORD*)(v15 + 82) = v14[41];
            *(_WORD*)(v15 + 84) = v14[42];
            *(_WORD*)(v15 + 86) = v14[43];
            *(_WORD*)(v15 + 88) = v14[44];
            *(_WORD*)(v15 + 90) = v14[45];
            *(_WORD*)(v15 + 92) = v14[46];
            *(_WORD*)(v15 + 94) = v14[47];
            *(_WORD*)(v15 + 96) = v14[48];
            *(_WORD*)(v15 + 98) = v14[49];
            *(_WORD*)(v15 + 100) = v14[50];
            *(_WORD*)(v15 + 102) = v14[51];
            *(_WORD*)(v15 + 104) = v14[52];
            *(_WORD*)(v15 + 106) = v14[53];
            *(_WORD*)(v15 + 108) = v14[54];
            *(_WORD*)(v15 + 110) = v14[55];
            *(_WORD*)(v15 + 112) = v14[56];
            *(_WORD*)(v15 + 114) = v14[57];
            *(_WORD*)(v15 + 116) = v14[58];
            *(_WORD*)(v15 + 118) = v14[59];
            *(_WORD*)(v15 + 120) = v14[60];
            *(_WORD*)(v15 + 122) = v14[61];
            *(_WORD*)(v15 + 124) = v14[62];
            *(_WORD*)(v15 + 126) = v14[63];
          }
        }
      }
      ++v3;
      v8 += 96;
    } while (v3 < v2[16]);
  }
  return result;
}

#pragma GCC visibility pop
