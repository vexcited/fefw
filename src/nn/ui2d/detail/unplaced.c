#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5a88a0(__int64, __int64);
__int64 nn_util_BinaryBlockHeader_GetNextBlock(_QWORD);
__int64 nn_util_BinaryFileHeader_GetFirstBlock_1a0c2d0(_QWORD);
extern _UNKNOWN* GameData_2135448;
extern __int128 GameData_1a83090;
float nn_ui2d_5a3700(unsigned __int16*, float);
unsigned __int64* GameRoutine_5a3a90(unsigned __int64* result, __int64, int,
                                     int, int, int, int);
unsigned __int8 nn_ui2d_detail_5a7540_alt1(__int64 result, __int64 a2,
                                           float32x4_t* a3, float32x4_t* a4,
                                           float a5);
float32x4_t nn_ui2d_detail_5a8380_alt1(float a1, __int64 a2, float32x4_t* a3,
                                       unsigned __int16* a4);
__int64 nn_ui2d_detail_5ad040(__int64 a1, __int64 a2);
__int64 DrawInfo_576aa0(__int64, __int64);
__int64 GameRoutine_5a7ca0(__int64, _QWORD*, __int64, __int64, unsigned int);
__int64 GameRoutine_5fd940(__int64, __int64, __int64, float, float, float,
                           float);
__int64 GameRoutine_5fdcb0(__int64 result, int);
__int64 GameRoutine_5fdce0(__int64 result, unsigned int);
__int64 nn_ui2d_detail_5a86e0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4);
float nn_ui2d_5a3700_alt1(unsigned __int16*, long double);
__int64 nn_ui2d_detail_5a7540(__int64 result, __int64 a2, float32x4_t* a3,
                              float32x4_t* a4, float a5);
float32x4_t nn_ui2d_detail_5a8380(long double a1, __int64 a2, float32x4_t* a3,
                                  unsigned __int16* a4);

__int64 nn_ui2d_detail_5a7540(__int64 result, __int64 a2, float32x4_t* a3,
                              float32x4_t* a4, float a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  int i;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int* v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  __int64 v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int v39;
  unsigned __int64 v40;
  unsigned __int64 add;
  unsigned __int64 v42;
  float32x4_t v43;
  float32x4_t* v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float v50;
  int* v51;
  int v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64* v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64* v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  struct {
    unsigned __int64 v62[2];
    _QWORD v63[11];
  } v62_;

  if (*(int*)(result + 16) >= 1) {
    v62_.v63[7] = v7;
    v62_.v63[9] = v5;
    v62_.v63[10] = v6;
    v9 = 8;
    v13 = result;
    v14 = 0;
    do {
      result = (*(__int64 (**)(_QWORD, __int64, float))(
          **(_QWORD**)(*(_QWORD*)(v13 + 24) + v9) + 40LL))(
          *(_QWORD*)(*(_QWORD*)(v13 + 24) + v9), a2, a5);
      v15 = *(int*)(v13 + 16);
      ++v14;
      v9 += 40;
    } while (v14 < v15);
    if ((int)v15 >= 1) {
      v16 = 0;
      v17 = 0;
      v18 = 0;
      do {
        v19 = *(_QWORD*)(*(_QWORD*)(v13 + 24) + 40 * v16 + 8);
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 56LL))(v19);
        if ((_DWORD)result != 0) {
          for (i = result; i != 0; --i) {
            v17 += (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 72LL))(v19);
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 72LL))(v19);
            v18 += 3 * result;
          }
        }
        ++v16;
      } while (v16 < *(int*)(v13 + 16));
      if (v17 != 0) {
        v62_.v63[6] = 0;
        result = (__int64)GameRoutine_5a3a90(v62_.v62, a2, v17, v18, 0, 0, 0);
        v21 = v62_.v62[1];
        v22 = v62_.v63[1];
        *(_QWORD*)(v13 + 40) = 0;
        *(_QWORD*)(v13 + 48) = v21;
        LODWORD(v21) = *(_DWORD*)(v13 + 16);
        *(_QWORD*)(v13 + 56) = v22;
        if ((int)v21 >= 1) {
          v23 = 24;
          v24 = 0;
          v25 = 0;
          do {
            v30 = *(int**)(a2 + 200);
            v32 = *a4;
            v31 = a4[1];
            v33 = a4[2];
            v34 = *(_QWORD*)(v13 + 8);
            v36 = *a3;
            v35 = a3[1];
            v38 = a3[2];
            v37 = a3[3];
            v39 = *v30;
            v40 = (*(_QWORD*)(*(_QWORD*)(a2 + 184) + 104LL) + 63LL) &
                  -*(_QWORD*)(*(_QWORD*)(a2 + 184) + 104LL);
            if ((*v30 & 1) != 0) {
              add = atomic_fetch_add(*((atomic_ullong* volatile*)v30 + 8), v40);
              if ((*(_BYTE*)v30 & 1) == 0) {
                v42 = *((_QWORD*)v30 + 8);
              LABEL_20:
                if (*((_QWORD*)v30 + 9) + v42 <= *((_QWORD*)v30 + 3)) {
                  goto LABEL_22;
                }
              LABEL_21:
                add = 0;
                goto LABEL_22;
              }
              v56 = *((unsigned __int64**)v30 + 9);
              v57 = atomic_load(*((unsigned __int64**)v30 + 8));
              v58 = atomic_load(v56);
              if (v58 + v57 > *((_QWORD*)v30 + 3)) {
                goto LABEL_21;
              }
            }
            else {
              add = *((_QWORD*)v30 + 8);
              v42 = add + v40;
              *((_QWORD*)v30 + 8) = v42;
              if ((v39 & 2) == 0) {
                goto LABEL_20;
              }
            }
          LABEL_22:
            LANES128(v43).n128_u64[0] = 0;
            LANES128(v43).n128_u32[2] = 0;
            LANES128(v43).n128_u32[3] = LANES128(v36).n128_u32[3];
            v44 = (float32x4_t*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) + add);
            v45 = vaddq_f32(
                v43,
                vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v32, LANES128(v36).n128_f32[0]), v31,
                        COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]), 1),
                    v33, v36, 2));
            LANES128(v43).n128_u64[0] = 0;
            LANES128(v43).n128_u32[2] = 0;
            LANES128(v43).n128_u32[3] = LANES128(v35).n128_u32[3];
            v46 = vaddq_f32(
                v43,
                vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v32, LANES128(v35).n128_f32[0]), v31,
                        COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]), 1),
                    v33, v35, 2));
            LANES128(v43).n128_u64[0] = 0;
            LANES128(v43).n128_u32[2] = 0;
            LANES128(v43).n128_u32[3] = LANES128(v38).n128_u32[3];
            *v44 = v45;
            v44[1] = v46;
            v47 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v32, LANES128(v38).n128_f32[0]), v31,
                    COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]), 1),
                v33, v38, 2);
            v48 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v32, LANES128(v37).n128_f32[0]), v31,
                    COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]), 1),
                v33, v37, 2);
            LANES128(v49).n128_u64[0] = 0;
            LANES128(v49).n128_u32[2] = 0;
            LANES128(v49).n128_u32[3] = LANES128(v37).n128_u32[3];
            v44[2] = vaddq_f32(v43, v47);
            v44[3] = vaddq_f32(v49, v48);
            *(_QWORD*)(*(_QWORD*)(v13 + 24) + v24) = add;
            v50 = nn_ui2d_5a3700((unsigned __int16*)(v34 + v23), a5);
            v51 = *(int**)(a2 + 200);
            v52 = *v51;
            v53 = (*(_QWORD*)(*(_QWORD*)(a2 + 184) + 104LL) + 15LL) &
                  -*(_QWORD*)(*(_QWORD*)(a2 + 184) + 104LL);
            if ((*v51 & 1) == 0) {
              v54 = *((_QWORD*)v51 + 8);
              v55 = v54 + v53;
              *((_QWORD*)v51 + 8) = v55;
              if ((v52 & 2) != 0) {
                goto LABEL_14;
              }
              goto LABEL_27;
            }
            v54 = atomic_fetch_add(*((atomic_ullong* volatile*)v51 + 8), v53);
            if ((*(_BYTE*)v51 & 1) == 0) {
              v55 = *((_QWORD*)v51 + 8);
            LABEL_27:
              if (*((_QWORD*)v51 + 9) + v55 > *((_QWORD*)v51 + 3)) {
                goto LABEL_32;
              }
              goto LABEL_14;
            }
            v59 = *((unsigned __int64**)v51 + 9);
            v60 = atomic_load(*((unsigned __int64**)v51 + 8));
            v61 = atomic_load(v59);
            if (v61 + v60 > *((_QWORD*)v51 + 3)) {
            LABEL_32:
              v54 = 0;
            }
          LABEL_14:
            v26 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) + v54;
            *(_QWORD*)v26 = 0x3F8000003F800000LL;
            *(_DWORD*)(v26 + 8) = 1065353216;
            *(float*)(v26 + 12) = v50;
            *(_QWORD*)(*(_QWORD*)(v13 + 24) + v24 + 32) = v54;
            v27 = *(_DWORD*)(v13 + 44);
            v28 = *(_QWORD*)(*(_QWORD*)(v13 + 24) + v24 + 8);
            result =
                (*(__int64 (**)(__int64, unsigned __int64*, __int64, _QWORD*,
                                __int64, _QWORD))(*(_QWORD*)v28 + 104LL))(
                    v28, v62_.v62, v13 + 40, v62_.v63, v13 + 44, 0);
            ++v25;
            v23 += 56;
            *(_DWORD*)(*(_QWORD*)(v13 + 24) + v24 + 20) = v27;
            v29 = *(_QWORD*)(v13 + 24) + v24;
            v24 += 40;
            *(_DWORD*)(v29 + 24) = *(_DWORD*)(v13 + 44) - v27;
          } while (v25 < *(int*)(v13 + 16));
        }
      }
    }
  }
  return result;
}

float32x4_t nn_ui2d_detail_5a8380(long double a1, __int64 a2, float32x4_t* a3,
                                  unsigned __int16* a4)
{
  unsigned int v4;
  float v5;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  float* v11;
  float v12;
  float* v13;
  bool v14;
  float32x2_t v15;
  float32x2_t v16;
  float32x2_t v17;
  float32x2_t v18;
  float v19;
  float v20;
  long double v21;
  float v22;
  long double v23;
  float v24;
  unsigned int v25;
  unsigned int v26;
  unsigned __int32 v27;
  unsigned __int64 v28;
  __int64 v29;
  float* v30;
  float v31;
  float* v32;
  float32x2_t v34;
  float32x2_t v35;
  float32x2_t v36;
  float32x2_t v37;
  float v38;
  float32x4_t v39;
  float32x4_t v40;
  __int64 v41;
  float v42;
  float* v43;
  float v44;
  float v45;
  float32x4_t v46;
  float v47;
  float v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t result;

  v4 = a4[8];
  v5 = *(float*)&a1;
  v8 = v4 - 2;
  if (v4 >= 2) {
    v10 = v4 - 1;
    v11 = *((float**)a4 + 3);
    v12 = *v11;
    v13 = &v11[14 * v8];
    do {
      v14 = v5 < v12;
      v12 = v11[14];
      v14 = !v14 && v5 < v12;
      if (v14) {
        v13 = v11;
        goto LABEL_12;
      }
      v11 += 14;
      --v10;
    } while (v10 != 0);
    if (v13 == nullptr) {
      DWORD1(a1) = 0;
      v9 = 0;
      goto LABEL_17;
    }
  LABEL_12:
    LANES64(v15).n64_u64[0] = *(unsigned __int64*)(v13 + 5);
    LANES64(v17).n64_f32[0] = v13[7];
    v19 = (float)(v5 - *v13) / (float)(v12 - *v13);
    if (v19 < 0x0.0p+0f) {
      v19 = 0x0.0p+0f;
    }
    if (v19 > 0x1.0000000000000p+0f) {
      v19 = 0x1.0000000000000p+0f;
    }
    LANES64(v17).n64_f32[1] = v13[8];
    LANES64(v16).n64_f32[1] = LANES64(v15).n64_f32[1] + v13[10];
    LANES64(v18).n64_f32[1] = LANES64(v17).n64_f32[1] + v13[12];
    LANES64(v16).n64_f32[0] = LANES64(v15).n64_f32[0] + v13[9];
    LANES64(v18).n64_f32[0] = LANES64(v17).n64_f32[0] + v13[11];
    *(float32x2_t*)&a1 = vadd_f32(
        vmul_n_f32(v17, v19 * (float)(v19 * v19)),
        vadd_f32(
            vmul_n_f32(v18,
                       (float)(0x1.0000000000000p+0f - v19) *
                           (float)(v19 * (float)(v19 * 0x1.8000000000000p+1f))),
            vadd_f32(
                vmul_n_f32(v15,
                           (float)(0x1.0000000000000p+0f - v19) *
                               (float)((float)(0x1.0000000000000p+0f - v19) *
                                       (float)(0x1.0000000000000p+0f - v19))),
                vmul_n_f32(
                    v16, (float)(0x1.0000000000000p+0f - v19) *
                             (float)((float)(v19 * 0x1.8000000000000p+1f) *
                                     (float)(0x1.0000000000000p+0f - v19))))));
    v9 = *(_QWORD*)&a1;
  }
  else {
    v9 = *((_QWORD*)a4 + 3);
  }
LABEL_17:
  *(float*)&a1 = v5;
  v20 = nn_ui2d_5a3700_alt1(a4 + 16, a1);
  *(float*)&v21 = v5;
  v22 = nn_ui2d_5a3700_alt1(a4 + 24, v21);
  *(float*)&v23 = v5;
  v24 = nn_ui2d_5a3700_alt1(a4 + 40, v23);
  v25 = *a4;
  v26 = v25 - 2;
  if (v25 >= 2) {
    v29 = v25 - 1;
    v30 = *((float**)a4 + 1);
    v31 = *v30;
    v32 = &v30[14 * v26];
    do {
      v14 = v5 < v31;
      v31 = v30[14];
      if (!v14 && v5 < v31) {
        v32 = v30;
        goto LABEL_28;
      }
      v30 += 14;
      --v29;
    } while (v29 != 0);
    if (v32 == nullptr) {
      v27 = 0;
      LODWORD(v28) = 0;
      goto LABEL_33;
    }
  LABEL_28:
    LANES64(v34).n64_u64[0] = *(unsigned __int64*)(v32 + 5);
    LANES64(v36).n64_f32[0] = v32[7];
    v38 = (float)(v5 - *v32) / (float)(v31 - *v32);
    if (v38 < 0x0.0p+0f) {
      v38 = 0x0.0p+0f;
    }
    if (v38 > 0x1.0000000000000p+0f) {
      v38 = 0x1.0000000000000p+0f;
    }
    LANES64(v37).n64_f32[1] = v32[8] + v32[12];
    LANES64(v36).n64_f32[1] = v32[8];
    LANES64(v37).n64_f32[0] = LANES64(v36).n64_f32[0] + v32[11];
    LANES64(v35).n64_f32[1] = LANES64(v34).n64_f32[1] + v32[10];
    LANES64(v35).n64_f32[0] = LANES64(v34).n64_f32[0] + v32[9];
    v28 =
        LANES64_OF(
            vadd_f32(
                vmul_n_f32(v36, v38 * (float)(v38 * v38)),
                vadd_f32(
                    vmul_n_f32(
                        v37, (float)(0x1.0000000000000p+0f - v38) *
                                 (float)(v38 *
                                         (float)(v38 * 0x1.8000000000000p+1f))),
                    vadd_f32(
                        vmul_n_f32(
                            v34,
                            (float)(0x1.0000000000000p+0f - v38) *
                                (float)((float)(0x1.0000000000000p+0f - v38) *
                                        (float)(0x1.0000000000000p+0f - v38))),
                        vmul_n_f32(
                            v35,
                            (float)(0x1.0000000000000p+0f - v38) *
                                (float)((float)(v38 * 0x1.8000000000000p+1f) *
                                        (float)(0x1.0000000000000p+0f -
                                                v38)))))))
            .n64_u64[0];
    v27 = HIDWORD(v28);
  }
  else {
    LODWORD(v28) = *((_DWORD*)a4 + 2);
    v27 = *((_DWORD*)a4 + 3);
  }
LABEL_33:
  LANES128(v39).n128_u32[0] = 0;
  LANES128(v39).n128_u32[1] =
      COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  LANES128(v40).n128_u64[0] = COERCE_UNSIGNED_INT(0x1.0000000000000p+0f);
  LANES128(v39).n128_u32[2] = 0;
  LANES128(v40).n128_u32[2] = 0;
  LANES128(v39).n128_f32[3] = -*((float*)&v9 + 1);
  LANES128(v40).n128_f32[3] = -*(float*)&v9;
  v41 = (__int64)(float)(v24 * 0x1.6c16c20000000p+23f);
  v42 = vcvts_n_f32_u32(v41 & 0xFFFFFF, 0x18u);
  v43 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v41));
  v44 = v43[1] + (float)(v43[3] * v42);
  v45 = *v43 + (float)(v43[2] * v42);
  LANES128(v46).n128_u64[0] = 0;
  LANES128(v46).n128_u32[2] = 0;
  v47 = v20 * v45;
  v48 = -(float)(v22 * v44);
  LANES128(v46).n128_u32[3] = v28;
  v49 = vaddq_f32(vmlaq_n_f32(vmulq_n_f32(v40, v20 * v44), v39, v22 * v45),
                  COERCE_AS(float32x4_t, 0));
  LANES128(v50).n128_u64[0] = 0;
  LANES128(v50).n128_u32[2] = 0;
  LANES128(v50).n128_u32[3] = v27;
  result = vaddq_f32(v50, v49);
  *a3 = vaddq_f32(v46, vaddq_f32(vmlaq_n_f32(vmulq_n_f32(v40, v47), v39, v48),
                                 COERCE_AS(float32x4_t, 0)));
  a3[1] = result;
  a3[2] = vaddq_f32(vmlaq_f32(vmulq_f32(v40, COERCE_AS(float32x4_t, 0)),
                              COERCE_AS(float32x4_t, 0), v39),
                    COERCE_AS(float32x4_t, GameData_1a83090));
  return result;
}

__int64 nn_ui2d_detail_5a86e0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 i;
  __int64 v12;
  __int64 v13;
  int v14;
  bool v15;
  int v16;

  if (*(int*)(a1 + 80) >= 1) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 32LL))(a2, a4);
    v8 = a2[31];
    v9 = *(_QWORD*)(a1 + 64) + 64LL;
    GameRoutine_5fd940(a4, v9, 0, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f);
    a2[31] = v9;
    DrawInfo_576aa0((__int64)a2, a4);
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, a4);
    GameRoutine_5a7ca0(a1 + 64, a2, a3, a4, 2u);
    (*(void (**)(_QWORD*, __int64))(*a2 + 32LL))(a2, a4);
    GameRoutine_5fdcb0(a4, 128);
    GameRoutine_5fdce0(a4, 0x20u);
    a2[31] = v8;
    DrawInfo_576aa0((__int64)a2, a4);
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, a4);
    *(_QWORD*)(a3 + 8LL * (int)(*(_DWORD*)(a3 + 208))++ + 184) =
        *(_QWORD*)(a1 + 64) + 8LL;
  }
  result = (*(__int64 (**)(__int64, _QWORD*, __int64, __int64))(
      *(_QWORD*)a1 + 88LL))(a1, a2, a3, a4);
  for (i = *(_QWORD*)(a1 + 152); i != a1 + 144; i = *(_QWORD*)(v12 + 16)) {
    v13 = *(_QWORD*)(i - 8);
    v12 = i - 8;
    result = (*(__int64 (**)(__int64, _QWORD*, __int64, __int64))(v13 + 56))(
        v12, a2, a3, a4);
  }
  if (*(int*)(a1 + 80) >= 1) {
    v14 = *(_DWORD*)(a3 + 208);
    v15 = __OFSUB__(v14, 1);
    v16 = v14 - 1;
    if (v16 < 0 == v15) {
      *(_DWORD*)(a3 + 208) = v16;
    }
  }
  return result;
}

__int64 nn_ui2d_detail_5ad040(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  unsigned __int16* v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  unsigned __int16* v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  _DWORD* v21;
  __int64 v22;
  bool v23;
  int v24;
  __int64 v25;
  int* v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _DWORD* v31;
  __int64 v32;
  unsigned int* v33;
  _DWORD* v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int* v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 FirstBlockEv;
  _DWORD* NextBlockEv;
  int v44;
  _DWORD* v45;
  __int64 v46;
  unsigned int* v47;

  if (*(_DWORD*)(a2 + 16) != 0) {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    while (1) {
      v7 = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 8 * v4);
      v8 = *(_DWORD*)v7;
      if (*(int*)v7 > 3) {
        if (v8 == 4) {
          v5 +=
              GameRoutine_5a88a0(*(_QWORD*)(*(_QWORD*)(a2 + 24) + 8 * v4), v6) +
              256;
          goto LABEL_4;
        }
        if (v8 == 6) {
          v6 = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 8 * v4);
          goto LABEL_4;
        }
        if (v8 != 5) {
          goto LABEL_4;
        }
      LABEL_17:
        if (v6 == 0) {
          goto LABEL_51;
        }
        if ((*(_BYTE*)(v7 + 145) & 2) == 0) {
          goto LABEL_51;
        }
        v15 = (unsigned __int16*)(*(_QWORD*)(v6 + 160) +
                                  16LL * *(unsigned __int16*)(v7 + 146));
        v16 = *v15;
        if (*v15 == 0) {
          goto LABEL_51;
        }
        v17 = *((_QWORD*)v15 + 1);
        if (v16 >= 8) {
          v21 = (_DWORD*)(v17 + 228);
          v22 = 0;
          v19 = 0;
          do {
            v22 -= 8;
            if (*(v21 - 56) != 0) {
              ++v19;
            }
            if (*(v21 - 42) != 0) {
              ++v19;
            }
            if (*(v21 - 28) != 0) {
              ++v19;
            }
            if (*(v21 - 14) != 0) {
              ++v19;
            }
            if (*v21 != 0) {
              ++v19;
            }
            if (v21[14] != 0) {
              ++v19;
            }
            v23 = v21[28] == 0;
            v24 = v21[42];
            v21 += 112;
            if (!v23) {
              ++v19;
            }
            if (v24 != 0) {
              ++v19;
            }
          } while (-(__int64)((unsigned __int16)v16 & 0xFFF8) != v22);
          v18 = -v22;
          v20 = v16 & 7;
          if ((v16 & 7) != 0) {
            goto LABEL_43;
          }
        }
        else {
          v18 = 0;
          v19 = 0;
          v20 = v16 & 7;
          if ((v16 & 7) == 0) {
            goto LABEL_47;
          }
        LABEL_43:
          v25 = v20;
          v26 = (int*)(v17 + 56 * v18 + 4);
          do {
            v27 = *v26;
            v26 += 14;
            if (v27 != 0) {
              ++v19;
            }
            --v25;
          } while (v25 != 0);
        }
      LABEL_47:
        if (v19 != 0) {
          v28 = 136LL * v19 + 216;
          if (v16 >= 8) {
            v31 = (_DWORD*)(v17 + 228);
            v32 = 0;
            do {
              if (*(v31 - 56) != 0) {
                v28 += 24LL * (unsigned int)*(v31 - 55);
              }
              if (*(v31 - 42) != 0) {
                v28 += 24LL * (unsigned int)*(v31 - 41);
              }
              if (*(v31 - 28) != 0) {
                v28 += 24LL * (unsigned int)*(v31 - 27);
              }
              if (*(v31 - 14) != 0) {
                v28 += 24LL * (unsigned int)*(v31 - 13);
              }
              if (*v31 != 0) {
                v28 += 24LL * (unsigned int)v31[1];
              }
              if (v31[14] != 0) {
                v28 += 24LL * (unsigned int)v31[15];
              }
              if (v31[28] != 0) {
                v28 += 24LL * (unsigned int)v31[29];
              }
              if (v31[42] != 0) {
                v28 += 24LL * (unsigned int)v31[43];
              }
              v32 -= 8;
              v31 += 112;
            } while (-(__int64)((unsigned __int16)v16 & 0xFFF8) != v32);
            v29 = -v32;
            if ((v16 & 7) != 0) {
              goto LABEL_72;
            }
          }
          else {
            v29 = 0;
            if ((v16 & 7) == 0) {
              goto LABEL_76;
            }
          LABEL_72:
            v33 = (unsigned int*)(v17 + 56 * v29 + 8);
            do {
              if (*(v33 - 1) != 0) {
                v28 += 24LL * *v33;
              }
              v33 += 14;
              --v20;
            } while (v20 != 0);
          }
        LABEL_76:
          v30 = v28 + 64;
        }
        else {
        LABEL_51:
          v30 = 64;
        }
        v5 += 160 + v30;
        goto LABEL_4;
      }
      if ((unsigned int)(v8 - 1) < 3) {
        goto LABEL_17;
      }
      if (v8 != 0) {
        goto LABEL_4;
      }
      if (v6 == 0 || (*(_BYTE*)(v7 + 145) & 2) == 0 ||
          (v9 = (unsigned __int16*)(*(_QWORD*)(v6 + 160) +
                                    16LL * *(unsigned __int16*)(v7 + 146)),
           v10 = *v9, *v9 == 0)) {
      LABEL_104:
        v5 += 224;
        FirstBlockEv = nn_util_BinaryFileHeader_GetFirstBlock_1a0c2d0(a1);
        if (FirstBlockEv == 0) {
          goto LABEL_4;
        }
      LABEL_105:
        NextBlockEv = (_DWORD*)FirstBlockEv;
        v44 = 0;
        while (1) {
          if (*NextBlockEv == 1346586454) {
            if (v44 == *(_DWORD*)(v7 + 152)) {
              v5 += nn_ui2d_detail_5ad040(a1, (__int64)NextBlockEv);
              goto LABEL_4;
            }
            ++v44;
          }
          NextBlockEv =
              (_DWORD*)nn_util_BinaryBlockHeader_GetNextBlock(NextBlockEv);
          if (NextBlockEv == nullptr) {
            goto LABEL_4;
          }
        }
      }
      v11 = *((_QWORD*)v9 + 1);
      if (v10 < 8) {
        break;
      }
      v34 = (_DWORD*)(v11 + 228);
      v35 = 0;
      v13 = 0;
      do {
        v35 -= 8;
        if (*(v34 - 56) != 0) {
          ++v13;
        }
        if (*(v34 - 42) != 0) {
          ++v13;
        }
        if (*(v34 - 28) != 0) {
          ++v13;
        }
        if (*(v34 - 14) != 0) {
          ++v13;
        }
        if (*v34 != 0) {
          ++v13;
        }
        if (v34[14] != 0) {
          ++v13;
        }
        v23 = v34[28] == 0;
        v36 = v34[42];
        v34 += 112;
        if (!v23) {
          ++v13;
        }
        if (v36 != 0) {
          ++v13;
        }
      } while (-(__int64)((unsigned __int16)v10 & 0xFFF8) != v35);
      v12 = -v35;
      v14 = v10 & 7;
      if ((v10 & 7) != 0) {
        goto LABEL_96;
      }
    LABEL_100:
      if (v13 == 0) {
        goto LABEL_104;
      }
      v40 = 136LL * v13 + 216;
      if (v10 < 8) {
        v41 = 0;
        if ((v10 & 7) == 0) {
          goto LABEL_134;
        }
      LABEL_130:
        v47 = (unsigned int*)(v11 + 56 * v41 + 8);
        do {
          if (*(v47 - 1) != 0) {
            v40 += 24LL * *v47;
          }
          v47 += 14;
          --v14;
        } while (v14 != 0);
        goto LABEL_134;
      }
      v45 = (_DWORD*)(v11 + 228);
      v46 = 0;
      do {
        if (*(v45 - 56) != 0) {
          v40 += 24LL * (unsigned int)*(v45 - 55);
        }
        if (*(v45 - 42) != 0) {
          v40 += 24LL * (unsigned int)*(v45 - 41);
        }
        if (*(v45 - 28) != 0) {
          v40 += 24LL * (unsigned int)*(v45 - 27);
        }
        if (*(v45 - 14) != 0) {
          v40 += 24LL * (unsigned int)*(v45 - 13);
        }
        if (*v45 != 0) {
          v40 += 24LL * (unsigned int)v45[1];
        }
        if (v45[14] != 0) {
          v40 += 24LL * (unsigned int)v45[15];
        }
        if (v45[28] != 0) {
          v40 += 24LL * (unsigned int)v45[29];
        }
        if (v45[42] != 0) {
          v40 += 24LL * (unsigned int)v45[43];
        }
        v46 -= 8;
        v45 += 112;
      } while (-(__int64)((unsigned __int16)v10 & 0xFFF8) != v46);
      v41 = -v46;
      if ((v10 & 7) != 0) {
        goto LABEL_130;
      }
    LABEL_134:
      v5 += 160 + v40 + 64;
      FirstBlockEv = nn_util_BinaryFileHeader_GetFirstBlock_1a0c2d0(a1);
      if (FirstBlockEv != 0) {
        goto LABEL_105;
      }
    LABEL_4:
      if (++v4 >= (unsigned __int64)*(unsigned int*)(a2 + 16)) {
        return v5;
      }
    }
    v12 = 0;
    v13 = 0;
    v14 = v10 & 7;
    if ((v10 & 7) == 0) {
      goto LABEL_100;
    }
  LABEL_96:
    v37 = v14;
    v38 = (int*)(v11 + 56 * v12 + 4);
    do {
      v39 = *v38;
      v38 += 14;
      if (v39 != 0) {
        ++v13;
      }
      --v37;
    } while (v37 != 0);
    goto LABEL_100;
  }
  return 0;
}

#pragma GCC visibility pop
