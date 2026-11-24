#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64* game_8224a0(unsigned __int8);
__int64 InfoCursorBottomImpl_100de20(__int64 result);
__int64 InfoCursorBottomImpl_100e280(__int64 result, __int128*, int32x2_t);
__int64 InfoCursorBottomImpl_100e5d0(__int64 result, int);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_map_100c050(__int64 result);
__int64 game_map_100d7e0(__int64, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN* GameData_212c958;
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212f878;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212d018[6];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float GameRoutine_1a0a550(float, float);
float Unit_6c7fa0(__int64, __int64);
void PrimitiveDrawStack_f51430(__int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_map_f1da00(float32x4_t* a1);

__int64 game_map_f1da00(float32x4_t* a1)
{
  __int64 v2;
  float v3;
  float32x4_t v4;
  __int64* v5;
  float32x4_t* v6;
  float32x4_t v7;
  float32x4_t v8;
  unsigned __int32 v9;
  unsigned int v10;
  float32x4_t v11;
  float32x4_t v12;
  __int64* v13;
  _QWORD* v14;
  float32x4_t* v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64* v23;
  float32x4_t* v24;
  __int64 v25;
  __int64 v26;
  float32x4_t* v27;
  unsigned __int64 v28;
  float32x4_t* v29;
  float32x4_t* v30;
  bool v31;
  __int64 v32;
  int v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64* v39;
  __int64 v40;
  __int64 v41;
  signed __int32 v42;
  float32x4_t* v43;
  signed __int32 v44;
  __int64 v45;
  float v47;
  unsigned __int64* v48;
  unsigned __int64* v49;
  float32x4_t v50;
  int8x16_t v51;
  float v52;
  float32x4_t v53;
  float32x4_t v54;
  __int64* v55;
  float v56;
  __int64 v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float32x4_t* v64;
  int v65;
  float32x4_t v66;
  float32x4_t v67;
  float v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  int8x16_t v72;
  float32x4_t v73;
  float32x4_t v74;
  int8x16_t v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float32x4_t v81;
  float32x4_t v82;
  int8x16_t v83;
  float32x4_t v84;
  int8x16_t v85;
  int8x16_t v86;
  int8x16_t v87;
  float32x4_t v88;
  int8x16_t v89;
  float v90;
  float v91;
  float v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  int8x16_t v101;
  float32x4_t v102;
  float32x4_t v103;
  int8x16_t v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float32x4_t v111;
  float32x4_t v112;
  int8x16_t v113;
  float32x4_t v114;
  int8x16_t v115;
  __int64 v116;
  unsigned __int64 v117;
  float32x4_t v118;
  __n128* v119;
  __n128 v120;
  __n128 v121;
  __int64 v122;
  __n128* v123;
  __n128 v124;
  __int64 v125;
  char v126;
  char v127;
  int v128;
  int v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  int v136;
  int32x2_t v137;
  __int64 v138;
  int v139;
  float32x4_t v140;
  __int64 v141;
  unsigned int v142;
  __int64 v143;
  int v144;
  unsigned int v145;
  float v146;
  float32x4_t v147;
  float32x4_t v148;
  __int64 v149;
  int v150;
  unsigned __int64 v152;
  float32x4_t v153;
  unsigned int v154;
  struct {
    _QWORD v155[4];
    float32x4_t v156;
    float32x4_t v157;
    __int64 v158;
    int v159;
    char gap108_[4];
    unsigned __int64 v160;
    unsigned __int64 v161;
    unsigned __int64 v162;
    unsigned __int8 v163;
  } v155_;
  struct {
    float32x4_t v164;
    __int64 v165;
    char gap168_[8];
    float32x4_t v166;
    float32x4_t v167;
    __int64 v168;
    int v169;
    char gap220_[4];
    float32x4_t v170;
    unsigned __int64 v171;
    unsigned __int8 v172;
  } v164_;

  BYTE1(v155_.v155[2]) = 0;
  WORD1(v155_.v155[2]) = 0;
  DWORDn(v155_.v155[2], sizeof(v155_.v155[2]) / 4 - 1) = 0;
  BYTE4(v155_.v162) = 0;
  v155_.v163 = 0;
  v155_.v160 = 0;
  v155_.v161 = 0;
  v2 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0];
  LOWORD(v155_.v162) = 0;
  v3 = *(float*)(v2 + 160);
  strcpy((char*)v155_.v155, "$MapPanelDeployM");
  v4 = *(float32x4_t*)GameData_212c958;
  v5 = GameData_212f878;
  v155_.v158 = 0x100000000LL;
  v164_.v170 = (__typeof__(v164_.v170)){0};
  v155_.v159 = 1;
  v164_.v169 = 1;
  v6 = (float32x4_t*)*GameData_212f878;
  LANES128(v164_.v164).n128_u64[0] = v155_.v155[0];
  LANES128(v164_.v164).n128_u64[1] = *(_OWORD*)"MapPanelDeployMove" >> 56;
  v8 = v6[7];
  v7 = v6[8];
  v164_.v171 = v155_.v162;
  v9 = LANES128(v6[89]).n128_u32[3];
  *(float*)&v10 = -LANES128(v6[89]).n128_f32[2];
  v155_.v156 = vmulq_f32(v4, v8);
  v155_.v157 = vmulq_f32(v4, v7);
  v164_.v168 = 0x100000000LL;
  v164_.v165 = LOBYTE(v155_.v155[2]);
  v164_.v166 = v155_.v156;
  v164_.v167 = v155_.v157;
  v164_.v172 = 0;
  v12 = v6[3];
  v11 = v6[4];
  v164_.v169 = 0;
  LOBYTE(v164_.v171) = 1;
  v164_.v166 = vmulq_f32(v4, v12);
  v164_.v167 = vmulq_f32(v4, v11);
  LANES128(v164_.v166).n128_u32[3] =
      vmuls_lane_f32(LANES128(v164_.v166).n128_f32[3], v155_.v156, 3);
  LANES128(v4).n128_u64[0] = __PAIR64__(v10, v9);
  LANES128(v164_.v167).n128_u32[3] =
      vmuls_lane_f32(LANES128(v164_.v167).n128_f32[3], v155_.v157, 3);
  LANES128(v4).n128_u64[1] = v9;
  v164_.v170 = v4;
  v13 = (__int64*)GameData_212d018[0];
  v14 = *(_QWORD**)GameData_212d018[0];
  v15 = *(float32x4_t**)(*(_QWORD*)GameData_212d018[0] + 24LL);
  if ((unsigned __int64)v15 >=
      *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 32LL)) {
    v17 = PrimitiveDrawStack_f525a0(v14 + 2, (__int64)&v164_.v164);
  }
  else {
    if ((LANES128(v164_.v164).n128_u8[0] & 1) != 0) {
      fw_text_String_CopyTerminated(
          *(__int64**)(*(_QWORD*)GameData_212d018[0] + 24LL), v164_.v165,
          LANES128(v164_.v164).n128_u64[1]);
    }
    else {
      LANES128(*(v15)).n128_u64[1] = v155_.v155[1];
      v16 = v155_.v155[0];
      LANES128(v15[1]).n128_u64[0] = v155_.v155[2];
      LANES128(*(v15)).n128_u64[0] = v16;
    }
    v18 = v164_.v169;
    v17 = (__int64)&v15[7];
    LANES128(v15[3]).n128_u64[1] = LANES128(v164_.v167).n128_u64[1];
    v15[2] = v164_.v166;
    v19 = LANES128(v164_.v167).n128_u64[0];
    v20 = v164_.v168;
    LANES128(v15[4]).n128_u32[2] = v18;
    LANES128(v15[4]).n128_u64[0] = v20;
    LANES128(v15[3]).n128_u64[0] = v19;
    v15[5] = v164_.v170;
    v21 = v164_.v171;
    LANES128(v15[6]).n128_u8[8] = v164_.v172;
    LANES128(v15[6]).n128_u64[0] = v21;
  }
  v22 = v14[2];
  v14[3] = v17;
  v14[1] = 0x6DB6DB6DB6DB6DB7LL * ((v17 - v22) >> 4) - 1;
  v23 = &LANES128(a1[1]).n128_u64[1];
  v24 = (float32x4_t*)LANES128(a1[1]).n128_u64[0];
  if (v24 != (float32x4_t*)&LANES128(a1[1]).n128_i8[8]) {
    do {
      PrimitiveDrawStack_f51430(*v13, (__int64)&v24[3]);
      v29 = (float32x4_t*)LANES128(*(v24)).n128_u64[1];
      if (v29 != nullptr) {
        do {
          v30 = v29;
          v29 = (float32x4_t*)LANES128(*(v29)).n128_u64[0];
        } while (v29 != nullptr);
      }
      else {
        do {
          v30 = (float32x4_t*)LANES128(v24[1]).n128_u64[0];
          v31 = v24 == (float32x4_t*)LANES128(*(v30)).n128_u64[0];
          v24 = v30;
        } while (!v31);
      }
      v24 = v30;
    } while (v30 != (float32x4_t*)v23);
  }
  v25 = *v13;
  *(_QWORD*)(*v13 + 8) = 1024;
  if ((LANES128(v164_.v164).n128_u8[0] & 1) != 0 && v164_.v165 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  v164_.v165);
    v25 = *v13;
  }
  v27 = *(float32x4_t**)(v25 + 24);
  if ((unsigned __int64)v27 >= *(_QWORD*)(v25 + 32)) {
    v32 = PrimitiveDrawStack_f525a0((__int64*)(v25 + 16), (__int64)v155_.v155);
  }
  else {
    if ((v155_.v155[0] & 1) != 0) {
      fw_text_String_CopyTerminated(*(__int64**)(v25 + 24), v155_.v155[2],
                                    v155_.v155[1]);
    }
    else {
      LANES128(*(v27)).n128_u64[1] = v155_.v155[1];
      v28 = v155_.v155[0];
      LANES128(v27[1]).n128_u64[0] = v155_.v155[2];
      LANES128(*(v27)).n128_u64[0] = v28;
    }
    v33 = v155_.v159;
    v32 = (__int64)&v27[7];
    LANES128(v27[3]).n128_u64[1] = LANES128(v155_.v157).n128_u64[1];
    v27[2] = v155_.v156;
    v34 = LANES128(v155_.v157).n128_u64[0];
    v35 = v155_.v158;
    LANES128(v27[4]).n128_u32[2] = v33;
    LANES128(v27[4]).n128_u64[0] = v35;
    LANES128(v27[3]).n128_u64[0] = v34;
    v36 = v155_.v161;
    LANES128(v27[5]).n128_u64[0] = v155_.v160;
    LANES128(v27[5]).n128_u64[1] = v36;
    v37 = v155_.v162;
    LANES128(v27[6]).n128_u8[8] = v155_.v163;
    LANES128(v27[6]).n128_u64[0] = v37;
  }
  v38 = *(_QWORD*)(v25 + 16);
  *(_QWORD*)(v25 + 24) = v32;
  *(_QWORD*)(v25 + 8) = 0x6DB6DB6DB6DB6DB7LL * ((v32 - v38) >> 4) - 1;
  v39 = (unsigned __int64*)LANES128(a1[1]).n128_u64[0];
  if (v39 != v23) {
    do {
      PrimitiveDrawStack_f51430(*v13, (__int64)(v39 + 6));
      v48 = (unsigned __int64*)v39[1];
      if (v48 != nullptr) {
        do {
          v49 = v48;
          v48 = (unsigned __int64*)*v48;
        } while (v48 != nullptr);
      }
      else {
        do {
          v49 = (unsigned __int64*)v39[2];
          v31 = v39 == (unsigned __int64*)*v49;
          v39 = v49;
        } while (!v31);
      }
      v39 = v49;
    } while (v49 != v23);
  }
  *(_QWORD*)(*v13 + 8) = 1024;
  if ((v155_.v155[0] & 1) != 0 && v155_.v155[2] != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v40,
                                  v155_.v155[2]);
  }
  v41 = GameData_212d038[0];
  v42 = LANES128(a1[7]).n128_i32[2];
  v43 = *(float32x4_t**)GameData_212d038[0];
  if ((signed __int32)LANES128(a1[7]).n128_u32[1] > v42) {
    v42 = LANES128(a1[7]).n128_i32[1];
  }
  v44 = LANES128(v43[7]).n128_i32[0];
  v45 = GameData_212d020[0];
  if (!(v44 > (signed __int32)LANES128(v43[7]).n128_u32[1])) {
    v44 = LANES128(v43[7]).n128_i32[1];
  }
  if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 4744LL) + 32LL) !=
          0 |
      v42 < v44) {
    if ((LANES128(a1[7]).n128_u8[14] & 1) == 0) {
      LANES128(a1[7]).n128_u8[14] = 1;
    }
    v47 = 0x1.0000000000000p+0f;
    LANES128(a1[7]).n128_u8[12] = 1;
    LANES128(a1[8]).n128_u32[0] = 1065353216;
  }
  else {
    v47 = LANES128(a1[8]).n128_f32[0];
    if ((LANES128(a1[7]).n128_u8[14] & 1) == 0) {
      goto LABEL_55;
    }
  }
  if (!(v47 > 0x0.0p+0f) ||
      (v50 = vsubq_f32(v43[3], v43[4]), v51 = vmulq_f32(v50, v50),
       LANES128(v51).n128_u64[0] =
           LANES64_OF(
               vadd_f32(
                   COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
               .n64_u64[0],
       LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
               .n64_f32[0] < 0x1.0000000000000p-23f)) {
    v47 = 0x0.0p+0f;
    LANES128(a1[7]).n128_u8[14] = 0;
    LANES128(a1[8]).n128_u32[0] = 0;
  }
LABEL_55:
  v52 = v3 * 0x1.0aef000000000p+4f;
  v53 = vmlaq_n_f32(v43[3], vsubq_f32(v43[4], v43[3]),
                    GameRoutine_1a0a550(v47, 0x1.0000000000000p-1f));
  LANES128(a1[6]).n128_u64[0] = LANES128(v53).n128_u64[0];
  v54 = a1[6];
  LANES128(v54).n128_u64[1] = LANES128(v53).n128_u32[2];
  a1[6] = v54;
  v55 = game_8224a0(3u);
  v56 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v57 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v55);
    if (v57 != 0) {
      v56 = (float)*(int*)(v57 + 32);
    }
  }
  v58 = v52 / 0x1.f400000000000p+9f;
  v59 = 0x1.e000000000000p+5f;
  v60 =
      0x1.e000000000000p+5f / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
  if (v60 > 0x0.0p+0f) {
    v59 = 0x1.e000000000000p+5f / v60;
  }
  v61 = v56 / v59;
  v62 = LANES128(a1[8]).n128_f32[0];
  v63 = fabsf(v58 / v61);
  if (v62 > 0x0.0p+0f) {
    v62 = v62 - v63;
    if (!(v62 < 0x0.0p+0f)) {
      goto LABEL_66;
    }
  LABEL_65:
    v62 = 0x0.0p+0f;
    goto LABEL_66;
  }
  if (v62 < 0x0.0p+0f) {
    v62 = v62 + v63;
    if (v62 > 0x0.0p+0f) {
      goto LABEL_65;
    }
  }
LABEL_66:
  v64 = *(float32x4_t**)v41;
  v65 = LANES128(a1[7]).n128_u8[13];
  LANES128(a1[8]).n128_f32[0] = v62;
  if (!(v58 > 0x0.0p+0f)) {
    goto LABEL_90;
  }
  v66 = a1[6];
  if (LANES128(a1[7]).n128_u8[12] != 1) {
    v67 = a1[5];
    v69 = a1[6];
    v68 = LANES128(v64[9]).n128_f32[0];
    LANES128(v69).n128_u32[1] = 0;
    v70 = v67;
    LANES128(v70).n128_u32[1] = 0;
    v71 = vsubq_f32(v69, v70);
    v72 = vmulq_f32(v71, v71);
    LANES128(v72).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v72, v72, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
            .n64_u64[0];
    LANES128(v72).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
            .n64_u64[0];
    LANES128(v72).n128_u64[1] = LANES128(v72).n128_u64[0];
    v73 = vrsqrteq_f32(v72);
    v74 = vmulq_f32(v73, vrsqrtsq_f32(v73, vmulq_f32(v72, v73)));
    v75 = vbicq_s8(
        vmulq_f32(v71, vmulq_f32(v74, vrsqrtsq_f32(v74, vmulq_f32(v72, v74)))),
        vceqzq_f32(v72));
    v76 = fabsf(v68 * fabsf(LANES128(v75).n128_f32[0]));
    if ((LANES64_OF(vmovn_s32(vcgtq_f32(v67, v66))).n64_u8[0] & 1) != 0) {
      v77 = LANES128(v67).n128_f32[0] - v76;
      if (!((float)(LANES128(v67).n128_f32[0] - v76) <
            LANES128(v66).n128_f32[0])) {
      LABEL_76:
        v78 = LANES128(v67).n128_f32[2];
        v79 = LANES128(v67).n128_f32[1];
        v80 = fabsf(v68 * fabsf(LANES128(v75).n128_f32[2]));
        if (!(LANES128(v67).n128_f32[2] > LANES128(v66).n128_f32[2])) {
          if (!(LANES128(v67).n128_f32[2] < LANES128(v66).n128_f32[2])||
              (v78 = LANES128(v67).n128_f32[2] + v80,
               (float)(LANES128(v67).n128_f32[2] + v80) <=
                   LANES128(v66).n128_f32[2])) {
          LABEL_82:
            v66 = vsubq_f32(v66, v67);
            LANES128(v81).n128_u64[0] = LODWORD(v77);
            LANES128(v81).n128_u64[1] = LODWORD(v78);
            v82 = vsubq_f32(v81, v69);
            v83 = vmulq_f32(v82, v82);
            v84 = vextq_s8(v83, v83, 8u);
            LANES128(v83).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v84).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
                    .n64_u64[0];
            PSEUDO_LOW_LANE128(v83, n128_u64, 0);
            v85 = vdupq_lane_s32(
                COERCE_AS(int32x2_t,
                          LANES128_OF(vcgtq_f32(v84, v83)).n128_u64[0]),
                0);
            v86 = v64[2];
            v87 = vbslq_s8(
                v85,
                vmlaq_f32(v81, vdupq_n_s32(0x3E4CCCCDu), vsubq_f32(v69, v81)),
                v81);
            LANES128(v81).n128_u32[0] =
                LANES128_OF(vextq_s8(v86, v86, 8u)).n128_u32[0];
            LANES128(v86).n128_u32[1] = 0;
            LANES128(v86).n128_u64[1] = LANES128(v81).n128_u32[0];
            v88 = vsubq_f32(v86, v69);
            v89 = vmulq_f32(v88, v88);
            LANES128(v89).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v89, v89, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v89).n128_u64[0])))
                    .n64_u64[0];
            v90 = (float)(LANES64_OF(vsqrt_f32(vpadd_f32(
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v89).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v89).n128_u64[0]))))
                              .n64_f32[0] +
                          -0x1.4000000000000p+2f) /
                  -0x1.4000000000000p+2f;
            if (v90 > 0x1.0000000000000p+0f) {
              v91 = 0x1.0000000000000p+0f;
            }
            else {
              v91 = v90;
            }
            if (!(v90 < 0x0.0p+0f)) {
              v92 = v91;
            }
            else {
              v92 = 0x0.0p+0f;
            }
            LANES128(v66).n128_u32[2] = LANES128(v87).n128_u32[2];
            LANES128(a1[5]).n128_u32[0] = LANES128(v87).n128_u32[0];
            LANES128(a1[5]).n128_f32[1] =
                v79 +
                (float)(fminf(fmaxf((float)(fminf(fmaxf(v92 * v92, 0x0.0p+0f),
                                                  0x1.0000000000000p+0f) *
                                            0x1.cccccc0000000p-1f) +
                                        0x1.99999a0000000p-4f,
                                    0x0.0p+0f),
                              0x1.0000000000000p+0f) *
                        LANES128(v66).n128_f32[1]);
            goto LABEL_89;
          }
        }
        else {
          v78 = LANES128(v67).n128_f32[2] - v80;
          if (!((float)(LANES128(v67).n128_f32[2] - v80) <
                LANES128(v66).n128_f32[2])) {
            goto LABEL_82;
          }
        }
        {
          __typeof__(v78) z_ = (__typeof__(v78)){0};
          LODWORD(z_) = LANES128(a1[6]).n128_u64[1];
          v78 = z_;
        }
        goto LABEL_82;
      }
    }
    else {
      if ((LANES64_OF(vmovn_s32(vcgtq_f32(v66, v67))).n64_u8[0] & 1) == 0) {
        v77 = LANES128(v67).n128_f32[0];
        goto LABEL_76;
      }
      v77 = LANES128(v67).n128_f32[0] + v76;
      if ((float)(LANES128(v67).n128_f32[0] + v76) <=
          LANES128(v66).n128_f32[0]) {
        goto LABEL_76;
      }
    }
    {
      __typeof__(v77) z_ = (__typeof__(v77)){0};
      LODWORD(z_) = *(_DWORD*)&(a1[6]);
      v77 = z_;
    }
    goto LABEL_76;
  }
  LANES128(a1[5]).n128_u64[0] = LANES128(v66).n128_u64[0];
LABEL_89:
  v93 = a1[5];
  LANES128(v93).n128_u64[1] = LANES128(v66).n128_u32[2];
  a1[5] = v93;
LABEL_90:
  if (v65 != 0) {
    LANES128(a1[4]).n128_u32[0] = LANES128(v64[2]).n128_u32[0];
    LANES128(a1[4]).n128_u32[1] = LANES128(v64[2]).n128_u32[1];
    v94 = a1[4];
    LANES128(v94).n128_u32[2] = LANES128(v64[2]).n128_u32[2];
    goto LABEL_114;
  }
  v95 = v64[2];
  v96 = a1[4];
  v97 = LANES128(v64[9]).n128_f32[0];
  v99 = v95;
  v98 = v96;
  LANES128(v99).n128_u32[1] = 0;
  LANES128(v98).n128_u32[1] = 0;
  v100 = vsubq_f32(v99, v98);
  v101 = vmulq_f32(v100, v100);
  LANES128(v101).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v101, v101, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))
          .n64_u64[0];
  LANES128(v101).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))
          .n64_u64[0];
  LANES128(v101).n128_u64[1] = LANES128(v101).n128_u64[0];
  v102 = vrsqrteq_f32(v101);
  v103 = vmulq_f32(v102, vrsqrtsq_f32(v102, vmulq_f32(v101, v102)));
  v104 = vbicq_s8(
      vmulq_f32(v100,
                vmulq_f32(v103, vrsqrtsq_f32(v103, vmulq_f32(v101, v103)))),
      vceqzq_f32(v101));
  v105 = fabsf(v97 * fabsf(LANES128(v104).n128_f32[0]));
  if ((LANES64_OF(vmovn_s32(vcgtq_f32(v96, v95))).n64_u8[0] & 1) == 0) {
    if ((LANES64_OF(vmovn_s32(vcgtq_f32(v95, v96))).n64_u8[0] & 1) == 0) {
      v106 = LANES128(v96).n128_f32[0];
      goto LABEL_99;
    }
    v106 = LANES128(v96).n128_f32[0] + v105;
    if ((float)(LANES128(v96).n128_f32[0] + v105) <=
        LANES128(v95).n128_f32[0]) {
      goto LABEL_99;
    }
  LABEL_97:
    v106 = LANES128(v95).n128_f32[0];
    goto LABEL_99;
  }
  v106 = LANES128(v96).n128_f32[0] - v105;
  if ((float)(LANES128(v96).n128_f32[0] - v105) < LANES128(v95).n128_f32[0]) {
    goto LABEL_97;
  }
LABEL_99:
  v107 = LANES128(v96).n128_f32[1];
  v108 = LANES128(v95).n128_f32[1];
  LANES128(v96).n128_u32[0] = LANES128(v96).n128_u32[2];
  v109 = fabsf(v97 * fabsf(LANES128(v104).n128_f32[2]));
  if (LANES128(v96).n128_f32[2] > LANES128(v95).n128_f32[2]) {
    LANES128(v96).n128_f32[0] = LANES128(v96).n128_f32[2] - v109;
    if (!((float)(LANES128(v96).n128_f32[2] - v109) <
          LANES128(v95).n128_f32[2])) {
      goto LABEL_105;
    }
  LABEL_104:
    LANES128(v96).n128_u32[0] = LANES128(v95).n128_u32[2];
    goto LABEL_105;
  }
  if (LANES128(v96).n128_f32[2] < LANES128(v95).n128_f32[2]) {
    LANES128(v96).n128_f32[0] = LANES128(v96).n128_f32[2] + v109;
    if ((float)(LANES128(v96).n128_f32[2] + v109) > LANES128(v95).n128_f32[2]) {
      goto LABEL_104;
    }
  }
LABEL_105:
  v110 = fabsf(v97);
  LANES128(v111).n128_u64[0] = LODWORD(v106);
  LANES128(v111).n128_u64[1] = LANES128(v96).n128_u32[0];
  v112 = vsubq_f32(v111, v99);
  v113 = vmulq_f32(v112, v112);
  v114 = vextq_s8(v113, v113, 8u);
  LANES128(v113).n128_u64[0] =
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v114).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0])))
          .n64_u64[0];
  PSEUDO_LOW_LANE128(v114, n128_u64, 0);
  LANES128(v113).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0])))
          .n64_u64[0];
  v115 = vbslq_s8(
      vdupq_lane_s32(
          COERCE_AS(int32x2_t, LANES128_OF(vcgtq_f32(v113, v114)).n128_u64[0]),
          0),
      vmlaq_f32(v111, vdupq_n_s32(0x3E4CCCCDu), vsubq_f32(v99, v111)), v111);
  if (!(v107 > v108)) {
    if (v107 < v108) {
      v107 = v107 + v110;
      if (v107 > v108) {
        goto LABEL_110;
      }
    }
  LABEL_111:
    if (v108 != v107) {
      v107 = v107 + (float)((float)(v107 - v107) * 0x1.99999a0000000p-3f);
    }
    goto LABEL_113;
  }
  v107 = v107 - v110;
  if (!(v107 < v108)) {
    goto LABEL_111;
  }
LABEL_110:
  v107 = v108;
LABEL_113:
  LANES128(a1[4]).n128_u32[0] = LANES128(v115).n128_u32[0];
  LANES128(a1[4]).n128_f32[1] = v107;
  v94 = a1[4];
  LANES128(v94).n128_u32[2] = LANES128(v115).n128_u32[2];
LABEL_114:
  LANES128(v94).n128_u32[3] = 0;
  v116 = LANES128(a1[2]).n128_i64[1];
  a1[4] = v94;
  v117 = LANES128(v64[7]).n128_u64[0];
  LANES128(a1[7]).n128_u16[6] = 0;
  *(unsigned __int64*)((char*)LANES128(a1[7]).n128_u64 + 4) = v117;
  game_map_100c050(v116);
  LANES128(v118).n128_u32[0] = 0;
  LANES128(v118).n128_u32[3] = 0;
  *(unsigned __int64*)((char*)LANES128(v118).n128_u64 + 4) =
      *(unsigned int*)(*v5 + 1424);
  v119 = (__n128*)LANES128(a1[2]).n128_u64[1];
  v120 = vaddq_f32(a1[5], v118);
  LANES128(v119[7]).n128_u64[0] = LANES128(v120).n128_u64[0];
  v121 = v119[7];
  LANES128(v121).n128_u64[1] = LANES128(v120).n128_u32[2];
  v119[7] = v121;
  v122 = LANES128(a1[2]).n128_i64[1];
  *(_BYTE*)(v122 + 128) =
      (*(__int64 (**)(__int64, __n128, __n128))(LANES128(*(a1)).n128_u64[0] +
                                                48))((__int64)a1, v120, v121) &
      1;
  InfoCursorBottomImpl_100de20(v122);
  v123 = (__n128*)LANES128(a1[2]).n128_u64[1];
  LANES128(v123[9]).n128_u32[0] = LANES128(a1[4]).n128_u32[0];
  LANES128(v123[9]).n128_u32[1] = LANES128(a1[4]).n128_u32[1];
  v124 = v123[9];
  LANES128(v124).n128_u64[1] = LANES128(a1[4]).n128_u32[2];
  v123[9] = v124;
  v125 = LANES128(a1[2]).n128_i64[1];
  v126 = (*(__int64 (**)(__int64, __n128))(LANES128(*(a1)).n128_u64[0] + 48))(
      (__int64)a1, v124);
  v127 = 0;
  if ((v126 & 1) != 0) {
    v127 = *(_BYTE*)(*(_QWORD*)v45 + 5553LL);
  }
  *(_BYTE*)(v125 + 160) = v127 & 1;
  InfoCursorBottomImpl_100de20(v125);
  v128 = LANES128(v64[7]).n128_i32[0];
  if ((signed __int32)LANES128(v64[7]).n128_u32[1] < v128) {
    v128 = LANES128(v64[7]).n128_i32[1];
  }
  *(float*)(LANES128(a1[2]).n128_u64[1] + 192) = (float)v128;
  *(float*)(LANES128(a1[2]).n128_u64[1] + 196) =
      (float)v128 * 0x1.4000000000000p+2f;
  v129 = LANES128(v64[9]).n128_u8[12];
  if (LANES128(a1[7]).n128_u8[0] != v129) {
    LANES128(a1[7]).n128_u8[0] = v129;
  }
  if (v129 != 0) {
    v130 = *(_QWORD*)v45;
    v131 = *(_QWORD*)(*(_QWORD*)v45 + 24LL);
    v132 = *(_QWORD*)(*(_QWORD*)v45 + 104LL);
    if (v132 != 0 &&
        (v133 = *(_QWORD*)(v130 + 96),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v132 + 16), 1u,
                                   memory_order_relaxed),
         v134 = std___1___shared_weak_count_lock(v132),
         std___1___shared_weak_count___release_weak(v132), v134 != 0)) {
      if (v133 != 0) {
        v135 = 254936;
      }
      else if (*(_BYTE*)(*(_QWORD*)v41 + 156LL) != 0) {
        v135 = 8;
      }
      else {
        v135 = 127472;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v134 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v134 + 16LL))(v134);
        std___1___shared_weak_count___release_weak(v134);
      }
    }
    else if (*(_BYTE*)(*(_QWORD*)v41 + 156LL) != 0) {
      v135 = 8;
    }
    else {
      v135 = 127472;
    }
    v136 = 1;
    if ((*(_QWORD*)(v131 + v135 + 127168) | *(_QWORD*)(v131 + v135 + 127192)) !=
            0 &&
        v131 != 0) {
      if (*(_BYTE*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 240LL) != 0) {
        v136 = 1;
      }
      else {
        v136 = 2;
      }
    }
  }
  else {
    v136 = 0;
  }
  InfoCursorBottomImpl_100e5d0(LANES128(a1[2]).n128_i64[1], v136);
  v138 = LANES128(a1[2]).n128_i64[1];
  if (*(_BYTE*)(v138 + 128) == 1) {
    v139 = LANES128(a1[7]).n128_u8[0];
    if (LANES128(a1[7]).n128_u8[1] != v139) {
      LANES128(a1[7]).n128_u8[1] = v139;
      if (v139 != 0) {
        v140 = v64[3];
        if (*GameData_212cfc0[0] != 0) {
          LODWORD(v141) =
              *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL) +
              32 * *(int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL);
          v141 = (unsigned int)v141 >= 0x400 ? 0LL : (unsigned int)v141;
          v142 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                     v141 + 8);
          if (v142 != 0 && v142 <= 0xFA) {
            v143 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v142;
            if (v143 != 2224 && *(_QWORD*)(v143 - 1832) != 0 &&
                (*(_BYTE*)(v143 - 1807) & 0x1C) == 0) {
              v153 = v64[3];
              (*(void (**)(__int64))(*(_QWORD*)(v143 - 2072) + 16LL))(v143 -
                                                                      2072);
              v140 = v153;
              if (LANES64(v137).n64_f32[0] > 0x0.0p+0f) {
                v144 = *(_DWORD*)(v143 - 1632);
                v145 = *(char*)(v143 - 1640) + 256;
                v146 = (float)(unsigned int)(v144 - 1) * 0x1.4000000000000p+1f;
                if (v144 <= 0) {
                  v146 = 0x0.0p+0f;
                }
                LANES128(v147).n128_u64[0] = COERCE_UNSIGNED_INT(
                    (float)((float)((float)((float)v145 *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f) +
                    v146);
                v152 = COERCE_UNSIGNED_INT(
                    (float)((float)((float)((float)(unsigned int)(*(char*)(v143 -
                                                                           1639) +
                                                                  256) *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f) +
                    v146);
                *(float*)&v154 =
                    (float)((float)((float)((float)v145 *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f) +
                    v146;
                LANES128(v147).n128_u64[1] = v152;
                v164_.v164 = v147;
                LANES128(v140).n128_u64[0] =
                    __PAIR64__(COERCE_UNSIGNED_INT(Unit_6c7fa0(
                                   v143 - 2224, (__int64)&v164_.v164)),
                               v154);
                LANES64(v137).n64_u32[1] = DWORDn(v152, sizeof(v152) / 4 - 1);
                LANES128(v140).n128_u64[1] = (unsigned int)v152;
              }
            }
          }
        }
        LANES128(v148).n128_u32[0] = 0;
        LANES128(v148).n128_u32[3] = 0;
        v149 = LANES128(a1[2]).n128_i64[1];
        v150 = LANES128(v64[7]).n128_i32[0];
        if ((signed __int32)LANES128(v64[7]).n128_u32[1] < v150) {
          v150 = LANES128(v64[7]).n128_i32[1];
        }
        LANES64(v137).n64_f32[0] = (float)v150;
        *(unsigned __int64*)((char*)LANES128(v148).n128_u64 + 4) =
            *(unsigned int*)(*v5 + 1424);
        v164_.v164 = vaddq_f32(v140, v148);
        InfoCursorBottomImpl_100e280(v149, (__int128*)&v164_.v164, v137);
        v138 = LANES128(a1[2]).n128_i64[1];
      }
    }
  }
  if (LANES128(v64[5]).n128_u8[0] == 1) {
    *(_DWORD*)(v138 + 208) = 0;
    v138 = LANES128(a1[2]).n128_i64[1];
  }
  return game_map_100d7e0(v138, v58);
}

#pragma GCC visibility pop
