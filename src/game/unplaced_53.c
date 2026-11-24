#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int16* game_8697c0(__int16* result, char, float);
__int64 Dir_70df40(__int16*, __int16*);
__int64 GameRoutine_603a60(__int64, float*);
extern _UNKNOWN* GameData_212c0a0[19];
extern _UNKNOWN* GameData_212c128[2];
extern _UNKNOWN* GameData_2135448;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
unsigned __int16* Dir_70d7a0(unsigned __int16* result);
float game_5eaef0(__int64 a1, float32x4_t* a2, float a3, float a4, float a5,
                  float a6, double a7, double a8);
__int64 game_604060(__int64 a1, __int64* a2, float* a3);
__attribute__((swiftcall)) void game_86bbc0(PSEUDO_X8 x8_,
                                            unsigned __int16* result);
__int16* game_86bee0(__int64 a1);

float game_5eaef0(__int64 a1, float32x4_t* a2, float a3, float a4, float a5,
                  float a6, double a7, double a8)
{
  __int64 v8;
  float v9;
  unsigned int v10;
  float v11;
  unsigned int v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  float v20;
  float v21;
  float v22;
  unsigned __int64 v23;
  float v24;
  float v25;
  float32x4_t v26;
  float32x4_t v27;
  float v28;
  float32x4_t v29;
  float v30;
  unsigned __int8 v31;
  float32x4_t v32;
  float32x4_t v33;
  float v34;
  float v35;
  float32x4_t v36;
  float v37;
  bool v38;
  float v39;
  float v40;
  float32x4_t v41;
  unsigned __int64 v42;
  float v43;
  unsigned __int64 v44;
  float32x4_t v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  float v48;
  float32x4_t v49;
  float v50;
  float32x4_t v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float32x4_t v56;
  float32x4_t v57;
  float v58;
  float32x4_t v59;
  float32x4_t v60;
  float v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float v71;
  float32x4_t v72;
  float32x4_t v73;
  float v74;
  float v75;
  float v76;
  float v77;
  __int128 v78;
  float v79;
  __int128 v80;
  float v81;
  float32x4_t v82;
  float v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float v87;
  int8x16_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  int8x16_t v95;
  unsigned __int64 v96;
  int8x16_t v97;
  int8x16_t v98;
  int8x16_t v99;
  unsigned __int64 v100;
  float32x4_t v101;
  float32x4_t v102;
  unsigned __int64 v103;
  float32x4_t v104;
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
  int8x16_t v115;
  float32x4_t v116;
  int8x16_t v117;
  int8x16_t v118;
  int8x16_t v119;
  int8x16_t v120;
  int8x16_t v121;
  float32x4_t v122;
  float32x4_t v123;
  float32x4_t v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  float32x4_t v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  int8x16_t v136;
  int8x16_t v137;
  float32x4_t v138;
  float32x4_t v139;
  int8x16_t v140;
  int8x16_t v141;
  float32x4_t v142;
  int8x16_t v143;
  float32x4_t v144;
  int8x16_t v145;
  float result;
  float32x4_t v147;
  float32x4_t v148;
  float32x4_t v149;

  *(float*)&a7 = a5;
  *(float*)&a8 = a6;
  v8 = (__int64)(float)((float)(a3 * 0x1.0000000000000p-1f) *
                        0x1.45f3060000000p+29f);
  v9 = vcvts_n_f32_u32(v8 & 0xFFFFFF, 0x18u);
  *(float*)&v10 =
      a5 *
      (float)((float)(*((float*)GameData_2135448 + 4 * BYTE3(v8) + 1) +
                      (float)(*((float*)GameData_2135448 + 4 * BYTE3(v8) + 3) *
                              v9)) /
              (float)(*((float*)GameData_2135448 + 4 * BYTE3(v8)) +
                      (float)(*((float*)GameData_2135448 + 4 * BYTE3(v8) + 2) *
                              v9)));
  v11 = a4 * *(float*)&v10;
  *(float*)&v12 = -(float)(a4 * *(float*)&v10);
  v14 = *a2;
  v13 = a2[1];
  v16 = a2[2];
  v15 = a2[3];
  v17 = v12 | ((unsigned __int64)v10 << 32);
  v18 = COERCE_UNSIGNED_INT(a4 * *(float*)&v10) |
        ((unsigned __int64)COERCE_UNSIGNED_INT(-*(float*)&v10) << 32);
  v19 = v12 | ((unsigned __int64)COERCE_UNSIGNED_INT(-*(float*)&v10) << 32);
  v20 = *(float*)&a8 * (float)(0x1.0000000000000p+0f / *(float*)&a7);
  v21 = *(float*)&v10 * v20;
  v22 = (float)-*(float*)&v10 * v20;
  v23 = COERCE_UNSIGNED_INT(a4 * *(float*)&v10) | ((unsigned __int64)v10 << 32);
  v24 = *(float*)&v12 * v20;
  v25 = v11 * v20;
  v26 = vaddq_f32(
      vmlsq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*a2, *(float*)&v23), v13,
                                    COERCE_AS(float32x2_t, v23), 1),
                     v16, *(float32x2_t*)&a7, 0),
      v15);
  v27 = vaddq_f32(
      vmlsq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*a2, *(float*)&v17), v13,
                                    COERCE_AS(float32x2_t, v17), 1),
                     v16, *(float32x2_t*)&a7, 0),
      v15);
  v28 = LANES128(v26).n128_f32[1];
  v29 = vmlsq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*a2, *(float*)&v18), v13,
                                      COERCE_AS(float32x2_t, v18), 1),
                       v16, *(float32x2_t*)&a7, 0);
  v30 = LANES128(v26).n128_f32[2];
  v31 = LANES64_OF(vmovn_s32(vcgtq_f32(v26, v27))).n64_u8[0];
  v32 = vaddq_f32(v29, v15);
  v33 = vmulq_n_f32(*a2, *(float*)&v19);
  if ((LANES64_OF(vmovn_s32(vcgtq_f32(v27, v26))).n64_u8[0] & 1) != 0) {
    v34 = LANES128(v26).n128_f32[0];
  }
  else {
    v34 = LANES128(v27).n128_f32[0];
  }
  if (!(LANES128(v26).n128_f32[1] < LANES128(v27).n128_f32[1])) {
    v35 = LANES128(v27).n128_f32[1];
  }
  else {
    v35 = LANES128(v26).n128_f32[1];
  }
  v36 = vmlaq_lane_f32(v33, v13, COERCE_AS(float32x2_t, v19), 1);
  if (!(LANES128(v26).n128_f32[2] < LANES128(v27).n128_f32[2])) {
    v37 = LANES128(v27).n128_f32[2];
  }
  else {
    v37 = LANES128(v26).n128_f32[2];
  }
  v38 = (v31 & 1) == 0;
  v39 = v22;
  if (v38) {
    v40 = LANES128(v27).n128_f32[0];
  }
  else {
    v40 = LANES128(v26).n128_f32[0];
  }
  v41 = vmlsq_lane_f32(v36, v16, *(float32x2_t*)&a7, 0);
  v42 = LODWORD(v24) | ((unsigned __int64)LODWORD(v22) << 32);
  if (!(LANES128(v27).n128_f32[1] < LANES128(v26).n128_f32[1])) {
    v28 = LANES128(v27).n128_f32[1];
  }
  v43 = LANES128(v32).n128_f32[2];
  v44 = LODWORD(v24) | ((unsigned __int64)LODWORD(v21) << 32);
  if (!(LANES128(v27).n128_f32[2] < LANES128(v26).n128_f32[2])) {
    v30 = LANES128(v27).n128_f32[2];
  }
  v45 = vaddq_f32(v41, v15);
  v46 = LODWORD(v25) | ((unsigned __int64)LODWORD(v21) << 32);
  v47 = LODWORD(v25) | ((unsigned __int64)LODWORD(v39) << 32);
  if (!(LANES128(v32).n128_f32[0] < v34)) {
    v48 = v34;
  }
  else {
    v48 = LANES128(v32).n128_f32[0];
  }
  v49 = vmulq_n_f32(v14, *(float*)&v44);
  if (!(LANES128(v32).n128_f32[1] < v35)) {
    v50 = v35;
  }
  else {
    v50 = LANES128(v32).n128_f32[1];
  }
  v51 = vmlaq_lane_f32(v49, v13, COERCE_AS(float32x2_t, v44), 1);
  v52 = LANES128(v45).n128_f32[1];
  v53 = LANES128(v45).n128_f32[2];
  if (!(LANES128(v32).n128_f32[2] < v37)) {
    v54 = v37;
  }
  else {
    v54 = LANES128(v32).n128_f32[2];
  }
  if (!(v40 < LANES128(v32).n128_f32[0])) {
    v55 = v40;
  }
  else {
    v55 = LANES128(v32).n128_f32[0];
  }
  v56 = vmlsq_lane_f32(v51, v16, *(float32x2_t*)&a8, 0);
  if (v28 < LANES128(v32).n128_f32[1]) {
    v28 = LANES128(v32).n128_f32[1];
  }
  if (!(v30 < LANES128(v32).n128_f32[2])) {
    v43 = v30;
  }
  v57 = vaddq_f32(v56, v15);
  if (LANES128(v45).n128_f32[0] < v48) {
    v48 = LANES128(v45).n128_f32[0];
  }
  if (!(LANES128(v45).n128_f32[1] < v50)) {
    v58 = v50;
  }
  else {
    v58 = LANES128(v45).n128_f32[1];
  }
  v147 = v27;
  v148 = v57;
  if (LANES128(v45).n128_f32[2] < v54) {
    v54 = LANES128(v45).n128_f32[2];
  }
  v59 = vmulq_n_f32(v14, *(float*)&v46);
  if (v55 < LANES128(v45).n128_f32[0]) {
    v55 = LANES128(v45).n128_f32[0];
  }
  v60 = vmlaq_lane_f32(v59, v13, COERCE_AS(float32x2_t, v46), 1);
  v61 = LANES128(v57).n128_f32[1];
  if (!(v28 < LANES128(v45).n128_f32[1])) {
    v52 = v28;
  }
  if (!(v43 < LANES128(v45).n128_f32[2])) {
    v53 = v43;
  }
  v62 = vmlsq_lane_f32(v60, v16, *(float32x2_t*)&a8, 0);
  if (LANES128(v57).n128_f32[0] < v48) {
    v48 = LANES128(v57).n128_f32[0];
  }
  v63 = vmulq_n_f32(v14, *(float*)&v47);
  v64 = vmulq_n_f32(v14, *(float*)&v42);
  if (LANES128(v57).n128_f32[1] < v58) {
    v58 = LANES128(v57).n128_f32[1];
  }
  v65 = vaddq_f32(v62, v15);
  if (LANES128(v57).n128_f32[2] < v54) {
    v54 = LANES128(v57).n128_f32[2];
  }
  v66 = vmlaq_lane_f32(v63, v13, COERCE_AS(float32x2_t, v47), 1);
  v67 = vmlaq_lane_f32(v64, v13, COERCE_AS(float32x2_t, v42), 1);
  if (v55 < LANES128(v57).n128_f32[0]) {
    v55 = LANES128(v57).n128_f32[0];
  }
  if (!(v52 < LANES128(v57).n128_f32[1])) {
    v61 = v52;
  }
  v68 = vmlsq_lane_f32(v66, v16, *(float32x2_t*)&a8, 0);
  v69 = vmlsq_lane_f32(v67, v16, *(float32x2_t*)&a8, 0);
  if (v53 < LANES128(v57).n128_f32[2]) {
    v53 = LANES128(v57).n128_f32[2];
  }
  if (LANES128(v65).n128_f32[0] < v48) {
    v48 = LANES128(v65).n128_f32[0];
  }
  v70 = vaddq_f32(v69, v15);
  if (!(LANES128(v65).n128_f32[1] < v58)) {
    v71 = v58;
  }
  else {
    v71 = LANES128(v65).n128_f32[1];
  }
  v72 = vaddq_f32(v68, v15);
  v73 = vsubq_f32(v26, v27);
  if (LANES128(v65).n128_f32[2] < v54) {
    v54 = LANES128(v65).n128_f32[2];
  }
  if (!(v55 < LANES128(v65).n128_f32[0])) {
    LANES128(v65).n128_f32[0] = v55;
  }
  v74 = LANES128(v72).n128_f32[1];
  if (v61 < LANES128(v65).n128_f32[1]) {
    v61 = LANES128(v65).n128_f32[1];
  }
  if (v53 < LANES128(v65).n128_f32[2]) {
    v53 = LANES128(v65).n128_f32[2];
  }
  v75 = LANES128(v70).n128_f32[1];
  if (LANES128(v72).n128_f32[0] < v48) {
    v48 = LANES128(v72).n128_f32[0];
  }
  if (!(LANES128(v72).n128_f32[1] < v71)) {
    v76 = v71;
  }
  else {
    v76 = LANES128(v72).n128_f32[1];
  }
  if (!(LANES128(v72).n128_f32[2] < v54)) {
    v77 = v54;
  }
  else {
    v77 = LANES128(v72).n128_f32[2];
  }
  DWORDn(v78, sizeof(v78) / 4 - 1) = 0;
  if (!(LANES128(v65).n128_f32[0] < LANES128(v72).n128_f32[0])) {
    v79 = LANES128(v65).n128_f32[0];
  }
  else {
    v79 = LANES128(v72).n128_f32[0];
  }
  DWORDn(v80, sizeof(v80) / 4 - 1) = 0;
  if (!(v61 < LANES128(v72).n128_f32[1])) {
    v74 = v61;
  }
  v81 = LANES128(v70).n128_f32[2];
  if (v53 < LANES128(v72).n128_f32[2]) {
    v53 = LANES128(v72).n128_f32[2];
  }
  if (LANES128(v70).n128_f32[0] < v48) {
    v48 = LANES128(v70).n128_f32[0];
  }
  if (LANES128(v70).n128_f32[1] < v76) {
    v76 = LANES128(v70).n128_f32[1];
  }
  *(float*)&v80 = v48;
  if (LANES128(v70).n128_f32[2] < v77) {
    v77 = LANES128(v70).n128_f32[2];
  }
  if (v79 < LANES128(v70).n128_f32[0]) {
    v79 = LANES128(v70).n128_f32[0];
  }
  v82 = vsubq_f32(v70, v57);
  *((float*)&v80 + 1) = v76;
  *(float*)&v78 = v79;
  if (!(v74 < v75)) {
    v83 = v74;
  }
  else {
    v83 = v75;
  }
  v84 = vsubq_f32(v72, v57);
  *((float*)&v80 + 2) = v77;
  LANES128(v85).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v86).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *((float*)&v78 + 1) = v83;
  if (!(v53 < v81)) {
    v87 = v53;
  }
  else {
    v87 = v81;
  }
  v88 = vsubq_f32(v32, v27);
  LANES128(v89).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v88, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v86).n128_i8[8] =
      vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *((float*)&v78 + 2) = v87;
  LANES128(v90).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v88, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v91).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v92).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v90).n128_i8[8] =
      vqtbl1_s8(v88, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v92).n128_i8[8] =
      vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(_OWORD*)a1 = v80;
  *(_OWORD*)(a1 + 16) = v78;
  LANES128(v93).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v94 = a2[3];
  *(_QWORD*)(a1 + 224) = 6;
  *(int8x8_t*)&LANES128(v93).n128_i8[8] =
      vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v95 = vsubq_f32(v27, v94);
  v96 = LANES64_OF(vqtbl1_s8(v88, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  v97 = vsubq_f32(v45, v94);
  v98 = vsubq_f32(v32, v94);
  v99 = vsubq_f32(v26, v94);
  v149 = v94;
  LANES128(v88).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v95, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v100 = LANES64_OF(vqtbl1_s8(v95, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
             .n64_u64[0];
  LANES128(v101).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v102).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v95, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v103 = LANES64_OF(vqtbl1_s8(v95, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
             .n64_u64[0];
  LANES128(v104).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v95).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v105).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v99, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v106).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v107).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v99, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v108).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v85).n128_i8[8] =
      vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v91).n128_i8[8] =
      vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v107).n128_i8[8] =
      vqtbl1_s8(v99, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v108).n128_i8[8] =
      vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v88).n128_u64[1] = v100;
  *(int8x8_t*)&LANES128(v101).n128_i8[8] =
      vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v102).n128_u64[1] = v103;
  *(int8x8_t*)&LANES128(v104).n128_i8[8] =
      vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v95).n128_i8[8] =
      vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v105).n128_i8[8] =
      vqtbl1_s8(v99, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v106).n128_i8[8] =
      vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v89).n128_u64[1] = v96;
  v109 = vmulq_f32(v90, v85);
  v110 = vmlsq_f32(vmulq_f32(v92, v86), v108, v93);
  v111 = vmlsq_f32(vmulq_f32(v88, v101), v104, v102);
  v112 = vmlsq_f32(vmulq_f32(v102, v107), v88, v105);
  v113 = vmlsq_f32(vmulq_f32(v95, v105), v107, v106);
  v114 = vmlsq_f32(vmulq_f32(v104, v106), v95, v101);
  v115 = vmulq_f32(v110, v110);
  v116 = vmlsq_f32(v109, v91, v89);
  v117 = vmulq_f32(v111, v111);
  v118 = vmulq_f32(v113, v113);
  v119 = vmulq_f32(v112, v112);
  v120 = vmulq_f32(v114, v114);
  v121 = vmulq_f32(v116, v116);
  LANES128(v115).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v115, v115, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0])))
          .n64_u64[0];
  LANES128(v117).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v117, v117, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0])))
          .n64_u64[0];
  LANES128(v118).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v118, v118, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v118).n128_u64[0])))
          .n64_u64[0];
  LANES128(v88).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v120, v120, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v120).n128_u64[0])))
          .n64_u64[0];
  LANES128(v115).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0])))
          .n64_u64[0];
  LANES128(v121).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v121, v121, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0])))
          .n64_u64[0];
  LANES128(v108).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v119, v119, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v119).n128_u64[0])))
          .n64_u64[0];
  LANES128(v119).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0])))
          .n64_u64[0];
  LANES128(v120).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v118).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v118).n128_u64[0])))
          .n64_u64[0];
  LANES128(v118).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])))
          .n64_u64[0];
  LANES128(v115).n128_u64[1] = LANES128(v115).n128_u64[0];
  LANES128(v121).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0])))
          .n64_u64[0];
  LANES128(v108).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0])))
          .n64_u64[0];
  LANES128(v119).n128_u64[1] = LANES128(v119).n128_u64[0];
  LANES128(v120).n128_u64[1] = LANES128(v120).n128_u64[0];
  LANES128(v118).n128_u64[1] = LANES128(v118).n128_u64[0];
  LANES128(v121).n128_u64[1] = LANES128(v121).n128_u64[0];
  v122 = vrsqrteq_f32(v115);
  LANES128(v108).n128_u64[1] = LANES128(v108).n128_u64[0];
  v123 = vrsqrteq_f32(v119);
  v124 = vrsqrteq_f32(v120);
  v125 = vrsqrteq_f32(v118);
  v126 = vrsqrteq_f32(v121);
  v127 = vrsqrteq_f32(v108);
  v128 = vmulq_f32(v126, vrsqrtsq_f32(v126, vmulq_f32(v121, v126)));
  v129 = vmulq_f32(v122, vrsqrtsq_f32(v122, vmulq_f32(v115, v122)));
  v130 = vmulq_f32(v124, vrsqrtsq_f32(v124, vmulq_f32(v120, v124)));
  v131 = vmulq_f32(v123, vrsqrtsq_f32(v123, vmulq_f32(v119, v123)));
  v132 = vmulq_f32(v125, vrsqrtsq_f32(v125, vmulq_f32(v118, v125)));
  v133 = vmulq_f32(v127, vrsqrtsq_f32(v127, vmulq_f32(v108, v127)));
  v134 = vbicq_s8(
      vmulq_f32(v116,
                vmulq_f32(v128, vrsqrtsq_f32(v128, vmulq_f32(v121, v128)))),
      vceqzq_f32(v121));
  v135 = vbicq_s8(
      vmulq_f32(v110,
                vmulq_f32(v129, vrsqrtsq_f32(v129, vmulq_f32(v115, v129)))),
      vceqzq_f32(v115));
  *(float32x4_t*)(a1 + 96) = v134;
  v136 = vmulq_f32(v147, v134);
  v137 = vmulq_f32(v148, v135);
  *(float32x4_t*)(a1 + 128) = v135;
  v138 = vbicq_s8(
      vmulq_f32(v111,
                vmulq_f32(v131, vrsqrtsq_f32(v131, vmulq_f32(v119, v131)))),
      vceqzq_f32(v119));
  v139 = vbicq_s8(
      vmulq_f32(v113,
                vmulq_f32(v130, vrsqrtsq_f32(v130, vmulq_f32(v120, v130)))),
      vceqzq_f32(v120));
  LANES128(v128).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v136, v136, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v136).n128_u64[0])))
          .n64_u64[0];
  *(float32x4_t*)(a1 + 32) = v138;
  *(float32x4_t*)(a1 + 64) = v139;
  LANES128(v136).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v137, v137, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0])))
          .n64_u64[0];
  v140 = vmulq_f32(v149, v139);
  v141 = vmulq_f32(v149, v138);
  *(float*)(a1 + 112) =
      -LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v128).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v128).n128_u64[0])))
           .n64_f32[0];
  *(float*)(a1 + 144) =
      -LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v136).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v136).n128_u64[0])))
           .n64_f32[0];
  LANES128(v140).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v140, v140, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v140).n128_u64[0])))
          .n64_u64[0];
  LANES128(v141).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v141, v141, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v141).n128_u64[0])))
          .n64_u64[0];
  v142 = vbicq_s8(
      vmulq_f32(v112,
                vmulq_f32(v133, vrsqrtsq_f32(v133, vmulq_f32(v108, v133)))),
      vceqzq_f32(v108));
  *(float32x4_t*)(a1 + 160) = v142;
  v143 = vmulq_f32(v149, v142);
  *(float*)(a1 + 80) =
      -LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v140).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v140).n128_u64[0])))
           .n64_f32[0];
  *(float*)(a1 + 48) =
      -LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v141).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v141).n128_u64[0])))
           .n64_f32[0];
  LANES128(v143).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v143, v143, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
          .n64_u64[0];
  v144 = vbicq_s8(
      vmulq_f32(v114,
                vmulq_f32(v132, vrsqrtsq_f32(v132, vmulq_f32(v118, v132)))),
      vceqzq_f32(v118));
  *(float32x4_t*)(a1 + 192) = v144;
  v145 = vmulq_f32(v149, v144);
  *(float*)(a1 + 176) =
      -LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
           .n64_f32[0];
  LANES128(v145).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v145, v145, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0])))
          .n64_u64[0];
  result =
      -LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0])))
           .n64_f32[0];
  *(float*)(a1 + 208) = result;
  return result;
}

__int64 game_604060(__int64 a1, __int64* a2, float* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 result;
  _QWORD v7[8];

  v3 = *a2;
  memset(v7, 0, sizeof(v7));
  (*(void (**)(__int64, __int64))GameData_212c0a0[0])((__int64)v7, v3);
  GameRoutine_603a60((__int64)v7, a3);
  *(_QWORD*)(a1 + 8) = a1 + 16;
  result = (*(__int64 (**)(__int64, __int64))GameData_212c128[0])(a1 + 16,
                                                                  (__int64)v7);
  *(_BYTE*)(a1 + 1) &= ~1u;
  *(_BYTE*)a1 = 1;
  return result;
}

__attribute__((swiftcall)) void game_86bbc0(PSEUDO_X8 x8_,
                                            unsigned __int16* result)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  float v2;
  float v3;
  float v4;
  float v5;
  unsigned __int16* v6;
  unsigned __int16 v8;
  unsigned __int16 v9;
  int v10;
  unsigned __int16 v11;
  int v12;
  int v13;

  v3 = *((float*)result + 44);
  v2 = *((float*)result + 45);
  if (v2 < v3) {
    v4 =
        (float)((float)(v2 / v3) + 0x0.0p+0f) +
        (float)((float)(v2 * (float)((float)(0x1.0000000000000p+0f -
                                             (float)((float)((float)(v3 - v2) *
                                                             (float)(v3 - v2)) /
                                                     (float)(v3 * v3))) -
                                     (float)((float)(v2 / v3) + 0x0.0p+0f))) /
                v3);
    if (v4 <= 0x1.0000000000000p+0f) {
      v5 = v4;
    }
    else {
      v5 = 0x1.0000000000000p+0f;
    }
    if (v4 < 0x0.0p+0f || v5 <= 0x0.0p+0f) {
      *(_QWORD*)a2 = *((_QWORD*)result + 19);
      v13 = *((_DWORD*)result + 40);
      goto LABEL_12;
    }
    if (v5 < 0x1.0000000000000p+0f) {
      v6 = result;
      result = (unsigned __int16*)Dir_70df40((__int16*)result + 76,
                                             (__int16*)result + 82);
      v8 = v6[79];
      v9 = v6[81];
      *(_WORD*)a2 = v6[76];
      v10 = *(_DWORD*)(v6 + 77);
      *(_WORD*)(a2 + 6) = v8;
      *(_WORD*)(a2 + 10) = v9;
      *(_DWORD*)(a2 + 2) = v10;
      v11 = v6[80];
      v12 = (int)(float)((float)(v5 * (float)(int)result) + 0x0.0p+0f);
      *(_WORD*)(a2 + 8) = v11;
      if (v12 != 0) {
        *(_WORD*)(a2 + 10) = 0;
        *(_WORD*)(a2 + 6) = v8 + v12 / 60;
        *(_WORD*)(a2 + 8) = v11 + v12 % 60;
        {
          Dir_70d7a0((unsigned __int16*)a2);
          return;
        }
      }
      {
        result;
        return;
      }
    }
  }
  *(_QWORD*)a2 = *(_QWORD*)(result + 82);
  v13 = *((_DWORD*)result + 43);
LABEL_12:
  *(_DWORD*)(a2 + 8) = v13;
  {
    result;
    return;
  }
}

__int16* game_86bee0(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  float v6;
  float v7;
  __int64 v8;
  __int16* v9;
  float v10;
  __int16* result;
  unsigned __int8* v12;
  unsigned int v13;
  bool v14;
  int v15;
  __int64 v17;
  int v18;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_14;
  }
  v4 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
    v5 = COERCE_AS(__typeof__(v5), (*(__n128(**)(unsigned __int64))(
                                       *(_QWORD*)(v4 + 160) + 16LL))(v4 + 160));
  }
  else {
    v5 = *(_OWORD*)(v4 + 208);
  }
  if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160,
                                                           *((float*)&v5 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
  LABEL_13:
    v6 = *(float*)(a1 + 176);
  }
  else {
  LABEL_14:
    v7 = 0x1.e000000000000p+5f / (float)*(int*)(game_g_frame_clock + 476);
    if (v7 <= 0x0.0p+0f) {
      v7 = 0x1.0000000000000p+0f;
    }
    v6 = *(float*)(a1 + 180) + v7;
    if (*(float*)(a1 + 176) < v6) {
      v6 = *(float*)(a1 + 176);
    }
  }
  *(float*)(a1 + 180) = v6;
  game_86bbc0((void*)((__int64)&v17), (unsigned __int16*)a1);
  v8 = game_gmap_GmapClock_instance_;
  if (game_gmap_GmapClock_instance_ != 0) {
    *(_QWORD*)(game_gmap_GmapClock_instance_ + 32) = v17;
    *(_DWORD*)(v8 + 40) = v18;
  }
  if (v8 != 0) {
    v9 = (__int16*)(v8 + 32);
  }
  else {
    v9 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v9[1] * *v9 * v9[2] != 0 ||
      (v8 != 0 ? (v9 = (__int16*)(v8 + 8))
               : (v9 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr),
       v8 == 0)) {
    v10 = 0x0.0p+0f;
  }
  else {
    v10 = *(float*)(v8 + 44);
  }
  result = game_8697c0(v9, 1, v10);
  if (*(float*)(a1 + 176) <= *(float*)(a1 + 180)) {
    v12 = *(unsigned __int8**)(a1 + 16);
    if (v12 != nullptr) {
      v13 = *v12;
      v14 = v13 > 0x10;
      v15 = (1 << v13) & 0x1CE00;
      if (!v14 & v15 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
