#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_1f88920;
__int64 physx_source_geomutils_src_40a710(__int64 a1, __int64 a2);
__int64* physx_Gu_AABBTreeUpdateMap_invalidate(__int64* result, unsigned int,
                                               unsigned int, __int64);
__int64 PxGetBroadcastAllocator(_BYTE*);
__int64 physx_Gu_AABBTreeBounds_init(__int64*, int, __int64);
__int64 physx_Gu_AABBTreeUpdateMap_initMap(__int64 result, __int64, __int64);
__int64 physx_Gu_AABBTree_AABBTree(__int64 result);
__int64 physx_Gu_AABBTree_Destroy_AABBTree(__int64);
__int64 physx_Gu_AABBTree_progressiveBuild(__int64, unsigned int*, __int64*,
                                           _DWORD*, int, unsigned int);
__int64 physx_Gu_NodeAllocator_release(__int64);
void physx_Gu_BVHCoreData_fullRefit(__int64, __int64);
bool physx_source_geomutils_src_469330(__int64 a1, float* a2, __int64 a3,
                                       float32x4_t* a4, float* a5, __int64 a6,
                                       __int64 a7);
bool physx_source_geomutils_src_469a30(__int64 a1, __int64 a2, float* a3,
                                       float* a4, float* a5, __int64 a6,
                                       __int64 a7);
bool physx_source_geomutils_src_525b00(__int64 a1, char a2);
__int64 physx_source_geomutils_src_525f30(__int64 a1);
__attribute__((swiftcall)) void physx_Gu_ConvexShape_support(PSEUDO_X8, float*,
                                                             float*);
__int64 physx_Gu_ConvexShape_contactFace(float*, float*, float*, float*,
                                         __int64);
__int64 physx_Gu_makeConvexShape(__int64, __int64, __int64);
bool physx_source_geomutils_src_4685c0(__int64 a1, __int64 a2, float* a3,
                                       __int64 a4, float* a5, __int64 a6,
                                       __int64 a7);

__int64 physx_source_geomutils_src_40a710(__int64 a1, __int64 a2)
{
  return ((__int64 (*)(__int64, __int64)) *
          (&GameData_1f88920 + *(int*)(a1 + 8)))(a2, a1 + 12);
}

bool physx_source_geomutils_src_4685c0(__int64 a1, __int64 a2, float* a3,
                                       __int64 a4, float* a5, __int64 a6,
                                       __int64 a7)
{
  float v7;
  float v8;
  float v9;
  float v10;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  unsigned int v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  __int64 v29;
  _BOOL8 result;
  __int64 v31;
  float* v32;
  float* v33;
  float* v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float* v43;
  float v44;
  float v45;
  float* v46;
  float v47;
  _DWORD* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  int* v52;
  _BYTE* v53;
  int v54;
  __int64 v55;
  __int64 v56;
  int v57;
  int v58;
  __int64 v59;
  __int64 v60;
  int v61;
  int v62;
  float* v63;
  __int64 v64;
  __int64 v65;
  int v66;
  float v67;
  float v68;
  float v69;
  float v70;
  _BYTE v71[12];
  struct {
    float v72[3];
    _BYTE v73[36];
  } v72_;
  struct {
    float v74;
    float v75;
    float v76;
    float v77[19];
  } v74_;
  struct {
    _DWORD v78[3];
    int v79;
  } v78_;
  struct {
    float v80[3];
    float v81[2];
    float v82;
    char gap240_[88];
    float v83;
    float v84;
  } v80_;

  v8 = *a3;
  v7 = a3[1];
  v10 = a3[2];
  v9 = a3[3];
  v13 = v9 + v9;
  v14 = (float)(v9 * (float)(v9 + v9)) + -0x1.0000000000000p+0f;
  v15 = (float)(v8 + v8) * v10;
  v80_.v83 = (float)(v8 + v8) * v7;
  v16 = v80_.v83 + (float)(v10 * (float)(v9 + v9));
  v17 = a3[5];
  v69 = v16;
  v80_.v84 = a3[4];
  v67 = a3[6];
  v68 = v17 * v16;
  physx_Gu_makeConvexShape(a2, a4, (__int64)v74_.v77);
  v18 = v14 + (float)(v8 * (float)(v8 + v8));
  v19 = -v7;
  v20 = v15 - (float)(v7 * v13);
  v74_.v76 = -(float)(v15 + (float)(v19 * v13));
  v21 = (float)(v68 + (float)(v80_.v84 * v18)) + (float)(v67 * v20);
  v80_.v84 = *a5;
  v22 = v21;
  v74_.v74 = -v18;
  v74_.v75 = -(float)(v80_.v83 + (float)(v10 * v13));
  physx_Gu_ConvexShape_support((void*)(v80_.v81), v74_.v77, &v74_.v74);
  v23 = (float)((float)((float)(PSEUDO_UNFUSED(v69 * v80_.v81[1])) +
                        (float)(v80_.v81[0] * v18)) +
                (float)(v80_.v82 * v20)) -
        v22;
  if (v23 >= v80_.v84) {
    return *(_DWORD*)(a7 + 20480) != 0;
  }
  v24 = physx_Gu_ConvexShape_contactFace(v74_.v77, &v74_.v74, v80_.v81,
                                         v80_.v80, (__int64)v78_.v78);
  v25 = v74_.v75;
  if (v24 == 0) {
    v26 = v74_.v74;
    v27 = v74_.v76;
    v70 = v23;
    v28 = 1;
    v72_.v72[0] = (float)(PSEUDO_UNFUSED((float)(v23 * v74_.v74) *
                                         0x1.0000000000000p-1f)) +
                  v80_.v81[0];
    v72_.v72[1] = (float)(PSEUDO_UNFUSED((float)(v23 * v74_.v75) *
                                         0x1.0000000000000p-1f)) +
                  v80_.v81[1];
    v72_.v72[2] = (float)(PSEUDO_UNFUSED((float)(v23 * v74_.v76) *
                                         0x1.0000000000000p-1f)) +
                  v80_.v82;
    goto LABEL_11;
  }
  v26 = v74_.v74;
  v27 = v74_.v76;
  v28 = v24;
  if (v24 == 1) {
    v29 = 0;
  LABEL_10:
    v43 = (float*)&v78_.v78[3 * v29];
    v44 = v43[1];
    v45 = v43[2];
    v46 = &v72_.v72[3 * v29];
    v47 = (float)((float)((float)(PSEUDO_UNFUSED(v69 * v44)) +
                          (float)(*v43 * v18)) +
                  (float)(v45 * v20)) -
          v22;
    *v46 = *v43 +
           (float)(PSEUDO_UNFUSED((float)(v26 * v47) * 0x1.0000000000000p-1f));
    v46[1] =
        v44 +
        (float)(PSEUDO_UNFUSED((float)(v25 * v47) * 0x1.0000000000000p-1f));
    v46[2] =
        v45 +
        (float)(PSEUDO_UNFUSED((float)(v47 * v27) * 0x1.0000000000000p-1f));
    *(float*)&v71[4 * v29 - 4] = v47;
    goto LABEL_11;
  }
  v31 = 0;
  v32 = (float*)&v78_.v79;
  v33 = (float*)v71;
  v34 = (float*)v72_.v73;
  do {
    v35 = *(v32 - 3);
    v36 = *(v32 - 2);
    v37 = *(v32 - 1);
    v38 = *v32;
    v31 -= 2;
    v39 = (float)((float)((float)(PSEUDO_UNFUSED(v69 * v36)) +
                          (float)(v35 * v18)) +
                  (float)(v37 * v20)) -
          v22;
    v40 = v32[1];
    v41 = v32[2];
    v32 += 6;
    *(v34 - 3) =
        v35 +
        (float)(PSEUDO_UNFUSED((float)(v26 * v39) * 0x1.0000000000000p-1f));
    *(v34 - 2) =
        v36 +
        (float)(PSEUDO_UNFUSED((float)(v25 * v39) * 0x1.0000000000000p-1f));
    v42 = (float)((float)((float)(PSEUDO_UNFUSED(v69 * v40)) +
                          (float)(v38 * v18)) +
                  (float)(v41 * v20)) -
          v22;
    *(v33 - 1) = v39;
    *v33 = v42;
    v33 += 2;
    *(v34 - 1) =
        v37 +
        (float)(PSEUDO_UNFUSED((float)(v39 * v27) * 0x1.0000000000000p-1f));
    *v34 = v38 +
           (float)(PSEUDO_UNFUSED((float)(v26 * v42) * 0x1.0000000000000p-1f));
    v34[1] =
        v40 +
        (float)(PSEUDO_UNFUSED((float)(v25 * v42) * 0x1.0000000000000p-1f));
    v34[2] =
        v41 +
        (float)(PSEUDO_UNFUSED((float)(v42 * v27) * 0x1.0000000000000p-1f));
    v34 += 6;
  } while (-(__int64)(v24 & 0xFFFFFFFE) != v31);
  v29 = -v31;
  if ((v24 & 1) != 0) {
    goto LABEL_10;
  }
LABEL_11:
  v48 = (_DWORD*)(a7 + 20480);
  v49 = *(unsigned int*)(a7 + 20480);
  if (v28 == 1) {
    v50 = 0;
    result = true;
  LABEL_19:
    if (v49 <= 0xFF) {
      v62 = *(_DWORD*)&v71[4 * v50 - 4];
      v63 = &v72_.v72[3 * v50];
      *(_DWORD*)v48 = v49 + 1;
      v64 = a7 + 80 * v49;
      v65 = *(_QWORD*)v63;
      *(float*)v64 = v26;
      *(float*)(v64 + 4) = v25;
      v66 = *((_DWORD*)v63 + 2);
      *(float*)(v64 + 8) = v27;
      *(_DWORD*)(v64 + 12) = v62;
      *(_DWORD*)(v64 + 52) = -1;
      *(_QWORD*)(v64 + 16) = v65;
      *(_DWORD*)(v64 + 24) = v66;
    }
    return result;
  }
  v51 = 0;
  v52 = (int*)v71;
  v53 = v72_.v73;
  do {
    if (v49 <= 0xFF) {
      v54 = *((_DWORD*)v53 - 1);
      v55 = a7 + 80 * v49;
      v56 = *(_QWORD*)(v53 - 12);
      *(_DWORD*)v48 = ++v49;
      *(float*)v55 = v26;
      *(float*)(v55 + 4) = v25;
      *(_DWORD*)(v55 + 52) = -1;
      *(_QWORD*)(v55 + 16) = v56;
      *(_DWORD*)(v55 + 24) = v54;
      v57 = *(v52 - 1);
      *(float*)(v55 + 8) = v27;
      *(_DWORD*)(v55 + 12) = v57;
      if (v49 <= 0xFF) {
        v58 = *((_DWORD*)v53 + 2);
        v59 = a7 + 80 * v49;
        v60 = *(_QWORD*)v53;
        *(_DWORD*)v48 = ++v49;
        *(float*)v59 = v26;
        *(float*)(v59 + 4) = v25;
        *(_DWORD*)(v59 + 52) = -1;
        *(_QWORD*)(v59 + 16) = v60;
        *(_DWORD*)(v59 + 24) = v58;
        v61 = *v52;
        *(float*)(v59 + 8) = v27;
        *(_DWORD*)(v59 + 12) = v61;
      }
    }
    v51 -= 2;
    v52 += 2;
    v53 += 24;
  } while (-(__int64)((unsigned int)v28 & 0xFFFFFFFE) != v51);
  v50 = -v51;
  result = true;
  if ((v28 & 1) != 0) {
    goto LABEL_19;
  }
  return result;
}

bool physx_source_geomutils_src_469330(__int64 a1, float* a2, __int64 a3,
                                       float32x4_t* a4, float* a5, __int64 a6,
                                       __int64 a7)
{
  int32x2_t v7;
  int32x2_t v8;
  int32x2_t v9;
  int32x2_t v10;
  float v11;
  float v12;
  float32x4_t v13;
  float32x2_t v14;
  float v15;
  float32x2_t v16;
  float32x2_t v17;
  float32x2_t v18;
  float v19;
  float v20;
  float32x2_t v21;
  float32x2_t v22;
  float32x2_t v23;
  float32x2_t v24;
  float32x2_t v25;
  float32x2_t v26;
  float32x2_t v27;
  float32x2_t v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float32x2_t v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float32x2_t v48;
  float v49;
  float v50;
  float32x2_t v51;
  float32x2_t v52;
  float32x2_t v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  unsigned int v63;
  __int64 v64;
  float v65;
  unsigned int v66;
  __int64 v67;
  float v68;
  unsigned int v69;
  __int64 v70;
  float v71;
  unsigned int v72;
  __int64 v73;
  float v74;
  unsigned int v75;
  __int64 v76;
  float v77;
  unsigned int v78;
  __int64 v79;
  float v80;
  unsigned int v81;
  __int64 v82;
  float v84;
  unsigned int v85;
  __int64 v86;
  struct {
    float v87;
    float v88;
    float v89;
    float v90;
    float v91;
    float v92;
    float v93;
    float v94;
    char gap32_[8];
    float* v95;
  } v87_;

  PSEUDO_LOW_LANE64(v7, n64_u32, *(_DWORD*)a3);
  v11 = *(float*)(a3 + 4);
  v12 = *(float*)(a3 + 8);
  PSEUDO_LOW_LANE64(v8, n64_u32, *(_DWORD*)(a3 + 12));
  v13 = vaddq_f32(*a4, *a4);
  LANES64(v14).n64_u64[0] = LANES64_OF(vdup_laneq_s32(*a4, 3)).n64_u64[0];
  v15 = -(
      float)((float)((float)(LANES64(v8).n64_f32[0] *
                             (float)(LANES64(v8).n64_f32[0] +
                                     LANES64(v8).n64_f32[0])) +
                     -0x1.0000000000000p+0f) +
             (float)(LANES64(v7).n64_f32[0] *
                     (float)(LANES64(v7).n64_f32[0] + LANES64(v7).n64_f32[0])));
  LANES64(v16).n64_u64[0] =
      LANES64_OF(vmul_n_f32(v14, LANES128(v13).n128_f32[0])).n64_u64[0];
  LANES64(v17).n64_u64[0] =
      LANES64_OF(vmul_lane_f32(
                     v14, COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]), 1))
          .n64_u64[0];
  LANES64(v18).n64_u64[0] = LANES64_OF(vmul_laneq_f32(v14, v13, 2)).n64_u64[0];
  v19 = -(float)((float)(PSEUDO_UNFUSED(
                     (float)(LANES64(v7).n64_f32[0] + LANES64(v7).n64_f32[0]) *
                     v11)) +
                 (float)(v12 * (float)(LANES64(v8).n64_f32[0] +
                                       LANES64(v8).n64_f32[0])));
  v20 = -(float)((float)(PSEUDO_UNFUSED(
                     (float)(LANES64(v7).n64_f32[0] + LANES64(v7).n64_f32[0]) *
                     v12)) +
                 (float)((float)-v11 * (float)(LANES64(v8).n64_f32[0] +
                                               LANES64(v8).n64_f32[0])));
  LANES64(v21).n64_u64[0] =
      LANES64_OF(
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(*(a4)).n128_u64[0]), 1))
          .n64_u64[0];
  LANES64(v22).n64_u64[0] = LANES64_OF(vdup_laneq_s32(*a4, 2)).n64_u64[0];
  LANES64(v23).n64_u64[0] =
      LANES64_OF(vmul_lane_f32(
                     v21, COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]), 1))
          .n64_u64[0];
  LANES64(v24).n64_u64[0] =
      LANES64_OF(vmul_n_f32(v21, LANES128(v13).n128_f32[0])).n64_u64[0];
  LANES64(v25).n64_u64[0] =
      LANES64_OF(
          vdup_lane_s32(
              vmul_f32(COERCE_AS(float32x2_t, LANES128(*(a4)).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])),
              0))
          .n64_u64[0];
  LANES64(v26).n64_u64[0] = LANES64_OF(vmul_laneq_f32(v22, v13, 2)).n64_u64[0];
  LANES64(v27).n64_u64[0] =
      LANES64_OF(vmul_n_f32(v22, LANES128(v13).n128_f32[0])).n64_u64[0];
  LANES64(v28).n64_u64[0] =
      LANES64_OF(vmul_lane_f32(
                     v22, COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]), 1))
          .n64_u64[0];
  LODWORD(v29) = LANES64_OF(vsub_f32(v24, v18)).n64_u32[1];
  {
    __typeof__(v30) z_ = (__typeof__(v30)){0};
    LODWORD(z_) = LANES64_OF(vadd_f32(v28, v16)).n64_u32[0];
    v30 = z_;
  }
  {
    __typeof__(v31) z_ = (__typeof__(v31)){0};
    LODWORD(z_) = LANES64_OF(vsub_f32(v27, v17)).n64_u32[0];
    v31 = z_;
  }
  LODWORD(v32) = LANES64_OF(vadd_f32(v27, v17)).n64_u32[1];
  LANES64(v33).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, 0x3F8000003F800000LL), v25))
          .n64_u64[0];
  {
    __typeof__(v34) z_ = (__typeof__(v34)){0};
    LODWORD(z_) = LANES64_OF(vadd_f32(v24, v18)).n64_u32[0];
    v34 = z_;
  }
  {
    __typeof__(v35) z_ = (__typeof__(v35)){0};
    LODWORD(z_) = LANES64_OF(vsub_f32(v28, v16)).n64_u32[0];
    v35 = z_;
  }
  v36 = (float)((float)(vmuls_lane_f32(-*(float*)a3, *a4, 3) +
                        (float)(LANES64(v8).n64_f32[0] * COERCE_FLOAT(*a4))) -
                (float)(v11 * COERCE_FLOAT(LANES128(*(a4)).n128_u64[1]))) +
        (float)(v12 * COERCE_FLOAT(
                          DWORDn(LANES128(*(a4)).n128_u64[0],
                                 sizeof(LANES128(*(a4)).n128_u64[0]) / 4 - 1)));
  PSEUDO_LOW_LANE64(
      v10, n64_f32,
      (float)((float)(vmuls_lane_f32(-v12, *a4, 3) +
                      (float)(LANES64(v8).n64_f32[0] *
                              COERCE_FLOAT(LANES128(*(a4)).n128_u64[1]))) -
              (float)(*(float*)a3 *
                      COERCE_FLOAT(DWORDn(
                          LANES128(*(a4)).n128_u64[0],
                          sizeof(LANES128(*(a4)).n128_u64[0]) / 4 - 1)))) +
          (float)(COERCE_FLOAT(*a4) * v11));
  {
    __typeof__(v37) z_ = (__typeof__(v37)){0};
    LODWORD(z_) = LANES64_OF(vsub_f32(v33, v26)).n64_u32[0];
    v37 = z_;
  }
  {
    __typeof__(v38) z_ = (__typeof__(v38)){0};
    LODWORD(z_) = LANES64_OF(vsub_f32(v33, v23)).n64_u32[0];
    v38 = z_;
  }
  PSEUDO_LOW_LANE64(
      v9, n64_f32,
      (float)((float)(vmuls_lane_f32(-v11, *a4, 3) +
                      (float)(LANES64(v8).n64_f32[0] *
                              COERCE_FLOAT(DWORDn(
                                  LANES128(*(a4)).n128_u64[0],
                                  sizeof(LANES128(*(a4)).n128_u64[0]) / 4 -
                                      1)))) -
              (float)(COERCE_FLOAT(*a4) * v12)) +
          (float)(*(float*)a3 * COERCE_FLOAT(LANES128(*(a4)).n128_u64[1])));
  v39 = (float)(0x1.0000000000000p+0f - LANES64(v23).n64_f32[1]) -
        LANES64(v26).n64_f32[1];
  v40 = LANES128(a4[1]).n128_f32[0];
  v41 = LANES128(a4[1]).n128_f32[1];
  v42 = LANES128(a4[1]).n128_f32[2];
  v43 = (float)(v41 - *(float*)(a3 + 20)) + (float)(v41 - *(float*)(a3 + 20));
  v44 = (float)(v42 - *(float*)(a3 + 24)) + (float)(v42 - *(float*)(a3 + 24));
  v45 = (float)(v40 - *(float*)(a3 + 16)) + (float)(v40 - *(float*)(a3 + 16));
  v46 = (float)((float)(PSEUDO_UNFUSED(
                    LANES64(v8).n64_f32[0] *
                    (float)((float)(PSEUDO_UNFUSED(v12 * v43)) -
                            (float)(v11 * v44)))) +
                (float)(v45 * (float)((float)(LANES64(v8).n64_f32[0] *
                                              LANES64(v8).n64_f32[0]) +
                                      -0x1.0000000000000p-1f))) -
        (float)(*(float*)a3 *
                (float)((float)((float)-(float)(PSEUDO_UNFUSED(v11 * v43)) -
                                (float)(*(float*)a3 * v45)) -
                        (float)(v12 * v44)));
  PSEUDO_LOW_LANE64(v7, n64_f32,
                    (float)(PSEUDO_UNFUSED(*(float*)a3 * COERCE_FLOAT(*a4))) +
                        (float)(LANES64(v8).n64_f32[0] *
                                COERCE_FLOAT(DWORDn(
                                    *(unsigned __int128*)a4,
                                    sizeof(*(unsigned __int128*)a4) / 4 - 1))));
  PSEUDO_LOW_LANE64(v8, n64_f32, v36 + v36);
  LODWORD(v47) =
      LANES64_OF(vmul_n_f32(vdup_lane_s32(v9, 0),
                            LANES64(v9).n64_f32[0] + LANES64(v9).n64_f32[0]))
          .n64_u32[1];
  PSEUDO_LOW_LANE64(
      v7, n64_f32,
      (float)(LANES64(v7).n64_f32[0] +
              (float)(v11 *
                      COERCE_FLOAT(DWORDn(
                          LANES128(*(a4)).n128_u64[0],
                          sizeof(LANES128(*(a4)).n128_u64[0]) / 4 - 1)))) +
          (float)(v12 * COERCE_FLOAT(LANES128(*(a4)).n128_u64[1])));
  LANES64(v48).n64_u64[0] = LANES64_OF(vdup_lane_s32(v10, 0)).n64_u64[0];
  v49 = LANES64(v10).n64_f32[0] + LANES64(v10).n64_f32[0];
  LODWORD(v50) = LANES64_OF(vmul_n_f32(v48, v49)).n64_u32[1];
  LANES64(v51).n64_u64[0] = LANES64_OF(vdup_lane_s32(v7, 0)).n64_u64[0];
  LANES64(v52).n64_u64[0] =
      LANES64_OF(
          vsub_f32(vmul_n_f32(vdup_lane_s32(v8, 0), LANES64(v9).n64_f32[0]),
                   vmul_n_f32(v51, v49)))
          .n64_u64[0];
  LANES64(v53).n64_u64[0] =
      LANES64_OF(vadd_f32(vmul_n_f32(v48, v36 + v36),
                          vmul_n_f32(v51, LANES64(v9).n64_f32[0] +
                                              LANES64(v9).n64_f32[0])))
          .n64_u64[0];
  v54 = *a5;
  v55 = *a5 - v46;
  v56 = a2[2];
  v57 = a2[3];
  v58 = a2[4];
  v59 = v56 * (float)((float)(0x1.0000000000000p+0f - v47) - v50);
  PSEUDO_LOW_LANE64(v52, n64_f32, vmuls_lane_f32(v57, v52, 1));
  PSEUDO_LOW_LANE64(v53, n64_f32, vmuls_lane_f32(v58, v53, 1));
  PSEUDO_LOW_LANE64(v16, n64_f32, -v59);
  v87_.v87 = (float)(LANES64(v53).n64_f32[0] +
                     (float)(LANES64(v52).n64_f32[0] + v59)) -
             v55;
  v87_.v88 = (float)((float)(LANES64(v52).n64_f32[0] + v59) -
                     LANES64(v53).n64_f32[0]) -
             v55;
  v60 = v59 - LANES64(v52).n64_f32[0];
  v61 = LANES64(v52).n64_f32[0] - v59;
  PSEUDO_LOW_LANE64(v52, n64_f32,
                    LANES64(v16).n64_f32[0] - LANES64(v52).n64_f32[0]);
  v87_.v89 = (float)(LANES64(v53).n64_f32[0] + v60) - v55;
  v87_.v90 = (float)(v60 - LANES64(v53).n64_f32[0]) - v55;
  v87_.v91 = (float)(LANES64(v53).n64_f32[0] + v61) - v55;
  v87_.v92 = (float)(v61 - LANES64(v53).n64_f32[0]) - v55;
  v87_.v93 = (float)(LANES64(v53).n64_f32[0] + LANES64(v52).n64_f32[0]) - v55;
  v87_.v94 = (float)(LANES64(v52).n64_f32[0] - LANES64(v53).n64_f32[0]) - v55;
  v87_.v95 = &v87_.v87;
  if ((LODWORD(v87_.v87) & 0x80000000) != 0) {
    v62 = v87_.v87;
    v63 = *(_DWORD*)(a7 + 20480);
    if (v63 <= 0xFF) {
      *(_DWORD*)(a7 + 20480) = v63 + 1;
      v64 = a7 + 80LL * v63;
      *(float*)v64 = v15;
      *(float*)(v64 + 4) = v19;
      *(float*)(v64 + 8) = v20;
      *(float*)(v64 + 12) = v54 + v62;
      *(_DWORD*)(v64 + 52) = -1;
      *(float*)(v64 + 24) =
          v42 + (float)((float)((float)(PSEUDO_UNFUSED(v31 * v56)) +
                                (float)(PSEUDO_UNFUSED(v30 * v57))) +
                        (float)(PSEUDO_UNFUSED(v38 * v58)));
      *(float*)(v64 + 16) =
          v40 + (float)((float)((float)(PSEUDO_UNFUSED(v39 * v56)) +
                                (float)(PSEUDO_UNFUSED(v29 * v57))) +
                        (float)(PSEUDO_UNFUSED(v32 * v58)));
      *(float*)(v64 + 20) =
          v41 + (float)((float)((float)(PSEUDO_UNFUSED(v34 * v56)) +
                                (float)(PSEUDO_UNFUSED(v37 * v57))) +
                        (float)(PSEUDO_UNFUSED(v35 * v58)));
    }
  }
  if ((LODWORD(v87_.v88) & 0x80000000) != 0) {
    v65 = v87_.v88;
    v66 = *(_DWORD*)(a7 + 20480);
    if (v66 <= 0xFF) {
      *(_DWORD*)(a7 + 20480) = v66 + 1;
      v67 = a7 + 80LL * v66;
      *(float*)v67 = v15;
      *(float*)(v67 + 4) = v19;
      *(float*)(v67 + 8) = v20;
      *(float*)(v67 + 12) = v54 + v65;
      *(_DWORD*)(v67 + 52) = -1;
      *(float*)(v67 + 24) =
          v42 + (float)((float)((float)(PSEUDO_UNFUSED(v31 * v56)) +
                                (float)(PSEUDO_UNFUSED(v30 * v57))) -
                        (float)(PSEUDO_UNFUSED(v38 * v58)));
      *(float*)(v67 + 16) =
          v40 + (float)((float)((float)(PSEUDO_UNFUSED(v39 * v56)) +
                                (float)(PSEUDO_UNFUSED(v29 * v57))) -
                        (float)(PSEUDO_UNFUSED(v32 * v58)));
      *(float*)(v67 + 20) =
          v41 + (float)((float)((float)(PSEUDO_UNFUSED(v34 * v56)) +
                                (float)(PSEUDO_UNFUSED(v37 * v57))) -
                        (float)(PSEUDO_UNFUSED(v35 * v58)));
    }
  }
  if ((LODWORD(v87_.v89) & 0x80000000) != 0) {
    v68 = v87_.v89;
    v69 = *(_DWORD*)(a7 + 20480);
    if (v69 <= 0xFF) {
      *(_DWORD*)(a7 + 20480) = v69 + 1;
      v70 = a7 + 80LL * v69;
      *(float*)v70 = v15;
      *(float*)(v70 + 4) = v19;
      *(float*)(v70 + 8) = v20;
      *(float*)(v70 + 12) = v54 + v68;
      *(_DWORD*)(v70 + 52) = -1;
      *(float*)(v70 + 24) =
          v42 + (float)((float)((float)(PSEUDO_UNFUSED(v31 * v56)) -
                                (float)(PSEUDO_UNFUSED(v30 * v57))) +
                        (float)(PSEUDO_UNFUSED(v38 * v58)));
      *(float*)(v70 + 16) =
          v40 + (float)((float)((float)(PSEUDO_UNFUSED(v39 * v56)) -
                                (float)(PSEUDO_UNFUSED(v29 * v57))) +
                        (float)(PSEUDO_UNFUSED(v32 * v58)));
      *(float*)(v70 + 20) =
          v41 + (float)((float)((float)(PSEUDO_UNFUSED(v34 * v56)) -
                                (float)(PSEUDO_UNFUSED(v37 * v57))) +
                        (float)(PSEUDO_UNFUSED(v35 * v58)));
    }
  }
  if ((LODWORD(v87_.v90) & 0x80000000) != 0) {
    v71 = v87_.v90;
    v72 = *(_DWORD*)(a7 + 20480);
    if (v72 <= 0xFF) {
      *(_DWORD*)(a7 + 20480) = v72 + 1;
      v73 = a7 + 80LL * v72;
      *(float*)v73 = v15;
      *(float*)(v73 + 4) = v19;
      *(float*)(v73 + 8) = v20;
      *(float*)(v73 + 12) = v54 + v71;
      *(_DWORD*)(v73 + 52) = -1;
      *(float*)(v73 + 24) =
          v42 + (float)((float)((float)(PSEUDO_UNFUSED(v31 * v56)) -
                                (float)(PSEUDO_UNFUSED(v30 * v57))) -
                        (float)(PSEUDO_UNFUSED(v38 * v58)));
      *(float*)(v73 + 16) =
          v40 + (float)((float)((float)(PSEUDO_UNFUSED(v39 * v56)) -
                                (float)(PSEUDO_UNFUSED(v29 * v57))) -
                        (float)(PSEUDO_UNFUSED(v32 * v58)));
      *(float*)(v73 + 20) =
          v41 + (float)((float)((float)(PSEUDO_UNFUSED(v34 * v56)) -
                                (float)(PSEUDO_UNFUSED(v37 * v57))) -
                        (float)(PSEUDO_UNFUSED(v35 * v58)));
    }
  }
  if ((LODWORD(v87_.v91) & 0x80000000) != 0) {
    v74 = v87_.v91;
    v75 = *(_DWORD*)(a7 + 20480);
    if (v75 <= 0xFF) {
      *(_DWORD*)(a7 + 20480) = v75 + 1;
      v76 = a7 + 80LL * v75;
      *(float*)v76 = v15;
      *(float*)(v76 + 4) = v19;
      *(float*)(v76 + 8) = v20;
      *(float*)(v76 + 12) = v54 + v74;
      *(_DWORD*)(v76 + 52) = -1;
      *(float*)(v76 + 24) =
          v42 + (float)((float)((float)(PSEUDO_UNFUSED(v30 * v57)) -
                                (float)(PSEUDO_UNFUSED(v31 * v56))) +
                        (float)(PSEUDO_UNFUSED(v38 * v58)));
      *(float*)(v76 + 16) =
          v40 + (float)((float)((float)(PSEUDO_UNFUSED(v29 * v57)) -
                                (float)(PSEUDO_UNFUSED(v39 * v56))) +
                        (float)(PSEUDO_UNFUSED(v32 * v58)));
      *(float*)(v76 + 20) =
          v41 + (float)((float)((float)(PSEUDO_UNFUSED(v37 * v57)) -
                                (float)(PSEUDO_UNFUSED(v34 * v56))) +
                        (float)(PSEUDO_UNFUSED(v35 * v58)));
    }
  }
  if ((LODWORD(v87_.v92) & 0x80000000) != 0) {
    v77 = v87_.v92;
    v78 = *(_DWORD*)(a7 + 20480);
    if (v78 <= 0xFF) {
      *(_DWORD*)(a7 + 20480) = v78 + 1;
      v79 = a7 + 80LL * v78;
      *(float*)v79 = v15;
      *(float*)(v79 + 4) = v19;
      *(float*)(v79 + 8) = v20;
      *(float*)(v79 + 12) = v54 + v77;
      *(_DWORD*)(v79 + 52) = -1;
      *(float*)(v79 + 24) =
          v42 + (float)((float)((float)(PSEUDO_UNFUSED(v30 * v57)) -
                                (float)(PSEUDO_UNFUSED(v31 * v56))) -
                        (float)(PSEUDO_UNFUSED(v38 * v58)));
      *(float*)(v79 + 16) =
          v40 + (float)((float)((float)(PSEUDO_UNFUSED(v29 * v57)) -
                                (float)(PSEUDO_UNFUSED(v39 * v56))) -
                        (float)(PSEUDO_UNFUSED(v32 * v58)));
      *(float*)(v79 + 20) =
          v41 + (float)((float)((float)(PSEUDO_UNFUSED(v37 * v57)) -
                                (float)(PSEUDO_UNFUSED(v34 * v56))) -
                        (float)(PSEUDO_UNFUSED(v35 * v58)));
    }
  }
  if ((LODWORD(v87_.v93) & 0x80000000) != 0) {
    v80 = v87_.v93;
    v81 = *(_DWORD*)(a7 + 20480);
    if (v81 <= 0xFF) {
      *(_DWORD*)(a7 + 20480) = v81 + 1;
      v82 = a7 + 80LL * v81;
      *(float*)v82 = v15;
      *(float*)(v82 + 4) = v19;
      *(float*)(v82 + 8) = v20;
      *(float*)(v82 + 12) = v80 + v54;
      *(_DWORD*)(v82 + 52) = -1;
      *(float*)(v82 + 24) =
          v42 + (float)((float)((float)-(float)(PSEUDO_UNFUSED(v57 * v30)) -
                                (float)(PSEUDO_UNFUSED(v31 * v56))) +
                        (float)(PSEUDO_UNFUSED(v38 * v58)));
      *(float*)(v82 + 16) =
          v40 + (float)((float)((float)-(float)(PSEUDO_UNFUSED(v57 * v29)) -
                                (float)(PSEUDO_UNFUSED(v39 * v56))) +
                        (float)(PSEUDO_UNFUSED(v32 * v58)));
      *(float*)(v82 + 20) =
          v41 + (float)((float)((float)-(float)(PSEUDO_UNFUSED(v57 * v37)) -
                                (float)(PSEUDO_UNFUSED(v34 * v56))) +
                        (float)(PSEUDO_UNFUSED(v35 * v58)));
    }
  }
  if ((LODWORD(v87_.v94) & 0x80000000) == 0) {
    return *(_DWORD*)(a7 + 20480) != 0;
  }
  v84 = v87_.v94;
  v85 = *(_DWORD*)(a7 + 20480);
  if (v85 <= 0xFF) {
    *(_DWORD*)(a7 + 20480) = v85 + 1;
    v86 = a7 + 80LL * v85;
    *(float*)v86 = v15;
    *(float*)(v86 + 4) = v19;
    *(float*)(v86 + 8) = v20;
    *(float*)(v86 + 12) = v84 + v54;
    *(_DWORD*)(v86 + 52) = -1;
    *(float*)(v86 + 16) =
        v40 + (float)((float)((float)-(float)(PSEUDO_UNFUSED(v57 * v29)) -
                              (float)(PSEUDO_UNFUSED(v39 * v56))) -
                      (float)(PSEUDO_UNFUSED(v32 * v58)));
    *(float*)(v86 + 20) =
        v41 + (float)((float)((float)-(float)(PSEUDO_UNFUSED(v57 * v37)) -
                              (float)(PSEUDO_UNFUSED(v34 * v56))) -
                      (float)(PSEUDO_UNFUSED(v35 * v58)));
    *(float*)(v86 + 24) =
        v42 + (float)((float)((float)-(float)(PSEUDO_UNFUSED(v57 * v30)) -
                              (float)(PSEUDO_UNFUSED(v31 * v56))) -
                      (float)(PSEUDO_UNFUSED(v38 * v58)));
  }
  return true;
}

bool physx_source_geomutils_src_469a30(__int64 a1, __int64 a2, float* a3,
                                       float* a4, float* a5, __int64 a6,
                                       __int64 a7)
{
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
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  _BOOL8 result;
  unsigned int v50;
  __int64 v51;
  float v52;
  float v53;
  float v54;
  unsigned int v55;
  float v56;
  float v57;
  __int64 v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;

  v7 = a3[4];
  v8 = a3[5];
  v9 = a3[6];
  v10 = *a3;
  v11 = a3[1];
  v13 = a3[2];
  v12 = a3[3];
  v14 = a4[1];
  v15 = -*a3;
  v16 = -v11;
  v17 = (float)(a4[5] - v8) + (float)(a4[5] - v8);
  v18 = (float)(a4[4] - v7) + (float)(a4[4] - v7);
  v19 = (float)(a4[6] - v9) + (float)(a4[6] - v9);
  v20 = (float)(v12 * v12) + -0x1.0000000000000p-1f;
  v21 =
      (float)((float)-(float)(PSEUDO_UNFUSED(v11 * v17)) - (float)(*a3 * v18)) -
      (float)(v13 * v19);
  v22 = (float)((float)(PSEUDO_UNFUSED(
                    v12 * (float)((float)(PSEUDO_UNFUSED(v13 * v17)) -
                                  (float)(v11 * v19)))) +
                (float)(v18 * v20)) -
        (float)(*a3 * v21);
  v23 = (float)((float)(PSEUDO_UNFUSED(
                    v12 * (float)((float)(PSEUDO_UNFUSED(*a3 * v19)) -
                                  (float)(v13 * v18)))) +
                (float)(v17 * v20)) -
        (float)(v11 * v21);
  v24 =
      (float)(PSEUDO_UNFUSED(v12 * (float)((float)(PSEUDO_UNFUSED(v11 * v18)) -
                                           (float)(*a3 * v17)))) +
      (float)(v19 * v20);
  v26 = a4[2];
  v25 = a4[3];
  v27 = v24 - (float)(v13 * v21);
  v28 =
      (float)((float)((float)(v12 * v26) - (float)(PSEUDO_UNFUSED(v13 * v25))) -
              (float)(*a3 * v14)) +
      (float)(*a4 * v11);
  v29 =
      (float)((float)((float)(v12 * *a4) - (float)(PSEUDO_UNFUSED(*a3 * v25))) -
              (float)(v11 * v26)) +
      (float)(v14 * v13);
  v30 =
      (float)((float)((float)(v12 * v14) - (float)(PSEUDO_UNFUSED(v11 * v25))) -
              (float)(v13 * *a4)) +
      (float)(v26 * *a3);
  v31 =
      (float)((float)((float)(PSEUDO_UNFUSED(*a3 * *a4)) + (float)(v12 * v25)) +
              (float)(v11 * v14)) +
      (float)(v13 * v26);
  v32 = v29 + v29;
  v33 = v31 + v31;
  v34 = (float)((float)(v31 * (float)(v31 + v31)) + -0x1.0000000000000p+0f) +
        (float)(v29 * (float)(v29 + v29));
  v35 = (float)(PSEUDO_UNFUSED(v30 * (float)(v29 + v29))) + (float)(v28 * v33);
  v36 = (float)(PSEUDO_UNFUSED(v28 * v32)) - (float)(v30 * v33);
  v38 = *(float*)(a2 + 8);
  v37 = *(float*)(a2 + 12);
  v39 = v37 * v34;
  v40 = v37 * v35;
  v41 = v37 * v36;
  v42 = (float)(v22 + v39) - v38;
  v43 = (float)(v22 - v39) - v38;
  v44 = *a5;
  v45 = (float)((float)(v12 * (float)(v12 + v12)) + -0x1.0000000000000p+0f) +
        (float)(v10 * (float)(v10 + v10));
  v46 = (float)(PSEUDO_UNFUSED(v11 * (float)(v10 + v10))) +
        (float)(v13 * (float)(v12 + v12));
  v47 = (float)(PSEUDO_UNFUSED((float)(v10 + v10) * v13)) -
        (float)(v11 * (float)(v12 + v12));
  v48 = -v13;
  result = v42 <= *a5;
  if (v42 <= *a5) {
    v50 = *(_DWORD*)(a7 + 20480);
    if (v50 <= 0xFF) {
      *(_DWORD*)(a7 + 20480) = v50 + 1;
      v51 = a7 + 80LL * v50;
      v52 = (float)(v27 + v41) + (float)(v27 + v41);
      v53 = (float)(v23 + v40) + (float)(v23 + v40);
      *(_DWORD*)(v51 + 52) = -1;
      *(float*)v51 = -v45;
      *(float*)(v51 + 4) = -v46;
      *(float*)(v51 + 8) = -v47;
      *(float*)(v51 + 12) = v42;
      v54 = (float)((float)(PSEUDO_UNFUSED(v11 * v53)) +
                    (float)(v10 * (float)(v42 + v42))) +
            (float)(v13 * v52);
      *(float*)(v51 + 16) =
          v7 +
          (float)((float)((float)(PSEUDO_UNFUSED(
                              v12 * (float)((float)(PSEUDO_UNFUSED(v53 * v48)) +
                                            (float)(v11 * v52)))) +
                          (float)((float)(v42 + v42) * v20)) +
                  (float)(v10 * v54));
      *(float*)(v51 + 20) =
          v8 +
          (float)((float)((float)(PSEUDO_UNFUSED(
                              v12 *
                              (float)((float)(PSEUDO_UNFUSED(v52 * v15)) +
                                      (float)(v13 * (float)(v42 + v42))))) +
                          (float)(v53 * v20)) +
                  (float)(v11 * v54));
      *(float*)(v51 + 24) =
          v9 +
          (float)((float)((float)(PSEUDO_UNFUSED(
                              v12 * (float)((float)(PSEUDO_UNFUSED(
                                                (float)(v42 + v42) * v16)) +
                                            (float)(v10 * v53)))) +
                          (float)(v52 * v20)) +
                  (float)(v13 * v54));
    }
  }
  if (v43 <= v44) {
    v55 = *(_DWORD*)(a7 + 20480);
    if (v55 <= 0xFF) {
      v56 = v23 - v40;
      *(_DWORD*)(a7 + 20480) = v55 + 1;
      v57 = -v45;
      v58 = a7 + 80LL * v55;
      v59 = (float)(v27 - v41) + (float)(v27 - v41);
      v60 = v56 + v56;
      *(_DWORD*)(v58 + 52) = -1;
      v61 = (float)((float)(PSEUDO_UNFUSED(v11 * v60)) +
                    (float)(v10 * (float)(v43 + v43))) +
            (float)(v13 * v59);
      v62 = (float)(PSEUDO_UNFUSED(
                v12 * (float)((float)(PSEUDO_UNFUSED(v59 * v15)) +
                              (float)(v13 * (float)(v43 + v43))))) +
            (float)(v60 * v20);
      v63 = (float)((float)(PSEUDO_UNFUSED(
                        v12 * (float)((float)(PSEUDO_UNFUSED(
                                          (float)(v43 + v43) * v16)) +
                                      (float)(v10 * v60)))) +
                    (float)(v59 * v20)) +
            (float)(v13 * v61);
      v65 = a3[4];
      v64 = a3[5];
      *(float*)v58 = v57;
      *(float*)(v58 + 4) = -v46;
      v66 = (float)(v62 + (float)(v11 * v61)) + v64;
      v67 = a3[6];
      *(float*)(v58 + 8) = -v47;
      *(float*)(v58 + 12) = v43;
      *(float*)(v58 + 16) =
          (float)((float)((float)(PSEUDO_UNFUSED(
                              v12 * (float)((float)(PSEUDO_UNFUSED(v60 * v48)) +
                                            (float)(v11 * v59)))) +
                          (float)((float)(v43 + v43) * v20)) +
                  (float)(v10 * v61)) +
          v65;
      *(float*)(v58 + 20) = v66;
      *(float*)(v58 + 24) = v63 + v67;
    }
    return true;
  }
  return result;
}

bool physx_source_geomutils_src_525b00(__int64 a1, char a2)
{
  int v2;
  unsigned int v4;
  __int64 v5;
  char v6;
  int v7;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  unsigned int* v15;
  unsigned int v16;
  unsigned int v17;
  char v18;
  int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;

  if (*(_BYTE*)(a1 + 418) != 1) {
    return false;
  }
  v2 = *(_DWORD*)(a1 + 280);
  if (v2 > 2) {
    switch (v2) {
    case 3:
      ++*(_DWORD*)(a1 + 116);
      *(_DWORD*)(a1 + 280) = 4;
      if (*(_DWORD*)(a1 + 432) == 0) {
        goto LABEL_31;
      }
      v9 = *(_DWORD*)(a1 + 304);
      v10 = *(_DWORD*)(a1 + 112);
      v11 = *(_QWORD*)(a1 + 88);
      v12 = a2;
      v13 = a1 + 400;
      if (v9 <= v10) {
        v14 = v10;
      }
      else {
        v14 = v9;
      }
      physx_Gu_AABBTreeUpdateMap_initMap(v13, v14, v11);
      if (*(_DWORD*)(a1 + 432) != 0) {
        v15 = *(unsigned int**)(a1 + 424);
        do {
          v16 = *v15;
          v17 = v15[1];
          v15 += 2;
          physx_Gu_AABBTreeUpdateMap_invalidate((__int64*)(a1 + 400), v16, v17,
                                                *(_QWORD*)(a1 + 88));
        } while ((unsigned __int64)v15 <
                 *(_QWORD*)(a1 + 424) +
                     8 * (unsigned __int64)*(unsigned int*)(a1 + 432));
      }
      *(_DWORD*)(a1 + 432) = 0;
      break;
    case 4:
      v21 = *(_QWORD*)(a1 + 88);
      v12 = a2;
      ++*(_DWORD*)(a1 + 116);
      *(_DWORD*)(a1 + 280) = 5;
      physx_Gu_BVHCoreData_fullRefit(v21, *(_QWORD*)(a1 + 312));
      break;
    case 5:
      *(_DWORD*)(a1 + 280) = 6;
      if ((a2 & 1) == 0) {
        return *(_DWORD*)(a1 + 280) == 6;
      }
      goto LABEL_32;
    default:
      goto LABEL_31;
    }
    a2 = v12;
    goto LABEL_31;
  }
  switch (v2) {
  case 0:
    if ((a2 & 1) == 0 ||
        ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 160LL))(a1) & 1) == 0) {
      return false;
    }
    goto LABEL_32;
  case 1:
    v18 = a2;
    physx_Gu_AABBTree_progressiveBuild(
        *(_QWORD*)(a1 + 88), (unsigned int*)(a1 + 48), (__int64*)(a1 + 8),
        (_DWORD*)(a1 + 80), 0, 0);
    v19 = 0;
    *(_DWORD*)(a1 + 116) = 0;
    *(_DWORD*)(a1 + 280) = 2;
    v20 = *(_DWORD*)(a1 + 52);
    if (v20 >= 2) {
      if (v20 >= 4) {
        if (v20 >= 8) {
          if (v20 >= 0x10) {
            if (v20 >= 0x20) {
              if (v20 >= 0x40) {
                if (v20 >= 0x80) {
                  if (v20 >= 0x100) {
                    if (v20 >= 0x200) {
                      if (v20 >= 0x400) {
                        if (v20 >= 0x800) {
                          if (v20 >= 0x1000) {
                            if (v20 >= 0x2000) {
                              if (v20 >= 0x4000) {
                                if (v20 >= 0x8000) {
                                  if (v20 >= 0x10000) {
                                    if (v20 >= 0x20000) {
                                      if (v20 >= 0x40000) {
                                        if (v20 >= 0x80000) {
                                          if (v20 >= 0x100000) {
                                            if (v20 >= 0x200000) {
                                              if (v20 >= 0x400000) {
                                                if (v20 >= 0x800000) {
                                                  if (HIBYTE(v20) != 0) {
                                                    if (v20 >> 25 != 0) {
                                                      if (v20 >> 26 != 0) {
                                                        if (v20 >> 27 != 0) {
                                                          if (v20 >> 28 != 0) {
                                                            if (v20 >> 29 !=
                                                                0) {
                                                              if (v20 >> 30 !=
                                                                  0) {
                                                                if ((v20 &
                                                                     0x80000000) ==
                                                                    0) {
                                                                  v19 = 30;
                                                                }
                                                                else {
                                                                  v19 = 31;
                                                                }
                                                              }
                                                              else {
                                                                v19 = 29;
                                                              }
                                                            }
                                                            else {
                                                              v19 = 28;
                                                            }
                                                          }
                                                          else {
                                                            v19 = 27;
                                                          }
                                                        }
                                                        else {
                                                          v19 = 26;
                                                        }
                                                      }
                                                      else {
                                                        v19 = 25;
                                                      }
                                                    }
                                                    else {
                                                      v19 = 24;
                                                    }
                                                  }
                                                  else {
                                                    v19 = 23;
                                                  }
                                                }
                                                else {
                                                  v19 = 22;
                                                }
                                              }
                                              else {
                                                v19 = 21;
                                              }
                                            }
                                            else {
                                              v19 = 20;
                                            }
                                          }
                                          else {
                                            v19 = 19;
                                          }
                                        }
                                        else {
                                          v19 = 18;
                                        }
                                      }
                                      else {
                                        v19 = 17;
                                      }
                                    }
                                    else {
                                      v19 = 16;
                                    }
                                  }
                                  else {
                                    v19 = 15;
                                  }
                                }
                                else {
                                  v19 = 14;
                                }
                              }
                              else {
                                v19 = 13;
                              }
                            }
                            else {
                              v19 = 12;
                            }
                          }
                          else {
                            v19 = 11;
                          }
                        }
                        else {
                          v19 = 10;
                        }
                      }
                      else {
                        v19 = 9;
                      }
                    }
                    else {
                      v19 = 8;
                    }
                  }
                  else {
                    v19 = 7;
                  }
                }
                else {
                  v19 = 6;
                }
              }
              else {
                v19 = 5;
              }
            }
            else {
              v19 = 4;
            }
          }
          else {
            v19 = 3;
          }
        }
        else {
          v19 = 2;
        }
      }
      else {
        v19 = 1;
      }
    }
    v22 = *(_QWORD*)(a1 + 40);
    v23 = v19 * v20;
    if (v22 != 0) {
      LODWORD(v22) = *(_DWORD*)(v22 + 60);
    }
    if (v23 > 2 * (int)v22 || v23 < (unsigned int)v22 >> 1) {
      *(_DWORD*)(a1 + 292) = 0;
      *(_DWORD*)(a1 + 288) = v23 & ~((int)v23 >> 31);
      if ((v18 & 1) == 0) {
        return *(_DWORD*)(a1 + 280) == 6;
      }
    }
    else {
      *(_DWORD*)(a1 + 288) = (v22 + *(int*)(a1 + 292) * v20) &
                             ~((int)(v22 + *(int*)(a1 + 292) * v20) >> 31);
      if ((v18 & 1) == 0) {
        return *(_DWORD*)(a1 + 280) == 6;
      }
    }
    goto LABEL_32;
  case 2:
    v4 = *(_DWORD*)(a1 + 284);
    v5 = *(_QWORD*)(a1 + 88);
    v6 = a2;
    ++*(_DWORD*)(a1 + 116);
    v7 = physx_Gu_AABBTree_progressiveBuild(
        v5, (unsigned int*)(a1 + 48), (__int64*)(a1 + 8), (_DWORD*)(a1 + 80), 1,
        *(_DWORD*)(a1 + 288) / v4 + 1);
    a2 = v6;
    if (v7 == 0) {
      *(_DWORD*)(a1 + 280) = 3;
      if ((v6 & 1) == 0) {
        return *(_DWORD*)(a1 + 280) == 6;
      }
      goto LABEL_32;
    }
    break;
  default:
    break;
  }
LABEL_31:
  if ((a2 & 1) != 0) {
  LABEL_32:
    *(_BYTE*)(a1 + 417) = 1;
  }
  return *(_DWORD*)(a1 + 280) == 6;
}

__int64 physx_source_geomutils_src_525f30(__int64 a1)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  _BYTE v15[4];

  if (*(_BYTE*)(a1 + 418) != 1) {
    return 0;
  }
  if (*(_DWORD*)(a1 + 280) != 0) {
    return 1;
  }
  v3 = *(_DWORD*)(a1 + 304);
  if (v3 == 0) {
    return 0;
  }
  physx_Gu_NodeAllocator_release(a1 + 8);
  v4 = *(_QWORD*)(a1 + 88);
  if (v4 != 0) {
    physx_Gu_AABBTree_Destroy_AABBTree(*(_QWORD*)(a1 + 88));
    v5 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5, v4);
    *(_QWORD*)(a1 + 88) = 0;
  }
  v6 = PxGetBroadcastAllocator(v15);
  if (v15[0] != 0) {
    v7 = "static const char "
         "*physx::PxReflectionAllocator<physx::Gu::AABBTree>::getName(bool) [T "
         "= physx::Gu::AABBTree]";
  }
  else {
    v7 = "<allocation names disabled>";
  }
  v8 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v6 + 16LL))(
      v6, 72, v7,
      "/Inside/Lib/PhysX/O/physx/source/geomutils/src/GuAABBPruner.cpp", 608);
  physx_Gu_AABBTree_AABBTree(v8);
  v9 = *(_QWORD*)(a1 + 312);
  *(_QWORD*)(a1 + 88) = v8;
  *(_DWORD*)(a1 + 112) = v3;
  physx_Gu_AABBTreeBounds_init((__int64*)(a1 + 96), v3, v9);
  v10 = *(_QWORD*)(a1 + 128);
  ++*(_DWORD*)(a1 + 120);
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 64LL))(v10);
  }
  v11 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  if (v11 != 0) {
    v12 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v12 + 24LL))(v12, v11);
    *(_QWORD*)(a1 + 64) = 0;
  }
  v13 = *(_DWORD*)(a1 + 112);
  v14 = *(_DWORD*)(a1 + 296);
  *(_QWORD*)(a1 + 56) = a1 + 96;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 280) = 1;
  *(_DWORD*)(a1 + 48) = v14;
  *(_DWORD*)(a1 + 52) = v13;
  *(_DWORD*)(a1 + 72) = *(_DWORD*)(a1 + 300);
  return 1;
}

#pragma GCC visibility pop
