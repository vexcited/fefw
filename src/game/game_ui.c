#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_17363e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18acaf0(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*ui_Event_vtable[])();
extern __int64 GameData_212d8b0[3];
extern __int64 game_gameui_Footer_instance_;
extern __int64 ui_Manager_instance_;
extern int GameData_22593dc;
extern int GameData_22593f8;
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 game_GameUI_Setup_lambda1_Invoke(__int64 a1, _DWORD* a2, int* a3);
_QWORD* game_GameUI_Setup_lambda2_Invoke();
_QWORD* game_GameUI_Setup_lambda3_Invoke();
void game_GameUI_Setup_lambda4_Invoke();
__attribute__((swiftcall)) void
GameRoutine_1908c60_alt1(PSEUDO_X8, __int64,
                         __int64) __asm__("GameRoutine_1908c60");
__attribute__((swiftcall)) void
GameRoutine_1908f00_alt1(PSEUDO_X8, __int64,
                         __int64) __asm__("GameRoutine_1908f00");
__int64 Cursor_Destructor_18a2440(_QWORD*);
__int64 FloatingHelp_18ac7f0(void);
__int64 FloatingHelp_Destructor(_QWORD*);
__int64 GameRoutine_112e290(_QWORD);
__int64 GameRoutine_1366820(__int64 result);
__int64 GameRoutine_15e1350(_QWORD);
__int64 GameRoutine_1735b60(_QWORD);
__int64 GameRoutine_173df20(_QWORD);
__int64 GameRoutine_17aa8e0(void);
__int64 GameRoutine_17b7d20(_QWORD);
__int64 GameRoutine_18a2660(void);
__int64 GameRoutine_19aeaf0(void);
__int64 GameRoutine_19ef080(_QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 HeaderFooter_15651c0(_QWORD);
__int64 LayoutAccessor_155e140(__int64*);
__int64 LayoutArchive_13669e0(_QWORD);
__int64 MouseCursor_Destructor(_QWORD*);
__int64 ProcLoadingSeq_9b84e0(_QWORD);
__int64 RenderTask_136a130(_QWORD);
__int64 SavingIcon_Destructor(_QWORD*);
__int64 SimpleTelopImpl_17c9530(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_15d1d80(_QWORD);
__int64 game_gameui_1569ce0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern _DWORD* GameData_212d8a0;
extern _UNKNOWN* GameData_2132280;
extern _UNKNOWN* GameData_2132288;
extern __int64 (*GameData_1fa94c8[])();
extern __int64 (*GameData_1fa9548[])();
extern __int64 (*GameData_1fa95c8[])();
extern __int64 (*GameData_1fa9648[])();
extern __int64 (*GameData_1fa96c8[])();
extern __int64 (*GameData_2132240[3])();
extern __int64 (*GameData_2132248[2])();
extern __int64* GameData_212c628;
extern __int64* GameData_212d898;
extern __int64* GameData_2130250[6];
extern __int64* GameData_21320a8;
extern __int64* game_talk_g_window_layout_ptr[5];
extern __int64 GameData_212d6e0[2];
extern __int64 GameData_212d8a8[4];
extern __int64 GameData_212d8b8[2];
extern __int64 GameData_212da38;
extern __int64 GameData_2131dc8;
extern __int64 GameData_21f1dc8;
extern __int64 GameData_21f7fa0;
extern __int64 GameData_21f7fa8;
extern __int64 GameData_21f7fb0;
extern __int64 GameData_2258178;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern char GameData_21f1dd0;
extern char GameData_21f1dd8[];
extern char GameData_21f1dd9;
extern char GameData_21f1ddc;
extern int* GameData_21320b0[8];
__attribute__((swiftcall)) void GameRoutine_1908c60(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1908f00(PSEUDO_X8, _QWORD, _QWORD);
_QWORD* game_GameUI_Setup();
__int64 GameUI_8b51d0();
__attribute__((swiftcall)) void
game_GameUI_Setup_lambda0_Invoke(PSEUDO_X8 x8_, __int64 unused_int0,
                                 unsigned __int64* a1);
__attribute__((swiftcall)) void TextTagProcessor_1908c60(PSEUDO_X8, __int64,
                                                         __int64);
__attribute__((swiftcall)) void TextTagProcessor_1908f00(PSEUDO_X8, __int64,
                                                         __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
const char*
GameRoutine_1366820_alt1(const char* result) __asm__("GameRoutine_1366820");
extern __int64 (*game_1905b70_ptr[2])();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* GameRoutine_112e290_alt1();
_QWORD* GameRoutine_654050_alt1(_QWORD* result, _QWORD*);
_QWORD* RenderTask_136a130_alt1(_QWORD* result);
__int64 FloatingHelp_18ac7f0_alt1(_QWORD*, __int64, __int64);
__int64 GameRoutine_17b7d20_alt1(__int64);
__int64 HeaderFooter_15651c0_alt1(__int64 result);
__int64 SimpleTelopImpl_17c9530_alt1(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(__int64, __int64, __int64,
                                            unsigned int);
__int64 game_15d1d80_alt1();
__int64 game_1735b60(__int64 result);
__int64 game_173df20(__int64 result);
__int64 game_19ef080(__int64 result);
__int64 game_gameui_17aa8e0(__int64);
__int64 game_gameui_18a2660(__int64, __int64, __int64);
__int64 game_gameui_19aeaf0(__int64);
const char* LayoutArchive_13669e0_alt1(const char* result);
void GameRoutine_15e1350_alt1(__int64);
void ProcLoadingSeq_9b84e0_alt1();
void game_gameui_1569ce0_alt1(__int64);
__int64 game_gameui_control_AsyncLoadThumbImage_CreateControl();
extern __int64 (*BattleInfoSkillList_18b66c0_ptr[24])();
extern __int64 (*BattleInfoStatus_19ad260_ptr[21])();
extern __int64 (*BattlePopupBlaze_18c10b0_ptr[9])();
extern __int64 (*BattlePopupDamage_18bf160_ptr[10])();
extern __int64 (*BlnPopup_19f1c50_ptr)();
extern __int64 (*FloatingHelp_18a4c80_ptr[12])();
extern __int64 (*HPStock_18a1c50_ptr[8])();
extern __int64 (*HelpGroup_18b3f00_ptr[11])();
extern __int64 (*IconLegion_19abb70_ptr[26])();
extern __int64 (*InfoTitle_18b7500_ptr[18])();
extern __int64 (*KeySort_1797030_ptr[2])();
extern __int64 (*MenuItemItem_189eef0_ptr[35])();
extern __int64 (*MenuItemLegion_18977d0_ptr[33])();
extern __int64 (*MenuItemSkill_1898db0_ptr[34])();
extern __int64 (*StatusHP_1891e10_ptr[40])();
extern __int64 (*StatusItem_188dba0_ptr[43])();
extern __int64 (*StatusLV_18a2ab0_ptr[39])();
extern __int64 (*StatusNum_188fab0_ptr[44])();
extern __int64 (*StatusTotal_19ac7b0_ptr[42])();
extern __int64 (*UnitName_19ab100_ptr[41])();
extern __int64 (*game_1796700_ptr[3])();
extern __int64 (*game_18c9a10_ptr[37])();
extern __int64 (*game_19a87a0_ptr[7])();
extern __int64 (*game_gameui_control_189ca20_ptr[38])();
extern __int64 (*game_gameui_control_18b4660_ptr[28])();
extern __int64 (*game_gameui_control_BattleInfoEquip_CreateControl_ptr[23])();
extern __int64 (
    *game_gameui_control_BattleInfoReliance_CreateControl_ptr[22])();
extern __int64 (*game_gameui_control_GmapTroopInfo_CreateControl_ptr[6])();
extern __int64 (*game_gameui_control_HelpableElement_CreateControl_ptr[29])();
extern __int64 (*game_gameui_control_IconGimmick_CreateControl_ptr[27])();
extern __int64 (*game_gameui_control_InfoDetailsAnimal_CreateControl_ptr[14])();
extern __int64 (*game_gameui_control_InfoDetailsItem_CreateControl_ptr[15])();
extern __int64 (*game_gameui_control_InfoDetailsLegion_CreateControl_ptr[13])();
extern __int64 (*game_gameui_control_InfoDetailsText_CreateControl_ptr[16])();
extern __int64 (*game_gameui_control_InfoDetails_CreateControl_ptr[17])();
extern __int64 (*game_gameui_control_KeyIcon_CreateControl_ptr[4])();
extern __int64 (*game_gameui_control_MasteryInfo_CreateControl_ptr[19])();
extern __int64 (*game_gameui_control_MenuItemAnimal_CreateControl_ptr[32])();
extern __int64 (*game_gameui_control_MenuItemInfo_CreateControl_ptr[36])();
extern __int64 (*game_gameui_control_MenuItemMorph_CreateControl_ptr[31])();
extern __int64 (*game_gameui_control_MenuItemRage_CreateControl_ptr[30])();
extern __int64 (*game_gameui_control_TlpResult_CreateControl_ptr[5])();
extern __int64 (*game_gameui_control_UnitInfoClan_CreateControl_ptr[20])();
extern __int64 (*ui_game_188f010_ptr[45])();
extern __int64 (*ui_game_18b35a0_ptr[25])();
extern char* GameData_1fa9738[6];
extern char* GameData_1fa9748[4];
extern char* GameData_1fa9758[2];
int GameRoutine_1a0a6b0(__int64, unsigned __int64, const char*, ...);
unsigned __int64 GameRoutine_1a09c70(const char*);
void game_1366fa0(__int64, __int64, __int64);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64);
void GameUI_8b5650();

_QWORD* game_GameUI_Setup()
{

#pragma clang fp contract(on)

  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* result;
  __int64 v23;
  __int64 v24;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
    char gap40_[8];
    _BYTE v27[32];
    _BYTE* v28;
    char gap88_[8];
    _BYTE v29[32];
    _BYTE* v30;
    char gap136_[8];
    _QWORD v31[4];
    _QWORD* v32;
  } f_;

  RenderTask_136a130_alt1((_QWORD*)(ui_Manager_instance_ + 1264));
  LayoutArchive_13669e0_alt1("Layout/Common.arc");
  LayoutArchive_13669e0_alt1("Layout/CommonMenu.arc");
  LayoutArchive_13669e0_alt1("Layout/Hub.arc");
  game_15d1d80_alt1();
  f_.v31[0] = GameData_1fa94c8;
  f_.v32 = f_.v31;
  TextTagProcessor_1908f00((void*)((__int64)f_.v29),
                           ui_Manager_instance_ + 6528, (__int64)f_.v31);
  if (f_.v30 == f_.v29) {
    v0 = 32;
  }
  else {
    if (f_.v30 == nullptr) {
      goto LABEL_6;
    }
    v0 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)f_.v30 + v0))((__int64)f_.v30);
LABEL_6:
  if (f_.v32 == f_.v31) {
    v1 = 32;
  }
  else {
    if (f_.v32 == nullptr) {
      goto LABEL_11;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*f_.v32 + v1))((__int64)f_.v32);
LABEL_11:
  f_.v31[0] = GameData_1fa9548;
  f_.v32 = f_.v31;
  TextTagProcessor_1908c60((void*)((__int64)f_.v27),
                           ui_Manager_instance_ + 6528, (__int64)f_.v31);
  if (f_.v28 == f_.v27) {
    v2 = 32;
  }
  else {
    if (f_.v28 == nullptr) {
      goto LABEL_16;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)f_.v28 + v2))((__int64)f_.v28);
LABEL_16:
  if (f_.v32 == f_.v31) {
    v3 = 32;
  }
  else {
    if (f_.v32 == nullptr) {
      goto LABEL_21;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*f_.v32 + v3))((__int64)f_.v32);
LABEL_21:
  v4 = GameData_212c628;
  GameRoutine_15e1350_alt1(
      *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c628));
  game_1735b60(*(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4));
  game_173df20(*(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4));
  game_gameui_1569ce0_alt1(*v4);
  HeaderFooter_15651c0_alt1(
      *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4));
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] == 0) {
    GameRoutine_17b7d20_alt1(
        *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4));
  }
  SimpleTelopImpl_17c9530_alt1(
      *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4));
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  v6[14] = 0;
  v6[15] = 0;
  v7 = GameData_212d898;
  if (*GameData_212d898 == 0) {
    *GameData_212d8a0 = 1;
  }
  v8 = GameData_212da38;
  v6[8] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[6] = 0;
  v6[7] = v6 + 8;
  v6[11] = 0;
  v6[12] = 0;
  v6[13] = 0;
  *((_DWORD*)v6 + 28) = 1065353216;
  v6[15] = 0;
  v6[16] = 0;
  v6[17] = 0;
  *v7 = (__int64)v6;
  *v6 = v8 + 16;
  v6[1] = v8 + 72;
  game_gameui_18a2660((__int64)v6, (__int64)"Layout/Common.arc",
                      (__int64)"Common_System_Cursor");
  v9 = fw_memory_HeapManager_Allocate_alt1(*v5, 128, 16, 0);
  game_gameui_17aa8e0(v9);
  v10 = *v5;
  *(_QWORD*)GameData_212d8a8[0] = v9;
  v11 = fw_memory_HeapManager_Allocate_alt1(v10, 288, 16, 0);
  v12 = (__int64*)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] == 0) {
    *GameData_21320b0[0] = 1;
  }
  v13 = GameData_21320a8;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_QWORD*)(v11 + 80) = 0;
  *(_QWORD*)(v11 + 88) = 0;
  *(_QWORD*)(v11 + 96) = 0;
  *(_QWORD*)(v11 + 104) = 0;
  *(_DWORD*)(v11 + 112) = 1065353216;
  *(_QWORD*)(v11 + 120) = 0;
  *(_QWORD*)(v11 + 128) = 0;
  *(_QWORD*)(v11 + 136) = 0;
  *(_QWORD*)(v11 + 144) = 0;
  *(_QWORD*)(v11 + 152) = 0;
  *(_QWORD*)(v11 + 160) = 0;
  *(_QWORD*)(v11 + 168) = 0;
  *(_QWORD*)(v11 + 176) = 0;
  *(_QWORD*)(v11 + 184) = 0;
  *(_QWORD*)(v11 + 192) = 0;
  *(_QWORD*)(v11 + 200) = 0;
  *(_QWORD*)(v11 + 208) = 0;
  *(_QWORD*)(v11 + 216) = 0;
  *(_QWORD*)(v11 + 224) = 0;
  *(_QWORD*)(v11 + 232) = 0;
  *(_QWORD*)(v11 + 240) = 0;
  *v12 = v11;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 56) = v11 + 64;
  *(_QWORD*)v11 = v13 + 2;
  *(_QWORD*)(v11 + 8) = v13 + 9;
  *(_QWORD*)(v11 + 248) = 0xFFFFFFFFLL;
  *(_DWORD*)(v11 + 255) = 0;
  *(_QWORD*)(v11 + 268) = 0;
  *(_QWORD*)(v11 + 276) = 0;
  *(_QWORD*)(v11 + 260) = 0;
  FloatingHelp_18ac7f0_alt1((_QWORD*)v11, (__int64)"Layout/Common.arc",
                            (__int64)"Common_XHelp");
  v14 = fw_memory_HeapManager_Allocate_alt1(*v5, 128, 16, 0);
  game_gameui_19aeaf0(v14);
  v15 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4);
  *(_QWORD*)GameData_212d6e0[0] = v14;
  game_19ef080(v15);
  GameRoutine_112e290_alt1();
  ProcLoadingSeq_9b84e0_alt1();
  v16 = f_.v25;
  f_.v25[0] = GameData_1fa95c8;
  f_.v26 = f_.v25;
  if (GameData_2258178 == 0) {
    goto LABEL_36;
  }
  f_.v31[0] = GameData_1fa95c8;
  f_.v32 = f_.v31;
  GameRoutine_654050_alt1(f_.v31, (_QWORD*)GameData_2258178);
  if (f_.v32 == f_.v31) {
    v17 = 32;
  }
  else {
    if (f_.v32 == nullptr) {
      goto LABEL_33;
    }
    v17 = 40;
  }
  (*(void (**)(_QWORD*))(*f_.v32 + v17))(f_.v32);
LABEL_33:
  v16 = f_.v26;
  if (f_.v26 == f_.v25) {
  LABEL_36:
    v18 = 32;
    goto LABEL_37;
  }
  if (f_.v26 != nullptr) {
    v18 = 40;
  LABEL_37:
    (*(void (**)(_QWORD*))(*v16 + v18))(v16);
  }
  v19 = f_.v25;
  f_.v25[0] = GameData_1fa9648;
  f_.v26 = f_.v25;
  if (GameData_2258178 == 0) {
  LABEL_47:
    v21 = 32;
    goto LABEL_48;
  }
  f_.v31[0] = GameData_1fa9648;
  f_.v32 = f_.v31;
  GameRoutine_654050_alt1(f_.v31, (_QWORD*)(GameData_2258178 + 48));
  if (f_.v32 == f_.v31) {
    v20 = 32;
  }
  else {
    if (f_.v32 == nullptr) {
      goto LABEL_44;
    }
    v20 = 40;
  }
  (*(void (**)(_QWORD*))(*f_.v32 + v20))(f_.v32);
LABEL_44:
  v19 = f_.v26;
  if (f_.v26 == f_.v25) {
    goto LABEL_47;
  }
  if (f_.v26 == nullptr) {
    goto LABEL_49;
  }
  v21 = 40;
LABEL_48:
  (*(void (**)(_QWORD*))(*v19 + v21))(v19);
LABEL_49:
  result = f_.v25;
  f_.v25[0] = GameData_1fa96c8;
  f_.v26 = f_.v25;
  if (GameData_2258178 == 0) {
  LABEL_58:
    v24 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v24))(result);
  }
  f_.v31[0] = GameData_1fa96c8;
  f_.v32 = f_.v31;
  GameRoutine_654050_alt1(f_.v31, (_QWORD*)(GameData_2258178 + 96));
  if (f_.v32 == f_.v31) {
    v23 = 32;
  }
  else {
    if (f_.v32 == nullptr) {
      goto LABEL_55;
    }
    v23 = 40;
  }
  (*(void (**)(_QWORD*))(*f_.v32 + v23))(f_.v32);
LABEL_55:
  result = f_.v26;
  if (f_.v26 == f_.v25) {
    goto LABEL_58;
  }
  if (f_.v26 == nullptr) {
    return result;
  }
  v24 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v24))(result);
}

__int64 GameUI_8b51d0()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  _DWORD* v22;
  int v23;
  struct {
    _BYTE v24[32];
    _BYTE* v25;
  } v24_;
  struct {
    _BYTE v26[32];
    _BYTE* v27;
  } v26_;
  struct {
    __int64 (*v28[4])();
    __int64 (**v29)();
  } v28_;

  if (GameData_21f7fa0 != 0) {
    *(_BYTE*)(GameData_21f7fa0 + 2376) = 1;
  }
  v0 = GameData_21f7fa8;
  GameData_21f7fa0 = 0;
  GameData_21f7fa8 = 0;
  if (v0 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v0 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v0 + 16LL))(v0);
    std___1___shared_weak_count___release_weak_alt1(v0);
  }
  LayoutAccessor_155e140(&GameData_21f7fb0);
  v1 = GameData_2130250[0];
  if (*GameData_2130250[0] != 0) {
    *(_BYTE*)(*GameData_2130250[0] + 2376) = 1;
  }
  v2 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v1);
  *v1 = 0;
  v1[1] = 0;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  LayoutAccessor_155e140(game_talk_g_window_layout_ptr[0]);
  if (*(_QWORD*)GameData_2131dc8 != 0) {
    *(_BYTE*)(*(_QWORD*)GameData_2131dc8 + 2376LL) = 1;
  }
  v3 = (_QWORD*)GameData_212d8b8[0];
  if (*(_QWORD*)GameData_212d8b8[0] != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d8b8[0] + 24LL))(
        *(_QWORD*)GameData_212d8b8[0]);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
  }
  v4 = GameData_212d898;
  v5 = *GameData_212d898;
  v6 = fw_memory_g_heap_manager_ptr;
  if (*GameData_212d898 != 0) {
    Cursor_Destructor_18a2440((_QWORD*)*GameData_212d898);
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v7, v5);
  }
  *v4 = 0;
  v8 = (_QWORD*)GameData_212d8a8[0];
  v9 = *(_QWORD*)GameData_212d8a8[0];
  if (*(_QWORD*)GameData_212d8a8[0] != 0) {
    MouseCursor_Destructor(*(_QWORD**)GameData_212d8a8[0]);
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v10, v9);
  }
  *v8 = 0;
  v11 = (_QWORD*)GameData_212d8b0[0];
  v12 = *(_QWORD*)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    FloatingHelp_Destructor(*(_QWORD**)GameData_212d8b0[0]);
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v13, v12);
  }
  *v11 = 0;
  v14 = (_QWORD*)GameData_212d6e0[0];
  v15 = *(_QWORD*)GameData_212d6e0[0];
  if (*(_QWORD*)GameData_212d6e0[0] != 0) {
    SavingIcon_Destructor(*(_QWORD**)GameData_212d6e0[0]);
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v16, v15);
  }
  *v14 = 0;
  GameRoutine_1366820_alt1("Layout/Common.arc");
  GameData_21f1dd8[0] = 0;
  GameRoutine_1366820_alt1("Layout/CommonMenu.arc");
  GameData_21f1dd9 = 0;
  GameRoutine_1366820_alt1("Layout/Hub.arc");
  GameData_21f1ddc = 0;
  v28_.v29 = v28_.v28;
  v28_.v28[0] = (__int64 (*)())((char*)GameData_2132280 + 16);
  v28_.v28[1] = GameData_2132240[0];
  TextTagProcessor_1908c60((void*)((__int64)v26_.v26),
                           ui_Manager_instance_ + 6528, (__int64)v28_.v28);
  if (v28_.v29 == v28_.v28) {
    v17 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_38;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))((char*)*v28_.v29 + v17))((__int64)v28_.v29);
LABEL_38:
  if (v26_.v27 == v26_.v26) {
    v18 = 32;
  }
  else {
    if (v26_.v27 == nullptr) {
      goto LABEL_43;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v26_.v27 + v18))((__int64)v26_.v27);
LABEL_43:
  v28_.v29 = v28_.v28;
  v28_.v28[0] = (__int64 (*)())((char*)GameData_2132288 + 16);
  v28_.v28[1] = game_1905b70_ptr[0];
  TextTagProcessor_1908f00((void*)((__int64)v24_.v24),
                           ui_Manager_instance_ + 6528, (__int64)v28_.v28);
  if (v28_.v29 == v28_.v28) {
    v19 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_48;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))((char*)*v28_.v29 + v19))((__int64)v28_.v29);
LABEL_48:
  result = (__int64)v24_.v25;
  if (v24_.v25 == v24_.v24) {
    v21 = 32;
    goto LABEL_52;
  }
  if (v24_.v25 != nullptr) {
    v21 = 40;
  LABEL_52:
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)v24_.v25 + v21))((__int64)v24_.v25);
  }
  v22 = (_DWORD*)ui_Manager_instance_;
  v23 = *(_DWORD*)(ui_Manager_instance_ + 1636);
  *(_DWORD*)(ui_Manager_instance_ + 1632) = 1;
  v22[502] = 1;
  v22[596] = 1;
  v22[690] = 1;
  v22[784] = 1;
  v22[878] = 1;
  v22[972] = 1;
  v22[1066] = 1;
  v22[1160] = 1;
  v22[1254] = 1;
  v22[1348] = 1;
  v22[1442] = 1;
  v22[1536] = 1;
  v22[1630] = 1;
  v22[409] = v23 - 1;
  --v22[503];
  --v22[597];
  --v22[691];
  --v22[785];
  --v22[879];
  --v22[973];
  --v22[1067];
  --v22[1161];
  --v22[1255];
  --v22[1349];
  --v22[1443];
  --v22[1537];
  --v22[1631];
  GameData_21f1dd0 = 0;
  GameData_21f1dc8 = 0;
  return result;
}

void GameUI_8b5650()
{

#pragma clang fp contract(on)

  __int64 v0;
  __int64* v1;
  __int64 v2;
  char* v3;
  __int64 (*v4)();
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 (*v8)();
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 (*v12)();
  __int64 v13;
  struct {
    _QWORD* v14;
    unsigned __int64 v15;
  } v14_;
  _QWORD v16[33];

  v0 = ui_Manager_instance_;
  if (ui_Manager_instance_ != 0) {
    v16[0] = "StatusName";
    v16[1] = 10;
    game_1366fa0(ui_Manager_instance_, (__int64)v16,
                 (__int64)ui_game_188f010_ptr[0]);
    v16[0] = "StatusNum";
    v16[1] = 9;
    game_1366fa0(v0, (__int64)v16, (__int64)StatusNum_188fab0_ptr[0]);
    v16[0] = "StatusItem";
    v16[1] = 10;
    game_1366fa0(v0, (__int64)v16, (__int64)StatusItem_188dba0_ptr[0]);
    v16[0] = "StatusTotal";
    v16[1] = 11;
    game_1366fa0(v0, (__int64)v16, (__int64)StatusTotal_19ac7b0_ptr[0]);
    v16[0] = "UnitName";
    v16[1] = 8;
    game_1366fa0(v0, (__int64)v16, (__int64)UnitName_19ab100_ptr[0]);
    v16[0] = "StatusHP";
    v16[1] = 8;
    game_1366fa0(v0, (__int64)v16, (__int64)StatusHP_1891e10_ptr[0]);
    v16[0] = "StatusLV";
    v16[1] = 8;
    game_1366fa0(v0, (__int64)v16, (__int64)StatusLV_18a2ab0_ptr[0]);
    v16[0] = "StatusClass";
    v16[1] = 11;
    game_1366fa0(v0, (__int64)v16, (__int64)game_gameui_control_189ca20_ptr[0]);
    v16[0] = "BlazeGauge";
    v16[1] = 10;
    game_1366fa0(v0, (__int64)v16, (__int64)game_18c9a10_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "MenuItem",
                        "Common_Equip_MenuItem_Info");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(
        v0, (__int64)&v14_.v14,
        (__int64)game_gameui_control_MenuItemInfo_CreateControl_ptr[0]);
    v16[0] = "MenuItem_Item";
    v16[1] = 13;
    game_1366fa0(v0, (__int64)v16, (__int64)MenuItemItem_189eef0_ptr[0]);
    v16[0] = "MenuItem_Skill";
    v16[1] = 14;
    game_1366fa0(v0, (__int64)v16, (__int64)MenuItemSkill_1898db0_ptr[0]);
    v16[0] = "MenuItem_Legion";
    v16[1] = 15;
    game_1366fa0(v0, (__int64)v16, (__int64)MenuItemLegion_18977d0_ptr[0]);
    v16[0] = "MenuItem_Animal";
    v16[1] = 15;
    game_1366fa0(
        v0, (__int64)v16,
        (__int64)game_gameui_control_MenuItemAnimal_CreateControl_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "MenuItem",
                        "Common_DragonInfo");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(
        v0, (__int64)&v14_.v14,
        (__int64)game_gameui_control_MenuItemMorph_CreateControl_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "MenuItem",
                        "Common_MorphInfo");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(
        v0, (__int64)&v14_.v14,
        (__int64)game_gameui_control_MenuItemRage_CreateControl_ptr[0]);
    v16[0] = "HelpableElement";
    v16[1] = 15;
    game_1366fa0(
        v0, (__int64)v16,
        (__int64)game_gameui_control_HelpableElement_CreateControl_ptr[0]);
    v1 = (__int64*)fw_memory_g_heap_manager_ptr;
    v2 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
    v3 = GameData_1fa9738[1];
    *(char**)v2 = GameData_1fa9738[0];
    *(_QWORD*)(v2 + 8) = v3;
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "HelpableElement",
                        "Common_IconSkill");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    v4 = game_gameui_control_18b4660_ptr[0];
    game_1366fa0(v0, (__int64)&v14_.v14,
                 (__int64)game_gameui_control_18b4660_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "HelpableElement",
                        *(const char**)(v2 + 8));
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(v0, (__int64)&v14_.v14, (__int64)v4);
    if (*(_QWORD*)(*v1 + 200) != 0) {
      v5 = 128;
    }
    else {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v1 + v5, v2);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "HelpableElement",
                        "Battle_IconGimmick");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(v0, (__int64)&v14_.v14,
                 (__int64)game_gameui_control_IconGimmick_CreateControl_ptr[0]);
    v16[0] = "IconLegion";
    v16[1] = 10;
    game_1366fa0(v0, (__int64)v16, (__int64)IconLegion_19abb70_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "HelpableElement",
                        "Common_SkillinfoItem");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(v0, (__int64)&v14_.v14, (__int64)ui_game_18b35a0_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "HelpGroup",
                        "Battle_BattleInfoSkillList");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(v0, (__int64)&v14_.v14,
                 (__int64)BattleInfoSkillList_18b66c0_ptr[0]);
    v6 = fw_memory_HeapManager_Allocate_alt1(*v1, 16, 16, 0);
    v7 = GameData_1fa9748[1];
    *(char**)v6 = GameData_1fa9748[0];
    *(_QWORD*)(v6 + 8) = v7;
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "HelpableElement",
                        "Battle_BattleInfoEquip");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    v8 = game_gameui_control_BattleInfoEquip_CreateControl_ptr[0];
    game_1366fa0(
        v0, (__int64)&v14_.v14,
        (__int64)game_gameui_control_BattleInfoEquip_CreateControl_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "HelpableElement",
                        *(const char**)(v6 + 8));
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(v0, (__int64)&v14_.v14, (__int64)v8);
    if (*(_QWORD*)(*v1 + 200) != 0) {
      v9 = 128;
    }
    else {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v1 + v9, v6);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "HelpableElement",
                        "Battle_BattleInfoReliance");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(
        v0, (__int64)&v14_.v14,
        (__int64)game_gameui_control_BattleInfoReliance_CreateControl_ptr[0]);
    v16[0] = "BattleInfoStatus";
    v16[1] = 16;
    game_1366fa0(v0, (__int64)v16, (__int64)BattleInfoStatus_19ad260_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "HelpableElement",
                        "Common_UnitInfoClan");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(
        v0, (__int64)&v14_.v14,
        (__int64)game_gameui_control_UnitInfoClan_CreateControl_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "HelpableElement",
                        "Common_MasteryInfoItem");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(v0, (__int64)&v14_.v14,
                 (__int64)game_gameui_control_MasteryInfo_CreateControl_ptr[0]);
    v16[0] = "InfoTitle";
    v16[1] = 9;
    game_1366fa0(v0, (__int64)v16, (__int64)InfoTitle_18b7500_ptr[0]);
    v16[0] = "InfoDetails";
    v16[1] = 11;
    game_1366fa0(v0, (__int64)v16,
                 (__int64)game_gameui_control_InfoDetails_CreateControl_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "InfoDetails",
                        "Common_Help32x02InfoDetail");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(
        v0, (__int64)&v14_.v14,
        (__int64)game_gameui_control_InfoDetailsText_CreateControl_ptr[0]);
    v10 = fw_memory_HeapManager_Allocate_alt1(*v1, 16, 16, 0);
    v11 = GameData_1fa9758[1];
    *(char**)v10 = GameData_1fa9758[0];
    *(_QWORD*)(v10 + 8) = v11;
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "InfoDetails",
                        "Common_ItemInfoDetail");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    v12 = game_gameui_control_InfoDetailsItem_CreateControl_ptr[0];
    game_1366fa0(
        v0, (__int64)&v14_.v14,
        (__int64)game_gameui_control_InfoDetailsItem_CreateControl_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "InfoDetails",
                        *(const char**)(v10 + 8));
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(v0, (__int64)&v14_.v14, (__int64)v12);
    if (*(_QWORD*)(*v1 + 200) != 0) {
      v13 = 128;
    }
    else {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v1 + v13, v10);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "InfoDetails",
                        "Common_AnimalInfoDetail");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(
        v0, (__int64)&v14_.v14,
        (__int64)game_gameui_control_InfoDetailsAnimal_CreateControl_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "InfoDetails",
                        "Common_LegionInfoDetail");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(
        v0, (__int64)&v14_.v14,
        (__int64)game_gameui_control_InfoDetailsLegion_CreateControl_ptr[0]);
    v16[0] = "FloatingHelp";
    v16[1] = 12;
    game_1366fa0(v0, (__int64)v16, (__int64)FloatingHelp_18a4c80_ptr[0]);
    v16[0] = "HelpGroup";
    v16[1] = 9;
    game_1366fa0(v0, (__int64)v16, (__int64)HelpGroup_18b3f00_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "InfoItem",
                        "Battle_HitInfo");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(v0, (__int64)&v14_.v14,
                 (__int64)BattlePopupDamage_18bf160_ptr[0]);
    GameRoutine_1a0a6b0((__int64)v16, 0x100u, "%s/%s", "InfoItem",
                        "Battle_BlazeGaugeInfo");
    v14_.v14 = v16;
    v14_.v15 = GameRoutine_1a09c70((const char*)v16);
    game_1366fa0(v0, (__int64)&v14_.v14,
                 (__int64)BattlePopupBlaze_18c10b0_ptr[0]);
    v16[0] = "HPStock";
    v16[1] = 7;
    game_1366fa0(v0, (__int64)v16, (__int64)HPStock_18a1c50_ptr[0]);
    v16[0] = "JobIcon";
    v16[1] = 7;
    game_1366fa0(v0, (__int64)v16, (__int64)game_19a87a0_ptr[0]);
    v16[0] = "GmapTroopInfo";
    v16[1] = 13;
    game_1366fa0(
        v0, (__int64)v16,
        (__int64)game_gameui_control_GmapTroopInfo_CreateControl_ptr[0]);
    v16[0] = "TlpResult";
    v16[1] = 9;
    game_1366fa0(v0, (__int64)v16,
                 (__int64)game_gameui_control_TlpResult_CreateControl_ptr[0]);
    v16[0] = "AsyncLoadThumbImage";
    v16[1] = 19;
    game_1366fa0(
        v0, (__int64)v16,
        (__int64)game_gameui_control_AsyncLoadThumbImage_CreateControl);
    v16[0] = "KeyIcon";
    v16[1] = 7;
    game_1366fa0(v0, (__int64)v16,
                 (__int64)game_gameui_control_KeyIcon_CreateControl_ptr[0]);
    v16[0] = "KeyArrow";
    v16[1] = 8;
    game_1366fa0(v0, (__int64)v16, (__int64)game_1796700_ptr[0]);
    v16[0] = "KeySort";
    v16[1] = 7;
    game_1366fa0(v0, (__int64)v16, (__int64)KeySort_1797030_ptr[0]);
    v16[0] = "PopupBln";
    v16[1] = 8;
    game_1366fa0(v0, (__int64)v16, (__int64)BlnPopup_19f1c50_ptr);
  }
}

__attribute__((swiftcall)) void

game_GameUI_Setup_lambda0_Invoke(PSEUDO_X8 x8_, __int64 unused_int0,
                                 unsigned __int64* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v2;
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *a1;
  result = ui_Manager_instance_;
  v4 = *(_QWORD*)(ui_Manager_instance_ + 1208);
  if (v4 == 0 || *(_QWORD*)(ui_Manager_instance_ + 1224) == 0) {
    goto LABEL_24;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = v2;
    if (v2 >= v4) {
      v7 = v2 % v4;
    }
  }
  else {
    v7 = v6 & v2;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(ui_Manager_instance_ + 1200) + 8 * v7);
  if (v8 == nullptr || (v9 = (_QWORD*)*v8) == nullptr) {
  LABEL_24:
    *a2 = 0;
    a2[1] = 0;
    {
      result;
      return;
    }
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v11 == v2) {
        if (v9[2] == v2) {
          goto LABEL_25;
        }
      }
      else if ((v11 & v6) != v7) {
        goto LABEL_24;
      }
      v9 = (_QWORD*)*v9;
      if (v9 == nullptr) {
        goto LABEL_24;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v2) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      goto LABEL_24;
    }
  LABEL_14:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      goto LABEL_24;
    }
  }
  if (v9[2] != v2) {
    goto LABEL_14;
  }
LABEL_25:
  *a2 = v9[3];
  v12 = v9[4];
  a2[1] = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

__int64 game_GameUI_Setup_lambda1_Invoke(__int64 a1, _DWORD* a2, int* a3)
{
  if (*a2 == 5) {
    a3 = &GameData_22593f8;
  }
  else if (*a2 == 4) {
    return (unsigned int)GameData_22593dc;
  }
  return (unsigned int)*a3;
}

_QWORD* game_GameUI_Setup_lambda2_Invoke()
{
  _QWORD* result;
  __int64 v1;
  __int64 v2;
  _QWORD v3[2];
  _QWORD v4[25];

  snd_Fade_Fade_10c830(v4, 0.0f);
  snd_play_ff2d0((void*)(v3), "VIB_MouseOn", "VIB_MouseOn", v4, 0, 65537, 0,
                 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  v4[0] = "MID_Mouse_Notice";
  v4[1] = 16;
  GameRoutine_17363e0(1, v4, 1);
  result = (_QWORD*)GameRoutine_18acaf0(*(_QWORD*)GameData_212d8b0[0], 1);
  if (game_gameui_Footer_instance_ != 0) {
    result = *(_QWORD**)(game_gameui_Footer_instance_ + 480);
    if (result != nullptr) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 48LL))(result);
    }
  }
  v4[2] = 0;
  v4[0] = ui_Event_vtable;
  LODWORD(v4[1]) = 46;
  v1 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v2 = ui_Manager_instance_ + 1240;
  while (v1 != v2) {
    result = *(_QWORD**)(v1 + 16);
    if (result != nullptr) {
      result = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *result + 16LL))((void*)v3, result, v4));
    }
    v1 = *(_QWORD*)(v1 + 8);
  }
  return result;
}

_QWORD* game_GameUI_Setup_lambda3_Invoke()
{
  _QWORD* result;
  __int64 v1;
  __int64 v2;
  _QWORD v3[2];
  _QWORD v4[25];

  snd_Fade_Fade_10c830(v4, 0.0f);
  snd_play_ff2d0((void*)(v3), "VIB_MouseOff", "VIB_MouseOff", v4, 0, 65537, 0,
                 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  v4[0] = "MID_Mouse_Notice";
  v4[1] = 16;
  GameRoutine_17363e0(1, v4, 0);
  result = (_QWORD*)GameRoutine_18acaf0(*(_QWORD*)GameData_212d8b0[0], 0);
  if (game_gameui_Footer_instance_ != 0) {
    result = *(_QWORD**)(game_gameui_Footer_instance_ + 480);
    if (result != nullptr) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 48LL))(result);
    }
  }
  v4[2] = 0;
  v4[0] = ui_Event_vtable;
  LODWORD(v4[1]) = 46;
  v1 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v2 = ui_Manager_instance_ + 1240;
  while (v1 != v2) {
    result = *(_QWORD**)(v1 + 16);
    if (result != nullptr) {
      result = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *result + 16LL))((void*)v3, result, v4));
    }
    v1 = *(_QWORD*)(v1 + 8);
  }
  return result;
}

void game_GameUI_Setup_lambda4_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  struct {
    __int64 (**v4)();
    int v5;
    char gap12_[4];
    __int64 v6;
  } v4_;
  __int64 var4;

  v4_.v6 = 0;
  v4_.v4 = ui_Event_vtable;
  v4_.v5 = 46;
  v0 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v1 = ui_Manager_instance_ + 1240;
  while (v0 != v1) {
    v2 = *(_QWORD*)(v0 + 16);
    if (v2 != 0) {
      (*(__attribute__((swiftcall)) void (**)(
          PSEUDO_X8, __int64, __int64 (***)(void)))(*(_QWORD*)v2 + 16LL))(
          (void*)(&var4), v2, &v4_.v4);
    }
    v0 = *(_QWORD*)(v0 + 8);
  }
  if (game_gameui_Footer_instance_ != 0) {
    v3 = *(_QWORD*)(game_gameui_Footer_instance_ + 480);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
    }
  }
}

#pragma GCC visibility pop
