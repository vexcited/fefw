#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_b3f6c0(_QWORD*, const char*);
__int64* GameRoutine_b3f800(_QWORD*, const char*);
__int64 game_14a1b00(__int64*, float);
__int64 game_14a3920(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int128 GameData_1a82c50;
extern __int64* game_g_frame_clock_ptr[3];
float GameRoutine_1a0ab40(float, float);
float32x4_t g3d_a6c520(float32x4_t*, __int64, int32x4_t*, char);
void gfx_render_18ddc20(__int64* a1);
void gfx_render_18de700(__int64* a1, float a2);

void gfx_render_18ddc20(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  float32x4_t v6;
  float32x4_t* v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  float32x4_t v14;
  __int128 v15;
  __int128 v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  __int128 v21;
  float32x4_t v22;
  __n128 v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  _BYTE* v39;
  float v40;
  int32x2_t v41;
  float v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int128 v46;
  __int64 v47;
  __int64 v48;
  float32x2_t v49;
  float v50;
  __int64 v51;
  float32x2_t v52;
  float32x2_t v53;
  float v54;
  float32x2_t v55;
  unsigned __int64 v56;
  int32x4_t v57;
  float32x2_t v58;
  _BYTE* v59;
  float v60;
  __int64** v61;
  float32x4_t v62;
  float v63;
  bool v64;
  bool v65;
  __int64* v66;
  __int64 v67;
  char v68;
  __int64* v69;
  __int64 v70;
  unsigned int v71;
  unsigned int i;
  float32x4_t* v73;
  __int64* v74;
  __int64 v75;
  unsigned int v76;
  unsigned int j;
  int32x4_t* v78;
  unsigned int v79;
  unsigned int k;
  int32x4_t* v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64* v94;
  __int64 v95;
  __int64* v96;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  float32x4_t v102;
  float32x4_t v103;
  __int64 v104;
  __int64 v105;
  char v106;
  __int64 v107;
  __int64 v108;
  unsigned int v109;
  unsigned int m;
  float32x4_t* v111;
  __int64* v112;
  __int64 v113;
  unsigned int v114;
  unsigned int v115;
  __int64 v116;
  unsigned int v117;
  unsigned int v118;
  __int64 v119;
  int32x2_t v120;
  float v121;
  float32x4_t v122;
  float v123;
  int32x4_t v124;
  float32x4_t v125;
  int32x4_t v126;
  int32x4_t v127;
  unsigned __int64 v128;
  __int128 v129;
  int32x4_t v130;
  __int128 v131;
  int32x4_t v132;
  float32x4_t v133;
  float v134;
  float32x4_t v135;
  int8x16_t v136;
  __int64 v137;
  int v138;
  __int128 v139;
  float32x4_t v140;
  int32x4_t v141[4];
  _QWORD v142[8];
  float32x4_t v143;

  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v2 = a1[1];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v2", "=w"));
    if (v3 != 0) {
      v4 = *a1;
    }
    else {
      v4 = 0;
    }
  }
  else {
    v3 = 0;
    v4 = 0;
  }
  v5 = GameRoutine_b3f6c0((_QWORD*)(*(_QWORD*)(v4 + 288) + 592LL), "Sun"),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v6 = *((float32x4_t*)v5 + 3);
  v7 = (float32x4_t*)v5;
  v8 = vmulq_f32(v6, v6);
  LANES128(v8).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  LANES128(v8).n128_u64[1] = LANES128(v8).n128_u64[0];
  v9 = vrsqrteq_f32(v8);
  v10 = vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v8, v9)));
  v136 = vbicq_s8(
      vmulq_f32(v6, vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v8, v10)))),
      vceqzq_f32(v8));
  if (*(int*)v4 < 1) {
    v13 = 0;
    v12 = 0;
  }
  else {
    v11 = *(__int64**)(v4 + 112);
    v13 = *v11;
    v12 = v11[1];
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  *(__n128*)v142 =
      ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)v13 + 16LL))(v13),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v2", "=w"));
  *(float32x4_t*)&v142[2] = v14;
  *(_OWORD*)&v142[4] = v15;
  *(_OWORD*)&v142[6] = v16;
  v129 = v16;
  v131 = v15;
  v133 = v14;
  *(__n128*)&v17 =
      ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)v13 + 24LL))(v13),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v122 = v18;
  v124 = v19;
  v126 = v20;
  v127 = v17;
  v141[0] = v17;
  v141[1] = v18;
  v141[2] = v20;
  v141[3] = v19;
  v23 = ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)v13 + 40LL))(v13),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v21 = GameData_1a82c50;
  v22 =
      vaddq_f32(*(float32x4_t*)&v23, vmulq_f32(v136, vdupq_n_s32(0xC4610000)));
  *(float*)&v23 =
      *((float*)&v129 + 2) +
      (float)((float)(vmuls_lane_f32(
                          LANES128(v133).n128_f32[2],
                          COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                          1) +
                      (float)(LANES128(v22).n128_f32[0] * *(float*)&v142[1])) +
              (float)(LANES128(v22).n128_f32[2] * *((float*)&v131 + 2)));
  if (*(float*)&v23 < 0x0.0p+0f) {
    v24 = *(float*)&v129 +
          (float)((float)(vmuls_lane_f32(
                              LANES128(v133).n128_f32[0],
                              COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                              1) +
                          (float)(*(float*)v142 * LANES128(v22).n128_f32[0])) +
                  (float)(*(float*)&v131 * LANES128(v22).n128_f32[2]));
    v25 = *((float*)&v129 + 1) +
          (float)((float)(LANES128_OF(vmulq_f32(v133, v22)).n128_f32[1] +
                          (float)(LANES128(v22).n128_f32[0] *
                                  *((float*)v142 + 1))) +
                  (float)(LANES128(v22).n128_f32[2] * *((float*)&v131 + 1)));
    v26 = LANES128(v124).n128_f32[3] +
          (float)((float)(vmuls_lane_f32(v25, v122, 3) +
                          (float)(v24 * LANES128(v127).n128_f32[3])) +
                  (float)(*(float*)&v23 * LANES128(v126).n128_f32[3]));
    if (v26 != 0x0.0p+0f) {
      v27 = 0x1.0000000000000p+0f / v26;
      v28 = (float)(vmuls_lane_f32(
                        v25, COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0]),
                        1) +
                    (float)(v24 * LANES128(v127).n128_f32[1])) +
            (float)(*(float*)&v23 * LANES128(v126).n128_f32[1]);
      v29 = LANES128(v124).n128_f32[0] +
            (float)((float)((float)(PSEUDO_UNFUSED(
                                v25 * LANES128(v122).n128_f32[0])) +
                            (float)(LANES128(v127).n128_f32[0] * v24)) +
                    (float)(LANES128(v126).n128_f32[0] * *(float*)&v23));
      *(float*)&v23 =
          (float)(LANES128(v124).n128_f32[2] +
                  (float)((float)(vmuls_lane_f32(v25, v122, 2) +
                                  (float)(v24 * LANES128(v127).n128_f32[2])) +
                          (float)(*(float*)&v23 *
                                  LANES128(v126).n128_f32[2]))) *
          v27;
      v30 = -(float)(v27 * (float)(LANES128(v124).n128_f32[1] + v28));
      *(float*)&v21 = (float)((float)(v29 * v27) * 0x1.e000000000000p+9f) +
                      0x1.e000000000000p+9f;
      *((float*)&v21 + 1) =
          (float)(v30 * 0x1.0e00000000000p+9f) + 0x1.0e00000000000p+9f;
      DWORD2(v21) = LODWORD(v23);
    }
  }
  v31 = *((float*)&v21 + 2);
  if (*((float*)&v21 + 2) >= 0x0.0p+0f) {
    {
      __typeof__(v23) z_ = (__typeof__(v23)){0};
      LODWORD(z_) = LANES128(v136).n128_u32[1];
      v23 = z_;
    }
    if (LANES128(v136).n128_f32[1] <= 0x0.0p+0f) {
      v23 = COERCE_AS(__n128, vmulq_f32(v7[5], v7[5]));
      *(float32x2_t*)&v23 = vadd_f32(
          COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v23,
                                                      *(int8x16_t*)&v23, 8u))
                                     .n128_u64[0]),
          *(float32x2_t*)&v23);
      *(float32x2_t*)&v23 = vpadd_f32(*(float32x2_t*)&v23, *(float32x2_t*)&v23);
      if (*(float*)&v23 > 0x0.0p+0f) {
        if (v3 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                    memory_order_relaxed);
        }
        v32 = *(_DWORD*)(v4 + 304);
        v33 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
        if (v32 == -1) {
          v36 = 0;
          v35 = *(_QWORD*)(v33 + 48);
          v37 = *(_QWORD*)(v33 + 56);
          if (v37 == 0) {
            goto LABEL_24;
          }
        }
        else {
          v34 = v33 + 1560LL * v32;
          v35 = *(_QWORD*)(v34 + 1752);
          v36 = *(_QWORD*)(v34 + 1760);
          if (v36 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                      memory_order_relaxed);
          }
          v37 = v36;
          if (v35 != 0) {
          LABEL_27:
            v38 = *((float*)&v21 + 1);
            v39 = *(_BYTE**)(*(_QWORD*)(v35 + 8) + 272LL);
            if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v138 = v21;
              (*(void (**)(__int64, __n128))(*(_QWORD*)v37 + 16LL))(v37, v23),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              std___1___shared_weak_count___release_weak(v37),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              {
                __typeof__(v21) z_ = (__typeof__(v21)){0};
                LODWORD(z_) = v138;
                v21 = z_;
              }
            }
            v40 = *(float*)&v21 / 0x1.e000000000000p+10f;
            LANES128(v22).n128_f32[0] = v38 / 0x1.0e00000000000p+10f;
            v123 = *(float*)&v21 / 0x1.e000000000000p+10f;
            v125 = v22;
            if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, __n128))(*(_QWORD*)v3 + 16LL))(v3, v23),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              std___1___shared_weak_count___release_weak(v3),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              v40 = v123;
              LANES128(v22).n128_u32[0] = LANES128(v125).n128_u32[0];
            }
            v42 =
                GameRoutine_1a0ab40(-(float)((float)(LANES128(v22).n128_f32[0] *
                                                     0x1.0000000000000p+1f) +
                                             -0x1.0000000000000p+0f),
                                    (float)(v40 * 0x1.0000000000000p+1f) +
                                        -0x1.0000000000000p+0f) *
                0x1.ca5dc00000000p+5f,
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v2", "=w"));
            v44 = 200;
            if (v39[168] != 0) {
              v44 = 164;
            }
            {
              __typeof__(v43) z_ = (__typeof__(v43)){0};
              LODWORD(z_) = *(_DWORD*)&v39[v44];
              v43 = z_;
            }
            LANES64(v120).n64_u64[0] = v43;
            v121 = v42;
            v45 = a1[3] - a1[2];
            if ((int)(v45 >> 4) > 0) {
              *((_QWORD*)&v46 + 1) = LANES128(v125).n128_u64[1];
              v47 = (v45 >> 4) & 0x7FFFFFFF;
              v48 = 0;
              LANES64(v49).n64_u64[0] =
                  LANES64_OF(
                      vpadd_f32(COERCE_AS(float32x2_t, 0x3E8000003E800000LL),
                                COERCE_AS(float32x2_t, 0x3E8000003E800000LL)))
                      .n64_u64[0];
              v50 = 0x1.0000000000000p+0f / (float)(int)((v45 >> 4) - 1);
              v51 = 280;
              if (v39[248] != 0) {
                v51 = 244;
              }
              LANES64(v52).n64_u64[0] =
                  LANES64_OF(
                      vadd_f32(COERCE_AS(float32x2_t,
                                         __PAIR64__(LANES128(v125).n128_u32[0],
                                                    LODWORD(v123))),
                               COERCE_AS(float32x2_t, 0xBF000000BF000000LL)))
                      .n64_u64[0];
              LANES64(v53).n64_u64[0] =
                  LANES64_OF(vmul_f32(v52, v52)).n64_u64[0];
              v54 = fmaxf(
                  LANES64_OF(vdiv_f32(vsub_f32(v49, vpadd_f32(v53, v53)), v49))
                      .n64_f32[0],
                  0x0.0p+0f);
              DWORDn(v56, sizeof(v56) / 4 - 1) = 0;
              LANES64(v55).n64_u64[0] =
                  LANES64_OF(
                      vsub_f32(
                          vadd_f32(
                              vsub_f32(
                                  COERCE_AS(float32x2_t, 0x3F0000003F000000LL),
                                  COERCE_AS(
                                      float32x2_t,
                                      __PAIR64__(LANES128(v125).n128_u32[0],
                                                 LODWORD(v123)))),
                              COERCE_AS(float32x2_t, 0x3F0000003F000000LL)),
                          COERCE_AS(float32x2_t,
                                    __PAIR64__(LANES128(v125).n128_u32[0],
                                               LODWORD(v123)))))
                      .n64_u64[0];
              PSEUDO_LOW_LANE64(
                  v41, n64_f32,
                  *(float*)&v39[v51] +
                      (float)((float)(*(float*)&v43 - *(float*)&v39[v51]) *
                              v54));
              *(float*)&v56 = 0x1.0000000000000p+0f - v31;
              *(_QWORD*)&v46 = 0;
              v57 = vdupq_lane_s32(v41, 0);
              LANES128(v57).n128_u32[3] = 0;
              v128 = v56;
              v132 = v57;
              LANES128(v57).n128_u64[0] = 0;
              LANES128(v57).n128_u64[1] = LODWORD(v42);
              v130 = v57;
              while (1) {
                v139 = v46;
                LANES64(v58).n64_u64[0] =
                    LANES64_OF(
                        vmla_n_f32(
                            COERCE_AS(float32x2_t,
                                      __PAIR64__(LANES128(v125).n128_u32[0],
                                                 LODWORD(v123))),
                            v55, *(float*)&v46))
                        .n64_u64[0];
                if (v39[90] != 0) {
                  v59 = v39 + 89;
                }
                else {
                  v59 = v39 + 120;
                }
                if ((*v59 & 1) != 0) {
                  v60 = v54;
                }
                else {
                  v60 = 0x1.0000000000000p+0f;
                }
                v61 = (__int64**)(a1[2] + 16 * v48);
                v63 = LANES64(v58).n64_f32[1];
                LANES128(v62).n128_u32[0] = LANES64(v58).n64_u32[0];
                v134 = LANES64(v58).n64_f32[0];
                LANES128(v62).n128_f32[1] =
                    0x1.0000000000000p+0f - LANES64(v58).n64_f32[1];
                LANES128(v62).n128_u64[1] = v56;
                v143 = v62;
                v135 = g3d_a6c520(&v143, (__int64)v142, v141, 1),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v64 = v134 < 0x0.0p+0f | v134 > 0x1.0000000000000p+0f;
                if (v64 || v63 < 0x0.0p+0f ||
                    (v60 > 0x0.0p+0f ? (v65 = v63 > 0x1.0000000000000p+0f)
                                     : (v65 = true),
                     v65)) {
                  v66 = *v61;
                  v67 = **v61;
                  if (v67 == 0 || *(_DWORD*)(v67 + 16) != *((_DWORD*)v66 + 2)) {
                    goto LABEL_63;
                  }
                  v68 = 0;
                }
                else {
                  v66 = *v61;
                  v67 = **v61;
                  if (v67 == 0 || *(_DWORD*)(v67 + 16) != *((_DWORD*)v66 + 2)) {
                    goto LABEL_63;
                  }
                  v68 = 1;
                }
                *(_BYTE*)(v67 + 33) = v68;
                v66 = *v61;
              LABEL_63:
                game_14a1b00(v66, v60),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                v69 = *v61;
                v70 = **v61;
                if (v70 != 0 && *(_DWORD*)(v70 + 16) == *((_DWORD*)v69 + 2)) {
                  v71 = *(_DWORD*)(v70 + 36);
                  if (v71 != 0) {
                    for (i = 0; i < v71; ++i) {
                      if ((int)v71 > (int)i) {
                        v73 = *(float32x4_t**)(v70 + 40 + 8LL * (int)i);
                        if (v73 != nullptr) {
                          v73[1] = v135;
                          LANES128(v73[8]).n128_u8[0] = 1;
                          v71 = *(_DWORD*)(v70 + 36);
                        }
                      }
                    }
                  }
                }
                game_14a3920((__int64)v69),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                v74 = *v61;
                v56 = v128;
                v46 = v139;
                v75 = **v61;
                if (v75 != 0) {
                  if (*(_DWORD*)(v75 + 16) != *((_DWORD*)v74 + 2)) {
                    goto LABEL_159;
                  }
                  v76 = *(_DWORD*)(v75 + 36);
                  if (v76 == 0) {
                    goto LABEL_159;
                  }
                  for (j = 0; j < v76; ++j) {
                    if ((int)v76 > (int)j) {
                      v78 = *(int32x4_t**)(v75 + 40 + 8LL * (int)j);
                      if (v78 != nullptr) {
                        LANES128(v78[8]).n128_u8[0] = 1;
                        v78[2] = v132;
                        v76 = *(_DWORD*)(v75 + 36);
                      }
                    }
                  }
                  v74 = *v61;
                  v75 = **v61;
                  if (v75 != 0) {
                  LABEL_159:
                    if (*(_DWORD*)(v75 + 16) == *((_DWORD*)v74 + 2)) {
                      v79 = *(_DWORD*)(v75 + 36);
                      if (v79 != 0) {
                        for (k = 0; k < v79; ++k) {
                          if ((int)v79 > (int)k) {
                            v81 = *(int32x4_t**)(v75 + 40 + 8LL * (int)k);
                            if (v81 != nullptr) {
                              LANES128(v81[8]).n128_u8[0] = 1;
                              v81[3] = v130;
                              v79 = *(_DWORD*)(v75 + 36);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                *(float*)&v46 = v50 + *(float*)&v139;
                if (++v48 == v47) {
                  goto LABEL_116;
                }
              }
            }
            DWORDn(v56, sizeof(v56) / 4 - 1) = 0;
            *(float*)&v56 = 0x1.0000000000000p+0f - v31;
          LABEL_116:
            LANES128(v102).n128_f32[0] = v123;
            LANES128(v102).n128_f32[1] =
                0x1.0000000000000p+0f - LANES128(v125).n128_f32[0];
            LANES128(v102).n128_u64[1] = v56;
            v143 = v102;
            v103 = g3d_a6c520(&v143, (__int64)v142, v141, 1),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v2", "=w"));
            v104 = a1[8];
            v105 = *(_QWORD*)v104;
            v140 = v103;
            if (v123 < 0x0.0p+0f || v123 > 0x1.0000000000000p+0f ||
                LANES128(v125).n128_f32[0] < 0x0.0p+0f ||
                LANES128(v125).n128_f32[0] > 0x1.0000000000000p+0f) {
              if (v105 == 0 || *(_DWORD*)(v105 + 16) != *(_DWORD*)(v104 + 8)) {
                goto LABEL_127;
              }
              v106 = 0;
            }
            else {
              if (v105 == 0 || *(_DWORD*)(v105 + 16) != *(_DWORD*)(v104 + 8)) {
                goto LABEL_127;
              }
              v106 = 1;
            }
            *(_BYTE*)(v105 + 33) = v106;
            v104 = a1[8];
          LABEL_127:
            game_14a1b00((__int64*)v104, 0x1.0000000000000p+0f),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
            v107 = a1[8];
            v108 = *(_QWORD*)v107;
            if (*(_QWORD*)v107 != 0 &&
                *(_DWORD*)(v108 + 16) == *(_DWORD*)(v107 + 8)) {
              v109 = *(_DWORD*)(v108 + 36);
              if (v109 != 0) {
                for (m = 0; m < v109; ++m) {
                  if ((int)v109 > (int)m) {
                    v111 = *(float32x4_t**)(v108 + 40 + 8LL * (int)m);
                    if (v111 != nullptr) {
                      v111[1] = v140;
                      LANES128(v111[8]).n128_u8[0] = 1;
                      v109 = *(_DWORD*)(v108 + 36);
                    }
                  }
                }
              }
            }
            game_14a3920(v107),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
            v112 = (__int64*)a1[8];
            v113 = *v112;
            if (*v112 != 0) {
              if (*(_DWORD*)(v113 + 16) != *((_DWORD*)v112 + 2)) {
                goto LABEL_160;
              }
              v114 = *(_DWORD*)(v113 + 36);
              if (v114 == 0) {
                goto LABEL_160;
              }
              v115 = 0;
              v23 = COERCE_AS(__n128, vdupq_lane_s32(v120, 0));
              DWORDn(v23, sizeof(v23) / 4 - 1) = 0;
              do {
                if ((int)v114 > (int)v115) {
                  v116 = *(_QWORD*)(v113 + 40 + 8LL * (int)v115);
                  if (v116 != 0) {
                    *(__n128*)(v116 + 32) = v23;
                    *(_BYTE*)(v116 + 128) = 1;
                    v114 = *(_DWORD*)(v113 + 36);
                  }
                }
                ++v115;
              } while (v115 < v114);
              v112 = (__int64*)a1[8];
              v113 = *v112;
              if (*v112 != 0) {
              LABEL_160:
                if (*(_DWORD*)(v113 + 16) == *((_DWORD*)v112 + 2)) {
                  v117 = *(_DWORD*)(v113 + 36);
                  if (v117 != 0) {
                    *(_QWORD*)&v23 = 0;
                    v118 = 0;
                    *((_QWORD*)&v23 + 1) = LODWORD(v121);
                    do {
                      if ((int)v117 > (int)v118) {
                        v119 = *(_QWORD*)(v113 + 40 + 8LL * (int)v118);
                        if (v119 != 0) {
                          *(__n128*)(v119 + 48) = v23;
                          *(_BYTE*)(v119 + 128) = 1;
                          v117 = *(_DWORD*)(v113 + 36);
                        }
                      }
                      ++v118;
                    } while (v118 < v117);
                  }
                }
              }
            }
            goto LABEL_151;
          }
          v35 = *(_QWORD*)(v33 + 48);
          v37 = *(_QWORD*)(v33 + 56);
          if (v37 == 0) {
          LABEL_24:
            if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v137 = v21;
              (*(void (**)(__int64, __n128))(*(_QWORD*)v36 + 16LL))(v36, v23),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              std___1___shared_weak_count___release_weak(v36),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              *(_QWORD*)&v21 = v137;
            }
            goto LABEL_27;
          }
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                  memory_order_relaxed);
        goto LABEL_24;
      }
    }
  }
  v82 = a1[3] - a1[2];
  v83 = v82 >> 4;
  if ((int)(v82 >> 4) >= 1) {
    v84 = (v82 >> 4) & 0x7FFFFFFF;
    v85 = (v82 >> 4) & 3;
    if ((unsigned __int64)(v84 - 1) >= 3) {
      v92 = v83 & 0x7FFFFFFC;
      v93 = 0;
      v86 = 0;
      do {
        v94 = *(__int64**)(a1[2] + v93);
        v95 = *v94;
        if (*v94 != 0 && *(_DWORD*)(v95 + 16) == *((_DWORD*)v94 + 2)) {
          *(_BYTE*)(v95 + 33) = 0;
        }
        v96 = *(__int64**)(a1[2] + v93 + 16);
        v97 = *v96;
        if (*v96 != 0 && *(_DWORD*)(v97 + 16) == *((_DWORD*)v96 + 2)) {
          *(_BYTE*)(v97 + 33) = 0;
        }
        v98 = *(__int64**)(a1[2] + v93 + 32);
        v99 = *v98;
        if (*v98 != 0 && *(_DWORD*)(v99 + 16) == *((_DWORD*)v98 + 2)) {
          *(_BYTE*)(v99 + 33) = 0;
        }
        v100 = *(__int64**)(a1[2] + v93 + 48);
        v101 = *v100;
        if (*v100 != 0 && *(_DWORD*)(v101 + 16) == *((_DWORD*)v100 + 2)) {
          *(_BYTE*)(v101 + 33) = 0;
        }
        v86 += 4;
        v93 += 64;
      } while (v92 != v86);
    }
    else {
      v86 = 0;
    }
    if (v85 != 0) {
      v87 = 16 * v86;
      do {
        v88 = *(__int64**)(a1[2] + v87);
        v89 = *v88;
        if (*v88 != 0 && *(_DWORD*)(v89 + 16) == *((_DWORD*)v88 + 2)) {
          *(_BYTE*)(v89 + 33) = 0;
        }
        --v85;
        v87 += 16;
      } while (v85 != 0);
    }
  }
  v90 = (__int64*)a1[8];
  v91 = *v90;
  if (*v90 != 0 && *(_DWORD*)(v91 + 16) == *((_DWORD*)v90 + 2)) {
    *(_BYTE*)(v91 + 33) = 0;
  }
LABEL_151:
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, __n128))(*(_QWORD*)v12 + 16LL))(v12, v23),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v2", "=w"));
    std___1___shared_weak_count___release_weak(v12),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, __n128))(*(_QWORD*)v3 + 16LL))(v3, v23),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v2", "=w"));
    std___1___shared_weak_count___release_weak(v3),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
}

void gfx_render_18de700(__int64* a1, float a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  float32x4_t v8;
  float32x4_t* v9;
  int8x16_t v10;
  float32x4_t v11;
  float32x4_t v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  float32x4_t v16;
  __int128 v17;
  __int128 v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  __int128 v23;
  float32x4_t v24;
  __n128 v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  float v58;
  _BYTE* v59;
  float v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  float v64;
  __int64 v65;
  float32x2_t v66;
  float32x2_t v67;
  float32x2_t v68;
  unsigned __int64 v69;
  float32x2_t v70;
  float32x4_t v71;
  __n128 v72;
  float32x2_t v73;
  _BYTE* v74;
  float v75;
  __int64** v76;
  float32x4_t v77;
  float v78;
  bool v79;
  bool v80;
  __int64* v81;
  __int64 v82;
  char v83;
  __int64* v84;
  __int64 v85;
  unsigned int v86;
  unsigned int i;
  float32x4_t* v88;
  __int64* v89;
  __int64 v90;
  unsigned int v91;
  unsigned int j;
  __int64 v93;
  unsigned int v94;
  unsigned int k;
  __int64 v96;
  float32x4_t v97;
  int32x4_t v98;
  unsigned __int64 v99;
  int32x4_t v100;
  unsigned __int32 v101;
  int32x4_t v102;
  float v103;
  float32x2_t v104;
  __int128 v105;
  __n128 v106;
  __int128 v107;
  __n128 v108;
  float32x4_t v109;
  float v110;
  float32x4_t v111;
  int8x16_t v112;
  __int64 v113;
  int v114;
  float v115;
  __n128 v116;
  int32x4_t v117[4];
  _QWORD v118[8];
  float32x4_t v119;

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v3 = a1[1];
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
    if (v5 != 0) {
      v6 = *a1;
    }
    else {
      v6 = 0;
    }
  }
  else {
    v5 = 0;
    v6 = 0;
  }
  v7 = GameRoutine_b3f800((_QWORD*)(*(_QWORD*)(v6 + 288) + 592LL), "Moon"),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v8 = *((float32x4_t*)v7 + 3);
  v9 = (float32x4_t*)v7;
  v10 = vmulq_f32(v8, v8);
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  LANES128(v10).n128_u64[1] = LANES128(v10).n128_u64[0];
  v11 = vrsqrteq_f32(v10);
  v12 = vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v10, v11)));
  v112 = vbicq_s8(
      vmulq_f32(v8, vmulq_f32(v12, vrsqrtsq_f32(v12, vmulq_f32(v10, v12)))),
      vceqzq_f32(v10));
  if (*(int*)v6 < 1) {
    v15 = 0;
    v14 = 0;
  }
  else {
    v13 = *(__int64**)(v6 + 112);
    v15 = *v13;
    v14 = v13[1];
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  *(__n128*)v118 =
      ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)v15 + 16LL))(v15),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
  *(float32x4_t*)&v118[2] = v16;
  v105 = v18;
  v107 = v17;
  *(_OWORD*)&v118[4] = v17;
  *(_OWORD*)&v118[6] = v18;
  v109 = v16;
  *(__n128*)&v19 =
      ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)v15 + 24LL))(v15),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v97 = v20;
  v98 = v21;
  v100 = v22;
  v102 = v19;
  v117[0] = v19;
  v117[1] = v20;
  v117[2] = v22;
  v117[3] = v21;
  v25 = ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)v15 + 40LL))(v15),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v23 = GameData_1a82c50;
  v24 =
      vaddq_f32(*(float32x4_t*)&v25, vmulq_f32(v112, vdupq_n_s32(0xC4610000)));
  *(float*)&v25 =
      *((float*)&v105 + 2) +
      (float)((float)(vmuls_lane_f32(
                          LANES128(v109).n128_f32[2],
                          COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                          1) +
                      (float)(LANES128(v24).n128_f32[0] * *(float*)&v118[1])) +
              (float)(LANES128(v24).n128_f32[2] * *((float*)&v107 + 2)));
  if (*(float*)&v25 < 0x0.0p+0f) {
    v26 = *(float*)&v105 +
          (float)((float)(vmuls_lane_f32(
                              LANES128(v109).n128_f32[0],
                              COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                              1) +
                          (float)(*(float*)v118 * LANES128(v24).n128_f32[0])) +
                  (float)(*(float*)&v107 * LANES128(v24).n128_f32[2]));
    v27 = *((float*)&v105 + 1) +
          (float)((float)(LANES128_OF(vmulq_f32(v109, v24)).n128_f32[1] +
                          (float)(LANES128(v24).n128_f32[0] *
                                  *((float*)v118 + 1))) +
                  (float)(LANES128(v24).n128_f32[2] * *((float*)&v107 + 1)));
    v28 = LANES128(v98).n128_f32[3] +
          (float)((float)(vmuls_lane_f32(v27, v97, 3) +
                          (float)(v26 * LANES128(v102).n128_f32[3])) +
                  (float)(*(float*)&v25 * LANES128(v100).n128_f32[3]));
    if (v28 != 0x0.0p+0f) {
      v29 = 0x1.0000000000000p+0f / v28;
      v30 = (float)(vmuls_lane_f32(
                        v27, COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0]),
                        1) +
                    (float)(v26 * LANES128(v102).n128_f32[1])) +
            (float)(*(float*)&v25 * LANES128(v100).n128_f32[1]);
      v31 = LANES128(v98).n128_f32[0] +
            (float)((float)((float)(PSEUDO_UNFUSED(v27 *
                                                   LANES128(v97).n128_f32[0])) +
                            (float)(LANES128(v102).n128_f32[0] * v26)) +
                    (float)(LANES128(v100).n128_f32[0] * *(float*)&v25));
      *(float*)&v25 =
          (float)(LANES128(v98).n128_f32[2] +
                  (float)((float)(vmuls_lane_f32(v27, v97, 2) +
                                  (float)(v26 * LANES128(v102).n128_f32[2])) +
                          (float)(*(float*)&v25 *
                                  LANES128(v100).n128_f32[2]))) *
          v29;
      v32 = -(float)(v29 * (float)(LANES128(v98).n128_f32[1] + v30));
      *(float*)&v23 = (float)((float)(v31 * v29) * 0x1.e000000000000p+9f) +
                      0x1.e000000000000p+9f;
      *((float*)&v23 + 1) =
          (float)(v32 * 0x1.0e00000000000p+9f) + 0x1.0e00000000000p+9f;
      DWORD2(v23) = LODWORD(v25);
    }
  }
  v33 = *((float*)&v23 + 2);
  if (*((float*)&v23 + 2) < 0x0.0p+0f ||
      (LODWORD(v25) = LANES128(v112).n128_u32[1],
       LANES128(v112).n128_f32[1] > 0x0.0p+0f) ||
      (v25 = COERCE_AS(__n128, vmulq_f32(v9[5], v9[5])),
       *(float32x2_t*)& v25 = vadd_f32(
           COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v25,
                                                       *(int8x16_t*)&v25, 8u))
                                      .n128_u64[0]),
           *(float32x2_t*)&v25),
       *(float32x2_t*)& v25 =
           vpadd_f32(*(float32x2_t*)&v25, *(float32x2_t*)&v25),
       *(float*)&v25 <= 0x0.0p+0f) ||
      a2 > 0x0.0p+0f &&
          (LODWORD(v25) = 0x1.0000000000000p+0f, a2 < 0x1.0000000000000p+0f)) {
    v34 = a1[6] - a1[5];
    v35 = v34 >> 4;
    if ((int)(v34 >> 4) >= 1) {
      v36 = (v34 >> 4) & 0x7FFFFFFF;
      v37 = (v34 >> 4) & 3;
      if ((unsigned __int64)(v36 - 1) >= 3) {
        v42 = v35 & 0x7FFFFFFC;
        v43 = 0;
        v38 = 0;
        do {
          v44 = *(__int64**)(a1[5] + v43);
          v45 = *v44;
          if (*v44 != 0 && *(_DWORD*)(v45 + 16) == *((_DWORD*)v44 + 2)) {
            *(_BYTE*)(v45 + 33) = 0;
          }
          v46 = *(__int64**)(a1[5] + v43 + 16);
          v47 = *v46;
          if (*v46 != 0 && *(_DWORD*)(v47 + 16) == *((_DWORD*)v46 + 2)) {
            *(_BYTE*)(v47 + 33) = 0;
          }
          v48 = *(__int64**)(a1[5] + v43 + 32);
          v49 = *v48;
          if (*v48 != 0 && *(_DWORD*)(v49 + 16) == *((_DWORD*)v48 + 2)) {
            *(_BYTE*)(v49 + 33) = 0;
          }
          v50 = *(__int64**)(a1[5] + v43 + 48);
          v51 = *v50;
          if (*v50 != 0 && *(_DWORD*)(v51 + 16) == *((_DWORD*)v50 + 2)) {
            *(_BYTE*)(v51 + 33) = 0;
          }
          v38 += 4;
          v43 += 64;
        } while (v42 != v38);
      }
      else {
        v38 = 0;
      }
      if (v37 != 0) {
        v39 = 16 * v38;
        do {
          v40 = *(__int64**)(a1[5] + v39);
          v41 = *v40;
          if (*v40 != 0 && *(_DWORD*)(v41 + 16) == *((_DWORD*)v40 + 2)) {
            *(_BYTE*)(v41 + 33) = 0;
          }
          --v37;
          v39 += 16;
        } while (v37 != 0);
      }
    }
    goto LABEL_112;
  }
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  v52 = *(_DWORD*)(v6 + 304);
  v53 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  if (v52 == -1) {
    v56 = 0;
  LABEL_49:
    v55 = *(_QWORD*)(v53 + 48);
    v57 = *(_QWORD*)(v53 + 56);
    if (v57 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v113 = v23;
      (*(void (**)(__int64, __n128))(*(_QWORD*)v56 + 16LL))(v56, v25),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
      std___1___shared_weak_count___release_weak(v56),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
      *(_QWORD*)&v23 = v113;
    }
    goto LABEL_54;
  }
  v54 = v53 + 1560LL * v52;
  v55 = *(_QWORD*)(v54 + 1752);
  v56 = *(_QWORD*)(v54 + 1760);
  if (v56 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v56 + 8), 1u,
                              memory_order_relaxed);
  }
  v57 = v56;
  if (v55 == 0) {
    goto LABEL_49;
  }
LABEL_54:
  v58 = *((float*)&v23 + 1);
  v59 = *(_BYTE**)(*(_QWORD*)(v55 + 8) + 272LL);
  if (v57 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v114 = v23;
    (*(void (**)(__int64, __n128))(*(_QWORD*)v57 + 16LL))(v57, v25),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
    std___1___shared_weak_count___release_weak(v57),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
    {
      __typeof__(v23) z_ = (__typeof__(v23)){0};
      LODWORD(z_) = v114;
      v23 = z_;
    }
  }
  v103 = *(float*)&v23 / 0x1.e000000000000p+10f;
  v60 = v58 / 0x1.0e00000000000p+10f;
  v115 = v58 / 0x1.0e00000000000p+10f;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
    std___1___shared_weak_count___release_weak(v5),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
    v60 = v58 / 0x1.0e00000000000p+10f;
  }
  *(float*)&v25 = GameRoutine_1a0ab40(
      -(float)((float)(v60 * 0x1.0000000000000p+1f) + -0x1.0000000000000p+0f),
      (float)(v103 * 0x1.0000000000000p+1f) + -0x1.0000000000000p+0f),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v61 = a1[6] - a1[5];
  if ((int)(v61 >> 4) >= 1) {
    v62 = (v61 >> 4) & 0x7FFFFFFF;
    v63 = 0;
    v64 = 0x1.0000000000000p+0f / (float)(int)((v61 >> 4) - 1);
    v65 = 200;
    LANES64(v66).n64_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 0x3E8000003E800000LL),
                             COERCE_AS(float32x2_t, 0x3E8000003E800000LL)))
            .n64_u64[0];
    if (v59[168] != 0) {
      v65 = 164;
    }
    LANES64(v67).n64_u64[0] =
        LANES64_OF(vadd_f32(COERCE_AS(float32x2_t,
                                      __PAIR64__(LODWORD(v115), LODWORD(v103))),
                            COERCE_AS(float32x2_t, 0xBF000000BF000000LL)))
            .n64_u64[0];
    LANES64(v68).n64_u64[0] = LANES64_OF(vmul_f32(v67, v67)).n64_u64[0];
    DWORDn(v69, sizeof(v69) / 4 - 1) = 0;
    LANES64(v70).n64_u64[0] =
        LANES64_OF(
            vsub_f32(
                vadd_f32(
                    vsub_f32(COERCE_AS(float32x2_t, 0x3F0000003F000000LL),
                             COERCE_AS(float32x2_t, __PAIR64__(LODWORD(v115),
                                                               LODWORD(v103)))),
                    COERCE_AS(float32x2_t, 0x3F0000003F000000LL)),
                COERCE_AS(float32x2_t,
                          __PAIR64__(LODWORD(v115), LODWORD(v103)))))
            .n64_u64[0];
    *(float*)&v69 = 0x1.0000000000000p+0f - v33;
    v99 = v69;
    v101 = LANES64_OF(vdiv_f32(vsub_f32(v66, vpadd_f32(v68, v68)), v66))
               .n64_u32[0];
    LANES64(v104).n64_u64[0] = __PAIR64__(LODWORD(v115), LODWORD(v103));
    v71 = vld1q_dup_f32((const float*)&v59[v65]);
    LANES128(v71).n128_u32[3] = 0;
    v108 = *(__n128*)&v71;
    LANES128(v71).n128_u64[0] = 0;
    *((_QWORD*)&v72 + 1) =
        COERCE_UNSIGNED_INT(*(float*)&v25 * 0x1.ca5dc00000000p+5f);
    v106 = v72;
    *(_QWORD*)&v72 = 0;
    do {
      v116 = v72;
      LANES64(v73).n64_u64[0] =
          LANES64_OF(vmla_n_f32(v104, v70, *(float*)&v72)).n64_u64[0];
      if (v59[90] != 0) {
        v74 = v59 + 89;
      }
      else {
        v74 = v59 + 120;
      }
      if ((*v74 & 1) != 0) {
        v75 = *(float*)&v101;
      }
      else {
        v75 = 0x1.0000000000000p+0f;
      }
      v76 = (__int64**)(a1[5] + 16 * v63);
      v78 = LANES64(v73).n64_f32[1];
      LANES128(v77).n128_u32[0] = LANES64(v73).n64_u32[0];
      v110 = LANES64(v73).n64_f32[0];
      LANES128(v77).n128_f32[1] =
          0x1.0000000000000p+0f - LANES64(v73).n64_f32[1];
      LANES128(v77).n128_u64[1] = v99;
      v119 = v77;
      v111 = g3d_a6c520(&v119, (__int64)v118, v117, 1),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
      v79 = v110 < 0x0.0p+0f | v110 > 0x1.0000000000000p+0f;
      if (v79 || v78 < 0x0.0p+0f ||
          (v75 > 0x0.0p+0f ? (v80 = v78 > 0x1.0000000000000p+0f) : (v80 = true),
           v80)) {
        v81 = *v76;
        v82 = **v76;
        if (v82 == 0 || *(_DWORD*)(v82 + 16) != *((_DWORD*)v81 + 2)) {
          goto LABEL_88;
        }
        v83 = 0;
      }
      else {
        v81 = *v76;
        v82 = **v76;
        if (v82 == 0 || *(_DWORD*)(v82 + 16) != *((_DWORD*)v81 + 2)) {
          goto LABEL_88;
        }
        v83 = 1;
      }
      *(_BYTE*)(v82 + 33) = v83;
      v81 = *v76;
    LABEL_88:
      game_14a1b00(v81, v75),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
      v84 = *v76;
      v85 = **v76;
      if (v85 != 0 && *(_DWORD*)(v85 + 16) == *((_DWORD*)v84 + 2)) {
        v86 = *(_DWORD*)(v85 + 36);
        if (v86 != 0) {
          for (i = 0; i < v86; ++i) {
            if ((int)v86 > (int)i) {
              v88 = *(float32x4_t**)(v85 + 40 + 8LL * (int)i);
              if (v88 != nullptr) {
                v88[1] = v111;
                LANES128(v88[8]).n128_u8[0] = 1;
                v86 = *(_DWORD*)(v85 + 36);
              }
            }
          }
        }
      }
      game_14a3920((__int64)v84),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
      v89 = *v76;
      v72 = v116;
      v90 = **v76;
      if (v90 != 0) {
        if (*(_DWORD*)(v90 + 16) != *((_DWORD*)v89 + 2)) {
          goto LABEL_120;
        }
        v91 = *(_DWORD*)(v90 + 36);
        if (v91 == 0) {
          goto LABEL_120;
        }
        for (j = 0; j < v91; ++j) {
          if ((int)v91 > (int)j) {
            v93 = *(_QWORD*)(v90 + 40 + 8LL * (int)j);
            if (v93 != 0) {
              v25 = v108;
              *(_BYTE*)(v93 + 128) = 1;
              *(__n128*)(v93 + 32) = v108;
              v91 = *(_DWORD*)(v90 + 36);
            }
          }
        }
        v89 = *v76;
        v90 = **v76;
        if (v90 != 0) {
        LABEL_120:
          if (*(_DWORD*)(v90 + 16) == *((_DWORD*)v89 + 2)) {
            v94 = *(_DWORD*)(v90 + 36);
            if (v94 != 0) {
              for (k = 0; k < v94; ++k) {
                if ((int)v94 > (int)k) {
                  v96 = *(_QWORD*)(v90 + 40 + 8LL * (int)k);
                  if (v96 != 0) {
                    v25 = v106;
                    *(_BYTE*)(v96 + 128) = 1;
                    *(__n128*)(v96 + 48) = v106;
                    v94 = *(_DWORD*)(v90 + 36);
                  }
                }
              }
            }
          }
        }
      }
      *(float*)&v72 = v64 + *(float*)&v116;
      ++v63;
    } while (v63 != v62);
  }
LABEL_112:
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, __n128))(*(_QWORD*)v14 + 16LL))(v14, v25),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
    std___1___shared_weak_count___release_weak(v14),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, __n128))(*(_QWORD*)v5 + 16LL))(v5, v25),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
    std___1___shared_weak_count___release_weak(v5),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
}

#pragma GCC visibility pop
