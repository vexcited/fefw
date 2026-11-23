#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 CharacterController_d42d20(__int64 result, char*, char*,
                                   unsigned __int64);
__int64 WaitRelease_cfa2a0(__int64 result);
__int64 game_d523c0(__int64);
bool CharacterController_d41fa0(__int64, _BYTE*);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_22110b8;
extern _UNKNOWN GameData_22110c8;
extern __int64 GameData_21d96b8;
extern __int64 GameData_220b6f0;
extern __int64 GameData_220f8b0;
extern __int64 GameData_22110c0;
extern __int64 fw_memory_g_heap_manager_ptr;
float CharacterRotate_d52080(__int64);
float GameRoutine_1a0a550(float, float);
float GameRoutine_1a0a6a0(float, float);
float GameRoutine_1a0ab40(float, float);
float game_zview_ceef60(__int64);
int __cxa_guard_acquire(__int64);
typedef __int64 GameAlign_22110ac __attribute__((aligned(4)));
extern GameAlign_22110ac GameData_22110ac;
void GameRoutine_7d6200(__int64*, _DWORD*);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
float game_zview_character_controller_d40ea0();
typedef __int64 GameAlign_22110ac __attribute__((aligned(4)));
extern GameAlign_22110ac GameData_22110ac_alt1;

float game_zview_character_controller_d40ea0()
{
  __int64 v0;
  float result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char** v16;
  __int128* v17;
  __int128 v18;
  _QWORD* v19;
  float v20;
  __int64 v21;
  float v22;
  int v23;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  signed __int64 v37;
  __int64 v38;
  float v39;
  float v40;
  __int64 v41;
  float v42;
  float v43;
  __int64 v44;
  unsigned __int64 v46;
  float v47;
  float v48;
  float v49;
  _BOOL4 v50;
  __int64 v51;
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
  bool v68;
  float v69;
  float v70;
  int v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  int v78;
  __int64 v79;
  __int64 v80;
  char v81;
  float v82;
  float v83;
  __int64 v84;
  __int64 v85;
  float v86;
  float v87;
  float v88;
  int v89;
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
  __int64 v114;
  float v115;
  float v116;
  float v117;
  float v118;
  bool v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  __int64* v126;
  __int64* v127;
  unsigned int v128;
  __int64* v129;
  int v130;
  __int64 v131;
  int v132;
  __int64* v133;
  __int128 v134;
  int v135;
  __int128 v136;
  __int64* v137;
  __int64 v138;
  __int64 v139;
  float v140;
  float v141;
  __int64* v142;
  __int64* v143;
  __int64 v144;
  float v145;
  float32x4_t v146;
  float32x4_t v147;
  float32x4_t v148;
  __int64 v149;
  float32x4_t* v150;
  float32x4_t v151;
  float32x4_t v152;
  float32x4_t v153;
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
  __int64 v171;
  float v172;
  float v173;
  float v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  char v182;
  float v183;
  float v184;
  float v185;
  float v186;
  float v187;
  __int64 v188;
  int v189;
  __int128 v191;
  float v192;
  float v193;
  struct {
    char* v194;
    char* v195;
    __int64 v196;
  } v194_;
  __int128 v197;
  struct {
    __int128 v198;
    __int64 v199;
    __int64 v200;
    __int64 v201;
    __int64 v202;
    __int64 v203;
    int v204;
    __int16 v205;
  } v198_;
  float v216;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v12 = *(_QWORD*)(v0 + 8);
  if (*(_QWORD*)(v0 + 104) != *(_QWORD*)(v0 + 96)) {
    *(_BYTE*)(v12 + 620) = 0;
    v13 = v0;
    *(_DWORD*)(*(_QWORD*)(v0 + 8) + 616LL) = 0;
    v14 = *(_QWORD*)(v0 + 8);
    v16 = (char**)(v0 + 224);
    v15 = *(_QWORD*)(v0 + 224);
    v17 = *(__int128**)(v0 + 96);
    v216 = *(float*)(*(_QWORD*)(v14 + 8) + 528LL);
    v18 = *v17;
    v19 = (_QWORD*)GameData_220f8b0;
    {
      __typeof__(v20) z_ = (__typeof__(v20)){0};
      LODWORD(z_) = *((_QWORD*)v17 + 1);
      v20 = z_;
    }
    v21 = *(_QWORD*)(GameData_220f8b0 + 80);
    if (*(_QWORD*)(v0 + 232) != v15 && (*(_BYTE*)(v0 + 248) & 1) == 0 &&
        *(_QWORD*)(v0 + 256) == v21 && *(float*)(v0 + 264) > 0x0.0p+0f) {
      v22 = *(float*)(v0 + 212);
      goto LABEL_50;
    }
    *(_QWORD*)(v0 + 232) = v15;
    *(_BYTE*)(v0 + 248) = 0;
    *(_QWORD*)(v0 + 256) = v21;
    *((_QWORD*)&v197 + 1) = 0;
    LOBYTE(v198_.v199) = 0;
    v198_.v198 = (unsigned int)v18;
    BYTE4(v198_.v200) = 0;
    LOBYTE(v198_.v201) = 0;
    LOBYTE(v198_.v203) = 0;
    *(_DWORD*)(v0 + 264) = 0x40000000;
    v25 = *(_OWORD*)(v14 + 560);
    DWORD1(v198_.v198) = DWORD1(v18);
    v198_.v205 = 256;
    *(_QWORD*)&v26 = v25;
    *(_QWORD*)&v27 = v198_.v198;
    *((_QWORD*)&v26 + 1) = DWORD2(v25);
    *((_QWORD*)&v27 + 1) = DWORD2(v18);
    v197 = v26;
    v198_.v198 = v27;
    v28 = *(_QWORD*)(v14 + 8);
    v29 = *(_QWORD*)(v28 + 312);
    {
      __typeof__(v25) z_ = (__typeof__(v25)){0};
      LODWORD(z_) = *(_DWORD*)(v28 + 528);
      v25 = z_;
    }
    v198_.v201 = *(_QWORD*)(v28 + 304);
    v198_.v202 = v29;
    v30 = *(_QWORD*)(v28 + 320);
    v198_.v204 = v25;
    v198_.v203 = v30;
    v32 = *(_QWORD*)(v28 + 288);
    v31 = *(_QWORD*)(v28 + 296);
    v33 = *(_QWORD*)(v28 + 384);
    v198_.v199 = v32;
    v198_.v200 = v31;
    if ((v33 & 0x20000) != 0) {
      HIBYTE(v198_.v205) = 0;
    }
    v192 = *(float*)&v18;
    if ((v33 & 0x8000000000000LL) != 0) {
      LOBYTE(v198_.v205) = 0;
    }
    v34 = (__int64*)v19[7];
    v35 = (__int64*)v19[8];
    v194_.v195 = nullptr;
    v194_.v196 = 0;
    v194_.v194 = nullptr;
    while (v34 != v35) {
      v36 = *v34;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)*v34 + 32LL))(*v34) & 1) != 0 &&
          ((v198_.v205 & 0x100) != 0 || v19[1] != v36) &&
          ((*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v36 + 24LL))(
               v36, (__int64)&v197, (__int64)&v194_.v194) &
           1) != 0) {
        if (v16 != &v194_.v194) {
          CharacterController_d42d20((__int64)v16, v194_.v194, v194_.v195,
                                     (v194_.v195 - v194_.v194) >> 4),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
              v0 = COERCE_AS(__typeof__(v0),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        break;
      }
      ++v34;
    }
    if (*(_QWORD*)(v13 + 232) - *(_QWORD*)(v13 + 224) < 0x11u ||
        (unsigned __int64)(v37 = (v194_.v195 - v194_.v194) >> 4) < 2) {
      *(float*)&v18 = v192;
      v42 = v20;
      v43 = v192;
      if (v194_.v194 == nullptr) {
      LABEL_45:
        v22 = *(float*)(v13 + 212);
        if (v22 != v43 | *(float*)(v13 + 216) != v42) {
          v22 = v43;
          *(_DWORD*)(v13 + 208) = 0;
          *(float*)(v13 + 212) = v43;
          *(float*)(v13 + 216) = v42;
        }
      LABEL_50:
        v46 = *(_QWORD*)(v13 + 104) - *(_QWORD*)(v13 + 96);
        v47 = (float)(*(float*)(v13 + 208) + -0x1.0000000000000p-1f) /
              0x1.c000000000000p+1f;
        if (v47 <= 0x1.0000000000000p+0f) {
          v48 = (float)(*(float*)(v13 + 208) + -0x1.0000000000000p-1f) /
                0x1.c000000000000p+1f;
        }
        else {
          v48 = 0x1.0000000000000p+0f;
        }
        v49 = *(float*)(v13 + 216);
        v50 =
            v46 < 0x21 && (float)((float)(PSEUDO_UNFUSED((float)(v49 - v20) *
                                                         (float)(v49 - v20))) +
                                  (float)((float)(v22 - *(float*)&v18) *
                                          (float)(v22 - *(float*)&v18))) <
                              0x1.0000000000000p-23f;
        v51 = *(_QWORD*)(v13 + 8);
        v52 = 0x1.0000000000000p+0f;
        v53 = *(float*)(v51 + 292);
        v54 = *(float*)&v18 - v53;
        v55 = *(float*)(v51 + 296);
        v56 = v20 - v55;
        v57 = v49 - v55;
        v58 = v22 - v53;
        v59 = (float)(PSEUDO_UNFUSED(v57 * v57)) + (float)(v58 * v58);
        v60 = __builtin_elementwise_sqrt((float)(PSEUDO_UNFUSED(v56 * v56)) +
                                         (float)(v54 * v54));
        if (v46 <= 0x20) {
          v61 = (float)(v216 + 0x1.0000000000000p+1f) - v216;
          if (v61 == 0x0.0p+0f) {
            v52 = 0x0.0p+0f;
          }
          else {
            v62 = (float)(v60 - v216) / v61;
            v63 = 0x1.0000000000000p+0f;
            if (v62 <= 0x1.0000000000000p+0f) {
              v63 = v62;
            }
            if (v62 >= 0x0.0p+0f) {
              v52 = v63;
            }
            else {
              v52 = 0x0.0p+0f;
            }
          }
        }
        v64 = __builtin_elementwise_sqrt((float)(v59));
        v65 = (float)(PSEUDO_UNFUSED(v57 * v57)) + (float)(v58 * v58);
        v66 = v58;
        v67 = v57;
        v68 = v57 == 0x0.0p+0f & v58 == 0x0.0p+0f;
        if (!v68) {
          v67 = v57 / v64;
          v66 = v58 / v64;
          v65 = (float)(PSEUDO_UNFUSED(v67 * v67)) + (float)(v66 * v66);
        }
        *(float*)(v13 + 168) = v66;
        *(float*)(v13 + 172) = v67;
        v193 = v60;
        if (v65 <= 0x0.0p+0f) {
          v66 = game_zview_ceef60(*(_QWORD*)(v51 + 8)),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v51 = *(_QWORD*)(v13 + 8);
          *(float*)(v13 + 168) = v66;
          *(float*)(v13 + 172) = v67;
        }
        v69 = 0x0.0p+0f;
        v70 = (float)(fminf(fmaxf(v52, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                      0x1.3333340000000p-1f) +
              0x1.99999a0000000p-2f;
        *(float*)(v51 + 584) = v70 * v66;
        *(float*)(v51 + 588) = v70 * v67;
        v71 = *(_DWORD*)(v13 + 272);
        if (v71 == 1) {
          v85 = *(_QWORD*)(*(_QWORD*)(v13 + 8) + 488LL);
          v86 = CharacterRotate_d52080(v85),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v87 = GameRoutine_1a0a6a0(*(float*)(v85 + 36) - v86,
                                    0x1.921fb60000000p+2f),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if (v87 >= 0x0.0p+0f) {
            v88 = v87 + 0x0.0p+0f;
          }
          else {
            v88 = (float)(v87 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
          }
          if (v88 > 0x1.921fb60000000p+1f) {
            v88 = v88 + -0x1.921fb60000000p+2f;
          }
          if (fabsf(v88) > 0x1.0000000000000p-23f) {
            v89 = 1;
            goto LABEL_103;
          }
          v78 = 2;
        }
        else {
          if (v71 != 0) {
            v89 = 0;
            goto LABEL_103;
          }
          v72 = *(float*)(v13 + 168);
          v73 = *(float*)(v13 + 172);
          v74 = (float)(PSEUDO_UNFUSED(v73 * v73)) + (float)(v72 * v72);
          v75 = 0x0.0p+0f;
          if (v74 > 0x0.0p+0f) {
            if (v72 != 0x0.0p+0f || v73 != 0x0.0p+0f) {
              v76 = __builtin_elementwise_sqrt((float)(v74));
              v72 = v72 / v76;
              v73 = v73 / v76;
            }
            v75 = GameRoutine_1a0ab40(v72, v73),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w")),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          v77 = GameRoutine_1a0a6a0(
              *(float*)(*(_QWORD*)(*(_QWORD*)(v13 + 8) + 488LL) + 36LL) - v75,
              0x1.921fb60000000p+2f),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v78 = 2;
          v79 = *(_QWORD*)(*(_QWORD*)(v13 + 8) + 8LL);
          v80 = *(_QWORD*)(v79 + 24);
          if ((*(_BYTE*)(v80 + 96) & 1) == 0 &&
              (*(_BYTE*)(v80 + 176) & 1) == 0) {
            v81 = *(_BYTE*)(v79 + 388);
            if (v77 >= 0x0.0p+0f) {
              v82 = v77 + 0x0.0p+0f;
            }
            else {
              v82 = (float)(v77 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
            }
            if (v82 > 0x1.921fb60000000p+1f) {
              v82 = v82 + -0x1.921fb60000000p+2f;
            }
            if ((v81 & 0x40) == 0 && fabsf(v82) >= 0x1.921fb60000000p-1f) {
              if ((atomic_load_explicit(
                       (atomic_uchar* volatile)&GameData_22110b8,
                       memory_order_acquire) &
                   1) == 0 &&
                  __cxa_guard_acquire((__int64)&GameData_22110b8) != 0) {
                GameData_22110ac_alt1 = 0;
                __cxa_guard_release((__int64)&GameData_22110b8),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                    v0 = COERCE_AS(
                        __typeof__(v0),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              }
              *(_QWORD*)(*(_QWORD*)(v13 + 8) + 584LL) = GameData_22110ac_alt1;
              v83 = 0x0.0p+0f;
              v84 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 8) + 8LL) + 24LL);
              if (v59 > 0x0.0p+0f) {
                if (!v68) {
                  v58 = v58 / v64;
                  v57 = v57 / v64;
                }
                v83 = GameRoutine_1a0ab40(v58, v57),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                v0 = COERCE_AS(__typeof__(v0),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              }
              *(_QWORD*)(v84 + 32) = 0;
              v78 = 1;
              *(_BYTE*)(v84 + 25) = 0;
              *(_QWORD*)(v84 + 37) = 0;
              *(_BYTE*)(v84 + 48) = 0;
              *(_BYTE*)(v84 + 64) = 0;
              *(_QWORD*)(v84 + 80) = 0x100000000LL;
              *(_BYTE*)(v84 + 96) = 1;
              *(float*)(v84 + 80) = v83;
              *(_DWORD*)(v84 + 32) = 1086918608;
              game_d523c0(*(_QWORD*)(*(_QWORD*)(v84 + 16) + 488LL)),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                  v0 = COERCE_AS(
                      __typeof__(v0),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              *(_BYTE*)(v84 + 25) = 1;
            }
          }
        }
        v89 = 0;
        *(_DWORD*)(v13 + 272) = v78;
      LABEL_103:
        v90 = (float)(*(float*)(v13 + 64) + -0x1.0000000000000p+0f) /
              0x1.6000000000000p+3f;
        if (v90 <= 0x1.0000000000000p+0f) {
          v91 = (float)(*(float*)(v13 + 64) + -0x1.0000000000000p+0f) /
                0x1.6000000000000p+3f;
        }
        else {
          v91 = 0x1.0000000000000p+0f;
        }
        v92 = fmaxf(v48, 0x0.0p+0f);
        if (v90 < 0x0.0p+0f) {
          v91 = 0x0.0p+0f;
        }
        v93 = fminf(v92, 0x1.0000000000000p+0f);
        if (v47 >= 0x0.0p+0f) {
          v94 = v93;
        }
        else {
          v94 = 0x0.0p+0f;
        }
        v95 = *(_QWORD*)(v13 + 8);
        *(float*)(v13 + 192) =
            (float)(fminf(fmaxf(v91 + (float)(v94 *
                                              (float)(0x1.0000000000000p+0f -
                                                      v91)),
                                0x0.0p+0f),
                          0x1.0000000000000p+0f) *
                    0x1.e666660000000p-1f) +
            0x1.99999a0000000p-5f;
        v96 = *(float*)(*(_QWORD*)(v95 + 488) + 36LL);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_22110c8) != 0) {
          GameData_22110c0 = 0x3F80000000000000LL;
          __cxa_guard_release((__int64)&GameData_22110c8),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
              v0 = COERCE_AS(__typeof__(v0),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        v97 = v96 + (float)(roundf(v96 * 0x1.45f3060000000p-3f) *
                            -0x1.921fb60000000p+2f);
        if (v97 <= 0x1.921fb60000000p+0f) {
          v99 = 0x1.0000000000000p+0f;
          if (v97 >= -0x1.921fb60000000p+0f) {
          LABEL_117:
            v100 =
                v97 *
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
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
                                                                                                      (float)(v97 *
                                                                                                              v97))) *
                                                                                      (float)(v97 *
                                                                                              v97))) *
                                                                   (float)(v97 *
                                                                           v97))) *
                                                   (float)(v97 * v97))) *
                                (float)(v97 * v97)) +
                        0x1.0000000000000p+0f);
            v101 =
                v99 *
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
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
                                                                                                      (float)(v97 *
                                                                                                              v97))) *
                                                                                      (float)(v97 *
                                                                                              v97))) *
                                                                   (float)(v97 *
                                                                           v97))) *
                                                   (float)(v97 * v97))) *
                                (float)(v97 * v97)) +
                        0x1.0000000000000p+0f);
            v102 = *((float*)&GameData_22110c0 + 1) * v101;
            v103 = (float)(PSEUDO_UNFUSED(v100 *
                                          *((float*)&GameData_22110c0 + 1))) +
                   (float)(*(float*)&GameData_22110c0 * v101);
            v104 = *(float*)(v13 + 168);
            v105 = *(float*)(v13 + 172);
            if (v104 != 0x0.0p+0f || v105 != 0x0.0p+0f) {
              v106 = __builtin_elementwise_sqrt(
                  (float)(PSEUDO_UNFUSED(v105 * v105)) + (float)(v104 * v104));
              v104 = v104 / v106;
              v105 = v105 / v106;
            }
            v107 = v102 - (float)(*(float*)&GameData_22110c0 * v100);
            if (v103 != 0x0.0p+0f || v107 != 0x0.0p+0f) {
              v108 = __builtin_elementwise_sqrt(
                  (float)(PSEUDO_UNFUSED(v107 * v107)) + (float)(v103 * v103));
              v103 = v103 / v108;
              v107 = v107 / v108;
            }
            v109 = (float)((float)((float)(PSEUDO_UNFUSED(v105 * v107)) +
                                   (float)(v104 * v103)) +
                           -0x1.99999a0000000p-3f) /
                   -0x1.2666660000000p+0f;
            if (v109 <= 0x1.0000000000000p+0f) {
              v110 = v109;
            }
            else {
              v110 = 0x1.0000000000000p+0f;
            }
            if (v109 >= 0x0.0p+0f) {
              v111 = v110;
            }
            else {
              v111 = 0x0.0p+0f;
            }
            v112 = GameRoutine_1a0a550(v111, 0x1.8000000000000p+0f),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w")),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v113 = v216;
            v114 = *(_QWORD*)(v13 + 8);
            if (*(float*)(v13 + 192) >= v112) {
              v112 = *(float*)(v13 + 192);
            }
            *(float*)(v13 + 192) = v112;
            v115 =
                (float)(v113 * 0x1.0000000000000p+1f) + 0x1.0000000000000p-1f;
            *(_DWORD*)(v114 + 608) = *(_DWORD*)(v13 + 212);
            *(_DWORD*)(v114 + 612) = *(_DWORD*)(v13 + 216);
            if (v50) {
              v116 = v193;
              v117 = (float)(*(float*)(v13 + 176) + -0x1.99999a0000000p-4f) /
                     0x1.99999a0000000p-2f;
              if (v117 <= 0x1.0000000000000p+0f) {
                v118 = (float)(*(float*)(v13 + 176) + -0x1.99999a0000000p-4f) /
                       0x1.99999a0000000p-2f;
              }
              else {
                v118 = 0x1.0000000000000p+0f;
              }
              v119 = v117 < 0x0.0p+0f;
              v120 = 0x0.0p+0f;
              if (!v119) {
                v120 = v118;
              }
              *(float*)(*(_QWORD*)(v13 + 8) + 616LL) =
                  (float)(0x1.0000000000000p+0f - v52) * v120;
              v121 = v115 + -0x1.99999a0000000p-5f;
              v122 = 0x1.99999a0000000p-5f;
            }
            else {
              v116 = v193;
              if ((float)(v113 + v113) != 0x0.0p+0f) {
                v123 = v64 / (float)(v113 + v113);
                v124 = 0x1.0000000000000p+0f;
                if (v123 <= 0x1.0000000000000p+0f) {
                  v124 = v123;
                }
                if (v123 >= 0x0.0p+0f) {
                  v69 = v124;
                }
                else {
                  v69 = 0x0.0p+0f;
                }
              }
              *(float*)(*(_QWORD*)(v13 + 8) + 616LL) =
                  (float)(0x1.0000000000000p+0f - v69) * 0x1.0000000000000p-1f;
              v122 = v115 * 0x1.0000000000000p-2f;
              v121 =
                  v115 - (float)(PSEUDO_UNFUSED(v115 * 0x1.0000000000000p-2f));
            }
            v125 = v122 + (float)(v94 * v121);
            *(float*)(v13 + 268) = v125;
            if (v116 >= v125) {
              if (v64 < v125) {
                *(_BYTE*)(v13 + 248) = 1;
                if (v89 == 0) {
                  goto LABEL_166;
                }
                goto LABEL_164;
              }
              goto LABEL_163;
            }
            v126 = *(__int64**)(v13 + 96);
            v127 = *(__int64**)(v13 + 104);
            if (v127 != v126) {
              v128 = 0;
              v129 = *(__int64**)(v13 + 96);
              *(_QWORD*)(v13 + 204) = 2139095039;
              *(_BYTE*)(v13 + 248) = 1;
              v130 = *((_DWORD*)v126 + 4);
              *((_QWORD*)&v197 + 1) = v126[1];
              v131 = *v126;
              LODWORD(v198_.v198) = v130;
              *(_QWORD*)&v197 = v131;
              do {
                v132 = *((_DWORD*)v129 + 4);
                v129 += 4;
                if (v132 == v130) {
                  ++v128;
                }
              } while (v129 != v127);
              if (v128 < 2) {
                GameRoutine_7d6200((__int64*)(v13 + 144), &v198_.v198),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                    v0 = COERCE_AS(
                        __typeof__(v0),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v126 = *(__int64**)(v13 + 96);
                v127 = *(__int64**)(v13 + 104);
              }
              if (v126 + 4 == v127) {
                *(_QWORD*)(v13 + 104) = v126;
              }
              else {
                do {
                  v133 = v126;
                  v134 = *((_OWORD*)v126 + 2);
                  v126 += 4;
                  v135 = *((_DWORD*)v133 + 9);
                  *(_DWORD*)v133 = v134;
                  *((_DWORD*)v133 + 1) = v135;
                  v136 = *(_OWORD*)v133;
                  DWORD2(v136) = *((_DWORD*)v133 + 10);
                  *((_DWORD*)v133 + 4) = *((_DWORD*)v133 + 12);
                  *((_QWORD*)&v136 + 1) = DWORD2(v136);
                  *(_OWORD*)v133 = v136;
                } while (v133 + 8 != v127);
                v137 = *(__int64**)(v13 + 96);
                *(_QWORD*)(v13 + 104) = v126;
                if (v126 != v137) {
                  goto LABEL_163;
                }
              }
              if (*(_BYTE*)(v13 + 32) != 1) {
                v188 = *(_QWORD*)(v13 + 8);
                if (*(_QWORD*)(*(_QWORD*)(v188 + 8) + 32LL) != 0) {
                  v189 = 5;
                }
                else {
                  v189 = 0;
                }
                if ((*(_BYTE*)(v188 + 848) & 1) == 0) {
                  if (*(_BYTE*)(v188 + 28) != 1 |
                      *(_DWORD*)(v188 + 24) != v189) {
                    *(_DWORD*)(v188 + 32) = v189;
                    *(_BYTE*)(v188 + 36) = 1;
                  }
                  if ((*(_BYTE*)(v188 + 112) & 1) == 0 &&
                      (*(_BYTE*)(v188 + 113) & 1) != 0) {
                    WaitRelease_cfa2a0(v188 + 16),
                        result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                        v0 = COERCE_AS(
                            __typeof__(v0),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  }
                }
                *(_DWORD*)(*(_QWORD*)(v13 + 8) + 616LL) = 1065353216;
                *(_BYTE*)(*(_QWORD*)(v13 + 8) + 620LL) = 1;
                if (v89 == 0) {
                LABEL_166:
                  if (*(_DWORD*)(GameData_21d96b8 + 8) != 1) {
                    goto LABEL_191;
                  }
                  v139 = *(_QWORD*)(v13 + 8);
                  v140 = *(float*)(v13 + 196);
                  v141 = fabsf(*(
                      float*)(*(_QWORD*)(*(_QWORD*)(v139 + 8) + 8LL) + 228LL));
                  if (v140 <= 0x0.0p+0f) {
                    if (v140 >= 0x0.0p+0f ||
                        (v140 = v140 + v141) <= 0x0.0p+0f) {
                    LABEL_173:
                      *(float*)(v13 + 196) = v140;
                      v142 = *(__int64**)(GameData_220b6f0 + 32);
                      v143 = *(__int64**)(GameData_220b6f0 + 40);
                      if (v142 == v143) {
                      LABEL_183:
                        v154 = *(float*)(v13 + 200);
                        v156 = 0x1.0000000000000p+0f;
                        if (v154 == 0x0.0p+0f) {
                        LABEL_190:
                          v161 = (float)(fminf(fmaxf(v156, 0x0.0p+0f),
                                               0x1.0000000000000p+0f) *
                                         0x1.99999a0000000p-1f) +
                                 0x1.99999a0000000p-3f;
                          *(float*)(v139 + 584) = *(float*)(v139 + 584) * v161;
                          *(float*)(v139 + 588) = v161 * *(float*)(v139 + 588);
                        LABEL_191:
                          v162 = GameRoutine_1a0a6a0(
                              *(float*)(*(_QWORD*)(*(_QWORD*)(v13 + 8) +
                                                   488LL) +
                                        36LL) -
                                  *(float*)(*(_QWORD*)(*(_QWORD*)(v13 + 8) +
                                                       488LL) +
                                            32LL),
                              0x1.921fb60000000p+2f),
                          result =
                              COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                          v0 = COERCE_AS(
                              __typeof__(v0),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                          if (v162 >= 0x0.0p+0f) {
                            v163 = v162 + 0x0.0p+0f;
                          }
                          else {
                            v163 = (float)(v162 + 0x0.0p+0f) +
                                   0x1.921fb60000000p+2f;
                          }
                          if (v163 > 0x1.921fb60000000p+1f) {
                            v163 = v163 + -0x1.921fb60000000p+2f;
                          }
                          v164 = (float)(v163 + -0x1.921fb60000000p+1f) /
                                 -0x1.921fb60000000p+1f;
                          v165 = 0x1.0000000000000p+0f;
                          if (v164 <= 0x1.0000000000000p+0f) {
                            v166 = v164;
                          }
                          else {
                            v166 = 0x1.0000000000000p+0f;
                          }
                          v167 = (float)(fminf(fmaxf(v166, 0x0.0p+0f),
                                               0x1.0000000000000p+0f) *
                                         0x1.99999a0000000p-1f) +
                                 0x1.99999a0000000p-3f;
                          if (v164 >= 0x0.0p+0f) {
                            v168 = v167;
                          }
                          else {
                            v168 = 0x1.99999a0000000p-3f;
                          }
                          v169 = *(float*)(v13 + 200);
                          if (v169 != 0x0.0p+0f) {
                            v165 = 0x0.0p+0f;
                            if ((float)(0x0.0p+0f - v169) != 0x0.0p+0f) {
                              v170 = (float)(*(float*)(v13 + 196) - v169) /
                                     (float)(0x0.0p+0f - v169);
                              v165 = 0x1.0000000000000p+0f;
                              if (v170 <= 0x1.0000000000000p+0f) {
                                v165 = (float)(*(float*)(v13 + 196) - v169) /
                                       (float)(0x0.0p+0f - v169);
                              }
                              if (v170 < 0x0.0p+0f) {
                                v165 = 0x0.0p+0f;
                              }
                            }
                          }
                          *(float*)(*(_QWORD*)(v13 + 8) + 596LL) =
                              v165 * (float)((float)(*(float*)(v13 + 184) *
                                                     *(float*)(v13 + 24)) *
                                             *(float*)(v13 + 192));
                          *(float*)(*(_QWORD*)(v13 + 8) + 592LL) =
                              *(float*)(v13 + 188) * *(float*)(v13 + 28);
                          *(float*)(*(_QWORD*)(v13 + 8) + 600LL) =
                              v168 * (float)(*(float*)(v13 + 64) *
                                             *(float*)(v13 + 20));
                          v171 = *(_QWORD*)(v13 + 8);
                          if (*(_QWORD*)(v13 + 104) != *(_QWORD*)(v13 + 96)) {
                            v172 = *(float*)(v13 + 212) - *(float*)(v171 + 292);
                            v173 = *(float*)(v13 + 216) - *(float*)(v171 + 296);
                            v174 = *(float*)(v13 + 200);
                            v175 = (float)(PSEUDO_UNFUSED(v173 * v173)) +
                                   (float)(v172 * v172);
                            v176 =
                                *(float*)(v13 + 204) + -0x1.a36e2e0000000p-14f;
                            v177 = __builtin_elementwise_sqrt((float)(v175));
                            *(float*)(v13 + 204) = v177;
                            if (v174 != 0x0.0p+0f &&
                                    ((float)(0x0.0p+0f - v174) == 0x0.0p+0f ||
                                     ((v178 = (float)(*(float*)(v13 + 196) -
                                                      v174) /
                                              (float)(0x0.0p+0f - v174)) <=
                                              0x1.0000000000000p+0f
                                          ? (v179 =
                                                 (float)(*(float*)(v13 + 196) -
                                                         v174) /
                                                 (float)(0x0.0p+0f - v174))
                                          : (v179 = 0x1.0000000000000p+0f),
                                      v178 < 0x0.0p+0f ||
                                          v179 < 0x1.0000000000000p+0f)) ||
                                v176 > v177) {
                              v183 = *(float*)(v13 + 180);
                              if (v183 > 0x0.0p+0f) {
                                v183 = 0x0.0p+0f;
                              }
                              *(float*)(v13 + 180) = v183;
                              v184 = v183 -
                                     *(float*)(*(_QWORD*)(*(_QWORD*)(v171 + 8) +
                                                          8LL) +
                                               228LL);
                              *(float*)(v13 + 180) = v184;
                              if (v184 <= -0x1.0000000000000p-1f) {
                                v182 = 0;
                                goto LABEL_225;
                              }
                            }
                            else {
                              v180 = *(float*)(v13 + 180);
                              if (v180 < 0x0.0p+0f) {
                                v180 = 0x0.0p+0f;
                              }
                              *(float*)(v13 + 180) = v180;
                              v181 = v180 +
                                     *(float*)(*(_QWORD*)(*(_QWORD*)(v171 + 8) +
                                                          8LL) +
                                               228LL);
                              *(float*)(v13 + 180) = v181;
                              if (v181 >= 0x1.0000000000000p-1f) {
                                LODWORD(v197) = 0;
                                CharacterController_d41fa0(v13, &v197),
                                    result = COERCE_AS(
                                        __typeof__(result),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                                    v0 = COERCE_AS(
                                        __typeof__(v0),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x0", "=r"));
                                v171 = *(_QWORD*)(v13 + 8);
                                *(_DWORD*)(v13 + 180) = 0;
                                v182 = 1;
                              LABEL_225:
                                *(_BYTE*)(v13 + 220) = v182;
                              }
                            }
                          }
                          v185 = *(float*)(v13 + 264);
                          v186 = fabsf(
                              *(float*)(*(_QWORD*)(*(_QWORD*)(v171 + 8) + 8LL) +
                                        228LL));
                          if (v185 <= 0x0.0p+0f) {
                            if (v185 >= 0x0.0p+0f) {
                              goto LABEL_232;
                            }
                            v185 = v185 + v186;
                            if (v185 <= 0x0.0p+0f) {
                              goto LABEL_232;
                            }
                          }
                          else {
                            v185 = v185 - v186;
                            if (v185 >= 0x0.0p+0f) {
                              goto LABEL_232;
                            }
                          }
                          v185 = 0x0.0p+0f;
                        LABEL_232:
                          *(float*)(v13 + 264) = v185;
                          v187 = *(float*)(v13 + 208);
                          *(float*)(v13 + 176) =
                              *(float*)(*(_QWORD*)(*(_QWORD*)(v171 + 8) + 8LL) +
                                        228LL) +
                              *(float*)(v13 + 176);
                          result =
                              *(float*)(*(_QWORD*)(*(_QWORD*)(v171 + 8) + 8LL) +
                                        228LL) +
                              v187;
                          *(float*)(v13 + 208) = result;
                          return result;
                        }
                      }
                      else {
                        v144 = *(_QWORD*)(v139 + 8);
                        v145 = *(float*)(v144 + 528);
                        LANES128(v146).n128_u64[0] =
                            (unsigned int)*(_QWORD*)(v13 + 168);
                        *(int32x2_t*)&LANES128(v146).n128_i8[8] =
                            vdup_lane_s32(*(int32x2_t*)(v13 + 168), 1);
                        v147 = vmulq_n_f32(v146, v145);
                        LANES128(v146).n128_u64[0] = 0x3FC000003FC00000LL;
                        LANES128(v146).n128_u64[1] = 0x3FC000003FC00000LL;
                        v148 = vmulq_f32(v147, v146);
                        while (1) {
                          v149 = *v142;
                          if (*(_DWORD*)(*v142 + 188) ==
                              *(_DWORD*)(v144 + 188)) {
                            v150 = *(float32x4_t**)(v149 + 16);
                            if ((float)((float)(PSEUDO_UNFUSED(
                                            LANES128(v150[42]).n128_f32[0] *
                                            LANES128(v150[42]).n128_f32[0])) +
                                        (float)(LANES128(v150[41]).n128_f32[3] *
                                                LANES128(v150[41])
                                                    .n128_f32[3])) ==
                                    0x0.0p+0f &&
                                v149 != v144) {
                              v151 = v150[35];
                              v152 = vaddq_f32(
                                  v148, *(float32x4_t*)(*(_QWORD*)(v144 + 16) +
                                                        560LL));
                              if ((float)(LANES128(v151).n128_f32[1] -
                                          *(float*)(v149 + 552)) <=
                                      LANES128(v152).n128_f32[1] &&
                                  LANES128(v151).n128_f32[1] >=
                                      (float)(LANES128(v152).n128_f32[1] -
                                              *(float*)(v144 + 552))) {
                                v153 = vsubq_f32(v151, v152);
                                if ((float)(LANES128_OF(vmulq_f32(v153, v153))
                                                .n128_f32[2] +
                                            (float)(LANES128(v153).n128_f32[0] *
                                                    LANES128(v153)
                                                        .n128_f32[0])) <=
                                    (float)((float)(v145 +
                                                    *(float*)(v149 + 528)) *
                                            (float)(v145 +
                                                    *(float*)(v149 + 528)))) {
                                  break;
                                }
                              }
                            }
                          }
                          v142 += 2;
                          if (v142 == v143) {
                            goto LABEL_183;
                          }
                        }
                        v154 = 0x1.3333340000000p-3f;
                        v155 = fminf(fmaxf(**(float**)(v144 + 144), 0x0.0p+0f),
                                     0x1.0000000000000p+0f);
                        *(_DWORD*)(v13 + 200) = 1041865114;
                        v140 = (float)(v155 * 0x1.99999c0000000p-4f) +
                               0x1.99999a0000000p-3f;
                        *(float*)(v13 + 196) = v140;
                      }
                      v156 = 0x0.0p+0f;
                      v157 = 0x0.0p+0f - v154;
                      if ((float)(0x0.0p+0f - v154) != 0x0.0p+0f) {
                        v158 = v140 - v154;
                        v159 = 0x1.0000000000000p+0f;
                        v160 = v158 / v157;
                        if (v160 <= 0x1.0000000000000p+0f) {
                          v159 = v160;
                        }
                        if (v160 >= 0x0.0p+0f) {
                          v156 = v159;
                        }
                        else {
                          v156 = 0x0.0p+0f;
                        }
                      }
                      goto LABEL_190;
                    }
                  }
                  else {
                    v140 = v140 - v141;
                    if (v140 >= 0x0.0p+0f) {
                      goto LABEL_173;
                    }
                  }
                  v140 = 0x0.0p+0f;
                  goto LABEL_173;
                }
              LABEL_164:
                *(_DWORD*)(*(_QWORD*)(v13 + 8) + 616LL) = 0;
                if ((atomic_load_explicit(
                         (atomic_uchar* volatile)&GameData_22110b8,
                         memory_order_acquire) &
                     1) == 0 &&
                    __cxa_guard_acquire((__int64)&GameData_22110b8) != 0) {
                  GameData_22110ac_alt1 = 0;
                  __cxa_guard_release((__int64)&GameData_22110b8),
                      result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                      v0 = COERCE_AS(
                          __typeof__(v0),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                }
                *(_QWORD*)(*(_QWORD*)(v13 + 8) + 584LL) = GameData_22110ac_alt1;
                goto LABEL_166;
              }
              v138 = *(_QWORD*)(v13 + 144);
              LODWORD(v197) = 0;
              *(_QWORD*)(v13 + 152) = v138;
              CharacterController_d41fa0(v13, &v197),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                  v0 = COERCE_AS(
                      __typeof__(v0),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            }
          LABEL_163:
            if (v89 == 0) {
              goto LABEL_166;
            }
            goto LABEL_164;
          }
          v98 = -0x1.921fb60000000p+1f;
        }
        else {
          v98 = 0x1.921fb60000000p+1f;
        }
        v97 = v98 - v97;
        v99 = -0x1.0000000000000p+0f;
        goto LABEL_117;
      }
      v194_.v195 = v194_.v194;
      *(float*)&v191 = v192;
    LABEL_41:
      v42 = v20;
    }
    else {
      v38 = *(_QWORD*)(v13 + 8);
      v39 = *(float*)(v38 + 292);
      v40 = *(float*)(v38 + 296);
      v41 = 1;
      while (1) {
        v42 = COERCE_FLOAT(*(_QWORD*)&v194_.v194[16 * v41 + 8]);
        if ((float)((float)(PSEUDO_UNFUSED((float)(v40 - v42) *
                                           (float)(v40 - v42))) +
                    (float)((float)(v39 -
                                    COERCE_FLOAT(
                                        *(_OWORD*)&v194_.v194[16 * v41])) *
                            (float)(v39 -
                                    COERCE_FLOAT(
                                        *(_OWORD*)&v194_.v194[16 * v41])))) >
            0x1.99999a0000000p-4f) {
          break;
        }
        if (v37 == ++v41) {
          v194_.v195 = v194_.v194;
          *(float*)&v191 = v192;
          goto LABEL_41;
        }
      }
      v191 = *(_OWORD*)&v194_.v194[16 * v41];
      v194_.v195 = v194_.v194;
    }
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v44,
                                  (__int64)v194_.v194),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v43 = *(float*)&v191;
    *(float*)&v18 = v192;
    goto LABEL_45;
  }
  if (*(_QWORD*)(*(_QWORD*)(v12 + 8) + 32LL) != 0) {
    v23 = 5;
  }
  else {
    v23 = 0;
  }
  if ((*(_BYTE*)(v12 + 848) & 1) == 0) {
    if (*(_BYTE*)(v12 + 28) != 1 | *(_DWORD*)(v12 + 24) != v23) {
      *(_DWORD*)(v12 + 32) = v23;
      *(_BYTE*)(v12 + 36) = 1;
    }
    if ((*(_BYTE*)(v12 + 112) & 1) == 0 && (*(_BYTE*)(v12 + 113) & 1) != 0) {
      WaitRelease_cfa2a0(v12 + 16),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  return result;
}

#pragma GCC visibility pop
