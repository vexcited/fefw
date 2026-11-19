#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_map_79ca50(PSEUDO_X8, _QWORD);
__int64 UnitActor_81ab40(_QWORD, float, float);
__int64 Unit_6c7fa0(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int128 GameData_1a83090;
float math_Vec3_Angle(_QWORD, _QWORD);
__int64 game_map_7af120(__int64 result);

__int64 game_map_7af120(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  int v9;
  float v10;
  float v11;
  __int128 v12;
  float32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  float v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  bool v22;
  __int64 v23;
  int v24;
  float v25;
  float v26;
  __int128 v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  float v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  bool v37;
  __int64 v38;
  int v39;
  float v40;
  float v41;
  __int128 v42;
  float32x4_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  bool v52;
  __int64 v53;
  int v54;
  float v55;
  float v56;
  __int128 v57;
  float32x4_t v58;
  float32x4_t v59;
  int8x16_t v60;
  float v61;
  int8x16_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  float32x4_t v71;
  unsigned __int64 v72;
  float32x4_t v73;
  unsigned __int64 v74;
  float32x4_t v75;
  unsigned __int64 v76;
  float32x4_t v77;
  unsigned __int64 v78;
  float32x4_t v79;
  float32x4_t v80;
  __int128 v81;

  v1 = *(_QWORD*)(result + 216);
  v2 = (_QWORD*)result;
  v3 = game_g_shared_system_skills_ptr;
  if (v1 != 0) {
    LODWORD(v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                              game_g_shared_system_skills_ptr) &
                   0xFFF;
    result = game_HasSkill(v1 + 1744, &v81);
    if ((result & 1) == 0) {
      v7 = *(_WORD*)(v1 + 492) == 0 && *(_BYTE*)(v1 + 496) == 0;
      if (!v7 ||
          (LODWORD(v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v3) & 0xFFF,
           ((result = game_HasSkill(v1 + 1744, &v81)) & 1) == 0)) {
        if ((v8 = v2[122]) != 0 && *(_QWORD*)(v8 + 392) != 0 ||
            (*(_BYTE*)(v2[120] + 11277LL) & 0x80) == 0 &&
                (result = v2[123]) != 0 &&
                ((result = (**(__int64 (***)(__int64))result)(result)) & 1) !=
                    0) {
          game_map_79ca50((void*)(&v79), v2 + 119);
          v9 = *(_DWORD*)(v1 + 592);
          v10 = 0.0f;
          v11 = (float)(unsigned int)(v9 - 1) * 2.5f;
          if (!(v9 > 0)) {
            v11 = 0.0f;
          }
          *(_QWORD*)&v12 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)(unsigned int)(*(char*)(v1 + 584) +
                                                            256) *
                                      5.0f) +
                              2.5f) +
                      -0x1.4000000000000p+10f) +
              v11);
          *((_QWORD*)&v12 + 1) = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)(unsigned int)(*(char*)(v1 + 585) +
                                                            256) *
                                      5.0f) +
                              2.5f) +
                      -0x1.4000000000000p+10f) +
              v11);
          v71 = COERCE_AS(float32x4_t, v12);
          v81 = v12;
          result = Unit_6c7fa0(v1, &v81);
          v13 = vsubq_f32(v79, v71);
          if (!((float)(vmuls_lane_f32(LANES128(v13).n128_f32[2], v13, 2) +
                        (float)(LANES128(v13).n128_f32[0] *
                                LANES128(v13).n128_f32[0])) <
                0x1.0000000000000p-4f)) {
            if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                                     COERCE_AS(float32x2_t, 1065353216LL)))
                    .n64_f32[0] > 0.0f) {
              LANES128(v14).n128_u64[0] = LANES128(v13).n128_u32[0];
              LANES128(v14).n128_u64[1] = LANES128(v13).n128_u32[2];
              v15 = vmulq_f32(v14, v14);
              LANES128(v15).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                      .n64_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                      .n64_f32[0] > 0.0f) {
                v80 = v14;
                v67 = LANES128(v13).n128_u32[2];
                v72 = LANES128(v13).n128_u32[0];
                v81 = GameData_1a83090;
                v16 = math_Vec3_Angle(&v81, &v80);
                LANES128(v17).n128_u64[0] = v72;
                LANES128(v17).n128_u64[1] = v67;
                LANES128(v18).n128_u64[0] =
                    LANES64_OF(
                        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                  COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                        .n64_u64[0];
                LANES128(v19).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                        .n64_u64[0];
                LANES128(v20).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v18).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                              COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v21).n128_u64[0] =
                    LANES64_OF(
                        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                  COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v20).n128_i8[8] =
                    vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                *(int8x8_t*)&LANES128(v19).n128_i8[8] =
                    vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                *(int8x8_t*)&LANES128(v21).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                              COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                if (LANES128_OF(vmlsq_f32(vmulq_f32(v18, v19), v20, v21))
                        .n128_f32[1] < 0.0f) {
                  v16 = -v16;
                }
                v10 = v16 * 0x1.ca5dc00000000p+5f;
              }
            }
            result = UnitActor_81ab40(v1, v10, -0x1.0000000000000p+0f);
          }
        }
      }
    }
  }
  v4 = v2[122];
  if (v4 != 0) {
    LODWORD(v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v3) & 0xFFF;
    result = game_HasSkill(v4 + 1744, &v81);
    if ((result & 1) == 0) {
      v22 = *(_WORD*)(v4 + 492) == 0 && *(_BYTE*)(v4 + 496) == 0;
      if (!v22 ||
          (LODWORD(v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v3) & 0xFFF,
           ((result = game_HasSkill(v4 + 1744, &v81)) & 1) == 0)) {
        if ((v23 = v2[27]) != 0 && *(_QWORD*)(v23 + 392) != 0 ||
            (*(_BYTE*)(v2[25] + 11277LL) & 0x80) == 0 &&
                (result = v2[28]) != 0 &&
                ((result = (**(__int64 (***)(__int64))result)(result)) & 1) !=
                    0) {
          game_map_79ca50((void*)(&v79), v2 + 24);
          v24 = *(_DWORD*)(v4 + 592);
          v25 = 0.0f;
          v26 = (float)(unsigned int)(v24 - 1) * 2.5f;
          if (!(v24 > 0)) {
            v26 = 0.0f;
          }
          *(_QWORD*)&v27 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)(unsigned int)(*(char*)(v4 + 584) +
                                                            256) *
                                      5.0f) +
                              2.5f) +
                      -0x1.4000000000000p+10f) +
              v26);
          *((_QWORD*)&v27 + 1) = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)(unsigned int)(*(char*)(v4 + 585) +
                                                            256) *
                                      5.0f) +
                              2.5f) +
                      -0x1.4000000000000p+10f) +
              v26);
          v73 = COERCE_AS(float32x4_t, v27);
          v81 = v27;
          result = Unit_6c7fa0(v4, &v81);
          v28 = vsubq_f32(v79, v73);
          if (!((float)(vmuls_lane_f32(LANES128(v28).n128_f32[2], v28, 2) +
                        (float)(LANES128(v28).n128_f32[0] *
                                LANES128(v28).n128_f32[0])) <
                0x1.0000000000000p-4f)) {
            if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                                     COERCE_AS(float32x2_t, 1065353216LL)))
                    .n64_f32[0] > 0.0f) {
              LANES128(v29).n128_u64[0] = LANES128(v28).n128_u32[0];
              LANES128(v29).n128_u64[1] = LANES128(v28).n128_u32[2];
              v30 = vmulq_f32(v29, v29);
              LANES128(v30).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                      .n64_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                      .n64_f32[0] > 0.0f) {
                v80 = v29;
                v68 = LANES128(v28).n128_u32[2];
                v74 = LANES128(v28).n128_u32[0];
                v81 = GameData_1a83090;
                v31 = math_Vec3_Angle(&v81, &v80);
                LANES128(v32).n128_u64[0] = v74;
                LANES128(v32).n128_u64[1] = v68;
                LANES128(v33).n128_u64[0] =
                    LANES64_OF(
                        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                  COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                        .n64_u64[0];
                LANES128(v34).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                        .n64_u64[0];
                LANES128(v35).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v33).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                              COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v36).n128_u64[0] =
                    LANES64_OF(
                        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                  COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v35).n128_i8[8] =
                    vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                *(int8x8_t*)&LANES128(v34).n128_i8[8] =
                    vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                *(int8x8_t*)&LANES128(v36).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                              COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                if (LANES128_OF(vmlsq_f32(vmulq_f32(v33, v34), v35, v36))
                        .n128_f32[1] < 0.0f) {
                  v31 = -v31;
                }
                v25 = v31 * 0x1.ca5dc00000000p+5f;
              }
            }
            result = UnitActor_81ab40(v4, v25, -0x1.0000000000000p+0f);
          }
        }
      }
    }
  }
  v5 = v2[217];
  if (v5 != 0) {
    LODWORD(v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v3) & 0xFFF;
    result = game_HasSkill(v5 + 1744, &v81);
    if ((result & 1) == 0) {
      v37 = *(_WORD*)(v5 + 492) == 0 && *(_BYTE*)(v5 + 496) == 0;
      if (!v37 ||
          (LODWORD(v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v3) & 0xFFF,
           ((result = game_HasSkill(v5 + 1744, &v81)) & 1) == 0)) {
        if ((v38 = v2[122]) != 0 && *(_QWORD*)(v38 + 392) != 0 ||
            (*(_BYTE*)(v2[120] + 11277LL) & 0x80) == 0 &&
                (result = v2[123]) != 0 &&
                ((result = (**(__int64 (***)(__int64))result)(result)) & 1) !=
                    0) {
          game_map_79ca50((void*)(&v79), v2 + 119);
          v39 = *(_DWORD*)(v5 + 592);
          v40 = 0.0f;
          v41 = (float)(unsigned int)(v39 - 1) * 2.5f;
          if (!(v39 > 0)) {
            v41 = 0.0f;
          }
          *(_QWORD*)&v42 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)(unsigned int)(*(char*)(v5 + 584) +
                                                            256) *
                                      5.0f) +
                              2.5f) +
                      -0x1.4000000000000p+10f) +
              v41);
          *((_QWORD*)&v42 + 1) = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)(unsigned int)(*(char*)(v5 + 585) +
                                                            256) *
                                      5.0f) +
                              2.5f) +
                      -0x1.4000000000000p+10f) +
              v41);
          v75 = COERCE_AS(float32x4_t, v42);
          v81 = v42;
          result = Unit_6c7fa0(v5, &v81);
          v43 = vsubq_f32(v79, v75);
          if (!((float)(vmuls_lane_f32(LANES128(v43).n128_f32[2], v43, 2) +
                        (float)(LANES128(v43).n128_f32[0] *
                                LANES128(v43).n128_f32[0])) <
                0x1.0000000000000p-4f)) {
            if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                                     COERCE_AS(float32x2_t, 1065353216LL)))
                    .n64_f32[0] > 0.0f) {
              LANES128(v44).n128_u64[0] = LANES128(v43).n128_u32[0];
              LANES128(v44).n128_u64[1] = LANES128(v43).n128_u32[2];
              v45 = vmulq_f32(v44, v44);
              LANES128(v45).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
                      .n64_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
                      .n64_f32[0] > 0.0f) {
                v80 = v44;
                v69 = LANES128(v43).n128_u32[2];
                v76 = LANES128(v43).n128_u32[0];
                v81 = GameData_1a83090;
                v46 = math_Vec3_Angle(&v81, &v80);
                LANES128(v47).n128_u64[0] = v76;
                LANES128(v47).n128_u64[1] = v69;
                LANES128(v48).n128_u64[0] =
                    LANES64_OF(
                        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                  COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                        .n64_u64[0];
                LANES128(v49).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                        .n64_u64[0];
                LANES128(v50).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v48).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                              COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v51).n128_u64[0] =
                    LANES64_OF(
                        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                  COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v50).n128_i8[8] =
                    vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                *(int8x8_t*)&LANES128(v49).n128_i8[8] =
                    vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                *(int8x8_t*)&LANES128(v51).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                              COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                if (LANES128_OF(vmlsq_f32(vmulq_f32(v48, v49), v50, v51))
                        .n128_f32[1] < 0.0f) {
                  v46 = -v46;
                }
                v40 = v46 * 0x1.ca5dc00000000p+5f;
              }
            }
            result = UnitActor_81ab40(v5, v40, -0x1.0000000000000p+0f);
          }
        }
      }
    }
  }
  v6 = v2[312];
  if (v6 != 0) {
    LODWORD(v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v3) & 0xFFF;
    result = game_HasSkill(v6 + 1744, &v81);
    if ((result & 1) == 0) {
      v52 = *(_WORD*)(v6 + 492) == 0 && *(_BYTE*)(v6 + 496) == 0;
      if (!v52 ||
          (LODWORD(v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v3) & 0xFFF,
           ((result = game_HasSkill(v6 + 1744, &v81)) & 1) == 0)) {
        if ((v53 = v2[27]) != 0 && *(_QWORD*)(v53 + 392) != 0 ||
            (*(_BYTE*)(v2[25] + 11277LL) & 0x80) == 0 &&
                (result = v2[28]) != 0 &&
                ((result = (**(__int64 (***)(__int64))result)(result)) & 1) !=
                    0) {
          game_map_79ca50((void*)(&v79), v2 + 24);
          v54 = *(_DWORD*)(v6 + 592);
          v55 = 0.0f;
          v56 = (float)(unsigned int)(v54 - 1) * 2.5f;
          if (!(v54 > 0)) {
            v56 = 0.0f;
          }
          *(_QWORD*)&v57 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)(unsigned int)(*(char*)(v6 + 584) +
                                                            256) *
                                      5.0f) +
                              2.5f) +
                      -0x1.4000000000000p+10f) +
              v56);
          *((_QWORD*)&v57 + 1) = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)(unsigned int)(*(char*)(v6 + 585) +
                                                            256) *
                                      5.0f) +
                              2.5f) +
                      -0x1.4000000000000p+10f) +
              v56);
          v77 = COERCE_AS(float32x4_t, v57);
          v81 = v57;
          result = Unit_6c7fa0(v6, &v81);
          v58 = vsubq_f32(v79, v77);
          if (!((float)(vmuls_lane_f32(LANES128(v58).n128_f32[2], v58, 2) +
                        (float)(LANES128(v58).n128_f32[0] *
                                LANES128(v58).n128_f32[0])) <
                0x1.0000000000000p-4f)) {
            if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                                     COERCE_AS(float32x2_t, 1065353216LL)))
                    .n64_f32[0] > 0.0f) {
              LANES128(v59).n128_u64[0] = LANES128(v58).n128_u32[0];
              LANES128(v59).n128_u64[1] = LANES128(v58).n128_u32[2];
              v60 = vmulq_f32(v59, v59);
              LANES128(v60).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v60, v60, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
                      .n64_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
                      .n64_f32[0] > 0.0f) {
                v80 = v59;
                v70 = LANES128(v58).n128_u32[2];
                v78 = LANES128(v58).n128_u32[0];
                v81 = GameData_1a83090;
                v61 = math_Vec3_Angle(&v81, &v80);
                LANES128(v62).n128_u64[0] = v78;
                LANES128(v62).n128_u64[1] = v70;
                LANES128(v63).n128_u64[0] =
                    LANES64_OF(
                        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                  COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                        .n64_u64[0];
                LANES128(v64).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                        .n64_u64[0];
                LANES128(v65).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v63).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                              COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v66).n128_u64[0] =
                    LANES64_OF(
                        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                  COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v65).n128_i8[8] =
                    vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                *(int8x8_t*)&LANES128(v64).n128_i8[8] =
                    vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                *(int8x8_t*)&LANES128(v66).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                              COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                if (LANES128_OF(vmlsq_f32(vmulq_f32(v63, v64), v65, v66))
                        .n128_f32[1] < 0.0f) {
                  v61 = -v61;
                }
                v55 = v61 * 0x1.ca5dc00000000p+5f;
              }
            }
            return UnitActor_81ab40(v6, v55, -0x1.0000000000000p+0f);
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
