#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 GameRoutine_108c540(int);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD, long double, long double, long double,
                            long double, double);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a60f8;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int64 GameData_21a60f0;
extern __int64 GameData_220f880;
extern __int64 GameData_220f888;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
float CharacterRotate_d52080(__int64, long double);
float GameRoutine_1a0ab30(float);
float GameRoutine_1a0ab40(long double, float);
long double GameRoutine_1a0a6a0(float);
void AnimCtrlModule_a78450(__int64*, _DWORD*);
void __attribute__((noreturn)) GameRoutine_8123d0();
void game_zview_10cae60(__int64 a1, char a2, double a3, long double a4,
                        long double a5, long double a6, double a7);

void game_zview_10cae60(__int64 a1, char a2, double a3, long double a4,
                        long double a5, long double a6, double a7)
{
  __int64 v7;
  __int64 v8;
  char v10;
  int v11;
  int v12;
  char v13;
  unsigned __int64 v14;
  __int128 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  float v21;
  float32x4_t v22;
  __int64 v23;
  long double v24;
  float v25;
  float v26;
  long double v27;
  float v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float* v33;
  float* v34;
  float v35;
  float v36;
  float32x4_t v37;
  float32x4_t* v38;
  float32x4_t* v39;
  float32x4_t* v40;
  float32x4_t v41;
  float v42;
  float32x4_t v43;
  float v44;
  float v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  int8x16_t v49;
  float v50;
  float v51;
  bool v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float v56;
  __int64 v57;
  int* v58;
  __int64 v59;
  __int64 v60;
  int v61;
  char v62;
  int v63;
  int v64;
  _BOOL4 v65;
  bool v66;
  int v67;
  float v68;
  int v69;
  char v70;
  int v71;
  int v72;
  int v73;
  __int64 v74;
  float v75;
  float v76;
  __int64 v77;
  float v78;
  long double v79;
  float v80;
  float32x2_t v81;
  float v82;
  float v83;
  float v84;
  __int64 v85;
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
  __int64 v96;
  __int64 v97;
  int v98;
  char v99;
  int v100;
  int v101;
  bool v102;
  bool v103;
  float v104;
  float v105;
  float* v106;
  float v107;
  float v108;
  float32x4_t v109;
  int8x16_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float v113;
  float v114;
  float v115;
  long double v116;
  long double v117;
  long double v118;
  double v119;
  long double v120;
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
  float v135;
  float v136;
  float v137;
  bool v138;
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
  float v149;
  int* v150;
  __int64 v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  __int64 v157;
  int v158;
  char v159;
  int v160;
  int v161;
  int v162;
  float32x4_t v163;
  float v164;
  float32x4_t v165;
  float32x4_t v166;
  __int64 v167;
  int8x16_t v168;
  float32x4_t v169;
  float32x4_t v170;
  float32x4_t v171;
  int8x16_t v172;
  float32x4_t v173;
  float32x4_t v174;
  float32x4_t v175;
  float32x4_t v176;
  float32x4_t v177;
  int8x16_t v178;
  float32x4_t v179;
  float32x4_t v180;
  float32x4_t v181;
  float32x4_t v182;
  __int128 v183;
  int v184;
  __int64 v189;
  __int64 v192;
  long double v195;
  long double v196;
  float32x4_t v197;
  struct {
    int8x16_t v198;
    char gap48_[8];
    __int64 v199;
  } v198_;

  v7 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 232LL);
  if (v7 == 0) {
    return;
  }
  v8 = *(_QWORD*)(v7 + 112);
  if (v8 == 0) {
    return;
  }
  v198_.v199 = v8;
  v10 = *(_BYTE*)(a1 + 132) | a2 & 1;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
      (((v11 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v12 = 2)
           : (v12 = 3),
       (v12 & v11) == 0)) {
    v13 = 1;
  }
  else {
    v13 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v14 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v14 + 172) == *(float*)(v14 + 168)) {
        v15 = COERCE_AS(__typeof__(v15),
                        (*(__n128(**)(unsigned __int64))(*(_QWORD*)(v14 + 160) +
                                                         16LL))(v14 + 160));
      }
      else {
        v15 = *(_OWORD*)(v14 + 208);
      }
      v13 = *((float*)&v15 + 3) == 0x1.0000000000000p+0f &&
            LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v14 + 160) + 16LL))(
                            v14 + 160, *((float*)&v15 + 3)))
                    .n128_f32[3] == 0x1.0000000000000p+0f;
    }
  }
  v16 = (unsigned __int8)(v10 | v13);
  v17 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL);
  v18 = *(_QWORD*)(v17 + 8);
  v19 = *(_QWORD*)(v17 + 16);
  v20 = !(*(float*)(v18 + 228) > 0x0.0p+0f) || v16 == 0;
  if (v20) {
    v21 = *(float*)(v18 + 228);
  }
  else {
    v21 = 0x1.9000000000000p+6f;
  }
  *(float*)&a4 = *(float*)(v17 + 544) * 0x1.99999a0000000p-1f;
  LANES128(v22).n128_u32[0] = 0;
  LANES128(v22).n128_u64[1] = 0;
  if ((*(_BYTE*)(v17 + 568) & 2) != 0 || (v23 = *(_QWORD*)(v18 + 240)) == 0) {
    a4 = *(long double*)(v19 + 560);
    LANES128(v22).n128_f32[1] = *(float*)(v17 + 544) * 0x1.99999a0000000p-1f;
    v24 = COERCE_LONG_DOUBLE(vaddq_f32(v22, *(float32x4_t*)&a4));
  }
  else {
    v24 = *(long double*)(v23 + 48);
  }
  v25 = *(float*)(*(_QWORD*)(v19 + 488) + 36LL);
  v26 = 0x1.0000000000000p+0f;
  v197 = *(float32x4_t*)&v24;
  if (*(_BYTE*)(a1 + 92) == 1) {
    v27 = GameRoutine_1a0a6a0(v25 - *(float*)(a1 + 88));
    v28 = 0x0.0p+0f;
    if (!(*(float*)&v27 < 0x0.0p+0f)) {
      v29 = *(float*)&v27 + 0x0.0p+0f;
    }
    else {
      v29 = (float)(*(float*)&v27 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
    }
    v30 = *(_QWORD*)(a1 + 96);
    v31 = *(_QWORD*)(a1 + 104);
    if (v29 > 0x1.921fb60000000p+1f) {
      v29 = v29 + -0x1.921fb60000000p+2f;
    }
    LANES128(v198_.v198).n128_f32[0] = v29;
    if ((unsigned __int64)(v31 - v30) >= 0x15) {
      v32 = v31 - 4;
      do {
        if (v31 != v30 + 4) {
          GameRoutine_1a0b940(v30, v30 + 4, v32 - v30);
          v30 = *(_QWORD*)(a1 + 96);
        }
        v31 = v32;
        *(_QWORD*)(a1 + 104) = v32;
        v32 -= 4;
      } while ((unsigned __int64)(v32 - v30 + 4) > 0x14);
    }
    AnimCtrlModule_a78450((__int64*)(a1 + 96), &v198_.v198);
    v33 = *(float**)(a1 + 96);
    v34 = *(float**)(a1 + 104);
    if (v33 != v34) {
      v28 = 0x0.0p+0f;
      do {
        v35 = *v33++;
        v28 = v28 + v35;
      } while (v33 != v34);
    }
    LODWORD(a6) = COERCE_UNSIGNED_INT((float)(0x1.8000000000000p+1f));
    *(float*)&v24 =
        (float)((float)(PSEUDO_UNFUSED(fabsf(v28) * 0x1.ca5dc20000000p+5f)) +
                -0x1.4000000000000p+2f) /
        0x1.9000000000000p+4f;
    LODWORD(a4) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
    if (!(*(float*)&v24 > 0x1.0000000000000p+0f)) {
      v36 = *(float*)&v24;
    }
    else {
      v36 = 0x1.0000000000000p+0f;
    }
    *(float*)&a5 = (float)(v36 * 0x1.8000000000000p+1f) + 0x1.0000000000000p+0f;
    if (!(*(float*)&v24 < 0x0.0p+0f)) {
      v26 = *(float*)&a5;
    }
    else {
      v26 = 0x1.0000000000000p+0f;
    }
  }
  *(float*)(a1 + 88) = v25;
  *(_BYTE*)(a1 + 92) = 1;
  if (*(_QWORD*)(a1 + 32) == *(_QWORD*)(a1 + 24)) {
    v56 = 0x0.0p+0f;
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130, v24, a4, a5, a6,
                                          a7) != 0) {
      v192 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v192;
      __cxa_guard_release(&GameData_21a6130);
    }
    v37 = COERCE_AS(float32x4_t, GameData_21a6120);
    v38 = *(float32x4_t**)(a1 + 24);
    v39 = *(float32x4_t**)(a1 + 32);
    if (v38 != v39) {
      v40 = *(float32x4_t**)(a1 + 24);
      do {
        v41 = *v40++;
        *((_QWORD*)&v24 + 1) = LANES128(v41).n128_u64[1];
        v37 = vaddq_f32(v37, v41);
      } while (v40 != v39);
    }
    v42 = 0x1.0000000000000p+0f;
    v43 = *(float32x4_t*)(a1 + 48);
    *(float*)&a7 = (float)(unsigned __int64)(v39 - v38);
    v44 = *(float*)&a7 / 0x1.4000000000000p+2f;
    if ((float)(*(float*)&a7 / 0x1.4000000000000p+2f) > 0x1.0000000000000p+0f) {
      v44 = 0x1.0000000000000p+0f;
    }
    v45 = sqrtf(v44);
    if (v21 > 0x0.0p+0f) {
      v46 = vmulq_n_f32(v37, 0x1.0000000000000p+0f / *(float*)&a7);
      LANES128(v46).n128_u32[3] = 0;
      v47 = vsubq_f32(v43, v46);
      v48 = vsubq_f32(v46, v43);
      LANES128(v47).n128_u32[1] =
          vmuls_lane_f32(0x1.0000000000000p-1f,
                         COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]), 1);
      v49 = vmulq_f32(v47, v47);
      LANES128(v49).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v49, v49, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
              .n64_u64[0];
      v50 = (float)(LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
                        .n64_f32[0] +
                    -0x1.47ae140000000p-7f) /
            0x1.70a3d80000000p-4f;
      if (!(v50 > 0x1.0000000000000p+0f)) {
        v51 = v50;
      }
      else {
        v51 = 0x1.0000000000000p+0f;
      }
      v52 = v50 < 0x0.0p+0f;
      a7 = 0x0.0p+0;
      if (!v52) {
        *(float*)&a7 = v51;
      }
      v53 = vmlaq_n_f32(v43, v48, *(float*)&a7);
      *(_QWORD*)(a1 + 48) = LANES128(v53).n128_u64[0];
      v54 = *(float32x4_t*)(a1 + 48);
      LANES128(v54).n128_u64[1] = LANES128(v53).n128_u32[2];
      v43 = v54;
      *(float32x4_t*)(a1 + 48) = v54;
    }
    v55 = vsubq_f32(v197, v43);
    a5 = COERCE_LONG_DOUBLE(vmulq_f32(v55, v55));
    a6 = COERCE_LONG_DOUBLE(vextq_s8(*(int8x16_t*)&a5, *(int8x16_t*)&a5, 8u));
    *(float32x2_t*)&a5 = vadd_f32(*(float32x2_t*)&a6, *(float32x2_t*)&a5);
    LODWORD(a6) = 1050253722;
    *(float*)&a5 = (float)(LANES64_OF(vsqrt_f32(vpadd_f32(*(float32x2_t*)&a5,
                                                          *(float32x2_t*)&a5)))
                               .n64_f32[0] +
                           -0x1.99999a0000000p-3f) /
                   0x1.3333340000000p-2f;
    if (!(*(float*)&a5 > 0x1.0000000000000p+0f)) {
      v42 = *(float*)&a5;
    }
    v52 = *(float*)&a5 < 0x0.0p+0f;
    *(_QWORD*)&a5 = 0;
    if (v52) {
      v42 = 0x0.0p+0f;
    }
    v56 = v45 * v42;
  }
  v58 = (int*)GameData_220f880;
  v57 = GameData_220f888;
  v59 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL);
  if (GameData_220f880 == GameData_220f888) {
    v65 = true;
  }
  else {
    v60 = GameData_220f880 + 4;
    do {
      v61 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v59 + 8) + 344LL) + 360LL);
      v62 = GameRoutine_108c540(v61);
      v63 = *(_DWORD*)(v60 - 4);
      if (v61 == 699171365) {
        v64 = 869686455;
      }
      else {
        v64 = 0;
      }
      if (v61 == -1841313413) {
        v64 = 387327021;
      }
      if ((v62 & 1) != 0) {
        v64 = v61;
      }
      v20 = v64 == v63;
      v65 = v64 != v63;
      v66 = v20 || v60 == v57;
      v60 += 4;
    } while (!v66);
    v58 = (int*)GameData_220f880;
    v57 = GameData_220f888;
    v59 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL);
  }
  v67 = *(unsigned __int8*)(a1 + 16);
  LODWORD(a4) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  if ((v65 & v67) != 0) {
    v68 = 0x1.99999a0000000p-2f;
  }
  else {
    v68 = 0x1.0000000000000p+0f;
  }
  if (v58 == (int*)v57) {
    *(_QWORD*)&v24 = 0;
    if ((v67 & 1) != 0) {
    LABEL_99:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60f8,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a60f8, v24, a4, a5, a6,
                                            a7) != 0) {
        GameData_21a60f0 = 0x3F8000003F800000LL;
        __cxa_guard_release(&GameData_21a60f8);
      }
      *(_QWORD*)&v24 = GameData_21a60f0;
    }
  }
  else {
    while (1) {
      v69 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v59 + 8) + 344LL) + 360LL);
      v70 = GameRoutine_108c540(v69);
      v72 = *v58++;
      v71 = v72;
      *(_QWORD*)&v24 = 0;
      if (v69 == 699171365) {
        v73 = 869686455;
      }
      else {
        v73 = 0;
      }
      if (v69 == -1841313413) {
        v73 = 387327021;
      }
      if ((v70 & 1) != 0) {
        v73 = v69;
      }
      if (v73 == v71) {
        break;
      }
      if (v58 == (int*)v57) {
        if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
          goto LABEL_99;
        }
        break;
      }
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60f8,
                            memory_order_acquire) &
       1) == 0) {
    v196 = v24;
    v184 = __cxa_guard_acquire(&GameData_21a60f8, v24, a4, a5, a6, a7);
    v24 = v196;
    if (v184 != 0) {
      GameData_21a60f0 = 0x3F8000003F800000LL;
      __cxa_guard_release(&GameData_21a60f8);
      v24 = v196;
    }
  }
  v74 = GameData_21a60f0;
  v75 = v56 * *(float*)&v24;
  v76 = vmuls_lane_f32(v56, *(float32x2_t*)&v24, 1);
  v77 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL) + 16LL) +
                   488LL);
  v78 = CharacterRotate_d52080(v77, v24);
  v79 = GameRoutine_1a0a6a0(*(float*)(v77 + 36) - v78);
  if (!(*(float*)&v79 < 0x0.0p+0f)) {
    v80 = *(float*)&v79 + 0x0.0p+0f;
  }
  else {
    v80 = (float)(*(float*)&v79 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
  }
  if (v80 > 0x1.921fb60000000p+1f) {
    v80 = v80 + -0x1.921fb60000000p+2f;
  }
  if (!(fabsf(v80) > 0x1.0000000000000p-23f)) {
    LANES64(v81).n64_u64[0] = v74;
  }
  else {
    LANES64(v81).n64_u32[0] = v74;
    if (*(float*)&v74 > 0x0.0p+0f) {
      LANES64(v81).n64_f32[0] = 0x0.0p+0f;
    }
    v82 = 0x1.99999a0000000p-2f;
    if (!(*((float*)&v74 + 1) > 0x1.99999a0000000p-2f)) {
      v82 = *((float*)&v74 + 1);
    }
    LANES64(v81).n64_f32[1] = v82;
  }
  v83 = v75 * LANES64(v81).n64_f32[0];
  v84 = vmuls_lane_f32(v76, v81, 1);
  v85 = *(_QWORD*)(a1 + 80);
  v86 = v21 / v68;
  v87 = *((float*)&v85 + 1);
  v88 = v83 - *(float*)&v85;
  v89 = v84 - *((float*)&v85 + 1);
  if ((float)(v83 - *(float*)&v85) != 0x0.0p+0f || v89 != 0x0.0p+0f) {
    v90 = sqrtf((float)(PSEUDO_UNFUSED(v89 * v89)) + (float)(v88 * v88));
    v88 = v88 / v90;
    v89 = v89 / v90;
  }
  v91 = v89;
  v92 = fabsf(v86 * fabsf(v88));
  if (*(float*)&v85 > v83) {
    *(float*)&v85 = *(float*)&v85 - v92;
    if (!(*(float*)&v85 < v83)) {
      goto LABEL_123;
    }
  LABEL_122:
    *(float*)&v85 = v83;
    goto LABEL_123;
  }
  if (*(float*)&v85 < v83) {
    *(float*)&v85 = *(float*)&v85 + v92;
    if (*(float*)&v85 > v83) {
      goto LABEL_122;
    }
  }
LABEL_123:
  v93 = fabsf(v86 * fabsf(v91));
  if (*((float*)&v85 + 1) > v84) {
    v87 = *((float*)&v85 + 1) - v93;
    if (!((float)(*((float*)&v85 + 1) - v93) < v84)) {
      goto LABEL_129;
    }
  LABEL_128:
    v87 = v84;
    goto LABEL_129;
  }
  if (*((float*)&v85 + 1) < v84) {
    v87 = *((float*)&v85 + 1) + v93;
    if ((float)(*((float*)&v85 + 1) + v93) > v84) {
      goto LABEL_128;
    }
  }
LABEL_129:
  *(_DWORD*)(a1 + 80) = v85;
  *(float*)(a1 + 84) = v87;
  v94 = 0x0.0p+0f;
  if ((float)(LANES64_OF(
                  vmul_f32(*(float32x2_t*)(a1 + 80), *(float32x2_t*)(a1 + 80)))
                  .n64_f32[1] +
              (float)(COERCE_FLOAT(*(_QWORD*)(a1 + 80)) *
                      COERCE_FLOAT(*(_QWORD*)(a1 + 80)))) > 0x0.0p+0f) {
    v95 = GameData_220f888;
    if (GameData_220f880 == GameData_220f888) {
      v102 = true;
    }
    else {
      v96 = GameData_220f880 + 4;
      v97 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL);
      do {
        v98 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v97 + 8) + 344LL) + 360LL);
        v99 = GameRoutine_108c540(v98);
        v100 = *(_DWORD*)(v96 - 4);
        if (v98 == 699171365) {
          v101 = 869686455;
        }
        else {
          v101 = 0;
        }
        if (v98 == -1841313413) {
          v101 = 387327021;
        }
        if ((v99 & 1) != 0) {
          v101 = v98;
        }
        v20 = v101 == v100;
        v102 = v101 != v100;
        v103 = v20 || v96 == v95;
        v96 += 4;
      } while (!v103);
    }
    v94 = 0x0.0p+0f;
    if ((v102 & *(_BYTE*)(a1 + 16)) != 0) {
      v94 = 0x1.0000000000000p+0f;
    }
  }
  if ((*(_BYTE*)(a1 + 68) & 1) != 0 ||
      (v104 = 0x1.0000000000000p+0f,
       (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL) + 16LL) +
                  128LL) &
        0x80) != 0)) {
    v104 = 0x1.99999a0000000p-2f;
  }
  if (*(_BYTE*)(a1 + 69) != 0) {
    v104 = 0x0.0p+0f;
  }
  v105 = *(float*)(a1 + 64) * (float)(v94 * v104);
  if (!(v105 > 0x0.0p+0f)) {
    v106 = (float*)(a1 + 120);
    if (*(_BYTE*)(a1 + 124) == 0) {
      goto LABEL_165;
    }
  }
  else {
    if ((*(_BYTE*)(a1 + 124) & 1) == 0) {
      *(_DWORD*)(a1 + 120) = 0;
      *(_BYTE*)(a1 + 124) = 1;
    }
    v106 = (float*)(a1 + 120);
  }
  v107 = *v106;
  v108 = fabsf(v86);
  if (!(*v106 > v105)) {
    if (!(*v106 < v105)) {
      goto LABEL_164;
    }
    v107 = v108 + v107;
    if (!(v107 > v105)) {
      goto LABEL_164;
    }
  }
  else {
    v107 = v107 - v108;
    if (!(v107 < v105)) {
      goto LABEL_164;
    }
  }
  v107 = v105;
LABEL_164:
  *v106 = v107;
LABEL_165:
  v109 = vsubq_f32(*(float32x4_t*)(a1 + 48), v197);
  v110 = vmulq_f32(v109, v109);
  LANES128(v110).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v110, v110, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
          .n64_u64[0];
  LANES128(v110).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v110).n128_f32[0] == 0x0.0p+0f) {
    v114 = 0x0.0p+0f;
    v115 = 0x1.921fb60000000p+1f;
  }
  else {
    LANES128(v110).n128_u64[1] = LANES128(v110).n128_u64[0];
    v111 = vrsqrteq_f32(v110);
    v112 = vmulq_f32(v111, vrsqrtsq_f32(v111, vmulq_f32(v110, v111)));
    v195 = COERCE_LONG_DOUBLE(vbicq_s8(
        vmulq_f32(v109,
                  vmulq_f32(v112, vrsqrtsq_f32(v112, vmulq_f32(v110, v112)))),
        vceqzq_f32(v110)));
    v113 = GameRoutine_1a0ab40(v195, *((float*)&v195 + 2)) - v25;
    v114 = GameRoutine_1a0ab30(-*((float*)&v195 + 1));
    v115 = v113 + 0x1.921fb60000000p+1f;
  }
  v120 = GameRoutine_1a0a6a0(v115);
  *(float*)&v120 = *(float*)&v120 + -0x1.921fb60000000p+1f;
  if (*(float*)&v120 < -0x1.921fb60000000p+1f) {
    *(float*)&v120 = *(float*)&v120 + 0x1.921fb60000000p+2f;
  }
  v121 = *(float*)&v120 * 0x1.ca5dc20000000p+5f;
  v122 =
      (float)((float)(PSEUDO_UNFUSED(*(float*)&v120 * 0x1.ca5dc20000000p+5f)) +
              -0x1.6800000000000p+7f) /
      -0x1.4000000000000p+5f;
  v123 = 0x1.0000000000000p+0f;
  if (!(v122 > 0x1.0000000000000p+0f)) {
    v124 = (float)((float)(PSEUDO_UNFUSED(*(float*)&v120 *
                                          0x1.ca5dc20000000p+5f)) +
                   -0x1.6800000000000p+7f) /
           -0x1.4000000000000p+5f;
  }
  else {
    v124 = 0x1.0000000000000p+0f;
  }
  if (!(v122 < 0x0.0p+0f)) {
    v125 = v124;
  }
  else {
    v125 = 0x0.0p+0f;
  }
  v126 = *(float*)&v120 * v125;
  v127 = (float)(v121 + 0x1.6800000000000p+7f) / 0x1.4000000000000p+5f;
  if (!(v127 > 0x1.0000000000000p+0f)) {
    v123 = v127;
  }
  if (!(v127 < 0x0.0p+0f)) {
    v128 = v123;
  }
  else {
    v128 = 0x0.0p+0f;
  }
  v129 = v128 * v126;
  v130 = (float)(v21 * 0x1.e000000000000p+6f) * 0x1.1df46a0000000p-6f;
  v131 = *(float*)(a1 + 72);
  v132 = fabsf(v130 * v26);
  if (v131 > v129) {
    v131 = v131 - v132;
    if (!(v131 < v129)) {
      goto LABEL_187;
    }
  LABEL_186:
    v131 = v129;
    goto LABEL_187;
  }
  if (v131 < v129) {
    v131 = v132 + v131;
    if (v131 > v129) {
      goto LABEL_186;
    }
  }
LABEL_187:
  v133 = *(float*)(a1 + 76);
  v134 = fabsf(v130);
  if (!(v133 > v114)) {
    if (!(v133 < v114)) {
      goto LABEL_193;
    }
    v133 = v134 + v133;
    if (!(v133 > v114)) {
      goto LABEL_193;
    }
    goto LABEL_192;
  }
  v133 = v133 - v134;
  if (v133 < v114) {
  LABEL_192:
    v133 = v114;
  }
LABEL_193:
  *(_QWORD*)&v117 = *(_QWORD*)(a1 + 80);
  v135 = (float)(PSEUDO_UNFUSED(0x1.921fb60000000p+1f * *(float*)&v117)) +
         (float)(roundf((float)(0x1.921fb60000000p+1f * *(float*)&v117) *
                        0x1.45f3060000000p-3f) *
                 -0x1.921fb60000000p+2f);
  v136 = -0x1.921fb60000000p+1f - v135;
  LODWORD(v117) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
  if (v135 < -0x1.921fb60000000p+0f) {
    v137 = -0x1.0000000000000p+0f;
  }
  else {
    v137 = 0x1.0000000000000p+0f;
  }
  if (!(v135 < -0x1.921fb60000000p+0f)) {
    v136 = v135;
  }
  v138 = !(v135 > 0x1.921fb60000000p+0f);
  if (v135 > 0x1.921fb60000000p+0f) {
    v139 = 0x1.921fb60000000p+1f - v135;
  }
  else {
    v139 = v136;
  }
  if (v138) {
    v140 = v137;
  }
  else {
    v140 = -0x1.0000000000000p+0f;
  }
  v141 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v142 = v139 * v139;
  v143 = *((float*)GameData_212c188 + 1);
  v145 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v144 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v146 =
      v140 *
      (float)((float)((float)-(
                          float)(v141 -
                                 (float)((float)(v144 +
                                                 (float)((float)-(
                                                             float)(v145 -
                                                                    (float)((float)(v143 -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v142)) *
                                                                            v142)) *
                                                         v142)) *
                                         v142)) *
                      v142) +
              0x1.0000000000000p+0f);
  v147 = fabsf(v146);
  if (!(v146 < 0x0.0p+0f)) {
    v148 = -0x1.0000000000000p+0f;
  }
  else {
    v148 = 0x1.0000000000000p+0f;
  }
  *(float*)&v119 = (float)((float)(v147 * 0x1.0000000000000p-1f) * v148) +
                   0x1.0000000000000p-1f;
  v149 = (float)(PSEUDO_UNFUSED(COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 80))) *
                                0x1.921fb60000000p+1f)) +
         (float)(roundf((float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 80))) *
                                0x1.921fb60000000p+1f) *
                        0x1.45f3060000000p-3f) *
                 -0x1.921fb60000000p+2f);
  if (!(v149 > 0x1.921fb60000000p+0f)) {
    if (!(v149 < -0x1.921fb60000000p+0f)) {
      LODWORD(v117) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
    }
    else {
      v149 = -0x1.921fb60000000p+1f - v149;
      LODWORD(v117) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
    }
  }
  else {
    v149 = 0x1.921fb60000000p+1f - v149;
  }
  v150 = (int*)GameData_220f880;
  v151 = GameData_220f888;
  v152 =
      *(float*)&v117 *
      (float)((float)((float)((float)((float)(v144 +
                                              (float)((float)((float)((float)(v143 +
                                                                              (float)((float)-*(
                                                                                          float*)
                                                                                          GameData_212c188 *
                                                                                      (float)(v149 *
                                                                                              v149))) *
                                                                      (float)(v149 *
                                                                              v149)) -
                                                              v145) *
                                                      (float)(v149 * v149))) *
                                      (float)(v149 * v149)) -
                              v141) *
                      (float)(v149 * v149)) +
              0x1.0000000000000p+0f);
  v153 = fabsf(v152);
  v52 = v152 < 0x0.0p+0f;
  v154 = -0x1.0000000000000p+0f;
  v155 = v153 * 0x1.0000000000000p-1f;
  if (v52) {
    v154 = 0x1.0000000000000p+0f;
  }
  v156 = (float)(v155 * v154) + 0x1.0000000000000p-1f;
  *(float*)&v118 = -(float)(*(float*)&v119 * 0x1.921fb60000000p+0f);
  *(float*)(a1 + 72) = fminf(fmaxf(v131, *(float*)&v118),
                             *(float*)&v119 * 0x1.921fb60000000p+0f);
  *(float*)(a1 + 76) =
      fminf(fmaxf(v133, -(float)(v156 * 0x1.0c15240000000p+0f)),
            v156 * 0x1.0c15240000000p+0f);
  if (v150 == (int*)v151) {
  LABEL_225:
    LODWORD(v117) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
    if (*(_BYTE*)(a1 + 16) == 1) {
      v163 = vsubq_f32(v197, *(float32x4_t*)(a1 + 48));
      v120 = COERCE_LONG_DOUBLE(vmulq_f32(v163, v163));
      v116 = COERCE_LONG_DOUBLE(
          vextq_s8(*(int8x16_t*)&v120, *(int8x16_t*)&v120, 8u));
      *(float32x2_t*)&v120 =
          vadd_f32(*(float32x2_t*)&v116, *(float32x2_t*)&v120);
      *(float32x2_t*)&v120 =
          vpadd_f32(*(float32x2_t*)&v120, *(float32x2_t*)&v120);
      *(float32x2_t*)&v117 = vsqrt_f32(*(float32x2_t*)&v120);
    }
  }
  else {
    v157 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL);
    while (1) {
      v158 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v157 + 8) + 344LL) + 360LL);
      v159 = GameRoutine_108c540(v158);
      v161 = *v150++;
      v160 = v161;
      if (v158 == 699171365) {
        v162 = 869686455;
      }
      else {
        v162 = 0;
      }
      if (v158 == -1841313413) {
        v162 = 387327021;
      }
      if ((v159 & 1) != 0) {
        v162 = v158;
      }
      if (v162 == v160) {
        break;
      }
      if (v150 == (int*)v151) {
        goto LABEL_225;
      }
    }
    LODWORD(v117) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  }
  LODWORD(v120) = *(_DWORD*)(a1 + 128);
  v164 = fabsf(v21 * vabds_f32(*(float*)&v117, *(float*)&v120));
  if (!(*(float*)&v120 > *(float*)&v117)) {
    if (!(*(float*)&v120 < *(float*)&v117)) {
      goto LABEL_234;
    }
    *(float*)&v120 = *(float*)&v120 + v164;
    if (!(*(float*)&v120 > *(float*)&v117)) {
      goto LABEL_234;
    }
  }
  else {
    *(float*)&v120 = *(float*)&v120 - v164;
    if (!(*(float*)&v120 < *(float*)&v117)) {
      goto LABEL_234;
    }
  }
  LODWORD(v120) = LODWORD(v117);
LABEL_234:
  LODWORD(v116) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  if (*(float*)&v120 < 0x1.0000000000000p+0f) {
    *(float*)&v120 = 0x1.0000000000000p+0f;
  }
  *(_DWORD*)(a1 + 128) = LODWORD(v120);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130, v120, v116, v117,
                                        v118, v119) != 0) {
    v189 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v189;
    __cxa_guard_release(&GameData_21a6130);
  }
  math_Quat_FromYawPitchRoll((void*)(&v198_.v198), v25 + *(float*)(a1 + 72),
                             *(float*)(a1 + 76), 0x0.0p+0f);
  if (*(_BYTE*)(a1 + 124) == 1) {
    LANES128(v166).n128_u64[0] = 0;
    v167 = v198_.v199;
    LANES128(v168).n128_u64[0] = 0;
    LANES128(v169).n128_u64[0] = LANES128(v198_.v198).n128_u64[0];
    LANES128(v170).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v198_.v198, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v171).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v198_.v198, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v172 = vmulq_f32(v198_.v198, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v168).n128_u64[1] = *(unsigned int*)(a1 + 128);
    LANES128(v169).n128_u64[1] = LANES128(v170).n128_u64[0];
    LANES128(v173).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v174).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v170).n128_u64[1] = LANES128(v171).n128_u64[0];
    LANES128(v171).n128_u64[1] = LANES128(v198_.v198).n128_u64[0];
    LANES128(v175).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v198_.v198, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v176).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v168, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v177).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v168, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v174).n128_i8[8] =
        vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v165).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v168).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v168, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v175).n128_u64[1] = LANES128(v175).n128_u64[0];
    LANES128(v173).n128_u64[1] = LANES128(v176).n128_u64[0];
    LANES128(v176).n128_u64[1] = LANES128(v177).n128_u64[0];
    *(int32x2_t*)&LANES128(v177).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v172).n128_u64[0]), 1);
    LANES128(v168).n128_u64[1] = LANES128(v168).n128_u64[0];
    *(int8x8_t*)&LANES128(v166).n128_i8[8] =
        vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v178 =
        vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v172, v168),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v166, v173)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v177, v165)),
                  v174, v176);
    LANES128(v179).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v178, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v180).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v178, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v179).n128_i8[8] =
        vqtbl1_s8(v178, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    *(int32x2_t*)&LANES128(v180).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v178).n128_u64[0]), 1);
    v181 = vmulq_f32(v171, v180);
    LANES128(v171).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v178, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v171).n128_i8[8] =
        vqtbl1_s8(v178, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v182 = vaddq_f32(
        v197,
        vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v178, v175),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v169, v171)),
                            COERCE_AS(float32x4_t, GameData_1a83800), v181),
                  v179, v170));
    PSEUDO_LOW_LANE128(v181, n128_u32, *(_DWORD*)(a1 + 120));
    *(_DWORD*)(v198_.v199 + 164) = 1065353216;
    *(_QWORD*)(v167 + 128) = LANES128(v182).n128_u64[0];
    *(_DWORD*)(v167 + 156) = LANES128(v181).n128_u32[0];
    *(_DWORD*)(v167 + 160) = LANES128(v181).n128_u32[0];
    v183 = *(_OWORD*)(v167 + 128);
    *((_QWORD*)&v183 + 1) = LANES128(v182).n128_u32[2];
    *(_OWORD*)(v167 + 128) = v183;
    if ((*(_BYTE*)(a1 + 124) & 1) == 0) {
      GameRoutine_8123d0();
    }
    if (!(*v106 > 0x0.0p+0f)) {
      *(_BYTE*)(a1 + 124) = 0;
    }
  }
  *(_BYTE*)(a1 + 132) = 0;
}

#pragma GCC visibility pop
