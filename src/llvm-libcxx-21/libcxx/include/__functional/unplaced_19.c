#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* llvm_libcxx_21_libcxx_include___vector_bf9ca0(__int64,
                                                      unsigned __int64*,
                                                      __int64, __int64**);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void game_109da60(PSEUDO_X8, float32x4_t*,
                                             float32x4_t*, int8x16_t result);
__int64* GameRoutine_b3f6c0(_QWORD*, const char*);
__int64* GameRoutine_b3f800(_QWORD*, const char*);
__int64 CharacterSelfShadow_bf8a00(__int64 result, float*, __int64, char);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a82ea0;
extern __int128 GameData_1a82f20;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6180;
extern __int64 GameData_212d270;
extern __int64 fw_memory_g_heap_manager_ptr;
float GameRoutine_1a0a550(float, float);
float GameRoutine_1a0a6a0(float, float);
float GameRoutine_1a0a820(float);
float GameRoutine_5eaef0(__int64, float32x4_t*, float, float, float, float,
                         double, double);
float32x4_t game_10d95c0(__int64);
int __cxa_guard_acquire(__int64);
long double game_10d9a00(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a78a90();
void __attribute__((noreturn)) GameRoutine_bc84a0();
void __attribute__((noreturn)) GameRoutine_bf89e0();
void __attribute__((noreturn)) GameRoutine_bfa4d0();
void __attribute__((noreturn)) GameRoutine_bfa4f0();
void __attribute__((noreturn)) GameRoutine_bfa510();
void __attribute__((noreturn)) GameRoutine_bfa530();
void __cxa_guard_release(__int64);
void gfx_render_b3aee0(float32x4_t*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
float llvm_libcxx_21_libcxx_include___functional_a5cfa0();
void llvm_libcxx_21_libcxx_include___functional_bf3cc0(__int64 a1, __int64 a2);
void llvm_libcxx_21_libcxx_include___functional_bf4660(__int64 a1, __int64 a2);
void llvm_libcxx_21_libcxx_include___functional_10a98e0(__int64 a1, float a2,
                                                        float a3, float a4);

float llvm_libcxx_21_libcxx_include___functional_a5cfa0()
{

#pragma clang fp contract(off)
  __int128* v0;
  float32x4_t* v1;
  float32x4_t* v2;
  __int64 v3;
  __int128* v4;
  __int128 v5;
  __int128 v6;
  __int64 v7;
  __int64 v8;
  __int128 v9;
  __int128 v10;
  __int64 v11;
  float result;
  struct {
    _QWORD v13[4];
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    int v19;
    char gap76_[4];
    char v20;
  } v13_;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = v0;
  collision_670c60((void*)((__int64)v13_.v13), v1, v2, v3),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v4 != nullptr && v13_.v20 != 0) {
    v5 = *(_OWORD*)v13_.v13;
    v6 = *(_OWORD*)&v13_.v13[2];
    v7 = v13_.v17;
    *((_QWORD*)v4 + 6) = v13_.v16;
    *((_QWORD*)v4 + 7) = v7;
    v8 = v13_.v18;
    *(_QWORD*)v4 = v5;
    *((_QWORD*)v4 + 2) = v6;
    v9 = *v4;
    v10 = v4[1];
    *((_QWORD*)v4 + 8) = v8;
    *((_QWORD*)&v9 + 1) = DWORD2(v5);
    *((_QWORD*)&v10 + 1) = DWORD2(v6);
    *((_DWORD*)v4 + 18) = v13_.v19;
    v11 = v13_.v15;
    *((_QWORD*)v4 + 4) = v13_.v14;
    *((_QWORD*)v4 + 5) = v11;
    *v4 = v9;
    v4[1] = v10;
  }
  {
    __typeof__(result) z_ = (__typeof__(result)){0};
    LODWORD(z_) = v5;
    result = z_;
  }
  return result;
}

void llvm_libcxx_21_libcxx_include___functional_bf3cc0(__int64 a1, __int64 a2)
{
  unsigned int v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  int32x4_t v11;
  int32x4_t v12;
  int32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  __int64* v21;
  float32x4_t v22;
  float* v23;
  __int128 v24;
  __int128 v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  _BYTE* v33;
  _BYTE* v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t* v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  float v41;
  float32x4_t v42;
  float v43;
  unsigned __int32 v44;
  float v45;
  float32x4_t v46;
  float32x4_t v47;
  float v48;
  float v49;
  float32x4_t v50;
  float v51;
  float v52;
  bool v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  float v61;
  __int64 v62;
  float32x4_t v63;
  float32x4_t v64;
  float v65;
  float32x4_t v66;
  float v67;
  __int64 v68;
  float32x4_t v69;
  float32x4_t v70;
  float v71;
  float32x4_t v72;
  float v73;
  float32x4_t v74;
  float32x4_t v75;
  float v76;
  float32x4_t v77;
  float v78;
  unsigned __int64 v79;
  __int64 v80;
  _QWORD* i;
  __int64 v82;
  __int64 v83;
  float v84;
  __int64 v85;
  unsigned __int64 v86;
  float* v87;
  unsigned __int64 v88;
  void* v89;
  int v90;
  float v91;
  float v92;
  unsigned __int64 v93;
  float v94;
  float v95;
  float v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  float v100;
  float v101;
  float v102;
  __int64 v103;
  __int64 v104;
  signed int v105;
  int v106;
  __int64 v107;
  __int64 v108;
  __int64 j;
  int v110;
  __int64 v111;
  int v112;
  int v113;
  int v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  __int64 v123;
  __int64 v124;
  float v125;
  __int64 v126;
  float v127;
  __int64 v128;
  float32x4_t v130;
  float32x4_t v131;
  int32x4_t v132;
  float32x4_t v133;
  int32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  int32x4_t v139;
  float32x4_t v140;
  float32x4_t v141;
  float32x4_t v142;
  float32x4_t v143;
  float32x4_t v144;
  long double v145;
  __int64 v146;
  float32x4_t v147;
  float32x4x4_t v148;
  unsigned __int64 v149;
  __int64* v150[2];

  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v2 = *(_DWORD*)(a1 + 152);
  v4 = 0;
  if ((v2 & 0x80000000) != 0) {
    v5 = 0;
  }
  else {
    v5 = 0;
    if ((signed int)v2 < (signed __int32)*(_DWORD*)a2) {
      v6 = (__int64*)(*(_QWORD*)(a2 + 112) + 48LL * v2);
      v4 = *v6;
      v5 = v6[1];
      if (v5 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
  }
  v7 = *(_QWORD*)(a1 + 56);
  v128 = v5;
  if (v7 != 0) {
    if (v7 >> 60 != 0) {
    LABEL_112:
      GameRoutine_bf89e0(),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        16 * v7, 16, 0),
    v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v9 = v8 + 16 * v7;
    v10 = v8;
  }
  else {
    v9 = 0;
    v10 = 0;
  }
  *(long double*)&v11 =
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v4 + 16LL))(v4),
         v115 =
             COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v116 =
             COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v117 =
             COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v119 =
             COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v120 =
             COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v121 =
             COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
         v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v132 = v12;
  v134 = v11;
  v139 = v13;
  v145 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v4 + 40LL))(v4),
  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v130 = COERCE_FLOAT32X4_T(
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v4 + 16LL))(v4)),
  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v131 = v14;
  v136 = v15;
  v142 = v16;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v21 = *(__int64**)(a1 + 48);
  if (v21 != nullptr) {
    LANES128(v22).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v22).n128_u64[1] = 0x3F0000003F000000LL;
    v23 = (float*)v10;
    v24 = GameData_1a82f20;
    v25 = GameData_1a82ea0;
    v26 = vsubq_f32(COERCE_AS(float32x4_t, 0),
                    vzip1q_s32(vzip2q_s32(v134, v132),
                               vzip2q_s32(v139, COERCE_AS(int32x4_t, 0))));
    v27 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v17, LANES128(v131).n128_f32[0]), v18,
                       COERCE_AS(float32x2_t, LANES128(v131).n128_u64[0]), 1),
        v19, v131, 2);
    v28 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v17, LANES128(v130).n128_f32[0]), v18,
                       COERCE_AS(float32x2_t, LANES128(v130).n128_u64[0]), 1),
        v19, v130, 2);
    v29 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v17, LANES128(v136).n128_f32[0]), v18,
                       COERCE_AS(float32x2_t, LANES128(v136).n128_u64[0]), 1),
        v19, v136, 2);
    v30 = v142;
    v31 = *(float32x4_t*)&v145;
    v135 = v29;
    v137 = v27;
    v140 = v28;
    v143 = v26;
    v32 = vaddq_f32(
        v20, vmlaq_laneq_f32(
                 vmlaq_lane_f32(
                     vmulq_n_f32(v17, LANES128(v30).n128_f32[0]), v18,
                     COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]), 1),
                 v19, v30, 2));
    v133 = v32;
    do {
      v33 = (_BYTE*)v21[4];
      v34 = (_BYTE*)v21[5];
      *((_OWORD*)v21 + 4) = v24;
      *((_OWORD*)v21 + 5) = v25;
      if (v33 != v34) {
        v35 = COERCE_AS(float32x4_t, v25);
        v36 = COERCE_AS(float32x4_t, v24);
        do {
          if (v33[16] == 1) {
            v37 = *(float32x4_t**)v33;
            if (*(_BYTE*)(*(_QWORD*)v33 + 32LL) == 1) {
              v36 = vminq_f32(v36, v37[3]);
              *((float32x4_t*)v21 + 4) = v36;
              v35 = vmaxq_f32(v35, v37[4]);
              *((float32x4_t*)v21 + 5) = v35;
            }
          }
          v33 += 24;
        } while (v33 != v34);
        v38 = vmulq_f32(vsubq_f32(v35, v36), v22);
        if (LANES128(v38).n128_f32[0] < LANES128(v38).n128_f32[1]) {
          LANES128(v38).n128_f32[0] = LANES128(v38).n128_f32[1];
        }
        if (LANES128(v38).n128_f32[0] < LANES128(v38).n128_f32[2]) {
          LANES128(v38).n128_f32[0] = LANES128(v38).n128_f32[2];
        }
        if (LANES128(v38).n128_f32[0] > 0x1.47ae140000000p-8f) {
          v39 = vmulq_f32(vaddq_f32(v35, v36), v22);
          v40 = vmulq_f32(v26, vsubq_f32(v39, v31));
          LANES128(v40).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
                  .n64_u64[0];
          v41 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
                  .n64_f32[0];
          if (v41 >= 0x0.0p+0f) {
            v42 = vaddq_f32(
                v32,
                vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v28, LANES128(v39).n128_f32[0]), v27,
                        COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]), 1),
                    v29, v39, 2));
            if (fabsf(
                    (float)(0x1.0000000000000p+0f / LANES128(v42).n128_f32[3]) *
                    LANES128(v42).n128_f32[0]) <= 0x1.0000000000000p+0f) {
              goto LABEL_31;
            }
            v43 = LANES128(v35).n128_f32[0];
            v44 = LANES128(v35).n128_u32[1];
            v45 = LANES128(v35).n128_f32[2];
            v46 = vmlaq_lane_f32(
                vmulq_n_f32(v28, LANES128(v35).n128_f32[0]), v27,
                COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]), 1);
            v47 = vaddq_f32(v32,
                            vmlaq_n_f32(v46, v29, LANES128(v35).n128_f32[2]));
            v48 = (float)(0x1.0000000000000p+0f / LANES128(v47).n128_f32[3]) *
                  LANES128(v47).n128_f32[0];
            v49 = LANES128(v36).n128_f32[2];
            v50 = vaddq_f32(v32,
                            vmlaq_n_f32(v46, v29, LANES128(v36).n128_f32[2]));
            v51 = (float)(0x1.0000000000000p+0f / LANES128(v50).n128_f32[3]) *
                  LANES128(v50).n128_f32[0];
            v52 = fabsf(v51);
            v53 = fabsf(v48) > 0x1.0000000000000p+0f &&
                  v52 > 0x1.0000000000000p+0f;
            if (!v53) {
              goto LABEL_31;
            }
            v61 = v48;
            if ((int)(LODWORD(v48) ^ LODWORD(v51)) < 0) {
              goto LABEL_31;
            }
            v62 = LANES128(v36).n128_u32[1];
            v63 = vmlaq_lane_f32(
                vmulq_n_f32(v28, v43), v27,
                COERCE_AS(
                    float32x2_t,
                    (LODWORD(v43) |
                     ((unsigned __int64)LANES128(v36).n128_u32[1] << 32))),
                1);
            v64 = vaddq_f32(v32, vmlaq_n_f32(v63, v29, v45));
            v65 = (float)(0x1.0000000000000p+0f / LANES128(v64).n128_f32[3]) *
                  LANES128(v64).n128_f32[0];
            if (fabsf(v65) <= 0x1.0000000000000p+0f) {
              goto LABEL_31;
            }
            if ((int)(LODWORD(v65) ^ LODWORD(v61)) < 0) {
              goto LABEL_31;
            }
            v66 = vaddq_f32(v32,
                            vmlaq_n_f32(v63, v29, LANES128(v36).n128_f32[2]));
            v67 = (float)(0x1.0000000000000p+0f / LANES128(v66).n128_f32[3]) *
                  LANES128(v66).n128_f32[0];
            if (fabsf(v67) <= 0x1.0000000000000p+0f) {
              goto LABEL_31;
            }
            if ((int)(LODWORD(v67) ^ LODWORD(v61)) < 0) {
              goto LABEL_31;
            }
            v68 = LANES128(v36).n128_u32[0];
            v69 = vmlaq_lane_f32(
                vmulq_n_f32(v28, LANES128(v36).n128_f32[0]), v27,
                COERCE_AS(float32x2_t, (LANES128(v36).n128_u32[0] |
                                        ((unsigned __int64)v44 << 32))),
                1);
            v70 = vaddq_f32(v32, vmlaq_n_f32(v69, v29, v45));
            v71 = (float)(0x1.0000000000000p+0f / LANES128(v70).n128_f32[3]) *
                  LANES128(v70).n128_f32[0];
            if (fabsf(v71) <= 0x1.0000000000000p+0f ||
                (int)(LODWORD(v61) ^ LODWORD(v71)) < 0 ||
                (v72 = vaddq_f32(v32, vmlaq_n_f32(v69, v29, v49)),
                 v73 = (float)(0x1.0000000000000p+0f /
                               LANES128(v72).n128_f32[3]) *
                       LANES128(v72).n128_f32[0],
                 fabsf(v73) <= 0x1.0000000000000p+0f) ||
                (int)(LODWORD(v61) ^ LODWORD(v73)) < 0 ||
                (v74 = vmlaq_lane_f32(
                     vmulq_n_f32(v28, *(float*)&v68), v27,
                     COERCE_AS(float32x2_t, (v68 | (v62 << 32))), 1),
                 v75 = vaddq_f32(v32, vmlaq_n_f32(v74, v29, v45)),
                 v76 = (float)(0x1.0000000000000p+0f /
                               LANES128(v75).n128_f32[3]) *
                       LANES128(v75).n128_f32[0],
                 fabsf(v76) <= 0x1.0000000000000p+0f) ||
                (int)(LODWORD(v76) ^ LODWORD(v61)) < 0 ||
                (v77 = vaddq_f32(v32, vmlaq_n_f32(v74, v29, v49)),
                 v78 = (float)(0x1.0000000000000p+0f /
                               LANES128(v77).n128_f32[3]) *
                       LANES128(v77).n128_f32[0],
                 fabsf(v78) <= 0x1.0000000000000p+0f) ||
                (int)(LODWORD(v78) ^ LODWORD(v61)) < 0) {
            LABEL_31:
              v54 = v21[2];
              if ((unsigned __int64)v23 < v9) {
                *(_QWORD*)v23 = v54;
                v23[2] = v41;
                v23 += 4;
              }
              else {
                v55 = (unsigned __int64)v23 - v10;
                v56 = ((__int64)v23 - v10) >> 4;
                v57 = v56 + 1;
                if ((unsigned __int64)(v56 + 1) >> 60 != 0) {
                  goto LABEL_112;
                }
                if ((__int64)(v9 - v10) >> 3 > v57) {
                  v57 = (__int64)(v9 - v10) >> 3;
                }
                if (v9 - v10 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v58 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v58 = v57;
                }
                if (v58 != 0) {
                  v127 = v41;
                  if (v58 >> 60 != 0) {
                    GameRoutine_60a210(),
                        v115 = COERCE_AS(__typeof__(v115),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v116 = COERCE_AS(__typeof__(v116),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v117 = COERCE_AS(__typeof__(v117),
                                         PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v119 = COERCE_AS(__typeof__(v119),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v12 = COERCE_AS(__typeof__(v12),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v120 = COERCE_AS(__typeof__(v120),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v121 = COERCE_AS(__typeof__(v121),
                                         PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v13 = COERCE_AS(__typeof__(v13),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                  }
                  v59 = v10;
                  v60 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v58, 16, 0),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v116 = COERCE_AS(__typeof__(v116),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v117 = COERCE_AS(__typeof__(v117),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v120 = COERCE_AS(__typeof__(v120),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v13 = COERCE_AS(__typeof__(v13),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v41 = v127;
                }
                else {
                  v59 = v10;
                  v60 = 0;
                }
                v79 = v60 + v55;
                v9 = v60 + 16 * v58;
                v10 = v60 + v55 - 16 * v56;
                *(_QWORD*)v79 = v54;
                *(float*)(v79 + 8) = v41;
                v23 = (float*)(v60 + v55 + 16);
                GameRoutine_1a0b950(v10, v59, v55),
                    v115 = COERCE_AS(__typeof__(v115),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v116 = COERCE_AS(__typeof__(v116),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v117 = COERCE_AS(__typeof__(v117),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v120 = COERCE_AS(__typeof__(v120),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v121 = COERCE_AS(__typeof__(v121),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v13 = COERCE_AS(__typeof__(v13),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                if (v59 != 0) {
                  v80 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v80 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v80, v59),
                      v115 = COERCE_AS(__typeof__(v115),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v116 = COERCE_AS(__typeof__(v116),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v117 = COERCE_AS(__typeof__(v117),
                                       PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v119 = COERCE_AS(__typeof__(v119),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v120 = COERCE_AS(__typeof__(v120),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v121 = COERCE_AS(__typeof__(v121),
                                       PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v13 = COERCE_AS(__typeof__(v13),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                }
                v26 = v143;
                v31 = *(float32x4_t*)&v145;
                v27 = v137;
                v28 = v140;
                LANES128(v22).n128_u64[0] = 0x3F0000003F000000LL;
                LANES128(v22).n128_u64[1] = 0x3F0000003F000000LL;
                v32 = v133;
                v29 = v135;
                v25 = GameData_1a82ea0;
                v24 = GameData_1a82f20;
              }
            }
          }
        }
      }
      v21 = (__int64*)*v21;
    } while (v21 != nullptr);
    if ((float*)v10 != v23) {
      CharacterSelfShadow_bf8a00(
          v10, v23, (2 * __clz(((__int64)v23 - v10) >> 4)) ^ 0x7E, 1),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    i = *(_QWORD**)(a1 + 48);
    if (i != nullptr) {
      goto LABEL_64;
    }
  }
  else {
    v23 = (float*)v10;
    for (i = *(_QWORD**)(a1 + 48); i != nullptr; i = (_QWORD*)*i) {
    LABEL_64:
      i[24] = 0;
    }
  }
  v82 = *(_QWORD*)(a1 + 8);
  v83 = *(_QWORD*)(a1 + 16);
  while (v82 != v83) {
    if (*(_BYTE*)(v82 + 128) == 1) {
      *(_BYTE*)(v82 + 128) = 0;
    }
    v82 += 160;
  }
  v146 = v10;
  if ((int)(((unsigned __int64)v23 - v10) >> 4) < 1) {
    if (v10 == 0) {
      goto LABEL_99;
    }
  }
  else {
    v84 = *(float*)(a1 + 88);
    v85 = v10;
    v86 = (((unsigned __int64)v23 - v10) >> 4) & 0x7FFFFFFF;
    v87 = (float*)(v85 + 8);
    v88 = 1;
    v89 = std___1_piecewise_construct_ptr;
    v90 = 0;
    v91 = v84 - *(float*)(a1 + 84);
    v92 = v84 + 0x1.4000000000000p+4f;
    do {
      v93 = *((_QWORD*)v87 - 1);
      v94 = *v87;
      v150[0] = (__int64*)&v149;
      v149 = v93;
      if (*((_DWORD*)llvm_libcxx_21_libcxx_include___vector_bf9ca0(
                a1 + 32, &v149, (__int64)v89, v150) +
            50) == 4) {
        v95 = 0x1.4000000000000p+4f;
      }
      else {
        v95 = 0x0.0p+0f;
      }
      if (v94 <= (float)(*(float*)(a1 + 88) + v95)) {
        if (v94 > v92) {
          break;
        }
        v96 = *(float*)(a1 + 84);
        v97 = v90;
        v98 = 160LL * v90;
        v99 = *(_QWORD*)(a1 + 8) + v98;
        *(_QWORD*)(v99 + 120) = v149;
        *(_BYTE*)(v99 + 128) = 1;
        v100 = (float)(v94 - (float)(v96 + v95)) / v91;
        if (v100 <= 0x1.0000000000000p+0f) {
          v101 = v100;
        }
        else {
          v101 = 0x1.0000000000000p+0f;
        }
        if (v100 >= 0x0.0p+0f) {
          v102 = v101;
        }
        else {
          v102 = 0x0.0p+0f;
        }
        *(float*)(*(_QWORD*)(a1 + 8) + v98 + 152) = v102;
        v150[0] = (__int64*)&v149;
        v103 = *(_QWORD*)(a1 + 8) + v98;
        llvm_libcxx_21_libcxx_include___vector_bf9ca0(a1 + 32, &v149,
                                                      (__int64)v89, v150)
            [24] = v103,
       v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
       v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
       v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
       v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
       v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
       v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
       v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
       v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
       v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
       v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
       v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
       v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
       v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
       v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
       v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v104 = *(_QWORD*)(*(_QWORD*)a1 + 16632LL);
        if (*(_QWORD*)(*(_QWORD*)a1 + 16616LL) != 0) {
          v104 = *(_QWORD*)(*(_QWORD*)a1 + 16616LL);
        }
        v105 = vcvts_n_s32_f32(*(float*)(v104 + 48), 0xBu);
        v106 = v105 / 4;
        if ((unsigned int)v90 <= 5) {
          v106 = v105 / 2;
        }
        v53 = v90++ < 1;
        if (!v53) {
          v105 = v106;
        }
        *(_DWORD*)(*(_QWORD*)(a1 + 8) + 160 * v97 + 148) = v105;
        *(_DWORD*)(*(_QWORD*)(a1 + 8) + 160 * v97 + 144) = v105;
      }
      if (v88 >= v86) {
        break;
      }
      v87 += 4;
      ++v88;
    } while (v90 < 16);
  }
  v107 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v107 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v107,
                                v146),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
LABEL_99:
  if (v128 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v128 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v128 + 16LL))(v128),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
    std___1___shared_weak_count___release_weak(v128),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  llvm_libcxx_21_libcxx_include___functional_bf4660(a1, a2),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v108 = *(_QWORD*)(a1 + 8);
  for (j = *(_QWORD*)(a1 + 16); v108 != j; v108 += 160) {
    v110 = *(_DWORD*)(v108 + 24);
    v111 = *(_QWORD*)(v108 + 136);
    v53 = v110 < -1;
    v112 = ((_BYTE)v110 + 1) & 1;
    if (v53) {
      v112 = -v112;
    }
    *(_DWORD*)(v108 + 24) = v112;
    v113 = *(_DWORD*)(v108 + 80);
    v53 = v113 < -1;
    v114 = ((_BYTE)v113 + 1) & 1;
    if (v53) {
      v114 = -v114;
    }
    *(_DWORD*)(v108 + 80) = v114;
    v138 = COERCE_FLOAT32X4_T(
        ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v111 + 16LL))(v111)),
    v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v141 = v115;
    v144 = v116;
    v147 = v117;
    *(long double*)&v118 =
        ((long double (*)(_QWORD)) *
         (_QWORD*)(**(_QWORD**)(v108 + 136) + 24LL))(*(_QWORD*)(v108 + 136)),
           v115 =
               COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
           v116 =
               COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
           v117 =
               COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
           v119 =
               COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
           v12 =
               COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
           v120 =
               COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
           v121 =
               COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
           v13 =
               COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
           v14 =
               COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
           v15 =
               COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
           v16 =
               COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
           v17 =
               COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
           v18 =
               COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
           v19 =
               COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
           v20 =
               COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v122 = vaddq_f32(
        v121, vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v118, LANES128(v147).n128_f32[0]), v119,
                      COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0]), 1),
                  v120, v147, 2));
    v148.val[0] = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v118, LANES128(v138).n128_f32[0]), v119,
                       COERCE_AS(float32x2_t, LANES128(v138).n128_u64[0]), 1),
        v120, v138, 2);
    v148.val[1] = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v118, LANES128(v141).n128_f32[0]), v119,
                       COERCE_AS(float32x2_t, LANES128(v141).n128_u64[0]), 1),
        v120, v141, 2);
    v148.val[2] = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v118, LANES128(v144).n128_f32[0]), v119,
                       COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0]), 1),
        v120, v144, 2);
    v148.val[3] = v122;
    v123 = *(_QWORD*)(v108 + 8LL * *(int*)(v108 + 24) + 8);
    v124 = (*(__int64 (**)(__int64))(*(_QWORD*)v123 + 56LL))(v123),
    v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
    vst4q_f32((float*)v124, v148);
    *(_DWORD*)(v124 + 72) = *(_DWORD*)(v108 + 152);
    if (*(_BYTE*)(a1 + 92) != 0) {
      v125 = 0x1.0000000000000p+0f;
    }
    else {
      v125 = 0x0.0p+0f;
    }
    *(float*)(v124 + 68) = v125;
    *(_DWORD*)(v124 + 80) = *(_DWORD*)(v108 + 4);
    *(float*)(v124 + 64) = 0x1.0000000000000p+0f / (float)*(int*)(v108 + 144);
    (*(void (**)(__int64))(*(_QWORD*)v123 + 64LL))(v123),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v126 = *(_QWORD*)(v108 + 8LL * *(int*)(v108 + 80) + 64);
    vst4q_f32(
        (float*)((*(__int64 (**)(__int64))(*(_QWORD*)v126 + 56LL))(v126) + 112),
        v148),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
    (*(void (**)(__int64))(*(_QWORD*)v126 + 64LL))(v126),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
}

void llvm_libcxx_21_libcxx_include___functional_bf4660(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  int32x4_t v10;
  float32x4_t v11;
  int32x4_t v12;
  float v13;
  int32x4_t v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float32x4_t v22;
  int8x16_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  int32x4_t v34;
  int32x4_t v35;
  int32x4_t v36;
  int8x16_t v37;
  int8x16_t v38;
  int8x16_t v39;
  float32x4_t v40;
  float32x4_t v41;
  unsigned __int64 v42;
  int8x16_t v43;
  float32x4_t v44;
  float32x4_t v45;
  int8x16_t v46;
  int8x16_t v47;
  int8x16_t v48;
  int8x16_t v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
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
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
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
  float32x4_t v104;
  int8x16_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  int8x16_t v113;
  float32x4_t v114;
  float32x4_t v115;
  int8x16_t v116;
  int8x16_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  int8x16_t v121;
  float32x4_t v122;
  float32x4_t v123;
  _QWORD* v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float32x4_t* v134;
  float v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  float32x4_t v141;
  float32x4_t v142;
  float32x4_t v143;
  float32x4_t v144;
  float32x4_t v145;
  float32x4_t v146;
  float32x4_t v147;
  float32x4_t v148;
  char* v149;
  __int64 v150;
  float32x4_t* v151;
  float32x4_t* v152;
  unsigned __int64 v153;
  __int64 v154;
  __int64 v155;
  unsigned __int64 v156;
  __int64 v157;
  char* v158;
  __int64 v159;
  float32x4_t* v160;
  float32x4_t* v161;
  unsigned __int64 v162;
  __int64 v163;
  __int64 v164;
  unsigned __int64 v165;
  __int64 v166;
  char* v167;
  __int64 v168;
  float32x4_t* v169;
  float32x4_t* v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  unsigned __int64 v174;
  __int64 v175;
  char* v176;
  __int64 v177;
  float32x4_t* v178;
  float32x4_t* v179;
  unsigned __int64 v180;
  __int64 v181;
  __int64 v182;
  unsigned __int64 v183;
  __int64 v184;
  char* v185;
  __int64 v186;
  float32x4_t* v187;
  float32x4_t* v188;
  unsigned __int64 v189;
  __int64 v190;
  __int64 v191;
  unsigned __int64 v192;
  __int64 v193;
  float32x4_t v194;
  float32x4_t v195;
  float32x4_t v196;
  float32x4_t v197;
  float32x4_t v198;
  __int64* v199;
  unsigned __int64 v200;
  __int64 v201;
  float32x4_t* v202;
  unsigned __int64 v203;
  float32x4_t v204;
  __int64 v205;
  int8x16_t v206;
  __int128 v207;
  __int128 v208;
  float v209;
  __int128 v210;
  int8x16_t v211;
  __int128 v212;
  __int64* v213;
  unsigned __int64 v214;
  __int64 v215;
  float32x4_t* v216;
  unsigned __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  float32x4_t* v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64* v225;
  __int64 v226;
  __int64 v227;
  unsigned __int64 v228;
  __int64 v229;
  unsigned __int64 v230;
  __int64 v231;
  __int64 v232;
  unsigned __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  unsigned __int64 v237;
  unsigned __int64 v238;
  unsigned __int64 v239;
  unsigned __int64 v240;
  unsigned __int64 v241;
  __int64 v242;
  unsigned __int64 v243;
  unsigned __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  unsigned __int64 v249;
  float32x4_t v250;
  int v251;
  __int64 v252;
  unsigned int v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  float32x4_t v257;
  int8x16_t v258;
  float v259;
  int v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  float32x4_t v264;
  int v265;
  __int64 v266;
  int v267;
  int8x16_t v268;
  float v269;
  int v270;
  int v271;
  float32x4_t v272;
  bool v273;
  int v274;
  int8x16_t v275;
  float v276;
  int v277;
  __int64 v278;
  int v279;
  float32x4_t v280;
  int8x16_t v281;
  float v282;
  int v283;
  int v284;
  __int64 v285;
  bool v286;
  int v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  float32x4_t v295;
  int8x16_t v296;
  float v297;
  int v298;
  int v299;
  bool v300;
  int v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  signed __int64 v305;
  __int64 v306;
  __int64 v307;
  unsigned __int64 v308;
  unsigned __int64 v309;
  __int64 v310;
  int v311;
  int v312;
  float32x4_t* v313;
  int v314;
  int v315;
  __int64 v316;
  float v317;
  int v318;
  float v319;
  float32x4_t* v320;
  int v321;
  float v322;
  float32x4_t v323;
  float32x4_t* v324;
  float32x4_t v325;
  __int64 v326;
  float32x4_t* v331;
  __int64 v332;
  float32x4_t* v333;
  float32x4_t v334;
  __int64 v335;
  __int64 v336;
  unsigned __int64 v337;
  __int64 v338;
  unsigned __int64 v339;
  __int64 v340;
  unsigned __int64 v341;
  __int64 v342;
  float32x4_t* v343;
  float32x4_t v344;
  unsigned __int64 v345;
  __int64 v346;
  unsigned __int64 v347;
  __int64 v348;
  unsigned __int64 v349;
  __int64 v350;
  int v351;
  unsigned __int64 v352;
  __int64 v353;
  unsigned __int64 v354;
  __int64 v355;
  __int64 v356;
  __int64 v357;
  unsigned __int64 v358;
  __int64 v359;
  unsigned __int64 v360;
  __int64 v361;
  unsigned __int64 v362;
  __int64 v363;
  unsigned __int64 v364;
  unsigned __int64 v365;
  float32x4_t* v366;
  __int64 v367;
  unsigned __int64 v368;
  __int64 v369;
  __int64 v370;
  float32x4_t* v371;
  float32x4_t* v372;
  __int64 v373;
  char* v374;
  __int64 v375;
  unsigned __int64 v376;
  __int64 v377;
  unsigned __int64 v378;
  int v379;
  __int64 v380;
  float32x4_t* v381;
  unsigned __int64 v382;
  __int64 v383;
  unsigned __int64 v384;
  __int64 v385;
  __int64 v386;
  float32x4_t* v387;
  unsigned __int64 v388;
  unsigned __int64 v389;
  __int64 v390;
  float32x4_t v391;
  __int64 v392;
  unsigned __int64 v393;
  __int64 v394;
  unsigned __int64 v395;
  __int64 v396;
  unsigned __int64 v397;
  int v398;
  __int64 v399;
  __int64 v400;
  unsigned __int64 v401;
  __int64 v402;
  unsigned __int64 v403;
  __int64 v404;
  unsigned __int64 v405;
  __int64 v406;
  unsigned __int64* v407;
  unsigned __int64 v408;
  __int64 v409;
  unsigned __int64 v410;
  __int64 v411;
  char* v412;
  __int64 v413;
  unsigned __int64 v414;
  __int64 v415;
  unsigned __int64 v416;
  __int64 v417;
  _QWORD* v418;
  unsigned __int64 v419;
  __int64 v420;
  __int64 v421;
  float32x4_t* v422;
  float32x4_t v423;
  __int64 v424;
  unsigned __int64 v425;
  __int64 v426;
  unsigned __int64 v427;
  __int64 v428;
  unsigned __int64 v429;
  int v430;
  __int64 v431;
  float32x4_t* v432;
  unsigned __int64 v433;
  __int64 v434;
  __int64 v435;
  __int64 v436;
  __int64 v437;
  unsigned __int64 v438;
  __int64 v439;
  unsigned __int64 v440;
  __int64 v441;
  unsigned __int64 v442;
  __int64 v443;
  _QWORD* v444;
  __int64 v445;
  __int64 v446;
  unsigned __int64 v447;
  __int64 v448;
  unsigned __int64 v449;
  __int64 v450;
  __int64 v451;
  __int64 v452;
  __int64 v453;
  char* v454;
  __int64 v455;
  unsigned __int64 v456;
  float32x4_t* v457;
  __int64 v458;
  __int64 v459;
  float32x4_t v460;
  __int64 v461;
  __int64 v462;
  __int64 v463;
  char v464;
  float32x4_t* v465;
  int v466;
  float32x4_t v467;
  float32x4_t v468;
  float v469;
  float v470;
  float v471;
  bool v472;
  float32x4_t* v474;
  __int64 v475;
  __int64 v476;
  unsigned __int64 v477;
  __int64 v478;
  unsigned __int64 v479;
  __int64 v480;
  unsigned __int64 v481;
  __int64 v482;
  float32x4_t* v483;
  unsigned __int64 v484;
  __int64 v485;
  __int64 v486;
  float32x4_t* v487;
  __int64 v488;
  float32x4_t v489;
  char* v490;
  __int64 v491;
  int8x16_t* v492;
  char* v493;
  __int64 v494;
  __int64 v495;
  __int64 v496;
  __int64 v497;
  float32x4_t* v498;
  float32x4_t v499;
  float v500;
  float v501;
  float v502;
  float32x4_t v505;
  float v506;
  float v507;
  float v508;
  bool v509;
  float32x4_t* v511;
  unsigned __int64 v512;
  unsigned __int64 v513;
  char* v514;
  signed __int64 v515;
  int8x16_t v516;
  int8x16_t v517;
  float32x4_t v518;
  float32x4_t v519;
  float32x4_t v520;
  float32x4_t v521;
  int8x16_t v522;
  float v523;
  float32x4_t* v524;
  float32x4_t* v525;
  float32x4_t* v526;
  unsigned __int64 v527;
  float32x4_t* v528;
  __int64 v529;
  unsigned __int64 v530;
  __int64 v531;
  unsigned __int64 v532;
  __int64 v533;
  unsigned __int64 v534;
  __int64 v535;
  unsigned __int64 v536;
  unsigned __int64 v537;
  unsigned __int64* v538;
  unsigned __int64 v539;
  __int64 v540;
  __int64 v541;
  float32x4_t v542;
  float32x4_t* v543;
  __int64 v544;
  unsigned __int64 v545;
  __int64 v546;
  unsigned __int64 v547;
  __int64 v548;
  unsigned __int64 v549;
  __int64 v550;
  unsigned __int64 v551;
  __int64 v552;
  __int64 v553;
  unsigned __int64 v554;
  __int64 v555;
  __int64 v556;
  unsigned __int64 v557;
  __int64 v558;
  unsigned __int64 v559;
  __int64 v560;
  unsigned __int64 v561;
  __int64 v562;
  unsigned __int64 v563;
  _QWORD* v564;
  unsigned __int64 v565;
  __int64 v566;
  __int64 v567;
  __int64 v568;
  float32x4_t* v569;
  __int64 v570;
  float32x4_t v571;
  __int64 v572;
  __int64 v573;
  __int64 v574;
  float32x4_t* v575;
  float32x4_t v576;
  float v577;
  float v578;
  float v579;
  float32x4_t v582;
  float v583;
  float v584;
  float v585;
  bool v586;
  float32x4_t* v588;
  unsigned __int64 v589;
  unsigned __int64 v590;
  __int64 v591;
  char* v592;
  float32x4_t* v593;
  unsigned __int64 v594;
  __int64 v595;
  __int64 v596;
  unsigned __int64 v597;
  __int64 v598;
  unsigned __int64 v599;
  __int64 v600;
  unsigned __int64 v601;
  __int64 v602;
  unsigned __int64 v603;
  __int64 v604;
  __int64 v605;
  __int64 v606;
  unsigned __int64* v607;
  int8x16_t* v608;
  unsigned __int64 v609;
  __int64 v610;
  __int64 v611;
  __int64 v612;
  float32x4_t v613;
  float32x4_t v614;
  float32x4_t v615;
  int8x16_t v616;
  float32x4_t v617;
  float32x4_t v618;
  float32x4_t v619;
  int8x16_t v620;
  float32x4_t v621;
  float32x4_t v622;
  float32x4_t v623;
  int8x16_t v624;
  unsigned __int64 v625;
  int8x16_t v626;
  float32x4_t v627;
  int32x2_t v628;
  float32x4_t v629;
  int8x16_t* v630;
  int8x8_t v631;
  int8x8_t v632;
  int8x8_t v633;
  float32x4_t v634;
  float32x4_t v635;
  float32x4_t v636;
  float32x4_t v637;
  float32x4_t v638;
  float32x4_t v639;
  float32x4_t v640;
  float32x4_t v641;
  int8x16_t v642;
  float32x4_t v643;
  float32x4_t v644;
  float32x4_t v645;
  float32x4_t v646;
  float32x4_t v647;
  float32x4_t v648;
  int8x16_t v649;
  float32x4_t v650;
  float32x4_t v651;
  float32x4_t* v652;
  int8x8_t v653;
  float32x4_t v654;
  float32x4_t v655;
  int8x8_t v656;
  float32x4_t v657;
  float32x4_t v658;
  int8x8_t v659;
  float32x4_t v660;
  float32x4_t v661;
  float v662;
  int8x16_t v663;
  float32x4_t v664;
  float32x4_t v665;
  float32x4_t v666;
  float32x4_t v667;
  float32x4_t v668;
  float32x4_t v669;
  int8x16_t v670;
  float32x4_t v671;
  float32x4_t v672;
  float32x4_t v673;
  int8x16_t v674;
  int8x16_t v675;
  float32x4_t v676;
  float32x4_t v677;
  float32x4_t v678;
  float32x4_t v679;
  float32x4_t v680;
  int8x16_t v681;
  int8x16_t v682;
  float32x4_t v683;
  float32x4_t v684;
  float32x4_t v685;
  int8x16_t v686;
  float32x4_t v687;
  float32x4_t v688;
  float32x4_t v689;
  __int64 v690;
  int8x16_t* v691;
  int8x16_t* v692;
  float32x4_t v693;
  float32x4_t v694;
  float32x4_t v695;
  float32x4_t v696;
  float32x4_t v697;
  float32x4_t v698;
  int8x16_t v699;
  float32x4_t v700;
  float32x4_t v701;
  float32x4_t v702;
  float32x4_t v703;
  float32x4_t v704;
  float32x4_t v705;
  int8x16_t v706;
  float32x4_t v707;
  float32x4_t v708;
  int8x16_t* v709;
  int8x16_t* v710;
  float32x4_t v711;
  float32x4_t v712;
  float32x4_t v713;
  float32x4_t v714;
  float32x4_t v715;
  float32x4_t v716;
  int8x16_t v717;
  float32x4_t v718;
  float32x4_t v719;
  float32x4_t v720;
  float32x4_t v721;
  float32x4_t v722;
  float32x4_t v723;
  int8x16_t v724;
  float32x4_t v725;
  float32x4_t v726;
  __int64 v727;
  __int64 v728;
  __int64 v729;
  __int64 v730;
  __int64 v731;
  __int64 v732;
  __int64 v733;
  __int64 v734;
  __int64 v735;
  __int64 v736;
  __int64 v737;
  __int64 v738;
  __int64 v739;
  __int64 v740;
  __int64 v741;
  __int64 v742;
  __int64 v743;
  __int64 v744;
  __int64 v745;
  __int64 v746;
  __int64 v747;
  unsigned __int64 v748;
  float32x4_t v749;
  __int64 v750;
  __int64 v751;
  _QWORD* v752;
  __int64 v754;
  int8x16_t v755;
  float v756;
  float32x4_t v757;
  float32x4_t v758;
  float32x4_t v759;
  float32x4_t v760;
  float v761;
  float v762;
  float v763;
  float v764;
  __int64 v765;
  int32x4_t v766;
  float v767;
  float32x4_t* v768;
  int32x4_t v769;
  float32x4_t v770;
  __int64 v771;
  int32x4_t v772;
  float32x4_t v773;
  unsigned __int64 v774;
  float v775;
  __int128 v776;
  float32x4_t v777;
  float32x4_t v778;
  float32x4_t v779;
  float v780;
  __int128 v781;
  float32x4_t v782;
  float v783;
  float32x4_t v784;
  float32x4_t v785;
  float32x4_t v786;
  float32x4_t v787;
  float32x4_t v788;
  float32x4_t v789;
  unsigned __int64 v790;
  float32x4_t v791;
  float32x4_t v792;
  unsigned __int64 v793;
  float32x4_t v794;
  float32x4_t v795;
  float v796;
  struct {
    __int64* v797[12];
    float32x4_t v798;
    int8x16_t v799;
    int8x16_t v800;
    int8x16_t v801;
    __int64 v802;
    __int64 v803;
    __int64 v804;
    __int64 v805;
    __int64 v806;
    __int64 v807;
    __int64 v808;
    __int64 v809;
    __int64 v810;
    __int64 v811;
    __int64 v812;
    __int64 v813;
    __int64 v814;
    __int64 v815;
    __int64 v816;
    __int64 v817;
    __int64 v818;
    __int64 v819;
    __int64 v820;
    __int64 v821;
    __int64 v822;
    __int64 v823;
    __int64 v824;
    __int64 v825;
    __int64 v826;
    __int64 v827;
    __int64 v828;
    __int64 v829;
    __int64 v830;
    __int64 v831;
    __int64 v832;
    __int64 v833;
    __int64 v834;
    __int64 v835;
    int v836;
    char gap932_[4];
    __int64 v837;
    __int64 v838;
    unsigned __int64 v839;
    __int64 v840;
    __int64 v841;
    unsigned __int64 v842;
    float32x4_t* v843;
    float32x4_t* v844;
    unsigned __int64 v845;
    float32x4_t* v846;
    float32x4_t* v847;
    unsigned __int64 v848;
    float32x4_t* v849;
    float32x4_t* v850;
    unsigned __int64 v851;
    _QWORD v852[4];
    __int64 v853;
    __int64 v854;
    __int64 v855;
    __int64 v856;
    __int64 v857;
    __int64 v858;
    __int64 v859;
    __int64 v860;
    __int64 v861;
    __int64 v862;
    __int64 v863;
    __int64 v864;
    __int64 v865;
    __int64 v866;
    __int64 v867;
    __int64 v868;
    __int64 v869;
    __int64 v870;
    __int64 v871;
    __int64 v872;
    __int64 v873;
    __int64 v874;
    __int64 v875;
    __int64 v876;
    __int64 v877;
    __int64 v878;
    float32x4_t v879;
    float32x4_t v880[2];
  } v797_;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v3 = GameRoutine_b3f6c0((_QWORD*)(*(_QWORD*)(a2 + 288) + 592LL), "Sun"),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v4 = v3 + 6;
  v5 = v3 + 12;
  if (*((_BYTE*)v3 + 112) == 0) {
    v5 = v3 + 6;
  }
  if (*((float*)v5 + 1) > 0x0.0p+0f) {
    v4 =
        GameRoutine_b3f800((_QWORD*)(*(_QWORD*)(a2 + 288) + 592LL), "Moon") + 6,
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  v6 = 0;
  v7 = *(_DWORD*)(a1 + 152);
  if ((v7 & 0x80000000) != 0) {
    v8 = 0;
  }
  else {
    v8 = 0;
    if ((signed int)v7 < (signed __int32)*(_DWORD*)a2) {
      v9 = (__int64*)(*(_QWORD*)(a2 + 112) + 48LL * v7);
      v8 = *v9;
      v6 = v9[1];
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
  }
  v746 = v6;
  *(long double*)&v10 =
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v8 + 16LL))(v8),
         v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
         v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v11 = *(float32x4_t*)v4;
  v797_.v878 = 0;
  v797_.v877 = 0;
  v797_.v876 = 0;
  v797_.v875 = 0;
  v769 = v12;
  v772 = v10;
  PSEUDO_LOW_LANE128(v10, n128_u32, *(_DWORD*)(a1 + 72));
  v13 = *(float*)(a1 + 76);
  v797_.v874 = 0;
  v797_.v873 = 0;
  v797_.v872 = 0;
  v797_.v871 = 0;
  v797_.v870 = 0;
  v797_.v869 = 0;
  v797_.v868 = 0;
  v797_.v867 = 0;
  v797_.v866 = 0;
  v797_.v865 = 0;
  v797_.v864 = 0;
  v797_.v863 = 0;
  v797_.v862 = 0;
  v797_.v861 = 0;
  v797_.v860 = 0;
  v797_.v859 = 0;
  v797_.v858 = 0;
  v797_.v857 = 0;
  v797_.v856 = 0;
  v797_.v855 = 0;
  v797_.v854 = 0;
  v797_.v853 = 0;
  memset(v797_.v852, 0, sizeof(v797_.v852));
  v766 = v14;
  v775 = LANES128(v10).n128_f32[0];
  v779 = v11;
  v15 = (*(float (**)(__int64))(*(_QWORD*)v8 + 80LL))(v8),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v17 = v16;
  v18 = (*(float (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v19 = v15 / v17;
  v20 = (*(float (**)(__int64))(*(_QWORD*)v8 + 56LL))(v8),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v21 = (*(float (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v750 = v8;
  *(long double*)&v22 =
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v8 + 16LL))(v8),
         v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
         v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v24).n128_i8[8] =
      vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v26).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v27 = vmulq_f32(vmulq_f32(v22, v24), v26);
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v26).n128_i8[8] =
      vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v29 = vsubq_f32(v27, vmulq_f32(vmulq_f32(v22, v26), v28));
  LANES128(v29).n128_u64[0] = LANES128_OF(vpaddq_f32(v29, v29)).n128_u64[0];
  v30 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v29).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v29).n128_u64[0]), 1));
  v31 = vrecpeq_f32(v30);
  v32 = vmulq_f32(v31, vrecpsq_f32(v31, v30));
  v33 = vmulq_f32(v32, vrecpsq_f32(v32, v30));
  v34 = vzip1q_s32(v22, v25);
  v35 = vzip2q_s32(v22, v25);
  v36 = vzip1q_s32(v23, COERCE_AS(int32x4_t, 0));
  v37 = vzip2q_s32(v34, v36);
  v38 = vzip1q_s32(v35, vzip2q_s32(v23, COERCE_AS(int32x4_t, 0)));
  v39 = vzip1q_s32(v34, v36);
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v40).n128_i8[8] =
      vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v42 = LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v41).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v23).n128_u64[1] = v42;
  *(int8x8_t*)&LANES128(v38).n128_i8[8] =
      vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v43 = vmulq_f32(v33, vmlsq_f32(vmulq_f32(v40, v23), v38, v41));
  *(int8x8_t*)&LANES128(v34).n128_i8[8] =
      vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v44 = vmulq_f32(v41, v34);
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v41).n128_i8[8] =
      vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v46 = vmulq_f32(v33, vmlsq_f32(v44, v23, v41));
  v47 = vmulq_f32(v33, vmlsq_f32(vmulq_f32(v38, v41), v34, v40));
  v48 = vmlsq_laneq_f32(
      vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v43), LANES128(v45).n128_f32[0]),
                     v46, COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]), 1),
      v47, v45, 2);
  v49 = vceqzq_f32(v30);
  v797_.v798 = vbicq_s8(v43, v49);
  v797_.v799 = vbicq_s8(v46, v49);
  v797_.v800 = vbicq_s8(v47, v49);
  v797_.v801 = vbicq_s8(v48, v49);
  GameRoutine_5eaef0((__int64)v797_.v852, &v797_.v798, v18, v19, v20, v21,
                     LANES128(v797_.v798).n128_f64[0],
                     LANES128(v33).n128_f64[0]),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v50 = (__int64*)fw_memory_g_heap_manager_ptr;
  v51 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v52 = v51 + 64;
  LANES128(v797_.v798).n128_u64[0] = v51;
  LANES128(v797_.v798).n128_u64[1] = v51;
  v53 = *v50;
  LANES128(v797_.v799).n128_u64[0] = v52;
  v54 = fw_memory_HeapManager_Allocate(v53, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v55 = v54 + 64;
  LANES128(v797_.v799).n128_u64[1] = v54;
  LANES128(v797_.v800).n128_u64[0] = v54;
  v56 = *v50;
  LANES128(v797_.v800).n128_u64[1] = v55;
  v57 = fw_memory_HeapManager_Allocate(v56, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v58 = v57 + 64;
  LANES128(v797_.v801).n128_u64[0] = v57;
  LANES128(v797_.v801).n128_u64[1] = v57;
  v59 = *v50;
  v797_.v802 = v58;
  v60 = fw_memory_HeapManager_Allocate(v59, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v61 = v60 + 64;
  v797_.v803 = v60;
  v797_.v804 = v60;
  v62 = *v50;
  v797_.v805 = v61;
  v63 = fw_memory_HeapManager_Allocate(v62, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v64 = v63 + 64;
  v797_.v806 = v63;
  v797_.v807 = v63;
  v65 = *v50;
  v797_.v808 = v64;
  v66 = fw_memory_HeapManager_Allocate(v65, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v67 = v66 + 64;
  v797_.v809 = v66;
  v797_.v810 = v66;
  v68 = *v50;
  v797_.v811 = v67;
  v69 = fw_memory_HeapManager_Allocate(v68, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v70 = v69 + 64;
  v797_.v812 = v69;
  v797_.v813 = v69;
  v71 = *v50;
  v797_.v814 = v70;
  v72 = fw_memory_HeapManager_Allocate(v71, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v73 = v72 + 64;
  v797_.v815 = v72;
  v797_.v816 = v72;
  v74 = *v50;
  v797_.v817 = v73;
  v75 = fw_memory_HeapManager_Allocate(v74, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v76 = v75 + 64;
  v797_.v818 = v75;
  v797_.v819 = v75;
  v77 = *v50;
  v797_.v820 = v76;
  v78 = fw_memory_HeapManager_Allocate(v77, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v79 = v78 + 64;
  v797_.v821 = v78;
  v797_.v822 = v78;
  v80 = *v50;
  v797_.v823 = v79;
  v81 = fw_memory_HeapManager_Allocate(v80, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v82 = v81 + 64;
  v797_.v824 = v81;
  v797_.v825 = v81;
  v83 = *v50;
  v797_.v826 = v82;
  v84 = fw_memory_HeapManager_Allocate(v83, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v85 = v84 + 64;
  v797_.v827 = v84;
  v797_.v828 = v84;
  v86 = *v50;
  v797_.v829 = v85;
  v87 = fw_memory_HeapManager_Allocate(v86, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v88 = v87 + 64;
  v797_.v830 = v87;
  v797_.v831 = v87;
  v89 = *v50;
  v797_.v832 = v88;
  v90 = fw_memory_HeapManager_Allocate(v89, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v91 = v90 + 64;
  v797_.v833 = v90;
  v797_.v834 = v90;
  v92 = *v50;
  v797_.v836 = 0;
  v797_.v846 = nullptr;
  v797_.v847 = nullptr;
  v797_.v848 = 0;
  v797_.v835 = v91;
  v93 = fw_memory_HeapManager_Allocate(v92, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v797_.v849 = (float32x4_t*)v93;
  v797_.v850 = (float32x4_t*)v93;
  v94 = *v50;
  v797_.v851 = v93 + 64;
  v95 = fw_memory_HeapManager_Allocate(v94, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v96 = v95 + 64;
  v797_.v837 = v95;
  v797_.v838 = v95;
  v97 = *v50;
  v797_.v839 = v96;
  v98 = fw_memory_HeapManager_Allocate(v97, 64, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v99 = v98 + 64;
  v797_.v840 = v98;
  v797_.v841 = v98;
  v100 = *v50;
  v797_.v842 = v99;
  v101 = fw_memory_HeapManager_Allocate(v100, 512, 16, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v102 = *(_QWORD*)(a1 + 8);
  v103 = *(_QWORD*)(a1 + 16);
  v797_.v843 = (float32x4_t*)v101;
  v797_.v844 = (float32x4_t*)v101;
  v797_.v845 = v101 + 512;
  if (v102 == v103) {
    goto LABEL_655;
  }
  v751 = v103;
  v104 = vsubq_f32(COERCE_AS(float32x4_t, 0),
                   vzip1q_s32(vzip2q_s32(v772, v766),
                              vzip2q_s32(v769, COERCE_AS(int32x4_t, 0))));
  v105 = vmulq_f32(v104, v104);
  LANES128(v105).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v105, v105, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0])))
          .n64_u64[0];
  LANES128(v105).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0])))
          .n64_u64[0];
  LANES128(v105).n128_u64[1] = LANES128(v105).n128_u64[0];
  v106 = vrsqrteq_f32(v105);
  v107 = vmulq_f32(v106, vrsqrtsq_f32(v106, vmulq_f32(v105, v106)));
  v108 = vbicq_s8(
      vmulq_f32(v104,
                vmulq_f32(v107, vrsqrtsq_f32(v107, vmulq_f32(v105, v107)))),
      vceqzq_f32(v105));
  LANES128(v105).n128_u64[0] = LANES128(v108).n128_u32[0];
  LANES128(v105).n128_u64[1] = LANES128(v108).n128_u32[2];
  LANES128(v107).n128_u64[0] =
      LANES64_OF(
          vadd_f32(
              vmul_f32(*(float32x2_t*)&LANES128(v105).n128_i8[8],
                       *(float32x2_t*)&LANES128(v105).n128_i8[8]),
              vmul_f32(COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0]))))
          .n64_u64[0];
  LANES128(v107).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0])))
          .n64_u64[0];
  LANES128(v107).n128_u64[1] = LANES128(v107).n128_u64[0];
  v109 = vrsqrteq_f32(v107);
  v110 = vmulq_f32(v109, vrsqrtsq_f32(v109, vmulq_f32(v107, v109)));
  v111 = vbicq_s8(
      vmulq_f32(vmulq_f32(v110, vrsqrtsq_f32(v110, vmulq_f32(v107, v110))),
                v105),
      vceqzq_f32(v107));
  v112 = v779;
  LANES128(v112).n128_f32[1] = vmuls_lane_f32(
      v13, COERCE_AS(float32x2_t, LANES128(v779).n128_u64[0]), 1);
  v113 = vmulq_f32(v112, v112);
  LANES128(v113).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v113, v113, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0])))
          .n64_u64[0];
  LANES128(v113).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0])))
          .n64_u64[0];
  LANES128(v113).n128_u64[1] = LANES128(v113).n128_u64[0];
  v114 = vrsqrteq_f32(v113);
  v115 = vmulq_f32(v114, vrsqrtsq_f32(v114, vmulq_f32(v113, v114)));
  v116 = vbicq_s8(
      vmulq_f32(v112,
                vmulq_f32(v115, vrsqrtsq_f32(v115, vmulq_f32(v113, v115)))),
      vceqzq_f32(v113));
  v117 = vmulq_f32(v116, v111);
  v118 = vextq_s8(v117, v117, 8u);
  LANES128(v117).n128_u64[0] =
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v118).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0])))
          .n64_u64[0];
  PSEUDO_LOW_LANE128(v118, n128_u64, 0);
  LANES128(v117).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0])))
          .n64_u64[0];
  LANES128(v118).n128_u64[0] = LANES128_OF(vcgtq_f32(v118, v117)).n128_u64[0];
  v119 = vmulq_n_f32(v111, LANES128(v117).n128_f32[0]);
  v120 = vaddq_f32(
      vmulq_n_f32(v108, v775),
      vmulq_n_f32(
          vbslq_s8(vdupq_lane_s32(
                       COERCE_AS(int32x2_t, LANES128(v118).n128_u64[0]), 0),
                   vsubq_f32(v116, vaddq_f32(v119, v119)), v116),
          0x1.0000000000000p+0f - v775));
  v121 = vmulq_f32(v120, v120);
  LANES128(v121).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v121, v121, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0])))
          .n64_u64[0];
  LANES128(v121).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0])))
          .n64_u64[0];
  LANES128(v121).n128_u64[1] = LANES128(v121).n128_u64[0];
  v122 = vrsqrteq_f32(v121);
  v123 = vmulq_f32(v122, vrsqrtsq_f32(v122, vmulq_f32(v121, v122)));
  v747 = LANES128(v111).n128_u32[2];
  v748 = LANES128(v111).n128_u64[0];
  v749 = v111;
  v755 = vbicq_s8(
      vmulq_f32(vmulq_f32(v123, vrsqrtsq_f32(v123, vmulq_f32(v121, v123))),
                v120),
      vceqzq_f32(v121));
  while (2) {
    if (*(_BYTE*)v102 != 1 || *(_BYTE*)(v102 + 128) != 1) {
      goto LABEL_13;
    }
    v754 = v102;
    *(_BYTE*)(v102 + 1) = 0;
    v797_.v797[0] = (__int64*)(v102 + 120);
    v124 = llvm_libcxx_21_libcxx_include___vector_bf9ca0(
        a1 + 32, (unsigned __int64*)(v102 + 120),
        (__int64)std___1_piecewise_construct_ptr, v797_.v797),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
    v776 = *((_OWORD*)v124 + 4);
    LODWORD(v125) = HIDWORD(v124[8]);
    LODWORD(v780) = v124[9];
    v126 = *(float*)&v776 -
           GameRoutine_1a0a6a0(*(float*)&v776, 0x1.0624de0000000p-10f),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
    if (*(float*)&v776 < 0x0.0p+0f) {
      v126 = v126 + -0x1.0624de0000000p-10f;
    }
    v767 = v126;
    v127 = v125 - GameRoutine_1a0a6a0(v125, 0x1.0624de0000000p-10f),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
    if (v125 < 0x0.0p+0f) {
      v127 = v127 + -0x1.0624de0000000p-10f;
    }
    v764 = v127;
    v128 = v780 - GameRoutine_1a0a6a0(v780, 0x1.0624de0000000p-10f),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
    v752 = v124;
    if (v780 < 0x0.0p+0f) {
      v128 = v128 + -0x1.0624de0000000p-10f;
    }
    v761 = v128;
    v781 = *((_OWORD*)v124 + 5);
    LODWORD(v129) = v124[11];
    LODWORD(v130) = HIDWORD(v124[10]);
    v131 = *(float*)&v781 -
           GameRoutine_1a0a6a0(*(float*)&v781, 0x1.0624de0000000p-10f),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
    if (*(float*)&v781 > 0x0.0p+0f) {
      v131 = v131 + 0x1.0624de0000000p-10f;
    }
    v763 = v131;
    v132 = v130 - GameRoutine_1a0a6a0(v130, 0x1.0624de0000000p-10f),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
    if (v130 > 0x0.0p+0f) {
      v132 = v132 + 0x1.0624de0000000p-10f;
    }
    v762 = v132;
    v133 = v129 - GameRoutine_1a0a6a0(v129, 0x1.0624de0000000p-10f),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
    v134 = v797_.v849;
    v135 = v133 + 0x1.0624de0000000p-10f;
    v797_.v836 = 0;
    LANES128(v797_.v798).n128_u64[1] = LANES128(v797_.v798).n128_u64[0];
    LANES128(v797_.v800).n128_u64[0] = LANES128(v797_.v799).n128_u64[1];
    if (v129 <= 0x0.0p+0f) {
      v135 = v133;
    }
    LANES128(v797_.v801).n128_u64[1] = LANES128(v797_.v801).n128_u64[0];
    v797_.v804 = v797_.v803;
    v797_.v850 = v797_.v849;
    v756 = v135;
    v797_.v807 = v797_.v806;
    v797_.v810 = v797_.v809;
    v797_.v813 = v797_.v812;
    v797_.v816 = v797_.v815;
    v797_.v819 = v797_.v818;
    v797_.v822 = v797_.v821;
    v797_.v825 = v797_.v824;
    v797_.v828 = v797_.v827;
    v797_.v831 = v797_.v830;
    v797_.v834 = v797_.v833;
    v797_.v847 = v797_.v846;
    v136 = v797_.v851;
    if (v797_.v851 - (unsigned __int64)v797_.v849 <= 0x3F) {
      if (v797_.v849 != nullptr) {
        v137 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v137 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v137, (__int64)v797_.v849),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v136 = 0;
        v797_.v850 = nullptr;
        v797_.v851 = 0;
        v797_.v849 = nullptr;
      }
      v138 = v136 >> 3;
      if ((unsigned __int64)(v136 >> 3) <= 4) {
        v138 = 4;
      }
      if ((unsigned __int64)v136 >= 0x7FFFFFFFFFFFFFF0LL) {
        v139 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v139 = v138;
      }
      if (v139 >> 60 != 0) {
        goto LABEL_735;
      }
      v140 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v139, 16, 0),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
      v135 = v756;
      v134 = (float32x4_t*)v140;
      v797_.v849 = (float32x4_t*)v140;
      v797_.v851 = v140 + 16 * v139;
    }
    LANES128(v141).n128_u64[0] =
        LODWORD(v763) | ((unsigned __int64)LODWORD(v762) << 32);
    LANES128(v142).n128_u64[0] = LANES128(v141).n128_u64[0];
    LANES128(v143).n128_u64[0] =
        LODWORD(v767) | ((unsigned __int64)LODWORD(v762) << 32);
    LANES128(v144).n128_u64[0] =
        LODWORD(v767) | ((unsigned __int64)LODWORD(v764) << 32);
    LANES128(v145).n128_u64[0] = LANES128(v143).n128_u64[0];
    LANES128(v142).n128_u64[1] = LODWORD(v135);
    LANES128(v146).n128_u64[0] =
        LODWORD(v763) | ((unsigned __int64)LODWORD(v764) << 32);
    LANES128(v147).n128_u64[0] = LANES128(v144).n128_u64[0];
    LANES128(v148).n128_u64[0] = LANES128(v146).n128_u64[0];
    LANES128(v145).n128_u64[1] = LANES128(v142).n128_u32[2];
    LANES128(v147).n128_u64[1] = LANES128(v142).n128_u32[2];
    LANES128(v148).n128_u64[1] = LANES128(v142).n128_u32[2];
    *v134 = v142;
    v134[1] = v145;
    v134[2] = v147;
    v134[3] = v148;
    v797_.v850 = v134 + 4;
    v757 = v142;
    v758 = v148;
    v759 = v145;
    v760 = v147;
    v149 = (char*)&v797_.v798 + 24 * v797_.v836;
    v150 = *((_QWORD*)v149 + 2);
    *((_QWORD*)v149 + 1) = 0;
    *((_QWORD*)v149 + 2) = 0;
    v151 = *(float32x4_t**)v149;
    v152 = v797_.v850;
    *(_QWORD*)v149 = v797_.v849;
    *((_QWORD*)v149 + 1) = v152;
    v797_.v849 = v151;
    v153 = v797_.v851;
    v797_.v851 = v150;
    *((_QWORD*)v149 + 2) = v153;
    v797_.v850 = v151;
    ++v797_.v836;
    if ((unsigned __int64)(v150 - (_QWORD)v151) <= 0x3F) {
      if (v151 != nullptr) {
        v154 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v154 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v154, (__int64)v151),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v150 = 0;
        v797_.v850 = nullptr;
        v797_.v851 = 0;
        v797_.v849 = nullptr;
      }
      v155 = v150 >> 3;
      if ((unsigned __int64)(v150 >> 3) <= 4) {
        v155 = 4;
      }
      if ((unsigned __int64)v150 >= 0x7FFFFFFFFFFFFFF0LL) {
        v156 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v156 = v155;
      }
      if (v156 >> 60 != 0) {
        goto LABEL_735;
      }
      v157 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v156, 16, 0),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
      LANES128(v143).n128_u64[0] =
          LODWORD(v767) | ((unsigned __int64)LODWORD(v762) << 32);
      LANES128(v141).n128_u64[0] =
          LODWORD(v763) | ((unsigned __int64)LODWORD(v762) << 32);
      LANES128(v146).n128_u64[0] =
          LODWORD(v763) | ((unsigned __int64)LODWORD(v764) << 32);
      LANES128(v144).n128_u64[0] =
          LODWORD(v767) | ((unsigned __int64)LODWORD(v764) << 32);
      v151 = (float32x4_t*)v157;
      v797_.v849 = (float32x4_t*)v157;
      v797_.v851 = v157 + 16 * v156;
    }
    LANES128(v141).n128_u64[1] = LODWORD(v761);
    LANES128(v143).n128_u64[1] = LODWORD(v761);
    LANES128(v144).n128_u64[1] = LODWORD(v761);
    LANES128(v146).n128_u64[1] = LODWORD(v761);
    *v151 = v143;
    v151[1] = v141;
    v151[2] = v146;
    v151[3] = v144;
    v797_.v850 = v151 + 4;
    v770 = v146;
    v773 = v144;
    v777 = v143;
    v782 = v141;
    v158 = (char*)&v797_.v798 + 24 * v797_.v836;
    v159 = *((_QWORD*)v158 + 2);
    *((_QWORD*)v158 + 1) = 0;
    *((_QWORD*)v158 + 2) = 0;
    v160 = *(float32x4_t**)v158;
    v161 = v797_.v850;
    *(_QWORD*)v158 = v797_.v849;
    *((_QWORD*)v158 + 1) = v161;
    v797_.v849 = v160;
    v162 = v797_.v851;
    v797_.v851 = v159;
    *((_QWORD*)v158 + 2) = v162;
    v797_.v850 = v160;
    ++v797_.v836;
    if ((unsigned __int64)(v159 - (_QWORD)v160) <= 0x3F) {
      if (v160 != nullptr) {
        v163 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v163 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v163, (__int64)v160),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v159 = 0;
        v797_.v850 = nullptr;
        v797_.v851 = 0;
        v797_.v849 = nullptr;
      }
      v164 = v159 >> 3;
      if ((unsigned __int64)(v159 >> 3) <= 4) {
        v164 = 4;
      }
      if ((unsigned __int64)v159 >= 0x7FFFFFFFFFFFFFF0LL) {
        v165 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v165 = v164;
      }
      if (v165 >> 60 != 0) {
        goto LABEL_735;
      }
      v166 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v165, 16, 0),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
      v143 = v777;
      v141 = v782;
      v146 = v770;
      v144 = v773;
      v160 = (float32x4_t*)v166;
      v797_.v849 = (float32x4_t*)v166;
      v797_.v851 = v166 + 16 * v165;
    }
    *v160 = v143;
    v160[1] = v144;
    v160[2] = v760;
    v160[3] = v759;
    v797_.v850 = v160 + 4;
    v167 = (char*)&v797_.v798 + 24 * v797_.v836;
    v168 = *((_QWORD*)v167 + 2);
    *((_QWORD*)v167 + 1) = 0;
    *((_QWORD*)v167 + 2) = 0;
    v169 = *(float32x4_t**)v167;
    v170 = v797_.v850;
    *(_QWORD*)v167 = v797_.v849;
    *((_QWORD*)v167 + 1) = v170;
    v797_.v849 = v169;
    v171 = v797_.v851;
    v797_.v851 = v168;
    *((_QWORD*)v167 + 2) = v171;
    v797_.v850 = v169;
    ++v797_.v836;
    if ((unsigned __int64)(v168 - (_QWORD)v169) <= 0x3F) {
      if (v169 != nullptr) {
        v172 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v172 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v172, (__int64)v169),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v168 = 0;
        v797_.v850 = nullptr;
        v797_.v851 = 0;
        v797_.v849 = nullptr;
      }
      v173 = v168 >> 3;
      if ((unsigned __int64)(v168 >> 3) <= 4) {
        v173 = 4;
      }
      if ((unsigned __int64)v168 >= 0x7FFFFFFFFFFFFFF0LL) {
        v174 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v174 = v173;
      }
      if (v174 >> 60 != 0) {
        goto LABEL_735;
      }
      v175 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v174, 16, 0),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
      v143 = v777;
      v141 = v782;
      v146 = v770;
      v144 = v773;
      v169 = (float32x4_t*)v175;
      v797_.v849 = (float32x4_t*)v175;
      v797_.v851 = v175 + 16 * v174;
    }
    *v169 = v141;
    v169[1] = v757;
    v169[2] = v758;
    v169[3] = v146;
    v797_.v850 = v169 + 4;
    v176 = (char*)&v797_.v798 + 24 * v797_.v836;
    v177 = *((_QWORD*)v176 + 2);
    *((_QWORD*)v176 + 1) = 0;
    *((_QWORD*)v176 + 2) = 0;
    v178 = *(float32x4_t**)v176;
    v179 = v797_.v850;
    *(_QWORD*)v176 = v797_.v849;
    *((_QWORD*)v176 + 1) = v179;
    v797_.v849 = v178;
    v180 = v797_.v851;
    v797_.v851 = v177;
    *((_QWORD*)v176 + 2) = v180;
    v797_.v850 = v178;
    ++v797_.v836;
    if ((unsigned __int64)(v177 - (_QWORD)v178) <= 0x3F) {
      if (v178 != nullptr) {
        v181 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v181 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v181, (__int64)v178),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v177 = 0;
        v797_.v850 = nullptr;
        v797_.v851 = 0;
        v797_.v849 = nullptr;
      }
      v182 = v177 >> 3;
      if ((unsigned __int64)(v177 >> 3) <= 4) {
        v182 = 4;
      }
      if ((unsigned __int64)v177 >= 0x7FFFFFFFFFFFFFF0LL) {
        v183 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v183 = v182;
      }
      if (v183 >> 60 != 0) {
        goto LABEL_735;
      }
      v184 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v183, 16, 0),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
      v143 = v777;
      v141 = v782;
      v146 = v770;
      v144 = v773;
      v178 = (float32x4_t*)v184;
      v797_.v849 = (float32x4_t*)v184;
      v797_.v851 = v184 + 16 * v183;
    }
    *v178 = v144;
    v178[1] = v146;
    v178[2] = v758;
    v178[3] = v760;
    v797_.v850 = v178 + 4;
    v185 = (char*)&v797_.v798 + 24 * v797_.v836;
    v186 = *((_QWORD*)v185 + 2);
    *((_QWORD*)v185 + 1) = 0;
    *((_QWORD*)v185 + 2) = 0;
    v187 = *(float32x4_t**)v185;
    v188 = v797_.v850;
    *(_QWORD*)v185 = v797_.v849;
    *((_QWORD*)v185 + 1) = v188;
    v797_.v849 = v187;
    v189 = v797_.v851;
    v797_.v851 = v186;
    *((_QWORD*)v185 + 2) = v189;
    v797_.v850 = v187;
    ++v797_.v836;
    if ((unsigned __int64)(v186 - (_QWORD)v187) <= 0x3F) {
      if (v187 != nullptr) {
        v190 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v190 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v190, (__int64)v187),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v186 = 0;
        v797_.v850 = nullptr;
        v797_.v851 = 0;
        v797_.v849 = nullptr;
      }
      v191 = v186 >> 3;
      if ((unsigned __int64)(v186 >> 3) <= 4) {
        v191 = 4;
      }
      if ((unsigned __int64)v186 >= 0x7FFFFFFFFFFFFFF0LL) {
        v192 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v192 = v191;
      }
      if (v192 >> 60 != 0) {
        goto LABEL_735;
      }
      v193 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v192, 16, 0),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
      v143 = v777;
      v141 = v782;
      v187 = (float32x4_t*)v193;
      v797_.v849 = (float32x4_t*)v193;
      v797_.v851 = v193 + 16 * v192;
    }
    *v187 = v141;
    v187[1] = v143;
    LANES128(v194).n128_u64[0] = __PAIR64__(LODWORD(v764), LODWORD(v767));
    LANES128(v194).n128_u64[1] = LODWORD(v761);
    LANES128(v195).n128_u64[0] = __PAIR64__(LODWORD(v762), LODWORD(v763));
    LANES128(v195).n128_u64[1] = LODWORD(v756);
    v187[2] = v759;
    v187[3] = v757;
    v797_.v850 = v187 + 4;
    v196 = vaddq_f32(v194, v195);
    LANES128(v197).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v197).n128_u64[1] = 0x3F0000003F000000LL;
    v198 = vmulq_f32(vsubq_f32(v195, v194), v197);
    v199 = (__int64*)&v797_.v798 + 3 * v797_.v836;
    v200 = v199[2];
    v199[1] = 0;
    v199[2] = 0;
    v201 = *v199;
    v202 = v797_.v850;
    *v199 = (__int64)v797_.v849;
    v199[1] = (__int64)v202;
    v797_.v849 = (float32x4_t*)v201;
    v203 = v797_.v851;
    v797_.v851 = v200;
    v199[2] = v203;
    v797_.v850 = (float32x4_t*)v201;
    ++v797_.v836;
    LANES128(v198).n128_u64[0] =
        LANES64_OF(
            vmul_f32(COERCE_AS(float32x2_t,
                               (LANES128(v198).n128_u32[0] |
                                ((unsigned __int64)LANES128(v198).n128_u32[2]
                                 << 32))),
                     COERCE_AS(float32x2_t,
                               (LANES128(v198).n128_u32[0] |
                                ((unsigned __int64)LANES128(v198).n128_u32[2]
                                 << 32)))))
            .n64_u64[0];
    v778 = vmulq_f32(v196, v197);
    v783 = 0x1.0000000000000p-1f *
           LANES64_OF(vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v198).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v198).n128_u64[0]))))
               .n64_f32[0];
    *(long double*)&v204 =
        ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v750 + 40LL))(v750),
           v12 =
               COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
           v14 =
               COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
           v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
           v23 =
               COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
           v25 =
               COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
    v205 = 0;
    v206 = vmulq_f32(vsubq_f32(v778, v204), v749);
    LANES128(v206).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v206, v206, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v206).n128_u64[0])))
            .n64_u64[0];
    *(_QWORD*)&v207 = v797_.v853;
    *((_QWORD*)&v207 + 1) = (unsigned int)v797_.v854 |
                            ((unsigned __int64)(unsigned int)v797_.v855 << 32);
    *(_QWORD*)&v208 = v797_.v857;
    *((_QWORD*)&v208 + 1) = (unsigned int)v797_.v858 |
                            ((unsigned __int64)(unsigned int)v797_.v859 << 32);
    *(_OWORD*)v797_.v797 = v207;
    *(_OWORD*)&v797_.v797[2] = v208;
    *(_QWORD*)&v207 = v797_.v861;
    *((_QWORD*)&v210 + 1) = (unsigned int)v797_.v862 |
                            ((unsigned __int64)(unsigned int)v797_.v863 << 32);
    *(_QWORD*)&v208 = v797_.v869;
    *((_QWORD*)&v208 + 1) = (unsigned int)v797_.v870 |
                            ((unsigned __int64)(unsigned int)v797_.v871 << 32);
    v209 = 0x1.8000000000000p+0f -
           LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v206).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v206).n128_u64[0])))
               .n64_f32[0];
    *(_OWORD*)&v797_.v797[4] = v210;
    *(_OWORD*)&v797_.v797[6] = v208;
    *(_QWORD*)&v210 = v797_.v873;
    if (v209 < 0x0.0p+0f) {
      v209 = 0x0.0p+0f;
    }
    *((_QWORD*)&v210 + 1) = (unsigned int)v797_.v874 |
                            ((unsigned __int64)(unsigned int)v797_.v875 << 32);
    v211 = vmulq_f32(
        vaddq_f32(v778, vmulq_n_f32(vmulq_n_f32(v749, v783), v209)), v749);
    LANES128(v211).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v211, v211, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v211).n128_u64[0])))
            .n64_u64[0];
    *(_QWORD*)&v212 = v748;
    *((_QWORD*)&v212 + 1) =
        v747 |
        ((unsigned __int64)(LANES64_OF(
                                vpadd_f32(
                                    COERCE_AS(float32x2_t,
                                              LANES128(v211).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v211).n128_u64[0])))
                                .n64_u32[0] ^
                            0x80000000)
         << 32);
    *(_OWORD*)&v797_.v797[8] = v210;
    *(_OWORD*)&v797_.v797[10] = v212;
    do {
      v765 = v205;
      v768 = (float32x4_t*)((char*)v797_.v797 + v205);
      v797_.v847 = v797_.v846;
      if (v797_.v836 >= 1) {
        v218 = 0;
        while (1) {
          v771 = v218;
          v223 = v797_.v837;
          v224 = v797_.v840;
          v225 = (__int64*)&v797_.v798 + 3 * v218;
          v227 = *v225;
          v226 = v225[1];
          v797_.v838 = v797_.v837;
          v797_.v841 = v797_.v840;
          v228 = v226 - v227;
          v229 = (v226 - v227) << 28;
          v230 = (int)((v226 - v227) >> 4);
          if (v229 != 0) {
            v231 = v797_.v839 - v797_.v837;
            if (v230 <= (__int64)(v797_.v839 - v797_.v837) >> 2) {
              GameRoutine_1a0ba50(v797_.v837, 0, v229 >> 30),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              v797_.v838 = v223 + (v229 >> 30);
            }
            else {
              if (v230 >> 62 != 0) {
                GameRoutine_a78a90(),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
              }
              v232 = v231 >> 1;
              if (v231 >> 1 <= v230) {
                v232 = v230;
              }
              if ((unsigned __int64)v231 >= 0x7FFFFFFFFFFFFFFCLL) {
                v233 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v233 = v232;
              }
              if (v233 >> 62 != 0) {
                goto LABEL_734;
              }
              v234 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v233, 16, 0),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
              GameRoutine_1a0ba50(v234, 0, v229 >> 30),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              v797_.v837 = v234;
              v797_.v839 = v234 + 4 * v233;
              v797_.v838 = v234 + (v229 >> 30);
              if (v223 != 0) {
                v235 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v235 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v235, v223),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
              }
            }
            v236 = v797_.v840;
            v224 = v797_.v841;
          }
          else {
            v236 = v797_.v840;
          }
          v237 = v224 - v236;
          v238 = (v224 - v236) >> 2;
          v239 = v230 - v238;
          if (v230 > v238) {
            break;
          }
          if (v230 < v238) {
            v248 = v236 + 4 * v230;
          LABEL_141:
            v797_.v841 = v248;
          }
        LABEL_142:
          v249 = v228 >> 4;
          if ((int)(v228 >> 4) <= 0) {
            v254 = (__int64)v797_.v843;
            goto LABEL_417;
          }
          v250 = *v768;
          if (((v228 >> 4) & 0x7FFFFFFF) - 1 >= 3) {
            v251 = -1;
            v255 = 0;
            v256 = 0;
            v252 = 0;
            v253 = 0;
            do {
              LANES128(v257).n128_u64[0] = *(_QWORD*)(*v225 + v255);
              LANES128(v257).n128_u64[1] =
                  *(unsigned int*)(*v225 + 4 * v256 + 8) | 0x3F80000000000000LL;
              v258 = vmulq_f32(v250, v257);
              LANES128(v258).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v258, v258, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v258).n128_u64[0])))
                      .n64_u64[0];
              *(_DWORD*)(v797_.v837 + v256) =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v258).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v258).n128_u64[0])))
                      .n64_u32[0];
              v259 = *(float*)(v797_.v837 + v256);
              if (v259 > 0x1.0624de0000000p-10f) {
                v260 = 1;
              }
              else {
                v260 = 2;
              }
              if (v259 < -0x1.0624de0000000p-10f) {
                v260 = 0;
              }
              *(_DWORD*)(v797_.v840 + v256) = v260;
              v261 = *v225;
              if (*(_DWORD*)(v797_.v840 + v256) == 2) {
                ++v253;
              }
              v262 = v261 + v255;
              v263 = *(unsigned int*)(v261 + 4 * v256 + 24);
              LANES128(v264).n128_u64[0] = *(_QWORD*)(v262 + 16);
              if (*(_DWORD*)(v797_.v840 + v256) == 2) {
                v265 = v251;
              }
              else {
                v265 = v252;
              }
              v266 = v263 | 0x3F80000000000000LL;
              if (v251 >= 0) {
                v267 = v251;
              }
              else {
                v267 = v265;
              }
              LANES128(v264).n128_u64[1] = v266;
              v268 = vmulq_f32(v250, v264);
              LANES128(v268).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v268, v268, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v268).n128_u64[0])))
                      .n64_u64[0];
              *(_DWORD*)(v797_.v837 + v256 + 4) =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v268).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v268).n128_u64[0])))
                      .n64_u32[0];
              v269 = *(float*)(v797_.v837 + v256 + 4);
              if (v269 > 0x1.0624de0000000p-10f) {
                v270 = 1;
              }
              else {
                v270 = 2;
              }
              if (v269 < -0x1.0624de0000000p-10f) {
                v270 = 0;
              }
              *(_DWORD*)(v797_.v840 + v256 + 4) = v270;
              v271 = *(_DWORD*)(v797_.v840 + v256 + 4);
              v273 = v271 == 2;
              if (v271 == 2) {
                v274 = v267;
              }
              else {
                v274 = v252 + 1;
              }
              if (v273) {
                ++v253;
              }
              if (v267 < 0) {
                v267 = v274;
              }
              LANES128(v272).n128_u64[1] =
                  *(unsigned int*)(*v225 + 4 * v256 + 40) |
                  0x3F80000000000000LL;
              LANES128(v272).n128_u64[0] = *(_QWORD*)(*v225 + v255 + 32);
              v275 = vmulq_f32(v250, v272);
              LANES128(v275).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v275, v275, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v275).n128_u64[0])))
                      .n64_u64[0];
              *(_DWORD*)(v797_.v837 + v256 + 8) =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v275).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v275).n128_u64[0])))
                      .n64_u32[0];
              v276 = *(float*)(v797_.v837 + v256 + 8);
              if (v276 > 0x1.0624de0000000p-10f) {
                v277 = 1;
              }
              else {
                v277 = 2;
              }
              if (v276 < -0x1.0624de0000000p-10f) {
                v277 = 0;
              }
              *(_DWORD*)(v797_.v840 + v256 + 8) = v277;
              v278 = *v225 + v255;
              v255 += 64;
              v279 = v252 + 2;
              if (*(_DWORD*)(v797_.v840 + v256 + 8) == 2) {
                v279 = v267;
                ++v253;
              }
              if (v267 < 0) {
                v267 = v279;
              }
              LANES128(v280).n128_u64[1] =
                  *(unsigned int*)(*v225 + 4 * v256 + 56) |
                  0x3F80000000000000LL;
              LANES128(v280).n128_u64[0] = *(_QWORD*)(v278 + 48);
              v281 = vmulq_f32(v250, v280);
              LANES128(v281).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v281, v281, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v281).n128_u64[0])))
                      .n64_u64[0];
              *(_DWORD*)(v797_.v837 + v256 + 12) =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v281).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v281).n128_u64[0])))
                      .n64_u32[0];
              v282 = *(float*)(v797_.v837 + v256 + 12);
              if (v282 > 0x1.0624de0000000p-10f) {
                v283 = 1;
              }
              else {
                v283 = 2;
              }
              if (v282 < -0x1.0624de0000000p-10f) {
                v283 = 0;
              }
              *(_DWORD*)(v797_.v840 + v256 + 12) = v283;
              v284 = v252 + 3;
              v252 += 4;
              v285 = v797_.v840 + v256;
              v256 += 16;
              LODWORD(v285) = *(_DWORD*)(v285 + 12);
              v286 = (_DWORD)v285 == 2;
              if ((_DWORD)v285 == 2) {
                v287 = v267;
              }
              else {
                v287 = v284;
              }
              if (v286) {
                ++v253;
              }
              if (v267 >= 0) {
                v251 = v267;
              }
              else {
                v251 = v287;
              }
            } while (v252 != ((v228 >> 4) & 0x7FFFFFFC));
          }
          else {
            v251 = -1;
            v252 = 0;
            v253 = 0;
          }
          v288 = (v228 >> 4) & 3;
          if (v288 != 0) {
            v289 = 4 * v252;
            v290 = 16 * v252;
            v291 = 4 * v288;
            v292 = 0;
            v293 = 0;
            do {
              v294 = *v225 + v290;
              LANES128(v295).n128_u64[0] = *(_QWORD*)(v294 + v292);
              v292 += 16;
              LANES128(v295).n128_u64[1] =
                  *(unsigned int*)(v294 + 4 * v293 + 8) | 0x3F80000000000000LL;
              v296 = vmulq_f32(v250, v295);
              LANES128(v296).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v296, v296, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v296).n128_u64[0])))
                      .n64_u64[0];
              *(_DWORD*)(v797_.v837 + v289 + v293) =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v296).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v296).n128_u64[0])))
                      .n64_u32[0];
              v297 = *(float*)(v797_.v837 + v289 + v293);
              if (v297 > 0x1.0624de0000000p-10f) {
                v298 = 1;
              }
              else {
                v298 = 2;
              }
              if (v297 < -0x1.0624de0000000p-10f) {
                v298 = 0;
              }
              *(_DWORD*)(v797_.v840 + v289 + v293) = v298;
              v299 = *(_DWORD*)(v797_.v840 + v289 + v293);
              v293 += 4;
              v300 = v299 == 2;
              if (v299 == 2) {
                v301 = v251;
              }
              else {
                v301 = v252;
              }
              if (v300) {
                ++v253;
              }
              LODWORD(v252) = v252 + 1;
              if (v251 < 0) {
                v251 = v301;
              }
            } while (v291 != v293);
          }
          if (v253 > 2) {
            v303 = *v225;
            v302 = v225[1];
            v304 = v797_.v851;
            v305 = v302 - *v225;
            v306 = (__int64)v797_.v849;
            if (v305 <= v797_.v851 - (unsigned __int64)v797_.v849) {
              v453 = (__int64)v797_.v850;
              v454 = (char*)((char*)v797_.v850 - (char*)v797_.v849);
              if (v305 <=
                  (unsigned __int64)((char*)v797_.v850 - (char*)v797_.v849)) {
                if (v302 != v303) {
                  GameRoutine_1a0b940((__int64)v797_.v849, *v225, v302 - *v225),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                }
              LABEL_426:
                v457 = (float32x4_t*)(v306 + v305);
              }
              else {
                if (v797_.v850 != v797_.v849) {
                  GameRoutine_1a0b940((__int64)v797_.v849, *v225,
                                      (char*)v797_.v850 - (char*)v797_.v849),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                  v453 = (__int64)v797_.v850;
                }
                v455 = (__int64)&v454[v303];
                v456 = v302 - (_QWORD)&v454[v303];
                if (v456 != 0) {
                  GameRoutine_1a0b940(v453, v455, v456),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                }
                v457 = (float32x4_t*)(v453 + v456);
              }
              v797_.v850 = v457;
              goto LABEL_428;
            }
            if (v797_.v849 != nullptr) {
              v797_.v850 = v797_.v849;
              v307 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v307 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v307,
                  (__int64)v797_.v849),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              v304 = 0;
              v797_.v850 = nullptr;
              v797_.v851 = 0;
              v797_.v849 = nullptr;
            }
            v308 = v305 >> 4;
            if ((unsigned __int64)(v305 >> 4) >> 60 == 0) {
              if (v304 >> 3 > v308) {
                v308 = v304 >> 3;
              }
              v309 = (unsigned __int64)v304 >= 0x7FFFFFFFFFFFFFF0LL
                         ? 0xFFFFFFFFFFFFFFFLL
                         : v308;
              if (v309 >> 60 == 0) {
                v310 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v309, 16, 0),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v306 = v310;
                v797_.v849 = (float32x4_t*)v310;
                v797_.v850 = (float32x4_t*)v310;
                v797_.v851 = v310 + 16 * v309;
                if (v302 != v303) {
                  GameRoutine_1a0b950(v310, v303, v305),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                }
                goto LABEL_426;
              }
            }
          LABEL_735:
            GameRoutine_bc84a0(),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
          }
          v311 = 0;
          v312 = v228 >> 4;
          v774 = v228 >> 4;
          v797_.v844 = v797_.v843;
          do {
            v314 = v251 % (int)v249;
            v315 = (v251 + 1) % (int)v249;
            v316 = *v225;
            v317 = *(float*)(v797_.v837 + 4LL * (v251 % (int)v249));
            v318 = *(_DWORD*)(v797_.v840 + 4LL * (v251 % (int)v249));
            v319 = *(float*)(v797_.v837 + 4LL * v315);
            v320 = (float32x4_t*)(*v225 + 16LL * v315);
            v321 = *(_DWORD*)(v797_.v840 + 4LL * v315);
            if (v318 == 0 && v321 == 1) {
              v322 = fabsf(v317) / (float)(v319 - v317);
              v323 = *v320;
              v324 = v797_.v850;
              v325 = vmlaq_n_f32(
                  *(float32x4_t*)(v316 + 16LL * v314),
                  vsubq_f32(v323, *(float32x4_t*)(v316 + 16LL * v314)), v322);
              if ((unsigned __int64)v797_.v850 >= v797_.v851) {
                v336 = (__int64)v797_.v849;
                v337 = (char*)v797_.v850 - (char*)v797_.v849;
                v338 = v797_.v850 - v797_.v849;
                v339 = v338 + 1;
                if ((unsigned __int64)(v338 + 1) >> 60 != 0) {
                  goto LABEL_735;
                }
                v340 = v797_.v851 - (_QWORD)v797_.v849;
                v784 = v325;
                if ((__int64)(v797_.v851 - (_QWORD)v797_.v849) >> 3 > v339) {
                  v339 = v340 >> 3;
                }
                if ((unsigned __int64)v340 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v341 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v341 = v339;
                }
                if (v341 != 0) {
                  if (v341 >> 60 != 0) {
                    goto LABEL_734;
                  }
                  v342 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v341, 16, 0),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
                  v325 = v784;
                }
                else {
                  v342 = 0;
                }
                v354 = v342 + 16 * v341;
                v355 = v342 + v337 - 16 * v338;
                *(float32x4_t*)(v342 + v337) = v325;
                v326 = v342 + v337 + 16;
                GameRoutine_1a0b950(v355, v336, v337),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                v797_.v849 = (float32x4_t*)v355;
                v797_.v850 = (float32x4_t*)v326;
                v797_.v851 = v354;
                if (v336 != 0) {
                  v356 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v356 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v356, v336),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                }
                v325 = v784;
              }
              else {
                *v797_.v850 = v325;
                v326 = (__int64)&v324[1];
              }
              v343 = v797_.v844;
              v797_.v850 = (float32x4_t*)v326;
              if ((unsigned __int64)v797_.v844 >= v797_.v845) {
                v357 = (__int64)v797_.v843;
                v358 = (char*)v797_.v844 - (char*)v797_.v843;
                v359 = ((char*)v797_.v844 - (char*)v797_.v843) >> 5;
                v360 = v359 + 1;
                if ((unsigned __int64)(v359 + 1) >> 59 != 0) {
                  goto LABEL_736;
                }
                v361 = v797_.v845 - (_QWORD)v797_.v843;
                if ((__int64)(v797_.v845 - (_QWORD)v797_.v843) >> 4 > v360) {
                  v360 = v361 >> 4;
                }
                if ((unsigned __int64)v361 >= 0x7FFFFFFFFFFFFFE0LL) {
                  v362 = 0x7FFFFFFFFFFFFFFLL;
                }
                else {
                  v362 = v360;
                }
                if (v362 != 0) {
                  if (v362 >> 59 != 0) {
                    goto LABEL_734;
                  }
                  v786 = v325;
                  v363 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v362, 16, 0),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
                  v325 = v786;
                }
                else {
                  v363 = 0;
                }
                v364 = v363 + 32 * v362;
                v365 = v363 + v358;
                *(float32x4_t*)(v363 + v358) = v325;
                goto LABEL_411;
              }
              *v797_.v844 = v325;
              goto LABEL_227;
            }
            if (v318 == 1 && v321 == 0) {
              v333 = v797_.v850;
              v334 = vmlaq_n_f32(
                  *v320, vsubq_f32(*(float32x4_t*)(v316 + 16LL * v314), *v320),
                  fabsf(v319) / (float)(v317 - v319));
              if ((unsigned __int64)v797_.v850 >= v797_.v851) {
                v346 = (__int64)v797_.v849;
                v347 = (char*)v797_.v850 - (char*)v797_.v849;
                v348 = v797_.v850 - v797_.v849;
                v349 = v348 + 1;
                if ((unsigned __int64)(v348 + 1) >> 60 != 0) {
                  goto LABEL_735;
                }
                v350 = v797_.v851 - (_QWORD)v797_.v849;
                v351 = v311;
                v785 = v334;
                if ((__int64)(v797_.v851 - (_QWORD)v797_.v849) >> 3 > v349) {
                  v349 = v350 >> 3;
                }
                if ((unsigned __int64)v350 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v352 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v352 = v349;
                }
                if (v352 != 0) {
                  if (v352 >> 60 != 0) {
                    goto LABEL_734;
                  }
                  v353 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v352, 16, 0),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
                  v334 = v785;
                }
                else {
                  v353 = 0;
                }
                v368 = v353 + 16 * v352;
                v369 = v353 + v347 - 16 * v348;
                *(float32x4_t*)(v353 + v347) = v334;
                v335 = v353 + v347 + 16;
                GameRoutine_1a0b950(v369, v346, v347),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                v797_.v849 = (float32x4_t*)v369;
                v797_.v850 = (float32x4_t*)v335;
                v797_.v851 = v368;
                if (v346 != 0) {
                  v370 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v370 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v370, v346),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                }
                v334 = v785;
                v311 = v351;
                LODWORD(v249) = v774;
              }
              else {
                *v797_.v850 = v334;
                v335 = (__int64)&v333[1];
              }
              v371 = v797_.v844;
              v797_.v850 = (float32x4_t*)v335;
              if ((unsigned __int64)v797_.v844 < v797_.v845) {
                *v797_.v844 = v334;
                goto LABEL_304;
              }
              v373 = (__int64)v797_.v843;
              v374 = (char*)((char*)v797_.v844 - (char*)v797_.v843);
              v375 = ((char*)v797_.v844 - (char*)v797_.v843) >> 5;
              v376 = v375 + 1;
              if ((unsigned __int64)(v375 + 1) >> 59 != 0) {
                goto LABEL_736;
              }
              v377 = v797_.v845 - (_QWORD)v797_.v843;
              if ((__int64)(v797_.v845 - (_QWORD)v797_.v843) >> 4 > v376) {
                v376 = v377 >> 4;
              }
              if ((unsigned __int64)v377 >= 0x7FFFFFFFFFFFFFE0LL) {
                v378 = 0x7FFFFFFFFFFFFFFLL;
              }
              else {
                v378 = v376;
              }
              if (v378 != 0) {
                if (v378 >> 59 != 0) {
                  goto LABEL_734;
                }
                v379 = v311;
                v787 = v334;
                v380 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v378, 16, 0),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v334 = v787;
              }
              else {
                v379 = v311;
                v380 = 0;
              }
              v381 = (float32x4_t*)&v374[v380];
              v382 = v380 + 32 * v378;
              v383 = v373;
              v384 = (unsigned __int64)v374;
              v385 = (__int64)&v374[v380 + -32 * v375];
              *(float32x4_t*)&v374[v380] = v334;
              goto LABEL_316;
            }
            if (v318 == 2 && v321 == 1) {
              v343 = v797_.v844;
              v344 = v797_.v850[-1];
              v345 = v797_.v845;
              if ((unsigned __int64)v797_.v844 < v797_.v845) {
                goto LABEL_266;
              }
            LABEL_400:
              v357 = (__int64)v797_.v843;
              v358 = (char*)v343 - (char*)v797_.v843;
              v359 = ((char*)v343 - (char*)v797_.v843) >> 5;
              v447 = v359 + 1;
              if ((unsigned __int64)(v359 + 1) >> 59 != 0) {
              LABEL_736:
                GameRoutine_bfa4f0(),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
              }
              v448 = v345 - (_QWORD)v797_.v843;
              if (v448 >> 4 > v447) {
                v447 = v448 >> 4;
              }
              if ((unsigned __int64)v448 >= 0x7FFFFFFFFFFFFFE0LL) {
                v449 = 0x7FFFFFFFFFFFFFFLL;
              }
              else {
                v449 = v447;
              }
              if (v449 != 0) {
                if (v449 >> 59 != 0) {
                  goto LABEL_734;
                }
                v791 = v344;
                v450 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v449, 16, 0),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v344 = v791;
              }
              else {
                v450 = 0;
              }
              v365 = v450 + v358;
              v364 = v450 + 32 * v449;
              *(float32x4_t*)(v450 + v358) = v344;
            LABEL_411:
              v451 = v365 - 32 * v359;
              v313 = (float32x4_t*)(v365 + 32);
              *(_BYTE*)(v365 + 16) = 1;
              GameRoutine_1a0b950(v451, v357, v358),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              v797_.v843 = (float32x4_t*)v451;
              v797_.v844 = v313;
              v797_.v845 = v364;
              if (v357 != 0) {
                v452 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v452 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v452, v357),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
              }
            LABEL_228:
              v797_.v844 = v313;
              v311 = 1;
              goto LABEL_229;
            }
            if (v318 == 1 && v321 == 2) {
              v366 = v797_.v850;
              if ((unsigned __int64)v797_.v850 >= v797_.v851) {
                v392 = (__int64)v797_.v849;
                v393 = (char*)v797_.v850 - (char*)v797_.v849;
                v394 = v797_.v850 - v797_.v849;
                v395 = v394 + 1;
                if ((unsigned __int64)(v394 + 1) >> 60 != 0) {
                  goto LABEL_735;
                }
                v396 = v797_.v851 - (_QWORD)v797_.v849;
                if ((__int64)(v797_.v851 - (_QWORD)v797_.v849) >> 3 > v395) {
                  v395 = v396 >> 3;
                }
                if ((unsigned __int64)v396 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v397 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v397 = v395;
                }
                if (v397 != 0) {
                  if (v397 >> 60 != 0) {
                    goto LABEL_734;
                  }
                  v398 = v311;
                  v399 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v397, 16, 0),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
                }
                else {
                  v398 = v311;
                  v399 = 0;
                }
                v418 = (_QWORD*)(v399 + v393);
                v419 = v399 + 16 * v397;
                v420 = v399 + v393 - 16 * v394;
                v367 = v399 + v393 + 16;
                v418[1] = LANES128(*(v320)).n128_u64[1];
                *v418 = LANES128(*(v320)).n128_u64[0];
                GameRoutine_1a0b950(v420, v392, v393),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                v797_.v849 = (float32x4_t*)v420;
                v797_.v850 = (float32x4_t*)v367;
                v797_.v851 = v419;
                if (v392 != 0) {
                  v421 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v421 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v421, v392),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                }
                v311 = v398;
                LODWORD(v249) = v774;
              }
              else {
                v367 = (__int64)&v797_.v850[1];
                LANES128(*(v797_.v850)).n128_u64[1] =
                    LANES128(*(v320)).n128_u64[1];
                LANES128(*(v366)).n128_u64[0] = LANES128(*(v320)).n128_u64[0];
              }
              v797_.v850 = (float32x4_t*)v367;
              v422 = v797_.v844;
              v423 = *v320;
              if ((unsigned __int64)v797_.v844 >= v797_.v845) {
                v424 = (__int64)v797_.v843;
                v425 = (char*)v797_.v844 - (char*)v797_.v843;
                v426 = ((char*)v797_.v844 - (char*)v797_.v843) >> 5;
                v427 = v426 + 1;
                if ((unsigned __int64)(v426 + 1) >> 59 != 0) {
                  goto LABEL_736;
                }
                v428 = v797_.v845 - (_QWORD)v797_.v843;
                if ((__int64)(v797_.v845 - (_QWORD)v797_.v843) >> 4 > v427) {
                  v427 = v428 >> 4;
                }
                if ((unsigned __int64)v428 >= 0x7FFFFFFFFFFFFFE0LL) {
                  v429 = 0x7FFFFFFFFFFFFFFLL;
                }
                else {
                  v429 = v427;
                }
                if (v429 != 0) {
                  if (v429 >> 59 != 0) {
                    goto LABEL_734;
                  }
                  v430 = v311;
                  v789 = v423;
                  v431 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v429, 16, 0),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
                  v423 = v789;
                }
                else {
                  v430 = v311;
                  v431 = 0;
                }
                v432 = (float32x4_t*)(v431 + v425);
                v433 = v431 + 32 * v429;
                v434 = v431 + v425 - 32 * v426;
                *v432 = v423;
                LANES128(v432[1]).n128_u8[0] = 0;
                v435 = v431 + v425 + 32;
                GameRoutine_1a0b950(v434, v424, v425),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                v797_.v843 = (float32x4_t*)v434;
                v797_.v844 = (float32x4_t*)v435;
                v797_.v845 = v433;
                if (v424 != 0) {
                  v436 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v436 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v436, v424),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                }
                v311 = v430;
                LODWORD(v249) = v774;
                v797_.v844 = (float32x4_t*)v435;
              }
              else {
                *v797_.v844 = v423;
                LANES128(v422[1]).n128_u8[0] = 0;
                v797_.v844 = v422 + 2;
              }
            }
            else {
              if (v318 == 2 && v321 == 0) {
                v371 = v797_.v844;
                v391 = v797_.v850[-1];
                if ((unsigned __int64)v797_.v844 < v797_.v845) {
                  *v797_.v844 = v391;
                LABEL_304:
                  LANES128(v371[1]).n128_u8[0] = 0;
                  v372 = v371 + 2;
                LABEL_321:
                  v387 = v797_.v850;
                  v388 = v797_.v851;
                  v797_.v844 = v372;
                  if ((unsigned __int64)v797_.v850 >= v797_.v851) {
                    goto LABEL_336;
                  }
                  goto LABEL_322;
                }
                v373 = (__int64)v797_.v843;
                v412 = (char*)((char*)v797_.v844 - (char*)v797_.v843);
                v413 = ((char*)v797_.v844 - (char*)v797_.v843) >> 5;
                v414 = v413 + 1;
                if ((unsigned __int64)(v413 + 1) >> 59 != 0) {
                  goto LABEL_736;
                }
                v415 = v797_.v845 - (_QWORD)v797_.v843;
                if ((__int64)(v797_.v845 - (_QWORD)v797_.v843) >> 4 > v414) {
                  v414 = v415 >> 4;
                }
                if ((unsigned __int64)v415 >= 0x7FFFFFFFFFFFFFE0LL) {
                  v416 = 0x7FFFFFFFFFFFFFFLL;
                }
                else {
                  v416 = v414;
                }
                if (v416 != 0) {
                  if (v416 >> 59 != 0) {
                    goto LABEL_734;
                  }
                  v379 = v311;
                  v788 = v797_.v850[-1];
                  v417 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v416, 16, 0),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
                  v391 = v788;
                }
                else {
                  v379 = v311;
                  v417 = 0;
                }
                v381 = (float32x4_t*)&v412[v417];
                v382 = v417 + 32 * v416;
                v383 = v373;
                v384 = (unsigned __int64)v412;
                v385 = (__int64)&v412[v417 + -32 * v413];
                *(float32x4_t*)&v412[v417] = v391;
              LABEL_316:
                LANES128(v381[1]).n128_u8[0] = 0;
                v372 = v381 + 2;
                GameRoutine_1a0b950(v385, v383, v384),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                v797_.v843 = (float32x4_t*)v385;
                v797_.v844 = v372;
                v797_.v845 = v382;
                if (v373 != 0) {
                  v386 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v386 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v386, v373),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                }
                v311 = v379;
                LODWORD(v249) = v774;
                goto LABEL_321;
              }
              if (v318 == 0 && v321 == 2) {
                v331 = v797_.v850;
                if ((unsigned __int64)v797_.v850 >= v797_.v851) {
                  v437 = (__int64)v797_.v849;
                  v438 = (char*)v797_.v850 - (char*)v797_.v849;
                  v439 = v797_.v850 - v797_.v849;
                  v440 = v439 + 1;
                  if ((unsigned __int64)(v439 + 1) >> 60 != 0) {
                    goto LABEL_735;
                  }
                  v441 = v797_.v851 - (_QWORD)v797_.v849;
                  if ((__int64)(v797_.v851 - (_QWORD)v797_.v849) >> 3 > v440) {
                    v440 = v441 >> 3;
                  }
                  if ((unsigned __int64)v441 >= 0x7FFFFFFFFFFFFFF0LL) {
                    v442 = 0xFFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v442 = v440;
                  }
                  if (v442 != 0) {
                    if (v442 >> 60 != 0) {
                      goto LABEL_734;
                    }
                    v443 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v442, 16,
                        0),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                  }
                  else {
                    v443 = 0;
                  }
                  v444 = (_QWORD*)(v443 + v438);
                  v790 = v443 + 16 * v442;
                  v445 = v443 + v438 - 16 * v439;
                  v332 = v443 + v438 + 16;
                  v444[1] = LANES128(*(v320)).n128_u64[1];
                  *v444 = LANES128(*(v320)).n128_u64[0];
                  GameRoutine_1a0b950(v445, v437, v438),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                  v797_.v849 = (float32x4_t*)v445;
                  v797_.v850 = (float32x4_t*)v332;
                  v797_.v851 = v790;
                  if (v437 != 0) {
                    v446 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v446 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v446, v437),
                        v12 = COERCE_AS(__typeof__(v12),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v25 = COERCE_AS(__typeof__(v25),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                  }
                }
                else {
                  v332 = (__int64)&v797_.v850[1];
                  LANES128(*(v797_.v850)).n128_u64[1] =
                      LANES128(*(v320)).n128_u64[1];
                  LANES128(*(v331)).n128_u64[0] = LANES128(*(v320)).n128_u64[0];
                }
                v797_.v850 = (float32x4_t*)v332;
                v343 = v797_.v844;
                v345 = v797_.v845;
                v344 = *v320;
                if ((unsigned __int64)v797_.v844 >= v797_.v845) {
                  goto LABEL_400;
                }
              LABEL_266:
                *v343 = v344;
              LABEL_227:
                v313 = v343 + 2;
                LANES128(v343[1]).n128_u8[0] = 1;
                goto LABEL_228;
              }
              if (v321 != 1) {
                v387 = v797_.v850;
                v388 = v797_.v851;
                if ((unsigned __int64)v797_.v850 >= v797_.v851) {
                LABEL_336:
                  v400 = (__int64)v797_.v849;
                  v401 = (char*)v387 - (char*)v797_.v849;
                  v402 = v387 - v797_.v849;
                  v403 = v402 + 1;
                  if ((unsigned __int64)(v402 + 1) >> 60 != 0) {
                    goto LABEL_735;
                  }
                  v404 = v388 - (_QWORD)v797_.v849;
                  if (v404 >> 3 > v403) {
                    v403 = v404 >> 3;
                  }
                  if ((unsigned __int64)v404 >= 0x7FFFFFFFFFFFFFF0LL) {
                    v405 = 0xFFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v405 = v403;
                  }
                  if (v405 != 0) {
                    if (v405 >> 60 != 0) {
                      goto LABEL_734;
                    }
                    v406 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v405, 16,
                        0),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                  }
                  else {
                    v406 = 0;
                  }
                  v407 = (unsigned __int64*)(v406 + v401);
                  v408 = v406 + 16 * v405;
                  v409 = v406 + v401 - 16 * v402;
                  v407[1] = LANES128(*(v320)).n128_u64[1];
                  v410 = LANES128(*(v320)).n128_u64[0];
                  v390 = v406 + v401 + 16;
                  *v407 = v410;
                  GameRoutine_1a0b950(v409, v400, v401),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                  v797_.v849 = (float32x4_t*)v409;
                  v797_.v850 = (float32x4_t*)v390;
                  v797_.v851 = v408;
                  if (v400 != 0) {
                    v411 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v411 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v411, v400),
                        v12 = COERCE_AS(__typeof__(v12),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v25 = COERCE_AS(__typeof__(v25),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                  }
                  goto LABEL_350;
                }
              LABEL_322:
                LANES128(*(v387)).n128_u64[1] = LANES128(*(v320)).n128_u64[1];
                v389 = LANES128(*(v320)).n128_u64[0];
                v390 = (__int64)&v387[1];
                LANES128(*(v387)).n128_u64[0] = v389;
              LABEL_350:
                v797_.v850 = (float32x4_t*)v390;
              }
            }
          LABEL_229:
            --v312;
            ++v251;
          } while (v312 != 0);
          if ((v311 & 1) == 0) {
            v254 = (__int64)v797_.v843;
            if (v797_.v843 != v797_.v844) {
            LABEL_417:
              v797_.v844 = (float32x4_t*)v254;
            }
          }
        LABEL_428:
          if ((unsigned __int64)((char*)v797_.v850 - (char*)v797_.v849) <=
              0x20) {
            v797_.v850 = v797_.v849;
          }
          else if (v797_.v843 != v797_.v844) {
            v458 = (char*)v797_.v844 - (char*)v797_.v843;
            v459 = 0;
            while ((LANES128(v797_.v843[1]).n128_u8[v459] & 1) == 0) {
              v459 += 32;
              if ((float32x4_t*)((char*)v797_.v843 + v459) == v797_.v844) {
                v459 = (char*)v797_.v844 - (char*)v797_.v843;
                break;
              }
            }
            v460 = v778;
            LANES128(v460).n128_u8[0] = 0;
            v778 = v460;
            if ((int)((unsigned __int64)((char*)v797_.v844 -
                                         (char*)v797_.v843) >>
                      5) >= 1) {
              v461 = v459 >> 5;
              v462 = (int)(v458 >> 5);
              v463 = ((unsigned __int64)v458 >> 5) & 0x7FFFFFFF;
              v464 = 0;
              do {
                v465 = &v797_.v843[2 * (v461 % v462)];
                v466 = LANES128(v465[1]).n128_u8[0];
                if (v466 == 1) {
                  v778 = *v465;
                }
                else if ((v464 & 1) != 0) {
                  v467 = *v465;
                  v468 = vsubq_f32(v778, *v465);
                  v469 = fabsf(LANES128(v468).n128_f32[0]);
                  v470 = fabsf(LANES128(v468).n128_f32[1]);
                  v471 = fabsf(LANES128(v468).n128_f32[2]);
                  v472 = v469 <= 0x1.0624de0000000p-10f &&
                         v470 <= 0x1.0624de0000000p-10f;
                  if (!v472 || v471 > 0x1.0624de0000000p-10f) {
                    v474 = v797_.v847;
                    if ((unsigned __int64)v797_.v847 >= v797_.v848) {
                      v476 = (__int64)v797_.v846;
                      v477 = (char*)v797_.v847 - (char*)v797_.v846;
                      v478 = ((char*)v797_.v847 - (char*)v797_.v846) >> 5;
                      v479 = v478 + 1;
                      if ((unsigned __int64)(v478 + 1) >> 59 != 0) {
                        GameRoutine_bfa510(),
                            v12 =
                                COERCE_AS(__typeof__(v12),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v14 =
                                COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v16 = COERCE_AS(__typeof__(v16),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v23 =
                                COERCE_AS(__typeof__(v23),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v25 =
                                COERCE_AS(__typeof__(v25),
                                          PSEUDO_REGISTER(__n128, "v2", "=w"));
                      }
                      v480 = v797_.v848 - (_QWORD)v797_.v846;
                      if ((__int64)(v797_.v848 - (_QWORD)v797_.v846) >> 4 >
                          v479) {
                        v479 = v480 >> 4;
                      }
                      if ((unsigned __int64)v480 >= 0x7FFFFFFFFFFFFFE0LL) {
                        v481 = 0x7FFFFFFFFFFFFFFLL;
                      }
                      else {
                        v481 = v479;
                      }
                      if (v481 != 0) {
                        if (v481 >> 59 != 0) {
                          goto LABEL_734;
                        }
                        v792 = v467;
                        v482 = fw_memory_HeapManager_Allocate(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v481,
                            16, 0),
                        v12 = COERCE_AS(__typeof__(v12),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v25 = COERCE_AS(__typeof__(v25),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                        v467 = v792;
                      }
                      else {
                        v482 = 0;
                      }
                      v483 = (float32x4_t*)(v482 + v477);
                      v484 = v482 + 32 * v481;
                      v485 = v482 + v477 - 32 * v478;
                      v475 = v482 + v477 + 32;
                      v793 = v484;
                      *v483 = v778;
                      v483[1] = v467;
                      GameRoutine_1a0b950(v485, v476, v477),
                          v12 = COERCE_AS(__typeof__(v12),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v23 = COERCE_AS(__typeof__(v23),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v25 = COERCE_AS(__typeof__(v25),
                                          PSEUDO_REGISTER(__n128, "v2", "=w"));
                      v797_.v846 = (float32x4_t*)v485;
                      v797_.v847 = (float32x4_t*)v475;
                      v797_.v848 = v793;
                      if (v476 != 0) {
                        v486 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v486 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v486,
                            v476),
                            v12 =
                                COERCE_AS(__typeof__(v12),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v14 =
                                COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v16 = COERCE_AS(__typeof__(v16),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v23 =
                                COERCE_AS(__typeof__(v23),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v25 =
                                COERCE_AS(__typeof__(v25),
                                          PSEUDO_REGISTER(__n128, "v2", "=w"));
                      }
                    }
                    else {
                      v475 = (__int64)&v797_.v847[2];
                      *v797_.v847 = v778;
                      v474[1] = v467;
                    }
                    v797_.v847 = (float32x4_t*)v475;
                  }
                }
                --v463;
                ++v461;
                v464 = v466;
              } while (v463 != 0);
            }
          }
          v219 = v225[2];
          v225[1] = 0;
          v225[2] = 0;
          v220 = *v225;
          v221 = v797_.v850;
          *v225 = (__int64)v797_.v849;
          v225[1] = (__int64)v221;
          v797_.v849 = (float32x4_t*)v220;
          v222 = v797_.v851;
          v797_.v851 = v219;
          v225[2] = v222;
          v797_.v850 = (float32x4_t*)v220;
          v218 = v771 + 1;
          if (v771 + 1 >= v797_.v836) {
            goto LABEL_464;
          }
        }
        if (v239 > (__int64)(v797_.v842 - v224) >> 2) {
          if (v230 >> 62 != 0) {
            GameRoutine_bfa4d0(),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
          }
          v240 = (__int64)(v797_.v842 - v236) >> 1;
          if (v240 <= v230) {
            v240 = v230;
          }
          if (v797_.v842 - v236 >= 0x7FFFFFFFFFFFFFFCLL) {
            v241 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v241 = v240;
          }
          if (v241 >> 62 != 0) {
            goto LABEL_734;
          }
          v242 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v241, 16, 0),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v243 = v242 + v237;
          v244 = v242 + 4 * v241;
          GameRoutine_1a0ba50(v242 + v237, 0, 4 * v239),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
          v245 = v243 + 4 * v239;
          v246 = v243 - 4 * v238;
          GameRoutine_1a0b950(v246, v236, v237),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
          v797_.v840 = v246;
          v797_.v841 = v245;
          v797_.v842 = v244;
          if (v236 != 0) {
            v247 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v247 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v247, v236),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
          }
          goto LABEL_142;
        }
        GameRoutine_1a0ba50(v224, 0, 4 * v239),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v248 = v224 + 4 * v239;
        goto LABEL_141;
      }
    LABEL_464:
      if (LANES128(v797_.v798).n128_u64[0] ==
          LANES128(v797_.v798).n128_u64[1]) {
        v487 = &v797_.v798;
        v491 = 3;
        v492 = &v797_.v798;
      }
      else {
        if (LANES128(v797_.v799).n128_u64[1] ==
            LANES128(v797_.v800).n128_u64[0]) {
          v492 = (int8x16_t*)&LANES128(v797_.v799).n128_i8[8];
          v491 = 6;
        }
        else if (LANES128(v797_.v801).n128_u64[0] ==
                 LANES128(v797_.v801).n128_u64[1]) {
          v492 = &v797_.v801;
          v491 = 9;
        }
        else if (v797_.v803 == v797_.v804) {
          v492 = (int8x16_t*)&v797_.v803;
          v491 = 12;
        }
        else if (v797_.v806 == v797_.v807) {
          v492 = (int8x16_t*)&v797_.v806;
          v491 = 15;
        }
        else if (v797_.v809 == v797_.v810) {
          v492 = (int8x16_t*)&v797_.v809;
          v491 = 18;
        }
        else if (v797_.v812 == v797_.v813) {
          v492 = (int8x16_t*)&v797_.v812;
          v491 = 21;
        }
        else if (v797_.v815 == v797_.v816) {
          v492 = (int8x16_t*)&v797_.v815;
          v491 = 24;
        }
        else if (v797_.v818 == v797_.v819) {
          v492 = (int8x16_t*)&v797_.v818;
          v491 = 27;
        }
        else if (v797_.v821 == v797_.v822) {
          v492 = (int8x16_t*)&v797_.v821;
          v491 = 30;
        }
        else if (v797_.v824 == v797_.v825) {
          v492 = (int8x16_t*)&v797_.v824;
          v491 = 33;
        }
        else if (v797_.v827 == v797_.v828) {
          v492 = (int8x16_t*)&v797_.v827;
          v491 = 36;
        }
        else {
          if (v797_.v830 != v797_.v831) {
            if (v797_.v833 == v797_.v834) {
              v487 = (float32x4_t*)&v797_.v833;
            }
            else {
              v487 = (float32x4_t*)&v797_.v836;
            }
            goto LABEL_480;
          }
          v492 = (int8x16_t*)&v797_.v830;
          v491 = 39;
        }
        v487 = v492;
      }
      v606 = v491 * 8 - 336;
      v607 = &LANES128(v797_.v798).n128_u64[v491];
      do {
        v608 = (int8x16_t*)v607;
        v609 = *v607;
        if (v609 != LANES128(v492[2]).n128_u64[0]) {
          v610 = LANES128(*(v487)).n128_u64[0];
          if (LANES128(*(v487)).n128_u64[0] != 0) {
            LANES128(*(v487)).n128_u64[1] = v610;
            v611 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v611 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v611, v610),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
            LANES128(*(v487)).n128_u64[1] = 0;
            LANES128(v487[1]).n128_u64[0] = 0;
            LANES128(*(v487)).n128_u64[0] = 0;
            v609 = LANES128(*(v608)).n128_u64[0];
          }
          LANES128(*(v487)).n128_u64[0] = v609;
          LANES128(*(v487)).n128_u64[1] = LANES128(v492[2]).n128_u64[0];
          LANES128(v487[1]).n128_u64[0] = LANES128(v492[2]).n128_u64[1];
          v487 = (float32x4_t*)((char*)v487 + 24);
          LANES128(*(v608)).n128_u64[1] = 0;
          LANES128(v608[1]).n128_u64[0] = 0;
          LANES128(*(v608)).n128_u64[0] = 0;
        }
        v606 += 24;
        v607 = &LANES128(v608[1]).n128_u64[1];
        v492 = v608;
      } while (v606 != 0);
    LABEL_480:
      v488 = (__int64)v797_.v846;
      v797_.v836 =
          1431655765 *
              ((unsigned __int64)((char*)&v797_.v836 - (char*)v487) >> 3) +
          14;
      if ((unsigned __int64)((char*)v797_.v847 - (char*)v797_.v846) > 0x40) {
        v489 = v797_.v846[1];
        v490 = (char*)((char*)v797_.v847 - (char*)&v797_.v846[2]);
        v797_.v880[0] = *v797_.v846;
        v794 = v489;
        if (v797_.v847 != &v797_.v846[2]) {
          GameRoutine_1a0b940((__int64)v797_.v846, (__int64)&v797_.v846[2],
                              (char*)v797_.v847 - (char*)&v797_.v846[2]),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
          v489 = v794;
        }
        v493 = &v490[v488];
        v494 = &v490[v488] - (char*)v797_.v846;
        v797_.v847 = (float32x4_t*)&v490[v488];
        if ((int)((unsigned __int64)v494 >> 5) >= 1) {
          v495 = v494 >> 5;
          v496 = ((unsigned __int64)v494 >> 5) & 0x7FFFFFFF;
          v497 = 0;
          while (1) {
            if (v495 == 0) {
            LABEL_738:
              GameRoutine_bfa530(),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
            v498 = &v797_.v846[v497];
            v499 = vsubq_f32(v797_.v846[v497], v489);
            v500 = fabsf(LANES128(v499).n128_f32[0]);
            v501 = fabsf(LANES128(v499).n128_f32[1]);
            v502 = fabsf(LANES128(v499).n128_f32[2]);
            if (v500 <= 0x1.0624de0000000p-10f &&
                v501 <= 0x1.0624de0000000p-10f &&
                v502 <= 0x1.0624de0000000p-10f) {
              v511 = v498 + 1;
              goto LABEL_507;
            }
            v505 = vsubq_f32(v498[1], v489);
            v506 = fabsf(LANES128(v505).n128_f32[0]);
            v507 = fabsf(LANES128(v505).n128_f32[1]);
            v508 = fabsf(LANES128(v505).n128_f32[2]);
            v509 = v506 <= 0x1.0624de0000000p-10f &&
                   v507 <= 0x1.0624de0000000p-10f;
            if (v509 && v508 <= 0x1.0624de0000000p-10f) {
              break;
            }
            v497 += 2;
            --v496;
            --v495;
            if (v496 == 0) {
              goto LABEL_104;
            }
          }
          v511 = &v797_.v846[v497];
        LABEL_507:
          v513 = LANES128(*(v511)).n128_u64[0];
          v512 = LANES128(*(v511)).n128_u64[1];
          v514 = (char*)v797_.v846 + ((v497 * 16) & 0x1FFFFFFFE0LL);
          v515 = v493 - (v514 + 32);
          LANES128(v797_.v879).n128_u64[0] = v513;
          LANES128(v797_.v879).n128_u64[1] = v512;
          if (v493 != v514 + 32) {
            GameRoutine_1a0b940((__int64)v797_.v846 +
                                    ((v497 * 16) & 0x1FFFFFFFE0LL),
                                (__int64)(v514 + 32), v493 - (v514 + 32)),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
            v489 = v794;
          }
          v797_.v847 = (float32x4_t*)&v514[v515];
          v516 = vsubq_f32(v797_.v880[0], v489);
          v517 = vsubq_f32(v797_.v879, v489);
          LANES128(v518).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v516, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v519).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v517, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v518).n128_i8[8] =
              vqtbl1_s8(v516, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v520).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v516, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v519).n128_i8[8] =
              vqtbl1_s8(v517, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v520).n128_i8[8] =
              vqtbl1_s8(v516, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v516).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v517, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v516).n128_i8[8] =
              vqtbl1_s8(v517, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v521 = vmlsq_f32(vmulq_f32(v518, v519), v516, v520);
          LANES128(v516).n128_u64[0] = LANES128(*(v768)).n128_u64[0];
          LANES128(v516).n128_u64[1] = LANES128(*(v768)).n128_u32[2];
          v522 = vmulq_f32(v521, v516);
          LANES128(v522).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v522, v522, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v522).n128_u64[0])))
                  .n64_u64[0];
          v523 = fabsf(GameRoutine_1a0a820(
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v522).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v522).n128_u64[0])))
                  .n64_f32[0])),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
          if (v523 <= 0x1.1df46a0000000p-6f) {
            v524 = &v797_.v879;
          }
          else {
            v524 = v797_.v880;
          }
          if (v523 <= 0x1.1df46a0000000p-6f) {
            v525 = v797_.v880;
          }
          else {
            v525 = &v797_.v879;
          }
          v526 = v797_.v850;
          if ((unsigned __int64)v797_.v850 >= v797_.v851) {
            v529 = (__int64)v797_.v849;
            v530 = (char*)v797_.v850 - (char*)v797_.v849;
            v531 = v797_.v850 - v797_.v849;
            v532 = v531 + 1;
            if ((unsigned __int64)(v531 + 1) >> 60 != 0) {
              goto LABEL_735;
            }
            v533 = v797_.v851 - (_QWORD)v797_.v849;
            if ((__int64)(v797_.v851 - (_QWORD)v797_.v849) >> 3 > v532) {
              v532 = v533 >> 3;
            }
            if ((unsigned __int64)v533 >= 0x7FFFFFFFFFFFFFF0LL) {
              v534 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v534 = v532;
            }
            if (v534 != 0) {
              if (v534 >> 60 != 0) {
                goto LABEL_734;
              }
              v535 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v534, 16, 0),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
            else {
              v535 = 0;
            }
            v536 = LANES128(*(v524)).n128_u64[0];
            v537 = LANES128(*(v524)).n128_u64[1];
            v538 = (unsigned __int64*)(v535 + v530);
            v539 = v535 + 16 * v534;
            v540 = v535 + v530 - 16 * v531;
            v528 = (float32x4_t*)(v535 + v530 + 16);
            *v538 = v536;
            v538[1] = v537;
            GameRoutine_1a0b950(v540, v529, v530),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
            v797_.v849 = (float32x4_t*)v540;
            v797_.v850 = v528;
            v797_.v851 = v539;
            if (v529 != 0) {
              v541 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v541 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v541, v529),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
          }
          else {
            LANES128(*(v797_.v850)).n128_u64[0] = LANES128(*(v524)).n128_u64[0];
            v527 = LANES128(*(v524)).n128_u64[1];
            v528 = v526 + 1;
            LANES128(*(v526)).n128_u64[1] = v527;
          }
          v542 = v794;
          v797_.v850 = v528;
          if ((unsigned __int64)v528 >= v797_.v851) {
            v544 = (__int64)v797_.v849;
            v545 = (char*)v528 - (char*)v797_.v849;
            v546 = v528 - v797_.v849;
            v547 = v546 + 1;
            if ((unsigned __int64)(v546 + 1) >> 60 != 0) {
              goto LABEL_735;
            }
            v548 = v797_.v851 - (_QWORD)v797_.v849;
            if ((__int64)(v797_.v851 - (_QWORD)v797_.v849) >> 3 > v547) {
              v547 = v548 >> 3;
            }
            if ((unsigned __int64)v548 >= 0x7FFFFFFFFFFFFFF0LL) {
              v549 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v549 = v547;
            }
            if (v549 != 0) {
              if (v549 >> 60 != 0) {
                goto LABEL_734;
              }
              v550 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v549, 16, 0),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
              v542 = v794;
            }
            else {
              v550 = 0;
            }
            v551 = v550 + 16 * v549;
            v552 = v550 + v545 - 16 * v546;
            *(float32x4_t*)(v550 + v545) = v542;
            v543 = (float32x4_t*)(v550 + v545 + 16);
            GameRoutine_1a0b950(v552, v544, v545),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
            v797_.v849 = (float32x4_t*)v552;
            v797_.v850 = v543;
            v797_.v851 = v551;
            if (v544 != 0) {
              v553 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v553 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v553, v544),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
          }
          else {
            *v528 = v794;
            v543 = v528 + 1;
          }
          v797_.v850 = v543;
          if ((unsigned __int64)v543 >= v797_.v851) {
            v556 = (__int64)v797_.v849;
            v557 = (char*)v543 - (char*)v797_.v849;
            v558 = v543 - v797_.v849;
            v559 = v558 + 1;
            if ((unsigned __int64)(v558 + 1) >> 60 != 0) {
              goto LABEL_735;
            }
            v560 = v797_.v851 - (_QWORD)v797_.v849;
            if ((__int64)(v797_.v851 - (_QWORD)v797_.v849) >> 3 > v559) {
              v559 = v560 >> 3;
            }
            if ((unsigned __int64)v560 >= 0x7FFFFFFFFFFFFFF0LL) {
              v561 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v561 = v559;
            }
            if (v561 != 0) {
              if (v561 >> 60 != 0) {
              LABEL_734:
                GameRoutine_60a210(),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
              }
              v562 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v561, 16, 0),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
            else {
              v562 = 0;
            }
            v563 = LANES128(*(v525)).n128_u64[1];
            v564 = (_QWORD*)(v562 + v557);
            v565 = v562 + 16 * v561;
            v566 = v562 + v557 - 16 * v558;
            v555 = v562 + v557 + 16;
            *v564 = LANES128(*(v525)).n128_u64[0];
            v564[1] = v563;
            GameRoutine_1a0b950(v566, v556, v557),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
            v797_.v849 = (float32x4_t*)v566;
            v797_.v850 = (float32x4_t*)v555;
            v797_.v851 = v565;
            if (v556 != 0) {
              v567 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v567 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v567, v556),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
          }
          else {
            v554 = LANES128(*(v525)).n128_u64[1];
            v555 = (__int64)&v543[1];
            LANES128(*(v543)).n128_u64[0] = LANES128(*(v525)).n128_u64[0];
            LANES128(*(v543)).n128_u64[1] = v554;
          }
          v568 = (__int64)v797_.v846;
          v569 = v797_.v847;
          v797_.v850 = (float32x4_t*)v555;
          v570 = (char*)v797_.v847 - (char*)v797_.v846;
          if (v797_.v847 != v797_.v846) {
            v571 = *v525;
            do {
              if ((int)((unsigned __int64)v570 >> 5) < 1) {
                break;
              }
              v572 = v570 >> 5;
              v573 = ((unsigned __int64)v570 >> 5) & 0x7FFFFFFF;
              v574 = 0;
              while (1) {
                if (v572 == 0) {
                  goto LABEL_738;
                }
                v575 = (float32x4_t*)(v568 + v574);
                v576 = vsubq_f32(*(float32x4_t*)(v568 + v574), v571);
                v577 = fabsf(LANES128(v576).n128_f32[0]);
                v578 = fabsf(LANES128(v576).n128_f32[1]);
                v579 = fabsf(LANES128(v576).n128_f32[2]);
                if (v577 <= 0x1.0624de0000000p-10f &&
                    v578 <= 0x1.0624de0000000p-10f &&
                    v579 <= 0x1.0624de0000000p-10f) {
                  v588 = v575 + 1;
                  goto LABEL_588;
                }
                v582 = vsubq_f32(v575[1], v571);
                v583 = fabsf(LANES128(v582).n128_f32[0]);
                v584 = fabsf(LANES128(v582).n128_f32[1]);
                v585 = fabsf(LANES128(v582).n128_f32[2]);
                v586 = v583 <= 0x1.0624de0000000p-10f &&
                       v584 <= 0x1.0624de0000000p-10f;
                if (v586 && v585 <= 0x1.0624de0000000p-10f) {
                  break;
                }
                v574 += 32;
                --v573;
                --v572;
                if (v573 == 0) {
                  goto LABEL_103;
                }
              }
              v588 = (float32x4_t*)(v568 + v574);
            LABEL_588:
              v590 = LANES128(*(v588)).n128_u64[0];
              v589 = LANES128(*(v588)).n128_u64[1];
              v591 = v568 + (v574 & 0x1FFFFFFFE0LL);
              v592 = (char*)&v569[-2] - v591;
              LANES128(v797_.v879).n128_u64[0] = v590;
              LANES128(v797_.v879).n128_u64[1] = v589;
              if (v569 != (float32x4_t*)(v591 + 32)) {
                GameRoutine_1a0b940(
                    v568 + (v574 & 0x1FFFFFFFE0LL), v591 + 32,
                    (unsigned __int64)LANES128(v569[-2]).n128_u64 - v591),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                v568 = (__int64)v797_.v846;
              }
              v797_.v847 = (float32x4_t*)&v592[v591];
              if (&v592[v591] == (char*)v568) {
                break;
              }
              v571 = v797_.v879;
              v593 = v797_.v850;
              if ((unsigned __int64)v797_.v850 >= v797_.v851) {
                v596 = (__int64)v797_.v849;
                v597 = (char*)v797_.v850 - (char*)v797_.v849;
                v598 = v797_.v850 - v797_.v849;
                v599 = v598 + 1;
                if ((unsigned __int64)(v598 + 1) >> 60 != 0) {
                  goto LABEL_735;
                }
                v600 = v797_.v851 - (_QWORD)v797_.v849;
                v795 = v797_.v879;
                if ((__int64)(v797_.v851 - (_QWORD)v797_.v849) >> 3 > v599) {
                  v599 = v600 >> 3;
                }
                v601 = (unsigned __int64)v600 >= 0x7FFFFFFFFFFFFFF0LL
                           ? 0xFFFFFFFFFFFFFFFLL
                           : v599;
                if (v601 != 0) {
                  if (v601 >> 60 != 0) {
                    goto LABEL_734;
                  }
                  v602 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v601, 16, 0),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
                }
                else {
                  v602 = 0;
                }
                v603 = v602 + 16 * v601;
                v604 = v602 + v597 - 16 * v598;
                v595 = v602 + v597 + 16;
                *(float32x4_t*)(v602 + v597) = v797_.v879;
                GameRoutine_1a0b950(v604, v596, v597),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                v797_.v849 = (float32x4_t*)v604;
                v797_.v850 = (float32x4_t*)v595;
                v797_.v851 = v603;
                if (v596 != 0) {
                  v605 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v605 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v605, v596),
                      v12 = COERCE_AS(__typeof__(v12),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                }
                v571 = v795;
              }
              else {
                v594 = LANES128(v797_.v879).n128_u64[1];
                v595 = (__int64)&v797_.v850[1];
                LANES128(*(v797_.v850)).n128_u64[0] =
                    LANES128(v797_.v879).n128_u64[0];
                LANES128(*(v593)).n128_u64[1] = v594;
              }
              v568 = (__int64)v797_.v846;
              v569 = v797_.v847;
              v797_.v850 = (float32x4_t*)v595;
              v570 = (char*)v797_.v847 - (char*)v797_.v846;
            } while (v797_.v847 != v797_.v846);
          }
        LABEL_103:
          v213 = (__int64*)&v797_.v798 + 3 * v797_.v836;
          v214 = v213[2];
          v213[1] = 0;
          v213[2] = 0;
          v215 = *v213;
          v216 = v797_.v850;
          *v213 = (__int64)v797_.v849;
          v213[1] = (__int64)v216;
          v797_.v849 = (float32x4_t*)v215;
          v217 = v797_.v851;
          v797_.v851 = v214;
          v213[2] = v217;
          v797_.v850 = (float32x4_t*)v215;
          ++v797_.v836;
        }
      }
    LABEL_104:
      v205 = v765 + 16;
    } while (v765 != 80);
    v612 = v752[16];
    if (v612 != 0) {
      v796 = *(float*)(a1 + 80);
      *(long double*)&v613 =
          ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v612 + 48LL))(v612),
             v12 = COERCE_AS(__typeof__(v12),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
             v14 = COERCE_AS(__typeof__(v14),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
             v16 =
                 COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
             v23 = COERCE_AS(__typeof__(v23),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
             v25 = COERCE_AS(__typeof__(v25),
                             PSEUDO_REGISTER(__n128, "v2", "=w"));
      v614 = (__typeof__(v614)){0};
      v755 = vaddq_f32(
          vmulq_n_f32(v755, 0x1.0000000000000p+0f - v796),
          vmulq_n_f32(vsubq_f32(COERCE_AS(float32x4_t, 0), v613), v796));
    }
    else {
      v614 = (__typeof__(v614)){0};
    }
    v102 = v754;
    v103 = v751;
    if (v797_.v836 != 0) {
      LANES128(v615).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v755, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v616 = vsubq_f32(v614, *(float32x4_t*)GameData_212c560);
      *(int8x8_t*)&LANES128(v615).n128_i8[8] =
          vqtbl1_s8(v755, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v617).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v616, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v617).n128_i8[8] =
          vqtbl1_s8(v616, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v618).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v616, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v619 = vmulq_f32(v617, v615);
      LANES128(v615).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v616, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
      v620 = vmulq_f32(v755, v616);
      LANES128(v618).n128_u64[1] = LANES128(v615).n128_u64[0];
      LANES128(v615).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v755, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v615).n128_i8[8] =
          vqtbl1_s8(v755, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v621 = vmlsq_f32(v619, v615, v618);
      LANES128(v615).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v615).n128_u64[1] = 0x3F0000003F000000LL;
      LANES128(v620).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v620, v620, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v620).n128_u64[0])))
              .n64_u64[0];
      LANES128(v618).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v618).n128_u64[1] = 0x3F8000003F800000LL;
      LANES128(v620).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v620).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v620).n128_u64[0])))
              .n64_u64[0];
      LANES128(v620).n128_u64[1] = LANES128(v620).n128_u64[0];
      v622 = vaddq_f32(v620, v618);
      v623 = vsqrtq_f32(vaddq_f32(v622, v622));
      v624 = vdivq_f32(v621, v623);
      LANES128(v624).n128_u32[3] =
          LANES128_OF(vmulq_f32(v623, v615)).n128_u32[3];
      LANES128(v623).n128_u64[0] = 0x3400000034000000LL;
      LANES128(v623).n128_u64[1] = 0x3400000034000000LL;
      v625 = 24LL * v797_.v836 - 24;
      v626 = vbslq_s8(vcgeq_f32(v623, v622),
                      COERCE_AS(int8x16_t, GameData_1a82dd0), v624);
      v627 = vmulq_f32(v626, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES64(v628).n64_u64[0] =
          LANES64_OF(vdup_lane_s32(
                         COERCE_AS(int32x2_t, LANES128(v627).n128_u64[0]), 1))
              .n64_u64[0];
      if ((((v625 * (unsigned __int128)0xAAAAAAAAAAAAAAABLL) >> 64) & 0x10) !=
          0) {
        v629 = COERCE_AS(float32x4_t, GameData_1a83800);
        v640 = COERCE_AS(float32x4_t, GameData_1a82f20);
        v641 = COERCE_AS(float32x4_t, GameData_1a82ea0);
        v652 = &v797_.v798;
      }
      else {
        v629 = COERCE_AS(float32x4_t, GameData_1a83800);
        v630 = (int8x16_t*)LANES128(v797_.v798).n128_u64[0];
        if (LANES128(v797_.v798).n128_u64[0] ==
            LANES128(v797_.v798).n128_u64[1]) {
          v640 = COERCE_AS(float32x4_t, GameData_1a82f20);
          v641 = COERCE_AS(float32x4_t, GameData_1a82ea0);
        }
        else {
          LANES128(v634).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v627, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v638).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v626, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v637).n128_u64[0] = LANES128(v626).n128_u64[0];
          LANES128(v636).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v626, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES64(v631).n64_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v627, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES64(v632).n64_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v627, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL)))
                  .n64_u64[0];
          LANES64(v633).n64_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v627, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v634).n128_i8[8] =
              vqtbl1_s8(v627, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
          LANES128(v635).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v626, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v636).n128_u64[1] = LANES128(v636).n128_u64[0];
          LANES128(v637).n128_u64[1] = LANES128(v635).n128_u64[0];
          LANES128(v635).n128_u64[1] = LANES128(v638).n128_u64[0];
          LANES128(v638).n128_u64[1] = LANES128(v626).n128_u64[0];
          v639 = vnegq_f32(v635);
          v640 = COERCE_AS(float32x4_t, GameData_1a82f20);
          v641 = COERCE_AS(float32x4_t, GameData_1a82ea0);
          do {
            v642 = *v630++;
            LANES128(v643).n128_u64[0] = LANES128(v642).n128_u64[0];
            LANES128(v644).n128_u64[0] = LANES64(v633).n64_u64[0];
            LANES128(v645).n128_u64[0] = LANES64(v631).n64_u64[0];
            LANES128(v646).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v642, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v647).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v642, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v644).n128_u64[1] = LANES128(v642).n128_u64[0];
            LANES128(v648).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v642, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v643).n128_i8[8] = v632;
            LANES128(v646).n128_u64[1] = LANES128(v646).n128_u64[0];
            LANES128(v645).n128_u64[1] = LANES128(v647).n128_u64[0];
            LANES128(v647).n128_u64[1] = LANES128(v648).n128_u64[0];
            *(int32x2_t*)&LANES128(v648).n128_i8[8] = v628;
            v649 = vmlsq_f32(
                vmlaq_f32(vmlaq_f32(vmulq_f32(v627, v646),
                                    COERCE_AS(float32x4_t, GameData_1a83800),
                                    vmulq_f32(v643, v645)),
                          COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v644, v648)),
                v634, v647);
            LANES128(v647).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v649, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v647).n128_i8[8] =
                vqtbl1_s8(v649, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
            LANES128(v644).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v649, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int32x2_t*)&LANES128(v644).n128_i8[8] = vdup_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v649).n128_u64[0]), 1);
            v650 = vmlaq_f32(vmlaq_f32(vmulq_f32(v636, v649),
                                       COERCE_AS(float32x4_t, GameData_1a83800),
                                       vmulq_f32(v637, v647)),
                             COERCE_AS(float32x4_t, GameData_1a83800),
                             vmulq_f32(v638, v644));
            LANES128(v647).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v649, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v647).n128_i8[8] =
                vqtbl1_s8(v649, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
            v651 = vmlaq_f32(v650, v647, v639);
            LANES128(v651).n128_u32[3] = 0;
            v640 = vminq_f32(v640, v651);
            v641 = vmaxq_f32(v641, v651);
          } while (v630 != (int8x16_t*)LANES128(v797_.v798).n128_u64[1]);
        }
        v652 = (float32x4_t*)&LANES128(v797_.v799).n128_i8[8];
      }
      LANES64(v653).n64_u64[0] =
          LANES64_OF(vqtbl1_s8(v626, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v654).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v626, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v655).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v627, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES64(v656).n64_u64[0] =
          LANES64_OF(vqtbl1_s8(v627, COERCE_AS(int8x8_t, 0xB0A090803020100LL)))
              .n64_u64[0];
      LANES128(v657).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v627, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v658).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v627, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES64(v659).n64_u64[0] =
          LANES64_OF(vqtbl1_s8(v627, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v660).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v626, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      if (v625 >= 0x18) {
        do {
          v691 = (int8x16_t*)LANES128(*(v652)).n128_u64[0];
          v692 = (int8x16_t*)LANES128(*(v652)).n128_u64[1];
          if ((int8x16_t*)LANES128(*(v652)).n128_u64[0] != v692) {
            LANES128(v693).n128_u64[0] = LANES64(v653).n64_u64[0];
            LANES128(v694).n128_u64[0] = LANES128(v655).n128_u64[0];
            LANES128(v695).n128_u64[0] = LANES128(v660).n128_u64[0];
            LANES128(v696).n128_u64[0] = LANES128(v626).n128_u64[0];
            LANES128(v697).n128_u64[0] = LANES128(v654).n128_u64[0];
            LANES128(v693).n128_u64[1] = LANES128(v654).n128_u64[0];
            *(int8x8_t*)&LANES128(v694).n128_i8[8] = v656;
            LANES128(v695).n128_u64[1] = LANES128(v660).n128_u64[0];
            *(int8x8_t*)&LANES128(v696).n128_i8[8] = v653;
            LANES128(v697).n128_u64[1] = LANES128(v626).n128_u64[0];
            v698 = vnegq_f32(v693);
            do {
              v699 = *v691++;
              LANES128(v700).n128_u64[0] = LANES128(v699).n128_u64[0];
              LANES128(v701).n128_u64[0] = LANES128(v657).n128_u64[0];
              LANES128(v702).n128_u64[0] = LANES128(v658).n128_u64[0];
              LANES128(v703).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v699, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v704).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v699, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v701).n128_u64[1] = LANES128(v699).n128_u64[0];
              LANES128(v705).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v699, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v700).n128_i8[8] = v659;
              LANES128(v703).n128_u64[1] = LANES128(v703).n128_u64[0];
              LANES128(v702).n128_u64[1] = LANES128(v704).n128_u64[0];
              LANES128(v704).n128_u64[1] = LANES128(v705).n128_u64[0];
              *(int32x2_t*)&LANES128(v705).n128_i8[8] = v628;
              v706 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v627, v703), v629,
                                                   vmulq_f32(v700, v702)),
                                         v629, vmulq_f32(v701, v705)),
                               v694, v704);
              LANES128(v704).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v706, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v704).n128_i8[8] =
                  vqtbl1_s8(v706, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
              LANES128(v701).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v706, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int32x2_t*)&LANES128(v701).n128_i8[8] = vdup_lane_s32(
                  COERCE_AS(int32x2_t, LANES128(v706).n128_u64[0]), 1);
              v707 = vmlaq_f32(
                  vmlaq_f32(vmulq_f32(v695, v706), v629, vmulq_f32(v696, v704)),
                  v629, vmulq_f32(v697, v701));
              LANES128(v704).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v706, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v704).n128_i8[8] =
                  vqtbl1_s8(v706, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
              v708 = vmlaq_f32(v707, v704, v698);
              LANES128(v708).n128_u32[3] = 0;
              v640 = vminq_f32(v640, v708);
              v641 = vmaxq_f32(v641, v708);
            } while (v691 != v692);
          }
          v709 = (int8x16_t*)LANES128(v652[1]).n128_u64[1];
          v710 = (int8x16_t*)LANES128(v652[2]).n128_u64[0];
          if (v709 != v710) {
            LANES128(v711).n128_u64[0] = LANES64(v653).n64_u64[0];
            LANES128(v712).n128_u64[0] = LANES128(v655).n128_u64[0];
            LANES128(v713).n128_u64[0] = LANES128(v660).n128_u64[0];
            LANES128(v714).n128_u64[0] = LANES128(v626).n128_u64[0];
            LANES128(v715).n128_u64[0] = LANES128(v654).n128_u64[0];
            LANES128(v711).n128_u64[1] = LANES128(v654).n128_u64[0];
            *(int8x8_t*)&LANES128(v712).n128_i8[8] = v656;
            LANES128(v713).n128_u64[1] = LANES128(v660).n128_u64[0];
            *(int8x8_t*)&LANES128(v714).n128_i8[8] = v653;
            LANES128(v715).n128_u64[1] = LANES128(v626).n128_u64[0];
            v716 = vnegq_f32(v711);
            do {
              v717 = *v709++;
              LANES128(v718).n128_u64[0] = LANES128(v717).n128_u64[0];
              LANES128(v719).n128_u64[0] = LANES128(v657).n128_u64[0];
              LANES128(v720).n128_u64[0] = LANES128(v658).n128_u64[0];
              LANES128(v721).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v717, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v722).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v717, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v719).n128_u64[1] = LANES128(v717).n128_u64[0];
              LANES128(v723).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v717, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v718).n128_i8[8] = v659;
              LANES128(v721).n128_u64[1] = LANES128(v721).n128_u64[0];
              LANES128(v720).n128_u64[1] = LANES128(v722).n128_u64[0];
              LANES128(v722).n128_u64[1] = LANES128(v723).n128_u64[0];
              *(int32x2_t*)&LANES128(v723).n128_i8[8] = v628;
              v724 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v627, v721), v629,
                                                   vmulq_f32(v718, v720)),
                                         v629, vmulq_f32(v719, v723)),
                               v712, v722);
              LANES128(v722).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v724, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v722).n128_i8[8] =
                  vqtbl1_s8(v724, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
              LANES128(v719).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v724, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int32x2_t*)&LANES128(v719).n128_i8[8] = vdup_lane_s32(
                  COERCE_AS(int32x2_t, LANES128(v724).n128_u64[0]), 1);
              v725 = vmlaq_f32(
                  vmlaq_f32(vmulq_f32(v713, v724), v629, vmulq_f32(v714, v722)),
                  v629, vmulq_f32(v715, v719));
              LANES128(v722).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v724, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v722).n128_i8[8] =
                  vqtbl1_s8(v724, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
              v726 = vmlaq_f32(v725, v722, v716);
              LANES128(v726).n128_u32[3] = 0;
              v640 = vminq_f32(v640, v726);
              v641 = vmaxq_f32(v641, v726);
            } while (v709 != v710);
          }
          v652 += 3;
        } while (v652 != (float32x4_t*)((char*)&v797_.v798 + 24 * v797_.v836));
      }
      v661 = vsubq_f32(v641, v640);
      v662 = LANES128(v661).n128_f32[1];
      v663 = *(int8x16_t*)GameData_212c558;
      if (LANES128(v661).n128_f32[1] >= LANES128(v661).n128_f32[0]) {
        v662 = LANES128(v661).n128_f32[0];
      }
      if (LANES128(v661).n128_f32[2] < v662) {
        v662 = LANES128(v661).n128_f32[2];
      }
      *(_BYTE*)(v754 + 1) = v662 <= 0x1.0000000000000p-23f;
      if (v662 > 0x1.0000000000000p-23f) {
        *(int8x8_t*)&LANES128(v658).n128_i8[8] = v659;
        LANES128(v664).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v663, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v665).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v663, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v666).n128_u64[0] = LANES128(v663).n128_u64[0];
        LANES128(v667).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v663, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v657).n128_i8[8] = v628;
        *(int8x8_t*)&LANES128(v655).n128_i8[8] = v656;
        LANES128(v668).n128_u64[0] = LANES64(v653).n64_u64[0];
        LANES128(v660).n128_u64[1] = LANES128(v660).n128_u64[0];
        LANES128(v669).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v669).n128_u64[1] = 0x3F0000003F000000LL;
        LANES128(v664).n128_u64[1] = LANES128(v664).n128_u64[0];
        LANES128(v666).n128_u64[1] = LANES128(v665).n128_u64[0];
        LANES128(v665).n128_u64[1] = LANES128(v667).n128_u64[0];
        v670 = vmulq_f32(vaddq_f32(v641, v640), v669);
        LANES128(v667).n128_u64[1] = LANES128(v663).n128_u64[0];
        LANES128(v671).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v670, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v668).n128_u64[1] = LANES128(v654).n128_u64[0];
        v672 = vmulq_f32(v667, v657);
        LANES128(v654).n128_u64[1] = LANES128(v626).n128_u64[0];
        LANES128(v673).n128_u64[0] = LANES128(v626).n128_u64[0];
        v674 = vmulq_f32(v626, v626);
        *(int8x8_t*)&LANES128(v673).n128_i8[8] = v653;
        v675 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v627, v664), v629,
                                             vmulq_f32(v666, v658)),
                                   v629, v672),
                         v655, v665);
        LANES128(v676).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v675, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v676).n128_i8[8] =
            vqtbl1_s8(v675, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        LANES128(v672).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v675, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v672).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v675).n128_u64[0]), 1);
        v677 = vmulq_f32(v654, v672);
        LANES128(v672).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v675, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v672).n128_i8[8] =
            vqtbl1_s8(v675, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        LANES128(v674).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v674, v674, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v674).n128_u64[0])))
                .n64_u64[0];
        LANES128(v674).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v674).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v674).n128_u64[0])))
                .n64_u64[0];
        v678 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v675, v660), v629,
                                             vmulq_f32(v673, v672)),
                                   v629, v677),
                         v676, v668);
        LANES128(v676).n128_u64[0] = LANES128(v670).n128_u64[0];
        LANES128(v674).n128_u64[1] = LANES128(v674).n128_u64[0];
        LANES128(v676).n128_u64[1] = LANES128(v671).n128_u64[0];
        LANES128(v678).n128_u32[3] = 0;
        v679 = vrecpeq_f32(v674);
        v680 = vmulq_f32(v679, vrecpsq_f32(v679, v674));
        LANES128(v677).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v670, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v671).n128_u64[1] = LANES128(v677).n128_u64[0];
        LANES128(v677).n128_u64[1] = LANES128(v670).n128_u64[0];
        LANES128(v670).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v670, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v670).n128_u64[1] = LANES128(v670).n128_u64[0];
        v681 =
            vbslq_s8(vceqzq_f32(v674), v627,
                     vmulq_f32(v627, vmulq_f32(v680, vrecpsq_f32(v680, v674))));
        v682 = vmulq_f32(v681, COERCE_AS(float32x4_t, GameData_1a829d0));
        LANES128(v683).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v681, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v674).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v681, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v680).n128_u64[0] = LANES128(v681).n128_u64[0];
        LANES128(v684).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v682, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v680).n128_u64[1] = LANES128(v683).n128_u64[0];
        LANES128(v683).n128_u64[1] = LANES128(v674).n128_u64[0];
        LANES128(v674).n128_u64[1] = LANES128(v681).n128_u64[0];
        LANES128(v681).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v681, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v684).n128_i8[8] =
            vqtbl1_s8(v682, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        LANES128(v675).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v682, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v681).n128_u64[1] = LANES128(v681).n128_u64[0];
        *(int32x2_t*)&LANES128(v675).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v682).n128_u64[0]), 1);
        v685 = vmulq_f32(v677, v675);
        LANES128(v675).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v682, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v675).n128_i8[8] =
            vqtbl1_s8(v682, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v686 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v682, v670), v629,
                                             vmulq_f32(v676, v675)),
                                   v629, v685),
                         v684, v671);
        LANES128(v670).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v686, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v670).n128_i8[8] =
            vqtbl1_s8(v686, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        LANES128(v671).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v686, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v671).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v686).n128_u64[0]), 1);
        v687 = vmulq_f32(v674, v671);
        LANES128(v674).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v686, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v674).n128_i8[8] =
            vqtbl1_s8(v686, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v688 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v686, v681), v629,
                                             vmulq_f32(v680, v674)),
                                   v629, v687),
                         v670, v683);
        v689 = vmulq_f32(v661, v669);
        LANES128(v688).n128_u32[3] = 0;
        *(float32x4_t*)(*(_QWORD*)(v754 + 136) + 16LL) =
            vsubq_f32(v688, vmulq_laneq_f32(v755, v689, 2));
        *(float32x4_t*)(*(_QWORD*)(v754 + 136) + 32LL) = v688;
        *(float32x4_t*)(*(_QWORD*)(v754 + 136) + 48LL) = v678;
        v690 = *(_QWORD*)(v754 + 136);
        *(_DWORD*)(v690 + 124) = -1082130432;
        *(_DWORD*)(v690 + 128) = LANES128(v661).n128_u32[2];
        *(_QWORD*)(*(_QWORD*)(v754 + 136) + 112LL) = LANES128(v689).n128_u64[0];
        *(float*)(*(_QWORD*)(v754 + 136) + 136LL) =
            LANES128(v689).n128_f32[1] + LANES128(v689).n128_f32[1];
        gfx_render_b3aee0(*(float32x4_t**)(v754 + 136)),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v103 = v751;
        v102 = v754;
      }
    }
    else {
      *(_BYTE*)(v754 + 1) = 1;
    }
  LABEL_13:
    v102 += 160;
    if (v102 != v103) {
      continue;
    }
    break;
  }
  v93 = (__int64)v797_.v849;
  if (v797_.v849 != nullptr) {
  LABEL_655:
    v797_.v850 = (float32x4_t*)v93;
    v727 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v727 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v727,
                                  v93),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v846 != nullptr) {
    v797_.v847 = v797_.v846;
    v728 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v728 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v728,
                                  (__int64)v797_.v846),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v843 != nullptr) {
    v797_.v844 = v797_.v843;
    v729 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v729 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v729,
                                  (__int64)v797_.v843),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v840 != 0) {
    v797_.v841 = v797_.v840;
    v730 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v730 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v730,
                                  v797_.v840),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v837 != 0) {
    v797_.v838 = v797_.v837;
    v731 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v731 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v731,
                                  v797_.v837),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v833 != 0) {
    v797_.v834 = v797_.v833;
    v732 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v732 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v732,
                                  v797_.v833),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v830 != 0) {
    v797_.v831 = v797_.v830;
    v733 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v733 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v733,
                                  v797_.v830),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v827 != 0) {
    v797_.v828 = v797_.v827;
    v734 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v734 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v734,
                                  v797_.v827),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v824 != 0) {
    v797_.v825 = v797_.v824;
    v735 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v735 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v735,
                                  v797_.v824),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v821 != 0) {
    v797_.v822 = v797_.v821;
    v736 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v736 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v736,
                                  v797_.v821),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v818 != 0) {
    v797_.v819 = v797_.v818;
    v737 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v737 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v737,
                                  v797_.v818),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v815 != 0) {
    v797_.v816 = v797_.v815;
    v738 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v738 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v738,
                                  v797_.v815),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v812 != 0) {
    v797_.v813 = v797_.v812;
    v739 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v739 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v739,
                                  v797_.v812),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v809 != 0) {
    v797_.v810 = v797_.v809;
    v740 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v740 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v740,
                                  v797_.v809),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v806 != 0) {
    v797_.v807 = v797_.v806;
    v741 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v741 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v741,
                                  v797_.v806),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v797_.v803 != 0) {
    v797_.v804 = v797_.v803;
    v742 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v742 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v742,
                                  v797_.v803),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (LANES128(v797_.v801).n128_u64[0] != 0) {
    LANES128(v797_.v801).n128_u64[1] = LANES128(v797_.v801).n128_u64[0];
    v743 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v743 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v743,
                                  LANES128(v797_.v801).n128_i64[0]),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (LANES128(v797_.v799).n128_u64[1] != 0) {
    LANES128(v797_.v800).n128_u64[0] = LANES128(v797_.v799).n128_u64[1];
    v744 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v744 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v744,
                                  LANES128(v797_.v799).n128_i64[1]),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (LANES128(v797_.v798).n128_u64[0] != 0) {
    LANES128(v797_.v798).n128_u64[1] = LANES128(v797_.v798).n128_u64[0];
    v745 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v745 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v745,
                                  LANES128(v797_.v798).n128_i64[0]),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  if (v746 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v746 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v746 + 16LL))(v746),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
    std___1___shared_weak_count___release_weak(v746),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
}

void llvm_libcxx_21_libcxx_include___functional_10a98e0(__int64 a1, float a2,
                                                        float a3, float a4)
{
  __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float32x4_t v19;
  float32x4_t* v20;
  float32x4_t v21;
  float32x4_t v22;
  __int128 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int8x16_t* v27;
  int8x16_t v28;
  __int64 v29;
  int8x16_t* v30;
  int8x16_t v31;
  __int64 v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  unsigned __int64 v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  int8x16_t v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  __int64 v51;
  float32x4_t v52;
  int* v53;
  int* v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  float32x4_t* v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  float32x4_t* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  _QWORD* v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  int v80;
  __int64 v81;
  float v82;
  float v83;
  int8x16_t* v84;
  int8x16_t v85;
  float32x4_t v86;
  int8x16x2_t v87;
  int8x16x2_t v88;
  int8x16x2_t v89;

  v5 = GameData_212d270;
  v6 = *(float*)(a1 + 164) +
       (float)((float)(*(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 72LL) + 52LL) -
                       *(float*)(*(_QWORD*)(a1 + 80) + 52LL)) +
               (float)(*(float*)(a1 + 96) * *(float*)(a1 + 100)));
  if (a2 <= 0x1.0000000000000p+0f) {
    v7 = -0x1.0000000000000p+0f;
    v8 = *(float*)(*(_QWORD*)(a1 + 16) - 12LL);
    v9 = *(float*)(*(_QWORD*)GameData_212d270 + 204LL);
    if (!(v9 <= 0x0.0p+0f)) {
      v7 = 0x0.0p+0f;
      if (v9 < 0x1.0000000000000p+0f) {
        v7 = -0x1.0000000000000p+0f;
        if (!(a2 <= 0x0.0p+0f)) {
          v10 = a2;
          v82 =
              *(float*)(a1 + 164) +
              (float)((float)(*(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 72LL) +
                                        52LL) -
                              *(float*)(*(_QWORD*)(a1 + 80) + 52LL)) +
                      (float)(*(float*)(a1 + 96) * *(float*)(a1 + 100)));
          v11 = a3;
          v12 = a4;
          v13 = GameRoutine_1a0a550(0x1.0000000000000p+0f - v9,
                                    a2 * 0x1.df851e0000000p+4f);
          v6 = v82;
          a3 = v11;
          a4 = v12;
          a2 = v10;
          v7 = (float)(0x1.0000000000000p+0f - v13) + -0x1.0000000000000p+0f;
        }
      }
    }
    v14 = (float)(v7 * a3) + 0x1.0000000000000p+0f;
    v15 = *(float*)(a1 + 116);
    if (v6 < v15) {
      v14 = v14 + v14;
    }
    if (!(v14 <= 0x0.0p+0f)) {
      if (v14 >= 0x1.0000000000000p+0f) {
        v15 = v6;
      }
      else {
        v15 = v15 + (float)((float)(v6 - v15) * v14);
      }
    }
    *(_BYTE*)(a1 + 113) = (float)(v15 + 0x1.eb851e0000000p-6f) >= v8;
    *(_BYTE*)(a1 + 112) = v15 >= v8;
    if (v15 < v8) {
      v6 = v8;
    }
    else {
      v6 = v8 + (float)((float)(v15 - v8) * a4);
    }
  }
  else {
    *(_WORD*)(a1 + 112) = 257;
  }
  v16 = 0x0.0p+0f;
  v17 = *(float*)(*(_QWORD*)v5 + 208LL);
  if (!(v17 <= 0x0.0p+0f)) {
    v16 = 0x1.0000000000000p+0f;
    if (v17 < 0x1.0000000000000p+0f) {
      v16 = 0x0.0p+0f;
      if (a2 > 0x0.0p+0f) {
        v83 = v6;
        v18 = GameRoutine_1a0a550(0x1.0000000000000p+0f - v17,
                                  a2 * 0x1.df851e0000000p+4f);
        v6 = v83;
        v16 = 0x1.0000000000000p+0f - v18;
      }
    }
  }
  v19 = *(float32x4_t*)(a1 + 144);
  v20 = *(float32x4_t**)(a1 + 8);
  v21 = vsubq_f32(*(float32x4_t*)(a1 + 176), v19);
  *(float*)(a1 + 116) = v6;
  v22 = vaddq_f32(v19, vmulq_n_f32(v21, v16));
  *(_QWORD*)(a1 + 144) = LANES128(v22).n128_u64[0];
  v23 = *(_OWORD*)(a1 + 144);
  *((_QWORD*)&v23 + 1) = LANES128(v22).n128_u32[2];
  LANES128(v22).n128_u64[0] = *(_QWORD*)(a1 + 160);
  LANES128(v22).n128_f32[1] = v6;
  *(_OWORD*)(a1 + 144) = v23;
  LANES128(v22).n128_u64[1] = *(unsigned int*)(a1 + 168);
  v20[5] = v22;
  game_10d95c0(a1);
  game_10d9a00(a1);
  v24 = *(_QWORD*)(a1 + 88);
  v26 = *(_QWORD*)(a1 + 8);
  v25 = *(_QWORD*)(a1 + 16);
  v27 = *(int8x16_t**)(v24 + 448);
  if (v27 != nullptr) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0) {
      v84 = v27;
      v80 = __cxa_guard_acquire((__int64)&GameData_21a6190);
      v27 = v84;
      if (v80 != 0) {
        v81 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v81;
        __cxa_guard_release((__int64)&GameData_21a6190);
        v27 = v84;
      }
    }
    v28 = v27[28];
    v29 = *(_QWORD*)v5;
    v30 = &v85;
    v86 = v28;
    PSEUDO_LOW_LANE128(v28, n128_f32,
                       0x1.0000000000000p+0f - *(float*)(v29 + 280));
    game_109da60((void*)(&v85), (float32x4_t*)&GameData_21a6180, &v86, v28);
  }
  else {
    v30 = (int8x16_t*)(*(_QWORD*)(v24 + 408) + 448LL);
  }
  v31 = *(int8x16_t*)(a1 + 144);
  v32 = v25 - v26 - 32;
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*v30, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v33).n128_i8[8] =
      vqtbl1_s8(*v30, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*v30, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v34).n128_i8[8] =
      vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v36 = LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  v37 = vmulq_f32(v33, v34);
  v38 = vmulq_f32(*v30, v31);
  *(int8x8_t*)&LANES128(v35).n128_i8[8] =
      vqtbl1_s8(*v30, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v38).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v31).n128_u64[1] = 0x3F8000003F800000LL;
  LANES128(v34).n128_u64[1] = v36;
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
          .n64_u64[0];
  v39 = vmlsq_f32(v37, v34, v35);
  LANES128(v35).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v35).n128_u64[1] = 0x3F0000003F000000LL;
  LANES128(v38).n128_u64[1] = LANES128(v38).n128_u64[0];
  v40 = vaddq_f32(v38, v31);
  v41 = vsqrtq_f32(vaddq_f32(v40, v40));
  v42 = vdivq_f32(v39, v41);
  LANES128(v42).n128_u32[3] = LANES128_OF(vmulq_f32(v41, v35)).n128_u32[3];
  LANES128(v41).n128_u64[0] = 0x3400000034000000LL;
  LANES128(v41).n128_u64[1] = 0x3400000034000000LL;
  v43 = vbslq_s8(vcgeq_f32(v41, v40), COERCE_AS(int8x16_t, GameData_1a82dd0),
                 v42);
  v44 = v43;
  LANES128(v44).n128_u32[3] = 0;
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v43).n128_u64[0])))
          .n64_u64[0];
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v40).n128_i8[8] =
      vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v41).n128_i8[8] =
      vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v45).n128_u64[1] = LANES128(v40).n128_u64[1];
  LANES128(v46).n128_u64[1] = LANES128(v41).n128_u64[1];
  v47 = vmulq_f32(v40, v40);
  v88.val[1] = vmulq_f32(v41, v41);
  v48 = vmulq_f32(v45, v44);
  v49 = vmulq_laneq_f32(v46, v43, 3);
  v50 = vaddq_f32(v48, v48);
  v87.val[1] = vaddq_f32(v49, v49);
  v89.val[0] = vaddq_f32(v87.val[1], v50);
  v89.val[1] = vsubq_f32(v50, v87.val[1]);
  v88.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v88.val[1], v88.val[1]), vaddq_f32(v47, v47)));
  LANES128(v87.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v89, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  LANES128(v88.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v89, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v87.val[1]).n128_i8[8] =
      vqtbl2_s8(v89, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v88.val[1]).n128_i8[8] =
      vqtbl2_s8(v89, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v87.val[0] = v88.val[0];
  LANES128(v89.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v87, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v89.val[0]).n128_i8[8] =
      vqtbl2_s8(v87, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
  LANES128(v89.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v87, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v89.val[1]).n128_i8[8] =
      vqtbl2_s8(v87, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
  LANES128(v87.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v88, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  v51 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + v32 + 8);
  *(int8x8_t*)&LANES128(v87.val[0]).n128_i8[8] =
      vqtbl2_s8(v88, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
  v88.val[1] = *(int8x16_t*)(v51 + 32);
  v52 = *(float32x4_t*)(v51 + 48);
  v87.val[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(v89.val[0], COERCE_FLOAT(*(_OWORD*)(v51 + 16))),
          v89.val[1], *(float32x2_t*)(v51 + 16), 1),
      v87.val[0], *(float32x4_t*)(v51 + 16), 2);
  *(float32x4_t*)v51 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v89.val[0], COERCE_FLOAT(*(_OWORD*)v51)),
                     v89.val[1], *(float32x2_t*)v51, 1),
      v87.val[0], *(float32x4_t*)v51, 2);
  *(int8x16_t*)(v51 + 16) = v87.val[1];
  *(float32x4_t*)(v51 + 32) = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(v89.val[0], LANES128(v88.val[1]).n128_f32[0]), v89.val[1],
          COERCE_AS(float32x2_t, LANES128(v88.val[1]).n128_u64[0]), 1),
      v87.val[0], v88.val[1], 2);
  *(float32x4_t*)(v51 + 48) = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v89.val[0], LANES128(v52).n128_f32[0]),
                         v89.val[1],
                         COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]), 1),
          v87.val[0], v52, 2),
      COERCE_AS(float32x4_t, 0));
  *(_OWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + v32 + 8) + 48LL) =
      *(_OWORD*)(*(_QWORD*)(a1 + 8) + v32 + 16);
  v53 = *(int**)(a1 + 32);
  v54 = *(int**)(a1 + 40);
  if (v53 != v54) {
    v55 = *(_QWORD**)(*(_QWORD*)a1 + 168LL);
    do {
      v56 = *v53;
      if ((_DWORD)v56 == -1) {
        break;
      }
      v57 = v55[2];
      if (v57 != 0) {
        v59 = v55[3];
        v58 = v55[4];
        v60 = *(unsigned __int16*)(v57 + 96 * v56 + 42);
        v61 = (_QWORD*)(v59 + 96 * v56);
        v62 = (float32x4_t*)(v58 + (v56 << 6));
        v64 = v61[4];
        v63 = v61[5];
        v65 = v61[7];
        v66 = (float32x4_t*)(v58 + (v60 << 6));
        LANES128(v62[1]).n128_u64[0] = v61[6];
        LANES128(v62[1]).n128_u64[1] = v65;
        LANES128(*(v62)).n128_u64[0] = v64;
        LANES128(*(v62)).n128_u64[1] = v63;
        v68 = v61[10];
        v67 = v61[11];
        v71 = v61 + 8;
        v70 = v61[8];
        v69 = v71[1];
        v72 = *v62;
        v73 = v62[1];
        LANES128(v62[3]).n128_u64[0] = v68;
        LANES128(v62[3]).n128_u64[1] = v67;
        LANES128(v62[2]).n128_u64[0] = v70;
        LANES128(v62[2]).n128_u64[1] = v69;
        v74 = v62[2];
        v75 = vmulq_f32(v62[3],
                        *(float32x4_t*)(v59 + 96LL * (unsigned int)v60 + 16));
        v76 = *v66;
        v77 = v66[1];
        v62[3] = v75;
        v78 = v66[2];
        v79 = v66[3];
        *v62 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v76, LANES128(v72).n128_f32[0]), v77,
                           COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]),
                           1),
            v78, v72, 2);
        v62[1] = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v76, LANES128(v73).n128_f32[0]), v77,
                           COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]),
                           1),
            v78, v73, 2);
        v62[2] = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v76, LANES128(v74).n128_f32[0]), v77,
                           COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]),
                           1),
            v78, v74, 2);
        v62[3] = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v76, LANES128(v75).n128_f32[0]), v77,
                    COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]), 1),
                v78, v75, 2),
            v79);
      }
      ++v53;
    } while (v53 != v54);
  }
}

#pragma GCC visibility pop
