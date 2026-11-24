#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_18dd980(_QWORD* result, char);
_QWORD* GameRoutine_6498b0(__int64*, _QWORD*);
_QWORD* GameRoutine_b873c0(_QWORD*, __int64*);
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___vector_b34420(PSEUDO_X8, _QWORD*, __int64,
                                              unsigned __int64, __int64,
                                              unsigned __int64, __int64);
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void wld_a85bd0(PSEUDO_X8, __int64*, __int64);
__int64* GameHr_b83490(__int64, __int64);
__int64* GameRoutine_a94c80(_QWORD*, __int64*);
__int64* GameRoutine_b3f6c0(_QWORD*, const char*);
__int64* GameRoutine_b3f800(_QWORD*, const char*);
__int64 GameHr_18dd060(_QWORD*);
__int64 GameRoutine_1a0a680(__int64, unsigned __int64, const char*,
                            unsigned __int64);
__int64 GameRoutine_b7fb70(__int64*, _QWORD*, __int64*);
__int64 GameRoutine_b81e20(__int64);
__int64 GameRoutine_b869a0(__int64 result);
__int64 GameRoutine_bf3cc0(__int64, __int64);
__int64 GameRoutine_c4a820(_QWORD*);
__int64 GameRoutine_c4e670(__int64 result, _QWORD*, __int64);
__int64 LightingAnimModule_c6da10(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 gfxa_GrassInfluenceMapUpdateTask_initialize(__int64, __int64, _QWORD*);
__int64 gfxa_c622a0(__int64 result, float32x4_t*, __int64, __int64, char);
__int64 gfxa_c65bf0(__int64 result, float);
__int64 llvm_libcxx_21_libcxx_include___functional_bf3520(__int64*, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_c4a9a0(float32x4_t*, _DWORD*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN* GameData_212c560;
extern __int128 GameData_1a82f20;
extern __int128 GameData_2228050;
extern __int64 (*GameData_1fc8098[])();
extern __int64 (*GameData_1fc80e8[])();
extern __int64 (*GameData_1fc8138[])();
extern __int64 (*GameData_1fc8188[])();
extern __int64 (*GameData_1fc8228[])();
extern __int64 (*GameData_1fc8278[])();
extern __int64 (*GameData_1fc82c8[])();
extern __int64* GameData_212c418;
extern __int64* GameData_212e908[6];
extern __int64* GameData_212e910[5];
extern __int64* GameData_212e920[3];
extern __int64* GameData_212e928[2];
extern __int64* GameData_21321d8[4];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_1fc8040;
extern __int64 GameData_1fc8050;
extern __int64 GameData_1fc8060;
extern __int64 GameData_1fc8070;
extern __int64 GameData_1fc8080;
extern __int64 GameData_2131678;
extern __int64 GameData_2132400;
extern __int64 GameData_2228060;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char* GameData_1fc8038;
extern char* GameData_1fc8048;
extern char* GameData_1fc8058;
extern char* GameData_1fc8068;
extern char* GameData_1fc8078;
extern char* GameData_21323d0;
int8x16_t* GameRoutine_b7ea80(__int64, float32x4_t*);
long double GameHr_b3ef70(__int64);
void CharaSceneSetting_Destructor(__int64);
void GameHr_1938c00(__int64);
void GameHr_1943280(_QWORD*);
void GameHr_c61fc0(__int64, __int64*);
void GameHr_c65820(__int64);
void GameRoutine_18ddc20(__int64*);
void GameRoutine_18de700(__int64*, float);
void GameRoutine_a6eb40(int*, __int64, int*);
void GameRoutine_b87610(__int64*, _QWORD*, __int64*);
void GameRoutine_bbc460(__int64, char);
void GfxLoader_c4a6e0(__int64, _QWORD*, _QWORD*);
void GlobalEnvTask_b37340(__int64, __int64, _QWORD*);
void Registration_6492e0(_QWORD*, __int64*, __int64*, __int64, int);
void gfx_render_b3aee0(float32x4_t*);
void gfxa_Probe2UpdateTask_initializeCommon(__int64, __int64, __int64*);
void gfxa_b44060(__int64, int, __int64*);
void gfxa_c649f0(unsigned int*, unsigned int, _QWORD*);
void llvm_libcxx_21_libcxx_include___vector_ad0a00(_BYTE*, float*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
float32x4_t gfx_render_b3bca0(float* a1, float32x4_t* a2);
void gfx_render_b3ca50(__int64 a1, __int64 a2);
void gfx_render_b7fd60(__int64 a1, __int64 a2, int a3, __int64* a4);
void gfx_render_b83060(__int64 a1);
void gfx_render_b853e0(__int64 a1, _QWORD* a2);
int8x16_t* GameRoutine_b7ea80_alt1(__int64, __int64*);
__int64 llvm_libcxx_21_libcxx_include___functional_bf3cc0(__int64, __int64);
int8x16_t* gfx_render_b7ea80(__int64, __int64*);

float32x4_t gfx_render_b3bca0(float* a1, float32x4_t* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  unsigned __int64 v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;

  v2 = *((unsigned int*)a1 + 1);
  v4 = *((unsigned int*)a1 + 4);
  v3 = *((unsigned int*)a1 + 5);
  v5 = *(unsigned int*)a1 | ((unsigned __int64)(unsigned int)v3 << 32);
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  v9 = *(unsigned int*)a1 | ((unsigned __int64)(unsigned int)v2 << 32);
  v10 = vmlaq_lane_f32(vmulq_n_f32(*a2, *(float*)&v5), v6,
                       COERCE_AS(float32x2_t, v5), 1);
  v11 = vmlaq_lane_f32(vmulq_n_f32(*a2, *(float*)&v9), v6,
                       COERCE_AS(float32x2_t, v9), 1);
  v12 = vmlaq_lane_f32(vmulq_n_f32(*a2, *(float*)&v4), v6,
                       COERCE_AS(float32x2_t, (v4 | (v3 << 32))), 1);
  v13 = vmlaq_lane_f32(vmulq_n_f32(*a2, *(float*)&v4), v6,
                       COERCE_AS(float32x2_t, (v4 | (v2 << 32))), 1);
  return vminq_f32(
      vminq_f32(
          vminq_f32(
              vminq_f32(
                  vminq_f32(
                      vminq_f32(
                          vminq_f32(
                              vminq_f32(
                                  vaddq_f32(v8, vmlaq_n_f32(v10, v7, a1[2])),
                                  COERCE_AS(float32x4_t, GameData_1a82f20)),
                              vaddq_f32(v8, vmlaq_n_f32(v11, v7, a1[2]))),
                          vaddq_f32(v8, vmlaq_n_f32(v12, v7, a1[2]))),
                      vaddq_f32(v8, vmlaq_n_f32(v13, v7, a1[2]))),
                  vaddq_f32(v8, vmlaq_n_f32(v10, v7, a1[6]))),
              vaddq_f32(v8, vmlaq_n_f32(v11, v7, a1[6]))),
          vaddq_f32(v8, vmlaq_n_f32(v12, v7, a1[6]))),
      vaddq_f32(v8, vmlaq_n_f32(v13, v7, a1[6])));
}

void gfx_render_b3ca50(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  int v2;
  __int128 v4;
  __int64 v5;

  v2 = *(_DWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 8) = 1;
  *(_QWORD*)&v4 = *(_QWORD*)(a2 + 16);
  *((_QWORD*)&v4 + 1) = *(unsigned int*)(a2 + 24);
  *(_OWORD*)(a1 + 16) = v4;
  v5 = *(unsigned int*)(a2 + 36);
  *(_QWORD*)&v4 = *(_QWORD*)(a2 + 28);
  *(_DWORD*)(a1 + 92) = 0;
  *((_QWORD*)&v4 + 1) = v5;
  *(_OWORD*)(a1 + 64) = v4;
  LODWORD(v4) = *(_DWORD*)(a2 + 12);
  *(_DWORD*)(a1 + 92) = 0;
  *(float*)(a1 + 96) = *(float*)&v4 * 0x1.ca5dc00000000p+5f;
  gfx_render_b3aee0((float32x4_t*)a1);
  *(_DWORD*)(a1 + 8) = v2;
}

void gfx_render_b7fd60(__int64 a1, __int64 a2, int a3, __int64* a4)
{
  __int64 v4;
  __int64 v7;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  const char* v15;
  __int64* v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  const char* v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64* v41;
  __int64* v42;
  _QWORD* v43;
  _QWORD* v44;
  _QWORD* v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  char* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  char* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  int v141;
  __int64 v142;
  __int64* v143;
  __int64 v144;
  _QWORD* v145;
  __int64* v146;
  _QWORD* v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  _QWORD* v155;
  _QWORD* v156;
  _QWORD* v157;
  __int64 v158;
  __int64 v159;
  _QWORD* v160;
  _QWORD* v161;
  _QWORD* v162;
  __int64 v163;
  __int64 v164;
  __int64* v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  _QWORD* v170;
  __int64 v171;
  _QWORD* v172;
  __int64 v173;
  _QWORD* v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  _QWORD* v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  const char* v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  _QWORD* v188;
  __int64 v189;
  _QWORD* v190;
  __int64 v191;
  _QWORD* v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  _QWORD* v198;
  __int64 v199;
  char* v200;
  __int64 v201;
  __int64* v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  _QWORD* v207;
  _QWORD* v208;
  _QWORD* v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  _QWORD* v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  _QWORD* v223;
  __int64 v224;
  char* v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64* v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  _QWORD* v234;
  __int64* v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  _QWORD* v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  _QWORD* v266;
  __int64 v267;
  char v268;
  char* v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  _QWORD* v274;
  __int64 v275;
  _QWORD* v276;
  __int64 v277;
  _QWORD* v278;
  __int64 v279;
  __int64 v280;
  _QWORD* v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  _QWORD* v285;
  __int64 v286;
  _QWORD* v287;
  __int64 v288;
  __int64 v289;
  __int64* v290;
  _QWORD* v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  unsigned int* v297;
  unsigned int v298;
  __int64 v299;
  unsigned int* v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  atomic_ullong* v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  _BYTE* v311;
  __int64 v312;
  _BYTE* v313;
  const char* v314;
  __int64 v315;
  __int64 v316;
  int v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  _QWORD** v322;
  __int64 v323;
  __int64 v324;
  __int64* v325;
  __int64 v326;
  __int64* v327;
  struct {
    __int64 v328;
    __int64 v329;
  } v328_;
  struct {
    const char* v330;
    __int64 v331;
    char* v332;
    __int64 v333;
    char* v334;
    __int64 v335;
    char* v336;
    __int64 v337;
    char* v338;
    __int64 v339;
  } v330_;
  struct {
    __int64* v340;
    const char* v341;
    char* v342;
    __int64 v343;
    __int64 v344;
    __int64 v345;
    __int64 v346;
    __int64 v347;
    __int64 v348;
    __int64 v349;
  } v340_;
  struct {
    char v350[8];
    __int64 v351;
    __int64 v352;
  } v350_;
  struct {
    __int64 v353;
    __int64 v354;
  } v353_;
  _QWORD v355[3];

  *(_QWORD*)(a1 + 208) = 0;
  v4 = a1 + 208;
  *(_QWORD*)a1 = a2;
  *(_DWORD*)(a1 + 8) = a3;
  *(_QWORD*)(a1 + 16) = 0;
  v7 = a1 + 16;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  v9 = (__int64*)(a1 + 32);
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_BYTE*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 222) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_WORD*)(a1 + 240) = 0;
  *(_BYTE*)(a1 + 344) = 0;
  *(_BYTE*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 248) = 0x40417E353F7CED91LL;
  *(_QWORD*)(a1 + 256) = 0x4060F8474538EF35LL;
  *(_BYTE*)(a1 + 432) = 0;
  *(_BYTE*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 264) = 0x4022000000000000LL;
  *(_QWORD*)(a1 + 272) = 0x100000000LL;
  *(_DWORD*)(a1 + 280) = 1;
  *(_QWORD*)(a1 + 360) = 0;
  v322 = (_QWORD**)(a1 + 360);
  *(_QWORD*)(a1 + 284) = 0;
  *(_QWORD*)(a1 + 289) = 0;
  *(_DWORD*)(a1 + 408) = -1;
  *(_DWORD*)(a1 + 424) = -1;
  v10 = *game_g_frame_clock_ptr[0];
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  v353_.v353 = 0x300000007LL;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(v4 + 288) = 0;
  *(_QWORD*)(v4 + 296) = 0;
  v323 = v4;
  v13 = fw_memory_HeapManager_Allocate(v12, 352, 16, 0);
  *(_QWORD*)(v13 + 16) = 0;
  v14 = (__int64*)(v13 + 24);
  v15 = (const char*)v13;
  *(_QWORD*)v13 = GameData_212c418 + 2;
  *(_QWORD*)(v13 + 8) = 0;
  GameRoutine_a6eb40((int*)(v13 + 24), v10, (int*)&v353_.v353);
  v340_.v340 = v14;
  v340_.v341 = v15;
  GameRoutine_6498b0((__int64*)(v10 + 13200), &v340_.v340);
  v16 = v340_.v340;
  v17 = v340_.v341;
  v18 = *(_QWORD*)(a1 + 24);
  v340_.v340 = nullptr;
  v340_.v341 = nullptr;
  v324 = a1;
  *(_QWORD*)v7 = v16;
  *(_QWORD*)(a1 + 24) = v17;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v19 = (__int64)v340_.v341;
  if (v340_.v341 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v340_.v341 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  v20 = *(_QWORD*)(*(_QWORD*)v7 + 288LL);
  *(_DWORD*)(v20 + 936) = 8;
  *(_QWORD*)(v20 + 944) = 0x800000008LL;
  *(_QWORD*)(v20 + 964) = 0x20000000200LL;
  v21 = *(_QWORD*)v7;
  if (a3 < 1) {
    if ((*(_BYTE*)(v21 + 24) & 1) != 0) {
      *(_QWORD*)(v21 + 32) = 17;
      v29 = *(char**)(v21 + 40);
    }
    else {
      *(_BYTE*)(v21 + 24) = 34;
      v29 = (char*)(v21 + 25);
    }
    strcpy(v29, "Main Render Scene");
  }
  else {
    std___1_to_string_1a0a790((void*)(&v330_.v330), (unsigned int)a3);
    v22 = GameRoutine_1a0a680((__int64)&v330_.v330, 0, "Main Render Scene ",
                              0x12u);
    v24 = *(const char**)(v22 + 8);
    v23 = *(_QWORD*)(v22 + 16);
    v340_.v340 = *(__int64**)v22;
    v340_.v341 = v24;
    v340_.v342 = (char*)v23;
    *(_QWORD*)(v22 + 8) = 0;
    *(_QWORD*)(v22 + 16) = 0;
    *(_QWORD*)v22 = 0;
    if (((unsigned __int8)v340_.v340 & 1) != 0) {
      v25 = (unsigned __int64)v340_.v341;
    }
    else {
      v25 = (unsigned __int64)(unsigned __int8)v340_.v340 >> 1;
    }
    if (((unsigned __int8)v340_.v340 & 1) != 0) {
      v26 = v340_.v342;
    }
    else {
      v26 = (char*)&v340_.v340 + 1;
    }
    GameRoutine_60a060((char*)(v21 + 24), (__int64)v26, v25);
    if (((unsigned __int8)v340_.v340 & 1) != 0 && v340_.v342 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v27, (__int64)v340_.v342);
    }
    if (((unsigned __int8)v330_.v330 & 1) != 0 && v330_.v332 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v28, (__int64)v330_.v332);
    }
  }
  *(_DWORD*)(*(_QWORD*)v7 + 236LL) = 1;
  v30 = *(_QWORD*)v7;
  v31 = *a4;
  v32 = a4[1];
  if (v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                              memory_order_relaxed);
    if (*(int*)v30 <= 0) {
    LABEL_37:
      if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
        std___1___shared_weak_count___release_weak(v32);
      }
      goto LABEL_39;
    }
    v33 = *(_QWORD**)(v30 + 112);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                              memory_order_relaxed);
  LABEL_33:
    v34 = v33[1];
    *v33 = v31;
    v33[1] = v32;
    if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      std___1___shared_weak_count___release_weak(v34);
    }
    if (v32 == 0) {
      goto LABEL_39;
    }
    goto LABEL_37;
  }
  if (*(int*)v30 > 0) {
    v33 = *(_QWORD**)(v30 + 112);
    goto LABEL_33;
  }
LABEL_39:
  v35 = *(_QWORD*)v7;
  if (**(int**)v7 >= 1 && *(int*)(v35 + 4) >= 1) {
    v36 = *(_QWORD*)(v35 + 112);
    if (*(_QWORD*)v36 != 0) {
      v37 = *(_QWORD*)(v35 + 184);
      if ((*(_BYTE*)(v37 + 8) & 1) == 0 && (*(_BYTE*)(v37 + 16) & 1) == 0) {
        *(_DWORD*)(v37 + 4) = 0;
        *(_BYTE*)(v37 + 8) = 1;
        *(_DWORD*)(v36 + 40) = 0;
        *(_BYTE*)(v36 + 44) = 1;
      }
    }
  }
  v38 = 0;
  v39 = 0;
  v40 = GameData_212c2a0;
  v326 = GameData_2132400 + 16;
  v327 = GameData_212e908[0] + 2;
  v325 = GameData_212e928[0] + 2;
  v41 = (__int64*)GameData_212c2b0;
  do {
    v42 = (__int64*)fw_memory_g_heap_manager_ptr;
    v43 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 368, 16, 0);
    v43[1] = 0;
    v43[2] = 0;
    v44 = v43;
    v43[22] = 0;
    v45 = v43;
    v43[24] = 0;
    v43[25] = 0;
    v43[42] = 0;
    v43[43] = 0;
    v43[44] = 0;
    v43[45] = 0;
    *v43 = GameData_1fc8098;
    v46 = *v42;
    v44[4] = v327;
    v340_.v340 = GameData_212e910[0];
    v340_.v341 = "ShadowVolumeCulling";
    v47 = (char*)fw_memory_HeapManager_Allocate(v46, 192, 16, 0);
    v48 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v40);
    v49 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v40 + 8);
    v47[8] = 1;
    *((_QWORD*)v47 + 6) = v48;
    *((_QWORD*)v47 + 7) = v49;
    v50 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v40);
    v51 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v40);
    *(_QWORD*)v47 = v326;
    *((_QWORD*)v47 + 8) = v50;
    *((_QWORD*)v47 + 9) = v51;
    v52 = v40[1];
    *((_QWORD*)v47 + 2) = *v40;
    *((_QWORD*)v47 + 3) = v52;
    v53 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v40 + 8);
    *((_QWORD*)v47 + 4) = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v40);
    *((_QWORD*)v47 + 5) = v53;
    v54 = *((_QWORD*)GameData_212c560 + 1);
    *((_QWORD*)v47 + 10) = *(_QWORD*)GameData_212c560;
    *((_QWORD*)v47 + 11) = v54;
    v55 = (__int64*)GameData_212c540;
    *((_QWORD*)v47 + 18) = 0;
    *((_QWORD*)v47 + 19) = 0;
    v47[176] = 0;
    v330_.v330 = v47;
    v56 = *v55;
    v57 = v55[1];
    *((_QWORD*)v47 + 12) = v56;
    *((_QWORD*)v47 + 13) = v57;
    *((_QWORD*)v47 + 20) = 0;
    *((_QWORD*)v47 + 21) = 0x3F80000000000000LL;
    GameRoutine_b7fb70(v45 + 43, &v340_.v340, (__int64*)&v330_.v330);
    v58 = v9[1];
    *v9 = (__int64)(v44 + 4);
    v9[1] = (__int64)v45;
    if (v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
      std___1___shared_weak_count___release_weak(v58);
      if ((_DWORD)v39 == 4) {
      LABEL_56:
        v109 = *v9;
        v340_.v340 = GameData_212e920[0];
        v340_.v341 = "ScreenAreaCulling";
        v110 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
        v111 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v40);
        v112 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v40 + 8);
        *((_QWORD*)v110 + 6) = 0;
        *((_QWORD*)v110 + 7) = 0;
        v84 = 1024;
        v63 = v110;
        *((_QWORD*)v110 + 2) = 0;
        *((_QWORD*)v110 + 3) = 0;
        *((_QWORD*)v110 + 4) = 0;
        *((_QWORD*)v110 + 5) = 0;
        *((_QWORD*)v110 + 8) = 0;
        *((_QWORD*)v110 + 9) = 0;
        v113 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v40);
        v114 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v40);
        *((_QWORD*)v110 + 14) = 0;
        *((_QWORD*)v110 + 15) = 0;
        *((_QWORD*)v110 + 16) = 0;
        *((_QWORD*)v110 + 17) = 0;
        *((_QWORD*)v110 + 10) = 0;
        *((_QWORD*)v110 + 11) = 0;
        *((_QWORD*)v110 + 12) = 0;
        *((_QWORD*)v110 + 13) = 0;
        v116 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v41);
        v115 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v41);
        *(_QWORD*)v110 = 0;
        *((_QWORD*)v110 + 1) = 0;
        v117 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41);
        *((_QWORD*)v110 + 24) = 0;
        *((_QWORD*)v110 + 25) = 0;
        *((_QWORD*)v110 + 20) = 0;
        *((_QWORD*)v110 + 21) = 0;
        *((_QWORD*)v110 + 18) = 0;
        *((_QWORD*)v110 + 19) = 0;
        *((_QWORD*)v110 + 22) = 0;
        *((_QWORD*)v110 + 23) = 0;
        *((_QWORD*)v110 + 26) = 0;
        *((_QWORD*)v110 + 27) = 0;
        v110[8] = 1;
        *((_DWORD*)v110 + 54) = 1024;
        v330_.v330 = v110;
        *((_QWORD*)v110 + 6) = v111;
        *((_QWORD*)v110 + 7) = v112;
        v118 = *v40;
        v119 = v40[1];
        *((_QWORD*)v110 + 8) = v113;
        *((_QWORD*)v110 + 9) = v114;
        v121 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v41);
        v120 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v41 + 8);
        *((_QWORD*)v110 + 2) = v118;
        *((_QWORD*)v110 + 3) = v119;
        v122 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v40 + 8);
        *((_QWORD*)v110 + 4) =
            *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v40);
        *((_QWORD*)v110 + 5) = v122;
        v123 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 8);
        *((_QWORD*)v110 + 14) =
            *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 16);
        *((_QWORD*)v110 + 15) = v120;
        v125 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v41);
        v124 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v41);
        *((_QWORD*)v110 + 20) = v117;
        *((_QWORD*)v110 + 21) = v123;
        *((_QWORD*)v110 + 16) = v124;
        *((_QWORD*)v110 + 17) = v115;
        v126 = *v41;
        v127 = v41[1];
        *((_QWORD*)v110 + 22) = v121;
        *((_QWORD*)v110 + 23) = v125;
        *((_QWORD*)v110 + 10) = v126;
        *((_QWORD*)v110 + 11) = v127;
        v128 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 8);
        v130 = *v41;
        v129 = v41[1];
        *((_QWORD*)v110 + 12) =
            *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41);
        *((_QWORD*)v110 + 13) = v128;
        *((_QWORD*)v110 + 18) = v130;
        *((_QWORD*)v110 + 19) = v129;
        *(_QWORD*)v110 = v325;
        v131 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v41);
        *((_QWORD*)v110 + 24) = v116;
        *((_QWORD*)v110 + 25) = v131;
        *((_QWORD*)v110 + 26) = 0x3E8000003E8LL;
        GameRoutine_b87610((__int64*)(v109 + 312), &v340_.v340,
                           (__int64*)&v330_.v330);
        goto LABEL_57;
      }
    }
    else if ((_DWORD)v39 == 4) {
      goto LABEL_56;
    }
    if ((_DWORD)v39 == 3) {
      v85 = *v9;
      v340_.v340 = GameData_212e920[0];
      v340_.v341 = "ScreenAreaCulling";
      v86 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
      v87 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v40);
      v88 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v40 + 8);
      *(_QWORD*)v86 = 0;
      v63 = v86;
      *((_QWORD*)v86 + 2) = 0;
      *((_QWORD*)v86 + 3) = 0;
      *((_QWORD*)v86 + 4) = 0;
      *((_QWORD*)v86 + 5) = 0;
      *((_QWORD*)v86 + 6) = 0;
      *((_QWORD*)v86 + 7) = 0;
      *((_QWORD*)v86 + 8) = 0;
      *((_QWORD*)v86 + 9) = 0;
      *((_QWORD*)v86 + 10) = 0;
      *((_QWORD*)v86 + 11) = 0;
      *((_QWORD*)v86 + 12) = 0;
      *((_QWORD*)v86 + 13) = 0;
      *((_QWORD*)v86 + 14) = 0;
      *((_QWORD*)v86 + 15) = 0;
      *((_QWORD*)v86 + 16) = 0;
      *((_QWORD*)v86 + 17) = 0;
      v89 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v40);
      v90 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v40);
      v91 = GameData_212e928[0] + 2;
      *((_QWORD*)v86 + 6) = v87;
      *((_QWORD*)v86 + 7) = v88;
      v92 = *v40;
      v93 = v40[1];
      *((_QWORD*)v86 + 8) = v89;
      *((_QWORD*)v86 + 9) = v90;
      v94 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41);
      *((_QWORD*)v86 + 24) = 0;
      *((_QWORD*)v86 + 25) = 0;
      *((_QWORD*)v86 + 26) = 0;
      *((_QWORD*)v86 + 27) = 0;
      *((_QWORD*)v86 + 20) = 0;
      *((_QWORD*)v86 + 21) = 0;
      *((_QWORD*)v86 + 1) = 0;
      *((_QWORD*)v86 + 18) = 0;
      *((_QWORD*)v86 + 19) = 0;
      v96 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v41);
      v95 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v41);
      *((_QWORD*)v86 + 22) = 0;
      *((_QWORD*)v86 + 23) = 0;
      v86[8] = 1;
      v330_.v330 = v86;
      *(_QWORD*)v86 = v91;
      *((_QWORD*)v86 + 2) = v92;
      *((_QWORD*)v86 + 3) = v93;
      v97 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v40 + 8);
      *((_QWORD*)v86 + 4) =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v40);
      *((_QWORD*)v86 + 5) = v97;
      v98 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 8);
      v100 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v41);
      v99 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v41 + 8);
      *((_QWORD*)v86 + 14) =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 16);
      *((_QWORD*)v86 + 15) = v99;
      v102 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v41);
      v101 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v41);
      *((_QWORD*)v86 + 20) = v94;
      *((_QWORD*)v86 + 21) = v98;
      *((_QWORD*)v86 + 16) = v101;
      *((_QWORD*)v86 + 17) = v95;
      v103 = *v41;
      v104 = v41[1];
      *((_QWORD*)v86 + 22) = v100;
      *((_QWORD*)v86 + 23) = v102;
      *((_QWORD*)v86 + 10) = v103;
      *((_QWORD*)v86 + 11) = v104;
      v105 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 8);
      v107 = *v41;
      v106 = v41[1];
      *((_QWORD*)v86 + 12) =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41);
      *((_QWORD*)v86 + 13) = v105;
      v108 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v41);
      *((_QWORD*)v86 + 18) = v107;
      *((_QWORD*)v86 + 19) = v106;
      *((_QWORD*)v86 + 24) = v96;
      *((_QWORD*)v86 + 25) = v108;
      *((_QWORD*)v86 + 26) = 0x3E8000003E8LL;
      *((_DWORD*)v86 + 54) = 1024;
      GameRoutine_b87610((__int64*)(v85 + 312), &v340_.v340,
                         (__int64*)&v330_.v330);
      v84 = 576;
    }
    else {
      if ((_DWORD)v39 != 2) {
        goto LABEL_58;
      }
      v59 = *v9;
      v340_.v340 = GameData_212e920[0];
      v340_.v341 = "ScreenAreaCulling";
      v60 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
      v61 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v40);
      v62 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v40 + 8);
      *(_QWORD*)v60 = 0;
      v63 = v60;
      *((_QWORD*)v60 + 2) = 0;
      *((_QWORD*)v60 + 3) = 0;
      *((_QWORD*)v60 + 4) = 0;
      *((_QWORD*)v60 + 5) = 0;
      *((_QWORD*)v60 + 6) = 0;
      *((_QWORD*)v60 + 7) = 0;
      *((_QWORD*)v60 + 8) = 0;
      *((_QWORD*)v60 + 9) = 0;
      *((_QWORD*)v60 + 10) = 0;
      *((_QWORD*)v60 + 11) = 0;
      *((_QWORD*)v60 + 12) = 0;
      *((_QWORD*)v60 + 13) = 0;
      *((_QWORD*)v60 + 14) = 0;
      *((_QWORD*)v60 + 15) = 0;
      *((_QWORD*)v60 + 16) = 0;
      *((_QWORD*)v60 + 17) = 0;
      v64 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v40);
      v65 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v40);
      v66 = GameData_212e928[0] + 2;
      *((_QWORD*)v60 + 6) = v61;
      *((_QWORD*)v60 + 7) = v62;
      v67 = *v40;
      v68 = v40[1];
      *((_QWORD*)v60 + 8) = v64;
      *((_QWORD*)v60 + 9) = v65;
      v69 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41);
      *((_QWORD*)v60 + 24) = 0;
      *((_QWORD*)v60 + 25) = 0;
      *((_QWORD*)v60 + 26) = 0;
      *((_QWORD*)v60 + 27) = 0;
      *((_QWORD*)v60 + 20) = 0;
      *((_QWORD*)v60 + 21) = 0;
      *((_QWORD*)v60 + 1) = 0;
      *((_QWORD*)v60 + 18) = 0;
      *((_QWORD*)v60 + 19) = 0;
      v71 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v41);
      v70 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v41);
      *((_QWORD*)v60 + 22) = 0;
      *((_QWORD*)v60 + 23) = 0;
      v60[8] = 1;
      v330_.v330 = v60;
      *(_QWORD*)v60 = v66;
      *((_QWORD*)v60 + 2) = v67;
      *((_QWORD*)v60 + 3) = v68;
      v72 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v40 + 8);
      *((_QWORD*)v60 + 4) =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v40);
      *((_QWORD*)v60 + 5) = v72;
      v73 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 8);
      v75 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v41);
      v74 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v41 + 8);
      *((_QWORD*)v60 + 14) =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 16);
      *((_QWORD*)v60 + 15) = v74;
      v77 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v41);
      v76 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v41);
      *((_QWORD*)v60 + 20) = v69;
      *((_QWORD*)v60 + 21) = v73;
      *((_QWORD*)v60 + 16) = v76;
      *((_QWORD*)v60 + 17) = v70;
      v78 = *v41;
      v79 = v41[1];
      *((_QWORD*)v60 + 22) = v75;
      *((_QWORD*)v60 + 23) = v77;
      *((_QWORD*)v60 + 10) = v78;
      *((_QWORD*)v60 + 11) = v79;
      v80 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 8);
      v82 = *v41;
      v81 = v41[1];
      *((_QWORD*)v60 + 12) =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41);
      *((_QWORD*)v60 + 13) = v80;
      v83 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v41);
      *((_QWORD*)v60 + 18) = v82;
      *((_QWORD*)v60 + 19) = v81;
      *((_QWORD*)v60 + 24) = v71;
      *((_QWORD*)v60 + 25) = v83;
      *((_QWORD*)v60 + 26) = 0x3E8000003E8LL;
      *((_DWORD*)v60 + 54) = 1024;
      GameRoutine_b87610((__int64*)(v59 + 312), &v340_.v340,
                         (__int64*)&v330_.v330);
      v84 = 256;
    }
  LABEL_57:
    *((_DWORD*)v63 + 54) = v84;
  LABEL_58:
    v132 = *(_QWORD*)v7;
    v133 = *v9;
    v134 = v9[1];
    ++v39;
    if (v134 == 0) {
      if ((signed __int32)*(_DWORD*)v132 <= (int)v39) {
        v136 = (unsigned int)v39;
        goto LABEL_71;
      }
      v135 = *(_QWORD*)(v132 + 112);
      v136 = v39;
      goto LABEL_63;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v134 + 8), 1u,
                              memory_order_relaxed);
    if ((signed __int32)*(_DWORD*)v132 > (int)v39) {
      v135 = *(_QWORD*)(v132 + 112);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v134 + 8), 1u,
                                memory_order_relaxed);
      v136 = (unsigned int)v39;
    LABEL_63:
      v137 = v135 + v38;
      v138 = *(_QWORD*)(v137 + 56);
      *(_QWORD*)(v137 + 48) = v133;
      *(_QWORD*)(v137 + 56) = v134;
      if (v138 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v138 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v138 + 16LL))(v138);
        std___1___shared_weak_count___release_weak(v138);
        if (v134 == 0) {
          goto LABEL_71;
        }
      }
      else if (v134 == 0) {
        goto LABEL_71;
      }
      goto LABEL_68;
    }
    v136 = (unsigned int)v39;
  LABEL_68:
    if (atomic_fetch_add((atomic_ullong* volatile)(v134 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v134 + 16LL))(v134);
      std___1___shared_weak_count___release_weak(v134);
    }
  LABEL_71:
    v139 = *(_QWORD*)v7;
    if ((int)v136 < (signed __int32)**(_DWORD**)v7 && *(int*)(v139 + 4) >= 1) {
      v140 = *(_QWORD*)(v139 + 112) + 48 * v136;
      if (*(_BYTE*)(v140 + 44) != 1 ||
          (v141 = *(_DWORD*)(v140 + 40)) != 0 &&
              (*(_BYTE*)((v142 = *(_QWORD*)(v139 + 184) + 20LL * v141) + 8) !=
                   1 ||
               (*(_BYTE*)(v142 + 16) & 1) != 0 ||
               *(_DWORD*)(v142 + 4) != v136)) {
        *(_DWORD*)(v140 + 40) = 0;
        *(_BYTE*)(v140 + 44) = 1;
      }
    }
    v38 += 48;
    v9 += 2;
  } while (v39 != 5);
  v143 = (__int64*)fw_memory_g_heap_manager_ptr;
  v144 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        256, 16, 0);
  GameHr_1938c00(v144);
  v145 = *(_QWORD**)(v324 + 144);
  *(_QWORD*)(v324 + 144) = v144;
  v146 = game_g_frame_clock_ptr[0];
  if (v145 != nullptr) {
    v147 = (_QWORD*)v145[27];
    v145[27] = 0;
    if (v147 != nullptr) {
      GameHr_1943280(v147);
      v148 = 128;
      if (*(_QWORD*)(*v143 + 200) == 0) {
        v148 = 56;
      }
      nn_mem_StandardAllocator_Free(*v143 + v148, (__int64)v147);
    }
    v149 = v145[24];
    if (v149 != 0) {
      v150 = *v143;
      v145[25] = v149;
      v151 = 128;
      if (*(_QWORD*)(v150 + 200) == 0) {
        v151 = 56;
      }
      nn_mem_StandardAllocator_Free(v150 + v151, v149);
    }
    v152 = v145[1];
    if (v152 != 0) {
      std___1___shared_weak_count___release_weak(v152);
    }
    v153 = 128;
    if (*(_QWORD*)(*v143 + 200) == 0) {
      v153 = 56;
    }
    nn_mem_StandardAllocator_Free(*v143 + v153, (__int64)v145);
  }
  v154 = *v146;
  v155 = (_QWORD*)fw_memory_HeapManager_Allocate(*v143, 184, 16, 0);
  v156 = v155 + 3;
  v157 = v155;
  v155[1] = 0;
  v155[2] = 0;
  *v155 = GameData_1fc80e8;
  llvm_libcxx_21_libcxx_include___functional_bf3520(v155 + 3, v154);
  v158 = *(_QWORD*)(v324 + 472);
  *(_QWORD*)(v324 + 464) = v156;
  *(_QWORD*)(v324 + 472) = v157;
  if (v158 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v158 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v158 + 16LL))(v158);
    std___1___shared_weak_count___release_weak(v158);
  }
  v159 = *v143;
  v340_.v340 = (__int64*)0x10041CCCCCDLL;
  v160 = (_QWORD*)fw_memory_HeapManager_Allocate(v159, 224, 16, 0);
  v161 = v160 + 4;
  v162 = v160;
  v160[1] = 0;
  v160[2] = 0;
  *v160 = GameData_1fc8138;
  GameHr_c61fc0((__int64)(v160 + 4), (__int64*)&v340_.v340);
  v163 = *(_QWORD*)(v324 + 488);
  *(_QWORD*)(v324 + 480) = v161;
  *(_QWORD*)(v324 + 488) = v162;
  if (v163 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v163 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v163 + 16LL))(v163);
    std___1___shared_weak_count___release_weak(v163);
  }
  v165 = *(__int64**)(v324 + 16);
  v164 = *(_QWORD*)(v324 + 24);
  v340_.v342 = nullptr;
  v340_.v343 = 0;
  if (v164 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v164 + 8), 1u,
                              memory_order_relaxed);
  }
  v340_.v340 = v165;
  v340_.v341 = (const char*)v164;
  v166 = *(_QWORD*)(v324 + 480);
  v167 = *(_QWORD*)(v324 + 488);
  if (v167 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v167 + 8), 1u,
                              memory_order_relaxed);
    v168 = v340_.v343;
    v340_.v342 = (char*)v166;
    v340_.v343 = v167;
    if (v168 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v168 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v168 + 16LL))(v168);
      std___1___shared_weak_count___release_weak(v168);
    }
  }
  else {
    v340_.v342 = *(char**)(v324 + 480);
    v340_.v343 = 0;
  }
  v169 = *v146;
  v170 = (_QWORD*)fw_memory_HeapManager_Allocate(*v143, 1248, 16, 0);
  v171 = (__int64)(v170 + 3);
  v172 = v170;
  v170[1] = 0;
  v170[2] = 0;
  *v170 = GameData_1fc8228;
  gfxa_GrassInfluenceMapUpdateTask_initialize((__int64)(v170 + 3), v169,
                                              &v340_.v340);
  v173 = *(_QWORD*)(v324 + 216);
  *(_QWORD*)(v324 + 208) = v171;
  *(_QWORD*)(v324 + 216) = v172;
  if (v173 == 0) {
    v174 = (_QWORD*)*v146;
    v353_.v353 = v171;
    v353_.v354 = (__int64)v172;
  LABEL_114:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v172 + 1), 1u,
                              memory_order_relaxed);
    goto LABEL_115;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v173 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v173 + 16LL))(v173);
    std___1___shared_weak_count___release_weak(v173);
  }
  v174 = (_QWORD*)*v146;
  v172 = *(_QWORD**)(v324 + 216);
  v353_.v353 = *(_QWORD*)(v324 + 208);
  v353_.v354 = (__int64)v172;
  if (v172 != nullptr) {
    goto LABEL_114;
  }
LABEL_115:
  v330_.v330 = "RootCl";
  v330_.v331 = 6;
  Registration_6492e0(v174, &v353_.v353, (__int64*)&v330_.v330, 1, -512);
  v175 = v353_.v354;
  if (v353_.v354 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v353_.v354 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v175 + 16LL))(v175);
    std___1___shared_weak_count___release_weak(v175);
  }
  v176 = *v146;
  v177 = *(_QWORD*)(v324 + 208);
  v178 = *(_QWORD*)(v324 + 216);
  if (v178 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v178 + 8), 1u,
                              memory_order_relaxed);
    v179 = *(_QWORD*)(v176 + 13176);
    v180 = (_QWORD*)(v176 + 13184);
    v181 = *(_QWORD*)(v176 + 13184);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v178 + 8), 1u,
                              memory_order_relaxed);
    if (v179 != v181) {
      goto LABEL_122;
    }
  }
  else {
    v179 = *(_QWORD*)(v176 + 13176);
    v180 = (_QWORD*)(v176 + 13184);
    v181 = *(_QWORD*)(v176 + 13184);
    if (v179 != v181) {
    LABEL_122:
      while (*(_QWORD*)(v179 + 8) != v177) {
        v179 += 72;
        if (v179 == v181) {
          v179 = v181;
          break;
        }
      }
    }
  }
  if (v178 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v178 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v178 + 16LL))(v178);
    std___1___shared_weak_count___release_weak(v178);
  }
  if (v179 != *v180) {
    GameRoutine_60a060((char*)(v179 + 48),
                       (__int64)"gfxa::GrassInfluenceMapUpdateTask", 0x21u);
  }
  if (v178 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v178 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v178 + 16LL))(v178);
    std___1___shared_weak_count___release_weak(v178);
  }
  v182 = v340_.v343;
  if (v340_.v343 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v340_.v343 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v182 + 16LL))(v182);
    std___1___shared_weak_count___release_weak(v182);
  }
  v183 = (__int64)v340_.v341;
  if (v340_.v341 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v340_.v341 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v183 + 16LL))(v183);
    std___1___shared_weak_count___release_weak(v183);
  }
  v184 = *(const char**)(v324 + 16);
  v185 = *(_QWORD*)(v324 + 24);
  v330_.v330 = nullptr;
  v330_.v331 = 0;
  if (v185 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v185 + 8), 1u,
                              memory_order_relaxed);
    v186 = v330_.v331;
    v330_.v330 = v184;
    v330_.v331 = v185;
    if (v186 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v186 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v186 + 16LL))(v186);
      std___1___shared_weak_count___release_weak(v186);
    }
  }
  else {
    v330_.v330 = v184;
    v330_.v331 = 0;
  }
  v187 = *v146;
  v188 = (_QWORD*)fw_memory_HeapManager_Allocate(*v143, 208, 16, 0);
  v189 = (__int64)(v188 + 3);
  v190 = v188;
  v188[1] = 0;
  v188[2] = 0;
  *v188 = GameData_1fc8278;
  GlobalEnvTask_b37340((__int64)(v188 + 3), v187, &v330_.v330);
  v191 = *(_QWORD*)(v324 + 160);
  *(_QWORD*)(v324 + 152) = v189;
  *(_QWORD*)(v324 + 160) = v190;
  if (v191 == 0) {
    v192 = (_QWORD*)*v146;
    v353_.v353 = v189;
    v353_.v354 = (__int64)v190;
  LABEL_150:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190 + 1), 1u,
                              memory_order_relaxed);
    goto LABEL_151;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v191 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v191 + 16LL))(v191);
    std___1___shared_weak_count___release_weak(v191);
  }
  v192 = (_QWORD*)*v146;
  v190 = *(_QWORD**)(v324 + 160);
  v353_.v353 = *(_QWORD*)(v324 + 152);
  v353_.v354 = (__int64)v190;
  if (v190 != nullptr) {
    goto LABEL_150;
  }
LABEL_151:
  v340_.v340 = (__int64*)"PreparationLitCl";
  v340_.v341 = (const char*)((__int128*)0x10LL);
  Registration_6492e0(v192, &v353_.v353, (__int64*)&v340_.v340, 1, -256);
  v193 = v353_.v354;
  if (v353_.v354 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v353_.v354 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v193 + 16LL))(v193);
    std___1___shared_weak_count___release_weak(v193);
  }
  v194 = *v146;
  v195 = *(_QWORD*)(v324 + 152);
  v196 = *(_QWORD*)(v324 + 160);
  if (v196 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v196 + 8), 1u,
                              memory_order_relaxed);
    v197 = *(_QWORD*)(v194 + 13176);
    v198 = (_QWORD*)(v194 + 13184);
    v199 = *(_QWORD*)(v194 + 13184);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v196 + 8), 1u,
                              memory_order_relaxed);
    if (v197 != v199) {
      goto LABEL_158;
    }
  }
  else {
    v197 = *(_QWORD*)(v194 + 13176);
    v198 = (_QWORD*)(v194 + 13184);
    v199 = *(_QWORD*)(v194 + 13184);
    if (v197 != v199) {
    LABEL_158:
      while (*(_QWORD*)(v197 + 8) != v195) {
        v197 += 72;
        if (v197 == v199) {
          v197 = v199;
          break;
        }
      }
    }
  }
  if (v196 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v196 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v196 + 16LL))(v196);
    std___1___shared_weak_count___release_weak(v196);
  }
  if (v197 != *v198) {
    if ((*(_BYTE*)(v197 + 48) & 1) != 0) {
      *(_QWORD*)(v197 + 56) = 19;
      v200 = *(char**)(v197 + 64);
    }
    else {
      *(_BYTE*)(v197 + 48) = 38;
      v200 = (char*)(v197 + 49);
    }
    strcpy(v200, "gfxa::GlobalEnvTask");
  }
  if (v196 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v196 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v196 + 16LL))(v196);
    std___1___shared_weak_count___release_weak(v196);
  }
  v201 = v330_.v331;
  if (v330_.v331 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v330_.v331 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v201 + 16LL))(v201);
    std___1___shared_weak_count___release_weak(v201);
  }
  v202 = *(__int64**)(v324 + 16);
  v203 = *(_QWORD*)(v324 + 24);
  LODWORD(v340_.v342) = 0;
  v340_.v340 = nullptr;
  v340_.v341 = nullptr;
  if (v203 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v203 + 8), 1u,
                              memory_order_relaxed);
    v204 = (__int64)v340_.v341;
    v340_.v340 = v202;
    v340_.v341 = (const char*)v203;
    if (v204 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v204 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v204 + 16LL))(v204);
      std___1___shared_weak_count___release_weak(v204);
    }
  }
  else {
    v340_.v340 = v202;
    v340_.v341 = nullptr;
  }
  v205 = *v143;
  v206 = *v146;
  LODWORD(v340_.v342) = 0;
  v207 = (_QWORD*)fw_memory_HeapManager_Allocate(v205, 568, 16, 0);
  v208 = v207 + 3;
  v209 = v207;
  v207[1] = 0;
  v207[2] = 0;
  *v207 = GameData_1fc82c8;
  gfxa_Probe2UpdateTask_initializeCommon((__int64)(v207 + 3), v206,
                                         (__int64*)&v340_.v340);
  v210 = *(_QWORD*)(v324 + 176);
  *(_QWORD*)(v324 + 168) = v208;
  *(_QWORD*)(v324 + 176) = v209;
  if (v210 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v210 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v210 + 16LL))(v210);
    std___1___shared_weak_count___release_weak(v210);
  }
  v211 = *(_QWORD*)(v324 + 152);
  v212 = *(_QWORD*)(v324 + 168);
  v213 = *(_QWORD*)(v211 + 32);
  v214 = *(_QWORD*)(v211 + 40);
  if (v214 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v214 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v214 + 8), 1u,
                              memory_order_relaxed);
  }
  v215 = *(_QWORD*)(v212 + 424);
  *(_QWORD*)(v212 + 416) = v213;
  *(_QWORD*)(v212 + 424) = v214;
  if (v215 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v215 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v215 + 16LL))(v215);
    std___1___shared_weak_count___release_weak(v215);
  }
  if (v214 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v214 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v214 + 16LL))(v214);
    std___1___shared_weak_count___release_weak(v214);
  }
  v216 = (_QWORD*)*v146;
  v217 = *(_QWORD*)(v324 + 176);
  v353_.v353 = *(_QWORD*)(v324 + 168);
  v353_.v354 = v217;
  if (v217 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v217 + 8), 1u,
                              memory_order_relaxed);
  }
  v330_.v330 = "PreparationLitCl";
  v330_.v331 = 16;
  Registration_6492e0(v216, &v353_.v353, (__int64*)&v330_.v330, 1, -128);
  v218 = v353_.v354;
  if (v353_.v354 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v353_.v354 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v218 + 16LL))(v218);
    std___1___shared_weak_count___release_weak(v218);
  }
  v219 = *v146;
  v220 = *(_QWORD*)(v324 + 168);
  v221 = *(_QWORD*)(v324 + 176);
  if (v221 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v221 + 8), 1u,
                              memory_order_relaxed);
    v222 = *(_QWORD*)(v219 + 13176);
    v223 = (_QWORD*)(v219 + 13184);
    v224 = *(_QWORD*)(v219 + 13184);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v221 + 8), 1u,
                              memory_order_relaxed);
    if (v222 != v224) {
      goto LABEL_200;
    }
  }
  else {
    v222 = *(_QWORD*)(v219 + 13176);
    v223 = (_QWORD*)(v219 + 13184);
    v224 = *(_QWORD*)(v219 + 13184);
    if (v222 != v224) {
    LABEL_200:
      while (*(_QWORD*)(v222 + 8) != v220) {
        v222 += 72;
        if (v222 == v224) {
          v222 = v224;
          break;
        }
      }
    }
  }
  if (v221 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v221 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v221 + 16LL))(v221);
    std___1___shared_weak_count___release_weak(v221);
  }
  if (v222 != *v223) {
    if ((*(_BYTE*)(v222 + 48) & 1) != 0) {
      *(_QWORD*)(v222 + 56) = 22;
      v225 = *(char**)(v222 + 64);
    }
    else {
      *(_BYTE*)(v222 + 48) = 44;
      v225 = (char*)(v222 + 49);
    }
    strcpy(v225, "gfxa::Probe2UpdateTask");
  }
  if (v221 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v221 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v221 + 16LL))(v221);
    std___1___shared_weak_count___release_weak(v221);
  }
  v226 = (__int64)v340_.v341;
  if (v340_.v341 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v340_.v341 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v226 + 16LL))(v226);
    std___1___shared_weak_count___release_weak(v226);
  }
  v227 = *(_QWORD*)(v324 + 16);
  v228 = *(_QWORD*)(v324 + 24);
  v353_.v354 = 0;
  memset(v355, 0, sizeof(v355));
  v353_.v353 = 0;
  if (v228 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v228 + 8), 1u,
                              memory_order_relaxed);
    v229 = v353_.v354;
    v353_.v353 = v227;
    v353_.v354 = v228;
    if (v229 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v229 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v229 + 16LL))(v229);
      std___1___shared_weak_count___release_weak(v229);
    }
  }
  else {
    v353_.v353 = v227;
    v353_.v354 = 0;
  }
  v230 = *(__int64**)v324;
  LODWORD(v355[0]) = 0;
  *(_QWORD*)((char*)v355 + 4) = 0x200000001LL;
  *(_QWORD*)((char*)&v355[1] + 4) = 0x400000003LL;
  HIDWORD(v355[2]) = 5;
  wld_a85bd0((void*)((__int64)v350_.v350), v230, (__int64)&v353_.v353);
  v232 = v350_.v351;
  v231 = v350_.v352;
  if (v350_.v352 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v350_.v352 + 8), 1u,
                              memory_order_relaxed);
  }
  v233 = *(_QWORD*)(v324 + 192);
  *(_QWORD*)(v324 + 184) = v232;
  *(_QWORD*)(v324 + 192) = v231;
  if (v233 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v233 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v233 + 16LL))(v233);
    std___1___shared_weak_count___release_weak(v233);
  }
  v234 = *(_QWORD**)(v324 + 152);
  v235 = (__int64*)v234[4];
  v236 = v234[5];
  if (v236 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v236 + 8), 1u,
                              memory_order_relaxed);
    v234 = *(_QWORD**)(v324 + 152);
  }
  v340_.v340 = v235;
  v340_.v341 = (const char*)v236;
  v238 = v234[6];
  v237 = v234[7];
  if (v237 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v237 + 8), 1u,
                              memory_order_relaxed);
    v234 = *(_QWORD**)(v324 + 152);
  }
  v340_.v342 = (char*)v238;
  v340_.v343 = v237;
  v240 = v234[8];
  v239 = v234[9];
  if (v239 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v239 + 8), 1u,
                              memory_order_relaxed);
    v234 = *(_QWORD**)(v324 + 152);
  }
  v340_.v344 = v240;
  v340_.v345 = v239;
  v242 = v234[10];
  v241 = v234[11];
  if (v241 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v241 + 8), 1u,
                              memory_order_relaxed);
  }
  v340_.v346 = v242;
  v340_.v347 = v241;
  v244 = *(_QWORD*)(*(_QWORD*)v323 + 48LL);
  v243 = *(_QWORD*)(*(_QWORD*)v323 + 56LL);
  if (v243 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v243 + 8), 1u,
                              memory_order_relaxed);
  }
  v340_.v348 = v244;
  v340_.v349 = v243;
  GameRoutine_b873c0((_QWORD*)(*(_QWORD*)(v324 + 184) + 1320LL),
                     (__int64*)&v340_.v340);
  v245 = *(_QWORD*)(v324 + 168);
  v246 = *(_QWORD*)(v324 + 184);
  v247 = *(_QWORD*)(v245 + 464);
  v248 = *(_QWORD*)(v245 + 472);
  if (v248 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v248 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v248 + 8), 1u,
                              memory_order_relaxed);
  }
  v249 = *(_QWORD*)(v246 + 1408);
  *(_QWORD*)(v246 + 1400) = v247;
  *(_QWORD*)(v246 + 1408) = v248;
  if (v249 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v249 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v249 + 16LL))(v249);
    std___1___shared_weak_count___release_weak(v249);
  }
  if (v248 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v248 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v248 + 16LL))(v248);
    std___1___shared_weak_count___release_weak(v248);
  }
  v250 = *(_QWORD*)(v324 + 208);
  v251 = *(_QWORD*)(v324 + 184);
  v252 = *(_QWORD*)(v250 + 64);
  v253 = *(_QWORD*)(v250 + 72);
  if (v253 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v253 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v253 + 8), 1u,
                              memory_order_relaxed);
  }
  v254 = *(_QWORD*)(v251 + 1440);
  *(_QWORD*)(v251 + 1432) = v252;
  *(_QWORD*)(v251 + 1440) = v253;
  if (v254 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v254 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v254 + 16LL))(v254);
    std___1___shared_weak_count___release_weak(v254);
  }
  if (v253 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v253 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v253 + 16LL))(v253);
    std___1___shared_weak_count___release_weak(v253);
  }
  v255 = *(_QWORD*)(v324 + 184);
  v256 = *(_QWORD*)(v324 + 464);
  v257 = *(_QWORD*)(v324 + 472);
  if (v257 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v257 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v257 + 8), 1u,
                              memory_order_relaxed);
  }
  v258 = *(_QWORD*)(v255 + 1600);
  *(_QWORD*)(v255 + 1592) = v256;
  *(_QWORD*)(v255 + 1600) = v257;
  if (v258 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v258 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v258 + 16LL))(v258);
    std___1___shared_weak_count___release_weak(v258);
  }
  if (v257 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v257 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v257 + 16LL))(v257);
    std___1___shared_weak_count___release_weak(v257);
  }
  v330_.v336 = GameData_1fc8068;
  v330_.v337 = GameData_1fc8070;
  v330_.v338 = GameData_1fc8078;
  v330_.v339 = GameData_1fc8080;
  v330_.v332 = GameData_1fc8048;
  v330_.v333 = GameData_1fc8050;
  v330_.v334 = GameData_1fc8058;
  v330_.v335 = GameData_1fc8060;
  v330_.v330 = GameData_1fc8038;
  v330_.v331 = GameData_1fc8040;
  if (v350_.v350[0] == 1) {
    v259 = (_QWORD*)*v146;
    v260 = *(_QWORD*)(v324 + 192);
    v328_.v328 = *(_QWORD*)(v324 + 184);
    v328_.v329 = v260;
    if (v260 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v260 + 8), 1u,
                                memory_order_relaxed);
    }
    Registration_6492e0(v259, &v328_.v328, (__int64*)&v330_.v330, 5, 0);
    v261 = v328_.v329;
    if (v328_.v329 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v328_.v329 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v261 + 16LL))(v261);
      std___1___shared_weak_count___release_weak(v261);
    }
    v262 = *v146;
    v263 = *(_QWORD*)(v324 + 184);
    v264 = *(_QWORD*)(v324 + 192);
    if (v264 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v264 + 8), 1u,
                                memory_order_relaxed);
      v265 = *(_QWORD*)(v262 + 13176);
      v266 = (_QWORD*)(v262 + 13184);
      v267 = *(_QWORD*)(v262 + 13184);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v264 + 8), 1u,
                                memory_order_relaxed);
      if (v265 != v267) {
        goto LABEL_272;
      }
    }
    else {
      v265 = *(_QWORD*)(v262 + 13176);
      v266 = (_QWORD*)(v262 + 13184);
      v267 = *(_QWORD*)(v262 + 13184);
      if (v265 != v267) {
      LABEL_272:
        while (*(_QWORD*)(v265 + 8) != v263) {
          v265 += 72;
          if (v265 == v267) {
            v265 = v267;
            break;
          }
        }
      }
    }
    if (v264 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v264 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v264 + 16LL))(v264);
      std___1___shared_weak_count___release_weak(v264);
    }
    if (v265 != *v266) {
      if ((*(_BYTE*)(v265 + 48) & 1) != 0) {
        *(_QWORD*)(v265 + 56) = 20;
        v269 = *(char**)(v265 + 64);
      }
      else {
        *(_BYTE*)(v265 + 48) = 40;
        v269 = (char*)(v265 + 49);
      }
      strcpy(v269, "gfxa::MainRenderTask");
    }
    if (v264 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v264 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v264 + 16LL))(v264);
      std___1___shared_weak_count___release_weak(v264);
    }
    v268 = v350_.v350[0];
  }
  else {
    v268 = 0;
  }
  *(_BYTE*)(v324 + 200) = v268;
  GameRoutine_b869a0((__int64)&v340_.v340);
  v270 = v350_.v352;
  if (v350_.v352 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v350_.v352 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v270 + 16LL))(v270);
    std___1___shared_weak_count___release_weak(v270);
  }
  v271 = v353_.v354;
  if (v353_.v354 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v353_.v354 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v271 + 16LL))(v271);
    std___1___shared_weak_count___release_weak(v271);
  }
  v272 = fw_memory_HeapManager_Allocate(*v143, 224, 16, 0);
  v273 = *(_QWORD*)(v324 + 24);
  v274 = (_QWORD*)v272;
  v340_.v340 = *(__int64**)(v324 + 16);
  v340_.v341 = (const char*)v273;
  if (v273 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v273 + 8), 1u,
                              memory_order_relaxed);
  }
  v275 = *(_QWORD*)(v324 + 160);
  v330_.v330 = *(const char**)(v324 + 152);
  v330_.v331 = v275;
  if (v275 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v275 + 8), 1u,
                              memory_order_relaxed);
    GfxLoader_c4a6e0(v272, &v340_.v340, &v330_.v330);
    if (atomic_fetch_add((atomic_ullong* volatile)(v275 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v275 + 16LL))(v275);
      std___1___shared_weak_count___release_weak(v275);
    }
  }
  else {
    GfxLoader_c4a6e0(v272, &v340_.v340, &v330_.v330);
  }
  if (v273 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v273 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v273 + 16LL))(v273);
    std___1___shared_weak_count___release_weak(v273);
  }
  v276 = *v322;
  *v322 = v274;
  if (v276 != nullptr) {
    GameRoutine_c4a820(v276);
    v277 = 128;
    if (*(_QWORD*)(*v143 + 200) == 0) {
      v277 = 56;
    }
    nn_mem_StandardAllocator_Free(*v143 + v277, (__int64)v276);
  }
  v278 = (_QWORD*)fw_memory_HeapManager_Allocate(*v143, 88, 16, 0);
  v279 = *(_QWORD*)(v324 + 16);
  v280 = *(_QWORD*)(v324 + 24);
  v281 = v278;
  if (v280 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v280 + 16), 1u,
                              memory_order_relaxed);
    *v278 = v279;
    v278[1] = v280;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v280 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    *v278 = v279;
    v278[1] = 0;
  }
  v282 = *v143;
  v281[6] = 0;
  v281[7] = 0;
  v281[4] = 0;
  v281[5] = 0;
  v281[2] = 0;
  v281[3] = 0;
  v283 = fw_memory_HeapManager_Allocate(v282, 296, 16, 0);
  *(_DWORD*)(v283 + 48) = 0x2000;
  v284 = GameData_2131678;
  *(_QWORD*)(v283 + 8) = 0;
  *(_QWORD*)(v283 + 16) = 0;
  *(_DWORD*)(v283 + 32) = 0;
  *(_QWORD*)(v283 + 40) = 0;
  *(_DWORD*)(v283 + 104) = 0;
  *(_WORD*)(v283 + 108) = 256;
  *(_QWORD*)(v283 + 56) = 0;
  *(_QWORD*)(v283 + 64) = 0;
  *(_QWORD*)(v283 + 72) = 0;
  *(_WORD*)(v283 + 80) = 0;
  *(_WORD*)(v283 + 116) = 0;
  *(_WORD*)(v283 + 136) = 0;
  *(_BYTE*)(v283 + 160) = 0;
  *(_BYTE*)(v283 + 288) = 0;
  *(_QWORD*)(v283 + 272) = 0;
  *(_QWORD*)(v283 + 280) = 0;
  *(_QWORD*)(v283 + 256) = 0;
  *(_QWORD*)(v283 + 264) = 0;
  *(_QWORD*)(v283 + 240) = 0;
  *(_QWORD*)(v283 + 248) = 0;
  *(_QWORD*)(v283 + 224) = 0;
  *(_QWORD*)(v283 + 232) = 0;
  *(_QWORD*)(v283 + 208) = 0;
  *(_QWORD*)(v283 + 216) = 0;
  *(_QWORD*)(v283 + 192) = 0;
  *(_QWORD*)(v283 + 200) = 0;
  *(_QWORD*)(v283 + 176) = 0;
  *(_QWORD*)(v283 + 184) = 0;
  *(_QWORD*)(v283 + 168) = 0;
  *(_QWORD*)(v283 + 120) = 0;
  *(_DWORD*)(v283 + 127) = 0;
  v281[9] = v283;
  *(_QWORD*)v283 = v284 + 16;
  *(_DWORD*)(v283 + 112) = -1082130432;
  *(_DWORD*)(v283 + 292) = 2;
  *((_BYTE*)v281 + 80) = 1;
  *(_QWORD*)(v283 + 24) = 0;
  v281[8] = v283 + 24;
  if (v280 != 0) {
    std___1___shared_weak_count___release_weak(v280);
  }
  v285 = *(_QWORD**)(v324 + 368);
  *(_QWORD*)(v324 + 368) = v281;
  if (v285 != nullptr) {
    GameHr_18dd060(v285);
    v286 = 128;
    if (*(_QWORD*)(*v143 + 200) == 0) {
      v286 = 56;
    }
    nn_mem_StandardAllocator_Free(*v143 + v286, (__int64)v285);
  }
  v287 = (_QWORD*)fw_memory_HeapManager_Allocate(*v143, 40, 16, 0);
  *v287 = 0;
  v287[1] = 0;
  v288 = fw_memory_HeapManager_Allocate(*v143, 12, 16, 0);
  *(_BYTE*)(v288 + 8) = 0;
  v287[2] = v288;
  *(_QWORD*)v288 = 0x3F80000000000000LL;
  v289 = fw_memory_HeapManager_Allocate(*v143, 240, 16, 0);
  v290 = GameData_21321d8[0];
  *(_QWORD*)(v289 + 168) = 0;
  *(_QWORD*)(v289 + 176) = 0;
  v291 = *(_QWORD**)(v324 + 376);
  *(_QWORD*)(v289 + 200) = 0;
  *(_QWORD*)(v289 + 208) = 0;
  *(_QWORD*)(v289 + 8) = 0;
  *(_QWORD*)(v289 + 16) = 0;
  *(_QWORD*)(v289 + 40) = 0;
  *(_QWORD*)(v289 + 48) = 0;
  *(_QWORD*)(v289 + 56) = 0;
  *(_QWORD*)(v289 + 64) = 0;
  *(_QWORD*)(v289 + 72) = 0;
  *(_QWORD*)(v289 + 80) = 0;
  *(_QWORD*)(v289 + 88) = 0;
  *(_QWORD*)(v289 + 96) = 0;
  *(_QWORD*)(v289 + 104) = 0;
  *(_QWORD*)(v289 + 112) = 0;
  *(_QWORD*)(v289 + 120) = 0;
  *(_QWORD*)(v289 + 128) = 0;
  *(_QWORD*)(v289 + 136) = 0;
  *(_QWORD*)(v289 + 144) = 0;
  *(_QWORD*)(v289 + 152) = 0;
  *(_QWORD*)(v289 + 160) = 0;
  *(_QWORD*)(v289 + 184) = 0;
  *(_QWORD*)(v289 + 192) = 0;
  *(_QWORD*)(v289 + 216) = 0;
  *(_QWORD*)(v289 + 224) = 0;
  *(_QWORD*)(v289 + 232) = 0;
  *(_QWORD*)(v289 + 40) = 0;
  *(_QWORD*)(v289 + 48) = 0;
  *(_QWORD*)(v289 + 56) = 0;
  *(_QWORD*)(v289 + 64) = 0;
  *(_QWORD*)(v289 + 72) = 0;
  *(_QWORD*)(v289 + 80) = 0;
  *(_QWORD*)(v289 + 88) = 0;
  *(_QWORD*)(v289 + 96) = 0;
  *(_QWORD*)(v289 + 104) = 0;
  *(_QWORD*)(v289 + 112) = 0;
  *(_QWORD*)(v289 + 120) = 0;
  *(_QWORD*)(v289 + 128) = 0;
  *(_QWORD*)(v289 + 136) = 0;
  *(_QWORD*)(v289 + 144) = 0;
  *(_QWORD*)(v289 + 152) = 0;
  *(_QWORD*)(v289 + 160) = 0;
  v287[4] = v289;
  *(_QWORD*)(v324 + 376) = v287;
  *(_QWORD*)v289 = v290 + 2;
  *(_BYTE*)(v289 + 168) = 1;
  *(_DWORD*)(v289 + 204) = 1063675494;
  *(_QWORD*)(v289 + 212) = 0x4000000041C80000LL;
  *(_QWORD*)(v289 + 32) = 0;
  v289 += 32;
  *(_DWORD*)v289 = 1084227584;
  v287[3] = v289;
  if (v291 != nullptr) {
    v292 = v291[4];
    if (v292 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v292 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v292 + 16LL))(v292);
      std___1___shared_weak_count___release_weak(v292);
    }
    v293 = v291[2];
    v291[2] = 0;
    if (v293 != 0) {
      v294 = 128;
      if (*(_QWORD*)(*v143 + 200) == 0) {
        v294 = 56;
      }
      nn_mem_StandardAllocator_Free(*v143 + v294, v293);
    }
    v295 = v291[1];
    if (v295 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v295 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v295 + 16LL))(v295);
      std___1___shared_weak_count___release_weak(v295);
    }
    v296 = 128;
    if (*(_QWORD*)(*v143 + 200) == 0) {
      v296 = 56;
    }
    nn_mem_StandardAllocator_Free(*v143 + v296, (__int64)v291);
  }
  v297 = (unsigned int*)fw_memory_HeapManager_Allocate(*v143, 2120, 16, 0);
  v298 = *(_DWORD*)(v324 + 8);
  v299 = *(_QWORD*)(v324 + 24);
  v300 = v297;
  v340_.v340 = *(__int64**)(v324 + 16);
  v340_.v341 = (const char*)v299;
  if (v299 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v299 + 8), 1u,
                              memory_order_relaxed);
  }
  gfxa_c649f0(v297, v298, &v340_.v340);
  v301 = (__int64)v340_.v341;
  if (v340_.v341 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v340_.v341 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v301 + 16LL))(v301);
    std___1___shared_weak_count___release_weak(v301);
  }
  v302 = *(_QWORD*)(v324 + 392);
  *(_QWORD*)(v324 + 392) = v300;
  if (v302 != 0) {
    GameHr_c65820(v302);
    v303 = 128;
    if (*(_QWORD*)(*v143 + 200) == 0) {
      v303 = 56;
    }
    nn_mem_StandardAllocator_Free(*v143 + v303, v302);
  }
  GameHr_b3ef70(*(_QWORD*)(v324 + 16));
  v304 = *v143;
  *(_QWORD*)(v324 + 280) = 0xA00000001LL;
  *(_QWORD*)(v324 + 288) = 0;
  *(_QWORD*)(v324 + 248) = 0;
  *(_QWORD*)(v324 + 256) = 0x4060F8474538EF35LL;
  *(_QWORD*)(v324 + 264) = 0x4022000000000000LL;
  *(_QWORD*)(v324 + 272) = 0x100000017LL;
  v305 = fw_memory_HeapManager_Allocate(v304, 56, 16, 0);
  *(_QWORD*)(v305 + 8) = 0;
  v306 = (atomic_ullong*)(v305 + 8);
  *(_QWORD*)(v305 + 16) = 0;
  v307 = v305;
  *(_QWORD*)v305 = GameData_1fc8188;
  *(_QWORD*)(v305 + 32) = 0x4130000041000000LL;
  *(_QWORD*)(v305 + 40) = 0x4188000041600000LL;
  *(_QWORD*)(v305 + 24) = 0x40A0000040000000LL;
  v308 = *(_QWORD*)(v324 + 16);
  *(_QWORD*)(v305 + 48) = 0x41B80000419C0000LL;
  v309 = *(_QWORD*)(v308 + 288);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v305 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v305 + 8), 1u,
                            memory_order_relaxed);
  v310 = *(_QWORD*)(v309 + 744);
  *(_QWORD*)(v309 + 736) = v305 + 24;
  *(_QWORD*)(v309 + 744) = v305;
  if (v310 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v310 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v310 + 16LL))(v310);
    std___1___shared_weak_count___release_weak(v310);
  }
  if (atomic_fetch_add(v306, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (atomic_fetch_add(v306, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_343;
    }
  LABEL_349:
    (*(void (**)(__int64))(*(_QWORD*)v307 + 16LL))(v307);
    std___1___shared_weak_count___release_weak(v307);
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v307 + 16LL))(v307);
    std___1___shared_weak_count___release_weak(v307);
    if (atomic_fetch_add(v306, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_349;
    }
  }
LABEL_343:
  GameRoutine_b81e20(v324);
  v311 = (_BYTE*)fw_memory_HeapManager_Allocate(*v143, 80, 16, 0);
  v312 = *v146;
  *v311 = 0;
  v311[16] = 0;
  v313 = v311;
  v311[64] = 0;
  llvm_libcxx_21_libcxx_include___vector_b34420(
      (void*)((__int64)&v340_.v340), *(_QWORD**)(v312 + 13424),
      (__int64)"Graphics/Textures/common_default", 0x20u,
      (__int64)"EVComp_Ramp", 0xBu, 0);
  *((_QWORD*)v313 + 4) = v340_.v340;
  *((_DWORD*)v313 + 10) = (_DWORD)v340_.v341;
  llvm_libcxx_21_libcxx_include___vector_b34420(
      (void*)((__int64)&v330_.v330), *(_QWORD**)(*v146 + 13424),
      (__int64)"Graphics/Textures/common_default", 0x20u,
      (__int64)"EVCompCh1_Ramp", 0xEu, 0);
  v314 = v330_.v330;
  v315 = *(_QWORD*)(v324 + 384);
  *(_QWORD*)(v324 + 384) = v313;
  *((_QWORD*)v313 + 6) = v314;
  *((_DWORD*)v313 + 14) = v330_.v331;
  if (v315 != 0) {
    v316 = 128;
    if (*(_QWORD*)(*v143 + 200) == 0) {
      v316 = 56;
    }
    nn_mem_StandardAllocator_Free(*v143 + v316, v315);
  }
  llvm_libcxx_21_libcxx_include___vector_b34420(
      (void*)((__int64)&v340_.v340), *(_QWORD**)(*v146 + 13424),
      (__int64)"Graphics/Textures/common_default", 0x20u, (__int64)"Fog_Ramp",
      8u, 0);
  *(_QWORD*)(v324 + 400) = v340_.v340;
  *(_DWORD*)(v324 + 408) = (_DWORD)v340_.v341;
  llvm_libcxx_21_libcxx_include___vector_b34420(
      (void*)((__int64)&v340_.v340), *(_QWORD**)(*v146 + 13424),
      (__int64)"Graphics/Textures/common_default", 0x20u,
      (__int64)"HeightFog_Ramp", 0xEu, 0);
  v317 = *(_DWORD*)(v324 + 408);
  v318 = *(_QWORD*)(v324 + 400);
  *(_QWORD*)(v323 + 208) = v340_.v340;
  *(_DWORD*)(v323 + 216) = (_DWORD)v340_.v341;
  v319 = *(_QWORD*)(*(_QWORD*)(v324 + 16) + 288LL);
  *(_QWORD*)(v319 + 560) = v318;
  *(_DWORD*)(v319 + 568) = v317;
  v320 = *(_QWORD*)(v323 + 208);
  v321 = *(_QWORD*)(*(_QWORD*)(v324 + 16) + 288LL);
  *(_DWORD*)(v321 + 584) = *(_DWORD*)(v323 + 216);
  *(_QWORD*)(v321 + 576) = v320;
}

void gfx_render_b83060(__int64 a1)
{
  char v2;
  char v3;
  float32x4_t* v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  float v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  float v12;
  bool v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  bool v18;
  float v19;
  __int64 v20;
  float v21;
  __int64 v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _BYTE v39[3024];

  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    return;
  }
  v2 = *(_BYTE*)(a1 + 344);
  v3 = *(_BYTE*)(a1 + 352);
  v4 = *(float32x4_t**)(a1 + 360);
  v5 = (v3 & 1 | ((v2 & 1) == 0)) == 0;
  v6 = 296;
  if (!v5) {
    v6 = 248;
  }
  wld_c4a9a0(v4, (_DWORD*)(a1 + v6));
  v7 = *(_QWORD*)(a1 + 368);
  if ((*(_BYTE*)(v7 + 80) & 1) != 0) {
    v8 = *(float*)(*(_QWORD*)(a1 + 360) + 196LL);
    GameRoutine_18ddc20(*(__int64**)(a1 + 368));
    GameRoutine_18de700((__int64*)v7, v8);
  }
  else {
    GameRoutine_18dd980(*(_QWORD**)(a1 + 368), 0);
  }
  v9 = *(_QWORD**)(a1 + 376);
  v10 = *v9;
  if (*v9 != 0) {
    if (*(_BYTE*)(v10 + 4) == 1) {
      v11 = v9[2];
      v12 = *(float*)(v11 + 4);
      *(_BYTE*)(v11 + 8) = 1;
      *(_QWORD*)v11 = 0;
      *(_BYTE*)(*v9 + 4LL) = 0;
      v10 = *v9;
      v13 = !(v12 >= 0x1.0000000000000p+0f);
    }
    else {
      v13 = false;
    }
    v14 = v9[2];
    if (*(_BYTE*)(v14 + 8) == 1) {
      v15 = *(float*)v10;
      v16 = *(float*)v14 +
            (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                            0x1.0aef000000000p+4f) /
                    0x1.f400000000000p+9f);
      *(float*)v14 = v16;
      if (!(v16 > v15)) {
        v19 = v16 / v15;
        v17 = 0x0.0p+0f;
        if (!(v19 < 0x0.0p+0f)) {
          v17 = 0x1.0000000000000p+0f;
          if (!(v19 > 0x1.0000000000000p+0f)) {
            v17 = v19;
          }
        }
      }
      else {
        *(_BYTE*)(v14 + 8) = 0;
        v17 = 0x1.0000000000000p+0f;
      }
      *(float*)(v14 + 4) = v17;
      v18 = !(*(float*)*v9 < 0x0.0p+0f);
    }
    else {
      v18 = false;
      v17 = -0x1.0000000000000p+0f;
    }
    *(_BYTE*)(v9[3] + 192LL) = v18;
    *(float*)(v9[3] + 188LL) = v17;
    *(_BYTE*)(v9[3] + 193LL) = v13;
  }
  else {
    *(_BYTE*)(v9[3] + 136LL) = 0;
  }
  v20 = *(_QWORD*)(a1 + 392);
  v21 = *(float*)(v20 + 528);
  v22 = 296;
  if ((*(_BYTE*)(a1 + 352) & 1 | ((*(_BYTE*)(a1 + 344) & 1) == 0)) != 0) {
    v22 = 248;
  }
  v23 =
      (float)(int)(3600 * *(_DWORD*)(a1 + v22 + 36) +
                   60 * *(_DWORD*)(a1 + v22 + 40) + *(_DWORD*)(a1 + v22 + 44));
  if (v21 != 0x0.0p+0f) {
    v24 = -0x1.0000000000000p+0f;
    if (v21 > 0x0.0p+0f) {
      v24 = 0x1.0000000000000p+0f;
    }
    v25 =
        *(float*)(v20 + 524) +
        (float)(v21 *
                (float)((float)(*(float*)(*(_QWORD*)
                                              game_script_hub_g_frame_counter_ptr
                                                  [0] +
                                          264LL) *
                                0x1.0aef000000000p+4f) /
                        0x1.f400000000000p+9f));
    *(float*)(v20 + 524) = v25;
    v26 = v24 * v25;
    v27 = *(float*)(v20 + 520);
    if (v26 >= (float)(v24 * v27)) {
      *(float*)(v20 + 524) = v27;
      *(_DWORD*)(v20 + 528) = 0;
    }
    LightingAnimModule_c6da10(v20);
  }
  v28 = v23 / 0x1.e000000000000p+5f;
  if ((*(_BYTE*)(v20 + 24) & 1) != 0 || *(float*)(v20 + 28) != v28) {
    gfxa_c65bf0(v20, v28);
    *(_BYTE*)(v20 + 24) = 0;
    *(float*)(v20 + 28) = v28;
  }
  v29 = *(_QWORD*)(a1 + 168);
  if (v29 != 0) {
    v30 = 296;
    if ((*(_BYTE*)(a1 + 352) & 1 | ((*(_BYTE*)(a1 + 344) & 1) == 0)) != 0) {
      v30 = 248;
    }
    *(float*)(v29 + 520) =
        (float)((float)((float)*(int*)(a1 + v30 + 40) / 0x1.e000000000000p+5f) +
                (float)*(int*)(a1 + v30 + 36)) +
        (float)((float)*(int*)(a1 + v30 + 44) / 0x1.c200000000000p+11f);
  }
  v31 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 304LL);
  v32 = *(_QWORD*)(game_g_frame_clock + 13224);
  if (v31 == -1) {
    v35 = 0;
    v34 = *(_QWORD*)(v32 + 48);
    v36 = *(_QWORD*)(v32 + 56);
    if (v36 == 0) {
      goto LABEL_42;
    }
    goto LABEL_41;
  }
  v33 = v32 + 1560LL * v31;
  v34 = *(_QWORD*)(v33 + 1752);
  v35 = *(_QWORD*)(v33 + 1760);
  if (v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                              memory_order_relaxed);
  }
  v36 = v35;
  if (v34 == 0) {
    v34 = *(_QWORD*)(v32 + 48);
    v36 = *(_QWORD*)(v32 + 56);
    if (v36 != 0) {
    LABEL_41:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                memory_order_relaxed);
    }
  LABEL_42:
    if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      std___1___shared_weak_count___release_weak(v35);
    }
  }
  GameHr_b83490((__int64)v39, *(_QWORD*)(*(_QWORD*)(v34 + 8) + 224LL));
  v37 = 3008;
  if (v39[2978] != 0) {
    v37 = 2977;
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 288LL) + 840LL) = v39[v37];
  v38 = 2936;
  if (v39[2904] != 0) {
    v38 = 2900;
  }
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 288LL) + 844LL) =
      *(_DWORD*)&v39[v38];
  CharaSceneSetting_Destructor((__int64)v39);
  if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
    std___1___shared_weak_count___release_weak(v36);
  }
}

void gfx_render_b853e0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64** i;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64* v8;
  __int64** v9;
  __int64** v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  int8x16_t* v22;
  int8x16_t v23;
  int8x16_t v24;
  unsigned int v25;
  __int64* v26;
  int8x16_t v27;
  unsigned int v28;
  char v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE* v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  char v49;
  int v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  char v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  bool v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  char v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  float v79;
  float v80;
  float v81;
  int8x16_t v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  char* v93;
  __int64 v94;
  float v95;
  __int64 v96;
  int v97;
  float v98;
  _QWORD* v99;
  int v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  float32x4_t* v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  float32x4_t v116;
  int v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  __int64 j;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  int v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  float v141;
  float v142;
  int v143;
  __int64 v144;
  __int64* v145;
  float v146;
  float v147;
  float v148;
  int v149;
  __int64* v150;
  float v151;
  float v152;
  float v153;
  int v154;
  __int64* v155;
  float v156;
  __int64 v157;
  char v158;
  __int64 v159;
  unsigned __int64 v160;
  __int64 v161;
  int v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  float v168;
  _BYTE* v169;
  __int64 v170;
  float v171;
  bool v172;
  float v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  int v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int128 v184;
  __int64 v185;
  float v186;
  __int128 v187;
  __int64 v188;
  __int128* v189;
  float v190;
  __int128 v191;
  __int64 v192;
  __int64 v193;
  int v194;
  int v195;
  __int128 v196;
  __int128 v197;
  __int64 v198;
  float32x4_t* v199;
  float32x4_t v200;
  __int64 v201;
  float32x4_t v202;
  float32x4_t v203;
  __int64 v204;
  __int64 v205;
  __int64* v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  _OWORD* v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  char v216;
  __int64 v217;
  int v218;
  struct {
    char gap0_[16];
    int32x4_t v219;
    int8x16_t v220;
    char gap48_[4];
    int v221;
    __int64 v222;
    __int64 v223;
    char gap72_[8];
    union {
      int8x16_t v225;
      int8x16_t v226;
    };
    char gap96_[8];
    __int64 v227;
    float32x4_t v228;
    float32x4_t v229;
    float v230;
    float v231;
    int v232;
    char gap156_[12];
    float v233[3];
    __int64 v234;
    int v235;
  } f_;
  char v236;

  v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
  v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
  v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *(_QWORD*)(a1 + 368);
  if (*(_BYTE*)(v2 + 80) == 1) {
    for (i = *(__int64***)(v2 + 16); i != *(__int64***)(v2 + 24); i += 2) {
      v5 = **i;
      if (v5 != 0 && *(_DWORD*)(v5 + 16) == *((_DWORD*)*i + 2) &&
          (*(_BYTE*)(v5 + 33) & 1) != 0) {
        LOBYTE(v6) = 1;
        goto LABEL_14;
      }
    }
    v8 = *(__int64**)(v2 + 64);
    v6 = *v8;
    if (*v8 != 0) {
      if (*(_DWORD*)(v6 + 16) == *((_DWORD*)v8 + 2)) {
        LOBYTE(v6) = *(_BYTE*)(v6 + 33);
      }
      else {
        LOBYTE(v6) = 0;
      }
    }
  LABEL_14:
    v10 = *(__int64***)(v2 + 40);
    v9 = *(__int64***)(v2 + 48);
    while (v10 != v9) {
      v11 = **v10;
      if (v11 != 0 && *(_DWORD*)(v11 + 16) == *((_DWORD*)*v10 + 2) &&
          (*(_BYTE*)(v11 + 33) & 1) != 0) {
        v7 = 2;
        goto LABEL_22;
      }
      v10 += 2;
    }
    v7 = 0;
  LABEL_22:
    if ((v6 & 1) != 0) {
      v7 = 1;
    }
  }
  else {
    v7 = 0;
  }
  *(_DWORD*)(*(_QWORD*)(a1 + 184) + 1684LL) = v7;
  v12 = *(_QWORD*)(a1 + 376);
  v13 = *(_QWORD*)(a1 + 184);
  v14 = *(_QWORD*)(v12 + 24);
  v15 = *(_QWORD*)(v12 + 32);
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
  }
  v16 = *(_QWORD*)(v13 + 1584);
  *(_QWORD*)(v13 + 1576) = v14;
  *(_QWORD*)(v13 + 1584) = v15;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak(v16),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak(v15),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v17 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0];
  *(float*)(*(_QWORD*)(a1 + 184) + 112LL) =
      (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                        264LL) *
              0x1.0aef000000000p+4f) /
      0x1.f400000000000p+9f;
  *(float*)(*(_QWORD*)(a1 + 184) + 116LL) =
      (float)(*(float*)(v17 + 160) * 0x1.0aef000000000p+4f) /
      0x1.f400000000000p+9f;
  v18 = *(_QWORD*)(a1 + 16);
  if (*(int*)v18 < 1) {
    v20 = 0;
    f_.v227 = 0;
  }
  else {
    v19 = *(__int64**)(v18 + 112);
    v20 = v19[1];
    f_.v227 = *v19;
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
      v18 = *(_QWORD*)(a1 + 16);
    }
  }
  v21 = GameRoutine_b3f6c0((_QWORD*)(*(_QWORD*)(v18 + 288) + 592LL), "Sun"),
  v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
  v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
  v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  v23 = *((int8x16_t*)v21 + 3);
  v22 = (int8x16_t*)(v21 + 6);
  v24 = v23;
  if (LANES128(v22[4]).n128_u8[0] != 0) {
    v25 = -1;
  }
  else {
    v25 = 0;
  }
  if (LANES128_OF(vbslq_s8(vdupq_n_s32(v25), v22[3], v24)).n128_f32[1] >
      0x0.0p+0f) {
    v26 = GameRoutine_b3f800((_QWORD*)(*(_QWORD*)(v18 + 288) + 592LL), "Moon"),
    v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
    v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
    v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
    v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
    v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    v27 = *((int8x16_t*)v26 + 3);
    v22 = (int8x16_t*)(v26 + 6);
    v24 = v27;
  }
  if (LANES128(v22[4]).n128_u8[0] != 0) {
    v28 = -1;
  }
  else {
    v28 = 0;
  }
  f_.v220 = v22[3];
  if (*(_BYTE*)(*(_QWORD*)(a1 + 184) + 1672LL) == 1) {
    v29 = *(_BYTE*)(a1 + 228);
    *(_DWORD*)(a1 + 232) = *(_DWORD*)(a1 + 236);
    *(_BYTE*)(a1 + 228) = v29 | *(_BYTE*)(a1 + 229);
  }
  f_.v223 = v20;
  v30 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 304LL);
  f_.v225 = v24;
  v31 = *(_QWORD*)(game_g_frame_clock + 13224);
  if (v30 == -1) {
    v34 = 0;
    v33 = *(_QWORD*)(v31 + 48);
    v35 = *(_QWORD*)(v31 + 56);
    if (v35 == 0) {
      goto LABEL_52;
    }
    goto LABEL_51;
  }
  v32 = v31 + 1560LL * v30;
  v33 = *(_QWORD*)(v32 + 1752);
  v34 = *(_QWORD*)(v32 + 1760);
  if (v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                              memory_order_relaxed);
  }
  v35 = v34;
  if (v33 == 0) {
    v33 = *(_QWORD*)(v31 + 48);
    v35 = *(_QWORD*)(v31 + 56);
    if (v35 != 0) {
    LABEL_51:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                                memory_order_relaxed);
    }
  LABEL_52:
    if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
          v105 =
              COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak(v34),
          v105 =
              COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    }
  }
  v36 = *(_QWORD*)(v33 + 8);
  v38 = *(_QWORD*)(v36 + 24);
  v37 = *(_BYTE**)(v36 + 32);
  v39 = 208;
  if (v37[176] != 0) {
    v39 = 172;
  }
  v40 = *(_DWORD*)&v37[v39];
  v41 = 128;
  if (v37[96] != 0) {
    v41 = 92;
  }
  v42 = *(int*)&v37[v41] - v40;
  f_.v221 = v42;
  if (v42 <= 2) {
    v43 = 2;
  }
  else {
    v43 = v42;
  }
  if (v43 >= 5) {
    v44 = 5;
  }
  else {
    v44 = (unsigned int)v43;
  }
  v45 = 200;
  if (*(_BYTE*)(v38 + 168) != 0) {
    v45 = 164;
  }
  v46 = 912;
  v47 = *(_DWORD*)(v38 + v45);
  if (v37[882] != 0) {
    v46 = 881;
  }
  v48 = *(_DWORD*)(a1 + 232);
  v49 = v37[v46];
  v50 = v44 - v47;
  *(_DWORD*)(a1 + 236) = v48;
  if ((int)v44 <= v47 || (v49 & 1) == 0 || (*(_BYTE*)(a1 + 228) & 1) != 0) {
    v55 = 0;
    *(_DWORD*)(a1 + 232) = -1;
  }
  else {
    v51 = v50 + 1;
    v52 = (unsigned int)((v48 + 1) % (v50 + 1));
    *(_DWORD*)(a1 + 232) = v52;
    if (v51 < 1) {
      v55 = 0;
    }
    else {
      v53 = v51 & 3;
      if ((unsigned int)v51 >= 4) {
        v56 = v51 & 0x7FFFFFFC;
        v54 = 0;
        v55 = 0;
        v57 = v47;
        do {
          v58 = 1LL << v57;
          v59 = 1LL << (v57 - 1);
          v60 = v55 & ~v59;
          v61 = v59 | v55;
          if (v52 == v54) {
            v61 = v60;
          }
          v62 = v61 & ~v58;
          v63 = v58 | v61;
          v64 = 1LL << (v57 + 1);
          if (v54 + 1 == v52) {
            v63 = v62;
          }
          v65 = v54 + 2 == v52;
          v66 = v54 + 3;
          v54 += 4;
          v67 = v63 & ~v64;
          v68 = v64 | v63;
          v69 = v57 + 2;
          v57 += 4;
          v70 = 1LL << v69;
          if (v65) {
            v68 = v67;
          }
          v71 = v68 & ~v70;
          v72 = v70 | v68;
          if (v66 == v52) {
            v55 = v71;
          }
          else {
            v55 = v72;
          }
        } while (v54 != v56);
      }
      else {
        v54 = 0;
        v55 = 0;
      }
      if (v53 != 0) {
        v73 = v52 - v54;
        v74 = v47 + v54 - 1;
        do {
          v75 = 1LL << v74;
          v65 = v73 == 0;
          ++v74;
          --v73;
          v76 = v55 & ~v75;
          v77 = v75 | v55;
          if (v65) {
            v55 = v76;
          }
          else {
            v55 = v77;
          }
          --v53;
        } while (v53 != 0);
      }
    }
  }
  f_.v219 = vdupq_n_s32(v28);
  llvm_libcxx_21_libcxx_include___vector_ad0a00(v37, f_.v233),
      v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  v78 = (unsigned int)(v44 - 1);
  v79 = f_.v233[(unsigned int)v78];
  (*(void (**)(__int64))(*(_QWORD*)f_.v227 + 64LL))(f_.v227),
      v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v79 < v80) {
    v82 = f_.v225;
  }
  else {
    v55 |= 1LL << ((unsigned __int8)v44 - 1);
    v81 = f_.v233[v78 - 1];
    (*(void (**)(__int64))(*(_QWORD*)f_.v227 + 64LL))(f_.v227),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    v82 = f_.v225;
    if (v81 >= v83) {
      v55 |= 1LL << ((unsigned __int8)v44 - 2);
      if ((_DWORD)v44 != 2) {
        v84 = f_.v233[v78 - 2];
        (*(void (**)(__int64))(*(_QWORD*)f_.v227 + 64LL))(f_.v227),
            v105 = COERCE_AS(__typeof__(v105),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v113 = COERCE_AS(__typeof__(v113),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v116 = COERCE_AS(__typeof__(v116),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v80 =
                COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
        v82 = f_.v225;
        if (v84 >= v85) {
          v55 |= 1LL << ((unsigned __int8)v44 - 3);
          if ((unsigned int)v78 >= 3) {
            v86 = f_.v233[v78 - 3];
            (*(void (**)(__int64))(*(_QWORD*)f_.v227 + 64LL))(f_.v227),
                v105 = COERCE_AS(__typeof__(v105),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v108 = COERCE_AS(__typeof__(v108),
                                 PSEUDO_REGISTER(__n128, "v3", "=w")),
                v113 = COERCE_AS(__typeof__(v113),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                v114 = COERCE_AS(__typeof__(v114),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v116 = COERCE_AS(__typeof__(v116),
                                 PSEUDO_REGISTER(__n128, "v3", "=w")),
                v80 = COERCE_AS(__typeof__(v80),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v83 = COERCE_AS(__typeof__(v83),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v85 = COERCE_AS(__typeof__(v85),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v87 = COERCE_AS(__typeof__(v87),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v82 = f_.v225;
            if (v86 >= v87) {
              v55 |= 1LL << ((unsigned __int8)v44 - 4);
              if ((_DWORD)v44 != 4) {
                v88 = f_.v233[v78 - 4];
                (*(void (**)(__int64))(*(_QWORD*)f_.v227 + 64LL))(f_.v227),
                    v105 = COERCE_AS(__typeof__(v105),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v106 = COERCE_AS(__typeof__(v106),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v107 = COERCE_AS(__typeof__(v107),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v108 = COERCE_AS(__typeof__(v108),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v113 = COERCE_AS(__typeof__(v113),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v114 = COERCE_AS(__typeof__(v114),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v115 = COERCE_AS(__typeof__(v115),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v116 = COERCE_AS(__typeof__(v116),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v80 = COERCE_AS(__typeof__(v80),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v83 = COERCE_AS(__typeof__(v83),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v85 = COERCE_AS(__typeof__(v85),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v87 = COERCE_AS(__typeof__(v87),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v89 = COERCE_AS(__typeof__(v89),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                v82 = f_.v225;
                if (v88 >= v89) {
                  v55 |= 1LL << ((unsigned __int8)v44 - 5);
                }
              }
            }
          }
        }
      }
    }
  }
  v90 = a1 + 32;
  v91 = 0;
  *(_BYTE*)(a1 + 229) = *(_BYTE*)(a1 + 228);
  v92 = *(_QWORD*)(a1 + 184);
  f_.v222 = v35;
  *(_BYTE*)(a1 + 228) = 0;
  *(_QWORD*)(v92 + 224) = v55;
  f_.v226 = vbslq_s8(f_.v219, f_.v220, v82);
  v93 = GameData_21323d0;
  do {
    if (((v55 >> v91) & 1) != 0) {
      v94 = v91 + 1;
    }
    else {
      v94 = v91 + 1;
      v95 = -f_.v233[v91 + 1];
      v96 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 16632);
      if (*(_QWORD*)(*game_g_frame_clock_ptr[0] + 16616) != 0) {
        v96 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 16616);
      }
      v97 = *(_DWORD*)(v96 + 16);
      v98 = *(float*)(v96 + 4 * v91 + 20);
      v99 = *(_QWORD**)(v90 + 16 * v91);
      f_.v230 = -f_.v233[v91];
      f_.v231 = v95;
      LANES128(f_.v228).n128_u64[0] = f_.v227;
      v100 = (int)(float)(v98 * (float)v97);
      f_.v232 = v100;
      f_.v229 = f_.v226;
      gfx_render_b7ea80((__int64)v99, (__int64*)&f_.v228),
          v105 =
              COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      v101 = v99[40];
      v102 = v101;
      while (v102 != v99[39]) {
        v103 = *(_QWORD*)(v102 - 24);
        v102 -= 24;
        v101 -= 24;
        if (*(char**)(v103 + 8) == v93) {
          if (v99[40] != v101) {
            v104 = *(float32x4_t**)(v101 + 16);
            if (v104 != nullptr) {
              LANES128(v104[13]).n128_u32[0] = v100;
              LANES128(v104[13]).n128_u32[1] = v100;
              (*(void (**)(__int64))(*v99 + 16LL))((__int64)v99),
                  v105 = COERCE_AS(__typeof__(v105),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v108 = COERCE_AS(__typeof__(v108),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v114 = COERCE_AS(__typeof__(v114),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v116 = COERCE_AS(__typeof__(v116),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v80 = COERCE_AS(__typeof__(v80),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v83 = COERCE_AS(__typeof__(v83),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v85 = COERCE_AS(__typeof__(v85),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v87 = COERCE_AS(__typeof__(v87),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v104[1] = v105;
              v104[2] = v106;
              v104[3] = v107;
              v104[4] = v108;
              (*(void (**)(__int64))(*v99 + 24LL))((__int64)v99),
                  v105 = COERCE_AS(__typeof__(v105),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v108 = COERCE_AS(__typeof__(v108),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v114 = COERCE_AS(__typeof__(v114),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v116 = COERCE_AS(__typeof__(v116),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v80 = COERCE_AS(__typeof__(v80),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v83 = COERCE_AS(__typeof__(v83),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v85 = COERCE_AS(__typeof__(v85),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v87 = COERCE_AS(__typeof__(v87),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v109 = v104[1];
              v110 = v104[2];
              v111 = v104[3];
              v112 = v104[4];
              v104[5] = v113;
              v104[6] = v114;
              v104[7] = v115;
              v104[8] = v116;
              v104[9] = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v113, LANES128(v109).n128_f32[0]), v114,
                      COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0]), 1),
                  v115, v109, 2);
              v104[10] = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v113, LANES128(v110).n128_f32[0]), v114,
                      COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]), 1),
                  v115, v110, 2);
              v104[11] = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v113, LANES128(v111).n128_f32[0]), v114,
                      COERCE_AS(float32x2_t, LANES128(v111).n128_u64[0]), 1),
                  v115, v111, 2);
              v104[12] = vaddq_f32(
                  v116,
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v113, LANES128(v112).n128_f32[0]), v114,
                          COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]),
                          1),
                      v115, v112, 2));
            }
          }
          break;
        }
      }
    }
    v91 = v94;
  } while (v94 != v44);
  v117 = f_.v235;
  v118 = *(_QWORD*)(a1 + 184);
  v119 = f_.v234;
  *(_QWORD*)(v118 + 200) = *(_QWORD*)&f_.v233[1];
  *(_QWORD*)(v118 + 208) = v119;
  *(_DWORD*)(v118 + 232) = v44;
  *(_DWORD*)(v118 + 216) = v117;
  if ((v55 & 1) == 0) {
    *(_OWORD*)(*(_QWORD*)(a1 + 184) + 240LL) =
        *(_OWORD*)(*(_QWORD*)(a1 + 32) + 160LL);
  }
  if ((v55 & 2) == 0) {
    *(_OWORD*)(*(_QWORD*)(a1 + 184) + 256LL) =
        *(_OWORD*)(*(_QWORD*)(a1 + 48) + 160LL);
  }
  if (f_.v221 >= 3) {
    if ((v55 & 4) == 0) {
      *(_OWORD*)(*(_QWORD*)(a1 + 184) + 272LL) =
          *(_OWORD*)(*(_QWORD*)(a1 + 64) + 160LL);
    }
    if (f_.v221 != 3) {
      if ((v55 & 8) == 0) {
        *(_OWORD*)(*(_QWORD*)(a1 + 184) + 288LL) =
            *(_OWORD*)(*(_QWORD*)(a1 + 80) + 160LL);
      }
      if (f_.v221 != 4 && (v55 & 0x10) == 0) {
        *(_OWORD*)(*(_QWORD*)(a1 + 184) + 304LL) =
            *(_OWORD*)(*(_QWORD*)(a1 + 96) + 160LL);
      }
    }
  }
  if (f_.v221 <= 4) {
    if ((unsigned int)v44 <= 4) {
      v120 = 4;
    }
    else {
      v120 = (unsigned int)v44;
    }
    v121 = v120 - v44;
    v122 = v90 + 16LL * (unsigned int)(v44 - 1);
    for (j = ((_BYTE)v120 - (_BYTE)v44 + 1) & 7; j != 0;
         *(_OWORD*)(v124 + 240) = *(_OWORD*)(*(_QWORD*)v122 + 160LL)) {
      --j;
      v124 = *(_QWORD*)(a1 + 184) + 16 * v44++;
    }
    if (v121 >= 7) {
      v125 = 16 * v44;
      v126 = 0;
      v127 = v120 - v44 + 1;
      do {
        *(_OWORD*)(*(_QWORD*)(a1 + 184) + v125 + 16 * v126 + 240) =
            *(_OWORD*)(*(_QWORD*)v122 + 160LL);
        *(_OWORD*)(*(_QWORD*)(a1 + 184) + v125 + 16 * v126 + 256) =
            *(_OWORD*)(*(_QWORD*)v122 + 160LL);
        *(_OWORD*)(*(_QWORD*)(a1 + 184) + v125 + 16 * v126 + 272) =
            *(_OWORD*)(*(_QWORD*)v122 + 160LL);
        *(_OWORD*)(*(_QWORD*)(a1 + 184) + v125 + 16 * v126 + 288) =
            *(_OWORD*)(*(_QWORD*)v122 + 160LL);
        *(_OWORD*)(*(_QWORD*)(a1 + 184) + v125 + 16 * v126 + 304) =
            *(_OWORD*)(*(_QWORD*)v122 + 160LL);
        *(_OWORD*)(*(_QWORD*)(a1 + 184) + v125 + 16 * v126 + 320) =
            *(_OWORD*)(*(_QWORD*)v122 + 160LL);
        *(_OWORD*)(*(_QWORD*)(a1 + 184) + v125 + 16 * v126 + 336) =
            *(_OWORD*)(*(_QWORD*)v122 + 160LL);
        v128 = *(_QWORD*)(a1 + 184) + v125 + 16 * v126;
        v126 += 8;
        *(_OWORD*)(v128 + 352) = *(_OWORD*)(*(_QWORD*)v122 + 160LL);
      } while (v127 != v126);
    }
  }
  v129 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(v129 +
             304) =
      (*(__int64 (**)(__int64))(*(_QWORD*)f_.v227 + 96LL))(f_.v227),
             v105 = COERCE_AS(__typeof__(v105),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v106 = COERCE_AS(__typeof__(v106),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v107 = COERCE_AS(__typeof__(v107),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v108 = COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v113 = COERCE_AS(__typeof__(v113),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v114 = COERCE_AS(__typeof__(v114),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v115 = COERCE_AS(__typeof__(v115),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v116 = COERCE_AS(__typeof__(v116),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v80 =
                 COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
             v83 =
                 COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
             v85 =
                 COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
             v87 =
                 COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
             v89 =
                 COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  v130 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(v130 +
             304) =
      (*(__int64 (**)(__int64))(*(_QWORD*)f_.v227 + 96LL))(f_.v227),
             v105 = COERCE_AS(__typeof__(v105),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v106 = COERCE_AS(__typeof__(v106),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v107 = COERCE_AS(__typeof__(v107),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v108 = COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v113 = COERCE_AS(__typeof__(v113),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v114 = COERCE_AS(__typeof__(v114),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v115 = COERCE_AS(__typeof__(v115),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v116 = COERCE_AS(__typeof__(v116),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v80 =
                 COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
             v83 =
                 COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
             v85 =
                 COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
             v87 =
                 COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
             v89 =
                 COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  v131 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(v131 +
             304) =
      (*(__int64 (**)(__int64))(*(_QWORD*)f_.v227 + 96LL))(f_.v227),
             v105 = COERCE_AS(__typeof__(v105),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v106 = COERCE_AS(__typeof__(v106),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v107 = COERCE_AS(__typeof__(v107),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v108 = COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v113 = COERCE_AS(__typeof__(v113),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v114 = COERCE_AS(__typeof__(v114),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v115 = COERCE_AS(__typeof__(v115),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v116 = COERCE_AS(__typeof__(v116),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v80 =
                 COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
             v83 =
                 COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
             v85 =
                 COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
             v87 =
                 COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
             v89 =
                 COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  v132 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(v132 +
             304) =
      (*(__int64 (**)(__int64))(*(_QWORD*)f_.v227 + 96LL))(f_.v227),
             v105 = COERCE_AS(__typeof__(v105),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v106 = COERCE_AS(__typeof__(v106),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v107 = COERCE_AS(__typeof__(v107),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v108 = COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v113 = COERCE_AS(__typeof__(v113),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v114 = COERCE_AS(__typeof__(v114),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v115 = COERCE_AS(__typeof__(v115),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v116 = COERCE_AS(__typeof__(v116),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v80 =
                 COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
             v83 =
                 COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
             v85 =
                 COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
             v87 =
                 COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
             v89 =
                 COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  v133 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(v133 +
             304) =
      (*(__int64 (**)(__int64))(*(_QWORD*)f_.v227 + 96LL))(f_.v227),
             v105 = COERCE_AS(__typeof__(v105),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v106 = COERCE_AS(__typeof__(v106),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v107 = COERCE_AS(__typeof__(v107),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v108 = COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v113 = COERCE_AS(__typeof__(v113),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v114 = COERCE_AS(__typeof__(v114),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v115 = COERCE_AS(__typeof__(v115),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v116 = COERCE_AS(__typeof__(v116),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v80 =
                 COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
             v83 =
                 COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
             v85 =
                 COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
             v87 =
                 COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
             v89 =
                 COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  if (f_.v222 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v222 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)f_.v222 + 16LL))(f_.v222),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak(f_.v222),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v134 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 304LL);
  v135 = *(_QWORD*)(game_g_frame_clock + 13224);
  if (v134 == -1) {
    v138 = 0;
    v137 = *(_QWORD*)(v135 + 48);
    v139 = *(_QWORD*)(v135 + 56);
    if (v139 == 0) {
      goto LABEL_150;
    }
    goto LABEL_149;
  }
  v136 = v135 + 1560LL * v134;
  v137 = *(_QWORD*)(v136 + 1752);
  v138 = *(_QWORD*)(v136 + 1760);
  if (v138 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v138 + 8), 1u,
                              memory_order_relaxed);
  }
  v139 = v138;
  if (v137 == 0) {
    v137 = *(_QWORD*)(v135 + 48);
    v139 = *(_QWORD*)(v135 + 56);
    if (v139 == 0) {
    LABEL_150:
      if (v138 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v138 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v138 + 16LL))(v138),
            v105 = COERCE_AS(__typeof__(v105),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v113 = COERCE_AS(__typeof__(v113),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v116 = COERCE_AS(__typeof__(v116),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v80 =
                COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak(v138),
            v105 = COERCE_AS(__typeof__(v105),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v113 = COERCE_AS(__typeof__(v113),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v116 = COERCE_AS(__typeof__(v116),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v80 =
                COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      goto LABEL_153;
    }
  LABEL_149:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v139 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_150;
  }
LABEL_153:
  v140 = *(_QWORD*)(*(_QWORD*)(v137 + 8) + 344LL);
  v141 = *(float*)(v140 + 92);
  v142 = *(float*)(v140 + 128);
  v143 = *(unsigned __int8*)(v140 + 96);
  v144 = *(_QWORD*)(game_g_frame_clock + 13232);
  LANES128(f_.v228).n128_u64[0] = (unsigned __int64)"BmapToZoom";
  LANES128(f_.v228).n128_u64[1] = 10;
  v145 = GameRoutine_a94c80((_QWORD*)(v144 + 48), (__int64*)&f_.v228),
  v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
  v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
  v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v145 != nullptr) {
    if (v143 != 0) {
      v146 = v141;
    }
    else {
      v146 = v142;
    }
    *((float*)v145 + 11) = v146;
  }
  v147 = *(float*)(v140 + 172);
  v148 = *(float*)(v140 + 208);
  v149 = *(unsigned __int8*)(v140 + 176);
  LANES128(f_.v228).n128_u64[0] = (unsigned __int64)"DitherAlphaBeginDist";
  LANES128(f_.v228).n128_u64[1] = 20;
  v150 = GameRoutine_a94c80((_QWORD*)(v144 + 48), (__int64*)&f_.v228),
  v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
  v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
  v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v150 != nullptr) {
    if (v149 != 0) {
      v151 = v147;
    }
    else {
      v151 = v148;
    }
    *((float*)v150 + 11) = v151;
  }
  v152 = *(float*)(v140 + 252);
  v153 = *(float*)(v140 + 288);
  v154 = *(unsigned __int8*)(v140 + 256);
  LANES128(f_.v228).n128_u64[0] = (unsigned __int64)"DitherAlphaEndDist";
  LANES128(f_.v228).n128_u64[1] = 18;
  v155 = GameRoutine_a94c80((_QWORD*)(v144 + 48), (__int64*)&f_.v228),
  v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
  v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
  v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v155 != nullptr) {
    if (v154 != 0) {
      v156 = v152;
    }
    else {
      v156 = v153;
    }
    *((float*)v155 + 11) = v156;
  }
  if (v139 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v139 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v139 + 16LL))(v139),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak(v139),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v157 = *(_QWORD*)(a1 + 16);
  if (*(_BYTE*)(v157 + 48) == 1) {
    if (*(_BYTE*)(*(_QWORD*)(a1 + 184) + 1672LL) != 0) {
      v158 = *(_BYTE*)(a1 + 225) | *(_BYTE*)(*(_QWORD*)(v157 + 288) + 640LL);
      *(_BYTE*)(a1 + 225) = v158;
      *(_BYTE*)(*(_QWORD*)(v157 + 288) + 640LL) = v158;
    }
    else {
      *(_BYTE*)(*(_QWORD*)(v157 + 288) + 640LL) = *(_BYTE*)(a1 + 225);
      *(_BYTE*)(a1 + 225) = 0;
    }
  }
  v159 = *(_QWORD*)(a1 + 384);
  v160 = *(_QWORD*)(a1 + 24);
  LANES128(f_.v228).n128_u64[0] = *(_QWORD*)(a1 + 16);
  LANES128(f_.v228).n128_u64[1] = v160;
  if (v160 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v160 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_c4e670(v159, &f_.v228, (__int64)a2),
      v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  v161 = LANES128(f_.v228).n128_i64[1];
  if (LANES128(f_.v228).n128_u64[1] != 0 &&
      atomic_fetch_add(
          (atomic_ullong* volatile)(LANES128(f_.v228).n128_u64[1] + 8),
          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v161 + 16LL))(v161),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak(v161),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  *(_BYTE*)(*(_QWORD*)(a1 + 16) + 320LL) = *(_BYTE*)(a1 + 226);
  *(_BYTE*)(a1 + 226) = 0;
  v162 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 304LL);
  v163 = *(_QWORD*)(game_g_frame_clock + 13224);
  if (v162 == -1) {
    v166 = 0;
    v165 = *(_QWORD*)(v163 + 48);
    v167 = *(_QWORD*)(v163 + 56);
    if (v167 == 0) {
      goto LABEL_188;
    }
    goto LABEL_187;
  }
  v164 = v163 + 1560LL * v162;
  v165 = *(_QWORD*)(v164 + 1752);
  v166 = *(_QWORD*)(v164 + 1760);
  if (v166 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v166 + 8), 1u,
                              memory_order_relaxed);
  }
  v167 = v166;
  if (v165 == 0) {
    v165 = *(_QWORD*)(v163 + 48);
    v167 = *(_QWORD*)(v163 + 56);
    if (v167 == 0) {
    LABEL_188:
      if (v166 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v166 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v166 + 16LL))(v166),
            v105 = COERCE_AS(__typeof__(v105),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v113 = COERCE_AS(__typeof__(v113),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v116 = COERCE_AS(__typeof__(v116),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v80 =
                COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak(v166),
            v105 = COERCE_AS(__typeof__(v105),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v113 = COERCE_AS(__typeof__(v113),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v116 = COERCE_AS(__typeof__(v116),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v80 =
                COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      goto LABEL_191;
    }
  LABEL_187:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v167 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_188;
  }
LABEL_191:
  v168 = 0x1.0000000000000p+0f;
  v169 = *(_BYTE**)(*(_QWORD*)(v165 + 8) + 240LL);
  v170 = 200;
  if (v169[168] != 0) {
    v170 = 164;
  }
  v171 = *(float*)&v169[v170];
  if (!(v171 > 0x1.0000000000000p+0f)) {
    v168 = *(float*)&v169[v170];
  }
  v172 = v171 < 0x0.0p+0f;
  v173 = 0x0.0p+0f;
  if (!v172) {
    v173 = v168;
  }
  *(float*)(*(_QWORD*)(a1 + 464) + 72LL) = v173;
  *(_QWORD*)(*(_QWORD*)(a1 + 464) + 76LL) = 1065353216;
  v174 = 280;
  if (v169[248] != 0) {
    v174 = 244;
  }
  *(_DWORD*)(*(_QWORD*)(a1 + 464) + 84LL) = *(_DWORD*)&v169[v174];
  v175 = 360;
  if (v169[328] != 0) {
    v175 = 324;
  }
  *(_DWORD*)(*(_QWORD*)(a1 + 464) + 88LL) = *(_DWORD*)&v169[v175];
  v176 = 120;
  if (v169[90] != 0) {
    v176 = 89;
  }
  *(_BYTE*)(*(_QWORD*)(a1 + 464) + 92LL) = v169[v176];
  if (v167 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v167 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v167 + 16LL))(v167),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak(v167),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v177 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 304LL);
  v178 = *(_QWORD*)(game_g_frame_clock + 13224);
  if (v177 == -1) {
    v181 = 0;
    v180 = *(_QWORD*)(v178 + 48);
    v182 = *(_QWORD*)(v178 + 56);
    if (v182 == 0) {
      goto LABEL_212;
    }
    goto LABEL_211;
  }
  v179 = v178 + 1560LL * v177;
  v180 = *(_QWORD*)(v179 + 1752);
  v181 = *(_QWORD*)(v179 + 1760);
  if (v181 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v181 + 8), 1u,
                              memory_order_relaxed);
  }
  v182 = v181;
  if (v180 == 0) {
    v180 = *(_QWORD*)(v178 + 48);
    v182 = *(_QWORD*)(v178 + 56);
    if (v182 == 0) {
    LABEL_212:
      if (v181 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v181 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v181 + 16LL))(v181),
            v105 = COERCE_AS(__typeof__(v105),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v113 = COERCE_AS(__typeof__(v113),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v116 = COERCE_AS(__typeof__(v116),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v80 =
                COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak(v181),
            v105 = COERCE_AS(__typeof__(v105),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v113 = COERCE_AS(__typeof__(v113),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v116 = COERCE_AS(__typeof__(v116),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v80 =
                COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      goto LABEL_215;
    }
  LABEL_211:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v182 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_212;
  }
LABEL_215:
  v183 = *(_QWORD*)(*(_QWORD*)(v180 + 8) + 224LL);
  v184 = *(_OWORD*)GameData_212c540;
  v185 = 1640;
  if (*(_BYTE*)(v183 + 1608) != 0) {
    v185 = 1604;
  }
  v186 = *(float*)(v183 + v185);
  LODWORD(GameData_2228060) = 1065353216;
  *(_QWORD*)&v187 = v184;
  *((float*)&GameData_2228060 + 1) = v186 * 0x1.99999a0000000p-4f;
  *((_QWORD*)&v187 + 1) = DWORD2(v184);
  GameData_2228050 = v187;
  if (v182 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v182 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v182 + 16LL))(v182),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak(v182),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v188 = *(_QWORD*)(a1 + 480);
  v189 = (__int128*)(*a2 + 32LL);
  if (*(_BYTE*)(v188 + 64) != 0) {
    v189 = (__int128*)(v188 + 48);
  }
  v190 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                           264LL) *
                 0x1.0aef000000000p+4f) /
         0x1.f400000000000p+9f;
  v191 = *v189;
  v192 = *(_QWORD*)(v188 + 96);
  v193 = *(_QWORD*)(v188 + 104);
  *(_BYTE*)(v188 + 160) = 0;
  *(_QWORD*)(v188 + 112) = v192;
  *(_QWORD*)(v188 + 120) = v193;
  *(_OWORD*)(v188 + 80) = v191;
  *(float*)(v188 + 172) = v190;
  v194 = (int)(float)(*(float*)&v191 -
                      (float)(*(float*)v188 * 0x1.0000000000000p-1f));
  v195 = (int)(float)(*((float*)&v191 + 2) -
                      (float)(*(float*)v188 * 0x1.0000000000000p-1f));
  v196 = *(_OWORD*)(v188 + 96);
  if ((int)*(float*)&v196 != v194 || (int)*((float*)&v196 + 2) != v195) {
    DWORD1(v197) = 0;
    DWORDn(v197, sizeof(v197) / 4 - 1) = 0;
    *(_BYTE*)(v188 + 160) = 1;
    *(float*)&v197 = (float)v194;
    *((float*)&v197 + 2) = (float)v195;
    *(_OWORD*)(v188 + 96) = v197;
  }
  v198 = *(_QWORD*)(v188 + 16);
  v199 = *(float32x4_t**)(v188 + 24);
  *(_QWORD*)f_.v233 = v188;
  LANES128(f_.v228).n128_u64[0] = (unsigned __int64)&v236;
  LANES128(f_.v228).n128_u64[1] = (unsigned __int64)f_.v233;
  if ((float32x4_t*)v198 != v199) {
    gfxa_c622a0(v198, v199, (__int64)&f_.v228,
                (2 * __clz((unsigned long long)(((__int64)v199 - v198) >> 5))) ^
                    0x7E,
                1),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  llvm_libcxx_21_libcxx_include___functional_bf3cc0(*(_QWORD*)(a1 + 464),
                                                    *(_QWORD*)(a1 + 16)),
      v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_BYTE*)(*(_QWORD*)(a1 + 384) + 64LL) == 1) {
    LANES128(v200).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v200).n128_u64[1] = 0x3F0000003F000000LL;
    v201 = *(_QWORD*)(a1 + 168);
    v202 = vmulq_f32(*(float32x4_t*)GameData_212c548, v200);
    v203 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 288LL) + 656LL);
    f_.v228 = vsubq_f32(v203, v202);
    f_.v229 = vaddq_f32(v203, v202);
    gfxa_b44060(v201, 0, (__int64*)&f_.v228),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    v204 = *(_QWORD*)(a1 + 168);
    v205 = *(_QWORD*)(a1 + 184);
    if ((*(_QWORD*)(v204 + 488) & (*(_QWORD*)(v204 + 488) - 1LL)) != 0) {
      v206 = **(__int64***)(v204 + 480);
      do {
        do {
          v206 = (__int64*)*v206;
        } while (v206[1] != 0);
      } while (*((_DWORD*)v206 + 4) != 0);
    }
    else {
      v206 = **(__int64***)(v204 + 480);
      do {
        do {
          v206 = (__int64*)*v206;
        } while (v206[1] != 0);
      } while (*((_DWORD*)v206 + 4) != 0);
    }
    v207 = v206[10];
    v208 = v206[11];
    if (v208 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v208 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v208 + 8), 1u,
                                memory_order_relaxed);
    }
    v209 = *(_QWORD*)(v205 + 1424);
    *(_QWORD*)(v205 + 1416) = v207;
    *(_QWORD*)(v205 + 1424) = v208;
    if (v209 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v209 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v209 + 16LL))(v209),
          v105 =
              COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak(v209),
          v105 =
              COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    if (v208 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v208 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v208 + 16LL))(v208),
          v105 =
              COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak(v208),
          v105 =
              COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    }
  }
  if (*(_BYTE*)(a1 + 448) != 0) {
    v210 = (_OWORD*)(a1 + 432);
  }
  else {
    v210 = (_OWORD*)(*a2 + 32LL);
  }
  *(_OWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 288LL) + 992LL) = *v210;
  v211 = *(_QWORD*)(a1 + 400);
  v212 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 288LL);
  *(_DWORD*)(v212 + 568) = *(_DWORD*)(a1 + 408);
  *(_QWORD*)(v212 + 560) = v211;
  v213 = *(_QWORD*)(a1 + 416);
  v214 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 288LL);
  *(_DWORD*)(v214 + 584) = *(_DWORD*)(a1 + 424);
  *(_QWORD*)(v214 + 576) = v213;
  *(_BYTE*)(*(_QWORD*)(a1 + 184) + 1665LL) = *(_BYTE*)(a1 + 227);
  *(_BYTE*)(a1 + 227) = 0;
  if (*(_BYTE*)(*(_QWORD*)(a1 + 16) + 48LL) == 1) {
    v215 = *(_QWORD*)(game_g_frame_clock + 16632);
    if (*(_QWORD*)(game_g_frame_clock + 16616) != 0) {
      v215 = *(_QWORD*)(game_g_frame_clock + 16616);
    }
    v216 = *(_BYTE*)(a1 + 240) & *(_BYTE*)(v215 + 116);
    GameRoutine_bbc460(*(_QWORD*)(a1 + 184), *(_BYTE*)(v215 + 116)),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    v217 = *(_QWORD*)(a1 + 184);
    if (*(_BYTE*)(v217 + 1669) != (v216 & 1)) {
      *(_BYTE*)(v217 + 1669) = v216;
      v217 = *(_QWORD*)(a1 + 184);
    }
    v218 = *(unsigned __int8*)(a1 + 241);
    if (*(unsigned __int8*)(v217 + 1670) != v218) {
      *(_BYTE*)(v217 + 1670) = v218;
    }
  }
  if (f_.v223 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v223 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)f_.v223 + 16LL))(f_.v223),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak(f_.v223),
        v105 = COERCE_AS(__typeof__(v105), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(float, "s0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  }
}

#pragma GCC visibility pop
