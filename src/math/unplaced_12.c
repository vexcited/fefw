#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

double GameRoutine_1a09f70(double);
double GameRoutine_1a09f80(double);
extern _UNKNOWN* GameData_212c2f0;
void math_61c4e0(float a1);
__attribute__((swiftcall)) void math_622ac0(PSEUDO_X8 x8_, float32x2_t* a1);

void math_61c4e0(float a1)
{
  float v1;
  double v2;
  float v3;
  double v4;

  if (a1 >= 0x1.0000000000000p-1f) {
    v3 = (float)(a1 + -0x1.0000000000000p-1f) +
         (float)(a1 + -0x1.0000000000000p-1f);
    if (v3 != 0x0.0p+0f && v3 != 0x1.0000000000000p+0f) {
      v4 = v3 * 0x1.921fb54442d18p+0;
      GameRoutine_1a09f70(v4);
      GameRoutine_1a09f80(v4);
    }
  }
  else {
    v1 = a1 + a1;
    if ((float)(a1 + a1) != 0x0.0p+0f && v1 != 0x1.0000000000000p+0f) {
      v2 = v1 * 0x1.921fb54442d18p+0;
      GameRoutine_1a09f70(v2);
      GameRoutine_1a09f80(v2);
    }
  }
}

__attribute__((swiftcall)) void math_622ac0(PSEUDO_X8 x8_, float32x2_t* a1)
{
  _OWORD* a2 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  bool v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
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
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  bool v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  __int128 v137;
  unsigned int v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float result;

  v2 = *(float32x4_t*)LANES64(*(a1)).n64_u64;
  {
    __typeof__(v3) z_ = (__typeof__(v3)){0};
    LODWORD(z_) = DWORDn(LANES64(*(a1)).n64_u64[0],
                         sizeof(LANES64(*(a1)).n64_u64[0]) / 4 - 1);
    v3 = z_;
  }
  {
    __typeof__(v4) z_ = (__typeof__(v4)){0};
    LODWORD(z_) = LANES64(a1[1]).n64_u64[0];
    v4 = z_;
  }
  v5 = LANES128_OF(vmulq_f32(v2, v2)).n128_f32[0];
  {
    __typeof__(v6) z_ = (__typeof__(v6)){0};
    LODWORD(z_) = DWORDn(*(_OWORD*)LANES64(*(a1)).n64_u64,
                         sizeof(*(_OWORD*)LANES64(*(a1)).n64_u64) / 4 - 1);
    v6 = z_;
  }
  v7 = vmuls_lane_f32(v3, COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]), 1);
  v8 = vmuls_lane_f32(v4, *(float32x4_t*)LANES64(*(a1)).n64_u64, 3);
  v9 = vmuls_lane_f32(v4, *(float32x4_t*)LANES64(*(a1)).n64_u64, 2);
  v10 = vmuls_lane_f32(v6, *(float32x4_t*)LANES64(*(a1)).n64_u64, 3);
  v11 = v10 + (float)(v9 + (float)(v5 + v7));
  v12 = (float)(v8 +
                (float)(LANES128(v2).n128_f32[0] * LANES128(v2).n128_f32[1])) +
        (float)(v8 +
                (float)(LANES128(v2).n128_f32[0] * LANES128(v2).n128_f32[1]));
  if ((float)(v12 - v11) >= -0x1.0000000000000p-23f) {
    if (v6 == 0x0.0p+0f) {
      v30 = 0x0.0p+0f;
      if (LANES128(v2).n128_f32[0] == 0x0.0p+0f) {
        goto LABEL_76;
      }
    }
    if (v6 >= 0x0.0p+0f) {
      if (LANES128(v2).n128_f32[0] >= 0x0.0p+0f) {
        v31 = *(float*)GameData_212c2f0;
        v32 = -*((float*)GameData_212c2f0 + 1);
        v33 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        v34 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                         4);
        v35 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        v36 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                         4);
        v37 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                        8);
        v38 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                         12);
        if (v6 >= LANES128(v2).n128_f32[0]) {
          v135 = LANES128(v2).n128_f32[0] / v6;
          v30 =
              v135 *
              (float)((float)((float)((float)((float)(v37 +
                                                      (float)((float)((float)((
                                                                                  float)(v35 + (float)((
                                                                                                           float)((
                                                                                                                      float)((
                                                                                                                                 float)(v33 + (float)((
                                                                                                                                                          float)((float)(v31 * (float)(v135 * v135)) - *(
                                                                                                                                                                                                           (float*)GameData_212c2f0 + 1)) *
                                                                                                                                                      (float)(v135 *
                                                                                                                                                              v135))) *
                                                                                                                             (float)(v135 *
                                                                                                                                     v135)) -
                                                                                                                  *(float*)((char*)((
                                                                                                                                _UNKNOWN**)0x8LL) +
                                                                                                                            (_QWORD)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            4)) *
                                                                                                       (float)(v135 *
                                                                                                               v135))) *
                                                                              (float)(v135 *
                                                                                      v135)) -
                                                                      *(float*)((char*)((
                                                                                    __int128*)0x10LL) +
                                                                                (_QWORD)
                                                                                    GameData_212c2f0 +
                                                                                4)) *
                                                              (float)(v135 *
                                                                      v135))) *
                                              (float)(v135 * v135)) -
                                      *(float*)((char*)((__int128*)0x10LL) +
                                                (_QWORD)GameData_212c2f0 +
                                                12)) *
                              (float)(v135 * v135)) +
                      0x1.0000000000000p+0f);
          goto LABEL_76;
        }
        v39 = v6 / LANES128(v2).n128_f32[0];
        v40 = 0x1.921fb60000000p+0f;
        goto LABEL_46;
      }
      v59 = -LANES128(v2).n128_f32[0];
      v60 = *(float*)GameData_212c2f0;
      v61 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
      v62 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
      v63 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
      if (v6 >= (float)-LANES128(v2).n128_f32[0]) {
        v118 = v59 / v6;
        v30 = -(
            float)(v118 *
                   (float)((float)((float)((float)((float)(v63 +
                                                           (float)((float)((float)((float)(v62 +
                                                                                           (float)((float)((
                                                                                                               float)((
                                                                                                                          float)(v61 + (float)((float)((float)(v60 * (float)(v118 * v118)) - *((float*)GameData_212c2f0 + 1)) * (float)(v118 *
                                                                                                                                                                                                                                        v118))) *
                                                                                                                      (float)(v118 *
                                                                                                                              v118)) -
                                                                                                           *(float*)((char*)((
                                                                                                                         _UNKNOWN**)0x8LL) +
                                                                                                                     (_QWORD)
                                                                                                                         GameData_212c2f0 +
                                                                                                                     4)) *
                                                                                                   (float)(v118 *
                                                                                                           v118))) *
                                                                                   (float)(v118 *
                                                                                           v118)) -
                                                                           *(float*)((char*)((
                                                                                         __int128*)0x10LL) +
                                                                                     (_QWORD)
                                                                                         GameData_212c2f0 +
                                                                                     4)) *
                                                                   (float)(v118 *
                                                                           v118))) *
                                                   (float)(v118 * v118)) -
                                           *(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c2f0 +
                                                     12)) *
                                   (float)(v118 * v118)) +
                           0x1.0000000000000p+0f));
      LABEL_76:
        v136 = v30 + v30;
        {
          __typeof__(v137) z_ = (__typeof__(v137)){0};
          LODWORD(z_) = 0;
          v137 = z_;
        }
        v138 = 1070141403;
      LABEL_84:
        *((float*)&v137 + 1) = v136;
        *((_QWORD*)&v137 + 1) = v138;
        *a2 = v137;
        goto LABEL_90;
      }
      v64 = v6 / v59;
      v65 = -0x1.921fb60000000p+0f;
      v66 =
          (float)((float)((float)((float)(v63 +
                                          (float)((float)((float)((float)(v62 +
                                                                          (float)((float)((float)((float)(v61 +
                                                                                                          (float)((float)((float)(v60 *
                                                                                                                                  (float)(v64 *
                                                                                                                                          v64)) -
                                                                                                                          *((float*)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            1)) *
                                                                                                                  (float)(v64 *
                                                                                                                          v64))) *
                                                                                                  (float)(v64 *
                                                                                                          v64)) -
                                                                                          *(float*)((char*)((
                                                                                                        _UNKNOWN**)0x8LL) +
                                                                                                    (_QWORD)
                                                                                                        GameData_212c2f0 +
                                                                                                    4)) *
                                                                                  (float)(v64 *
                                                                                          v64))) *
                                                                  (float)(v64 *
                                                                          v64)) -
                                                          *(float*)((char*)((
                                                                        __int128*)0x10LL) +
                                                                    (_QWORD)
                                                                        GameData_212c2f0 +
                                                                    4)) *
                                                  (float)(v64 * v64))) *
                                  (float)(v64 * v64)) -
                          *(float*)((char*)((__int128*)0x10LL) +
                                    (_QWORD)GameData_212c2f0 + 12)) *
                  (float)(v64 * v64)) +
          0x1.0000000000000p+0f;
    }
    else {
      if (LANES128(v2).n128_f32[0] >= 0x0.0p+0f) {
        v76 = -v6;
        v23 = !(LANES128(v2).n128_f32[0] <= (float)-v6);
        v77 = *(float*)GameData_212c2f0;
        v78 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        v79 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        v80 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                        8);
        if (!v23) {
          v129 = LANES128(v2).n128_f32[0] / v76;
          v40 = 0x1.921fb60000000p+1f;
          v130 =
              v129 *
              (float)((float)((float)((float)((float)(v80 +
                                                      (float)((float)((float)((
                                                                                  float)(v79 + (float)((
                                                                                                           float)((
                                                                                                                      float)((
                                                                                                                                 float)(v78 + (float)((
                                                                                                                                                          float)((float)(v77 * (float)(v129 * v129)) - *(
                                                                                                                                                                                                           (float*)GameData_212c2f0 + 1)) *
                                                                                                                                                      (float)(v129 *
                                                                                                                                                              v129))) *
                                                                                                                             (float)(v129 *
                                                                                                                                     v129)) -
                                                                                                                  *(float*)((char*)((
                                                                                                                                _UNKNOWN**)0x8LL) +
                                                                                                                            (_QWORD)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            4)) *
                                                                                                       (float)(v129 *
                                                                                                               v129))) *
                                                                              (float)(v129 *
                                                                                      v129)) -
                                                                      *(float*)((char*)((
                                                                                    __int128*)0x10LL) +
                                                                                (_QWORD)
                                                                                    GameData_212c2f0 +
                                                                                4)) *
                                                              (float)(v129 *
                                                                      v129))) *
                                              (float)(v129 * v129)) -
                                      *(float*)((char*)((__int128*)0x10LL) +
                                                (_QWORD)GameData_212c2f0 +
                                                12)) *
                              (float)(v129 * v129)) +
                      0x1.0000000000000p+0f);
        LABEL_69:
          v30 = v40 - v130;
          goto LABEL_76;
        }
        v81 = v76 / LANES128(v2).n128_f32[0];
        v65 = 0x1.921fb60000000p+0f;
        v82 =
            v81 * (float)((
                              float)((
                                         float)((float)((float)(v80 + (float)((float)((float)((float)(v79 + (float)((float)((float)((float)(v78 + (float)((float)((float)(v77 * (float)(v81 * v81)) - *((float*)GameData_212c2f0 + 1)) * (float)(v81 * v81))) * (float)(v81 * v81)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) * (float)(v81 *
                                                                                                                                                                                                                                                                                                                                                                      v81))) *
                                                                                              (float)(v81 *
                                                                                                      v81)) -
                                                                                      *(float*)((char*)((
                                                                                                    __int128*)0x10LL) +
                                                                                                (_QWORD)
                                                                                                    GameData_212c2f0 +
                                                                                                4)) *
                                                                              (float)(v81 *
                                                                                      v81))) *
                                                        (float)(v81 * v81)) -
                                                *(float*)((char*)((
                                                              __int128*)0x10LL) +
                                                          (_QWORD)
                                                              GameData_212c2f0 +
                                                          12)) *
                                     (float)(v81 * v81)) +
                          0x1.0000000000000p+0f);
        goto LABEL_53;
      }
      v31 = *(float*)GameData_212c2f0;
      v32 = -*((float*)GameData_212c2f0 + 1);
      v33 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
      v34 =
          -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4);
      v35 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
      v36 =
          -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4);
      v37 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
      v38 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                       12);
      if (!(v6 <= LANES128(v2).n128_f32[0])) {
        v39 = v6 / LANES128(v2).n128_f32[0];
        v40 = -0x1.921fb60000000p+0f;
      LABEL_46:
        v130 =
            v39 *
            (float)((float)((float)(v38 +
                                    (float)((float)(v37 +
                                                    (float)((float)(v36 +
                                                                    (float)((float)(v35 +
                                                                                    (float)((float)(v34 +
                                                                                                    (float)((float)(v33 +
                                                                                                                    (float)((float)(v32 +
                                                                                                                                    (float)(v31 *
                                                                                                                                            (float)(v39 *
                                                                                                                                                    v39))) *
                                                                                                                            (float)(v39 *
                                                                                                                                    v39))) *
                                                                                                            (float)(v39 *
                                                                                                                    v39))) *
                                                                                            (float)(v39 *
                                                                                                    v39))) *
                                                                            (float)(v39 *
                                                                                    v39))) *
                                                            (float)(v39 *
                                                                    v39))) *
                                            (float)(v39 * v39))) *
                            (float)(v39 * v39)) +
                    0x1.0000000000000p+0f);
        goto LABEL_69;
      }
      v64 = LANES128(v2).n128_f32[0] / v6;
      v65 = -0x1.921fb60000000p+1f;
      v66 =
          (float)((float)((float)((float)(v37 +
                                          (float)((float)((float)((float)(v35 +
                                                                          (float)((float)((float)((float)(v33 +
                                                                                                          (float)((float)((float)(v31 *
                                                                                                                                  (float)(v64 *
                                                                                                                                          v64)) -
                                                                                                                          *((float*)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            1)) *
                                                                                                                  (float)(v64 *
                                                                                                                          v64))) *
                                                                                                  (float)(v64 *
                                                                                                          v64)) -
                                                                                          *(float*)((char*)((
                                                                                                        _UNKNOWN**)0x8LL) +
                                                                                                    (_QWORD)
                                                                                                        GameData_212c2f0 +
                                                                                                    4)) *
                                                                                  (float)(v64 *
                                                                                          v64))) *
                                                                  (float)(v64 *
                                                                          v64)) -
                                                          *(float*)((char*)((
                                                                        __int128*)0x10LL) +
                                                                    (_QWORD)
                                                                        GameData_212c2f0 +
                                                                    4)) *
                                                  (float)(v64 * v64))) *
                                  (float)(v64 * v64)) -
                          *(float*)((char*)((__int128*)0x10LL) +
                                    (_QWORD)GameData_212c2f0 + 12)) *
                  (float)(v64 * v64)) +
          0x1.0000000000000p+0f;
    }
    v82 = v64 * v66;
  LABEL_53:
    v30 = v82 + v65;
    goto LABEL_76;
  }
  if ((float)(v12 + v11) <= 0x1.0000000000000p-23f) {
    if (v6 == 0x0.0p+0f) {
      v41 = 0x0.0p+0f;
      if (LANES128(v2).n128_f32[0] == 0x0.0p+0f) {
        goto LABEL_83;
      }
    }
    if (v6 >= 0x0.0p+0f) {
      if (LANES128(v2).n128_f32[0] >= 0x0.0p+0f) {
        v42 = *(float*)GameData_212c2f0;
        v43 = -*((float*)GameData_212c2f0 + 1);
        v44 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        v45 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                         4);
        v46 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        v47 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                         4);
        v48 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                        8);
        v49 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                         12);
        if (v6 >= LANES128(v2).n128_f32[0]) {
          v146 = LANES128(v2).n128_f32[0] / v6;
          v41 =
              v146 *
              (float)((float)((float)((float)((float)(v48 +
                                                      (float)((float)((float)((
                                                                                  float)(v46 + (float)((
                                                                                                           float)((
                                                                                                                      float)((
                                                                                                                                 float)(v44 + (float)((
                                                                                                                                                          float)((float)(v42 * (float)(v146 * v146)) - *(
                                                                                                                                                                                                           (float*)GameData_212c2f0 + 1)) *
                                                                                                                                                      (float)(v146 *
                                                                                                                                                              v146))) *
                                                                                                                             (float)(v146 *
                                                                                                                                     v146)) -
                                                                                                                  *(float*)((char*)((
                                                                                                                                _UNKNOWN**)0x8LL) +
                                                                                                                            (_QWORD)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            4)) *
                                                                                                       (float)(v146 *
                                                                                                               v146))) *
                                                                              (float)(v146 *
                                                                                      v146)) -
                                                                      *(float*)((char*)((
                                                                                    __int128*)0x10LL) +
                                                                                (_QWORD)
                                                                                    GameData_212c2f0 +
                                                                                4)) *
                                                              (float)(v146 *
                                                                      v146))) *
                                              (float)(v146 * v146)) -
                                      *(float*)((char*)((__int128*)0x10LL) +
                                                (_QWORD)GameData_212c2f0 +
                                                12)) *
                              (float)(v146 * v146)) +
                      0x1.0000000000000p+0f);
          goto LABEL_83;
        }
        v50 = v6 / LANES128(v2).n128_f32[0];
        v51 = 0x1.921fb60000000p+0f;
        goto LABEL_72;
      }
      v83 = -LANES128(v2).n128_f32[0];
      v84 = *(float*)GameData_212c2f0;
      v85 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
      v86 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
      v87 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
      if (v6 >= (float)-LANES128(v2).n128_f32[0]) {
        v139 = v83 / v6;
        v41 = -(
            float)(v139 *
                   (float)((float)((float)((float)((float)(v87 +
                                                           (float)((float)((float)((float)(v86 +
                                                                                           (float)((float)((
                                                                                                               float)((
                                                                                                                          float)(v85 + (float)((float)((float)(v84 * (float)(v139 * v139)) - *((float*)GameData_212c2f0 + 1)) * (float)(v139 *
                                                                                                                                                                                                                                        v139))) *
                                                                                                                      (float)(v139 *
                                                                                                                              v139)) -
                                                                                                           *(float*)((char*)((
                                                                                                                         _UNKNOWN**)0x8LL) +
                                                                                                                     (_QWORD)
                                                                                                                         GameData_212c2f0 +
                                                                                                                     4)) *
                                                                                                   (float)(v139 *
                                                                                                           v139))) *
                                                                                   (float)(v139 *
                                                                                           v139)) -
                                                                           *(float*)((char*)((
                                                                                         __int128*)0x10LL) +
                                                                                     (_QWORD)
                                                                                         GameData_212c2f0 +
                                                                                     4)) *
                                                                   (float)(v139 *
                                                                           v139))) *
                                                   (float)(v139 * v139)) -
                                           *(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c2f0 +
                                                     12)) *
                                   (float)(v139 * v139)) +
                           0x1.0000000000000p+0f));
      LABEL_83:
        v138 = -1077342245;
        v136 = v41 * -0x1.0000000000000p+1f;
        {
          __typeof__(v137) z_ = (__typeof__(v137)){0};
          LODWORD(z_) = 0;
          v137 = z_;
        }
        goto LABEL_84;
      }
      v88 = v6 / v83;
      v89 = -0x1.921fb60000000p+0f;
      v90 =
          (float)((float)((float)((float)(v87 +
                                          (float)((float)((float)((float)(v86 +
                                                                          (float)((float)((float)((float)(v85 +
                                                                                                          (float)((float)((float)(v84 *
                                                                                                                                  (float)(v88 *
                                                                                                                                          v88)) -
                                                                                                                          *((float*)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            1)) *
                                                                                                                  (float)(v88 *
                                                                                                                          v88))) *
                                                                                                  (float)(v88 *
                                                                                                          v88)) -
                                                                                          *(float*)((char*)((
                                                                                                        _UNKNOWN**)0x8LL) +
                                                                                                    (_QWORD)
                                                                                                        GameData_212c2f0 +
                                                                                                    4)) *
                                                                                  (float)(v88 *
                                                                                          v88))) *
                                                                  (float)(v88 *
                                                                          v88)) -
                                                          *(float*)((char*)((
                                                                        __int128*)0x10LL) +
                                                                    (_QWORD)
                                                                        GameData_212c2f0 +
                                                                    4)) *
                                                  (float)(v88 * v88))) *
                                  (float)(v88 * v88)) -
                          *(float*)((char*)((__int128*)0x10LL) +
                                    (_QWORD)GameData_212c2f0 + 12)) *
                  (float)(v88 * v88)) +
          0x1.0000000000000p+0f;
    }
    else {
      if (LANES128(v2).n128_f32[0] >= 0x0.0p+0f) {
        v105 = -v6;
        v23 = !(LANES128(v2).n128_f32[0] <= (float)-v6);
        v106 = *(float*)GameData_212c2f0;
        v107 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        v108 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        v109 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                         8);
        if (!v23) {
          v141 = LANES128(v2).n128_f32[0] / v105;
          v51 = 0x1.921fb60000000p+1f;
          v142 = v141 *
                 (float)((
                             float)((float)((float)((float)(v109 +
                                                            (float)((float)((float)((
                                                                                        float)(v108 +
                                                                                               (float)((
                                                                                                           float)((
                                                                                                                      float)((
                                                                                                                                 float)(v107 + (float)((float)((float)(v106 * (float)(v141 * v141)) - *((float*)GameData_212c2f0 + 1)) *
                                                                                                                                                       (float)(v141 *
                                                                                                                                                               v141))) *
                                                                                                                             (float)(v141 *
                                                                                                                                     v141)) -
                                                                                                                  *(float*)((char*)((
                                                                                                                                _UNKNOWN**)0x8LL) +
                                                                                                                            (_QWORD)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            4)) *
                                                                                                       (float)(v141 *
                                                                                                               v141))) *
                                                                                    (float)(v141 *
                                                                                            v141)) -
                                                                            *(float*)((char*)((
                                                                                          __int128*)0x10LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c2f0 +
                                                                                      4)) *
                                                                    (float)(v141 *
                                                                            v141))) *
                                                    (float)(v141 * v141)) -
                                            *(float*)((char*)((
                                                          __int128*)0x10LL) +
                                                      (_QWORD)GameData_212c2f0 +
                                                      12)) *
                                    (float)(v141 * v141)) +
                         0x1.0000000000000p+0f);
        LABEL_80:
          v41 = v51 - v142;
          goto LABEL_83;
        }
        v110 = v105 / LANES128(v2).n128_f32[0];
        v89 = 0x1.921fb60000000p+0f;
        v111 = v110 *
               (float)((float)((float)((float)((float)(v109 +
                                                       (float)((float)((float)((
                                                                                   float)(v108 + (float)((
                                                                                                             float)((
                                                                                                                        float)((
                                                                                                                                   float)(v107 + (float)((
                                                                                                                                                             float)((float)(v106 * (float)(v110 * v110)) - *((float*)GameData_212c2f0 + 1)) *
                                                                                                                                                         (float)(v110 *
                                                                                                                                                                 v110))) *
                                                                                                                               (float)(v110 *
                                                                                                                                       v110)) -
                                                                                                                    *(float*)((char*)((
                                                                                                                                  _UNKNOWN**)0x8LL) +
                                                                                                                              (_QWORD)
                                                                                                                                  GameData_212c2f0 +
                                                                                                                              4)) *
                                                                                                         (float)(v110 *
                                                                                                                 v110))) *
                                                                               (float)(v110 *
                                                                                       v110)) -
                                                                       *(float*)((char*)((
                                                                                     __int128*)0x10LL) +
                                                                                 (_QWORD)
                                                                                     GameData_212c2f0 +
                                                                                 4)) *
                                                               (float)(v110 *
                                                                       v110))) *
                                               (float)(v110 * v110)) -
                                       *(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c2f0 +
                                                 12)) *
                               (float)(v110 * v110)) +
                       0x1.0000000000000p+0f);
        goto LABEL_79;
      }
      v42 = *(float*)GameData_212c2f0;
      v43 = -*((float*)GameData_212c2f0 + 1);
      v44 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
      v45 =
          -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4);
      v46 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
      v47 =
          -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4);
      v48 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
      v49 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                       12);
      if (!(v6 <= LANES128(v2).n128_f32[0])) {
        v50 = v6 / LANES128(v2).n128_f32[0];
        v51 = -0x1.921fb60000000p+0f;
      LABEL_72:
        v142 =
            v50 *
            (float)((float)((float)(v49 +
                                    (float)((float)(v48 +
                                                    (float)((float)(v47 +
                                                                    (float)((float)(v46 +
                                                                                    (float)((float)(v45 +
                                                                                                    (float)((float)(v44 +
                                                                                                                    (float)((float)(v43 +
                                                                                                                                    (float)(v42 *
                                                                                                                                            (float)(v50 *
                                                                                                                                                    v50))) *
                                                                                                                            (float)(v50 *
                                                                                                                                    v50))) *
                                                                                                            (float)(v50 *
                                                                                                                    v50))) *
                                                                                            (float)(v50 *
                                                                                                    v50))) *
                                                                            (float)(v50 *
                                                                                    v50))) *
                                                            (float)(v50 *
                                                                    v50))) *
                                            (float)(v50 * v50))) *
                            (float)(v50 * v50)) +
                    0x1.0000000000000p+0f);
        goto LABEL_80;
      }
      v88 = LANES128(v2).n128_f32[0] / v6;
      v89 = -0x1.921fb60000000p+1f;
      v90 =
          (float)((float)((float)((float)(v48 +
                                          (float)((float)((float)((float)(v46 +
                                                                          (float)((float)((float)((float)(v44 +
                                                                                                          (float)((float)((float)(v42 *
                                                                                                                                  (float)(v88 *
                                                                                                                                          v88)) -
                                                                                                                          *((float*)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            1)) *
                                                                                                                  (float)(v88 *
                                                                                                                          v88))) *
                                                                                                  (float)(v88 *
                                                                                                          v88)) -
                                                                                          *(float*)((char*)((
                                                                                                        _UNKNOWN**)0x8LL) +
                                                                                                    (_QWORD)
                                                                                                        GameData_212c2f0 +
                                                                                                    4)) *
                                                                                  (float)(v88 *
                                                                                          v88))) *
                                                                  (float)(v88 *
                                                                          v88)) -
                                                          *(float*)((char*)((
                                                                        __int128*)0x10LL) +
                                                                    (_QWORD)
                                                                        GameData_212c2f0 +
                                                                    4)) *
                                                  (float)(v88 * v88))) *
                                  (float)(v88 * v88)) -
                          *(float*)((char*)((__int128*)0x10LL) +
                                    (_QWORD)GameData_212c2f0 + 12)) *
                  (float)(v88 * v88)) +
          0x1.0000000000000p+0f;
    }
    v111 = v88 * v90;
  LABEL_79:
    v41 = v111 + v89;
    goto LABEL_83;
  }
  v13 = v3 + v3;
  v14 = LANES128(v2).n128_f32[0] + LANES128(v2).n128_f32[0];
  v15 = -v4;
  v16 = (float)(v14 * v6) - (float)(PSEUDO_UNFUSED(v4 * v13));
  v17 = v10 + (float)((float)(v7 - v5) - v9);
  if (v16 == 0x0.0p+0f) {
    v18 = 0x0.0p+0f;
    if (v17 == 0x0.0p+0f) {
      goto LABEL_5;
    }
  }
  if (!(v17 >= 0x0.0p+0f)) {
    if (!(v16 >= 0x0.0p+0f)) {
      v52 = v17 / v16;
      v23 = !(v17 <= v16);
      v53 = v16 / v17;
      v54 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
      v55 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
      v56 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
      v57 = -0x1.921fb60000000p+0f -
            (float)(PSEUDO_UNFUSED(
                v52 *
                (float)((float)((float)((float)((float)(v56 +
                                                        (float)((float)((float)((float)(v55 + (float)((
                                                                                                          float)((float)((float)(v54 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v52 * v52)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                   1)) *
                                                                                                                                               (float)(v52 *
                                                                                                                                                       v52))) *
                                                                                                                         (float)(v52 *
                                                                                                                                 v52)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v52 *
                                                                                                              v52))) *
                                                                                (float)(v52 *
                                                                                        v52)) -
                                                                        *(float*)((char*)((
                                                                                      __int128*)0x10LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                  4)) *
                                                                (float)(v52 *
                                                                        v52))) *
                                                (float)(v52 * v52)) -
                                        *(float*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  12)) *
                                (float)(v52 * v52)) +
                        0x1.0000000000000p+0f)));
      v58 = (float)(PSEUDO_UNFUSED(
                v53 *
                (float)((float)((float)((float)((float)(v56 +
                                                        (float)((float)((float)((float)(v55 + (float)((
                                                                                                          float)((float)((float)(v54 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v53 * v53)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                   1)) *
                                                                                                                                               (float)(v53 *
                                                                                                                                                       v53))) *
                                                                                                                         (float)(v53 *
                                                                                                                                 v53)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v53 *
                                                                                                              v53))) *
                                                                                (float)(v53 *
                                                                                        v53)) -
                                                                        *(float*)((char*)((
                                                                                      __int128*)0x10LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                  4)) *
                                                                (float)(v53 *
                                                                        v53))) *
                                                (float)(v53 * v53)) -
                                        *(float*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  12)) *
                                (float)(v53 * v53)) +
                        0x1.0000000000000p+0f))) +
            -0x1.921fb60000000p+1f;
      if (v23) {
        v18 = v57;
      }
      else {
        v18 = v58;
      }
      goto LABEL_5;
    }
    v112 = -v17;
    v23 = !(v16 <= (float)-v17);
    v113 = *(float*)GameData_212c2f0;
    v114 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v115 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v116 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    if (!v23) {
      v143 = v16 / v112;
      v144 = 0x1.921fb60000000p+1f;
      v145 =
          (float)((float)((float)((float)(v116 +
                                          (float)((float)((float)((float)(v115 +
                                                                          (float)((float)((float)((float)(v114 +
                                                                                                          (float)((float)((float)(v113 *
                                                                                                                                  (float)(v143 *
                                                                                                                                          v143)) -
                                                                                                                          *((float*)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            1)) *
                                                                                                                  (float)(v143 *
                                                                                                                          v143))) *
                                                                                                  (float)(v143 *
                                                                                                          v143)) -
                                                                                          *(float*)((char*)((
                                                                                                        _UNKNOWN**)0x8LL) +
                                                                                                    (_QWORD)
                                                                                                        GameData_212c2f0 +
                                                                                                    4)) *
                                                                                  (float)(v143 *
                                                                                          v143))) *
                                                                  (float)(v143 *
                                                                          v143)) -
                                                          *(float*)((char*)((
                                                                        __int128*)0x10LL) +
                                                                    (_QWORD)
                                                                        GameData_212c2f0 +
                                                                    4)) *
                                                  (float)(v143 * v143))) *
                                  (float)(v143 * v143)) -
                          *(float*)((char*)((__int128*)0x10LL) +
                                    (_QWORD)GameData_212c2f0 + 12)) *
                  (float)(v143 * v143)) +
          0x1.0000000000000p+0f;
    LABEL_81:
      v18 = v144 - (float)(PSEUDO_UNFUSED(v143 * v145));
      goto LABEL_5;
    }
    v117 = v112 / v16;
    v97 = 0x1.921fb60000000p+0f;
    v98 =
        v117 *
        (float)((float)((float)((float)((float)(v116 + (float)((float)((float)((float)(v115 + (float)((
                                                                                                          float)((
                                                                                                                     float)((
                                                                                                                                float)(v114 + (float)((
                                                                                                                                                          float)((float)(v113 * (float)(v117 * v117)) - *(
                                                                                                                                                                                                            (float*)GameData_212c2f0 + 1)) *
                                                                                                                                                      (float)(v117 *
                                                                                                                                                              v117))) *
                                                                                                                            (float)(v117 *
                                                                                                                                    v117)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v117 *
                                                                                                              v117))) *
                                                                               (float)(v117 *
                                                                                       v117)) -
                                                                       *(float*)((char*)((
                                                                                     __int128*)0x10LL) +
                                                                                 (_QWORD)
                                                                                     GameData_212c2f0 +
                                                                                 4)) *
                                                               (float)(v117 *
                                                                       v117))) *
                                        (float)(v117 * v117)) -
                                *(float*)((char*)((__int128*)0x10LL) +
                                          (_QWORD)GameData_212c2f0 + 12)) *
                        (float)(v117 * v117)) +
                0x1.0000000000000p+0f);
  LABEL_60:
    v18 = v98 + v97;
    goto LABEL_5;
  }
  if (!(v16 >= 0x0.0p+0f)) {
    v91 = -v16;
    v69 = v17 < (float)-v16;
    v92 = *(float*)GameData_212c2f0;
    v93 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v94 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v95 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    if (!v69) {
      v140 = v91 / v17;
      v18 =
          -(float)(v140 *
                   (float)((float)((float)((float)((float)(v95 +
                                                           (float)((float)((float)((float)(v94 +
                                                                                           (float)((float)((
                                                                                                               float)((
                                                                                                                          float)(v93 + (float)((float)((float)(v92 * (float)(v140 * v140)) - *((float*)GameData_212c2f0 + 1)) * (float)(v140 *
                                                                                                                                                                                                                                        v140))) *
                                                                                                                      (float)(v140 *
                                                                                                                              v140)) -
                                                                                                           *(float*)((char*)((
                                                                                                                         _UNKNOWN**)0x8LL) +
                                                                                                                     (_QWORD)
                                                                                                                         GameData_212c2f0 +
                                                                                                                     4)) *
                                                                                                   (float)(v140 *
                                                                                                           v140))) *
                                                                                   (float)(v140 *
                                                                                           v140)) -
                                                                           *(float*)((char*)((
                                                                                         __int128*)0x10LL) +
                                                                                     (_QWORD)
                                                                                         GameData_212c2f0 +
                                                                                     4)) *
                                                                   (float)(v140 *
                                                                           v140))) *
                                                   (float)(v140 * v140)) -
                                           *(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c2f0 +
                                                     12)) *
                                   (float)(v140 * v140)) +
                           0x1.0000000000000p+0f));
      goto LABEL_5;
    }
    v96 = v17 / v91;
    v97 = -0x1.921fb60000000p+0f;
    v98 = v96 *
          (float)((float)((float)((float)((float)(v95 +
                                                  (float)((float)((float)((float)(v94 +
                                                                                  (float)((
                                                                                              float)((
                                                                                                         float)((float)(v93 + (float)((float)((float)(v92 * (float)(v96 * v96)) - *((float*)GameData_212c2f0 + 1)) * (float)(v96 * v96))) * (float)(v96 *
                                                                                                                                                                                                                                                    v96)) -
                                                                                                     *(float*)((char*)((
                                                                                                                   _UNKNOWN**)0x8LL) +
                                                                                                               (_QWORD)
                                                                                                                   GameData_212c2f0 +
                                                                                                               4)) *
                                                                                          (float)(v96 *
                                                                                                  v96))) *
                                                                          (float)(v96 *
                                                                                  v96)) -
                                                                  *(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            4)) *
                                                          (float)(v96 * v96))) *
                                          (float)(v96 * v96)) -
                                  *(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c2f0 + 12)) *
                          (float)(v96 * v96)) +
                  0x1.0000000000000p+0f);
    goto LABEL_60;
  }
  v131 = *(float*)GameData_212c2f0;
  v132 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
  v133 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
  v134 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
  if (!(v17 >= v16)) {
    v143 = v17 / v16;
    v144 = 0x1.921fb60000000p+0f;
    v145 =
        (float)((float)((float)((float)(v134 +
                                        (float)((float)((float)((float)(v133 +
                                                                        (float)((float)((float)((float)(v132 +
                                                                                                        (float)((float)((float)(v131 *
                                                                                                                                (float)(v143 *
                                                                                                                                        v143)) -
                                                                                                                        *((float*)
                                                                                                                              GameData_212c2f0 +
                                                                                                                          1)) *
                                                                                                                (float)(v143 *
                                                                                                                        v143))) *
                                                                                                (float)(v143 *
                                                                                                        v143)) -
                                                                                        *(float*)((char*)((
                                                                                                      _UNKNOWN**)0x8LL) +
                                                                                                  (_QWORD)
                                                                                                      GameData_212c2f0 +
                                                                                                  4)) *
                                                                                (float)(v143 *
                                                                                        v143))) *
                                                                (float)(v143 *
                                                                        v143)) -
                                                        *(float*)((char*)((
                                                                      __int128*)0x10LL) +
                                                                  (_QWORD)
                                                                      GameData_212c2f0 +
                                                                  4)) *
                                                (float)(v143 * v143))) *
                                (float)(v143 * v143)) -
                        *(float*)((char*)((__int128*)0x10LL) +
                                  (_QWORD)GameData_212c2f0 + 12)) *
                (float)(v143 * v143)) +
        0x1.0000000000000p+0f;
    goto LABEL_81;
  }
  v147 = v16 / v17;
  v18 = v147 *
        (float)((float)((float)((float)((float)(v134 + (float)((float)((float)((float)(v133 + (float)((
                                                                                                          float)((
                                                                                                                     float)((
                                                                                                                                float)(v132 + (float)((
                                                                                                                                                          float)((float)(v131 * (float)(v147 * v147)) - *(
                                                                                                                                                                                                            (float*)GameData_212c2f0 + 1)) *
                                                                                                                                                      (float)(v147 *
                                                                                                                                                              v147))) *
                                                                                                                            (float)(v147 *
                                                                                                                                    v147)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v147 *
                                                                                                              v147))) *
                                                                               (float)(v147 *
                                                                                       v147)) -
                                                                       *(float*)((char*)((
                                                                                     __int128*)0x10LL) +
                                                                                 (_QWORD)
                                                                                     GameData_212c2f0 +
                                                                                 4)) *
                                                               (float)(v147 *
                                                                       v147))) *
                                        (float)(v147 * v147)) -
                                *(float*)((char*)((__int128*)0x10LL) +
                                          (_QWORD)GameData_212c2f0 + 12)) *
                        (float)(v147 * v147)) +
                0x1.0000000000000p+0f);
LABEL_5:
  v19 = (float)(PSEUDO_UNFUSED(v14 * v15)) + (float)(v13 * v6);
  v20 = v10 + (float)((float)(v5 - v7) - v9);
  if (v19 != 0x0.0p+0f || (v21 = 0x0.0p+0f, v20 != 0x0.0p+0f)) {
    if (v20 >= 0x0.0p+0f) {
      if (v19 >= 0x0.0p+0f) {
        v119 = v20 / v19;
        v69 = v20 < v19;
        v120 = v19 / v20;
        v121 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        v122 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        v123 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                         8);
        v74 = v120 *
              (float)((float)((float)((float)((float)(v123 +
                                                      (float)((float)((float)((float)(v122 + (float)((
                                                                                                         float)((float)((float)(v121 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v120 * v120)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                     1)) *
                                                                                                                                               (float)(v120 *
                                                                                                                                                       v120))) *
                                                                                                                        (float)(v120 *
                                                                                                                                v120)) -
                                                                                                                *(float*)((char*)((
                                                                                                                              _UNKNOWN**)0x8LL) +
                                                                                                                          (_QWORD)
                                                                                                                              GameData_212c2f0 +
                                                                                                                          4)) *
                                                                                                     (float)(v120 *
                                                                                                             v120))) *
                                                                              (float)(v120 *
                                                                                      v120)) -
                                                                      *(float*)((char*)((
                                                                                    __int128*)0x10LL) +
                                                                                (_QWORD)
                                                                                    GameData_212c2f0 +
                                                                                4)) *
                                                              (float)(v120 *
                                                                      v120))) *
                                              (float)(v120 * v120)) -
                                      *(float*)((char*)((__int128*)0x10LL) +
                                                (_QWORD)GameData_212c2f0 +
                                                12)) *
                              (float)(v120 * v120)) +
                      0x1.0000000000000p+0f);
        v75 =
            0x1.921fb60000000p+0f - (float)(PSEUDO_UNFUSED(
                                        v119 * (float)((float)((float)((float)((float)(v123 + (float)((
                                                                                                          float)((
                                                                                                                     float)((
                                                                                                                                float)(v122 + (float)((
                                                                                                                                                          float)((float)((float)(v121 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v119 * v119)) - *((float*)GameData_212c2f0 + 1)) * (float)(v119 * v119))) * (float)(v119 * v119)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                                                      _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                                                                  (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                  4)) *
                                                                                                                                                      (float)(v119 *
                                                                                                                                                              v119))) *
                                                                                                                            (float)(v119 *
                                                                                                                                    v119)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               __int128*)0x10LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v119 *
                                                                                                              v119))) *
                                                                               (float)(v119 *
                                                                                       v119)) -
                                                                       *(float*)((char*)((
                                                                                     __int128*)0x10LL) +
                                                                                 (_QWORD)
                                                                                     GameData_212c2f0 +
                                                                                 12)) *
                                                               (float)(v119 *
                                                                       v119)) +
                                                       0x1.0000000000000p+0f)));
      }
      else {
        v67 = -v19;
        v68 = v20 / v67;
        v69 = v20 < v67;
        v70 = v67 / v20;
        v71 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        v72 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        v73 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                        8);
        v74 =
            -(float)(v70 *
                     (float)((float)((float)((float)((float)(v73 + (float)((float)((
                                                                                       float)((
                                                                                                  float)(v72 + (float)((float)((float)((float)(v71 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v70 * v70)) - *((float*)GameData_212c2f0 + 1)) * (float)(v70 * v70))) * (float)(v70 * v70)) - *(
                                                                                                                                                                                                                                                                                                                   float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                       (float)(v70 *
                                                                                                                               v70))) *
                                                                                              (float)(v70 *
                                                                                                      v70)) -
                                                                                   *(float*)((char*)((
                                                                                                 __int128*)0x10LL) +
                                                                                             (_QWORD)
                                                                                                 GameData_212c2f0 +
                                                                                             4)) *
                                                                           (float)(v70 *
                                                                                   v70))) *
                                                     (float)(v70 * v70)) -
                                             *(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                       (_QWORD)
                                                           GameData_212c2f0 +
                                                       12)) *
                                     (float)(v70 * v70)) +
                             0x1.0000000000000p+0f));
        v75 =
            (float)(PSEUDO_UNFUSED(
                v68 *
                (float)((float)((float)((float)((float)(v73 +
                                                        (float)((float)((float)((float)(v72 + (float)((
                                                                                                          float)((float)((float)(v71 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v68 * v68)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                   1)) *
                                                                                                                                               (float)(v68 *
                                                                                                                                                       v68))) *
                                                                                                                         (float)(v68 *
                                                                                                                                 v68)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v68 *
                                                                                                              v68))) *
                                                                                (float)(v68 *
                                                                                        v68)) -
                                                                        *(float*)((char*)((
                                                                                      __int128*)0x10LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                  4)) *
                                                                (float)(v68 *
                                                                        v68))) *
                                                (float)(v68 * v68)) -
                                        *(float*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  12)) *
                                (float)(v68 * v68)) +
                        0x1.0000000000000p+0f))) +
            -0x1.921fb60000000p+0f;
      }
      if (v69) {
        v21 = v75;
      }
      else {
        v21 = v74;
      }
    }
    else {
      if (v19 >= 0x0.0p+0f) {
        v99 = -v20;
        v100 = v99 / v19;
        v23 = !(v19 <= v99);
        v101 = v19 / v99;
        v102 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        v103 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        v104 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                         8);
        v28 = (float)(PSEUDO_UNFUSED(v100 * (float)((
                                                        float)((float)((float)((float)(v104 + (float)((
                                                                                                          float)((
                                                                                                                     float)((
                                                                                                                                float)(v103 + (float)((
                                                                                                                                                          float)((float)((float)(v102 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v100 * v100)) - *((float*)GameData_212c2f0 + 1)) * (float)(v100 * v100))) * (float)(v100 * v100)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                                                      _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                                                                  (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                  4)) *
                                                                                                                                                      (float)(v100 *
                                                                                                                                                              v100))) *
                                                                                                                            (float)(v100 *
                                                                                                                                    v100)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               __int128*)0x10LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v100 *
                                                                                                              v100))) *
                                                                               (float)(v100 *
                                                                                       v100)) -
                                                                       *(float*)((char*)((
                                                                                     __int128*)0x10LL) +
                                                                                 (_QWORD)
                                                                                     GameData_212c2f0 +
                                                                                 12)) *
                                                               (float)(v100 *
                                                                       v100)) +
                                                    0x1.0000000000000p+0f))) +
              0x1.921fb60000000p+0f;
        v29 =
            0x1.921fb60000000p+1f - (float)(PSEUDO_UNFUSED(
                                        v101 * (float)((float)((float)((float)((float)(v104 + (float)((
                                                                                                          float)((
                                                                                                                     float)((
                                                                                                                                float)(v103 + (float)((
                                                                                                                                                          float)((float)((float)(v102 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v101 * v101)) - *((float*)GameData_212c2f0 + 1)) * (float)(v101 * v101))) * (float)(v101 * v101)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                                                      _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                                                                  (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                  4)) *
                                                                                                                                                      (float)(v101 *
                                                                                                                                                              v101))) *
                                                                                                                            (float)(v101 *
                                                                                                                                    v101)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               __int128*)0x10LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v101 *
                                                                                                              v101))) *
                                                                               (float)(v101 *
                                                                                       v101)) -
                                                                       *(float*)((char*)((
                                                                                     __int128*)0x10LL) +
                                                                                 (_QWORD)
                                                                                     GameData_212c2f0 +
                                                                                 12)) *
                                                               (float)(v101 *
                                                                       v101)) +
                                                       0x1.0000000000000p+0f)));
      }
      else {
        v22 = v20 / v19;
        v23 = !(v20 <= v19);
        v24 = v19 / v20;
        v25 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        v26 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        v27 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                        8);
        v28 =
            -0x1.921fb60000000p+0f -
            (float)(PSEUDO_UNFUSED(
                v22 *
                (float)((float)((float)((float)((float)(v27 +
                                                        (float)((float)((float)((float)(v26 + (float)((
                                                                                                          float)((float)((float)(v25 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v22 * v22)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                   1)) *
                                                                                                                                               (float)(v22 *
                                                                                                                                                       v22))) *
                                                                                                                         (float)(v22 *
                                                                                                                                 v22)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v22 *
                                                                                                              v22))) *
                                                                                (float)(v22 *
                                                                                        v22)) -
                                                                        *(float*)((char*)((
                                                                                      __int128*)0x10LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                  4)) *
                                                                (float)(v22 *
                                                                        v22))) *
                                                (float)(v22 * v22)) -
                                        *(float*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  12)) *
                                (float)(v22 * v22)) +
                        0x1.0000000000000p+0f)));
        v29 =
            (float)(PSEUDO_UNFUSED(
                v24 *
                (float)((float)((float)((float)((float)(v27 +
                                                        (float)((float)((float)((float)(v26 + (float)((
                                                                                                          float)((float)((float)(v25 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v24 * v24)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                   1)) *
                                                                                                                                               (float)(v24 *
                                                                                                                                                       v24))) *
                                                                                                                         (float)(v24 *
                                                                                                                                 v24)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v24 *
                                                                                                              v24))) *
                                                                                (float)(v24 *
                                                                                        v24)) -
                                                                        *(float*)((char*)((
                                                                                      __int128*)0x10LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                  4)) *
                                                                (float)(v24 *
                                                                        v24))) *
                                                (float)(v24 * v24)) -
                                        *(float*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  12)) *
                                (float)(v24 * v24)) +
                        0x1.0000000000000p+0f))) +
            -0x1.921fb60000000p+1f;
      }
      if (v23) {
        v21 = v28;
      }
      else {
        v21 = v29;
      }
    }
  }
  v124 = v12 / v11;
  v125 = sqrtf(0x1.0000000000000p+0f - (float)(v124 * v124));
  if (v124 >= 0x0.0p+0f) {
    v148 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v149 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v150 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    v151 = v124 / v125;
    v152 = v125 / v124;
    v153 =
        v151 *
        (float)((float)((float)((float)((float)(v150 + (float)((float)((float)((float)(v149 + (float)((float)((float)((float)(v148 + (float)((
                                                                                                                                                 float)((float)(*(float*)GameData_212c2f0 * (float)(v151 * v151)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                      1)) *
                                                                                                                                             (float)(v151 *
                                                                                                                                                     v151))) *
                                                                                                                      (float)(v151 *
                                                                                                                              v151)) -
                                                                                                              *(float*)((char*)((
                                                                                                                            _UNKNOWN**)0x8LL) +
                                                                                                                        (_QWORD)
                                                                                                                            GameData_212c2f0 +
                                                                                                                        4)) *
                                                                                                      (float)(v151 *
                                                                                                              v151))) *
                                                                               (float)(v151 *
                                                                                       v151)) -
                                                                       *(float*)((char*)((
                                                                                     __int128*)0x10LL) +
                                                                                 (_QWORD)
                                                                                     GameData_212c2f0 +
                                                                                 4)) *
                                                               (float)(v151 *
                                                                       v151))) *
                                        (float)(v151 * v151)) -
                                *(float*)((char*)((__int128*)0x10LL) +
                                          (_QWORD)GameData_212c2f0 + 12)) *
                        (float)(v151 * v151)) +
                0x1.0000000000000p+0f);
    v154 =
        0x1.921fb60000000p+0f -
        (float)(PSEUDO_UNFUSED(
            v152 *
            (float)((float)((float)((float)((float)(v150 +
                                                    (float)((float)((float)((float)(v149 + (float)((
                                                                                                       float)((
                                                                                                                  float)((float)(v148 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v152 * v152)) - *((float*)GameData_212c2f0 + 1)) *
                                                                                                                                                (float)(v152 *
                                                                                                                                                        v152))) *
                                                                                                                         (float)(v152 *
                                                                                                                                 v152)) -
                                                                                                              *(float*)((char*)((
                                                                                                                            _UNKNOWN**)0x8LL) +
                                                                                                                        (_QWORD)
                                                                                                                            GameData_212c2f0 +
                                                                                                                        4)) *
                                                                                                   (float)(v152 *
                                                                                                           v152))) *
                                                                            (float)(v152 *
                                                                                    v152)) -
                                                                    *(float*)((char*)((
                                                                                  __int128*)0x10LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c2f0 +
                                                                              4)) *
                                                            (float)(v152 *
                                                                    v152))) *
                                            (float)(v152 * v152)) -
                                    *(float*)((char*)((__int128*)0x10LL) +
                                              (_QWORD)GameData_212c2f0 + 12)) *
                            (float)(v152 * v152)) +
                    0x1.0000000000000p+0f)));
    if (!(v124 <= 0x1.6a09e60000000p-1f)) {
      v127 = v154;
    }
    else {
      v127 = v153;
    }
  }
  else if (v124 >= -0x1.6a09e60000000p-1f) {
    v128 = (float)-v124 / v125;
    v127 =
        -(float)(v128 *
                 (float)((float)((float)-(
                                     float)(*(float*)((char*)((
                                                          __int128*)0x10LL) +
                                                      (_QWORD)GameData_212c2f0 +
                                                      12) -
                                            (float)((float)(*(float*)((char*)((
                                                                          __int128*)0x10LL) +
                                                                      (_QWORD)
                                                                          GameData_212c2f0 +
                                                                      8) +
                                                            (float)((float)-(
                                                                        float)(*(float*)((char*)((
                                                                                             __int128*)0x10LL) +
                                                                                         (_QWORD)
                                                                                             GameData_212c2f0 +
                                                                                         4) -
                                                                               (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((
                                                                                                                                                                              float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                              (_QWORD)
                                                                                                                                                                                                                                                                                                  GameData_212c2f0) +
                                                                                                                                                                                                                                                                                    (float)((float)-(
                                                                                                                                                                                                                                                                                                float)(*((float*)
                                                                                                                                                                                                                                                                                                             GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                         1) -
                                                                                                                                                                                                                                                                                                       (float)(*(float*)
                                                                                                                                                                                                                                                                                                                   GameData_212c2f0 *
                                                                                                                                                                                                                                                                                                               (float)(v128 *
                                                                                                                                                                                                                                                                                                                       v128))) *
                                                                                                                                                                                                                                                                                            (float)(v128 *
                                                                                                                                                                                                                                                                                                    v128))) *
                                                                                                                                                                                                                                                                            (float)(v128 *
                                                                                                                                                                                                                                                                                    v128))) *
                                                                                                                                                                          (float)(v128 *
                                                                                                                                                                                  v128))) *
                                                                                       (float)(v128 *
                                                                                               v128))) *
                                                                    (float)(v128 *
                                                                            v128))) *
                                                    (float)(v128 * v128))) *
                                 (float)(v128 * v128)) +
                         0x1.0000000000000p+0f));
  }
  else {
    v126 = (float)-v125 / v124;
    v127 = (float)(PSEUDO_UNFUSED(
               v126 * (float)((
                                  float)((
                                             float)-(float)(*(float*)((char*)((__int128*)0x10LL) +
                                                                      (_QWORD)
                                                                          GameData_212c2f0 +
                                                                      12) -
                                                            (float)((
                                                                        float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8) + (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((
                                                                                                                                                                                                                                                                 float)(*(float*)((char*)((
                                                                                                                                                                                                                                                                                      __int128*)0x10LL) +
                                                                                                                                                                                                                                                                                  (_QWORD)
                                                                                                                                                                                                                                                                                      GameData_212c2f0) +
                                                                                                                                                                                                                                                                        (float)((float)-(
                                                                                                                                                                                                                                                                                    float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                     4) -
                                                                                                                                                                                                                                                                                           (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v126 * v126))) * (float)(v126 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             v126))) *
                                                                                                                                                                                                                                                                                                   (float)(v126 *
                                                                                                                                                                                                                                                                                                           v126))) *
                                                                                                                                                                                                                                                                                (float)(v126 *
                                                                                                                                                                                                                                                                                        v126))) *
                                                                                                                                                                                                                                                             (float)(v126 *
                                                                                                                                                                                                                                                                     v126))) *
                                                                                                                                                              (float)(v126 *
                                                                                                                                                                      v126))) *
                                                                    (float)(v126 *
                                                                            v126))) *
                                         (float)(v126 * v126)) +
                              0x1.0000000000000p+0f))) +
           -0x1.921fb60000000p+0f;
  }
  *(_QWORD*)&v137 = __PAIR64__(LODWORD(v21), LODWORD(v18));
  *((_QWORD*)&v137 + 1) = LODWORD(v127);
  *a2 = v137;
LABEL_90:
  {
    __typeof__(result) z_ = (__typeof__(result)){0};
    LODWORD(z_) = v137;
    result = z_;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
