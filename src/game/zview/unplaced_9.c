#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* game_10411d0(_QWORD* result);
__attribute__((swiftcall)) void
game_zview_d163f0(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64* game_8224a0(unsigned __int8);
__int64 GameRoutine_d27850();
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_zview_103db80(__int64, float);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__n128 game_zview_103ee50(__int64);
bool game_d27d30(__int64);
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_22110b8;
extern _UNKNOWN GameData_22110c8;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ebd0[3];
extern __int64* GameData_212ed08[13];
extern __int64* GameData_212eda8[10];
extern __int64 GameData_212dc38[7];
typedef __int64 GameAlign_22110ac __attribute__((aligned(4)));
extern GameAlign_22110ac GameData_22110ac;
extern __int64 GameData_22110c0;
extern __int64 GameData_2258178;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float GameHr_d78cb0(float*, float);
float GameRoutine_103f060(int32x4_t*);
float atan2f(float, float);
float fmodf(float, float);
float game_d26b60(__int64);
float game_d27af0(float, float, float, float);
float powf(float, float);
float32x4_t game_zview_103fb80(__int64);
int __cxa_guard_acquire(__int64);
unsigned __int64* GameRoutine_d28060();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __cxa_guard_release(__int64);
void game_1040540(int8x16_t*);
void game_zview_103e8e0(__int64);
float game_zview_d21160(__int64 a1);
void game_zview_d344a0(__int64 a1);
float game_zview_d4f350(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_zview_d33ac0(PSEUDO_X8, _QWORD* result,
                                                  unsigned int, _QWORD*,
                                                  _DWORD*, _BYTE*);
__attribute__((swiftcall)) void game_zview_d33900(PSEUDO_X8 x8_, __int64 a1);

float game_zview_d21160(__int64 a1)
{
  __int128 v2;
  __int128 v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned __int64 v7;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  float32x4_t v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  __int128 v26;
  unsigned __int32* v27;
  int32x4_t v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  float v40;
  unsigned __int64 v41;
  float v42;
  unsigned __int64 v43;
  unsigned int v44;
  float v45;
  float v46;
  float v47;
  __int64* v48;
  float v49;
  float v50;
  float v51;
  float v52;
  __int64 v53;
  float v54;
  float v55;
  unsigned int v56;
  unsigned int v57;
  float32x4_t v58;
  float32x4_t v59;
  float v60;
  float32x4_t v61;
  unsigned int v62;
  float v63;
  float v64;
  float v65;
  float v66;
  __int64 v67;
  float v68;
  float v69;
  unsigned int v70;
  unsigned int v71;
  float32x4_t v72;
  int v73;
  int v74;
  __int64 v75;
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
  _BOOL4 v87;
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
  int v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  _BOOL4 v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  __int64 v117;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  bool v126;
  float v127;
  float v128;
  float v129;
  _BOOL4 v130;
  int v131;
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
  __int64* v147;
  char v148;
  float v149;
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
  float v166;
  float v167;
  float v168;
  float v169;
  float v170;
  float v171;
  float v172;
  float v173;
  bool v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  float v182;
  __int64 v183;
  float v184;
  float v185;
  _BOOL4 v186;
  __int64 v187;
  bool v188;
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
  float v202;
  float v203;
  float v204;
  float v205;
  float v206;
  float v207;
  __int64 v208;
  float v209;
  float v210;
  float v211;
  __int64 v212;
  float v213;
  __int64* v214;
  float v215;
  float v216;
  __int64 v217;
  float v218;
  float v219;
  float v220;
  float v221;
  float v222;
  float v223;
  float v224;
  float v225;
  float v226;
  __int64 v227;
  _BYTE* v228;
  float v229;
  float v230;
  char v231;
  float v232;
  float v233;
  float v234;
  float v235;
  float v236;
  float v237;
  float v238;
  float v239;
  __int64 v240;
  __int64 v241;
  _QWORD* v242;
  _QWORD* v243;
  _QWORD* v244;
  int v245;
  int32x4_t* v246;
  __int128 v247;
  __int64 v248;
  float32x4_t* v249;
  float32x4_t v250;
  __int64 v251;
  float32x4_t v252;
  float32x4_t* v253;
  float32x4_t v254;
  float32x4_t v255;
  _DWORD* v256;
  __int64 v257;
  __int128 v258;
  __int64 v259;
  __int64 v260;
  float v261;
  float v262;
  float v263;
  int8x16_t* v264;
  __int64 v265;
  float32x4_t v266;
  float32x4_t v267;
  float32x4_t v268;
  __int64 v269;
  float result;
  float v271;
  float v272;
  float v273;
  float v274;
  float v275;
  float v276;
  int v277;
  float v278;
  float v279;
  __int64 v280;
  _QWORD* v281;
  _QWORD* v282;
  float v283;
  _BOOL4 v284;
  float v285;
  float v286;
  float v287;
  float v288;
  float v289;
  __int64 v290;
  float v291;
  __int64 v292;
  _QWORD* v293;
  _QWORD* v294;
  float v295;
  float v296;
  float v297;
  float v298;
  float v299;
  float v300;
  __int64 v301;
  float v302;
  float v303;
  __int64 v304;
  _QWORD* v305;
  _QWORD* v306;
  float v307;
  float v308;
  float v309;
  float v310;
  float v311;
  float v312;
  float v313;
  float v314;
  float v315;
  float v316;
  float v317;
  float v318;
  float v319;
  float v320;
  float v321;
  float v322;
  float v323;
  float v324;
  __int64 v325;
  float32x4_t v326;
  float v327;
  float v328;
  float v329;
  float v330;
  float v331;
  float v332;
  float v333;
  float v334;
  float v335;
  float v336;
  float v337;
  float32x4_t v338;
  struct {
    _QWORD v339[18];
    char v340;
  } v339_;
  float32x4_t v341[2];

  v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
  v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
  v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 960) = 0;
  v2 = *(_OWORD*)(a1 + 944);
  v3 = *(_OWORD*)(a1 + 960);
  v4 = game_ProcGameSkipView_instance_;
  *(_QWORD*)(a1 + 976) = 0;
  *(_OWORD*)(a1 + 944) = (unsigned __int64)v2;
  *(_OWORD*)(a1 + 960) = (unsigned __int64)v3;
  if (v4 != 0 && *(_BYTE*)(v4 + 152) == 3) {
    v5 = *(_DWORD*)(v4 + 156);
    v6 = (v5 & 8) != 0 ? 2 : 3;
    if ((v6 & v5) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v7 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v7 + 172) == *(float*)(v7 + 168)) {
      v8 = COERCE_AS(__typeof__(v8),
                     (*(__n128(**)(unsigned __int64))(*(_QWORD*)(v7 + 160) +
                                                      16LL))(v7 + 160)),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    else {
      v8 = *(_OWORD*)(v7 + 208);
    }
    if (*((float*)&v8 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v7 + 160) + 16LL))(
                        v7 + 160, *((float*)&v8 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
    LABEL_13:
      *(_BYTE*)(a1 + 876) = 1;
    }
  }
  memcpy(a1 + 664, a1 + 488, 0x91u),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  v9 = *(_OWORD*)(a1 + 640);
  *(_QWORD*)(a1 + 816) = v9;
  v10 = *(_OWORD*)(a1 + 816);
  *((_QWORD*)&v10 + 1) = DWORD2(v9);
  *(_OWORD*)(a1 + 816) = v10;
  v11 = GameData_212dc38[0];
  v12 = *(_QWORD*)(*(_QWORD*)GameData_212dc38[0] + 992LL);
  if (v12 != 0 && *(_BYTE*)(v12 + 8) == 1) {
    v13 = *(float*)(v12 + 4);
    v14 = *(float*)(a1 + 696);
    v15 = fmaxf(*(float*)v12, 0x0.0p+0f);
    if (v13 >= v14) {
      v13 = *(float*)(a1 + 696);
    }
    *(float*)(a1 + 696) =
        v14 + (float)(fminf(v15, 0x1.0000000000000p+0f) * (float)(v13 - v14));
  }
  v16 = *(__int64**)(a1 + 880);
  v17 = *(_QWORD*)(a1 + 888);
  *(float*)(a1 + 836) = *(float*)(a1 + 864) + *(float*)(a1 + 836);
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v325 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v325;
    __cxa_guard_release((__int64)&GameData_21a6130),
        v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v18 = *v16;
  v19 = COERCE_AS(float32x4_t, GameData_21a6120);
  v20 = GameData_212eba8[0];
  v21 = GameData_212eda8[0];
  if (*v16 != 0) {
    v22 = *GameData_212eba8[0];
    if (*GameData_212eba8[0] != 0) {
      v23 = *(_QWORD**)(v22 + 8);
      v24 = *(_QWORD**)(v22 + 16);
      if (v23 != v24) {
        while (*v23 != v18) {
          v23 += 2;
          if (v23 == v24) {
            goto LABEL_30;
          }
        }
      }
      if (v23 != v24) {
        v25 = *(_QWORD*)(v18 + 16);
        v26 = *(_OWORD*)(v25 + 560);
        v27 = (unsigned __int32*)(v25 + 580);
        LANES128(v28).n128_u32[2] = DWORD2(v26);
      LABEL_32:
        LANES128(v19).n128_u32[0] = v26;
        LANES128(v19).n128_u32[1] = *v27;
        LANES128(v19).n128_u64[1] = LANES128(v28).n128_u32[2];
        goto LABEL_33;
      }
    }
  }
LABEL_30:
  if (*GameData_212eda8[0] != 0) {
    v29 = *(_QWORD*)(*GameData_212eda8[0] + 8);
    *(_QWORD*)&v26 = *(_QWORD*)(v29 + 280);
    v27 = (unsigned __int32*)(v29 + 168);
    v28 = vdupq_lane_s32(*(int32x2_t*)&v26, 1);
    goto LABEL_32;
  }
LABEL_33:
  v30 = *(__int64**)(a1 + 880);
  v31 = *(_QWORD*)(a1 + 888);
  if (v31 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                              memory_order_relaxed);
    v32 = *v30;
    if (v32 == 0) {
      goto LABEL_48;
    }
    v33 = *v20;
    if (*v20 == 0) {
      goto LABEL_48;
    }
    v34 = *(_QWORD**)(v33 + 8);
    v35 = *(_QWORD**)(v33 + 16);
    if (v34 != v35) {
      while (*v34 != v32) {
        v34 += 2;
        if (v34 == v35) {
          goto LABEL_48;
        }
      }
    }
    if (v34 != v35) {
      v40 = *(float*)(v32 + 556);
    }
    else {
    LABEL_48:
      v40 = 0x1.6666660000000p+0f;
      if (*v21 == 0) {
        v40 = 0x0.0p+0f;
      }
    }
    LODWORD(v41) = 0;
    *((float*)&v41 + 1) = v40;
    v341[0] = vaddq_f32(v19, COERCE_AS(float32x4_t, v41));
    if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
          v152 =
              COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak(v31),
          v152 =
              COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  else {
    v36 = *v30;
    if (v36 == 0) {
      goto LABEL_54;
    }
    v37 = *GameData_212eba8[0];
    if (*GameData_212eba8[0] == 0) {
      goto LABEL_54;
    }
    v38 = *(_QWORD**)(v37 + 8);
    v39 = *(_QWORD**)(v37 + 16);
    if (v38 != v39) {
      while (*v38 != v36) {
        v38 += 2;
        if (v38 == v39) {
          goto LABEL_54;
        }
      }
    }
    if (v38 != v39) {
      v42 = *(float*)(v36 + 556);
    }
    else {
    LABEL_54:
      v42 = 0x1.6666660000000p+0f;
      if (*GameData_212eda8[0] == 0) {
        v42 = 0x0.0p+0f;
      }
    }
    LODWORD(v43) = 0;
    *((float*)&v43 + 1) = v42;
    v341[0] = vaddq_f32(v19, COERCE_AS(float32x4_t, v43));
  }
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
        v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak(v17),
        v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v44 = 0;
  v328 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v329 = *((float*)GameData_212c190 + 1);
  v45 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  if (*(float*)(*(_QWORD*)v11 + 1064LL) >= 0x1.cccccc0000000p-2f) {
    v46 = *(float*)(*(_QWORD*)v11 + 1064LL);
  }
  else {
    v46 = 0x1.cccccc0000000p-2f;
  }
  v327 = -*(float*)GameData_212c190;
  v47 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v334 = -*(float*)GameData_212c188;
  v335 = *((float*)GameData_212c188 + 1);
  v332 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v333 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v331 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v48 = GameData_212ebd0[0];
  do {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_22110c8) != 0) {
      GameData_22110c0 = 0x3F80000000000000LL;
      __cxa_guard_release((__int64)&GameData_22110c8),
          v152 =
              COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v49 = (float)(PSEUDO_UNFUSED((float)((float)v44 / 0x1.8000000000000p+2f) *
                                 0x1.921fb60000000p+1f)) +
          (float)(PSEUDO_UNFUSED((float)((float)v44 / 0x1.8000000000000p+2f) *
                                 0x1.921fb60000000p+1f));
    v50 = v49 +
          (float)(roundf(v49 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (!(v50 > 0x1.921fb60000000p+0f)) {
      v51 = 0x1.0000000000000p+0f;
      if (!(v50 < -0x1.921fb60000000p+0f)) {
        goto LABEL_70;
      }
      v50 = -0x1.921fb60000000p+1f - v50;
    }
    else {
      v50 = 0x1.921fb60000000p+1f - v50;
    }
    v51 = -0x1.0000000000000p+0f;
  LABEL_70:
    v52 = v50 * v50;
    v53 = *v48;
    v54 =
        v50 *
        (float)((float)((float)(v47 +
                                (float)((float)(v328 +
                                                (float)((float)(v45 +
                                                                (float)((float)(v329 +
                                                                                (float)(v327 *
                                                                                        (float)(v50 *
                                                                                                v50))) *
                                                                        (float)(v50 *
                                                                                v50))) *
                                                        (float)(v50 * v50))) *
                                        (float)(v50 * v50))) *
                        (float)(v50 * v50)) +
                0x1.0000000000000p+0f);
    v55 =
        v51 *
        (float)((float)((float)(v331 +
                                (float)((float)(v333 +
                                                (float)((float)(v332 +
                                                                (float)((float)(v335 +
                                                                                (float)(v334 *
                                                                                        v52)) *
                                                                        v52)) *
                                                        v52)) *
                                        v52)) *
                        v52) +
                0x1.0000000000000p+0f);
    *(float*)&v56 =
        (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v54)) +
        (float)(*(float*)&GameData_22110c0 * v55);
    *(float*)&v57 =
        (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v55)) -
        (float)(*(float*)&GameData_22110c0 * v54);
    LANES128(v58).n128_u64[0] = v56;
    LANES128(v58).n128_u64[1] = v57;
    LANES128(v59).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v59).n128_u64[1] = 0x3F0000003F000000LL;
    v338 = vaddq_f32(v341[0], vmulq_f32(v58, v59));
    game_zview_d163f0((void*)(v339_.v339), v53, v341, &v338, 0x100000000LL, 0,
                      v46),
        v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v339_.v340 == 1) {
      v60 = 0x0.0p+0f;
      goto LABEL_88;
    }
    ++v44;
  } while (v44 != 6);
  LANES128(v61).n128_u64[0] = 0x3FE000003FE00000LL;
  LANES128(v61).n128_u64[1] = 0x3FE000003FE00000LL;
  v62 = 0;
  v326 = v61;
  while (1) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_22110c8) != 0) {
      GameData_22110c0 = 0x3F80000000000000LL;
      __cxa_guard_release((__int64)&GameData_22110c8),
          v152 =
              COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v63 = (float)(PSEUDO_UNFUSED((float)((float)v62 / 0x1.8000000000000p+2f) *
                                 0x1.921fb60000000p+1f)) +
          (float)(PSEUDO_UNFUSED((float)((float)v62 / 0x1.8000000000000p+2f) *
                                 0x1.921fb60000000p+1f));
    v64 = v63 +
          (float)(roundf(v63 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (!(v64 > 0x1.921fb60000000p+0f)) {
      v65 = 0x1.0000000000000p+0f;
      if (!(v64 < -0x1.921fb60000000p+0f)) {
        goto LABEL_82;
      }
      v64 = -0x1.921fb60000000p+1f - v64;
    }
    else {
      v64 = 0x1.921fb60000000p+1f - v64;
    }
    v65 = -0x1.0000000000000p+0f;
  LABEL_82:
    v66 = v64 * v64;
    v67 = *v48;
    v68 =
        v64 *
        (float)((float)((float)(v47 +
                                (float)((float)(v328 +
                                                (float)((float)(v45 +
                                                                (float)((float)(v329 +
                                                                                (float)(v327 *
                                                                                        (float)(v64 *
                                                                                                v64))) *
                                                                        (float)(v64 *
                                                                                v64))) *
                                                        (float)(v64 * v64))) *
                                        (float)(v64 * v64))) *
                        (float)(v64 * v64)) +
                0x1.0000000000000p+0f);
    v69 =
        v65 *
        (float)((float)((float)(v331 +
                                (float)((float)(v333 +
                                                (float)((float)(v332 +
                                                                (float)((float)(v335 +
                                                                                (float)(v334 *
                                                                                        v66)) *
                                                                        v66)) *
                                                        v66)) *
                                        v66)) *
                        v66) +
                0x1.0000000000000p+0f);
    *(float*)&v70 =
        (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v68)) +
        (float)(*(float*)&GameData_22110c0 * v69);
    *(float*)&v71 =
        (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v69)) -
        (float)(*(float*)&GameData_22110c0 * v68);
    LANES128(v72).n128_u64[0] = v70;
    LANES128(v72).n128_u64[1] = v71;
    v338 = vaddq_f32(v341[0], vmulq_f32(v72, v326));
    game_zview_d163f0((void*)(v339_.v339), v67, v341, &v338, 0x100000000LL, 0,
                      v46),
        v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((v339_.v340 & 1) != 0) {
      break;
    }
    if (++v62 == 6) {
      v60 = 0x1.0000000000000p+0f;
      goto LABEL_88;
    }
  }
  v60 = 0x1.0000000000000p-1f;
LABEL_88:
  v73 = *(unsigned __int8*)(a1 + 76);
  *(float*)(a1 + 872) = v60;
  v74 = *(unsigned __int8*)(a1 + 64);
  v75 = game_script_hub_g_frame_counter_ptr[0];
  if (v73 != 0) {
    v76 = 0x1.6800000000000p+7f;
  }
  else {
    v76 = 0x1.9000000000000p+5f;
  }
  if (v73 != 0) {
    v77 = 0x1.99999a0000000p-4f;
  }
  else {
    v77 = 0x1.0000000000000p-1f;
  }
  if (v73 != 0) {
    v78 = 0x1.4000000000000p+1f;
  }
  else {
    v78 = 0x1.4000000000000p+3f;
  }
  if (v74 == 1) {
    v79 =
        fmodf(*(float*)(a1 + 832) - *(float*)(a1 + 60), 0x1.6800000000000p+8f),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    v80 = *(float*)(a1 + 832);
    v330 = v77;
    if (v79 >= 0x0.0p+0f) {
      v81 = v79 + 0x0.0p+0f;
    }
    else {
      v81 = (float)(v79 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
    }
    if (v81 > 0x1.6800000000000p+7f) {
      v81 = v81 + -0x1.6800000000000p+8f;
    }
    v82 = (float)((float)(*(float*)(*(_QWORD*)v75 + 160LL) *
                          0x1.0aef000000000p+4f) /
                  0x1.f400000000000p+9f) *
          (float)(v77 + (float)(fabsf(v81) * v78));
    v83 = fmodf(*(float*)(a1 + 60) - v80, 0x1.6800000000000p+8f),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v83 >= 0x0.0p+0f) {
      v84 = v83 + 0x0.0p+0f;
    }
    else {
      v84 = (float)(v83 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
    }
    if (v84 > 0x1.6800000000000p+7f) {
      v84 = v84 + -0x1.6800000000000p+8f;
    }
    v85 = fabsf(v82);
    v86 = v80 + v84;
    if (v80 > v86) {
      v80 = v80 - v85;
      if (v80 >= v86) {
        goto LABEL_115;
      }
    LABEL_114:
      v80 = v86;
      goto LABEL_115;
    }
    if (v80 < v86) {
      v80 = v80 + v85;
      if (v80 > v86) {
        goto LABEL_114;
      }
    }
  LABEL_115:
    v88 = fmodf(v80 + 0x1.6800000000000p+7f, 0x1.6800000000000p+8f),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    v89 = *(float*)(a1 + 60);
    v90 = v88 + -0x1.6800000000000p+7f;
    if (v90 < -0x1.6800000000000p+7f) {
      v90 = v90 + 0x1.6800000000000p+8f;
    }
    v91 = fmodf(v90 - v89, 0x1.6800000000000p+8f),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v91 >= 0x0.0p+0f) {
      v92 = v91 + 0x0.0p+0f;
    }
    else {
      v92 = (float)(v91 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
    }
    if (v92 > 0x1.6800000000000p+7f) {
      v92 = v92 + -0x1.6800000000000p+8f;
    }
    if (v76 >= v92) {
      v93 = v92;
    }
    else {
      v93 = v76;
    }
    if (v92 >= (float)-v76) {
      v94 = v93;
    }
    else {
      v94 = -v76;
    }
    v95 = *(float*)(a1 + 60);
    v96 = v89 + v94;
    *(float*)(a1 + 832) = v96;
    v97 = fmodf(v96 - v95, 0x1.6800000000000p+8f),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v97 >= 0x0.0p+0f) {
      v98 = v97 + 0x0.0p+0f;
    }
    else {
      v98 = (float)(v97 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
    }
    v77 = v330;
    if (v98 > 0x1.6800000000000p+7f) {
      v98 = v98 + -0x1.6800000000000p+8f;
    }
    v87 = fabsf(v98) > 0x1.47ae140000000p-7f;
  }
  else {
    v87 = false;
  }
  v99 = *(unsigned __int8*)(a1 + 72);
  if (v99 == 1) {
    v100 =
        fmodf(*(float*)(a1 + 836) - *(float*)(a1 + 68), 0x1.6800000000000p+8f),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    v101 = *(float*)(a1 + 836);
    if (v100 >= 0x0.0p+0f) {
      v102 = v100 + 0x0.0p+0f;
    }
    else {
      v102 = (float)(v100 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
    }
    if (v102 > 0x1.6800000000000p+7f) {
      v102 = v102 + -0x1.6800000000000p+8f;
    }
    v103 = (float)((float)(*(float*)(*(_QWORD*)v75 + 160LL) *
                           0x1.0aef000000000p+4f) /
                   0x1.f400000000000p+9f) *
           (float)((float)(v77 + (float)(fabsf(v102) * v78)) *
                   0x1.0000000000000p-1f);
    v104 = fmodf(*(float*)(a1 + 68) - v101, 0x1.6800000000000p+8f),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v104 >= 0x0.0p+0f) {
      v105 = v104 + 0x0.0p+0f;
    }
    else {
      v105 = (float)(v104 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
    }
    if (v105 > 0x1.6800000000000p+7f) {
      v105 = v105 + -0x1.6800000000000p+8f;
    }
    v106 = fabsf(v103);
    v107 = v101 + v105;
    if (v101 > v107) {
      v101 = v101 - v106;
      if (v101 >= v107) {
        goto LABEL_153;
      }
    LABEL_152:
      v101 = v107;
      goto LABEL_153;
    }
    if (v101 < v107) {
      v101 = v101 + v106;
      if (v101 > v107) {
        goto LABEL_152;
      }
    }
  LABEL_153:
    v109 = fmodf(v101 + 0x1.6800000000000p+7f, 0x1.6800000000000p+8f) +
           -0x1.6800000000000p+7f,
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v109 < -0x1.6800000000000p+7f) {
      v109 = v109 + 0x1.6800000000000p+8f;
    }
    v110 = *(float*)(a1 + 68);
    v111 = fminf(fmaxf(v109, *(float*)(a1 + 692)), *(float*)(a1 + 696));
    *(float*)(a1 + 836) = v111;
    v112 = fmodf(v111 - v110, 0x1.6800000000000p+8f),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v112 >= 0x0.0p+0f) {
      v113 = v112 + 0x0.0p+0f;
    }
    else {
      v113 = (float)(v112 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
    }
    if (v113 > 0x1.6800000000000p+7f) {
      v113 = v113 + -0x1.6800000000000p+8f;
    }
    v108 = fabsf(v113) > 0x1.47ae140000000p-7f;
    if ((*(_BYTE*)(a1 + 76) & 1) == 0) {
    LABEL_161:
      if (!v87 && !v108) {
        *(_BYTE*)(a1 + 76) = 1;
      }
    }
  }
  else {
    v108 = false;
    if ((*(_BYTE*)(a1 + 76) & 1) == 0) {
      goto LABEL_161;
    }
  }
  v115 = *(float*)(a1 + 44);
  v114 = *(float*)(a1 + 48);
  v116 = 0x0.0p+0f;
  v117 = *(_QWORD*)v75;
  if (v115 < v114 && v114 > 0x0.0p+0f) {
    v116 = v115 / v114;
  }
  *(float*)(a1 + 868) = v116;
  v119 = fabsf((float)(*(float*)(v117 + 160) * 0x1.0aef000000000p+4f) /
               0x1.f400000000000p+9f);
  if (v115 > v114) {
    v115 = v115 - v119;
    if (v115 >= v114) {
      goto LABEL_174;
    }
  LABEL_173:
    v115 = v114;
    goto LABEL_174;
  }
  if (v115 < v114) {
    v115 = v115 + v119;
    if (v115 > v114) {
      goto LABEL_173;
    }
  }
LABEL_174:
  v120 = 0x1.0000000000000p+0f;
  *(float*)(a1 + 44) = v115;
  if (v114 > 0x0.0p+0f) {
    v120 = v115 / v114;
  }
  v121 = (float)(PSEUDO_UNFUSED(v120 * 0x1.921fb60000000p+1f)) +
         (float)(roundf((float)(v120 * 0x1.921fb60000000p+1f) *
                        0x1.45f3060000000p-3f) *
                 -0x1.921fb60000000p+2f);
  if (v121 > 0x1.921fb60000000p+0f) {
    v122 = 0x1.921fb60000000p+1f;
    goto LABEL_180;
  }
  v123 = 0x1.0000000000000p+0f;
  if (v121 < -0x1.921fb60000000p+0f) {
    v122 = -0x1.921fb60000000p+1f;
  LABEL_180:
    v121 = v122 - v121;
    v123 = -0x1.0000000000000p+0f;
  }
  v124 =
      v123 *
      (float)((float)((float)(v331 +
                              (float)((float)(v333 +
                                              (float)((float)(v332 +
                                                              (float)((float)(v335 +
                                                                              (float)(v334 *
                                                                                      (float)(v121 *
                                                                                              v121))) *
                                                                      (float)(v121 *
                                                                              v121))) *
                                                      (float)(v121 * v121))) *
                                      (float)(v121 * v121))) *
                      (float)(v121 * v121)) +
              0x1.0000000000000p+0f);
  v125 = fabsf(v124);
  v126 = v124 < 0x0.0p+0f;
  v127 = -0x1.0000000000000p+0f;
  v128 = v125 * 0x1.0000000000000p-1f;
  if (v126) {
    v127 = 0x1.0000000000000p+0f;
  }
  v129 = (float)(v128 * v127) + 0x1.0000000000000p-1f;
  if ((v74 & 1) == 0) {
    if (*(_BYTE*)(a1 + 32) == 1) {
      v132 =
          fmodf(*(float*)(a1 + 28) - *(float*)(a1 + 20), 0x1.6800000000000p+8f),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
      v133 = 0x1.0000000000000p-1f;
      if (*(_BYTE*)(a1 + 56) != 0) {
        v133 = *(float*)(a1 + 52);
      }
      v134 = powf(v129, v133),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
      if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
        goto LABEL_465;
      }
      v130 = false;
      v135 = v134 - v129;
      v136 = v132 + 0x0.0p+0f;
      if (v132 < 0x0.0p+0f) {
        v136 = (float)(v132 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
      }
      if (v136 > 0x1.6800000000000p+7f) {
        v136 = v136 + -0x1.6800000000000p+8f;
      }
      v137 = fminf(fmaxf(v136, -0x1.e000000000000p+6f), 0x1.e000000000000p+6f);
      v138 = fabsf(v137) / 0x1.e000000000000p+6f;
      if (v138 > 0x1.0000000000000p+0f) {
        v138 = 0x1.0000000000000p+0f;
      }
      *(float*)(a1 + 832) =
          (float)(*(float*)(a1 + 28) - v137) +
          (float)(fminf(
                      fmaxf(v129 + (float)(fminf(fmaxf(v138 * v138, 0x0.0p+0f),
                                                 0x1.0000000000000p+0f) *
                                           v135),
                            0x0.0p+0f),
                      0x1.0000000000000p+0f) *
                  (float)(*(float*)(a1 + 28) -
                          (float)(*(float*)(a1 + 28) - v137)));
      if ((v99 & 1) == 0) {
        goto LABEL_199;
      }
    }
    else {
      v130 = true;
      if ((v99 & 1) == 0) {
        goto LABEL_199;
      }
    }
  LABEL_185:
    v131 = 0;
    goto LABEL_211;
  }
  v130 = false;
  if ((v99 & 1) != 0) {
    goto LABEL_185;
  }
LABEL_199:
  if (*(_BYTE*)(a1 + 40) != 1) {
    v131 = 1;
    goto LABEL_211;
  }
  v139 = fmodf(*(float*)(a1 + 36) - *(float*)(a1 + 24), 0x1.6800000000000p+8f),
  v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
  v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
  v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  v140 = 0x1.0000000000000p-1f;
  if (*(_BYTE*)(a1 + 56) != 0) {
    v140 = *(float*)(a1 + 52);
  }
  v141 = powf(v129, v140),
  v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
  v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
  v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((*(_BYTE*)(a1 + 40) & 1) == 0) {
  LABEL_465:
    GameRoutine_8123d0(),
        v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v131 = 0;
  v142 = v141 - v129;
  v143 = v139 + 0x0.0p+0f;
  if (v139 < 0x0.0p+0f) {
    v143 = (float)(v139 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
  }
  if (v143 > 0x1.6800000000000p+7f) {
    v143 = v143 + -0x1.6800000000000p+8f;
  }
  v144 = fabsf(v143) / 0x1.e000000000000p+6f;
  if (v144 > 0x1.0000000000000p+0f) {
    v144 = 0x1.0000000000000p+0f;
  }
  *(float*)(a1 + 836) = fminf(
      fmaxf(
          *(float*)(a1 + 24) +
              (float)(fminf(fmaxf(v129 + (float)(fminf(fmaxf(v144 * v144,
                                                             0x0.0p+0f),
                                                       0x1.0000000000000p+0f) *
                                                 v142),
                                  0x0.0p+0f),
                            0x1.0000000000000p+0f) *
                      (float)(*(float*)(a1 + 36) - *(float*)(a1 + 24))),
          *(float*)(a1 + 692)),
      *(float*)(a1 + 696));
LABEL_211:
  if (v120 >= 0x1.0000000000000p+0f) {
    if (*(_BYTE*)(a1 + 32) == 1) {
      *(_BYTE*)(a1 + 32) = 0;
    }
    if (*(_BYTE*)(a1 + 40) == 1) {
      *(_BYTE*)(a1 + 40) = 0;
    }
  }
  if ((*(_BYTE*)(*(_QWORD*)v11 + 816LL) & 1) != 0) {
    goto LABEL_348;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22110b8) != 0) {
    GameData_22110ac = 0;
    __cxa_guard_release((__int64)&GameData_22110b8),
        v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v145 = *((float*)&GameData_22110ac + 1);
  v146 = *(float*)&GameData_22110ac;
  v147 = GameData_212ed08[0];
  if (game_d27d30(*GameData_212ed08[0])) {
    v148 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    v149 = 0x1.0000000000000p+1f;
    if ((v148 & 1) != 0) {
      v150 = 0x1.0624de0000000p-9f;
    }
    else {
      v150 = 0x1.3333340000000p-2f;
    }
    if ((v148 & 1) == 0) {
      v149 = 0x1.4000000000000p+0f;
    }
    v151 = 0x1.99999a0000000p-4f;
    if ((v148 & 1) != 0) {
      v151 = 0x1.0624de0000000p-9f;
    }
    v146 = game_d27af0(v151, v150, 0x1.e666660000000p-1f, v149),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    v145 = v152;
  }
  v153 = *(float*)(a1 + 676);
  v154 = *(float*)(a1 + 688);
  v155 = (float)(*(float*)(*(_QWORD*)v75 + 160LL) * 0x1.0aef000000000p+4f) /
         0x1.f400000000000p+9f;
  GameRoutine_d28060(),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  v157 = v156;
  v158 = *(float*)(a1 + 700);
  v159 = v145 * v145;
  if (v158 < *(float*)(a1 + 704)) {
    v158 = *(float*)(a1 + 704);
  }
  v160 = (float)(0x1.0000000000000p+0f - v159) * v158;
  v161 = fminf(fmaxf(v159, 0x0.0p+0f), 0x1.0000000000000p+0f) +
         0x1.0000000000000p+0f;
  v162 = *(float*)(a1 + 16) +
         (float)(fminf(fmaxf(v155 * v161, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                 (float)(v160 - *(float*)(a1 + 16)));
  v163 = fabsf(v161 * (float)(v155 + v155));
  if (v162 > v160) {
    v162 = v162 - v163;
    if (v162 >= v160) {
      goto LABEL_235;
    }
  LABEL_234:
    v162 = v160;
    goto LABEL_235;
  }
  if (v162 < v160) {
    v162 = v163 + v162;
    if (v162 > v160) {
      goto LABEL_234;
    }
  }
LABEL_235:
  v164 = v153 * v157;
  *(float*)(a1 + 16) = v162;
  if (!v130) {
    *(_DWORD*)(a1 + 8) = 0;
    v185 = v154 * v157;
    if (v131 != 0) {
      goto LABEL_257;
    }
    goto LABEL_251;
  }
  v336 = v154;
  v165 = fabsf(v146);
  v166 = v146 * v164;
  v167 = powf(v165, 0x1.0000000000000p-1f),
  v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
  v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
  v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  v168 = 0x1.0000000000000p+0f;
  v169 = 0x1.0000000000000p+0f;
  v170 = fmaxf(v167, 0x0.0p+0f);
  v171 = 0x1.0000000000000p+0f;
  v172 = (float)(fminf(v170, 0x1.0000000000000p+0f) * 0x1.0000000000000p-1f) +
         0x1.0000000000000p-1f;
  if ((float)(v146 * v164) != 0x0.0p+0f) {
    v173 = -0x1.0000000000000p+0f;
    if (v166 >= 0x0.0p+0f) {
      v173 = 0x1.0000000000000p+0f;
    }
    v174 = v173 == COERCE_FLOAT(*(_QWORD*)(a1 + 8));
    v169 = 0x1.0000000000000p+0f;
    if (!v174) {
      v169 = 0x1.0000000000000p+1f;
      v168 = 0x1.0000000000000p+2f;
    }
  }
  v174 = v146 == 0x0.0p+0f;
  v175 = fminf(fmaxf(v165, 0x0.0p+0f), 0x1.0000000000000p+0f);
  v176 = (float)(v175 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
  if (v146 == 0x0.0p+0f) {
    v176 = 0x1.0000000000000p+0f;
  }
  v177 = v168 *
         (float)(v176 * (float)(v157 * (float)(v155 * *(float*)(a1 + 672))));
  v178 = *(float*)(a1 + 668);
  *(float*)v339_.v339 = v177;
  v179 = v157 * (float)(v172 * (float)(v155 * v178));
  v180 = (float)(v175 * 0x1.cccccc0000000p-1f) + 0x1.99999a0000000p-4f;
  if (!v174) {
    v171 = v180;
  }
  v181 = v169 * (float)(v171 * v179);
  LANES128(v341[0]).n128_f32[0] = v181;
  if ((GameRoutine_d27850() & 1) != 0) {
    GameHr_d78cb0((float*)v339_.v339, v166),
        v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    GameHr_d78cb0((float*)v341, v166),
        v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    v177 = *(float*)v339_.v339;
    v181 = LANES128(v341[0]).n128_f32[0];
  }
  v182 = fabsf(v181);
  *(float*)(a1 + 8) =
      COERCE_FLOAT(*(_QWORD*)(a1 + 8)) +
      (float)(fminf(fmaxf(v177, 0x0.0p+0f), 0x1.0000000000000p+0f) *
              (float)(v166 - COERCE_FLOAT(*(_QWORD*)(a1 + 8))));
  v183 = *(_QWORD*)(a1 + 8);
  if (*(float*)&v183 > v166) {
    v184 = v336;
    *(float*)&v183 = *(float*)&v183 - v182;
    if (*(float*)&v183 >= v166) {
      goto LABEL_255;
    }
  LABEL_254:
    *(float*)&v183 = v166;
    goto LABEL_255;
  }
  v184 = v336;
  if (*(float*)&v183 < v166) {
    *(float*)&v183 = v182 + *(float*)&v183;
    if (*(float*)&v183 > v166) {
      goto LABEL_254;
    }
  }
LABEL_255:
  *(_DWORD*)(a1 + 8) = v183;
  v187 = *(_QWORD*)(a1 + 8);
  v130 = *(float*)&v187 == 0x0.0p+0f;
  if (*(float*)&v187 != 0x0.0p+0f) {
    *(float*)(a1 + 832) = *(float*)(a1 + 832) + (float)(*(float*)&v187 * v155);
    v185 = v184 * v157;
    if (v131 == 0) {
      goto LABEL_251;
    }
  LABEL_257:
    v188 = v145 == 0x0.0p+0f;
    v189 = v145 * v185;
    v190 = fminf(fmaxf(fabsf(v145), 0x0.0p+0f), 0x1.0000000000000p+0f);
    v191 = (float)(v190 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
    if (v145 == 0x0.0p+0f) {
      v191 = 0x1.0000000000000p+0f;
    }
    v192 = v191 * (float)(v157 * (float)(v155 * *(float*)(a1 + 684)));
    v193 = *(float*)(a1 + 680);
    *(float*)v339_.v339 = v192;
    v194 = (float)(v190 * 0x1.cccccc0000000p-1f) + 0x1.99999a0000000p-4f;
    v195 = v157 * (float)(v155 * v193);
    if (v188) {
      v194 = 0x1.0000000000000p+0f;
    }
    v196 = v194 * v195;
    LANES128(v341[0]).n128_f32[0] = v194 * v195;
    if ((GameRoutine_d27850() & 1) != 0) {
      GameHr_d78cb0((float*)v339_.v339, v189),
          v152 =
              COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
      GameHr_d78cb0((float*)v341, v189),
          v152 =
              COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
      v192 = *(float*)v339_.v339;
      v196 = LANES128(v341[0]).n128_f32[0];
    }
    v197 = *(float*)(a1 + 12) +
           (float)(fminf(fmaxf(v192, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                   (float)(v189 - *(float*)(a1 + 12)));
    v198 = fabsf(v196);
    if (v197 <= v189) {
      if (v197 >= v189 || (v197 = v198 + v197) <= v189) {
      LABEL_269:
        v199 = *(float*)(a1 + 836);
        *(float*)(a1 + 12) = v197;
        v200 = *(float*)(a1 + 16);
        v201 = *(float*)(a1 + 700);
        if (v197 == 0x0.0p+0f) {
          v202 = v199;
        }
        else {
          v202 = v199 + (float)(v197 * v155);
        }
        v203 = *(float*)(a1 + 692);
        v204 = *(float*)(a1 + 696);
        v205 = fminf(fmaxf(v202, v203), v204);
        v186 = v205 == v203;
        if (v205 == v204) {
          v186 = true;
        }
        if (v200 < v201) {
          v201 = *(float*)(a1 + 16);
        }
        v206 = fmaxf(v205, v203 + v201);
        if (v200 >= *(float*)(a1 + 704)) {
          v200 = *(float*)(a1 + 704);
        }
        *(float*)(a1 + 836) = fminf(v206, v204 - v200);
        goto LABEL_279;
      }
    }
    else {
      v197 = v197 - v198;
      if (v197 >= v189) {
        goto LABEL_269;
      }
    }
    v197 = v189;
    goto LABEL_269;
  }
  v185 = v184 * v157;
  if (v131 != 0) {
    goto LABEL_257;
  }
LABEL_251:
  v186 = false;
  *(_DWORD*)(a1 + 12) = 0;
LABEL_279:
  v207 = *(float*)(a1 + 844);
  v208 = *(_QWORD*)(a1 + 8);
  v209 = fabsf(v155 * 0x1.4000000000000p+2f);
  if (v207 > 0x1.0000000000000p+0f) {
    v207 = v207 - v209;
    if (v207 >= 0x1.0000000000000p+0f) {
      goto LABEL_285;
    }
  LABEL_284:
    v207 = 0x1.0000000000000p+0f;
    goto LABEL_285;
  }
  if (v207 < 0x1.0000000000000p+0f) {
    v207 = v209 + v207;
    if (v207 > 0x1.0000000000000p+0f) {
      goto LABEL_284;
    }
  }
LABEL_285:
  *(float*)(a1 + 844) = v207;
  *(float*)(a1 + 8) =
      fminf(fmaxf(*(float*)&v208, -(float)(v164 * v207)), v164 * v207);
  v210 = *(float*)(a1 + 848);
  if (!v186) {
    if (v210 <= 0x1.0000000000000p+0f) {
      if (v210 >= 0x1.0000000000000p+0f) {
        goto LABEL_298;
      }
      v210 = v209 + v210;
      if (v210 <= 0x1.0000000000000p+0f) {
        goto LABEL_298;
      }
    }
    else {
      v210 = v210 - v209;
      if (v210 >= 0x1.0000000000000p+0f) {
        goto LABEL_298;
      }
    }
    v210 = 0x1.0000000000000p+0f;
    goto LABEL_298;
  }
  v211 = fabsf(v155 * 0x1.4000000000000p+3f);
  if (v210 <= 0x0.0p+0f) {
    if (v210 < 0x0.0p+0f) {
      v210 = v211 + v210;
      if (v210 > 0x0.0p+0f) {
      LABEL_294:
        v210 = 0x0.0p+0f;
      }
    }
  }
  else {
    v210 = v210 - v211;
    if (v210 < 0x0.0p+0f) {
      goto LABEL_294;
    }
  }
LABEL_298:
  *(float*)(a1 + 848) = v210;
  v212 = *(_QWORD*)v75;
  *(float*)(a1 + 12) =
      fminf(fmaxf(*((float*)&v208 + 1), -(float)(v185 * v210)), v185 * v210);
  v213 = *(float*)(v212 + 160);
  v214 = game_8224a0(6u),
  v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
  v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
  v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  v215 = 0x0.0p+0f;
  v216 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v217 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v214),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    v216 = 0x0.0p+0f;
    if (v217 != 0) {
      v216 = (float)*(int*)(v217 + 32);
    }
  }
  v218 = *(float*)(a1 + 720);
  v219 = v216 / 0x1.9000000000000p+6f;
  v220 = 0x1.0000000000000p+0f;
  if (v219 <= 0x1.0000000000000p+0f) {
    v221 = v219;
  }
  else {
    v221 = 0x1.0000000000000p+0f;
  }
  if (v219 >= 0x0.0p+0f) {
    v222 = v221;
  }
  else {
    v222 = 0x0.0p+0f;
  }
  v223 = v218 * 0x1.99999a0000000p-1f;
  v224 = v218 - (float)(PSEUDO_UNFUSED(v218 * 0x1.99999a0000000p-1f));
  if (v224 != 0x0.0p+0f) {
    v225 = (float)(*(float*)(*(_QWORD*)(a1 + 928) + 92LL) - v223) / v224;
    if (v225 <= 0x1.0000000000000p+0f) {
      v220 = v225;
    }
    if (v225 >= 0x0.0p+0f) {
      v215 = v220;
    }
    else {
      v215 = 0x0.0p+0f;
    }
  }
  v226 = v222 * v215;
  if (GameData_2258178 == 0 ||
      (v227 = *(_QWORD*)(GameData_2258178 + 192)) == 0 ||
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_2258178 + 160) +
                            8 * ((unsigned __int64)(v227 +
                                                    *(_QWORD*)(GameData_2258178 +
                                                               184) -
                                                    1) >>
                                 10)) +
                 4 * ((v227 + *(_QWORD*)(GameData_2258178 + 184) - 1) &
                      0x3FF)) != 5) {
    v228 = *(_BYTE**)game_g_game_setting_ptr;
    if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 1 &&
        ((v228[804] & 1) != 0 ||
         v228[940] == 1 && (v228[805] & 1) != 0 && (v228[806] & 1) != 0)) {
    LABEL_323:
      v226 = v226 * 0x0.0p+0f;
    }
    else if (v228[903] == 1) {
      if ((v228[900] & 1) != 0) {
        goto LABEL_323;
      }
      if (v228[940] == 1 && (v228[901] & 1) != 0 && v228[902] != 0) {
        v226 = v226 * 0x0.0p+0f;
      }
    }
  }
  if (!v130 || *(_BYTE*)(*(_QWORD*)v11 + 1056LL) != 1 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1) & 1) == 0) {
    goto LABEL_347;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22110b8) != 0) {
    GameData_22110ac = 0;
    __cxa_guard_release((__int64)&GameData_22110b8),
        v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v230 = *((float*)&GameData_22110ac + 1);
  v229 = *(float*)&GameData_22110ac;
  if (game_d27d30(*v147)) {
    v231 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    v232 = 0x1.0000000000000p+1f;
    if ((v231 & 1) != 0) {
      v233 = 0x1.0624de0000000p-9f;
    }
    else {
      v233 = 0x1.3333340000000p-2f;
    }
    if ((v231 & 1) == 0) {
      v232 = 0x1.4000000000000p+0f;
    }
    v234 = 0x1.99999a0000000p-4f;
    if ((v231 & 1) != 0) {
      v234 = 0x1.0624de0000000p-9f;
    }
    v229 = game_d27af0(v234, v233, 0x1.e666660000000p-1f, v232),
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
    v230 = v235;
  }
  if (v226 > 0x0.0p+0f &&
      (float)((float)(PSEUDO_UNFUSED(v230 * v230)) + (float)(v229 * v229)) ==
          0x0.0p+0f &&
      (v236 = *(float*)(a1 + 708)) > 0x0.0p+0f) {
    v237 = 0x0.0p+0f;
    v238 = v213 * 0x1.0aef000000000p+4f;
    v239 = 0x0.0p+0f;
    v240 = **(_QWORD**)(a1 + 880);
    if (v240 != 0) {
      v241 = *v20;
      if (*v20 != 0) {
        v242 = *(_QWORD**)(v241 + 8);
        v243 = *(_QWORD**)(v241 + 16);
        v244 = v242;
        if (v242 != v243) {
          v244 = v242;
          while (*v244 != v240) {
            v244 += 2;
            if (v244 == v243) {
              v237 = 0x0.0p+0f;
              goto LABEL_374;
            }
          }
        }
        v237 = 0x0.0p+0f;
        if (v244 != v243) {
          v237 = 0x0.0p+0f;
          v271 = fminf(
              fmaxf(
                  (float)(sqrtf(
                              (float)(PSEUDO_UNFUSED(
                                  *(float*)(*(_QWORD*)(v240 + 16) + 672LL) *
                                  *(float*)(*(_QWORD*)(v240 + 16) + 672LL))) +
                              (float)(*(float*)(*(_QWORD*)(v240 + 16) + 668LL) *
                                      *(float*)(*(_QWORD*)(v240 + 16) +
                                                668LL))) +
                          -0x1.0000000000000p+1f) /
                      0x1.c000000000000p+2f,
                  0x0.0p+0f),
              0x1.0000000000000p+0f);
          v272 = (float)(fminf(fmaxf(v271, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                         0x1.99999a0000000p-1f) +
                 0x1.99999a0000000p-3f;
          if (v271 > 0x0.0p+0f) {
            v271 = v272;
          }
          if (v271 > 0x0.0p+0f) {
            v273 = v236 * *(float*)(a1 + 712);
            if (v242 != v243) {
              while (*v242 != v240) {
                v242 += 2;
                if (v242 == v243) {
                  v274 = 0x0.0p+0f;
                  goto LABEL_373;
                }
              }
            }
            v274 = 0x0.0p+0f;
            if (v242 != v243) {
              v274 = v271;
            }
          LABEL_373:
            v237 = v273 * (float)((float)(fminf(fmaxf(v274, 0x0.0p+0f),
                                                0x1.0000000000000p+0f) *
                                          0x1.0000000000000p-2f) +
                                  0x1.8000000000000p-1f);
          }
        }
      }
    }
  LABEL_374:
    v275 = v238 / 0x1.f400000000000p+9f;
    v276 = *(float*)(a1 + 668);
    v277 = *(_DWORD*)(*(_QWORD*)(a1 + 928) + 192LL);
    if (v277 == 2) {
      v239 = v237 * (float)(*(float*)(a1 + 676) * 0x1.0000000000000p-1f);
      goto LABEL_378;
    }
    if (v277 != 1) {
      goto LABEL_380;
    }
    v239 =
        -(float)(v237 * (float)(*(float*)(a1 + 676) * 0x1.0000000000000p-1f));
  LABEL_378:
    if (v239 < 0x0.0p+0f || v239 > 0x0.0p+0f) {
      v283 = (float)(v276 * 0x1.0000000000000p-1f) * v237;
      v284 = true;
      v285 = (float)(fminf(fmaxf(v226, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                     0x1.9999980000000p+0f) +
             0x1.9999980000000p-3f;
      if (v285 <= 0x1.0000000000000p+0f) {
        v286 = v285;
      }
      else {
        v286 = 0x1.0000000000000p+0f;
      }
      v287 = 0x1.99999a0000000p-4f;
    }
    else {
    LABEL_380:
      v278 = 0x0.0p+0f;
      v279 = 0x0.0p+0f;
      if (v240 != 0) {
        v280 = *v20;
        if (*v20 != 0) {
          v281 = *(_QWORD**)(v280 + 8);
          v282 = *(_QWORD**)(v280 + 16);
          if (v281 != v282) {
            while (*v281 != v240) {
              v281 += 2;
              if (v281 == v282) {
                v279 = 0x0.0p+0f;
                goto LABEL_392;
              }
            }
          }
          v279 = 0x0.0p+0f;
          if (v281 != v282) {
            v279 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v240 + 16) + 488LL) +
                                     32LL) *
                           0x1.ca5dc20000000p+5f) +
                   0x1.6800000000000p+7f;
          }
        }
      }
    LABEL_392:
      v337 = *(float*)(*(_QWORD*)v75 + 160LL);
      v288 = fmodf(*(float*)(a1 + 832) - v279, 0x1.6800000000000p+8f),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v288 >= 0x0.0p+0f) {
        v289 = v288 + 0x0.0p+0f;
      }
      else {
        v289 = (float)(v288 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
      }
      v290 = **(_QWORD**)(a1 + 880);
      if (v289 <= 0x1.6800000000000p+7f) {
        v291 = v289;
      }
      else {
        v291 = v289 + -0x1.6800000000000p+8f;
      }
      if (v290 != 0) {
        v292 = *v20;
        if (*v20 != 0) {
          v293 = *(_QWORD**)(v292 + 8);
          v294 = *(_QWORD**)(v292 + 16);
          if (v293 != v294) {
            while (*v293 != v290) {
              v293 += 2;
              if (v293 == v294) {
                goto LABEL_406;
              }
            }
          }
          if (v293 != v294) {
            v278 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v290 + 16) + 488LL) +
                                     32LL) *
                           0x1.ca5dc20000000p+5f) +
                   0x1.6800000000000p+7f;
          }
        }
      }
    LABEL_406:
      v295 = fmodf(*(float*)(a1 + 832) - v278, 0x1.6800000000000p+8f),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v295 >= 0x0.0p+0f) {
        v296 = v295 + 0x0.0p+0f;
      }
      else {
        v296 = (float)(v295 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
      }
      if (v296 > 0x1.6800000000000p+7f) {
        v296 = v296 + -0x1.6800000000000p+8f;
      }
      v297 =
          (float)(fabsf(v296) / -0x1.2c00000000000p+7f) + 0x1.0000000000000p+0f;
      if (v297 <= 0x1.0000000000000p+0f) {
        v298 = v297;
      }
      else {
        v298 = 0x1.0000000000000p+0f;
      }
      if (v297 >= 0x0.0p+0f) {
        v299 = v298;
      }
      else {
        v299 = 0x0.0p+0f;
      }
      v300 = powf(*(float*)(a1 + 872), 0x1.0000000000000p-1f),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
      v301 = **(_QWORD**)(a1 + 880);
      v302 = (float)(fminf(fmaxf(v299, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                     -0x1.0000000000000p-2f) +
             0x1.0000000000000p+0f;
      v303 = 0x0.0p+0f;
      if (v299 <= 0x0.0p+0f) {
        v302 = v299;
      }
      if (v301 != 0) {
        v304 = *v20;
        if (*v20 != 0) {
          v305 = *(_QWORD**)(v304 + 8);
          v306 = *(_QWORD**)(v304 + 16);
          if (v305 != v306) {
            while (*v305 != v301) {
              v305 += 2;
              if (v305 == v306) {
                v303 = 0x0.0p+0f;
                goto LABEL_429;
              }
            }
          }
          v303 = 0x0.0p+0f;
          if (v305 != v306) {
            v307 = fminf(
                fmaxf(
                    (float)(sqrtf(
                                (float)(PSEUDO_UNFUSED(
                                    *(float*)(*(_QWORD*)(v301 + 16) + 672LL) *
                                    *(float*)(*(_QWORD*)(v301 + 16) + 672LL))) +
                                (float)(*(float*)(*(_QWORD*)(v301 + 16) +
                                                  668LL) *
                                        *(float*)(*(_QWORD*)(v301 + 16) +
                                                  668LL))) +
                            -0x1.0000000000000p+1f) /
                        0x1.c000000000000p+2f,
                    0x0.0p+0f),
                0x1.0000000000000p+0f);
            v308 =
                (float)(fminf(fmaxf(v307, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                        0x1.99999a0000000p-1f) +
                0x1.99999a0000000p-3f;
            if (v307 <= 0x0.0p+0f) {
              v303 = v307;
            }
            else {
              v303 = v308;
            }
          }
        }
      }
    LABEL_429:
      v309 = *(float*)(a1 + 708);
      v310 = fabsf(v291);
      if (v310 < (float)(0x1.e000000000000p+4f / v309) ||
          (v312 = v302 * v303) <= 0x0.0p+0f) {
        *(_DWORD*)(a1 + 852) = 0;
        v315 = 0x0.0p+0f;
      }
      else {
        v313 = fminf(fmaxf(v300, 0x0.0p+0f), 0x1.0000000000000p+0f) + 0x0.0p+0f;
        v314 = *(float*)(a1 + 852) +
               (float)((float)((float)(v337 * 0x1.0aef000000000p+4f) /
                               0x1.f400000000000p+9f) *
                       v313);
        v315 = 0x0.0p+0f;
        *(float*)(a1 + 852) = v314;
        if (v314 > 0x1.99999a0000000p-4f) {
          v311 = 0x1.e000000000000p+4f / v309;
          v316 =
              -(float)((float)(PSEUDO_UNFUSED(v311 * 0x1.3333340000000p+0f)) +
                       (float)((float)(v310 - v311) * 0x1.99999a0000000p-2f));
          if (v291 < 0x0.0p+0f) {
            v316 = (float)(PSEUDO_UNFUSED(v311 * 0x1.3333340000000p+0f)) +
                   (float)((float)(v310 - v311) * 0x1.99999a0000000p-2f);
          }
          v317 = v312 * v316;
          v315 = 0x1.0000000000000p+1f -
                 fminf(fmaxf(v312, 0x0.0p+0f), 0x1.0000000000000p+0f);
          v239 = v313 * (float)(v309 * v317);
        }
      }
      v283 = v276 * 0x1.99999a0000000p-3f;
      if (v239 >= 0x0.0p+0f) {
        v287 = 0x0.0p+0f;
      }
      else {
        v287 = v315;
      }
      v284 = v239 < 0x0.0p+0f;
      if (v239 > 0x0.0p+0f) {
        v284 = true;
        v287 = v315;
      }
      v286 = (float)(fminf(fmaxf(v226, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                     0x1.9999980000000p+0f) +
             0x1.9999980000000p-3f;
    }
    v318 = *(float*)(a1 + 856);
    v319 = v239 * v286;
    v320 = fabsf(v275 * (float)(v283 * v286));
    if (v318 > (float)(v239 * v286)) {
      v318 = v318 - v320;
      if (v318 >= v319) {
        goto LABEL_448;
      }
    LABEL_447:
      v318 = v239 * v286;
      goto LABEL_448;
    }
    if (v318 < (float)(v239 * v286)) {
      v318 = v318 + v320;
      if (v318 > v319) {
        goto LABEL_447;
      }
    }
  LABEL_448:
    v321 = *(float*)(a1 + 860);
    *(float*)(a1 + 856) = v318;
    if (v284) {
      v322 = fabsf(v275 / v287);
      if (v321 <= 0x1.0000000000000p+0f) {
        if (v321 < 0x1.0000000000000p+0f) {
          v321 = v322 + v321;
          if (v321 > 0x1.0000000000000p+0f) {
          LABEL_457:
            v321 = 0x1.0000000000000p+0f;
          }
        }
      }
      else {
        v321 = v321 - v322;
        if (v321 < 0x1.0000000000000p+0f) {
          goto LABEL_457;
        }
      }
    }
    else {
      v323 = fabsf(v275 + v275);
      if (v321 <= 0x0.0p+0f) {
        if (v321 >= 0x0.0p+0f) {
          goto LABEL_461;
        }
        v321 = v323 + v321;
        if (v321 <= 0x0.0p+0f) {
          goto LABEL_461;
        }
      }
      else {
        v321 = v321 - v323;
        if (v321 >= 0x0.0p+0f) {
          goto LABEL_461;
        }
      }
      v321 = 0x0.0p+0f;
    }
  LABEL_461:
    v324 = v318 * v321;
    *(float*)(a1 + 860) = v321;
    if (v324 != 0x0.0p+0f) {
      *(float*)(a1 + 832) = *(float*)(a1 + 832) + (float)(v324 * v275);
    }
  }
  else {
  LABEL_347:
    *(_DWORD*)(a1 + 860) = 0;
    *(_QWORD*)(a1 + 852) = 0;
  }
LABEL_348:
  v245 = *(_DWORD*)(a1 + 832);
  v246 = *(int32x4_t**)(a1 + 912);
  *(float*)(a1 + 964) = fminf(fmaxf(*(float*)(a1 + 836), *(float*)(a1 + 692)),
                              *(float*)(a1 + 696));
  *(_DWORD*)(a1 + 960) = v245;
  v247 = *(_OWORD*)(a1 + 960);
  v248 = *(_QWORD*)v11;
  *((_QWORD*)&v247 + 1) = *(unsigned int*)(a1 + 716);
  *(_OWORD*)(a1 + 960) = v247;
  *(float*)(a1 + 976) = *(float*)(a1 + 664) + *(float*)(v248 + 1008);
  GameRoutine_103f060(v246),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  game_zview_103fb80((__int64)v246),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  v249 = *(float32x4_t**)(LANES128(*(v246)).n128_u64[1] + 880);
  if (LANES128(v249[2]).n128_u8[0] == 1) {
    v250 = v249[1];
    v251 = 5;
  }
  else {
    v251 = 6;
    v250 = vaddq_f32(v246[1], v246[5]);
  }
  v252 = v246[v251];
  v253 = *(float32x4_t**)v11;
  v254 = vaddq_f32(v250, v252);
  LANES128(v246[2]).n128_u64[0] = LANES128(v254).n128_u64[0];
  v255 = v246[2];
  LANES128(v255).n128_u64[1] = LANES128(v254).n128_u32[2];
  v246[2] = v255;
  v246[2] = vaddq_f32(v255, v253[67]);
  v256 = *(_DWORD**)(a1 + 912);
  v257 = *(_QWORD*)(a1 + 896);
  *(_DWORD*)(a1 + 944) = v256[8];
  *(_DWORD*)(a1 + 948) = v256[9];
  v258 = *(_OWORD*)(a1 + 944);
  DWORD2(v258) = v256[10];
  v259 = *(_QWORD*)v75;
  *((_QWORD*)&v258 + 1) = DWORD2(v258);
  *(_OWORD*)(a1 + 944) = v258;
  LODWORD(v258) = *(_DWORD*)(v259 + 160);
  v260 = *(_QWORD*)(v257 + 8);
  v261 =
      (float)(*(float*)&v258 * 0x1.0aef000000000p+4f) / 0x1.f400000000000p+9f;
  v262 = 0x1.0000000000000p+0f;
  *(float*)(v257 + 32) = v261;
  v263 = *(float*)(v260 + 868);
  if (v263 > 0x0.0p+0f) {
    v262 = (float)((float)(fminf(fmaxf(powf(v263, 0x1.0000000000000p-1f),
                                       0x0.0p+0f),
                                 0x1.0000000000000p+0f) *
                           0x1.8000000000000p+1f) +
                   0x1.0000000000000p+0f) +
           0x1.0000000000000p+0f,
    v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  *(float*)(v257 + 36) = v261 * v262;
  game_zview_103db80(v257, v261 * v262),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  game_zview_103e8e0(v257),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  game_zview_103ee50(v257),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  v264 = *(int8x16_t**)(a1 + 928);
  *(float32x4_t*)(a1 + 960) = vaddq_f32(
      *(float32x4_t*)(a1 + 960), *(float32x4_t*)(*(_QWORD*)(a1 + 896) + 16LL));
  if (LANES128(v264[11]).n128_u8[0] == 1) {
    LANES128(v264[11]).n128_u8[0] = 0;
  }
  game_1040540(v264),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  game_10411d0(v264),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s1", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(float, "s1", "=w"));
  v265 = *(_QWORD*)(a1 + 928);
  v267 = *(float32x4_t*)(a1 + 944);
  v266 = *(float32x4_t*)(a1 + 960);
  *(float*)(a1 + 832) = *(float*)(v265 + 60) + *(float*)(a1 + 832);
  *(_DWORD*)(a1 + 980) = *(_DWORD*)(v265 + 92);
  PSEUDO_LOW_LANE128(v268, n128_u32, *(_DWORD*)(v265 + 60));
  v269 = *(_QWORD*)v75;
  *(float32x4_t*)(a1 + 944) = vaddq_f32(v267, *(float32x4_t*)(a1 + 816));
  *(float32x4_t*)(a1 + 960) = vaddq_f32(v266, v268);
  result = *(float*)(a1 + 840) +
           (float)((float)(*(float*)(v269 + 160) * 0x1.0aef000000000p+4f) /
                   0x1.f400000000000p+9f);
  *(float*)(a1 + 840) = result;
  return result;
}

__attribute__((swiftcall)) void game_zview_d33900(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 i;
  _QWORD* result;
  __int128 v6;
  __int128 v7;
  int v8;
  int v9;
  __int64 v10;
  char v11;
  char v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  int v17;
  __int128 v18;
  __int128 v19;
  struct {
    _QWORD v20[2];
    __int128 v21;
    __int128 v22;
    int v23;
    char gap52_[12];
    char v24;
  } v20_;
  struct {
    _BYTE v25[4];
    int v26;
  } v25_;
  __int64 v27;

  v3 = a1;
  for (i = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 600LL); i != 0;
       i = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 600LL)) {
    v3 = *(_QWORD*)(i + 24);
  }
  v27 = 0;
  v25_.v26 = 0;
  v25_.v25[0] = 0;
  result = X8CALL_X0(_QWORD*,
                     game_zview_d33ac0((void*)((__int64)v20_.v20), (_QWORD*)v3,
                                       0, &v27, &v25_.v26, v25_.v25));
  if (v20_.v24 == 1 ||
      (v27 = 0, v25_.v26 = 0, v25_.v25[0] = 0,
       result = X8CALL_X0(_QWORD*, game_zview_d33ac0((void*)((__int64)v20_.v20),
                                                     (_QWORD*)v3, 1u, &v27,
                                                     &v25_.v26, v25_.v25)),
       v20_.v24 == 1)) {
    v6 = v20_.v21;
    v7 = v20_.v22;
    DWORDn(v6, sizeof(v6) / 4 - 1) = 0;
    DWORDn(v7, sizeof(v7) / 4 - 1) = 0;
    v8 = v20_.v23;
    v9 = v25_.v26;
    v10 = v27;
    *(_QWORD*)a2 = v20_.v20[0];
    v11 = v25_.v25[0];
    *(_DWORD*)(a2 + 48) = v8;
    *(_QWORD*)(a2 + 64) = v10;
    *(_DWORD*)(a2 + 72) = v9;
    *(_BYTE*)(a2 + 76) = v11;
    v12 = 1;
    *(_OWORD*)(a2 + 16) = v6;
    *(_OWORD*)(a2 + 32) = v7;
  }
  else if ((*(_BYTE*)(*(_QWORD*)(v3 + 8) + 388LL) & 2) != 0 ||
           *(_BYTE*)(v3 + 256) != 1) {
    if (*(_BYTE*)(v3 + 336) == 1) {
      v15 = *(_OWORD*)(v3 + 288);
      v16 = *(_OWORD*)(v3 + 304);
      DWORDn(v15, sizeof(v15) / 4 - 1) = 0;
      DWORDn(v16, sizeof(v16) / 4 - 1) = 0;
      *(_QWORD*)a2 = *(_QWORD*)(v3 + 272);
      *(_OWORD*)(a2 + 16) = v15;
      *(_OWORD*)(a2 + 32) = v16;
      v17 = *(_DWORD*)(v3 + 320);
    }
    else {
      if (*(_BYTE*)(v3 + 464) != 1) {
        v12 = 0;
        *(_BYTE*)a2 = 0;
        goto LABEL_6;
      }
      v18 = *(_OWORD*)(v3 + 416);
      v19 = *(_OWORD*)(v3 + 432);
      DWORDn(v18, sizeof(v18) / 4 - 1) = 0;
      DWORDn(v19, sizeof(v19) / 4 - 1) = 0;
      *(_QWORD*)a2 = *(_QWORD*)(v3 + 400);
      *(_OWORD*)(a2 + 16) = v18;
      *(_OWORD*)(a2 + 32) = v19;
      v17 = *(_DWORD*)(v3 + 448);
    }
    *(_DWORD*)(a2 + 48) = v17;
    *(_QWORD*)(a2 + 64) = 0;
    v12 = 1;
    *(_DWORD*)(a2 + 72) = 0;
    *(_BYTE*)(a2 + 76) = 0;
  }
  else {
    v13 = *(_OWORD*)(v3 + 208);
    v14 = *(_OWORD*)(v3 + 224);
    DWORDn(v13, sizeof(v13) / 4 - 1) = 0;
    DWORDn(v14, sizeof(v14) / 4 - 1) = 0;
    *(_QWORD*)a2 = *(_QWORD*)(v3 + 192);
    *(_QWORD*)(a2 + 64) = 0;
    *(_DWORD*)(a2 + 72) = 1086918608;
    v12 = 1;
    *(_BYTE*)(a2 + 76) = 1;
    *(_OWORD*)(a2 + 16) = v13;
    *(_OWORD*)(a2 + 32) = v14;
    *(_DWORD*)(a2 + 48) = *(_DWORD*)(v3 + 240);
  }
LABEL_6:
  *(_BYTE*)(a2 + 80) = v12;
  {
    result;
    return;
  }
}

void game_zview_d344a0(__int64 a1)
{
  __int64 v1;
  float32x4_t* v2;
  __int64* v3;
  __int64 v4;
  float32x4_t v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int128 v12;
  unsigned __int32* v13;
  int32x4_t v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  float v19;
  unsigned __int64 v20;
  float32x4_t v21;
  __int64 v22;
  __int64 v23;
  float32x4_t* v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  unsigned __int32 v32;
  int v33;
  float32x4_t v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  double v41;
  double v42;
  int8x16_t v43;
  float32x4_t v44;
  unsigned int v45;
  unsigned __int64 v46;
  unsigned int v47;
  float32x4_t v48;
  int8x16_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  __int64 v53;
  float32x4_t v54;
  float32x4_t v55;
  int8x16_t v56;
  int8x16_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  __int64* v63;
  char v64;
  __int64 v65;
  unsigned __int64 v66;
  double v67;
  double v68;
  double v69;
  int8x16_t v70;
  __int64 v71;
  __int64 v72;
  float32x4_t v73;
  unsigned int v74;
  unsigned __int64 v75;
  unsigned int v76;
  float32x4_t v77;
  int8x16_t v78;
  float32x4_t v79;
  float32x4_t v80;
  int8x16_t v81;
  float32x4_t v82;
  float32x4_t v83;
  int8x16_t v84;
  int8x16_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  bool v100;
  float v101;
  float v102;
  unsigned int v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  unsigned __int64 v112;
  float v113;
  double v114;
  double v115;
  double v116;
  int8x16_t v117;
  __int64 v118;
  float32x4_t v119;
  __int64 v120;
  unsigned int v121;
  unsigned __int64 v122;
  unsigned int v123;
  float32x4_t v124;
  int8x16_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  int8x16_t v131;
  int8x16_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  __int64 v145;
  float v146;
  float v147;
  float v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  float32x4_t v151;
  unsigned __int64 v152;
  float32x4_t v153;
  unsigned __int64 v154;
  struct {
    _QWORD v155[18];
    char v156;
  } v155_;
  float32x4_t v157;
  struct {
    _QWORD v158[2];
    char gap336_[88];
    float v159;
    float v160;
  } v158_;

  v1 = GameData_212dc38[0];
  v2 = *(float32x4_t**)(*(_QWORD*)GameData_212dc38[0] + 976LL);
  if (v2 == nullptr) {
    return;
  }
  v3 = *(__int64**)(a1 + 880);
  v4 = *(_QWORD*)(a1 + 888);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v145 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v145;
    __cxa_guard_release((__int64)&GameData_21a6130);
  }
  v6 = COERCE_AS(float32x4_t, GameData_21a6120);
  v7 = *v3;
  if (*v3 == 0) {
    goto LABEL_13;
  }
  v8 = *GameData_212eba8[0];
  if (*GameData_212eba8[0] == 0) {
    goto LABEL_13;
  }
  v9 = *(_QWORD**)(v8 + 8);
  v10 = *(_QWORD**)(v8 + 16);
  if (v9 != v10) {
    while (*v9 != v7) {
      v9 += 2;
      if (v9 == v10) {
        goto LABEL_13;
      }
    }
  }
  if (v9 != v10) {
    v11 = *(_QWORD*)(v7 + 16);
    v12 = *(_OWORD*)(v11 + 560);
    v13 = (unsigned __int32*)(v11 + 580);
    LANES128(v14).n128_u32[2] = DWORD2(v12);
  }
  else {
  LABEL_13:
    if (*GameData_212eda8[0] == 0) {
      goto LABEL_16;
    }
    v15 = *(_QWORD*)(*GameData_212eda8[0] + 8);
    *(_QWORD*)&v12 = *(_QWORD*)(v15 + 280);
    v13 = (unsigned __int32*)(v15 + 168);
    v14 = vdupq_lane_s32(*(int32x2_t*)&v12, 1);
  }
  LANES128(v6).n128_u32[0] = v12;
  LANES128(v6).n128_u32[1] = *v13;
  LANES128(v6).n128_u64[1] = LANES128(v14).n128_u32[2];
LABEL_16:
  if (v7 == 0) {
    goto LABEL_24;
  }
  v16 = *GameData_212eba8[0];
  if (*GameData_212eba8[0] == 0) {
    goto LABEL_24;
  }
  v17 = *(_QWORD**)(v16 + 8);
  v18 = *(_QWORD**)(v16 + 16);
  if (v17 != v18) {
    while (*v17 != v7) {
      v17 += 2;
      if (v17 == v18) {
        goto LABEL_24;
      }
    }
  }
  if (v17 != v18) {
    v19 = *(float*)(v7 + 560);
  }
  else {
  LABEL_24:
    v19 = 0x1.6666660000000p+0f;
    if (*GameData_212eda8[0] == 0) {
      v19 = 0x0.0p+0f;
    }
  }
  LODWORD(v20) = 0;
  v21 = *v2;
  v22 = *(_QWORD*)(a1 + 880);
  v23 = *(_QWORD*)(a1 + 888);
  v24 = (float32x4_t*)(a1 + 1008);
  *((float*)&v20 + 1) = v19;
  v25 = vaddq_f32(v6, COERCE_AS(float32x4_t, v20));
  v26 = vsubq_f32(*v2, v25);
  v27 = vmulq_f32(v26, v26);
  LANES128(v27).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
          .n64_u64[0];
  LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
  v28 = vrsqrteq_f32(v27);
  v29 = vmulq_f32(v28, vrsqrtsq_f32(v28, vmulq_f32(v27, v28)));
  v30 = vsubq_f32(
      *v2,
      vmulq_n_f32(
          vbicq_s8(
              vmulq_f32(v26,
                        vmulq_f32(v29, vrsqrtsq_f32(v29, vmulq_f32(v27, v29)))),
              vceqzq_f32(v27)),
          LANES128(v2[1]).n128_f32[0]));
  *(_QWORD*)(a1 + 1008) = LANES128(v30).n128_u64[0];
  v31 = *(float32x4_t*)(a1 + 1008);
  LANES128(v31).n128_u64[1] = LANES128(v30).n128_u32[2];
  *(float32x4_t*)(a1 + 1008) = v31;
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
    v31 = *v24;
  }
  if (*(_BYTE*)(v22 + 32) != 0) {
    *(_QWORD*)(v22 + 16) = LANES128(v31).n128_u64[0];
    v30 = *(float32x4_t*)(v22 + 16);
    LANES128(v30).n128_u64[1] = LANES128(v31).n128_u32[2];
    *(float32x4_t*)(v22 + 16) = v30;
    if (v23 == 0) {
      goto LABEL_34;
    }
  LABEL_32:
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v151 = v21;
      v153 = v25;
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak(v23);
      v21 = v151;
      v25 = v153;
    }
    goto LABEL_34;
  }
  *(_BYTE*)(v22 + 32) = 1;
  *(float32x4_t*)(v22 + 16) = v31;
  if (v23 != 0) {
    goto LABEL_32;
  }
LABEL_34:
  *(_DWORD*)(a1 + 544) = LANES128(v2[1]).n128_u32[1];
  *(_DWORD*)(a1 + 488) = LANES128(v2[3]).n128_u32[0];
  v32 = LANES128(v2[3]).n128_u32[1];
  *(_QWORD*)(a1 + 516) = 0x4244000040A00000LL;
  *(_BYTE*)(a1 + 552) = 0;
  *(_DWORD*)(a1 + 492) = 1142292480;
  *(_QWORD*)(a1 + 500) = 0x43C8000042C80000LL;
  *(_DWORD*)(a1 + 512) = 1113325568;
  *(_DWORD*)(a1 + 548) = v32;
  v33 = LANES128(v2[4]).n128_u8[0];
  if ((v33 & 1) == 0) {
    *(_DWORD*)(a1 + 532) = 0;
    *(_QWORD*)(a1 + 524) = 0;
    *(_QWORD*)(a1 + 492) = 0;
    *(_QWORD*)(a1 + 500) = 0;
    *(_QWORD*)(a1 + 508) = 0;
  }
  v34 = vsubq_f32(v25, v21);
  v35 = 0x0.0p+0f;
  v152 = LANES128(v34).n128_u64[0];
  v36 = LANES128(v34).n128_f32[2];
  v37 = vmuls_lane_f32(LANES128(v34).n128_f32[2], v34, 2) +
        (float)(LANES128(v34).n128_f32[0] * LANES128(v34).n128_f32[0]);
  if (v37 > 0x0.0p+0f) {
    if (LANES128(v34).n128_f32[0] == 0x0.0p+0f &&
        LANES128(v34).n128_f32[2] == 0x0.0p+0f) {
      v38 = LANES128(v34).n128_f32[0];
    }
    else {
      LANES128(v34).n128_f32[0] = sqrtf(v37);
      v38 = *(float*)&v152 / LANES128(v34).n128_f32[0];
      v36 = LANES128(v34).n128_f32[2] / LANES128(v34).n128_f32[0];
    }
    v35 = atan2f(v38, v36) * 0x1.ca5dc20000000p+5f;
  }
  if (LANES128(v2[3]).n128_u8[12] == 1) {
    v35 = LANES128(v2[3]).n128_f32[2];
  }
  if ((*(_BYTE*)(a1 + 992) & 1) == 0) {
    if (LANES128(v2[1]).n128_u8[13] == 1) {
      v39 = LANES128(v2[1]).n128_f32[2];
      if (LANES128(v2[1]).n128_u8[12] == 1) {
        v40 = v35 + v39;
      }
      else {
        v40 = v35 - v39;
      }
    LABEL_93:
      *(float*)(a1 + 1024) = v40;
      goto LABEL_94;
    }
    v158_.v160 = *(float*)(a1 + 832);
    v148 = *(float*)(*(_QWORD*)v1 + 1064LL);
    LANES128(v30).n128_u32[0] =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v1 + 976LL) + 20LL);
    v150 = LANES128(v30).n128_u64[0];
    v41 = cos(
        (float)((float)(v35 + 0x1.6800000000000p+6f) * 0x1.1df46a0000000p-6f) *
        0x1.0000000000000p-1);
    v42 = sin(
        (float)((float)(v35 + 0x1.6800000000000p+6f) * 0x1.1df46a0000000p-6f) *
        0x1.0000000000000p-1);
    LANES128(v43).n128_u64[0] = 0;
    LANES128(v44).n128_u64[0] = 0;
    *(float*)&v45 = v41 + PSEUDO_UNFUSED(v42 * 0x0.0p+0);
    *(float*)&v46 = PSEUDO_UNFUSED(v42 * -0x0.0p+0) + v41 * 0x0.0p+0;
    *(float*)&v47 = v42 + PSEUDO_UNFUSED(v41 * 0x0.0p+0);
    LANES128(v48).n128_u64[0] = __PAIR64__(v47, v46);
    LANES128(v48).n128_u64[1] = __PAIR64__(v45, v46);
    v49 = vmulq_f32(v48, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v50).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v43).n128_u64[1] = v150;
    *(int8x8_t*)&LANES128(v44).n128_i8[8] =
        vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v51).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v48).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v50).n128_u64[1] = LANES128(v51).n128_u64[0];
    LANES128(v48).n128_u64[1] = LANES128(v48).n128_u64[0];
    v52 = vmulq_f32(v44, v50);
    v53 = *(_QWORD*)(a1 + 1016);
    v54 = vmlaq_f32(vmulq_f32(v48, v49),
                    COERCE_AS(float32x4_t, GameData_1a83800), v52);
    LANES128(v52).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v158_.v158[0] = LANES128(*(v24)).n128_u64[0];
    v158_.v158[1] = v53;
    LANES128(v51).n128_u64[1] = LANES128(v43).n128_u64[0];
    *(int32x2_t*)&LANES128(v43).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v49).n128_u64[0]), 1);
    v55 = vmlaq_f32(v54, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v43, v52));
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v43).n128_i8[8] =
        vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v49).n128_u64[0] = __PAIR64__(v47, v46);
    HIDWORD(v46) = v45;
    v56 = vmlsq_f32(v55, v43, v51);
    LANES128(v57).n128_u64[0] = __PAIR64__(v47, v46);
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v52).n128_u64[0] = __PAIR64__(v47, v46);
    LANES128(v57).n128_u64[1] = v46;
    *(int8x8_t*)&LANES128(v43).n128_i8[8] =
        vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v58).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v59).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v58).n128_u64[1] = LANES128(v58).n128_u64[0];
    LANES128(v52).n128_u64[1] = LANES128(v59).n128_u64[0];
    LANES128(v59).n128_u64[1] = LANES128(v57).n128_u64[0];
    LANES128(v57).n128_u64[1] = LANES128(v49).n128_u64[0];
    v60 =
        vmlaq_f32(vmulq_f32(v58, v56), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v52, v43));
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v43).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v56).n128_u64[0]), 1);
    v61 = vmlaq_f32(v60, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v57, v43));
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v62 = vmlsq_f32(v61, v57, v59);
    LANES128(v62).n128_u32[3] = 0;
    v157 = vaddq_f32(*v24, v62);
    v63 = GameData_212ebd0[0];
    game_zview_d163f0((void*)(v155_.v155), *GameData_212ebd0[0], v158_.v158,
                      &v157, 0x100000000LL, 0, v148);
    v64 = v155_.v156;
    v65 = *(_QWORD*)(*(_QWORD*)v1 + 976LL);
    v158_.v159 = *(float*)(*(_QWORD*)v1 + 1064LL);
    LODWORD(v66) = *(_DWORD*)(v65 + 20);
    v149 = v66;
    v67 =
        (float)((float)(v35 + -0x1.6800000000000p+6f) * 0x1.1df46a0000000p-6f) *
        0x1.0000000000000p-1;
    v68 = cos(v67);
    v69 = sin(v67);
    LANES128(v70).n128_u64[0] = 0;
    v71 = *(_QWORD*)(a1 + 1016);
    v72 = *v63;
    LANES128(v73).n128_u64[0] = 0;
    v158_.v158[0] = LANES128(*(v24)).n128_u64[0];
    v158_.v158[1] = v71;
    *(float*)&v74 = v68 + PSEUDO_UNFUSED(v69 * 0x0.0p+0);
    *(float*)&v75 = PSEUDO_UNFUSED(v69 * -0x0.0p+0) + v68 * 0x0.0p+0;
    *(float*)&v76 = v69 + PSEUDO_UNFUSED(v68 * 0x0.0p+0);
    LANES128(v77).n128_u64[0] = __PAIR64__(v76, v75);
    LANES128(v77).n128_u64[1] = __PAIR64__(v74, v75);
    v78 = vmulq_f32(v77, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v70).n128_u64[1] = v149;
    *(int8x8_t*)&LANES128(v73).n128_i8[8] =
        vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v79).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v77).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v80).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v81 = v70;
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v70).n128_u64[1] = LANES128(v80).n128_u64[0];
    LANES128(v77).n128_u64[1] = LANES128(v77).n128_u64[0];
    v82 =
        vmlaq_f32(vmulq_f32(v77, v78), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v73, v70));
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v80).n128_u64[1] = LANES128(v70).n128_u64[0];
    *(int32x2_t*)&LANES128(v70).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v78).n128_u64[0]), 1);
    v83 = vmlaq_f32(v82, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v70, v79));
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v70).n128_i8[8] =
        vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v78).n128_u64[0] = __PAIR64__(v76, v75);
    HIDWORD(v75) = v74;
    v84 = vmlsq_f32(v83, v70, v80);
    LANES128(v85).n128_u64[0] = __PAIR64__(v76, v75);
    LANES128(v80).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v79).n128_u64[0] = __PAIR64__(v76, v75);
    LANES128(v85).n128_u64[1] = v75;
    *(int8x8_t*)&LANES128(v80).n128_i8[8] =
        vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v86).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v87).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v86).n128_u64[1] = LANES128(v86).n128_u64[0];
    LANES128(v79).n128_u64[1] = LANES128(v87).n128_u64[0];
    LANES128(v87).n128_u64[1] = LANES128(v85).n128_u64[0];
    LANES128(v85).n128_u64[1] = LANES128(v78).n128_u64[0];
    v88 =
        vmlaq_f32(vmulq_f32(v86, v84), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v79, v80));
    LANES128(v80).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v80).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v84).n128_u64[0]), 1);
    v89 = vmlaq_f32(v88, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v85, v80));
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v85).n128_i8[8] =
        vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v90 = vmlsq_f32(v89, v85, v87);
    LANES128(v90).n128_u32[3] = 0;
    v157 = vaddq_f32(*v24, v90);
    v91 = v158_.v160;
    game_zview_d163f0((void*)(v155_.v155), v72, v158_.v158, &v157,
                      0x100000000LL, 0, v158_.v159);
    if ((v155_.v156 & 1) != 0) {
      v92 = v91;
      if ((v64 & 1) == 0) {
        v92 = v35 + LANES128(v2[1]).n128_f32[2];
      }
    }
    else {
      v93 = LANES128(v2[1]).n128_f32[2];
      if ((v64 & 1) != 0) {
        v91 = v158_.v160;
        v92 = v35 - v93;
      }
      else {
        v94 = v158_.v160;
        v95 = fmodf(v158_.v160 - (float)(v35 + v93), 0x1.6800000000000p+8f);
        if (v95 >= 0x0.0p+0f) {
          v96 = v95 + 0x0.0p+0f;
        }
        else {
          v96 = (float)(v95 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
        }
        if (v96 <= 0x1.6800000000000p+7f) {
          v97 = v96;
        }
        else {
          v97 = v96 + -0x1.6800000000000p+8f;
        }
        v98 = fmodf(v94 - (float)(v35 - LANES128(v2[1]).n128_f32[2]),
                    0x1.6800000000000p+8f);
        if (v98 >= 0x0.0p+0f) {
          v99 = v98 + 0x0.0p+0f;
        }
        else {
          v99 = (float)(v98 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
        }
        v91 = v94;
        if (v99 > 0x1.6800000000000p+7f) {
          v99 = v99 + -0x1.6800000000000p+8f;
        }
        v100 = fabsf(v99) < fabsf(v97);
        v101 = 0x1.0000000000000p+0f;
        if (v100) {
          v101 = -0x1.0000000000000p+0f;
        }
        v92 = v35 + (float)(LANES128(v2[1]).n128_f32[2] * v101);
      }
    }
    *(float*)(a1 + 1024) = v92;
    if (vabds_f32(v91, v92) > 0x1.0000000000000p-23f) {
      v102 = fmodf(v91 - v92, 0x1.6800000000000p+8f);
      v103 = 0;
      v158_.v159 = -0x1.6800000000000p+8f;
      if (v102 >= 0x0.0p+0f) {
        v104 = v102 + 0x0.0p+0f;
      }
      else {
        v104 = (float)(v102 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
      }
      if (v104 <= 0x1.6800000000000p+7f) {
        v105 = v104;
      }
      else {
        v105 = v104 + -0x1.6800000000000p+8f;
      }
      v146 = v92 - v91;
      v147 = v105;
      do {
        v106 = fmodf(v146, 0x1.6800000000000p+8f);
        if (v106 >= 0x0.0p+0f) {
          v107 = v106 + 0x0.0p+0f;
        }
        else {
          v107 = (float)(v106 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
        }
        v108 = fabsf(v147 * (float)((float)v103 / 0x1.8000000000000p+2f));
        if (v107 > 0x1.6800000000000p+7f) {
          v107 = v107 + v158_.v159;
        }
        v109 = v91 + v107;
        if (v91 <= v109) {
          v110 = v91;
          if (v91 < v109) {
            v110 = v91 + v108;
            if ((float)(v91 + v108) > v109) {
            LABEL_86:
              v110 = v109;
            }
          }
        }
        else {
          v110 = v91 - v108;
          if ((float)(v91 - v108) < v109) {
            goto LABEL_86;
          }
        }
        v111 = fmodf(v110 + 0x1.6800000000000p+7f, 0x1.6800000000000p+8f) +
               -0x1.6800000000000p+7f;
        if (v111 < -0x1.6800000000000p+7f) {
          v111 = v111 + 0x1.6800000000000p+8f;
        }
        v113 = *(float*)(*(_QWORD*)v1 + 1064LL);
        LODWORD(v112) = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v1 + 976LL) + 20LL);
        v154 = v112;
        v114 = (float)(v111 * 0x1.1df46a0000000p-6f) * 0x1.0000000000000p-1;
        v115 = cos(v114);
        v116 = sin(v114);
        LANES128(v117).n128_u64[0] = 0;
        v118 = *(_QWORD*)(a1 + 1016);
        LANES128(v119).n128_u64[0] = 0;
        v120 = *v63;
        v158_.v158[0] = LANES128(*(v24)).n128_u64[0];
        v158_.v158[1] = v118;
        *(float*)&v121 = v115 + PSEUDO_UNFUSED(v116 * 0x0.0p+0);
        *(float*)&v122 = PSEUDO_UNFUSED(v116 * -0x0.0p+0) + v115 * 0x0.0p+0;
        *(float*)&v123 = v116 + PSEUDO_UNFUSED(v115 * 0x0.0p+0);
        LANES128(v124).n128_u64[0] = __PAIR64__(v123, v122);
        LANES128(v124).n128_u64[1] = __PAIR64__(v121, v122);
        v125 = vmulq_f32(v124, COERCE_AS(float32x4_t, GameData_1a829d0));
        LANES128(v126).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v117).n128_u64[1] = v154;
        *(int8x8_t*)&LANES128(v119).n128_i8[8] =
            vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        LANES128(v127).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v124).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v117).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v126).n128_u64[1] = LANES128(v127).n128_u64[0];
        LANES128(v124).n128_u64[1] = LANES128(v124).n128_u64[0];
        LANES128(v127).n128_u64[1] = LANES128(v117).n128_u64[0];
        *(int32x2_t*)&LANES128(v117).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v125).n128_u64[0]), 1);
        v128 = vmulq_f32(v119, v126);
        v129 = vmlaq_f32(vmulq_f32(v124, v125),
                         COERCE_AS(float32x4_t, GameData_1a83800), v128);
        LANES128(v128).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v130 = vmlaq_f32(v129, COERCE_AS(float32x4_t, GameData_1a83800),
                         vmulq_f32(v117, v128));
        LANES128(v117).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v117).n128_i8[8] =
            vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        LANES128(v125).n128_u64[0] = __PAIR64__(v123, v122);
        HIDWORD(v122) = v121;
        v131 = vmlsq_f32(v130, v117, v127);
        LANES128(v132).n128_u64[0] = __PAIR64__(v123, v122);
        LANES128(v117).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v131, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v128).n128_u64[0] = __PAIR64__(v123, v122);
        LANES128(v132).n128_u64[1] = v122;
        *(int8x8_t*)&LANES128(v117).n128_i8[8] =
            vqtbl1_s8(v131, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        LANES128(v133).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v132, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v134).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v132, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v132).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v132, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v133).n128_u64[1] = LANES128(v133).n128_u64[0];
        LANES128(v128).n128_u64[1] = LANES128(v134).n128_u64[0];
        LANES128(v134).n128_u64[1] = LANES128(v132).n128_u64[0];
        LANES128(v132).n128_u64[1] = LANES128(v125).n128_u64[0];
        v135 = vmlaq_f32(vmulq_f32(v133, v131),
                         COERCE_AS(float32x4_t, GameData_1a83800),
                         vmulq_f32(v128, v117));
        LANES128(v117).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v131, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v117).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v131).n128_u64[0]), 1);
        v136 = vmlaq_f32(v135, COERCE_AS(float32x4_t, GameData_1a83800),
                         vmulq_f32(v132, v117));
        LANES128(v132).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v131, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v132).n128_i8[8] =
            vqtbl1_s8(v131, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v137 = vmlsq_f32(v136, v132, v134);
        LANES128(v137).n128_u32[3] = 0;
        v157 = vaddq_f32(*v24, v137);
        game_zview_d163f0((void*)(v155_.v155), v120, v158_.v158, &v157,
                          0x100000000LL, 0, v113);
        if ((v155_.v156 & 1) != 0) {
          v40 = v158_.v160;
          goto LABEL_93;
        }
        v91 = v158_.v160;
        ++v103;
      } while (v103 != 7);
    }
  }
LABEL_94:
  if (v33 == 0 || (*(_BYTE*)(a1 + 992) & 1) == 0) {
    *(_DWORD*)(a1 + 832) = *(_DWORD*)(a1 + 1024);
  }
  v138 = sqrtf(v37);
  v139 = *((float*)&v152 + 1);
  v140 = (float)(PSEUDO_UNFUSED(v138 * v138)) + (float)(v139 * v139);
  v141 = 0x0.0p+0f;
  if (v140 > 0x0.0p+0f) {
    if (*((float*)&v152 + 1) != 0x0.0p+0f || v37 != 0x0.0p+0f) {
      v142 = sqrtf(v140);
      v139 = *((float*)&v152 + 1) / v142;
      v138 = v138 / v142;
    }
    v141 = atan2f(v139, v138) * 0x1.ca5dc20000000p+5f;
  }
  if (LANES128(v2[2]).n128_u8[4] == 1) {
    v141 = LANES128(v2[2]).n128_f32[0];
  }
  if (v33 != 0) {
    if ((*(_BYTE*)(a1 + 992) & 1) == 0) {
      *(float*)(a1 + 836) = v141;
    }
    v143 = *(float*)(a1 + 492);
    *(_DWORD*)(a1 + 516) = -1049624576;
    *(float*)(a1 + 492) = v143 * 0x1.6666660000000p-1f;
    *(float*)(a1 + 500) = *(float*)(a1 + 500) * 0x1.6666660000000p-1f;
    *(float*)(a1 + 504) = *(float*)(a1 + 504) * 0x1.6666660000000p-1f;
    *(float*)(a1 + 512) = *(float*)(a1 + 512) * 0x1.6666660000000p-1f;
  }
  else {
    *(float*)(a1 + 836) = v141;
    *(float*)(a1 + 516) = v141;
    *(float*)(a1 + 520) = v141;
  }
  v144 = game_zview_d21160(a1);
  *(_BYTE*)(a1 + 992) = 1;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, float))(*(_QWORD*)v4 + 16LL))(v4, v144);
    std___1___shared_weak_count___release_weak(v4);
  }
}

float game_zview_d4f350(__int64 a1, __int64 a2)
{
  float v2;
  float v3;
  float v4;
  __int64 v5;
  __int64 v6;
  float result;
  float v8;
  float v9;
  int v10;
  float v11;

  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((*(_BYTE*)(a2 + 1) & 4) == 0 ||
      (*(_BYTE*)((v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL)) + 96) & 1) != 0 ||
      (*(_BYTE*)(v5 + 176) & 1) != 0 ||
      (v6 = a1, result = game_d26b60(*GameData_212ed08[0]), a1 = v6,
       (float)((float)(PSEUDO_UNFUSED(v8 * v8)) + (float)(result * result)) <=
           0x0.0p+0f)) {
    v2 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL) + 488LL) +
                   32LL) +
         0x0.0p+0f;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                              memory_order_acquire) &
         1) == 0) {
      v11 = v2;
      v10 = __cxa_guard_acquire((__int64)&GameData_22110c8),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
      v2 = v11;
      if (v10 != 0) {
        GameData_22110c0 = 0x3F80000000000000LL;
        __cxa_guard_release((__int64)&GameData_22110c8),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
        v2 = v11;
      }
    }
    v3 = v2 +
         (float)(roundf(v2 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (!(v3 > 0x1.921fb60000000p+0f)) {
      v9 = 0x1.0000000000000p+0f;
      if (!(v3 < -0x1.921fb60000000p+0f)) {
        return (float)(PSEUDO_UNFUSED(
                   (float)(v3 *
                           (float)((float)((float)-(
                                               float)(*(float*)((char*)((
                                                                    __int128*)0x10LL) +
                                                                (_QWORD)
                                                                    GameData_212c190) -
                                                      (float)((float)(*(float*)((char*)((
                                                                                    _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                    GameData_212c190 +
                                                                                4) +
                                                                      (float)((float)-(
                                                                                  float)(*(float*)((char*)((
                                                                                                       _UNKNOWN**)0x8LL) +
                                                                                                   (_QWORD)
                                                                                                       GameData_212c190) -
                                                                                         (float)((float)(*((float*)
                                                                                                               GameData_212c190 +
                                                                                                           1) -
                                                                                                         (float)(*(float*)
                                                                                                                     GameData_212c190 *
                                                                                                                 (float)(v3 *
                                                                                                                         v3))) *
                                                                                                 (float)(v3 *
                                                                                                         v3))) *
                                                                              (float)(v3 *
                                                                                      v3))) *
                                                              (float)(v3 *
                                                                      v3))) *
                                           (float)(v3 * v3)) +
                                   0x1.0000000000000p+0f)) *
                   *((float*)&GameData_22110c0 + 1))) +
               (float)(*(float*)&GameData_22110c0 * (float)(v9 *
                                                            (float)((
                                                                        float)((
                                                                                   float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188) - (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                              (_QWORD)
                                                                                                                                                                                                                                                                                                  GameData_212c188) -
                                                                                                                                                                                                                                                                                    (float)((float)(*((float*)GameData_212c188 + 1) - (float)(*(float*)GameData_212c188 * (float)(v3 *
                                                                                                                                                                                                                                                                                                                                                                                  v3))) *
                                                                                                                                                                                                                                                                                            (float)(v3 *
                                                                                                                                                                                                                                                                                                    v3))) *
                                                                                                                                                                                                                                                                    (float)(v3 *
                                                                                                                                                                                                                                                                            v3))) *
                                                                                                                                                                             (float)(v3 *
                                                                                                                                                                                     v3))) *
                                                                               (float)(v3 *
                                                                                       v3)) +
                                                                    0x1.0000000000000p+0f)));
      }
      v4 = -0x1.921fb60000000p+1f;
    }
    else {
      v4 = 0x1.921fb60000000p+1f;
    }
    v3 = v4 - v3;
    v9 = -0x1.0000000000000p+0f;
    return (float)(PSEUDO_UNFUSED(
               (float)(v3 *
                       (float)((float)((float)-(
                                           float)(*(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                            (_QWORD)
                                                                GameData_212c190) -
                                                  (float)((float)(*(float*)((char*)((
                                                                                _UNKNOWN**)0x8LL) +
                                                                            (_QWORD)
                                                                                GameData_212c190 +
                                                                            4) +
                                                                  (float)((float)-(
                                                                              float)(*(float*)((char*)((
                                                                                                   _UNKNOWN**)0x8LL) +
                                                                                               (_QWORD)
                                                                                                   GameData_212c190) -
                                                                                     (float)((float)(*((float*)
                                                                                                           GameData_212c190 +
                                                                                                       1) -
                                                                                                     (float)(*(float*)
                                                                                                                 GameData_212c190 *
                                                                                                             (float)(v3 *
                                                                                                                     v3))) *
                                                                                             (float)(v3 *
                                                                                                     v3))) *
                                                                          (float)(v3 *
                                                                                  v3))) *
                                                          (float)(v3 * v3))) *
                                       (float)(v3 * v3)) +
                               0x1.0000000000000p+0f)) *
               *((float*)&GameData_22110c0 + 1))) +
           (float)(*(float*)&GameData_22110c0 *
                   (float)(v9 *
                           (float)((
                                       float)((float)-(
                                                  float)(*(float*)((char*)((
                                                                       __int128*)0x10LL) +
                                                                   (_QWORD)
                                                                       GameData_212c188) -
                                                         (float)((
                                                                     float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                      (_QWORD)GameData_212c188 +
                                                                                      4) +
                                                                            (float)((
                                                                                        float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188) - (float)((float)(*((float*)
                                                                                                                                                                                                GameData_212c188 +
                                                                                                                                                                                            1) -
                                                                                                                                                                                          (float)(*(float*)
                                                                                                                                                                                                      GameData_212c188 *
                                                                                                                                                                                                  (float)(v3 * v3))) *
                                                                                                                                                                                  (float)(v3 *
                                                                                                                                                                                          v3))) *
                                                                                    (float)(v3 *
                                                                                            v3))) *
                                                                 (float)(v3 *
                                                                         v3))) *
                                              (float)(v3 * v3)) +
                                   0x1.0000000000000p+0f)));
  }
  return result;
}

#pragma GCC visibility pop
