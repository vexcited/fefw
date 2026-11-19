#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c958;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64* GameData_212f878;
extern __int64 GameData_212d020[5];
float GameRoutine_1a0a550(float, float);
float GameRoutine_1a0a6a0(float, float);
float llvm_libcxx_21_libcxx_include___functional_feb630(__int64 a1);

float llvm_libcxx_21_libcxx_include___functional_feb630(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  _OWORD* v4;
  __int128 v5;
  float v6;
  float v7;
  float v8;
  bool v9;
  float v10;
  float v11;
  __int128 v12;
  float32x2_t v13;
  float v14;
  float v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  __int128 v34;
  float32x2_t v35;
  float result;

  v2 = GameData_212c958;
  v3 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v3;
  v4 = (_OWORD*)(a1 + 80);
  v5 = *(_OWORD*)(a1 + 176);
  *(_OWORD*)(a1 + 16) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 32) = GameData_1a83610;
  *(_OWORD*)(a1 + 48) = GameData_1a83090;
  *(_OWORD*)(a1 + 64) = v5;
  v6 = *(float*)(a1 + 192);
  if (v6 < 0x1.0000000000000p-2f) {
    v7 = v6 * 0x1.0000000000000p+2f;
    v8 = 0x1.0000000000000p+0f;
    if (v7 <= 0x1.0000000000000p+0f) {
      v8 = v7;
    }
    v9 = v7 < 0x0.0p+0f;
    v10 = 0x0.0p+0f;
    if (!v9) {
      v10 = v8;
    }
    v11 = GameRoutine_1a0a550(v10, 0x1.0000000000000p-1f);
    *(_QWORD*)&v12 = *v2;
    LANES64(v13).n64_u64[0] = v2[1];
    LANES64(v13).n64_u32[1] = vmuls_lane_f32(v11, v13, 1);
    *((float32x2_t*)&v12 + 1) = v13;
    *v4 = v12;
  }
  v14 = 0x0.0p+0f;
  v15 = 0x0.0p+0f;
  v16 = *GameData_212f878;
  v17 = *(float*)(*GameData_212f878 + 1492);
  if ((float)(v17 + v17) != 0x0.0p+0f) {
    v18 = GameRoutine_1a0a6a0(*(float*)(*(_QWORD*)GameData_212d020[0] + 160LL),
                              v17 + v17);
    if (v18 >= 0x0.0p+0f) {
      v15 = v18 + 0x0.0p+0f;
    }
    else {
      v15 = (float)(v17 + v17) + (float)(v18 + 0x0.0p+0f);
    }
  }
  v19 = GameRoutine_1a0a6a0(v15, v17 + v17);
  v20 = GameRoutine_1a0a6a0(v15, v17);
  if (v17 != 0x0.0p+0f) {
    v21 = 0x1.0000000000000p+0f;
    if (v19 >= v17) {
      v20 = v17 - v20;
    }
    v22 = (float)(v20 + 0x0.0p+0f) / v17;
    if (v22 <= 0x1.0000000000000p+0f) {
      v21 = v22;
    }
    v23 = v21 * 0x1.921fb60000000p+1f;
    if (v22 >= 0x0.0p+0f) {
      v14 = v23;
    }
    else {
      v14 = 0x0.0p+0f;
    }
  }
  v24 = v14 +
        (float)(roundf(v14 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v24 <= 0x1.921fb60000000p+0f) {
    v26 = 0x1.0000000000000p+0f;
    if (v24 >= -0x1.921fb60000000p+0f) {
      goto LABEL_24;
    }
    v25 = -0x1.921fb60000000p+1f;
  }
  else {
    v25 = 0x1.921fb60000000p+1f;
  }
  v24 = v25 - v24;
  v26 = -0x1.0000000000000p+0f;
LABEL_24:
  v27 =
      v26 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
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
                                                                                            (float)(v24 *
                                                                                                    v24))) *
                                                                            (float)(v24 *
                                                                                    v24))) *
                                                         (float)(v24 * v24))) *
                                         (float)(v24 * v24))) *
                      (float)(v24 * v24)) +
              0x1.0000000000000p+0f);
  v28 = fabsf(v27) * 0x1.0000000000000p-1f;
  if (v27 >= 0x0.0p+0f) {
    v29 = -0x1.0000000000000p+0f;
  }
  else {
    v29 = 0x1.0000000000000p+0f;
  }
  v30 = (float)(v28 * v29) + 0x1.0000000000000p-1f;
  v31 = *(float*)(v16 + 1496);
  v32 = v31 +
        (float)((float)(0x1.0000000000000p+0f - v31) * 0x1.0000000000000p-1f);
  if (((v31 < 0x1.0000000000000p+0f) & *(_BYTE*)(a1 + 244)) == 0) {
    v32 = *(float*)(v16 + 1496);
  }
  v33 = (float)(fminf(fmaxf(v30, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                (float)(v32 + -0x1.0000000000000p+0f)) +
        0x1.0000000000000p+0f;
  *(_QWORD*)&v34 = *(_QWORD*)(a1 + 80);
  LANES64(v35).n64_u64[0] = *(unsigned __int64*)(a1 + 88);
  result = vmuls_lane_f32(v33, v35, 1);
  LANES64(v35).n64_f32[1] = result;
  *((float32x2_t*)&v34 + 1) = v35;
  *(_OWORD*)(a1 + 80) = v34;
  return result;
}

#pragma GCC visibility pop
