#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float* ne10_modules_dsp_2127a0(float* result, __int64 a2, __int64 a3, int a4,
                               int a5);

float* ne10_modules_dsp_2127a0(float* result, __int64 a2, __int64 a3, int a4,
                               int a5)
{

#pragma clang fp contract(off)
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  bool v13;
  int v14;
  const float* v15;
  float* v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x4_t v19;
  const float* v20;
  float* v21;
  float* v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  int32x4_t v26;
  int v27;
  unsigned __int64 v28;
  const float* v29;
  const float* v30;
  float* v31;
  float* v32;
  float* v33;
  int32x4_t v34;
  int32x4_t v35;
  int32x4_t v36;
  const float* v37;
  float* v38;
  int32x4_t v39;
  int32x4_t v40;
  int32x4_t v41;
  int32x4_t v42;
  const float* v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  int v47;
  int v48;
  __int64 v49;
  unsigned int v50;
  _DWORD* v51;
  _DWORD* v52;
  float v53;
  int v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  int v69;
  float32x4x2_t v70;
  float32x4x2_t v71;
  float32x4x2_t v72;
  float32x4x2_t v73;
  float32x4x2_t v74;
  float32x4x2_t v75;
  float32x4x2_t v76;
  float32x4x2_t v77;
  float32x4x2_t v78;
  float32x4x2_t v79;
  float32x4x2_t v80;
  float32x4x2_t v81;
  float32x4x2_t v82;
  float32x4x2_t v83;
  float32x4x2_t v84;
  float32x4x2_t v85;
  float32x4x2_t v86;
  float32x4x2_t v87;
  float32x4x2_t v88;
  float32x4x2_t v89;
  float32x4x2_t v90;
  float32x4x2_t v91;
  float32x4x2_t v92;
  float32x4x2_t v93;
  float32x4x2_t v94;
  float32x4x2_t v95;
  float32x4x2_t v96;
  float32x4x2_t v97;
  float32x4x2_t v98;
  float32x4x2_t v99;

  v5 = 2 * a5;
  if (a4 >= 1) {
    v6 = a5 + 3;
    if (a5 >= 0) {
      v6 = a5;
    }
    if (a5 >= 4) {
      v7 = v6 >> 2;
      v8 = a5 & 0x7FFFFFFC;
      v9 = 3 * a5;
      v10 = 8LL * a5;
      v11 = 8LL * v5;
      v12 = (v6 >> 2) - 1;
      do {
        if ((v7 & 1) != 0) {
          v79 = vld2q_f32((const float*)a2);
          v15 = (const float*)(a3 + 8LL * v5);
          v16 = &result[2 * v9];
          v82 = vld2q_f32((const float*)(a2 + 32));
          v17 = vtrn1q_s32(v79.val[0], v82.val[0]);
          v85 = vld2q_f32((const float*)(a2 + 64));
          v88 = vld2q_f32((const float*)(a2 + 96));
          v18 = vtrn2q_s32(v79.val[0], v82.val[0]);
          v19 = vtrn1q_s32(v79.val[1], v82.val[1]);
          v79.val[0] = vtrn2q_s32(v79.val[1], v82.val[1]);
          v20 = (const float*)(a3 + 8LL * a5);
          a2 += 128;
          v79.val[1] = vtrn1q_s32(v85.val[0], v88.val[0]);
          v82.val[0] = vtrn2q_s32(v85.val[0], v88.val[0]);
          v82.val[1] = vtrn1q_s32(v85.val[1], v88.val[1]);
          v85.val[0] = vtrn2q_s32(v85.val[1], v88.val[1]);
          v89 = vld2q_f32((const float*)a3);
          a3 += 32;
          v94 = vld2q_f32(v20);
          v97 = vld2q_f32(v15);
          v21 = &result[2 * a5];
          v22 = &result[2 * v5];
          v85.val[1] = vzip2q_s64(v17, v79.val[1]);
          LANES128(v17).n128_u64[1] = LANES128(v79.val[1]).n128_u64[0];
          v79.val[1] = vzip2q_s64(v18, v82.val[0]);
          LANES128(v18).n128_u64[1] = LANES128(v82.val[0]).n128_u64[0];
          v82.val[0] = vzip2q_s64(v19, v82.val[1]);
          LANES128(v19).n128_u64[1] = LANES128(v82.val[1]).n128_u64[0];
          v82.val[1] = vzip2q_s64(v79.val[0], v85.val[0]);
          LANES128(v79.val[0]).n128_u64[1] = LANES128(v85.val[0]).n128_u64[0];
          v85.val[0] = vqrdmulhq_s32(v18, v89.val[0]);
          v23 = vqrdmulhq_s32(v18, v89.val[1]);
          v24 = vqrdmulhq_s32(v79.val[0], v89.val[0]);
          v79.val[0] = vqrdmulhq_s32(v79.val[0], v89.val[1]);
          v89.val[1] = vqrdmulhq_s32(v82.val[0], v94.val[0]);
          v82.val[0] = vsubq_s32(vqrdmulhq_s32(v85.val[1], v94.val[0]),
                                 vqrdmulhq_s32(v82.val[0], v94.val[1]));
          v85.val[1] =
              vaddq_s32(v89.val[1], vqrdmulhq_s32(v85.val[1], v94.val[1]));
          v89.val[1] = vqrdmulhq_s32(v82.val[1], v97.val[0]);
          v79.val[0] = vsubq_s32(v85.val[0], v79.val[0]);
          v85.val[0] = vaddq_s32(v24, v23);
          v82.val[1] = vsubq_s32(vqrdmulhq_s32(v79.val[1], v97.val[0]),
                                 vqrdmulhq_s32(v82.val[1], v97.val[1]));
          v79.val[1] =
              vaddq_s32(v89.val[1], vqrdmulhq_s32(v79.val[1], v97.val[1]));
          v89.val[0] = vaddq_s32(v82.val[0], v17);
          v89.val[1] = vaddq_s32(v85.val[1], v19);
          v82.val[0] = vsubq_s32(v17, v82.val[0]);
          v85.val[1] = vsubq_s32(v19, v85.val[1]);
          v25 = vaddq_s32(v82.val[1], v79.val[0]);
          v26 = vaddq_s32(v79.val[1], v85.val[0]);
          v79.val[0] = vsubq_s32(v79.val[0], v82.val[1]);
          v79.val[1] = vsubq_s32(v85.val[0], v79.val[1]);
          v70.val[0] = vaddq_s32(v25, v89.val[0]);
          v70.val[1] = vaddq_s32(v26, v89.val[1]);
          vst2q_f32(result, v70);
          result += 8;
          v71.val[0] = vaddq_s32(v79.val[1], v82.val[0]);
          v71.val[1] = vsubq_s32(v85.val[1], v79.val[0]);
          vst2q_f32(v21, v71);
          v14 = v12;
          v72.val[0] = vsubq_s32(v89.val[0], v25);
          v72.val[1] = vsubq_s32(v89.val[1], v26);
          vst2q_f32(v22, v72);
          v73.val[0] = vsubq_s32(v82.val[0], v79.val[1]);
          v73.val[1] = vaddq_s32(v79.val[0], v85.val[1]);
          vst2q_f32(v16, v73);
          if (v8 != 4) {
          LABEL_11:
            v27 = v14 + 2;
            v28 = 0;
            do {
              v80 = vld2q_f32((const float*)a2);
              v29 = (const float*)(a3 + v10 + 32 + v28);
              v30 = (const float*)(a3 + v11 + 32 + v28);
              v31 = &result[v28 / 4];
              v83 = vld2q_f32((const float*)(a2 + 32));
              v32 = &result[(unsigned __int64)v10 / 4 + v28 / 4];
              v33 = &result[2 * v9 + v28 / 4];
              v86 = vld2q_f32((const float*)(a2 + 64));
              v27 -= 2;
              v34 = vtrn1q_s32(v80.val[0], v83.val[0]);
              v90 = vld2q_f32((const float*)(a2 + 96));
              v35 = vtrn2q_s32(v80.val[0], v83.val[0]);
              v36 = vtrn1q_s32(v80.val[1], v83.val[1]);
              v80.val[0] = vtrn2q_s32(v80.val[1], v83.val[1]);
              v95 = vld2q_f32((const float*)(a3 + v28));
              v37 = (const float*)(a3 + v28 + 32);
              v98 = vld2q_f32((const float*)(a3 + v10 + v28));
              v80.val[1] = vtrn1q_s32(v86.val[0], v90.val[0]);
              v83.val[0] = vtrn2q_s32(v86.val[0], v90.val[0]);
              v86.val[0] = vtrn2q_s32(v86.val[1], v90.val[1]);
              v83.val[1] = vtrn1q_s32(v86.val[1], v90.val[1]);
              v86.val[1] = vzip2q_s64(v34, v80.val[1]);
              LANES128(v34).n128_u64[1] = LANES128(v80.val[1]).n128_u64[0];
              v80.val[1] = vzip2q_s64(v35, v83.val[0]);
              LANES128(v35).n128_u64[1] = LANES128(v83.val[0]).n128_u64[0];
              v83.val[0] = vzip2q_s64(v80.val[0], v86.val[0]);
              LANES128(v80.val[0]).n128_u64[1] =
                  LANES128(v86.val[0]).n128_u64[0];
              v90.val[0] = vzip2q_s64(v36, v83.val[1]);
              LANES128(v36).n128_u64[1] = LANES128(v83.val[1]).n128_u64[0];
              v74 = vld2q_f32((const float*)(a3 + v11 + v28));
              v38 = &result[(unsigned __int64)v11 / 4 + v28 / 4];
              v28 += 64LL;
              v90.val[1] = vqrdmulhq_s32(v35, v95.val[0]);
              v39 = vqrdmulhq_s32(v80.val[0], v95.val[0]);
              v95.val[0] = vqrdmulhq_s32(v90.val[0], v98.val[0]);
              v80.val[0] =
                  vsubq_s32(v90.val[1], vqrdmulhq_s32(v80.val[0], v95.val[1]));
              v90.val[0] = vsubq_s32(vqrdmulhq_s32(v86.val[1], v98.val[0]),
                                     vqrdmulhq_s32(v90.val[0], v98.val[1]));
              v90.val[1] = vaddq_s32(v39, vqrdmulhq_s32(v35, v95.val[1]));
              v86.val[1] =
                  vaddq_s32(v95.val[0], vqrdmulhq_s32(v86.val[1], v98.val[1]));
              v95.val[0] = vqrdmulhq_s32(v83.val[0], v74.val[0]);
              v83.val[0] = vsubq_s32(vqrdmulhq_s32(v80.val[1], v74.val[0]),
                                     vqrdmulhq_s32(v83.val[0], v74.val[1]));
              v80.val[1] =
                  vaddq_s32(v95.val[0], vqrdmulhq_s32(v80.val[1], v74.val[1]));
              v83.val[1] = vaddq_s32(v90.val[0], v34);
              v86.val[0] = vaddq_s32(v86.val[1], v36);
              v90.val[0] = vsubq_s32(v34, v90.val[0]);
              v86.val[1] = vsubq_s32(v36, v86.val[1]);
              v40 = vaddq_s32(v83.val[0], v80.val[0]);
              v41 = vaddq_s32(v80.val[1], v90.val[1]);
              v80.val[0] = vsubq_s32(v80.val[0], v83.val[0]);
              v80.val[1] = vsubq_s32(v90.val[1], v80.val[1]);
              v42 = vsubq_s32(v83.val[1], v40);
              v95.val[0] = vsubq_s32(v86.val[0], v41);
              v83.val[0] = vaddq_s32(v40, v83.val[1]);
              v83.val[1] = vaddq_s32(v41, v86.val[0]);
              v93.val[0] = vaddq_s32(v80.val[1], v90.val[0]);
              v93.val[1] = vsubq_s32(v86.val[1], v80.val[0]);
              v90.val[0] = vsubq_s32(v90.val[0], v80.val[1]);
              v90.val[1] = vaddq_s32(v80.val[0], v86.val[1]);
              vst2q_f32(v31, v83);
              vst2q_f32(v32, v93);
              v75.val[0] = v42;
              v75.val[1] = v95.val[0];
              vst2q_f32(v38, v75);
              vst2q_f32(v33, v90);
              v81 = vld2q_f32((const float*)(a2 + 128));
              v96 = vld2q_f32(v29);
              v99 = vld2q_f32(v30);
              v84 = vld2q_f32((const float*)(a2 + 160));
              v87 = vld2q_f32((const float*)(a2 + 192));
              v43 = (const float*)(a2 + 224);
              a2 += 256;
              v91 = vld2q_f32(v43);
              v93.val[0] = vtrn1q_s32(v81.val[0], v84.val[0]);
              v93.val[1] = vtrn2q_s32(v81.val[0], v84.val[0]);
              v44 = vtrn1q_s32(v81.val[1], v84.val[1]);
              v81.val[0] = vtrn2q_s32(v81.val[1], v84.val[1]);
              v81.val[1] = vtrn1q_s32(v87.val[0], v91.val[0]);
              v84.val[0] = vtrn2q_s32(v87.val[0], v91.val[0]);
              v84.val[1] = vtrn1q_s32(v87.val[1], v91.val[1]);
              v87.val[0] = vtrn2q_s32(v87.val[1], v91.val[1]);
              v92 = vld2q_f32(v37);
              v87.val[1] = vzip2q_s64(v93.val[0], v81.val[1]);
              LANES128(v93.val[0]).n128_u64[1] =
                  LANES128(v81.val[1]).n128_u64[0];
              v81.val[1] = vzip2q_s64(v93.val[1], v84.val[0]);
              LANES128(v93.val[1]).n128_u64[1] =
                  LANES128(v84.val[0]).n128_u64[0];
              v84.val[0] = vzip2q_s64(v44, v84.val[1]);
              LANES128(v44).n128_u64[1] = LANES128(v84.val[1]).n128_u64[0];
              v84.val[1] = vzip2q_s64(v81.val[0], v87.val[0]);
              LANES128(v81.val[0]).n128_u64[1] =
                  LANES128(v87.val[0]).n128_u64[0];
              v87.val[0] = vqrdmulhq_s32(v93.val[1], v92.val[0]);
              v45 = vqrdmulhq_s32(v81.val[0], v92.val[0]);
              v92.val[0] = vqrdmulhq_s32(v87.val[1], v96.val[0]);
              v81.val[0] =
                  vsubq_s32(v87.val[0], vqrdmulhq_s32(v81.val[0], v92.val[1]));
              v87.val[0] = vqrdmulhq_s32(v87.val[1], v96.val[1]);
              v87.val[1] = vqrdmulhq_s32(v84.val[0], v96.val[0]);
              v84.val[0] =
                  vsubq_s32(v92.val[0], vqrdmulhq_s32(v84.val[0], v96.val[1]));
              v87.val[0] = vaddq_s32(v87.val[1], v87.val[0]);
              v92.val[0] = vqrdmulhq_s32(v84.val[1], v99.val[0]);
              v84.val[1] = vsubq_s32(vqrdmulhq_s32(v81.val[1], v99.val[0]),
                                     vqrdmulhq_s32(v84.val[1], v99.val[1]));
              v81.val[1] =
                  vaddq_s32(v92.val[0], vqrdmulhq_s32(v81.val[1], v99.val[1]));
              v87.val[1] =
                  vaddq_s32(v45, vqrdmulhq_s32(v93.val[1], v92.val[1]));
              v92.val[0] = vaddq_s32(v84.val[0], v93.val[0]);
              v92.val[1] = vaddq_s32(v87.val[0], v44);
              v84.val[0] = vsubq_s32(v93.val[0], v84.val[0]);
              v87.val[0] = vsubq_s32(v44, v87.val[0]);
              v93.val[0] = vaddq_s32(v84.val[1], v81.val[0]);
              v93.val[1] = vaddq_s32(v81.val[1], v87.val[1]);
              v81.val[0] = vsubq_s32(v81.val[0], v84.val[1]);
              v81.val[1] = vsubq_s32(v87.val[1], v81.val[1]);
              v46 = vsubq_s32(v92.val[0], v93.val[0]);
              v96.val[0] = vsubq_s32(v92.val[1], v93.val[1]);
              v87.val[1] = vaddq_s32(v93.val[0], v92.val[0]);
              v92.val[0] = vaddq_s32(v93.val[1], v92.val[1]);
              v93.val[0] = vaddq_s32(v81.val[1], v84.val[0]);
              v93.val[1] = vsubq_s32(v87.val[0], v81.val[0]);
              v76.val[0] = v87.val[1];
              v76.val[1] = v92.val[0];
              vst2q_f32(v31 + 8, v76);
              vst2q_f32(v32 + 8, v93);
              v77.val[0] = v46;
              v77.val[1] = v96.val[0];
              vst2q_f32(v38 + 8, v77);
              v78.val[0] = vsubq_s32(v84.val[0], v81.val[1]);
              v78.val[1] = vaddq_s32(v81.val[0], v87.val[0]);
              vst2q_f32(v33 + 8, v78);
            } while (v27 > 2);
            result = (float*)((char*)result + v28);
            a3 += v28;
          }
        }
        else {
          v14 = v7;
          if (v8 != 4) {
            goto LABEL_11;
          }
        }
        v13 = __OFSUB__(a4--, 1);
      } while (!((a4 < 0) ^ v13 | (a4 == 0)));
    }
  }
  if (a5 <= 0) {
    v47 = -(-a5 & 3);
  }
  else {
    v47 = a5 & 3;
  }
  if (v47 >= 1) {
    v48 = 3 * a5;
    v49 = 2LL * a5;
    v50 = v47 + 1;
    do {
      v51 = (_DWORD*)(a3 + v49 * 4);
      v52 = (_DWORD*)(a3 + 8LL * v69);
      v53 = *(float*)a3;
      v54 = *(_DWORD*)(a3 + 4);
      a3 += 8;
      v55 = *(_QWORD*)(a2 + 8);
      v56 = *(_QWORD*)(a2 + 16);
      --v50;
      v57 = (int)v55 * (__int64)SLODWORD(v53);
      v58 = (int)v55 * (__int64)v54;
      v55 >>= 32;
      v59 = (int)v55 * (__int64)SLODWORD(v53);
      v60 = (int)v55 * (__int64)v54;
      v61 = *(_QWORD*)(a2 + 24);
      LODWORD(v60) = (v57 >> 31) - (v60 >> 31);
      LODWORD(v57) = *v51;
      LODWORD(v51) = v51[1];
      LODWORD(v59) = (v58 >> 31) + (v59 >> 31);
      v62 = (int)v56 * (__int64)(int)v57;
      v63 = (int)v56 * (__int64)(int)v51;
      v56 >>= 32;
      v64 = (int)v56 * (__int64)(int)v57;
      v65 = (int)v56 * (__int64)(int)v51;
      LODWORD(v56) = *v52;
      LODWORD(v52) = v52[1];
      LODWORD(v65) = (v62 >> 31) - (v65 >> 31);
      LODWORD(v64) = (v63 >> 31) + (v64 >> 31);
      v66 = (int)v61 * (__int64)(int)v56;
      v67 = (int)v61 * (__int64)(int)v52;
      v61 >>= 32;
      v68 = (unsigned __int64)((int)v61 * (__int64)(int)v56) >> 31;
      LODWORD(v52) = (v66 >> 31) -
                     ((unsigned __int64)((int)v61 * (__int64)(int)v52) >> 31);
      LODWORD(v66) = *(_DWORD*)a2;
      LODWORD(v61) = *(_DWORD*)(a2 + 4);
      a2 += 32;
      LODWORD(v68) = (v67 >> 31) + v68;
      LODWORD(v67) = v65 + v66;
      LODWORD(v63) = v64 + v61;
      LODWORD(v65) = v66 - v65;
      LODWORD(v61) = v61 - v64;
      LODWORD(v64) = v60 + (_DWORD)v52;
      LODWORD(v52) = v60 - (_DWORD)v52;
      *(_QWORD*)result =
          (unsigned int)(v64 + v67) |
          ((unsigned __int64)(unsigned int)(v59 + v68 + v63) << 32);
      *(_QWORD*)&result[v49] =
          (unsigned int)(v59 - v68 + v65) |
          ((unsigned __int64)(unsigned int)(v61 - (_DWORD)v52) << 32);
      *(_QWORD*)&result[2 * v69] =
          (unsigned int)(v67 - v64) |
          ((unsigned __int64)(unsigned int)(v63 - (v59 + v68)) << 32);
      *(_QWORD*)&result[2 * v48] =
          (unsigned int)(v65 - (v59 - v68)) |
          ((unsigned __int64)(unsigned int)((_DWORD)v52 + v61) << 32);
      result += 2;
    } while (v50 > 1);
  }
  return result;
}

#pragma GCC visibility pop
