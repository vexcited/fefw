#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* CharacterRotate_d50180(__int64);
_QWORD* GameRoutine_d78b40(__int64*, _QWORD*);
__attribute__((swiftcall)) void game_d74a00(PSEUDO_X8, float*);
__attribute__((swiftcall)) void game_zview_d13080(PSEUDO_X8,
                                                  float32x4_t* result, float*,
                                                  char, float, float, float);
__attribute__((swiftcall)) void game_zview_d24620(PSEUDO_X8);
__attribute__((swiftcall)) void game_zview_d33900(PSEUDO_X8, __int64);
__int64 CharacterController_d15100(float*, char);
__int64 CharacterModel_cf4c10(__int64);
__int64 CharacterModel_cf5c00(__int64);
__int64 CharacterModel_d198c0(_QWORD*, float32x2_t*, char, char);
__int64 GameRoutine_d2cec0(int);
__int64 GameRoutine_d78880(__int64 result, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
bool game_zview_d13480(__int64, float);
__int64 game_zview_d148e0(float32x4_t*, char);
bool game_zview_d16b40(float, double, double, double, double, double,
                          long double, __int64, __int64, __int128*,
                          unsigned __int64*, __int64);
bool game_zview_d17160(float, __int64, __int64, float32x4_t*, float32x4_t*);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool CharacterController_d42740(_QWORD*, float32x4_t**, int*);
bool llvm_libcxx_21_libcxx_include___memory_d2d4e0(__int64 a1);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN GameData_22110b8;
extern _UNKNOWN GameData_22110c8;
extern __int64 (*GameData_1fdaba8[])();
extern __int64 (*GameData_1fdabf8[])();
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ebd0[3];
extern __int64 GameData_212d310;
extern __int64 GameData_21a60e0;
extern __int64 GameData_22110c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
float GameRoutine_1a09fb0(float);
float GameRoutine_1a0a550(float, float);
float GameRoutine_1a0a6a0(float, float);
float GameRoutine_1a0ab40(float, float);
float game_d96860(_QWORD*, float*, float);
int __cxa_guard_acquire(__int64);
typedef __int64 GameAlign_22110ac __attribute__((aligned(4)));
extern GameAlign_22110ac GameData_22110ac;
void CharacterRotate_d50de0(__int64);
void GameRoutine_d132c0(__int64*, int*);
void GameRoutine_d96580(__int64*, int, int, int);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_d13ce0();
void __cxa_guard_release(__int64);
void game_cfc7c0(__int64, float*, char, float);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_zview_d0eb60(unsigned __int64 a1);
typedef __int64 GameAlign_22110ac __attribute__((aligned(4)));
extern GameAlign_22110ac GameData_22110ac_alt1;

void game_zview_d0eb60(unsigned __int64 a1)
{
  __int128 v1;
  __int128 v3;
  float32x4_t* v4;
  __int64 v5;
  __int64 v6;
  __int128 v7;
  __int64 v8;
  __int64 v9;
  _OWORD* v10;
  __int64 v11;
  __int64 v12;
  float* v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  long double v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  long double v25;
  __int64 v26;
  float v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float* v32;
  __int64 v33;
  unsigned __int64 v34;
  float v35;
  float v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  float v40;
  __int64 v41;
  float* v42;
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
  char v53;
  __int64 v54;
  __int64 v55;
  float v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  char v68;
  float v69;
  float v70;
  _BOOL4 v71;
  bool v72;
  __int64 v73;
  __int64* v74;
  unsigned __int64 v75;
  __int64* v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64* v79;
  __int64 v80;
  float v81;
  __int64* v82;
  __int64* v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64* v86;
  __int64 v87;
  float v88;
  float v89;
  float v90;
  float v91;
  __int64 v92;
  __int64 v93;
  float v94;
  float v95;
  float v96;
  __int64* v97;
  __int64 v98;
  __int64 v99;
  float v100;
  __int64 v101;
  float* v102;
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
  int v113;
  float v114;
  unsigned int v115;
  int v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float* v121;
  float* v122;
  float* v123;
  char v124;
  float v125;
  __int64 v126;
  __int64 v127;
  float v128;
  float v129;
  float v130;
  unsigned __int64 v131;
  long double* v132;
  int v133;
  int v134;
  int v135;
  __int128 v136;
  float v137;
  float* v138;
  float* v139;
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
  __int64 v167;
  float v168;
  __int64** v169;
  float v170;
  __int64* v171;
  __int64* v172;
  __int64 v173;
  __int64 v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
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
  float v202;
  float v203;
  float v204;
  float v205;
  float v206;
  float v207;
  float v208;
  float v209;
  float v210;
  float v211;
  float v212;
  float v213;
  float v214;
  float v215;
  float v216;
  float v217;
  float v218;
  char v219;
  float v220;
  float v221;
  float v222;
  float v223;
  float v224;
  float v225;
  float32x4_t v226;
  __int64 v227;
  float v228;
  float v229;
  float v230;
  __int64 v231;
  __int64 v232;
  float v233;
  float v234;
  __int64 v235;
  float* v236;
  float v237;
  float v238;
  float v239;
  float v240;
  float v241;
  __int64 v242;
  float v243;
  __int64 v244;
  __int64* v245;
  float v246;
  float v247;
  float v248;
  __int64* v249;
  __int64* v250;
  float32x4_t v251;
  float32x4_t v252;
  __int64 v253;
  int v254;
  float32x4_t* v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64* v262;
  unsigned __int64 v263;
  __int64 v264;
  __int64 v265;
  int v266;
  bool v267;
  __int64 v268;
  float* v269;
  __int64 v270;
  unsigned __int64 v271;
  float32x4_t v272;
  double v273;
  __int64 v274;
  float v275;
  unsigned __int64* v276;
  unsigned __int64 v277;
  _BOOL4 v278;
  _BOOL4 v279;
  __int64 v280;
  __int64 v281;
  int v282;
  float v283;
  float v284;
  float v285;
  float v286;
  float v287;
  float v288;
  float v289;
  float v290;
  float v291;
  float v292;
  float v293;
  float v294;
  __int64* v295;
  int v296;
  int v297;
  float v298;
  unsigned __int32 v299;
  int v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64* v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  int32x2_t* v311;
  float v312;
  __int64 v313;
  int v314;
  int v315;
  int v316;
  float v317;
  float v318;
  float v319;
  float v320;
  float v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  float v326;
  __int64 v327;
  unsigned __int64 v328;
  __int128 v329;
  __int64* v330;
  float v331;
  float v332;
  __int64 v333;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  int v339;
  __int64 v340;
  __int64 v341;
  float v342;
  float* v343;
  unsigned __int64 v344;
  float v345;
  float v346;
  float* v347;
  __int64 v348;
  __int64 v349;
  __int64 v350;
  char* v351;
  __int64 v352;
  unsigned __int64 v353;
  __int64 v354;
  unsigned __int64 v355;
  __int64 v356;
  __int64 v357;
  float* v358;
  unsigned __int64 v359;
  float* v360;
  char* v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  float v365;
  float v366;
  float v367;
  float v368;
  __int64 v369;
  __int64* v370;
  __int64 v371;
  __int64 v372;
  float v373;
  __int64 v374;
  float* v375;
  float v376;
  float v377;
  float v378;
  float v379;
  float v380;
  float v381;
  float v382;
  float v383;
  float v384;
  char* v385;
  char* v386;
  unsigned __int64 v387;
  float v388;
  float v389;
  float v390;
  float v391;
  float v392;
  float v393;
  __int64 v394;
  __int64 v395;
  __int64 v396;
  char* v397;
  char* v398;
  int v399;
  __int64 v400;
  float v401;
  float v402;
  float v403;
  bool v404;
  float v405;
  float v406;
  float v407;
  float v408;
  float* v409;
  float* v410;
  float v411;
  float v412;
  __int64 v413;
  float v414;
  float v415;
  float v416;
  float v417;
  float v418;
  float v419;
  float v420;
  __int64 v421;
  float* v422;
  __int64 v423;
  __int64 v424;
  __int64 v425;
  _QWORD* v426;
  __int64 v427;
  _QWORD* v428;
  __int64 v429;
  __int64 v430;
  char v431;
  __int64 v432;
  __int64 v433;
  __int64 v434;
  __int64 v435;
  __int64 v436;
  float v437;
  __int64 v438;
  float v439;
  int v440;
  __int128 v441;
  __int128 v442;
  unsigned __int64 v443;
  __int64 v444;
  __int128 v445;
  __int128 v446;
  float v447;
  int v448;
  __int128 v449;
  __int128 v450;
  __int64 v451;
  __int64 v452;
  int v453;
  float v454;
  float v455;
  float v456;
  float v457;
  float v458;
  unsigned __int64 v459;
  __int128 v460;
  float v461;
  float v462;
  float v463;
  float v464;
  float v465;
  float v466;
  float v467;
  float v468;
  float v469;
  float v470;
  float v471;
  float v472;
  float v473;
  float v474;
  float v475;
  float v476;
  float v477;
  float v478;
  float v479;
  float v480;
  float v481;
  float v482;
  int v483;
  float v484;
  float v485;
  float v486;
  float v487;
  float v488;
  __int64 v489;
  float v490;
  unsigned int v491;
  float32x4_t v492;
  __int64 v493;
  __int64* v494;
  signed __int64 v495;
  __int64 v496;
  float v497;
  float v498;
  __int64 v499;
  float v500;
  float v501;
  float v502;
  float v503;
  float v504;
  int v505;
  __int64 v506;
  float v507;
  float v508;
  float v509;
  float v510;
  float v511;
  float v512;
  float v513;
  float v514;
  float v515;
  float v516;
  float v517;
  float v518;
  float v519;
  float v520;
  float v521;
  float v522;
  float v523;
  float v524;
  float v525;
  float v526;
  float v527;
  float v528;
  float v529;
  float v530;
  float v531;
  float v532;
  float v533;
  float v534;
  __int128 v535;
  float v536;
  int v537;
  struct {
    char gap0_[72];
    unsigned __int32 v538;
    int v539;
    __int64 v540;
    __int64 v541;
    unsigned __int64 v542;
    __int64 v543;
    char gap112_[32];
    float32x4_t v546;
    __int64 v547;
    char gap168_[8];
    float32x2_t v548;
    unsigned __int64* v549;
    __int128 v550;
    __int128 v551;
    __int64* v552;
    __int64 v553;
    _QWORD v554[2];
    unsigned __int8 v555;
  } f_;
  int8x16_t v544;
  float32x4_t v545;

  v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
  v1 = *(_OWORD*)(a1 + 560);
  *(_QWORD*)(a1 + 336) = v1;
  v3 = *(_OWORD*)(a1 + 336);
  *((_QWORD*)&v3 + 1) = DWORD2(v1);
  *(_DWORD*)(a1 + 676) = *(_DWORD*)(a1 + 668);
  {
    __typeof__(v1) z_ = (__typeof__(v1)){0};
    LODWORD(z_) = *(_DWORD*)(a1 + 672);
    v1 = z_;
  }
  *(_OWORD*)(a1 + 336) = v3;
  *(_DWORD*)(a1 + 680) = v1;
  v4 = *(float32x4_t**)(a1 + 448);
  if (v4 != nullptr) {
    v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 600LL);
    if (v5 != 0) {
      game_zview_d148e0(v4,
                        (*(_DWORD*)(*(_QWORD*)(v5 + 16) + 128LL) & 0x10) != 0),
          v321 =
              COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      v6 = *(_QWORD*)(a1 + 448);
      if ((*(_BYTE*)(v6 + 113) & 1) != 0 ||
          *(_BYTE*)(v6 + 112) == 1 && *(float*)(v6 + 80) == 0x0.0p+0f) {
        CharacterController_d15100(*(float**)(a1 + 448), 0),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        if ((*(_BYTE*)(v6 + 20) & 1) != 0) {
          *(_QWORD*)&v7 = *(_QWORD*)(v6 + 8);
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL) + 64LL) =
              *(_DWORD*)(a1 + 364);
          v8 = DWORD1(v7);
          DWORD1(v7) = *(_DWORD*)(a1 + 576);
          *((_QWORD*)&v7 + 1) = v8;
          v535 = v7;
          v9 = fw_memory_g_heap_manager_ptr;
          v10 = (_OWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0),
          v321 =
              COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
          LANES64(f_.v548).n64_u64[0] = (unsigned __int64)v10;
          *v10 = v535;
          f_.v549 = (unsigned __int64*)(v10 + 1);
          *(_QWORD*)&f_.v550 = v10 + 1;
          v11 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL);
          *(_QWORD*)(v11 + 20) = 0x3F8000003F800000LL;
          *(_BYTE*)(v11 + 32) = 0;
          *(_DWORD*)(v11 + 28) = 1065353216;
          LANES128(f_.v546).n128_u32[0] = 1;
          CharacterController_d42740((_QWORD*)v11, (float32x4_t**)&f_.v548,
                                     (int*)&f_.v546),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          v12 = 128;
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v12, (__int64)v10),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
        }
      }
      v13 = *(float**)(a1 + 448);
      v14 = v13[31];
      v15 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL);
      v16 = fmaxf(v13[16], 0x0.0p+0f);
      v17 = fmaxf(v13[17], 0x0.0p+0f);
      if (!(v14 > 0x1.0000000000000p+0f)) {
        v18 = v13[31];
      }
      else {
        v18 = 0x1.0000000000000p+0f;
      }
      v19 = fminf(v16, 0x1.0000000000000p+0f);
      v20 = fminf(v17, 0x1.0000000000000p+0f);
      *(_BYTE*)(v15 + 32) = *(_DWORD*)(v15 + 32);
      if (v14 < 0x1.0000000000000p-1f) {
        v18 = 0x1.0000000000000p-1f;
      }
      *(float*)(v15 + 20) = v14;
      *(float*)(v15 + 24) = v18 * (float)((float)(v19 * 0x1.9999980000000p-3f) +
                                          0x1.99999a0000000p-1f);
      *(float*)(v15 + 28) = v18 * (float)((float)(v20 * 0x1.9999980000000p-3f) +
                                          0x1.99999a0000000p-1f);
    }
  }
  CharacterModel_cf4c10(a1 + 16),
      v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
  v26 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v26 + 300) == 1) {
    *(_DWORD*)(v26 + 288) = *(_DWORD*)(v26 + 288) & 0xFFFFFFFD |
                            (2 * ((*(_DWORD*)(a1 + 128) & 4) != 0));
    v26 = *(_QWORD*)(a1 + 8);
  }
  {
    __typeof__(v21) z_ = (__typeof__(v21)){0};
    LODWORD(z_) = *(_DWORD*)(a1 + 664);
    v21 = z_;
  }
  v27 = fabsf(*(float*)(*(_QWORD*)(v26 + 8) + 228LL));
  if (*(float*)&v21 > 0x0.0p+0f) {
    *(float*)&v21 = *(float*)&v21 - v27;
    if (!(*(float*)&v21 < 0x0.0p+0f)) {
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if (*(float*)&v21 < 0x0.0p+0f) {
    *(float*)&v21 = *(float*)&v21 + v27;
    if (*(float*)&v21 > 0x0.0p+0f) {
    LABEL_23:
      *(_QWORD*)&v21 = 0;
    }
  }
LABEL_24:
  *(_DWORD*)(a1 + 664) = LODWORD(v21);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22110b8) != 0) {
    GameData_22110ac_alt1 = 0;
    __cxa_guard_release((__int64)&GameData_22110b8),
        v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v28 = GameData_22110ac_alt1;
  v29 = *(_QWORD*)(a1 + 696);
  v30 = *(_QWORD*)(a1 + 688);
  v31 = v29 - v30;
  if (v29 != v30) {
    v32 = (float*)(v30 + 4);
    v33 = 0;
    v34 = 0xAAAAAAAAAAAAAAABLL * (v31 >> 2);
    while (!((float)(*(float*)(a1 + 524) - v32[1]) > 0x1.3333340000000p-2f)) {
      v35 = *(v32 - 1);
      v36 = *v32;
      ++v33;
      v32 += 3;
      v28 = __PAIR64__(*((float*)&v28 + 1) + v36, *(float*)&v28 + v35);
      if (v34 == v33) {
        LODWORD(v33) = v34;
        break;
      }
    }
    if ((_DWORD)v33 != 0) {
      v28 = __PAIR64__(*((float*)&v28 + 1) / (float)(unsigned int)v33,
                       *(float*)&v28 / (float)(unsigned int)v33);
    }
  }
  if (*(float*)(a1 + 664) > 0x0.0p+0f ||
      (*(_BYTE*)(a1 + 194) & 1) == 0 &&
          (*(_BYTE*)(*(_QWORD*)(a1 + 8) + 387LL) & 0x80) == 0) {
    goto LABEL_59;
  }
  v37 = *(__int64**)(*(_QWORD*)(a1 + 488) + 88LL);
  v38 = *v37;
  v39 = v37[1];
  if (*v37 != v39) {
    v40 = 0x1.0000000000000p+0f;
    do {
      v42 = *(float**)v38;
      v41 = *(_QWORD*)(v38 + 8);
      if (v41 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v42 != nullptr) {
        v43 = v42[3];
        if (!(v43 > 0x0.0p+0f)) {
          v45 = *v42;
        }
        else {
          v44 = v42[1];
          *(float*)&v21 = v42[2] / v43;
          if (v44 > 0x0.0p+0f) {
            *(float*)&v21 = GameRoutine_1a0a550(*(float*)&v21, v44),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
          }
          v45 = (float)(fminf(fmaxf(*(float*)&v21, 0x0.0p+0f),
                              0x1.0000000000000p+0f) *
                        (float)(*v42 + -0x1.0000000000000p+0f)) +
                0x1.0000000000000p+0f;
        }
        v40 = v40 * v45;
      }
      if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v41),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v38 += 16;
    } while (v38 != v39);
    if (v40 < 0x1.0000000000000p+0f) {
      goto LABEL_59;
    }
  }
  v46 = (float)(PSEUDO_UNFUSED(*((float*)&v28 + 1) * *((float*)&v28 + 1))) +
        (float)(*(float*)&v28 * *(float*)&v28);
  if (!(v46 > (float)((float)(*(float*)(a1 + 360) * 0x1.99999a0000000p-1f) *
                      (float)(*(float*)(a1 + 360) * 0x1.99999a0000000p-1f)))) {
    goto LABEL_59;
  }
  if (*(float*)&v28 != 0x0.0p+0f ||
      (v48 = *((float*)&v28 + 1), v47 = *(float*)&v28,
       *((float*)&v28 + 1) != 0x0.0p+0f)) {
    v49 = __builtin_elementwise_sqrt((float)(v46));
    v47 = *(float*)&v28 / v49;
    v48 = *((float*)&v28 + 1) / v49;
  }
  v50 = *(float*)(a1 + 668);
  v51 = *(float*)(a1 + 672);
  if (v50 != 0x0.0p+0f || v51 != 0x0.0p+0f) {
    v52 = __builtin_elementwise_sqrt((float)(PSEUDO_UNFUSED(v51 * v51)) +
                                     (float)(v50 * v50));
    v50 = v50 / v52;
    v51 = v51 / v52;
  }
  if ((float)((float)(PSEUDO_UNFUSED(v48 * v51)) + (float)(v47 * v50)) >=
      0x1.3333340000000p-2f) {
    v53 = 1;
  }
  else {
  LABEL_59:
    v53 = 0;
  }
  if (*(_BYTE*)(a1 + 648) == 1) {
    v54 = *(_QWORD*)(a1 + 8);
    if ((*(_BYTE*)(v54 + 385) & 4) != 0) {
      *(_BYTE*)(a1 + 648) = 0;
      *(_DWORD*)(a1 + 664) = 0;
    }
    else {
      v55 = *(_QWORD*)(v54 + 8);
      v56 = *(float*)(a1 + 664);
      v57 = *(_QWORD*)(v55 + 344);
      if (*(_QWORD*)(v57 + 352) != *(_QWORD*)(a1 + 640)) {
        if (v56 > 0x0.0p+0f) {
          *(_DWORD*)(a1 + 664) = 0;
        }
        goto LABEL_80;
      }
      if (!(v56 > 0x0.0p+0f)) {
        v58 = *(_QWORD*)(v55 + 16);
        if ((*(_BYTE*)(v58 + 385) & 0x40) != 0) {
          v59 = 0;
        }
        else {
          v59 = *(_QWORD*)(v58 + 468);
        }
        if ((v59 & 0x100000000LL) == 0) {
          if (llvm_libcxx_21_libcxx_include___memory_d2d4e0(
                  *(unsigned int*)(v57 + 360))) {
            LODWORD(v59) = 1257611790;
          }
          else if ((*(_BYTE*)(*(_QWORD*)(v55 + 16) + 384LL) & 0x10) != 0) {
            LODWORD(v59) = -1101902990;
          }
          else if ((*(_BYTE*)(v55 + 216) & 2) != 0) {
            LODWORD(v59) = 1669996436;
          }
          else {
            LODWORD(v59) = -574916402;
          }
        }
        *(_DWORD*)(v57 + 328) = GameRoutine_d2cec0(v59) - 1,
                         v321 = COERCE_AS(__typeof__(v321),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
        *(_BYTE*)(v57 + 332) = 1;
        if (*(_BYTE*)(a1 + 648) == 1) {
        LABEL_80:
          *(_BYTE*)(a1 + 648) = 0;
        }
      }
    }
  }
  if ((*(_BYTE*)(a1 + 128) & 8) != 0) {
    v60 = 0x0.0p+0f;
    v61 = 0x0.0p+0f;
    v62 = (float)(PSEUDO_UNFUSED(*((float*)&v28 + 1) * *((float*)&v28 + 1))) +
          (float)(*(float*)&v28 * *(float*)&v28);
    if (v62 > 0x0.0p+0f) {
      if (*(float*)&v28 != 0x0.0p+0f || *((float*)&v28 + 1) != 0x0.0p+0f) {
        v63 = __builtin_elementwise_sqrt((float)(v62));
        v28 = __PAIR64__(*((float*)&v28 + 1) / v63, *(float*)&v28 / v63);
      }
      v61 = GameRoutine_1a0ab40(*(float*)&v28, *((float*)&v28 + 1)),
      v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v64 = *(float*)(a1 + 588);
    v65 = *(float*)(a1 + 584);
    v66 = (float)(PSEUDO_UNFUSED(v64 * v64)) + (float)(v65 * v65);
    if (v66 > 0x0.0p+0f) {
      if (v65 != 0x0.0p+0f || v64 != 0x0.0p+0f) {
        v67 = __builtin_elementwise_sqrt((float)(v66));
        v65 = v65 / v67;
        v64 = v64 / v67;
      }
      v60 = GameRoutine_1a0ab40(v65, v64),
      v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    *(float*)&v21 = GameRoutine_1a0a6a0(v61 - v60, 0x1.921fb60000000p+2f),
    v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    v68 = v53 ^ 1;
    if (__builtin_elementwise_sqrt(
            (float)(PSEUDO_UNFUSED(*(float*)(a1 + 588) * *(float*)(a1 + 588))) +
            (float)(*(float*)(a1 + 584) * *(float*)(a1 + 584))) <=
        0x1.cccccc0000000p-1f) {
      v68 = 1;
    }
    if ((v68 & 1) == 0) {
      if (!(*(float*)&v21 < 0x0.0p+0f)) {
        v69 = *(float*)&v21 + 0x0.0p+0f;
      }
      else {
        v69 = (float)(*(float*)&v21 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
      }
      if (v69 > 0x1.921fb60000000p+1f) {
        v69 = v69 + -0x1.921fb60000000p+2f;
      }
      v70 = (float)(fminf(fmaxf(fabsf(v69 / 0x1.921fb60000000p+1f), 0x0.0p+0f),
                          0x1.0000000000000p+0f) +
                    -0x1.b333340000000p-1f) /
            0x1.3333300000000p-3f;
      v71 = v70 < 0x0.0p+0f;
      if (v70 > 0x0.0p+0f) {
        v71 = true;
      }
      if (v70 > 0x1.0000000000000p+0f) {
        v71 = true;
      }
      v72 = v70 < 0x0.0p+0f | !v71;
      if (!v72) {
        v73 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
          GameData_21a60e0 = 0;
          __cxa_guard_release((__int64)&GameData_21a60e8),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
        }
        BYTE8(f_.v550) = 0;
        BYTE12(f_.v550) = 0;
        LOBYTE(f_.v551) = 0;
        BYTE4(f_.v551) = 0;
        f_.v553 = 0;
        LODWORD(f_.v552) = 0;
        *(_DWORD*)((char*)&f_.v552 + 3) = 0;
        f_.v549 = (unsigned __int64*)GameData_21a60e0;
        *((_QWORD*)&f_.v551 + 1) = 0x3F8000003F800000LL;
        if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 216LL) & 2) !=
            0) {
          LODWORD(f_.v550) = 0;
          BYTE4(f_.v550) = 1;
          LANES64(f_.v548).n64_u32[0] = -54892591;
          v82 = (__int64*)fw_memory_g_heap_manager_ptr;
          v75 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0),
          v321 =
              COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
          *(_QWORD*)(v75 + 8) = 0;
          *(_QWORD*)(v75 + 16) = 0;
          *(_QWORD*)v75 = GameData_1fdaba8;
          *(_DWORD*)(v75 + 40) = 0;
          *(_QWORD*)(v75 + 24) = 0x3DCCCCCD00000000LL;
          LANES128(f_.v546).n128_u64[0] = v75 + 24;
          LANES128(f_.v546).n128_u64[1] = v75;
          *(_QWORD*)(v75 + 32) = 0x3E99999A3E99999ALL;
          v83 = *(__int64**)(a1 + 464);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v75 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_d78b40(v83, &f_.v546),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          v84 = LANES128(f_.v546).n128_i64[1];
          if (LANES128(f_.v546).n128_u64[1] != 0 &&
              atomic_fetch_add(
                  (atomic_ullong* volatile)(LANES128(f_.v546).n128_u64[1] + 8),
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84),
                v321 = COERCE_AS(__typeof__(v321),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak(v84),
                v321 = COERCE_AS(__typeof__(v321),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
          }
          v85 = fw_memory_HeapManager_Allocate(*v82, 48, 16, 0),
          v321 =
              COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
          *(_QWORD*)(v85 + 8) = 0;
          *(_QWORD*)(v85 + 16) = 0;
          *(_QWORD*)v85 = GameData_1fdaba8;
          *(_DWORD*)(v85 + 40) = 0;
          *(_QWORD*)(v85 + 24) = 0x3F8000003F800000LL;
          *(_QWORD*)(v85 + 32) = 0x3F0000003F000000LL;
          v86 = *(__int64**)(a1 + 464);
          LANES128(v545).n128_u64[0] = v85 + 24;
          LANES128(v545).n128_u64[1] = v85;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v85 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_d78b40(v86, &v545),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          v87 = LANES128(v545).n128_i64[1];
          if (LANES128(v545).n128_u64[1] != 0 &&
              atomic_fetch_add(
                  (atomic_ullong* volatile)(LANES128(v545).n128_u64[1] + 8),
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v87 + 16LL))(v87),
                v321 = COERCE_AS(__typeof__(v321),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak(v87),
                v321 = COERCE_AS(__typeof__(v321),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)v85 + 16LL))(v85),
                v321 = COERCE_AS(__typeof__(v321),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak(v85),
                v321 = COERCE_AS(__typeof__(v321),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
          }
          v81 = 0x1.0000000000000p-1f;
          if (atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_130;
          }
        }
        else {
          LODWORD(f_.v550) = 0;
          BYTE4(f_.v550) = 1;
          BYTE12(f_.v550) = 1;
          LANES64(f_.v548).n64_u32[0] = 699171365;
          DWORD2(f_.v550) = 1036831949;
          v74 = (__int64*)fw_memory_g_heap_manager_ptr;
          v75 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0),
          v321 =
              COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
          *(_QWORD*)(v75 + 8) = 0;
          *(_QWORD*)(v75 + 16) = 0;
          *(_QWORD*)v75 = GameData_1fdaba8;
          *(_DWORD*)(v75 + 40) = 0;
          *(_QWORD*)(v75 + 24) = 0x3F00000000000000LL;
          LANES128(f_.v546).n128_u64[0] = v75 + 24;
          LANES128(f_.v546).n128_u64[1] = v75;
          *(_QWORD*)(v75 + 32) = 0x3DA3D70B3DA3D70BLL;
          v76 = *(__int64**)(a1 + 464);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v75 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_d78b40(v76, &f_.v546),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          v77 = LANES128(f_.v546).n128_i64[1];
          if (LANES128(f_.v546).n128_u64[1] != 0 &&
              atomic_fetch_add(
                  (atomic_ullong* volatile)(LANES128(f_.v546).n128_u64[1] + 8),
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77),
                v321 = COERCE_AS(__typeof__(v321),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak(v77),
                v321 = COERCE_AS(__typeof__(v321),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
          }
          v78 = fw_memory_HeapManager_Allocate(*v74, 48, 16, 0),
          v321 =
              COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
          *(_QWORD*)(v78 + 8) = 0;
          *(_QWORD*)(v78 + 16) = 0;
          *(_QWORD*)v78 = GameData_1fdaba8;
          *(_DWORD*)(v78 + 40) = 0;
          *(_QWORD*)(v78 + 24) = 0x3F8000003F99999ALL;
          LANES128(v545).n128_u64[0] = v78 + 24;
          LANES128(v545).n128_u64[1] = v78;
          *(_QWORD*)(v78 + 32) = 0x3ECCCCCD3ECCCCCDLL;
          v79 = *(__int64**)(a1 + 464);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v78 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_d78b40(v79, &v545),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          v80 = LANES128(v545).n128_i64[1];
          if (LANES128(v545).n128_u64[1] != 0 &&
              atomic_fetch_add(
                  (atomic_ullong* volatile)(LANES128(v545).n128_u64[1] + 8),
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80),
                v321 = COERCE_AS(__typeof__(v321),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak(v80),
                v321 = COERCE_AS(__typeof__(v321),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)v78 + 16LL))(v78),
                v321 = COERCE_AS(__typeof__(v321),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak(v78),
                v321 = COERCE_AS(__typeof__(v321),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
          }
          v81 = 0x1.99999a0000000p-2f;
          if (atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_130;
          }
        }
        (*(void (**)(unsigned __int64))(*(_QWORD*)v75 + 16LL))(v75),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v75),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      LABEL_130:
        v88 = *(float*)(a1 + 584);
        v89 = *(float*)(a1 + 588);
        if (v88 != 0x0.0p+0f || v89 != 0x0.0p+0f) {
          v90 = __builtin_elementwise_sqrt((float)(PSEUDO_UNFUSED(v89 * v89)) +
                                           (float)(v88 * v88));
          v88 = v88 / v90;
          v89 = v89 / v90;
        }
        *(float*)(a1 + 656) = v88;
        *(float*)(a1 + 660) = v89;
        *(float*)(a1 + 664) = v81;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_22110b8) != 0) {
          GameData_22110ac_alt1 = 0;
          __cxa_guard_release((__int64)&GameData_22110b8),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
        }
        DWORDn(f_.v551, sizeof(f_.v551) / 4 - 1) = 0;
        BYTE3(f_.v552) = 1;
        *(_QWORD*)(a1 + 668) = GameData_22110ac_alt1;
        *(_QWORD*)(a1 + 640) =
            CharacterModel_d198c0(*(_QWORD**)(v73 + 344), &f_.v548, 0, 0),
                        v321 = COERCE_AS(__typeof__(v321),
                                         PSEUDO_REGISTER(float, "s1", "=w"));
        *(_BYTE*)(a1 + 648) = 1;
      }
    }
  }
  v91 = *(float*)(a1 + 664);
  if (v91 > 0x0.0p+0f) {
    *(_DWORD*)(a1 + 584) = *(_DWORD*)(a1 + 656);
    *(_DWORD*)(a1 + 588) = *(_DWORD*)(a1 + 660);
  }
  if ((*(_BYTE*)(a1 + 604) & 1) != 0 ||
      (v92 = *(_QWORD*)(a1 + 8), v93 = *(_QWORD*)(v92 + 8), v91 > 0x0.0p+0f) &&
          (*(_QWORD*)(v93 + 216) & 2) == 0) {
    v94 = *(float*)(a1 + 584);
    v95 = *(float*)(a1 + 588);
    *(_DWORD*)(a1 + 632) = 0;
    goto LABEL_240;
  }
  v96 = *(float*)(a1 + 596) * *(float*)(v93 + 228);
  v97 = *(__int64**)(*(_QWORD*)(a1 + 488) + 88LL);
  v98 = *v97;
  v99 = v97[1];
  if (*v97 == v99) {
    v100 = 0x1.0000000000000p+0f;
  }
  else {
    v100 = 0x1.0000000000000p+0f;
    do {
      v102 = *(float**)v98;
      v101 = *(_QWORD*)(v98 + 8);
      if (v101 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v101 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v102 != nullptr) {
        v103 = v102[3];
        if (!(v103 > 0x0.0p+0f)) {
          v105 = *v102;
        }
        else {
          v104 = v102[1];
          *(float*)&v21 = v102[2] / v103;
          if (v104 > 0x0.0p+0f) {
            *(float*)&v21 = GameRoutine_1a0a550(*(float*)&v21, v104),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
          }
          v105 = (float)(fminf(fmaxf(*(float*)&v21, 0x0.0p+0f),
                               0x1.0000000000000p+0f) *
                         (float)(*v102 + -0x1.0000000000000p+0f)) +
                 0x1.0000000000000p+0f;
        }
        v100 = v100 * v105;
      }
      if (v101 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v101 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v101 + 16LL))(v101),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v101),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v98 += 16;
    } while (v98 != v99);
    v92 = *(_QWORD*)(a1 + 8);
  }
  v106 = v96 * v100;
  if ((*(_BYTE*)(a1 + 194) & 1) == 0 && (*(_BYTE*)(v92 + 387) & 0x80) == 0) {
    v106 = v106 * 0x1.99999a0000000p-3f;
  }
  v107 = *(float*)(a1 + 588);
  v108 = *(float*)(a1 + 584);
  LANES128(v22).n128_u32[1] = 872415232;
  v109 = *(float*)(a1 + 592);
  v110 = *(float*)(*(_QWORD*)(v92 + 8) + 228LL);
  v111 = (float)(PSEUDO_UNFUSED(v107 * v107)) + (float)(v108 * v108);
  if (!(v111 < 0x1.0000000000000p-23f) &&
      (*(_QWORD*)(v92 + 384) & 0x40000180LL) == 0x80 &&
      *(_BYTE*)(a1 + 28) == 1 && (*(_DWORD*)(a1 + 24) & 0xFFFFFFFB) == 1) {
    if (v108 != 0x0.0p+0f || v107 != 0x0.0p+0f) {
      v112 = __builtin_elementwise_sqrt((float)(v111));
      v108 = v108 / v112;
      v107 = v107 / v112;
    }
    v113 = *(_DWORD*)(a1 + 928);
    LANES128(f_.v546).n128_u64[0] = __PAIR64__(LODWORD(v107), LODWORD(v108));
    v114 = 0x1.0000000000000p+0f;
    v115 = (v113 / 2) & 0x80000001;
    if (v113 / -4 >= 0) {
      v116 = -((v113 / -4) & 3);
    }
    else {
      v116 = (v113 / 4) & 3;
    }
    v117 = fminf(fmaxf((float)v116 / 0x1.8000000000000p+1f, 0x0.0p+0f),
                 0x1.0000000000000p+0f);
    v118 = (float)(v117 * -0x1.99999a0000000p-3f) + 0x1.99999a0000000p-2f;
    if (v115 == 1) {
      v119 = __builtin_elementwise_sqrt((float)(v111));
      v114 =
          (float)((float)(v119 * *(float*)(a1 + 600)) * 0x1.0000000000000p-2f) +
          0x1.0000000000000p+2f;
      v118 = (float)(v119 * 0x1.0000000000000p-1f) * v118;
    }
    v120 = (float)(v117 * 0x1.197c980000000p+0f) + 0x1.41b2f80000000p-3f;
    if ((v113 & 1) != 0) {
      v120 = -v120;
    }
    game_zview_d13080((void*)((__int64)&f_.v548), (float32x4_t*)a1,
                      (float*)&f_.v546, v115 != 1, v120, v118,
                      v114 + *(float*)(v92 + 528)),
        v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    GameRoutine_d132c0((__int64*)(a1 + 904), (int*)&f_.v548),
        v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    v121 = *(float**)(a1 + 904);
    ++*(_DWORD*)(a1 + 928);
    v122 = *(float**)(a1 + 912);
    if (0xAAAAAAAAAAAAAAABLL * (((char*)v122 - (char*)v121) >> 4) >= 0x11) {
      do {
        if (v121 + 12 == v122) {
          v123 = v121;
        }
        else {
          do {
            v132 = (long double*)v121;
            v133 = *((_DWORD*)v121 + 12);
            v121 += 12;
            *(_DWORD*)v132 = v133;
            v134 = *((_DWORD*)v132 + 17);
            *((_DWORD*)v132 + 4) = *((_DWORD*)v132 + 16);
            *((_DWORD*)v132 + 5) = v134;
            v135 = *((_DWORD*)v132 + 21);
            *((_DWORD*)v132 + 8) = *((_DWORD*)v132 + 20);
            *((_DWORD*)v132 + 9) = v135;
            v21 = v132[1];
            v136 = *((_OWORD*)v132 + 2);
            *((_QWORD*)&v21 + 1) = *((unsigned int*)v132 + 18);
            *((_QWORD*)&v136 + 1) = *((unsigned int*)v132 + 22);
            v132[1] = v21;
            *((_OWORD*)v132 + 2) = v136;
          } while (v132 + 6 != (long double*)v122);
          v123 = *(float**)(a1 + 904);
        }
        v122 = v121;
        *(_QWORD*)(a1 + 912) = v121;
        v131 = 0xAAAAAAAAAAAAAAABLL * (((char*)v121 - (char*)v123) >> 4);
        v121 = v123;
      } while (v131 > 0x10);
    }
    else {
      v123 = v121;
    }
    if (v123 == v122) {
      *(_QWORD*)&v21 = 0;
      v124 = 0;
    }
    else {
      *(_QWORD*)&v21 = 0;
      v124 = 0;
      do {
        v125 = *v123;
        v123 += 12;
        *(float*)&v21 = *(float*)&v21 + v125;
        v124 |= fabsf(v125) > 0x1.0000000000000p-23f;
      } while (v123 != v122);
    }
    v317 = 0x1.0000000000000p+0f;
    if (!(*(float*)&v21 > 0x1.0000000000000p+0f)) {
      v317 = *(float*)&v21;
    }
    if (!(*(float*)&v21 < -0x1.0000000000000p+0f)) {
      *(float*)&v21 = v317;
    }
    else {
      *(float*)&v21 = -0x1.0000000000000p+0f;
    }
    if ((v124 & 1) != 0 && fabsf(*(float*)&v21) < 0x1.0000000000000p-23f) {
      *(float*)&v21 =
          GameRoutine_1a09fb0(*(float*)(*(_QWORD*)(a1 + 8) + 480LL)),
      v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v92 = *(_QWORD*)(a1 + 8);
  }
  else {
    v126 = *(_QWORD*)(a1 + 904);
    *(_QWORD*)&v21 = 0;
    *(_DWORD*)(a1 + 928) = 0;
    *(_QWORD*)(a1 + 912) = v126;
  }
  v127 = *(_QWORD*)(v92 + 8);
  v128 = 0x1.3333340000000p-2f;
  if (*(float*)&v21 == 0x0.0p+0f) {
    v128 = 0x1.0000000000000p-1f;
  }
  v129 = *(float*)(a1 + 632);
  v130 = fabsf(*(float*)(v127 + 228) / v128);
  if (v129 > *(float*)&v21) {
    v129 = v129 - v130;
    if (!(v129 < *(float*)&v21)) {
      goto LABEL_195;
    }
    goto LABEL_194;
  }
  if (v129 < *(float*)&v21) {
    v129 = v129 + v130;
    if (v129 > *(float*)&v21) {
    LABEL_194:
      v129 = *(float*)&v21;
    }
  }
LABEL_195:
  v137 = *(float*)(a1 + 588);
  {
    __typeof__(v21) z_ = (__typeof__(v21)){0};
    LODWORD(z_) = *(_DWORD*)(a1 + 584);
    v21 = z_;
  }
  *(float*)(a1 + 632) = v129;
  v138 = (float*)GameData_212c190;
  v139 = (float*)GameData_212c188;
  v140 = (float)(PSEUDO_UNFUSED(v137 * v137)) +
         (float)(*(float*)&v21 * *(float*)&v21);
  if (v129 != 0x0.0p+0f && v140 > 0x0.0p+0f) {
    v141 = (float)(PSEUDO_UNFUSED((float)(v129 * 0x1.1800000000000p+5f) *
                                  0x1.1df46a0000000p-6f)) +
           (float)(roundf((float)((float)(v129 * 0x1.1800000000000p+5f) *
                                  0x1.1df46a0000000p-6f) *
                          0x1.45f3060000000p-3f) *
                   -0x1.921fb60000000p+2f);
    if (!(v141 > 0x1.921fb60000000p+0f)) {
      v143 = 0x1.0000000000000p+0f;
      if (!(v141 < -0x1.921fb60000000p+0f)) {
      LABEL_202:
        v144 = v141 * v141;
        v145 =
            v141 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c190) -
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
                                                                                                  (float)(v141 *
                                                                                                          v141))) *
                                                                                  (float)(v141 *
                                                                                          v141))) *
                                                               (float)(v141 *
                                                                       v141))) *
                                               (float)(v141 * v141))) *
                            (float)(v141 * v141)) +
                    0x1.0000000000000p+0f);
        v146 =
            v143 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c188) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c188 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c188) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c188 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c188 *
                                                                                                  v144)) *
                                                                                  v144)) *
                                                               v144)) *
                                               v144)) *
                            v144) +
                    0x1.0000000000000p+0f);
        v147 = v137 * v145;
        v137 = (float)(PSEUDO_UNFUSED(v137 * v146)) -
               (float)(*(float*)&v21 * v145);
        *(float*)&v21 = v147 + (float)(*(float*)&v21 * v146);
        *(_DWORD*)(a1 + 584) = LODWORD(v21);
        *(float*)(a1 + 588) = v137;
        v140 = (float)(PSEUDO_UNFUSED(v137 * v137)) +
               (float)(*(float*)&v21 * *(float*)&v21);
        goto LABEL_203;
      }
      v142 = -0x1.921fb60000000p+1f;
    }
    else {
      v142 = 0x1.921fb60000000p+1f;
    }
    v141 = v142 - v141;
    v143 = -0x1.0000000000000p+0f;
    goto LABEL_202;
  }
LABEL_203:
  v148 = *(float*)(a1 + 628);
  v149 = *(float*)(a1 + 624);
  v150 = fabsf(v109 * v110);
  v151 = (float)(PSEUDO_UNFUSED(v148 * v148)) + (float)(v149 * v149);
  *(float*)&v25 = __builtin_elementwise_sqrt((float)(v140));
  v152 = __builtin_elementwise_sqrt((float)(v151));
  if (v152 > *(float*)&v25) {
    v153 = v152 - v150;
    if (!((float)(v152 - v150) < *(float*)&v25)) {
      goto LABEL_209;
    }
  LABEL_208:
    v153 = *(float*)&v25;
    goto LABEL_209;
  }
  v153 = v152;
  if (v152 < *(float*)&v25) {
    v153 = v150 + v152;
    if ((float)(v150 + v152) > *(float*)&v25) {
      goto LABEL_208;
    }
  }
LABEL_209:
  if (!(v151 > 0x0.0p+0f)) {
    v154 = *(float*)(*(_QWORD*)(a1 + 488) + 32LL);
    if (!(v140 > 0x0.0p+0f)) {
      goto LABEL_233;
    }
  LABEL_216:
    if (*(float*)&v21 != 0x0.0p+0f || v137 != 0x0.0p+0f) {
      *(float*)&v21 = *(float*)&v21 / *(float*)&v25;
      v137 = v137 / *(float*)&v25;
    }
    v155 = GameRoutine_1a0ab40(*(float*)&v21, v137),
    v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    v156 = GameRoutine_1a0a6a0(v155 - v154, 0x1.921fb60000000p+2f),
    v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    if (!(v156 < 0x0.0p+0f)) {
      v157 = v156 + 0x0.0p+0f;
    }
    else {
      v157 = (float)(v156 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
    }
    if (v157 > 0x1.921fb60000000p+1f) {
      v157 = v157 + -0x1.921fb60000000p+2f;
    }
    v158 = fabsf(v106);
    v159 = v154 + v157;
    if (!(v154 > v159)) {
      if (!(v154 < v159)) {
        goto LABEL_230;
      }
      v154 = v158 + v154;
      if (!(v154 > v159)) {
        goto LABEL_230;
      }
    }
    else {
      v154 = v154 - v158;
      if (!(v154 < v159)) {
      LABEL_230:
        *(float*)&v21 = GameRoutine_1a0a6a0(v154 + 0x1.921fb60000000p+1f,
                                            0x1.921fb60000000p+2f) +
                        -0x1.921fb60000000p+1f,
        v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        if (!(*(float*)&v21 < -0x1.921fb60000000p+1f)) {
          v154 = *(float*)&v21;
        }
        else {
          v154 = *(float*)&v21 + 0x1.921fb60000000p+2f;
        }
        goto LABEL_233;
      }
    }
    v154 = v159;
    goto LABEL_230;
  }
  if (v149 != 0x0.0p+0f || v148 != 0x0.0p+0f) {
    v149 = v149 / v152;
    v148 = v148 / v152;
  }
  *(float*)&v21 = GameRoutine_1a0ab40(v149, v148),
  v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
  v137 = *(float*)(a1 + 588);
  v154 = *(float*)&v21;
  {
    __typeof__(v21) z_ = (__typeof__(v21)){0};
    LODWORD(z_) = *(_DWORD*)(a1 + 584);
    v21 = z_;
  }
  PSEUDO_LOW_LANE128(v24, n128_f32,
                     (float)(PSEUDO_UNFUSED(v137 * v137)) +
                         (float)(*(float*)&v21 * *(float*)&v21));
  *(float*)&v25 =
      __builtin_elementwise_sqrt((float)(LANES128(v24).n128_f32[0]));
  if (LANES128(v24).n128_f32[0] > 0x0.0p+0f) {
    goto LABEL_216;
  }
LABEL_233:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22110c8) != 0) {
    GameData_22110c0 = 0x3F80000000000000LL;
    __cxa_guard_release((__int64)&GameData_22110c8),
        v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v160 = v154 +
         (float)(roundf(v154 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v160 > 0x1.921fb60000000p+0f) {
    v161 = 0x1.921fb60000000p+1f;
  LABEL_238:
    v160 = v161 - v160;
    v162 = -0x1.0000000000000p+0f;
    goto LABEL_239;
  }
  v162 = 0x1.0000000000000p+0f;
  if (v160 < -0x1.921fb60000000p+0f) {
    v161 = -0x1.921fb60000000p+1f;
    goto LABEL_238;
  }
LABEL_239:
  v163 = v160 * v160;
  v164 =
      v160 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)v138) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)v138 + 4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  v138) -
                                                                    (float)((float)(v138[1] -
                                                                                    (float)(*v138 *
                                                                                            (float)(v160 *
                                                                                                    v160))) *
                                                                            (float)(v160 *
                                                                                    v160))) *
                                                         (float)(v160 *
                                                                 v160))) *
                                         (float)(v160 * v160))) *
                      (float)(v160 * v160)) +
              0x1.0000000000000p+0f);
  v165 =
      v162 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)v139) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)v139 + 4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  v139) -
                                                                    (float)((float)(v139[1] -
                                                                                    (float)(*v139 *
                                                                                            v163)) *
                                                                            v163)) *
                                                         v163)) *
                                         v163)) *
                      v163) +
              0x1.0000000000000p+0f);
  v94 =
      v153 *
      (float)((float)(PSEUDO_UNFUSED(v164 * *((float*)&GameData_22110c0 + 1))) +
              (float)(*(float*)&GameData_22110c0 * v165));
  v95 =
      v153 *
      (float)((float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v165)) -
              (float)(*(float*)&GameData_22110c0 * v164));
LABEL_240:
  *(float*)(a1 + 624) = v94;
  *(float*)(a1 + 628) = v95;
  {
    __typeof__(v21) z_ = (__typeof__(v21)){0};
    LODWORD(z_) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p-1f));
    v21 = z_;
  }
  v166 = *(float*)(a1 + 600);
  v167 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 384LL);
  v168 = 0x1.0000000000000p+0f;
  if ((int)v167 <= -1) {
    *(float*)&v21 = 0x1.0000000000000p+0f;
  }
  v169 = *(__int64***)(a1 + 464);
  if (*(_BYTE*)(a1 + 194) != 0) {
    v170 = 0x1.0000000000000p+0f;
  }
  else {
    v170 = *(float*)&v21;
  }
  v171 = *v169;
  v172 = v169[1];
  if (*v169 != v172) {
    do {
      v174 = *v171;
      v173 = v171[1];
      if (v173 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v173 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v174 != 0) {
        v175 = *(float*)(v174 + 12);
        if (!(v175 > 0x0.0p+0f)) {
          {
            __typeof__(v21) z_ = (__typeof__(v21)){0};
            LODWORD(z_) = *(_DWORD*)v174;
            v21 = z_;
          }
        }
        else {
          v176 = *(float*)(v174 + 4);
          *(float*)&v21 = *(float*)(v174 + 8) / v175;
          if (v176 > 0x0.0p+0f) {
            *(float*)&v21 = GameRoutine_1a0a550(*(float*)&v21, v176),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
          }
          *(float*)&v21 =
              (float)(fminf(fmaxf(*(float*)&v21, 0x0.0p+0f),
                            0x1.0000000000000p+0f) *
                      (float)(*(float*)v174 + -0x1.0000000000000p+0f)) +
              0x1.0000000000000p+0f;
        }
        v168 = v168 * *(float*)&v21;
      }
      if (v173 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v173 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v173 + 16LL))(v173, v21),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v173),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v171 += 2;
    } while (v171 != v172);
    v94 = *(float*)(a1 + 624);
    v95 = *(float*)(a1 + 628);
  }
  v177 = *(float*)(a1 + 292);
  v178 = *(float*)(a1 + 612);
  v179 = *(float*)(a1 + 296);
  if (((v168 > 0x1.0000000000000p+0f) & ((unsigned int)v167 >> 10)) != 0) {
    v180 = 0x1.0000000000000p+0f;
  }
  else {
    v180 = v168;
  }
  PSEUDO_LOW_LANE128(v24, n128_f32, v178 - v179);
  v181 = v166 * v180;
  v182 = *(float*)(a1 + 608);
  v183 = v94 * v181;
  v184 = v95 * v181;
  LANES128(v23).n128_f32[0] = v182 - v177;
  if ((float)(v182 - v177) != 0x0.0p+0f ||
      (v185 = v182 - v177, v186 = v178 - v179,
       LANES128(v24).n128_f32[0] != 0x0.0p+0f)) {
    v187 = __builtin_elementwise_sqrt(
        (float)(PSEUDO_UNFUSED(LANES128(v24).n128_f32[0] *
                               LANES128(v24).n128_f32[0])) +
        (float)(LANES128(v23).n128_f32[0] * LANES128(v23).n128_f32[0]));
    v185 = LANES128(v23).n128_f32[0] / v187;
    v186 = LANES128(v24).n128_f32[0] / v187;
  }
  v188 = v181 * v185;
  v189 = v181 * v186;
  {
    __typeof__(v25) z_ = (__typeof__(v25)){0};
    LODWORD(z_) = *(_DWORD*)(a1 + 616);
    v25 = z_;
  }
  v190 = v183 + (float)(PSEUDO_UNFUSED(*(float*)&v25 * (float)(v188 - v183)));
  v191 = v184 + (float)(PSEUDO_UNFUSED(*(float*)&v25 * (float)(v189 - v184)));
  v192 = v170 * v190;
  v193 = v170 * v191;
  if ((*(_BYTE*)(a1 + 604) & 1) != 0) {
    v194 = v192;
    goto LABEL_302;
  }
  v195 = *(float*)(a1 + 364);
  v196 = (float)(PSEUDO_UNFUSED(v95 * v95)) + (float)(v94 * v94);
  v197 = *(float*)(a1 + 672);
  v198 = __builtin_elementwise_sqrt((float)(v196));
  v194 = *(float*)(a1 + 668);
  v199 = __builtin_elementwise_sqrt((float)(PSEUDO_UNFUSED(v197 * v197)) +
                                    (float)(v194 * v194));
  if (!(v199 > v195)) {
    v204 = *(float*)(a1 + 368);
    v205 = v195 - v204;
    v206 = 0x0.0p+0f;
    if (v205 != 0x0.0p+0f) {
      v207 = v199 - v204;
      v208 = 0x1.0000000000000p+0f;
      v209 = v207 / v205;
      if (!(v209 > 0x1.0000000000000p+0f)) {
        v208 = v209;
      }
      v404 = v209 < 0x0.0p+0f;
      v206 = 0x0.0p+0f;
      if (!v404) {
        v206 = v208;
      }
    }
    v203 = *(float*)(a1 + 404) +
           (float)(fminf(fmaxf(v206, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                   (float)(*(float*)(a1 + 400) - *(float*)(a1 + 404)));
  }
  else {
    v200 = 0x0.0p+0f;
    v201 = *(float*)(a1 + 360) - v195;
    if (v201 != 0x0.0p+0f) {
      v200 = 0x1.0000000000000p+0f;
      v202 = (float)(v199 - v195) / v201;
      if (!(v202 > 0x1.0000000000000p+0f)) {
        v200 = v202;
      }
      if (v202 < 0x0.0p+0f) {
        v200 = 0x0.0p+0f;
      }
    }
    v203 = *(float*)(a1 + 400) +
           (float)(fminf(fmaxf(v200, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                   (float)(*(float*)(a1 + 396) - *(float*)(a1 + 400)));
  }
  v210 = fminf(fmaxf(v198, 0x0.0p+0f), 0x1.0000000000000p+0f);
  if ((v167 & 0x400) != 0) {
    v203 = v203 * 0x1.0000000000000p+2f;
  }
  v211 = *(float*)(a1 + 388) +
         (float)(v210 * (float)(*(float*)(a1 + 392) - *(float*)(a1 + 388)));
  if (!(v199 > __builtin_elementwise_sqrt((float)(PSEUDO_UNFUSED(v193 * v193)) +
                                          (float)(v192 * v192)))) {
    v212 = v211;
  }
  else {
    v212 = v203;
  }
  v213 = v192 - v194;
  v214 = *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 228LL) *
         (float)(v170 * v212);
  v215 = v193 - v197;
  if ((float)(v192 - v194) != 0x0.0p+0f || v215 != 0x0.0p+0f) {
    v216 = __builtin_elementwise_sqrt((float)(PSEUDO_UNFUSED(v215 * v215)) +
                                      (float)(v213 * v213));
    v213 = v213 / v216;
    v215 = v215 / v216;
  }
  v217 = fabsf(v214 * fabsf(v213));
  if (v194 > v192) {
    v194 = v194 - v217;
    if (!(v194 < v192)) {
      goto LABEL_296;
    }
  LABEL_295:
    v194 = v192;
    goto LABEL_296;
  }
  if (v194 < v192) {
    v194 = v194 + v217;
    if (v194 > v192) {
      goto LABEL_295;
    }
  }
LABEL_296:
  v218 = fabsf(v214 * fabsf(v215));
  if (v197 > v193) {
    v197 = v197 - v218;
    if (v197 < v193) {
      goto LABEL_302;
    }
    goto LABEL_301;
  }
  if (!(v197 < v193) || !((v197 = v197 + v218) > v193)) {
  LABEL_301:
    v193 = v197;
  }
LABEL_302:
  v219 = *(_BYTE*)(a1 + 620);
  *(float*)(a1 + 668) = v194;
  *(float*)(a1 + 672) = v193;
  if ((v219 & 1) == 0) {
    v220 = *(float*)(a1 + 220);
    v221 = *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 228LL);
    v222 = v221 * v194;
    v223 = v221 * v193;
    v224 = v222 * v220;
    v225 = v220 * v223;
    if (!(*(float*)&v25 > 0x0.0p+0f) ||
        (LANES128(v24).n128_f32[0] =
             LANES128(v24).n128_f32[0] * LANES128(v24).n128_f32[0],
         *(float*)& v25 = __builtin_elementwise_sqrt(
             (float)(PSEUDO_UNFUSED(v225 * v225)) + (float)(v224 * v224)),
         LANES128(v23).n128_f32[0] = __builtin_elementwise_sqrt(
             (float)(LANES128(v24).n128_f32[0] +
                     (float)(LANES128(v23).n128_f32[0] *
                             LANES128(v23).n128_f32[0]))),
         !(*(float*)&v25 > LANES128(v23).n128_f32[0]))) {
      v182 = v177 + v224;
      v178 = v179 + v225;
    }
  }
  v226 = *(float32x4_t*)(a1 + 800);
  v227 = *(_QWORD*)(a1 + 456);
  v228 = COERCE_FLOAT(*(_QWORD*)(a1 + 808));
  v229 = v182 + LANES128(v226).n128_f32[0];
  *(float*)(a1 + 292) = v229;
  v230 = v178 + v228;
  *(float*)(a1 + 296) = v230;
  v231 = *(_QWORD*)(v227 + 8);
  v232 = *(_QWORD*)(v227 + 16);
  if (v231 == v232) {
    v234 = 0x0.0p+0f;
    v233 = 0x0.0p+0f;
  }
  else {
    v233 = 0x0.0p+0f;
    v234 = 0x0.0p+0f;
    do {
      v236 = *(float**)v231;
      v235 = *(_QWORD*)(v231 + 8);
      if (v235 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v235 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v236 != nullptr) {
        v237 = v236[4];
        if (!(v237 > 0x0.0p+0f)) {
          v240 = *v236;
          v241 = v236[1];
        }
        else {
          v238 = v236[2];
          v239 = v236[3] / v237;
          if (v238 > 0x0.0p+0f) {
            v239 = GameRoutine_1a0a550(v239, v238),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
          }
          v240 = v239 * *v236;
          v241 = v239 * v236[1];
        }
        v234 = v234 + v240;
        v233 = v233 + v241;
      }
      if (v235 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v235 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v235 + 16LL))(v235),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v235),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v231 += 16;
    } while (v231 != v232);
    v229 = *(float*)(a1 + 292);
    v230 = *(float*)(a1 + 296);
  }
  v242 = *(_QWORD*)(a1 + 8);
  v243 = *(float*)(*(_QWORD*)(v242 + 8) + 228LL);
  LANES128(v22).n128_f32[0] = v234 * v243;
  LANES128(v226).n128_f32[0] = v233 * v243;
  *(float*)(a1 + 292) = v229 + LANES128(v22).n128_f32[0];
  *(float*)(a1 + 296) = LANES128(v226).n128_f32[0] + v230;
  v244 = GameData_212d310;
  v245 = GameData_212eba8[0];
  if ((*(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL) & 0xFFFFFFFE) == 2 &&
      (*(_BYTE*)(v242 + 387) & 0x40) != 0 &&
      (*(_BYTE*)(a1 + 128) & 0x80) == 0) {
    v246 = *(float*)(a1 + 628);
    LANES128(v226).n128_u32[0] = *(_DWORD*)(a1 + 624);
    LANES128(v22).n128_u64[0] = 0x3400000034000000LL;
    v247 = (float)(PSEUDO_UNFUSED(v246 * v246)) +
           (float)(LANES128(v226).n128_f32[0] * LANES128(v226).n128_f32[0]);
    if (v247 > 0x1.0000000000000p-23f) {
      if (LANES128(v226).n128_f32[0] != 0x0.0p+0f || v246 != 0x0.0p+0f) {
        v248 = __builtin_elementwise_sqrt((float)(v247));
        LANES128(v226).n128_f32[0] = LANES128(v226).n128_f32[0] / v248;
        v246 = v246 / v248;
      }
      v249 = *(__int64**)(*GameData_212eba8[0] + 32);
      v250 = *(__int64**)(*GameData_212eba8[0] + 40);
      if (v249 != v250) {
        LANES128(v251).n128_u64[0] = LANES128(v226).n128_u32[0];
        LANES128(v251).n128_u64[1] = LODWORD(v246);
        LANES128(v252).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v252).n128_u64[1] = 0x3F0000003F000000LL;
        while (1) {
          v253 = *v249;
          v254 = *(_DWORD*)(*v249 + 376);
          if (v254 != 0 & v254 != 5) {
            v256 = *(float32x4_t**)(v253 + 16);
            if ((LANES128(v256[18]).n128_u8[0] & 1) == 0 &&
                LANES128(v256[18]).n128_u8[1] == 1 &&
                (v254 == 4 || *(_QWORD*)(*(_QWORD*)(v242 + 632) + 8LL) >=
                                  *(_QWORD*)(*(_QWORD*)(v253 + 632) + 8LL)) &&
                v253 != v242) {
              LANES128(v226).n128_u32[0] = *(_DWORD*)(v242 + 528);
              v22 = v256[35];
              v24 = *(float32x4_t*)(*(_QWORD*)(v242 + 16) + 560LL);
              v23 = vaddq_f32(
                  vmulq_f32(vmulq_n_f32(v251, LANES128(v226).n128_f32[0]),
                            v252),
                  v24);
              PSEUDO_LOW_LANE128(v24, n128_u32, LANES128(v22).n128_u32[1]);
              {
                __typeof__(v25) z_ = (__typeof__(v25)){0};
                LODWORD(z_) = LANES128(v23).n128_u32[1];
                v25 = z_;
              }
              if ((float)(LANES128(v22).n128_f32[1] - *(float*)(v253 + 552)) <=
                  LANES128(v23).n128_f32[1]) {
                *(float*)&v25 =
                    LANES128(v23).n128_f32[1] - *(float*)(v242 + 552);
                if (!(LANES128(v22).n128_f32[1] < *(float*)&v25)) {
                  v22 = vsubq_f32(v22, v23);
                  PSEUDO_LOW_LANE128(v24, n128_u32, *(_DWORD*)(v253 + 528));
                  v23 = vmulq_f32(v22, v22);
                  LANES128(v23).n128_u32[0] = LANES128(v23).n128_u32[2];
                  LANES128(v226).n128_f32[0] =
                      (float)(LANES128(v226).n128_f32[0] +
                              LANES128(v24).n128_f32[0]) *
                      (float)(LANES128(v226).n128_f32[0] +
                              LANES128(v24).n128_f32[0]);
                  LANES128(v22).n128_f32[0] =
                      LANES128(v23).n128_f32[2] +
                      (float)(LANES128(v22).n128_f32[0] *
                              LANES128(v22).n128_f32[0]);
                  if (!(LANES128(v22).n128_f32[0] >
                        LANES128(v226).n128_f32[0])) {
                    break;
                  }
                }
              }
            }
          }
          v249 += 2;
          if (v249 == v250) {
            goto LABEL_358;
          }
        }
        v257 = *(_QWORD*)(a1 + 464);
        v258 = *(_QWORD*)(a1 + 880);
        LANES64(f_.v548).n64_u64[0] = *(unsigned __int64*)(a1 + 872);
        f_.v549 = (unsigned __int64*)v258;
        if (v258 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v258 + 8), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_d78880(v257, &f_.v548),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        v259 = (__int64)f_.v549;
        if (f_.v549 != nullptr &&
            atomic_fetch_add((atomic_ullong* volatile)(f_.v549 + 1),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v259 + 16LL))(v259),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak(v259),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
        }
        v260 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0),
        v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        v261 = *(_QWORD*)(a1 + 880);
        *(_QWORD*)(v260 + 8) = 0;
        *(_QWORD*)(v260 + 16) = 0;
        *(_QWORD*)(v260 + 32) = 0;
        *(_DWORD*)(v260 + 40) = 0;
        *(_QWORD*)(a1 + 880) = v260;
        *(_QWORD*)v260 = GameData_1fdaba8;
        *(_QWORD*)(v260 + 24) = 0x3F8000003F800000LL;
        *(_QWORD*)(a1 + 872) = v260 + 24;
        if (v261 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v261 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v261 + 16LL))(v261),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak(v261),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
        }
        **(_DWORD**)(a1 + 872) = 1061158912;
        *(_QWORD*)(*(_QWORD*)(a1 + 872) + 8LL) = 0x3E4CCCCD3E4CCCCDLL;
        v262 = *(__int64**)(a1 + 464);
        v263 = *(_QWORD*)(a1 + 880);
        LANES128(f_.v546).n128_u64[0] = *(_QWORD*)(a1 + 872);
        LANES128(f_.v546).n128_u64[1] = v263;
        if (v263 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v263 + 8), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_d78b40(v262, &f_.v546),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        v264 = LANES128(f_.v546).n128_i64[1];
        if (LANES128(f_.v546).n128_u64[1] != 0 &&
            atomic_fetch_add(
                (atomic_ullong* volatile)(LANES128(f_.v546).n128_u64[1] + 8),
                0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v264 + 16LL))(v264),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak(v264),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
        }
      }
    }
  }
LABEL_358:
  v265 = *(_QWORD*)(a1 + 8);
  v266 = *(_DWORD*)(v265 + 376);
  v267 = v266 == 0 | v266 == 5;
  if (v267 || (*(_BYTE*)((v280 = *(_QWORD*)(v265 + 16)) + 288) & 1) != 0 ||
      (unsigned int)(v266 - 1) > 2 || (*(_BYTE*)(v280 + 289) & 1) == 0 ||
      ((v281 = *(_QWORD*)(v265 + 384)) & 0x100) != 0 ||
      ((v282 = *(_DWORD*)(a1 + 128)) & 0x200) != 0 ||
      *(float*)(a1 + 828) > 0x0.0p+0f) {
  LABEL_363:
    if (*(_BYTE*)(a1 + 716) == 1) {
      goto LABEL_364;
    }
    goto LABEL_365;
  }
  v283 = *(float*)(a1 + 368);
  v284 = *(float*)(a1 + 364) - v283;
  LANES128(v22).n128_u64[0] = 0;
  PSEUDO_LOW_LANE128(
      v24, n128_f32,
      __builtin_elementwise_sqrt(
          (float)(PSEUDO_UNFUSED(*(float*)(a1 + 672) * *(float*)(a1 + 672))) +
          (float)(*(float*)(a1 + 668) * *(float*)(a1 + 668))));
  v285 = 0x0.0p+0f;
  if (v284 != 0x0.0p+0f) {
    v286 = (float)(LANES128(v24).n128_f32[0] - v283) / v284;
    v287 = 0x1.0000000000000p+0f;
    if (!(v286 > 0x1.0000000000000p+0f)) {
      v287 = v286;
    }
    if (!(v286 < 0x0.0p+0f)) {
      LANES128(v22).n128_f32[0] = v287;
    }
    else {
      LANES128(v22).n128_f32[0] = 0x0.0p+0f;
    }
  }
  v288 =
      fminf(fmaxf(LANES128(v22).n128_f32[0], 0x0.0p+0f), 0x1.0000000000000p+0f);
  if ((v282 & 0x80) == 0) {
    v285 = 0x1.0000000000000p+0f;
  }
  v289 = (float)(v288 * -0x1.99999a0000000p-1f) + 0x1.0000000000000p+0f;
  LANES128(v226).n128_u32[1] = 872415232;
  if ((v281 & 0x40000000) != 0) {
    v289 = v285;
  }
  v290 = 0x1.4000000000000p+2f;
  if (!(LANES128(v24).n128_f32[0] < 0x1.0000000000000p-23f)) {
    LANES128(v22).n128_u32[1] = 0;
    v291 = fmaxf(LANES128(v24).n128_f32[0] * 0x1.99999a0000000p-1f, 0x0.0p+0f);
    if (v291 < *(float*)(v280 + 368)) {
      v291 = *(float*)(v280 + 368);
    }
    LANES128(v23).n128_u32[0] =
        COERCE_UNSIGNED_INT((float)(0x1.4000000000000p+2f));
    if (!(v291 > 0x1.4000000000000p+2f)) {
      LANES128(v23).n128_f32[0] = v291;
    }
    if (!(v291 < 0x0.0p+0f)) {
      v290 = LANES128(v23).n128_f32[0];
    }
    else {
      v290 = 0x0.0p+0f;
    }
  }
  v292 = v289 * v290;
  v293 = *(float*)(a1 + 932);
  LANES128(v22).n128_u32[0] = *(_DWORD*)(*(_QWORD*)(v265 + 8) + 228LL);
  v294 = fabsf(LANES128(v22).n128_f32[0] * 0x1.4000000000000p+2f);
  if (v293 > v292) {
    v293 = v293 - v294;
    if (!(v293 < v292)) {
      goto LABEL_468;
    }
  LABEL_467:
    v293 = v292;
    goto LABEL_468;
  }
  if (v293 < v292) {
    v293 = v293 + v294;
    if (v293 > v292) {
      goto LABEL_467;
    }
  }
LABEL_468:
  v330 = *(__int64**)(*v245 + 72);
  *(float*)(a1 + 932) = v293;
  LANES128(v226).n128_u32[0] =
      COERCE_UNSIGNED_INT((float)(0x1.0000000000000p-3f));
  v331 = *(float*)(*(_QWORD*)(v265 + 8) + 228LL) * 0x1.0000000000000p-3f;
  v332 = v293 * v331;
  if (!((float)(v293 * v331) > 0x0.0p+0f)) {
    goto LABEL_363;
  }
  v333 = *v330;
  v334 = v330[1];
  v536 = LANES128(v24).n128_f32[0];
  v335 = v334 - *v330;
  if (v334 == v333) {
    LODWORD(v336) = 0;
  }
  else if (*(_DWORD*)(v265 + 376) != 0) {
    v336 = 0;
    v337 = *(_QWORD*)(*(_QWORD*)(v265 + 632) + 8LL);
    while (1) {
      v338 = *(_QWORD*)(v333 + 8 * v336);
      if (v338 != 0 && v337 == *(_QWORD*)(*(_QWORD*)(v338 + 632) + 8LL)) {
        break;
      }
      if (v335 >> 3 == ++v336) {
        goto LABEL_646;
      }
    }
  }
  else {
  LABEL_646:
    LODWORD(v336) = ((unsigned __int64)v335 >> 3) - 1;
  }
  v481 = 0x0.0p+0f;
  v482 = 0x0.0p+0f;
  v483 = 0;
  v523 = fabsf(v331 * 0x1.921fb60000000p+1f);
  v532 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v534 = *((float*)GameData_212c190 + 1);
  v530 = -*(float*)GameData_212c190;
  v531 = *((float*)GameData_212c188 + 1);
  v528 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v529 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v484 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 8);
  v526 = -*(float*)GameData_212c188;
  v527 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v524 = v484;
  v525 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  do {
    v489 = *(_QWORD*)(a1 + 8);
    v490 = v482 + *(float*)(a1 + 292);
    *(float*)&v491 = v481 + *(float*)(a1 + 296);
    LODWORD(f_.v540) = v336;
    LANES64(f_.v548).n64_u32[0] = 0;
    LANES128(v492).n128_f32[0] = v490;
    LANES128(v492).n128_u32[1] = *(_DWORD*)(a1 + 576);
    v493 = *v245;
    f_.v539 = *(_DWORD*)(v489 + 528);
    LANES128(v492).n128_u64[1] = v491;
    LANES128(v544).n128_u64[0] = *(_QWORD*)(v493 + 72);
    v545 = v492;
    game_zview_d24620((void*)(&f_.v546)),
        v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    v494 = (__int64*)LANES128(f_.v546).n128_u64[0];
    v495 = LANES128(f_.v546).n128_u64[1] - LANES128(f_.v546).n128_u64[0];
    if (LANES128(f_.v546).n128_u64[1] == LANES128(f_.v546).n128_u64[0]) {
      v505 = 0;
      goto LABEL_674;
    }
    v496 = *(_QWORD*)(a1 + 8);
    v497 = 0x0.0p+0f;
    v498 = 0x0.0p+0f;
    LANES128(v22).n128_u64[0] = 0;
    v226 = *(float32x4_t*)(*(_QWORD*)(v496 + 16) + 560LL);
    do {
      v499 = *v494++;
      v23 = vsubq_f32(v226, *(float32x4_t*)(*(_QWORD*)(v499 + 16) + 560LL));
      PSEUDO_LOW_LANE128(v24, n128_u32, LANES128(v23).n128_u32[2]);
      v498 = v498 + LANES128(v23).n128_f32[0];
      v497 = v497 + LANES128(v23).n128_f32[2];
      *(float*)&v25 = __builtin_elementwise_sqrt(
          (float)(vmuls_lane_f32(LANES128(v23).n128_f32[2], v23, 2) +
                  (float)(LANES128(v23).n128_f32[0] *
                          LANES128(v23).n128_f32[0])));
      if (LANES128(v22).n128_f32[0] < *(float*)&v25) {
        LANES128(v22).n128_f32[0] = *(float*)&v25;
      }
    } while (v494 != (__int64*)LANES128(f_.v546).n128_u64[1]);
    f_.v538 = LANES128(v22).n128_u32[0];
    v500 = (float)(unsigned __int64)(v495 >> 3);
    v501 = v498 / v500;
    v502 = v497 / v500;
    f_.v542 = __PAIR64__(LODWORD(v502), LODWORD(v501));
    if (v501 != 0x0.0p+0f || v502 != 0x0.0p+0f) {
      v503 = __builtin_elementwise_sqrt((float)(PSEUDO_UNFUSED(v502 * v502)) +
                                        (float)(v501 * v501));
      v501 = v501 / v503;
      v502 = v502 / v503;
      f_.v542 = __PAIR64__(LODWORD(v502), LODWORD(v501));
    }
    if (v495 == 8) {
      goto LABEL_666;
    }
    LANES64(f_.v548).n64_u64[0] = a1;
    f_.v549 = &f_.v542;
    *(_QWORD*)&f_.v550 = &f_.v539;
    *((_QWORD*)&f_.v550 + 1) = &f_.v538;
    *(_QWORD*)&f_.v551 = &v545;
    *((_QWORD*)&f_.v551 + 1) = &v544;
    f_.v552 = &f_.v540;
    f_.v553 = v496 + 288;
    if ((game_zview_d13480((__int64)&f_.v548, 0x0.0p+0f) & 1) != 0 ||
        (game_zview_d13480((__int64)&f_.v548, 0x1.921fb60000000p+0f) & 1) !=
            0 ||
        (game_zview_d13480((__int64)&f_.v548, -0x1.921fb60000000p+0f) & 1) !=
            0 ||
        (game_zview_d13480((__int64)&f_.v548, 0x1.921fb60000000p+1f) & 1) !=
            0) {
      v502 = *((float*)&f_.v542 + 1);
      {
        __typeof__(v501) z_ = (__typeof__(v501)){0};
        LODWORD(z_) = f_.v542;
        v501 = z_;
      }
    LABEL_666:
      LANES128(v226).n128_f32[0] =
          (float)(PSEUDO_UNFUSED(v502 * v502)) + (float)(v501 * v501);
      if (!(LANES128(v226).n128_f32[0] > 0x0.0p+0f)) {
        v505 = 1;
        v233 = 0x0.0p+0f;
      }
      else {
        if (v501 != 0x0.0p+0f || v502 != 0x0.0p+0f) {
          v504 =
              __builtin_elementwise_sqrt((float)(LANES128(v226).n128_f32[0]));
          v501 = v501 / v504;
          v502 = v502 / v504;
        }
        v233 = GameRoutine_1a0ab40(v501, v502),
        v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        v505 = 1;
      }
      goto LABEL_673;
    }
    v505 = 0;
  LABEL_673:
    v494 = (__int64*)LANES128(f_.v546).n128_u64[0];
  LABEL_674:
    if (v494 != nullptr) {
      LANES128(f_.v546).n128_u64[1] = (unsigned __int64)v494;
      v506 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v506 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v506, (__int64)v494),
          v321 =
              COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    if (v505 == 0) {
      break;
    }
    v507 = v233;
    if (*(_BYTE*)(a1 + 716) != 1) {
      goto LABEL_694;
    }
    v508 = *(float*)(a1 + 712);
    v509 = GameRoutine_1a0a6a0(v233 - v508, 0x1.921fb60000000p+2f),
    v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    if (!(v509 < 0x0.0p+0f)) {
      v510 = v509 + 0x0.0p+0f;
    }
    else {
      v510 = (float)(v509 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
    }
    if (v510 > 0x1.921fb60000000p+1f) {
      v510 = v510 + -0x1.921fb60000000p+2f;
    }
    v511 = v508 + v510;
    if (!(v508 > v511)) {
      if (!(v508 < v511)) {
        goto LABEL_691;
      }
      v508 = v523 + v508;
      if (!(v508 > v511)) {
        goto LABEL_691;
      }
    LABEL_690:
      v508 = v511;
      goto LABEL_691;
    }
    v508 = v508 - v523;
    if (v508 < v511) {
      goto LABEL_690;
    }
  LABEL_691:
    v512 = GameRoutine_1a0a6a0(v508 + 0x1.921fb60000000p+1f,
                               0x1.921fb60000000p+2f) +
           -0x1.921fb60000000p+1f,
    v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    if (!(v512 < -0x1.921fb60000000p+1f)) {
      v507 = v512;
    }
    else {
      v507 = v512 + 0x1.921fb60000000p+2f;
    }
  LABEL_694:
    *(float*)(a1 + 712) = v507;
    *(_BYTE*)(a1 + 716) = 1;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_22110c8) != 0) {
      GameData_22110c0 = 0x3F80000000000000LL;
      __cxa_guard_release((__int64)&GameData_22110c8),
          v321 =
              COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v513 = v507 + (float)(roundf(v507 * 0x1.45f3060000000p-3f) *
                          -0x1.921fb60000000p+2f);
    if (!(v513 > 0x1.921fb60000000p+0f)) {
      v515 = 0x1.0000000000000p+0f;
      if (!(v513 < -0x1.921fb60000000p+0f)) {
        goto LABEL_700;
      }
      v514 = -0x1.921fb60000000p+1f;
    }
    else {
      v514 = 0x1.921fb60000000p+1f;
    }
    v513 = v514 - v513;
    v515 = -0x1.0000000000000p+0f;
  LABEL_700:
    v516 = v513 * v513;
    v488 = 0x1.0000000000000p+0f;
    v517 =
        v513 *
        (float)((float)((float)(v527 +
                                (float)((float)(v532 +
                                                (float)((float)(v528 +
                                                                (float)((float)(v534 +
                                                                                (float)(v530 *
                                                                                        (float)(v513 *
                                                                                                v513))) *
                                                                        (float)(v513 *
                                                                                v513))) *
                                                        (float)(v513 * v513))) *
                                        (float)(v513 * v513))) *
                        (float)(v513 * v513)) +
                0x1.0000000000000p+0f);
    LANES128(v226).n128_f32[0] =
        v515 *
        (float)((float)((float)(v484 +
                                (float)((float)(v529 +
                                                (float)((float)(v525 +
                                                                (float)((float)(v531 +
                                                                                (float)(v526 *
                                                                                        v516)) *
                                                                        v516)) *
                                                        v516)) *
                                        v516)) *
                        v516) +
                0x1.0000000000000p+0f);
    LANES128(v23).n128_u32[0] =
        DWORDn(GameData_22110c0, sizeof(GameData_22110c0) / 4 - 1);
    LANES128(v22).n128_u32[0] = GameData_22110c0;
    PSEUDO_LOW_LANE128(v24, n128_f32, *((float*)&GameData_22110c0 + 1) * v517);
    v518 = (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v517)) +
           (float)(*(float*)&GameData_22110c0 * LANES128(v226).n128_f32[0]);
    v519 = (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) *
                                  LANES128(v226).n128_f32[0])) -
           (float)(*(float*)&GameData_22110c0 * v517);
    LANES128(v226).n128_u32[1] = 872415232;
    if (!(v536 < 0x1.0000000000000p-23f) &&
        (*(_QWORD*)(*(_QWORD*)(a1 + 8) + 384LL) & 0x40000000) != 0) {
      if (v518 != 0x0.0p+0f ||
          (v520 =
               (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) *
                                      v517)) +
               (float)(*(float*)&GameData_22110c0 * LANES128(v226).n128_f32[0]),
           v521 = v519, v519 != 0x0.0p+0f)) {
        v522 = __builtin_elementwise_sqrt((float)(PSEUDO_UNFUSED(v519 * v519)) +
                                          (float)(v518 * v518));
        v520 = v518 / v522;
        v521 = v519 / v522;
      }
      v486 = *(float*)(a1 + 668);
      v487 = *(float*)(a1 + 672);
      if (v486 != 0x0.0p+0f || v487 != 0x0.0p+0f) {
        v485 = __builtin_elementwise_sqrt((float)(PSEUDO_UNFUSED(v487 * v487)) +
                                          (float)(v486 * v486));
        v486 = v486 / v485;
        v487 = v487 / v485;
      }
      v484 = v524;
      v488 =
          (float)(fminf(
                      fmaxf(GameRoutine_1a0a550(
                                0x1.0000000000000p+0f -
                                    fabsf((float)(PSEUDO_UNFUSED(v521 * v487)) +
                                          (float)(v520 * v486)),
                                0x1.0000000000000p-1f),
                            0x0.0p+0f),
                      0x1.0000000000000p+0f) *
                  0x1.0000000000000p-1f) +
          0x1.0000000000000p-1f,
      v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    LANES128(v226).n128_f32[0] = v332 * v519;
    ++v483;
    v482 = v482 + (float)(PSEUDO_UNFUSED((float)(v332 * v518) * v488));
    v481 = v481 + (float)(PSEUDO_UNFUSED((float)(v332 * v519) * v488));
  } while (v483 != 8);
  if ((float)((float)(PSEUDO_UNFUSED(v481 * v481)) + (float)(v482 * v482)) >
      0x0.0p+0f) {
    LANES128(v226).n128_u32[0] = *(_DWORD*)(a1 + 292);
    *(float*)(a1 + 292) =
        (float)(PSEUDO_UNFUSED(v482 * 0x1.0000000000000p-1f)) +
        LANES128(v226).n128_f32[0];
    *(float*)(a1 + 296) =
        (float)(PSEUDO_UNFUSED(v481 * 0x1.0000000000000p-1f)) +
        *(float*)(a1 + 296);
    v244 = GameData_212d310;
    goto LABEL_365;
  }
  v244 = GameData_212d310;
  if (*(_BYTE*)(a1 + 716) == 1) {
  LABEL_364:
    *(_BYTE*)(a1 + 716) = 0;
  }
LABEL_365:
  v268 = *(_QWORD*)(a1 + 8);
  v269 = (float*)(a1 + 292);
  if (*(_DWORD*)(v268 + 376) == 5) {
    goto LABEL_440;
  }
  v270 = *(_QWORD*)(v268 + 16);
  if ((*(_BYTE*)(v270 + 288) & 1) != 0 || *(_BYTE*)(v270 + 289) != 1) {
    goto LABEL_440;
  }
  v271 = *(_QWORD*)(a1 + 344);
  LANES128(v272).n128_u64[0] = *(_QWORD*)v269;
  DWORDn(v273, sizeof(v273) / 4 - 1) = 0;
  {
    __typeof__(v273) z_ = (__typeof__(v273)){0};
    LODWORD(z_) = DWORDn(*(_QWORD*)v269, sizeof(*(_QWORD*)v269) / 4 - 1);
    v273 = z_;
  }
  LANES128(f_.v546).n128_u64[0] = *(_QWORD*)(a1 + 336);
  LANES128(f_.v546).n128_u64[1] = v271;
  LANES128(v272).n128_u32[1] = *(_DWORD*)(a1 + 576);
  v274 = *(_QWORD*)(v268 + 312);
  v275 = *(float*)(v268 + 528);
  *(_QWORD*)&f_.v550 = *(_QWORD*)(v268 + 304);
  *((_QWORD*)&f_.v550 + 1) = v274;
  v277 = *(_QWORD*)(v268 + 288);
  v276 = *(unsigned __int64**)(v268 + 296);
  LANES128(v272).n128_u64[1] = LODWORD(v273);
  *(_QWORD*)&f_.v551 = *(_QWORD*)(v268 + 320);
  LANES64(f_.v548).n64_u64[0] = v277;
  f_.v549 = v276;
  v545 = v272;
  if ((f_.v551 & 1) != 0) {
    v278 = (*(_QWORD*)(v268 + 384) & 0x40040000LL) != 0;
    v279 = (*(_QWORD*)(v268 + 384) & 0x40040000LL) == 0;
  }
  else {
    v278 = false;
    v279 = true;
  }
  v295 = GameData_212ebd0[0];
  if ((*(_BYTE*)(a1 + 936) & 1) != 0) {
    if ((game_zview_d17160(v275, *GameData_212ebd0[0], (__int64)&f_.v548,
                           &f_.v546, &v545) &
         1) != 0) {
      *(_BYTE*)(a1 + 936) = 0;
      goto LABEL_406;
    }
    v297 = *(unsigned __int8*)(a1 + 936);
    v72 = (v297 & 1) == 0;
    v296 = v297 ^ 1;
    if (!v72) {
      v275 = 0x1.cccccc0000000p-2f;
    }
    goto LABEL_409;
  }
  if ((*(_BYTE*)(v268 + 568) & 2) != 0 ||
      *(_DWORD*)(*(_QWORD*)v244 + 8LL) != 3 ||
      (*(_QWORD*)(a1 + 24) & 0x1FFFFFFFFLL) != 0x100000001LL) {
  LABEL_406:
    v296 = 1;
    goto LABEL_409;
  }
  v296 = 1;
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL) + 220LL) == 1) {
    *(_BYTE*)(a1 + 936) = 1;
    v275 = 0x1.cccccc0000000p-2f;
    goto LABEL_412;
  }
LABEL_409:
  if ((v279 & v296) == 1 && (*(_BYTE*)(a1 + 752) & 1) != 0) {
    v298 = *(float*)(a1 + 296) - COERCE_FLOAT(*(_QWORD*)(a1 + 344));
    LANES128(v226).n128_u32[0] = *(_DWORD*)(a1 + 292);
    v273 = 0x1.0000034000000p-191;
    if ((float)((float)(PSEUDO_UNFUSED(v298 * v298)) +
                (float)((float)(LANES128(v226).n128_f32[0] -
                                COERCE_FLOAT(*(_OWORD*)(a1 + 336))) *
                        (float)(LANES128(v226).n128_f32[0] -
                                COERCE_FLOAT(*(_OWORD*)(a1 + 336))))) <
        0x1.0000000000000p-23f) {
      goto LABEL_439;
    }
  }
LABEL_412:
  if (BYTE4(f_.v549) == 1) {
    if (*(_DWORD*)(*(_QWORD*)v244 + 8LL) != 1 ||
        (*(_BYTE*)(*(_QWORD*)(a1 + 8) + 388LL) & 0x10) != 0) {
      v299 = LANES64(f_.v548).n64_u32[0] & 0xFFFFFFFB;
    }
    else {
      v299 = LANES64(f_.v548).n64_u32[0] | 4;
    }
    LANES64(f_.v548).n64_u32[0] = v299;
  }
  if (!v278) {
    if ((f_.v551 & 1) != 0) {
      v300 = 0;
      goto LABEL_423;
    }
  LABEL_725:
    GameRoutine_8123d0(),
        v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if ((f_.v551 & 1) == 0) {
    goto LABEL_725;
  }
  v300 = 1;
LABEL_423:
  DWORDn(f_.v550, sizeof(f_.v550) / 4 - 1) = v300;
  v301 = *v295;
  v544 = v545;
  if ((game_zview_d16b40(v275, v273, LANES128(v226).n128_f64[0],
                         LANES128(v22).n128_f64[0], LANES128(v23).n128_f64[0],
                         LANES128(v24).n128_f64[0], v25, v301,
                         (__int64)&f_.v548, (__int128*)&v544,
                         LANES128(f_.v546).n128_u64, (__int64)&v545) &
       1) != 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 387LL) & 0x40) != 0) {
      v302 = *(_QWORD*)(a1 + 464);
      v303 = *(_QWORD*)(a1 + 896);
      f_.v542 = *(_QWORD*)(a1 + 888);
      f_.v543 = v303;
      if (v303 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v303 + 8), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_d78880(v302, &f_.v542),
          v321 =
              COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      v304 = f_.v543;
      if (f_.v543 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(f_.v543 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v304 + 16LL))(v304),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v304),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v305 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0),
      v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      v306 = *(_QWORD*)(a1 + 896);
      *(_QWORD*)(v305 + 8) = 0;
      *(_QWORD*)(v305 + 16) = 0;
      *(_QWORD*)(v305 + 32) = 0;
      *(_DWORD*)(v305 + 40) = 0;
      *(_QWORD*)(a1 + 896) = v305;
      *(_QWORD*)v305 = GameData_1fdaba8;
      *(_QWORD*)(v305 + 24) = 0x3F8000003F800000LL;
      *(_QWORD*)(a1 + 888) = v305 + 24;
      if (v306 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v306 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v306 + 16LL))(v306),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v306),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      **(_DWORD**)(a1 + 888) = 1063675494;
      *(_QWORD*)(*(_QWORD*)(a1 + 888) + 8LL) = 0x3E19999A3E19999ALL;
      v307 = *(__int64**)(a1 + 464);
      v308 = *(_QWORD*)(a1 + 896);
      f_.v540 = *(_QWORD*)(a1 + 888);
      f_.v541 = v308;
      if (v308 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v308 + 8), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_d78b40(v307, &f_.v540),
          v321 =
              COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      v309 = f_.v541;
      if (f_.v541 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(f_.v541 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v309 + 16LL))(v309),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v309),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
    *(int32x2_t*)(a1 + 292) =
        vzip1_s32(COERCE_AS(int32x2_t, LANES128(v544).n128_u64[0]),
                  COERCE_AS(int32x2_t,
                            LANES128_OF(vextq_s8(v544, v544, 8u)).n128_u64[0]));
  }
LABEL_439:
  v268 = *(_QWORD*)(a1 + 8);
LABEL_440:
  if (*(_DWORD*)(*(_QWORD*)v244 + 8LL) == 1) {
    v310 = *(_QWORD*)(v268 + 384);
    if ((v310 & 0x1000000000LL) == 0 && *(_DWORD*)(v268 + 376) != 5) {
      v311 = *(int32x2_t**)(v268 + 16);
      if ((LANES64(v311[36]).n64_u8[0] & 1) == 0 && (v310 & 0x40000000) == 0 &&
          (LANES64(v311[36]).n64_u8[1] & 1) != 0) {
        v312 = *(float*)(v268 + 528);
        v313 = *(_QWORD*)(v268 + 168);
        f_.v547 = 0;
        f_.v546 = (__typeof__(f_.v546)){0};
        if (v313 != 0) {
          v314 = *(char*)(v313 + 584);
          v315 = *(char*)(v313 + 585);
          v316 = *(_DWORD*)(v313 + 592);
        }
        else {
          LANES128(v545).n128_u64[0] =
              LANES64_OF(
                  vzip1_s32(
                      v311[70],
                      COERCE_AS(
                          int32x2_t,
                          LANES128_OF(
                              vextq_s8(*(int8x16_t*)LANES64(v311[70]).n64_u64,
                                       *(int8x16_t*)LANES64(v311[70]).n64_u64,
                                       8u))
                              .n128_u64[0])))
                  .n64_u64[0];
          game_d74a00((void*)((__int64)&f_.v548), (float*)&v545),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          v314 = DWORD2(f_.v550);
          v315 = DWORDn(f_.v550, sizeof(f_.v550) / 4 - 1);
          v316 = 1;
        }
        GameRoutine_d96580((__int64*)&f_.v546, v314, v315, v316),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        v318 = *(float*)(a1 + 292);
        v319 = *(float*)(a1 + 296);
        v320 = game_d96860(&f_.v546, (float*)(a1 + 292), v312),
        v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        *(float*)(a1 + 296) = v321;
        *(float*)(a1 + 292) = v320;
        if (__builtin_elementwise_sqrt(
                (float)(PSEUDO_UNFUSED((float)(v321 - v319) *
                                       (float)(v321 - v319))) +
                (float)((float)(v320 - v318) * (float)(v320 - v318))) >
            0x1.0000000000000p-1f) {
          v322 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
          *(_QWORD*)(*(_QWORD*)(v322 + 328) + 184LL) = 0x3EB333333EB33333LL;
          v323 = *(_QWORD*)(v322 + 328);
          v324 = *(_QWORD*)(v323 + 360);
          *(_QWORD*)(v323 + 176) = 0;
          *(_DWORD*)(v323 + 192) = 0;
          *(_BYTE*)(v323 + 196) = 1;
          *(_BYTE*)(v323 + 369) = 1;
          CharacterModel_cf5c00(v324),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          v325 = *(_QWORD*)(v322 + 328);
          v326 = *(float*)(v325 + 192);
          if (v326 < 0x1.3333340000000p-3f) {
            v326 = 0x1.3333340000000p-3f;
          }
          *(float*)(v325 + 192) = v326;
          v327 = *(_QWORD*)(v322 + 328);
          *(_DWORD*)(v327 + 176) = 1065353216;
          if (game_ProcFadeView_instance_ != 0) {
            v328 = game_ProcFadeView_instance_ +
                   ((unsigned __int64)*(
                        unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                    << 6);
            if (*(float*)(v328 + 172) == *(float*)(v328 + 168)) {
              v329 = COERCE_AS(__typeof__(v329),
                               (*(__n128(**)(unsigned __int64))(
                                   *(_QWORD*)(v328 + 160) + 16LL))(v328 + 160)),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
            }
            else {
              v329 = *(_OWORD*)(v328 + 208);
            }
            if (*((float*)&v329 + 3) == 0x1.0000000000000p+0f &&
                LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                             (_QWORD*)(*(_QWORD*)(v328 + 160) + 16LL))(
                                v328 + 160, *((float*)&v329 + 3)))
                        .n128_f32[3] == 0x1.0000000000000p+0f) {
              v339 = *(_DWORD*)(v327 + 176);
              *(_DWORD*)(v327 + 192) = 0;
              *(_DWORD*)(v327 + 180) = v339;
            }
          }
          *(_BYTE*)(v327 + 196) = 1;
        }
        if (LANES128(f_.v546).n128_u64[0] != 0) {
          LANES128(f_.v546).n128_u64[1] = LANES128(f_.v546).n128_u64[0];
          v340 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v340 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v340,
                                        LANES128(f_.v546).n128_i64[0]),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
        }
        v268 = *(_QWORD*)(a1 + 8);
      }
    }
  }
  v341 = *(_QWORD*)(v268 + 384);
  v342 = *(float*)(*(_QWORD*)(v268 + 8) + 228LL);
  if (v342 > 0x0.0p+0f) {
    v343 = *(float**)(a1 + 776);
    v344 = *(_QWORD*)(a1 + 784);
    v537 = v341;
    v345 = (float)(*(float*)(a1 + 292) - COERCE_FLOAT(*(_OWORD*)(a1 + 336))) /
           v342;
    v346 = (float)(*(float*)(a1 + 296) - COERCE_FLOAT(*(_QWORD*)(a1 + 344))) /
           v342;
    if ((unsigned __int64)v343 >= v344) {
      v350 = *(_QWORD*)(a1 + 768);
      v351 = (char*)v343 - v350;
      v352 = ((__int64)v343 - v350) >> 3;
      v353 = v352 + 1;
      if ((unsigned __int64)(v352 + 1) >> 61 != 0) {
        GameRoutine_d13ce0(),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v354 = v344 - v350;
      if (v354 >> 2 > v353) {
        v353 = v354 >> 2;
      }
      if ((unsigned __int64)v354 >= 0x7FFFFFFFFFFFFFF8LL) {
        v355 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v355 = v353;
      }
      if (v355 >> 61 != 0) {
        GameRoutine_60a210(),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v347 = (float*)(a1 + 292);
      v348 = v244;
      v356 = fw_memory_g_heap_manager_ptr;
      v357 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v355, 16, 0),
      v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      v358 = (float*)&v351[v357];
      v359 = v357 + 8 * v355;
      *v358 = v345;
      v358[1] = v346;
      v349 = (__int64)&v351[v357 + 8];
      if ((float*)v350 != v343) {
        v360 = (float*)v350;
        v361 = &v351[v357 + -8 * v352];
        do {
          v362 = *(_QWORD*)v360;
          v360 += 2;
          *(_QWORD*)v361 = v362;
          v361 += 8;
        } while (v360 != v343);
      }
      *(_QWORD*)(a1 + 768) = &v351[v357 + -8 * v352];
      *(_QWORD*)(a1 + 776) = v349;
      *(_QWORD*)(a1 + 784) = v359;
      if (v350 != 0) {
        v363 = 128;
        if (*(_QWORD*)(*(_QWORD*)v356 + 200LL) == 0) {
          v363 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v356 + v363, v350),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
    else {
      v347 = (float*)(a1 + 292);
      v348 = v244;
      *v343 = v345;
      v343[1] = v346;
      v349 = (__int64)(v343 + 2);
    }
    v364 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 776) = v349;
    v365 = *(float*)(a1 + 584);
    v366 = *(float*)(a1 + 588);
    v367 = *(float*)(a1 + 364);
    v368 = *(float*)(a1 + 368);
    v369 = *(_QWORD*)(v364 + 384);
    v370 = *(__int64**)(a1 + 464);
    v533 = *(float*)(a1 + 600);
    v371 = *v370;
    v372 = v370[1];
    if (*v370 == v372) {
      v373 = 0x1.0000000000000p+0f;
    }
    else {
      v373 = 0x1.0000000000000p+0f;
      do {
        v375 = *(float**)v371;
        v374 = *(_QWORD*)(v371 + 8);
        if (v374 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v374 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v375 != nullptr) {
          v376 = v375[3];
          if (!(v376 > 0x0.0p+0f)) {
            v379 = *v375;
          }
          else {
            v377 = v375[1];
            v378 = v375[2] / v376;
            if (v377 > 0x0.0p+0f) {
              v378 = GameRoutine_1a0a550(v378, v377),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
            }
            v379 =
                (float)(fminf(fmaxf(v378, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                        (float)(*v375 + -0x1.0000000000000p+0f)) +
                0x1.0000000000000p+0f;
          }
          v373 = v373 * v379;
        }
        if (v374 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v374 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v374 + 16LL))(v374),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak(v374),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
        }
        v371 += 16;
      } while (v371 != v372);
    }
    v380 = 0x0.0p+0f;
    if ((float)(v368 - v367) != 0x0.0p+0f) {
      v381 = ((v373 > 0x1.0000000000000p+0f) & ((unsigned int)v369 >> 10)) != 0
                 ? 0x1.0000000000000p+0f
                 : v373;
      v382 = __builtin_elementwise_sqrt((float)(PSEUDO_UNFUSED(v366 * v366)) +
                                        (float)(v365 * v365));
      v383 = v533 * v381;
      v384 = (float)((float)(PSEUDO_UNFUSED(v382 * v383)) - v367) /
             (float)(v368 - v367);
      v380 = !(v384 > 0x1.0000000000000p+0f)
                 ? (float)((float)(PSEUDO_UNFUSED(v382 * v383)) - v367) /
                       (float)(v368 - v367)
                 : 0x1.0000000000000p+0f;
      if (v384 < 0x0.0p+0f) {
        v380 = 0x0.0p+0f;
      }
    }
    v385 = *(char**)(a1 + 776);
    v386 = *(char**)(a1 + 768);
    LODWORD(v341) = v537;
    v244 = v348;
    v269 = v347;
    v387 = (int)(float)((float)(fminf(fmaxf(v380, 0x0.0p+0f),
                                      0x1.0000000000000p+0f) *
                                0x1.0000000000000p+1f) +
                        0x1.8000000000000p+1f);
    if (v387 < (v385 - v386) >> 3) {
      do {
        v397 = v386 + 8;
        v398 = v386;
        if (v386 + 8 != v385) {
          do {
            v399 = *((_DWORD*)v397 + 1);
            *((_DWORD*)v397 - 2) = *(_DWORD*)v397;
            *((_DWORD*)v397 - 1) = v399;
            v397 += 8;
          } while (v397 != v385);
          v386 = *(char**)(a1 + 768);
          v398 = v397 - 8;
        }
        *(_QWORD*)(a1 + 776) = v398;
        v385 = v398;
      } while (v387 < (v398 - v386) >> 3);
    }
  }
  if (*(float*)(a1 + 664) > 0x0.0p+0f) {
    v388 = *(float*)(a1 + 588);
    v389 = *(float*)(a1 + 584);
    v390 = 0x0.0p+0f;
    v391 = (float)(PSEUDO_UNFUSED(v388 * v388)) + (float)(v389 * v389);
    if (!(v391 > 0x0.0p+0f)) {
      v394 = 0;
      v395 = 0;
      v396 = 0;
      v393 = 0x0.0p+0f;
    }
    else {
      if (v389 != 0x0.0p+0f || v388 != 0x0.0p+0f) {
        v392 = __builtin_elementwise_sqrt((float)(v391));
        v389 = v389 / v392;
        v388 = v388 / v392;
      }
      v393 = GameRoutine_1a0ab40(v389, v388),
      v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      v394 = 0;
      v395 = 0;
      v396 = 0;
    }
    goto LABEL_564;
  }
  v400 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if ((*(_BYTE*)(a1 + 129) & 1) != 0 && (*(_BYTE*)(v400 + 216) & 2) != 0 &&
      (float)((float)(PSEUDO_UNFUSED(*(float*)(a1 + 680) *
                                     *(float*)(a1 + 680))) +
              (float)(*(float*)(a1 + 676) * *(float*)(a1 + 676))) <
          0x1.0000000000000p-23f) {
    v401 = *(float*)(a1 + 588);
    v402 = *(float*)(a1 + 584);
    v403 = (float)(PSEUDO_UNFUSED(v401 * v401)) + (float)(v402 * v402);
    v404 = v403 > 0x0.0p+0f & v403 < 0x1.47ae160000000p-1f;
    if (v404 && (float)((float)(PSEUDO_UNFUSED(*(float*)(a1 + 628) *
                                               *(float*)(a1 + 628))) +
                        (float)(*(float*)(a1 + 624) * *(float*)(a1 + 624))) <
                    0x1.47ae160000000p-1f) {
      if (v402 != 0x0.0p+0f || v401 != 0x0.0p+0f) {
        v405 = __builtin_elementwise_sqrt((float)(v403));
        v402 = v402 / v405;
        v401 = v401 / v405;
      }
      v393 = GameRoutine_1a0ab40(v402, v401),
      v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      v394 = 0x100000000LL;
      v396 = 1056964608;
      v390 = 0x1.921fb60000000p+2f;
      v395 = 0x100000000LL;
      goto LABEL_564;
    }
  }
  if (!(*(float*)(v400 + 228) > 0x0.0p+0f)) {
    goto LABEL_597;
  }
  if ((float)((float)(PSEUDO_UNFUSED(*(float*)(a1 + 588) *
                                     *(float*)(a1 + 588))) +
              (float)(*(float*)(a1 + 584) * *(float*)(a1 + 584))) <=
      0x0.0p+0f) {
    goto LABEL_597;
  }
  v406 = *(float*)(a1 + 672);
  v407 = *(float*)(a1 + 668);
  v408 = (float)(PSEUDO_UNFUSED(v406 * v406)) + (float)(v407 * v407);
  if (!(v408 > 0x0.0p+0f)) {
    goto LABEL_597;
  }
  if ((v341 & 0x40000000) != 0) {
    if (v407 != 0x0.0p+0f || v406 != 0x0.0p+0f) {
      v447 = __builtin_elementwise_sqrt((float)(v408));
      v407 = v407 / v447;
      v406 = v406 / v447;
    }
    v393 = GameRoutine_1a0ab40(v407, v406),
    v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    v395 = 0;
    v396 = 0;
    v394 = 0x100000000LL;
    v390 = 0x1.f6a7a40000000p+3f;
  LABEL_564:
    v421 = v396 | v395;
    v422 = *(float**)(a1 + 856);
    v423 = v394 | LODWORD(v390);
    if (v422 != nullptr) {
      *v422 = v393;
      v424 = *(_QWORD*)(a1 + 856);
      *(_BYTE*)(v424 + 8) = BYTE4(v423);
      *(_DWORD*)(v424 + 4) = v423;
      v425 = *(_QWORD*)(a1 + 856);
      *(_BYTE*)(v425 + 16) = BYTE4(v421);
      *(_DWORD*)(v425 + 12) = v421;
      goto LABEL_597;
    }
    v426 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0),
    v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    v427 = *(_QWORD*)(a1 + 864);
    v426[1] = 0;
    v426[2] = 0;
    v426[5] = 0;
    v426[6] = 0;
    v426[7] = 0;
    v426[8] = 0;
    v426[9] = 0;
    v426[10] = 0;
    v426[11] = 0;
    *(_QWORD*)(a1 + 864) = v426;
    *v426 = GameData_1fdabf8;
    v426[4] = 0;
    v428 = v426 + 4;
    *(_QWORD*)(a1 + 856) = v426 + 4;
    if (v427 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v427 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v427 + 16LL))(v427),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v427),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v429 = *(_QWORD*)(a1 + 864);
      v430 = *(_QWORD*)(a1 + 488);
      v428 = *(_QWORD**)(a1 + 856);
      if (v429 == 0) {
        v431 = 1;
      LABEL_573:
        v432 = *(_QWORD*)(v430 + 208);
        *(_QWORD*)(v430 + 200) = v428;
        *(_QWORD*)(v430 + 208) = v429;
        if (v432 != 0) {
          std___1___shared_weak_count___release_weak(v432),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
        }
        if ((v431 & 1) == 0) {
          std___1___shared_weak_count___release_weak(v429),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
        }
        **(float**)(a1 + 856) = v393;
        v433 = *(_QWORD*)(a1 + 856);
        *(_BYTE*)(v433 + 8) = BYTE4(v423);
        *(_DWORD*)(v433 + 4) = v423;
        v434 = *(_QWORD*)(a1 + 856);
        *(_BYTE*)(v434 + 16) = BYTE4(v421);
        *(_DWORD*)(v434 + 12) = v421;
        v435 = *(_QWORD*)(a1 + 488);
        v436 = *(_QWORD*)(*(_QWORD*)(v435 + 8) + 8LL);
        if (*(_BYTE*)(v435 + 104) == 1) {
          v437 = *(float*)(v435 + 96);
        }
        else {
          v438 = *(_QWORD*)(v436 + 600);
          v437 = 0x0.0p+0f;
          if (v438 != 0) {
            v439 = 0x1.99999a0000000p-3f;
          }
          else {
            v439 = 0x0.0p+0f;
          }
          if (v438 != 0) {
            v437 = GameRoutine_1a0a6a0(**(float**)(v436 + 144),
                                       0x1.99999a0000000p-3f),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
          }
          *(float*)(v435 + 100) = v439;
          *(_BYTE*)(v435 + 109) = 1;
          *(_BYTE*)(v435 + 104) = 1;
        }
        v440 = *(unsigned __int8*)(v435 + 320);
        *(_DWORD*)(v435 + 112) = 0;
        *(_BYTE*)(v435 + 108) = 0;
        *(float*)(v435 + 96) = v437 + 0x0.0p+0f;
        if (v440 == 1) {
          game_zview_d33900((void*)((__int64)&f_.v548), *(_QWORD*)(v436 + 24)),
              v321 = COERCE_AS(__typeof__(v321),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          if (*(unsigned __int8*)(v435 + 320) == f_.v555) {
            if (*(_BYTE*)(v435 + 320) != 0) {
              v441 = f_.v550;
              v442 = f_.v551;
              v443 = LANES64(f_.v548).n64_u64[0];
              *(_QWORD*)(v435 + 304) = f_.v554[0];
              v444 = *(_QWORD*)((char*)f_.v554 + 5);
              *(_QWORD*)(v435 + 240) = v443;
              *(_QWORD*)(v435 + 256) = v441;
              *(_QWORD*)(v435 + 272) = v442;
              v445 = *(_OWORD*)(v435 + 256);
              v446 = *(_OWORD*)(v435 + 272);
              *(_QWORD*)(v435 + 309) = v444;
              *((_QWORD*)&v445 + 1) = DWORD2(v441);
              *((_QWORD*)&v446 + 1) = DWORD2(v442);
              *(_DWORD*)(v435 + 288) = (_DWORD)f_.v552;
              *(_OWORD*)(v435 + 256) = v445;
              *(_OWORD*)(v435 + 272) = v446;
            }
          }
          else if (*(_BYTE*)(v435 + 320) != 0) {
            *(_BYTE*)(v435 + 320) = 0;
          }
          else {
            v448 = (int)f_.v552;
            *(float32x2_t*)(v435 + 240) = f_.v548;
            v449 = f_.v550;
            *(_DWORD*)(v435 + 288) = v448;
            *(_OWORD*)(v435 + 256) = v449;
            v450 = f_.v551;
            *(_QWORD*)(v435 + 304) = f_.v554[0];
            v451 = *(_QWORD*)((char*)f_.v554 + 5);
            *(_OWORD*)(v435 + 272) = v450;
            *(_QWORD*)(v435 + 309) = v451;
            *(_BYTE*)(v435 + 320) = 1;
          }
        }
        CharacterRotate_d50de0(v435),
            v321 =
                COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
        goto LABEL_597;
      }
    }
    else {
      v430 = *(_QWORD*)(a1 + 488);
      v429 = (__int64)v426;
    }
    v431 = 0;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v429 + 16), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v429 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_573;
  }
  v409 = *(float**)(a1 + 776);
  v410 = *(float**)(a1 + 768);
  if (v409 == v410) {
    v463 = 0x0.0p+0f;
    v464 = 0x0.0p+0f;
    v461 = 0x0.0p+0f;
    v462 = 0x0.0p+0f;
  }
  else {
    v411 = 0x0.0p+0f;
    v412 = 0x0.0p+0f;
    v413 = ((char*)v409 - (char*)v410) >> 3;
    v414 = 0x0.0p+0f;
    v415 = 0x0.0p+0f;
    do {
      v419 = *v410;
      v420 = v410[1];
      if (*v410 != 0x0.0p+0f ||
          (v417 = *v410, v418 = v410[1], v420 != 0x0.0p+0f)) {
        v416 = __builtin_elementwise_sqrt((float)(PSEUDO_UNFUSED(v420 * v420)) +
                                          (float)(v419 * v419));
        v417 = v419 / v416;
        v418 = v420 / v416;
      }
      v412 = v412 + v419;
      v411 = v411 + v420;
      v410 += 2;
      v415 = v415 + v417;
      v414 = v414 + v418;
    } while (v410 != v409);
    v461 = v412 / (float)(unsigned __int64)v413;
    v462 = v411 / (float)(unsigned __int64)v413;
    v463 = v415 / (float)(unsigned __int64)v413;
    v464 = v414 / (float)(unsigned __int64)v413;
  }
  v465 = *(float*)(a1 + 368) * 0x1.0000000000000p-1f;
  v466 = (float)(PSEUDO_UNFUSED(*(float*)(a1 + 364) * 0x1.cccccc0000000p-1f)) -
         v465;
  if (v466 != 0x0.0p+0f) {
    v467 = __builtin_elementwise_sqrt((float)(PSEUDO_UNFUSED(v462 * v462)) +
                                      (float)(v461 * v461));
    v468 = (float)(v467 - v465) / v466;
    v469 = !(v468 > 0x1.0000000000000p+0f) ? (float)(v467 - v465) / v466
                                           : 0x1.0000000000000p+0f;
    if (!(v468 < 0x0.0p+0f) && v469 > 0x0.0p+0f) {
      v393 = 0x0.0p+0f;
      v470 = (float)(PSEUDO_UNFUSED(v464 * v464)) + (float)(v463 * v463);
      if (v470 > 0x0.0p+0f) {
        if (v463 != 0x0.0p+0f || v464 != 0x0.0p+0f) {
          v471 = __builtin_elementwise_sqrt((float)(v470));
          v463 = v463 / v471;
          v464 = v464 / v471;
        }
        v393 = GameRoutine_1a0ab40(v463, v464),
        v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v472 = v467 * 0x1.0000000000000p-1f;
      if ((float)(v467 * 0x1.0000000000000p-1f) > 0x1.0000000000000p+0f) {
        v472 = 0x1.0000000000000p+0f;
      }
      v473 = (float)(fminf(fmaxf(v472, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                     0x1.3333340000000p-2f) +
             0x1.6666660000000p-1f;
      v474 = fminf(fmaxf(v469, 0x0.0p+0f), 0x1.0000000000000p+0f);
      v475 = (float)(v474 * 0x1.8000000000000p+0f) + 0x1.0000000000000p-1f;
      if (*(_DWORD*)(*(_QWORD*)v244 + 8LL) == 1) {
        v475 = (float)(v474 * 0x1.0000000000000p+1f) + 0x1.0000000000000p+1f;
      }
      v390 = v473 * (float)(v475 * 0x1.921fb60000000p+1f);
      v476 = GameRoutine_1a0a6a0(*(float*)(*(_QWORD*)(a1 + 488) + 36LL) - v393,
                                 0x1.921fb60000000p+2f),
      v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
      if (!(v476 < 0x0.0p+0f)) {
        v477 = v476 + 0x0.0p+0f;
      }
      else {
        v477 = (float)(v476 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
      }
      if (v477 > 0x1.921fb60000000p+1f) {
        v477 = v477 + -0x1.921fb60000000p+2f;
      }
      v478 =
          (float)(fabsf(v477) + -0x1.41b2f80000000p-1f) / 0x1.197c980000000p+1f;
      if (v478 > 0x1.0000000000000p+0f) {
        v479 = 0x1.0000000000000p+0f;
      }
      else {
        v479 = v478;
      }
      if (v478 < 0x0.0p+0f) {
        v479 = 0x0.0p+0f;
      }
      if (!(v479 > 0x0.0p+0f)) {
        v395 = 0;
        v396 = 0;
      }
      else {
        v395 = 0;
        v396 = 0;
        v480 = (float)((float)(fminf(fmaxf(fabsf(__builtin_elementwise_sqrt(
                                               (float)(v479))),
                                           0x0.0p+0f),
                                     0x1.0000000000000p+0f) *
                               0x1.8000000000000p+0f) +
                       0x1.0000000000000p-1f) *
               0x1.921fb60000000p+1f;
        if (v390 < v480) {
          v390 = v480;
        }
      }
      v394 = 0x100000000LL;
      goto LABEL_564;
    }
  }
LABEL_597:
  CharacterRotate_d50180(*(_QWORD*)(a1 + 488)),
      v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
  v452 = *(_QWORD*)(a1 + 8);
  v453 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v452 + 8) + 344LL) + 380LL);
  if (*(unsigned __int8*)(a1 + 192) != v453) {
    *(_BYTE*)(a1 + 192) = v453;
  }
  if ((*(_BYTE*)(a1 + 824) & 1) == 0) {
    game_cfc7c0(a1 + 136, v269, 0, *(float*)(*(_QWORD*)(v452 + 8) + 228LL)),
        v321 = COERCE_AS(__typeof__(v321), PSEUDO_REGISTER(float, "s1", "=w"));
    v452 = *(_QWORD*)(a1 + 8);
  }
  *(_BYTE*)(a1 + 824) = 0;
  v454 = *(float*)(a1 + 828);
  v455 = fabsf(*(float*)(*(_QWORD*)(v452 + 8) + 228LL));
  if (v454 > 0x0.0p+0f) {
    v454 = v454 - v455;
    if (!(v454 < 0x0.0p+0f)) {
      goto LABEL_607;
    }
  LABEL_606:
    v454 = 0x0.0p+0f;
    goto LABEL_607;
  }
  if (v454 < 0x0.0p+0f) {
    v454 = v454 + v455;
    if (v454 > 0x0.0p+0f) {
      goto LABEL_606;
    }
  }
LABEL_607:
  *(float*)(a1 + 828) = v454;
  v457 = *(float*)(a1 + 176);
  v456 = *(float*)(a1 + 180);
  if (*(_BYTE*)(a1 + 724) == 1) {
    v458 = *(float*)(a1 + 720);
    if (v457 < v458) {
      v457 = *(float*)(a1 + 720);
    }
    if (v456 < v458) {
      v456 = *(float*)(a1 + 720);
    }
  }
  v459 = *(_QWORD*)v269;
  *(float*)(a1 + 564) = v457;
  *(float*)(a1 + 576) = v457;
  *(float*)(a1 + 580) = v456;
  *(_DWORD*)(a1 + 560) = v459;
  v460 = *(_OWORD*)(a1 + 560);
  *((_QWORD*)&v460 + 1) = DWORDn(v459, sizeof(v459) / 4 - 1);
  *(_OWORD*)(a1 + 560) = v460;
}

#pragma GCC visibility pop
