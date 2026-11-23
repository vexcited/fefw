#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 GameRoutine_17b92d0(_QWORD, _QWORD, long double);
__int64 GameRoutine_a07d60(_QWORD, _QWORD, long double);
__int64 GmapSituation_14db2f0(_QWORD, long double);
__int64 GmapSpotInfoSetterForGmap_1657240(_QWORD, long double);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
bool LayoutAccessor_155ea30(_QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562f00(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1563030(_QWORD, _QWORD, _QWORD);
__int64 TroopMgr_13460a0(_QWORD);
__int64 game_19a0e60(_QWORD, long double);
__int64 game_19a14c0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gameui_1590260(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gmap_GmapSpotNameManager_Update(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(long double);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 game_telop_175cd90(__int64*);
__n128 std___1___shared_weak_count___release_weak();
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_20d8930[])();
extern __int64 (*GameData_211ea78[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64* GameData_2130e00;
extern __int64* GameData_2130e70;
extern __int64 GameData_2130e20;
extern __int64 GameData_2265728;
extern __int64 game_GameGlobalData_unknown_;
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
long double LayoutAccessor_15638b0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
float memory_17bc5a0(float32x4_t* a1);

float memory_17bc5a0(float32x4_t* a1)
{
  __int64* v2;
  unsigned __int32 v3;
  int16x4_t v4;
  float32x4_t v5;
  __int64 v6;
  __int64 v7;
  float v8;
  unsigned __int32 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int32 v14;
  int v15;
  unsigned __int32 v16;
  int v17;
  int v18;
  int v20;
  __int64* v21;
  int v22;
  __int64 v23;
  char v24;
  unsigned __int32 v25;
  int v26;
  unsigned __int32 v27;
  __int64 v28;
  unsigned __int64 v29;
  long double v30;
  __int64 v31;
  unsigned __int64 v32;
  long double v33;
  unsigned __int64 v34;
  long double v35;
  unsigned __int32 v36;
  __int64 v37;
  long double v38;
  float32x4_t* v39;
  __int64 v40;
  __int64 i;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  long double v46;
  char v47;
  __int64 v48;
  unsigned __int32 v49;
  unsigned __int32 v50;
  __int64 v51;
  long double v52;
  unsigned __int64 v53;
  int v54;
  signed __int32 v55;
  unsigned __int32 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  __int64** v60;
  __int64** v61;
  __int64* v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned __int32 v68;
  long double v69;
  unsigned __int32 v70;
  long double v71;
  unsigned __int32 v72;
  __n128 v73;
  float v74;
  __int64 v75;
  __int64 v76;
  float v77;
  float result;
  float32x4_t v79;
  float32x4_t* v80;
  unsigned __int32 v81;

  LANES128(a1[366]).n128_u32[3] = 0;
  v2 = GameData_212d718;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(*(_QWORD*)(*GameData_212d718 + 16) + 784LL) + 16LL))(
      (void*)&v79, *(_QWORD*)(*GameData_212d718 + 16) + 784LL);
  v3 = LANES128(v79).n128_u32[2];
  LANES64(v4).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v79, a1[368])))).n64_u64[0];
  if ((LANES64(v4).n64_u8[0] & 1) != 0 || (LANES64(v4).n64_u8[2] & 1) != 0 ||
      (LANES64(v4).n64_u8[4] & 1) != 0) {
    LANES128(a1[368]).n128_u64[0] = LANES128(v79).n128_u64[0];
    v5 = a1[368];
    LANES128(a1[366]).n128_u32[3] |= 1u;
    LANES128(v5).n128_u64[1] = v3;
    a1[368] = v5;
  }
  v6 = *(_QWORD*)(*v2 + 16);
  v7 = 656;
  if (*(_BYTE*)(v6 + 964) != 0) {
    v7 = 696;
  }
  v8 = (*(float (**)(__int64))(*(_QWORD*)(v6 + v7) + 16LL))(v6 + v7);
  if (v8 != LANES128(a1[367]).n128_f32[0]) {
    v9 = LANES128(a1[366]).n128_u32[3];
    LANES128(a1[367]).n128_f32[0] = v8;
    LANES128(a1[366]).n128_u32[3] = v9 | 2;
  }
  v10 = GameData_212d708;
  v11 = *GameData_212d708;
  v12 = *(_QWORD*)(*GameData_212d708 + 16);
  v13 = *(_QWORD*)(v12 + 96);
  if (v13 != LANES128(a1[369]).n128_u64[0]) {
    v14 = LANES128(a1[366]).n128_u32[3];
    LANES128(a1[369]).n128_u64[0] = v13;
    LANES128(a1[366]).n128_u32[3] = v14 | 4;
    v12 = *(_QWORD*)(v11 + 16);
  }
  v15 = *(unsigned __int8*)(v12 + 169);
  if (LANES128(a1[369]).n128_u8[8] != v15) {
    v16 = LANES128(a1[366]).n128_u32[3];
    LANES128(a1[369]).n128_u8[8] = v15;
    LANES128(a1[366]).n128_u32[3] = v16 | 8;
    v12 = *(_QWORD*)(v11 + 16);
  }
  v17 = *(unsigned __int8*)(v12 + 170);
  v18 = LANES128(a1[369]).n128_u8[9];
  if (LANES128(a1[369]).n128_u8[10] != v17 && v18 == v17) {
    LANES128(a1[366]).n128_u32[3] |= 0x10u;
    LOBYTE(v18) = v17;
  }
  LANES128(a1[369]).n128_u8[10] = v18;
  v20 = LANES128(a1[369]).n128_u8[11];
  LANES128(a1[369]).n128_u8[9] = *(_BYTE*)(*(_QWORD*)(v11 + 16) + 170LL);
  v21 = GameData_212c790;
  v22 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212c790 + 8) + 60LL);
  if (v20 != v22) {
    LANES128(a1[369]).n128_u8[11] = v22;
    LANES128(a1[366]).n128_u32[3] |= 0x20u;
  }
  v23 = *(_QWORD*)GameData_2130e20;
  if (LANES128(a1[369]).n128_u32[3] !=
      (unsigned int)((*(_QWORD*)(*(_QWORD*)GameData_2130e20 + 16LL) -
                      *(_QWORD*)(*(_QWORD*)GameData_2130e20 + 8LL)) >>
                     3)) {
    LANES128(a1[366]).n128_u32[3] |= 0x40u;
    LANES128(a1[369]).n128_u32[3] =
        (*(_QWORD*)(v23 + 16) - *(_QWORD*)(v23 + 8)) >> 3;
  }
  v24 = game_GameGlobalData_unknown_;
  if (game_GameGlobalData_unknown_ != 0) {
    v24 = *(_BYTE*)game_GameGlobalData_unknown_;
  }
  v25 = LANES128(a1[366]).n128_u32[3];
  v26 = v24 & 1;
  if (LANES128(a1[364]).n128_u8[14] != v26) {
    v25 |= 0x200u;
    LANES128(a1[364]).n128_u8[14] = v26;
    LANES128(a1[366]).n128_u32[3] = v25;
  }
  if (LANES128(a1[364]).n128_u8[11] == 1) {
    v25 |= 0x80u;
    LANES128(a1[364]).n128_u8[11] = 0;
    LANES128(a1[366]).n128_u32[3] = v25;
  }
  v27 = LANES128(a1[366]).n128_u32[0];
  if (((LANES128(a1[366]).n128_u32[1] ^ v27) & 2) != 0) {
    v25 |= 0x80u;
    LANES128(a1[366]).n128_u32[3] = v25;
  }
  if (LANES128(a1[364]).n128_u8[12] == 1) {
    v25 |= 0x100u;
    LANES128(a1[364]).n128_u8[12] = 0;
    LANES128(a1[366]).n128_u32[3] = v25;
  }
  if ((v27 & 0x10) != 0 &&
      (v28 = *(_QWORD*)(v11 + 16), (v29 = *(_QWORD*)(v28 + 96)) != 0) &&
      ((*(__int64 (**)(__int64*, _QWORD))(LANES128(a1[353]).n128_u64[1] + 16))(
           &LANES128(a1[353]).n128_i64[1], *(_QWORD*)(v28 + 96)) &
       1) != 0) {
    if ((v25 & 4) != 0 || (LANES128(a1[364]).n128_u8[8] & 1) == 0) {
      LayoutAccessor_1562cf0(LANES128(a1[1]).n128_u64[0], "In");
      LayoutAccessor_1560070((void*)(&v79), LANES128(a1[1]).n128_u64[0],
                             "L_SpotDetail");
      if (((*(__int64 (**)(__int64*, unsigned __int64))(
               LANES128(a1[353]).n128_u64[1] + 16))(
               &LANES128(a1[353]).n128_i64[1], v29) &
           1) != 0) {
        v31 = LANES128(v79).n128_i64[1];
        if (LANES128(v79).n128_u64[1] != 0) {
          v31 = std___1___shared_weak_count_lock(LANES128(v79).n128_u64[1]);
          v32 = LANES128(v79).n128_u64[0];
          if (v31 == 0) {
            v32 = 0;
          }
        }
        else {
          v32 = 0;
        }
        v66 = LANES128(a1[354]).n128_u64[1];
        LANES128(a1[354]).n128_u64[0] = v32;
        LANES128(a1[354]).n128_u64[1] = v31;
        if (v66 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)v66 + 16LL))(v66);
            *(__n128*)&v30 = std___1___shared_weak_count___release_weak();
          }
          v32 = LANES128(a1[354]).n128_u64[0];
        }
        if (v32 != 0) {
          LANES128(a1[355]).n128_u64[0] = v29;
          GmapSpotInfoSetterForGmap_1657240(&a1[356], v30);
          (*(void (**)(__int64*))(LANES128(a1[353]).n128_u64[1] + 24))(
              &LANES128(a1[353]).n128_i64[1]);
        }
      }
      if (LANES128(v79).n128_u64[1] != 0) {
        std___1___shared_weak_count___release_weak();
      }
      LANES128(a1[364]).n128_u8[8] = 1;
    }
  }
  else if (LANES128(a1[364]).n128_u8[8] == 1) {
    if ((LayoutAccessor_155ea30(LANES128(a1[1]).n128_u64[0]) & 1) != 0 &&
        (LANES128(a1[366]).n128_u8[0] & 0x10) != 0) {
      LODWORD(v33) = 1.0;
      LayoutAccessor_1562680(LANES128(a1[1]).n128_u64[0], "Out", v33);
    }
    else {
      v34 = LANES128(a1[1]).n128_u64[0];
      LODWORD(v33) = 1.0;
      LayoutAccessor_1562680(v34, "Out", v33);
      v35 = LayoutAccessor_15638b0(v34, "Out", 0);
      LayoutAccessor_1562f00(v34, "Out", v35);
      LayoutAccessor_1563030(v34, "Out", 0);
    }
    LANES128(a1[364]).n128_u8[8] = 0;
  }
  v36 = LANES128(a1[366]).n128_u32[0];
  *(__n128*)&v38 = ui_LayoutAccessor_SetPaneVisible(LANES128(a1[1]).n128_u64[0],
                                                    "N_Spot", v36 & 1);
  if ((v36 & 1) != 0) {
    v39 = &v79;
    LANES128(v79).n128_u64[0] = (unsigned __int64)GameData_211ea78;
    v80 = &v79;
    v40 = 11880;
    for (i = GameData_2265728 + 24;; i += 120) {
      (*(void (**)(float32x4_t*, __int64, long double))(
          LANES128(*(v39)).n128_u64[0] + 48))(v39, i, v38);
      if (v40 == 0) {
        break;
      }
      v39 = v80;
      v40 -= 120;
      if (v80 == nullptr) {
        GameRoutine_60a310(0, v42);
      }
    }
    if (v80 == &v79) {
      v43 = 32;
    }
    else {
      if (v80 == nullptr) {
      LABEL_59:
        v37 = game_gmap_GmapSpotNameManager_Update(
            GameData_2265728, (char*)&LANES128(a1[366]).n128_f64[1] + 4);
        goto LABEL_60;
      }
      v43 = 40;
    }
    (*(void (**)(void))(LANES128(*(v80)).n128_u64[0] + v43))();
    goto LABEL_59;
  }
LABEL_60:
  v44 = LANES128(a1[364]).n128_u8[15];
  v45 = GmapSituation_14db2f0(v37, v38);
  if (v44 != (v45 & 1)) {
    v47 = GmapSituation_14db2f0(v45, v46);
    LANES128(a1[364]).n128_u8[15] = v47 & 1;
    if ((v47 & 1) == 0 && game_hub_ProgressEventView_instance_ != 0) {
      v48 = LayoutAccessor_155fbe0(game_hub_ProgressEventView_instance_ + 168,
                                   "L_Task");
      *(__n128*)&v46 = ui_LayoutAccessor_SetPaneVisible(v48, "N_DagsionHp", 0);
    }
  }
  if (LANES128(a1[364]).n128_u8[15] == 1) {
    v49 = *(_DWORD*)(*GameData_2130e70 + 48);
    if (LANES128(a1[365]).n128_u32[0] != v49) {
      LANES128(a1[365]).n128_u32[0] = v49;
      if (game_hub_ProgressEventView_instance_ != 0) {
        GameRoutine_17b92d0(game_hub_ProgressEventView_instance_, 1, v46);
      }
    }
  }
  if ((LANES128(a1[366]).n128_u8[0] & 0x20) == 0) {
    ui_LayoutAccessor_SetPaneVisible(LANES128(a1[1]).n128_u64[0], "L_Corps", 0);
    goto LABEL_119;
  }
  v50 = LANES128(a1[366]).n128_u32[3];
  LayoutAccessor_1560070((void*)(&v79), LANES128(a1[1]).n128_u64[0], "L_Corps");
  if (LANES128(v79).n128_u64[1] != 0) {
    v51 = std___1___shared_weak_count_lock(LANES128(v79).n128_u64[1]);
    v53 = LANES128(v79).n128_u64[0];
    if (LANES128(v79).n128_u64[1] != 0) {
      *(__n128*)&v52 = std___1___shared_weak_count___release_weak();
    }
    if (v51 == 0 || v53 == 0) {
      if (v51 == 0) {
        goto LABEL_119;
      }
      goto LABEL_117;
    }
    v54 = v50 & 0x14;
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v55 = *(_DWORD*)(*(_QWORD*)(*v21 + 8) + 56LL);
      v81 = v55;
      if ((v55 & 0x80000000) == 0 ||
          (LANES128(v79).n128_u64[1] = (unsigned __int64)&GameData_1ade186,
           LANES128(v79).n128_u64[0] = game_HashString(&GameData_1ade186),
           game_GameModeData_instance_ == 0) ||
          (v64 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), &v79)) == 0 ||
          *(int*)(v64 + 32) < 1) {
      LABEL_78:
        if (v54 != 0 || LANES128(a1[365]).n128_u32[2] != v55) {
          LayoutAccessor_155e830(v53, v55 >= 0);
          v56 = v81;
          if ((v81 & 0x80000000) == 0) {
            game_gameui_1590260(v53, 0, 1, 0, v81);
            v56 = v81;
          }
          LANES128(a1[365]).n128_u32[2] = v56;
        }
        goto LABEL_117;
      }
      LANES128(v79).n128_u64[0] = (unsigned __int64)GameData_20d8930;
      LANES128(v79).n128_u64[1] = (unsigned __int64)&v81;
      v80 = &v79;
      TroopMgr_13460a0(&v79);
      if (v80 == &v79) {
        v65 = 32;
      }
      else {
        if (v80 == nullptr) {
        LABEL_133:
          v55 = v81;
          goto LABEL_78;
        }
        v65 = 40;
      }
      (*(void (**)(void))(LANES128(*(v80)).n128_u64[0] + v65))();
      goto LABEL_133;
    }
    if (v54 == 0) {
    LABEL_117:
      if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
        std___1___shared_weak_count___release_weak();
      }
      goto LABEL_119;
    }
    if ((LANES128(a1[365]).n128_u8[4] & 1) != 0) {
      LayoutAccessor_155e830(v53, 1);
    LABEL_116:
      game_gameui_1590260(v53, 0, 1, 0, 0xFFFFFFFFLL);
      goto LABEL_117;
    }
    v57 = *(_QWORD*)(*(_QWORD*)(*v10 + 16) + 96LL);
    v58 = *(_QWORD*)(*v21 + 8);
    v59 = *(_DWORD*)(v58 + 56);
    v60 = *(__int64***)(v58 + 8);
    v61 = *(__int64***)(v58 + 16);
    if (v59 < 0) {
      for (; v60 != v61; ++v60) {
        v62 = *v60;
        if ((*v60)[12] == 0 && v62[69] == 0) {
          goto LABEL_114;
        }
      }
    }
    else if (v60 != v61) {
      while (1) {
        v63 = *v60++;
        v62 = v63;
        if (*((_DWORD*)v63 + 21) == v59) {
          break;
        }
        if (v60 == v61) {
          goto LABEL_110;
        }
      }
    LABEL_114:
      v67 = *v62;
    LABEL_115:
      LayoutAccessor_155e830(v53, v57 == v67);
      if (v57 != v67) {
        goto LABEL_117;
      }
      goto LABEL_116;
    }
  LABEL_110:
    v67 = game_gmap_SpotMgr_GetCurrentSpot(v52);
    goto LABEL_115;
  }
LABEL_119:
  v68 = LANES128(a1[366]).n128_u32[0];
  *(__n128*)&v69 = ui_LayoutAccessor_SetPaneVisible(LANES128(a1[1]).n128_u64[0],
                                                    "N_Unit", (v68 & 4) != 0);
  if ((v68 & 4) != 0) {
    if ((LANES128(a1[366]).n128_u16[6] & 0x214) != 0 ||
        LANES128(a1[364]).n128_u8[13] == 1) {
      LANES128(a1[364]).n128_u8[13] = 0;
      game_19a0e60(&a1[2], v69);
    }
    game_19a14c0(&a1[2]);
  }
  v70 = LANES128(a1[366]).n128_u32[0];
  *(__n128*)&v71 = ui_LayoutAccessor_SetPaneVisible(
      LANES128(a1[1]).n128_u64[0], "N_Command", (v70 & 8) != 0);
  if ((v70 & 8) != 0) {
    GameRoutine_a07d60(&LANES128(a1[358]).n128_i8[8],
                       (char*)&LANES128(a1[366]).n128_f64[1] + 4, v71);
  }
  v72 = LANES128(a1[366]).n128_u32[0];
  v73 = ui_LayoutAccessor_SetPaneVisible(LANES128(a1[1]).n128_u64[0],
                                         "L_MiniMap", (v72 & 0x40) != 0);
  if ((v72 & 0x40) != 0) {
    v73 = game_telop_175cd90(&LANES128(a1[362]).n128_i64[1]);
  }
  v74 = *(float*)(*GameData_2130e00 + 8);
  v75 = *(_QWORD*)(*v2 + 16);
  v76 = 656;
  if (*(_BYTE*)(v75 + 964) != 0) {
    v76 = 696;
  }
  v77 = (*(float (**)(__int64, long double))(*(_QWORD*)(v75 + v76) + 16LL))(
      v75 + v76, *(long double*)&v73);
  LANES128(a1[366]).n128_u32[1] = LANES128(a1[366]).n128_u32[0];
  result = v74 + (float)((float)(1.0 - v74) * (float)(v77 * v77));
  LANES128(a1[365]).n128_f32[3] = result;
  return result;
}

#pragma GCC visibility pop
