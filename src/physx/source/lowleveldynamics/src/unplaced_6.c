#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    physx_Dy_computeSphericalJointPositions_347300(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
float GameRoutine_1a09fb0(float);
float GameRoutine_1a09fc0(float);
float GameRoutine_1a0a010(float);
float GameRoutine_1a0ab40(float, float);
float GameRoutine_1a0ccb0(float);
__attribute__((swiftcall)) void physx_source_lowleveldynamics_src_323800(
    PSEUDO_X8 x8_, __int64 a1, unsigned int a2, __int64 a3, unsigned int* a4,
    __int64 a5, float* a6, float* a7, __int64 a8, float a10, __int64 a11,
    float* a12);

__attribute__((swiftcall)) void physx_source_lowleveldynamics_src_323800(
    PSEUDO_X8 x8_, __int64 a1, unsigned int a2, __int64 a3, unsigned int* a4,
    __int64 a5, float* a6, float* a7, __int64 a8, float a10, __int64 a11,
    float* a12)
{
  float* a9 = (float*)PSEUDO_X8_VALUE(x8_);
  float v12;
  float v13;
  float v14;
  float v15;
  float* v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  unsigned int v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  bool v37;
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
  __int64 v51;
  float v52;
  __int64 v53;
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
  __int64 v64;
  float* v65;
  float v67;
  float v68;
  float v69;
  float v70;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  __int64 v81;
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
  __int64 v95;
  float v96;
  float v97;
  float v98;
  float v99;
  int* v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  unsigned int v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  int v113;
  __int64 v114;
  float v115;
  float v116;
  __int64 v117;
  float v118;
  __int64 v119;
  __int64 v120;
  float* v121;
  unsigned int v122;
  unsigned int v123;
  float* v124;
  float* v125;
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
  float v137;
  float v138;
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
  float result;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  float v165;
  struct {
    __int64 v166;
    float v167;
    float v168;
  } v166_;
  struct {
    _DWORD v169[4];
    char gap80_[88];
    float v170;
    float v171;
  } v169_;

  v18 = (float*)(*(_QWORD*)(a1 + 912) + 16LL * a2);
  v19 = *a4;
  v20 = *v18;
  v21 = v18[1];
  v22 = v18[2];
  v23 = v18[3];
  v24 = *(_QWORD*)(a3 + 40LL * a2 + 24);
  v26 = *(float*)(v24 + 44);
  v25 = *(float*)(v24 + 48);
  v27 = *(float*)(v24 + 52);
  v29 = *(float*)(v24 + 16);
  v28 = *(float*)(v24 + 20);
  v30 = *(float*)(v24 + 24);
  v31 = *(unsigned __int8*)(v24 + 351);
  if (!(v31 > 1)) {
    if (*(_BYTE*)(v24 + 351) != 0) {
      v51 = *(unsigned __int8*)(v24 + 332);
      v52 = *(float*)(a11 + 4 * v19) + (float)(*(float*)(a8 + 4 * v19) * a10);
      if (*(_BYTE*)(v24 + v51 + 338) == 1) {
        v53 = v24 + 8 * v51;
        if (v52 < *(float*)(v53 + 56)) {
          v52 = *(float*)(v53 + 56);
        }
        if (v52 > *(float*)(v53 + 60)) {
          v52 = *(float*)(v53 + 60);
        }
      }
      v54 = v28 + v28;
      v55 = v29 + v29;
      *(float*)(a11 + 4 * v19) = v52;
      v56 = v30 + v30;
      v15 = v22;
      v13 = v20;
      v14 = v21;
      v57 = (float)(v23 * v23) + -0x1.0000000000000p-1f;
      v58 = (float)(v22 * (float)(v29 + v29)) -
            (float)(PSEUDO_UNFUSED(v20 * v56));
      v59 = (float)((float)(PSEUDO_UNFUSED(v21 * v54)) +
                    (float)(v20 * (float)(v29 + v29))) +
            (float)(v22 * v56);
      v60 = (float)(PSEUDO_UNFUSED(
                v23 * (float)((float)(v21 * v56) -
                              (float)(PSEUDO_UNFUSED(v22 * v54))))) +
            (float)(v55 * v57);
      v61 = (float)(PSEUDO_UNFUSED(
                v23 * (float)((float)(v20 * v54) -
                              (float)(PSEUDO_UNFUSED(v21 * v55))))) +
            (float)(v56 * v57);
      v62 = (float)((float)((float)(PSEUDO_UNFUSED(v23 * v58)) +
                            (float)(v54 * v57)) +
                    (float)(v21 * v59)) -
            v25;
      v63 = v52 * a12[3];
      v12 = (float)((float)(v61 + (float)(v22 * v59)) - v27) +
            (float)(PSEUDO_UNFUSED(v52 * a12[5]));
      v169_.v170 = v62 + (float)(PSEUDO_UNFUSED(v52 * a12[4]));
      v169_.v171 = (float)((float)(v60 + (float)(v20 * v59)) - v26) + v63;
    }
    else {
      v89 = v28 + v28;
      v90 = v30 + v30;
      v91 = v29 + v29;
      v13 = v20;
      v14 = v21;
      v15 = v22;
      v92 = -(float)(v22 * (float)(v28 + v28));
      v93 = (float)(v23 * v23) + -0x1.0000000000000p-1f;
      v94 = (float)((float)(PSEUDO_UNFUSED(v21 * (float)(v28 + v28))) +
                    (float)(v20 * v91)) +
            (float)(v22 * v90);
      v169_.v170 =
          (float)((float)((float)(PSEUDO_UNFUSED(
                              v23 *
                              (float)((float)(v22 * v91) -
                                      (float)(PSEUDO_UNFUSED(v20 * v90))))) +
                          (float)(v89 * v93)) +
                  (float)(v21 * v94)) -
          v25;
      v169_.v171 =
          (float)((float)((float)(PSEUDO_UNFUSED(
                              v23 * (float)(v92 + (float)(v21 * v90)))) +
                          (float)(v91 * v93)) +
                  (float)(v20 * v94)) -
          v26;
      v12 = (float)((float)((float)(PSEUDO_UNFUSED(
                                v23 *
                                (float)((float)(v20 * v89) -
                                        (float)(PSEUDO_UNFUSED(v21 * v91))))) +
                            (float)(v90 * v93)) +
                    (float)(v22 * v94)) -
            v27;
    }
    v22 = v23;
  } else {
    if (v31 - 2 < 2) {
      v165 = *(float*)(v24 + 52);
      v32 = v23;
      v33 = *(float*)(a11 + 4 * v19) + (float)(*(float*)(a8 + 4 * v19) * a10);
      v169_.v170 = *(float*)(v24 + 24);
      v169_.v171 = v26;
      v159 = v29;
      v161 = v28;
      v34 = v33 * -0x1.0000000000000p-1f;
      *(float*)(a11 + 4 * v19) = v33;
      v163 = v25;
      v35 = GameRoutine_1a09fb0(v33 * -0x1.0000000000000p-1f);
      v36 = GameRoutine_1a09fc0(v34);
      v37 = v36 < 0x0.0p+0f;
      if (v36 < 0x0.0p+0f) {
        v36 = -v36;
      }
      v38 = v35 * *a12;
      v39 = v35 * a12[1];
      v40 = v35 * a12[2];
      if (v37) {
        v38 = -v38;
      }
      if (v37) {
        v39 = -v39;
      }
      if (v37) {
        v40 = -v40;
      }
      v41 = (float)((float)((float)(PSEUDO_UNFUSED(v32 * v38)) +
                            (float)(v36 * v20)) +
                    (float)(v39 * v22)) -
            (float)(v21 * v40);
      v42 = (float)((float)((float)(PSEUDO_UNFUSED(v32 * v39)) +
                            (float)(v36 * v21)) +
                    (float)(v40 * v20)) -
            (float)(v22 * v38);
      v43 = (float)((float)((float)(PSEUDO_UNFUSED(v32 * v40)) +
                            (float)(v36 * v22)) +
                    (float)(v38 * v21)) -
            (float)(v20 * v39);
      v44 = (float)((float)((float)(v36 * v32) -
                            (float)(PSEUDO_UNFUSED(v38 * v20))) -
                    (float)(v39 * v21)) -
            (float)(v40 * v22);
      v45 = 0x1.0000000000000p+0f /
            GameRoutine_1a0a010(
                (float)((float)((float)(PSEUDO_UNFUSED(v42 * v42)) +
                                (float)(v41 * v41)) +
                        (float)(v43 * v43)) +
                (float)(v44 * v44));
      v13 = v45 * v41;
      v14 = v45 * v42;
      v15 = v45 * v43;
      v22 = v45 * v44;
      v46 = (float)(v22 * v22) + -0x1.0000000000000p-1f;
      v47 = (float)((float)(PSEUDO_UNFUSED((float)(v161 + v161) *
                                           (float)(v45 * v42))) +
                    (float)((float)(v45 * v41) * (float)(v159 + v159))) +
            (float)(v15 * (float)(v169_.v170 + v169_.v170));
      v48 =
          (float)((float)(PSEUDO_UNFUSED(
                      v22 * (float)((float)(v15 * (float)(v159 + v159)) -
                                    (float)(PSEUDO_UNFUSED(
                                        (float)(v45 * v41) *
                                        (float)(v169_.v170 + v169_.v170)))))) +
                  (float)((float)(v161 + v161) * v46)) +
          (float)((float)(v45 * v42) * v47);
      v169_.v171 =
          (float)((float)((float)(PSEUDO_UNFUSED(
                              v22 *
                              (float)((float)((float)(v45 * v42) *
                                              (float)(v169_.v170 +
                                                      v169_.v170)) -
                                      (float)(PSEUDO_UNFUSED(
                                          v15 * (float)(v161 + v161)))))) +
                          (float)((float)(v159 + v159) * v46)) +
                  (float)((float)(v45 * v41) * v47)) -
          v169_.v171;
      v49 =
          (float)((float)(PSEUDO_UNFUSED(
                      v22 *
                      (float)((float)((float)(v45 * v41) *
                                      (float)(v161 + v161)) -
                              (float)(PSEUDO_UNFUSED((float)(v45 * v42) *
                                                     (float)(v159 + v159)))))) +
                  (float)((float)(v169_.v170 + v169_.v170) * v46)) +
          (float)(v15 * v47);
      v50 = v48 - v163;
      goto LABEL_47;
    }
    v156 = v22;
    if (v31 == 4) {
      v64 = a2;
      v65 = (float*)(a5 + 32LL * a2);
      v68 = *a7;
      v67 = a7[1];
      v70 = a7[2];
      v69 = a7[3];
      v153 = v23;
      v160 = v29;
      v162 = v28;
      v169_.v170 = v30;
      v169_.v171 = v26;
      v165 = v27;
      v74 = *v65;
      v73 = v65[1];
      v75 = v65[2];
      v150 = v67;
      v151 = v69;
      v152 = v70;
      v76 = GameRoutine_1a0a010(
          (float)((float)(PSEUDO_UNFUSED(v73 * v73)) + (float)(v74 * v74)) +
          (float)(v75 * v75));
      if (v76 > 0x0.0p+0f) {
        v74 = v74 * (float)(0x1.0000000000000p+0f / v76);
        v73 = v73 * (float)(0x1.0000000000000p+0f / v76);
        v75 = v75 * (float)(0x1.0000000000000p+0f / v76);
      }
      v77 = v76 * a10;
      v164 = v25;
      if (!(v77 > 0x1.0c6f7a0000000p-20f)) {
        v88 = v151;
        v86 = v152;
        v87 = v150;
        v81 = a1;
      } else {
        v78 = v77 * 0x1.0000000000000p-1f;
        v79 = GameRoutine_1a09fb0(v77 * 0x1.0000000000000p-1f);
        v80 = GameRoutine_1a09fc0(v78);
        v81 = a1;
        v82 = (float)(PSEUDO_UNFUSED(v151 * (float)(v75 * v79))) +
              (float)(v80 * v152);
        v83 = (float)((float)(PSEUDO_UNFUSED(v151 * (float)(v74 * v79))) +
                      (float)(v80 * v68)) +
              (float)((float)(v73 * v79) * v152);
        v84 = (float)((float)(PSEUDO_UNFUSED(v151 * (float)(v73 * v79))) +
                      (float)(v80 * v150)) +
              (float)((float)(v75 * v79) * v68);
        v85 = (float)((float)(v80 * v151) -
                      (float)(PSEUDO_UNFUSED((float)(v74 * v79) * v68))) -
              (float)((float)(v73 * v79) * v150);
        v86 = (float)(v82 + (float)((float)(v74 * v79) * v150)) -
              (float)(v68 * (float)(v73 * v79));
        v68 = v83 - (float)(v150 * (float)(v75 * v79));
        v87 = v84 - (float)(v152 * (float)(v74 * v79));
        v88 = v85 - (float)((float)(v75 * v79) * v152);
      }
      v95 = *(_QWORD*)(v81 + 912);
      *(float*)v169_.v169 = v68;
      *(float*)&v169_.v169[1] = v87;
      *(float*)&v169_.v169[2] = v86;
      *(float*)&v169_.v169[3] = v88;
      physx_Dy_computeSphericalJointPositions_347300(
          (void*)(&v166_.v166), v95 + 16 * v64, v169_.v169, a6);
      v14 = *((float*)&v166_.v166 + 1);
      v13 = *(float*)&v166_.v166;
      v15 = v166_.v167;
      v22 = v166_.v168;
      v96 =
          (float)((float)((float)(PSEUDO_UNFUSED(v153 * *(float*)&v166_.v166)) -
                          (float)(v166_.v168 * v20)) -
                  (float)(*((float*)&v166_.v166 + 1) * v156)) +
          (float)(v21 * v166_.v167);
      v97 = (float)((float)((float)(PSEUDO_UNFUSED(
                                v153 * *((float*)&v166_.v166 + 1))) -
                            (float)(v166_.v168 * v21)) -
                    (float)(v166_.v167 * v20)) +
            (float)(v156 * *(float*)&v166_.v166);
      v98 = (float)((float)((float)(PSEUDO_UNFUSED(v153 * v166_.v167)) -
                            (float)(v166_.v168 * v156)) -
                    (float)(*(float*)&v166_.v166 * v21)) +
            (float)(v20 * *((float*)&v166_.v166 + 1));
      v99 =
          (float)((float)((float)(PSEUDO_UNFUSED(v20 * *(float*)&v166_.v166)) +
                          (float)(v166_.v168 * v153)) +
                  (float)(*((float*)&v166_.v166 + 1) * v21)) +
          (float)(v166_.v167 * v156);
      if (v99 < 0x0.0p+0f) {
        v96 = -v96;
        v97 = -v97;
        v98 = -v98;
        v99 = -v99;
      }
      v100 = (int*)a4;
      v101 = (float)((float)(PSEUDO_UNFUSED(v97 * v97)) + (float)(v96 * v96)) +
             (float)(v98 * v98);
      if (!(v101 < 0x1.cd2b2a0000000p-54f)) {
        v154 = v97;
        v157 = v96;
        v111 = 0x1.0000000000000p+0f /
               GameRoutine_1a0a010((float)((float)(PSEUDO_UNFUSED(v97 * v97)) +
                                           (float)(v96 * v96)) +
                                   (float)(v98 * v98));
        v105 = v98 * v111;
        v155 = v154 * v111;
        v158 = v157 * v111;
        if (!(GameRoutine_1a0ccb0(v99) < 0x1.5798ee0000000p-27f)) {
          v112 = GameRoutine_1a0ab40(v101 * v111, v99);
          v103 = v112 + v112;
        } else {
          v103 = 0x1.921fb60000000p+1f;
        }
        v104 = v155;
        v102 = v158;
        v100 = (int*)a4;
        v106 = v164;
        v107 = *((unsigned __int8*)a4 + 4);
        v108 = -v13;
        v109 = -v14;
        v110 = -v15;
        if (*((_BYTE*)a4 + 4) == 0) {
          goto LABEL_46;
        }
      } else {
        v102 = 0x1.0000000000000p+0f;
        v103 = 0x0.0p+0f;
        v104 = 0x0.0p+0f;
        v105 = 0x0.0p+0f;
        v106 = v164;
        v107 = *((unsigned __int8*)a4 + 4);
        v108 = -*(float*)&v166_.v166;
        v109 = -*((float*)&v166_.v166 + 1);
        v110 = -v166_.v167;
        if (*((_BYTE*)a4 + 4) == 0) {
        LABEL_46:
          v126 = (float)(v22 * v22) + -0x1.0000000000000p-1f;
          v127 = (float)((float)(PSEUDO_UNFUSED((float)(v162 + v162) * v14)) +
                         (float)(v13 * (float)(v160 + v160))) +
                 (float)(v15 * (float)(v169_.v170 + v169_.v170));
          v49 = (float)((float)(PSEUDO_UNFUSED(
                            (float)((float)(PSEUDO_UNFUSED(
                                        (float)(v160 + v160) * v109)) +
                                    (float)(v13 * (float)(v162 + v162))) *
                            v22)) +
                        (float)((float)(v169_.v170 + v169_.v170) * v126)) +
                (float)(v15 * v127);
          v50 =
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  (float)((float)(PSEUDO_UNFUSED(
                                              (float)(v169_.v170 + v169_.v170) *
                                              v108)) +
                                          (float)(v15 * (float)(v160 + v160))) *
                                  v22)) +
                              (float)((float)(v162 + v162) * v126)) +
                      (float)(v14 * v127)) -
              v106;
          v169_.v171 =
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  v22 *
                                  (float)((float)(PSEUDO_UNFUSED(
                                              (float)(v162 + v162) * v110)) +
                                          (float)(v14 *
                                                  (float)(v169_.v170 +
                                                          v169_.v170))))) +
                              (float)((float)(v160 + v160) * v126)) +
                      (float)(v13 * v127)) -
              v169_.v171;
        LABEL_47:
          v169_.v170 = v50;
          v12 = v49 - v165;
          goto LABEL_48;
        }
      }
      v113 = *v100;
      v114 = *(_QWORD*)(a1 + 784);
      v115 = v103 * v102;
      v116 = v103 * v104;
      v117 = v107 & 3;
      v118 = v103 * v105;
      if (!(v107 < 4)) {
        v120 = (unsigned __int8)v107 & 0xFC;
        v119 = 0;
        v121 = (float*)(a11 + 4 * v19 + 8);
        do {
          v122 = v113 + v119;
          v119 += 4;
          *(v121 - 2) =
              -(float)((float)((float)(PSEUDO_UNFUSED(
                                   v116 * *(float*)(v114 + 24LL * v122 + 4))) +
                               (float)(*(float*)(v114 + 24LL * v122) * v115)) +
                       (float)(*(float*)(v114 + 24LL * v122 + 8) * v118));
          *(v121 - 1) =
              -(float)((float)((float)(PSEUDO_UNFUSED(
                                   v116 *
                                   *(float*)(v114 + 24LL * (v122 + 1) + 4))) +
                               (float)(*(float*)(v114 + 24LL * (v122 + 1)) *
                                       v115)) +
                       (float)(*(float*)(v114 + 24LL * (v122 + 1) + 8) * v118));
          *v121 =
              -(float)((float)((float)(PSEUDO_UNFUSED(
                                   v116 *
                                   *(float*)(v114 + 24LL * (v122 + 2) + 4))) +
                               (float)(*(float*)(v114 + 24LL * (v122 + 2)) *
                                       v115)) +
                       (float)(*(float*)(v114 + 24LL * (v122 + 2) + 8) * v118));
          v121[1] =
              -(float)((float)((float)(PSEUDO_UNFUSED(
                                   v116 *
                                   *(float*)(v114 + 24LL * (v122 + 3) + 4))) +
                               (float)(*(float*)(v114 + 24LL * (v122 + 3)) *
                                       v115)) +
                       (float)(*(float*)(v114 + 24LL * (v122 + 3) + 8) * v118));
          v121 += 4;
        } while (v120 != v119);
      } else {
        v119 = 0;
      }
      if (v117 != 0) {
        v123 = v113 + v119;
        v124 = (float*)(a11 + 4 * v119 + 4 * v19);
        do {
          v125 = (float*)(v114 + 24LL * v123++);
          --v117;
          *v124++ = -(float)((float)((float)(PSEUDO_UNFUSED(v116 * v125[1])) +
                                     (float)(*v125 * v115)) +
                             (float)(v125[2] * v118));
        } while (v117 != 0);
      }
      goto LABEL_46;
    }
  }
LABEL_48:
  v128 = a6[1];
  v130 = a6[2];
  v129 = a6[3];
  v131 = (float)((float)((float)(PSEUDO_UNFUSED(v22 * *a6)) -
                         (float)(v129 * v13)) -
                 (float)(v128 * v15)) +
         (float)(v14 * v130);
  v132 = (float)((float)((float)(PSEUDO_UNFUSED(v22 * v128)) -
                         (float)(v129 * v14)) -
                 (float)(v130 * v13)) +
         (float)(v15 * *a6);
  v133 = (float)((float)((float)(PSEUDO_UNFUSED(v22 * v130)) -
                         (float)(v129 * v15)) -
                 (float)(*a6 * v14)) +
         (float)(v13 * v128);
  v134 = (float)((float)((float)(PSEUDO_UNFUSED(v13 * *a6)) +
                         (float)(v129 * v22)) +
                 (float)(v128 * v14)) +
         (float)(v130 * v15);
  v135 =
      0x1.0000000000000p+0f /
      GameRoutine_1a0a010((float)((float)((float)(PSEUDO_UNFUSED(v132 * v132)) +
                                          (float)(v131 * v131)) +
                                  (float)(v133 * v133)) +
                          (float)(v134 * v134));
  v136 = v169_.v171 + v169_.v171;
  v137 = v169_.v170 + v169_.v170;
  v138 = v131 * v135;
  v139 = v135 * v132;
  v140 = v135 * v133;
  v141 = v134 * v135;
  v142 = (float)(v141 * v141) + -0x1.0000000000000p-1f;
  *a9 = v138;
  a9[1] = v139;
  a9[2] = v140;
  a9[3] = v141;
  v143 = (float)((float)(PSEUDO_UNFUSED(v137 * v139)) + (float)(v138 * v136)) +
         (float)(v140 * (float)(v12 + v12));
  v144 = (float)((float)(PSEUDO_UNFUSED(
                     v141 * (float)((float)(v140 * v136) -
                                    (float)(PSEUDO_UNFUSED(
                                        v138 * (float)(v12 + v12)))))) +
                 (float)(v137 * v142)) +
         (float)(v139 * v143);
  v145 = (float)((float)(PSEUDO_UNFUSED(
                     v141 * (float)((float)(v139 * (float)(v12 + v12)) -
                                    (float)(PSEUDO_UNFUSED(v140 * v137))))) +
                 (float)(v136 * v142)) +
         (float)(v138 * v143);
  v146 = (float)((float)(PSEUDO_UNFUSED(
                     v141 * (float)((float)(v138 * v137) -
                                    (float)(PSEUDO_UNFUSED(v139 * v136))))) +
                 (float)((float)(v12 + v12) * v142)) +
         (float)(v140 * v143);
  v147 = a6[6];
  v148 = a6[5] + v144;
  a9[4] = a6[4] + v145;
  a9[5] = v148;
  result = v147 + v146;
  a9[6] = result;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
