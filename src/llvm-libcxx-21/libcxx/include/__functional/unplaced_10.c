#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_109da60(PSEUDO_X8, float32x4_t*,
                                             float32x4_t*, int8x16_t result);
__attribute__((swiftcall)) void game_109e470(PSEUDO_X8, int32x2_t*, int32x2_t*,
                                             float);
__attribute__((swiftcall)) void math_Quat_Slerp(PSEUDO_X8, float32x4_t* result,
                                                float32x4_t*, float);
__int64 GameRoutine_1a09ff0();
__int64 GameRoutine_1a0a000();
__int64 MapOnMapInfo_16017e0(__int64 result, __int64);
__int64 ProcDeliveryAnimalMenu_171e560(__int64);
__int64 ProcDeliveryTransportMenu_171fd50(__int64);
__n64 GameRoutine_a6c440(float32x4_t*, __int128*, float32x4_t*);
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* GameData_21fdd18;
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN GameData_21a61b0;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a5670;
extern __int128 GameData_21a61a0;
extern __int64 (*msg_ProjectFile_vtable[])();
extern __int64 GameData_212d270;
extern __int64 GameData_21ed080;
extern char GameData_2262bf8;
float GameRoutine_1a0a550(float, float);
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void fs_6315e0(_QWORD*);
void llvm_libcxx_21_libcxx_include___functional_8096d0(__int64 a1, __int64* a2);
void llvm_libcxx_21_libcxx_include___functional_a532e0(_QWORD* a1);
void llvm_libcxx_21_libcxx_include___functional_10b8b50_alt1(__int64 a1,
                                                             __int64 a2,
                                                             __int64 a3);
__int64 llvm_libcxx_21_libcxx_include___functional_171ea10(__int64 a1);
__int64 llvm_libcxx_21_libcxx_include___functional_1720150(__int64 a1);
__attribute__((swiftcall)) void game_109e470_alt1(PSEUDO_X8, _QWORD, _QWORD,
                                                  float);
__int64 __cxa_guard_acquire_alt1(_QWORD, long double, long double, long double,
                                 long double, double);
__int64 __cxa_guard_release_alt1(_QWORD);
float GameRoutine_1a0a550_alt1(long double, float);
long double GameRoutine_1a09ff0_alt1(double, double);
long double GameRoutine_1a0a000_alt1(long double, long double);
void llvm_libcxx_21_libcxx_include___functional_10b8b50_alt2(
    __int64 a1, long double a2, long double a3, long double a4, long double a5,
    double a6, __int64 a7, int8x16_t** a8);
void llvm_libcxx_21_libcxx_include___functional_10b8b50(__int64 a1, __int64 a2,
                                                        __int64 a3);

void llvm_libcxx_21_libcxx_include___functional_8096d0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int128 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  __n64 v13;
  float v14;
  float v15;
  bool v16;
  float v17;
  bool v18;
  float32x4_t v19;
  float32x4_t v20[4];
  _QWORD v21[8];

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *a2;
  (*(void (**)(__int64))(*(_QWORD*)(*a2 + 48) + 16LL))(*a2 + 48),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *(_QWORD*)(a1 + 8);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_OWORD*)v21 = v5;
  *(_OWORD*)&v21[2] = v6;
  *(_OWORD*)&v21[4] = v7;
  *(_OWORD*)&v21[6] = v8;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v20[0] = v9;
  v20[1] = v10;
  v20[2] = v11;
  v20[3] = v12;
  LANES64(v13).n64_u64[0] =
      LANES64_OF(GameRoutine_a6c440(&v19, (__int128*)v21, v20)).n64_u64[0],
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v14 <= 0x0.0p+0f) {
    LANES64(v13).n64_f32[0] = LANES64(v13).n64_f32[0] + -0x1.e000000000000p+9f;
    LANES64(v13).n64_f32[1] = 0x1.0e00000000000p+9f - LANES64(v13).n64_f32[1];
  }
  v15 = fabsf(LANES64(v13).n64_f32[0]);
  v16 = v14 <= 0x0.0p+0f & v15 < 0x1.e000000000000p+9f;
  v17 = fabsf(LANES64(v13).n64_f32[1]);
  v18 = v16 && v17 < 0x1.0e00000000000p+9f;
  if (v18 && GameData_21ed080 != 0) {
    MapOnMapInfo_16017e0(GameData_21ed080, v2),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

void llvm_libcxx_21_libcxx_include___functional_a532e0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[100];
  *a1 = msg_ProjectFile_vtable;
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 != 0) {
    ((void (*)(__int64))GameData_21fdd18)(v3);
  }
  ((void (*)(__int64))GameData_21fdd18)(v1);
  fs_6315e0(a1);
}

void llvm_libcxx_21_libcxx_include___functional_10b8b50(__int64 a1, __int64 a2,
                                                        __int64 a3)
{
  __int64 v3;
  float32x4_t* v4;
  int8x16_t v5;
  int8x16_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  unsigned __int64 v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x2_t* v17;
  int8x16_t v18;
  float v19;
  int v20;
  float v21;
  float v22;
  float v23;
  unsigned __int32 v24;
  int v25;
  bool v26;
  float32x4_t v27;
  int8x16_t v28;
  int8x16_t v29;
  float v30;
  float v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  int8x16_t v38;
  int8x16_t v39;
  float v40;
  unsigned __int32 v41;
  float v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  float v49;
  float v50;
  float v51;
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
  int8x16_t v62;
  int8x16_t v63;
  __int128 v64;
  unsigned __int32 v65;
  int8x16_t v66;
  int8x16_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  float32x4_t v75;
  int8x16_t v76;
  int8x16_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float v87;
  float v88;
  double v89;
  double v90;
  double v91;
  float32x4_t* v92;
  float v93;
  float32x4_t v94;
  double v95;
  double v96;
  double v97;
  float32x4_t v98;
  int32x2_t v99;
  float v100;
  float v101;
  float v102;
  __int128 v103;
  float v104;
  float v105;
  float v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  float32x4_t v114;
  int8x16_t v115;
  int8x16_t v116;
  int8x16x2_t v117;
  int8x16x2_t v118;
  int8x16x2_t v119;
  int8x16x2_t v120;
  int8x16x2_t v121;
  int8x16x2_t v122;

  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
  v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
  v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
  v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
  v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
  v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
  v3 = *(_QWORD*)(a1 + 8);
  **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
  v4 = *(float32x4_t**)a3;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a5680) != 0) {
    v107 = *((_QWORD*)GameData_212c2f8 + 1);
    *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
    *((_QWORD*)&GameData_21a5670 + 1) = v107;
    __cxa_guard_release((__int64)&GameData_21a5680),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
  }
  math_Quat_Slerp((void*)(&v116), (float32x4_t*)&GameData_21a5670,
                  (float32x4_t*)(v3 + 272), *(float*)(v3 + 480)),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
      v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
      v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
      v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
      v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
  v5 = vmulq_f32(v116, COERCE_AS(float32x4_t, GameData_1a829d0));
  v6 = vmulq_f32(v116, v116);
  LANES128(v6).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  LANES128(v6).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  LANES128(v6).n128_u64[1] = LANES128(v6).n128_u64[0];
  v7 = vrecpeq_f32(v6);
  v8 = vmulq_f32(v7, vrecpsq_f32(v7, v6));
  v9 = vbslq_s8(vceqzq_f32(v6), v5,
                vmulq_f32(v5, vmulq_f32(v8, vrecpsq_f32(v8, v6))));
  v119.val[1] = v9;
  LANES128(v119.val[1]).n128_u32[3] = 0;
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v119.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v6).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  LANES128(v5).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v119.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  v11 = LANES64_OF(
            vqtbl1_s8(v119.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v10).n128_i8[8] =
      vqtbl1_s8(v119.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v6).n128_u64[1] = LANES128(v10).n128_u64[1];
  LANES128(v5).n128_u64[1] = v11;
  v12 = vmulq_f32(v10, v119.val[1]);
  LANES128(v119.val[1]).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v119.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v13 = vmulq_f32(v6, v6);
  v117.val[1] = vmulq_f32(v5, v5);
  v14 = vaddq_f32(v12, v12);
  LANES128(v119.val[1]).n128_u64[1] = v11;
  v15 = vmulq_laneq_f32(v119.val[1], v9, 3);
  v117.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v117.val[1], v117.val[1]), vaddq_f32(v13, v13)));
  v16 = vaddq_f32(v15, v15);
  v121.val[0] = vaddq_f32(v14, v16);
  v121.val[1] = vsubq_f32(v14, v16);
  LANES128(v117.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v121, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  LANES128(v119.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v121, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v119.val[1]).n128_i8[8] =
      vqtbl2_s8(v121, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v117.val[1]).n128_i8[8] =
      vqtbl2_s8(v121, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v119.val[0] = v117.val[0];
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v119, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl2_s8(v119, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
  LANES128(v121.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v119, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v121.val[0]).n128_i8[8] =
      vqtbl2_s8(v119, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
  LANES128(v119.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v117, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  v119.val[1] = v4[2];
  *(int8x8_t*)&LANES128(v119.val[0]).n128_i8[8] =
      vqtbl2_s8(v117, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
  v117.val[0] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v14, COERCE_FLOAT(*(_OWORD*)&v4[1])),
                     v121.val[0],
                     COERCE_AS(float32x2_t, LANES128(v4[1]).n128_u64[0]), 1),
      v119.val[0], v4[1], 2);
  *v4 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v14, COERCE_FLOAT(*v4)), v121.val[0],
                     COERCE_AS(float32x2_t, LANES128(*(v4)).n128_u64[0]), 1),
      v119.val[0], *v4, 2);
  v117.val[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(v14, LANES128(v119.val[1]).n128_f32[0]), v121.val[0],
          COERCE_AS(float32x2_t, LANES128(v119.val[1]).n128_u64[0]), 1),
      v119.val[0], v119.val[1], 2);
  *(int8x16x2_t*)LANES128(v4[1]).n128_u64 = v117;
  *(_QWORD*)(v3 + 368) = LANES128(v117.val[1]).n128_u64[0];
  v117.val[0] = *(int8x16_t*)(v3 + 368);
  v17 = *(float32x2_t**)(v3 + 320);
  LANES128(v117.val[0]).n128_u64[1] = LANES128(v117.val[1]).n128_u32[2];
  v117.val[1] = vmulq_f32(v117.val[0], v117.val[0]);
  LANES128(v117.val[1]).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v117.val[1], v117.val[1], 8u))
                                 .n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v117.val[1]).n128_u64[0])))
          .n64_u64[0];
  LANES128(v117.val[1]).n128_u64[0] =
      LANES64_OF(
          vpadd_f32(COERCE_AS(float32x2_t, LANES128(v117.val[1]).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v117.val[1]).n128_u64[0])))
          .n64_u64[0];
  LANES128(v117.val[1]).n128_u64[1] = LANES128(v117.val[1]).n128_u64[0];
  v119.val[0] = vrsqrteq_f32(v117.val[1]);
  v119.val[0] =
      vmulq_f32(v119.val[0],
                vrsqrtsq_f32(v119.val[0], vmulq_f32(v117.val[1], v119.val[0])));
  *(int8x16_t*)(v3 + 368) = vbicq_s8(
      vmulq_f32(v117.val[0],
                vmulq_f32(v119.val[0],
                          vrsqrtsq_f32(v119.val[0],
                                       vmulq_f32(v117.val[1], v119.val[0])))),
      vceqzq_f32(v117.val[1]));
  v117.val[0] = v4[3];
  *(_QWORD*)(v3 + 336) = LANES128(v117.val[0]).n128_u64[0];
  v117.val[1] = *(int8x16_t*)(v3 + 336);
  LANES128(v117.val[1]).n128_u64[1] = LANES128(v117.val[0]).n128_u32[2];
  *(int8x16_t*)(v3 + 336) = v117.val[1];
  v117.val[0] = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(*v4, COERCE_FLOAT(*(_OWORD*)LANES64(v17[4]).n64_u64)),
          v4[1], v17[4], 1),
      v4[2], *(float32x4_t*)LANES64(v17[4]).n64_u64, 2);
  *(_QWORD*)(v3 + 352) = LANES128(v117.val[0]).n128_u64[0];
  v117.val[1] = *(int8x16_t*)(v3 + 352);
  LANES128(v117.val[1]).n128_u64[1] = LANES128(v117.val[0]).n128_u32[2];
  v117.val[0] = vmulq_f32(v117.val[1], v117.val[1]);
  LANES128(v117.val[0]).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v117.val[0], v117.val[0], 8u))
                                 .n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v117.val[0]).n128_u64[0])))
          .n64_u64[0];
  LANES128(v117.val[0]).n128_u64[0] =
      LANES64_OF(
          vpadd_f32(COERCE_AS(float32x2_t, LANES128(v117.val[0]).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v117.val[0]).n128_u64[0])))
          .n64_u64[0];
  LANES128(v117.val[0]).n128_u64[1] = LANES128(v117.val[0]).n128_u64[0];
  v119.val[0] = vrsqrteq_f32(v117.val[0]);
  v119.val[0] =
      vmulq_f32(v119.val[0],
                vrsqrtsq_f32(v119.val[0], vmulq_f32(v117.val[0], v119.val[0])));
  v18 = vbicq_s8(
      vmulq_f32(v117.val[1],
                vmulq_f32(v119.val[0],
                          vrsqrtsq_f32(v119.val[0],
                                       vmulq_f32(v117.val[0], v119.val[0])))),
      vceqzq_f32(v117.val[0]));
  LANES128(v117.val[1]).n128_u32[0] = *(_DWORD*)(v3 + 144);
  *(int8x16_t*)(v3 + 352) = v18;
  v19 = (float)(*(float*)(v3 + 156) * LANES128(v117.val[1]).n128_f32[0]) *
        *(float*)(v3 + 104);
  if (v19 > 0x0.0p+0f && (*(_BYTE*)(v3 + 16) & 1) != 0) {
    v20 = *(_DWORD*)(v3 + 432);
    if ((unsigned int)(v20 - 2) >= 2) {
      if (v20 != 0) {
        v27 = *(float32x4_t*)(v3 + 384);
      }
      else {
        PSEUDO_LOW_LANE128(v18, n128_u64, 0);
        v30 = *(float*)(*(_QWORD*)GameData_212d270 + 504LL);
        if (v30 > 0x0.0p+0f) {
          PSEUDO_LOW_LANE128(
              v18, n128_u32,
              COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f)));
          if (v30 < 0x1.0000000000000p+0f) {
            v31 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 496LL) +
                                    16LL) *
                          0x1.0aef000000000p+4f) /
                  0x1.f400000000000p+9f;
            PSEUDO_LOW_LANE128(v18, n128_u64, 0);
            if (v31 > 0x0.0p+0f) {
              PSEUDO_LOW_LANE128(
                  v18, n128_f32,
                  0x1.0000000000000p+0f -
                      GameRoutine_1a0a550(0x1.0000000000000p+0f - v30,
                                          v31 * 0x1.df851e0000000p+4f)),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(double, "d0", "=w")),
                  v90 = COERCE_AS(__typeof__(v90),
                                  PSEUDO_REGISTER(double, "d0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(double, "d0", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(double, "d0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(double, "d0", "=w")),
                  v97 = COERCE_AS(__typeof__(v97),
                                  PSEUDO_REGISTER(double, "d0", "=w"));
            }
          }
        }
        game_109da60((void*)(&v116), (float32x4_t*)(v3 + 384),
                     (float32x4_t*)(v3 + 352), v18),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
            v90 =
                COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
            v91 =
                COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
        v32 = v116;
        *(_DWORD*)(v3 + 436) = 0;
        *(_QWORD*)(v3 + 384) = LANES128(v32).n128_u64[0];
        v34 = *(float32x4_t*)(v3 + 368);
        v33 = *(float32x4_t*)(v3 + 384);
        LANES128(v33).n128_u64[1] = LANES128(v32).n128_u32[2];
        v35 = *(float32x4_t*)(v3 + 352);
        *(float32x4_t*)(v3 + 384) = v33;
        v36 = vsubq_f32(v33, v35);
        v37 = vsubq_f32(v34, v35);
        v38 = vmulq_f32(v36, v36);
        v39 = vmulq_f32(v37, v37);
        LANES128(v38).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
                .n64_u64[0];
        LANES128(v39).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v39, v39, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
                .n64_u64[0];
        LANES128(v39).n128_u64[0] =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]))))
                .n64_u64[0];
        PSEUDO_LOW_LANE128(
            v39, n128_f32,
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]))))
                    .n64_f32[0] /
                LANES128(v39).n128_f32[0]);
        v40 = 0x1.0000000000000p+0f;
        if (LANES128(v39).n128_f32[0] <= 0x1.0000000000000p+0f) {
          v40 = LANES128(v39).n128_f32[0];
        }
        if (!(LANES128(v39).n128_f32[0] < 0x0.0p+0f)) {
          PSEUDO_LOW_LANE128(v39, n128_f32, v40);
        }
        else {
          PSEUDO_LOW_LANE128(v39, n128_f32, 0x0.0p+0f);
        }
        game_109da60((void*)(&v116), (float32x4_t*)(v3 + 352),
                     (float32x4_t*)(v3 + 368), v39),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
            v90 =
                COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
            v91 =
                COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
        v41 = LANES128(v116).n128_u32[2];
        *(_QWORD*)(v3 + 384) = LANES128(v116).n128_u64[0];
        v27 = *(float32x4_t*)(v3 + 384);
        LANES128(v27).n128_u64[1] = v41;
        *(float32x4_t*)(v3 + 384) = v27;
      }
    }
    else {
      v21 = 0x1.0000000000000p+1f;
      if (v20 == 3) {
        v21 = 0x1.4000000000000p+2f;
      }
      v22 = v21 * *(float*)(*(_QWORD*)GameData_212d270 + 504LL);
      PSEUDO_LOW_LANE128(v18, n128_u64, 0);
      if (v22 > 0x0.0p+0f) {
        PSEUDO_LOW_LANE128(v18, n128_u32,
                           COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f)));
        if (v22 < 0x1.0000000000000p+0f) {
          v23 =
              (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 496LL) + 16LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f;
          PSEUDO_LOW_LANE128(v18, n128_u64, 0);
          if (v23 > 0x0.0p+0f) {
            PSEUDO_LOW_LANE128(
                v18, n128_f32,
                0x1.0000000000000p+0f -
                    GameRoutine_1a0a550(0x1.0000000000000p+0f - v22,
                                        v23 * 0x1.df851e0000000p+4f)),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(double, "d0", "=w")),
                v90 = COERCE_AS(__typeof__(v90),
                                PSEUDO_REGISTER(double, "d0", "=w")),
                v91 = COERCE_AS(__typeof__(v91),
                                PSEUDO_REGISTER(double, "d0", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(double, "d0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(double, "d0", "=w")),
                v97 = COERCE_AS(__typeof__(v97),
                                PSEUDO_REGISTER(double, "d0", "=w"));
          }
        }
      }
      game_109da60((void*)(&v116), (float32x4_t*)(v3 + 384),
                   (float32x4_t*)(v3 + 352), v18),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
          v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
          v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
      v24 = LANES128(v116).n128_u32[2];
      v25 = *(_DWORD*)(v3 + 436);
      v26 = __OFSUB__(v25--, 1);
      *(_QWORD*)(v3 + 384) = LANES128(v116).n128_u64[0];
      *(_DWORD*)(v3 + 436) = v25;
      v27 = *(float32x4_t*)(v3 + 384);
      LANES128(v27).n128_u64[1] = v24;
      *(float32x4_t*)(v3 + 384) = v27;
      if ((v25 < 0) ^ v26 | (v25 == 0)) {
        v28 = vmulq_f32(v27, *(float32x4_t*)(v3 + 352));
        LANES128(v28).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                .n64_f32[0] > 0x1.fffd320000000p-1f) {
          *(_DWORD*)(v3 + 432) = 0;
        }
      }
    }
    v42 = *(float*)(v3 + 492);
    v43 = vsubq_f32(*(float32x4_t*)(v3 + 128), *(float32x4_t*)(v3 + 336));
    v44 = vmulq_f32(v43, v43);
    LANES128(v44).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v44, v44, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
            .n64_u64[0];
    LANES128(v44).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
            .n64_u64[0];
    LANES128(v44).n128_u64[1] = LANES128(v44).n128_u64[0];
    v45 = vrsqrteq_f32(v44);
    v46 = vmulq_f32(v45, vrsqrtsq_f32(v45, vmulq_f32(v44, v45)));
    v47 = vbicq_s8(
        vmulq_f32(v43, vmulq_f32(v46, vrsqrtsq_f32(v46, vmulq_f32(v44, v46)))),
        vceqzq_f32(v44));
    v48 = vmulq_f32(v27, v47);
    v116 = v47;
    LANES128(v48).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
            .n64_u64[0];
    LANES128(v48).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v48).n128_f32[0] > 0x1.0000000000000p+0f) {
      v49 = 0x1.0000000000000p+0f;
    }
    else {
      v49 = LANES128(v48).n128_f32[0];
    }
    if (!(LANES128(v48).n128_f32[0] < -0x1.0000000000000p+0f)) {
      v50 = v49;
    }
    else {
      v50 = -0x1.0000000000000p+0f;
    }
    v51 = sqrtf(0x1.0000000000000p+0f - (float)(v50 * v50));
    v52 = v42 * 0x1.1df46a0000000p-6f;
    if (!(v50 < 0x0.0p+0f)) {
      v55 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
      v56 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
      v57 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
      v58 = v50 / v51;
      v59 = v51 / v50;
      v60 = 0x1.921fb60000000p+0f -
            (float)(PSEUDO_UNFUSED(
                v58 *
                (float)((float)((float)((float)((float)(v57 +
                                                        (float)((float)((float)((float)(v56 + (float)((
                                                                                                          float)((float)((float)(v55 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v58 * v58)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                   1)) *
                                                                                                                                               (float)(v58 *
                                                                                                                                                       v58))) *
                                                                                                                         (float)(v58 *
                                                                                                                                 v58)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v58 *
                                                                                                              v58))) *
                                                                                (float)(v58 *
                                                                                        v58)) -
                                                                        *(float*)((char*)((
                                                                                      __int128*)0x10LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                  4)) *
                                                                (float)(v58 *
                                                                        v58))) *
                                                (float)(v58 * v58)) -
                                        *(float*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  12)) *
                                (float)(v58 * v58)) +
                        0x1.0000000000000p+0f)));
      v54 =
          v59 *
          (float)((
                      float)((float)((float)((float)(v57 +
                                                     (float)((float)((float)((
                                                                                 float)(v56 + (float)((
                                                                                                          float)((float)((float)(v55 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v59 * v59)) - *((float*)GameData_212c2f0 + 1)) * (float)(v59 * v59))) * (float)(v59 * v59)) - *(float*)((
                                                                                                                                                                                                                                                                                                               char*)((_UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                                                               GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                           4)) *
                                                                                                      (float)(v59 *
                                                                                                              v59))) *
                                                                             (float)(v59 *
                                                                                     v59)) -
                                                                     *(float*)((char*)((
                                                                                   __int128*)0x10LL) +
                                                                               (_QWORD)
                                                                                   GameData_212c2f0 +
                                                                               4)) *
                                                             (float)(v59 *
                                                                     v59))) *
                                             (float)(v59 * v59)) -
                                     *(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c2f0 + 12)) *
                             (float)(v59 * v59)) +
                  0x1.0000000000000p+0f);
      if (v50 <= 0x1.6a09e60000000p-1f) {
        v54 = v60;
      }
    }
    else if (!(v50 < -0x1.6a09e60000000p-1f)) {
      v61 = (float)-v50 / v51;
      v54 =
          (float)(PSEUDO_UNFUSED(
              v61 * (float)((float)((float)-(
                                        float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                         (_QWORD)
                                                             GameData_212c2f0 +
                                                         12) -
                                               (float)((
                                                           float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((
                                                                                                                                                                                                                                                                                                               char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v61 *
                                                                                                                                                                                                                                                                                                                                                                                                v61))) *
                                                                                                                                                                                                                                                                                                       (float)(v61 *
                                                                                                                                                                                                                                                                                                               v61))) *
                                                                                                                                                                                                                                                                                    (float)(v61 *
                                                                                                                                                                                                                                                                                            v61))) *
                                                                                                                                                                                                                                                            (float)(v61 *
                                                                                                                                                                                                                                                                    v61))) *
                                                                                                                                                                         (float)(v61 *
                                                                                                                                                                                 v61))) *
                                                                          (float)(v61 *
                                                                                  v61))) *
                                                       (float)(v61 * v61))) *
                                    (float)(v61 * v61)) +
                            0x1.0000000000000p+0f))) +
          0x1.921fb60000000p+0f;
    }
    else {
      v53 = (float)-v51 / v50;
      v54 =
          0x1.921fb60000000p+1f -
          (float)(PSEUDO_UNFUSED(
              v53 * (float)((
                                float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12) - (float)((
                                                                                                                                           float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8) + (float)((
                                                                                                                                                                                                                                     float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                              4) -
                                                                                                                                                                                                                                                    (float)((
                                                                                                                                                                                                                                                                float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                                                                                                                  (float)((
                                                                                                                                                                                                                                                                                                                                                                              float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                    float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         GameData_212c2f0 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     (float)(v53 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             v53))) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                (float)(v53 * v53))) *
                                                                                                                                                                                                                                                                                                                                                                          (float)(v53 *
                                                                                                                                                                                                                                                                                                                                                                                  v53))) *
                                                                                                                                                                                                                                                                                                                                                  (float)(v53 *
                                                                                                                                                                                                                                                                                                                                                          v53))) *
                                                                                                                                                                                                                                                            (float)(v53 * v53))) *
                                                                                                                                                                                                                                 (float)(v53 *
                                                                                                                                                                                                                                         v53))) *
                                                                                                                                       (float)(v53 *
                                                                                                                                               v53))) *
                                       (float)(v53 * v53)) +
                            0x1.0000000000000p+0f)));
    }
    if (v52 < v54) {
      game_109e470((void*)(&v115), (int32x2_t*)(v3 + 384), (int32x2_t*)&v116,
                   v52 / v54),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
          v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
          v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
      v48 = v115;
      LANES128(v62).n128_u64[0] = LANES128(v115).n128_u64[0];
      LANES128(v62).n128_u64[1] = LANES128(v115).n128_u32[2];
      v116 = v62;
    }
    PSEUDO_LOW_LANE128(v48, n128_f32, v19 * *(float*)(v3 + 456));
    game_109da60((void*)(&v115), (float32x4_t*)(v3 + 384), &v116, v48),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
    v63 = v115;
    *(_QWORD*)(v3 + 416) = LANES128(v115).n128_u64[0];
    v64 = *(_OWORD*)(v3 + 416);
    *((_QWORD*)&v64 + 1) = LANES128(v63).n128_u32[2];
    LANES128(v63).n128_f32[0] = v19 * *(float*)(v3 + 468);
    *(_OWORD*)(v3 + 416) = v64;
    game_109da60((void*)(&v115), (float32x4_t*)(v3 + 384), &v116, v63),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
    v65 = LANES128(v115).n128_u32[2];
    *(_QWORD*)(v3 + 400) = LANES128(v115).n128_u64[0];
    v67 = *(int8x16_t*)(v3 + 384);
    v66 = *(int8x16_t*)(v3 + 400);
    LANES128(v68).n128_u64[0] = *(_QWORD*)(v3 + 400);
    LANES128(v68).n128_u64[1] = v65;
    LANES128(v69).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v69).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v66).n128_u64[1] = LANES128(v68).n128_u64[1];
    *(float32x4_t*)(v3 + 400) = v68;
    LANES128(v71).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v71).n128_i8[8] =
        vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v72 = vmulq_f32(v69, v71);
    *(int8x8_t*)&LANES128(v70).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v71).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v71).n128_i8[8] =
        vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v73 = vmulq_f32(v68, v67);
    LANES128(v68).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v68).n128_u64[1] = 0x3F0000003F000000LL;
    LANES128(v73).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v73, v73, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0])))
            .n64_u64[0];
    LANES128(v67).n128_u64[0] = 0x3F8000003F800000LL;
    LANES128(v67).n128_u64[1] = 0x3F8000003F800000LL;
    LANES128(v73).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0])))
            .n64_u64[0];
    LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
    v74 = vaddq_f32(v73, v67);
    v75 = vsqrtq_f32(vaddq_f32(v74, v74));
    v76 = vdivq_f32(vmlsq_f32(v72, v71, v70), v75);
    LANES128(v76).n128_u32[3] = LANES128_OF(vmulq_f32(v75, v68)).n128_u32[3];
    LANES128(v75).n128_u64[0] = 0x3400000034000000LL;
    LANES128(v75).n128_u64[1] = 0x3400000034000000LL;
    v77 = vbslq_s8(vcgeq_f32(v75, v74), COERCE_AS(int8x16_t, GameData_1a82dd0),
                   v76);
    *(_QWORD*)(v3 + 272) = LANES128(v77).n128_u64[0];
    *(_QWORD*)(v3 + 280) = LANES128_OF(vextq_s8(v77, v77, 8u)).n128_u64[0];
    v118.val[1] = *(int8x16_t*)(v3 + 272);
    LANES128(v118.val[1]).n128_u32[3] = 0;
    LANES128(v78).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v118.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v68).n128_u64[0] =
        LANES64_OF(
            vrev64_s32(COERCE_AS(int32x2_t, LANES128(v118.val[1]).n128_u64[0])))
            .n64_u64[0];
    LANES128(v70).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v118.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
            .n64_u64[0];
    LANES128(v71).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v118.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v78).n128_i8[8] =
        vqtbl1_s8(v118.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v68).n128_u64[1] = LANES128(v78).n128_u64[1];
    LANES128(v70).n128_u64[1] = LANES128(v71).n128_u64[0];
    v79 = vmulq_f32(v78, v118.val[1]);
    LANES128(v118.val[1]).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v118.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v80 = vmulq_f32(v68, v68);
    v120.val[1] = vmulq_f32(v70, v70);
    v81 = vaddq_f32(v79, v79);
    LANES128(v118.val[1]).n128_u64[1] = LANES128(v71).n128_u64[0];
    v82 = vmulq_laneq_f32(v118.val[1], *(float32x4_t*)(v3 + 272), 3);
    v83 = vaddq_f32(v82, v82);
    v120.val[0] = vsubq_f32(
        COERCE_AS(float32x4_t, GameData_1a837f0),
        vaddq_f32(vaddq_f32(v120.val[1], v120.val[1]), vaddq_f32(v80, v80)));
    v122.val[0] = vaddq_f32(v81, v83);
    v122.val[1] = vsubq_f32(v81, v83);
    LANES128(v120.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v122, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
            .n64_u64[0];
    LANES128(v118.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v122, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v118.val[1]).n128_i8[8] =
        vqtbl2_s8(v122, COERCE_AS(int8x8_t, 0x706050413121110LL));
    *(int8x8_t*)&LANES128(v120.val[1]).n128_i8[8] =
        vqtbl2_s8(v122, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
    v118.val[0] = v120.val[0];
    LANES128(v81).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v118, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v81).n128_i8[8] =
        vqtbl2_s8(v118, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
    LANES128(v122.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v118, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v122.val[0]).n128_i8[8] =
        vqtbl2_s8(v118, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
    LANES128(v118.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v120, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v118.val[0]).n128_i8[8] =
        vqtbl2_s8(v120, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
    v120.val[0] = v4[1];
    v122.val[1] = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v81, COERCE_FLOAT(*v4)), v122.val[0],
                       COERCE_AS(float32x2_t, LANES128(*(v4)).n128_u64[0]), 1),
        v118.val[0], *v4, 2);
    v118.val[1] = vmulq_n_f32(v81, LANES128(v120.val[0]).n128_f32[0]);
    v84 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v81, COERCE_FLOAT(*(_OWORD*)&v4[2])),
                       v122.val[0],
                       COERCE_AS(float32x2_t, LANES128(v4[2]).n128_u64[0]), 1),
        v118.val[0], v4[2], 2);
    *v4 = v122.val[1];
    v4[1] = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            v118.val[1], v122.val[0],
            COERCE_AS(float32x2_t, LANES128(v120.val[0]).n128_u64[0]), 1),
        v118.val[0], v120.val[0], 2);
    v4[2] = v84;
  }
  else {
    *(_DWORD*)(v3 + 432) = 0;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a5680) != 0) {
      v108 = *((_QWORD*)GameData_212c2f8 + 1);
      *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
      *((_QWORD*)&GameData_21a5670 + 1) = v108;
      __cxa_guard_release((__int64)&GameData_21a5680),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
          v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
          v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
    }
    v29 = COERCE_AS(int8x16_t, GameData_21a5670);
    *(_QWORD*)(v3 + 272) = GameData_21a5670;
    *(_QWORD*)(v3 + 280) = LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u64[0];
  }
  if (*(_BYTE*)(v3 + 16) == 1 && *(_QWORD*)(v3 + 264) != 0) {
    v85 = (__typeof__(v85)){0};
    v86 = (__typeof__(v86)){0};
    v87 = (float)(*(float*)(v3 + 156) * *(float*)(v3 + 144)) *
          *(float*)(v3 + 104);
    if (v87 > 0x0.0p+0f) {
      v88 = (float)(*(float*)(v3 + 156) * *(float*)(v3 + 144)) *
            *(float*)(v3 + 104);
      GameRoutine_1a09ff0(),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
          v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
          v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
      *(float*)&v89 = v89;
      v113 = LODWORD(v89);
      v87 = v88;
      GameRoutine_1a0a000(),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
          v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
          v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
      *(float*)&v90 = v90;
      v111 = LODWORD(v90);
      GameRoutine_1a09ff0(),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
          v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
          v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
      *(float*)&v91 = v91;
      v85 = (__typeof__(v85)){0};
      LANES128(v86).n128_u64[0] = __PAIR64__(v111, v113);
      LANES128(v86).n128_u64[1] = LODWORD(v91);
    }
    v92 = *(float32x4_t**)(v3 + 448);
    v93 = 0x1.0000000000000p+0f;
    if (v92 != nullptr) {
      v94 = v92[5];
      v85 = v94;
      LANES128(v85).n128_u32[3] = 0;
      if (LANES128(v94).n128_f32[0] != 0x0.0p+0f ||
          LANES128(v94).n128_f32[1] != 0x0.0p+0f) {
        v114 = v86;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a61b0) != 0) {
          v109 = *((_QWORD*)GameData_212c560 + 1);
          *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
          *((_QWORD*)&GameData_21a61a0 + 1) = v109;
          __cxa_guard_release((__int64)&GameData_21a61b0),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(double, "d0", "=w")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(double, "d0", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(double, "d0", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(double, "d0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(double, "d0", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d0", "=w"));
        }
        GameRoutine_1a09ff0(),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
            v90 =
                COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
            v91 =
                COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
        *(float*)&v95 = v95;
        v112 = LODWORD(v95);
        GameRoutine_1a0a000(),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
            v90 =
                COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
            v91 =
                COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
        *(float*)&v96 = v96;
        v110 = LODWORD(v96);
        GameRoutine_1a09ff0(),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
            v90 =
                COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(double, "d0", "=w")),
            v91 =
                COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(double, "d0", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d0", "=w"));
        *(float*)&v97 = v97;
        LANES128(v98).n128_u64[0] = __PAIR64__(v110, v112);
        v86 = v114;
        LANES128(v98).n128_u64[1] = LODWORD(v97);
        v85 = vmulq_n_f32(v98, 0x1.0000000000000p+0f - v87);
        v93 = *(float*)(*(_QWORD*)(v3 + 448) + 16LL);
      }
    }
    if (*(_QWORD*)(v3 + 264) != 0) {
      LANES64(v99).n64_u64[0] = LANES128_OF(vaddq_f32(v86, v85)).n128_u64[0];
      *(int32x2_t*)(v3 + 288) = vrev64_s32(v99);
      v100 = 0x1.3333340000000p-3f;
      v101 = vmuls_lane_f32(0x1.99999a0000000p-3f, v99, 1);
      if (!(v101 > 0x1.3333340000000p-3f)) {
        v100 = v101;
      }
      if (!(v101 < -0x1.3333340000000p-3f)) {
        v102 = v100;
      }
      else {
        v102 = -0x1.3333340000000p-3f;
      }
      v103 = *(_OWORD*)(v3 + 288);
      *(float*)(v3 + 304) = v102;
      *((_QWORD*)&v103 + 1) = LODWORD(v93);
      v104 = -0x1.0a3d700000000p-3f * LANES64(v99).n64_f32[0];
      v105 = 0x1.47ae140000000p-5f;
      if (!(v104 > 0x1.47ae140000000p-5f)) {
        v105 = v104;
      }
      *(_OWORD*)(v3 + 288) = v103;
      if (!(v104 < -0x1.47ae140000000p-4f)) {
        v106 = v105;
      }
      else {
        v106 = -0x1.47ae140000000p-4f;
      }
      *(float*)(v3 + 308) = v106;
    }
  }
}

__int64 llvm_libcxx_21_libcxx_include___functional_171ea10(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  void (**v4)(__int64);

  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v1 + 1096) -= 16LL;
  v2 = *(_QWORD*)(a1 + 16);
  v3 = *(unsigned __int8*)(v2 + 79);
  *(_BYTE*)(v2 + 108) = 0;
  if (v3 == 1) {
    v4 = (void (**)(__int64))(*(_QWORD*)v2 + 520LL);
  }
  else {
    v4 = (void (**)(__int64))(*(_QWORD*)v2 + 504LL);
    if (*(_QWORD*)(*(_QWORD*)(v2 + 8) + 336LL) == v2) {
      v4 = (void (**)(__int64))(*(_QWORD*)v2 + 512LL);
    }
  }
  (*v4)(v2);
  ProcDeliveryAnimalMenu_171e560(v1);
  return 3;
}

__int64 llvm_libcxx_21_libcxx_include___functional_1720150(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  void (**v4)(__int64);

  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v1 + 1088) -= 16LL;
  v2 = *(_QWORD*)(a1 + 16);
  v3 = *(unsigned __int8*)(v2 + 79);
  *(_BYTE*)(v2 + 96) = 0;
  if (v3 == 1) {
    v4 = (void (**)(__int64))(*(_QWORD*)v2 + 520LL);
  }
  else {
    v4 = (void (**)(__int64))(*(_QWORD*)v2 + 504LL);
    if (*(_QWORD*)(*(_QWORD*)(v2 + 8) + 336LL) == v2) {
      v4 = (void (**)(__int64))(*(_QWORD*)v2 + 512LL);
    }
  }
  (*v4)(v2);
  ProcDeliveryTransportMenu_171fd50(v1);
  GameData_2262bf8 = 0;
  return 3;
}

#pragma GCC visibility pop
