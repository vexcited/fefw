#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* TelopParts_17cd840(__int64*, __int64*);
_QWORD* TelopParts_17cdaa0(_QWORD* result, __int64*);
__int64 GameRoutine_1374b10(__int64 result, int);
__int64 GameRoutine_16ae340(__int64*, __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_6ed030(__int64);
__int64 GameRoutine_90dc20(__int64, unsigned __int64*);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 ProcList_9bd480(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
__int64 game_telop_1770d20(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_2130f68;
extern _UNKNOWN GameData_2170810;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_20c25a0[])();
extern __int64 (*GameData_20c2620[])();
extern __int64 (*game_telop_TelopDiningResult_vtable[])();
extern __int64 (*game_telop_TelopResult_vtable[])();
extern __int64 (*game_telop_TelopSidestoryResult_vtable[])();
extern __int64 (*game_telop_TelopSortieVolunteerResult_vtable[])();
extern __int64 (*game_telop_TelopTheaterActResult_vtable[])();
extern __int64 (*game_telop_TelopTheaterWatchResult_vtable[])();
extern __int64 (*game_telop_TelopThermaeResult_vtable[])();
extern __int64 (*game_telop_TelopVolunteerResult_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_2130240[8];
extern __int64* GameData_2130f98[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131678;
extern __int64 GameData_2131d08[25];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void GameRoutine_1378190(__int64, const char*);
void GameRoutine_6e3b50(__int64, _QWORD*);
void Se_80e330(__int64, const char*);
void TelopParts_17cbd60(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_telop_176e820(__int64 a1, __int64 a2);
__int64 game_telop_176f020(__int64 a1, __int64* a2);
__int64 game_telop_176fc00(__int64 a1, __int64 a2);
__int64 game_telop_1770b60(__int64 a1, __int64 a2);
__int64 game_telop_1772480(__int64 a1, __int64 a2);
__int64 game_telop_1773410(__int64 a1, __int64 a2);
__int64 game_telop_1773940(__int64 a1, __int64 a2);
__int64 game_telop_1776e00(__int64 a1, __int64 a2);
__int64 game_telop_1777bf0(__int64 a1, __int64 a2);
void game_telop_17cc6d0(__int64* a1, __int64 a2);

__int64 game_telop_176e820(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  result = 0;
  if (a1 != 0 && a2 != 0) {
    result = ProcList_9bd480(a1);
    if (result != 0) {
      v5 = result;
      v8_.v8[0] = GameData_20c25a0;
      v8_.v8[1] = a2;
      v8_.v9 = v8_.v8;
      game_ProcList_Call_9bcfa0(result, (__int64)v8_.v8);
      if (v8_.v9 == v8_.v8) {
        v6 = 32;
      }
      else {
        if (v8_.v9 == nullptr) {
          goto LABEL_9;
        }
        v6 = 40;
      }
      (*(void (**)(__int64))(*v8_.v9 + v6))((__int64)v8_.v9);
    LABEL_9:
      if (*(_BYTE*)(*(_QWORD*)a2 + 112LL) != 5) {
        result = v5;
        if (*(_QWORD*)(*(_QWORD*)a2 + 544LL) == 0) {
          return result;
        }
        v8_.v8[2] = *(_QWORD*)(*(_QWORD*)a2 + 544LL);
        v8_.v8[0] = GameData_20c2620;
        v8_.v8[1] = a2;
        v8_.v9 = v8_.v8;
        game_ProcList_Call_9bcfa0(v5, (__int64)v8_.v8);
        if (v8_.v9 == v8_.v8) {
          v7 = 32;
          goto LABEL_15;
        }
        if (v8_.v9 != nullptr) {
          v7 = 40;
        LABEL_15:
          (*(void (**)(__int64))(*v8_.v9 + v7))((__int64)v8_.v9);
        }
      }
      return v5;
    }
  }
  return result;
}

__int64 game_telop_176f020(__int64 a1, __int64* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  int v33;
  __int64 v34;
  unsigned __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  int v41;
  char v42;
  __int64 v43;
  int v45;
  unsigned __int64 v46;
  __int64 v47;
  _QWORD v48[2];
  _QWORD** v49;
  struct {
    _QWORD* v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    _BYTE* v54;
    __int64 v55;
    int v56;
  } v50_;

  if (a1 == 0) {
    return 0;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1200, 16, 0);
  GameRoutine_1a0ba50(v5 + 144, 0, 0x420u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = *v4;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v9;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
  *(_DWORD*)(v10 + 48) = 0x2000;
  v11 = GameData_2131678;
  *(_WORD*)(v10 + 108) = 256;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v10;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v10 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v12 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1192) = 0;
  *(_QWORD*)(v5 + 1184) = 0;
  *(_QWORD*)(v5 + 1176) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v12;
  *(_QWORD*)v5 = game_telop_TelopSidestoryResult_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopSidestoryResult";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) =
      (unsigned int)game_HashString32("TelopSidestoryResult");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v17 = (char*)(v5 + 273);
  }
  strcpy(v17, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v18 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v18 = (char*)(v5 + 297);
  }
  strcpy(v18, "Common_TlpResult");
  GameRoutine_1374b10(v5, 2);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  GameRoutine_1378190(v5, "SE_SYS_Telop_Mini_Out");
  *(_BYTE*)(v5 + 337) = 1;
  Se_80e330(v5, "FF_Quest_Clear");
  Se_80e330(v5, "SE_SYS_Telop_Clear");
  v19 = *a2;
  *(_QWORD*)(v5 + 1168) = a2;
  if (*(_WORD*)(v19 + 344) != 0) {
    v20 = 0;
    v21 = GameData_212ceb0;
    v22 = GameData_212c8b0[0];
    do {
      v24 = *(_QWORD*)(v5 + 1176);
      v25 = *(_QWORD*)(v5 + 1184);
      v26 = *(_QWORD*)(*(_QWORD*)(v19 + 352) + 16 * v20 + 8);
      if (v24 == v25) {
      LABEL_24:
        if (v26 != 0) {
          v27 = *(unsigned __int16*)(v26 + 16);
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v27) +
                        73LL) == 17) {
            nn_os_LockMutex((__int64)&game_g_random_mutex);
            v28 = game_map_MapRandom_instance__ptr[0];
            v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v30 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v31 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v28 + 1) = v29;
            v32 = (v31 >> 8) ^ (v30 >> 19) ^ v31 ^ v30;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v28) = v30;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v28 + 4) = v32;
            nn_os_UnlockMutex((__int64)&game_g_random_mutex);
            v26 =
                (unsigned __int64)((16 * ((_WORD)v32 -
                                          1000 *
                                              (unsigned __int16)((v32 &
                                                                  0x7FFFFFFFu) /
                                                                 0x3E8)) +
                                    16) &
                                       0x3FF0 |
                                   1u)
                << 32;
          }
          else {
            v26 = 0x100000000LL;
          }
        }
        else {
          v27 = 0;
        }
        v46 = v26 | v27;
        v33 = *(unsigned __int8*)v21;
        v45 = 8;
        if (v33 != 0) {
          v34 = *v21;
        }
        else {
          v34 = 0;
        }
        v47 = v34;
        WORD1(v48[0]) = 0;
        DWORDn(v48[0], sizeof(v48[0]) / 4 - 1) = 0;
        v50_.v50 = nullptr;
        v50_.v51 = 0;
        v49 = &v50_.v50;
        v50_.v52 = 0;
        v50_.v53 = 0;
        v50_.v54 = nullptr;
        GameRoutine_930b90((__int64)v48, (__int64)v22);
        v35 = *(_QWORD*)(v5 + 1184);
        v50_.v55 = 0x100000000LL;
        v50_.v56 = -1;
        if (v35 >= *(_QWORD*)(v5 + 1192)) {
          v38 = GameRoutine_16ae340((__int64*)(v5 + 1176), (__int64)&v45);
        }
        else {
          v36 = v45;
          *(_QWORD*)(v35 + 4) = 0;
          *(_QWORD*)(v35 + 12) = 0;
          *(_DWORD*)v35 = v36;
          *(_QWORD*)(v35 + 4) = v46;
          if ((_BYTE)v47 != 0) {
            v37 = v47;
          }
          else {
            v37 = 0;
          }
          *(_QWORD*)(v35 + 48) = 0;
          v39 = v35 + 48;
          *(_QWORD*)(v39 - 36) = v37;
          *(_WORD*)(v39 - 22) = 0;
          *(_DWORD*)(v39 - 20) = 0;
          *(_QWORD*)(v39 - 8) = v39;
          *(_QWORD*)(v39 + 8) = 0;
          *(_QWORD*)(v39 + 16) = 0;
          *(_QWORD*)(v39 + 24) = 0;
          *(_QWORD*)(v39 + 32) = 0;
          GameRoutine_930b90(v39 - 24, (__int64)v48);
          v40 = v50_.v55;
          v41 = v50_.v56;
          *(_WORD*)(v39 + 56) = 0;
          v38 = v39 + 64;
          *(_DWORD*)(v39 + 48) = v41;
          *(_QWORD*)(v39 + 40) = v40;
        }
        v42 = v50_.v52;
        *(_QWORD*)(v5 + 1184) = v38;
        v48[0] = 0;
        LODWORD(v48[1]) = 0;
        if ((v42 & 1) != 0) {
          *v50_.v54 = 0;
          v50_.v53 = 0;
        }
        else {
          LOWORD(v50_.v52) = 0;
        }
        GameRoutine_6e3b50((__int64)&v49, v50_.v50);
        v50_.v50 = nullptr;
        v50_.v51 = 0;
        v49 = &v50_.v50;
        if ((v50_.v52 & 1) != 0) {
          v23 = v50_.v54;
          if (v50_.v54 != nullptr) {
            v43 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v43,
                (__int64)v50_.v54);
            v23 = v50_.v50;
          }
        }
        else {
          v23 = nullptr;
        }
        GameRoutine_6e3b50((__int64)&v49, v23);
      }
      else {
        while (*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                          8LL * *(unsigned __int16*)(v24 + 4)) != v26) {
          v24 += 112;
          if (v24 == v25) {
            goto LABEL_24;
          }
        }
        ++*(_DWORD*)(v24 + 92);
      }
      ++v20;
      v19 = **(_QWORD**)(v5 + 1168);
    } while (v20 < *(unsigned __int16*)(v19 + 344));
  }
  return v5;
}

__int64 game_telop_176fc00(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;

  if (a1 == 0) {
    return 0;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1176, 16, 0);
  GameRoutine_1a0ba50(v5 + 144, 0, 0x408u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = *v4;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v9;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
  *(_DWORD*)(v10 + 48) = 0x2000;
  v11 = GameData_2131678;
  *(_WORD*)(v10 + 108) = 256;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v10;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v10 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v12 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v12;
  *(_QWORD*)v5 = game_telop_TelopThermaeResult_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopThermaeResult";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32("TelopThermaeResult");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_QWORD*)(v5 + 1168) = a2;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v17 = (char*)(v5 + 273);
  }
  strcpy(v17, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v18 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v18 = (char*)(v5 + 297);
  }
  strcpy(v18, "Common_TlpResult");
  GameRoutine_1374b10(v5, 2);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  GameRoutine_1378190(v5, "SE_SYS_Telop_Mini_Out");
  return v5;
}

__int64 game_telop_1770b60(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  _BYTE* v6;
  char v7;
  char* v8;
  char* v9;

  v2 = 0;
  if (a1 != 0 && *(_BYTE*)(a2 + 56) != 0) {
    v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1224, 16, 0);
    game_telop_1770d20(v2);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v2;
      *(_QWORD*)(v2 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v2;
    *(_QWORD*)(v2 + 24) = "TelopTrainingResult";
    *(_QWORD*)(v2 + 32) = a1;
    *(_DWORD*)(v2 + 140) =
        (unsigned int)game_HashString32("TelopTrainingResult");
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 24;
    *(_QWORD*)(v2 + 80) = 1;
    *(_QWORD*)(v2 + 8) = &GameData_2170810;
    *(_QWORD*)(v2 + 16) = &GameData_2170810;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2) & 1) != 0 &&
        (*(_WORD*)(v2 + 136) & 0x100) == 0) {
      *(_WORD*)(v2 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v2 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v2 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v2 + 136) |= 2u;
    if ((*(_BYTE*)(v2 + 272) & 1) != 0) {
      *(_QWORD*)(v2 + 280) = 17;
      v8 = *(char**)(v2 + 288);
    }
    else {
      *(_BYTE*)(v2 + 272) = 34;
      v8 = (char*)(v2 + 273);
    }
    strcpy(v8, "Layout/Common.arc");
    if ((*(_BYTE*)(v2 + 296) & 1) != 0) {
      *(_QWORD*)(v2 + 304) = 16;
      v9 = *(char**)(v2 + 312);
    }
    else {
      *(_BYTE*)(v2 + 296) = 32;
      v9 = (char*)(v2 + 297);
    }
    strcpy(v9, "Common_TlpResult");
    GameRoutine_1374b10(v2, 2);
    Se_80e330(v2, "SE_SYS_Telop_Mini_In");
    GameRoutine_1378190(v2, "SE_SYS_Telop_Mini_Out");
    *(_QWORD*)(v2 + 1168) = a2;
  }
  return v2;
}

__int64 game_telop_1772480(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  void* v20;
  __int64 v21;
  _BYTE* v22;
  char v23;
  char* v24;
  char* v25;

  if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)a2 + 56LL))(a2) == 0) {
    return 0;
  }
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 48LL))(a2);
  v5 = game_GameModeData_instance_;
  v6 = GameRoutine_90dc20(game_GameModeData_instance_ + 152,
                          *(unsigned __int64**)(v4 + 112));
  if ((v6 & 0x80000000) != 0 || a1 == 0) {
    return 0;
  }
  v7 = v6;
  v8 = *(_QWORD*)(*(_QWORD*)(v5 + 160) + 8LL);
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       1344, 16, 0);
  GameRoutine_1a0ba50(v10 + 144, 0, 0x4B0u);
  v11 = GameData_212c608[0];
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 24) = "NULL";
  *(_QWORD*)(v10 + 32) = 0;
  v12 = (_QWORD*)(v10 + 32);
  *(_QWORD*)(v10 + 138) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 80) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_QWORD*)(v10 + 8) = 0;
  game_ProcInst_Register(v10);
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 152) = 0;
  *(_QWORD*)(v10 + 160) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 192) = v10 + 200;
  *(_QWORD*)(v10 + 240) = 0;
  *(_DWORD*)(v10 + 248) = 1065353216;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 296) = 0;
  *(_QWORD*)(v10 + 304) = 0;
  *(_QWORD*)(v10 + 312) = 0;
  *(_DWORD*)(v10 + 332) = 0;
  *(_BYTE*)(v10 + 338) = 0;
  *(_QWORD*)(v10 + 344) = 0;
  *(_QWORD*)(v10 + 352) = 0;
  *(_QWORD*)(v10 + 360) = 0;
  *(_QWORD*)(v10 + 368) = 0;
  *(_DWORD*)(v10 + 320) = 3;
  *(_QWORD*)(v10 + 376) = 0;
  *(_QWORD*)(v10 + 384) = 0;
  *(_QWORD*)(v10 + 392) = 0;
  *(_QWORD*)(v10 + 400) = 0;
  *(_QWORD*)(v10 + 408) = 0;
  *(_QWORD*)(v10 + 416) = 0;
  *(_QWORD*)(v10 + 424) = 0;
  *(_DWORD*)(v10 + 432) = 0x2000;
  *(_QWORD*)(v10 + 472) = 0;
  *(_QWORD*)(v10 + 480) = 0;
  *(_QWORD*)(v10 + 440) = 0;
  *(_QWORD*)(v10 + 448) = 0;
  *(_QWORD*)(v10 + 504) = 0;
  *(_QWORD*)(v10 + 512) = 0;
  *(_QWORD*)(v10 + 488) = 0;
  *(_QWORD*)(v10 + 496) = 0;
  *(_DWORD*)(v10 + 520) = 1065353216;
  *(_QWORD*)(v10 + 324) = 0;
  *(_QWORD*)(v10 + 528) = 0;
  *(_QWORD*)(v10 + 536) = 0;
  *(_QWORD*)(v10 + 544) = 0;
  *(_DWORD*)(v10 + 552) = 1065353216;
  *(_WORD*)(v10 + 560) = 0;
  *(_WORD*)(v10 + 584) = 0;
  *(_BYTE*)(v10 + 608) = 0;
  *(_QWORD*)(v10 + 656) = 0;
  *(_QWORD*)(v10 + 648) = 0;
  *(_QWORD*)(v10 + 632) = 0;
  *(_WORD*)(v10 + 336) = 1;
  *(_QWORD*)(v10 + 624) = 0;
  *(_QWORD*)(v10 + 616) = 0;
  *(_QWORD*)(v10 + 688) = 0;
  *(_QWORD*)(v10 + 680) = 0;
  *(_QWORD*)(v10 + 672) = 0;
  *(_QWORD*)(v10 + 664) = 0;
  *(_DWORD*)(v10 + 696) = 1065353216;
  *(_QWORD*)(v10 + 720) = 0;
  *(_QWORD*)(v10 + 712) = 0;
  *(_QWORD*)(v10 + 704) = 0;
  *(_QWORD*)(v10 + 456) = 0;
  *(_QWORD*)(v10 + 464) = v10 + 472;
  *(_DWORD*)(v10 + 728) = 1065353216;
  *(_WORD*)(v10 + 736) = 0;
  *(_WORD*)(v10 + 760) = 0;
  *(_BYTE*)(v10 + 784) = 0;
  *(_QWORD*)(v10 + 792) = 0;
  *(_BYTE*)(v10 + 800) = 0;
  *(_QWORD*)(v10 + 640) = v10 + 648;
  v13 = *v9;
  v14 = GameData_2130240[0] + 2;
  *(_BYTE*)(v10 + 816) = 0;
  *(_BYTE*)(v10 + 820) = 0;
  *(_WORD*)(v10 + 824) = 0;
  *(_QWORD*)(v10 + 808) = v14;
  *(_QWORD*)v10 = game_telop_TelopResult_vtable;
  v15 = fw_memory_HeapManager_Allocate(v13, 296, 16, 0);
  *(_DWORD*)(v15 + 48) = 0x2000;
  v16 = GameData_2131678;
  *(_WORD*)(v15 + 108) = 256;
  *(_QWORD*)(v15 + 8) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_DWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_DWORD*)(v15 + 104) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_WORD*)(v15 + 80) = 0;
  *(_DWORD*)(v15 + 112) = -1082130432;
  *(_WORD*)(v15 + 116) = 0;
  *(_WORD*)(v15 + 136) = 0;
  *(_BYTE*)(v15 + 160) = 0;
  *(_BYTE*)(v15 + 288) = 0;
  *(_QWORD*)(v15 + 272) = 0;
  *(_QWORD*)(v15 + 280) = 0;
  *(_QWORD*)(v15 + 256) = 0;
  *(_QWORD*)(v15 + 264) = 0;
  *(_QWORD*)(v15 + 240) = 0;
  *(_QWORD*)(v15 + 248) = 0;
  *(_QWORD*)(v15 + 224) = 0;
  *(_QWORD*)(v15 + 232) = 0;
  *(_QWORD*)(v15 + 208) = 0;
  *(_QWORD*)(v15 + 216) = 0;
  *(_QWORD*)(v15 + 192) = 0;
  *(_QWORD*)(v15 + 200) = 0;
  *(_QWORD*)(v15 + 176) = 0;
  *(_QWORD*)(v15 + 184) = 0;
  *(_QWORD*)(v15 + 168) = 0;
  *(_QWORD*)(v15 + 120) = 0;
  *(_DWORD*)(v15 + 127) = 0;
  *(_QWORD*)(v10 + 856) = v15;
  *(_WORD*)(v10 + 960) = 0;
  *(_QWORD*)(v10 + 1016) = 0;
  *(_QWORD*)(v10 + 992) = 0;
  *(_QWORD*)(v10 + 1000) = 0;
  *(_BYTE*)(v10 + 952) = 0;
  *(_QWORD*)(v10 + 944) = 0;
  *(_QWORD*)(v10 + 936) = 0;
  *(_QWORD*)(v10 + 928) = 0;
  *(_QWORD*)(v10 + 920) = 0;
  *(_QWORD*)(v10 + 912) = 0;
  *(_QWORD*)(v10 + 904) = 0;
  *(_QWORD*)(v10 + 896) = 0;
  *(_QWORD*)(v10 + 888) = 0;
  *(_QWORD*)(v10 + 880) = 0;
  *(_QWORD*)(v10 + 872) = 0;
  *(_QWORD*)(v10 + 864) = 0;
  *(_QWORD*)(v10 + 1024) = 1065353216;
  *(_WORD*)(v10 + 1032) = 0;
  *(_WORD*)(v10 + 1040) = 0;
  *(_WORD*)(v10 + 1064) = 0;
  *(_WORD*)(v10 + 1088) = 0;
  *(_QWORD*)v15 = v16 + 16;
  *(_DWORD*)(v15 + 292) = 2;
  *(_QWORD*)(v15 + 24) = 0;
  *(_QWORD*)(v10 + 848) = v15 + 24;
  *(_QWORD*)(v10 + 1007) = 0;
  v17 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v10 + 1160) = 0;
  *(_BYTE*)(v10 + 1152) = 0;
  *(_QWORD*)(v10 + 1144) = 0;
  *(_QWORD*)(v10 + 1136) = 0;
  *(_QWORD*)(v10 + 1128) = 0;
  *(_QWORD*)(v10 + 1120) = 0;
  *(_QWORD*)(v10 + 1112) = 0;
  *(_QWORD*)(v10 + 1224) = 0;
  *(_QWORD*)(v10 + 1200) = 0;
  *(_QWORD*)(v10 + 1184) = 0;
  *(_QWORD*)(v10 + 1176) = 0;
  *(_QWORD*)(v10 + 1168) = 0;
  *(_QWORD*)(v10 + 1232) = 1065353216;
  *(_WORD*)(v10 + 1240) = 0;
  *(_WORD*)(v10 + 1248) = 0;
  *(_WORD*)(v10 + 1272) = 0;
  *(_WORD*)(v10 + 1296) = 0;
  *(_QWORD*)(v10 + 984) = v17;
  *(_QWORD*)v10 = game_telop_TelopVolunteerResult_vtable;
  *(_QWORD*)(v10 + 1215) = 0;
  *(_QWORD*)(v10 + 1208) = 0;
  v18 = GameData_2131d08[0] + 16;
  *(_QWORD*)(v10 + 1328) = 0;
  *(_QWORD*)(v10 + 1320) = 0;
  *(_QWORD*)(v10 + 1192) = v18;
  v19 = *(_QWORD*)(a1 + 40);
  if (v19 != 0) {
    *(_QWORD*)(v19 + 48) = v10;
    *(_QWORD*)(v10 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v10;
  *(_QWORD*)(v10 + 24) = "TelopVolunteerResult";
  *(_QWORD*)(v10 + 32) = a1;
  *(_DWORD*)(v10 + 140) =
      (unsigned int)game_HashString32("TelopVolunteerResult");
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 24;
  *(_QWORD*)(v10 + 80) = 1;
  v20 = GameData_2130f68;
  *(_QWORD*)(v10 + 8) = GameData_2130f68;
  *(_QWORD*)(v10 + 16) = v20;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 136LL))(v10) & 1) != 0 &&
      (*(_WORD*)(v10 + 136) & 0x100) == 0) {
    *(_WORD*)(v10 + 136) |= 0x100u;
  }
  v21 = v7;
  v22 = (_BYTE*)*v12;
  v23 = *(_BYTE*)(*v12 + 138LL);
  if (v23 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v22 + 64LL))(*v12);
    v23 = v22[138];
  }
  v22[138] = v23 + 1;
  *(_WORD*)(v10 + 136) |= 2u;
  if ((*(_BYTE*)(v10 + 272) & 1) != 0) {
    *(_QWORD*)(v10 + 280) = 17;
    v24 = *(char**)(v10 + 288);
  }
  else {
    *(_BYTE*)(v10 + 272) = 34;
    v24 = (char*)(v10 + 273);
  }
  strcpy(v24, "Layout/Common.arc");
  if ((*(_BYTE*)(v10 + 296) & 1) != 0) {
    *(_QWORD*)(v10 + 304) = 16;
    v25 = *(char**)(v10 + 312);
  }
  else {
    *(_BYTE*)(v10 + 296) = 32;
    v25 = (char*)(v10 + 297);
  }
  strcpy(v25, "Common_TlpResult");
  GameRoutine_1374b10(v10, 2);
  Se_80e330(v10, "SE_SYS_Telop_Mini_In");
  GameRoutine_1378190(v10, "SE_SYS_Telop_Mini_Out");
  *(_QWORD*)(v10 + 1168) = a2;
  *(_QWORD*)(v10 + 1176) = v8 + 32 * v21;
  return v10;
}

__int64 game_telop_1773410(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  void* v20;
  __int64 v21;
  _BYTE* v22;
  char v23;
  char* v24;
  char* v25;

  if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)a2 + 56LL))(a2) == 0) {
    return 0;
  }
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 48LL))(a2);
  v5 = game_GameModeData_instance_;
  v6 = GameRoutine_90dc20(game_GameModeData_instance_ + 152,
                          *(unsigned __int64**)(v4 + 112));
  if ((v6 & 0x80000000) != 0 || a1 == 0) {
    return 0;
  }
  v7 = v6;
  v8 = *(_QWORD*)(*(_QWORD*)(v5 + 160) + 8LL);
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       1344, 16, 0);
  GameRoutine_1a0ba50(v10 + 144, 0, 0x4B0u);
  v11 = GameData_212c608[0];
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 24) = "NULL";
  *(_QWORD*)(v10 + 32) = 0;
  v12 = (_QWORD*)(v10 + 32);
  *(_QWORD*)(v10 + 138) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 80) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_QWORD*)(v10 + 8) = 0;
  game_ProcInst_Register(v10);
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 152) = 0;
  *(_QWORD*)(v10 + 160) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 192) = v10 + 200;
  *(_QWORD*)(v10 + 240) = 0;
  *(_DWORD*)(v10 + 248) = 1065353216;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 296) = 0;
  *(_QWORD*)(v10 + 304) = 0;
  *(_QWORD*)(v10 + 312) = 0;
  *(_DWORD*)(v10 + 332) = 0;
  *(_BYTE*)(v10 + 338) = 0;
  *(_QWORD*)(v10 + 344) = 0;
  *(_QWORD*)(v10 + 352) = 0;
  *(_QWORD*)(v10 + 360) = 0;
  *(_QWORD*)(v10 + 368) = 0;
  *(_DWORD*)(v10 + 320) = 3;
  *(_QWORD*)(v10 + 376) = 0;
  *(_QWORD*)(v10 + 384) = 0;
  *(_QWORD*)(v10 + 392) = 0;
  *(_QWORD*)(v10 + 400) = 0;
  *(_QWORD*)(v10 + 408) = 0;
  *(_QWORD*)(v10 + 416) = 0;
  *(_QWORD*)(v10 + 424) = 0;
  *(_DWORD*)(v10 + 432) = 0x2000;
  *(_QWORD*)(v10 + 472) = 0;
  *(_QWORD*)(v10 + 480) = 0;
  *(_QWORD*)(v10 + 440) = 0;
  *(_QWORD*)(v10 + 448) = 0;
  *(_QWORD*)(v10 + 504) = 0;
  *(_QWORD*)(v10 + 512) = 0;
  *(_QWORD*)(v10 + 488) = 0;
  *(_QWORD*)(v10 + 496) = 0;
  *(_DWORD*)(v10 + 520) = 1065353216;
  *(_QWORD*)(v10 + 324) = 0;
  *(_QWORD*)(v10 + 528) = 0;
  *(_QWORD*)(v10 + 536) = 0;
  *(_QWORD*)(v10 + 544) = 0;
  *(_DWORD*)(v10 + 552) = 1065353216;
  *(_WORD*)(v10 + 560) = 0;
  *(_WORD*)(v10 + 584) = 0;
  *(_BYTE*)(v10 + 608) = 0;
  *(_QWORD*)(v10 + 656) = 0;
  *(_QWORD*)(v10 + 648) = 0;
  *(_QWORD*)(v10 + 632) = 0;
  *(_WORD*)(v10 + 336) = 1;
  *(_QWORD*)(v10 + 624) = 0;
  *(_QWORD*)(v10 + 616) = 0;
  *(_QWORD*)(v10 + 688) = 0;
  *(_QWORD*)(v10 + 680) = 0;
  *(_QWORD*)(v10 + 672) = 0;
  *(_QWORD*)(v10 + 664) = 0;
  *(_DWORD*)(v10 + 696) = 1065353216;
  *(_QWORD*)(v10 + 720) = 0;
  *(_QWORD*)(v10 + 712) = 0;
  *(_QWORD*)(v10 + 704) = 0;
  *(_QWORD*)(v10 + 456) = 0;
  *(_QWORD*)(v10 + 464) = v10 + 472;
  *(_DWORD*)(v10 + 728) = 1065353216;
  *(_WORD*)(v10 + 736) = 0;
  *(_WORD*)(v10 + 760) = 0;
  *(_BYTE*)(v10 + 784) = 0;
  *(_QWORD*)(v10 + 792) = 0;
  *(_BYTE*)(v10 + 800) = 0;
  *(_QWORD*)(v10 + 640) = v10 + 648;
  v13 = *v9;
  v14 = GameData_2130240[0] + 2;
  *(_BYTE*)(v10 + 816) = 0;
  *(_BYTE*)(v10 + 820) = 0;
  *(_WORD*)(v10 + 824) = 0;
  *(_QWORD*)(v10 + 808) = v14;
  *(_QWORD*)v10 = game_telop_TelopResult_vtable;
  v15 = fw_memory_HeapManager_Allocate(v13, 296, 16, 0);
  *(_DWORD*)(v15 + 48) = 0x2000;
  v16 = GameData_2131678;
  *(_WORD*)(v15 + 108) = 256;
  *(_QWORD*)(v15 + 8) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_DWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_DWORD*)(v15 + 104) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_WORD*)(v15 + 80) = 0;
  *(_DWORD*)(v15 + 112) = -1082130432;
  *(_WORD*)(v15 + 116) = 0;
  *(_WORD*)(v15 + 136) = 0;
  *(_BYTE*)(v15 + 160) = 0;
  *(_BYTE*)(v15 + 288) = 0;
  *(_QWORD*)(v15 + 272) = 0;
  *(_QWORD*)(v15 + 280) = 0;
  *(_QWORD*)(v15 + 256) = 0;
  *(_QWORD*)(v15 + 264) = 0;
  *(_QWORD*)(v15 + 240) = 0;
  *(_QWORD*)(v15 + 248) = 0;
  *(_QWORD*)(v15 + 224) = 0;
  *(_QWORD*)(v15 + 232) = 0;
  *(_QWORD*)(v15 + 208) = 0;
  *(_QWORD*)(v15 + 216) = 0;
  *(_QWORD*)(v15 + 192) = 0;
  *(_QWORD*)(v15 + 200) = 0;
  *(_QWORD*)(v15 + 176) = 0;
  *(_QWORD*)(v15 + 184) = 0;
  *(_QWORD*)(v15 + 168) = 0;
  *(_QWORD*)(v15 + 120) = 0;
  *(_DWORD*)(v15 + 127) = 0;
  *(_QWORD*)(v10 + 856) = v15;
  *(_WORD*)(v10 + 960) = 0;
  *(_QWORD*)(v10 + 1016) = 0;
  *(_QWORD*)(v10 + 992) = 0;
  *(_QWORD*)(v10 + 1000) = 0;
  *(_BYTE*)(v10 + 952) = 0;
  *(_QWORD*)(v10 + 944) = 0;
  *(_QWORD*)(v10 + 936) = 0;
  *(_QWORD*)(v10 + 928) = 0;
  *(_QWORD*)(v10 + 920) = 0;
  *(_QWORD*)(v10 + 912) = 0;
  *(_QWORD*)(v10 + 904) = 0;
  *(_QWORD*)(v10 + 896) = 0;
  *(_QWORD*)(v10 + 888) = 0;
  *(_QWORD*)(v10 + 880) = 0;
  *(_QWORD*)(v10 + 872) = 0;
  *(_QWORD*)(v10 + 864) = 0;
  *(_QWORD*)(v10 + 1024) = 1065353216;
  *(_WORD*)(v10 + 1032) = 0;
  *(_WORD*)(v10 + 1040) = 0;
  *(_WORD*)(v10 + 1064) = 0;
  *(_WORD*)(v10 + 1088) = 0;
  *(_QWORD*)v15 = v16 + 16;
  *(_DWORD*)(v15 + 292) = 2;
  *(_QWORD*)(v15 + 24) = 0;
  *(_QWORD*)(v10 + 848) = v15 + 24;
  *(_QWORD*)(v10 + 1007) = 0;
  v17 = GameData_2130f98[0] + 2;
  *(_BYTE*)(v10 + 1152) = 0;
  *(_QWORD*)(v10 + 1144) = 0;
  *(_QWORD*)(v10 + 1136) = 0;
  *(_QWORD*)(v10 + 1128) = 0;
  *(_QWORD*)(v10 + 1120) = 0;
  *(_QWORD*)(v10 + 1112) = 0;
  *(_QWORD*)(v10 + 1224) = 0;
  *(_QWORD*)(v10 + 1200) = 0;
  *(_QWORD*)(v10 + 1184) = 0;
  *(_QWORD*)(v10 + 1176) = 0;
  *(_QWORD*)(v10 + 1168) = 0;
  *(_QWORD*)(v10 + 1160) = 0;
  *(_QWORD*)(v10 + 1232) = 1065353216;
  *(_WORD*)(v10 + 1240) = 0;
  *(_WORD*)(v10 + 1248) = 0;
  *(_WORD*)(v10 + 1272) = 0;
  *(_WORD*)(v10 + 1296) = 0;
  *(_QWORD*)(v10 + 984) = v17;
  *(_QWORD*)(v10 + 1215) = 0;
  *(_QWORD*)(v10 + 1208) = 0;
  v18 = GameData_2131d08[0] + 16;
  *(_QWORD*)(v10 + 1328) = 0;
  *(_QWORD*)(v10 + 1320) = 0;
  *(_QWORD*)v10 = game_telop_TelopSortieVolunteerResult_vtable;
  *(_QWORD*)(v10 + 1192) = v18;
  v19 = *(_QWORD*)(a1 + 40);
  if (v19 != 0) {
    *(_QWORD*)(v19 + 48) = v10;
    *(_QWORD*)(v10 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v10;
  *(_QWORD*)(v10 + 24) = "TelopSortieVolunteerResult";
  *(_QWORD*)(v10 + 32) = a1;
  *(_DWORD*)(v10 + 140) =
      (unsigned int)game_HashString32("TelopSortieVolunteerResult");
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 24;
  *(_QWORD*)(v10 + 80) = 1;
  v20 = GameData_2130f68;
  *(_QWORD*)(v10 + 8) = GameData_2130f68;
  *(_QWORD*)(v10 + 16) = v20;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 136LL))(v10) & 1) != 0 &&
      (*(_WORD*)(v10 + 136) & 0x100) == 0) {
    *(_WORD*)(v10 + 136) |= 0x100u;
  }
  v21 = v7;
  v22 = (_BYTE*)*v12;
  v23 = *(_BYTE*)(*v12 + 138LL);
  if (v23 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v22 + 64LL))(*v12);
    v23 = v22[138];
  }
  v22[138] = v23 + 1;
  *(_WORD*)(v10 + 136) |= 2u;
  if ((*(_BYTE*)(v10 + 272) & 1) != 0) {
    *(_QWORD*)(v10 + 280) = 17;
    v24 = *(char**)(v10 + 288);
  }
  else {
    *(_BYTE*)(v10 + 272) = 34;
    v24 = (char*)(v10 + 273);
  }
  strcpy(v24, "Layout/Common.arc");
  if ((*(_BYTE*)(v10 + 296) & 1) != 0) {
    *(_QWORD*)(v10 + 304) = 16;
    v25 = *(char**)(v10 + 312);
  }
  else {
    *(_BYTE*)(v10 + 296) = 32;
    v25 = (char*)(v10 + 297);
  }
  strcpy(v25, "Common_TlpResult");
  GameRoutine_1374b10(v10, 2);
  Se_80e330(v10, "SE_SYS_Telop_Mini_In");
  GameRoutine_1378190(v10, "SE_SYS_Telop_Mini_Out");
  *(_QWORD*)(v10 + 1168) = a2;
  *(_QWORD*)(v10 + 1176) = v8 + 32 * v21;
  return v10;
}

__int64 game_telop_1773940(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;

  if (a1 == 0) {
    return 0;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1176, 16, 0);
  GameRoutine_1a0ba50(v5 + 144, 0, 0x408u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = *v4;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v9;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
  *(_DWORD*)(v10 + 48) = 0x2000;
  v11 = GameData_2131678;
  *(_WORD*)(v10 + 108) = 256;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v10;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v10 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v12 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v12;
  *(_QWORD*)v5 = game_telop_TelopDiningResult_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopDiningResult";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32("TelopDiningResult");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_QWORD*)(v5 + 1168) = a2;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v17 = (char*)(v5 + 273);
  }
  strcpy(v17, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v18 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v18 = (char*)(v5 + 297);
  }
  strcpy(v18, "Common_TlpResult");
  GameRoutine_1374b10(v5, 2);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  GameRoutine_1378190(v5, "SE_SYS_Telop_Mini_Out");
  return v5;
}

__int64 game_telop_1776e00(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;

  if (a1 == 0) {
    return 0;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1176, 16, 0);
  GameRoutine_1a0ba50(v5 + 144, 0, 0x408u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = *v4;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v9;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
  *(_DWORD*)(v10 + 48) = 0x2000;
  v11 = GameData_2131678;
  *(_WORD*)(v10 + 108) = 256;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v10;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v10 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v12 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v12;
  *(_QWORD*)v5 = game_telop_TelopTheaterActResult_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopTheaterActResult";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) =
      (unsigned int)game_HashString32("TelopTheaterActResult");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v17 = (char*)(v5 + 273);
  }
  strcpy(v17, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v18 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v18 = (char*)(v5 + 297);
  }
  strcpy(v18, "Common_TlpResult");
  GameRoutine_1374b10(v5, 2);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  GameRoutine_1378190(v5, "SE_SYS_Telop_Mini_Out");
  *(_QWORD*)(v5 + 1168) = a2;
  return v5;
}

__int64 game_telop_1777bf0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;

  if (a1 == 0) {
    return 0;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1176, 16, 0);
  GameRoutine_1a0ba50(v5 + 144, 0, 0x408u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = *v4;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v9;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
  *(_DWORD*)(v10 + 48) = 0x2000;
  v11 = GameData_2131678;
  *(_WORD*)(v10 + 108) = 256;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v10;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v10 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v12 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v12;
  *(_QWORD*)v5 = game_telop_TelopTheaterWatchResult_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopTheaterWatchResult";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) =
      (unsigned int)game_HashString32("TelopTheaterWatchResult");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v17 = (char*)(v5 + 273);
  }
  strcpy(v17, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v18 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v18 = (char*)(v5 + 297);
  }
  strcpy(v18, "Common_TlpResult");
  GameRoutine_1374b10(v5, 2);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  GameRoutine_1378190(v5, "SE_SYS_Telop_Mini_Out");
  *(_QWORD*)(v5 + 1168) = a2;
  return v5;
}

void game_telop_17cc6d0(__int64* a1, __int64 a2)
{
  char* v3;
  char* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  struct {
    __int64 v8[3];
    int v9;
    char gap36_[4];
    __int64 v10;
    __int64 v11;
    __int16 v12;
    char gap58_[6];
    __int64 v13;
    __int64 v14;
    _QWORD v15[2];
    __int16 v16;
  } v8_;
  _WORD v17[12];
  struct {
    _BYTE v18[51];
    char gap195_[1];
    int v19;
  } v18_;
  struct {
    _DWORD v20[8];
    __int16 v21;
  } v20_;

  v3 = *(const char**)(a2 + 8);
  v8_.v9 = 0;
  v8_.v8[1] = 0;
  v8_.v8[2] = 0;
  v8_.v12 = 15;
  v8_.v10 = 0;
  v8_.v11 = 0;
  v8_.v16 = 0;
  v17[0] = 0;
  v8_.v13 = 0;
  v8_.v14 = 0;
  v8_.v15[0] = 0;
  *(_QWORD*)((char*)v8_.v15 + 7) = 0;
  memset(v18_.v18, 0, sizeof(v18_.v18));
  LOWORD(v20_.v20[0]) = 0;
  v20_.v20[6] = 0;
  v20_.v21 = 0;
  v18_.v19 = -1;
  LODWORD(v8_.v8[0]) = 5;
  GameRoutine_60a020((__int64)v20_.v20, v3);
  GameRoutine_60a020((__int64)v17, "MID_Sys_Result_Msg_SendTransport");
  v5 = (const char*)GameRoutine_6ed030(a2);
  GameRoutine_60a020((__int64)v18_.v18, v5);
  v6 = a1[206];
  if (v6 >= a1[207]) {
    v7 = TelopParts_17cd840(a1 + 205, v8_.v8);
  }
  else {
    TelopParts_17cdaa0((_QWORD*)a1[206], v8_.v8);
    v7 = (_QWORD*)(v6 + 248);
  }
  a1[206] = (__int64)v7;
  TelopParts_17cbd60((__int64)v8_.v8);
}

#pragma GCC visibility pop
