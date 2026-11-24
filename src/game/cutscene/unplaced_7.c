#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_17fd670(PSEUDO_X8, _QWORD*,
                                                    unsigned int, unsigned int,
                                                    float32x2_t*, float32x4_t*,
                                                    char);
__int64 game_14a3920(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
double cos(double);
double sin(double);
extern _DWORD GameData_1c0b528[3];
extern _UNKNOWN* GameData_212c540;
float task_618640(int, float result, float, float, float);
long double asin(long double, long double);
long double atan2(double, double);
void game_cutscene_1808f40(__int64 a1, float a2);

void game_cutscene_1808f40(__int64 a1, float a2)
{
  _DWORD* v2;
  float32x2_t** v3;
  __int64 v5;
  __int64 v6;
  float32x2_t* v7;
  float32x2_t* v8;
  __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int128 v17;
  unsigned int i;
  __int64 v19;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int128 v25;
  float v26;
  unsigned int v27;
  int v28;
  unsigned __int64 v29;
  unsigned int v30;
  __int64 v31;
  unsigned int v32;
  char v33;
  unsigned __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int128 v40;
  unsigned int k;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  float v45;
  float v46;
  unsigned int v47;
  unsigned int v48;
  float v49;
  __int64 v50;
  __int128 v51;
  __int64* v52;
  __int64 v53;
  unsigned int v54;
  unsigned int j;
  __int64 v56;
  unsigned int v57;
  unsigned int v58;
  float v59;
  __int64 v60;
  unsigned int v61;
  unsigned int m;
  __int64 v63;
  __int128 v64;
  __int64 v65;
  __int64 v66;
  int32x2_t v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  unsigned int v71;
  unsigned int v72;
  int32x4_t v73;
  int32x4_t* v74;
  __int64 v75;
  unsigned int v76;
  unsigned int v77;
  int32x4_t v78;
  int32x4_t* v79;
  __int128* v80;
  __int64 v81;
  float32x4_t v82;
  unsigned __int64 v83;
  float32x4_t v84;
  __int64 v85;
  __int64 v86;
  unsigned int v87;
  unsigned int v88;
  float32x4_t v89;
  float32x4_t* v90;
  __int64 v91;
  __int128 v92;
  unsigned __int64 v93;
  __int128 v94;
  __int64 v95;
  double v96;
  double v97;
  double v98;
  double v99;
  double v100;
  double v101;
  double v102;
  double v103;
  float32x4_t v104;
  float v105;
  unsigned int v106;
  double v107;
  double v108;
  double v109;
  double v110;
  double v111;
  double v112;
  double v113;
  float32x4_t v114;
  float v115;
  unsigned int v116;
  float32x4_t v117;
  float v118;
  double v119;
  double v121;
  long double v122;
  long double v123;
  long double v124;
  double v125;
  long double v127;
  __int64* v128;
  __int64 v129;
  unsigned int v130;
  float v131;
  unsigned int v132;
  float v133;
  __int64 v134;
  unsigned int v135;
  float v136;
  unsigned int v137;
  float v138;
  __int64 v139;
  unsigned int v140;
  float v141;
  unsigned int v142;
  float v143;
  __int64 v144;
  __int128 v145;
  __int64 v146;
  unsigned __int64 v147;
  float v148;
  __int64* v149;
  __int64 v150;
  unsigned int v151;
  unsigned int v152;
  int32x4_t v153;
  int32x4_t* v154;
  float v155;
  __int128 v156;
  float32x4_t v157;
  float32x4_t v158;
  struct {
    float32x4_t v159;
    __int64 v160;
    __int64 v161;
    __int128 v162;
    __int64 v163;
    __int64 v164;
    __int128 v165;
    __int64 v166;
    __int64 v167;
    __int64 v168;
    __int64 v169;
  } v159_;
  float32x4_t v170;
  float32x2_t v171[2];

  v2 = *(_DWORD**)(a1 + 72);
  if (*(_QWORD*)v2 == 0 || *(_DWORD*)(*(_QWORD*)v2 + 16LL) != v2[2]) {
    return;
  }
  v3 = *(float32x2_t***)(a1 + 40);
  if (v3 == nullptr) {
    v10 = *(_QWORD*)(a1 + 16);
    if (v10 != 0) {
      v11 = a2;
      v12 = std___1___shared_weak_count_lock(v10);
      if (v12 != 0) {
        v13 = *(_QWORD*)(a1 + 8);
        if (v13 != 0) {
          if ((*(_BYTE*)(a1 + 88) & 1) == 0) {
            v14 = *(_QWORD*)(a1 + 72);
            v15 = *(_QWORD*)v14;
            if (*(_QWORD*)v14 != 0 &&
                *(_DWORD*)(v15 + 16) == *(_DWORD*)(v14 + 8)) {
              v16 = *(_DWORD*)(v15 + 36);
              if (v16 != 0) {
                v17 = *(_OWORD*)(v13 + 80);
                for (i = 0; i < v16; ++i) {
                  if ((int)v16 > (int)i) {
                    v19 = *(_QWORD*)(v15 + 40 + 8LL * (int)i);
                    if (v19 != 0) {
                      *(_OWORD*)(v19 + 16) = v17;
                      *(_BYTE*)(v19 + 128) = 1;
                      v16 = *(_DWORD*)(v15 + 36);
                    }
                  }
                }
              }
            }
            game_14a3920(v14);
            v52 = *(__int64**)(a1 + 72);
            v53 = *v52;
            if (*v52 != 0) {
              if (*(_DWORD*)(v53 + 16) != *((_DWORD*)v52 + 2)) {
                goto LABEL_172;
              }
              v54 = *(_DWORD*)(v53 + 36);
              if (v54 == 0) {
                goto LABEL_172;
              }
              v51 = *(_OWORD*)(v13 + 96);
              for (j = 0; j < v54; ++j) {
                if ((int)v54 > (int)j) {
                  v56 = *(_QWORD*)(v53 + 40 + 8LL * (int)j);
                  if (v56 != 0) {
                    *(_OWORD*)(v56 + 48) = v51;
                    *(_BYTE*)(v56 + 128) = 1;
                    v54 = *(_DWORD*)(v53 + 36);
                  }
                }
              }
              v52 = *(__int64**)(a1 + 72);
              v53 = *v52;
              if (*v52 != 0) {
              LABEL_172:
                if (*(_DWORD*)(v53 + 16) == *((_DWORD*)v52 + 2)) {
                  v76 = *(_DWORD*)(v53 + 36);
                  if (v76 != 0) {
                    LODWORD(v51) = *(_DWORD*)(v13 + 112);
                    v77 = 0;
                    v78 = vdupq_lane_s32(*(int32x2_t*)&v51, 0);
                    LANES128(v78).n128_u32[3] = 0;
                    do {
                      if ((int)v76 > (int)v77) {
                        v79 = *(int32x4_t**)(v53 + 40 + 8LL * (int)v77);
                        if (v79 != nullptr) {
                          v79[2] = v78;
                          LANES128(v79[8]).n128_u8[0] = 1;
                          v76 = *(_DWORD*)(v53 + 36);
                        }
                      }
                      ++v77;
                    } while (v77 < v76);
                  }
                }
              }
            }
          }
        LABEL_167:
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak(v12);
          }
          goto LABEL_169;
        }
      }
      a2 = v11;
    }
    else {
      v12 = 0;
    }
    v20 = *(_QWORD*)(a1 + 32);
    if (v20 != 0) {
      v21 = a2;
      v22 = std___1___shared_weak_count_lock(v20);
      if (v22 != 0) {
        v23 = *(_QWORD*)(a1 + 24);
        v24 = v22;
        if (v23 != 0) {
          v25 = *(_OWORD*)(v23 + 80);
          v155 = 0x1.0000000000000p+0f;
          if ((unsigned int)(int)*(float*)&v25 <= 0xFFFFFFFD) {
            v155 = 0x0.0p+0f;
            v26 = v21 - *(float*)(a1 + 48);
            if (v26 > 0x0.0p+0f) {
              v155 = 0x1.0000000000000p+0f;
              if (v26 < *((float*)&v25 + 1)) {
                v27 = (int)*(float*)&v25 - 1;
                if (v27 > 2) {
                  v28 = 0;
                }
                else {
                  v28 = GameData_1c0b528[v27];
                }
                v155 = task_618640(v28, 0x0.0p+0f, 0x1.0000000000000p+0f, v26,
                                   *((float*)&v25 + 1));
              }
            }
          }
          v80 = (__int128*)GameData_212c540;
          v81 = *(_QWORD*)(v23 + 104);
          v82 = *(float32x4_t*)GameData_212c540;
          v83 = (*(_QWORD*)(v23 + 112) - v81) >> 2;
          if (v83 < 3) {
            v84 = *(float32x4_t*)GameData_212c540;
          }
          else {
            LANES128(v84).n128_u64[0] = *(_QWORD*)v81;
            LANES128(v84).n128_u64[1] = *(unsigned int*)(v81 + 8);
            if (v83 >= 6) {
              LANES128(v82).n128_u64[0] = *(_QWORD*)(v81 + 12);
              LANES128(v82).n128_u32[2] = *(_DWORD*)(v81 + 20);
            }
          }
          v85 = *(_QWORD*)(a1 + 72);
          v86 = *(_QWORD*)v85;
          if (*(_QWORD*)v85 != 0 &&
              *(_DWORD*)(v86 + 16) == *(_DWORD*)(v85 + 8)) {
            v87 = *(_DWORD*)(v86 + 36);
            if (v87 != 0) {
              v88 = 0;
              v89 = vaddq_f32(v84, vmulq_n_f32(vsubq_f32(v82, v84), v155));
              do {
                if ((int)v87 > (int)v88) {
                  v90 = *(float32x4_t**)(v86 + 40 + 8LL * (int)v88);
                  if (v90 != nullptr) {
                    v90[1] = v89;
                    LANES128(v90[8]).n128_u8[0] = 1;
                    v87 = *(_DWORD*)(v86 + 36);
                  }
                }
                ++v88;
              } while (v88 < v87);
            }
          }
          game_14a3920(v85);
          v91 = *(_QWORD*)(v23 + 136);
          v92 = *v80;
          v93 = (*(_QWORD*)(v23 + 144) - v91) >> 2;
          if (v93 < 3) {
            v94 = *v80;
          }
          else {
            *(_QWORD*)&v94 = *(_QWORD*)v91;
            DWORD2(v94) = *(_DWORD*)(v91 + 8);
            if (v93 >= 6) {
              *(_QWORD*)&v92 = *(_QWORD*)(v91 + 12);
              DWORD2(v92) = *(_DWORD*)(v91 + 20);
            }
          }
          v156 = v92;
          v95 = v94;
          v96 = *((float*)&v94 + 2) * 0x1.0000000000000p-1;
          v97 = cos(v96);
          v98 = sin(v96);
          v99 = cos(*(float*)&v95 * 0x1.0000000000000p-1);
          v100 = sin(*(float*)&v95 * 0x1.0000000000000p-1);
          v101 = *((float*)&v95 + 1) * 0x1.0000000000000p-1;
          v102 = cos(v101);
          v103 = sin(v101);
          LANES128(v104).n128_f32[0] =
              v97 * v100 * v102 - PSEUDO_UNFUSED(v103 * (v98 * v99));
          v105 = PSEUDO_UNFUSED(v98 * v100 * v102) +
                 PSEUDO_UNFUSED(v97 * v99) * v103;
          *(float*)&v106 = PSEUDO_UNFUSED(v98 * v100 * v103) +
                           PSEUDO_UNFUSED(v97 * v99) * v102;
          *(float*)&v103 =
              v98 * v99 * v102 - PSEUDO_UNFUSED(v103 * (v97 * v100));
          LANES128(v104).n128_f32[1] = v105;
          LANES128(v104).n128_u64[1] = __PAIR64__(v106, LODWORD(v103));
          v157 = v104;
          v107 = cos(*((float*)&v156 + 2) * 0x1.0000000000000p-1);
          v108 = sin(*((float*)&v156 + 2) * 0x1.0000000000000p-1);
          v109 = cos(*(float*)&v156 * 0x1.0000000000000p-1);
          v110 = sin(*(float*)&v156 * 0x1.0000000000000p-1);
          v111 = *((float*)&v156 + 1) * 0x1.0000000000000p-1;
          v112 = cos(v111);
          v113 = sin(v111);
          LANES128(v114).n128_f32[0] =
              v107 * v110 * v112 - PSEUDO_UNFUSED(v113 * (v108 * v109));
          v115 = PSEUDO_UNFUSED(v108 * v110 * v112) +
                 PSEUDO_UNFUSED(v107 * v109) * v113;
          *(float*)&v116 = PSEUDO_UNFUSED(v108 * v110 * v113) +
                           PSEUDO_UNFUSED(v107 * v109) * v112;
          *(float*)&v113 =
              v108 * v109 * v112 - PSEUDO_UNFUSED(v113 * (v107 * v110));
          LANES128(v114).n128_f32[1] = v115;
          LANES128(v114).n128_u64[1] = __PAIR64__(v116, LODWORD(v113));
          v117 = vmlaq_n_f32(v157, vsubq_f32(v114, v157), v155);
          LODWORD(v108) = LANES128(v117).n128_u32[1];
          v158 = v117;
          v118 = LANES128(v117).n128_f32[2];
          v119 = vmuls_lane_f32(
              LANES128(v117).n128_f32[1],
              COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0]), 1);
          *(float*)&v113 = vmuls_lane_f32(LANES128(v117).n128_f32[1], v117, 2);
          v123 = atan2(
              (float)(*(float*)&v113 + (float)(LANES128(v117).n128_f32[0] *
                                               LANES128(v117).n128_f32[3])) +
                  (float)(*(float*)&v113 + (float)(LANES128(v117).n128_f32[0] *
                                                   LANES128(v117).n128_f32[3])),
              (LANES128_OF(vmulq_f32(v117, v117)).n128_f32[0] + v119) *
                      -0x1.0000000000000p+1 +
                  0x1.0000000000000p+0);
          *((_QWORD*)&v122 + 1) = LANES128(v158).n128_u64[1];
          v121 = *(double*)&v123;
          *(float*)&v123 = vmuls_lane_f32(-LANES128(v158).n128_f32[0], v158, 2);
          *(_QWORD*)&v122 = -0x1.0000000000000p+0;
          *(double*)&v123 =
              (float)(*(float*)&v123 +
                      (float)(*(float*)&v108 * LANES128(v158).n128_f32[3])) +
              (float)(*(float*)&v123 +
                      (float)(*(float*)&v108 * LANES128(v158).n128_f32[3]));
          if (*(double*)&v123 > 0x1.0000000000000p+0) {
            *(double*)&v123 = 0x1.0000000000000p+0;
          }
          if (*(double*)&v123 < -0x1.0000000000000p+0) {
            *(double*)&v123 = -0x1.0000000000000p+0;
          }
          v124 = asin(v123, v122);
          v125 = *(double*)&v124;
          *(float*)&v124 = vmuls_lane_f32(
              LANES128(v158).n128_f32[0],
              COERCE_AS(float32x2_t, LANES128(v158).n128_u64[0]), 1);
          v127 = atan2((float)(*(float*)&v124 +
                               (float)(v118 * LANES128(v158).n128_f32[3])) +
                           (float)(*(float*)&v124 +
                                   (float)(v118 * LANES128(v158).n128_f32[3])),
                       (v119 + vmuls_lane_f32(v118, v158, 2)) *
                               -0x1.0000000000000p+1 +
                           0x1.0000000000000p+0);
          v128 = *(__int64**)(a1 + 72);
          v129 = *v128;
          if (*v128 != 0) {
            if (*(_DWORD*)(v129 + 16) != *((_DWORD*)v128 + 2)) {
              goto LABEL_173;
            }
            v130 = *(_DWORD*)(v129 + 36);
            if (v130 == 0) {
              goto LABEL_173;
            }
            v131 = v121;
            v132 = 0;
            v133 = v131 * 0x1.ca5dc00000000p+5f;
            do {
              if ((int)v130 > (int)v132) {
                v134 = *(_QWORD*)(v129 + 40 + 8LL * (int)v132);
                if (v134 != 0) {
                  *(float*)(v134 + 48) = v133;
                  *(_BYTE*)(v134 + 128) = 1;
                  v130 = *(_DWORD*)(v129 + 36);
                }
              }
              ++v132;
            } while (v132 < v130);
            v128 = *(__int64**)(a1 + 72);
            v129 = *v128;
            if (*v128 != 0) {
            LABEL_173:
              if (*(_DWORD*)(v129 + 16) != *((_DWORD*)v128 + 2)) {
                goto LABEL_174;
              }
              v135 = *(_DWORD*)(v129 + 36);
              if (v135 == 0) {
                goto LABEL_174;
              }
              v136 = v125;
              v137 = 0;
              v138 = v136 * 0x1.ca5dc00000000p+5f;
              do {
                if ((int)v135 > (int)v137) {
                  v139 = *(_QWORD*)(v129 + 40 + 8LL * (int)v137);
                  if (v139 != 0) {
                    *(float*)(v139 + 52) = v138;
                    *(_BYTE*)(v139 + 128) = 1;
                    v135 = *(_DWORD*)(v129 + 36);
                  }
                }
                ++v137;
              } while (v137 < v135);
              v128 = *(__int64**)(a1 + 72);
              v129 = *v128;
              if (*v128 != 0) {
              LABEL_174:
                if (*(_DWORD*)(v129 + 16) == *((_DWORD*)v128 + 2)) {
                  v140 = *(_DWORD*)(v129 + 36);
                  if (v140 != 0) {
                    v141 = *(double*)&v127;
                    v142 = 0;
                    v143 = v141 * 0x1.ca5dc00000000p+5f;
                    do {
                      if ((int)v140 > (int)v142) {
                        v144 = *(_QWORD*)(v129 + 40 + 8LL * (int)v142);
                        if (v144 != 0) {
                          v145 = *(_OWORD*)(v144 + 48);
                          *(_BYTE*)(v144 + 128) = 1;
                          *((_QWORD*)&v145 + 1) = LODWORD(v143);
                          *(_OWORD*)(v144 + 48) = v145;
                          v140 = *(_DWORD*)(v129 + 36);
                        }
                      }
                      ++v142;
                    } while (v142 < v140);
                  }
                }
              }
            }
          }
          v146 = *(_QWORD*)(v23 + 168);
          LODWORD(v127) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
          v147 = *(_QWORD*)(v23 + 176) - v146;
          if (v147 != 0) {
            v148 = *(float*)v146;
            if (v147 >= 5) {
              LODWORD(v127) = *(_DWORD*)(v146 + 4);
            }
          }
          else {
            v148 = 0x1.0000000000000p+0f;
          }
          v149 = *(__int64**)(a1 + 72);
          v150 = *v149;
          if (*v149 != 0 && *(_DWORD*)(v150 + 16) == *((_DWORD*)v149 + 2)) {
            v151 = *(_DWORD*)(v150 + 36);
            if (v151 != 0) {
              v152 = 0;
              *(float*)&v127 =
                  v148 + (float)((float)(*(float*)&v127 - v148) * v155);
              v153 = vdupq_lane_s32(*(int32x2_t*)&v127, 0);
              LANES128(v153).n128_u32[3] = 0;
              do {
                if ((int)v151 > (int)v152) {
                  v154 = *(int32x4_t**)(v150 + 40 + 8LL * (int)v152);
                  if (v154 != nullptr) {
                    v154[2] = v153;
                    LANES128(v154[8]).n128_u8[0] = 1;
                    v151 = *(_DWORD*)(v150 + 36);
                  }
                }
                ++v152;
              } while (v152 < v151);
            }
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          std___1___shared_weak_count___release_weak(v24);
        }
      }
    }
    if (v12 == 0) {
      goto LABEL_169;
    }
    goto LABEL_167;
  }
  v5 = (__int64)v3[1];
  if (v5 != 0 && (v6 = std___1___shared_weak_count_lock(v5)) != 0) {
    v7 = *v3;
    v8 = v3[2];
    if (*v3 == nullptr || v8 == nullptr) {
      v159_.v168 = 0;
      v159_.v169 = 0;
      v159_.v166 = 0;
      v159_.v167 = 0;
      v159_.v165 = (__typeof__(v159_.v165)){0};
      v159_.v163 = 0;
      v159_.v164 = 0;
      v159_.v162 = (__typeof__(v159_.v162)){0};
      v159_.v160 = 0;
      v159_.v161 = 0;
      v159_.v159 = (__typeof__(v159_.v159)){0};
    }
    else {
      v29 = LANES64(v7[13]).n64_u64[0];
      v30 = LANES64(v7[6]).n64_u32[0];
      v31 = v6;
      v32 = LANES64(v7[11]).n64_u32[0];
      v33 = LANES64(v7[16]).n64_i8[0];
      v171[0] = v7[12];
      LANES64(v171[1]).n64_u64[0] = v29;
      v34 = LANES64(v7[15]).n64_u64[0];
      LANES128(v170).n128_u64[0] = LANES64(v7[14]).n64_u64[0];
      LANES128(v170).n128_u64[1] = v34;
      GameRoutine_17fd670((void*)(&v159_.v159), v8, v30, v32, v171, &v170, v33);
      v6 = v31;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v35 = v6;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v35);
    }
  }
  else {
    v159_.v168 = 0;
    v159_.v169 = 0;
    v159_.v166 = 0;
    v159_.v167 = 0;
    v159_.v165 = (__typeof__(v159_.v165)){0};
    v159_.v163 = 0;
    v159_.v164 = 0;
    v159_.v162 = (__typeof__(v159_.v162)){0};
    v159_.v160 = 0;
    v159_.v161 = 0;
    v159_.v159 = (__typeof__(v159_.v159)){0};
  }
  if (*(_BYTE*)(a1 + 88) != 1 || (v159_.v168 & 1) != 0) {
    v36 = (unsigned __int8)v159_.v163;
    if ((unsigned __int8)v159_.v163 == 1) {
      v37 = *(_QWORD*)(a1 + 72);
      v38 = *(_QWORD*)v37;
      if (*(_QWORD*)v37 != 0 && *(_DWORD*)(v38 + 16) == *(_DWORD*)(v37 + 8)) {
        v39 = *(_DWORD*)(v38 + 36);
        if (v39 != 0) {
          v40 = v159_.v162;
          for (k = 0; k < v39; ++k) {
            if ((int)v39 > (int)k) {
              v42 = *(_QWORD*)(v38 + 40 + 8LL * (int)k);
              if (v42 != 0) {
                *(_OWORD*)(v42 + 16) = v40;
                *(_BYTE*)(v42 + 128) = 1;
                v39 = *(_DWORD*)(v38 + 36);
              }
            }
          }
        }
      }
      game_14a3920(v37);
    }
    if ((unsigned __int8)v159_.v166 == 1) {
      v43 = *(__int64**)(a1 + 72);
      v44 = *v43;
      if (*v43 == 0) {
        goto LABEL_82;
      }
      v45 = *((float*)&v159_.v165 + 2);
      v46 = *((float*)&v159_.v165 + 1);
      if (*(_DWORD*)(v44 + 16) == *((_DWORD*)v43 + 2)) {
        v47 = *(_DWORD*)(v44 + 36);
        if (v47 != 0) {
          v48 = 0;
          v49 = 0x1.ca5dc00000000p+5f * *(float*)&v159_.v165;
          do {
            if ((int)v47 > (int)v48) {
              v50 = *(_QWORD*)(v44 + 40 + 8LL * (int)v48);
              if (v50 != 0) {
                *(float*)(v50 + 48) = v49;
                *(_BYTE*)(v50 + 128) = 1;
                v47 = *(_DWORD*)(v44 + 36);
              }
            }
            ++v48;
          } while (v48 < v47);
          v43 = *(__int64**)(a1 + 72);
          v44 = *v43;
          if (*v43 == 0) {
            goto LABEL_82;
          }
        }
      }
      if (*(_DWORD*)(v44 + 16) == *((_DWORD*)v43 + 2)) {
        v57 = *(_DWORD*)(v44 + 36);
        if (v57 != 0) {
          v58 = 0;
          v59 = v46 * 0x1.ca5dc00000000p+5f;
          do {
            if ((int)v57 > (int)v58) {
              v60 = *(_QWORD*)(v44 + 40 + 8LL * (int)v58);
              if (v60 != 0) {
                *(float*)(v60 + 52) = v59;
                *(_BYTE*)(v60 + 128) = 1;
                v57 = *(_DWORD*)(v44 + 36);
              }
            }
            ++v58;
          } while (v58 < v57);
          v43 = *(__int64**)(a1 + 72);
          v44 = *v43;
          if (*v43 == 0) {
            goto LABEL_82;
          }
        }
      }
      if (*(_DWORD*)(v44 + 16) != *((_DWORD*)v43 + 2)) {
        goto LABEL_82;
      }
      v61 = *(_DWORD*)(v44 + 36);
      v36 = 1;
      if (v61 != 0) {
        for (m = 0; m < v61; ++m) {
          if ((int)v61 > (int)m) {
            v63 = *(_QWORD*)(v44 + 40 + 8LL * (int)m);
            if (v63 != 0) {
              v64 = *(_OWORD*)(v63 + 48);
              *(_BYTE*)(v63 + 128) = 1;
              *((_QWORD*)&v64 + 1) =
                  COERCE_UNSIGNED_INT(v45 * 0x1.ca5dc00000000p+5f);
              *(_OWORD*)(v63 + 48) = v64;
              v61 = *(_DWORD*)(v44 + 36);
            }
          }
        }
      LABEL_82:
        v36 = 1;
      }
    }
    v65 = *(_QWORD*)(a1 + 16);
    if (v65 != 0) {
      v66 = std___1___shared_weak_count_lock(v65);
      if (v66 != 0) {
        v68 = *(_QWORD*)(a1 + 8);
        if (v68 != 0) {
          v69 = *(__int64**)(a1 + 72);
          v70 = *v69;
          if (*v69 != 0 && *(_DWORD*)(v70 + 16) == *((_DWORD*)v69 + 2)) {
            v71 = *(_DWORD*)(v70 + 36);
            if (v71 != 0) {
              PSEUDO_LOW_LANE64(v67, n64_u32, *(_DWORD*)(v68 + 112));
              v72 = 0;
              v73 = vdupq_lane_s32(v67, 0);
              LANES128(v73).n128_u32[3] = 0;
              do {
                if ((int)v71 > (int)v72) {
                  v74 = *(int32x4_t**)(v70 + 40 + 8LL * (int)v72);
                  if (v74 != nullptr) {
                    v74[2] = v73;
                    LANES128(v74[8]).n128_u8[0] = 1;
                    v71 = *(_DWORD*)(v70 + 36);
                  }
                }
                ++v72;
              } while (v72 < v71);
            }
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v75 = v66;
          (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
          std___1___shared_weak_count___release_weak(v75);
        }
      }
    }
    if (v36 == 0) {
      return;
    }
  LABEL_169:
    *(_BYTE*)(a1 + 88) = 1;
  }
}

#pragma GCC visibility pop
