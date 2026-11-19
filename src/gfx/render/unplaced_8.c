#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern __int128 GameData_1a82940;
extern __int128 GameData_1a82ad0;
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a82fb0;
extern __int128 GameData_1a83510;
extern __int128 GameData_1a837f0;
extern char* GameData_2132408;
int8x16_t* GameRoutine_194ae50(int8x16_t* result, unsigned __int64*,
                               float32x2_t*, float);
int8x16_t* gfx_render_b7ea80(__int64 a1, float32x4_t* a2);
bool gfx_render_19443a0(float32x4_t* a1, float32x2_t* a2);

int8x16_t* gfx_render_b7ea80(__int64 a1, float32x4_t* a2)
{
  int32x4_t v4;
  int8x16_t v5;
  int8x16_t v6;
  int8x16_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  int32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int32x4_t v17;
  int8x16_t v18;
  int8x16_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  int8x16_t v29;
  float32x4_t v30;
  int8x16_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float v37;
  unsigned int v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  int32x4_t v49;
  int8x16_t v50;
  int32x4_t v51;
  float32x4_t v52;
  int32x4_t v53;
  int32x4_t v54;
  int32x4_t v55;
  float32x4_t v56;
  int32x4_t v57;
  int32x4_t v58;
  float32x4_t v59;
  int8x16_t v60;
  int8x16_t v61;
  int8x16_t v62;
  unsigned __int64 v63;
  float32x4_t v64;
  float32x4_t v65;
  int8x16_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  int8x16_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  int8x16_t v91;
  int8x16_t v92;
  int8x16_t v93;
  int8x16_t v94;
  int8x16_t v95;
  int8x16_t v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  int8x16_t v104;
  int8x16_t v105;
  float v106;
  float32x2_t v107;
  float32x2_t v108;
  float32x4_t v109;
  float v110;
  bool v111;
  float v112;
  float32x4_t v113;
  float v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x2_t v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float32x4_t v124;
  int8x16_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float v128;
  float32x2_t v129;
  float32x4_t v130;
  unsigned int v131;
  float v132;
  float32x4_t v133;
  float v134;
  float v135;
  int8x16_t v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float32x2_t v141;
  float32x4_t v142;
  int8x16_t v143;
  float v144;
  float v145;
  float32x4_t v146;
  float v147;
  float v148;
  float v149;
  float v150;
  int8x16_t v151;
  int8x16_t v152;
  float32x4_t v153;
  float32x2_t v154;
  float v155;
  float v156;
  float v157;
  int8x16_t v158;
  float v159;
  float v160;
  float v161;
  int8x8_t v162;
  float32x4_t v163;
  int8x16_t v164;
  __int128 v165;
  float32x4_t v166;
  float32x2_t v167;
  float v168;
  float32x4_t v169;
  float v170;
  float32x4_t v171;
  float v172;
  float v173;
  float32x4_t v174;
  int8x16_t v175;
  float32x2_t v176;
  float32x2_t v177;
  float32x4_t v178;
  float32x4_t v179;
  int8x16_t v180;
  float32x4_t v181;
  float32x4_t v182;
  float32x4_t v183;
  int8x16_t v184;
  float32x4_t v185;
  int8x16_t v186;
  int8x16_t v187;
  float32x4_t v188;
  float32x4_t v189;
  float32x2_t v190;
  float32x4_t v191;
  float32x4_t v192;
  float32x2_t v193;
  float32x2_t v194;
  float32x4_t v195;
  float32x2_t v196;
  float32x2_t v197;
  int8x16_t v198;
  float32x2_t v199;
  float32x4_t v200;
  float32x4_t v201;
  float32x4_t v202;
  float32x4_t v203;
  float32x4_t v204;
  float32x4_t v205;
  float32x4_t v206;
  int8x16_t v207;
  float32x4_t v208;
  float32x4_t v209;
  float32x4_t v210;
  float32x4_t v211;
  int8x16_t v212;
  float32x2_t v213;
  float32x2_t v214;
  float32x4_t v215;
  int32x4_t v216;
  int8x16_t v217;
  int8x16_t v218;
  float32x4_t v219;
  float32x4_t v220;
  float v221;
  int8x16_t v222;
  float v223;
  int32x4_t v224;
  int8x16_t v225;
  int8x16_t v226;
  __int64 v227;
  float32x2_t v228;
  int32x2_t v229;
  int32x4_t v230;
  int32x4_t v231;
  float32x4_t v232;
  float32x4_t v233;
  int32x4_t v234;
  int32x4_t v235;
  float32x4_t v236;
  float32x4_t v237;
  int8x16_t v238;
  int8x16_t v239;
  float32x4_t v240;
  float32x4_t v241;
  int32x4_t v242;
  float32x4_t v243;
  float32x4_t v244;
  float32x4_t v245;
  float32x4_t v246;
  int32x4_t v247;
  float32x4_t v248;
  float32x4_t v249;
  int32x4_t v250;
  float32x4_t v251;
  float32x4_t v252;
  int32x4_t v253;
  float32x4_t v254;
  float32x4_t v255;
  int32x4_t v256;
  int8x16_t v257;
  int8x16_t v258;
  int8x16_t v259;
  float32x4_t v260;
  float32x4_t v261;
  float32x4_t v262;
  float32x4_t v263;
  float32x4_t v264;
  int8x16_t v265;
  float32x4_t v266;
  int8x16_t v267;
  int8x16_t v268;
  int8x16_t v269;
  float32x4_t v270;
  float32x4_t v271;
  float32x4_t v272;
  float32x4_t v273;
  int8x16_t v274;
  float32x4_t v275;
  float32x4_t v276;
  int8x16_t v277;
  float32x4_t v278;
  int8x16_t v279;
  float32x4_t v280;
  float32x4_t v281;
  int8x16_t v282;
  int32x4_t v283;
  int32x4_t v284;
  int8x16_t v285;
  int8x16_t v286;
  int8x16_t v287;
  int32x4_t v288;
  int32x4_t v289;
  int32x4_t v290;
  __int64 v291;
  __int64 v292;
  __int128 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  float32x4_t v303;
  float32x4_t v304;
  float32x4_t v305;
  float32x4_t v306;
  float64x2_t v307;
  __int128 v308;
  __int128 v309;
  __int128 v310;
  __int128 v311;
  int8x16_t v312;
  int8x16_t v313;
  int32x4_t v314;
  int8x8_t v315;
  int8x16_t v316;
  int8x8_t v317;
  float32x4_t v318;
  struct {
    float32x4_t v319;
    __int64 v320;
    __int64 v321;
    __int64 v322;
    __int64 v323;
    __int64 v324;
    __int64 v325;
    __int64 v326;
    __int64 v327;
  } v319_;
  int8x16x2_t v328;
  int8x16x2_t v329;

  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v2", "=w"));
  *(long double*)&v4 = ((long double (*)(unsigned __int64)) *
                        (_QWORD*)(*(_QWORD*)LANES128(*(a2)).n128_u64[0] +
                                  16LL))(LANES128(*(a2)).n128_u64[0]),
         v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v312 = v5;
  v314 = v4;
  v316 = v6;
  v318 = COERCE_FLOAT32X4_T(((long double (*)(unsigned __int64)) *
                             (_QWORD*)(*(_QWORD*)LANES128(*(a2)).n128_u64[0] +
                                       40LL))(LANES128(*(a2)).n128_u64[0])),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v7 = a2[1];
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v312, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v8).n128_i8[8] =
      vqtbl1_s8(v312, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v316, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v9).n128_i8[8] =
      vqtbl1_s8(v316, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v10 = vmulq_f32(vmulq_f32(v314, v8), v9);
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v312, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v9).n128_i8[8] =
      vqtbl1_s8(v312, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v316, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v11).n128_i8[8] =
      vqtbl1_s8(v316, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v12 = vzip1q_s32(v312, COERCE_AS(int32x4_t, 0));
  v13 = vsubq_f32(v10, vmulq_f32(vmulq_f32(v314, v9), v11));
  LANES128(v13).n128_u64[0] = LANES128_OF(vpaddq_f32(v13, v13)).n128_u64[0];
  v14 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v13).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v13).n128_u64[0]), 1));
  v15 = vrecpeq_f32(v14);
  v16 = vmulq_f32(v15, vrecpsq_f32(v15, v14));
  v17 = vzip1q_s32(v314, v316);
  v18 = vzip2q_s32(v17, v12);
  v19 = vzip1q_s32(v17, v12);
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v23 = vmlsq_f32(vmulq_f32(v21, v22), v12, v20);
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
          .n64_u64[0];
  v313 =
      vbicq_s8(vsubq_f32(COERCE_AS(float32x4_t, 0),
                         vmulq_f32(vmulq_f32(v16, vrecpsq_f32(v16, v14)), v23)),
               vceqzq_f32(v14));
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v24 = vmulq_f32(v16, v12);
  *(int8x8_t*)&LANES128(v23).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v25 = vmulq_f32(v7, COERCE_AS(float32x4_t, GameData_1a82c50));
  LANES128(v12).n128_u64[1] = LANES128(v18).n128_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v14).n128_u64[1] = 0x3F8000003F800000LL;
  v26 = vmlsq_f32(v24, v12, v23);
  LANES128(v23).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v23).n128_u64[1] = 0x3F0000003F000000LL;
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
          .n64_u64[0];
  v307 = v14;
  LANES128(v25).n128_u64[1] = LANES128(v25).n128_u64[0];
  v27 = vaddq_f32(v25, v14);
  v28 = vsqrtq_f32(vaddq_f32(v27, v27));
  v29 = vdivq_f32(v26, v28);
  LANES128(v29).n128_u32[3] = LANES128_OF(vmulq_f32(v28, v23)).n128_u32[3];
  LANES128(v28).n128_u64[0] = 0x3400000034000000LL;
  LANES128(v28).n128_u64[1] = 0x3400000034000000LL;
  v30 = vbslq_s8(vcgeq_f32(v28, v27), COERCE_AS(int8x16_t, GameData_1a82dd0),
                 v29);
  v31 = v30;
  LANES128(v31).n128_u32[3] = 0;
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v30).n128_u64[0])))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v23).n128_u64[1] = LANES128(v20).n128_u64[1];
  LANES128(v12).n128_u64[1] = LANES128(v18).n128_u64[0];
  v32 = vmulq_f32(v20, v31);
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v33 = vmulq_f32(v23, v23);
  v328.val[1] = vmulq_f32(v12, v12);
  v34 = vaddq_f32(v32, v32);
  LANES128(v31).n128_u64[1] = LANES128(v18).n128_u64[0];
  v35 = vmulq_laneq_f32(v31, v30, 3);
  v36 = vaddq_f32(v35, v35);
  v328.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v328.val[1], v328.val[1]), vaddq_f32(v33, v33)));
  v329.val[0] = vaddq_f32(v36, v34);
  v329.val[1] = vsubq_f32(v34, v36);
  LANES128(v328.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v329, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v328.val[1]).n128_i8[8] =
      vqtbl2_s8(v329, COERCE_AS(int8x8_t, 0x706050413121110LL));
  LANES64(v317).n64_u64[0] =
      LANES64_OF(vqtbl2_s8(v328, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  LANES64(v315).n64_u64[0] =
      LANES64_OF(vqtbl2_s8(v328, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL)))
          .n64_u64[0];
  if (((*(__int64 (**)(unsigned __int64))(
           *(_QWORD*)LANES128(*(a2)).n128_u64[0] + 48LL))(
           LANES128(*(a2)).n128_u64[0]) &
       1) != 0) {
    v37 =
        (*(float (**)(unsigned __int64))(*(_QWORD*)LANES128(*(a2)).n128_u64[0] +
                                         56LL))(LANES128(*(a2)).n128_u64[0]),
    v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v2", "=w"));
    *(float*)&v38 = v37 / (*(float (**)(unsigned __int64))(
                              *(_QWORD*)LANES128(*(a2)).n128_u64[0] + 64LL))(
                              LANES128(*(a2)).n128_u64[0]),
    v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v2", "=w"));
    {
      __typeof__(v39) z_ = (__typeof__(v39)){0};
      LODWORD(z_) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
      v39 = z_;
    }
    *(_QWORD*)&v40 =
        __PAIR64__(COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f)),
                   COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f)));
    *(_QWORD*)&v41 =
        __PAIR64__(COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f)),
                   COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f)));
    DWORD1(v39) = 0x1.0000000000000p+0f;
    *((_QWORD*)&v39 + 1) = v38;
    *((_QWORD*)&v41 + 1) = v38;
    v308 = v39;
    {
      __typeof__(v39) z_ = (__typeof__(v39)){0};
      LODWORD(z_) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
      v39 = z_;
    }
    DWORD1(v39) = -0x1.0000000000000p+0f;
    *((_QWORD*)&v39 + 1) = v38;
    *((_QWORD*)&v40 + 1) = v38;
    v309 = v41;
    v310 = v39;
    v311 = v40;
  }
  else {
    v311 = GameData_1a83510;
    v310 = GameData_1a82ad0;
    v309 = GameData_1a82940;
    v308 = GameData_1a82fb0;
  }
  *(long double*)&v42 = ((long double (*)(unsigned __int64)) *
                         (_QWORD*)(*(_QWORD*)LANES128(*(a2)).n128_u64[0] +
                                   16LL))(LANES128(*(a2)).n128_u64[0]),
         v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v303 = v44;
  v304 = v43;
  v305 = v45;
  v306 = v42;
  *(long double*)&v46 = ((long double (*)(unsigned __int64)) *
                         (_QWORD*)(*(_QWORD*)LANES128(*(a2)).n128_u64[0] +
                                   24LL))(LANES128(*(a2)).n128_u64[0]),
         v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v319_.v319 = v318;
  v49 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v46, LANES128(v306).n128_f32[0]), v47,
                     COERCE_AS(float32x2_t, LANES128(v306).n128_u64[0]), 1),
      v48, v306, 2);
  v50 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v46, LANES128(v305).n128_f32[0]), v47,
                     COERCE_AS(float32x2_t, LANES128(v305).n128_u64[0]), 1),
      v48, v305, 2);
  v51 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v46, LANES128(v304).n128_f32[0]), v47,
                     COERCE_AS(float32x2_t, LANES128(v304).n128_u64[0]), 1),
      v48, v304, 2);
  v53 = vaddq_f32(
      v52,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v46, LANES128(v303).n128_f32[0]), v47,
                         COERCE_AS(float32x2_t, LANES128(v303).n128_u64[0]), 1),
          v48, v303, 2));
  v54 = vzip2q_s32(v49, v51);
  v55 = vzip1q_s32(v49, v51);
  v56 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v49).n128_u64[0]), 1);
  LANES128(v56).n128_u32[0] = LANES128(v50).n128_u32[1];
  v57 = vzip2q_s32(v50, v53);
  v58 = vzip1q_s32(v50, v53);
  v59 = vextq_s8(v50, vdupq_laneq_s32(v49, 3), 0xCu);
  v60 = vzip1q_s32(v54, v57);
  v61 = vzip2q_s32(v54, v57);
  v62 = vzip1q_s32(v55, v58);
  LANES128(v57).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v54).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  v63 = LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL)))
            .n64_u64[0];
  LANES128(v60).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v64).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v65).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v64).n128_i8[8] =
      vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v66 = vzip2q_s32(v55, v58);
  *(int32x2_t*)&LANES128(v57).n128_i8[8] = vdup_laneq_s32(v50, 2);
  LANES128(v54).n128_u64[1] = v63;
  *(int32x2_t*)&LANES128(v60).n128_i8[8] = vdup_laneq_s32(v50, 3);
  v67 = vdupq_laneq_s32(v49, 2);
  LANES128(v67).n128_u32[0] = LANES128(v50).n128_u32[2];
  LANES128(v68).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v58).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  v69 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v49).n128_u64[0]), 0);
  LANES128(v69).n128_u32[0] = LANES128(v50).n128_u32[0];
  *(int32x2_t*)&LANES128(v68).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v50).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v58).n128_i8[8] =
      vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  *(int8x8_t*)&LANES128(v65).n128_i8[8] =
      vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v70 = vsubq_f32(vmulq_f32(v57, v64), vmulq_f32(v60, v54));
  v71 = vmulq_f32(v69, v68);
  v72 = vsubq_f32(vmulq_f32(v67, v64), vmulq_f32(v59, v54));
  v73 = vsubq_f32(vmulq_f32(v67, v60), vmulq_f32(v57, v59));
  v109 = vnegq_f64(v307);
  v74 = vmulq_f32(vmlaq_f32(vmlsq_f32(vmulq_f32(v56, v70), v72, v68), v73, v58),
                  v109);
  v75 = vmulq_f32(v62, v74);
  LANES128(v75).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v75, v75, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
          .n64_u64[0];
  LANES128(v76).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v76).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v50).n128_u64[0]), 0);
  v77 = vmulq_f32(v68, v65);
  LANES128(v68).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
          .n64_u64[0];
  LANES128(v68).n128_u64[1] = LANES128(v68).n128_u64[0];
  v78 = vsubq_f32(vmulq_f32(v76, v58), v77);
  v79 = vmulq_f32(v69, v58);
  v80 = vrecpeq_f32(v68);
  v81 = vmlsq_f32(vmulq_f32(v69, v70), v72, v76);
  v82 = vmulq_f32(v76, v56);
  v83 = vsubq_f32(v79, vmulq_f32(v56, v65));
  v84 = vsubq_f32(v71, v82);
  v85 = vmulq_f32(v80, vrecpsq_f32(v80, v68));
  LANES128(v79).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v79).n128_u64[1] = 0xBF800000BF800000LL;
  v86 = vmlsq_f32(vmulq_f32(v59, v78), v83, v60);
  v87 = vmlsq_f32(vmulq_f32(v67, v78), v83, v57);
  v88 = vnegq_f64(v79);
  v89 = vmlaq_f32(v86, v84, v64);
  v90 = vmulq_f32(v85, vrecpsq_f32(v85, v68));
  v91 = vceqzq_f32(v68);
  v92 = vmulq_f32(v90, vmulq_f32(vmlaq_f32(v81, v73, v65), v88));
  v93 = vbicq_s8(vmulq_f32(v90, v74), v91);
  v94 = vbicq_s8(v92, v91);
  v95 = vbicq_s8(vmulq_f32(v90, vmulq_f32(v89, v109)), v91);
  v96 = vbicq_s8(vmulq_f32(v90, vmulq_f32(vmlaq_f32(v87, v84, v54), v88)), v91);
  v97 = vsubq_f32(v93, v94);
  v98 = vsubq_f32(vnegq_f32(v93), v94);
  v99 = vaddq_f32(v96, vaddq_f32(v95, vaddq_f32(v94, v93)));
  v100 = vmlaq_lane_f32(
      vmlaq_n_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v93, *(float*)&v308), v94,
              COERCE_AS(float32x2_t, ((unsigned int)v308 |
                                      ((unsigned __int64)DWORD1(v308) << 32))),
              1),
          v95, *((float*)&v308 + 2)),
      v96, COERCE_AS(float32x2_t, (DWORD2(v308) | 0x3F80000000000000LL)), 1);
  LANES128(v101).n128_f32[0] =
      (float)(0x1.0000000000000p+0f / LANES128(v99).n128_f32[3]) *
      LANES128(v99).n128_f32[0];
  LANES128(v103).n128_f32[0] =
      (float)(0x1.0000000000000p+0f / LANES128(v100).n128_f32[3]) *
      LANES128(v100).n128_f32[0];
  LANES128(v101).n128_u32[1] =
      vmuls_lane_f32(0x1.0000000000000p+0f / LANES128(v99).n128_f32[3],
                     COERCE_AS(float32x2_t, LANES128(v99).n128_u64[0]), 1);
  LANES128(v103).n128_u32[1] =
      vmuls_lane_f32(0x1.0000000000000p+0f / LANES128(v100).n128_f32[3],
                     COERCE_AS(float32x2_t, LANES128(v100).n128_u64[0]), 1);
  LANES128(v101).n128_u64[1] = COERCE_UNSIGNED_INT(vmuls_lane_f32(
      0x1.0000000000000p+0f / LANES128(v99).n128_f32[3], v99, 2));
  v102 = vaddq_f32(v96, vaddq_f32(v95, vsubq_f32(v94, v93)));
  LANES128(v103).n128_u64[1] = COERCE_UNSIGNED_INT(vmuls_lane_f32(
      0x1.0000000000000p+0f / LANES128(v100).n128_f32[3], v100, 2));
  v104 = vmulq_f32(v313, vsubq_f32(v318, v101));
  v105 = vmulq_f32(v313, vsubq_f32(v318, v103));
  LANES128(v109).n128_u32[3] = 0;
  LANES128(v104).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v104, v104, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])))
          .n64_u64[0];
  LANES128(v109).n128_f32[0] =
      (float)(0x1.0000000000000p+0f / LANES128(v102).n128_f32[3]) *
      LANES128(v102).n128_f32[0];
  PSEUDO_LOW_LANE128(
      v74, n128_f32,
      vmuls_lane_f32(0x1.0000000000000p+0f / LANES128(v102).n128_f32[3],
                     COERCE_AS(float32x2_t, LANES128(v102).n128_u64[0]), 1));
  v106 = vmuls_lane_f32(0x1.0000000000000p+0f / LANES128(v102).n128_f32[3],
                        v102, 2);
  LANES128(v105).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v105, v105, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0])))
          .n64_u64[0];
  LANES64(v107).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])))
          .n64_u64[0];
  LANES64(v108).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0])))
          .n64_u64[0];
  LANES128(v109).n128_u32[1] = LANES128(v74).n128_u32[0];
  if (!(LANES128(a2[2]).n128_f32[0] < LANES64(v107).n64_f32[0])) {
    v110 = LANES64(v107).n64_f32[0];
  } else {
    v110 = LANES128(a2[2]).n128_f32[0];
  }
  v111 = LANES64(v107).n64_f32[0] < LANES128(a2[2]).n128_f32[1];
  {
    __typeof__(v112) z_ = (__typeof__(v112)){0};
    LODWORD(z_) = LANES64_OF(vsub_f32(v107, v108)).n64_u32[0];
    v112 = z_;
  }
  v113 = vaddq_f32(v95, v98);
  if (v111) {
    v110 = LANES128(a2[2]).n128_f32[1];
  }
  LANES128(v109).n128_f32[2] = v106;
  v124 = vaddq_f32(v96, v113);
  v114 = (float)(v110 - LANES64(v108).n64_f32[0]) / v112;
  v115 = vmlaq_lane_f32(
      vmlaq_n_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v93, *(float*)&v309), v94,
              COERCE_AS(float32x2_t, ((unsigned int)v309 |
                                      ((unsigned __int64)DWORD1(v309) << 32))),
              1),
          v95, *((float*)&v309 + 2)),
      v96, COERCE_AS(float32x2_t, (DWORD2(v309) | 0x3F80000000000000LL)), 1);
  v125 = vmulq_f32(v313, vsubq_f32(v318, v109));
  v116 = vaddq_f32(vmulq_n_f32(v101, v114),
                   vmulq_n_f32(v103, 0x1.0000000000000p+0f - v114));
  LANES64(v117).n64_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v125, v125, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0])))
          .n64_u64[0];
  LANES128(v125).n128_u32[3] = 0;
  v118 = 0x1.0000000000000p+0f / LANES128(v115).n128_f32[3];
  *(float32x4_t*)(a1 + 176) = v116;
  v120 = LANES128(a2[2]).n128_f32[0];
  v119 = LANES128(a2[2]).n128_f32[1];
  LANES128(v125).n128_f32[0] =
      (float)(0x1.0000000000000p+0f / LANES128(v124).n128_f32[3]) *
      LANES128(v124).n128_f32[0];
  v121 = LANES64_OF(vpadd_f32(v117, v117)).n64_f32[0];
  v122 = vmuls_lane_f32(0x1.0000000000000p+0f / LANES128(v124).n128_f32[3],
                        COERCE_AS(float32x2_t, LANES128(v124).n128_u64[0]), 1);
  v123 = vmuls_lane_f32(0x1.0000000000000p+0f / LANES128(v124).n128_f32[3],
                        v124, 2);
  LANES128(v124).n128_u32[3] = 0;
  LANES128(v125).n128_f32[1] = v122;
  if (!(v120 < v121)) {
    v120 = v121;
  }
  LANES128(v124).n128_f32[0] =
      (float)(0x1.0000000000000p+0f / LANES128(v115).n128_f32[3]) *
      LANES128(v115).n128_f32[0];
  if (!(v121 < v119)) {
    v119 = v120;
  }
  LANES128(v125).n128_f32[2] = v123;
  LANES128(v124).n128_u32[1] = vmuls_lane_f32(
      v118, COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0]), 1);
  v126 = vaddq_f32(v96, vaddq_f32(v95, v97));
  LANES128(v124).n128_u32[2] = vmuls_lane_f32(v118, v115, 2);
  v136 = vmulq_f32(v313, vsubq_f32(v318, v125));
  v127 = vmlaq_lane_f32(
      vmlaq_n_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v93, *(float*)&v310), v94,
              COERCE_AS(float32x2_t, ((unsigned int)v310 |
                                      ((unsigned __int64)DWORD1(v310) << 32))),
              1),
          v95, *((float*)&v310 + 2)),
      v96, COERCE_AS(float32x2_t, (DWORD2(v310) | 0x3F80000000000000LL)), 1);
  v128 = 0x1.0000000000000p+0f / LANES128(v127).n128_f32[3];
  LANES64(v129).n64_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v136, v136, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v136).n128_u64[0])))
          .n64_u64[0];
  LANES128(v136).n128_u32[3] = 0;
  *(float32x4_t*)(a1 + 192) = vaddq_f32(
      vmulq_n_f32(v109, (float)(v119 - LANES64(v108).n64_f32[0]) / v112),
      vmulq_n_f32(
          v124, 0x1.0000000000000p+0f -
                    (float)((float)(v119 - LANES64(v108).n64_f32[0]) / v112)));
  v130 = vmulq_n_f32(v93, *(float*)&v311);
  *(float*)&v131 = (float)(0x1.0000000000000p+0f / LANES128(v126).n128_f32[3]) *
                   LANES128(v126).n128_f32[0];
  LANES128(v93).n128_f32[0] =
      vmuls_lane_f32(0x1.0000000000000p+0f / LANES128(v126).n128_f32[3],
                     COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0]), 1);
  v132 = vmuls_lane_f32(0x1.0000000000000p+0f / LANES128(v126).n128_f32[3],
                        v126, 2);
  v133 = vmlaq_lane_f32(
      v130, v94,
      COERCE_AS(float32x2_t,
                ((unsigned int)v311 | ((unsigned __int64)DWORD1(v311) << 32))),
      1);
  v134 = LANES128(a2[2]).n128_f32[1];
  v135 = LANES64_OF(vpadd_f32(v129, v129)).n64_f32[0];
  LANES128(v136).n128_u64[0] = __PAIR64__(LANES128(v93).n128_u32[0], v131);
  v137 = vmuls_lane_f32(0x1.0000000000000p+0f / LANES128(v127).n128_f32[3],
                        COERCE_AS(float32x2_t, LANES128(v127).n128_u64[0]), 1);
  LANES128(v93).n128_u32[3] = 0;
  if (!(LANES128(a2[2]).n128_f32[0] < v135)) {
    v138 = v135;
  } else {
    v138 = LANES128(a2[2]).n128_f32[0];
  }
  v111 = v135 < v134;
  v139 = v128 * LANES128(v127).n128_f32[0];
  v140 = vmuls_lane_f32(v128, v127, 2);
  if (!v111) {
    v134 = v138;
  }
  LANES64(v141).n64_u32[0] = 0;
  LANES128(v93).n128_u64[0] = __PAIR64__(LODWORD(v137), LODWORD(v139));
  LANES128(v136).n128_f32[2] = v132;
  v142 = vmlaq_lane_f32(
      vmlaq_n_f32(v133, v95, *((float*)&v311 + 2)), v96,
      COERCE_AS(float32x2_t, (DWORD2(v311) | 0x3F80000000000000LL)), 1);
  LANES128(v93).n128_f32[2] = v140;
  v143 = vmulq_f32(v313, vsubq_f32(v318, v136));
  LANES128(v143).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v143, v143, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
          .n64_u64[0];
  v144 = 0x1.0000000000000p+0f / LANES128(v142).n128_f32[3];
  v145 =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
          .n64_f32[0];
  *(float32x4_t*)(a1 + 208) = vaddq_f32(
      vmulq_n_f32(v125, (float)(v134 - LANES64(v108).n64_f32[0]) / v112),
      vmulq_n_f32(
          v93, 0x1.0000000000000p+0f -
                   (float)((float)(v134 - LANES64(v108).n64_f32[0]) / v112)));
  LANES128(v146).n128_u32[3] = 0;
  v147 = LANES128(a2[2]).n128_f32[0];
  if (!(v147 < v145)) {
    v147 = v145;
  }
  LANES128(v146).n128_f32[0] = v144 * LANES128(v142).n128_f32[0];
  if (!(v145 < LANES128(a2[2]).n128_f32[1])) {
    v148 = v147;
  } else {
    v148 = LANES128(a2[2]).n128_f32[1];
  }
  LANES128(v146).n128_u32[1] = vmuls_lane_f32(
      v144, COERCE_AS(float32x2_t, LANES128(v142).n128_u64[0]), 1);
  LANES128(v146).n128_u32[2] = vmuls_lane_f32(v144, v142, 2);
  *(float32x4_t*)(a1 + 224) = vaddq_f32(
      vmulq_n_f32(v136, (float)(v148 - LANES64(v108).n64_f32[0]) / v112),
      vmulq_n_f32(
          v146, 0x1.0000000000000p+0f -
                    (float)((float)(v148 - LANES64(v108).n64_f32[0]) / v112)));
  v150 = LANES128(a2[2]).n128_f32[0];
  v149 = LANES128(a2[2]).n128_f32[1];
  if (!(v150 < LANES64(v108).n64_f32[0])) {
    v150 = LANES64(v108).n64_f32[0];
  }
  if (!(LANES64(v108).n64_f32[0] < v149)) {
    v149 = v150;
  }
  v151 = vmulq_f32(v313, vsubq_f32(v318, v124));
  LANES128(v152).n128_u64[0] = LANES64(v317).n64_u64[0];
  v153 = vaddq_f32(
      vmulq_n_f32(v101, (float)(v149 - LANES64(v108).n64_f32[0]) / v112),
      vmulq_n_f32(
          v103, 0x1.0000000000000p+0f -
                    (float)((float)(v149 - LANES64(v108).n64_f32[0]) / v112)));
  LANES64(v154).n64_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v151, v151, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v151).n128_u64[0])))
          .n64_u64[0];
  *(float32x4_t*)(a1 + 240) = v153;
  v155 = LANES64_OF(vpadd_f32(v154, v154)).n64_f32[0];
  v156 = LANES128(a2[2]).n128_f32[0];
  if (!(v156 < v155)) {
    v156 = v155;
  }
  if (!(v155 < LANES128(a2[2]).n128_f32[1])) {
    v157 = v156;
  } else {
    v157 = LANES128(a2[2]).n128_f32[1];
  }
  v158 = vmulq_f32(v313, vsubq_f32(v318, v93));
  LANES128(v158).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v158, v158, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v158).n128_u64[0])))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v152).n128_i8[8] = v315;
  v159 =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v158).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v158).n128_u64[0])))
          .n64_f32[0];
  *(float32x4_t*)(a1 + 256) = vaddq_f32(
      vmulq_n_f32(v109, (float)(v157 - LANES64(v108).n64_f32[0]) / v112),
      vmulq_n_f32(
          v124, 0x1.0000000000000p+0f -
                    (float)((float)(v157 - LANES64(v108).n64_f32[0]) / v112)));
  v161 = LANES128(a2[2]).n128_f32[0];
  v160 = LANES128(a2[2]).n128_f32[1];
  LANES64(v162).n64_u64[0] =
      LANES64_OF(vqtbl1_s8(v152, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
          .n64_u64[0];
  if (!(v161 < v159)) {
    v161 = v159;
  }
  v111 = v159 < v160;
  v163 = vsubq_f32(v318, v146);
  if (!v111) {
    v160 = v161;
  }
  v164 = vmulq_f32(v313, v163);
  v165 = (__typeof__(v165)){0};
  v166 = vaddq_f32(
      vmulq_n_f32(v125, (float)(v160 - LANES64(v108).n64_f32[0]) / v112),
      vmulq_n_f32(
          v93, 0x1.0000000000000p+0f -
                   (float)((float)(v160 - LANES64(v108).n64_f32[0]) / v112)));
  LANES64(v167).n64_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v164, v164, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v164).n128_u64[0])))
          .n64_u64[0];
  *(float32x4_t*)(a1 + 272) = v166;
  v168 = LANES64_OF(vpadd_f32(v167, v167)).n64_f32[0];
  v169 = vsubq_f32(v166, v116);
  v170 = LANES128(a2[2]).n128_f32[0];
  v171 = vmulq_f32(v169, v169);
  if (!(v170 < v168)) {
    v170 = v168;
  }
  if (!(v168 < LANES128(a2[2]).n128_f32[1])) {
    v172 = v170;
  } else {
    v172 = LANES128(a2[2]).n128_f32[1];
  }
  v173 = v172 - LANES64(v108).n64_f32[0];
  v174 = vsubq_f32(v153, v166);
  v175 = vmulq_f32(v174, v174);
  LANES128(v175).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v175, v175, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v175).n128_u64[0])))
          .n64_u64[0];
  LANES64(v176).n64_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v171, v171, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v171).n128_u64[0])))
          .n64_u64[0];
  LANES128(v175).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v175).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v175).n128_u64[0])))
          .n64_u64[0];
  LANES64(v177).n64_u64[0] = LANES64_OF(vpadd_f32(v176, v176)).n64_u64[0];
  *(float32x4_t*)(a1 + 288) = vaddq_f32(
      vmulq_n_f32(v136, v173 / v112),
      vmulq_n_f32(v146, 0x1.0000000000000p+0f - (float)(v173 / v112)));
  v178 = a2[1];
  v179 = vsubq_f32(COERCE_AS(float32x4_t, 0LL), v178);
  v180 = vmulq_f32(v179, v179);
  LANES128(v180).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v180, v180, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v180).n128_u64[0])))
          .n64_u64[0];
  LANES128(v180).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v180).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v180).n128_u64[0])))
          .n64_u64[0];
  LANES128(v180).n128_u64[1] = LANES128(v180).n128_u64[0];
  v181 = vrsqrteq_f32(v180);
  v182 = vmulq_f32(v181, vrsqrtsq_f32(v181, vmulq_f32(v180, v181)));
  v183 = vsubq_f32(v116, v153);
  v184 = vmulq_f32(v179,
                   vmulq_f32(v182, vrsqrtsq_f32(v182, vmulq_f32(v180, v182))));
  v185 = vnegq_f32(v179);
  v186 = vmulq_f32(v183, v183);
  v187 = vbicq_s8(v184, vceqzq_f32(v180));
  LANES128(v188).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v152, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v189).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v187, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v188).n128_i8[8] =
      vqtbl1_s8(v152, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v186).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v186, v186, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v186).n128_u64[0])))
          .n64_u64[0];
  LANES128(v191).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v152, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v192).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v187, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v189).n128_i8[8] =
      vqtbl1_s8(v187, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES64(v190).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v186).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v186).n128_u64[0])))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v191).n128_i8[8] = v162;
  *(int8x8_t*)&LANES128(v192).n128_i8[8] =
      vqtbl1_s8(v187, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES64(v193).n64_u64[0] =
      LANES64_OF(
          vadd_f32(vsub_f32(COERCE_AS(float32x2_t, LANES128(v175).n128_u64[0]),
                            v177),
                   v190))
          .n64_u64[0];
  LANES64(v194).n64_u64[0] =
      LANES64_OF(
          vsub_f32(vadd_f32(COERCE_AS(float32x2_t, LANES128(v175).n128_u64[0]),
                            v177),
                   v190))
          .n64_u64[0];
  v195 = vmlsq_f32(vmulq_f32(v188, v189), v192, v191);
  LANES128(v175).n128_u64[0] =
      LANES64_OF(
          vmul_f32(
              COERCE_AS(float32x2_t, LANES128(v175).n128_u64[0]),
              vadd_f32(vsub_f32(v177, COERCE_AS(float32x2_t,
                                                LANES128(v175).n128_u64[0])),
                       v190)))
          .n64_u64[0];
  LANES64(v196).n64_u64[0] = LANES64_OF(vmul_f32(v177, v193)).n64_u64[0];
  LANES64(v197).n64_u64[0] = LANES64_OF(vmul_f32(v190, v194)).n64_u64[0];
  v198 = vmulq_f32(v195, v195);
  LANES64(v199).n64_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t, LANES128(v175).n128_u64[0]), v196))
          .n64_u64[0];
  v200 = vmulq_n_f32(v116, LANES128(v175).n128_f32[0]);
  LANES128(v175).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v175).n128_u64[1] = 0x3F0000003F000000LL;
  v201 = vmulq_n_f32(v153, LANES64(v196).n64_f32[0]);
  LANES128(v198).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v198, v198, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v198).n128_u64[0])))
          .n64_u64[0];
  v202 = vaddq_f32(v153, v166);
  v203 = vmulq_n_f32(v166, LANES64(v197).n64_f32[0]);
  PSEUDO_LOW_LANE64(v199, n64_f32,
                    0x1.0000000000000p+0f /
                        LANES64_OF(vadd_f32(v197, v199)).n64_f32[0]);
  LANES128(v198).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v198).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v198).n128_u64[0])))
          .n64_u64[0];
  v204 = vmulq_f32(v202, v175);
  v205 = vsubq_f32(v204, v153);
  v206 = vsubq_f32(v204, v116);
  LANES128(v198).n128_u64[1] = LANES128(v198).n128_u64[0];
  v207 = vmulq_f32(v205, v205);
  v217 = vmulq_f32(v206, v206);
  v208 = vrsqrteq_f32(v198);
  v209 = vaddq_f32(vmulq_n_f32(v203, LANES64(v199).n64_f32[0]),
                   vaddq_f32(vmulq_n_f32(v200, LANES64(v199).n64_f32[0]),
                             vmulq_n_f32(v201, LANES64(v199).n64_f32[0])));
  LANES128(v207).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v207, v207, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v207).n128_u64[0])))
          .n64_u64[0];
  LANES128(v217).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v217, v217, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v217).n128_u64[0])))
          .n64_u64[0];
  v210 = vsubq_f32(v209, v116);
  v211 = vmulq_f32(v208, vrsqrtsq_f32(v208, vmulq_f32(v198, v208)));
  v212 = vmulq_f32(v210, v210);
  LANES64(v213).n64_u64[0] =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v207).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v207).n128_u64[0]))))
          .n64_u64[0];
  LANES64(v214).n64_u64[0] =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v217).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v217).n128_u64[0]))))
          .n64_u64[0];
  v215 = vmulq_f32(v198, v211);
  v216 = vceqzq_f32(v198);
  LANES128(v212).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v212, v212, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v212).n128_u64[0])))
          .n64_u64[0];
  LANES128(v217).n128_u64[0] =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v212).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v212).n128_u64[0]))))
          .n64_u64[0];
  v218 = vbicq_s8(vmulq_f32(v195, vmulq_f32(v211, vrsqrtsq_f32(v211, v215))),
                  v216);
  if ((LANES64_OF(vcgt_f32(v214, v213)).n64_u8[0] & 1) != 0) {
    PSEUDO_LOW_LANE128(v216, n128_f32, LANES64(v214).n64_f32[0]);
  }
  else {
    PSEUDO_LOW_LANE128(v216, n128_f32, LANES64(v213).n64_f32[0]);
  }
  LANES128(v219).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v220).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v219).n128_i8[8] =
      vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v220).n128_i8[8] =
      vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  if (!(LANES128(v216).n128_f32[0] < LANES128(v217).n128_f32[0])) {
    v221 = LANES128(v217).n128_f32[0];
  } else {
    v221 = LANES128(v216).n128_f32[0];
  }
  v222 = vmulq_f32(v218, v185);
  v223 = 0x1.0000000000000p+0f / (float)(v221 + v221);
  v224 = vmlsq_f32(vmulq_f32(v192, v219), v220, v189);
  v225 = vmulq_f32(v187, v185);
  v226 = vmulq_f32(v224, v185);
  v227 = COERCE_UNSIGNED_INT((float)LANES128(a2[2]).n128_i32[2] /
                             (float)(v221 + v221));
  LANES64(v228).n64_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v225, v225, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v225).n128_u64[0])))
          .n64_u64[0];
  LANES128(v225).n128_u64[0] = 0;
  LANES128(v226).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v226, v226, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v226).n128_u64[0])))
          .n64_u64[0];
  LANES64(v229).n64_u64[0] = LANES128_OF(vcgtq_f32(v217, v216)).n128_u64[0];
  LANES128(v222).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v222, v222, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v222).n128_u64[0])))
          .n64_u64[0];
  v230 = vzip1q_s32(v218, v187);
  LANES64(v141).n64_u32[1] = (v227 | (unsigned __int64)(v227 << 32)) >> 32;
  LANES128(v225).n128_u64[1] = (unsigned int)v227;
  LANES128(v187).n128_u32[3] = LANES64_OF(vpadd_f32(v228, v228)).n64_u32[1];
  LANES128(v218).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v222).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v222).n128_u64[0])))
          .n64_u32[1];
  v231 = vzip1q_s32(v224, COERCE_AS(int32x4_t, 0LL));
  LANES128(v224).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v226).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v226).n128_u64[0])))
          .n64_u32[1];
  v232 = vzip1q_s32(v230, v231);
  v233 = vzip2q_s32(v230, v231);
  v234 = vzip2q_s32(v218, v187);
  v235 = vzip2q_s32(v224, COERCE_AS(int32x4_t, 0LL));
  v236 = vzip1q_s32(v234, v235);
  v237 = vbslq_s8(vdupq_lane_s32(v229, 0), v204, v209);
  v238 = vmlaq_f32(
      vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v232), v233, v141, 1),
      COERCE_AS(float32x4_t, 0), v236);
  v239 = vmlaq_laneq_f32(vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v232),
                                   COERCE_AS(float32x4_t, 0), v233),
                         v236, v225, 2);
  LANES128(v240).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v238, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v241).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v238, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v240).n128_i8[8] =
      vqtbl1_s8(v238, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v241).n128_i8[8] =
      vqtbl1_s8(v238, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v242 = vmlaq_f32(vmlaq_f32(vmulq_n_f32(v232, *(float*)&v227),
                             COERCE_AS(float32x4_t, 0LL), v233),
                   COERCE_AS(float32x4_t, 0), v236);
  LANES128(v231).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v239, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v231).n128_i8[8] =
      vqtbl1_s8(v239, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v243).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v239, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v243).n128_i8[8] =
      vqtbl1_s8(v239, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v244 = vmulq_f32(vmulq_f32(v242, v240), v231);
  v245 = vmulq_f32(v242, v241);
  v246 = vzip2q_s32(v234, v235);
  v247 = vzip1q_s32(v238, COERCE_AS(int32x4_t, 0LL));
  v248 = vmulq_f32(v245, v243);
  v249 = vmulq_f32(v232, COERCE_AS(float32x4_t, 0LL));
  v250 = vzip1q_s32(v242, v239);
  v251 = vsubq_f32(v244, v248);
  v252 = vmlaq_f32(v249, COERCE_AS(float32x4_t, 0LL), v233);
  v253 = vzip2q_s32(v242, v239);
  LANES128(v251).n128_u64[0] = LANES128_OF(vpaddq_f32(v251, v251)).n128_u64[0];
  v254 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v242, LANES128(v237).n128_f32[0]), v238,
                     COERCE_AS(float32x2_t, LANES128(v237).n128_u64[0]), 1),
      v239, v237, 2);
  v255 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v251).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v251).n128_u64[0]), 1));
  v256 = vzip2q_s32(v238, COERCE_AS(int32x4_t, 0LL));
  v257 = vzip1q_s32(v250, v247);
  v258 = vzip1q_s32(v253, v256);
  v259 = vzip2q_s32(v250, v247);
  v260 = vaddq_f32(v246, vmlaq_f32(v252, COERCE_AS(float32x4_t, 0LL), v236));
  v261 = vrecpeq_f32(v255);
  LANES128(v237).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v259, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v250).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v258, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v262 = vaddq_f32(v260, v254);
  *(int8x8_t*)&LANES128(v237).n128_i8[8] =
      vqtbl1_s8(v259, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v250).n128_i8[8] =
      vqtbl1_s8(v258, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v247).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v258, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v263 = vmulq_f32(v261, vrecpsq_f32(v261, v255));
  LANES128(v261).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v259, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v247).n128_i8[8] =
      vqtbl1_s8(v258, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v258).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v257, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v261).n128_i8[8] =
      vqtbl1_s8(v259, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v258).n128_i8[8] =
      vqtbl1_s8(v257, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v259).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v257, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v259).n128_i8[8] =
      vqtbl1_s8(v257, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v264 = vrecpsq_f32(v263, v255);
  v265 = vceqzq_f32(v255);
  v266 = vmulq_f32(v263, v264);
  v267 = vmulq_f32(v266, vmlsq_f32(vmulq_f32(v237, v250), v261, v247));
  v268 = vmulq_f32(v266, vmlsq_f32(vmulq_f32(v247, v258), v250, v259));
  v269 = vmulq_f32(v266, vmlsq_f32(vmulq_f32(v261, v259), v258, v237));
  v270 = vaddq_f32(
      vmlaq_n_f32(vmlaq_n_f32(vmulq_n_f32(vbicq_s8(v267, v265),
                                          floorf(LANES128(v262).n128_f32[0])),
                              vbicq_s8(v268, v265),
                              floorf(LANES128(v262).n128_f32[1])),
                  vbicq_s8(v269, v265), floorf(LANES128(v262).n128_f32[2])),
      vbicq_s8(
          vmlsq_laneq_f32(
              vmlsq_lane_f32(
                  vmulq_n_f32(vnegq_f32(v267), LANES128(v260).n128_f32[0]),
                  v268, COERCE_AS(float32x2_t, LANES128(v260).n128_u64[0]), 1),
              v269, v260, 2),
          v265));
  v271 = vsubq_f32(v270, vmulq_n_f32(v178, v221));
  v272 = vsubq_f32(v271, v270);
  v273 = vnegq_f32(v271);
  v274 = vmulq_f32(v272, v272);
  LANES128(v274).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v274, v274, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v274).n128_u64[0])))
          .n64_u64[0];
  LANES128(v274).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v274).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v274).n128_u64[0])))
          .n64_u64[0];
  LANES128(v274).n128_u64[1] = LANES128(v274).n128_u64[0];
  v275 = vrsqrteq_f32(v274);
  v276 = vmulq_f32(v275, vrsqrtsq_f32(v275, vmulq_f32(v274, v275)));
  v277 = vbicq_s8(
      vmulq_f32(vmulq_f32(v276, vrsqrtsq_f32(v276, vmulq_f32(v274, v276))),
                v272),
      vceqzq_f32(v274));
  LANES128(v274).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v277, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v262).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v277, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v274).n128_i8[8] =
      vqtbl1_s8(v277, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v262).n128_i8[8] =
      vqtbl1_s8(v277, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v278 = vmlsq_f32(vmulq_f32(v188, v274), v262, v191);
  v279 = vmulq_f32(v278, v278);
  LANES128(v279).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v279, v279, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v279).n128_u64[0])))
          .n64_u64[0];
  LANES128(v279).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v279).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v279).n128_u64[0])))
          .n64_u64[0];
  LANES128(v279).n128_u64[1] = LANES128(v279).n128_u64[0];
  v280 = vrsqrteq_f32(v279);
  v281 = vmulq_f32(v280, vrsqrtsq_f32(v280, vmulq_f32(v279, v280)));
  v282 = vbicq_s8(
      vmulq_f32(v278,
                vmulq_f32(v281, vrsqrtsq_f32(v281, vmulq_f32(v279, v281)))),
      vceqzq_f32(v279));
  LANES128(v279).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v282, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v279).n128_i8[8] =
      vqtbl1_s8(v282, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v281).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v282, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v281).n128_i8[8] =
      vqtbl1_s8(v282, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v283 = vzip1q_s32(v282, v277);
  v284 = vmlsq_f32(vmulq_f32(v262, v279), v281, v274);
  v285 = vmulq_f32(v277, v273);
  v286 = vmulq_f32(v282, v273);
  v287 = vmulq_f32(v284, v273);
  LANES128(v285).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v285, v285, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v285).n128_u64[0])))
          .n64_u64[0];
  LANES128(v286).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v286, v286, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v286).n128_u64[0])))
          .n64_u64[0];
  LANES128(v262).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v287, v287, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v287).n128_u64[0])))
          .n64_u64[0];
  PSEUDO_LOW_LANE128(v287, n128_f32,
                     -0x1.0000000000000p+0f / (float)(v221 + v221));
  LANES128(v277).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v285).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v285).n128_u64[0])))
          .n64_u32[1];
  LANES128(v282).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v286).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v286).n128_u64[0])))
          .n64_u32[1];
  v288 = vzip1q_s32(v284, COERCE_AS(int32x4_t, 0LL));
  LANES128(v284).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v262).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v262).n128_u64[0])))
          .n64_u32[1];
  v289 = vzip2q_s32(v282, v277);
  *(int32x4_t*)(a1 + 16) = vzip1q_s32(v283, v288);
  v290 = vzip2q_s32(v284, COERCE_AS(int32x4_t, 0LL));
  LANES128(v284).n128_u32[0] = 0;
  *((float*)&v165 + 2) = LANES128(v287).n128_f32[0];
  LANES128(v286).n128_u64[0] =
      COERCE_UNSIGNED_INT(-(float)((float)(v221 - v221) * v223)) |
      ((unsigned __int64)COERCE_UNSIGNED_INT(
           -(float)((float)(v221 - v221) * v223))
       << 32);
  v291 = *(_QWORD*)(a1 + 240);
  *(_DWORD*)(a1 + 144) = LANES128(v287).n128_u32[0];
  *(float*)(a1 + 148) = LANES128(v287).n128_f32[0] * 0x0.0p+0f;
  v292 = *(_QWORD*)(a1 + 248);
  LANES128(v284).n128_f32[1] = v223 + v223;
  LANES128(v286).n128_u64[1] =
      COERCE_UNSIGNED_INT(LANES128(v287).n128_f32[0] * 0x0.0p+0f) |
      0x3F80000000000000LL;
  *(_QWORD*)&v293 = LANES128(v270).n128_u64[0];
  v294 = *(_QWORD*)(a1 + 256);
  *((_QWORD*)&v293 + 1) =
      LANES128(v270).n128_u32[2] | ((unsigned __int64)LODWORD(v221) << 32);
  v319_.v320 = v291;
  v319_.v321 = v292;
  v295 = *(_QWORD*)(a1 + 264);
  *(_OWORD*)(a1 + 96) = LANES128(v284).n128_u64[0];
  *(int32x4_t*)(a1 + 32) = vzip2q_s32(v283, v288);
  *(int32x4_t*)(a1 + 48) = vzip1q_s32(v289, v290);
  v319_.v322 = v294;
  v319_.v323 = v295;
  v296 = *(_QWORD*)(a1 + 272);
  v297 = *(_QWORD*)(a1 + 280);
  *(_OWORD*)(a1 + 160) = v293;
  *(_OWORD*)(a1 + 112) = v165;
  *(int8x16_t*)(a1 + 128) = v286;
  v319_.v324 = v296;
  v319_.v325 = v297;
  v298 = *(_QWORD*)(a1 + 296);
  v319_.v326 = *(_QWORD*)(a1 + 288);
  v319_.v327 = v298;
  v299 = *(_QWORD*)(a1 + 320);
  *(int32x4_t*)(a1 + 64) = vzip2q_s32(v289, v290);
  *(_OWORD*)(a1 + 80) = COERCE_UNSIGNED_INT(v223 + v223);
  v300 = v299;
  do {
    v301 = *(_QWORD*)(v300 - 24);
    v300 -= 24;
    v299 -= 24;
  } while (*(char**)(v301 + 8) != GameData_2132408);
  return GameRoutine_194ae50(*(int8x16_t**)(v299 + 16),
                             (unsigned __int64*)(a1 + 16),
                             (float32x2_t*)&v319_.v319, v221);
}

bool gfx_render_19443a0(float32x4_t* a1, float32x2_t* a2)
{
  float32x4_t v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float32x4_t v7;
  float32x4_t v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float v19;
  float v20;
  float32x4_t v21;
  float v22;
  float v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;

  v2 = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(a1[1],
                          COERCE_FLOAT(*(_OWORD*)LANES64(*(a2)).n64_u64)),
              a1[2], COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1),
          a1[3], *(float32x4_t*)LANES64(*(a2)).n64_u64, 2),
      a1[4]);
  v3 = LANES64(a2[2]).n64_f32[0] * LANES64(a2[2]).n64_f32[0];
  v4 = vmuls_lane_f32(LANES128(v2).n128_f32[2], v2, 2);
  v5 = LANES128_OF(vmulq_f32(v2, v2)).n128_f32[0] + v4;
  v6 = sqrtf(v5);
  v7 = a1[7];
  v8 = a1[8];
  v9 = sqrtf(v5 - v3) / v6;
  v10 = LANES64(a2[2]).n64_f32[0] / v6;
  v11 =
      v9 *
      (float)-(float)((float)(PSEUDO_UNFUSED(LANES128(v2).n128_f32[2] * v10)) -
                      (float)(v9 * LANES128(v2).n128_f32[0]));
  v12 = v9 * (float)((float)(PSEUDO_UNFUSED(LANES128(v2).n128_f32[2] * v9)) +
                     (float)(v10 * LANES128(v2).n128_f32[0]));
  v13 = v9 * (float)((float)(PSEUDO_UNFUSED(LANES128(v2).n128_f32[2] * v10)) +
                     (float)(v9 * LANES128(v2).n128_f32[0]));
  v14 = v9 * (float)((float)(PSEUDO_UNFUSED(LANES128(v2).n128_f32[2] * v9)) -
                     (float)(v10 * LANES128(v2).n128_f32[0]));
  v15 = a1[5];
  v16 = a1[6];
  v17 = vaddq_f32(v8, vmlaq_n_f32(vmlaq_f32(vmulq_n_f32(v15, v11),
                                            COERCE_AS(float32x4_t, 0), v16),
                                  v7, v12));
  v18 = vaddq_f32(v8, vmlaq_n_f32(vmlaq_f32(vmulq_n_f32(v15, v13),
                                            COERCE_AS(float32x4_t, 0), v16),
                                  v7, v14));
  v19 = (float)(0x1.0000000000000p+0f / LANES128(v18).n128_f32[3]) *
        LANES128(v18).n128_f32[0];
  v20 = vmuls_lane_f32(LANES128(v2).n128_f32[1],
                       COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0]), 1) +
        v4;
  PSEUDO_LOW_LANE128(v15, n128_f32, sqrtf(v20));
  LANES128(v18).n128_f32[0] = sqrtf(v20 - v3) / LANES128(v15).n128_f32[0];
  PSEUDO_LOW_LANE128(v15, n128_f32,
                     LANES64(a2[2]).n64_f32[0] / LANES128(v15).n128_f32[0]);
  v21 = v7;
  v22 = LANES128(v18).n128_f32[0] *
        (float)-(float)((float)(PSEUDO_UNFUSED(LANES128(v2).n128_f32[2] *
                                               LANES128(v15).n128_f32[0])) -
                        (float)(LANES128(v18).n128_f32[0] *
                                LANES128(v2).n128_f32[1]));
  v23 = LANES128(v18).n128_f32[0] *
        (float)((float)(PSEUDO_UNFUSED(LANES128(v2).n128_f32[2] *
                                       LANES128(v18).n128_f32[0])) +
                (float)(LANES128(v15).n128_f32[0] * LANES128(v2).n128_f32[1]));
  v24 = vmulq_f32(a1[5], COERCE_AS(float32x4_t, 0));
  v25 = vaddq_f32(
      v8,
      vmlaq_n_f32(
          vmlaq_n_f32(
              v24, v16,
              LANES128(v18).n128_f32[0] *
                  (float)((float)(PSEUDO_UNFUSED(LANES128(v2).n128_f32[2] *
                                                 LANES128(v15).n128_f32[0])) +
                          (float)(LANES128(v18).n128_f32[0] *
                                  LANES128(v2).n128_f32[1]))),
          v21,
          LANES128(v18).n128_f32[0] *
              (float)((float)(PSEUDO_UNFUSED(LANES128(v2).n128_f32[2] *
                                             LANES128(v18).n128_f32[0])) -
                      (float)(LANES128(v15).n128_f32[0] *
                              LANES128(v2).n128_f32[1]))));
  v26 = vaddq_f32(v8, vmlaq_n_f32(vmlaq_n_f32(v24, v16, v22), v21, v23));
  return (float)((float)((float)((float)LANES128(a1[13]).n128_i32[0] *
                                 0x1.0000000000000p-1f) *
                         (float)(v19 - (float)(PSEUDO_UNFUSED(
                                           (float)(0x1.0000000000000p+0f /
                                                   LANES128(v17).n128_f32[3]) *
                                           LANES128(v17).n128_f32[0])))) *
                 (float)((float)((float)LANES128(a1[13]).n128_i32[1] *
                                 0x1.0000000000000p-1f) *
                         (float)(vmuls_lane_f32(
                                     0x1.0000000000000p+0f /
                                         LANES128(v25).n128_f32[3],
                                     COERCE_AS(float32x2_t,
                                               LANES128(v25).n128_u64[0]),
                                     1) -
                                 vmuls_lane_f32(
                                     0x1.0000000000000p+0f /
                                         LANES128(v26).n128_f32[3],
                                     COERCE_AS(float32x2_t,
                                               LANES128(v26).n128_u64[0]),
                                     1)))) >=
         (float)LANES128(a1[13]).n128_i32[2];
}

#pragma GCC visibility pop
