#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 BasicSound_282380(__int64 result, int, float);
__int64 BasicSound_282400(__int64 result, char, float);
__int64 BasicSound_282460(__int64 result, int, float);
__int64 BasicSound_282520(__int64, unsigned int, _DWORD*);
__int64 GameRoutine_2823e0(float);
__int64 GameRoutine_2823f0(__n128);
__int64 GameRoutine_282420(_QWORD, _QWORD);
__int64 GameRoutine_282430(float);
__int64 GameRoutine_282440(float);
__int64 GameRoutine_282450(float);
__int64 Voice_149440(__int64);
__int64 Voice_1494e0(__int64);
__int64 Voice_149580(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_Voice_getBufferOutputLine(__int64);
__int64 snd_Voice_isForcedFront(__int64);
bool GameRoutine_27be00(_QWORD*);
bool SeqVoice_1471b0(__int64);
extern __int64 snd_g_proxy;
extern float snd_g_semitoneRatios[170];
extern unsigned int GameData_1b0a2dc[6];
float Voice_149830(__int64);
float Voice_1498c0(__int64);
float Voice_149930(__int64);
float Voice_1499b0(__int64);
float snd_Voice_calcVolumeScale(__int64);
void* BaseNx_2a1b90();
__int64 snd_target_1601d0(__int64 a1, __int64 a2, __int64 a3, char a4);

__int64 snd_target_1601d0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  void* v8;
  __int64* v9;
  int v10;
  char v11;
  char v12;
  float v13;
  float v14;
  int v15;
  float v16;
  float v17;
  int v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  int v28;
  int v29;
  float v30;
  float v31;
  float v32;
  int v33;
  unsigned int v34;
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
  __int64 v45;
  __int64 v46;
  __n128 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  __int64 v59;
  __int64 v60;
  bool v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  float v68;
  int v69;
  __int64 v70;
  char v71;
  __int64 v72;
  char v73;
  __int64 v74;
  float v75;
  void* v76;
  float v78;
  float v79;
  float v80;
  float v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  float v84;
  float v85;
  __int64 v86;
  __int64 v87;
  int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int v92;
  float v93;
  float v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;

  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v8 = BaseNx_2a1b90(),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  nn_os_LockMutex((__int64)v8 + 840),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v9 = (__int64*)(a3 + 32);
  if (*(_QWORD*)(a3 + 32) == 0) {
    goto LABEL_135;
  }
  if ((a4 & 1) == 0) {
    v87 = 0x3F8000003F800000LL;
    v86 = 0x3F8000003F800000LL;
    v88 = 1065353216;
    v92 = 1065353216;
    v90 = 0x3F8000003F800000LL;
    v91 = 0x3F8000003F800000LL;
    v89 = 0x3F8000003F800000LL;
    v97 = 0x3F8000003F800000LL;
    v95 = 0x3F8000003F800000LL;
    v96 = 0x3F8000003F800000LL;
    v98 = 0x3F8000003F800000LL;
    v100 = 0x3F8000003F800000LL;
    v99 = 0x3F8000003F800000LL;
    GameRoutine_27be00((_QWORD*)(a3 + 32)),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    (*(void (**)(__int64, float))(*(_QWORD*)a2 + 528LL))(a2, v93* v94),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 240LL))(snd_g_proxy),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 224LL))(snd_g_proxy),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 232LL))(snd_g_proxy),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v10 == 1) {
    v13 = snd_Voice_calcVolumeScale(a2),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v14 = 0x0.0p+0f;
    if (v13 < 0x0.0p+0f) {
      goto LABEL_12;
    }
    if (v13 <= 0x1.0000000000000p+7f) {
      goto LABEL_7;
    }
  }
  else {
    v13 = Voice_149830(a2),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v14 = 0x0.0p+0f;
    if (v13 < 0x0.0p+0f) {
      goto LABEL_12;
    }
    if (v13 <= 0x1.0000000000000p+7f) {
    LABEL_7:
      v14 = v13;
      if ((v11 & 1) == 0) {
        goto LABEL_21;
      }
      goto LABEL_13;
    }
  }
  v14 = 0x1.0000000000000p+7f;
LABEL_12:
  if ((v11 & 1) == 0) {
    goto LABEL_21;
  }
LABEL_13:
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 320LL))(snd_g_proxy),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v16 = Voice_1498c0(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v15 != 0) {
    v17 = 0x0.0p+0f;
    if (v16 >= 0x0.0p+0f) {
      v17 = v16;
      if (v16 > 0x1.0000000000000p+7f) {
        v17 = 0x1.0000000000000p+7f;
      }
    }
    v14 = v14 * v17;
  }
  else {
    v14 = 0x0.0p+0f;
    if (v16 >= 0x0.0p+0f) {
      v14 = v16;
      if (v16 > 0x1.0000000000000p+7f) {
        v14 = 0x1.0000000000000p+7f;
      }
    }
  }
LABEL_21:
  if ((v12 & 1) != 0) {
    v18 =
        (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 320LL))(snd_g_proxy),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v19 = Voice_149930(a2),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v18 != 0) {
      v20 = 0x0.0p+0f;
      if (v19 >= 0x0.0p+0f) {
        v20 = v19;
        if (v19 > 0x1.0000000000000p+7f) {
          v20 = 0x1.0000000000000p+7f;
        }
      }
      v14 = v14 * v20;
    }
    else {
      v14 = 0x0.0p+0f;
      if (v19 >= 0x0.0p+0f) {
        v14 = v19;
        if (v19 > 0x1.0000000000000p+7f) {
          v14 = 0x1.0000000000000p+7f;
        }
      }
    }
  }
  v21 = v14 * (*(float (**)(__int64))(*(_QWORD*)a2 + 536LL))(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v22 = 0x0.0p+0f;
  if (v21 >= 0x0.0p+0f) {
    v22 = v21;
    if (v21 > 0x1.0000000000000p+7f) {
      v22 = 0x1.0000000000000p+7f;
    }
  }
  v23 = (*(float (**)(__int64))(*(_QWORD*)a2 + 544LL))(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v24 = -0x1.0000000000000p+1f;
  if (v23 >= -0x1.0000000000000p+1f) {
    v24 = v23;
    if (v23 > 0x1.0000000000000p+1f) {
      v24 = 0x1.0000000000000p+1f;
    }
  }
  v25 = (*(float (**)(__int64))(*(_QWORD*)a2 + 552LL))(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v26 = -0x1.0000000000000p+1f;
  if (v25 >= -0x1.0000000000000p+1f) {
    v26 = v25;
    if (v25 > 0x1.0000000000000p+1f) {
      v26 = 0x1.0000000000000p+1f;
    }
  }
  v27 = (*(float (**)(__int64))(*(_QWORD*)a2 + 560LL))(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((int)(float)(v27 * 0x1.8000000000000p+3f) <= -84) {
    v28 = -84;
  }
  else {
    v28 = (int)(float)(v27 * 0x1.8000000000000p+3f);
  }
  if (v28 >= 84) {
    v29 = 84;
  }
  else {
    v29 = v28;
  }
  v30 = -(
      float)((float)(int)(float)(PSEUDO_UNFUSED(v27 * 0x1.8000000000000p+3f)) -
             (float)(v27 * 0x1.8000000000000p+3f));
  v31 = snd_g_semitoneRatios[v29 + 84];
  if (v30 <= 0x0.0p+0f) {
    if (v29 <= -83) {
      v33 = -83;
    }
    else {
      v33 = v29;
    }
    v32 = v31 - snd_g_semitoneRatios[v33 + 83];
  }
  else {
    if (v28 >= 83) {
      v28 = 83;
    }
    v32 = snd_g_semitoneRatios[v28 + 85] - v31;
  }
  v79 = v32;
  v34 = snd_Voice_getBufferOutputLine(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v35 = (*(float (**)(__int64))(*(_QWORD*)a2 + 568LL))(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v36 = 0x0.0p+0f;
  v37 = 0x0.0p+0f;
  if (v35 >= 0x0.0p+0f) {
    v37 = v35;
    if (v35 > 0x1.0000000000000p+0f) {
      v37 = 0x1.0000000000000p+0f;
    }
  }
  v38 = (*(float (**)(__int64))(*(_QWORD*)a2 + 576LL))(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v38 >= 0x0.0p+0f) {
    v36 = v38;
    if (v38 > 0x1.0000000000000p+0f) {
      v36 = 0x1.0000000000000p+0f;
    }
  }
  v39 = Voice_1499b0(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v81 = 0x0.0p+0f;
  v40 = 0x0.0p+0f;
  if (v39 >= 0x0.0p+0f) {
    v40 = v39;
    if (v39 > 0x1.0000000000000p+0f) {
      v40 = 0x1.0000000000000p+0f;
    }
  }
  v41 = (*(float (**)(__int64))(*(_QWORD*)a2 + 584LL))(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v41 >= 0x0.0p+0f) {
    v81 = v41;
    if (v41 > 0x1.0000000000000p+0f) {
      v81 = 0x1.0000000000000p+0f;
    }
  }
  v42 = (*(float (**)(__int64))(*(_QWORD*)a2 + 592LL))(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v43 = 0x0.0p+0f;
  v80 = 0x0.0p+0f;
  if (v42 >= 0x0.0p+0f) {
    v43 = v42;
    if (v42 > 0x1.0000000000000p+0f) {
      v43 = 0x1.0000000000000p+0f;
    }
  }
  v78 = v43;
  v44 = (*(float (**)(__int64))(*(_QWORD*)a2 + 600LL))(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v44 >= 0x0.0p+0f) {
    v80 = v44;
    if (v44 > 0x1.0000000000000p+0f) {
      v80 = 0x1.0000000000000p+0f;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)a2 + 608LL))(a2),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)a2 + 616LL))(a2),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v45 = a2 + 40;
  (*(void (**)(__int64))(*(_QWORD*)(a2 + 40) + 840LL))(a2 + 40),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)(a2 + 40) + 848LL))(a2 + 40),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)(a2 + 40) + 856LL))(a2 + 40),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)(a2 + 40) + 864LL))(a2 + 40),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)(a2 + 40) + 872LL))(a2 + 40),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)(a2 + 40) + 880LL))(a2 + 40),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v48 = *v9;
  if ((a4 & 1) != 0) {
    v40 = -0x1.0000000000000p+0f;
    v26 = -0x1.0000000000000p+1f;
  }
  DWORD1(v47) = 0;
  if ((a4 & 1) != 0) {
    v24 = 0x0.0p+0f;
  }
  if (v48 != 0) {
    BasicSound_282380(v48, 0, v22),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    if (*v9 != 0) {
      GameRoutine_282430(v24),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
      if (*v9 != 0) {
        GameRoutine_282440(v26),
            v46 = COERCE_AS(__typeof__(v46),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
        if (*v9 != 0) {
          GameRoutine_2823e0(v31 + (float)(v79 * v30)),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
    }
  }
  if (*(float*)(a3 + 40) != v37) {
    v49 = *(_QWORD*)(a3 + 32);
    *(float*)(a3 + 40) = v37;
    if (v37 <= 0x0.0p+0f) {
      *(_QWORD*)&v47 = 0;
      if (v49 != 0) {
        goto LABEL_85;
      }
    }
    else if (v49 != 0) {
      *(float*)&v47 = -v37;
    LABEL_85:
      GameRoutine_2823f0(v47),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    }
  }
  if (*(float*)(a3 + 44) != v36 || *(_DWORD*)(a3 + 48) != v34) {
    *(float*)(a3 + 44) = v36;
    *(_DWORD*)(a3 + 48) = v34;
    if (v36 <= 0x0.0p+0f) {
      v50 = *v9;
      if (*v9 == 0) {
        goto LABEL_97;
      }
      v51 = 0x0.0p+0f;
      LOBYTE(v46) = -1;
    }
    else {
      if (v34 > 5) {
        v46 = 0;
        v50 = *v9;
        if (*v9 == 0) {
          goto LABEL_97;
        }
      }
      else {
        v46 = GameData_1b0a2dc[v34];
        v50 = *v9;
        if (*v9 == 0) {
          goto LABEL_97;
        }
      }
      v51 = v36;
    }
    BasicSound_282400(v50, v46, v51),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  }
LABEL_97:
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v45 + 720LL))(a2 + 40,
                                                                  v46) &
       1) != 0) {
    v52 = (*(float (**)(__int64, _QWORD))(*(_QWORD*)v45 + 736LL))(a2 + 40, 0),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v53 = (*(float (**)(__int64, __int64))(*(_QWORD*)v45 + 736LL))(a2 + 40, 1),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v54 = (*(float (**)(__int64, __int64))(*(_QWORD*)v45 + 736LL))(a2 + 40, 5),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v55 = (*(float (**)(__int64, __int64))(*(_QWORD*)v45 + 736LL))(a2 + 40, 2),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v56 = (*(float (**)(__int64, __int64))(*(_QWORD*)v45 + 736LL))(a2 + 40, 3),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    (*(void (**)(__int64, __int64))(*(_QWORD*)v45 + 736LL))(a2 + 40, 4),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    if (*v9 != 0) {
      v58 = v57;
      GameRoutine_282420(*v9, 1),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
      v59 = *v9;
      if (*v9 != 0) {
        v82 = __PAIR64__(LODWORD(v53), LODWORD(v52));
        v83 = __PAIR64__(LODWORD(v56), LODWORD(v55));
        v84 = v58;
        v85 = v54;
        BasicSound_282520(v59, 0, &v82),
            v46 = COERCE_AS(__typeof__(v46),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
        v60 = *v9;
        v82 = __PAIR64__(LODWORD(v53), LODWORD(v52));
        v83 = __PAIR64__(LODWORD(v56), LODWORD(v55));
        v84 = v58;
        v85 = v54;
        BasicSound_282520(v60, 1u, &v82),
            v46 = COERCE_AS(__typeof__(v46),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
    goto LABEL_135;
  }
  v61 = SeqVoice_1471b0(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v62 = *v9;
  if ((a4 & 1) == 0 && v61) {
    if (v62 == 0) {
      goto LABEL_135;
    }
    GameRoutine_282420(v62, 1),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v63 = *v9;
    if (*v9 == 0) {
      goto LABEL_135;
    }
    v82 = 0;
    v83 = 0;
    v84 = v40;
    v85 = 0x0.0p+0f;
    BasicSound_282520(v63, 0, &v82),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v64 = *v9;
    v82 = 0;
    v83 = 0;
    v84 = v40;
    v85 = 0x0.0p+0f;
    BasicSound_282520(v64, 1u, &v82),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v65 = *v9;
    if (*v9 == 0) {
      goto LABEL_135;
    }
    goto LABEL_106;
  }
  if (v62 != 0) {
    GameRoutine_282420(v62, 0),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if (*(_BYTE*)(a2 + 5907) == 1) {
    if (*v9 == 0) {
      goto LABEL_135;
    }
    GameRoutine_282450(v40),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    if (*v9 == 0) {
      goto LABEL_135;
    }
    BasicSound_282460(*v9, 0, 0x1.0000000000000p+0f),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v66 = *v9;
    if (*v9 == 0) {
      goto LABEL_135;
    }
    goto LABEL_114;
  }
  if ((*(_BYTE*)(a2 + 5908) & 1) != 0 ||
      (snd_Voice_isForcedFront(a2) & 1) != 0) {
    if (*(_BYTE*)(a1 + 18) == 1) {
      v70 = *v9;
    }
    else {
      v71 = snd_Voice_isForcedFront(a2),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
      v70 = *v9;
      if ((v71 & 1) == 0) {
        if (v70 == 0) {
          goto LABEL_135;
        }
        GameRoutine_282450(v40),
            v46 = COERCE_AS(__typeof__(v46),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
        v72 = *v9;
        if (*v9 == 0) {
          goto LABEL_135;
        }
        goto LABEL_131;
      }
    }
    if (v70 == 0) {
      goto LABEL_135;
    }
    GameRoutine_282450(-0x1.0000000000000p+0f),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v72 = *v9;
    if (*v9 == 0) {
      goto LABEL_135;
    }
  LABEL_131:
    BasicSound_282460(v72, 0, v81),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    if (*v9 == 0) {
      goto LABEL_135;
    }
    BasicSound_282460(*v9, 2, v80),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    v67 = *v9;
    if (*v9 == 0) {
      goto LABEL_135;
    }
    v68 = 0x1.0000000000000p+0f;
    v69 = 1;
  LABEL_134:
    BasicSound_282460(v67, v69, v68),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    goto LABEL_135;
  }
  if ((*(_BYTE*)(a2 + 5910) & 1) == 0 && (Voice_149440(a2) & 1) == 0) {
    if ((*(_BYTE*)(a2 + 5912) & 1) != 0) {
      if ((*(_BYTE*)(a2 + 5914) & 1) != 0) {
        goto LABEL_144;
      }
    }
    else {
      Voice_1494e0(a2),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
      if ((*(_BYTE*)(a2 + 5914) & 1) != 0) {
      LABEL_144:
        if (*v9 == 0) {
          goto LABEL_135;
        }
      LABEL_148:
        GameRoutine_282450(v40),
            v46 = COERCE_AS(__typeof__(v46),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = *v9;
        if (*v9 == 0) {
          goto LABEL_135;
        }
      LABEL_106:
        BasicSound_282460(v65, 0, v81),
            v46 = COERCE_AS(__typeof__(v46),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
        v66 = *v9;
        if (*v9 == 0) {
          goto LABEL_135;
        }
      LABEL_114:
        BasicSound_282460(v66, 1, v78),
            v46 = COERCE_AS(__typeof__(v46),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
        v67 = *v9;
        if (*v9 == 0) {
          goto LABEL_135;
        }
        v68 = v80;
        v69 = 2;
        goto LABEL_134;
      }
    }
    Voice_149580(a2),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    if (*v9 == 0) {
      goto LABEL_135;
    }
    goto LABEL_148;
  }
  v73 = Voice_149440(a2),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  v74 = *v9;
  if ((v73 & 1) != 0) {
    if (v74 == 0) {
      goto LABEL_135;
    }
    v75 = -0x1.0000000000000p+0f;
  }
  else {
    if (v74 == 0) {
      goto LABEL_135;
    }
    v75 = v40;
  }
  GameRoutine_282450(v75),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*v9 != 0) {
    BasicSound_282460(*v9, 0, v81),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
    if (*v9 != 0) {
      BasicSound_282460(*v9, 1, v78),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
      v67 = *v9;
      if (*v9 != 0) {
        v68 = 0x1.0000000000000p+0f;
        v69 = 2;
        goto LABEL_134;
      }
    }
  }
LABEL_135:
  v76 = BaseNx_2a1b90(),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w"));
  return nn_os_UnlockMutex((__int64)v76 + 840);
}

#pragma GCC visibility pop
