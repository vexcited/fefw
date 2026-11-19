#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 ResFile_5e8ba0(__int64 result, _QWORD*);
extern __int128 GameData_1a83210;
extern __int128 GameData_1a83520;
__int64 nn_g3d_5eb740(int* a1);
float32x4_t nn_g3d_5ecf20(_QWORD* a1, __int64 a2, int a3, float32x4_t result);
__int64 nn_g3d_5f4c60(__int64 result);

__int64 nn_g3d_5eb740(int* a1)
{
  __int64 v1;
  char v2;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned __int16* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  unsigned __int16* v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  unsigned int v22;
  __int64 v23;
  int v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 result;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  int v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  struct {
    unsigned __int64 v71;
    unsigned __int64 v72;
    unsigned __int64 v73;
    unsigned __int64 v74;
  } v71_;

  v1 = *(_QWORD*)a1;
  v2 = *((_BYTE*)a1 + 17);
  v4 = *(unsigned __int8*)(*(_QWORD*)a1 + 91LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 91LL) == 0) {
    v9 = 0;
    goto LABEL_12;
  }
  v5 = *(_QWORD*)(v1 + 24);
  v6 = v4 & 7;
  if (v4 >= 8) {
    v10 = (unsigned __int16*)(v5 + 276);
    v11 = 0;
    v8 = 0;
    v12 = -(__int64)((unsigned __int8)v4 & 0xF8);
    do {
      v11 -= 8;
      v13 = v10[84];
      v14 = v8 + *(v10 - 112) + *(v10 - 84) + *(v10 - 56) + *(v10 - 28) + *v10 +
            v10[28];
      v15 = v10[56];
      v10 += 224;
      v8 = v14 + v15 + v13;
    } while (v12 != v11);
    v7 = -v11;
    if (v6 == 0) {
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v7 = 0;
  v8 = 0;
  if ((v4 & 7) != 0) {
  LABEL_9:
    v16 = (unsigned __int16*)(v5 + 56 * v7 + 52);
    do {
      v17 = *v16;
      v16 += 28;
      --v6;
      v8 += v17;
    } while (v6 != 0);
  }
LABEL_11:
  v9 = 32LL * v8;
LABEL_12:
  v18 = *((unsigned __int8*)a1 + 16);
  v19 = a1[3];
  v20 = a1[2];
  v21 = 0;
  if (*((_BYTE*)a1 + 17) == 0) {
    v9 = 0;
  }
  v22 = *(unsigned __int8*)(v1 + 92);
  v23 = *((_QWORD*)a1 + 3);
  *((_QWORD*)a1 + 12) = 0;
  *((_QWORD*)a1 + 13) = -1;
  *((_QWORD*)a1 + 26) = 0;
  *((_QWORD*)a1 + 27) = 8;
  *((_QWORD*)a1 + 28) = 0;
  *((_QWORD*)a1 + 29) = -1;
  *((_QWORD*)a1 + 30) = 0;
  *((_QWORD*)a1 + 31) = 8;
  *((_QWORD*)a1 + 32) = 0;
  *((_QWORD*)a1 + 33) = -1;
  *((_QWORD*)a1 + 34) = 0;
  *((_QWORD*)a1 + 35) = 8;
  *((_QWORD*)a1 + 36) = 0;
  *((_QWORD*)a1 + 37) = -1;
  *((_QWORD*)a1 + 8) = 0;
  *((_QWORD*)a1 + 9) = -1;
  *((_QWORD*)a1 + 16) = 0;
  *((_QWORD*)a1 + 17) = -1;
  *((_QWORD*)a1 + 20) = 0;
  *((_QWORD*)a1 + 21) = -1;
  if (v18 != 0) {
    v24 = v19;
  }
  else {
    v24 = 1;
  }
  *((_QWORD*)a1 + 24) = 0;
  *((_QWORD*)a1 + 25) = -1;
  *((_QWORD*)a1 + 6) = v9;
  *((_QWORD*)a1 + 7) = 16;
  *((_QWORD*)a1 + 22) = 0;
  *((_QWORD*)a1 + 23) = 16;
  v25 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  *((_QWORD*)a1 + 14) = 4LL * v22;
  *((_QWORD*)a1 + 15) = 4;
  *((_QWORD*)a1 + 10) = 72 * v20 * (__int64)v24;
  *((_QWORD*)a1 + 11) = 8;
  *((_QWORD*)a1 + 18) = ((v22 + 31) >> 3) & 0x3CLL;
  *((_QWORD*)a1 + 19) = 4;
  if ((v2 & 1) != 0) {
    v21 = (unsigned __int64)*(unsigned __int8*)(v1 + 91) << 6;
  }
  *((_QWORD*)a1 + 22) = v21;
  v71_.v71 = 0;
  v71_.v72 = 0;
  v26 = *(_QWORD*)(v1 + 16);
  v71_.v73 = 0;
  v71_.v74 = 0;
  result = ResFile_5e8ba0(v26, &v71_.v71);
  if (v71_.v71 != 0 || v71_.v72 != 0 || (v28 = v71_.v73, v71_.v73 != 0) ||
      (v29 = 0, v71_.v74 != 0)) {
    v30 = ((v71_.v71 - ((v71_.v71 >> 1) & 0x5555555555555555LL)) &
           0x3333333333333333LL) +
          (((v71_.v71 - ((v71_.v71 >> 1) & 0x5555555555555555LL)) >> 2) &
           0x3333333333333333LL);
    v31 = ((v71_.v72 - ((v71_.v72 >> 1) & 0x5555555555555555LL)) &
           0x3333333333333333LL) +
          (((v71_.v72 - ((v71_.v72 >> 1) & 0x5555555555555555LL)) >> 2) &
           0x3333333333333333LL);
    LODWORD(v30) =
        ((unsigned int)((0x101010101010101LL *
                         ((v31 + (v31 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                        32) >>
         24) +
        ((unsigned int)((0x101010101010101LL *
                         ((v30 + (v30 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                        32) >>
         24);
    v32 = ((v71_.v73 - ((v71_.v73 >> 1) & 0x5555555555555555LL)) &
           0x3333333333333333LL) +
          (((v71_.v73 - ((v71_.v73 >> 1) & 0x5555555555555555LL)) >> 2) &
           0x3333333333333333LL);
    v33 = v71_.v74 - ((v71_.v74 >> 1) & 0x5555555555555555LL);
    LODWORD(v30) =
        v30 +
        ((unsigned int)((0x101010101010101LL *
                         ((v32 + (v32 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                        32) >>
         24) +
        ((unsigned int)((0x101010101010101LL *
                         (((v33 & 0x3333333333333333LL) +
                           ((v33 >> 2) & 0x3333333333333333LL) +
                           (((v33 & 0x3333333333333333LL) +
                             ((v33 >> 2) & 0x3333333333333333LL)) >>
                            4)) &
                          0xF0F0F0F0F0F0F0FLL)) >>
                        32) >>
         24);
    v29 = 8LL * *(unsigned __int8*)(v26 + 77);
    v34 = a1[2];
    *((_QWORD*)a1 + 27) = 8;
    *((_QWORD*)a1 + 28) = 0;
    *((_QWORD*)a1 + 31) = 8;
    *((_QWORD*)a1 + 32) = 0;
    v28 = 72 * v34 * (__int64)(int)v30;
  }
  v35 = *((_QWORD*)a1 + 6);
  v36 = 8;
  *((_QWORD*)a1 + 26) = v29;
  *((_QWORD*)a1 + 30) = v28;
  *((_QWORD*)a1 + 34) = v25;
  *((_QWORD*)a1 + 4) = 0;
  *((_QWORD*)a1 + 5) = 8;
  if (v35 != 0) {
    v37 = *((_QWORD*)a1 + 7);
    v36 = 8;
    if (v37 > 8) {
      v36 = *((_QWORD*)a1 + 7);
    }
    v38 = ((v37 + *((_QWORD*)a1 + 8) - 1) & -(__int64)v37) - *((_QWORD*)a1 + 8);
    v35 += v38;
    *((_QWORD*)a1 + 9) = v38;
    *((_QWORD*)a1 + 4) = v35;
    *((_QWORD*)a1 + 5) = v36;
  }
  v39 = *((_QWORD*)a1 + 10);
  if (v39 != 0) {
    v40 = *((_QWORD*)a1 + 11);
    v41 = *((_QWORD*)a1 + 12);
    v42 = v40 + v41 + v35;
    if (v36 <= v40) {
      v36 = *((_QWORD*)a1 + 11);
    }
    v43 = ((v42 - 1) & -(__int64)v40) - v41;
    *((_QWORD*)a1 + 13) = v43;
    v35 = v43 + v39;
    *((_QWORD*)a1 + 4) = v35;
    *((_QWORD*)a1 + 5) = v36;
  }
  v44 = *((_QWORD*)a1 + 14);
  if (v44 != 0) {
    v45 = *((_QWORD*)a1 + 15);
    v46 = *((_QWORD*)a1 + 16);
    v47 = v45 + v46 + v35;
    if (v36 <= v45) {
      v36 = *((_QWORD*)a1 + 15);
    }
    v48 = ((v47 - 1) & -(__int64)v45) - v46;
    *((_QWORD*)a1 + 17) = v48;
    v35 = v48 + v44;
    *((_QWORD*)a1 + 4) = v35;
    *((_QWORD*)a1 + 5) = v36;
  }
  v49 = *((_QWORD*)a1 + 18);
  if (v49 != 0) {
    v50 = *((_QWORD*)a1 + 19);
    v51 = *((_QWORD*)a1 + 20);
    v52 = v50 + v51 + v35;
    if (v36 <= v50) {
      v36 = *((_QWORD*)a1 + 19);
    }
    v53 = ((v52 - 1) & -(__int64)v50) - v51;
    *((_QWORD*)a1 + 21) = v53;
    v35 = v53 + v49;
    *((_QWORD*)a1 + 4) = v35;
    *((_QWORD*)a1 + 5) = v36;
  }
  v54 = *((_QWORD*)a1 + 22);
  if (v54 != 0) {
    v55 = *((_QWORD*)a1 + 23);
    v56 = *((_QWORD*)a1 + 24);
    v57 = v55 + v56 + v35;
    if (v36 <= v55) {
      v36 = *((_QWORD*)a1 + 23);
    }
    v58 = ((v57 - 1) & -(__int64)v55) - v56;
    *((_QWORD*)a1 + 25) = v58;
    v35 = v58 + v54;
    *((_QWORD*)a1 + 4) = v35;
    *((_QWORD*)a1 + 5) = v36;
  }
  if (v29 != 0) {
    v59 = *((_QWORD*)a1 + 27);
    v60 = *((_QWORD*)a1 + 28);
    v61 = v59 + v60 + v35;
    if (v36 <= v59) {
      v36 = *((_QWORD*)a1 + 27);
    }
    v62 = ((v61 - 1) & -(__int64)v59) - v60;
    *((_QWORD*)a1 + 29) = v62;
    v35 = v62 + v29;
    *((_QWORD*)a1 + 4) = v35;
    *((_QWORD*)a1 + 5) = v36;
  }
  if (v28 != 0) {
    v63 = *((_QWORD*)a1 + 31);
    v64 = *((_QWORD*)a1 + 32);
    v65 = v63 + v64 + v35;
    if (v36 <= v63) {
      v36 = *((_QWORD*)a1 + 31);
    }
    v66 = ((v65 - 1) & -(__int64)v63) - v64;
    v35 = v66 + v28;
    *((_QWORD*)a1 + 33) = v66;
    *((_QWORD*)a1 + 4) = v66 + v28;
    *((_QWORD*)a1 + 5) = v36;
  }
  if (v25 != 0) {
    v67 = *((_QWORD*)a1 + 35);
    v68 = *((_QWORD*)a1 + 36);
    v69 = v67 + v68 + v35;
    if (v36 <= v67) {
      v36 = *((_QWORD*)a1 + 35);
    }
    v70 = ((v69 - 1) & -(__int64)v67) - v68;
    *((_QWORD*)a1 + 37) = v70;
    *((_QWORD*)a1 + 4) = v70 + v25;
    *((_QWORD*)a1 + 5) = v36;
  }
  return result;
}

float32x4_t nn_g3d_5ecf20(_QWORD* a1, __int64 a2, int a3, float32x4_t result)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int16* v8;
  unsigned __int16* v9;
  unsigned int v10;
  float32x4_t* v11;
  int8x16_t v12;
  int8x16_t v13;
  float v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  float32x4_t v21;
  float32x4_t* v22;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  int8x16_t v29;
  float32x4_t v30;
  float v31;
  unsigned __int64 v32;
  float v33;
  float32x4_t v34;
  float32x4_t v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float32x4_t* v41;
  int8x16_t v42;
  int8x16_t v43;
  float v44;
  unsigned __int16* v45;
  __int64 v46;
  __int64 v47;
  float32x2_t* v48;
  float v49;
  float32x4_t* v50;
  int8x16_t v51;
  int8x16_t v52;
  float v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int16* v56;
  unsigned __int64 v57;
  float* v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  float32x2_t v63;
  float v64;
  float32x4_t* v65;
  float v66;
  float32x4_t v67;
  float32x4_t v68;
  int8x16_t v69;
  float32x4_t v70;
  int8x16_t v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  float v75;
  unsigned __int64 v76;
  float v77;
  float32x4_t v78;
  float32x4_t v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  _QWORD v85[4];

  v4 = a1[7];
  if (v4 != 0) {
    v5 = *a1;
    v6 = *(_QWORD*)(a2 + 32);
    v7 = v4 + 64LL * a3;
    if (*(_BYTE*)(*a1 + 90LL) != 0) {
      if ((*(_BYTE*)(v5 + 4) & 0x10) != 0) {
        v45 = *(unsigned __int16**)(v5 + 32);
        v46 = *(_QWORD*)(v5 + 64);
        v47 = *(unsigned __int8*)(v5 + 91);
        v48 = (float32x2_t*)(v46 + 4 * v47);
        v49 = LANES64(v48[1]).n64_f32[1];
        v50 = (float32x4_t*)(v6 + ((unsigned __int64)*v45 << 6));
        *(float32x4_t*)v7 = vaddq_f32(
            vmlaq_n_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(*v50, COERCE_FLOAT(LANES64(*(v48)).n64_u64[0])),
                    v50[1], COERCE_AS(float32x2_t, LANES64(*(v48)).n64_u64[0]),
                    1),
                v50[2], LANES64(v48[1]).n64_f32[0]),
            v50[3]);
        result = vmulq_f32(*v50, *v50);
        v51 = vmulq_f32(v50[1], v50[1]);
        v52 = vmulq_f32(v50[2], v50[2]);
        LANES128(result).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(
                        float32x2_t,
                        LANES128_OF(vextq_s8(result, result, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(result).n128_u64[0])))
                .n64_u64[0];
        LANES128(v51).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
                .n64_u64[0];
        LANES128(v52).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v52, v52, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
                .n64_u64[0];
        {
          __typeof__(v53) z_ = (__typeof__(v53)){0};
          LODWORD(z_) =
              LANES64_OF(
                  vsqrt_f32(vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]))))
                  .n64_u32[0];
          v53 = z_;
        }
        LANES128(result).n128_u64[0] =
            LANES64_OF(
                vsqrt_f32(vpadd_f32(
                    COERCE_AS(float32x2_t, LANES128(result).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(result).n128_u64[0]))))
                .n64_u32[0] |
            ((unsigned __int64)LANES64_OF(
                 vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0]))))
                 .n64_u32[0]
             << 32);
        if (LANES128(result).n128_f32[0] < LANES128(result).n128_f32[1]) {
          LANES128(result).n128_f32[0] = LANES128(result).n128_f32[1];
        }
        if (LANES128(result).n128_f32[0] < v53) {
          LANES128(result).n128_f32[0] = v53;
        }
        LANES128(result).n128_f32[0] = v49 * LANES128(result).n128_f32[0];
        *(_DWORD*)(v7 + 16) = LANES128(result).n128_u32[0];
        v54 = *(unsigned __int16*)(*a1 + 88LL);
        if (v54 >= 2) {
          v55 = 4 * v47;
          v56 = v45 + 1;
          v57 = v54 - 1;
          v58 = (float*)(v55 + v46 + 28);
          do {
            while (1) {
              v62 = *v56++;
              PSEUDO_LOW_LANE64(v63, n64_u64, *(unsigned __int64*)(v58 - 3));
              v64 = *(v58 - 1);
              v65 = (float32x4_t*)(v6 + ((unsigned __int64)v62 << 6));
              v66 = *v58;
              v85[2] = 0;
              v85[3] = 0;
              v67 = v65[1];
              v68 = v65[2];
              v69 = vmulq_f32(*v65, *v65);
              v70 = vmlaq_lane_f32(vmulq_n_f32(*v65, LANES64(v63).n64_f32[0]),
                                   v67, v63, 1);
              v71 = vmulq_f32(v67, v67);
              v72 = vmlaq_n_f32(v70, v68, v64);
              v73 = vmulq_f32(v68, v68);
              v74 = vaddq_f32(v72, v65[3]);
              LANES128(v69).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v69, v69, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
                      .n64_u64[0];
              *(float32x4_t*)v85 = v74;
              LANES128(v71).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v71, v71, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v73).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v73, v73, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0])))
                      .n64_u64[0];
              {
                __typeof__(v75) z_ = (__typeof__(v75)){0};
                LODWORD(z_) =
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]))))
                        .n64_u32[0];
                v75 = z_;
              }
              v76 =
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]))))
                      .n64_u32[0] |
                  ((unsigned __int64)LANES64_OF(
                       vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]))))
                       .n64_u32[0]
                   << 32);
              if (*(float*)&v76 < *((float*)&v76 + 1)) {
                *(float*)&v76 = *((float*)&v76 + 1);
              }
              if (*(float*)&v76 < v75) {
                *(float*)&v76 = v75;
              }
              v77 = v66 * *(float*)&v76;
              v78 = *(float32x4_t*)v7;
              *(float*)&v85[2] = v77;
              v79 = vsubq_f32(v74, v78);
              result = vmulq_f32(v79, v79);
              LANES128(result).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(result, result, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(result).n128_u64[0])))
                      .n64_u64[0];
              {
                __typeof__(v80) z_ = (__typeof__(v80)){0};
                LODWORD(z_) =
                    LANES64_OF(
                        vpadd_f32(COERCE_AS(float32x2_t,
                                            LANES128(result).n128_u64[0]),
                                  COERCE_AS(float32x2_t,
                                            LANES128(result).n128_u64[0])))
                        .n64_u32[0];
                v80 = z_;
              }
              LANES128(result).n128_u32[0] = *(_DWORD*)(v7 + 16);
              v81 = (float)(v77 - LANES128(result).n128_f32[0]) *
                    (float)(v77 - LANES128(result).n128_f32[0]);
              if (v81 < 0x1.a36e2e0000000p-14f) {
                v81 = 0x1.a36e2e0000000p-14f;
              }
              if (v80 < v81) {
                break;
              }
              v82 = *(float*)(v7 + 16);
              v83 = v80 * (float)(0x1.0000000000000p+0f / sqrtf(v80));
              v84 = (float)(v83 + (float)(v77 + v82)) * 0x1.0000000000000p-1f;
              *(float*)(v7 + 16) = v84;
              result = vaddq_f32(*(float32x4_t*)v7,
                                 vmulq_n_f32(v79, (float)(v84 - v82) / v83));
              *(float32x4_t*)v7 = result;
              v58 += 4;
              if (--v57 == 0) {
                return result;
              }
            }
            if (LANES128(result).n128_f32[0] <= v77) {
              v59 = v85;
            }
            else {
              v59 = (__int64*)v7;
            }
            v60 = v59[3];
            *(_QWORD*)(v7 + 8) = v59[1];
            *(_QWORD*)(v7 + 24) = v60;
            v61 = *v59;
            *(_QWORD*)(v7 + 16) = v59[2];
            *(_QWORD*)v7 = v61;
            v58 += 4;
            --v57;
          } while (v57 != 0);
        }
      }
      else {
        v8 = *(unsigned __int16**)(v5 + 32);
        v10 = *v8;
        v9 = v8 + 1;
        v11 = (float32x4_t*)(v6 + ((unsigned __int64)v10 << 6));
        *(float32x4_t*)v7 = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(*v11, COERCE_FLOAT(*(_OWORD*)(v7 + 32))),
                    v11[1], *(float32x2_t*)(v7 + 32), 1),
                v11[2], *(float32x4_t*)(v7 + 32), 2),
            v11[3]);
        result = vmulq_f32(*v11, *v11);
        v12 = vmulq_f32(v11[1], v11[1]);
        v13 = vmulq_f32(v11[2], v11[2]);
        LANES128(result).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(
                        float32x2_t,
                        LANES128_OF(vextq_s8(result, result, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(result).n128_u64[0])))
                .n64_u64[0];
        LANES128(v12).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                .n64_u64[0];
        LANES128(v13).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                .n64_u64[0];
        {
          __typeof__(v14) z_ = (__typeof__(v14)){0};
          LODWORD(z_) =
              LANES64_OF(
                  vsqrt_f32(vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]))))
                  .n64_u32[0];
          v14 = z_;
        }
        LANES128(result).n128_u64[0] =
            LANES64_OF(
                vsqrt_f32(vpadd_f32(
                    COERCE_AS(float32x2_t, LANES128(result).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(result).n128_u64[0]))))
                .n64_u32[0] |
            ((unsigned __int64)LANES64_OF(
                 vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]))))
                 .n64_u32[0]
             << 32);
        if (LANES128(result).n128_f32[0] < LANES128(result).n128_f32[1]) {
          LANES128(result).n128_f32[0] = LANES128(result).n128_f32[1];
        }
        if (LANES128(result).n128_f32[0] < v14) {
          LANES128(result).n128_f32[0] = v14;
        }
        LANES128(result).n128_f32[0] =
            *(float*)(v7 + 48) * LANES128(result).n128_f32[0];
        *(_DWORD*)(v7 + 16) = LANES128(result).n128_u32[0];
        v15 = *(unsigned __int16*)(*a1 + 88LL);
        if (v15 >= 2) {
          v16 = v15 - 1;
          do {
            while (1) {
              v20 = *v9++;
              v21 = *(float32x4_t*)(v7 + 32);
              v85[2] = 0;
              v85[3] = 0;
              v22 = (float32x4_t*)(v6 + ((unsigned __int64)v20 << 6));
              v23 = v22[1];
              v24 = v22[2];
              v25 = vmulq_f32(*v22, *v22);
              v26 = vmlaq_lane_f32(
                  vmulq_n_f32(*v22, LANES128(v21).n128_f32[0]), v23,
                  COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1);
              v27 = vmulq_f32(v23, v23);
              v28 = vmlaq_laneq_f32(v26, v24, v21, 2);
              v29 = vmulq_f32(v24, v24);
              v30 = vaddq_f32(v28, v22[3]);
              LANES128(v25).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                      .n64_u64[0];
              *(float32x4_t*)v85 = v30;
              LANES128(v27).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v29).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
                      .n64_u64[0];
              {
                __typeof__(v31) z_ = (__typeof__(v31)){0};
                LODWORD(z_) =
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]))))
                        .n64_u32[0];
                v31 = z_;
              }
              v32 =
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]))))
                      .n64_u32[0] |
                  ((unsigned __int64)LANES64_OF(
                       vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]))))
                       .n64_u32[0]
                   << 32);
              if (*(float*)&v32 < *((float*)&v32 + 1)) {
                *(float*)&v32 = *((float*)&v32 + 1);
              }
              if (*(float*)&v32 < v31) {
                *(float*)&v32 = v31;
              }
              v33 = *(float*)(v7 + 48) * *(float*)&v32;
              v34 = *(float32x4_t*)v7;
              *(float*)&v85[2] = v33;
              v35 = vsubq_f32(v30, v34);
              result = vmulq_f32(v35, v35);
              LANES128(result).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(result, result, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(result).n128_u64[0])))
                      .n64_u64[0];
              {
                __typeof__(v36) z_ = (__typeof__(v36)){0};
                LODWORD(z_) =
                    LANES64_OF(
                        vpadd_f32(COERCE_AS(float32x2_t,
                                            LANES128(result).n128_u64[0]),
                                  COERCE_AS(float32x2_t,
                                            LANES128(result).n128_u64[0])))
                        .n64_u32[0];
                v36 = z_;
              }
              LANES128(result).n128_u32[0] = *(_DWORD*)(v7 + 16);
              v37 = (float)(v33 - LANES128(result).n128_f32[0]) *
                    (float)(v33 - LANES128(result).n128_f32[0]);
              if (v37 < 0x1.a36e2e0000000p-14f) {
                v37 = 0x1.a36e2e0000000p-14f;
              }
              if (v36 < v37) {
                break;
              }
              v38 = *(float*)(v7 + 16);
              v39 = v36 * (float)(0x1.0000000000000p+0f / sqrtf(v36));
              v40 = (float)(v39 + (float)(v33 + v38)) * 0x1.0000000000000p-1f;
              *(float*)(v7 + 16) = v40;
              result = vaddq_f32(*(float32x4_t*)v7,
                                 vmulq_n_f32(v35, (float)(v40 - v38) / v39));
              *(float32x4_t*)v7 = result;
              if (--v16 == 0) {
                return result;
              }
            }
            if (LANES128(result).n128_f32[0] <= v33) {
              v17 = v85;
            }
            else {
              v17 = (__int64*)v7;
            }
            v18 = v17[3];
            *(_QWORD*)(v7 + 8) = v17[1];
            *(_QWORD*)(v7 + 24) = v18;
            v19 = *v17;
            *(_QWORD*)(v7 + 16) = v17[2];
            *(_QWORD*)v7 = v19;
            --v16;
          } while (v16 != 0);
        }
      }
    }
    else {
      v41 = (float32x4_t*)(v6 + ((unsigned __int64)*(unsigned __int16*)(v5 + 84)
                                 << 6));
      *(float32x4_t*)v7 = vaddq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(*v41, COERCE_FLOAT(*(_OWORD*)(v7 + 32))), v41[1],
                  *(float32x2_t*)(v7 + 32), 1),
              v41[2], *(float32x4_t*)(v7 + 32), 2),
          v41[3]);
      result = vmulq_f32(*v41, *v41);
      v42 = vmulq_f32(v41[1], v41[1]);
      v43 = vmulq_f32(v41[2], v41[2]);
      LANES128(result).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(
                      float32x2_t,
                      LANES128_OF(vextq_s8(result, result, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(result).n128_u64[0])))
              .n64_u64[0];
      LANES128(v42).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
              .n64_u64[0];
      LANES128(v43).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
              .n64_u64[0];
      {
        __typeof__(v44) z_ = (__typeof__(v44)){0};
        LODWORD(z_) =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]))))
                .n64_u32[0];
        v44 = z_;
      }
      LANES128(result).n128_u64[0] =
          LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(result).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(result).n128_u64[0]))))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vsqrt_f32(vpadd_f32(
                   COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]))))
               .n64_u32[0]
           << 32);
      if (LANES128(result).n128_f32[0] < LANES128(result).n128_f32[1]) {
        LANES128(result).n128_f32[0] = LANES128(result).n128_f32[1];
      }
      if (LANES128(result).n128_f32[0] < v44) {
        LANES128(result).n128_f32[0] = v44;
      }
      LANES128(result).n128_f32[0] =
          *(float*)(v7 + 48) * LANES128(result).n128_f32[0];
      *(_DWORD*)(v7 + 16) = LANES128(result).n128_u32[0];
    }
  }
  return result;
}

__int64 nn_g3d_5f4c60(__int64 result)
{
  unsigned int v1;
  float64x2_t v2;
  float32x4_t v3;
  unsigned __int64 v4;
  float64x2_t v5;
  float32x4_t* v6;
  int8x16_t v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  unsigned __int64 v13;
  int8x16_t v14;
  int32x4_t v15;
  int8x16_t v16;
  int8x16_t v17;
  int8x16_t v18;
  int8x16_t v19;
  float32x4_t v20;
  int8x16_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  int8x16_t v25;
  float v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float v33;
  int8x16x2_t v34;

  v1 = *(unsigned __int16*)(result + 10);
  if (*(_WORD*)(result + 10) != 0) {
    LANES128(v2).n128_u64[0] = 0xBF800000BF800000LL;
    LANES128(v2).n128_u64[1] = 0xBF800000BF800000LL;
    LANES128(v3).n128_u64[0] = 0x3F8000003F800000LL;
    LANES128(v3).n128_u64[1] = 0x3F8000003F800000LL;
    v4 = 0;
    v5 = vnegq_f64(v2);
    v6 = (float32x4_t*)(*(_QWORD*)result + 48LL);
    do {
      if (fabsf(LANES128(v6[1]).n128_f32[1]) >= 0x1.0624de0000000p-10f) {
        v24 = *v6;
        v25 = vmulq_f32(v24, v24);
        LANES128(v25).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                .n64_u64[0];
        v26 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                  .n64_f32[0];
        if (v26 != 0x0.0p+0f) {
          v27 = v6[-1];
          LANES128(v28).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v28).n128_i8[8] =
              vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v29).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v29).n128_i8[8] =
              vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v30 = vmulq_f32(v29, v28);
          LANES128(v29).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v29).n128_i8[8] =
              vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v27).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v27).n128_i8[8] =
              vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v31 = vmlsq_f32(v30, v27, v29);
          v32 = vmulq_f32(v31, v31);
          LANES128(v32).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
                  .n64_u64[0];
          v33 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
                  .n64_f32[0];
          if (v33 != 0x0.0p+0f) {
            v7 = vmulq_n_f32(*v6, 0x1.0000000000000p+0f / sqrtf(v26));
            v8 = vmulq_n_f32(v31, 0x1.0000000000000p+0f / sqrtf(v33));
            LANES128(v9).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v10).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v9).n128_i8[8] =
                vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            LANES128(v11).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v10).n128_i8[8] =
                vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            v12 = vmulq_f32(v9, v10);
            *(int8x8_t*)&LANES128(v11).n128_i8[8] =
                vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            LANES128(v10).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v10).n128_i8[8] =
                vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            v13 = LANES128(v8).n128_u32[1];
            v14 = vmlsq_f32(v12, v10, v11);
            v15 = vaddq_f32(
                vmlaq_n_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83520),
                                    LANES128(v14).n128_f32[0]),
                        v5, COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                        1),
                    COERCE_AS(float32x4_t, GameData_1a83210),
                    LANES128(v8).n128_f32[2]),
                v3);
            LANES128(v10).n128_u32[0] = LANES128(v7).n128_u32[0];
            LANES128(v10).n128_u32[1] = LANES128(v14).n128_u32[2];
            LANES128(v8).n128_u64[0] =
                LANES128(v14).n128_u32[1] |
                ((unsigned __int64)LANES128(v8).n128_u32[0] << 32);
            LANES128(v10).n128_u64[1] = v13;
            v16 = vdupq_laneq_s32(v15, 2);
            LANES128(v8).n128_u64[1] = LANES128(v7).n128_u32[2];
            v34.val[0] = vaddq_f32(v8, v10);
            v34.val[1] = vsubq_f32(v10, v8);
            LANES128(v8).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v34, COERCE_AS(int8x8_t, 0x302010003020100LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v14).n128_i8[8] =
                vqtbl2_s8(v34, COERCE_AS(int8x8_t, 0x1B1A191807060504LL));
            *(int8x8_t*)&LANES128(v8).n128_i8[8] =
                vqtbl2_s8(v34, COERCE_AS(int8x8_t, 0x171615140B0A0908LL));
            LANES128(v7).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v34, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v14).n128_u64[0] =
                __PAIR64__(LANES128(v8).n128_u32[1], LANES128(v15).n128_u32[0]);
            LANES128(v7).n128_u32[3] =
                LANES64_OF(
                    vqtbl2_s8(v34, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                    .n64_u32[1];
            LANES128(v10).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v34, COERCE_AS(int8x8_t, 0x171615141B1A1918LL)))
                    .n64_u64[0];
            LANES128(v34.val[0]).n128_u32[0] =
                LANES64_OF(
                    vqtbl2_s8(v34, COERCE_AS(int8x8_t, 0x302010013121110LL)))
                    .n64_u32[0];
            v34.val[1] = vdupq_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v15).n128_u64[0]), 1);
            LANES128(v8).n128_u32[1] = LANES128(v15).n128_u32[1];
            LANES128(v10).n128_u64[1] = __PAIR64__(
                LANES128(v15).n128_u32[3], LANES128(v34.val[0]).n128_u32[0]);
            v34.val[0] = vdupq_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v15).n128_u64[0]), 0);
            LANES128(v7).n128_u32[2] = LANES128(v15).n128_u32[2];
            v17 = vcgeq_f32(v34.val[1], v34.val[0]);
            v34.val[0] = vbslq_s8(v17, v34.val[1], v34.val[0]);
            v18 = vbslq_s8(v17, v8, v14);
            v19 = vcgeq_f32(v16, v34.val[0]);
            v20 = vbslq_s8(vcgeq_f32(vdupq_laneq_s32(v15, 3),
                                     vbslq_s8(v19, v16, v34.val[0])),
                           v10, vbslq_s8(v19, v7, v18));
            v21 = vmulq_f32(v20, v20);
            LANES128(v21).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v21).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v21).n128_u64[1] = LANES128(v21).n128_u64[0];
            v22 = vrsqrteq_f32(v21);
            v23 = vmulq_f32(v22, vrsqrtsq_f32(v22, vmulq_f32(v21, v22)));
            v6[-1] = vbicq_s8(
                vmulq_f32(
                    vmulq_f32(v23, vrsqrtsq_f32(v23, vmulq_f32(v21, v23))),
                    v20),
                vceqzq_f32(v21));
            v1 = *(unsigned __int16*)(result + 10);
          }
        }
      }
      ++v4;
      v6 += 5;
    } while (v4 < v1);
  }
  return result;
}

#pragma GCC visibility pop
