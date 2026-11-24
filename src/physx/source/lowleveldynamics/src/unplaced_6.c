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
__attribute__((swiftcall)) void physx_Dy_SpatialMatrix_getInverse(PSEUDO_X8,
                                                                  float*);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_2e9a80(__int64, _QWORD*);
__int64 GameRoutine_33f400(__int64, _QWORD*);
__int64 PxGetBroadcastAllocator(_BYTE*);
__int64 PxGetFoundation();
__int64 physx_Dy_FeatherstoneArticulation_allocateScratchSpatialData(
    __int64, __int64, int, __int64*, unsigned int);
__int64 physx_Dy_FeatherstoneArticulation_computeRelativeGeneralizedForceInv(
    __int64, __int64, _QWORD*, char);
__int64 physx_Dy_FeatherstoneArticulation_initializeCommonData(__int64);
__int64 physx_Dy_FeatherstoneArticulation_inverseDynamicFloatingBase(
    __int64, __int64, __int64, __int64, unsigned __int8, unsigned __int8);
__int64 physx_PxGeometryQuery_computeGeomBounds(__int64);
__int64 physx_Pxstrnicmp(__int64);
__int64 physx_source_lowleveldynamics_src_32d400(__int64, __int64, __int64*);
extern char GameData_1a9f09e;
float GameRoutine_335480(__int64, __int64, _QWORD*);
float physx_Dy_FeatherstoneArticulation_computeCompositeSpatialInertiaAndZAForceInv(
    __int64, __int64, __int64);
int8x16_t
physx_Dy_FeatherstoneArticulation_computeArticulatedSpatialInertiaAndZ_NonSeparated(
    __int64, int32x2_t*, _QWORD*);
void GameRoutine_335780(__int64, __int64, __int64);
void physx_Dy_FeatherstoneArticulation_computeLinkVelocities(__int64, __int64,
                                                             int**);
void physx_Dy_FeatherstoneArticulation_computeSpatialInertia(__int64, __int64);
void physx_Dy_FeatherstoneArticulation_computeZ(__int64, __int64, float*,
                                                _QWORD*);
void physx_Dy_FeatherstoneArticulation_computeZAForceInv(__int64, __int64,
                                                         __int64);
__int64 physx_source_lowleveldynamics_src_32dc60(__int64 a1, __int64 a2,
                                                 _DWORD* a3, _DWORD* a4);
void physx_source_lowleveldynamics_src_337a60(__int64 a1, float* a2, _QWORD* a3,
                                              int a4);
void physx_source_lowleveldynamics_src_3380c0(__int64 a1, _QWORD* a2, char a3);
void physx_source_lowleveldynamics_src_338480(__int64 a1, _QWORD* a2);
void physx_source_lowleveldynamics_src_338b20(__int64 a1, _QWORD* a2);
__int64 physx_source_lowleveldynamics_src_33f090(__int64 a1, int a2);
__int64 physx_source_lowleveldynamics_src_33f0a0(__int64 a1);
__int64 physx_source_lowleveldynamics_src_33f0f0(__int64 a1, int a2);
void physx_source_lowleveldynamics_src_3496c0(int32x2_t* a1, float* a2,
                                              _QWORD* a3);
__int64 physx_source_lowleveldynamics_src_36f220(__int64 a1, _DWORD* a2,
                                                 _DWORD* a3, __int64 a4);

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
  if (v31 <= 1) {
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
  }
  else {
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
      if (v77 <= 0x1.0c6f7a0000000p-20f) {
        v88 = v151;
        v86 = v152;
        v87 = v150;
        v81 = a1;
      }
      else {
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
      if (v101 >= 0x1.cd2b2a0000000p-54f) {
        v154 = v97;
        v157 = v96;
        v111 = 0x1.0000000000000p+0f /
               GameRoutine_1a0a010((float)((float)(PSEUDO_UNFUSED(v97 * v97)) +
                                           (float)(v96 * v96)) +
                                   (float)(v98 * v98));
        v105 = v98 * v111;
        v155 = v154 * v111;
        v158 = v157 * v111;
        if (GameRoutine_1a0ccb0(v99) >= 0x1.5798ee0000000p-27f) {
          v112 = GameRoutine_1a0ab40(v101 * v111, v99);
          v103 = v112 + v112;
        }
        else {
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
      }
      else {
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
      if (v107 >= 4) {
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
      }
      else {
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

__int64 physx_source_lowleveldynamics_src_32dc60(__int64 a1, __int64 a2,
                                                 _DWORD* a3, _DWORD* a4)
{
  __int64 result;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  _QWORD* v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  __int64 v38;
  int v39;
  int v40;
  float* v41;
  int v42;
  int v43;
  int v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  float v49;
  float v50;
  unsigned int v51;
  float v52;
  float v53;
  float v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  float v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
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
  unsigned int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  int v87;
  int v88;
  int v89;
  __int64 v90;
  int v91;
  int v92;
  unsigned int v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int* v99;
  __int64 v100;
  int v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  int v105;
  int v106;
  int v107;
  int v108;
  unsigned int v109;
  __int64 v110;
  int v111;
  int v112;
  float v113;
  float v114;
  float v115;
  float* v116;
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
  __int64 v135;
  __int64 v136;
  __int64 i;
  unsigned int v138;
  unsigned int v139;
  unsigned int v140;
  unsigned int v141;
  unsigned int v142;
  unsigned int v143;
  int v144;
  int v145;
  int v146;
  __int64 v147;
  __int64 v148;
  int v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  int v153;
  int v154;
  char v155;
  unsigned int v156;
  unsigned int v157;
  __int64 v158;
  int v159;
  __int64 v160;

  result = physx_Dy_FeatherstoneArticulation_initializeCommonData(a1);
  v9 = *(unsigned int*)(a1 + 936);
  v10 = 0;
  v11 = *(_QWORD*)(a1 + 928);
  v12 = *(_QWORD*)(a1 + 960);
  v13 = **(unsigned __int8**)(a1 + 1032);
  if ((v13 & 1) != 0) {
    v14 = 0;
  }
  else {
    v14 = 6;
  }
  v145 = v14;
  *(_DWORD*)a4 = v14 + *(int*)(a1 + 1024);
  v153 = v14 - 6;
  *(_DWORD*)a3 = v14 - 6 + 6 * v9;
  if ((v13 & 1) == 0) {
    v15 = *(_QWORD**)(a2 + 8);
    *v15 = 1065353216;
    v15[1] = 0;
    v15[2] = 0;
    v16 = (unsigned int)*a4;
    *((_DWORD*)v15 + v16) = 0;
    *((_DWORD*)v15 + (unsigned int)(v16 + 1)) = 1065353216;
    *((_DWORD*)v15 + (unsigned int)(v16 + 2)) = 0;
    *((_DWORD*)v15 + (unsigned int)(v16 + 3)) = 0;
    *((_DWORD*)v15 + (unsigned int)(v16 + 4)) = 0;
    *((_DWORD*)v15 + (unsigned int)(v16 + 5)) = 0;
    *((_DWORD*)v15 + ((2 * (int)v16) | 1u)) = 0;
    *((_DWORD*)v15 + (unsigned int)(2 * v16)) = 0;
    *((_DWORD*)v15 + (unsigned int)(2 * v16 + 2)) = 1065353216;
    *((_DWORD*)v15 + (unsigned int)(2 * v16 + 3)) = 0;
    *((_DWORD*)v15 + (unsigned int)(2 * v16 + 4)) = 0;
    *((_DWORD*)v15 + (unsigned int)(2 * v16 + 5)) = 0;
    *((_DWORD*)v15 + (unsigned int)(3 * v16)) = 0;
    *((_DWORD*)v15 + (unsigned int)(3 * v16 + 1)) = 0;
    *((_DWORD*)v15 + (unsigned int)(3 * v16 + 2)) = 0;
    *((_DWORD*)v15 + (unsigned int)(3 * v16 + 3)) = 1065353216;
    *((_DWORD*)v15 + (unsigned int)(3 * v16 + 5)) = 0;
    *((_DWORD*)v15 + (unsigned int)(3 * v16 + 4)) = 0;
    *((_DWORD*)v15 + ((4 * (int)v16) | 1u)) = 0;
    v17 = 2 * v16;
    v18 = (4 * v16) | 3;
    v19 = (4 * v16) | 2;
    LODWORD(v15[v17]) = 0;
    LODWORD(v16) = 5 * v16;
    *((_DWORD*)v15 + v18) = 0;
    *((_DWORD*)v15 + v19) = 0;
    DWORDn(v15[v17 + 2], sizeof(v15[v17 + 2]) / 4 - 1) = 0;
    LODWORD(v15[v17 + 2]) = 1065353216;
    *((_DWORD*)v15 + (unsigned int)v16) = 0;
    v10 = 6;
    *((_DWORD*)v15 + (unsigned int)(v16 + 1)) = 0;
    *((_DWORD*)v15 + (unsigned int)(v16 + 2)) = 0;
    *((_DWORD*)v15 + (unsigned int)(v16 + 3)) = 0;
    *((_DWORD*)v15 + (unsigned int)(v16 + 4)) = 0;
    *((_DWORD*)v15 + (unsigned int)(v16 + 5)) = 1065353216;
  }
  if ((unsigned int)v9 >= 2) {
    v20 = (unsigned int)*a4;
    v21 = *(_QWORD*)(a1 + 968);
    v22 = 1;
    v23 = v10;
    v24 = v20 * (v10 + 2);
    v147 = *(_QWORD*)(a1 + 832);
    v148 = v20;
    v25 = *(_QWORD*)(a2 + 8);
    v26 = *(_QWORD*)(a1 + 784);
    v27 = v10 * v20;
    v151 = v11;
    v152 = v9;
    v150 = v12;
    v149 = v13;
    v160 = v21;
    v28 = v20 * (v10 + 3);
    v29 = 6 * v20;
    v30 = v20 * (v10 + 4);
    v31 = v20 + v10 * v20;
    v146 = 6 * v20;
    v32 = v20 * (v10 + 5);
    v144 = v14 - 5;
    do {
      v33 = v11 + 40 * v22;
      v34 = *(_QWORD*)(v33 + 16);
      v35 = *(unsigned int*)(v33 + 32);
      *(_DWORD*)(v12 + 16 * v22 + 12) = *(_DWORD*)(v34 + 76);
      if ((v13 & 1) == 0 || (_DWORD)v35 != 0) {
        if ((_DWORD)v35 == 0) {
          v157 = v23;
          v36 = 6;
        LABEL_15:
          v37 = 3 * v35;
          v158 = v22;
          v159 = v10;
          v38 = 0;
          v156 = v36;
          v154 = v153 + 2 * v37;
          v39 = v20 * (v154 + 3);
          result = (unsigned int)(v20 * (v154 + 4));
          v40 = v20 * (v154 + 5);
          v41 = (float*)(v147 + 12 * v22);
          v42 = v20 * v154;
          v155 = v36;
          v43 = v20 * (v154 + 2);
          if (v36 != 1) {
            v44 = 2 * v37;
            v45 = v36 & 0xFFFFFFFE;
            v46 = v20 * (v144 + v44);
            do {
              v47 = v40 + v38;
              v48 = result + v38;
              v50 = v41[1];
              v49 = v41[2];
              v51 = v42 + v38;
              v52 = *(float*)(v25 + 4LL * (unsigned int)(v40 + v38));
              v53 = *(float*)(v25 + 4LL * (unsigned int)(v39 + v38));
              v54 = *(float*)(v25 + 4LL * (unsigned int)(result + v38));
              v55 = v27 + v38;
              v56 = v46 + v38;
              v57 = v31 + v38;
              v58 = v43 + v38;
              v59 = -(float)(v54 * *v41);
              v60 = v24 + v38;
              v61 = v28 + v38;
              v62 = v30 + v38;
              v63 = v32 + v38;
              v64 = v39 + v38 + 1;
              v38 += 2;
              v65 = (float)(v54 * v49) - (float)(PSEUDO_UNFUSED(v52 * v50));
              v66 = (float)(v52 * *v41) - (float)(PSEUDO_UNFUSED(v53 * v49));
              *(float*)(v25 + 4LL * v55) = *(float*)(v25 + 4LL * v51) + v65;
              *(float*)(v25 + 4LL * v57) = v66 + *(float*)(v25 + 4LL * v56);
              *(float*)(v25 + 4LL * v60) = (float)(v59 + (float)(v53 * v50)) +
                                           *(float*)(v25 + 4LL * v58);
              *(float*)(v25 + 4LL * v61) = v53;
              *(float*)(v25 + 4LL * v62) = v54;
              *(float*)(v25 + 4LL * v63) = v52;
              v67 = *(float*)(v25 + 4LL * v64);
              v69 = v41[1];
              v68 = v41[2];
              v70 = *(float*)(v25 + 4LL * (unsigned int)(v48 + 1));
              v71 = *(float*)(v25 + 4LL * (unsigned int)(v47 + 1));
              v72 = (float)(v70 * v68) - (float)(PSEUDO_UNFUSED(v71 * v69));
              v73 = (float)(v71 * *v41) - (float)(PSEUDO_UNFUSED(v67 * v68));
              v74 = -(float)(v70 * *v41);
              *(float*)(v25 + 4LL * (v55 + 1)) =
                  *(float*)(v25 + 4LL * (v51 + 1)) + v72;
              *(float*)(v25 + 4LL * (v57 + 1)) =
                  v73 + *(float*)(v25 + 4LL * (v56 + 1));
              *(float*)(v25 + 4LL * (v60 + 1)) =
                  (float)(v74 + (float)(v67 * v69)) +
                  *(float*)(v25 + 4LL * (v58 + 1));
              *(float*)(v25 + 4LL * (v61 + 1)) = v67;
              *(float*)(v25 + 4LL * (v62 + 1)) = v70;
              *(float*)(v25 + 4LL * (v63 + 1)) = v71;
            } while (v45 != v38);
          }
          if ((v155 & 1) != 0) {
            result = (unsigned int)(result + v38);
            v76 = v41[1];
            v75 = v41[2];
            v10 = v159;
            v77 = *(float*)(v25 + 4LL * (unsigned int)(v40 + v38));
            v78 = *(float*)(v25 + 4LL * (unsigned int)(v39 + v38));
            v79 = *(float*)(v25 + 4LL * (unsigned int)result);
            v20 = v148;
            v12 = v150;
            v13 = v149;
            v80 = (float)(v79 * v75) - (float)(PSEUDO_UNFUSED(v77 * v76));
            v81 = (float)(v77 * *v41) - (float)(PSEUDO_UNFUSED(v78 * v75));
            v82 = (float)(v78 * v76) - (float)(PSEUDO_UNFUSED(v79 * *v41));
            *(float*)(v25 + 4LL * (unsigned int)(v148 * v159 + v38)) =
                *(float*)(v25 + 4LL * (unsigned int)(v42 + v38)) + v80;
            *(float*)(v25 + 4LL * ((unsigned int)v148 * (v159 | 1) +
                                   (unsigned int)v38)) =
                v81 + *(float*)(v25 + 4LL * ((unsigned int)v148 * (v154 | 1) +
                                             (unsigned int)v38));
            *(float*)(v25 + 4LL * (unsigned int)(v148 * (v159 + 2) + v38)) =
                v82 + *(float*)(v25 + 4LL * (unsigned int)(v43 + v38));
            *(float*)(v25 + 4LL * (unsigned int)(v148 * (v159 + 3) + v38)) =
                v78;
            *(float*)(v25 + 4LL * (unsigned int)(v148 * (v159 + 4) + v38)) =
                v79;
            v11 = v151;
            v9 = v152;
            *(float*)(v25 + 4LL * (unsigned int)(v148 * (v159 + 5) + v38)) =
                v77;
          }
          else {
            v11 = v151;
            v9 = v152;
            v12 = v150;
            v13 = v149;
            v10 = v159;
            v20 = v148;
          }
          v21 = v160;
          v29 = v146;
          v22 = v158;
          v83 = v156;
          v23 = v157;
          if (v156 >= v157) {
            goto LABEL_30;
          }
        LABEL_24:
          v84 = v83;
          v85 = v83;
          v86 = (v23 - v83) & 7LL;
          if (v86 != 0) {
            v87 = v83 + v32;
            result = v83 + v30;
            v88 = v83 + v28;
            v89 = v83 + v24;
            v90 = 0;
            v91 = v83 + v31;
            v92 = v83 + v27;
            do {
              *(_DWORD*)(v25 + 4LL * (unsigned int)(v92 + v90)) = 0;
              *(_DWORD*)(v25 + 4LL * (unsigned int)(v91 + v90)) = 0;
              *(_DWORD*)(v25 + 4LL * (unsigned int)(v89 + v90)) = 0;
              *(_DWORD*)(v25 + 4LL * (unsigned int)(v88 + v90)) = 0;
              *(_DWORD*)(v25 + 4LL * (unsigned int)(result + v90)) = 0;
              v93 = v87 + v90++;
              *(_DWORD*)(v25 + 4LL * v93) = 0;
            } while (v86 != v90);
            v85 = v84 + v90;
          }
          if (v84 - (unsigned __int64)v23 <= 0xFFFFFFFFFFFFFFF8LL) {
            do {
              v94 = v27 + v85;
              v95 = v31 + v85;
              result = (unsigned int)(v24 + v85);
              v96 = v28 + v85;
              *(_DWORD*)(v25 + 4LL * v94) = 0;
              v97 = v30 + v85;
              v98 = v32 + v85;
              *(_DWORD*)(v25 + 4LL * v95) = 0;
              *(_DWORD*)(v25 + 4LL * (unsigned int)result) = 0;
              *(_DWORD*)(v25 + 4LL * v96) = 0;
              v85 += 8;
              *(_DWORD*)(v25 + 4LL * v97) = 0;
              *(_DWORD*)(v25 + 4LL * v98) = 0;
              *(_DWORD*)(v25 + 4LL * (v94 + 1)) = 0;
              *(_DWORD*)(v25 + 4LL * (v95 + 1)) = 0;
              *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 1)) = 0;
              *(_DWORD*)(v25 + 4LL * (v96 + 1)) = 0;
              *(_DWORD*)(v25 + 4LL * (v97 + 1)) = 0;
              *(_DWORD*)(v25 + 4LL * (v98 + 1)) = 0;
              *(_DWORD*)(v25 + 4LL * (v94 + 2)) = 0;
              *(_DWORD*)(v25 + 4LL * (v95 + 2)) = 0;
              *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 2)) = 0;
              *(_DWORD*)(v25 + 4LL * (v96 + 2)) = 0;
              *(_DWORD*)(v25 + 4LL * (v97 + 2)) = 0;
              *(_DWORD*)(v25 + 4LL * (v98 + 2)) = 0;
              *(_DWORD*)(v25 + 4LL * (v94 + 3)) = 0;
              *(_DWORD*)(v25 + 4LL * (v95 + 3)) = 0;
              *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 3)) = 0;
              *(_DWORD*)(v25 + 4LL * (v96 + 3)) = 0;
              *(_DWORD*)(v25 + 4LL * (v97 + 3)) = 0;
              *(_DWORD*)(v25 + 4LL * (v98 + 3)) = 0;
              *(_DWORD*)(v25 + 4LL * (v94 + 4)) = 0;
              *(_DWORD*)(v25 + 4LL * (v95 + 4)) = 0;
              *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 4)) = 0;
              *(_DWORD*)(v25 + 4LL * (v96 + 4)) = 0;
              *(_DWORD*)(v25 + 4LL * (v97 + 4)) = 0;
              *(_DWORD*)(v25 + 4LL * (v98 + 4)) = 0;
              *(_DWORD*)(v25 + 4LL * (v94 + 5)) = 0;
              *(_DWORD*)(v25 + 4LL * (v95 + 5)) = 0;
              *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 5)) = 0;
              *(_DWORD*)(v25 + 4LL * (v96 + 5)) = 0;
              *(_DWORD*)(v25 + 4LL * (v97 + 5)) = 0;
              *(_DWORD*)(v25 + 4LL * (v98 + 5)) = 0;
              *(_DWORD*)(v25 + 4LL * (v94 + 6)) = 0;
              *(_DWORD*)(v25 + 4LL * (v95 + 6)) = 0;
              *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 6)) = 0;
              *(_DWORD*)(v25 + 4LL * (v96 + 6)) = 0;
              *(_DWORD*)(v25 + 4LL * (v97 + 6)) = 0;
              *(_DWORD*)(v25 + 4LL * (v98 + 6)) = 0;
              *(_DWORD*)(v25 + 4LL * (v94 + 7)) = 0;
              *(_DWORD*)(v25 + 4LL * (v95 + 7)) = 0;
              *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 7)) = 0;
              *(_DWORD*)(v25 + 4LL * (v96 + 7)) = 0;
              *(_DWORD*)(v25 + 4LL * (v97 + 7)) = 0;
              *(_DWORD*)(v25 + 4LL * (v98 + 7)) = 0;
            } while (v23 != v85);
          }
          goto LABEL_30;
        }
        v36 = *(int*)(v21 + 8 * v35) + v145 +
              *(unsigned __int8*)(v21 + 8 * v35 + 4);
        if (v36 != 0) {
          v157 = v23;
          goto LABEL_15;
        }
        v83 = 0;
        if (v23 != 0) {
          goto LABEL_24;
        }
      }
    LABEL_30:
      v99 = (unsigned int*)(v21 + 8 * v22);
      v100 = *((unsigned __int8*)v99 + 4);
      if (*((_BYTE*)v99 + 4) != 0) {
        result = *v99;
        v101 = v13;
        v102 = v9;
        v103 = v12;
        v104 = v11;
        v105 = v23 + v27;
        v106 = v23 + v31;
        v107 = v23 + v24;
        v108 = v23 + v28;
        v109 = v23;
        v110 = 0;
        v111 = v23 + v30;
        v112 = v23 + v32;
        do {
          v114 = *(float*)(v34 + 8);
          v113 = *(float*)(v34 + 12);
          v115 = *(float*)(v34 + 4);
          v116 = (float*)(v26 + 24LL * (unsigned int)(result + v110));
          v117 = (float)(v113 * v113) + -0x1.0000000000000p-1f;
          v118 = v116[1] + v116[1];
          v119 = v116[2] + v116[2];
          v120 = *v116 + *v116;
          v121 = (float)((float)(PSEUDO_UNFUSED(v118 * v115)) +
                         (float)(*(float*)v34 * v120)) +
                 (float)(v114 * v119);
          v122 = (float)(PSEUDO_UNFUSED(
                     v113 * (float)((float)(v115 * v119) -
                                    (float)(PSEUDO_UNFUSED(v114 * v118))))) +
                 (float)(v120 * v117);
          v123 = (float)(PSEUDO_UNFUSED(
                     v113 *
                     (float)((float)(v114 * v120) -
                             (float)(PSEUDO_UNFUSED(*(float*)v34 * v119))))) +
                 (float)(v118 * v117);
          v124 = (float)(*(float*)v34 * v118) -
                 (float)(PSEUDO_UNFUSED(v115 * v120));
          v125 = v116[3] + v116[3];
          v126 = v122 + (float)(*(float*)v34 * v121);
          v127 = v123 + (float)(v115 * v121);
          v128 = (float)((float)(PSEUDO_UNFUSED(v113 * v124)) +
                         (float)(v119 * v117)) +
                 (float)(v114 * v121);
          v129 = v116[4] + v116[4];
          v130 = v116[5] + v116[5];
          v131 = (float)((float)(PSEUDO_UNFUSED(v115 * v129)) +
                         (float)(*(float*)v34 * v125)) +
                 (float)(v114 * v130);
          v132 = (float)((float)(PSEUDO_UNFUSED(
                             v113 *
                             (float)((float)(v115 * v130) -
                                     (float)(PSEUDO_UNFUSED(v114 * v129))))) +
                         (float)(v125 * v117)) +
                 (float)(*(float*)v34 * v131);
          v133 = (float)((float)(PSEUDO_UNFUSED(
                             v113 * (float)((float)(v114 * v125) -
                                            (float)(PSEUDO_UNFUSED(
                                                *(float*)v34 * v130))))) +
                         (float)(v129 * v117)) +
                 (float)(v115 * v131);
          v134 = v113 * (float)((float)(*(float*)v34 * v129) -
                                (float)(PSEUDO_UNFUSED(v115 * v125)));
          *(float*)(v25 + 4LL * (unsigned int)(v105 + v110)) = v132;
          *(float*)(v25 + 4LL * (unsigned int)(v106 + v110)) = v133;
          *(float*)(v25 + 4LL * (unsigned int)(v107 + v110)) =
              (float)(v134 + (float)(v130 * v117)) + (float)(v114 * v131);
          *(float*)(v25 + 4LL * (unsigned int)(v108 + v110)) = v126;
          *(float*)(v25 + 4LL * (unsigned int)(v111 + v110)) = v127;
          LODWORD(v116) = v112 + v110++;
          *(float*)(v25 + 4LL * (unsigned int)v116) = v128;
        } while (v100 != v110);
        v23 = v109 + v110;
        v11 = v104;
        v12 = v103;
        v9 = v102;
        v13 = v101;
        v21 = v160;
      }
      if (v23 < (unsigned int)v20) {
        v135 = v23;
        v136 = ((unsigned int)v20 - v23) & 7LL;
        if (v136 != 0) {
          result = v23 + v30;
          for (i = 0; i != v136; ++i) {
            *(_DWORD*)(v25 + 4LL * (v23 + v27 + (unsigned int)i)) = 0;
            *(_DWORD*)(v25 + 4LL * (v23 + v31 + (unsigned int)i)) = 0;
            *(_DWORD*)(v25 + 4LL * (v23 + v24 + (unsigned int)i)) = 0;
            *(_DWORD*)(v25 + 4LL * (v23 + v28 + (unsigned int)i)) = 0;
            *(_DWORD*)(v25 + 4LL * (unsigned int)(result + i)) = 0;
            v138 = v23 + v32 + i;
            *(_DWORD*)(v25 + 4LL * v138) = 0;
          }
          v135 = v23 + i;
        }
        if ((unsigned __int64)v23 - v20 <= 0xFFFFFFFFFFFFFFF8LL) {
          do {
            v139 = v27 + v135;
            v140 = v31 + v135;
            v141 = v24 + v135;
            result = (unsigned int)(v28 + v135);
            *(_DWORD*)(v25 + 4LL * v139) = 0;
            v142 = v30 + v135;
            v143 = v32 + v135;
            *(_DWORD*)(v25 + 4LL * v140) = 0;
            *(_DWORD*)(v25 + 4LL * v141) = 0;
            *(_DWORD*)(v25 + 4LL * (unsigned int)result) = 0;
            v135 += 8;
            *(_DWORD*)(v25 + 4LL * v142) = 0;
            *(_DWORD*)(v25 + 4LL * v143) = 0;
            *(_DWORD*)(v25 + 4LL * (v139 + 1)) = 0;
            *(_DWORD*)(v25 + 4LL * (v140 + 1)) = 0;
            *(_DWORD*)(v25 + 4LL * (v141 + 1)) = 0;
            *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 1)) = 0;
            *(_DWORD*)(v25 + 4LL * (v142 + 1)) = 0;
            *(_DWORD*)(v25 + 4LL * (v143 + 1)) = 0;
            *(_DWORD*)(v25 + 4LL * (v139 + 2)) = 0;
            *(_DWORD*)(v25 + 4LL * (v140 + 2)) = 0;
            *(_DWORD*)(v25 + 4LL * (v141 + 2)) = 0;
            *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 2)) = 0;
            *(_DWORD*)(v25 + 4LL * (v142 + 2)) = 0;
            *(_DWORD*)(v25 + 4LL * (v143 + 2)) = 0;
            *(_DWORD*)(v25 + 4LL * (v139 + 3)) = 0;
            *(_DWORD*)(v25 + 4LL * (v140 + 3)) = 0;
            *(_DWORD*)(v25 + 4LL * (v141 + 3)) = 0;
            *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 3)) = 0;
            *(_DWORD*)(v25 + 4LL * (v142 + 3)) = 0;
            *(_DWORD*)(v25 + 4LL * (v143 + 3)) = 0;
            *(_DWORD*)(v25 + 4LL * (v139 + 4)) = 0;
            *(_DWORD*)(v25 + 4LL * (v140 + 4)) = 0;
            *(_DWORD*)(v25 + 4LL * (v141 + 4)) = 0;
            *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 4)) = 0;
            *(_DWORD*)(v25 + 4LL * (v142 + 4)) = 0;
            *(_DWORD*)(v25 + 4LL * (v143 + 4)) = 0;
            *(_DWORD*)(v25 + 4LL * (v139 + 5)) = 0;
            *(_DWORD*)(v25 + 4LL * (v140 + 5)) = 0;
            *(_DWORD*)(v25 + 4LL * (v141 + 5)) = 0;
            *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 5)) = 0;
            *(_DWORD*)(v25 + 4LL * (v142 + 5)) = 0;
            *(_DWORD*)(v25 + 4LL * (v143 + 5)) = 0;
            *(_DWORD*)(v25 + 4LL * (v139 + 6)) = 0;
            *(_DWORD*)(v25 + 4LL * (v140 + 6)) = 0;
            *(_DWORD*)(v25 + 4LL * (v141 + 6)) = 0;
            *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 6)) = 0;
            *(_DWORD*)(v25 + 4LL * (v142 + 6)) = 0;
            *(_DWORD*)(v25 + 4LL * (v143 + 6)) = 0;
            *(_DWORD*)(v25 + 4LL * (v139 + 7)) = 0;
            *(_DWORD*)(v25 + 4LL * (v140 + 7)) = 0;
            *(_DWORD*)(v25 + 4LL * (v141 + 7)) = 0;
            *(_DWORD*)(v25 + 4LL * (unsigned int)(result + 7)) = 0;
            *(_DWORD*)(v25 + 4LL * (v142 + 7)) = 0;
            *(_DWORD*)(v25 + 4LL * (v143 + 7)) = 0;
          } while (v20 != v135);
        }
      }
      v10 += 6;
      ++v22;
      v27 += v29;
      v31 += v29;
      v24 += v29;
      v28 += v29;
      v30 += v29;
      v32 += v29;
    } while (v22 != v9);
  }
  return result;
}

void physx_source_lowleveldynamics_src_337a60(__int64 a1, float* a2, _QWORD* a3,
                                              int a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  char* v5;
  float v7;
  float v8;
  __int64 v9;
  int v10;
  char v11;
  _BOOL4 v12;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  _DWORD* v38;
  __int64 v39;
  __int64 v40;
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  _DWORD* v46;
  __int64 v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  __int64 v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  _DWORD* v61;
  float v62;
  float v63;
  float v64;
  int v65;
  __int64 v66;
  _DWORD* v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned int v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  int v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  struct {
    _DWORD* v83;
    __int64 v84;
    __int64 v85;
    _DWORD* v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    char gap96_[4];
    float v94;
    float v95;
    float v96;
  } v83_;

  if (*(_BYTE*)(a1 + 1048) == 1) {
    v4 = PxGetFoundation();
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v4 + 88LL))(
        v4, 8,
        "/Inside/Lib/PhysX/O/physx/source/lowleveldynamics/src/"
        "DyFeatherstoneInverseDynamic.cpp",
        524,
        "Articulation::getGeneralisedGravityForce() commonInit need to be "
        "called first to initialize data!");
    return;
  }
  v5 = *(char**)(a1 + 1032);
  v7 = -a2[1];
  v8 = -a2[2];
  v9 = a3[22];
  v10 = *(_DWORD*)(a1 + 936);
  v83_.v94 = -*a2;
  v83_.v95 = v7;
  v83_.v96 = v8;
  v11 = *v5;
  v12 = (*v5 & 1) == 0;
  if ((*v5 & 1) == 0 && (a4 & 1) == 0) {
    v83_.v83 = nullptr;
    v83_.v84 = 0;
    v83_.v85 = 0;
    v83_.v86 = nullptr;
    v83_.v87 = 0;
    v83_.v88 = 0;
    v83_.v89 = 0;
    v83_.v90 = 0;
    v83_.v91 = 0;
    v83_.v92 = 0;
    v83_.v93 = 0;
    v14 = physx_Dy_FeatherstoneArticulation_allocateScratchSpatialData(
        a1, v9, v10, (__int64*)&v83_.v83, 0);
    v15 = a3[10];
    v16 = v14;
    v83_.v89 = 0;
    v83_.v87 = 0;
    v83_.v90 = 0;
    v83_.v91 = v15;
    physx_Dy_FeatherstoneArticulation_inverseDynamicFloatingBase(
        a1, a1 + 128, (__int64)&v83_.v94, (__int64)&v83_.v83, 0, 0);
    v17 = *(_QWORD*)(v9 + 24);
    if (v17 <= v16 && v17 + *(unsigned int*)(v9 + 32) > v16) {
      physx_Pxstrnicmp(*(_QWORD*)v9);
      v18 = *(_DWORD*)(v9 + 16);
      v19 = *(_QWORD*)(v9 + 8);
      v20 = -2;
      LODWORD(v21) = v18 + 1;
      do {
        v22 = (unsigned int)(v21 - 2);
        ++v20;
        v21 = (unsigned int)(v21 - 1);
      } while (*(_QWORD*)(v19 + 8LL * (unsigned int)v22) < v16);
      if ((unsigned int)v21 < v18) {
        v23 = (_QWORD*)(v19 + 8 * v22);
        if ((((_BYTE)v20 + 1) & 7) != 0) {
          v24 = ((_BYTE)v20 + 1) & 7;
          do {
            --v24;
            v25 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8 * v21++);
            *v23++ = v25;
          } while (v24 != 0);
        }
        if (v20 >= 7) {
          v26 = 8 * v21;
          v27 = v18 - v21;
          v28 = 0;
          do {
            v29 = &v23[v28];
            *v29 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + v26 + 8 * v28);
            v29[1] = *(_QWORD*)(*(_QWORD*)(v9 + 8) + v26 + 8 * v28 + 8);
            v29[2] = *(_QWORD*)(*(_QWORD*)(v9 + 8) + v26 + 8 * v28 + 16);
            v29[3] = *(_QWORD*)(*(_QWORD*)(v9 + 8) + v26 + 8 * v28 + 24);
            v29[4] = *(_QWORD*)(*(_QWORD*)(v9 + 8) + v26 + 8 * v28 + 32);
            v29[5] = *(_QWORD*)(*(_QWORD*)(v9 + 8) + v26 + 8 * v28 + 40);
            v29[6] = *(_QWORD*)(*(_QWORD*)(v9 + 8) + v26 + 8 * v28 + 48);
            v30 = *(_QWORD*)(v9 + 8) + v26 + 8 * v28;
            v28 += 8;
            v29[7] = *(_QWORD*)(v30 + 56);
          } while (v27 != (_DWORD)v28);
        }
      }
    LABEL_49:
      v81 = *(_QWORD*)v9;
      *(_DWORD*)(v9 + 16) = v18 - 1;
      physx_PxGeometryQuery_computeGeomBounds(v81);
      return;
    }
    if (v16 == 0) {
      return;
    }
  LABEL_51:
    v82 = *(_QWORD*)PxGetBroadcastAllocator(nullptr);
    (*(void (**)(void))(v82 + 24))();
    return;
  }
  v33 = (unsigned int)(32 * v10);
  physx_Pxstrnicmp(*(_QWORD*)v9);
  v35 = (_QWORD*)(v9 + 8);
  v34 = *(_QWORD*)(v9 + 8);
  v36 = *(unsigned int*)(v9 + 16);
  v37 = *(_QWORD*)(v34 + 8LL * (unsigned int)(v36 - 1));
  if ((signed __int64)(v37 - *(_QWORD*)(v9 + 24)) >= v33) {
    v38 = (_DWORD*)(v37 - v33);
    v42 = *(_DWORD*)(v9 + 20);
    v83_.v83 = v38;
    if ((v42 & 0x7FFFFFFFu) <= (unsigned int)v36) {
      GameRoutine_2e9a80(v9 + 8, &v83_.v83);
      v38 = v83_.v83;
      v39 = physx_PxGeometryQuery_computeGeomBounds(*(_QWORD*)v9);
      v40 = a1;
      v41 = a4;
      if (v10 == 0) {
        goto LABEL_32;
      }
    }
    else {
      *(_QWORD*)(v34 + 8 * v36) = v38;
      *(_DWORD*)(v9 + 16) = v36 + 1;
      v39 = physx_PxGeometryQuery_computeGeomBounds(*(_QWORD*)v9);
      v40 = a1;
      v41 = a4;
      if (v10 == 0) {
        goto LABEL_32;
      }
    }
  }
  else {
    v38 = nullptr;
    v39 = physx_PxGeometryQuery_computeGeomBounds(*(_QWORD*)v9);
    v40 = a1;
    v41 = a4;
    if (v10 == 0) {
      goto LABEL_32;
    }
  }
  v43 = *(_QWORD*)(v40 + 928);
  if (v10 == 1) {
    v44 = 0;
  LABEL_31:
    v59 = v83_.v96;
    v60 = *(float*)(*(_QWORD*)(v43 + 40 * v44 + 16) + 124LL);
    v61 = &v38[8 * v44];
    v62 = 0x1.0000000000000p+0f / v60;
    v63 = v83_.v94;
    v64 = v83_.v95;
    *((_QWORD*)v61 + 2) = 0;
    v61[6] = 0;
    *(float*)v61 = v63 * v62;
    *((float*)v61 + 1) = v62 * v64;
    *((float*)v61 + 2) = v62 * v59;
    goto LABEL_32;
  }
  v45 = (__int64*)(v43 + 56);
  v46 = v38 + 8;
  v47 = 0;
  do {
    v48 = v83_.v94;
    v49 = v83_.v95;
    v50 = v83_.v96;
    v47 -= 2;
    v51 = *(float*)(*(v45 - 5) + 124);
    *(v46 - 4) = 0;
    *(_QWORD*)(v46 - 3) = 0;
    v52 = 0x1.0000000000000p+0f / v51;
    *((float*)v46 - 8) = v48 * v52;
    *((float*)v46 - 7) = v52 * v49;
    *((float*)v46 - 6) = v52 * v50;
    v53 = *v45;
    v45 += 10;
    v54 = v83_.v94;
    v55 = v83_.v95;
    v56 = v83_.v96;
    v57 = *(float*)(v53 + 124);
    v46[4] = 0;
    *(_QWORD*)(v46 + 5) = 0;
    v58 = 0x1.0000000000000p+0f / v57;
    *(float*)v46 = v54 * v58;
    *((float*)v46 + 1) = v58 * v55;
    *((float*)v46 + 2) = v58 * v56;
    v46 += 16;
  } while (-(__int64)(v10 & 0xFFFFFFFE) != v47);
  v44 = -v47;
  if ((v10 & 1) != 0) {
    goto LABEL_31;
  }
LABEL_32:
  v83_.v83 = nullptr;
  v83_.v84 = 0;
  v83_.v87 = 0;
  v83_.v88 = 0;
  v83_.v89 = 0;
  v83_.v90 = 0;
  v83_.v92 = 0;
  v83_.v93 = 0;
  v83_.v85 = 0;
  v83_.v86 = v38;
  if ((v41 & 1) != 0) {
    v65 = v12 & v41;
    v66 = 24;
    if ((v11 & 1) != 0) {
      v66 = 0;
    }
    v83_.v91 = a3[4] + v66;
    GameRoutine_335780(v39, v40 + 128, (__int64)&v83_.v83);
    if (v65 != 0) {
      v67 = (_DWORD*)a3[4];
      *(_DWORD*)v67 = *(_DWORD*)v38;
      v67[1] = v38[1];
      v67[2] = v38[2];
      v67[3] = v38[4];
      v67[4] = v38[5];
      v67[5] = v38[6];
    }
  }
  else {
    v83_.v91 = a3[10];
    GameRoutine_335780(v39, v40 + 128, (__int64)&v83_.v83);
  }
  v68 = *(_QWORD*)(v9 + 24);
  if (v68 <= (unsigned __int64)v38 &&
      v68 + *(unsigned int*)(v9 + 32) > (unsigned __int64)v38) {
    physx_Pxstrnicmp(*(_QWORD*)v9);
    v18 = *(_DWORD*)(v9 + 16);
    v69 = *(_QWORD*)(v9 + 8);
    v70 = -2;
    LODWORD(v71) = v18 + 1;
    do {
      v72 = (unsigned int)(v71 - 2);
      ++v70;
      v71 = (unsigned int)(v71 - 1);
    } while (*(_QWORD*)(v69 + 8LL * (unsigned int)v72) < (unsigned __int64)v38);
    if ((unsigned int)v71 < v18) {
      v73 = (_QWORD*)(v69 + 8 * v72);
      if ((((_BYTE)v70 + 1) & 7) != 0) {
        v74 = ((_BYTE)v70 + 1) & 7;
        do {
          --v74;
          v75 = *(_QWORD*)(*v35 + 8 * v71++);
          *v73++ = v75;
        } while (v74 != 0);
      }
      if (v70 >= 7) {
        v76 = 8 * v71;
        v77 = v18 - v71;
        v78 = 0;
        do {
          v79 = &v73[v78];
          *v79 = *(_QWORD*)(*v35 + v76 + 8 * v78);
          v79[1] = *(_QWORD*)(*v35 + v76 + 8 * v78 + 8);
          v79[2] = *(_QWORD*)(*v35 + v76 + 8 * v78 + 16);
          v79[3] = *(_QWORD*)(*v35 + v76 + 8 * v78 + 24);
          v79[4] = *(_QWORD*)(*v35 + v76 + 8 * v78 + 32);
          v79[5] = *(_QWORD*)(*v35 + v76 + 8 * v78 + 40);
          v79[6] = *(_QWORD*)(*v35 + v76 + 8 * v78 + 48);
          v80 = *v35 + v76 + 8 * v78;
          v78 += 8;
          v79[7] = *(_QWORD*)(v80 + 56);
        } while (v77 != (_DWORD)v78);
      }
    }
    goto LABEL_49;
  }
  if (v38 != nullptr) {
    goto LABEL_51;
  }
}

void physx_source_lowleveldynamics_src_3380c0(__int64 a1, _QWORD* a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  int v5;
  __int64 v6;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _DWORD* v22;
  _DWORD* v23;
  unsigned __int64 v24;
  __int64 v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned int v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  struct {
    int* v49[3];
    _DWORD* v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
  } v49_;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_BYTE*)(a1 + 1048) == 1) {
    v3 = PxGetFoundation(),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v3 + 88LL))(
        v3, 8,
        "/Inside/Lib/PhysX/O/physx/source/lowleveldynamics/src/"
        "DyFeatherstoneInverseDynamic.cpp",
        638,
        "Articulation::getCoriolisAndCentrifugalForce() commonInit need to be "
        "called first to initialize data!"),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return;
  }
  v5 = *(_DWORD*)(a1 + 936);
  v6 = a2[22];
  v9 = **(_BYTE**)(a1 + 1032);
  memset(v49_.v49, 0, sizeof(v49_.v49));
  v49_.v50 = nullptr;
  v49_.v51 = 0;
  v49_.v52 = 0;
  v49_.v53 = 0;
  v49_.v54 = 0;
  v49_.v55 = 0;
  v49_.v56 = 0;
  v49_.v57 = 0;
  v10 = physx_Dy_FeatherstoneArticulation_allocateScratchSpatialData(
      a1, v6, v5, (__int64*)v49_.v49, 0),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v11 = a2[7];
  v12 = a2[3];
  v13 = 24;
  v14 = v10;
  v49_.v51 = 0;
  if ((v9 & 1) != 0) {
    v13 = 0;
  }
  v49_.v53 = v11;
  v49_.v54 = 0;
  v15 = a2[10];
  v16 = v12 + v13;
  if ((a3 & 1) != 0) {
    v15 = v16;
  }
  v49_.v55 = v15;
  if ((v9 & 1) != 0) {
    v47 = 0;
    v48 = 0;
    physx_Dy_FeatherstoneArticulation_computeLinkVelocities(a1, a1 + 128,
                                                            v49_.v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    physx_source_lowleveldynamics_src_32d400(a1, a1 + 128, (__int64*)v49_.v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    physx_Dy_FeatherstoneArticulation_computeZ(a1, a1 + 128, (float*)&v47,
                                               v49_.v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameRoutine_335480(v27, a1 + 128, v49_.v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    physx_Dy_FeatherstoneArticulation_computeZAForceInv(v29, a1 + 128,
                                                        (__int64)v49_.v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameRoutine_335780(v30, a1 + 128, (__int64)v49_.v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v31 = *(_QWORD*)(v6 + 24);
    if (v31 > v14 | v31 + *(unsigned int*)(v6 + 32) <= v14) {
    LABEL_14:
      if (v14 != 0) {
        v26 = PxGetBroadcastAllocator(nullptr),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        (*(void (**)(__int64, unsigned __int64))(*(_QWORD*)v26 + 24LL))(v26,
                                                                        v14),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      return;
    }
  }
  else {
    v47 = 0;
    v48 = 0;
    physx_Dy_FeatherstoneArticulation_computeLinkVelocities(a1, a1 + 128,
                                                            v49_.v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    physx_source_lowleveldynamics_src_32d400(a1, a1 + 128, (__int64*)v49_.v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    physx_Dy_FeatherstoneArticulation_computeZ(a1, a1 + 128, (float*)&v47,
                                               v49_.v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameRoutine_335480(v17, a1 + 128, v49_.v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    physx_Dy_FeatherstoneArticulation_computeZAForceInv(v19, a1 + 128,
                                                        (__int64)v49_.v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    physx_Dy_FeatherstoneArticulation_computeCompositeSpatialInertiaAndZAForceInv(
        v20, a1 + 128, (__int64)v49_.v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    physx_Dy_FeatherstoneArticulation_computeRelativeGeneralizedForceInv(
        v21, a1 + 128, v49_.v49, a3 & 1),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((a3 & 1) != 0) {
      v22 = v49_.v50;
      v23 = (_DWORD*)a2[3];
      *(_DWORD*)v23 = *v49_.v50;
      v23[1] = v22[1];
      v23[2] = v22[2];
      v23[3] = v22[4];
      v23[4] = v22[5];
      v23[5] = v22[6];
    }
    v24 = *(_QWORD*)(v6 + 24);
    if (v24 > v14 | v24 + *(unsigned int*)(v6 + 32) <= v14) {
      goto LABEL_14;
    }
  }
  physx_Pxstrnicmp(*(_QWORD*)v6),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v33 = *(_DWORD*)(v6 + 16);
  v34 = *(_QWORD*)(v6 + 8);
  v35 = -2;
  LODWORD(v36) = v33 + 1;
  do {
    v37 = (unsigned int)(v36 - 2);
    ++v35;
    v36 = (unsigned int)(v36 - 1);
  } while (*(_QWORD*)(v34 + 8LL * (unsigned int)v37) < v14);
  if ((unsigned int)v36 < v33) {
    v38 = (_QWORD*)(v34 + 8 * v37);
    if ((((_BYTE)v35 + 1) & 7) != 0) {
      v39 = ((_BYTE)v35 + 1) & 7;
      do {
        --v39;
        v40 = *(_QWORD*)(*(_QWORD*)(v6 + 8) + 8 * v36++);
        *v38++ = v40;
      } while (v39 != 0);
    }
    if (v35 >= 7) {
      v41 = 8 * v36;
      v42 = v33 - v36;
      v43 = 0;
      do {
        v44 = &v38[v43];
        *v44 = *(_QWORD*)(*(_QWORD*)(v6 + 8) + v41 + 8 * v43);
        v44[1] = *(_QWORD*)(*(_QWORD*)(v6 + 8) + v41 + 8 * v43 + 8);
        v44[2] = *(_QWORD*)(*(_QWORD*)(v6 + 8) + v41 + 8 * v43 + 16);
        v44[3] = *(_QWORD*)(*(_QWORD*)(v6 + 8) + v41 + 8 * v43 + 24);
        v44[4] = *(_QWORD*)(*(_QWORD*)(v6 + 8) + v41 + 8 * v43 + 32);
        v44[5] = *(_QWORD*)(*(_QWORD*)(v6 + 8) + v41 + 8 * v43 + 40);
        v44[6] = *(_QWORD*)(*(_QWORD*)(v6 + 8) + v41 + 8 * v43 + 48);
        v45 = *(_QWORD*)(v6 + 8) + v41 + 8 * v43;
        v43 += 8;
        v44[7] = *(_QWORD*)(v45 + 56);
      } while (v42 != (_DWORD)v43);
    }
  }
  v46 = *(_QWORD*)v6;
  *(_DWORD*)(v6 + 16) = v33 - 1;
  physx_PxGeometryQuery_computeGeomBounds(v46),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
}

void physx_source_lowleveldynamics_src_338480(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  float* v17;
  float** v18;
  float* v19;
  float* v20;
  float v21;
  float v22;
  float v23;
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
  _BYTE* v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  __int64 v77;
  unsigned int v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  int v82;
  __int64 v83;
  __int64 v84;
  int v85;
  __int64 v86;
  _QWORD* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned int v92;
  __int64 v93;
  unsigned int v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  int v98;
  __int64 v99;
  __int64 v100;
  int v101;
  __int64 v102;
  _QWORD* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  struct {
    unsigned __int64 v107;
    int v108;
  } v107_;
  struct {
    _QWORD v109[2];
    __int64 v110;
    __int64 v111;
    unsigned __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    __int64 v118;
  } v109_;

  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v75 = COERCE_AS(__typeof__(v75),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_BYTE*)(a1 + 1048) == 1) {
    v2 = PxGetFoundation(),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v2 + 88LL))(
        v2, 8,
        "/Inside/Lib/PhysX/O/physx/source/lowleveldynamics/src/"
        "DyFeatherstoneInverseDynamic.cpp",
        684,
        "Articulation::getCoriolisAndCentrifugalForce() commonInit need to be "
        "called first to initialize data!"),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return;
  }
  v3 = *(unsigned int*)(a1 + 936);
  v4 = a2[22];
  v109_.v109[0] = 0;
  v109_.v109[1] = 0;
  v109_.v110 = 0;
  v109_.v111 = 0;
  v109_.v112 = 0;
  v109_.v113 = 0;
  v109_.v114 = 0;
  v109_.v115 = 0;
  v109_.v116 = 0;
  v109_.v117 = 0;
  v109_.v118 = 0;
  v7 = physx_Dy_FeatherstoneArticulation_allocateScratchSpatialData(
      a1, v4, v3, v109_.v109, 0),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v75 = COERCE_AS(__typeof__(v75),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v8 = a2[10];
  v109_.v114 = 0;
  v109_.v115 = 0;
  v9 = v7;
  v10 = (unsigned int)(32 * v3);
  v109_.v116 = v8;
  physx_Pxstrnicmp(*(_QWORD*)v4),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v75 = COERCE_AS(__typeof__(v75),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v11 = *(unsigned int*)(v4 + 16);
  v13 = (_QWORD*)(v4 + 8);
  v12 = *(_QWORD*)(v4 + 8);
  v14 = 0;
  v15 = *(_QWORD*)(v12 + 8LL * (unsigned int)(v11 - 1));
  if ((signed __int64)(v15 - *(_QWORD*)(v4 + 24)) >= v10) {
    v14 = v15 - v10;
    v16 = *(_DWORD*)(v4 + 20);
    v107_.v107 = v14;
    if ((v16 & 0x7FFFFFFFu) <= (unsigned int)v11) {
      GameRoutine_2e9a80(v4 + 8, &v107_.v107),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v14 = v107_.v107;
      physx_PxGeometryQuery_computeGeomBounds(*(_QWORD*)v4),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((_DWORD)v3 == 0) {
        goto LABEL_9;
      }
      goto LABEL_7;
    }
    *(_QWORD*)(v12 + 8 * v11) = v14;
    *(_DWORD*)(v4 + 16) = v11 + 1;
  }
  physx_PxGeometryQuery_computeGeomBounds(*(_QWORD*)v4),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v75 = COERCE_AS(__typeof__(v75),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((_DWORD)v3 == 0) {
    goto LABEL_9;
  }
LABEL_7:
  v17 = (float*)(v14 + 16);
  v18 = (float**)(*(_QWORD*)(a1 + 928) + 16LL);
  v19 = (float*)(*a2 + 16LL);
  do {
    v20 = *v18;
    v18 += 5;
    --v3;
    v21 = v20[31];
    v22 = v21 * *(v19 - 4);
    v23 = v21 * *(v19 - 3);
    v24 = v21 * *(v19 - 2);
    *(v17 - 4) = v22;
    *(v17 - 3) = v23;
    *(v17 - 2) = v24;
    v25 = *v20;
    v26 = v20[1];
    v27 = v20[2];
    v28 = v20[3];
    v29 = v20[30];
    v30 = v26 + v26;
    v31 = v27 + v27;
    v32 = v26 * (float)(v26 + v26);
    v33 = v27 * (float)(v27 + v27);
    v34 = (float)(v25 + v25) * v26;
    v35 = (float)(v25 + v25) * v27;
    v36 = (float)(v25 + v25) * v28;
    v37 = v30 * v27;
    v38 = v30 * v28;
    v39 = v31 * v28;
    v40 = 0x1.0000000000000p+0f -
          (float)(PSEUDO_UNFUSED(v25 * (float)(v25 + v25)));
    v41 = v34 + v39;
    v42 = v34 - v39;
    v43 = v35 - v38;
    v44 = v35 + v38;
    v45 = (float)(0x1.0000000000000p+0f - v32) - v33;
    v46 = v40 - v33;
    v47 = v37 + v36;
    v48 = v37 - v36;
    v49 = v40 - v32;
    v50 = v20[28];
    v51 = v20[29];
    v52 = v44 * v29;
    v53 = v48 * v29;
    v54 = v51 * v42;
    v55 = v50 * v45;
    v56 = v51 * v46;
    v57 = v50 * v41;
    v58 = (float)((float)(PSEUDO_UNFUSED(v42 * (float)(v51 * v42))) +
                  (float)((float)(v50 * v45) * v45)) +
          (float)((float)(v44 * v29) * v44);
    v59 = (float)((float)(PSEUDO_UNFUSED(v47 * (float)(v51 * v47))) +
                  (float)((float)(v50 * v43) * v43)) +
          (float)((float)(v49 * v29) * v49);
    v60 = (float)((float)(PSEUDO_UNFUSED(v46 * (float)(v51 * v46))) +
                  (float)(v57 * v41)) +
          (float)((float)(v48 * v29) * v48);
    v61 = (float)((float)(PSEUDO_UNFUSED(v46 * v54)) + (float)(v55 * v41)) +
          (float)(v52 * v48);
    v62 = (float)((float)(PSEUDO_UNFUSED(v47 * v54)) + (float)(v55 * v43)) +
          (float)(v52 * v49);
    v63 = (float)((float)(PSEUDO_UNFUSED(v47 * v56)) + (float)(v57 * v43)) +
          (float)(v53 * v49);
    v64 = v19[1];
    v65 = (float)(PSEUDO_UNFUSED(*v19 * v58)) +
          (float)(PSEUDO_UNFUSED(v64 * v61));
    v66 = (float)(PSEUDO_UNFUSED(*v19 * v61)) +
          (float)(PSEUDO_UNFUSED(v64 * v60));
    v67 = (float)(PSEUDO_UNFUSED(*v19 * v62)) +
          (float)(PSEUDO_UNFUSED(v64 * v63));
    v68 = v19[2];
    v19 += 8;
    *v17 = (float)(PSEUDO_UNFUSED(v68 * v62)) + v65;
    v17[1] = (float)(PSEUDO_UNFUSED(v68 * v63)) + v66;
    v17[2] = (float)(PSEUDO_UNFUSED(v68 * v59)) + v67;
    v17 += 8;
  } while (v3 != 0);
LABEL_9:
  v69 = *(_BYTE**)(a1 + 1032);
  v109_.v112 = v14;
  if ((*v69 & 1) != 0) {
    v107_.v107 = 0;
    v107_.v108 = 0;
    physx_Dy_FeatherstoneArticulation_computeLinkVelocities(a1, a1 + 128,
                                                            (int**)v109_.v109),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v71 = (unsigned int)(32 * *(int*)(a1 + 936));
    if ((_DWORD)v71 != 0) {
      GameRoutine_1a0ba50(v109_.v110, 0, v71),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    physx_Dy_FeatherstoneArticulation_computeZ(a1, a1 + 128,
                                               (float*)&v107_.v107, v109_.v109),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameRoutine_335480(v72, a1 + 128, v109_.v109),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    physx_Dy_FeatherstoneArticulation_computeZAForceInv(v74, a1 + 128,
                                                        (__int64)v109_.v109),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameRoutine_335780(v75, a1 + 128, (__int64)v109_.v109),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v70 = *(_QWORD*)(v4 + 24);
    if (v70 > v9) {
      goto LABEL_26;
    }
  }
  else {
    v107_.v107 = 0;
    v107_.v108 = 0;
    physx_Dy_FeatherstoneArticulation_inverseDynamicFloatingBase(
        a1, a1 + 128, (__int64)&v107_.v107, (__int64)v109_.v109, 0, 0),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v70 = *(_QWORD*)(v4 + 24);
    if (v70 > v9) {
      goto LABEL_26;
    }
  }
  if (v70 + *(unsigned int*)(v4 + 32) > v9) {
    physx_Pxstrnicmp(*(_QWORD*)v4),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v76 = *(_DWORD*)(v4 + 16);
    v77 = *(_QWORD*)(v4 + 8);
    v78 = -2;
    LODWORD(v79) = v76 + 1;
    do {
      v80 = (unsigned int)(v79 - 2);
      ++v78;
      v79 = (unsigned int)(v79 - 1);
    } while (*(_QWORD*)(v77 + 8LL * (unsigned int)v80) < v9);
    if ((unsigned int)v79 < v76) {
      v81 = (_QWORD*)(v77 + 8 * v80);
      if ((((_BYTE)v78 + 1) & 7) != 0) {
        v82 = ((_BYTE)v78 + 1) & 7;
        do {
          --v82;
          v83 = *(_QWORD*)(*v13 + 8 * v79++);
          *v81++ = v83;
        } while (v82 != 0);
      }
      if (v78 >= 7) {
        v84 = 8 * v79;
        v85 = v76 - v79;
        v86 = 0;
        do {
          v87 = &v81[v86];
          *v87 = *(_QWORD*)(*v13 + v84 + 8 * v86);
          v87[1] = *(_QWORD*)(*v13 + v84 + 8 * v86 + 8);
          v87[2] = *(_QWORD*)(*v13 + v84 + 8 * v86 + 16);
          v87[3] = *(_QWORD*)(*v13 + v84 + 8 * v86 + 24);
          v87[4] = *(_QWORD*)(*v13 + v84 + 8 * v86 + 32);
          v87[5] = *(_QWORD*)(*v13 + v84 + 8 * v86 + 40);
          v87[6] = *(_QWORD*)(*v13 + v84 + 8 * v86 + 48);
          v88 = *v13 + v84 + 8 * v86;
          v86 += 8;
          v87[7] = *(_QWORD*)(v88 + 56);
        } while (v85 != (_DWORD)v86);
      }
    }
    v89 = *(_QWORD*)v4;
    *(_DWORD*)(v4 + 16) = v76 - 1;
    physx_PxGeometryQuery_computeGeomBounds(v89),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    goto LABEL_28;
  }
LABEL_26:
  if (v9 != 0) {
    v90 = PxGetBroadcastAllocator(nullptr),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    (*(void (**)(__int64, unsigned __int64))(*(_QWORD*)v90 + 24LL))(v90, v9),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
LABEL_28:
  v91 = *(_QWORD*)(v4 + 24);
  if (v91 > v14 || v91 + *(unsigned int*)(v4 + 32) <= v14) {
    if (v14 != 0) {
      v106 = PxGetBroadcastAllocator(nullptr),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v75 = COERCE_AS(__typeof__(v75),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      (*(void (**)(__int64, unsigned __int64))(*(_QWORD*)v106 + 24LL))(v106,
                                                                       v14),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  else {
    physx_Pxstrnicmp(*(_QWORD*)v4),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v92 = *(_DWORD*)(v4 + 16);
    v93 = *(_QWORD*)(v4 + 8);
    v94 = -2;
    LODWORD(v95) = v92 + 1;
    do {
      v96 = (unsigned int)(v95 - 2);
      ++v94;
      v95 = (unsigned int)(v95 - 1);
    } while (*(_QWORD*)(v93 + 8LL * (unsigned int)v96) < v14);
    if ((unsigned int)v95 < v92) {
      v97 = (_QWORD*)(v93 + 8 * v96);
      if ((((_BYTE)v94 + 1) & 7) != 0) {
        v98 = ((_BYTE)v94 + 1) & 7;
        do {
          --v98;
          v99 = *(_QWORD*)(*v13 + 8 * v95++);
          *v97++ = v99;
        } while (v98 != 0);
      }
      if (v94 >= 7) {
        v100 = 8 * v95;
        v101 = v92 - v95;
        v102 = 0;
        do {
          v103 = &v97[v102];
          *v103 = *(_QWORD*)(*v13 + v100 + 8 * v102);
          v103[1] = *(_QWORD*)(*v13 + v100 + 8 * v102 + 8);
          v103[2] = *(_QWORD*)(*v13 + v100 + 8 * v102 + 16);
          v103[3] = *(_QWORD*)(*v13 + v100 + 8 * v102 + 24);
          v103[4] = *(_QWORD*)(*v13 + v100 + 8 * v102 + 32);
          v103[5] = *(_QWORD*)(*v13 + v100 + 8 * v102 + 40);
          v103[6] = *(_QWORD*)(*v13 + v100 + 8 * v102 + 48);
          v104 = *v13 + v100 + 8 * v102;
          v102 += 8;
          v103[7] = *(_QWORD*)(v104 + 56);
        } while (v101 != (_DWORD)v102);
      }
    }
    v105 = *(_QWORD*)v4;
    *(_DWORD*)(v4 + 16) = v92 - 1;
    physx_PxGeometryQuery_computeGeomBounds(v105),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
}

void physx_source_lowleveldynamics_src_338b20(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v31;
  __int64 v32;
  int v33;
  struct {
    _QWORD v34[2];
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
  } v34_;

  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_BYTE*)(a1 + 1048) == 1) {
    v2 = PxGetFoundation(),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v2 + 88LL))(
        v2, 8,
        "/Inside/Lib/PhysX/O/physx/source/lowleveldynamics/src/"
        "DyFeatherstoneInverseDynamic.cpp",
        735,
        "ArticulationHelper::getJointForce() commonInit need to be called "
        "first to initialize data!"),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return;
  }
  v3 = a2[8];
  v4 = a2[22];
  v5 = *(_DWORD*)(a1 + 936);
  v34_.v34[0] = 0;
  v34_.v34[1] = 0;
  v34_.v35 = 0;
  v34_.v36 = 0;
  v34_.v42 = 0;
  v34_.v43 = 0;
  v34_.v37 = 0;
  v34_.v38 = 0;
  v34_.v39 = 0;
  v34_.v40 = v3;
  v34_.v41 = a2[10];
  v7 = physx_Dy_FeatherstoneArticulation_allocateScratchSpatialData(
      a1, v4, v5, v34_.v34, 0),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((**(_BYTE**)(a1 + 1032) & 1) != 0) {
    v32 = 0;
    v33 = 0;
    physx_Dy_FeatherstoneArticulation_computeLinkVelocities(a1, a1 + 128,
                                                            (int**)v34_.v34),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v24 = (unsigned int)(32 * *(int*)(a1 + 936));
    if ((_DWORD)v24 != 0) {
      GameRoutine_1a0ba50(v34_.v35, 0, v24),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    physx_Dy_FeatherstoneArticulation_computeZ(a1, a1 + 128, (float*)&v32,
                                               v34_.v34),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameRoutine_335480(v25, a1 + 128, v34_.v34),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    physx_Dy_FeatherstoneArticulation_computeZAForceInv(v27, a1 + 128,
                                                        (__int64)v34_.v34),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameRoutine_335780(v28, a1 + 128, (__int64)v34_.v34),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v29 = *(_QWORD*)(v4 + 24);
    if (v29 > v7 | v29 + *(unsigned int*)(v4 + 32) <= v7) {
      goto LABEL_26;
    }
  }
  else {
    v32 = 0;
    v33 = 0;
    physx_Dy_FeatherstoneArticulation_inverseDynamicFloatingBase(
        a1, a1 + 128, (__int64)&v32, (__int64)v34_.v34, 0, 0),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v8 = *(_QWORD*)(v4 + 24);
    if (v8 > v7 | v8 + *(unsigned int*)(v4 + 32) <= v7) {
    LABEL_26:
      if (v7 != 0) {
        v31 = PxGetBroadcastAllocator(nullptr),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        (*(void (**)(__int64, unsigned __int64))(*(_QWORD*)v31 + 24LL))(v31,
                                                                        v7),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      return;
    }
  }
  physx_Pxstrnicmp(*(_QWORD*)v4),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v10 = *(_DWORD*)(v4 + 16);
  v11 = *(_QWORD*)(v4 + 8);
  v12 = -2;
  LODWORD(v13) = v10 + 1;
  do {
    v14 = (unsigned int)(v13 - 2);
    ++v12;
    v13 = (unsigned int)(v13 - 1);
  } while (*(_QWORD*)(v11 + 8LL * (unsigned int)v14) < v7);
  if ((unsigned int)v13 < v10) {
    v15 = (_QWORD*)(v11 + 8 * v14);
    if ((((_BYTE)v12 + 1) & 7) != 0) {
      v16 = ((_BYTE)v12 + 1) & 7;
      do {
        --v16;
        v17 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 8 * v13++);
        *v15++ = v17;
      } while (v16 != 0);
    }
    if (v12 >= 7) {
      v18 = 8 * v13;
      v19 = v10 - v13;
      v20 = 0;
      do {
        v21 = &v15[v20];
        *v21 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + v18 + 8 * v20);
        v21[1] = *(_QWORD*)(*(_QWORD*)(v4 + 8) + v18 + 8 * v20 + 8);
        v21[2] = *(_QWORD*)(*(_QWORD*)(v4 + 8) + v18 + 8 * v20 + 16);
        v21[3] = *(_QWORD*)(*(_QWORD*)(v4 + 8) + v18 + 8 * v20 + 24);
        v21[4] = *(_QWORD*)(*(_QWORD*)(v4 + 8) + v18 + 8 * v20 + 32);
        v21[5] = *(_QWORD*)(*(_QWORD*)(v4 + 8) + v18 + 8 * v20 + 40);
        v21[6] = *(_QWORD*)(*(_QWORD*)(v4 + 8) + v18 + 8 * v20 + 48);
        v22 = *(_QWORD*)(v4 + 8) + v18 + 8 * v20;
        v20 += 8;
        v21[7] = *(_QWORD*)(v22 + 56);
      } while (v19 != (_DWORD)v20);
    }
  }
  v23 = *(_QWORD*)v4;
  *(_DWORD*)(v4 + 16) = v10 - 1;
  physx_PxGeometryQuery_computeGeomBounds(v23),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
}

__int64 physx_source_lowleveldynamics_src_33f090(__int64 a1, int a2)
{
  return physx_source_lowleveldynamics_src_33f0f0(a1 + 8, a2);
}

__int64 physx_source_lowleveldynamics_src_33f0a0(__int64 a1)
{
  __int64 v1;

  v1 = a1 + 40LL * *(unsigned int*)(a1 + 128);
  return (**(__int64 (***)(__int64))(v1 + 48))(v1 + 48);
}

__int64 physx_source_lowleveldynamics_src_33f0f0(__int64 a1, int a2)
{
  __int64 v2;
  _QWORD* v3;
  unsigned int* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;

  v3 = (_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0) {
    v5 = (unsigned int*)(v2 + 0x8000);
    v6 = *(unsigned int*)(v2 + 0x8000);
    v7 = v6 + ((a2 + 15) & 0xFFFFFFF0);
    if (v7 >> 15 == 0) {
      goto LABEL_15;
    }
  }
  v8 = *(unsigned int*)(a1 + 32);
  if ((unsigned int)v8 >= *(_DWORD*)(a1 + 24)) {
    v13 = PxGetBroadcastAllocator(nullptr);
    v14 = (*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
        *(_QWORD*)v13 + 16LL))(
        v13, 32772, &GameData_1a9f09e,
        "/Inside/Lib/PhysX/O/physx/source/lowleveldynamics/src/"
        "DyFeatherstoneInverseDynamic.cpp",
        1597);
    *(_QWORD*)(a1 + 8) = v14;
    *(_DWORD*)(v14 + 0x8000) = 0;
    v15 = *(unsigned int*)(a1 + 24);
    if ((*(_DWORD*)(a1 + 28) & 0x7FFFFFFFu) <= (unsigned int)v15) {
      GameRoutine_33f400(a1 + 16, v3);
      v16 = *(_DWORD*)(a1 + 24);
    }
    else {
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v15) = v14;
      v16 = v15 + 1;
      *(_DWORD*)(a1 + 24) = v16;
    }
    *(_DWORD*)(a1 + 32) = v16;
    v2 = *(_QWORD*)(a1 + 8);
    v5 = (unsigned int*)(v2 + 0x8000);
    v6 = *(unsigned int*)(v2 + 0x8000);
    v7 = v6 + ((a2 + 15) & 0xFFFFFFF0);
    if (v7 >> 15 != 0) {
      return 0;
    }
  LABEL_15:
    *v5 = v7;
    return v2 + v6;
  }
  *(_DWORD*)(a1 + 32) = v8 + 1;
  v9 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v8);
  if ((unsigned int)(a2 + 15) >= 0x8000) {
    v10 = 0;
  }
  else {
    v10 = (a2 + 15) & 0xFFFFFFF0;
  }
  *(_QWORD*)(a1 + 8) = v9;
  *(_DWORD*)(v9 + 0x8000) = v10;
  if ((unsigned int)(a2 + 15) >= 0x8000) {
    return 0;
  }
  else {
    return v9;
  }
}

void physx_source_lowleveldynamics_src_3496c0(int32x2_t* a1, float* a2,
                                              _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float* v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
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
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  float* v43;
  unsigned __int64 v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  __int64 v51;
  float* v52;
  __int64 v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float* v59;
  float v60;
  float v61;
  float v62;
  float* v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  unsigned int* v73;
  float v74;
  __int64 v75;
  float v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  float* v81;
  float* v82;
  float* v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float* v89;
  float* v90;
  float* v91;
  __int64 v92;
  float v93;
  float v94;
  float v95;
  float v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  float* v100;
  __int64 v101;
  float v102;
  __int64 v103;
  float* v104;
  float* v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float* v115;
  float* v116;
  __int64 v117;
  float v118;
  float v119;
  float v120;
  __int64 v121;
  float* v122;
  unsigned int v123;
  float v124;
  float v125;
  float* v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float* v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float* v142;
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
  float* v154;
  unsigned int v155;
  float* v156;
  float* v157;
  float v158;
  unsigned __int64 v159;
  unsigned int v160;
  __int64 v161;
  unsigned int v162;
  __int64 v163;
  __int64 v164;
  _QWORD* v165;
  int v166;
  __int64 v167;
  __int64 v168;
  int v169;
  __int64 v170;
  _QWORD* v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  unsigned __int64 v177;
  float v178[2];
  float v179[2];
  struct {
    float v180[2];
    float v181;
    float v182;
    float v183;
    float v184;
    float v185;
    float v186;
    float v187;
    float v188;
    float v189;
    float v190;
    float v191;
    float v192;
    float v193;
    float v194;
    float v195;
    float v196;
    float v197;
    float v198;
    float v199;
    float v200;
    float v201;
  } v180_;
  struct {
    int* v202;
    __int64 v203;
    __int64 v204;
    float* v205;
    __int64 v206;
    __int64 v207;
    __int64 v208;
    __int64 v209;
    __int64 v210;
    __int64 v211;
    __int64 v212;
  } v202_;

  if (LANES64(a1[131]).n64_u8[0] == 1) {
    v3 = PxGetFoundation();
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v3 + 88LL))(
        v3, 8,
        "/Inside/Lib/PhysX/O/physx/source/lowleveldynamics/src/"
        "DyFeatherstoneForwardDynamic.cpp",
        2555,
        "Articulation::getJointAcceleration() commonInit need to be called "
        "first to initialize data!");
    return;
  }
  v4 = LANES64(a1[117]).n64_u32[0];
  v5 = a3[22];
  v202_.v202 = nullptr;
  v202_.v203 = 0;
  v202_.v204 = 0;
  v202_.v205 = nullptr;
  v202_.v206 = 0;
  v202_.v207 = 0;
  v202_.v208 = 0;
  v202_.v209 = 0;
  v202_.v210 = 0;
  v202_.v211 = 0;
  v202_.v212 = 0;
  v9 = physx_Dy_FeatherstoneArticulation_allocateScratchSpatialData(
      (__int64)a1, v5, v4, (__int64*)&v202_.v202, 0);
  v10 = a3[10];
  v11 = v9;
  v202_.v208 = a3[7];
  v202_.v210 = v10;
  physx_Dy_FeatherstoneArticulation_computeSpatialInertia((__int64)a1,
                                                          (__int64)&a1[16]);
  physx_Dy_FeatherstoneArticulation_computeLinkVelocities(
      (__int64)a1, (__int64)&a1[16], &v202_.v202);
  physx_Dy_FeatherstoneArticulation_computeZ((__int64)a1, (__int64)&a1[16], a2,
                                             &v202_.v202);
  v12 = physx_source_lowleveldynamics_src_32d400((__int64)a1, (__int64)&a1[16],
                                                 (__int64*)&v202_.v202);
  physx_Dy_FeatherstoneArticulation_computeArticulatedSpatialInertiaAndZ_NonSeparated(
      v12, a1 + 16, &v202_.v202);
  v13 = v202_.v203;
  v14 = v202_.v204;
  if ((*(_BYTE*)LANES64(a1[129]).n64_u64[0] & 1) == 0) {
    v15 = v202_.v205;
    physx_Dy_SpatialMatrix_getInverse((void*)(v178),
                                      (float*)LANES64(a1[82]).n64_u64[0]);
    v16 = v15[1];
    v17 = v15[2];
    v18 = v180_.v183;
    v19 = v15[4];
    v20 = v15[5];
    v21 = v15[6];
    v22 = (float)((float)(PSEUDO_UNFUSED(v178[1] * v20)) +
                  (float)(v178[0] * v19)) +
          (float)(v179[0] * v21);
    v23 = (float)((float)(PSEUDO_UNFUSED(v180_.v180[0] * v20)) +
                  (float)(v179[1] * v19)) +
          (float)(v180_.v180[1] * v21);
    v24 = (float)(PSEUDO_UNFUSED(v180_.v182 * v20)) + (float)(v180_.v181 * v19);
    v25 = (float)((float)((float)(PSEUDO_UNFUSED(*v15 * v178[0])) +
                          (float)(PSEUDO_UNFUSED(v16 * v179[1]))) +
                  (float)(PSEUDO_UNFUSED(v17 * v180_.v181))) +
          (float)((float)((float)(PSEUDO_UNFUSED(v19 * v180_.v184)) +
                          (float)(PSEUDO_UNFUSED(v20 * v180_.v187))) +
                  (float)(PSEUDO_UNFUSED(v21 * v180_.v190)));
    v26 = (float)((float)((float)(PSEUDO_UNFUSED(*v15 * v179[0])) +
                          (float)(PSEUDO_UNFUSED(v16 * v180_.v180[1]))) +
                  (float)(PSEUDO_UNFUSED(v17 * v180_.v183))) +
          (float)((float)((float)(PSEUDO_UNFUSED(v19 * v180_.v186)) +
                          (float)(PSEUDO_UNFUSED(v20 * v180_.v189))) +
                  (float)(PSEUDO_UNFUSED(v21 * v180_.v192)));
    v27 =
        -(float)((float)((float)((float)(PSEUDO_UNFUSED(*v15 * v178[1])) +
                                 (float)(PSEUDO_UNFUSED(v16 * v180_.v180[0]))) +
                         (float)(PSEUDO_UNFUSED(v17 * v180_.v182))) +
                 (float)((float)((float)(PSEUDO_UNFUSED(v19 * v180_.v185)) +
                                 (float)(PSEUDO_UNFUSED(v20 * v180_.v188))) +
                         (float)(PSEUDO_UNFUSED(v21 * v180_.v191))));
    v28 = (float)(PSEUDO_UNFUSED(*v15 * v180_.v193)) +
          (float)(PSEUDO_UNFUSED(v16 * v180_.v196));
    v29 = v16 * v180_.v197;
    v30 = (float)(PSEUDO_UNFUSED(*v15 * v180_.v195)) +
          (float)(PSEUDO_UNFUSED(v16 * v180_.v198));
    v31 = v180_.v199;
    v32 = v180_.v200;
    v33 = (float)(PSEUDO_UNFUSED(*v15 * v180_.v194)) + v29;
    v34 = v180_.v201;
    *(float*)v13 = -v25;
    *(float*)(v13 + 4) = v27;
    *(_DWORD*)(v13 + 12) = 0;
    *(_DWORD*)(v13 + 28) = 0;
    *(float*)(v13 + 8) = -v26;
    *(float*)(v13 + 16) =
        -(float)(v22 + (float)(v28 + (float)(PSEUDO_UNFUSED(v17 * v31))));
    *(float*)(v13 + 20) =
        -(float)(v23 + (float)(v33 + (float)(PSEUDO_UNFUSED(v17 * v32))));
    *(float*)(v13 + 24) =
        -(float)((float)(v24 + (float)(v18 * v21)) +
                 (float)(v30 + (float)(PSEUDO_UNFUSED(v17 * v34))));
  }
  if ((unsigned int)v4 >= 2) {
    v35 = LANES64(a1[90]).n64_u64[0];
    v36 = a3[8];
    v37 = 1;
    v38 = LANES64(a1[88]).n64_u64[0];
    v39 = LANES64(a1[116]).n64_u64[0];
    v40 = LANES64(a1[104]).n64_u64[0];
    v41 = LANES64(a1[121]).n64_u64[0];
    v42 = LANES64(a1[100]).n64_u64[0];
    v177 = LANES64(a1[92]).n64_u64[0];
    v175 = v35 + 64;
    v176 = v35 + 16;
    v43 = (float*)(v38 + 60);
    v44 = v38 + 36;
    while (1) {
      v59 = (float*)(v40 + 12 * v37);
      v60 = *v59;
      v61 = v59[1];
      v62 = v59[2];
      v63 = (float*)(v13 + 32LL * *(unsigned int*)(v39 + 40 * v37 + 32));
      v65 = v63[1];
      v64 = v63[2];
      v66 = *v63;
      v67 = (float)(PSEUDO_UNFUSED(v62 * v65)) - (float)(v61 * v64);
      v68 = (float)(PSEUDO_UNFUSED(v60 * v64)) - (float)(v62 * *v63);
      v69 = (float)(PSEUDO_UNFUSED(v61 * *v63)) - (float)(v60 * v65);
      v70 = v63[5];
      v71 = v63[4] + v67;
      v72 = v63[6];
      v73 = (unsigned int*)(v41 + 8 * v37);
      v74 = v68 + v70;
      v75 = *((unsigned __int8*)v73 + 4);
      v76 = v69 + v72;
      if (*((_BYTE*)v73 + 4) == 0) {
      LABEL_7:
        v45 = 0x0.0p+0f;
        v46 = 0x0.0p+0f;
        v47 = 0x0.0p+0f;
        v48 = 0x0.0p+0f;
        v49 = 0x0.0p+0f;
        v50 = 0x0.0p+0f;
        goto LABEL_8;
      }
      v77 = *v73;
      if ((unsigned int)v75 >= 4) {
        break;
      }
      v78 = 0;
      v79 = v75 & 3;
      if ((v75 & 3) != 0) {
        goto LABEL_16;
      }
    LABEL_18:
      v97 = v36 + 4 * v77;
      v98 = 0;
      v99 = v44;
      v100 = v43;
      do {
        *(_DWORD*)(v97 + 4 * v98) = 0;
        if ((unsigned int)v75 < 8) {
          v101 = 0;
          v102 = 0x0.0p+0f;
          if ((v75 & 7) == 0) {
            goto LABEL_19;
          }
        LABEL_26:
          v115 = &v178[v101];
          v116 = (float*)(v99 + 12 * v101);
          v117 = v75 & 7;
          do {
            v118 = *v116;
            v116 += 3;
            v119 = v118;
            v120 = *v115++;
            --v117;
            v102 = v102 + (float)(v119 * v120);
            *(float*)(v97 + 4 * v98) = v102;
          } while (v117 != 0);
          goto LABEL_19;
        }
        v102 = 0x0.0p+0f;
        v103 = 0;
        v104 = v180_.v180;
        v105 = v100;
        do {
          v103 -= 8;
          v106 = v102 + (float)(*(v105 - 6) * *(v104 - 4));
          *(float*)(v97 + 4 * v98) = v106;
          v107 = v106 + (float)(*(v105 - 3) * *(v104 - 3));
          *(float*)(v97 + 4 * v98) = v107;
          v108 = v107 + (float)(*v105 * *(v104 - 2));
          *(float*)(v97 + 4 * v98) = v108;
          v109 = v108 + (float)(v105[3] * *(v104 - 1));
          *(float*)(v97 + 4 * v98) = v109;
          v110 = v109 + (float)(v105[6] * *v104);
          *(float*)(v97 + 4 * v98) = v110;
          v111 = v110 + (float)(v105[9] * v104[1]);
          *(float*)(v97 + 4 * v98) = v111;
          v112 = v111 + (float)(v105[12] * v104[2]);
          *(float*)(v97 + 4 * v98) = v112;
          v113 = v105[15];
          v114 = v104[3];
          v105 += 24;
          v104 += 8;
          v102 = v112 + (float)(v113 * v114);
          *(float*)(v97 + 4 * v98) = v102;
        } while (-(__int64)((unsigned __int8)v75 & 0xF8) != v103);
        v101 = -v103;
        if ((v75 & 7) != 0) {
          goto LABEL_26;
        }
      LABEL_19:
        ++v98;
        ++v100;
        v99 += 4LL;
      } while (v98 != v75);
      if ((_DWORD)v75 == 0) {
        goto LABEL_7;
      }
      if ((unsigned int)v75 >= 4) {
        v50 = 0x0.0p+0f;
        v49 = 0x0.0p+0f;
        v121 = 0;
        v122 = (float*)(v36 + 8 + 4 * v77);
        v48 = 0x0.0p+0f;
        v47 = 0x0.0p+0f;
        v46 = 0x0.0p+0f;
        v45 = 0x0.0p+0f;
        do {
          v123 = v77 + v121;
          v124 = *(v122 - 2);
          v125 = *(v122 - 1);
          v121 += 4;
          v126 = (float*)(v42 + 24LL * v123);
          v127 = v45 + (float)(PSEUDO_UNFUSED(v124 * *v126));
          v128 = v46 + (float)(PSEUDO_UNFUSED(v124 * v126[1]));
          v129 = v47 + (float)(PSEUDO_UNFUSED(v124 * v126[2]));
          v130 = v126[4];
          v131 = v126[5];
          v132 = v48 + (float)(PSEUDO_UNFUSED(v124 * v126[3]));
          v133 = (float*)(v42 + 24LL * (v123 + 1));
          v134 = v49 + (float)(PSEUDO_UNFUSED(v124 * v130));
          v135 = v50 + (float)(PSEUDO_UNFUSED(v124 * v131));
          v136 = v127 + (float)(PSEUDO_UNFUSED(v125 * *v133));
          v137 = v128 + (float)(PSEUDO_UNFUSED(v125 * v133[1]));
          v138 = v125 * v133[3];
          v139 = v129 + (float)(PSEUDO_UNFUSED(v125 * v133[2]));
          v140 = v133[4];
          v141 = v133[5];
          v142 = (float*)(v42 + 24LL * (v123 + 2));
          v143 = v132 + v138;
          v144 = v134 + (float)(PSEUDO_UNFUSED(v125 * v140));
          v145 = v135 + (float)(PSEUDO_UNFUSED(v125 * v141));
          v146 = *v122;
          v147 = v122[1];
          v122 += 4;
          v148 = v136 + (float)(PSEUDO_UNFUSED(v146 * *v142));
          v149 = v137 + (float)(PSEUDO_UNFUSED(v146 * v142[1]));
          v150 = v139 + (float)(PSEUDO_UNFUSED(v146 * v142[2]));
          v151 = v146 * v142[3];
          v152 = v142[4];
          v153 = v142[5];
          v154 = (float*)(v42 + 24LL * (v123 + 3));
          v45 = v148 + (float)(PSEUDO_UNFUSED(v147 * *v154));
          v46 = v149 + (float)(PSEUDO_UNFUSED(v147 * v154[1]));
          v47 = v150 + (float)(PSEUDO_UNFUSED(v147 * v154[2]));
          v48 = (float)(v143 + v151) + (float)(PSEUDO_UNFUSED(v147 * v154[3]));
          v49 = (float)(v144 + (float)(PSEUDO_UNFUSED(v146 * v152))) +
                (float)(PSEUDO_UNFUSED(v147 * v154[4]));
          v50 = (float)(v145 + (float)(PSEUDO_UNFUSED(v146 * v153))) +
                (float)(PSEUDO_UNFUSED(v147 * v154[5]));
        } while ((v75 & 0xFC) != v121);
      }
      else {
        v50 = 0x0.0p+0f;
        v49 = 0x0.0p+0f;
        v121 = 0;
        v48 = 0x0.0p+0f;
        v47 = 0x0.0p+0f;
        v46 = 0x0.0p+0f;
        v45 = 0x0.0p+0f;
      }
      if ((v75 & 3) != 0) {
        v155 = v77 + v121;
        v156 = (float*)(v36 + 4 * v121 + 4 * v77);
        do {
          v157 = (float*)(v42 + 24LL * v155);
          v158 = *v156++;
          ++v155;
          --v79;
          v45 = v45 + (float)(PSEUDO_UNFUSED(v158 * *v157));
          v46 = v46 + (float)(PSEUDO_UNFUSED(v158 * v157[1]));
          v47 = v47 + (float)(PSEUDO_UNFUSED(v158 * v157[2]));
          v48 = v48 + (float)(PSEUDO_UNFUSED(v158 * v157[3]));
          v49 = v49 + (float)(PSEUDO_UNFUSED(v158 * v157[4]));
          v50 = v50 + (float)(PSEUDO_UNFUSED(v158 * v157[5]));
        } while (v79 != 0);
      }
    LABEL_8:
      v51 = 32 * v37++;
      v43 += 9;
      v44 += 36LL;
      v52 = (float*)(v14 + v51);
      v53 = v13 + v51;
      v54 = v46 + (float)(v65 + v52[1]);
      v55 = v47 + (float)(v64 + v52[2]);
      v56 = v71 + v52[4];
      v57 = v52[6];
      v58 = v74 + v52[5];
      *(float*)v53 = v45 + (float)(v66 + *v52);
      *(float*)(v53 + 4) = v54;
      *(float*)(v53 + 8) = v55;
      *(_DWORD*)(v53 + 12) = 0;
      *(_DWORD*)(v53 + 28) = 0;
      *(float*)(v53 + 16) = v48 + v56;
      *(float*)(v53 + 20) = v49 + v58;
      *(float*)(v53 + 24) = v50 + (float)(v76 + v57);
      if (v37 == v4) {
        goto LABEL_38;
      }
    }
    v80 = 0;
    v81 = v179;
    v82 = (float*)(v175 + 32 * v77);
    v83 = (float*)(v177 + 8 + 4 * v77);
    do {
      v80 -= 4;
      *(v81 - 2) =
          *(v83 - 2) -
          (float)((float)((float)((float)(PSEUDO_UNFUSED(v65 * *(v82 - 11))) +
                                  (float)(*(v82 - 12) * v66)) +
                          (float)(*(v82 - 10) * v64)) +
                  (float)((float)((float)(PSEUDO_UNFUSED(v74 * *(v82 - 15))) +
                                  (float)(*(v82 - 16) * v71)) +
                          (float)(*(v82 - 14) * v76)));
      *(v81 - 1) =
          *(v83 - 1) -
          (float)((float)((float)((float)(PSEUDO_UNFUSED(v65 * *(v82 - 3))) +
                                  (float)(*(v82 - 4) * v66)) +
                          (float)(*(v82 - 2) * v64)) +
                  (float)((float)((float)(PSEUDO_UNFUSED(v74 * *(v82 - 7))) +
                                  (float)(*(v82 - 8) * v71)) +
                          (float)(*(v82 - 6) * v76)));
      *v81 =
          *v83 - (float)((float)((float)((float)(PSEUDO_UNFUSED(v65 * v82[5])) +
                                         (float)(v82[4] * v66)) +
                                 (float)(v82[6] * v64)) +
                         (float)((float)((float)(PSEUDO_UNFUSED(v74 * v82[1])) +
                                         (float)(*v82 * v71)) +
                                 (float)(v82[2] * v76)));
      v84 = (float)((float)(PSEUDO_UNFUSED(v65 * v82[13])) +
                    (float)(v82[12] * v66)) +
            (float)(v82[14] * v64);
      v85 = (float)(PSEUDO_UNFUSED(v74 * v82[9])) + (float)(v82[8] * v71);
      v86 = v82[10];
      v82 += 32;
      v87 = v84 + (float)(v85 + (float)(v86 * v76));
      v88 = v83[1];
      v83 += 4;
      v81[1] = v88 - v87;
      v81 += 4;
    } while (-(__int64)((unsigned __int8)v75 & 0xFC) != v80);
    v78 = -v80;
    v79 = v75 & 3;
    if ((v75 & 3) == 0) {
      goto LABEL_18;
    }
  LABEL_16:
    v89 = &v178[v78];
    v90 = (float*)(v177 + 4 * v78 + 4 * v77);
    v91 = (float*)(v176 + 32 * v78 + 32 * v77);
    v92 = v79;
    do {
      --v92;
      v93 =
          (float)((float)(PSEUDO_UNFUSED(v65 * v91[1])) + (float)(*v91 * v66)) +
          (float)(v91[2] * v64);
      v94 =
          (float)(PSEUDO_UNFUSED(v74 * *(v91 - 3))) + (float)(*(v91 - 4) * v71);
      v95 = *(v91 - 2);
      v91 += 8;
      v96 = *v90++;
      *v89++ = v96 - (float)(v93 + (float)(v94 + (float)(v95 * v76)));
    } while (v92 != 0);
    goto LABEL_18;
  }
LABEL_38:
  v159 = *(_QWORD*)(v5 + 24);
  if (v159 > v11 || v159 + *(unsigned int*)(v5 + 32) <= v11) {
    if (v11 != 0) {
      v174 = PxGetBroadcastAllocator(nullptr);
      (*(void (**)(__int64, unsigned __int64))(*(_QWORD*)v174 + 24LL))(v174,
                                                                       v11);
    }
  }
  else {
    physx_Pxstrnicmp(*(_QWORD*)v5);
    v160 = *(_DWORD*)(v5 + 16);
    v161 = *(_QWORD*)(v5 + 8);
    v162 = -2;
    LODWORD(v163) = v160 + 1;
    do {
      v164 = (unsigned int)(v163 - 2);
      ++v162;
      v163 = (unsigned int)(v163 - 1);
    } while (*(_QWORD*)(v161 + 8LL * (unsigned int)v164) < v11);
    if ((unsigned int)v163 < v160) {
      v165 = (_QWORD*)(v161 + 8 * v164);
      if ((((_BYTE)v162 + 1) & 7) != 0) {
        v166 = ((_BYTE)v162 + 1) & 7;
        do {
          --v166;
          v167 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8 * v163++);
          *v165++ = v167;
        } while (v166 != 0);
      }
      if (v162 >= 7) {
        v168 = 8 * v163;
        v169 = v160 - v163;
        v170 = 0;
        do {
          v171 = &v165[v170];
          *v171 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + v168 + 8 * v170);
          v171[1] = *(_QWORD*)(*(_QWORD*)(v5 + 8) + v168 + 8 * v170 + 8);
          v171[2] = *(_QWORD*)(*(_QWORD*)(v5 + 8) + v168 + 8 * v170 + 16);
          v171[3] = *(_QWORD*)(*(_QWORD*)(v5 + 8) + v168 + 8 * v170 + 24);
          v171[4] = *(_QWORD*)(*(_QWORD*)(v5 + 8) + v168 + 8 * v170 + 32);
          v171[5] = *(_QWORD*)(*(_QWORD*)(v5 + 8) + v168 + 8 * v170 + 40);
          v171[6] = *(_QWORD*)(*(_QWORD*)(v5 + 8) + v168 + 8 * v170 + 48);
          v172 = *(_QWORD*)(v5 + 8) + v168 + 8 * v170;
          v170 += 8;
          v171[7] = *(_QWORD*)(v172 + 56);
        } while (v169 != (_DWORD)v170);
      }
    }
    v173 = *(_QWORD*)v5;
    *(_DWORD*)(v5 + 16) = v160 - 1;
    physx_PxGeometryQuery_computeGeomBounds(v173);
  }
}

__int64 physx_source_lowleveldynamics_src_36f220(__int64 a1, _DWORD* a2,
                                                 _DWORD* a3, __int64 a4)
{
  __int64 result;
  char v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  unsigned int* v17;
  unsigned int* v18;
  __int64 v19;
  _BOOL4 v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  _BOOL4 v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  _BOOL4 v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  char v36;
  unsigned int v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  unsigned int v42;
  unsigned int* v43;
  unsigned int* v44;
  __int64 v45;
  _BOOL4 v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  __int64 v51;
  _BOOL4 v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  __int64 v57;
  _BOOL4 v58;
  unsigned int v59;
  unsigned int v60;
  char v61;
  unsigned int v62;
  int v63;
  __int64 v64;
  int v65;
  __int64 v66;
  unsigned int v67;
  unsigned int* v68;
  unsigned int* v69;
  __int64 v70;
  _BOOL4 v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  __int64 v76;
  _BOOL4 v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  __int64 v82;
  _BOOL4 v83;
  unsigned int v84;
  unsigned int v85;
  char v86;
  unsigned int v87;
  int v88;
  __int64 v89;
  int v90;
  __int64 v91;
  unsigned int v92;
  unsigned int* v93;
  unsigned int* v94;
  __int64 v95;
  _BOOL4 v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned int v100;
  __int64 v101;
  _BOOL4 v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  __int64 v107;
  _BOOL4 v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  __int64 v113;
  __int64 v114;
  int v115;
  int v116;
  __int64 v117;
  _DWORD* v118;
  bool v119;
  int v120;
  int v121;
  int* v122;
  int v123;
  __int64 v124;
  __int64 v125;
  int v126;
  int v127;
  __int64 v128;
  _DWORD* v129;
  __int64* v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int* v136;
  int* v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  struct {
    _BYTE v145[4];
    _BYTE v146[12];
  } v145_;
  _BYTE v147[112];
  struct {
    _DWORD v148[1];
    _BYTE v149[12];
  } v148_;
  __int64 v150;

  GameRoutine_1a0ba50((__int64)v148_.v148, 0, 0x80u);
  result = GameRoutine_1a0ba50((__int64)v145_.v145, 0, 0x80u);
  v9 = *(_BYTE*)(a1 + 149);
  v10 = *(_DWORD*)(a1 + 172);
  v11 = a4 + 12288;
  v12 = a4 + 16768;
  if (v10 == 0) {
    v15 = 0;
    goto LABEL_38;
  }
  v13 = *(_DWORD*)(a1 + 168);
  if (v10 == 1) {
    v14 = 0;
    v15 = 0;
    goto LABEL_28;
  }
  v16 = 0;
  v15 = 0;
  LODWORD(result) = *(_DWORD*)(a1 + 168);
  v17 = (unsigned int*)v148_.v149;
  v18 = (unsigned int*)v145_.v146;
  do {
    v19 = v11 + 104LL * (unsigned int)result;
    if ((*(_BYTE*)(v19 + 1) & 1) != 0) {
      v20 = false;
      v21 = *(_DWORD*)(v12 + 4LL * (unsigned int)result);
      if (v21 == 0) {
        goto LABEL_17;
      }
    }
    else {
      v20 = *(_WORD*)(v19 + 2) != 0;
      v21 = *(_DWORD*)(v12 + 4LL * (unsigned int)result);
      if (v21 == 0) {
        goto LABEL_17;
      }
    }
    v22 = *(v17 - 1);
    v15 += v21;
    if (v21 > v22) {
      v22 = v21;
    }
    *(v17 - 1) = v22;
    if (v20) {
      v23 = 2 * *(unsigned __int16*)(v19 + 2);
      v15 += v23;
      if (v23 <= *(v18 - 1)) {
        v23 = *(v18 - 1);
      }
      *(v18 - 1) = v23;
    }
  LABEL_17:
    v24 = result + 1;
    v25 = v11 + 104LL * (unsigned int)(result + 1);
    if ((*(_BYTE*)(v25 + 1) & 1) != 0) {
      v26 = false;
      v27 = *(_DWORD*)(v12 + 4LL * v24);
      if (v27 == 0) {
        goto LABEL_6;
      }
    }
    else {
      v26 = *(_WORD*)(v25 + 2) != 0;
      v27 = *(_DWORD*)(v12 + 4LL * v24);
      if (v27 == 0) {
        goto LABEL_6;
      }
    }
    v28 = *v17;
    v15 += v27;
    if (v27 > *v17) {
      v28 = v27;
    }
    *v17 = v28;
    if (v26) {
      v29 = 2 * *(unsigned __int16*)(v25 + 2);
      v15 += v29;
      if (v29 <= *v18) {
        v29 = *v18;
      }
      *v18 = v29;
    }
  LABEL_6:
    result = (unsigned int)(result + 2);
    v16 -= 2;
    v17 += 2;
    v18 += 2;
  } while (-(__int64)(v10 & 0xFFFFFFFE) != v16);
  v14 = -v16;
  if ((v10 & 1) == 0) {
    goto LABEL_38;
  }
LABEL_28:
  v30 = v13 + v14;
  v31 = v11 + 104LL * (unsigned int)(v13 + v14);
  if ((*(_BYTE*)(v31 + 1) & 1) != 0) {
    v32 = false;
    v33 = *(_DWORD*)(v12 + 4LL * v30);
    if (v33 == 0) {
      goto LABEL_38;
    }
  }
  else {
    v32 = *(_WORD*)(v31 + 2) != 0;
    v33 = *(_DWORD*)(v12 + 4LL * v30);
    if (v33 == 0) {
      goto LABEL_38;
    }
  }
  v15 += v33;
  v34 = v148_.v148[v14];
  if (v33 > v34) {
    v34 = v33;
  }
  v148_.v148[v14] = v34;
  if (v32) {
    v35 = 2 * *(unsigned __int16*)(v31 + 2);
    v15 += v35;
    if (v35 <= *(_DWORD*)&v145_.v145[4 * v14]) {
      v35 = *(_DWORD*)&v145_.v145[4 * v14];
    }
    *(_DWORD*)&v145_.v145[4 * v14] = v35;
  }
LABEL_38:
  *(_DWORD*)a3 = v15;
  if ((v9 & 1) != 0) {
    v36 = 1;
    v37 = *(_DWORD*)(a1 + 364);
    if (v37 != 0) {
      goto LABEL_40;
    }
  LABEL_43:
    v40 = 0;
    goto LABEL_78;
  }
  v36 = *(_BYTE*)(a1 + 341);
  v37 = *(_DWORD*)(a1 + 364);
  if (v37 == 0) {
    goto LABEL_43;
  }
LABEL_40:
  v38 = *(_DWORD*)(a1 + 360);
  if (v37 == 1) {
    v39 = 0;
    v40 = 0;
    goto LABEL_67;
  }
  result = 104;
  v41 = 0;
  v40 = 0;
  v42 = *(_DWORD*)(a1 + 360);
  v43 = (unsigned int*)v145_.v146;
  v44 = (unsigned int*)v148_.v149;
  while (2) {
    v45 = v11 + 104LL * v42;
    if ((*(_BYTE*)(v45 + 1) & 1) != 0) {
      v46 = false;
      v47 = *(_DWORD*)(v12 + 4LL * v42);
      if (v47 == 0) {
        goto LABEL_56;
      }
    }
    else {
      v46 = *(_WORD*)(v45 + 2) != 0;
      v47 = *(_DWORD*)(v12 + 4LL * v42);
      if (v47 == 0) {
        goto LABEL_56;
      }
    }
    v48 = *(v44 - 1);
    v40 += v47;
    if (v47 > v48) {
      v48 = v47;
    }
    *(v44 - 1) = v48;
    if (v46) {
      v49 = 2 * *(unsigned __int16*)(v45 + 2);
      v40 += v49;
      if (v49 <= *(v43 - 1)) {
        v49 = *(v43 - 1);
      }
      *(v43 - 1) = v49;
    }
  LABEL_56:
    v50 = v42 + 1;
    v51 = v11 + 104LL * (v42 + 1);
    if ((*(_BYTE*)(v51 + 1) & 1) != 0) {
      v52 = false;
      v53 = *(_DWORD*)(v12 + 4LL * v50);
      if (v53 == 0) {
        goto LABEL_45;
      }
    }
    else {
      v52 = *(_WORD*)(v51 + 2) != 0;
      v53 = *(_DWORD*)(v12 + 4LL * v50);
      if (v53 == 0) {
        goto LABEL_45;
      }
    }
    v54 = *v44;
    v40 += v53;
    if (v53 > *v44) {
      v54 = v53;
    }
    *v44 = v54;
    if (v52) {
      v55 = 2 * *(unsigned __int16*)(v51 + 2);
      v40 += v55;
      if (v55 <= *v43) {
        v55 = *v43;
      }
      *v43 = v55;
    }
  LABEL_45:
    v42 += 2;
    v41 -= 2;
    v43 += 2;
    v44 += 2;
    if (-(__int64)(v37 & 0xFFFFFFFE) != v41) {
      continue;
    }
    break;
  }
  v39 = -v41;
  if ((v37 & 1) == 0) {
    goto LABEL_78;
  }
LABEL_67:
  v56 = v38 + v39;
  v57 = v11 + 104LL * (unsigned int)(v38 + v39);
  if ((*(_BYTE*)(v57 + 1) & 1) != 0) {
    v58 = false;
    v59 = *(_DWORD*)(v12 + 4LL * v56);
    if (v59 == 0) {
      goto LABEL_78;
    }
  }
  else {
    v58 = *(_WORD*)(v57 + 2) != 0;
    v59 = *(_DWORD*)(v12 + 4LL * v56);
    if (v59 == 0) {
      goto LABEL_78;
    }
  }
  v40 += v59;
  LODWORD(result) = v148_.v148[v39];
  if (v59 <= (unsigned int)result) {
    result = (unsigned int)result;
  }
  else {
    result = v59;
  }
  v148_.v148[v39] = result;
  if (v58) {
    v60 = 2 * *(unsigned __int16*)(v57 + 2);
    v40 += v60;
    if (v60 <= *(_DWORD*)&v145_.v145[4 * v39]) {
      v60 = *(_DWORD*)&v145_.v145[4 * v39];
    }
    *(_DWORD*)&v145_.v145[4 * v39] = v60;
  }
LABEL_78:
  a3[1] = v40;
  if (v37 > v10) {
    v10 = v37;
  }
  if ((v36 & 1) != 0) {
    v61 = 1;
    v62 = *(_DWORD*)(a1 + 556);
    if (v62 != 0) {
      goto LABEL_82;
    }
  LABEL_85:
    v65 = 0;
    goto LABEL_120;
  }
  v61 = *(_BYTE*)(a1 + 533);
  v62 = *(_DWORD*)(a1 + 556);
  if (v62 == 0) {
    goto LABEL_85;
  }
LABEL_82:
  v63 = *(_DWORD*)(a1 + 552);
  if (v62 == 1) {
    v64 = 0;
    v65 = 0;
    goto LABEL_109;
  }
  result = 104;
  v66 = 0;
  v65 = 0;
  v67 = *(_DWORD*)(a1 + 552);
  v68 = (unsigned int*)v145_.v146;
  v69 = (unsigned int*)v148_.v149;
  while (2) {
    v70 = v11 + 104LL * v67;
    if ((*(_BYTE*)(v70 + 1) & 1) != 0) {
      v71 = false;
      v72 = *(_DWORD*)(v12 + 4LL * v67);
      if (v72 == 0) {
        goto LABEL_98;
      }
    }
    else {
      v71 = *(_WORD*)(v70 + 2) != 0;
      v72 = *(_DWORD*)(v12 + 4LL * v67);
      if (v72 == 0) {
        goto LABEL_98;
      }
    }
    v73 = *(v69 - 1);
    v65 += v72;
    if (v72 > v73) {
      v73 = v72;
    }
    *(v69 - 1) = v73;
    if (v71) {
      v74 = 2 * *(unsigned __int16*)(v70 + 2);
      v65 += v74;
      if (v74 <= *(v68 - 1)) {
        v74 = *(v68 - 1);
      }
      *(v68 - 1) = v74;
    }
  LABEL_98:
    v75 = v67 + 1;
    v76 = v11 + 104LL * (v67 + 1);
    if ((*(_BYTE*)(v76 + 1) & 1) != 0) {
      v77 = false;
      v78 = *(_DWORD*)(v12 + 4LL * v75);
      if (v78 == 0) {
        goto LABEL_87;
      }
    }
    else {
      v77 = *(_WORD*)(v76 + 2) != 0;
      v78 = *(_DWORD*)(v12 + 4LL * v75);
      if (v78 == 0) {
        goto LABEL_87;
      }
    }
    v79 = *v69;
    v65 += v78;
    if (v78 > *v69) {
      v79 = v78;
    }
    *v69 = v79;
    if (v77) {
      v80 = 2 * *(unsigned __int16*)(v76 + 2);
      v65 += v80;
      if (v80 <= *v68) {
        v80 = *v68;
      }
      *v68 = v80;
    }
  LABEL_87:
    v67 += 2;
    v66 -= 2;
    v68 += 2;
    v69 += 2;
    if (-(__int64)(v62 & 0xFFFFFFFE) != v66) {
      continue;
    }
    break;
  }
  v64 = -v66;
  if ((v62 & 1) == 0) {
    goto LABEL_120;
  }
LABEL_109:
  v81 = v63 + v64;
  v82 = v11 + 104LL * (unsigned int)(v63 + v64);
  if ((*(_BYTE*)(v82 + 1) & 1) != 0) {
    v83 = false;
    v84 = *(_DWORD*)(v12 + 4LL * v81);
    if (v84 == 0) {
      goto LABEL_120;
    }
  }
  else {
    v83 = *(_WORD*)(v82 + 2) != 0;
    v84 = *(_DWORD*)(v12 + 4LL * v81);
    if (v84 == 0) {
      goto LABEL_120;
    }
  }
  v65 += v84;
  LODWORD(result) = v148_.v148[v64];
  if (v84 <= (unsigned int)result) {
    result = (unsigned int)result;
  }
  else {
    result = v84;
  }
  v148_.v148[v64] = result;
  if (v83) {
    v85 = 2 * *(unsigned __int16*)(v82 + 2);
    v65 += v85;
    if (v85 <= *(_DWORD*)&v145_.v145[4 * v64]) {
      v85 = *(_DWORD*)&v145_.v145[4 * v64];
    }
    *(_DWORD*)&v145_.v145[4 * v64] = v85;
  }
LABEL_120:
  a3[2] = v65;
  if (v62 <= v10) {
    v62 = v10;
  }
  if ((v61 & 1) != 0) {
    v86 = 1;
    v87 = *(_DWORD*)(a1 + 748);
    if (v87 != 0) {
      goto LABEL_124;
    }
  LABEL_127:
    v90 = 0;
    goto LABEL_161;
  }
  v86 = *(_BYTE*)(a1 + 725);
  v87 = *(_DWORD*)(a1 + 748);
  if (v87 == 0) {
    goto LABEL_127;
  }
LABEL_124:
  v88 = *(_DWORD*)(a1 + 744);
  if (v87 == 1) {
    v89 = 0;
    v90 = 0;
    goto LABEL_151;
  }
  result = 104;
  v91 = 0;
  v90 = 0;
  v92 = *(_DWORD*)(a1 + 744);
  v93 = (unsigned int*)v145_.v146;
  v94 = (unsigned int*)v148_.v149;
  while (2) {
    v95 = v11 + 104LL * v92;
    if ((*(_BYTE*)(v95 + 1) & 1) != 0) {
      v96 = false;
      v97 = *(_DWORD*)(v12 + 4LL * v92);
      if (v97 == 0) {
        goto LABEL_140;
      }
    }
    else {
      v96 = *(_WORD*)(v95 + 2) != 0;
      v97 = *(_DWORD*)(v12 + 4LL * v92);
      if (v97 == 0) {
        goto LABEL_140;
      }
    }
    v98 = *(v94 - 1);
    v90 += v97;
    if (v97 > v98) {
      v98 = v97;
    }
    *(v94 - 1) = v98;
    if (v96) {
      v99 = 2 * *(unsigned __int16*)(v95 + 2);
      v90 += v99;
      if (v99 <= *(v93 - 1)) {
        v99 = *(v93 - 1);
      }
      *(v93 - 1) = v99;
    }
  LABEL_140:
    v100 = v92 + 1;
    v101 = v11 + 104LL * (v92 + 1);
    if ((*(_BYTE*)(v101 + 1) & 1) != 0) {
      v102 = false;
      v103 = *(_DWORD*)(v12 + 4LL * v100);
      if (v103 == 0) {
        goto LABEL_129;
      }
    }
    else {
      v102 = *(_WORD*)(v101 + 2) != 0;
      v103 = *(_DWORD*)(v12 + 4LL * v100);
      if (v103 == 0) {
        goto LABEL_129;
      }
    }
    v104 = *v94;
    v90 += v103;
    if (v103 > *v94) {
      v104 = v103;
    }
    *v94 = v104;
    if (v102) {
      v105 = 2 * *(unsigned __int16*)(v101 + 2);
      v90 += v105;
      if (v105 <= *v93) {
        v105 = *v93;
      }
      *v93 = v105;
    }
  LABEL_129:
    v92 += 2;
    v91 -= 2;
    v93 += 2;
    v94 += 2;
    if (-(__int64)(v87 & 0xFFFFFFFE) != v91) {
      continue;
    }
    break;
  }
  v89 = -v91;
  if ((v87 & 1) == 0) {
    goto LABEL_161;
  }
LABEL_151:
  v106 = v88 + v89;
  v107 = v11 + 104LL * v106;
  if ((*(_BYTE*)(v107 + 1) & 1) != 0) {
    v108 = false;
    v109 = *(_DWORD*)(v12 + 4LL * v106);
    if (v109 == 0) {
      goto LABEL_161;
    }
  }
  else {
    v108 = *(_WORD*)(v107 + 2) != 0;
    v109 = *(_DWORD*)(v12 + 4LL * v106);
    if (v109 == 0) {
      goto LABEL_161;
    }
  }
  v90 += v109;
  v110 = v148_.v148[v89];
  if (v109 > v110) {
    v110 = v109;
  }
  v148_.v148[v89] = v110;
  if (v108) {
    v111 = 2 * *(unsigned __int16*)(v107 + 2);
    v90 += v111;
    if (v111 <= *(_DWORD*)&v145_.v145[4 * v89]) {
      v111 = *(_DWORD*)&v145_.v145[4 * v89];
    }
    *(_DWORD*)&v145_.v145[4 * v89] = v111;
  }
LABEL_161:
  a3[3] = v90;
  if (v87 <= v62) {
    v112 = v62;
  }
  else {
    v112 = v87;
  }
  if (v112 != 0) {
    v113 = v112 & 7;
    if (v112 >= 8) {
      v117 = 0;
      v115 = 0;
      v118 = v147;
      do {
        v117 -= 8;
        if (*(v118 - 4) != 0) {
          ++v115;
        }
        if (*(v118 - 3) != 0) {
          ++v115;
        }
        if (*(v118 - 2) != 0) {
          ++v115;
        }
        if (*(v118 - 1) != 0) {
          ++v115;
        }
        if (*(_DWORD*)v118 != 0) {
          ++v115;
        }
        v119 = v118[1] == 0;
        v120 = v118[2];
        v121 = v118[3];
        v118 += 8;
        if (!v119) {
          ++v115;
        }
        if (v120 != 0) {
          ++v115;
        }
        if (v121 != 0) {
          ++v115;
        }
      } while (-(__int64)(v112 & 0xFFFFFFF8) != v117);
      v114 = -v117;
      if ((v112 & 7) != 0) {
        goto LABEL_188;
      }
    }
    else {
      v114 = 0;
      v115 = 0;
      if ((v112 & 7) == 0) {
        goto LABEL_192;
      }
    LABEL_188:
      v122 = (int*)&v145_.v145[4 * v114];
      do {
        v123 = *v122++;
        if (v123 != 0) {
          ++v115;
        }
        --v113;
      } while (v113 != 0);
    }
  LABEL_192:
    v116 = 144 * v115;
    v124 = v112 & 7;
    if (v112 >= 8) {
      v128 = 0;
      v127 = 0;
      v126 = 0;
      v129 = v147;
      v130 = &v150;
      do {
        v128 -= 8;
        v131 = *((_DWORD*)v130 + 1) + *(int*)v130 + *((_DWORD*)v130 - 1) +
               *((_DWORD*)v130 - 2) + *((_DWORD*)v130 - 3) +
               *((_DWORD*)v130 - 4) + v126;
        v132 = v129[1] + *(int*)v129 + *(v129 - 1) + *(v129 - 2) + *(v129 - 3) +
               *(v129 - 4) + v127;
        v134 = *((_DWORD*)v130 + 2);
        v133 = *((_DWORD*)v130 + 3);
        v130 += 4;
        v126 = v133 + v134 + v131;
        v135 = v129[2];
        result = (unsigned int)v129[3];
        v129 += 8;
        v127 = result + v135 + v132;
      } while (-(__int64)(v112 & 0xFFFFFFF8) != v128);
      v125 = -v128;
      if ((v112 & 7) != 0) {
        goto LABEL_198;
      }
    }
    else {
      v125 = 0;
      v127 = 0;
      v126 = 0;
      if ((v112 & 7) == 0) {
        goto LABEL_200;
      }
    LABEL_198:
      v136 = (int*)&v145_.v145[4 * v125];
      v137 = &v148_.v148[v125];
      do {
        v138 = *v137++;
        --v124;
        v126 += v138;
        v139 = *v136++;
        v127 += v139;
      } while (v124 != 0);
    }
  }
  else {
    v116 = 0;
    v126 = 0;
    v127 = 0;
  }
LABEL_200:
  if (*(_DWORD*)(a1 + 116) == 1 || *(_DWORD*)(a1 + 308) == 1 ||
      *(_DWORD*)(a1 + 500) == 1 || *(_DWORD*)(a1 + 692) == 1) {
    v140 = 144;
    v141 = 160;
  }
  else {
    v140 = 96;
    v141 = 112;
  }
  v142 = v126 * v141 + v127 * v140;
  v143 = v127 + v126;
  if ((v86 & 1) != 0) {
    v144 = v126;
  }
  else {
    v144 = 0;
  }
  *(_DWORD*)a2 = v116 + 208 * v112 + 16 * (v143 + v144) + v142;
  return result;
}

#pragma GCC visibility pop
