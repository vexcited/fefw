#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_1685230(PSEUDO_X8);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void Layout_1685360(PSEUDO_X8, __int64, _QWORD**,
                                               _QWORD*, _QWORD*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_133f1d0(__int64);
__int64 GameRoutine_16823d0(__int64*, const char*, char);
__int64 GameRoutine_1683390(__int64*, __int64, __int64, __int64*);
__int64 GameRoutine_1a09d20(unsigned __int64, __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 Impl_13261c0(__int64);
__int64 Impl_1328460(__int64);
__int64 Impl_1328670(__int64);
__int64 Impl_13287c0(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_1841930(__int64, __int64);
__int64 game_templates_16824c0(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneAlpha(__int64 result, __int64, char);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
__int64 ui_LayoutAccessor_SetScale(__int64 result, _QWORD*);
bool GameRoutine_133f0c0(__int64);
bool Impl_1328300(__int64);
char* game_util_Format(const char*, ...);
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d708;
extern __int64* GameData_2130e60;
extern __int64 GameData_212c060;
extern __int64 GameData_225e7a0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char* GameData_20807f0[4];
extern unsigned __int8 GameData_1bee1cc[80];
float ui_LayoutAccessor_SetPaneTranslate(__int64*, __int64, __int64);
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
void GameRoutine_1596fe0(__int64, int);
void GameRoutine_1683020(__int64*);
void GameRoutine_16832b0(_QWORD*, __int64, __int64, __int64, const char*);
void __attribute__((noreturn)) GameRoutine_12680d0();
void __attribute__((noreturn)) GameRoutine_16834f0();
void __attribute__((noreturn)) GameRoutine_1683510();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) String_60a1d0();
void game_templates_167fe20(__int64, __int64);
void llvm_libcxx_21_libcxx_include___vector_1683540(__int64*, __int64*,
                                                    unsigned __int64, __int64*,
                                                    signed __int64, long double,
                                                    long double);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_templates_1680560(__int64 a1);

void game_templates_1680560(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  __int128 v5;
  __int64* v6;
  long double v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  __int64* i;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64** v31;
  __int64** v32;
  __int64* v33;
  int v34;
  bool v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  unsigned __int64 v59;
  int v60;
  float v61;
  float v62;
  __int64 v63;
  int v64;
  _QWORD* v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  int v71;
  int v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  _QWORD* v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  char* v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  char* v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  _QWORD* v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  int v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  _QWORD* v106;
  _QWORD* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int16 v111;
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
  __int64* v122;
  __int64* v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64* v126;
  signed __int64 v127;
  bool v128;
  __int64 v129;
  __int64 v130;
  __int64* v131;
  __int64* v132;
  char* v133;
  char* v134;
  unsigned int v135;
  __int64 v136;
  char* v137;
  __int64 v138;
  __int64 v139;
  char* v140;
  __int64 v141;
  __int64 v142;
  __int64* v143;
  __int64* v144;
  __int64* v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  _QWORD* v151;
  __int64 v152;
  char* v153;
  char* v154;
  __int64 v155;
  __int64* v156;
  _QWORD* v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64* v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  char* v167;
  __int64 v168;
  __int64 v169;
  _QWORD* v170;
  __int64 v171;
  __int64 v172;
  char* v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  unsigned __int8* v177;
  __int64 v178;
  __int64* v179;
  __int64* v180;
  int v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  char v187;
  __int64 v188;
  __int64 v189;
  __int64* v190;
  __int64* v191;
  __int64 v192;
  __int64 v193;
  __int64** v194;
  __int64* v195;
  __int64* v196;
  __int64 v197;
  char* v198;
  unsigned __int64 v199;
  unsigned __int64 v200;
  char* v201;
  int v202;
  __int64 v203;
  __int64 v204;
  _QWORD* v205;
  char* v206;
  __int64 v207;
  __int64* v208;
  int v209;
  __int64* v210;
  __int64* v211;
  __int64* v212;
  char* v213;
  unsigned __int64 v214;
  __int64* v215;
  _QWORD* v217;
  __int64 v218;
  char v219;
  __int64 v220;
  float v221;
  __int128 v222;
  float v223;
  __int64 v224;
  int v225;
  char* v226;
  __int64 v227;
  int v228;
  __int64 v229;
  _QWORD* v230;
  __int64 v231;
  __int64 v232;
  unsigned __int8* v233;
  __int64 v234;
  __int64* v235;
  __int64* v236;
  int v237;
  __int64 v238;
  char* v239;
  unsigned __int64 v240;
  unsigned __int64 v241;
  char* v242;
  __int64 v243;
  char* v244;
  __int64 v245;
  long double v246;
  __int64* v247;
  __int64* v248;
  __int64* v249;
  __int64* v250;
  char* v251;
  unsigned __int64 v252;
  __int64* v253;
  _QWORD* v255;
  __int64 v256;
  __int128 v257;
  float v258;
  float v259;
  __int64 v260;
  char* v261;
  __int64 v262;
  int v263;
  __int64 v264;
  _QWORD* v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64* v271;
  __int64 v272;
  __int64 v273;
  __int64* v274;
  __int64 v275;
  __int64 v276;
  struct {
    __int64 v277;
    __int64 v278;
  } v277_;
  _QWORD v279[2];
  struct {
    char* v280;
    __int64 v281;
  } v280_;
  struct {
    __int64* v282;
    unsigned __int64 v283;
  } v282_;
  struct {
    _QWORD* v284;
    unsigned __int64 v285;
    char* v286;
    char gap120_[16];
    __int64 v287;
  } v284_;

  v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  LayoutAccessor_155e830(*(_QWORD*)(a1 + 168), 1),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  ui_LayoutAccessor_SetPriority(*(_QWORD*)(a1 + 168), *(int*)(a1 + 228) + 1),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v2 = *(_QWORD*)(a1 + 336);
  *(_QWORD*)(a1 + 288) = 0;
  *(_BYTE*)(a1 + 296) = -1;
  *(_DWORD*)(a1 + 280) = 1059061760;
  if (v2 != 0) {
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v2 + 48LL))(
        v2, a1 + 296, a1 + 288, a1 + 280),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  GameRoutine_16823d0(*(__int64**)(a1 + 168), "L_Cursor", 0),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  GameRoutine_16823d0(*(__int64**)(a1 + 168), "L_CursorSelect", 1),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (*GameData_212d708 != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212d708 + 16) + 96LL);
    if (v3 != 0 && *(_QWORD*)(v3 + 120) != 0 &&
        (unsigned __int8)Impl_13261c0(v3) != 13 &&
        (unsigned __int8)Impl_13261c0(v3) != 12 &&
        (unsigned __int8)Impl_13261c0(v3) != 11) {
      v4 = *(float*)(a1 + 280);
      v5 = *(_OWORD*)(v3 + 32);
      v6 = *(__int64**)(a1 + 168);
      LODWORD(v284_.v285) = 0;
      *(float*)&v284_.v284 =
          (float)((float)(*(float*)&v5 * v4) + 0x1.e000000000000p+9f) +
          -0x1.e000000000000p+9f;
      *((float*)&v284_.v284 + 1) =
          0x1.0e00000000000p+9f -
          (float)((float)(v4 * *((float*)&v5 + 2)) + 0x1.0e00000000000p+9f);
      ui_LayoutAccessor_SetPaneTranslate(v6, (__int64)"L_Cursor",
                                         (__int64)&v284_.v284),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 168),
                                       (__int64)"L_Cursor", 1),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
  }
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 168), (__int64)"N_Temp", 0),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v9 = *(_QWORD*)(a1 + 256);
  v10 = *(_QWORD*)(a1 + 264);
  for (i = (__int64*)fw_memory_g_heap_manager_ptr; v10 != v9; v10 -= 104) {
    v12 = *(_QWORD*)(v10 - 48);
    if (v12 != 0) {
      *(_QWORD*)(v10 - 40) = v12;
      if (*(_QWORD*)(*i + 200) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*i + v13, v12),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    v14 = *(_QWORD*)(v10 - 56);
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    v15 = *(_QWORD*)(v10 - 72);
    if (v15 != 0) {
      std___1___shared_weak_count___release_weak(v15),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
  }
  *(_QWORD*)(a1 + 264) = v9;
  v284_.v287 = a1;
  v16 = *(char**)(GameData_225e7a0 + 192);
  v17 = *(char**)(GameData_225e7a0 + 200);
  if (v17 != v16) {
    if ((0xAAAAAAAAAAAAAAABLL * ((v17 - v16) >> 5)) >> 61 == 0) {
      v18 = fw_memory_HeapManager_Allocate(
          *i, 0x5555555555555558LL * ((v17 - v16) >> 5), 16, 0),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v19 = v18 + 0x5555555555555558LL * ((v17 - v16) >> 5);
      v20 = (__int64*)v18;
      while (1) {
        if ((unsigned __int64)v20 < v19) {
          *v20++ = *(_QWORD*)v16;
        }
        else {
          v21 = (unsigned __int64)v20 - v18;
          v22 = ((__int64)v20 - v18) >> 3;
          v23 = v22 + 1;
          if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
            break;
          }
          v24 = v18;
          if ((__int64)(v19 - v18) >> 2 > v23) {
            v23 = (__int64)(v19 - v18) >> 2;
          }
          if (v19 - v18 >= 0x7FFFFFFFFFFFFFF8LL) {
            v25 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v25 = v23;
          }
          if (v25 != 0) {
            if (v25 >> 61 != 0) {
              goto LABEL_431;
            }
            v26 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v25, 16, 0),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
          else {
            v26 = 0;
          }
          v19 = v26 + 8 * v25;
          v27 = v26 + v21 - 8 * v22;
          *(_QWORD*)(v26 + v21) = *(_QWORD*)v16;
          v28 = v26 + v21 + 8;
          GameRoutine_1a0b950(v27, v24, v21),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v24 != 0) {
            v29 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v29 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v24),
                v246 = COERCE_AS(__typeof__(v246),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
          v18 = v27;
          v20 = (__int64*)v28;
        }
        v16 += 96;
        if (v16 == v17) {
          goto LABEL_44;
        }
      }
    }
  LABEL_433:
    GameRoutine_12680d0(),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  v19 = 0;
  v20 = nullptr;
  v18 = 0;
LABEL_44:
  v30 = *(_QWORD*)(*GameData_212c790 + 8);
  v31 = *(__int64***)(v30 + 8);
  v32 = *(__int64***)(v30 + 16);
  while (v31 != v32) {
    v33 = *v31;
    v34 = *((_DWORD*)*v31 + 135);
    v35 = __OFSUB__(v34, 1);
    v36 = (unsigned int)(v34 - 1);
    if (((v36 & 0x80000000) != 0LL) == v35) {
      v37 = v33[3];
      v38 = v33[4] - v37;
      v39 = (__int64*)(v37 + 8LL * (unsigned int)v36);
      if (v36 < v38 >> 3) {
        v33 = v39;
      }
    }
    v40 = *v33;
    if (*v33 != 0 && *(_BYTE*)(v40 + 176) != 1) {
      if ((__int64*)v18 == v20) {
      LABEL_57:
        if ((unsigned __int64)v20 < v19) {
          *v20++ = v40;
        }
        else {
          v43 = (unsigned __int64)v20 - v18;
          v44 = ((__int64)v20 - v18) >> 3;
          v45 = v44 + 1;
          if ((unsigned __int64)(v44 + 1) >> 61 != 0) {
            goto LABEL_433;
          }
          v46 = v18;
          if ((__int64)(v19 - v18) >> 2 > v45) {
            v45 = (__int64)(v19 - v18) >> 2;
          }
          if (v19 - v18 >= 0x7FFFFFFFFFFFFFF8LL) {
            v47 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v47 = v45;
          }
          if (v47 != 0) {
            if (v47 >> 61 != 0) {
              goto LABEL_431;
            }
            v48 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v47, 16, 0),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
          else {
            v48 = 0;
          }
          v19 = v48 + 8 * v47;
          v49 = v48 + v43 - 8 * v44;
          *(_QWORD*)(v48 + v43) = v40;
          v50 = v48 + v43 + 8;
          GameRoutine_1a0b950(v49, v46, v43),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v46 != 0) {
            v51 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v46),
                v246 = COERCE_AS(__typeof__(v246),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
          v18 = v49;
          v20 = (__int64*)v50;
        }
      }
      else {
        v41 = (__int64*)v18;
        while (1) {
          v42 = *v41++;
          if (v42 == v40) {
            break;
          }
          if (v41 == v20) {
            goto LABEL_57;
          }
        }
      }
    }
    ++v31;
  }
  v272 = v18;
  if ((__int64*)v18 != v20) {
    v52 = v18;
    v274 = v20;
    do {
      v53 = *(_QWORD*)(*GameData_212c790 + 8);
      v55 = *(__int64**)(v53 + 8);
      v54 = *(__int64**)(v53 + 16);
      if (v55 == v54) {
        goto LABEL_76;
      }
      v56 = *(_QWORD*)v52;
      v57 = 0;
      v58 = nullptr;
      v59 = 0;
      v60 = 0;
      v8 = *(long double*)(*(_QWORD*)v52 + 32LL);
      {
        __typeof__(v7) z_ = (__typeof__(v7)){0};
        LODWORD(z_) = *(_DWORD*)(GameData_225e7a0 + 280);
        v7 = z_;
      }
      v61 = (float)((float)(*(float*)&v8 * *(float*)&v7) +
                    0x1.e000000000000p+9f) +
            -0x1.e000000000000p+9f;
      v62 = 0x1.0e00000000000p+9f -
            (float)((float)(*(float*)&v7 * *((float*)&v8 + 2)) +
                    0x1.0e00000000000p+9f);
      do {
        v63 = *v55;
        v64 = *(_DWORD*)(*v55 + 540);
        v65 = (_QWORD*)*v55;
        v35 = __OFSUB__(v64, 1);
        v66 = (unsigned int)(v64 - 1);
        if (((v66 & 0x80000000) != 0LL) == v35) {
          v67 = *(_QWORD*)(v63 + 24);
          v68 = *(_QWORD*)(v63 + 32) - v67;
          v69 = (_QWORD*)(v67 + 8LL * (unsigned int)v66);
          if (v66 >= v68 >> 3) {
            v65 = (_QWORD*)*v55;
          }
          else {
            v65 = v69;
          }
        }
        if (*v65 == v56) {
          v70 = *(_QWORD*)(v63 + 96);
          if (v70 != 0) {
            v71 = *(unsigned __int8*)(v70 + 32);
            if ((unsigned int)(v71 - 3) < 2) {
              goto LABEL_81;
            }
            if (v71 == 1) {
              v82 = 2;
              goto LABEL_140;
            }
            v72 = v71 == 2;
          LABEL_91:
            v60 += v72;
            goto LABEL_81;
          }
          if (*(_QWORD*)(v63 + 552) != 0 && *(_QWORD*)(v63 + 104) == 0) {
            v72 = *(__int16*)(v63 + 642) * *(__int16*)(v63 + 640) *
                  *(__int16*)(v63 + 644);
            if (v72 == 0) {
              goto LABEL_91;
            }
          }
          if (GameData_1bee1cc[8LL * *(int*)(GameData_225e7a0 + 184)] == 1) {
            if ((unsigned __int64)v58 < v59) {
              *(_QWORD*)v58 = 2;
              *((_QWORD*)v58 + 1) = 0;
              v58 += 16;
            }
            else {
              v73 = (unsigned __int64)&v58[-v57];
              v74 = (__int64)&v58[-v57] >> 4;
              v75 = v74 + 1;
              if ((unsigned __int64)(v74 + 1) >> 60 != 0) {
                goto LABEL_432;
              }
              v276 = v52;
              if ((__int64)(v59 - v57) >> 3 > v75) {
                v75 = (__int64)(v59 - v57) >> 3;
              }
              if (v59 - v57 >= 0x7FFFFFFFFFFFFFF0LL) {
                v76 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v76 = v75;
              }
              if (v76 != 0) {
                if (v76 >> 60 != 0) {
                  goto LABEL_431;
                }
                v77 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v76, 16, 0),
                v246 = COERCE_AS(__typeof__(v246),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              else {
                v77 = 0;
              }
              v78 = (_QWORD*)(v77 + v73);
              v79 = v77 + 16 * v76;
              v80 = v77 + v73 - 16 * v74;
              *v78 = 2;
              v78[1] = 0;
              v58 = (char*)(v77 + v73 + 16);
              GameRoutine_1a0b950(v80, v57, v73),
                  v246 = COERCE_AS(__typeof__(v246),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v1", "=w"));
              if (v57 != 0) {
                v81 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v81 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v81, v57),
                    v246 = COERCE_AS(__typeof__(v246),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v7 = COERCE_AS(__typeof__(v7),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              v59 = v79;
              v52 = v276;
              v57 = v80;
            }
            *((_DWORD*)v58 - 4) = 0;
            *((_QWORD*)v58 - 1) = v63;
          }
        }
      LABEL_81:
        ++v55;
      } while (v55 != v54);
      if ((char*)v57 != v58) {
        v82 = 0;
        if (v60 < 1) {
          goto LABEL_140;
        }
        if ((unsigned __int64)v58 < v59) {
        LABEL_115:
          *(_QWORD*)v58 = 2;
          *((_QWORD*)v58 + 1) = 0;
          v58 += 16;
        LABEL_139:
          *((_DWORD*)v58 - 4) = 1;
          *((_DWORD*)v58 - 3) = v60;
        LABEL_140:
          v94 = v284_.v287;
          v96 = *(_QWORD*)(v284_.v287 + 264);
          v95 = *(_QWORD*)(v284_.v287 + 272);
          if (v96 < v95) {
            *(_QWORD*)v96 = v56;
            *(float*)(v96 + 8) = v61;
            *(float*)(v96 + 12) = v62;
            *(_DWORD*)(v96 + 16) = 0;
            *(_QWORD*)(v96 + 24) = 0;
            *(_QWORD*)(v96 + 32) = 0;
            *(_QWORD*)(v96 + 40) = 0;
            *(_QWORD*)(v96 + 48) = 0;
            *(_QWORD*)(v96 + 56) = v57;
            *(_QWORD*)(v96 + 64) = v58;
            *(_QWORD*)(v96 + 72) = v59;
            *(_QWORD*)(v96 + 80) = 0;
            *(_DWORD*)(v96 + 92) = v82;
            *(_WORD*)(v96 + 96) = 0;
            *(_BYTE*)(v96 + 88) = 1;
            *(_QWORD*)(v94 + 264) = v96 + 104;
            goto LABEL_76;
          }
          v97 = *(_QWORD**)(v284_.v287 + 256);
          v98 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(v96 - (_QWORD)v97) >> 3) + 1;
          if (v98 > 0x276276276276276LL) {
            GameRoutine_1683510(),
                v246 = COERCE_AS(__typeof__(v246),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
          v99 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(v95 - (_QWORD)v97) >> 3);
          if (2 * v99 > v98) {
            v98 = 2 * v99;
          }
          if (v99 >= 0x13B13B13B13B13BLL) {
            v100 = 0x276276276276276LL;
          }
          else {
            v100 = v98;
          }
          if (v100 <= 0x276276276276276LL) {
            v101 = v82;
            v102 = v59;
            v273 = 104 * v100;
            v103 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 104 * v100, 16, 0),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
            v104 = v103 + v96 - (_QWORD)v97;
            v105 = v103;
            *(_QWORD*)v104 = v56;
            *(float*)(v104 + 8) = v61;
            *(float*)(v104 + 12) = v62;
            *(_DWORD*)(v104 + 16) = 0;
            *(_QWORD*)(v104 + 24) = 0;
            *(_QWORD*)(v104 + 32) = 0;
            *(_QWORD*)(v104 + 40) = 0;
            *(_QWORD*)(v104 + 48) = 0;
            *(_QWORD*)(v104 + 56) = v57;
            *(_QWORD*)(v104 + 64) = v58;
            *(_QWORD*)(v104 + 72) = v102;
            *(_QWORD*)(v104 + 80) = 0;
            *(_BYTE*)(v104 + 88) = 1;
            *(_DWORD*)(v104 + 92) = v101;
            *(_WORD*)(v104 + 96) = 0;
            if (v97 == (_QWORD*)v96) {
              v106 = (_QWORD*)v284_.v287;
              v114 = fw_memory_g_heap_manager_ptr;
              v115 = v273;
            }
            else {
              v106 = (_QWORD*)v284_.v287;
              v107 = v97;
              v108 = v103;
              do {
                v109 = *v107;
                v110 = v107[1];
                *(_DWORD*)(v108 + 16) = *((_DWORD*)v107 + 4);
                *(_QWORD*)v108 = v109;
                *(_QWORD*)(v108 + 8) = v110;
                *(_QWORD*)(v108 + 24) = v107[3];
                *(_QWORD*)(v108 + 32) = v107[4];
                v107[3] = 0;
                v107[4] = 0;
                *(_QWORD*)(v108 + 40) = v107[5];
                *(_QWORD*)(v108 + 48) = v107[6];
                v107[5] = 0;
                v107[6] = 0;
                *(_QWORD*)(v108 + 56) = v107[7];
                *(_QWORD*)(v108 + 64) = v107[8];
                *(_QWORD*)(v108 + 72) = v107[9];
                v107[8] = 0;
                v107[9] = 0;
                v107[7] = 0;
                v111 = *((_WORD*)v107 + 48);
                v112 = v107[10];
                v113 = v107[11];
                v107 += 13;
                *(_WORD*)(v108 + 96) = v111;
                *(_QWORD*)(v108 + 80) = v112;
                *(_QWORD*)(v108 + 88) = v113;
                v108 += 104;
              } while (v107 != (_QWORD*)v96);
              v114 = fw_memory_g_heap_manager_ptr;
              v115 = v273;
              do {
                v116 = v97[7];
                if (v116 != 0) {
                  v97[8] = v116;
                  if (*(_QWORD*)(*(_QWORD*)v114 + 200LL) != 0) {
                    v117 = 128;
                  }
                  else {
                    v117 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v114 + v117, v116),
                      v246 = COERCE_AS(__typeof__(v246),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v7 = COERCE_AS(__typeof__(v7),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(__n128, "v1", "=w"));
                }
                v118 = v97[6];
                if (v118 != 0) {
                  std___1___shared_weak_count___release_weak(v118),
                      v246 = COERCE_AS(__typeof__(v246),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v7 = COERCE_AS(__typeof__(v7),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(__n128, "v1", "=w"));
                }
                v119 = v97[4];
                if (v119 != 0) {
                  std___1___shared_weak_count___release_weak(v119),
                      v246 = COERCE_AS(__typeof__(v246),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v7 = COERCE_AS(__typeof__(v7),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(__n128, "v1", "=w"));
                }
                v97 += 13;
              } while (v97 != (_QWORD*)v96);
              v97 = (_QWORD*)v106[32];
            }
            v106[32] = v105;
            v106[33] = v104 + 104;
            v106[34] = v105 + v115;
            if (v97 != nullptr) {
              v120 = 56;
              if (*(_QWORD*)(*(_QWORD*)v114 + 200LL) != 0) {
                v120 = 128;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v114 + v120,
                                            (__int64)v97),
                  v246 = COERCE_AS(__typeof__(v246),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            v106[33] = v104 + 104;
            goto LABEL_76;
          }
        LABEL_431:
          GameRoutine_60a210(),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
      LABEL_118:
        v83 = &v58[-v57];
        v84 = (__int64)&v58[-v57] >> 4;
        v85 = v84 + 1;
        if ((unsigned __int64)(v84 + 1) >> 60 != 0) {
        LABEL_432:
          GameRoutine_16834f0(),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
        if ((__int64)(v59 - v57) >> 3 > v85) {
          v85 = (__int64)(v59 - v57) >> 3;
        }
        if (v59 - v57 >= 0x7FFFFFFFFFFFFFF0LL) {
          v86 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v86 = v85;
        }
        if (v86 != 0) {
          if (v86 >> 60 != 0) {
            goto LABEL_431;
          }
          v87 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v86, 16, 0),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
        else {
          v87 = 0;
        }
        v89 = &v83[v87];
        v90 = v87 + 16 * v86;
        v91 = (unsigned __int64)&v58[-v57];
        v92 = (__int64)&v83[v87 + -16 * v84];
        *(_QWORD*)v89 = 2;
        *((_QWORD*)v89 + 1) = 0;
        v58 = &v83[v87 + 16];
        GameRoutine_1a0b950(v92, v57, v91),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
        if (v57 != 0) {
          v93 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v93 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v93, v57),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
        v57 = v92;
        v59 = v90;
        goto LABEL_139;
      }
      if (v60 > 0) {
        v82 = 1;
        if ((unsigned __int64)v58 < v59) {
          goto LABEL_115;
        }
        goto LABEL_118;
      }
      if (v57 != 0) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v88 = 128;
        }
        else {
          v88 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v88, v57),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
    LABEL_76:
      v52 += 8;
    } while ((__int64*)v52 != v274);
  }
  v121 = v284_.v287;
  v122 = *(__int64**)(v284_.v287 + 256);
  v123 = *(__int64**)(v284_.v287 + 264);
  if ((char*)v123 - (char*)v122 < 1) {
    v127 = 0;
  LABEL_175:
    llvm_libcxx_21_libcxx_include___vector_1683540(
        v122, v123, 0x4EC4EC4EC4EC4EC5LL * (v123 - v122), nullptr, v127, v7,
        v8),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  else {
    v124 = 0x4EC4EC4EC4EC4EC5LL * (v123 - v122);
    v125 = GameData_212c060;
    while (1) {
      v126 = (__int64*)GameRoutine_1a09d20(104 * v124, v125),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      if (v126 != nullptr) {
        break;
      }
      v127 = v124 >> 1;
      v128 = v124 > 1;
      v124 >>= 1;
      if (!v128) {
        goto LABEL_175;
      }
    }
    v129 = (__int64)v126;
    llvm_libcxx_21_libcxx_include___vector_1683540(
        v122, v123, 0x4EC4EC4EC4EC4EC5LL * (v123 - v122), v126, v124, v7, v8),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v130 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v130 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v130,
                                  v129),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  v132 = *(__int64**)(v121 + 256);
  v131 = *(__int64**)(v121 + 264);
  if (v132 != v131) {
    v133 = "L_Unit%02d";
    v134 = "L_Unit";
    v135 = 0;
    while (1) {
      v136 = GameData_225e7a0;
      v137 = game_util_Format(v133, v135),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      GameRoutine_16832b0(&v277_.v277, v136, (__int64)v134, (__int64)"N_Pin",
                          v137),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v138 = *v132;
      if (*(_QWORD*)(*v132 + 120) != 0 &&
          (unsigned __int8)Impl_13261c0(*v132) != 13 &&
          (unsigned __int8)Impl_13261c0(v138) != 12 &&
          (unsigned __int8)Impl_13261c0(v138) != 11) {
        break;
      }
      v139 = *(_QWORD*)(GameData_225e7a0 + 168);
      v140 = game_util_Format("L_UnitAll%02d", v135),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      ui_LayoutAccessor_SetPaneVisible(v139, (__int64)v140, 0),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v284_.v284 = nullptr;
      v284_.v285 = 0;
      GameRoutine_1683390(v132, v277_.v277, v277_.v278, (__int64*)&v284_.v284),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v141 = v277_.v278;
      if (v277_.v278 != 0) {
        goto LABEL_187;
      }
    LABEL_181:
      v132 += 13;
      ++v135;
      if (v132 == v131) {
        goto LABEL_232;
      }
    }
    v142 = GameData_225e7a0;
    v143 = (__int64*)game_util_Format("L_UnitAll%02d", v135),
    v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v144 = *(__int64**)(v142 + 168);
    v145 = v143;
    v282_.v282 = v143;
    v282_.v283 = GameRoutine_1a09c70((const char*)v143),
    v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v146 = v144[1];
    if (v146 != 0) {
      v147 = std___1___shared_weak_count_lock(v146),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      if (v147 != 0) {
        v148 = *v144;
        v149 = v147;
        if (v148 != 0) {
          GameRoutine_1685230((void*)((__int64*)&v284_.v284)),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v149 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v148 == 0) {
            goto LABEL_206;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v149 + 16LL))(v149),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
          std___1___shared_weak_count___release_weak(v149),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v148 == 0) {
            goto LABEL_206;
          }
        }
        if (v284_.v285 != 0) {
          v150 = std___1___shared_weak_count_lock(v284_.v285),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v150 != 0) {
            v151 = v284_.v284;
            if (atomic_fetch_add((atomic_ullong* volatile)(v150 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v152 = v150;
              (*(void (**)(__int64))(*(_QWORD*)v150 + 16LL))(v150),
                  v246 = COERCE_AS(__typeof__(v246),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v1", "=w"));
              std___1___shared_weak_count___release_weak(v152),
                  v246 = COERCE_AS(__typeof__(v246),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            if (v284_.v285 != 0) {
              std___1___shared_weak_count___release_weak(v284_.v285),
                  v246 = COERCE_AS(__typeof__(v246),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            if (v151 != nullptr) {
            LABEL_218:
              v162 = *(__int64**)(v142 + 168);
              v284_.v284 = v145;
              v284_.v285 = GameRoutine_1a09c70((const char*)v145),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
              v121 = v284_.v287;
              v163 = v162[1];
              if (v163 != 0) {
                v164 = std___1___shared_weak_count_lock(v163),
                v246 = COERCE_AS(__typeof__(v246),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v1", "=w"));
                if (v164 != 0) {
                  v165 = *v162;
                  v166 = v164;
                  if (v165 != 0) {
                    GameRoutine_1685230((void*)((__int64*)&v280_.v280)),
                        v246 = COERCE_AS(__typeof__(v246),
                                         PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v7 = COERCE_AS(__typeof__(v7),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v8 = COERCE_AS(__typeof__(v8),
                                       PSEUDO_REGISTER(__n128, "v1", "=w"));
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v166 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) != 0) {
                    if (v165 != 0) {
                      goto LABEL_225;
                    }
                  }
                  else {
                    (*(void (**)(__int64))(*(_QWORD*)v166 + 16LL))(v166),
                        v246 = COERCE_AS(__typeof__(v246),
                                         PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v7 = COERCE_AS(__typeof__(v7),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v8 = COERCE_AS(__typeof__(v8),
                                       PSEUDO_REGISTER(__n128, "v1", "=w"));
                    std___1___shared_weak_count___release_weak(v166),
                        v246 = COERCE_AS(__typeof__(v246),
                                         PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v7 = COERCE_AS(__typeof__(v7),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v8 = COERCE_AS(__typeof__(v8),
                                       PSEUDO_REGISTER(__n128, "v1", "=w"));
                    if (v165 != 0) {
                    LABEL_225:
                      GameRoutine_1683390(v132, v277_.v277, v277_.v278,
                                          (__int64*)&v280_.v280),
                          v246 = COERCE_AS(__typeof__(v246),
                                           PSEUDO_REGISTER(__n128, "v0", "=w")),
                          v7 = COERCE_AS(__typeof__(v7),
                                         PSEUDO_REGISTER(__n128, "v0", "=w")),
                          v8 = COERCE_AS(__typeof__(v8),
                                         PSEUDO_REGISTER(__n128, "v1", "=w"));
                      if (v280_.v281 != 0) {
                        std___1___shared_weak_count___release_weak(v280_.v281),
                            v246 =
                                COERCE_AS(__typeof__(v246),
                                          PSEUDO_REGISTER(__n128, "v0", "=w")),
                            v7 = COERCE_AS(__typeof__(v7),
                                           PSEUDO_REGISTER(__n128, "v0", "=w")),
                            v8 = COERCE_AS(__typeof__(v8),
                                           PSEUDO_REGISTER(__n128, "v1", "=w"));
                      }
                      v141 = v277_.v278;
                      if (v277_.v278 == 0) {
                        goto LABEL_181;
                      }
                    LABEL_187:
                      std___1___shared_weak_count___release_weak(v141),
                          v246 = COERCE_AS(__typeof__(v246),
                                           PSEUDO_REGISTER(__n128, "v0", "=w")),
                          v7 = COERCE_AS(__typeof__(v7),
                                         PSEUDO_REGISTER(__n128, "v0", "=w")),
                          v8 = COERCE_AS(__typeof__(v8),
                                         PSEUDO_REGISTER(__n128, "v1", "=w"));
                      goto LABEL_181;
                    }
                  }
                }
              }
              v280_.v280 = nullptr;
              v280_.v281 = 0;
              goto LABEL_225;
            }
          }
          else if (v284_.v285 != 0) {
            std___1___shared_weak_count___release_weak(v284_.v285),
                v246 = COERCE_AS(__typeof__(v246),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
        }
      }
    }
  LABEL_206:
    v153 = v134;
    v154 = v133;
    v155 = ui_LayoutAccessor_FindPane(*(__int64**)(v142 + 168),
                                      (__int64)"N_UnitAll"),
    v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v156 = *(__int64**)(v142 + 168);
    v157 = (_QWORD*)v155;
    v279[0] = v145;
    v280_.v280 = "L_UnitAll";
    v280_.v281 = 9;
    v279[1] = GameRoutine_1a09c70((const char*)v145),
    v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v158 = v156[1];
    if (v158 != 0) {
      v159 = std___1___shared_weak_count_lock(v158),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      if (v159 != 0) {
        v160 = *v156;
        v161 = v159;
        if (v160 != 0) {
          GameRoutine_1685230((void*)((__int64*)&v284_.v284)),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
          Layout_1685360((void*)(&v282_.v282), v160, &v284_.v284, v279, v157),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v284_.v285 != 0) {
            std___1___shared_weak_count___release_weak(v284_.v285),
                v246 = COERCE_AS(__typeof__(v246),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v161 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v160 != 0) {
            goto LABEL_213;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v161 + 16LL))(v161),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
          std___1___shared_weak_count___release_weak(v161),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v160 != 0) {
          LABEL_213:
            if (v282_.v283 != 0) {
              std___1___shared_weak_count___release_weak(v282_.v283),
                  v246 = COERCE_AS(__typeof__(v246),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            goto LABEL_217;
          }
        }
      }
    }
    v282_.v282 = nullptr;
    v282_.v283 = 0;
  LABEL_217:
    v133 = v154;
    v134 = v153;
    goto LABEL_218;
  }
  v135 = 0;
LABEL_232:
  v167 = game_util_Format("L_Unit%02d", v135),
  v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  LayoutAccessor_1560070((void*)(&v284_.v284),
                         *(__int64**)(GameData_225e7a0 + 168), v167),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v168 = v284_.v285;
  if (v284_.v285 == 0) {
    goto LABEL_244;
  }
  while (1) {
    v169 = std___1___shared_weak_count_lock(v168),
    v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if (v169 == 0) {
      break;
    }
    v170 = v284_.v284;
    if (atomic_fetch_add((atomic_ullong* volatile)(v169 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      v171 = v284_.v285;
      if (v284_.v285 == 0) {
        goto LABEL_237;
      }
    LABEL_236:
      std___1___shared_weak_count___release_weak(v171),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      goto LABEL_237;
    }
    v174 = v169;
    (*(void (**)(__int64))(*(_QWORD*)v169 + 16LL))(v169),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    std___1___shared_weak_count___release_weak(v174),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v171 = v284_.v285;
    if (v284_.v285 != 0) {
      goto LABEL_236;
    }
  LABEL_237:
    if (v170 != nullptr) {
      ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(GameData_225e7a0 + 168),
                                       (__int64)v167, 0),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v172 = *(_QWORD*)(GameData_225e7a0 + 168);
      v173 = game_util_Format("L_UnitAll%02d", v135),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      ui_LayoutAccessor_SetPaneVisible(v172, (__int64)v173, 0),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v167 = game_util_Format("L_Unit%02d", ++v135),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      LayoutAccessor_1560070((void*)(&v284_.v284),
                             *(__int64**)(GameData_225e7a0 + 168), v167),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v168 = v284_.v285;
      if (v284_.v285 != 0) {
        continue;
      }
    }
    goto LABEL_244;
  }
  if (v284_.v285 != 0) {
    std___1___shared_weak_count___release_weak(v284_.v285),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
LABEL_244:
  if (v272 != 0) {
    v175 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v175 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v175,
                                  v272),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  game_templates_16824c0(v121),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  GameRoutine_1683020(*(__int64**)(v121 + 168)),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v176 = *(_QWORD*)(v121 + 232);
  if (v176 != *(_QWORD*)(v121 + 240)) {
    GameRoutine_1596fe0(v176 + 16, 1),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  v177 = &GameData_1bee1cc[8LL * *(int*)(v121 + 184)];
  if ((v177[3] & 1) != 0 || (v177[4] & 1) != 0 || v177[5] == 1) {
    v178 = *(_QWORD*)(*GameData_212c780 + 8);
    v179 = *(__int64**)(v178 + 48);
    v180 = *(__int64**)(v178 + 56);
    if (v179 == v180) {
      v181 = 0;
      goto LABEL_345;
    }
    v181 = 0;
  LABEL_257:
    v182 = *v179;
    if (*(_BYTE*)(*v179 + 176) != 3 || (*(_BYTE*)(v182 + 112) & 1) != 0) {
      goto LABEL_256;
    }
    if (GameData_1bee1cc[8LL * *(int*)(v121 + 184) + 5] == 1) {
      v183 = *(_QWORD*)(v182 + 280);
      if (v183 != 0 &&
          ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v183 + 24LL))(v183) !=
               1 ||
           ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v182 + 280) + 112LL))(
                *(_QWORD*)(v182 + 280)) &
            1) == 0)) {
        v184 = *(_QWORD*)(v182 + 280);
        if (v184 != 0) {
          v185 = (*(__int64 (**)(__int64))(*(_QWORD*)v184 + 264LL))(v184),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v185 != 0) {
            v186 = v185;
            v187 = 1;
            v188 = 2;
            goto LABEL_291;
          }
        }
      }
    }
    v189 = *(_QWORD*)(*GameData_212c790 + 8);
    v190 = *(__int64**)(v189 + 8);
    v191 = *(__int64**)(v189 + 16);
    while (v190 != v191) {
      v192 = *v190;
      if (*(_QWORD*)*v190 == v182) {
        v193 = *(_QWORD*)(v192 + 96);
        if (v193 != 0 && (unsigned int)*(unsigned __int8*)(v193 + 32) - 3 < 2) {
          if ((GameRoutine_133f1d0(*v190) & 1) == 0 &&
              (*(_WORD*)(v192 + 544) & 8) != 0 && !GameRoutine_133f0c0(v192)) {
            goto LABEL_275;
          }
        LABEL_256:
          if (++v179 != v180) {
            goto LABEL_257;
          }
        LABEL_345:
          v225 = v181;
          v226 = game_util_Format("L_Status%02d", v181),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
          LayoutAccessor_1560070((void*)(&v284_.v284), *(__int64**)(v121 + 168),
                                 v226),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
          v227 = v284_.v285;
          if (v284_.v285 == 0) {
            goto LABEL_358;
          }
          v228 = v225 + 1;
          while (2) {
            v229 = std___1___shared_weak_count_lock(v227),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
            if (v229 == 0) {
              if (v284_.v285 != 0) {
                std___1___shared_weak_count___release_weak(v284_.v285),
                    v246 = COERCE_AS(__typeof__(v246),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v7 = COERCE_AS(__typeof__(v7),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              goto LABEL_358;
            }
            v230 = v284_.v284;
            if (atomic_fetch_add((atomic_ullong* volatile)(v229 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              v231 = v284_.v285;
              if (v284_.v285 != 0) {
                goto LABEL_350;
              }
            }
            else {
              v232 = v229;
              (*(void (**)(__int64))(*(_QWORD*)v229 + 16LL))(v229),
                  v246 = COERCE_AS(__typeof__(v246),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v1", "=w"));
              std___1___shared_weak_count___release_weak(v232),
                  v246 = COERCE_AS(__typeof__(v246),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v1", "=w"));
              v231 = v284_.v285;
              if (v284_.v285 != 0) {
              LABEL_350:
                std___1___shared_weak_count___release_weak(v231),
                    v246 = COERCE_AS(__typeof__(v246),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v7 = COERCE_AS(__typeof__(v7),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
            }
            if (v230 == nullptr) {
              goto LABEL_358;
            }
            ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(v121 + 168),
                                             (__int64)v226, 0),
                v246 = COERCE_AS(__typeof__(v246),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v1", "=w"));
            v226 = game_util_Format("L_Status%02d", v228),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
            LayoutAccessor_1560070((void*)(&v284_.v284),
                                   *(__int64**)(v121 + 168), v226),
                v246 = COERCE_AS(__typeof__(v246),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v1", "=w"));
            v227 = v284_.v285;
            ++v228;
            if (v284_.v285 == 0) {
              goto LABEL_358;
            }
            continue;
          }
        }
      }
      ++v190;
    }
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v194 = *(__int64***)(*GameData_2130e60 + 8);
      v195 = *v194;
      v196 = v194[1];
      if (v195 != v196) {
        while (1) {
          v197 = *v195++;
          if (*(_QWORD*)(*(_QWORD*)(v197 + 112) + 48LL) ==
              *(_QWORD*)(v182 + 120)) {
            break;
          }
          if (v195 == v196) {
            goto LABEL_281;
          }
        }
      LABEL_275:
        v187 = 0;
        v186 = 0;
        v188 = 3;
        goto LABEL_291;
      }
    LABEL_281:
      if ((*(_BYTE*)(v182 + 178) & 4) != 0) {
        v187 = 0;
        v186 = 0;
        v188 = 1;
        goto LABEL_291;
      }
    }
    if ((unsigned __int8)Impl_13261c0(v182) == 3) {
      if ((Impl_13287c0(v182) & 1) != 0) {
        goto LABEL_256;
      }
    }
    else if (GameData_1bee1cc[8LL * *(int*)(v121 + 184) + 4] != 1 ||
             (unsigned __int8)Impl_13261c0(v182) != 2 || !Impl_1328300(v182) ||
             (Impl_1328460(v182) & 1) != 0) {
      goto LABEL_256;
    }
    v187 = 0;
    v188 = 0;
    v186 = 0;
  LABEL_291:
    v198 = game_util_Format("L_Status%02d", v181),
    v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v199 = GameRoutine_1a09c70(v198),
    v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if (v199 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_434:
      String_60a1d0(),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    v200 = v199;
    v275 = v188;
    if (v199 >= 0x17) {
      v202 = v181;
      if ((v199 | 7) == 0x17) {
        v203 = 26;
      }
      else {
        v203 = (v199 | 7) + 1;
      }
      v204 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v203, 16, 0),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v205 = (_QWORD*)(v203 | 1);
      v201 = (char*)v204;
      v284_.v285 = v200;
      v284_.v286 = (const char*)v204;
      v181 = v202;
      v284_.v284 = v205;
    }
    else {
      v201 = (char*)&v284_.v284 + 1;
      LOBYTE(v284_.v284) = 2 * v199;
      if (v199 == 0) {
        goto LABEL_300;
      }
    }
    GameRoutine_1a0b940((__int64)v201, (__int64)v198, v200),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  LABEL_300:
    v201[v200] = 0;
    v121 = v284_.v287;
    if (((unsigned __int8)v284_.v284 & 1) != 0) {
      v206 = v284_.v286;
    }
    else {
      v206 = (char*)&v284_.v284 + 1;
    }
    GameRoutine_16832b0(&v282_.v282, v284_.v287, (__int64)"L_Status",
                        (__int64)"N_Status", v206),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if (v282_.v283 == 0) {
      goto LABEL_337;
    }
    v207 = std___1___shared_weak_count_lock(v282_.v283),
    v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v208 = v282_.v282;
    if (v282_.v283 != 0) {
      std___1___shared_weak_count___release_weak(v282_.v283),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    if (v207 != 0 && v208 != nullptr) {
      v209 = v181;
      LayoutAccessor_155e830((__int64)v208, 1),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v210 = *(__int64**)(v121 + 192);
      v211 = *(__int64**)(v121 + 200);
      if (v210 != v211) {
        v212 = v210 + 8;
        do {
          if (*(v212 - 8) == v182 & v212 != (__int64*)&v284_.v284) {
            if ((*(_BYTE*)v212 & 1) != 0) {
              if (((unsigned __int8)v284_.v284 & 1) != 0) {
                v213 = v284_.v286;
              }
              else {
                v213 = (char*)&v284_.v284 + 1;
              }
              if (((unsigned __int8)v284_.v284 & 1) != 0) {
                v214 = v284_.v285;
              }
              else {
                v214 = (unsigned __int64)(unsigned __int8)v284_.v284 >> 1;
              }
              SpineModel_64dde0(v212, (__int64)v213, v214),
                  v246 = COERCE_AS(__typeof__(v246),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            else if (((unsigned __int8)v284_.v284 & 1) != 0) {
              GameRoutine_64df20(v212, (__int64)v284_.v286, v284_.v285),
                  v246 = COERCE_AS(__typeof__(v246),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            else {
              v217 = v284_.v284;
              v218 = (__int64)v284_.v286;
              v212[1] = v284_.v285;
              v212[2] = v218;
              *v212 = (__int64)v217;
            }
          }
          v215 = v212 + 4;
          v212 += 12;
        } while (v215 != v211);
      }
      LayoutAccessor_1562cf0((__int64)v208, GameData_20807f0[v275]),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v121 = v284_.v287;
      v181 = v209;
      if (v186 != 0) {
        v219 = v187;
      }
      else {
        v219 = 0;
      }
      if ((v219 & 1) != 0 && *(_QWORD*)(v186 + 64) != 0) {
        v220 = ui_LayoutAccessor_FindPane(v208, (__int64)"Icon"),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
        if (v220 != 0) {
          v220 =
              __dynamic_cast(v220, GameData_212d670[0], GameData_212d678[0], 0),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
        game_1841930(v220, *(_QWORD*)(v186 + 64)),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
        LODWORD(v282_.v282) = *(_DWORD*)(v121 + 660);
        DWORDn(v282_.v282, sizeof(v282_.v282) / 4 - 1) = (_DWORD)v282_.v282;
        ui_LayoutAccessor_SetScale((__int64)v208, &v282_.v282),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      v221 = *(float*)(v121 + 280);
      v222 = *(_OWORD*)(v182 + 32);
      LODWORD(v282_.v283) = 0;
      v223 = *(float*)(v121 + 656);
      *(float*)&v282_.v282 = *(float*)(v121 + 652) +
                             (float)((float)((float)(*(float*)&v222 * v221) +
                                             0x1.e000000000000p+9f) +
                                     -0x1.e000000000000p+9f);
      *((float*)&v282_.v282 + 1) =
          (float)(0x1.0e00000000000p+9f -
                  (float)((float)(v221 * *((float*)&v222 + 2)) +
                          0x1.0e00000000000p+9f)) +
          v223;
      ui_LayoutAccessor_SetTranslate(v208, (__int64)&v282_.v282),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      LayoutAccessor_155e830((__int64)v208, 0),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    if (v207 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v207 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v207 + 16LL))(v207),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      std___1___shared_weak_count___release_weak(v207),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      if (((unsigned __int8)v284_.v284 & 1) != 0) {
        goto LABEL_338;
      }
    }
    else {
    LABEL_337:
      if (((unsigned __int8)v284_.v284 & 1) != 0) {
      LABEL_338:
        if (v284_.v286 != nullptr) {
          v224 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v224 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v224,
                                        (__int64)v284_.v286),
              v246 = COERCE_AS(__typeof__(v246),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
      }
    }
    ++v181;
    goto LABEL_256;
  }
LABEL_358:
  v233 = &GameData_1bee1cc[8LL * *(int*)(v121 + 184)];
  if ((v233[3] & 1) == 0 && (v233[4] & 1) == 0 && v233[5] != 1) {
    goto LABEL_428;
  }
  v234 = *(_QWORD*)(*GameData_212c780 + 8);
  v235 = *(__int64**)(v234 + 48);
  v236 = *(__int64**)(v234 + 56);
  if (v235 != v236) {
    v237 = 0;
    while (1) {
      v238 = *v235;
      if (*(_BYTE*)(*v235 + 176) != 3 || (*(_BYTE*)(v238 + 112) & 1) != 0 ||
          (unsigned __int8)Impl_13261c0(*v235) != 4 ||
          (Impl_1328670(v238) & 1) != 0) {
        goto LABEL_364;
      }
      v239 = game_util_Format("L_Impassable%02d", v237),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v240 = GameRoutine_1a09c70(v239),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      if (v240 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_434;
      }
      v241 = v240;
      if (v240 >= 0x17) {
        if ((v240 | 7) == 0x17) {
          v243 = 26;
        }
        else {
          v243 = (v240 | 7) + 1;
        }
        v242 = (const char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v243, 16, 0),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v284_.v285 = v241;
        v284_.v286 = v242;
        v284_.v284 = (_QWORD*)(v243 | 1);
      }
      else {
        v242 = (char*)&v284_.v284 + 1;
        LOBYTE(v284_.v284) = 2 * v240;
        if (v240 == 0) {
          goto LABEL_378;
        }
      }
      GameRoutine_1a0b940((__int64)v242, (__int64)v239, v241),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    LABEL_378:
      v242[v241] = 0;
      if (((unsigned __int8)v284_.v284 & 1) != 0) {
        v244 = v284_.v286;
      }
      else {
        v244 = (char*)&v284_.v284 + 1;
      }
      GameRoutine_16832b0(&v282_.v282, v284_.v287, (__int64)"L_Impassable",
                          (__int64)"N_Impassable", v244),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      if (v282_.v283 == 0) {
        goto LABEL_407;
      }
      v245 = std___1___shared_weak_count_lock(v282_.v283),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v247 = v282_.v282;
      if (v282_.v283 != 0) {
        std___1___shared_weak_count___release_weak(v282_.v283),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      if (v245 != 0 && v247 != nullptr) {
        LayoutAccessor_155e830((__int64)v247, 1),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v248 = *(__int64**)(v284_.v287 + 192);
        v249 = *(__int64**)(v284_.v287 + 200);
        if (v248 != v249) {
          v250 = v248 + 5;
          do {
            if (*(v250 - 5) == v238 & v250 != (__int64*)&v284_.v284) {
              if ((*(_BYTE*)v250 & 1) != 0) {
                if (((unsigned __int8)v284_.v284 & 1) != 0) {
                  v251 = v284_.v286;
                }
                else {
                  v251 = (char*)&v284_.v284 + 1;
                }
                if (((unsigned __int8)v284_.v284 & 1) != 0) {
                  v252 = v284_.v285;
                }
                else {
                  v252 = (unsigned __int64)(unsigned __int8)v284_.v284 >> 1;
                }
                SpineModel_64dde0(v250, (__int64)v251, v252),
                    v246 = COERCE_AS(__typeof__(v246),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v7 = COERCE_AS(__typeof__(v7),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              else if (((unsigned __int8)v284_.v284 & 1) != 0) {
                GameRoutine_64df20(v250, (__int64)v284_.v286, v284_.v285),
                    v246 = COERCE_AS(__typeof__(v246),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v7 = COERCE_AS(__typeof__(v7),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              else {
                v255 = v284_.v284;
                v256 = (__int64)v284_.v286;
                v250[1] = v284_.v285;
                v250[2] = v256;
                *v250 = (__int64)v255;
              }
            }
            v253 = v250 + 7;
            v250 += 12;
          } while (v253 != v249);
        }
        LayoutAccessor_1562cf0((__int64)v247, "Default"),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v257 = *(_OWORD*)(v238 + 32);
        LODWORD(v282_.v283) = 0;
        v258 = *(float*)(v284_.v287 + 280);
        v259 = *(float*)(v284_.v287 + 656);
        *(float*)&v282_.v282 = *(float*)(v284_.v287 + 652) +
                               (float)((float)((float)(*(float*)&v257 * v258) +
                                               0x1.e000000000000p+9f) +
                                       -0x1.e000000000000p+9f);
        *((float*)&v282_.v282 + 1) =
            (float)(0x1.0e00000000000p+9f -
                    (float)((float)(v258 * *((float*)&v257 + 2)) +
                            0x1.0e00000000000p+9f)) +
            v259;
        *(float*)&v246 =
            ui_LayoutAccessor_SetTranslate(v247, (__int64)&v282_.v282),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      if (v245 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v245 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v245 + 16LL))(v245, v246),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
        std___1___shared_weak_count___release_weak(v245),
            v246 = COERCE_AS(__typeof__(v246),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
        if (((unsigned __int8)v284_.v284 & 1) != 0) {
        LABEL_408:
          if (v284_.v286 != nullptr) {
            v260 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v260 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v260,
                (__int64)v284_.v286),
                v246 = COERCE_AS(__typeof__(v246),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
        }
      }
      else {
      LABEL_407:
        if (((unsigned __int8)v284_.v284 & 1) != 0) {
          goto LABEL_408;
        }
      }
      v121 = v284_.v287;
      ++v237;
    LABEL_364:
      if (++v235 == v236) {
        goto LABEL_415;
      }
    }
  }
  v237 = 0;
LABEL_415:
  v261 = game_util_Format("L_Impassable%02d", v237),
  v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  LayoutAccessor_1560070((void*)(&v284_.v284), *(__int64**)(v121 + 168), v261),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v262 = v284_.v285;
  if (v284_.v285 == 0) {
    goto LABEL_428;
  }
  v263 = v237 + 1;
  while (1) {
    v264 = std___1___shared_weak_count_lock(v262),
    v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if (v264 == 0) {
      break;
    }
    v265 = v284_.v284;
    if (atomic_fetch_add((atomic_ullong* volatile)(v264 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      v266 = v284_.v285;
      if (v284_.v285 == 0) {
        goto LABEL_421;
      }
    LABEL_420:
      std___1___shared_weak_count___release_weak(v266),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      goto LABEL_421;
    }
    v267 = v264;
    (*(void (**)(__int64))(*(_QWORD*)v264 + 16LL))(v264),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    std___1___shared_weak_count___release_weak(v267),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v266 = v284_.v285;
    if (v284_.v285 != 0) {
      goto LABEL_420;
    }
  LABEL_421:
    if (v265 != nullptr) {
      ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(v121 + 168), (__int64)v261,
                                       0),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v261 = game_util_Format("L_Impassable%02d", v263),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      LayoutAccessor_1560070((void*)(&v284_.v284), *(__int64**)(v121 + 168),
                             v261),
          v246 =
              COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v262 = v284_.v285;
      ++v263;
      if (v284_.v285 != 0) {
        continue;
      }
    }
    goto LABEL_428;
  }
  if (v284_.v285 != 0) {
    std___1___shared_weak_count___release_weak(v284_.v285),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
LABEL_428:
  v268 = *(_QWORD*)(v121 + 168);
  *(_BYTE*)(v121 + 296) = 0;
  ui_LayoutAccessor_SetPaneAlpha(v268, (__int64)"N_Status", 0),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  ui_LayoutAccessor_SetPaneAlpha(
      *(_QWORD*)(v121 + 168), (__int64)"N_Impassable", *(_BYTE*)(v121 + 296)),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  ui_LayoutAccessor_SetPaneAlpha(*(_QWORD*)(v121 + 168), (__int64)"N_Pin",
                                 *(_BYTE*)(v121 + 296)),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  ui_LayoutAccessor_SetPaneAlpha(*(_QWORD*)(v121 + 168), (__int64)"N_UnitAll",
                                 *(_BYTE*)(v121 + 296)),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  ui_LayoutAccessor_SetPaneAlpha(*(_QWORD*)(v121 + 168), (__int64)"N_Cursor",
                                 *(_BYTE*)(v121 + 296)),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  ui_LayoutAccessor_SetPaneAlpha(
      *(_QWORD*)(v121 + 168), (__int64)"N_CursorSelect", *(_BYTE*)(v121 + 296)),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v269 = *(_QWORD*)(v121 + 336);
  if (v269 != 0) {
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v269 + 48LL))(
        v269, v121 + 296, v121 + 288, v121 + 280),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v270 = *(_QWORD*)(v121 + 288);
    v271 = *(__int64**)(v121 + 168);
    LODWORD(v284_.v285) = 0;
    LODWORD(v284_.v284) = v270;
    *((float*)&v284_.v284 + 1) = -*((float*)&v270 + 1);
    ui_LayoutAccessor_SetPaneTranslate(v271, (__int64)"N_Body",
                                       (__int64)&v284_.v284),
        v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  game_templates_167fe20(v121, *(_QWORD*)(v121 + 352)),
      v246 = COERCE_AS(__typeof__(v246), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  *(_BYTE*)(v121 + 408) = 1;
}

#pragma GCC visibility pop
