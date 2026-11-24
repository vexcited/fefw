#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 physx_Cm_FlushPool_allocateNotThreadSafe(__int64, int, unsigned int);
__int64 physx_PxGeometryQuery_computeGeomBounds(__int64);
__int64 physx_Pxstrnicmp(__int64);
__int64 physx_Sc_getArticulationSim(__int64, unsigned int);
extern __int64 (*physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr_1f87a50[])();
extern __int64 (*physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr_1f87b08[])();
float GameRoutine_1a0a010(float);
void physx_source_simulationcontroller_src_3d72e0(__int64 a1, _QWORD* a2);
__int64 PxGetBroadcastAllocator(_BYTE*);
__int64 PxGetFoundation();
__int64 physx_Dy_FeatherstoneArticulation_getCacheDataSize(int, int);
__int64 physx_Dy_FeatherstoneArticulation_getDofs(_QWORD);
__int64 physx_Sc_BodyCore_getSim(_QWORD);
__int64 physx_source_simulationcontroller_src_3893d0();
extern char GameData_1a9f09e;
__int64 physx_source_simulationcontroller_src_310510(__int64 a1);
__int64 physx_source_simulationcontroller_src_312ba0(__int64 a1);
__int64 physx_source_simulationcontroller_src_312bd0(__int64 a1, __int64* a2);
__int64 physx_source_simulationcontroller_src_312e00(__int64 a1);
__int64 physx_source_simulationcontroller_src_388740(__int64 result,
                                                     __int64 a2);
float physx_source_simulationcontroller_src_389390(__int64 a1);
__int64 physx_source_simulationcontroller_src_389eb0(__int64 result, __int64 a2,
                                                     unsigned int a3);

__int64 physx_source_simulationcontroller_src_310510(__int64 a1)
{
  if (*(_QWORD*)a1 != 0) {
    return *(unsigned int*)(a1 + 24);
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 physx_source_simulationcontroller_src_312ba0(__int64 a1)
{
  int v2;

  v2 = physx_Dy_FeatherstoneArticulation_getDofs(*(_QWORD*)a1);
  return physx_Dy_FeatherstoneArticulation_getCacheDataSize(
      v2, *(_DWORD*)(a1 + 32));
}

__int64 physx_source_simulationcontroller_src_312bd0(__int64 a1, __int64* a2)
{
  int v4;
  __int64 result;

  v4 = physx_Dy_FeatherstoneArticulation_getDofs(*(_QWORD*)a1);
  result = physx_Dy_FeatherstoneArticulation_getCacheDataSize(
      v4, *(_DWORD*)(a1 + 32));
  if ((_DWORD)result != 0) {
    return GameRoutine_1a0ba50(*a2, 0, (unsigned int)result);
  }
  return result;
}

__int64 physx_source_simulationcontroller_src_312e00(__int64 a1)
{
  int v1;

  v1 = *(_DWORD*)(a1 + 136);
  return (unsigned int)physx_Dy_FeatherstoneArticulation_getDofs(*(_QWORD*)a1) *
         v1;
}

__int64 physx_source_simulationcontroller_src_388740(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;

  v3 = result;
  if (a2 != 0 && *(_QWORD*)(result + 1200) == 0 &&
      *(_DWORD*)(result + 1068) != 0) {
    v4 = *(_QWORD*)(result + 1024);
    v5 = 0;
    do {
      result = physx_Sc_BodyCore_getSim(*(_QWORD*)(v4 + 8 * v5++));
      *(_WORD*)(result + 108) |= 0x40u;
    } while (v5 < *(unsigned int*)(v3 + 1068));
  }
  *(_QWORD*)(v3 + 1200) = a2;
  return result;
}

float physx_source_simulationcontroller_src_389390(__int64 a1)
{

#pragma clang fp contract(off)
  if ((*(_BYTE*)(a1 + 1222) & 8) == 0) {
    physx_source_simulationcontroller_src_3893d0();
  }
  return *(float*)(a1 + 4892);
}

__int64 physx_source_simulationcontroller_src_389eb0(__int64 result, __int64 a2,
                                                     unsigned int a3)
{
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 vars0;
  __int64 _8;
  __int64 vars30;
  __int64 _38;

  v3 = result;
  if (a2 != 0) {
    if (*(_DWORD*)(result + 988) >= a3) {
      v10 = *(_QWORD*)(result + 976);
      if (a3 == 0) {
      LABEL_13:
        *(_QWORD*)(v3 + 976) = v10;
        *(_DWORD*)(v3 + 984) = a3;
        return result;
      }
      v6 = a3;
    LABEL_12:
      result = GameRoutine_1a0b950(v10, a2, v6);
      goto LABEL_13;
    }
    v5 = a2;
    v6 = a3;
    v7 = PxGetBroadcastAllocator(nullptr);
    v8 = (*(__int64 (**)(__int64, _QWORD, char*, const char*, __int64))(
        *(_QWORD*)v7 + 16LL))(
        v7, a3, &GameData_1a9f09e,
        "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
        1494);
    if (v8 != 0) {
      v9 = *(_QWORD*)(v3 + 976);
      v10 = v8;
      *(_DWORD*)(v3 + 988) = a3;
      if (v9 != 0) {
        v11 = PxGetBroadcastAllocator(nullptr);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 24LL))(v11, v9);
        *(_QWORD*)(v3 + 976) = 0;
      }
      a2 = v5;
      goto LABEL_12;
    }
    vars30 = vars0;
    _38 = _8;
    v14 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v14 + 88LL))(
        v14, 16,
        "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
        1502, "Failed to allocate memory for filter shader data!");
  }
  else {
    v12 = *(_QWORD*)(result + 976);
    if (v12 != 0) {
      v13 = PxGetBroadcastAllocator(nullptr);
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v13 + 24LL))(v13, v12);
      *(_QWORD*)(v3 + 976) = 0;
    }
    *(_QWORD*)(v3 + 984) = 0;
  }
  return result;
}

void physx_source_simulationcontroller_src_3d72e0(__int64 a1, _QWORD* a2)
{
  char v2;
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v20;
  __int64 v21;
  int v22;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  int v52;
  int v53;
  unsigned int v54;
  float v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int16 v62;
  float v63;
  float v64;
  float v65;
  unsigned __int16 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  float v70;
  __int64* v71;
  int v72;
  int v73;
  __int64 v74;
  __int64 v75;
  float* v76;
  float v77;
  float v78;
  float v79;
  __int64 v80;
  __int64 v81;
  float* v82;
  float v83;
  float v84;
  float v85;
  float v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  float* v90;
  float v91;
  float v92;
  float v93;
  float v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  float* v98;
  float v99;
  float v100;
  float v101;
  float v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  float* v106;
  float v107;
  float v108;
  float v109;
  int v110;
  unsigned int v111;
  __int64* v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  int v117;
  __int64 v118;

  v2 = *(_BYTE*)(a1 + 536);
  v113 = *(__int64**)(*(_QWORD*)(a1 + 312) + 800LL);
  v4 = *(_DWORD*)(a1 + 4864);
  v5 = v4 & 0x7FFFFFFF;
  if ((v4 & 0x7FFFFFFF) != 0) {
    v6 = 0;
    while (1) {
      v7 = *(_DWORD*)(*(_QWORD*)(a1 + 4856) + 4 * v6);
      if (v7 != 0) {
        break;
      }
      if (v5 == ++v6) {
        goto LABEL_5;
      }
    }
    LODWORD(v5) = v6;
  }
  else {
  LABEL_5:
    v7 = 0;
  }
  v8 = *(_DWORD*)(a1 + 448);
  v9 = *(_QWORD*)(a1 + 40);
  v10 = *(_QWORD*)(a1 + 520);
  v116 = *(_QWORD*)(a1 + 344);
  v11 = *(_QWORD*)(*(_QWORD*)(a1 + 528) + 16LL);
  physx_Pxstrnicmp(*v113);
  v12 = a1;
  v13 = physx_Cm_FlushPool_allocateNotThreadSafe((__int64)v113, 1096, 0x10u);
  physx_PxGeometryQuery_computeGeomBounds(*v113);
  *(_QWORD*)(v13 + 16) = 0;
  *(_QWORD*)(v13 + 24) = 0;
  *(_DWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = v10;
  *(_QWORD*)(v13 + 48) = v11;
  *(_DWORD*)(v13 + 56) = v8;
  *(_DWORD*)(v13 + 1088) = 0;
  v114 = v12;
  *(_QWORD*)v13 = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr_1f87a50;
  *(_QWORD*)(v13 + 8) = v9;
  if (v7 == 0) {
    goto LABEL_48;
  }
  v14 = *(_QWORD*)(v12 + 320);
  v15 = 0;
  v16 = v5;
  do {
    v17 = v7;
    v18 = v16;
    v7 &= v7 - 1;
    if (v7 == 0) {
      if (v16 + 1 > (*(_DWORD*)(v114 + 4864) & 0x7FFFFFFFu)) {
        ++v16;
      }
      else {
        v16 = *(_DWORD*)(v114 + 4864) & 0x7FFFFFFF;
      }
      v19 = v18;
      while (v16 - 1 != v19) {
        v7 = *(_DWORD*)(*(_QWORD*)(v114 + 4856) + 4LL * (unsigned int)++v19);
        if (v7 != 0) {
          v16 = v19;
          goto LABEL_20;
        }
      }
      v7 = 0;
    }
  LABEL_20:
    v20 = __clz((unsigned int)(__rbit32(v17))) | (32 * v18);
    if (v20 == -1) {
      break;
    }
    v21 = *(_QWORD*)(*(_QWORD*)(v116 + 248) + 40LL * v20 + 32);
    if (v21 != 0) {
      v22 = *(unsigned __int16*)(v21 - 96);
      v117 = v16;
      *(_QWORD*)(v13 + 8LL * v15 + 64) = v21 - 112;
      if (v22 != 0) {
        v25 = *(__int64**)(v21 - 104);
        v23 = (__int64*)(v21 - 104);
        v24 = v25;
        if (v22 == 1) {
          v26 = v23;
        }
        else {
          v26 = v24;
        }
        do {
          v29 = *v26++;
          v28 = v29;
          if ((*(_BYTE*)(*(_QWORD*)(v29 + 16) + 32LL) & 1) != 0) {
            v30 = *(_DWORD*)(v28 + 8);
            v31 = ((unsigned __int64)(v30 & 0x7FFFFFFF) + 32) >> 5;
            if ((unsigned int)v31 <= (*(_DWORD*)(v14 + 96) & 0x7FFFFFFFu)) {
              v27 = *(_QWORD*)(v14 + 88);
            }
            else {
              v32 =
                  (*(__int64 (**)(_QWORD, unsigned __int64, _QWORD, const char*,
                                  __int64))(**(_QWORD**)(v14 + 104) + 16LL))(
                      *(_QWORD*)(v14 + 104), 4 * v31,
                      *(unsigned int*)(v14 + 112),
                      "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/"
                      "sdk_source_bin/../../../include\\foundation/PxBitMap.h",
                      448);
              v33 = *(_QWORD*)(v14 + 88);
              v34 = *(_DWORD*)(v14 + 96);
              v27 = v32;
              if (v33 != 0) {
                v35 = (unsigned int)(4 * v34);
                if ((_DWORD)v35 != 0) {
                  GameRoutine_1a0b950(v32, v33, v35);
                  v34 = *(_DWORD*)(v14 + 96);
                }
                if ((v34 & 0x80000000) == 0 && *(_QWORD*)(v14 + 88) != 0) {
                  (*(void (**)(_QWORD))(**(_QWORD**)(v14 + 104) + 24LL))(
                      *(_QWORD*)(v14 + 104));
                  v34 = *(_DWORD*)(v14 + 96);
                }
              }
              v36 = (unsigned int)(4 * (v31 - v34));
              if ((_DWORD)v36 != 0) {
                GameRoutine_1a0ba50(v27 + 4LL * (v34 & 0x7FFFFFFF), 0, v36);
              }
              *(_QWORD*)(v14 + 88) = v27;
              *(_DWORD*)(v14 + 96) = v31;
            }
            *(_DWORD*)(v27 + 4LL * ((v30 & 0x7FFFFFFFu) >> 5)) |= 1 << v30;
          }
          --v22;
        } while (v22 != 0);
      }
      if (++v15 == 128) {
        *(_DWORD*)(v13 + 1088) = 128;
        if (a2 != nullptr) {
          *(_DWORD*)(v13 + 32) = 1;
          *(_QWORD*)(v13 + 24) = a2;
          (*(void (**)(_QWORD*))(*a2 + 32LL))(a2);
          *(_QWORD*)(v13 + 16) = a2[2];
          (*(void (**)(__int64))(*(_QWORD*)v13 + 40LL))(v13);
          v37 = *(_DWORD*)(v114 + 448);
          v38 = *(_QWORD*)(v114 + 40);
          v39 = *(_QWORD*)(v114 + 520);
          v40 = *(_QWORD*)(*(_QWORD*)(v114 + 528) + 16LL);
          physx_Pxstrnicmp(*v113);
          v13 = physx_Cm_FlushPool_allocateNotThreadSafe((__int64)v113, 1096,
                                                         0x10u);
          physx_PxGeometryQuery_computeGeomBounds(*v113);
          *(_QWORD*)(v13 + 16) = 0;
          *(_QWORD*)(v13 + 24) = 0;
          *(_DWORD*)(v13 + 32) = 0;
          *(_QWORD*)(v13 + 40) = v39;
          *(_QWORD*)(v13 + 48) = v40;
          *(_DWORD*)(v13 + 56) = v37;
          *(_QWORD*)v13 =
              physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr_1f87a50;
          *(_QWORD*)(v13 + 8) = v38;
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 72LL))(v13);
        }
        v16 = v117;
        v2 = 1;
        v15 = 0;
        *(_DWORD*)(v13 + 1088) = 0;
      }
      else {
        v16 = v117;
        v2 = 1;
      }
    }
  } while (v7 != 0);
  if (v15 != 0) {
    *(_DWORD*)(v13 + 1088) = v15;
    v41 = a2;
    if (a2 != nullptr) {
      *(_DWORD*)(v13 + 32) = 1;
      *(_QWORD*)(v13 + 24) = a2;
      (*(void (**)(_QWORD*))(*a2 + 32LL))(a2);
      *(_QWORD*)(v13 + 16) = a2[2];
      v42 = 40;
    }
    else {
      v42 = 72;
    }
    (*(void (**)(__int64))(*(_QWORD*)v13 + v42))(v13);
    v43 = v114;
    v44 = *(_DWORD*)(v114 + 4880) & 0x7FFFFFFF;
    if ((_DWORD)v44 != 0) {
    LABEL_52:
      v45 = 0;
      while (1) {
        v46 = *(_DWORD*)(*(_QWORD*)(v43 + 4872) + 4 * v45);
        if (v46 != 0) {
          break;
        }
        if (v44 == ++v45) {
          goto LABEL_55;
        }
      }
      while (1) {
        v51 = v46;
        v52 = v45;
        v46 &= v46 - 1;
        if (v46 == 0) {
          v53 = v45;
          if ((int)v45 + 1 > (*(_DWORD*)(v43 + 4880) & 0x7FFFFFFFu)) {
            LODWORD(v45) = v45 + 1;
          }
          else {
            LODWORD(v45) = *(_DWORD*)(v43 + 4880) & 0x7FFFFFFF;
          }
          while ((int)v45 - 1 != v53) {
            v46 =
                *(_DWORD*)(*(_QWORD*)(v43 + 4872) + 4LL * (unsigned int)++v53);
            if (v46 != 0) {
              LODWORD(v45) = v53;
              goto LABEL_67;
            }
          }
          v46 = 0;
        }
      LABEL_67:
        v54 = __clz((unsigned int)(__rbit32(v51))) | (32 * v52);
        if (v54 == -1) {
          goto LABEL_55;
        }
        v115 = physx_Sc_getArticulationSim(v116 + 224, v54);
        if (v115 == 0) {
          goto LABEL_58;
        }
        if (v41 != nullptr) {
          physx_Pxstrnicmp(*v113);
          v47 = physx_Cm_FlushPool_allocateNotThreadSafe((__int64)v113, 72,
                                                         0x10u);
          physx_PxGeometryQuery_computeGeomBounds(*v113);
          v48 = *(_DWORD*)(v43 + 448);
          v2 = 1;
          v49 = *(_QWORD*)(v43 + 520);
          v50 = *(_QWORD*)(*(_QWORD*)(v43 + 528) + 16LL);
          *(_QWORD*)(v47 + 8) = *(_QWORD*)(v43 + 40);
          *(_QWORD*)(v47 + 16) = 0;
          *(_DWORD*)(v47 + 32) = 0;
          *(_QWORD*)v47 =
              physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr_1f87b08;
          *(_DWORD*)(v47 + 56) = v48;
          *(_QWORD*)(v47 + 40) = v49;
          *(_QWORD*)(v47 + 48) = v50;
          *(_QWORD*)(v47 + 64) = v115;
          *(_DWORD*)(v47 + 32) = 1;
          *(_QWORD*)(v47 + 24) = v41;
          (*(void (**)(_QWORD*))(*v41 + 32LL))(v41);
          *(_QWORD*)(v47 + 16) = v41[2];
          (*(void (**)(__int64))(*(_QWORD*)v47 + 40LL))(v47);
          goto LABEL_58;
        }
        v118 = *(unsigned int*)(v115 + 48);
        if ((_DWORD)v118 != 0) {
          break;
        }
        v2 = 1;
      LABEL_58:
        if (v46 == 0) {
          goto LABEL_55;
        }
      }
      v55 = *(float*)(v43 + 448);
      v56 = *(_QWORD*)(v43 + 520);
      v57 = 0;
      v58 = v115;
      v110 = v45;
      v59 = *(_QWORD*)(*(_QWORD*)(v43 + 528) + 16LL);
      while (1) {
        v60 = *(_QWORD*)(*(_QWORD*)(v58 + 40) + 8 * v57);
        v61 = *(_QWORD*)(v60 + 152);
        v62 = *(_WORD*)(v61 + 28);
        if ((v62 & 0x10) == 0 || (*(_WORD*)(v60 + 140) & 1) != 0) {
          goto LABEL_72;
        }
        v63 = 0x0.0p+0f;
        if ((v62 & 4) == 0) {
          v64 = GameRoutine_1a0a010(
              (float)((float)(PSEUDO_UNFUSED(*(float*)(v61 + 68) *
                                             *(float*)(v61 + 68))) +
                      (float)(*(float*)(v61 + 64) * *(float*)(v61 + 64))) +
              (float)(*(float*)(v61 + 72) * *(float*)(v61 + 72)));
          v61 = *(_QWORD*)(v60 + 152);
          v63 = v55 * v64;
        }
        v65 = GameRoutine_1a0a010(
            (float)((float)(PSEUDO_UNFUSED(*(float*)(v61 + 84) *
                                           *(float*)(v61 + 84))) +
                    (float)(*(float*)(v61 + 80) * *(float*)(v61 + 80))) +
            (float)(*(float*)(v61 + 88) * *(float*)(v61 + 88)));
        v66 = *(_WORD*)(v60 + 16);
        if (v66 != 0) {
          v69 = *(_QWORD*)(v60 + 8);
          v68 = v60 + 8;
          v67 = v69;
          v70 = v55 * v65;
          v71 = (__int64*)(v66 == 1 ? v68 : v67);
          v72 = v66 & 3;
          if ((v66 & 3) != 0) {
            break;
          }
          v73 = v66;
          if (v66 >= 4u) {
            goto LABEL_87;
          }
        }
      LABEL_72:
        if (++v57 == v118) {
          v43 = v114;
          v41 = a2;
          LODWORD(v45) = v110;
          v2 = 1;
          goto LABEL_58;
        }
      }
      v73 = v66 - v72;
      v111 = v66;
      do {
        v74 = *v71++;
        v75 = *(_DWORD*)(v74 + 8) & 0x7FFFFFFF;
        v76 = (float*)(*(_QWORD*)(v56 + 24) + 24LL * (unsigned int)v75);
        v77 = (float)(v76[3] - *v76) * 0x1.0000000000000p-1f;
        v78 = (float)(v76[4] - v76[1]) * 0x1.0000000000000p-1f;
        v79 = (float)(v76[5] - v76[2]) * 0x1.0000000000000p-1f;
        --v72;
        *(float*)(v59 + 4 * v75) =
            (float)(PSEUDO_UNFUSED(
                v70 *
                GameRoutine_1a0a010((float)((float)(PSEUDO_UNFUSED(v78 * v78)) +
                                            (float)(v77 * v77)) +
                                    (float)(v79 * v79)))) +
            (float)(v63 + *(float*)(*(_QWORD*)(v74 + 16) + 28LL));
      } while (v72 != 0);
      v58 = v115;
      if (v111 < 4) {
        goto LABEL_72;
      }
      do {
      LABEL_87:
        v80 = *v71;
        v81 = *(_DWORD*)(*v71 + 8) & 0x7FFFFFFF;
        v82 = (float*)(*(_QWORD*)(v56 + 24) + 24LL * (unsigned int)v81);
        v83 = (float)(v82[3] - *v82) * 0x1.0000000000000p-1f;
        v84 = (float)(v82[4] - v82[1]) * 0x1.0000000000000p-1f;
        v85 = (float)(v82[5] - v82[2]) * 0x1.0000000000000p-1f;
        v86 = GameRoutine_1a0a010(
            (float)((float)(PSEUDO_UNFUSED(v84 * v84)) + (float)(v83 * v83)) +
            (float)(v85 * v85));
        v87 = *(_QWORD*)(v80 + 16);
        v88 = v71[1];
        *(float*)(v59 + 4 * v81) = (float)(PSEUDO_UNFUSED(v70 * v86)) +
                                   (float)(v63 + *(float*)(v87 + 28));
        v89 = *(_DWORD*)(v88 + 8) & 0x7FFFFFFF;
        v90 = (float*)(*(_QWORD*)(v56 + 24) + 24LL * (unsigned int)v89);
        v91 = (float)(v90[3] - *v90) * 0x1.0000000000000p-1f;
        v92 = (float)(v90[4] - v90[1]) * 0x1.0000000000000p-1f;
        v93 = (float)(v90[5] - v90[2]) * 0x1.0000000000000p-1f;
        v94 = GameRoutine_1a0a010(
            (float)((float)(PSEUDO_UNFUSED(v92 * v92)) + (float)(v91 * v91)) +
            (float)(v93 * v93));
        v95 = *(_QWORD*)(v88 + 16);
        v96 = v71[2];
        *(float*)(v59 + 4 * v89) = (float)(PSEUDO_UNFUSED(v70 * v94)) +
                                   (float)(v63 + *(float*)(v95 + 28));
        v97 = *(_DWORD*)(v96 + 8) & 0x7FFFFFFF;
        v98 = (float*)(*(_QWORD*)(v56 + 24) + 24LL * (unsigned int)v97);
        v99 = (float)(v98[3] - *v98) * 0x1.0000000000000p-1f;
        v100 = (float)(v98[4] - v98[1]) * 0x1.0000000000000p-1f;
        v101 = (float)(v98[5] - v98[2]) * 0x1.0000000000000p-1f;
        v102 = GameRoutine_1a0a010(
            (float)((float)(PSEUDO_UNFUSED(v100 * v100)) + (float)(v99 * v99)) +
            (float)(v101 * v101));
        v103 = *(_QWORD*)(v96 + 16);
        v104 = v71[3];
        v73 -= 4;
        *(float*)(v59 + 4 * v97) = (float)(PSEUDO_UNFUSED(v70 * v102)) +
                                   (float)(v63 + *(float*)(v103 + 28));
        v105 = *(_DWORD*)(v104 + 8) & 0x7FFFFFFF;
        v106 = (float*)(*(_QWORD*)(v56 + 24) + 24LL * (unsigned int)v105);
        v107 = (float)(v106[3] - *v106) * 0x1.0000000000000p-1f;
        v108 = (float)(v106[4] - v106[1]) * 0x1.0000000000000p-1f;
        v109 = (float)(v106[5] - v106[2]) * 0x1.0000000000000p-1f;
        v71 += 4;
        *(float*)(v59 + 4 * v105) =
            (float)(PSEUDO_UNFUSED(
                v70 * GameRoutine_1a0a010(
                          (float)((float)(PSEUDO_UNFUSED(v108 * v108)) +
                                  (float)(v107 * v107)) +
                          (float)(v109 * v109)))) +
            (float)(v63 + *(float*)(*(_QWORD*)(v104 + 16) + 28LL));
      } while (v73 != 0);
      goto LABEL_72;
    }
  }
  else {
  LABEL_48:
    v41 = a2;
    v43 = v114;
    v44 = *(_DWORD*)(v114 + 4880) & 0x7FFFFFFF;
    if ((_DWORD)v44 != 0) {
      goto LABEL_52;
    }
  }
LABEL_55:
  *(_BYTE*)(v43 + 536) = v2 & 1;
}

#pragma GCC visibility pop
