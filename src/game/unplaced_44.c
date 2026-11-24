#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_2b0();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___next_prime(unsigned __int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6160;
extern __int128 GameData_21a6180;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
int __cxa_guard_acquire(__int64);
void GameRoutine_82f300(__int64*, unsigned __int64);
void Registration_a5aca0(__int64);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_82eee0(__int64 a1);
__attribute__((swiftcall)) void game_a3aba0(PSEUDO_X8 x8_, __int64 unused_int0,
                                            float* a1, float* a2);

void game_82eee0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 primeEm;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = a1 + 3928064;
  v3 = 0;
  do {
    v4 = a1 + v3;
    v3 += 784;
    *(_QWORD*)v4 = 0;
    *(_QWORD*)(v4 + 8) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 20) = 0;
    *(_QWORD*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_QWORD*)(v4 + 80) = 0;
    *(_QWORD*)(v4 + 88) = 0;
    *(_QWORD*)(v4 + 96) = 0;
    *(_QWORD*)(v4 + 104) = 0;
    *(_QWORD*)(v4 + 112) = 0;
    *(_QWORD*)(v4 + 120) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 128) = 0;
    *(_QWORD*)(v4 + 140) = 0;
    *(_QWORD*)(v4 + 132) = 0;
    *(_QWORD*)(v4 + 152) = 0;
    *(_QWORD*)(v4 + 160) = 0;
    *(_QWORD*)(v4 + 168) = 0;
    *(_QWORD*)(v4 + 176) = 0;
    *(_QWORD*)(v4 + 184) = 0;
    *(_QWORD*)(v4 + 192) = 0;
    *(_QWORD*)(v4 + 200) = 0;
    *(_QWORD*)(v4 + 208) = 0;
    *(_QWORD*)(v4 + 216) = 0;
    *(_QWORD*)(v4 + 224) = 0;
    *(_QWORD*)(v4 + 232) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 240) = 0;
    *(_QWORD*)(v4 + 244) = 0;
    *(_QWORD*)(v4 + 356) = 0;
    *(_QWORD*)(v4 + 364) = 0;
    *(_QWORD*)(v4 + 252) = 0;
    *(_QWORD*)(v4 + 312) = 0;
    *(_QWORD*)(v4 + 320) = 0;
    *(_QWORD*)(v4 + 296) = 0;
    *(_QWORD*)(v4 + 304) = 0;
    *(_QWORD*)(v4 + 280) = 0;
    *(_QWORD*)(v4 + 288) = 0;
    *(_QWORD*)(v4 + 264) = 0;
    *(_QWORD*)(v4 + 272) = 0;
    *(_QWORD*)(v4 + 328) = 0;
    *(_QWORD*)(v4 + 336) = 0;
    *(_QWORD*)(v4 + 344) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 352) = 0;
    *(_QWORD*)(v4 + 424) = 0;
    *(_QWORD*)(v4 + 432) = 0;
    *(_QWORD*)(v4 + 408) = 0;
    *(_QWORD*)(v4 + 416) = 0;
    *(_QWORD*)(v4 + 468) = 0;
    *(_QWORD*)(v4 + 476) = 0;
    *(_QWORD*)(v4 + 392) = 0;
    *(_QWORD*)(v4 + 400) = 0;
    *(_QWORD*)(v4 + 376) = 0;
    *(_QWORD*)(v4 + 384) = 0;
    *(_QWORD*)(v4 + 440) = 0;
    *(_QWORD*)(v4 + 448) = 0;
    *(_QWORD*)(v4 + 456) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 464) = 0;
    *(_QWORD*)(v4 + 552) = 0;
    *(_QWORD*)(v4 + 544) = 0;
    *(_QWORD*)(v4 + 536) = 0;
    *(_QWORD*)(v4 + 528) = 0;
    *(_QWORD*)(v4 + 520) = 0;
    *(_QWORD*)(v4 + 580) = 0;
    *(_QWORD*)(v4 + 588) = 0;
    *(_QWORD*)(v4 + 504) = 0;
    *(_QWORD*)(v4 + 512) = 0;
    *(_QWORD*)(v4 + 488) = 0;
    *(_QWORD*)(v4 + 496) = 0;
    *(_QWORD*)(v4 + 560) = 0;
    *(_QWORD*)(v4 + 568) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 576) = 0;
    *(_QWORD*)(v4 + 664) = 0;
    *(_QWORD*)(v4 + 656) = 0;
    *(_QWORD*)(v4 + 648) = 0;
    *(_QWORD*)(v4 + 640) = 0;
    *(_QWORD*)(v4 + 632) = 0;
    *(_QWORD*)(v4 + 624) = 0;
    *(_QWORD*)(v4 + 616) = 0;
    *(_QWORD*)(v4 + 608) = 0;
    *(_QWORD*)(v4 + 600) = 0;
    *(_QWORD*)(v4 + 672) = 0;
    *(_QWORD*)(v4 + 680) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 688) = 0;
    *(_QWORD*)(v4 + 692) = 0;
    *(_QWORD*)(v4 + 700) = 0;
    *(_QWORD*)(v4 + 776) = 0;
    *(_QWORD*)(v4 + 768) = 0;
    *(_QWORD*)(v4 + 760) = 0;
    *(_QWORD*)(v4 + 752) = 0;
    *(_QWORD*)(v4 + 744) = 0;
    *(_QWORD*)(v4 + 736) = 0;
    *(_QWORD*)(v4 + 728) = 0;
    *(_QWORD*)(v4 + 720) = 0;
    *(_QWORD*)(v4 + 712) = 0;
  } while (v3 != 3669904);
  *(_QWORD*)(a1 + 3932040) = 0;
  *(_DWORD*)(a1 + 3932048) = 0;
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      262136, 16, 0);
  v7 = v6 + 262136;
  *(_QWORD*)(v1 + 3992) = v6;
  *(_QWORD*)(v1 + 4008) = v6 + 262136;
  GameRoutine_1a0ba50(v6, 0, 0x3FFF8u);
  *(_QWORD*)(v1 + 4000) = v7;
  v8 = (_QWORD*)(v1 + 4016);
  *(_QWORD*)(v1 + 4016) = 0;
  *(_QWORD*)(v1 + 4024) = 0;
  *(_QWORD*)(v1 + 4032) = 0;
  *(_QWORD*)(v1 + 4040) = 0;
  *(_DWORD*)(v1 + 4048) = 1065353216;
  primeEm = std___1___next_prime(0x7FFFu);
  v10 = *(_QWORD*)(v1 + 4024);
  v11 = primeEm;
  if (primeEm > v10) {
    goto LABEL_4;
  }
  if (primeEm < v10) {
    v12 = vcvtps_u64_f32((float)*(unsigned __int64*)(v1 + 4040) /
                         *(float*)(v1 + 4048));
    if (v10 < 3 || (v10 & (v10 - 1)) != 0) {
      v12 = std___1___next_prime(v12);
    }
    else {
      v13 = 1LL << ((-(char)__clz((unsigned long long)(v12 - 1))) & 63);
      if (v12 >= 2) {
        v12 = v13;
      }
    }
    if (v11 <= v12) {
      v11 = v12;
    }
    if (v11 < v10) {
    LABEL_4:
      GameRoutine_82f300((__int64*)(v1 + 4016), v11);
    }
  }
  v14 = 0;
  v15 = 3669904;
  do {
    v16 = a1 + v14;
    v17 = (_QWORD*)(a1 + v15);
    v14 += 784;
    v15 += 56;
    *v17 = v16;
    v17[1] = v16 + 112;
    v17[2] = v16 + 224;
    v17[3] = v16 + 336;
    v17[4] = v16 + 448;
    v17[5] = v16 + 560;
    v17[6] = v16 + 672;
  } while (v14 != 3669904);
  v18 = *(_QWORD*)(v1 + 3992);
  *(_QWORD*)(v1 + 3976) = a1 + 3669904;
  *(_DWORD*)(v1 + 3984) = 0;
  *(_QWORD*)(v1 + 4000) = v18;
  if (*(_QWORD*)(v1 + 4040) != 0) {
    v19 = *(_QWORD**)(v1 + 4032);
    if (v19 != nullptr) {
      do {
        v20 = (_QWORD*)*v19;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v21, (__int64)v19);
        v19 = v20;
      } while (v20 != nullptr);
    }
    v22 = *(_QWORD*)(v1 + 4024);
    *(_QWORD*)(v1 + 4032) = 0;
    if (v22 != 0) {
      v23 = v22 & 7;
      if (v22 >= 8) {
        v25 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        v24 = 0;
        do {
          *(_QWORD*)(*v8 + 8 * v24) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 8) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 16) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 24) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 32) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 40) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 48) = 0;
          v26 = *v8 + 8 * v24;
          v24 += 8;
          *(_QWORD*)(v26 + 56) = 0;
        } while (v25 != v24);
      }
      else {
        v24 = 0;
      }
      if (v23 != 0) {
        v27 = 8 * v24;
        do {
          --v23;
          *(_QWORD*)(*v8 + v27) = 0;
          v27 += 8;
        } while (v23 != 0);
      }
    }
    *(_QWORD*)(v1 + 4040) = 0;
  }
}

__attribute__((swiftcall)) void game_a3aba0(PSEUDO_X8 x8_, __int64 unused_int0,
                                            float* a1, float* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float32x4_t v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float32x4_t v17;
  float32x4_t* result;
  int v19;
  int8x16_t v20;
  unsigned int v21;
  int8x16_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  int8x16_t v26;
  float v27;
  int8x16_t v28;
  unsigned __int64 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  int8x16_t v40;
  float v41;
  float v42;
  float32x4_t v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float32x4_t v49;
  float32x4_t v50;
  int8x16_t v51;
  int8x16_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x2_t v58;
  float32x4_t v59;
  int8x16_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float v65;
  float32x4_t v66;
  int8x16_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  int8x16_t v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  int8x16_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float v80;
  float v81;
  bool v82;
  unsigned int v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  int8x16_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  int8x16_t v92;
  int8x16_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  int8x16_t v103;
  int8x16_t v104;
  float32x4_t v105;
  int v106;
  int8x16_t v107;
  unsigned int v108;
  float32x4_t v109;
  int8x16_t v110;
  float32x4_t v111;
  int8x16_t v112;
  int v113;
  __int64 v114;
  int v115;
  __int64 v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  int8x16_t v121;
  float v122;
  float v123;
  float v124;
  unsigned __int64 v125;
  float v126;
  float v127;
  float v128;
  unsigned __int64 v129;
  float v130;
  float32x4_t v131;
  float32x4_t v132;
  int8x16_t v133;
  int8x16_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  struct {
    _QWORD v139[10];
    unsigned __int8 v140;
    char gap353_[103];
    float v141;
    float v142;
  } v139_;

  *(_QWORD*)(a3 + 8) = 0;
  v4 = -1024;
  do {
    v7 = a3 + v4;
    v4 += 128;
    *(_WORD*)(v7 + 1040) = 0;
    *(_DWORD*)(v7 + 1052) = 0;
    *(_WORD*)(v7 + 1056) = 0;
    *(_DWORD*)(v7 + 1068) = 0;
    *(_WORD*)(v7 + 1072) = 0;
    *(_DWORD*)(v7 + 1084) = 0;
    *(_WORD*)(v7 + 1088) = 0;
    *(_DWORD*)(v7 + 1100) = 0;
    *(_WORD*)(v7 + 1104) = 0;
    *(_DWORD*)(v7 + 1116) = 0;
    *(_WORD*)(v7 + 1120) = 0;
    *(_DWORD*)(v7 + 1132) = 0;
    *(_WORD*)(v7 + 1136) = 0;
    *(_DWORD*)(v7 + 1148) = 0;
    *(_WORD*)(v7 + 1152) = 0;
    *(_DWORD*)(v7 + 1164) = 0;
    *(_QWORD*)(v7 + 1044) = 0;
    *(_QWORD*)(v7 + 1060) = 0;
    *(_QWORD*)(v7 + 1076) = 0;
    *(_QWORD*)(v7 + 1092) = 0;
    *(_QWORD*)(v7 + 1108) = 0;
    *(_QWORD*)(v7 + 1124) = 0;
    *(_QWORD*)(v7 + 1140) = 0;
    *(_QWORD*)(v7 + 1156) = 0;
  } while (v4 != 0);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21fde98) != 0) {
    Registration_a5aca0((__int64)&GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release((__int64)&GameData_21fde98);
  }
  v8 = a1[2];
  v9 = a1[3];
  v10 = a2[2];
  v11 = a2[3];
  LANES128(v12).n128_u32[3] = 0;
  v13 = a1[4];
  v14 = a2[4];
  v15 = v9 + (float)((float)(v11 - v9) * 0x1.99999a0000000p-5f);
  v16 = v11 + (float)((float)(v9 - v11) * 0x1.99999a0000000p-5f);
  LANES128(v17).n128_u32[3] = 0;
  LANES128(v12).n128_f32[0] =
      v8 + (float)((float)(v10 - v8) * 0x1.99999a0000000p-5f);
  LANES128(v17).n128_f32[0] =
      v10 + (float)((float)(v8 - v10) * 0x1.99999a0000000p-5f);
  LANES128(v12).n128_f32[1] = v15;
  LANES128(v17).n128_f32[1] = v16;
  LANES128(v12).n128_f32[2] =
      v13 + (float)((float)(v14 - v13) * 0x1.99999a0000000p-5f);
  LANES128(v17).n128_f32[2] =
      v14 + (float)((float)(v13 - v14) * 0x1.99999a0000000p-5f);
  v137 = v17;
  v138 = v12;
  result = X8CALL_X0(float32x4_t*,
                     collision_670c60((void*)((__int64)v139_.v139), &v138,
                                      &v137, 0x1000100000001LL));
  v20 = *(int8x16_t*)v139_.v139;
  v19 = v139_.v140;
  *(_BYTE*)(a3 + 1) = 0;
  *(_BYTE*)a3 = v19;
  LANES128(v20).n128_u32[3] = 0;
  if (v19 != 0) {
    v21 = -1;
  }
  else {
    v21 = 0;
  }
  v22 = vandq_s8(v20, vdupq_n_s32(v21));
  v23 = vsubq_f32(v22, v138);
  v24 = vmulq_f32(v23, v23);
  LANES128(v24).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  v25 = vsubq_f32(v137, v138);
  v26 = vmulq_f32(v25, v25);
  LANES128(v26).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
          .n64_u64[0];
  *(_DWORD*)(a3 + 4) =
      LANES64_OF(
          vdiv_f32(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]))),
                   vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))))
          .n64_u32[0];
  if (v19 == 1) {
    v133 = v22;
    LANES128(v30).n128_u64[1] = 0;
    LANES128(v30).n128_f32[0] = a1[2] - a2[2];
    LANES128(v28).n128_f32[0] = LANES128(v30).n128_f32[0];
    DWORDn(v29, sizeof(v29) / 4 - 1) = 0;
    v27 = a1[4] - a2[4];
    LANES128(v28).n128_f32[1] = a1[3] - a2[3];
    *(float*)&v29 = v27;
    LANES128(v30).n128_f32[1] = LANES128(v28).n128_f32[1];
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                              memory_order_acquire) &
         1) == 0) {
      v125 = v29;
      v127 = v27;
      v129 = LANES128(v28).n128_u64[0];
      v131 = v30;
      v113 = __cxa_guard_acquire((__int64)&GameData_21a6170);
      v29 = v125;
      v27 = v127;
      LANES128(v28).n128_u64[0] = v129;
      v30 = v131;
      if (v113 != 0) {
        v114 = *((_QWORD*)GameData_212c550 + 1);
        *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
        *((_QWORD*)&GameData_21a6160 + 1) = v114;
        __cxa_guard_release((__int64)&GameData_21a6170);
        v29 = v125;
        v27 = v127;
        LANES128(v28).n128_u64[0] = v129;
        v30 = v131;
      }
    }
    LANES128(v30).n128_f32[2] = v27;
    LANES128(v28).n128_u64[1] = v29;
    LANES128(v31).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v31).n128_i8[8] =
        vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v33).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v32).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v34 = vmulq_f32(v31, v32);
    *(int8x8_t*)&LANES128(v33).n128_i8[8] =
        vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v32).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v35 = vmlsq_f32(v34, v32, v33);
    v36 = vmulq_f32(v35, v35);
    LANES128(v36).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_u64[0];
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v36).n128_f32[0] == 0x0.0p+0f) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0) {
        v132 = v30;
        v115 = __cxa_guard_acquire((__int64)&GameData_21a6190);
        v30 = v132;
        if (v115 != 0) {
          v116 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v116;
          __cxa_guard_release((__int64)&GameData_21a6190);
          v30 = v132;
        }
      }
      v39 = COERCE_AS(int8x16_t, GameData_21a6180);
      LANES128(v39).n128_u32[3] = 0;
    }
    else {
      LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
      v37 = vrsqrteq_f32(v36);
      v38 = vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v36, v37)));
      v39 = vbicq_s8(
          vmulq_f32(v35,
                    vmulq_f32(v38, vrsqrtsq_f32(v38, vmulq_f32(v36, v38)))),
          vceqzq_f32(v36));
    }
    v40 = vmulq_f32(v39, v39);
    v41 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    LANES128(v40).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_u64[0];
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_u64[0];
    v128 = *((float*)GameData_212c190 + 1);
    v130 = *(float*)GameData_212c190;
    v126 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    v139_.v141 =
        *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    v42 = v139_.v141;
    LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
    v45 = *(float*)GameData_212c188;
    v47 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    v46 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v48 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
    v49 = vrsqrteq_f32(v43);
    v139_.v142 = *((float*)GameData_212c188 + 1);
    v44 = v139_.v142;
    v124 = v45;
    v122 = v47;
    v123 = v41;
    v50 = vmulq_f32(v49, vrsqrtsq_f32(v49, vmulq_f32(v43, v49)));
    v51 = vmulq_f32(v30, v30);
    v52 = vsubq_f32(COERCE_AS(float32x4_t, 0), v30);
    *(_DWORD*)(a3 + 1040) = 2;
    v53 = vmulq_n_f32(
        vbicq_s8(vmulq_f32(v39, vmulq_f32(v50, vrsqrtsq_f32(
                                                   v50, vmulq_f32(v43, v50)))),
                 vceqzq_f32(v43)),
        (float)((float)((float)-(
                            float)(v41 -
                                   (float)((float)(v42 +
                                                   (float)((float)-(
                                                               float)(v126 -
                                                                      (float)((float)(v128 -
                                                                                      (float)(v130 *
                                                                                              0x1.9442500000000p-8f)) *
                                                                              0x1.9442500000000p-8f)) *
                                                           0x1.9442500000000p-8f)) *
                                           0x1.9442500000000p-8f)) *
                        0x1.9442500000000p-8f) +
                0x1.0000000000000p+0f) *
            0x1.41b2f80000000p-4f);
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v55).n128_u64[0] = LANES128(v52).n128_u64[0];
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v57 = v53;
    LANES64(v58).n64_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
            .n64_u64[0];
    LANES128(v55).n128_u64[1] = LANES128(v54).n128_u64[0];
    LANES128(v54).n128_u64[1] = LANES128(v56).n128_u64[0];
    LANES128(v56).n128_u64[1] = LANES128(v52).n128_u64[0];
    LANES128(v57).n128_f32[3] =
        (float)((float)-(
                    float)(v48 -
                           (float)((float)(v46 +
                                           (float)((float)-(
                                                       float)(v47 -
                                                              (float)((float)(v44 -
                                                                              (float)(v45 *
                                                                                      0x1.9442500000000p-8f)) *
                                                                      0x1.9442500000000p-8f)) *
                                                   0x1.9442500000000p-8f)) *
                                   0x1.9442500000000p-8f)) *
                0x1.9442500000000p-8f) +
        0x1.0000000000000p+0f;
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v59).n128_u64[0] = LANES64_OF(vpadd_f32(v58, v58)).n64_u64[0];
    LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
    v60 = vmulq_f32(v57, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v59).n128_u64[1] = LANES128(v59).n128_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v63 = vrsqrteq_f32(v59);
    *(int8x8_t*)&LANES128(v61).n128_i8[8] =
        vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v62).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v60).n128_u64[0]), 1);
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v64).n128_i8[8] =
        vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v65 = v44 - (float)(v45 * 0x0.0p+0f);
    LANES128(v66).n128_u64[0] = LANES128(v53).n128_u64[0];
    v67 =
        vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v43, v60),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v55, v61)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v56, v62)),
                  v64, v54);
    v68 = vmulq_f32(v63, vrsqrtsq_f32(v63, vmulq_f32(v59, v63)));
    LANES128(v63).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v57).n128_u64[1],
                                                   LANES128(v53).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v57).n128_u64[1],
                                                   LANES128(v53).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v57).n128_u64[1],
                                                   LANES128(v53).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v63).n128_u64[1] = LANES128(v63).n128_u64[0];
    LANES128(v66).n128_u64[1] = LANES128(v61).n128_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v56).n128_u64[0];
    LANES128(v56).n128_u64[1] = LANES128(v53).n128_u64[0];
    *(int8x8_t*)&LANES128(v64).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v69 = vmulq_f32(v63, v67);
    LANES128(v63).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v62).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v67).n128_u64[0]), 1);
    *(int8x8_t*)&LANES128(v63).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v121 = vbicq_s8(
        vmulq_f32(v30, vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v59, v68)))),
        vceqzq_f32(v59));
    v70 = vmulq_n_f32(
        v121,
        (float)((float)((float)-(
                            float)(v41 -
                                   (float)((float)(v42 +
                                                   (float)((float)-(
                                                               float)(v126 -
                                                                      (float)((float)(v128 -
                                                                                      (float)(v130 *
                                                                                              0x0.0p+0f)) *
                                                                              0x0.0p+0f)) *
                                                           0x0.0p+0f)) *
                                           0x0.0p+0f)) *
                        0x0.0p+0f) +
                0x1.0000000000000p+0f) *
            0x0.0p+0f);
    v71 = vmlsq_f32(
        vmlaq_f32(vmlaq_f32(v69, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v66, v64)),
                  COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v56, v62)),
        v63, v61);
    v72 = v70;
    LANES128(v71).n128_u32[3] = 0;
    LANES128(v72).n128_f32[3] =
        (float)((float)-(
                    float)(v48 -
                           (float)((float)(v46 +
                                           (float)((float)-(
                                                       float)(v47 -
                                                              (float)(v65 *
                                                                      0x0.0p+0f)) *
                                                   0x0.0p+0f)) *
                                   0x0.0p+0f)) *
                0x0.0p+0f) +
        0x1.0000000000000p+0f;
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v73 = vmulq_f32(v72, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v54).n128_u64[1] = LANES128(v54).n128_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v64).n128_u64[0];
    LANES128(v64).n128_u64[1] = LANES128(v71).n128_u64[0];
    LANES128(v71).n128_u64[1] = LANES128(v61).n128_u64[0];
    v74 = v54;
    v119 = v54;
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v68).n128_i8[8] =
        vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v54).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v73).n128_u64[0]), 1);
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v120 = v61;
    v117 = v71;
    v118 = v64;
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v75 =
        vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v74, v73),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v71, v68)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v64, v54)),
                  v57, v61);
    LANES128(v61).n128_u64[0] = LANES128(v70).n128_u64[0];
    LANES128(v73).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v72).n128_u64[1],
                                                   LANES128(v70).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v72).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v72).n128_u64[1],
                                                   LANES128(v70).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v72).n128_u64[1],
                                                   LANES128(v70).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v72).n128_u64[0];
    LANES128(v72).n128_u64[1] = LANES128(v68).n128_u64[0];
    LANES128(v68).n128_u64[1] = LANES128(v70).n128_u64[0];
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v64).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v75).n128_u64[0]), 1);
    v76 = vmulq_f32(v61, v57);
    LANES128(v61).n128_f32[0] = a1[4];
    v77 = vmlaq_f32(vmulq_f32(v73, v75),
                    COERCE_AS(float32x4_t, GameData_1a83800), v76);
    *(int8x8_t*)&LANES128(v70).n128_i8[8] =
        vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v78 = vmulq_f32(v68, v64);
    LANES128(v64).n128_u32[3] = 0;
    v79 =
        vmlsq_f32(vmlaq_f32(v77, COERCE_AS(float32x4_t, GameData_1a83800), v78),
                  v70, v72);
    LANES128(v70).n128_f32[0] = a1[2];
    LANES128(v72).n128_f32[0] = a1[3];
    LANES128(v64).n128_f32[0] =
        LANES128(v70).n128_f32[0] +
        (float)((float)((float)(LANES128(v70).n128_f32[0] +
                                LANES128(v79).n128_f32[0]) -
                        LANES128(v70).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v64).n128_f32[1] =
        LANES128(v72).n128_f32[0] +
        (float)((float)((float)(LANES128(v72).n128_f32[0] +
                                LANES128(v79).n128_f32[1]) -
                        LANES128(v72).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v64).n128_f32[2] =
        LANES128(v61).n128_f32[0] +
        (float)((float)((float)(LANES128(v61).n128_f32[0] +
                                LANES128(v79).n128_f32[2]) -
                        LANES128(v61).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v72).n128_u32[3] = 0;
    v136 = v64;
    LANES128(v72).n128_u64[0] = __PAIR64__(
        COERCE_UNSIGNED_INT(
            (float)((float)(LANES128(v72).n128_f32[0] +
                            LANES128(v79).n128_f32[1]) +
                    (float)((float)((float)(LANES128(v72).n128_f32[0] -
                                            LANES128(v72).n128_f32[0]) +
                                    LANES128(v79).n128_f32[1]) *
                            0x1.99999a0000000p-5f))),
        COERCE_UNSIGNED_INT(
            (float)((float)(LANES128(v70).n128_f32[0] +
                            LANES128(v79).n128_f32[0]) +
                    (float)((float)((float)(LANES128(v70).n128_f32[0] -
                                            LANES128(v70).n128_f32[0]) +
                                    LANES128(v79).n128_f32[0]) *
                            0x1.99999a0000000p-5f))));
    LANES128(v72).n128_f32[2] =
        (float)(LANES128(v61).n128_f32[0] + LANES128(v79).n128_f32[2]) +
        (float)((float)((float)(LANES128(v61).n128_f32[0] -
                                LANES128(v61).n128_f32[0]) +
                        LANES128(v79).n128_f32[2]) *
                0x1.99999a0000000p-5f);
    v135 = v72;
    collision_670c60((void*)((__int64)v139_.v139), &v136, &v135,
                     0x1000100000001LL);
    v80 = v139_.v141;
    v81 = v139_.v142;
    *(_BYTE*)(a3 + 17) = 0;
    v82 = v139_.v140 == 0;
    *(_BYTE*)(a3 + 16) = v139_.v140;
    if (v82) {
      v83 = 0;
    }
    else {
      v83 = -1;
    }
    v84 = vmulq_n_f32(
        v121,
        (float)((float)((float)-(
                            float)(v123 -
                                   (float)((float)(v80 +
                                                   (float)((float)-(
                                                               float)(v126 -
                                                                      (float)((float)(v128 -
                                                                                      (float)(v130 *
                                                                                              0x1.3bd3ce0000000p+1f)) *
                                                                              0x1.3bd3ce0000000p+1f)) *
                                                           0x1.3bd3ce0000000p+1f)) *
                                           0x1.3bd3ce0000000p+1f)) *
                        0x1.3bd3ce0000000p+1f) +
                0x1.0000000000000p+0f) *
            0x1.921fb60000000p+0f);
    v85 = v84;
    LANES128(v86).n128_u64[0] = LANES128(v84).n128_u64[0];
    LANES128(v85).n128_f32[3] =
        (float)((float)-(
                    float)(v48 -
                           (float)((float)(v46 +
                                           (float)((float)-(
                                                       float)(v122 -
                                                              (float)((float)(v81 -
                                                                              (float)(v124 *
                                                                                      0x1.3bd3ce0000000p+1f)) *
                                                                      0x1.3bd3ce0000000p+1f)) *
                                                   0x1.3bd3ce0000000p+1f)) *
                                   0x1.3bd3ce0000000p+1f)) *
                0x1.3bd3ce0000000p+1f) +
        0x1.0000000000000p+0f;
    v87 = vmulq_f32(v85, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v88).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v89).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v88).n128_i8[8] =
        vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v89).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v87).n128_u64[0]), 1);
    LANES128(v90).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v90).n128_i8[8] =
        vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v91 = vmlaq_f32(vmlaq_f32(vmulq_f32(v119, v87),
                              COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v117, v88)),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v118, v89));
    v92 = *(int8x16_t*)v139_.v139;
    LANES128(v89).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v85).n128_u64[1],
                                                   LANES128(v84).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v93 = vmlsq_f32(v91, v90, v120);
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v85).n128_u64[1],
                                                   LANES128(v84).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v88).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v85).n128_u64[1],
                                                   LANES128(v84).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v92).n128_u32[3] = 0;
    LANES128(v86).n128_u64[1] = LANES128(v89).n128_u64[0];
    LANES128(v90).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v85).n128_u64[1] = LANES128(v85).n128_u64[0];
    LANES128(v94).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v89).n128_u64[1] = LANES128(v88).n128_u64[0];
    LANES128(v88).n128_u64[1] = LANES128(v84).n128_u64[0];
    LANES128(v84).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v95 = vbslq_s8(vdupq_n_s32(v83), v92, v133);
    *(int8x8_t*)&LANES128(v90).n128_i8[8] =
        vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v94).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v93).n128_u64[0]), 1);
    v96 = a1[4];
    v97 = vmulq_f32(v85, v93);
    v134 = v95;
    v98 = vmulq_f32(v86, v90);
    v99 = vsubq_f32(v137, v138);
    v100 = vsubq_f32(v95, v138);
    *(int8x8_t*)&LANES128(v84).n128_i8[8] =
        vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v101 = vmulq_f32(v88, v94);
    LANES128(v86).n128_u32[3] = 0;
    v102 = vmlaq_f32(v97, COERCE_AS(float32x4_t, GameData_1a83800), v98);
    v103 = vmulq_f32(v99, v99);
    v104 = vmulq_f32(v100, v100);
    v105 = vmlsq_f32(
        vmlaq_f32(v102, COERCE_AS(float32x4_t, GameData_1a83800), v101), v84,
        v89);
    LANES128(v101).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v103, v103, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0])))
            .n64_u64[0];
    LANES128(v103).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v104, v104, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])))
            .n64_u64[0];
    LANES128(v84).n128_f32[0] = a1[2];
    PSEUDO_LOW_LANE128(v104, n128_f32, a1[3]);
    LANES128(v86).n128_f32[0] =
        LANES128(v84).n128_f32[0] +
        (float)((float)((float)(LANES128(v84).n128_f32[0] +
                                LANES128(v105).n128_f32[0]) -
                        LANES128(v84).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    *(_DWORD*)(a3 + 20) =
        LANES64_OF(
            vdiv_f32(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0]))),
                     vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))))
            .n64_u32[0];
    LANES128(v86).n128_f32[1] =
        LANES128(v104).n128_f32[0] +
        (float)((float)((float)(LANES128(v104).n128_f32[0] +
                                LANES128(v105).n128_f32[1]) -
                        LANES128(v104).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v103).n128_u32[3] = 0;
    LANES128(v103).n128_f32[0] =
        (float)(LANES128(v84).n128_f32[0] + LANES128(v105).n128_f32[0]) +
        (float)((float)((float)(LANES128(v84).n128_f32[0] -
                                LANES128(v84).n128_f32[0]) +
                        LANES128(v105).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v86).n128_f32[2] =
        v96 + (float)((float)((float)(v96 + LANES128(v105).n128_f32[2]) - v96) *
                      0x1.99999a0000000p-5f);
    LANES128(v103).n128_f32[1] =
        (float)(LANES128(v104).n128_f32[0] + LANES128(v105).n128_f32[1]) +
        (float)((float)((float)(LANES128(v104).n128_f32[0] -
                                LANES128(v104).n128_f32[0]) +
                        LANES128(v105).n128_f32[1]) *
                0x1.99999a0000000p-5f);
    v136 = v86;
    LANES128(v103).n128_f32[2] =
        (float)(v96 + LANES128(v105).n128_f32[2]) +
        (float)((float)(LANES128(v105).n128_f32[2] + (float)(v96 - v96)) *
                0x1.99999a0000000p-5f);
    v135 = v103;
    result = X8CALL_X0(float32x4_t*,
                       collision_670c60((void*)((__int64)v139_.v139), &v136,
                                        &v135, 0x1000100000001LL));
    v107 = *(int8x16_t*)v139_.v139;
    v106 = v139_.v140;
    *(_WORD*)(a3 + 32) = v139_.v140;
    LANES128(v107).n128_u32[3] = 0;
    if (v106 != 0) {
      v108 = -1;
    }
    else {
      v108 = 0;
    }
    v109 = vsubq_f32(vbslq_s8(vdupq_n_s32(v108), v107, v134), v138);
    v110 = vmulq_f32(v109, v109);
    LANES128(v110).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v110, v110, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
            .n64_u64[0];
    v111 = vsubq_f32(v137, v138);
    v112 = vmulq_f32(v111, v111);
    LANES128(v112).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v112, v112, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))
            .n64_u64[0];
    *(_DWORD*)(a3 + 36) =
        LANES64_OF(
            vdiv_f32(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]))),
                     vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))))
            .n64_u32[0];
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
