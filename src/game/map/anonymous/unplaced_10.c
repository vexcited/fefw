#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__attribute__((swiftcall)) void
game_map_history_1237860(PSEUDO_X8, unsigned __int8*, int, char);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 BasicMenu_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);
__int64 Cursor_730ff0(__int64, float*);
__int64 GameRoutine_1271480(__int64 result, int*);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 Trick_7d5160(__int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_IsVibrationEnabled(_BYTE*);
__int64 game_map_history_12297e0(__int64, int);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_1f96628[])();
extern __int64 (*game_map_anonymous_HistoryMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_HistoryMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_201e990[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_201e8c0[])();
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212d6a8;
extern __int64* GameData_21309c8[5];
extern __int64 GameData_21d96b8;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_map_anonymous_76ee90(__int64 result);
__int64 game_map_anonymous_7c6520(__int64 result);
__int64 game_map_anonymous_968370(__int64 result);
__int64 game_map_anonymous_126e520(__int64 result, char a2);

__int64 game_map_anonymous_76ee90(__int64 result)
{
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;

  if ((*(_BYTE*)(result + 160) & 0xFD) != 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 152);
  v5_.v5[0] = GameData_1f96628;
  v5_.v5[1] = result;
  v5_.v6 = v5_.v5;
  game_UnitItemList_EachItem((_WORD*)(v3 + 828), (__int64)v5_.v5);
  if (v5_.v6 == v5_.v5) {
    v4 = 32;
    goto LABEL_6;
  }
  if (v5_.v6 != nullptr) {
    v4 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v5_.v6 + v4))((__int64)v5_.v6);
  }
  result = Trick_7d5160(*(_QWORD*)(*GameData_212cfb8[0] + 16), 1);
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
  }
  return result;
}

__int64 game_map_anonymous_7c6520(__int64 result)
{
  if (*(_BYTE*)(result + 152) == 1 &&
      (*(_BYTE*)(GameData_21d96b8 + 14) & 1) == 0) {
    *(_BYTE*)(GameData_21d96b8 + 14) = 1;
  }
  return result;
}

__int64 game_map_anonymous_968370(__int64 result)
{

#pragma clang fp contract(off)
  if (*(_BYTE*)(result + 192) == 1) {
    return Cursor_730ff0(*GameData_212cfc0[0], (float*)(result + 176));
  }
  return result;
}

__int64 game_map_anonymous_126e520(__int64 result, char a2)
{
  __int64* v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  char v13;
  unsigned __int8* v14;
  int v15;
  char v16;
  char v17;
  char v18;
  char v19;
  char v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  int v24;
  char v25;
  unsigned __int8* v26;
  int v27;
  char v28;
  char v29;
  char v30;
  char v31;
  char v32;
  char v33;
  unsigned __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  bool v37;
  unsigned __int64 v38;
  char* v39;
  unsigned __int64 v40;
  __int64 v41;
  char v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  char v47;
  unsigned __int8* v48;
  int v49;
  char v50;
  char v51;
  char v52;
  char v53;
  char v54;
  char v55;
  unsigned __int64 v56;
  __int64* v57;
  unsigned __int64 v58;
  bool v59;
  unsigned __int64 v60;
  char* v61;
  unsigned __int64 v62;
  __int64 v63;
  char v64;
  __int64 v65;
  int v66;
  __int64 v67;
  int v68;
  char v69;
  unsigned __int8* v70;
  int v71;
  char v72;
  char v73;
  char v74;
  char v75;
  char v76;
  char v77;
  unsigned __int64 v78;
  __int64* v79;
  unsigned __int64 v80;
  bool v81;
  unsigned __int64 v82;
  char* v83;
  unsigned __int64 v84;
  __int64 v85;
  char v86;
  __int64 v87;
  int v88;
  __int64 v89;
  __int64 v90;
  int v91;
  char v92;
  unsigned __int8* v93;
  int v94;
  char v95;
  char v96;
  char v97;
  char v98;
  char v99;
  char v100;
  unsigned __int64 v101;
  __int64* v102;
  unsigned __int64 v103;
  bool v104;
  unsigned __int64 v105;
  char* v106;
  unsigned __int64 v107;
  __int64 v108;
  char v109;
  __int64 v110;
  int v111;
  __int64 v112;
  int v113;
  char v114;
  unsigned __int8* v115;
  int v116;
  char v117;
  char v118;
  char v119;
  char v120;
  char v121;
  char v122;
  unsigned __int64 v123;
  __int64* v124;
  unsigned __int64 v125;
  bool v126;
  unsigned __int64 v127;
  char* v128;
  unsigned __int64 v129;
  __int64 v130;
  char v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  _QWORD* v143;
  _QWORD* v144;
  int v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  int v149;
  char v150;
  __int64* v151;
  unsigned __int64 v152;
  bool v153;
  unsigned __int64 v154;
  char* v155;
  unsigned __int64 v156;
  __int64 v157;
  char v158;
  __int64 v159;
  struct {
    unsigned __int64 v160;
    __int64 v161;
  } v160_;
  struct {
    __int64 v162;
    unsigned __int64 v163;
    char* v164;
    __int64 v165;
    __int64 v166;
  } v162_;

  v2 = GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0 && *(int*)(*GameData_21309c8[0] + 824) >= 1) {
    v3 = result;
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1904, 16, 0);
    v160_.v160 = 0;
    v160_.v161 = 0;
    BasicMenu_16dcd30(v6, (__int64)"HistoryMenu", &v160_.v160, 0);
    v7 = GameData_212d6a8;
    v8 = v160_.v161;
    *(_QWORD*)v6 = GameData_212d6a8 + 2;
    *(_QWORD*)(v6 + 176) = v7 + 143;
    *(_QWORD*)(v6 + 1056) = v7 + 169;
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    *(_QWORD*)(v6 + 1096) = 0;
    *(_QWORD*)(v6 + 1104) = 0;
    *(_QWORD*)(v6 + 1112) = 0;
    *(_QWORD*)(v6 + 1120) = 0;
    *(_BYTE*)(v6 + 1064) = a2 & 1;
    *(_QWORD*)(v6 + 1068) = 0xFFFFFFFF00000000LL;
    *(_QWORD*)v6 = game_map_anonymous_HistoryMenu_vtable;
    *(_QWORD*)(v6 + 1128) = 0;
    *(_QWORD*)(v6 + 176) = game_menu_MenuInput_InputUnknown00_ptr_201e8c0;
    *(_QWORD*)(v6 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_201e990;
    *(_QWORD*)(v6 + 1080) = 0xFF000000FFFFFFFFLL;
    *(_QWORD*)(v6 + 1144) = 0xFF000000FFFFFFFFLL;
    *(_QWORD*)(v6 + 1208) = 0xFF000000FFFFFFFFLL;
    *(_QWORD*)(v6 + 1272) = 0xFF000000FFFFFFFFLL;
    *(_QWORD*)(v6 + 1336) = 0xFF000000FFFFFFFFLL;
    *(_QWORD*)(v6 + 1400) = 0xFF000000FFFFFFFFLL;
    *(_QWORD*)(v6 + 1464) = 0xFF000000FFFFFFFFLL;
    *(_QWORD*)(v6 + 1528) = 0xFF000000FFFFFFFFLL;
    *(_QWORD*)(v6 + 1592) = 0xFF000000FFFFFFFFLL;
    *(_QWORD*)(v6 + 1656) = 0xFF000000FFFFFFFFLL;
    *(_QWORD*)(v6 + 1720) = 0xFF000000FFFFFFFFLL;
    *(_BYTE*)(v6 + 1088) = -1;
    *(_DWORD*)(v6 + 1136) = -1;
    *(_QWORD*)(v6 + 1160) = 0;
    *(_QWORD*)(v6 + 1168) = 0;
    *(_QWORD*)(v6 + 1176) = 0;
    *(_BYTE*)(v6 + 1152) = -1;
    *(_QWORD*)(v6 + 1192) = 0;
    *(_QWORD*)(v6 + 1184) = 0;
    *(_DWORD*)(v6 + 1200) = -1;
    *(_QWORD*)(v6 + 1240) = 0;
    *(_QWORD*)(v6 + 1232) = 0;
    *(_QWORD*)(v6 + 1224) = 0;
    *(_BYTE*)(v6 + 1216) = -1;
    *(_QWORD*)(v6 + 1248) = 0;
    *(_QWORD*)(v6 + 1256) = 0;
    *(_DWORD*)(v6 + 1264) = -1;
    *(_QWORD*)(v6 + 1304) = 0;
    *(_QWORD*)(v6 + 1296) = 0;
    *(_QWORD*)(v6 + 1288) = 0;
    *(_BYTE*)(v6 + 1280) = -1;
    *(_QWORD*)(v6 + 1312) = 0;
    *(_QWORD*)(v6 + 1320) = 0;
    *(_DWORD*)(v6 + 1328) = -1;
    *(_QWORD*)(v6 + 1368) = 0;
    *(_QWORD*)(v6 + 1360) = 0;
    *(_QWORD*)(v6 + 1352) = 0;
    *(_BYTE*)(v6 + 1344) = -1;
    *(_QWORD*)(v6 + 1384) = 0;
    *(_QWORD*)(v6 + 1376) = 0;
    *(_DWORD*)(v6 + 1392) = -1;
    *(_QWORD*)(v6 + 1432) = 0;
    *(_QWORD*)(v6 + 1424) = 0;
    *(_QWORD*)(v6 + 1416) = 0;
    *(_BYTE*)(v6 + 1408) = -1;
    *(_QWORD*)(v6 + 1448) = 0;
    *(_QWORD*)(v6 + 1440) = 0;
    *(_DWORD*)(v6 + 1456) = -1;
    *(_QWORD*)(v6 + 1496) = 0;
    *(_QWORD*)(v6 + 1488) = 0;
    *(_QWORD*)(v6 + 1480) = 0;
    *(_BYTE*)(v6 + 1472) = -1;
    *(_QWORD*)(v6 + 1512) = 0;
    *(_QWORD*)(v6 + 1504) = 0;
    *(_DWORD*)(v6 + 1520) = -1;
    *(_QWORD*)(v6 + 1560) = 0;
    *(_QWORD*)(v6 + 1552) = 0;
    *(_QWORD*)(v6 + 1544) = 0;
    *(_BYTE*)(v6 + 1536) = -1;
    *(_QWORD*)(v6 + 1576) = 0;
    *(_QWORD*)(v6 + 1568) = 0;
    *(_DWORD*)(v6 + 1584) = -1;
    *(_QWORD*)(v6 + 1624) = 0;
    *(_QWORD*)(v6 + 1616) = 0;
    *(_QWORD*)(v6 + 1608) = 0;
    *(_BYTE*)(v6 + 1600) = -1;
    *(_QWORD*)(v6 + 1640) = 0;
    *(_QWORD*)(v6 + 1632) = 0;
    *(_DWORD*)(v6 + 1648) = -1;
    *(_QWORD*)(v6 + 1688) = 0;
    *(_QWORD*)(v6 + 1680) = 0;
    *(_QWORD*)(v6 + 1672) = 0;
    *(_BYTE*)(v6 + 1664) = -1;
    *(_QWORD*)(v6 + 1704) = 0;
    *(_QWORD*)(v6 + 1696) = 0;
    *(_DWORD*)(v6 + 1712) = -1;
    *(_QWORD*)(v6 + 1752) = 0;
    *(_QWORD*)(v6 + 1744) = 0;
    *(_QWORD*)(v6 + 1736) = 0;
    *(_BYTE*)(v6 + 1728) = -1;
    *(_DWORD*)(v6 + 1776) = 0;
    *(_QWORD*)(v6 + 1768) = 0;
    *(_QWORD*)(v6 + 1760) = 0;
    *(_DWORD*)(v6 + 1872) = 1;
    *(_BYTE*)(v6 + 1876) = 0;
    *(_DWORD*)(v6 + 1880) = 0;
    *(_QWORD*)(v6 + 1888) = 0;
    *(_QWORD*)(v6 + 1864) = 0;
    *(_QWORD*)(v6 + 1856) = 0;
    *(_QWORD*)(v6 + 1848) = 0;
    *(_QWORD*)(v6 + 1840) = 0;
    *(_QWORD*)(v6 + 1832) = 0;
    *(_QWORD*)(v6 + 1824) = 0;
    *(_QWORD*)(v6 + 1816) = 0;
    *(_QWORD*)(v6 + 1808) = 0;
    *(_QWORD*)(v6 + 1800) = 0;
    *(_QWORD*)(v6 + 1792) = 0;
    *(_QWORD*)(v6 + 1784) = 0;
    ProcInst_657850(v6, (__int64)GameData_212c730, "HistoryMenu", 1, v3);
    v9 = *v2;
    if (*v2 != 0) {
      v10 = *(_DWORD*)(v9 + 824);
      *(_DWORD*)(v6 + 1776) = 0;
      *(_DWORD*)(v6 + 1068) = v10;
      if (v10 >= 6) {
        v11 = game_map_history_12297e0(v9, 5);
        if (v11 != 0) {
          v12 = *(unsigned __int16*)(v11 + 16);
          v13 = *(_BYTE*)(v11 + 18);
          v14 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)v11 +
                                                            56LL))(v11);
          game_map_history_1237860((void*)((__int64)&v160_.v160), v14, v12,
                                   v13);
          v15 = v160_.v160;
          v16 = BYTE4(v160_.v160);
          v17 = BYTE5(v160_.v160);
          v18 = BYTE6(v160_.v160);
          v19 = HIBYTE(v160_.v160);
          v20 = v160_.v161;
          v21 = (unsigned __int8)v162_.v162;
        }
        else {
          v15 = -1;
          v19 = -1;
          v21 = 0;
          v18 = 0;
          v17 = 0;
          v16 = 0;
          v162_.v163 = 0;
          v162_.v164 = nullptr;
          v162_.v162 = 0;
          v162_.v165 = 0;
          v162_.v166 = 0;
          v160_.v160 = 0xFF000000FFFFFFFFLL;
          v20 = -1;
          LOBYTE(v160_.v161) = -1;
        }
        *(_BYTE*)(v6 + 1086) = v18;
        v150 = *(_BYTE*)(v6 + 1096);
        v151 = (__int64*)(v6 + 1096);
        *(_DWORD*)(v6 + 1080) = v15;
        *(_BYTE*)(v6 + 1084) = v16;
        *(_BYTE*)(v6 + 1085) = v17;
        *(_BYTE*)(v6 + 1087) = v19;
        *(_BYTE*)(v6 + 1088) = v20;
        *(_DWORD*)(v6 + 1072) = 5;
        if ((v150 & 1) != 0) {
          v153 = (v21 & 1) == 0;
          v154 = v21 >> 1;
          if (v153) {
            v155 = (char*)&v162_.v162 + 1;
          }
          else {
            v155 = v162_.v164;
          }
          if (v153) {
            v156 = v154;
          }
          else {
            v156 = v162_.v163;
          }
          SpineModel_64dde0(v151, (__int64)v155, v156);
        }
        else if ((v21 & 1) != 0) {
          GameRoutine_64df20(v151, (__int64)v162_.v164, v162_.v163);
        }
        else {
          v152 = v162_.v163;
          *v151 = v162_.v162;
          *(_QWORD*)(v6 + 1104) = v152;
          *(_QWORD*)(v6 + 1112) = v162_.v164;
        }
        v157 = v162_.v166;
        *(_QWORD*)(v6 + 1120) = v162_.v165;
        v158 = v162_.v162;
        *(_QWORD*)(v6 + 1128) = v157;
        if ((v158 & 1) != 0 && v162_.v164 != nullptr) {
          v159 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v159 = 56;
          }
          nn_mem_StandardAllocator_Free(*v5 + v159, (__int64)v162_.v164);
        }
      LABEL_15:
        v22 = *(_DWORD*)(v6 + 1068);
        *(_QWORD*)(v6 + 1784) = v6 + 1072;
        if (v22 <= 4) {
          *(_DWORD*)(v6 + 1136) = -1;
          *(_QWORD*)(v6 + 1144) = 0xFF000000FFFFFFFFLL;
          *(_BYTE*)(v6 + 1152) = -1;
          if ((*(_BYTE*)(v6 + 1160) & 1) != 0) {
            **(_BYTE**)(v6 + 1176) = 0;
            *(_QWORD*)(v6 + 1168) = 0;
          }
          else {
            *(_WORD*)(v6 + 1160) = 0;
          }
          *(_QWORD*)(v6 + 1184) = 0;
          *(_QWORD*)(v6 + 1192) = 0;
        }
        else {
          if (*v2 != 0 && (v23 = game_map_history_12297e0(*v2, 4)) != 0) {
            v24 = *(unsigned __int16*)(v23 + 16);
            v25 = *(_BYTE*)(v23 + 18);
            v26 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)v23 +
                                                              56LL))(v23);
            game_map_history_1237860((void*)((__int64)&v160_.v160), v26, v24,
                                     v25);
            v27 = v160_.v160;
            v28 = BYTE4(v160_.v160);
            v29 = BYTE5(v160_.v160);
            v30 = BYTE6(v160_.v160);
            v31 = HIBYTE(v160_.v160);
            v32 = v160_.v161;
          }
          else {
            v162_.v163 = 0;
            v162_.v164 = nullptr;
            v162_.v162 = 0;
            v27 = -1;
            v31 = -1;
            v30 = 0;
            v29 = 0;
            v28 = 0;
            v162_.v165 = 0;
            v162_.v166 = 0;
            v160_.v160 = 0xFF000000FFFFFFFFLL;
            v32 = -1;
            LOBYTE(v160_.v161) = -1;
          }
          *(_BYTE*)(v6 + 1149) = v29;
          *(_BYTE*)(v6 + 1150) = v30;
          v33 = *(_BYTE*)(v6 + 1160);
          v34 = (unsigned __int8)v162_.v162;
          v35 = (__int64*)(v6 + 1160);
          *(_DWORD*)(v6 + 1144) = v27;
          *(_BYTE*)(v6 + 1148) = v28;
          *(_BYTE*)(v6 + 1151) = v31;
          *(_BYTE*)(v6 + 1152) = v32;
          *(_DWORD*)(v6 + 1136) = 4;
          if ((v33 & 1) != 0) {
            v37 = (v34 & 1) == 0;
            v38 = v34 >> 1;
            if (v37) {
              v39 = (char*)&v162_.v162 + 1;
            }
            else {
              v39 = v162_.v164;
            }
            if (v37) {
              v40 = v38;
            }
            else {
              v40 = v162_.v163;
            }
            SpineModel_64dde0(v35, (__int64)v39, v40);
          }
          else if ((v34 & 1) != 0) {
            GameRoutine_64df20(v35, (__int64)v162_.v164, v162_.v163);
          }
          else {
            *(_QWORD*)(v6 + 1176) = v162_.v164;
            v36 = v162_.v163;
            *v35 = v162_.v162;
            *(_QWORD*)(v6 + 1168) = v36;
          }
          v41 = v162_.v166;
          *(_QWORD*)(v6 + 1184) = v162_.v165;
          v42 = v162_.v162;
          *(_QWORD*)(v6 + 1192) = v41;
          if ((v42 & 1) != 0 && v162_.v164 != nullptr) {
            v43 = 128;
            if (*(_QWORD*)(*v5 + 200) == 0) {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free(*v5 + v43, (__int64)v162_.v164);
          }
        }
        v44 = *(_DWORD*)(v6 + 1068);
        *(_QWORD*)(v6 + 1792) = v6 + 1136;
        if (v44 <= 3) {
          *(_DWORD*)(v6 + 1200) = -1;
          *(_QWORD*)(v6 + 1208) = 0xFF000000FFFFFFFFLL;
          *(_BYTE*)(v6 + 1216) = -1;
          if ((*(_BYTE*)(v6 + 1224) & 1) != 0) {
            **(_BYTE**)(v6 + 1240) = 0;
            *(_QWORD*)(v6 + 1232) = 0;
          }
          else {
            *(_WORD*)(v6 + 1224) = 0;
          }
          *(_QWORD*)(v6 + 1248) = 0;
          *(_QWORD*)(v6 + 1256) = 0;
        }
        else {
          if (*v2 != 0 && (v45 = game_map_history_12297e0(*v2, 3)) != 0) {
            v46 = *(unsigned __int16*)(v45 + 16);
            v47 = *(_BYTE*)(v45 + 18);
            v48 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)v45 +
                                                              56LL))(v45);
            game_map_history_1237860((void*)((__int64)&v160_.v160), v48, v46,
                                     v47);
            v49 = v160_.v160;
            v50 = BYTE4(v160_.v160);
            v51 = BYTE5(v160_.v160);
            v52 = BYTE6(v160_.v160);
            v53 = HIBYTE(v160_.v160);
            v54 = v160_.v161;
          }
          else {
            v162_.v163 = 0;
            v162_.v164 = nullptr;
            v162_.v162 = 0;
            v49 = -1;
            v53 = -1;
            v52 = 0;
            v51 = 0;
            v50 = 0;
            v162_.v165 = 0;
            v162_.v166 = 0;
            v160_.v160 = 0xFF000000FFFFFFFFLL;
            v54 = -1;
            LOBYTE(v160_.v161) = -1;
          }
          *(_BYTE*)(v6 + 1213) = v51;
          *(_BYTE*)(v6 + 1214) = v52;
          v55 = *(_BYTE*)(v6 + 1224);
          v56 = (unsigned __int8)v162_.v162;
          v57 = (__int64*)(v6 + 1224);
          *(_DWORD*)(v6 + 1208) = v49;
          *(_BYTE*)(v6 + 1212) = v50;
          *(_BYTE*)(v6 + 1215) = v53;
          *(_BYTE*)(v6 + 1216) = v54;
          *(_DWORD*)(v6 + 1200) = 3;
          if ((v55 & 1) != 0) {
            v59 = (v56 & 1) == 0;
            v60 = v56 >> 1;
            if (v59) {
              v61 = (char*)&v162_.v162 + 1;
            }
            else {
              v61 = v162_.v164;
            }
            if (v59) {
              v62 = v60;
            }
            else {
              v62 = v162_.v163;
            }
            SpineModel_64dde0(v57, (__int64)v61, v62);
          }
          else if ((v56 & 1) != 0) {
            GameRoutine_64df20(v57, (__int64)v162_.v164, v162_.v163);
          }
          else {
            *(_QWORD*)(v6 + 1240) = v162_.v164;
            v58 = v162_.v163;
            *v57 = v162_.v162;
            *(_QWORD*)(v6 + 1232) = v58;
          }
          v63 = v162_.v166;
          *(_QWORD*)(v6 + 1248) = v162_.v165;
          v64 = v162_.v162;
          *(_QWORD*)(v6 + 1256) = v63;
          if ((v64 & 1) != 0 && v162_.v164 != nullptr) {
            v65 = 128;
            if (*(_QWORD*)(*v5 + 200) == 0) {
              v65 = 56;
            }
            nn_mem_StandardAllocator_Free(*v5 + v65, (__int64)v162_.v164);
          }
        }
        v66 = *(_DWORD*)(v6 + 1068);
        *(_QWORD*)(v6 + 1800) = v6 + 1200;
        if (v66 <= 2) {
          *(_DWORD*)(v6 + 1264) = -1;
          *(_QWORD*)(v6 + 1272) = 0xFF000000FFFFFFFFLL;
          *(_BYTE*)(v6 + 1280) = -1;
          if ((*(_BYTE*)(v6 + 1288) & 1) != 0) {
            **(_BYTE**)(v6 + 1304) = 0;
            *(_QWORD*)(v6 + 1296) = 0;
          }
          else {
            *(_WORD*)(v6 + 1288) = 0;
          }
          *(_QWORD*)(v6 + 1312) = 0;
          *(_QWORD*)(v6 + 1320) = 0;
        }
        else {
          if (*v2 != 0 && (v67 = game_map_history_12297e0(*v2, 2)) != 0) {
            v68 = *(unsigned __int16*)(v67 + 16);
            v69 = *(_BYTE*)(v67 + 18);
            v70 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)v67 +
                                                              56LL))(v67);
            game_map_history_1237860((void*)((__int64)&v160_.v160), v70, v68,
                                     v69);
            v71 = v160_.v160;
            v72 = BYTE4(v160_.v160);
            v73 = BYTE5(v160_.v160);
            v74 = BYTE6(v160_.v160);
            v75 = HIBYTE(v160_.v160);
            v76 = v160_.v161;
          }
          else {
            v162_.v163 = 0;
            v162_.v164 = nullptr;
            v162_.v162 = 0;
            v71 = -1;
            v75 = -1;
            v74 = 0;
            v73 = 0;
            v72 = 0;
            v162_.v165 = 0;
            v162_.v166 = 0;
            v160_.v160 = 0xFF000000FFFFFFFFLL;
            v76 = -1;
            LOBYTE(v160_.v161) = -1;
          }
          *(_BYTE*)(v6 + 1277) = v73;
          *(_BYTE*)(v6 + 1278) = v74;
          v77 = *(_BYTE*)(v6 + 1288);
          v78 = (unsigned __int8)v162_.v162;
          v79 = (__int64*)(v6 + 1288);
          *(_DWORD*)(v6 + 1272) = v71;
          *(_BYTE*)(v6 + 1276) = v72;
          *(_BYTE*)(v6 + 1279) = v75;
          *(_BYTE*)(v6 + 1280) = v76;
          *(_DWORD*)(v6 + 1264) = 2;
          if ((v77 & 1) != 0) {
            v81 = (v78 & 1) == 0;
            v82 = v78 >> 1;
            if (v81) {
              v83 = (char*)&v162_.v162 + 1;
            }
            else {
              v83 = v162_.v164;
            }
            if (v81) {
              v84 = v82;
            }
            else {
              v84 = v162_.v163;
            }
            SpineModel_64dde0(v79, (__int64)v83, v84);
          }
          else if ((v78 & 1) != 0) {
            GameRoutine_64df20(v79, (__int64)v162_.v164, v162_.v163);
          }
          else {
            *(_QWORD*)(v6 + 1304) = v162_.v164;
            v80 = v162_.v163;
            *v79 = v162_.v162;
            *(_QWORD*)(v6 + 1296) = v80;
          }
          v85 = v162_.v166;
          *(_QWORD*)(v6 + 1312) = v162_.v165;
          v86 = v162_.v162;
          *(_QWORD*)(v6 + 1320) = v85;
          if ((v86 & 1) != 0 && v162_.v164 != nullptr) {
            v87 = 128;
            if (*(_QWORD*)(*v5 + 200) == 0) {
              v87 = 56;
            }
            nn_mem_StandardAllocator_Free(*v5 + v87, (__int64)v162_.v164);
          }
        }
        v88 = *(_DWORD*)(v6 + 1068);
        *(_QWORD*)(v6 + 1808) = v6 + 1264;
        if (v88 <= 1) {
          v89 = v6 + 1072;
          *(_DWORD*)(v6 + 1328) = -1;
          *(_QWORD*)(v6 + 1336) = 0xFF000000FFFFFFFFLL;
          *(_BYTE*)(v6 + 1344) = -1;
          if ((*(_BYTE*)(v6 + 1352) & 1) != 0) {
            **(_BYTE**)(v6 + 1368) = 0;
            *(_QWORD*)(v6 + 1360) = 0;
          }
          else {
            *(_WORD*)(v6 + 1352) = 0;
          }
          *(_QWORD*)(v6 + 1376) = 0;
          *(_QWORD*)(v6 + 1384) = 0;
        }
        else {
          v89 = v6 + 1072;
          if (*v2 != 0 && (v90 = game_map_history_12297e0(*v2, 1)) != 0) {
            v91 = *(unsigned __int16*)(v90 + 16);
            v92 = *(_BYTE*)(v90 + 18);
            v93 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)v90 +
                                                              56LL))(v90);
            game_map_history_1237860((void*)((__int64)&v160_.v160), v93, v91,
                                     v92);
            v94 = v160_.v160;
            v95 = BYTE4(v160_.v160);
            v96 = BYTE5(v160_.v160);
            v97 = BYTE6(v160_.v160);
            v98 = HIBYTE(v160_.v160);
            v99 = v160_.v161;
          }
          else {
            v162_.v163 = 0;
            v162_.v164 = nullptr;
            v162_.v162 = 0;
            v94 = -1;
            v98 = -1;
            v97 = 0;
            v96 = 0;
            v95 = 0;
            v162_.v165 = 0;
            v162_.v166 = 0;
            v160_.v160 = 0xFF000000FFFFFFFFLL;
            v99 = -1;
            LOBYTE(v160_.v161) = -1;
          }
          *(_BYTE*)(v6 + 1341) = v96;
          *(_BYTE*)(v6 + 1342) = v97;
          v100 = *(_BYTE*)(v6 + 1352);
          v101 = (unsigned __int8)v162_.v162;
          v102 = (__int64*)(v6 + 1352);
          *(_DWORD*)(v6 + 1336) = v94;
          *(_BYTE*)(v6 + 1340) = v95;
          *(_BYTE*)(v6 + 1343) = v98;
          *(_BYTE*)(v6 + 1344) = v99;
          *(_DWORD*)(v6 + 1328) = 1;
          if ((v100 & 1) != 0) {
            v104 = (v101 & 1) == 0;
            v105 = v101 >> 1;
            if (v104) {
              v106 = (char*)&v162_.v162 + 1;
            }
            else {
              v106 = v162_.v164;
            }
            if (v104) {
              v107 = v105;
            }
            else {
              v107 = v162_.v163;
            }
            SpineModel_64dde0(v102, (__int64)v106, v107);
          }
          else if ((v101 & 1) != 0) {
            GameRoutine_64df20(v102, (__int64)v162_.v164, v162_.v163);
          }
          else {
            *(_QWORD*)(v6 + 1368) = v162_.v164;
            v103 = v162_.v163;
            *v102 = v162_.v162;
            *(_QWORD*)(v6 + 1360) = v103;
          }
          v108 = v162_.v166;
          *(_QWORD*)(v6 + 1376) = v162_.v165;
          v109 = v162_.v162;
          *(_QWORD*)(v6 + 1384) = v108;
          if ((v109 & 1) != 0 && v162_.v164 != nullptr) {
            v110 = 128;
            if (*(_QWORD*)(*v5 + 200) == 0) {
              v110 = 56;
            }
            nn_mem_StandardAllocator_Free(*v5 + v110, (__int64)v162_.v164);
          }
        }
        v111 = *(_DWORD*)(v6 + 1068);
        *(_QWORD*)(v6 + 1816) = v6 + 1328;
        if (v111 <= 0) {
          *(_DWORD*)(v6 + 1392) = -1;
          *(_QWORD*)(v6 + 1400) = 0xFF000000FFFFFFFFLL;
          *(_BYTE*)(v6 + 1408) = -1;
          if ((*(_BYTE*)(v6 + 1416) & 1) != 0) {
            **(_BYTE**)(v6 + 1432) = 0;
            *(_QWORD*)(v6 + 1424) = 0;
          }
          else {
            *(_WORD*)(v6 + 1416) = 0;
          }
          *(_QWORD*)(v6 + 1440) = 0;
          *(_QWORD*)(v6 + 1448) = 0;
        }
        else {
          if (*v2 != 0 && (v112 = game_map_history_12297e0(*v2, 0)) != 0) {
            v113 = *(unsigned __int16*)(v112 + 16);
            v114 = *(_BYTE*)(v112 + 18);
            v115 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)v112 +
                                                               56LL))(v112);
            game_map_history_1237860((void*)((__int64)&v160_.v160), v115, v113,
                                     v114);
            v116 = v160_.v160;
            v117 = BYTE4(v160_.v160);
            v118 = BYTE5(v160_.v160);
            v119 = BYTE6(v160_.v160);
            v120 = HIBYTE(v160_.v160);
            v121 = v160_.v161;
          }
          else {
            v162_.v163 = 0;
            v162_.v164 = nullptr;
            v162_.v162 = 0;
            v116 = -1;
            v120 = -1;
            v119 = 0;
            v118 = 0;
            v117 = 0;
            v162_.v165 = 0;
            v162_.v166 = 0;
            v160_.v160 = 0xFF000000FFFFFFFFLL;
            v121 = -1;
            LOBYTE(v160_.v161) = -1;
          }
          *(_BYTE*)(v6 + 1405) = v118;
          *(_BYTE*)(v6 + 1406) = v119;
          v122 = *(_BYTE*)(v6 + 1416);
          v123 = (unsigned __int8)v162_.v162;
          v124 = (__int64*)(v6 + 1416);
          *(_DWORD*)(v6 + 1392) = 0;
          *(_DWORD*)(v6 + 1400) = v116;
          *(_BYTE*)(v6 + 1404) = v117;
          *(_BYTE*)(v6 + 1407) = v120;
          *(_BYTE*)(v6 + 1408) = v121;
          if ((v122 & 1) != 0) {
            v126 = (v123 & 1) == 0;
            v127 = v123 >> 1;
            if (v126) {
              v128 = (char*)&v162_.v162 + 1;
            }
            else {
              v128 = v162_.v164;
            }
            if (v126) {
              v129 = v127;
            }
            else {
              v129 = v162_.v163;
            }
            SpineModel_64dde0(v124, (__int64)v128, v129);
          }
          else if ((v123 & 1) != 0) {
            GameRoutine_64df20(v124, (__int64)v162_.v164, v162_.v163);
          }
          else {
            *(_QWORD*)(v6 + 1432) = v162_.v164;
            v125 = v162_.v163;
            *v124 = v162_.v162;
            *(_QWORD*)(v6 + 1424) = v125;
          }
          v130 = v162_.v166;
          *(_QWORD*)(v6 + 1440) = v162_.v165;
          v131 = v162_.v162;
          *(_QWORD*)(v6 + 1448) = v130;
          if ((v131 & 1) != 0 && v162_.v164 != nullptr) {
            v132 = 128;
            if (*(_QWORD*)(*v5 + 200) == 0) {
              v132 = 56;
            }
            nn_mem_StandardAllocator_Free(*v5 + v132, (__int64)v162_.v164);
          }
        }
        *(_QWORD*)(v6 + 1824) = v6 + 1392;
        *(_DWORD*)(v6 + 1456) = -1;
        *(_QWORD*)(v6 + 1464) = 0xFF000000FFFFFFFFLL;
        *(_BYTE*)(v6 + 1472) = -1;
        if ((*(_BYTE*)(v6 + 1480) & 1) != 0) {
          **(_BYTE**)(v6 + 1496) = 0;
          *(_QWORD*)(v6 + 1488) = 0;
        }
        else {
          *(_WORD*)(v6 + 1480) = 0;
        }
        *(_QWORD*)(v6 + 1504) = 0;
        *(_QWORD*)(v6 + 1512) = 0;
        *(_QWORD*)(v6 + 1832) = v6 + 1456;
        *(_DWORD*)(v6 + 1520) = -1;
        *(_BYTE*)(v6 + 1536) = -1;
        *(_QWORD*)(v6 + 1528) = 0xFF000000FFFFFFFFLL;
        if ((*(_BYTE*)(v6 + 1544) & 1) != 0) {
          **(_BYTE**)(v6 + 1560) = 0;
          *(_QWORD*)(v6 + 1552) = 0;
        }
        else {
          *(_WORD*)(v6 + 1544) = 0;
        }
        *(_QWORD*)(v6 + 1840) = v6 + 1520;
        *(_QWORD*)(v6 + 1568) = 0;
        *(_QWORD*)(v6 + 1576) = 0;
        *(_DWORD*)(v6 + 1584) = -1;
        *(_BYTE*)(v6 + 1600) = -1;
        *(_QWORD*)(v6 + 1592) = 0xFF000000FFFFFFFFLL;
        if ((*(_BYTE*)(v6 + 1608) & 1) != 0) {
          **(_BYTE**)(v6 + 1624) = 0;
          *(_QWORD*)(v6 + 1616) = 0;
        }
        else {
          *(_WORD*)(v6 + 1608) = 0;
        }
        *(_QWORD*)(v6 + 1848) = v6 + 1584;
        *(_QWORD*)(v6 + 1632) = 0;
        *(_QWORD*)(v6 + 1640) = 0;
        *(_DWORD*)(v6 + 1648) = -1;
        *(_BYTE*)(v6 + 1664) = -1;
        *(_QWORD*)(v6 + 1656) = 0xFF000000FFFFFFFFLL;
        if ((*(_BYTE*)(v6 + 1672) & 1) != 0) {
          **(_BYTE**)(v6 + 1688) = 0;
          *(_QWORD*)(v6 + 1680) = 0;
        }
        else {
          *(_WORD*)(v6 + 1672) = 0;
        }
        *(_QWORD*)(v6 + 1856) = v6 + 1648;
        *(_QWORD*)(v6 + 1696) = 0;
        *(_QWORD*)(v6 + 1704) = 0;
        *(_DWORD*)(v6 + 1712) = -1;
        *(_BYTE*)(v6 + 1728) = -1;
        *(_QWORD*)(v6 + 1720) = 0xFF000000FFFFFFFFLL;
        if ((*(_BYTE*)(v6 + 1736) & 1) != 0) {
          **(_BYTE**)(v6 + 1752) = 0;
          *(_QWORD*)(v6 + 1744) = 0;
        }
        else {
          *(_WORD*)(v6 + 1736) = 0;
        }
        v133 = *v5;
        *(_QWORD*)(v6 + 1760) = 0;
        *(_QWORD*)(v6 + 1768) = 0;
        *(_QWORD*)(v6 + 1864) = v6 + 1712;
        v134 = fw_memory_HeapManager_Allocate(v133, 96, 16, 0);
        *(_WORD*)(v134 + 16) = 0;
        *(_DWORD*)(v134 + 40) = 0;
        *(_QWORD*)(v134 + 48) = 0;
        *(_QWORD*)(v134 + 56) = 0;
        *(_QWORD*)(v134 + 64) = 0;
        *(_QWORD*)(v134 + 72) = 0;
        *(_BYTE*)(v134 + 88) = 0;
        *(_WORD*)(v134 + 80) = 257;
        *(_BYTE*)(v134 + 82) = 1;
        *(_QWORD*)v134 = game_map_anonymous_HistoryMenuItem_vtable;
        *(_QWORD*)(v134 + 8) = 0;
        *(_DWORD*)(v134 + 84) = 1;
        BasicMenuCursor_16e0c00((_QWORD*)v6, v134);
        v135 = fw_memory_HeapManager_Allocate(*v5, 96, 16, 0);
        *(_WORD*)(v135 + 16) = 0;
        *(_DWORD*)(v135 + 40) = 0;
        *(_QWORD*)(v135 + 48) = 0;
        *(_QWORD*)(v135 + 56) = 0;
        *(_QWORD*)(v135 + 64) = 0;
        *(_QWORD*)(v135 + 72) = 0;
        *(_WORD*)(v135 + 80) = 257;
        *(_BYTE*)(v135 + 82) = 1;
        *(_QWORD*)v135 = game_map_anonymous_HistoryMenuItem_vtable;
        *(_QWORD*)(v135 + 8) = 0;
        *(_BYTE*)(v135 + 88) = 0;
        *(_DWORD*)(v135 + 84) = 2;
        BasicMenuCursor_16e0c00((_QWORD*)v6, v135);
        v136 = fw_memory_HeapManager_Allocate(*v5, 96, 16, 0);
        *(_WORD*)(v136 + 16) = 0;
        *(_DWORD*)(v136 + 40) = 0;
        *(_QWORD*)(v136 + 48) = 0;
        *(_QWORD*)(v136 + 56) = 0;
        *(_QWORD*)(v136 + 64) = 0;
        *(_QWORD*)(v136 + 72) = 0;
        *(_WORD*)(v136 + 80) = 257;
        *(_BYTE*)(v136 + 82) = 1;
        *(_QWORD*)v136 = game_map_anonymous_HistoryMenuItem_vtable;
        *(_QWORD*)(v136 + 8) = 0;
        *(_BYTE*)(v136 + 88) = 0;
        *(_DWORD*)(v136 + 84) = 3;
        BasicMenuCursor_16e0c00((_QWORD*)v6, v136);
        v137 = fw_memory_HeapManager_Allocate(*v5, 96, 16, 0);
        *(_WORD*)(v137 + 16) = 0;
        *(_DWORD*)(v137 + 40) = 0;
        *(_QWORD*)(v137 + 48) = 0;
        *(_QWORD*)(v137 + 56) = 0;
        *(_QWORD*)(v137 + 64) = 0;
        *(_QWORD*)(v137 + 72) = 0;
        *(_WORD*)(v137 + 80) = 257;
        *(_BYTE*)(v137 + 82) = 1;
        *(_QWORD*)v137 = game_map_anonymous_HistoryMenuItem_vtable;
        *(_QWORD*)(v137 + 8) = 0;
        *(_BYTE*)(v137 + 88) = 0;
        *(_DWORD*)(v137 + 84) = 4;
        BasicMenuCursor_16e0c00((_QWORD*)v6, v137);
        v138 = fw_memory_HeapManager_Allocate(*v5, 96, 16, 0);
        *(_WORD*)(v138 + 16) = 0;
        *(_DWORD*)(v138 + 40) = 0;
        *(_QWORD*)(v138 + 48) = 0;
        *(_QWORD*)(v138 + 56) = 0;
        *(_QWORD*)(v138 + 64) = 0;
        *(_QWORD*)(v138 + 72) = 0;
        *(_WORD*)(v138 + 80) = 257;
        *(_BYTE*)(v138 + 82) = 1;
        *(_QWORD*)v138 = game_map_anonymous_HistoryMenuItem_vtable;
        *(_QWORD*)(v138 + 8) = 0;
        *(_BYTE*)(v138 + 88) = 0;
        *(_DWORD*)(v138 + 84) = 5;
        BasicMenuCursor_16e0c00((_QWORD*)v6, v138);
        v139 = fw_memory_HeapManager_Allocate(*v5, 96, 16, 0);
        *(_WORD*)(v139 + 16) = 0;
        *(_DWORD*)(v139 + 40) = 0;
        *(_QWORD*)(v139 + 48) = 0;
        *(_QWORD*)(v139 + 56) = 0;
        *(_QWORD*)(v139 + 64) = 0;
        *(_QWORD*)(v139 + 72) = 0;
        *(_WORD*)(v139 + 80) = 257;
        *(_BYTE*)(v139 + 82) = 1;
        *(_QWORD*)v139 = game_map_anonymous_HistoryMenuItem_vtable;
        *(_QWORD*)(v139 + 8) = 0;
        *(_BYTE*)(v139 + 88) = 0;
        *(_DWORD*)(v139 + 84) = 6;
        BasicMenuCursor_16e0c00((_QWORD*)v6, v139);
        v140 = fw_memory_HeapManager_Allocate(*v5, 96, 16, 0);
        *(_WORD*)(v140 + 16) = 0;
        *(_DWORD*)(v140 + 40) = 0;
        *(_QWORD*)(v140 + 48) = 0;
        *(_QWORD*)(v140 + 56) = 0;
        *(_QWORD*)(v140 + 64) = 0;
        *(_QWORD*)(v140 + 72) = 0;
        *(_WORD*)(v140 + 80) = 257;
        *(_BYTE*)(v140 + 82) = 1;
        *(_QWORD*)v140 = game_map_anonymous_HistoryMenuItem_vtable;
        *(_QWORD*)(v140 + 8) = 0;
        *(_BYTE*)(v140 + 88) = 0;
        *(_DWORD*)(v140 + 84) = 7;
        BasicMenuCursor_16e0c00((_QWORD*)v6, v140);
        v141 = fw_memory_HeapManager_Allocate(*v5, 96, 16, 0);
        *(_WORD*)(v141 + 16) = 0;
        *(_DWORD*)(v141 + 40) = 0;
        *(_QWORD*)(v141 + 48) = 0;
        *(_QWORD*)(v141 + 56) = 0;
        *(_QWORD*)(v141 + 64) = 0;
        *(_QWORD*)(v141 + 72) = 0;
        *(_WORD*)(v141 + 80) = 257;
        *(_BYTE*)(v141 + 82) = 1;
        *(_QWORD*)v141 = game_map_anonymous_HistoryMenuItem_vtable;
        *(_QWORD*)(v141 + 8) = 0;
        *(_BYTE*)(v141 + 88) = 0;
        *(_DWORD*)(v141 + 84) = 8;
        BasicMenuCursor_16e0c00((_QWORD*)v6, v141);
        v142 = fw_memory_HeapManager_Allocate(*v5, 96, 16, 0);
        *(_WORD*)(v142 + 16) = 0;
        *(_DWORD*)(v142 + 40) = 0;
        *(_QWORD*)(v142 + 48) = 0;
        *(_QWORD*)(v142 + 56) = 0;
        *(_QWORD*)(v142 + 64) = 0;
        *(_QWORD*)(v142 + 72) = 0;
        *(_WORD*)(v142 + 80) = 257;
        *(_BYTE*)(v142 + 82) = 1;
        *(_QWORD*)v142 = game_map_anonymous_HistoryMenuItem_vtable;
        *(_QWORD*)(v142 + 8) = 0;
        *(_BYTE*)(v142 + 88) = 0;
        *(_DWORD*)(v142 + 84) = 9;
        BasicMenuCursor_16e0c00((_QWORD*)v6, v142);
        v143 = *(_QWORD**)(v6 + 232);
        v144 = *(_QWORD**)(v6 + 240);
        if (v143 != v144) {
          v145 = 0;
          do {
            v146 = *v143;
            if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v143 + 48LL))(*v143) &
                 1) != 0 &&
                ((*(__int64 (**)(__int64))(*(_QWORD*)v146 + 40LL))(v146) & 1) !=
                    0) {
              if (v145 == 4) {
                goto LABEL_163;
              }
              ++v145;
            }
            ++v143;
          } while (v143 != v144);
        }
        v146 = 0;
      LABEL_163:
        v147 = *(_QWORD*)(v6 + 336);
        if (v147 != v146) {
          if (v147 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v147 + 168LL))(v147);
          }
          *(_QWORD*)(v6 + 336) = v146;
          BasicMenu_16dea40(v6, 0, 1u, 0);
          v148 = *(_QWORD*)(v6 + 336);
          if (v148 == 0) {
            v149 = 4;
          LABEL_173:
            *(_DWORD*)(v6 + 356) = *(_DWORD*)(v6 + 356) & 0xFFFFFFFB | v149;
            result = GameRoutine_1271480(
                v6, (int*)(v89 + ((__int64)*(int*)(v6 + 1776) << 6) + 328));
            *(_BYTE*)(*GameData_212cfc0[0] + 24) = 1;
            return result;
          }
          (*(void (**)(__int64))(*(_QWORD*)v148 + 160LL))(v148);
          game_IsVibrationEnabled(
              (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
          v147 = *(_QWORD*)(v6 + 336);
        }
        v149 = 4;
        if (v147 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v147 + 120LL))(v147) & 1) !=
              0) {
            v149 = 4;
          }
          else {
            v149 = 0;
          }
        }
        goto LABEL_173;
      }
    }
    else {
      *(_DWORD*)(v6 + 1068) = 0;
      *(_DWORD*)(v6 + 1776) = 0;
    }
    *(_DWORD*)(v6 + 1072) = -1;
    *(_QWORD*)(v6 + 1080) = 0xFF000000FFFFFFFFLL;
    *(_BYTE*)(v6 + 1088) = -1;
    if ((*(_BYTE*)(v6 + 1096) & 1) != 0) {
      **(_BYTE**)(v6 + 1112) = 0;
      *(_QWORD*)(v6 + 1104) = 0;
    }
    else {
      *(_WORD*)(v6 + 1096) = 0;
    }
    *(_QWORD*)(v6 + 1120) = 0;
    *(_QWORD*)(v6 + 1128) = 0;
    goto LABEL_15;
  }
  return result;
}

#pragma GCC visibility pop
