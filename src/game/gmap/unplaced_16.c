#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_167f6d0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
__int64 GameRoutine_14d5420(__int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_adfc40(__int64);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
char* Registration_a4db40(__int64, _BYTE*);
__int64 ScoutBaseProc_f6c060(__int64, __int64*, const char*, __int64, __int64,
                             __int64);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
bool BanquetManager_96bae0(__int64);
char* GameRoutine_adf880(__int64, char);
extern _UNKNOWN GameData_1bc5e58;
extern __int64 (*GameData_2026838[])();
extern __int64 (*GameData_20268b8[])();
extern __int64 (*GameData_2026938[])();
extern __int64 (*GameData_20269b8[])();
extern __int64 (*GameData_2026a38[])();
extern __int64 (*GameData_2026ab8[])();
extern __int64 (*GameData_20728a8[])();
extern __int64 (*GameData_2072928[])();
extern __int64 (*GameData_2080368[])();
extern __int64 (*GameData_20803e8[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64 (*game_sound_PlayDecideSe_ptr[7])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d2b8;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21316c8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char** msg_MessageManager_empty_text__ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
void BasicMenu_16e1f40(_QWORD*, __int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_gmap_131d2a0(__int64 a1);
bool game_gmap_16425d0(__int64 a1);
__int64 (***game_gmap_167d790(_QWORD* a1))();

__int64 game_gmap_131d2a0(__int64 a1)
{
  unsigned int v2;
  __int64 result;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64* v12;
  __int64 v13;
  int v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  int v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 (*v55)();
  char* v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 (*v63)();
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  struct {
    _WORD v73[8];
    char* v74;
  } v73_;
  struct {
    _QWORD v75[2];
    char* v76;
  } v75_;
  struct {
    _QWORD v77[4];
    _QWORD* v78;
  } v77_;
  struct {
    _QWORD v79[4];
    _QWORD* v80;
  } v79_;
  struct {
    _QWORD v81[4];
    _QWORD* v82;
  } v81_;
  char* v83;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = *(unsigned __int8*)(a1 + 86);
  result = 1;
  if (v2 > 2) {
    if (v2 - 3 < 3) {
      v4 = GameData_212c790;
      v5 = *(_QWORD*)(*GameData_212c790 + 8);
      v6 = *(_DWORD*)(v5 + 56);
      v7 = *(__int64**)(v5 + 8);
      v8 = *(__int64**)(v5 + 16);
      if (v6 < 0) {
        if (v7 != v8) {
          while (1) {
            v9 = *v7;
            if (*(_QWORD*)(*v7 + 96) == 0 && *(_QWORD*)(v9 + 552) == 0) {
              break;
            }
            if (++v7 == v8) {
              goto LABEL_23;
            }
          }
        LABEL_24:
          v15 = *(_DWORD*)(v9 + 540);
          v16 = __OFSUB__(v15, 1);
          v17 = (unsigned int)(v15 - 1);
          if (((v17 & 0x80000000) != 0LL) == v16) {
            v18 = *(_QWORD*)(v9 + 24);
            v19 = *(_QWORD*)(v9 + 32) - v18;
            v20 = v18 + 8LL * (unsigned int)v17;
            if (v17 < v19 >> 3) {
              v9 = v20;
            }
          }
          if ((GameRoutine_adfc40(*(_QWORD*)(*(_QWORD*)v9 + 120LL)) & 1) != 0) {
            v21 = *(unsigned __int8*)(a1 + 86);
            LOWORD(v75_.v75[0]) = 0;
            v22 = v21 - 3;
            if (v22 <= 2) {
              GameRoutine_60a020(
                  (__int64)v75_.v75,
                  (const char*)&GameData_1bc5e58 +
                      *((int*)&GameData_1bc5e58 + (unsigned __int8)v22));
            }
            v23 = *v4;
            v73_.v73[0] = 0;
            v24 = *(_QWORD*)(v23 + 8);
            v25 = *(__int64**)(v24 + 8);
            v26 = *(__int64**)(v24 + 16);
            v27 = *(_DWORD*)(v24 + 56);
            if (v27 < 0) {
              if (v25 != v26) {
                while (1) {
                  v28 = (__int64*)*v25;
                  if (*(_QWORD*)(*v25 + 96) == 0 && v28[69] == 0) {
                    break;
                  }
                  if (++v25 == v26) {
                    goto LABEL_54;
                  }
                }
              LABEL_55:
                v41 = *((_DWORD*)v28 + 135);
                v16 = __OFSUB__(v41, 1);
                v42 = (unsigned int)(v41 - 1);
                if (((v42 & 0x80000000) != 0LL) == v16) {
                  v43 = v28[3];
                  v44 = v28[4] - v43;
                  v45 = (__int64*)(v43 + 8LL * (unsigned int)v42);
                  if (v42 < v44 >> 3) {
                    v28 = v45;
                  }
                }
                v46 = *v28;
                if (v46 != 0) {
                  v47 = *(_QWORD*)(v46 + 120);
                  if (v47 != 0) {
                    v48 = GameRoutine_adf880(v47, 0);
                    if (v48 != nullptr && *v48 != 0) {
                      v49 = (const char*)Registration_a4db40(
                          *msg_MessageManager_instance__ptr[0], (_BYTE*)v48);
                    }
                    else {
                      v49 = *msg_MessageManager_empty_text__ptr;
                    }
                    GameRoutine_60a020((__int64)v73_.v73, v49);
                  }
                }
                v56 = v75_.v76;
                v57 = *(_QWORD*)(a1 + 8);
                if ((v75_.v75[0] & 1) == 0) {
                  v56 = (char*)v75_.v75 + 1;
                }
                v83 = v56;
                v77_.v78 = v77_.v77;
                v81_.v81[0] = GameData_2026938;
                v81_.v81[1] = a1;
                if ((v73_.v73[0] & 1) != 0) {
                  v58 = v73_.v74;
                }
                else {
                  v58 = (char*)v73_.v73 + 1;
                }
                v79_.v80 = v79_.v79;
                v81_.v82 = v81_.v81;
                v79_.v79[0] = GameData_20269b8;
                v77_.v77[0] = GameData_20269b8;
                v59 = ScoutBaseProc_f6c060(v57, (__int64*)&v83, v58,
                                           (__int64)v81_.v81, (__int64)v79_.v79,
                                           (__int64)v77_.v77);
                if (v77_.v78 == v77_.v77) {
                  v60 = 32;
                }
                else {
                  if (v77_.v78 == nullptr) {
                    goto LABEL_100;
                  }
                  v60 = 40;
                }
                (*(void (**)(__int64))(*v77_.v78 + v60))((__int64)v77_.v78);
              LABEL_100:
                if (v79_.v80 == v79_.v79) {
                  v61 = 32;
                }
                else {
                  if (v79_.v80 == nullptr) {
                    goto LABEL_105;
                  }
                  v61 = 40;
                }
                (*(void (**)(__int64))(*v79_.v80 + v61))((__int64)v79_.v80);
              LABEL_105:
                if (v81_.v82 == v81_.v81) {
                  v62 = 32;
                }
                else {
                  if (v81_.v82 == nullptr) {
                    goto LABEL_110;
                  }
                  v62 = 40;
                }
                (*(void (**)(__int64))(*v81_.v82 + v62))((__int64)v81_.v82);
              LABEL_110:
                if (*(_BYTE*)(a1 + 86) == 4) {
                  v63 = game_sound_PlayDecideSe_ptr[0];
                }
                else {
                  v63 = game_sound_PlayDecideLightSe_ptr[0];
                }
                v79_.v80 = v79_.v79;
                v81_.v82 = v81_.v81;
                v79_.v79[0] = GameData_212d2b8 + 2;
                v79_.v79[1] = v63;
                v81_.v81[0] = GameData_212d2b8 + 2;
                v81_.v81[1] = v63;
                GameRoutine_654050(v81_.v81, (_QWORD*)(v59 + 1152));
                if (v81_.v82 == v81_.v81) {
                  v64 = 32;
                }
                else {
                  if (v81_.v82 == nullptr) {
                    goto LABEL_118;
                  }
                  v64 = 40;
                }
                (*(void (**)(__int64))(*v81_.v82 + v64))((__int64)v81_.v82);
              LABEL_118:
                if (v79_.v80 == v79_.v79) {
                  v65 = 32;
                }
                else {
                  if (v79_.v80 == nullptr) {
                    goto LABEL_123;
                  }
                  v65 = 40;
                }
                (*(void (**)(__int64))(*v79_.v80 + v65))((__int64)v79_.v80);
              LABEL_123:
                if ((v73_.v73[0] & 1) != 0 && v73_.v74 != nullptr) {
                  v66 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v66 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v66,
                      (__int64)v73_.v74);
                }
                if ((v75_.v75[0] & 1) != 0 && v75_.v76 != nullptr) {
                  v67 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v67 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v67,
                      (__int64)v75_.v76);
                }
                return 12;
              }
            }
            else {
              while (v25 != v26) {
                v29 = (__int64*)*v25++;
                v28 = v29;
                if (*((_DWORD*)v29 + 21) == v27) {
                  goto LABEL_55;
                }
              }
            }
          LABEL_54:
            v28 = nullptr;
            goto LABEL_55;
          }
          if (*(_QWORD*)(a1 + 88) != 0) {
            v30 = *(_QWORD*)(a1 + 8);
            v79_.v79[0] = "MID_Crown_NotOpenTemple_Message";
            v31 = game_menu_Dialog__CreateBind_game_menu_Dialog(
                v30, (__int64)v79_.v79);
            if (v31 != 0) {
              v81_.v82 = nullptr;
              GameRoutine_6680e0(v81_.v81, (_QWORD*)(v31 + 1248));
              if (v81_.v82 == v81_.v81) {
                v32 = 32;
                goto LABEL_134;
              }
              if (v81_.v82 != nullptr) {
                v32 = 40;
              LABEL_134:
                (*(void (**)(__int64))(*v81_.v82 + v32))((__int64)v81_.v82);
              }
            }
            v68 = *(_QWORD*)GameData_21316c8;
            *(_DWORD*)(v68 + 208) = 1;
            *(_DWORD*)(v68 + 152) = 5;
            return 2;
          }
          return 1;
        }
      }
      else {
        while (v7 != v8) {
          v10 = *v7++;
          v9 = v10;
          if (*(_DWORD*)(v10 + 84) == v6) {
            goto LABEL_24;
          }
        }
      }
    LABEL_23:
      v9 = 0;
      goto LABEL_24;
    }
    if (v2 != 6) {
      if (v2 != 7) {
        return result;
      }
      goto LABEL_14;
    }
    v33 = *(_QWORD*)(*GameData_212c790 + 8);
    v34 = *(_DWORD*)(v33 + 56);
    v35 = *(__int64**)(v33 + 8);
    v36 = *(__int64**)(v33 + 16);
    if (v34 < 0) {
      if (v35 == v36) {
        return result;
      }
      while (*(_QWORD*)(*v35 + 96) != 0 || *(_QWORD*)(*v35 + 552) != 0) {
        if (++v35 == v36) {
          return result;
        }
      }
    }
    else {
      if (v35 == v36) {
        return result;
      }
      while (1) {
        v37 = *v35++;
        if (*(_DWORD*)(v37 + 84) == v34) {
          break;
        }
        if (v35 == v36) {
          return result;
        }
      }
    }
    v50 = *(_QWORD*)(a1 + 8);
    v75_.v75[0] = "MID_Gmap_SpotSelect_HellGate_Confirm";
    v79_.v80 = v79_.v79;
    v77_.v78 = v77_.v77;
    v81_.v81[0] = GameData_2026a38;
    v81_.v81[1] = a1;
    v81_.v82 = v81_.v81;
    v79_.v79[0] = GameData_2026ab8;
    v77_.v77[0] = GameData_2026ab8;
    v39 = MapSortieMenu_871860(v50, (__int64)v75_.v75, (__int64)v81_.v81,
                               (__int64)v79_.v79, (__int64)v77_.v77);
    if (v77_.v78 == v77_.v77) {
      v51 = 32;
    }
    else {
      if (v77_.v78 == nullptr) {
        goto LABEL_138;
      }
      v51 = 40;
    }
    (*(void (**)(__int64))(*v77_.v78 + v51))((__int64)v77_.v78);
  LABEL_138:
    if (v79_.v80 == v79_.v79) {
      v69 = 32;
    }
    else {
      if (v79_.v80 == nullptr) {
        goto LABEL_143;
      }
      v69 = 40;
    }
    (*(void (**)(__int64))(*v79_.v80 + v69))((__int64)v79_.v80);
  LABEL_143:
    if (v81_.v82 == v81_.v81) {
      v70 = 32;
    }
    else {
      if (v81_.v82 == nullptr) {
      LABEL_148:
        v54 = GameData_212d2b8;
        v55 = game_sound_PlayDecideSe_ptr[0];
      LABEL_149:
        v79_.v80 = v79_.v79;
        v81_.v82 = v81_.v81;
        v79_.v79[0] = v54 + 2;
        v79_.v79[1] = v55;
        v81_.v81[0] = v54 + 2;
        v81_.v81[1] = v55;
        GameRoutine_654050(v81_.v81, (_QWORD*)(v39 + 1152));
        if (v81_.v82 == v81_.v81) {
          v71 = 32;
        }
        else {
          if (v81_.v82 == nullptr) {
            goto LABEL_154;
          }
          v71 = 40;
        }
        (*(void (**)(__int64))(*v81_.v82 + v71))((__int64)v81_.v82);
      LABEL_154:
        if (v79_.v80 == v79_.v79) {
          v72 = 32;
        }
        else {
          if (v79_.v80 == nullptr) {
            return 12;
          }
          v72 = 40;
        }
        (*(void (**)(__int64))(*v79_.v80 + v72))((__int64)v79_.v80);
        return 12;
      }
      v70 = 40;
    }
    (*(void (**)(__int64))(*v81_.v82 + v70))((__int64)v81_.v82);
    goto LABEL_148;
  }
  if (v2 == 1) {
    v38 = *(_QWORD*)(a1 + 8);
    v75_.v75[0] = "MID_Gmap_MainQuest_Confirm";
    v81_.v82 = v81_.v81;
    v77_.v78 = v77_.v77;
    v81_.v81[0] = GameData_2026838;
    v79_.v80 = v79_.v79;
    v79_.v79[0] = GameData_20268b8;
    v77_.v77[0] = GameData_20268b8;
    v39 = MapSortieMenu_871860(v38, (__int64)v75_.v75, (__int64)v81_.v81,
                               (__int64)v79_.v79, (__int64)v77_.v77);
    if (v77_.v78 == v77_.v77) {
      v40 = 32;
    }
    else {
      if (v77_.v78 == nullptr) {
        goto LABEL_77;
      }
      v40 = 40;
    }
    (*(void (**)(__int64))(*v77_.v78 + v40))((__int64)v77_.v78);
  LABEL_77:
    if (v79_.v80 == v79_.v79) {
      v52 = 32;
    }
    else {
      if (v79_.v80 == nullptr) {
        goto LABEL_82;
      }
      v52 = 40;
    }
    (*(void (**)(__int64))(*v79_.v80 + v52))((__int64)v79_.v80);
  LABEL_82:
    if (v81_.v82 == v81_.v81) {
      v53 = 32;
    }
    else {
      if (v81_.v82 == nullptr) {
      LABEL_87:
        v54 = GameData_212d2b8;
        v55 = game_sound_PlayDecideLightSe_ptr[0];
        goto LABEL_149;
      }
      v53 = 40;
    }
    (*(void (**)(__int64))(*v81_.v82 + v53))((__int64)v81_.v82);
    goto LABEL_87;
  }
  if (v2 != 2) {
    return result;
  }
LABEL_14:
  v11 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v12 = (__int64*)GameData_21316c8;
  v13 = *(_QWORD*)GameData_21316c8;
  if (v11 != nullptr & v13 != 0) {
    GameRoutine_60a020(v13 + 240, v11);
    v13 = *v12;
  }
  if (v13 != 0) {
    GameRoutine_14d5420(v13);
  }
  return 2;
}

bool game_gmap_16425d0(__int64 a1)
{
  bool v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    __int64 (*v14[4])();
    __int64 (**v15)();
  } v14_;
  struct {
    __int64 (*v16[4])();
    __int64 (**v17)();
  } v16_;
  char* v18;

  v2 = BanquetManager_96bae0(a1 + 384);
  if (!v2) {
    return v2;
  }
  v3 = *(_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v4 = "MID_BanquetMenu_Confirm";
    if (*(_BYTE*)(v3 + 9) == 1 && *(_DWORD*)(v3 + 136) == 1) {
      v4 = "MID_Dangeon_BanquetMenu_Confirm";
    }
  }
  else {
    v4 = "MID_BanquetMenu_Confirm";
  }
  v18 = v4;
  v16_.v16[0] = (__int64 (*)())GameData_20728a8;
  v16_.v16[1] = (__int64 (*)())a1;
  v14_.v15 = v14_.v14;
  v12_.v13 = v12_.v12;
  v16_.v17 = v16_.v16;
  v14_.v14[0] = (__int64 (*)())GameData_2072928;
  v12_.v12[0] = GameData_2072928;
  v5 = MapSortieMenu_871860(a1, (__int64)&v18, (__int64)v16_.v16,
                            (__int64)v14_.v14, (__int64)v12_.v12);
  if (v12_.v13 == v12_.v12) {
    v6 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_13;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v12_.v13 + v6))((__int64)v12_.v13);
LABEL_13:
  if (v14_.v15 == v14_.v14) {
    v7 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_18;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))((char*)*v14_.v15 + v7))((__int64)v14_.v15);
LABEL_18:
  if (v16_.v17 == v16_.v16) {
    v8 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_23;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*v16_.v17 + v8))((__int64)v16_.v17);
LABEL_23:
  v14_.v15 = v14_.v14;
  v16_.v17 = v16_.v16;
  v14_.v14[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v14_.v14[1] = game_sound_PlayDecideLightSe_ptr[0];
  v16_.v16[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v16_.v16[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(v16_.v16, (_QWORD*)(v5 + 1152));
  if (v16_.v17 == v16_.v16) {
    v9 = 32;
    goto LABEL_27;
  }
  if (v16_.v17 != nullptr) {
    v9 = 40;
  LABEL_27:
    (*(void (**)(__int64))((char*)*v16_.v17 + v9))((__int64)v16_.v17);
  }
  if (v14_.v15 == v14_.v14) {
    v10 = 32;
    goto LABEL_32;
  }
  if (v14_.v15 != nullptr) {
    v10 = 40;
  LABEL_32:
    (*(void (**)(__int64))((char*)*v14_.v15 + v10))((__int64)v14_.v15);
  }
  return v2;
}

__int64 (***game_gmap_167d790(_QWORD* a1))()
{
  int v2;
  __int64 v3;
  int v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 (***result)();
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    __int64 (**v12)();
    int v13;
    char gap60_[20];
    __int64 (***v14)();
  } v12_;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;

  v2 = (*(__int64 (**)(__int64))(*a1 + 1128LL))((__int64)a1);
  v3 = *a1;
  v4 = v2;
  v12_.v14 = nullptr;
  v10_.v11 = nullptr;
  v5 = (*(__int64 (**)(__int64))(v3 + 1144))((__int64)a1);
  if (v4 != 1 && (v5 & 1) == 0) {
    v12_.v13 = v4;
    v12_.v12 = GameData_2080368;
    v12_.v14 = &v12_.v12;
  }
  if (v4 == 0) {
    v15_.v15[0] = GameData_20803e8;
    v15_.v16 = v15_.v15;
    GameRoutine_167f6d0(v15_.v15, v10_.v10);
    if (v15_.v16 == v15_.v15) {
      v6 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
        goto LABEL_10;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v15_.v16 + v6))((__int64)v15_.v16);
  }
LABEL_10:
  BasicMenu_16e1f40(a1, (__int64)&v12_.v12, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v7 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_15;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v7))((__int64)v10_.v11);
LABEL_15:
  result = v12_.v14;
  if (v12_.v14 == &v12_.v12) {
    v9 = 4;
  }
  else {
    if (v12_.v14 == nullptr) {
      return result;
    }
    v9 = 5;
  }
  return (__int64 (***)(void))((__int64 (*)(__int64))(*v12_.v14)[v9])(
      (__int64)v12_.v14);
}

#pragma GCC visibility pop
