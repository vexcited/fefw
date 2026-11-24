#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memmove_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_silk_2f67c0(__int64 result, int, int);
__int64 opus_silk_2fa2a0(__int64 result, char, __int64, int, unsigned int);
__int64 silk_LPC_analysis_filter(__int64, __int64, __int16*, int, int);
__int64 silk_NLSF2A(__int64, __int64, unsigned int);
__int64 silk_NLSF_decode(__int64, char*, __int64);
__int64 silk_NSQ_noise_shape_feedback_loop_neon(signed int*, signed int*,
                                                int16x4_t*, int);
__int64 silk_gains_dequant(__int64 result, char*, _BYTE*, int, int);
__int64 silk_noise_shape_quantizer_short_prediction_neon(__int64, int32x4_t*,
                                                         int);
extern _UNKNOWN* SdkData_e877e8;
extern _UNKNOWN* SdkData_e878a8;
extern _UNKNOWN** SdkData_e878a0;
__int64 opus_silk_2efdc0(int* a1, int* a2, __int64 a3, __int64 a4, _BYTE* a5,
                         __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                         __int64 a10, __int64 a11, __int64 a12, __int64 a13,
                         unsigned int a14, __int16 a15);
__int64 opus_silk_2f9f80(__int64 a1, __int64 a2, int a3);

__int64 opus_silk_2efdc0(int* a1, int* a2, __int64 a3, __int64 a4, _BYTE* a5,
                         __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                         __int64 a10, __int64 a11, __int64 a12, __int64 a13,
                         unsigned int a14, __int16 a15)
{
  __int64 v15;
  __int64 v16;
  int* v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  int v23;
  unsigned __int64 v24;
  char* v25;
  unsigned __int64 v26;
  char* v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  int v31;
  __int64 v32;
  char* v33;
  int* v34;
  __int64 v35;
  int v36;
  _BYTE* v37;
  __int64 v38;
  unsigned int v39;
  int* v40;
  int* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _WORD* v50;
  __int16* v51;
  int v52;
  int v53;
  char v54;
  int v55;
  int v56;
  __int64 v57;
  int v58;
  int v59;
  int v60;
  unsigned int v61;
  char v62;
  int v63;
  char v64;
  char v65;
  int v66;
  int v67;
  unsigned int v68;
  int v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int16* v74;
  __int64 v75;
  char* v76;
  __int64 v77;
  int v78;
  int v79;
  unsigned __int64 v80;
  int v81;
  unsigned __int64 v82;
  int v83;
  int* v84;
  __int16* v85;
  int v86;
  int v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 i;
  __int64 v92;
  char* v93;
  __int16* v94;
  int v95;
  int v96;
  unsigned __int64 v97;
  int v98;
  unsigned __int64 v99;
  int v100;
  int v101;
  __int64 v102;
  unsigned int v103;
  unsigned int v104;
  int v105;
  unsigned int v106;
  unsigned int v107;
  int v108;
  int v109;
  __int64 v110;
  int v111;
  int v112;
  int v113;
  int v114;
  char v115;
  int v116;
  unsigned int v117;
  bool v118;
  int v119;
  int v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  char* v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  int v134;
  unsigned __int64 v135;
  int v136;
  unsigned __int64 v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  _WORD* v157;
  __int64 v158;
  int v159;
  char* v160;
  int* v161;
  __int64 v162;
  bool v163;
  unsigned int v164;
  int v165;
  unsigned int v166;
  int v167;
  unsigned int v168;
  int v169;
  unsigned int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  __int64 v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  unsigned __int64 v183;
  unsigned __int64 v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  __int64 v193;
  int v194;
  __int64 v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  unsigned int v201;
  unsigned int v202;
  int v203;
  int v204;
  int v205;
  struct {
    __int64 v207;
    char* v208;
    char* v209;
    __int64 v210;
    char* v211;
    char gap40_[4];
    int v212;
    int* v213;
    char* v214;
    __int64 v215;
    __int64 v216;
    int* v217;
    __int64 v218;
    __int64 v219;
    char* v220;
    _BOOL8 v221;
    __int64 v222;
    __int64 v223;
    int* v224;
    __int64 v225;
    int* v226;
    __int64 v227;
    _BYTE* v228;
    __int64 v229;
    __int64 v230;
    char gap192_[4];
    unsigned int v231;
    _WORD* v232;
    __int64 v233;
    __int64 v234;
    char gap224_[4];
    signed int v235;
    int v236;
    unsigned int v237;
    int v238;
    unsigned int v239;
    __int16* v240;
    unsigned int v241;
    signed int v242;
    __int64 v243;
    __int64 v244;
    int v245;
    int v246;
    int v247;
    unsigned int v248;
    int* v249;
    char* v250;
    __int64 v251;
    __int64 v252;
    __int64 v253;
    __int64 v254;
    int16x4_t* v255;
    char gap352_[4];
    int v256;
    int v257;
    int v258;
    int* v259;
  } v207_;
  struct {
    _DWORD v260[6];
    int v261;
    int v262;
    int v263;
    int v264;
    int v265;
    int v266;
    int v267;
    int v268;
    int v269;
    int v270;
  } v260_;

  v15 = a3;
  v16 = a13;
  v19 = a1;
  v207_.v219 = a8;
  v207_.v218 = a7;
  v207_.v227 = a6;
  v207_.v228 = a5;
  a2[1085] = *(char*)(a3 + 34);
  v20 = *(char*)(a3 + 30);
  LODWORD(v207_.v259) = a2[1082];
  v21 = a1[1148];
  v22 = *((__int16*)SdkData_e877e8 + 2 * (*(char*)(a3 + 29) >> 1) + v20);
  v207_.v258 = *(unsigned __int8*)(a3 + 31);
  v23 = a1[1146] + v21;
  v24 = 4LL * v23;
  v25 = (char*)&v207_.v207 - ((v24 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v25, 0, v24);
  v26 = 2LL * v23;
  v27 = (char*)&v207_.v207 - ((v26 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v27, 0, v26);
  v28 = 4LL * v19[1147];
  v29 = (char*)&v207_.v207 - ((v28 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v29, 0, v28);
  a2[1084] = v21;
  a2[1083] = v21;
  v30 = v19[1145];
  if ((int)v30 > 0) {
    v31 = (int)v207_.v259;
    v32 = 0;
    v207_.v248 = v22;
    v33 = v25;
    v207_.v214 = v25 + 8;
    v34 = a2 + 320;
    v207_.v229 = a12;
    v35 = v19[1148];
    v207_.v249 = a2 + 320;
    v207_.v250 = v25;
    if (v207_.v258 == 4) {
      v36 = 3;
    }
    else {
      v36 = 1;
    }
    v207_.v225 = a11;
    v207_.v224 = a2 + 960;
    v207_.v213 = a2 + 975;
    v207_.v232 = (_WORD*)a2 + v35;
    v207_.v210 = a15;
    v207_.v245 = (__int16)a14;
    v207_.v223 = a10;
    v207_.v222 = a9;
    v207_.v237 = v22 - 944;
    v207_.v221 = v207_.v258 == 4;
    v207_.v212 = v36;
    v207_.v235 = 512 - (a14 >> 1);
    v207_.v236 = (__int16)(944 - v22) * (__int16)a14;
    v207_.v246 = (__int16)a14 * v22;
    v207_.v247 = a14;
    v207_.v239 = v22 + 944;
    v207_.v238 = (__int16)(v22 + 944) * (__int16)a14;
    v207_.v231 = v22 + 80;
    v207_.v241 = v22 - 80;
    v207_.v242 = (a14 >> 1) - 512;
    v207_.v226 = (int*)v29;
    v207_.v211 = v29 + 16;
    v207_.v209 = v25 + 16;
    v207_.v208 = v27 + 8;
    v37 = v207_.v228;
    v207_.v220 = v27;
    v207_.v217 = v19;
    v207_.v216 = a13;
    v207_.v215 = v15;
    do {
      v207_.v234 = v32;
      v51 = (__int16*)(v207_.v227 + 32LL * ((unsigned int)v207_.v221 |
                                            ((unsigned int)v32 >> 1)));
      v52 = *(_DWORD*)(v207_.v222 + 4 * v32);
      a2[1087] = 0;
      v207_.v258 = *(unsigned __int8*)(v15 + 29);
      if (v207_.v258 == 2) {
        v31 = *(_DWORD*)(v16 + 4 * v32);
        if ((v207_.v212 & (unsigned int)v32) != 0) {
          v53 = 2;
          v54 = 1;
        }
        else {
          v55 = v19[1160];
          v56 = v19[1148] - (v31 + v55) - 2;
          v57 = (__int64)&v27[2 * v56];
          v58 = *(_DWORD*)(v16 + 4 * v32);
          silk_LPC_analysis_filter(
              v57, (__int64)a2 + 2 * v56 + 2 * v19[1147] * (int)v32, v51,
              v31 + v55 + 2, v55);
          v31 = v58;
          v34 = v207_.v249;
          v33 = v207_.v250;
          v32 = v207_.v234;
          v54 = 0;
          v27 = v207_.v220;
          a2[1087] = 1;
          v21 = v19[1148];
          a2[1083] = v21;
          v53 = *(unsigned __int8*)(v15 + 29);
        }
        v207_.v258 = v53;
      }
      else {
        v54 = 1;
      }
      v59 = *(_DWORD*)(v16 + 4 * v32);
      v60 = *(_DWORD*)(v207_.v229 + 4 * v32);
      if (v60 <= 1) {
        v61 = 1;
      }
      else {
        v61 = *(_DWORD*)(v207_.v229 + 4 * v32);
      }
      v62 = __clz(v61);
      v63 = ((unsigned __int64)((int)((unsigned __int64)-(
                                          __int64)((((__int64)(0x1FFFFFFF /
                                                               ((int)(v61
                                                                      << (v62 -
                                                                          1)) >>
                                                                16))
                                                     << 19) *
                                                    (int)(v61 << (v62 - 1))) &
                                                   0xFFFFFFF800000000LL) >>
                                      32) *
                                (__int64)(0x1FFFFFFF /
                                          ((int)(v61 << (v62 - 1)) >> 16))) >>
             16) +
            ((0x1FFFFFFF / ((int)(v61 << (v62 - 1)) >> 16)) << 16);
      v64 = 15 - v62;
      v65 = v62 - 15;
      v66 = (int)0x80000000 >> v65;
      v67 = v63 >> v64;
      if (v63 > (int)0x80000000 >> v65) {
        v66 = v63;
      }
      if (v63 <= (int)(0x7FFFFFFFu >> v65)) {
        v68 = v66;
      }
      else {
        v68 = 0x7FFFFFFFu >> v65;
      }
      v69 = v19[1147];
      v70 = v68 << v65;
      if (v60 >= 0x20000) {
        v70 = v67;
      }
      v207_.v233 = (unsigned int)v19[1147];
      if (v69 >= 1) {
        v71 = (__int64)((v70 >> 4) + 1) >> 1;
        if ((int)v69 < 8) {
          v72 = 0;
          v73 = v69 & 7;
          if ((v69 & 7) == 0) {
            goto LABEL_33;
          }
        LABEL_31:
          v84 = &v207_.v226[v72];
          v85 = (__int16*)(a4 + 2 * v72);
          do {
            v86 = *v85++;
            --v73;
            *v84++ = (unsigned __int64)(v86 * (__int64)(int)v71) >> 16;
          } while (v73 != 0);
          goto LABEL_33;
        }
        v74 = (__int16*)(a4 + 8);
        v75 = 0;
        v76 = v207_.v211;
        v77 = -(__int64)(v69 & 0x7FFFFFF8);
        do {
          v78 = *(v74 - 2);
          v75 -= 8;
          v79 = *(v74 - 1);
          v80 = (unsigned __int64)(*(v74 - 3) * (__int64)(int)v71) >> 16;
          *((_DWORD*)v76 - 4) =
              (unsigned __int64)(*(v74 - 4) * (__int64)(int)v71) >> 16;
          *((_DWORD*)v76 - 3) = v80;
          v81 = *v74;
          *((_DWORD*)v76 - 2) =
              (unsigned __int64)(v78 * (__int64)(int)v71) >> 16;
          *((_DWORD*)v76 - 1) =
              (unsigned __int64)(v79 * (__int64)(int)v71) >> 16;
          v82 = (unsigned __int64)(v74[1] * (__int64)(int)v71) >> 16;
          *(_DWORD*)v76 = (unsigned __int64)(v81 * (__int64)(int)v71) >> 16;
          *((_DWORD*)v76 + 1) = v82;
          v83 = v74[2];
          LODWORD(v82) = v74[3];
          v74 += 8;
          *((_DWORD*)v76 + 2) =
              (unsigned __int64)(v83 * (__int64)(int)v71) >> 16;
          *((_DWORD*)v76 + 3) =
              (unsigned __int64)((int)v82 * (__int64)(int)v71) >> 16;
          v76 += 32;
        } while (v77 != v75);
        v72 = -v75;
        v73 = v207_.v233 & 7;
        if ((v207_.v233 & 7) != 0) {
          goto LABEL_31;
        }
      }
    LABEL_33:
      if ((v54 & 1) == 0) {
        v87 = v21 - v59 - 2;
        if (v87 < v21) {
          v88 = ((unsigned __int64)((int)v207_.v210 * (__int64)v70) >> 14) &
                0xFFFFFFFC;
          if (v207_.v234 != 0) {
            LODWORD(v88) = v70;
          }
          v89 = v87;
          v90 = ((_BYTE)v59 + 2) & 7;
          for (i = v89; v90 != 0; ++i) {
            --v90;
            *(_DWORD*)&v33[4 * i] = (unsigned __int64)(*(__int16*)&v27[2 * i] *
                                                       (__int64)(int)v88) >>
                                    16;
          }
          if ((unsigned __int64)(v89 - v21) <= 0xFFFFFFFFFFFFFFF8LL) {
            v92 = v21 - i;
            v93 = &v207_.v209[4 * i];
            v94 = (__int16*)&v207_.v208[2 * i];
            do {
              v95 = *(v94 - 2);
              v92 -= 8;
              v96 = *(v94 - 1);
              v97 = (unsigned __int64)(*(v94 - 3) * (__int64)(int)v88) >> 16;
              *((_DWORD*)v93 - 4) =
                  (unsigned __int64)(*(v94 - 4) * (__int64)(int)v88) >> 16;
              *((_DWORD*)v93 - 3) = v97;
              v98 = *v94;
              *((_DWORD*)v93 - 2) =
                  (unsigned __int64)(v95 * (__int64)(int)v88) >> 16;
              *((_DWORD*)v93 - 1) =
                  (unsigned __int64)(v96 * (__int64)(int)v88) >> 16;
              v99 = (unsigned __int64)(v94[1] * (__int64)(int)v88) >> 16;
              *(_DWORD*)v93 = (unsigned __int64)(v98 * (__int64)(int)v88) >> 16;
              *((_DWORD*)v93 + 1) = v99;
              v100 = v94[2];
              LODWORD(v99) = v94[3];
              v94 += 8;
              *((_DWORD*)v93 + 2) =
                  (unsigned __int64)(v100 * (__int64)(int)v88) >> 16;
              *((_DWORD*)v93 + 3) =
                  (unsigned __int64)((int)v99 * (__int64)(int)v88) >> 16;
              v93 += 32;
            } while (v92 != 0);
          }
        }
      }
      v101 = a2[1086];
      if (v60 == v101) {
        v102 = v207_.v234;
        goto LABEL_75;
      }
      if (v101 >= 0) {
        v103 = a2[1086];
      }
      else {
        v103 = -v101;
      }
      v104 = __clz(v103);
      v105 = v101 << (v104 - 1);
      if (v60 >= 0) {
        v106 = v60;
      }
      else {
        v106 = -v60;
      }
      v107 = __clz(v106);
      v108 = v60 << (v107 - 1);
      v109 = 0x1FFFFFFF / (v108 >> 16);
      v110 = (0x1FFFFFFF / (v108 >> 16) * (__int64)v105) >> 16;
      v111 = v105 - (((unsigned __int64)((int)v110 * (__int64)v108) >> 29) &
                     0xFFFFFFF8);
      v112 = v104 - v107;
      v113 = ((unsigned __int64)(v109 * (__int64)v111) >> 16) + v110;
      if (v104 - v107 + 29 >= 0x30) {
        v114 = 0;
      }
      else {
        v114 = v113 >> (v112 + 13);
      }
      v115 = -13 - v112;
      v116 = (int)0x80000000 >> (-13 - v112);
      if (v116 <= v113) {
        v116 = v113;
      }
      if ((int)(0x7FFFFFFFu >> (-13 - v112)) >= v113) {
        v117 = v116;
      }
      else {
        v117 = 0x7FFFFFFFu >> (-13 - v112);
      }
      v118 = v112 <= -14;
      v119 = v19[1148];
      v120 = v117 << v115;
      if (!v118) {
        v120 = v114;
      }
      if (v119 >= 1) {
        v121 = a2[1084] - v119;
        do {
          v34[v121] = (unsigned __int64)(v34[v121] * (__int64)v120) >> 16;
          ++v121;
        } while (v121 < a2[1084]);
      }
      if (v207_.v258 == 2 && a2[1087] == 0) {
        v122 = a2[1083];
        LODWORD(v123) = v122 - v59 - 2;
        if ((int)v123 < (int)v122) {
          v124 = (int)v123;
          v125 = (v59 + 2) & 7LL;
          if (v125 != 0) {
            v123 = (int)v123;
            do {
              --v125;
              *(_DWORD*)&v33[4 * v123] =
                  (unsigned __int64)(*(int*)&v33[4 * v123] * (__int64)v120) >>
                  16;
              ++v123;
            } while (v125 != 0);
            if ((unsigned __int64)(v124 - v122) > 0xFFFFFFFFFFFFFFF8LL) {
              goto LABEL_74;
            }
          LABEL_72:
            v126 = v122 - v123;
            v127 = &v207_.v209[4 * v123];
            do {
              v126 -= 8;
              v128 =
                  (unsigned __int64)(*((int*)v127 - 3) * (__int64)v120) >> 16;
              *((_DWORD*)v127 - 4) =
                  (unsigned __int64)(*((int*)v127 - 4) * (__int64)v120) >> 16;
              *((_DWORD*)v127 - 3) = v128;
              v129 =
                  (unsigned __int64)(*((int*)v127 - 1) * (__int64)v120) >> 16;
              *((_DWORD*)v127 - 2) =
                  (unsigned __int64)(*((int*)v127 - 2) * (__int64)v120) >> 16;
              *((_DWORD*)v127 - 1) = v129;
              v130 =
                  (unsigned __int64)(*((int*)v127 + 1) * (__int64)v120) >> 16;
              *(_DWORD*)v127 =
                  (unsigned __int64)(*(int*)v127 * (__int64)v120) >> 16;
              *((_DWORD*)v127 + 1) = v130;
              v131 =
                  (unsigned __int64)(*((int*)v127 + 3) * (__int64)v120) >> 16;
              *((_DWORD*)v127 + 2) =
                  (unsigned __int64)(*((int*)v127 + 2) * (__int64)v120) >> 16;
              *((_DWORD*)v127 + 3) = v131;
              v127 += 32;
            } while (v126 != 0);
            goto LABEL_74;
          }
          v123 = (int)v123;
          if ((unsigned __int64)((int)v123 - v122) <= 0xFFFFFFFFFFFFFFF8LL) {
            goto LABEL_72;
          }
        }
      }
    LABEL_74:
      v21 = a2[1083];
      v132 = (unsigned __int64)(a2[960] * (__int64)v120) >> 16;
      v133 = (unsigned __int64)(a2[1081] * (__int64)v120) >> 16;
      a2[1080] = (unsigned __int64)(a2[1080] * (__int64)v120) >> 16;
      v134 = a2[961];
      a2[960] = v132;
      LODWORD(v132) = a2[963];
      a2[1081] = v133;
      v135 = (unsigned __int64)(a2[962] * (__int64)v120) >> 16;
      a2[961] = (unsigned __int64)(v134 * (__int64)v120) >> 16;
      v136 = a2[964];
      a2[963] = (unsigned __int64)((int)v132 * (__int64)v120) >> 16;
      LODWORD(v132) = a2[966];
      a2[962] = v135;
      v137 = (unsigned __int64)(a2[965] * (__int64)v120) >> 16;
      a2[964] = (unsigned __int64)(v136 * (__int64)v120) >> 16;
      a2[965] = v137;
      a2[966] = (unsigned __int64)((int)v132 * (__int64)v120) >> 16;
      a2[967] = (unsigned __int64)(a2[967] * (__int64)v120) >> 16;
      a2[968] = (unsigned __int64)(a2[968] * (__int64)v120) >> 16;
      a2[969] = (unsigned __int64)(a2[969] * (__int64)v120) >> 16;
      a2[970] = (unsigned __int64)(a2[970] * (__int64)v120) >> 16;
      a2[971] = (unsigned __int64)(a2[971] * (__int64)v120) >> 16;
      a2[972] = (unsigned __int64)(a2[972] * (__int64)v120) >> 16;
      a2[973] = (unsigned __int64)(a2[973] * (__int64)v120) >> 16;
      a2[974] = (unsigned __int64)(a2[974] * (__int64)v120) >> 16;
      a2[975] = (unsigned __int64)(a2[975] * (__int64)v120) >> 16;
      a2[1056] = (unsigned __int64)(a2[1056] * (__int64)v120) >> 16;
      a2[1057] = (unsigned __int64)(a2[1057] * (__int64)v120) >> 16;
      a2[1058] = (unsigned __int64)(a2[1058] * (__int64)v120) >> 16;
      a2[1059] = (unsigned __int64)(a2[1059] * (__int64)v120) >> 16;
      a2[1060] = (unsigned __int64)(a2[1060] * (__int64)v120) >> 16;
      a2[1061] = (unsigned __int64)(a2[1061] * (__int64)v120) >> 16;
      a2[1062] = (unsigned __int64)(a2[1062] * (__int64)v120) >> 16;
      a2[1063] = (unsigned __int64)(a2[1063] * (__int64)v120) >> 16;
      a2[1064] = (unsigned __int64)(a2[1064] * (__int64)v120) >> 16;
      a2[1065] = (unsigned __int64)(a2[1065] * (__int64)v120) >> 16;
      a2[1066] = (unsigned __int64)(a2[1066] * (__int64)v120) >> 16;
      a2[1067] = (unsigned __int64)(a2[1067] * (__int64)v120) >> 16;
      a2[1068] = (unsigned __int64)(a2[1068] * (__int64)v120) >> 16;
      a2[1069] = (unsigned __int64)(a2[1069] * (__int64)v120) >> 16;
      a2[1070] = (unsigned __int64)(a2[1070] * (__int64)v120) >> 16;
      a2[1071] = (unsigned __int64)(a2[1071] * (__int64)v120) >> 16;
      a2[1072] = (unsigned __int64)(a2[1072] * (__int64)v120) >> 16;
      a2[1073] = (unsigned __int64)(a2[1073] * (__int64)v120) >> 16;
      a2[1074] = (unsigned __int64)(a2[1074] * (__int64)v120) >> 16;
      a2[1075] = (unsigned __int64)(a2[1075] * (__int64)v120) >> 16;
      a2[1076] = (unsigned __int64)(a2[1076] * (__int64)v120) >> 16;
      a2[1077] = (unsigned __int64)(a2[1077] * (__int64)v120) >> 16;
      a2[1078] = (unsigned __int64)(a2[1078] * (__int64)v120) >> 16;
      v102 = v207_.v234;
      a2[1079] = (unsigned __int64)(a2[1079] * (__int64)v120) >> 16;
      v60 = *(_DWORD*)(v207_.v229 + 4 * v102);
      a2[1086] = v60;
      v207_.v258 = *(unsigned __int8*)(v15 + 29);
      v207_.v233 = (unsigned int)v19[1147];
    LABEL_75:
      v138 = v51[2];
      v139 = v51[3];
      v140 = v51[1] << 15;
      v141 = v51[4];
      v142 = v51[5];
      v143 = v51[6];
      v144 = v51[7];
      v145 = *(_DWORD*)(v207_.v223 + 4 * v102);
      v146 = *(_DWORD*)(v207_.v225 + 4 * v102);
      v207_.v257 = v19[1159];
      v147 = *v51 << 15;
      v260_.v269 = v140;
      v260_.v270 = v147;
      v148 = v51[8];
      v260_.v267 = v139 << 15;
      v260_.v268 = v138 << 15;
      v260_.v265 = v142 << 15;
      v260_.v266 = v141 << 15;
      v149 = v19[1160];
      v260_.v263 = v144 << 15;
      v260_.v264 = v143 << 15;
      v150 = v148 << 15;
      v151 = v51[9];
      v207_.v256 = v149;
      v152 = v151 << 15;
      v153 = a2[1084];
      v260_.v261 = v152;
      v260_.v262 = v150;
      v207_.v230 = a4;
      if (v149 != 16) {
        v39 = v207_.v233;
        v38 = v207_.v234;
        memset(v260_.v260, 0, sizeof(v260_.v260));
        if ((int)v207_.v233 < 1) {
          goto LABEL_7;
        }
      LABEL_79:
        v157 = v207_.v232;
        v158 = v39;
        v207_.v254 = (unsigned int)(v60 >> 6);
        v207_.v252 = (__int16)v146;
        v207_.v253 = (__int16)v145;
        v207_.v251 = (__int64)v146 >> 16;
        v207_.v259 = &v34[v153 - v31 + 1];
        v207_.v240 = (__int16*)(v207_.v218 + 10 * v38);
        v207_.v255 = (int16x4_t*)(v207_.v219 + 48 * v38);
        v207_.v243 = (__int64)((v52 >> 2) | (v52 << 15)) >> 16;
        v207_.v244 = (__int16)(v52 >> 2);
        v159 = a2[1085];
        v160 = &v207_.v214[4 * (v21 - v31)];
        v161 = v207_.v226;
        v207_.v228 = v37;
        v162 = (__int64)v207_.v213;
        while (2) {
          v180 = v31;
          v181 = v207_.v256;
          a2[1085] = 196314165 * v159 + 907633515;
          v182 = silk_noise_shape_quantizer_short_prediction_neon(
              v162, (int32x4_t*)v260_.v260, v181);
          if (v207_.v258 == 2) {
            v183 = ((*(int*)v160 * (__int64)*v207_.v240) << 16) +
                   ((unsigned __int64)(*((int*)v160 - 1) *
                                       (__int64)v207_.v240[1]) >>
                    16 << 32);
            v184 = *((int*)v160 - 2) * (__int64)v207_.v240[2];
            v186 = *((_DWORD*)v160 - 4);
            v185 = *((_DWORD*)v160 - 3);
            v160 += 4;
            v187 = ((v183 + (v184 >> 16 << 32) +
                     ((unsigned __int64)(v185 * (__int64)v207_.v240[3]) >>
                      16 << 32) +
                     0x200000000LL) >>
                    32) +
                   ((unsigned __int64)(v207_.v240[4] * (__int64)v186) >> 16);
          }
          else {
            v187 = 0;
          }
          v188 = silk_NSQ_noise_shape_feedback_loop_neon(
              a2 + 1081, a2 + 1056, v207_.v255, v207_.v257);
          v34 = v207_.v249;
          v31 = v180;
          v189 = a2[1080];
          v190 = v188 +
                 ((unsigned __int64)((int)v207_.v253 * (__int64)v189) >> 16);
          v191 = ((unsigned __int64)((int)v207_.v252 *
                                     (__int64)v207_.v249[a2[1084] - 1]) >>
                  16) +
                 ((unsigned __int64)(v189 * (__int64)(int)v207_.v251) >> 16);
          v192 = 4 * v182 - v190 - v191;
          if (v180 < 1) {
            v196 = v192 >> 1;
          }
          else {
            v194 = *(v207_.v259 - 1);
            v193 = *v207_.v259;
            v195 = *(v207_.v259 - 2);
            ++v207_.v259;
            v196 = (int)(v187 + 2 * v192 -
                         2 * (((unsigned __int64)(v207_.v244 * (v195 + v193)) >>
                               16) +
                              ((unsigned __int64)(v194 *
                                                  (__int64)(int)v207_.v243) >>
                               16))) >>
                   2;
          }
          v197 = v196 + 1;
          v198 = *v161;
          v199 = *v161 - (v197 >> 1);
          v33 = v207_.v250;
          if (a2[1085] < 0) {
            v199 = -v199;
          }
          if (v199 <= -31744) {
            v199 = -31744;
          }
          if (v199 >= 30720) {
            v199 = 30720;
          }
          v200 = v199 - v207_.v248;
          if (v207_.v247 >= 2049) {
            v201 = v200 - v207_.v242;
            if (v200 > v207_.v242) {
              v202 = v201 >> 10;
              if (v201 >> 10 == 0) {
              LABEL_114:
                v167 = v207_.v238;
                v166 = v207_.v239;
                v165 = v207_.v246;
                v164 = v207_.v248;
                if (v202 != 0) {
                  v165 = v207_.v236;
                  v164 = v207_.v237;
                  v167 = v207_.v246;
                  v166 = v207_.v248;
                  if (v202 != -1) {
                    v164 = v207_.v231 + (v202 << 10);
                    v203 = v207_.v245;
                    v166 = v164 + 1024;
                    v204 = (__int16)-(__int16)v164;
                    v205 = (__int16)(-1024 - v164);
                    goto LABEL_121;
                  }
                }
                goto LABEL_89;
              }
            LABEL_120:
              v164 = v207_.v241 + (v202 << 10);
              v203 = v207_.v245;
              v166 = v164 + 1024;
              v204 = (__int16)v164;
              v205 = (__int16)(v164 + 1024);
            LABEL_121:
              v165 = v204 * v203;
              v167 = v205 * v203;
            LABEL_89:
              ++v161;
              if (v167 + (__int16)(v199 - v166) * (__int16)(v199 - v166) >=
                  v165 + (__int16)(v199 - v164) * (__int16)(v199 - v164)) {
                v168 = v164;
              }
              else {
                v168 = v166;
              }
              v169 = v207_.v254;
              v170 = v168 >> 9;
              v171 = 16 * v168;
              *v37 = (v170 + 1) >> 1;
              if (a2[1085] < 0) {
                v171 = -v171;
              }
              v172 = v171 + 2 * v187;
              v173 = v172 + 16 * v182;
              v174 = v173 - 16 * v198;
              v175 = v174 - 4 * v190;
              v176 = (((int)((unsigned __int64)(v169 * (__int64)v173) >> 16) >>
                       7) +
                      1) >>
                     1;
              if (v176 <= -32768) {
                v176 = -32768;
              }
              if (v176 >= 0x7FFF) {
                LOWORD(v176) = 0x7FFF;
              }
              --v158;
              *v157++ = v176;
              *(_DWORD*)(v162 + 4) = v173;
              v162 += 4;
              a2[1080] = v175;
              a2[1081] = v174;
              v34[a2[1084]] = v175 - 4 * v191;
              v177 = a2[1083];
              *(_DWORD*)&v33[4 * v177] = 2 * v172;
              v178 = a2[1084];
              v21 = v177 + 1;
              a2[1083] = v177 + 1;
              a2[1084] = v178 + 1;
              v179 = (char)*v37++;
              v159 = a2[1085] + v179;
              a2[1085] = v159;
              if (v158 == 0) {
                v39 = v207_.v233;
                v38 = v207_.v234;
                v19 = v207_.v217;
                v16 = v207_.v216;
                v37 = v207_.v228;
                v15 = v207_.v215;
                v27 = v207_.v220;
                goto LABEL_7;
              }
              continue;
            }
            if (v200 >= v207_.v235) {
              v163 = v200 >= 0;
              v165 = v207_.v236;
              v164 = v207_.v237;
              v166 = v207_.v239;
              if (v163) {
                v164 = v207_.v248;
              }
              v167 = v207_.v246;
              if (v163) {
                v165 = v207_.v246;
              }
              else {
                v166 = v207_.v248;
              }
              if (v163) {
                v167 = v207_.v238;
              }
              goto LABEL_89;
            }
            v200 += v207_.v242;
          }
          break;
        }
        v202 = v200 >> 10;
        if (v200 >> 10 < 1) {
          goto LABEL_114;
        }
        goto LABEL_120;
      }
      v154 = v51[10] << 15;
      v260_.v260[4] = v51[11] << 15;
      v260_.v260[5] = v154;
      v155 = v51[12] << 15;
      v156 = v51[13];
      v260_.v260[1] = v51[14] << 15;
      v260_.v260[2] = v156 << 15;
      v260_.v260[3] = v155;
      v39 = v207_.v233;
      v38 = v207_.v234;
      v260_.v260[0] = v51[15] << 15;
      if ((int)v207_.v233 >= 1) {
        goto LABEL_79;
      }
    LABEL_7:
      v32 = v38 + 1;
      v40 = v207_.v224;
      v41 = &v207_.v224[v39];
      v42 = *(_QWORD*)v41;
      v43 = *((_QWORD*)v41 + 1);
      v44 = *((_QWORD*)v41 + 3);
      *((_QWORD*)v207_.v224 + 2) = *((_QWORD*)v41 + 2);
      *((_QWORD*)v40 + 3) = v44;
      *(_QWORD*)v40 = v42;
      *((_QWORD*)v40 + 1) = v43;
      v45 = *((_QWORD*)v41 + 4);
      v46 = *((_QWORD*)v41 + 5);
      v48 = *((_QWORD*)v41 + 6);
      v47 = *((_QWORD*)v41 + 7);
      *((_QWORD*)v40 + 6) = v48;
      *((_QWORD*)v40 + 7) = v47;
      *((_QWORD*)v40 + 4) = v45;
      *((_QWORD*)v40 + 5) = v46;
      v49 = v19[1147];
      a4 = v207_.v230 + 2 * v49;
      v37 += v49;
      v50 = &v207_.v232[v49];
      v30 = v19[1145];
      v207_.v232 = v50;
    } while (v32 < v30);
  }
  a2[1082] = *(_DWORD*)(v16 + 4 * v30 - 4);
  memmove_plt((__int64)a2, (__int64)a2 + 2 * v19[1146], 2LL * v19[1148]);
  return memmove_plt((__int64)(a2 + 320), (__int64)&a2[v19[1146] + 320],
                     4LL * v19[1148]);
}

__int64 opus_silk_2f9f80(__int64 a1, __int64 a2, int a3)
{
  int v3;
  int v6;
  signed int v7;
  __int64 v8;
  __int64 v9;
  __int16* v10;
  __int64 v11;
  _WORD* v12;
  __int16* v13;
  __int16 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  _WORD* v19;
  __int16* v20;
  __int16* v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 result;
  _WORD* v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  int v31;
  struct {
    _QWORD v32[4];
    _QWORD v33[4];
  } v32_;

  v3 = *(_DWORD*)(a1 + 2324);
  memset(v32_.v33, 0, sizeof(v32_.v33));
  memset(v32_.v32, 0, sizeof(v32_.v32));
  silk_gains_dequant(a2 + 16, (char*)(a1 + 2760), (_BYTE*)(a1 + 2312), a3 == 2,
                     v3);
  silk_NLSF_decode((__int64)v32_.v33, (char*)(a1 + 2768),
                   *(_QWORD*)(a1 + 2752));
  silk_NLSF2A(a2 + 64, (__int64)v32_.v33, *(_DWORD*)(a1 + 2340));
  if (*(_DWORD*)(a1 + 2376) == 1) {
    *(_BYTE*)(a1 + 2791) = 4;
  LABEL_8:
    memcpy_plt(a2 + 32, a2 + 64, 2LL * *(int*)(a1 + 2340));
    goto LABEL_15;
  }
  v6 = *(char*)(a1 + 2791);
  if (v6 > 3) {
    goto LABEL_8;
  }
  v7 = *(_DWORD*)(a1 + 2340);
  if (v7 >= 1) {
    v8 = v7 & 3;
    if ((unsigned int)v7 >= 4) {
      v10 = (__int16*)(a1 + 2350);
      v11 = 0;
      v12 = (_WORD*)v32_.v32 + 2;
      v13 = (__int16*)v32_.v33 + 2;
      do {
        v11 -= 4;
        v14 =
            *(v10 - 2) + ((unsigned int)((*(v13 - 1) - *(v10 - 2)) * v6) >> 2);
        v15 = *(v10 - 1);
        v16 = *v13;
        *(v12 - 2) =
            *(v10 - 3) + ((unsigned int)((*(v13 - 2) - *(v10 - 3)) * v6) >> 2);
        *(v12 - 1) = v14;
        v17 = *v10;
        v18 = v13[1];
        v10 += 4;
        v13 += 4;
        *v12 = v15 + ((unsigned int)((v16 - v15) * v6) >> 2);
        v12[1] = v17 + ((unsigned int)((v18 - v17) * v6) >> 2);
        v12 += 4;
      } while (-(__int64)(v7 & 0x7FFFFFFC) != v11);
      v9 = -v11;
      if ((v7 & 3) == 0) {
        goto LABEL_14;
      }
    }
    else {
      v9 = 0;
      if ((v7 & 3) == 0) {
        goto LABEL_14;
      }
    }
    v19 = (_WORD*)v32_.v32 + v9;
    v20 = (__int16*)v32_.v33 + v9;
    v21 = (__int16*)(a1 + 2 * v9 + 2344);
    do {
      v23 = *v21++;
      v22 = v23;
      v24 = *v20++;
      --v8;
      *v19++ = v22 + ((unsigned int)((v24 - v22) * v6) >> 2);
    } while (v8 != 0);
  }
LABEL_14:
  silk_NLSF2A(a2 + 32, (__int64)v32_.v32, v7);
LABEL_15:
  v25 = *(int*)(a1 + 2340);
  memcpy_plt(a1 + 2344, (__int64)v32_.v33, 2 * v25);
  if (*(_DWORD*)(a1 + 4184) != 0) {
    opus_silk_2f67c0(a2 + 32, v25, 63570);
    opus_silk_2f67c0(a2 + 64, *(_DWORD*)(a1 + 2340), 63570);
  }
  if (*(_BYTE*)(a1 + 2789) == 2) {
    result =
        opus_silk_2fa2a0(*(unsigned __int16*)(a1 + 2786), *(_BYTE*)(a1 + 2788),
                         a2, *(_DWORD*)(a1 + 2316), *(_DWORD*)(a1 + 2324));
    if (*(int*)(a1 + 2324) >= 1) {
      v27 = (_WORD*)(a2 + 104);
      v28 = 0;
      v29 = (char*)SdkData_e878a0[*(char*)(a1 + 2792)];
      do {
        v30 = *(char*)(a1 + 2764 + v28++);
        v30 *= 5;
        *(v27 - 4) = v29[v30] << 7;
        *(v27 - 3) = v29[v30 + 1] << 7;
        *(v27 - 2) = v29[v30 + 2] << 7;
        *(v27 - 1) = v29[v30 + 3] << 7;
        *v27 = v29[v30 + 4] << 7;
        v27 += 5;
      } while (v28 < *(int*)(a1 + 2324));
    }
    v31 = *((__int16*)SdkData_e878a8 + *(char*)(a1 + 2793));
  }
  else {
    memset_plt(a2, 0, 4LL * *(int*)(a1 + 2324));
    result = memset_plt(a2 + 96, 0, 10LL * *(int*)(a1 + 2324));
    v31 = 0;
    *(_BYTE*)(a1 + 2792) = 0;
  }
  *(_DWORD*)(a2 + 136) = v31;
  return result;
}

#pragma GCC visibility pop
