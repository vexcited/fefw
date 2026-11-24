#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 physx_Cm_RadixSortBuffered_Sort_3ea180(__int64 result, __int64, int);
__int64 physx_source_geomutils_src_515ac0(__int64* a1, unsigned int* a2,
                                          unsigned int a3, __int64 a4,
                                          __int64 a5, __int64 a6);

__int64 physx_source_geomutils_src_515ac0(__int64* a1, unsigned int* a2,
                                          unsigned int a3, __int64 a4,
                                          __int64 a5, __int64 a6)
{

#pragma clang fp contract(off)
  unsigned int v6;
  unsigned int v8;
  __int64* v9;
  __int64 v10;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int* v21;
  _DWORD* v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  int v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  __int64 v35;
  _DWORD* v36;
  unsigned int* v37;
  unsigned int v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
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
  float* v60;
  unsigned int* v61;
  unsigned int v62;
  unsigned int v63;
  float* v64;
  float v65;
  float v66;
  __int64 v67;
  float* v68;
  float v69;
  float v70;
  unsigned int v71;
  unsigned int v72;
  float* v73;
  float v74;
  float v75;
  float v76;
  float v77;
  bool v78;
  float v79;
  float v80;
  float* v81;
  float v82;
  float v83;
  __int64 v84;
  unsigned int v85;
  float* v86;
  float* v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  __int64 v94;
  float* v95;
  float* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned int v101;
  float v102;
  float v103;
  float v104;
  bool v105;
  float v106;
  float v107;
  unsigned int v108;
  float v109;
  float v110;
  float v111;
  float v112;
  unsigned int v113;
  unsigned int v114;
  int v116;
  float v117;
  float v118;
  float v119;
  float v120;
  bool v121;
  float v122;
  int v124;
  bool v125;
  unsigned int v126;
  int v128;
  unsigned int v129;
  bool v130;
  float v131;
  float v132;
  int v134;
  __int64 v135;
  unsigned int v136;
  float v137;
  float v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  float v142;
  float* v143;
  float* v144;
  unsigned int v145;
  __int64 v146;
  unsigned int v147;
  unsigned int v148;
  float v149;
  unsigned int v150;
  float v151;
  unsigned int v152;
  float v153;
  float v154;
  unsigned int v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  unsigned int v164;
  __int64 i;
  float v166;
  float v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  float* v171;
  float* v172;
  unsigned int v173;
  __int64 v174;
  unsigned int v175;
  float v176;
  float v177;
  unsigned int v178;
  unsigned int v179;
  float v180;
  bool v181;
  float v182;
  float v183;
  float v184;
  unsigned int v185;
  bool v186;
  float v187;
  float v188;
  float v189;
  int v190;
  float v191;
  bool v192;
  float v193;
  float v194;
  int v196;
  unsigned int v197;
  __int64 j;
  float v199;
  float v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  float* v204;
  float* v205;
  unsigned int v206;
  __int64 v207;
  unsigned int v208;
  float v209;
  float v210;
  unsigned int v211;
  unsigned int v212;
  float v213;
  bool v214;
  float v215;
  float v216;
  float v217;
  unsigned int v218;
  bool v219;
  float v220;
  float v221;
  float v222;
  int v223;
  float v224;
  bool v225;
  float v226;
  float v227;
  int v229;
  unsigned int v230;
  __int64 k;
  float v232;
  float v233;
  unsigned int v234;
  bool v235;
  __int64 result;
  unsigned __int64 v237;
  __int64 v238;
  unsigned int v239;
  unsigned int v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  _DWORD* v244;
  unsigned int* v245;
  __int64 v246;
  __int64 v247;
  _DWORD* v248;
  unsigned int* v249;
  unsigned int v250;
  __int64 v252;
  unsigned int v253;
  unsigned int v255;
  unsigned int v256;
  __int64 v257;
  __int64 v258;
  unsigned int v259;
  unsigned int v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v265;
  __int64 v267;

  v6 = a3 - 1;
  v8 = a3;
  v9 = a1;
  v265 = a3 - 1;
  if (a3 != 0) {
    v10 = a3 - 2;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v267 = a3 & 7;
    v261 = v6 & 0xFFFFFFF8;
    v262 = a3;
    v259 = a3 - 6;
    v257 = a3 & 0xFFFFFFFE;
    v15 = -(__int64)(a3 & 0xFFFFFFF8);
    v263 = v6 & 7;
    v252 = v15;
    v260 = a3 - 7;
    v256 = a3 - 3;
    v255 = a3 - 5;
    v253 = a3 - 4;
    v16 = 0x1.fffffe0000000p+127f;
    while (1) {
      v17 = v9[24];
      v18 = a6 + 4 * v12;
      if (v8 < 8) {
        break;
      }
      v21 = (unsigned int*)(a4 + 16);
      v22 = (_DWORD*)(v17 + 16);
      v23 = 0;
      do {
        v23 -= 8;
        v24 = *(_DWORD*)(v18 + 12LL * *(v21 - 3));
        v25 = *(v21 - 1);
        v26 = 12LL * *(v21 - 2);
        *(v22 - 4) = *(_DWORD*)(v18 + 12LL * *(v21 - 4));
        *(v22 - 3) = v24;
        v27 = *(_DWORD*)(v18 + v26);
        v28 = *(_DWORD*)(v18 + 12LL * v25);
        v29 = v21[1];
        v30 = 12LL * *v21;
        *(v22 - 2) = v27;
        *(v22 - 1) = v28;
        v31 = *(_DWORD*)(v18 + v30);
        v32 = *(_DWORD*)(v18 + 12LL * v29);
        LODWORD(v30) = v21[2];
        v33 = v21[3];
        v21 += 8;
        *(_DWORD*)v22 = v31;
        v22[1] = v32;
        v34 = *(_DWORD*)(v18 + 12LL * v33);
        v22[2] = *(_DWORD*)(v18 + 12LL * (unsigned int)v30);
        v22[3] = v34;
        v22 += 8;
      } while (v15 != v23);
      v19 = -v23;
      v20 = v10;
      if (v267 != 0) {
        goto LABEL_10;
      }
    LABEL_12:
      v39 = (__int64)&v9[8 * v12];
      v40 = v8;
      v41 = physx_Cm_RadixSortBuffered_Sort_3ea180(v39, v17, v8);
      v8 = v40;
      v9 = a1;
      v42 = *(_QWORD*)(v41 + 16);
      v43 = a1[25];
      v44 = a1[26];
      if (v8 == 1) {
        v45 = v265;
        v46 = v262;
        v47 = 0;
        v10 = v20;
        v48 = -0x1.fffffe0000000p+125f;
        v49 = 0x1.fffffe0000000p+125f;
        v50 = -0x1.fffffe0000000p+125f;
        v51 = -0x1.fffffe0000000p+125f;
        v52 = -0x1.fffffe0000000p+125f;
        v53 = -0x1.fffffe0000000p+125f;
        v54 = -0x1.fffffe0000000p+125f;
        v55 = 0x1.fffffe0000000p+125f;
        v56 = 0x1.fffffe0000000p+125f;
        v57 = 0x1.fffffe0000000p+125f;
        v58 = 0x1.fffffe0000000p+125f;
        v59 = 0x1.fffffe0000000p+125f;
      }
      else {
        v45 = v265;
        v46 = v262;
        v60 = (float*)(v43 + 4);
        v61 = (unsigned int*)(v42 + 4);
        v47 = 0;
        v10 = v20;
        v48 = -0x1.fffffe0000000p+125f;
        v49 = 0x1.fffffe0000000p+125f;
        v62 = v20;
        v50 = -0x1.fffffe0000000p+125f;
        v51 = -0x1.fffffe0000000p+125f;
        v52 = -0x1.fffffe0000000p+125f;
        v53 = -0x1.fffffe0000000p+125f;
        v54 = -0x1.fffffe0000000p+125f;
        v55 = 0x1.fffffe0000000p+125f;
        v56 = 0x1.fffffe0000000p+125f;
        v57 = 0x1.fffffe0000000p+125f;
        v58 = 0x1.fffffe0000000p+125f;
        v59 = 0x1.fffffe0000000p+125f;
        do {
          v63 = v62 + 1;
          v47 += 2;
          v64 = (float*)(a5 + 24LL * *(unsigned int*)(a4 + 4LL * *(v61 - 1)));
          if (!(v57 < *v64)) {
            v57 = *v64;
          }
          if (!(v58 < v64[1])) {
            v58 = v64[1];
          }
          if (!(v59 < v64[2])) {
            v59 = v64[2];
          }
          if (v52 <= v64[3]) {
            v52 = v64[3];
          }
          v65 = v64[4];
          v66 = v64[5];
          v67 = *(unsigned int*)(v42 + 4LL * v62);
          v68 =
              (float*)(a5 +
                       24LL *
                           *(unsigned int*)(a4 +
                                            4LL * *(unsigned int*)(v42 +
                                                                   4LL * v63)));
          if (v53 <= v65) {
            v53 = v65;
          }
          if (v54 <= v66) {
            v54 = v66;
          }
          if (!(v49 < *v68)) {
            v49 = *v68;
          }
          if (!(v55 < v68[1])) {
            v55 = v68[1];
          }
          if (!(v56 < v68[2])) {
            v56 = v68[2];
          }
          if (v48 <= v68[3]) {
            v48 = v68[3];
          }
          v69 = v68[4];
          v70 = v68[5];
          v71 = *v61;
          v61 += 2;
          v72 = *(_DWORD*)(a4 + 4LL * v71);
          if (v50 <= v69) {
            v50 = v69;
          }
          v73 = (float*)(a5 + 24LL * v72);
          if (v51 <= v70) {
            v51 = v70;
          }
          v74 = (float)((float)(PSEUDO_UNFUSED((float)(v52 - v57) *
                                               (float)(v54 - v59))) +
                        (float)((float)(v52 - v57) * (float)(v53 - v58))) +
                (float)((float)(v53 - v58) * (float)(v54 - v59));
          *(v60 - 1) = v74 + v74;
          v75 = (float)((float)(PSEUDO_UNFUSED((float)(v48 - v49) *
                                               (float)(v51 - v56))) +
                        (float)((float)(v48 - v49) * (float)(v50 - v55))) +
                (float)((float)(v50 - v55) * (float)(v51 - v56));
          v77 = *v73;
          v76 = v73[1];
          v78 = v57 < *v73;
          *(float*)(v44 + 4LL * v63) = v75 + v75;
          if (!v78) {
            v57 = v77;
          }
          if (!(v58 < v76)) {
            v58 = v76;
          }
          if (!(v59 < v73[2])) {
            v59 = v73[2];
          }
          if (v52 <= v73[3]) {
            v52 = v73[3];
          }
          v79 = v73[4];
          v80 = v73[5];
          v81 = (float*)(a5 + 24LL * *(unsigned int*)(a4 + 4 * v67));
          if (v53 <= v79) {
            v53 = v79;
          }
          if (v54 <= v80) {
            v54 = v80;
          }
          if (!(v49 < *v81)) {
            v49 = *v81;
          }
          if (!(v55 < v81[1])) {
            v55 = v81[1];
          }
          if (!(v56 < v81[2])) {
            v56 = v81[2];
          }
          if (v48 <= v81[3]) {
            v48 = v81[3];
          }
          if (v50 <= v81[4]) {
            v50 = v81[4];
          }
          if (v51 <= v81[5]) {
            v51 = v81[5];
          }
          v82 = (float)((float)(PSEUDO_UNFUSED((float)(v52 - v57) *
                                               (float)(v54 - v59))) +
                        (float)((float)(v52 - v57) * (float)(v53 - v58))) +
                (float)((float)(v53 - v58) * (float)(v54 - v59));
          *v60 = v82 + v82;
          v60 += 2;
          v83 =
              (float)(PSEUDO_UNFUSED((float)(v48 - v49) * (float)(v51 - v56))) +
              (float)((float)(v48 - v49) * (float)(v50 - v55));
          *(float*)(v44 + 4LL * v62) =
              (float)(v83 + (float)((float)(v50 - v55) * (float)(v51 - v56))) +
              (float)(v83 + (float)((float)(v50 - v55) * (float)(v51 - v56)));
          v62 -= 2;
        } while (v257 != v47);
      }
      v84 = v261;
      if ((v46 & 1) != 0) {
        v85 = ~(int)v47 + v8;
        v86 =
            (float*)(a5 +
                     24LL * *(unsigned int*)(a4 +
                                             4LL * *(unsigned int*)(v42 +
                                                                    4 * v47)));
        v87 = (float*)(a5 +
                       24LL *
                           *(unsigned int*)(a4 +
                                            4LL * *(unsigned int*)(v42 +
                                                                   4LL * v85)));
        if (!(v57 < *v86)) {
          v57 = *v86;
        }
        if (!(v58 < v86[1])) {
          v58 = v86[1];
        }
        if (!(v59 < v86[2])) {
          v59 = v86[2];
        }
        if (v52 <= v86[3]) {
          v52 = v86[3];
        }
        v88 = v52 - v57;
        if (v53 <= v86[4]) {
          v53 = v86[4];
        }
        if (v54 <= v86[5]) {
          v54 = v86[5];
        }
        v89 = v53 - v58;
        v90 = v54 - v59;
        if (!(v49 < *v87)) {
          v49 = *v87;
        }
        if (!(v55 < v87[1])) {
          v55 = v87[1];
        }
        v91 = v87[2];
        v92 = v87[3];
        *(float*)(v43 + 4 * v47) =
            (float)((float)((float)(PSEUDO_UNFUSED(v88 * v90)) +
                            (float)(v88 * v89)) +
                    (float)(v89 * v90)) +
            (float)((float)((float)(PSEUDO_UNFUSED(v88 * v90)) +
                            (float)(v88 * v89)) +
                    (float)(v89 * v90));
        if (!(v56 < v91)) {
          v56 = v91;
        }
        if (v48 <= v92) {
          v48 = v92;
        }
        v93 = v48 - v49;
        if (v50 <= v87[4]) {
          v50 = v87[4];
        }
        if (v51 <= v87[5]) {
          v51 = v87[5];
        }
        *(float*)(v44 + 4LL * v85) =
            (float)((float)((float)(PSEUDO_UNFUSED(v93 * (float)(v51 - v56))) +
                            (float)(v93 * (float)(v50 - v55))) +
                    (float)((float)(v50 - v55) * (float)(v51 - v56))) +
            (float)((float)((float)(PSEUDO_UNFUSED(v93 * (float)(v51 - v56))) +
                            (float)(v93 * (float)(v50 - v55))) +
                    (float)((float)(v50 - v55) * (float)(v51 - v56)));
      }
      if (v45 == 0) {
        goto LABEL_3;
      }
      if (v8 >= 9) {
        v95 = (float*)(v43 + 16);
        v96 = (float*)(v44 + 16);
        v97 = 0;
        v98 = 0;
        v258 = v43;
        do {
          v99 = v84;
          v100 = v46;
          v101 = v98 | 1;
          v102 = v96[2];
          v103 = v96[3];
          v104 = (float)(PSEUDO_UNFUSED(*(v96 - 4) *
                                        (float)(unsigned int)(v46 + v97))) +
                 (float)(*(v95 - 4) * (float)(unsigned int)v98);
          v105 = v104 > v16;
          v106 = (float)(PSEUDO_UNFUSED(*(v96 - 3) *
                                        (float)(unsigned int)(v45 + v97))) +
                 (float)(*(v95 - 3) * (float)((unsigned int)v98 | 1));
          if (v104 > v16) {
            v104 = v16;
          }
          v107 = (float)(PSEUDO_UNFUSED(*(v96 - 2) *
                                        (float)(unsigned int)(v10 + v97))) +
                 (float)(*(v95 - 2) * (float)((unsigned int)v98 | 2));
          v108 = v98 | 5;
          v109 = (float)(PSEUDO_UNFUSED(*(v96 - 1) *
                                        (float)(v256 + (unsigned int)v97))) +
                 (float)(*(v95 - 1) * (float)((unsigned int)v98 | 3));
          v110 = *v96;
          v111 = v96[1];
          v96 += 8;
          v112 = (float)(PSEUDO_UNFUSED(v110 *
                                        (float)(v253 + (unsigned int)v97))) +
                 (float)(*v95 * (float)((unsigned int)v98 | 4));
          v113 = v98 | 6;
          if (v105) {
            v114 = v14;
          }
          else {
            v114 = v98;
          }
          v116 = v105 && v106 > v104;
          v117 = (float)(PSEUDO_UNFUSED(v111 *
                                        (float)(v255 + (unsigned int)v97))) +
                 (float)(v95[1] * (float)v108);
          v118 = v102 * (float)(v259 + (unsigned int)v97);
          v119 = v95[2];
          v120 = v95[3];
          v95 += 8;
          if (v106 > v104) {
            v101 = v114;
          }
          else {
            v104 = v106;
          }
          v121 = v107 > v104;
          if (v107 <= v104) {
            v104 = v107;
            v101 = v98 | 2;
          }
          v122 = v118 + (float)(v119 * (float)v113);
          v124 = v121 && v109 > v104;
          if (v109 <= v104) {
            v104 = v109;
            v101 = v98 | 3;
          }
          v125 = v112 > v104;
          if (v112 <= v104) {
            v104 = v112;
            v101 = v98 | 4;
          }
          v126 = v98 | 7;
          v98 += 8;
          v128 = v125 && v117 > v104;
          if (v117 <= v104) {
            v101 = v108;
          }
          v129 = v260 + v97;
          if (v117 <= v104) {
            v104 = v117;
          }
          v97 -= 8;
          v130 = v122 > v104;
          v131 = v103 * (float)v129;
          if (v122 <= v104) {
            v104 = v118 + (float)(v119 * (float)v113);
            v101 = v113;
          }
          v46 = v100;
          v132 = v131 + (float)(v120 * (float)v126);
          v134 = v130 && v132 > v104;
          if (v132 <= v104) {
            v14 = v126;
          }
          else {
            v14 = v101;
          }
          if (v132 <= v104) {
            v16 = v131 + (float)(v120 * (float)v126);
          }
          else {
            v16 = v104;
          }
          v84 = v99;
          if ((v134 & v128 & v124 & v116) == 0) {
            v13 = v12;
          }
        } while (v98 != v99);
        v9 = a1;
        v8 = a3;
        v15 = v252;
        v94 = -v97;
        v43 = v258;
        if (v263 == 0) {
          goto LABEL_3;
        }
      LABEL_149:
        v135 = v263;
        v136 = v8 - v94;
        do {
          v137 = (float)v136--;
          v138 = *(float*)(v44 + 4 * v94) * v137;
          if ((float)(v138 + (float)(*(float*)(v43 + 4 * v94) *
                                     (float)(unsigned int)v94)) <= v16) {
            v16 = v138 +
                  (float)(*(float*)(v43 + 4 * v94) * (float)(unsigned int)v94);
            v14 = v94;
            v13 = v12;
          }
          ++v94;
          --v135;
        } while (v135 != 0);
        goto LABEL_3;
      }
      v94 = 0;
      if (v263 != 0) {
        goto LABEL_149;
      }
    LABEL_3:
      if (++v12 == 3) {
        goto LABEL_251;
      }
    }
    v19 = 0;
    v20 = v10;
    if (v267 == 0) {
      goto LABEL_12;
    }
  LABEL_10:
    v35 = v267;
    v36 = (_DWORD*)(v17 + 4 * v19);
    v37 = (unsigned int*)(a4 + 4 * v19);
    do {
      v38 = *v37++;
      --v35;
      *(_DWORD*)v36++ = *(_DWORD*)(v18 + 12LL * v38);
    } while (v35 != 0);
    goto LABEL_12;
  }
  physx_Cm_RadixSortBuffered_Sort_3ea180((__int64)a1, a1[24], 0);
  v139 = v9[25];
  v140 = v9[26];
  if ((unsigned int)v265 >= 4) {
    v143 = (float*)(v139 + 8);
    v144 = (float*)(v140 + 8);
    v145 = 0;
    v146 = 0;
    v14 = 0;
    v142 = 0x1.fffffe0000000p+127f;
    do {
      v147 = v145 - 2;
      v148 = v145 - 3;
      v149 = (float)(PSEUDO_UNFUSED(*(v144 - 2) * (float)v145)) +
             (float)(*(v143 - 2) * (float)(unsigned int)v146);
      v150 = v145 - 1;
      v145 -= 4;
      v151 = (float)v150;
      v152 = v146 + 2;
      v153 = *(v144 - 1) * v151;
      v154 = (float)v147;
      if (v149 <= v142) {
        v155 = v146;
      }
      else {
        v149 = v142;
        v155 = v14;
      }
      v156 = v153 + (float)(*(v143 - 1) * (float)(unsigned int)(v146 + 1));
      v157 = *v144;
      v158 = v144[1];
      v144 += 4;
      v159 = v157 * v154;
      v160 = *v143;
      v161 = v143[1];
      v143 += 4;
      if (v156 <= v149) {
        v149 = v156;
        v155 = v146 + 1;
      }
      if ((float)(v159 + (float)(v160 * (float)v152)) > v149) {
        v152 = v155;
      }
      else {
        v149 = v159 + (float)(v160 * (float)v152);
      }
      v162 = v158 * (float)v148;
      v163 = v162 + (float)(v161 * (float)(unsigned int)(v146 + 3));
      if (v163 <= v149) {
        v142 = v162 + (float)(v161 * (float)(unsigned int)(v146 + 3));
      }
      else {
        v142 = v149;
      }
      if (v163 <= v149) {
        v14 = v146 + 3;
      }
      else {
        v14 = v152;
      }
      v141 = v146 + 4;
      v235 = v146 == v265 - 7;
      v146 += 4;
    } while (!v235);
  }
  else {
    v141 = 0;
    v14 = 0;
    v142 = 0x1.fffffe0000000p+127f;
  }
  v164 = -(int)v141;
  for (i = 3; i != 0; --i) {
    v166 = (float)v164--;
    v167 = *(float*)(v140 + 4 * v141) * v166;
    if ((float)(v167 + (float)(*(float*)(v139 + 4 * v141) *
                               (float)(unsigned int)v141)) <= v142) {
      v142 = v167 +
             (float)(*(float*)(v139 + 4 * v141) * (float)(unsigned int)v141);
      v14 = v141;
    }
    ++v141;
  }
  physx_Cm_RadixSortBuffered_Sort_3ea180((__int64)(v9 + 8), v9[24], 0);
  v168 = v9[25];
  v169 = v9[26];
  if ((unsigned int)v265 >= 4) {
    v171 = (float*)(v168 + 8);
    v172 = (float*)(v169 + 8);
    v173 = 0;
    v174 = 0;
    v13 = 0;
    do {
      v175 = v173 - 3;
      v176 = (float)(PSEUDO_UNFUSED(*(v172 - 2) * (float)v173)) +
             (float)(*(v171 - 2) * (float)(unsigned int)v174);
      v177 = (float)(v173 - 1);
      v178 = v173 - 2;
      v179 = v174 + 2;
      v173 -= 4;
      v180 = (float)v178;
      v181 = v176 > v142;
      v182 = (float)(PSEUDO_UNFUSED(*(v172 - 1) * v177)) +
             (float)(*(v171 - 1) * (float)(unsigned int)(v174 + 1));
      v183 = *v172;
      v184 = v172[1];
      v172 += 4;
      if (v176 <= v142) {
        v185 = v174;
      }
      else {
        v176 = v142;
        v185 = v14;
      }
      v186 = v181 && v182 > v176;
      v187 = v183 * v180;
      v188 = *v171;
      v189 = v171[1];
      v171 += 4;
      v190 = v186;
      if (v182 <= v176) {
        v176 = v182;
        v185 = v174 + 1;
      }
      v191 = v187 + (float)(v188 * (float)v179);
      v192 = v191 > v176;
      if (v191 > v176) {
        v179 = v185;
      }
      else {
        v176 = v187 + (float)(v188 * (float)v179);
      }
      v193 = v184 * (float)v175;
      v194 = v193 + (float)(v189 * (float)(unsigned int)(v174 + 3));
      v196 = v192 && v194 > v176;
      if (v194 <= v176) {
        v14 = v174 + 3;
      }
      else {
        v14 = v179;
      }
      if (v194 <= v176) {
        v142 = v193 + (float)(v189 * (float)(unsigned int)(v174 + 3));
      }
      else {
        v142 = v176;
      }
      v170 = v174 + 4;
      if ((v196 & v190) == 0) {
        v13 = 1;
      }
      v235 = v174 == v265 - 7;
      v174 += 4;
    } while (!v235);
  }
  else {
    v170 = 0;
    v13 = 0;
  }
  v197 = -(int)v170;
  for (j = 3; j != 0; --j) {
    v199 = (float)v197--;
    v200 = *(float*)(v169 + 4 * v170) * v199;
    if ((float)(v200 + (float)(*(float*)(v168 + 4 * v170) *
                               (float)(unsigned int)v170)) <= v142) {
      v142 = v200 +
             (float)(*(float*)(v168 + 4 * v170) * (float)(unsigned int)v170);
      v14 = v170;
      v13 = 1;
    }
    ++v170;
  }
  physx_Cm_RadixSortBuffered_Sort_3ea180((__int64)(v9 + 16), v9[24], 0);
  v201 = v9[25];
  v202 = v9[26];
  if ((unsigned int)v265 >= 4) {
    v204 = (float*)(v201 + 8);
    v205 = (float*)(v202 + 8);
    v206 = 0;
    v207 = 0;
    v8 = 0;
    do {
      v208 = v206 - 3;
      v209 = (float)(PSEUDO_UNFUSED(*(v205 - 2) * (float)v206)) +
             (float)(*(v204 - 2) * (float)(unsigned int)v207);
      v210 = (float)(v206 - 1);
      v211 = v206 - 2;
      v212 = v207 + 2;
      v206 -= 4;
      v213 = (float)v211;
      v214 = v209 > v142;
      v215 = (float)(PSEUDO_UNFUSED(*(v205 - 1) * v210)) +
             (float)(*(v204 - 1) * (float)(unsigned int)(v207 + 1));
      v216 = *v205;
      v217 = v205[1];
      v205 += 4;
      if (v209 <= v142) {
        v218 = v207;
      }
      else {
        v209 = v142;
        v218 = v14;
      }
      v219 = v214 && v215 > v209;
      v220 = v216 * v213;
      v221 = *v204;
      v222 = v204[1];
      v204 += 4;
      v223 = v219;
      if (v215 <= v209) {
        v209 = v215;
        v218 = v207 + 1;
      }
      v224 = v220 + (float)(v221 * (float)v212);
      v225 = v224 > v209;
      if (v224 > v209) {
        v212 = v218;
      }
      else {
        v209 = v220 + (float)(v221 * (float)v212);
      }
      v226 = v217 * (float)v208;
      v227 = v226 + (float)(v222 * (float)(unsigned int)(v207 + 3));
      v229 = v225 && v227 > v209;
      if (v227 <= v209) {
        v14 = v207 + 3;
      }
      else {
        v14 = v212;
      }
      if (v227 <= v209) {
        v142 = v226 + (float)(v222 * (float)(unsigned int)(v207 + 3));
      }
      else {
        v142 = v209;
      }
      v203 = v207 + 4;
      if ((v229 & v223) == 0) {
        v13 = 2;
      }
      v235 = v207 == v265 - 7;
      v207 += 4;
    } while (!v235);
  }
  else {
    v203 = 0;
    v8 = 0;
  }
  v230 = -(int)v203;
  for (k = 3; k != 0; --k) {
    v232 = (float)v230--;
    v233 = *(float*)(v202 + 4 * v203) * v232;
    if ((float)(v233 + (float)(*(float*)(v201 + 4 * v203) *
                               (float)(unsigned int)v203)) <= v142) {
      v142 = v233 +
             (float)(*(float*)(v201 + 4 * v203) * (float)(unsigned int)v203);
      v14 = v203;
      v13 = 2;
    }
    ++v203;
  }
LABEL_251:
  v234 = v14 + 1;
  v235 = v14 == 0 | v234 == v8;
  result = !v235;
  *a2 = v234;
  if (!v235) {
    v237 = 4 * v8;
    v238 = a1[24];
    if ((_DWORD)v237 != 0) {
      v239 = result;
      v240 = v8;
      GameRoutine_1a0b950(a1[24], a4, v237);
      v8 = v240;
      result = v239;
    }
    if (v8 != 0) {
      v241 = a1[8 * (unsigned __int64)v13 + 2];
      v242 = v8 & 7;
      if (v8 < 8) {
        v243 = 0;
        if ((v8 & 7) == 0) {
          return result;
        }
        goto LABEL_267;
      }
      v244 = (_DWORD*)(a4 + 16);
      v245 = (unsigned int*)(v241 + 16);
      v246 = 0;
      do {
        v246 -= 8;
        *(v244 - 4) = *(_DWORD*)(v238 + 4LL * *(v245 - 4));
        *(v244 - 3) = *(_DWORD*)(v238 + 4LL * *(v245 - 3));
        *(v244 - 2) = *(_DWORD*)(v238 + 4LL * *(v245 - 2));
        *(v244 - 1) = *(_DWORD*)(v238 + 4LL * *(v245 - 1));
        *(_DWORD*)v244 = *(_DWORD*)(v238 + 4LL * *v245);
        v244[1] = *(_DWORD*)(v238 + 4LL * v245[1]);
        v244[2] = *(_DWORD*)(v238 + 4LL * v245[2]);
        v247 = v245[3];
        v245 += 8;
        v244[3] = *(_DWORD*)(v238 + 4 * v247);
        v244 += 8;
      } while (-(__int64)(v8 & 0xFFFFFFF8) != v246);
      v243 = -v246;
      if ((v8 & 7) != 0) {
      LABEL_267:
        v248 = (_DWORD*)(a4 + 4 * v243);
        v249 = (unsigned int*)(v241 + 4 * v243);
        do {
          v250 = *v249++;
          --v242;
          *(_DWORD*)v248++ = *(_DWORD*)(v238 + 4LL * v250);
        } while (v242 != 0);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
