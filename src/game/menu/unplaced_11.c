#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   const char**);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8, __int64, int);
__attribute__((swiftcall)) void game_80c770(PSEUDO_X8, _QWORD);
__int64 AsyncLoadImage_17e4db0(__int64 result, const char*, char);
__int64 EmbeddedImage_1889eb0(__int64, _BYTE*);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 UnitMakeCamera_179b570(_QWORD);
__int64 UnitMakeCamera_179ba60(_QWORD);
__int64 UnitMakeCamera_179bb70(_QWORD);
__int64 UnitMake_16337a0();
__int64 __cxa_guard_acquire_alt1(_QWORD) __asm__("__cxa_guard_acquire");
__int64 __cxa_guard_release_alt1(_QWORD) __asm__("__cxa_guard_release");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 snd_stop_ffc40(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
const char* Manager_a4aea0(__int64);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_225d4d8;
extern __int128 GameData_21a6120;
extern __int64 (*game_menu_anonymous_UnitMakeDitherAlpha_vtable[])();
extern __int64* GameData_212e348;
extern __int64* GameData_2131a88[7];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_21759e0;
extern __int64 GameData_225d460;
extern __int64 GameData_225d468;
extern __int64 GameData_225d470;
extern __int64 GameData_225d480;
extern __int64 GameData_225d490;
extern __int64 GameData_225d4a0;
extern __int64 GameData_225d4a8;
extern __int64 GameData_225d4b0;
extern __int64 GameData_225d4c0;
extern __int64 GameData_225d4d0;
extern __int64 GameData_225d4e0;
extern __int64 GameData_2264528;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
extern char GameData_225d458;
extern char GameData_225d498;
extern int GameData_225d478;
extern int GameData_225d488;
extern int GameData_225d4b8;
extern int GameData_225d4c8;
int __cxa_guard_acquire(__int64);
int strcmp(const char*, const char*);
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
unsigned __int64 strlen(const char*);
void GameHr_157e0f0(__int64*, __int64, const char*);
void TextBoxEx_188ac20(__int64, const char*, unsigned __int16*);
void __attribute__((noreturn)) GameRoutine_17e6d90();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 game_menu_15bc070(__int64 a1);
__int64 game_menu_16325f0(__int64 result, char a2, char a3);
unsigned __int8 game_menu_179b0a0_alt1(__int64 result);
__int64 game_menu_17e5d20(__int64 a1, int a2);
__int64 game_menu_187eb30(__int64 a1);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* game_menu_1789cf0(__int64, __int64);
__attribute__((swiftcall)) void GameRoutine_878ea0(PSEUDO_X8, const char**);
__attribute__((swiftcall)) void snd_play_ff2d0_alt1(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD, _QWORD,
                                                    _QWORD, double, float);
__int64* LegionPool_9377a0(__int64, __int64, unsigned int);
__int64* game_820d50(int);
__int64* game_UnitPool_Get(_BYTE*);
__int64 BasicMenuCursor_16e0520(__int64);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameHr_149e6e0(_QWORD*, __int64, int*);
__int64 GameRoutine_149e920(void);
__int64 GameRoutine_15deca0(_QWORD, _QWORD);
__int64 GameRoutine_16477d0(__int64, const char*, __int64, __int64);
__int64 GameRoutine_1647b80_alt1(__int64, const char**);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 GameRoutine_16eb960_alt1(__int64, _QWORD*);
__int64 GameRoutine_178c220();
__int64 GameRoutine_178c340();
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_6e5a40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_877330(char);
__int64 LegionPoolMenu_Unknown139(_QWORD*);
__int64 LegionPool_937de0(__int64, __int64);
__int64 MultiMenuSequence_17871c0(_QWORD, _QWORD, _QWORD);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char, __int64);
__int64 ProcInst_657850_alt2(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcInst_657a50_alt1(_QWORD, _QWORD);
__int64 SkillChangeMenu_15b8900(_QWORD);
__int64 TutorialInfoImpl_17e6c00();
__int64 UnitUtil_12122d0(__int64*);
__int64 UnitUtil_15df590(__int64, __int64, __int64);
__int64 __cxa_guard_acquire_alt2(_QWORD);
__int64 __cxa_guard_release_alt2(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_11912b0(__int64, const char**, const char*, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_HashString(__int64 result);
__int64 game_HashString32_alt1(void);
__int64 game_ProcInst_Register_alt1(void);
__int64 game_menu_16f64c0(__int64, __int64, int, __int64, __int64);
__int64 game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64);
__int64 snd_Fade_Destroy_Fade_alt2(_QWORD*);
__int64 std___1___shared_weak_count_lock_alt1(_QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD);
bool game_877b20(unsigned __int8, unsigned __int8, int, int);
bool game_877b20_alt1();
char* GameRoutine_67ed20(_QWORD*);
extern _DWORD* GameData_2131518;
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN GameData_1a96902;
extern _UNKNOWN GameData_2174f00;
extern _UNKNOWN GameData_226b190;
extern __int64 (*GameData_2050958[])();
extern __int64 (*GameData_2050c38[])();
extern __int64 (*GameData_2073a88[])();
extern __int64 (*GameData_2074d38[])();
extern __int64 (*GameData_207ba70[])();
extern __int64 (*GameData_207baf0[])();
extern __int64 (*GameData_207bb70[])();
extern __int64 (*GameData_207bbf0[])();
extern __int64 (*GameData_2085bf8[])();
extern __int64 (*GameData_20a1ad8[])();
extern __int64 (*GameData_20c9130[])();
extern __int64 (*GameData_20e7868[])();
extern __int64 (*GameData_20e8f38[])();
extern __int64 (*GameData_20ef1c0[])();
extern __int64 (*GameData_20ef240[])();
extern __int64 (*GameData_20fb180[])();
extern __int64 (*GameData_20fc510[])();
extern __int64 (*SubQuestInfo_Destructor_ptr[])();
extern __int64 (*anonymous_SubExchangeMenuItem_vtable_20eef60[])();
extern __int64 (*anonymous_SubReceiveMenuItem_vtable_20eece8[])();
extern __int64 (*game_KnownManager_vtable[])();
extern __int64 (*game_menu_BasicMenu_vtable[])();
extern __int64 (*game_menu_CmdBtlInfoUnitTroopMenu_vtable[])();
extern __int64 (*game_menu_CmdBtlInfoUnitTroopSequence_vtable[])();
extern __int64 (*game_menu_CmdBtlInventoryUnitTroopSequence_vtable[])();
extern __int64 (*game_menu_ExchangeNumDialog_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20679a8[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20840b8[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2084900[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2084f08[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_209e898[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_209ee88[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20c6220[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20c7c40[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20d6d98[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20e7938[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20fb250[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20fc5e0[])();
extern __int64 (*game_menu_ItemDiscardDialog_vtable[])();
extern __int64 (*game_menu_LegionDialog_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20678d8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2073698[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20744a0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_207b988[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2083fe8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2084830[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2084e38[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_209cb28[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_209e7c8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_209edb8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20a19f0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20c54c8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20c6848[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20c7140[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20c7738[])();
extern __int64 (*game_menu_MultiMenu_vtable)();
extern __int64 (*game_menu_NoInputDialog_vtable[])();
extern __int64 (*game_menu_RelianceUnitSelectMenu_vtable[])();
extern __int64 (*game_menu_SortSubMenu_vtable[])();
extern __int64 (*game_menu_SubMenu_vtable[])();
extern __int64 (*game_menu_TitleMenu_vtable[])();
extern __int64 (*game_menu_TitleSubMenu_vtable[])();
extern __int64 (*game_menu_TutorialInfoImpl_ProcDelayChangeRequest_vtable[])();
extern __int64 (*game_menu_UnitTroopListMenu_vtable[])();
extern __int64 (*game_menu_UnitTroopMenu_vtable)();
extern __int64 (*game_menu_UnitTroopSequence_vtable[])();
extern __int64 (*game_menu_anonymous_BaseQuestMenu_vtable[])();
extern __int64 (*game_menu_anonymous_ContinueMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ContinueNewGameMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ExtraMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ExtraSaveDeleteMenuItem_vtable[])();
extern __int64 (
    *game_menu_anonymous_ExtraSettingInsectPhobiaMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ExtraSettingVoiceMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_NewGameMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ProcTalkQuestInfo_vtable[])();
extern __int64 (*game_menu_anonymous_ProcTitleTopMenu_vtable[])();
extern __int64 (*game_menu_anonymous_ProcUnitInfoFull_vtable[])();
extern __int64 (*game_menu_anonymous_SubExchangeMenuItem_vtable_20509d8[])();
extern __int64 (*game_menu_anonymous_SubRemoveMenuItem_vtable[])();
extern __int64* GameData_212c628;
extern __int64* GameData_212ceb0;
extern __int64* GameData_212d6a8;
extern __int64* GameData_2130240[8];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_2131678;
extern __int64 GameData_21c9600;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca060;
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea48;
extern __int64 GameData_2246ca0;
extern __int64 GameData_2259500;
extern __int64 GameData_226b118;
extern __int64 GameData_226b120;
extern __int64 GameData_226b128;
extern __int64 GameData_226b138;
extern __int64 GameData_226b148;
extern __int64 GameData_226b158;
extern __int64 GameData_226b160;
extern __int64 GameData_226b168;
extern __int64 GameData_226b178;
extern __int64 GameData_226b188;
extern __int64 as_g_base_frame_counter;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_menu_UnitGridSelectMenu_listeners_;
extern char GameData_226b110;
extern char GameData_226b150;
extern int GameData_2246ca8;
extern int GameData_226b130;
extern int GameData_226b140;
extern int GameData_226b170;
extern int GameData_226b180;
float GameRoutine_16e79a0(__int64, float result);
typedef __int64 GameAlign_21caa2c __attribute__((aligned(4)));
extern GameAlign_21caa2c GameData_21caa2c;
unsigned __int64 GameRoutine_1a09c70(const char*);
void* game_97b2f0(__int64);
void BasicMenuCursor_16e0c00_alt1(_QWORD*, __int64);
void GameRoutine_1015560(__int64);
void GameRoutine_1647b80(__int64, const char**);
void GameRoutine_17869d0(__int64);
void GameRoutine_dbce10(__int64, int);
void RelianceUnitSelectMenu_184e860(__int64);
void UnitUtil_15df460(__int64);
void game_menu_1a06650(__int64, __int64, int);
void game_menu_BasicMenu_Destroy_BasicMenu(__int64);
void snd_Fade_Fade_10c830_alt2(__int64, float);
__int64 game_menu_15bac00(__int64 a1);
void game_menu_1608980(_QWORD* a1);
__int64 game_menu_1649f60(__int64 a1, const char** a2);
__int64 game_menu_164cfc0(__int64 a1, char** a2);
_QWORD* game_menu_166a500(__int64 a1, char* a2, int a3, __int64 a4);
void game_menu_169f990(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 game_menu_16a0c30(_QWORD* a1);
void game_menu_16a0cf0(_QWORD* a1);
__int64 game_menu_16a1bc0(__int64 a1);
__int64 game_menu_16dcd30(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4);
void game_menu_16df380(__int64 a1);
__int64 game_menu_16ec3d0(__int64 a1, __int64 a2);
void game_menu_16ec940(_QWORD* a1);
__int64 game_menu_16f75a0(__int64 a1, char** a2);
void game_menu_173d400();
__int64 game_menu_178bfa0(__int64 a1, __int64 a2, __int64* a3);
void game_menu_178ef80(_QWORD* a1);
void game_menu_178f070(_QWORD* a1);
void game_menu_178f180(_QWORD* a1);
void game_menu_178f340(_QWORD* a1);
void game_menu_178f500(_QWORD* a1);
void game_menu_178f6e0(_QWORD* a1);
void game_menu_17b56f0(_QWORD* a1);
void game_menu_17b57e0(_QWORD* a1);
__int64 game_menu_17e6a30(__int64 a1, __int64 a2);
__int64 game_menu_184e6b0(__int64 a1, unsigned int a2);
__int64 game_menu_185ec60(__int64 (**a1)());
void game_menu_1880bb0(__int64 a1);
__int64 BasicMenu_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 game_menu_179b0a0(__int64 result);

__int64 game_menu_15bac00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _DWORD* v18;
  _DWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];
  __int64 v23;
  int v24;
  __int64 v25;

  if ((*(_BYTE*)(*(_QWORD*)(a1 + 96) + 356LL) & 1) == 0) {
    if ((*(_WORD*)(a1 + 108) & 0xFFF) != 0) {
      v2 = *(_QWORD*)(a1 + 8);
      v23 = a1;
      v24 = 1;
      if (*(_QWORD*)(v2 + 152) != 0) {
        v3 = *(_QWORD*)(v2 + 152);
      }
      else {
        v3 = v2;
      }
      v25 = 3269853184LL;
      v4 = GameRoutine_16eb960(v3, &v23);
      v5 = (__int64*)fw_memory_g_heap_manager_ptr;
      v6 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
      *(_WORD*)(v6 + 16) = 0;
      *(_DWORD*)(v6 + 40) = 0;
      v7 = *(_QWORD*)(a1 + 88);
      *(_QWORD*)(v6 + 48) = 0;
      *(_QWORD*)(v6 + 56) = 0;
      *(_QWORD*)(v6 + 64) = 0;
      *(_QWORD*)(v6 + 72) = 0;
      *(_BYTE*)(v6 + 82) = 1;
      *(_QWORD*)(v6 + 104) = a1;
      *(_QWORD*)(v6 + 96) = GameData_2050958;
      *(_WORD*)(v6 + 80) = 257;
      *(_QWORD*)(v6 + 128) = v6 + 96;
      *(_QWORD*)v6 = game_menu_anonymous_SubExchangeMenuItem_vtable_20509d8;
      *(_QWORD*)(v6 + 8) = 0;
      v8 = GameRoutine_15deca0(*(unsigned __int8*)(a1 + 104), v7) & 1;
      v9 = *v5;
      *(_BYTE*)(v6 + 82) = v8;
      v10 = fw_memory_HeapManager_Allocate_alt1(v9, 144, 16, 0);
      *(_WORD*)(v10 + 16) = 0;
      *(_DWORD*)(v10 + 40) = 0;
      *(_QWORD*)(v10 + 48) = 0;
      *(_QWORD*)(v10 + 56) = 0;
      *(_QWORD*)(v10 + 64) = 0;
      *(_QWORD*)(v10 + 72) = 0;
      *(_WORD*)(v10 + 80) = 257;
      *(_BYTE*)(v10 + 82) = 1;
      *(_QWORD*)(v10 + 104) = a1;
      *(_QWORD*)(v10 + 96) = GameData_2050c38;
      *(_QWORD*)(v10 + 128) = v10 + 96;
      *(_QWORD*)v10 = game_menu_anonymous_SubRemoveMenuItem_vtable;
      *(_QWORD*)(v10 + 8) = 0;
      BasicMenuCursor_16e0c00(v4, v6);
      BasicMenuCursor_16e0c00(v4, v10);
      return 10;
    }
    v17 = *(_QWORD*)(a1 + 88);
    if (v17 == 0) {
      return 1;
    }
    v18 = *(_DWORD**)(v17 + 1104);
    v19 = *(_DWORD**)(v17 + 1112);
    result = 1;
    if (v18 == v19) {
      return result;
    }
    while ((*v18 & 0xFFF) == 0 ||
           (((unsigned __int16)(1 << *(_BYTE*)(a1 + 104)) >>
             *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                  8LL * (*v18 & 0xFFF)) +
                       104LL)) &
            1) == 0) {
      if (++v18 == v19) {
        return 1;
      }
    }
    snd_Fade_Fade_10c830(&v23, 0.0f);
    snd_play_ff2d0_alt1((void*)(v22), "SE_SYS_Decide_L_Next",
                        "SE_SYS_Decide_L_Next", &v23, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(&v23);
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 64LL))(a1, 1);
    v20 = *(_QWORD*)(a1 + 96);
    v21 = *(_QWORD*)(v20 + 304);
    *(_DWORD*)(v20 + 356) |= 1u;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v21 + 240LL))(v21, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v21 + 248LL))(v21, 0);
    MultiMenuSequence_17871c0(*(_QWORD*)(a1 + 96), 1, 0);
    return 0;
  }
  snd_Fade_Fade_10c830(&v23, 0.0f);
  snd_play_ff2d0_alt1((void*)(v22), "SE_SYS_Skill_Equip", "SE_SYS_Skill_Equip",
                      &v23, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(&v23);
  v12 = *(_QWORD*)(a1 + 96);
  v13 = *(_QWORD*)(v12 + 304);
  *(_DWORD*)(v12 + 356) &= ~1u;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 240LL))(v13, 1);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 248LL))(v13, 1);
  MultiMenuSequence_17871c0(*(_QWORD*)(a1 + 96), 1, 0);
  SkillChangeMenu_15b8900(*(_QWORD*)(a1 + 96));
  v14 = *(_QWORD**)(a1 + 96);
  v15 = v14[38];
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 1080LL))(v15);
  }
  v16 = v14[39];
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 1080LL))(v16);
  }
  result = v14[40];
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 1080LL))(result);
    return 0;
  }
  return result;
}

__int64 game_menu_15bc070(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  const char* v6;
  struct {
    __int64* v7;
    __int64 v8;
  } v7_;

  LayoutAccessor_1560070((void*)(&v7_.v7), (__int64*)(a1 + 952),
                         "L_MenuItem_Info");
  result = v7_.v8;
  if (v7_.v8 != 0) {
    v3 = *(unsigned __int8*)(a1 + 1080);
    v4 = std___1___shared_weak_count_lock(v7_.v8);
    if (v4 != 0) {
      v5 = v4;
      if (v7_.v7 != nullptr) {
        if (v3 == 2) {
          v6 = "MID_BtlMenu_WeaponCost";
        }
        else {
          v6 = nullptr;
        }
        GameHr_157e0f0(v7_.v7, (__int64)"MID_Sys_Acquired", v6);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
    result = v7_.v8;
    if (v7_.v8 != 0) {
      return std___1___shared_weak_count___release_weak(v7_.v8);
    }
  }
  return result;
}

void game_menu_1608980(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  _QWORD* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;

  *a1 = game_menu_anonymous_ProcUnitInfoFull_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20678d8;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20679a8;
  v2 = a1[247];
  a1[247] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[246];
  a1[246] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[245];
  a1[245] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[244];
  a1[244] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[243];
  a1[243] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[242];
  a1[242] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[241];
  a1[241] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = a1[240];
  a1[240] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = a1[239];
  a1[239] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  v11 = a1[238];
  a1[238] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = a1[237];
  a1[237] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = a1[236];
  a1[236] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = a1[235];
  a1[235] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  v15 = a1[234];
  a1[234] = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  v16 = a1[233];
  a1[233] = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  v17 = a1[232];
  a1[232] = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  v18 = a1[231];
  a1[231] = 0;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
  }
  v19 = a1[230];
  a1[230] = 0;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  v20 = a1[229];
  a1[229] = 0;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
  }
  v21 = a1[228];
  a1[228] = 0;
  if (v21 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
  }
  v22 = a1[202];
  a1[202] = 0;
  if (v22 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
  }
  v23 = a1[201];
  a1[201] = 0;
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
  }
  v24 = a1[200];
  a1[200] = 0;
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
  }
  v25 = a1[199];
  a1[199] = 0;
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
  }
  v26 = a1[198];
  a1[198] = 0;
  if (v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
  }
  v27 = a1[197];
  a1[197] = 0;
  if (v27 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
  }
  v28 = a1[196];
  a1[196] = 0;
  if (v28 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
  }
  v29 = a1[195];
  a1[195] = 0;
  if (v29 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
  }
  v30 = a1[194];
  a1[194] = 0;
  if (v30 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
  }
  v31 = a1[193];
  a1[193] = 0;
  if (v31 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
  }
  v32 = a1[192];
  a1[192] = 0;
  if (v32 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 8LL))(v32);
  }
  v33 = a1[191];
  a1[191] = 0;
  if (v33 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 8LL))(v33);
  }
  v34 = a1[190];
  a1[190] = 0;
  if (v34 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 8LL))(v34);
  }
  v35 = a1[189];
  a1[189] = 0;
  if (v35 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 8LL))(v35);
  }
  v36 = a1[188];
  a1[188] = 0;
  if (v36 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 8LL))(v36);
  }
  v37 = a1[187];
  a1[187] = 0;
  if (v37 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 8LL))(v37);
  }
  v38 = a1[186];
  a1[186] = 0;
  if (v38 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 8LL))(v38);
  }
  v39 = a1[185];
  a1[185] = 0;
  if (v39 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 8LL))(v39);
  }
  v40 = a1[184];
  a1[184] = 0;
  if (v40 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
  }
  v41 = a1[183];
  a1[183] = 0;
  if (v41 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 8LL))(v41);
  }
  v42 = a1[182];
  a1[182] = 0;
  if (v42 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
  }
  v43 = a1[181];
  a1[181] = 0;
  if (v43 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 8LL))(v43);
  }
  v44 = a1[180];
  a1[180] = 0;
  if (v44 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 8LL))(v44);
  }
  v45 = a1[179];
  a1[179] = 0;
  if (v45 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
  }
  v46 = a1[178];
  a1[178] = 0;
  if (v46 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 8LL))(v46);
  }
  v47 = a1[177];
  a1[177] = 0;
  if (v47 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 8LL))(v47);
  }
  v48 = a1[176];
  a1[176] = 0;
  if (v48 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 8LL))(v48);
  }
  v49 = a1[175];
  a1[175] = 0;
  if (v49 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 8LL))(v49);
  }
  v50 = a1[174];
  a1[174] = 0;
  if (v50 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 8LL))(v50);
  }
  v51 = a1[173];
  a1[173] = 0;
  if (v51 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 8LL))(v51);
  }
  v52 = a1[172];
  a1[172] = 0;
  if (v52 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 8LL))(v52);
  }
  v53 = a1[171];
  a1[171] = 0;
  if (v53 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 8LL))(v53);
  }
  v54 = a1[170];
  a1[170] = 0;
  if (v54 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 8LL))(v54);
  }
  v55 = a1[169];
  a1[169] = 0;
  if (v55 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v55 + 8LL))(v55);
  }
  v56 = a1[168];
  a1[168] = 0;
  if (v56 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 8LL))(v56);
  }
  v57 = a1[167];
  a1[167] = 0;
  if (v57 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 8LL))(v57);
  }
  v58 = a1[166];
  a1[166] = 0;
  if (v58 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 8LL))(v58);
  }
  v59 = a1[165];
  a1[165] = 0;
  if (v59 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v59 + 8LL))(v59);
  }
  v60 = a1[164];
  a1[164] = 0;
  if (v60 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v60 + 8LL))(v60);
  }
  v61 = a1[163];
  a1[163] = 0;
  if (v61 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v61 + 8LL))(v61);
  }
  v62 = a1[162];
  a1[162] = 0;
  if (v62 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v62 + 8LL))(v62);
  }
  v63 = a1[161];
  a1[161] = 0;
  if (v63 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v63 + 8LL))(v63);
  }
  v64 = a1[160];
  a1[160] = 0;
  if (v64 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v64 + 8LL))(v64);
  }
  v65 = a1[159];
  a1[159] = 0;
  if (v65 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v65 + 8LL))(v65);
  }
  v66 = a1[158];
  a1[158] = 0;
  if (v66 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v66 + 8LL))(v66);
  }
  v67 = a1[157];
  a1[157] = 0;
  if (v67 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v67 + 8LL))(v67);
  }
  v68 = a1[156];
  a1[156] = 0;
  if (v68 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v68 + 8LL))(v68);
  }
  v69 = a1[155];
  a1[155] = 0;
  if (v69 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v69 + 8LL))(v69);
  }
  v70 = a1[154];
  a1[154] = 0;
  if (v70 != 0) {
    GameRoutine_1015560(v70);
    v71 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v71 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v71, v70);
    v72 = a1[154];
    a1[154] = 0;
    if (v72 != 0) {
      GameRoutine_1015560(v72);
      v73 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v73 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v73, v72);
    }
  }
  v74 = a1[150];
  if (v74 != 0) {
    v75 = fw_memory_g_heap_manager;
    a1[151] = v74;
    v76 = 128;
    if (*(_QWORD*)(v75 + 200) == 0) {
      v76 = 56;
    }
    nn_mem_StandardAllocator_Free(v75 + v76, v74);
  }
  v77 = a1[147];
  if (v77 != 0) {
    std___1___shared_weak_count___release_weak(v77);
  }
  v78 = (_QWORD*)a1[144];
  if (v78 == a1 + 140) {
    v79 = 32;
  }
  else {
    if (v78 == nullptr) {
      goto LABEL_155;
    }
    v79 = 40;
  }
  (*(void (**)(__int64))(*v78 + v79))((__int64)v78);
LABEL_155:
  v80 = a1[136];
  if (v80 != 0) {
    v81 = fw_memory_g_heap_manager;
    a1[137] = v80;
    v82 = 128;
    if (*(_QWORD*)(v81 + 200) == 0) {
      v82 = 56;
    }
    nn_mem_StandardAllocator_Free(v81 + v82, v80);
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
}

__int64 game_menu_16325f0(__int64 result, char a2, char a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_225d4e0 == 0) {
    v5 = result;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_225d4d8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_225d4d8) != 0) {
      GameData_225d458 = 14;
      GameData_225d470 = 0;
      GameData_225d478 = 0;
      GameData_225d480 = 0;
      GameData_225d488 = 0;
      GameData_225d490 = 0;
      GameData_225d498 = 0;
      GameData_225d4c0 = 0;
      GameData_225d4c8 = 0;
      GameData_225d4d0 = 0;
      GameData_225d4a0 = 0;
      GameData_225d4a8 = 0;
      GameData_225d4b0 = 0;
      GameData_225d4b8 = 0;
      GameData_225d460 = 0;
      GameData_225d468 = (__int64)UnitMake_16337a0;
      __cxa_guard_release((__int64)&GameData_225d4d8);
    }
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        168, 16, 0);
    v7 = 888;
    v8 = v6;
    v9 = GameData_212c608[0];
    if ((a2 & 1) != 0) {
      v7 = 720;
    }
    *(_QWORD*)(v6 + 96) = 0;
    *(_QWORD*)(v6 + 104) = 0;
    *(_QWORD*)(v6 + 112) = 0;
    *(_QWORD*)(v6 + 120) = 0;
    *(_QWORD*)(v6 + 128) = 0;
    *(_WORD*)(v6 + 136) = 0;
    v10 = *(_QWORD*)(v5 + v7);
    *(_QWORD*)(v6 + 138) = 0;
    *(_QWORD*)(v6 + 144) = 0;
    *(_QWORD*)(v6 + 16) = 0;
    *(_QWORD*)(v6 + 24) = "NULL";
    *(_QWORD*)(v6 + 32) = 0;
    *(_QWORD*)(v6 + 40) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 80) = 0;
    *(_QWORD*)(v6 + 88) = 0;
    *(_QWORD*)v6 = v9 + 16;
    *(_QWORD*)(v6 + 8) = 0;
    result = game_ProcInst_Register(v6);
    GameData_225d4e0 = v8;
    *(_QWORD*)(v8 + 152) = v10;
    *(_BYTE*)(v8 + 160) = a3 & 1;
    *(_DWORD*)(v8 + 164) = 0;
    *(_QWORD*)v8 = game_menu_anonymous_UnitMakeDitherAlpha_vtable;
    v11 = *(_QWORD*)(v5 + 32);
    if (v11 != 0) {
      v12 = *(_QWORD*)(v11 + 40);
      if (v12 != 0) {
        *(_QWORD*)(v12 + 48) = v8;
        *(_QWORD*)(v8 + 56) = *(_QWORD*)(v11 + 40);
      }
      *(_QWORD*)(v11 + 40) = v8;
      *(_QWORD*)(v8 + 24) = "UnitMakeDitherAlpha";
      *(_QWORD*)(v8 + 32) = v11;
      *(_DWORD*)(v8 + 140) =
          (unsigned int)game_HashString32("UnitMakeDitherAlpha");
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 24;
      *(_QWORD*)(v8 + 80) = 1;
      *(_QWORD*)(v8 + 8) = &GameData_225d458;
      *(_QWORD*)(v8 + 16) = &GameData_225d458;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 136LL))(v8);
      if ((result & 1) != 0 && (*(_WORD*)(v8 + 136) & 0x100) == 0) {
        *(_WORD*)(v8 + 136) |= 0x100u;
      }
    }
    else if ((*(_WORD*)(v8 + 136) & 1) == 0) {
      return (__int64)ProcInst_657a50(v8, 1);
    }
  }
  return result;
}

__int64 game_menu_1649f60(__int64 a1, const char** a2)
{
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int16 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;

  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1504, 16, 0);
  GameRoutine_1647b80(v4, a2);
  *(_QWORD*)v4 = game_menu_NoInputDialog_vtable;
  *(_QWORD*)(v4 + 176) = game_menu_MenuInput_InputUnknown00_ptr_2073698;
  v5 = *(_QWORD*)(a1 + 40);
  if (v5 != 0) {
    *(_QWORD*)(v5 + 48) = v4;
    *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v4;
  *(_QWORD*)(v4 + 24) = "T";
  *(_QWORD*)(v4 + 32) = a1;
  *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32("T");
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 24;
  *(_QWORD*)(v4 + 80) = 1;
  *(_QWORD*)(v4 + 8) = &GameData_2174f00;
  *(_QWORD*)(v4 + 16) = &GameData_2174f00;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
      (*(_WORD*)(v4 + 136) & 0x100) == 0) {
    *(_WORD*)(v4 + 136) |= 0x100u;
  }
  v6 = *(_BYTE**)(v4 + 32);
  v7 = v6[138];
  if (v7 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
    v7 = v6[138];
  }
  v6[138] = v7 + 1;
  v12_.v13 = v12_.v12;
  v8 = *(_WORD*)(v4 + 136);
  v14_.v15 = v14_.v14;
  *(_WORD*)(v4 + 136) = v8 | 2;
  v12_.v12[0] = GameData_2073a88;
  v14_.v14[0] = GameData_2073a88;
  GameRoutine_654050(v14_.v14, (_QWORD*)(v4 + 1200));
  if (v14_.v15 == v14_.v14) {
    v9 = 32;
    goto LABEL_14;
  }
  if (v14_.v15 != nullptr) {
    v9 = 40;
  LABEL_14:
    (*(void (**)(__int64))(*v14_.v15 + v9))((__int64)v14_.v15);
  }
  if (v12_.v13 == v12_.v12) {
    v10 = 32;
    goto LABEL_19;
  }
  if (v12_.v13 != nullptr) {
    v10 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*v12_.v13 + v10))((__int64)v12_.v13);
  }
  return v4;
}

__int64 game_menu_164cfc0(__int64 a1, char** a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
    char gap40_[8];
    char* v10[4];
    char** v11;
  } f_;

  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1584, 16, 0);
  f_.v10[0] = *a2;
  GameRoutine_1647b80_alt1(v4, f_.v10);
  *(_WORD*)(v4 + 1496) = 0;
  *(_QWORD*)(v4 + 1520) = 0;
  *(_QWORD*)(v4 + 1528) = 0;
  *(_QWORD*)(v4 + 1536) = 0;
  *(_QWORD*)v4 = game_menu_ExchangeNumDialog_vtable;
  *(_QWORD*)(v4 + 1544) = 0;
  *(_QWORD*)(v4 + 1552) = 0;
  *(_QWORD*)(v4 + 1560) = 0;
  *(_BYTE*)(v4 + 1568) = 0;
  *(_DWORD*)(v4 + 1572) = 0;
  *(_QWORD*)(v4 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20744a0;
  ProcInst_657850(v4, (__int64)GameData_212c730, "T", 1, a1);
  f_.v11 = f_.v10;
  f_.v8[0] = GameData_2074d38;
  f_.v9 = f_.v8;
  f_.v10[0] = (const char*)GameData_2074d38;
  GameRoutine_654050(f_.v10, (_QWORD*)(v4 + 1200));
  if (f_.v11 == f_.v10) {
    v5 = 32;
    goto LABEL_7;
  }
  if (f_.v11 != nullptr) {
    v5 = 40;
  LABEL_7:
    (*(void (**)(void*)) & (*f_.v11)[v5])((void*)f_.v11);
  }
  if (f_.v9 == f_.v8) {
    v6 = 32;
    goto LABEL_12;
  }
  if (f_.v9 != nullptr) {
    v6 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*f_.v9 + v6))((__int64)f_.v9);
  }
  return v4;
}

_QWORD* game_menu_166a500(__int64 a1, char* a2, int a3, __int64 a4)
{
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  _BYTE* v11;
  char v12;
  __int16 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  __int64 (***v20)();
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  unsigned __int16* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64 (**v32)();
    char v33;
    char gap9_[23];
    __int64 (***v34)();
    char gap40_[8];
    char* v35;
    int v36;
  } v32_;
  struct {
    _BYTE v37[32];
    _BYTE* v38;
  } v37_;
  struct {
    char* v39;
    int v40;
  } v39_;
  struct {
    _BYTE v41[16];
    char** v42;
    char gap152_[8];
    _BYTE* v43;
  } v41_;
  struct {
    __int64 (**v44)();
    char v45;
    char gap185_[23];
    __int64 (***v46)();
  } v44_;

  if (a1 == 0) {
    return nullptr;
  }
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1520, 16, 0);
  v39_.v39 = "MID_Menu_ItemDiscard_Confirm";
  GameRoutine_1647b80((__int64)v9, &v39_.v39);
  v9[189] = 0;
  v9[188] = 0;
  v9[187] = 0;
  *v9 = game_menu_ItemDiscardDialog_vtable;
  v9[22] = game_menu_MenuInput_InputUnknown00_ptr_207b988;
  v10 = *(_QWORD*)(a1 + 40);
  if (v10 != 0) {
    *(_QWORD*)(v10 + 48) = v9;
    v9[7] = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v9;
  v9[3] = "T";
  v9[4] = a1;
  *((_DWORD*)v9 + 35) = (unsigned int)game_HashString32("T");
  v9[8] = 0;
  v9[9] = 24;
  v9[10] = 1;
  v9[1] = &GameData_2174f00;
  v9[2] = &GameData_2174f00;
  (*(void (**)(_QWORD*))(*v9 + 32LL))(v9);
  if (((*(__int64 (**)(_QWORD*))(*v9 + 136LL))(v9) & 1) != 0 &&
      (v9[17] & 0x100) == 0) {
    *((_WORD*)v9 + 68) |= 0x100u;
  }
  v11 = (_BYTE*)v9[4];
  v12 = v11[138];
  if (v12 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v11 + 64LL))(v9[4]);
    v12 = v11[138];
  }
  v11[138] = v12 + 1;
  v44_.v46 = &v44_.v44;
  v13 = *((_WORD*)v9 + 68);
  v41_.v42 = &v39_.v39;
  *((_WORD*)v9 + 68) = v13 | 2;
  v44_.v44 = GameData_207ba70;
  v39_.v39 = (const char*)GameData_207ba70;
  GameRoutine_654050(&v39_.v39, v9 + 150);
  if (v41_.v42 == &v39_.v39) {
    v14 = 32;
  }
  else {
    if (v41_.v42 == nullptr) {
      goto LABEL_15;
    }
    v14 = 40;
  }
  (*(void (**)(void*)) & (*v41_.v42)[v14])((void*)v41_.v42);
LABEL_15:
  if (v44_.v46 == &v44_.v44) {
    v15 = 4;
  }
  else {
    if (v44_.v46 == nullptr) {
      goto LABEL_20;
    }
    v15 = 5;
  }
  ((__int64 (*)(__int64))(*v44_.v46)[v15])((__int64)v44_.v46);
LABEL_20:
  v16 = *(_QWORD*)(a4 + 32);
  v39_.v39 = a2;
  v39_.v40 = a3;
  if (v16 != 0) {
    if (v16 == a4) {
      v41_.v43 = v41_.v41;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v16 + 24LL))(v16, v41_.v41);
    }
    else {
      v41_.v43 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    }
  }
  else {
    v41_.v43 = nullptr;
  }
  v17 = fw_memory_HeapManager_Allocate(*v8, 192, 16, 0);
  v32_.v35 = v39_.v39;
  v32_.v36 = v39_.v40;
  if (v41_.v43 != nullptr) {
    if (v41_.v43 == v41_.v41) {
      v37_.v38 = v37_.v37;
      (*(void (**)(__int64))(*(_QWORD*)v41_.v43 + 24LL))((__int64)v41_.v43);
      v18 = v37_.v38;
    }
    else {
      v18 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v41_.v43 + 16LL))(
          (__int64)v41_.v43);
      v37_.v38 = v18;
    }
  }
  else {
    v18 = nullptr;
    v37_.v38 = nullptr;
  }
  v19 = fw_memory_HeapManager_Allocate(*v8, 80, 16, 0);
  v20 = (__int64 (***)(void))v19;
  *(_QWORD*)v19 = GameData_207baf0;
  *(_QWORD*)(v19 + 16) = v32_.v35;
  *(_DWORD*)(v19 + 24) = v32_.v36;
  if (v18 != nullptr) {
    if (v18 == v37_.v37) {
      *(_QWORD*)(v19 + 64) = v19 + 32;
      (*(void (**)(_BYTE*))(*(_QWORD*)v18 + 24LL))(v18);
    }
    else {
      *(_QWORD*)(v19 + 64) =
          (*(__int64 (**)(_BYTE*))(*(_QWORD*)v18 + 16LL))(v18);
    }
  }
  else {
    *(_QWORD*)(v19 + 64) = 0;
  }
  v44_.v46 = v20;
  v32_.v32 = GameData_207bb70;
  v32_.v34 = &v32_.v32;
  GameRoutine_16477d0(v17, "MID_Sys_Yes", (__int64)&v44_.v44,
                      (__int64)&v32_.v32);
  BasicMenuCursor_16e0c00_alt1(v9, v17);
  if (v32_.v34 == &v32_.v32) {
    v21 = 4;
  }
  else {
    if (v32_.v34 == nullptr) {
      goto LABEL_40;
    }
    v21 = 5;
  }
  ((__int64 (*)(__int64))(*v32_.v34)[v21])((__int64)v32_.v34);
LABEL_40:
  ((void (*)(__int64 (***)(void)))(*v20)[5])(v20);
  if (v37_.v38 == v37_.v37) {
    v22 = 32;
  }
  else {
    if (v37_.v38 == nullptr) {
      goto LABEL_45;
    }
    v22 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v37_.v38 + v22))((__int64)v37_.v38);
LABEL_45:
  v23 = fw_memory_HeapManager_Allocate(*v8, 192, 16, 0);
  v44_.v44 = GameData_207bb70;
  v32_.v32 = GameData_207bb70;
  v44_.v46 = &v44_.v44;
  v32_.v34 = &v32_.v32;
  GameRoutine_16477d0(v23, "MID_Sys_No", (__int64)&v44_.v44,
                      (__int64)&v32_.v32);
  BasicMenuCursor_16e0c00_alt1(v9, v23);
  if (v32_.v34 == &v32_.v32) {
    v24 = 4;
  }
  else {
    if (v32_.v34 == nullptr) {
      goto LABEL_50;
    }
    v24 = 5;
  }
  ((__int64 (*)(__int64))(*v32_.v34)[v24])((__int64)v32_.v34);
LABEL_50:
  if (v44_.v46 == &v44_.v44) {
    v25 = 4;
  }
  else {
    if (v44_.v46 == nullptr) {
      goto LABEL_55;
    }
    v25 = 5;
  }
  ((__int64 (*)(__int64))(*v44_.v46)[v25])((__int64)v44_.v46);
LABEL_55:
  if (a2 != nullptr) {
    v26 = &a2[8 * a3];
    v27 = (unsigned __int16*)(v26 + 828);
    LOBYTE(a2) =
        (v26[831] & 1) != 0 ||
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *v27) +
                  72LL) == 13;
  }
  else {
    v27 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * a3 + 4);
  }
  game_menu_1a06650((__int64)(v9 + 187),
                    *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *v27),
                    1);
  v32_.v33 = (char)a2;
  v44_.v45 = (char)a2;
  v32_.v32 = GameData_207bbf0;
  v32_.v34 = &v32_.v32;
  v44_.v46 = &v44_.v44;
  v44_.v44 = GameData_207bbf0;
  GameRoutine_654050(&v44_.v44, v9 + 144);
  if (v44_.v46 == &v44_.v44) {
    v28 = 4;
  }
  else {
    if (v44_.v46 == nullptr) {
      goto LABEL_65;
    }
    v28 = 5;
  }
  ((__int64 (*)(__int64))(*v44_.v46)[v28])((__int64)v44_.v46);
LABEL_65:
  if (v32_.v34 == &v32_.v32) {
    v29 = 4;
    goto LABEL_69;
  }
  if (v32_.v34 != nullptr) {
    v29 = 5;
  LABEL_69:
    ((__int64 (*)(__int64))(*v32_.v34)[v29])((__int64)v32_.v34);
  }
  if (v41_.v43 == v41_.v41) {
    v30 = 32;
    goto LABEL_74;
  }
  if (v41_.v43 != nullptr) {
    v30 = 40;
  LABEL_74:
    (*(void (**)(__int64))(*(_QWORD*)v41_.v43 + v30))((__int64)v41_.v43);
  }
  return v9;
}

void game_menu_169f990(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    char gap32_[27];
    char v29;
  } v25_;
  char* v30[2];

  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1168, 16, 0);
  v25_.v25 = 0;
  v25_.v26 = 0;
  BasicMenu_16dcd30((__int64)v8, (__int64)"TitleMenu", &v25_.v25, 0);
  v9 = v25_.v26;
  v8[138] = 0;
  *v8 = game_menu_TitleMenu_vtable;
  v8[22] = game_menu_MenuInput_InputUnknown00_ptr_2084830;
  v8[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_2084900;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = *(_QWORD*)(a4 + 32);
  *v8 = game_menu_anonymous_ProcTitleTopMenu_vtable;
  v8[22] = game_menu_MenuInput_InputUnknown00_ptr_2084e38;
  v8[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_2084f08;
  if (v10 != 0) {
    if (v10 == a4) {
      v8[144] = v8 + 140;
      (*(void (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
    }
    else {
      v8[144] = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    }
  }
  else {
    v8[144] = 0;
  }
  ProcInst_657850_alt1((__int64)v8, (__int64)GameData_212c730,
                       (__int64)"ProcTitleTopMenu", 1, a1);
  v11 = fw_memory_HeapManager_Allocate(*v7, 160, 16, 0);
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 80) = 0;
  *(_QWORD*)(v11 + 88) = 0;
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_BYTE*)(v11 + 17) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_WORD*)(v11 + 80) = 257;
  v12 = *v7;
  *(_BYTE*)(v11 + 82) = 1;
  v13 = fw_memory_HeapManager_Allocate(v12, 296, 16, 0);
  *(_QWORD*)(v13 + 16) = 0;
  v14 = GameData_2131678;
  *(_DWORD*)(v13 + 48) = 0x2000;
  *(_DWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_DWORD*)(v13 + 104) = 0;
  *(_WORD*)(v13 + 108) = 256;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_WORD*)(v13 + 80) = 0;
  *(_WORD*)(v13 + 116) = 0;
  *(_WORD*)(v13 + 136) = 0;
  *(_BYTE*)(v13 + 160) = 0;
  *(_BYTE*)(v13 + 288) = 0;
  *(_QWORD*)(v13 + 272) = 0;
  *(_QWORD*)(v13 + 280) = 0;
  *(_QWORD*)(v13 + 256) = 0;
  *(_QWORD*)(v13 + 264) = 0;
  *(_QWORD*)(v13 + 240) = 0;
  *(_QWORD*)(v13 + 248) = 0;
  *(_QWORD*)(v13 + 224) = 0;
  *(_QWORD*)(v13 + 232) = 0;
  *(_QWORD*)(v13 + 208) = 0;
  *(_QWORD*)(v13 + 216) = 0;
  *(_QWORD*)(v13 + 192) = 0;
  *(_QWORD*)(v13 + 200) = 0;
  *(_QWORD*)(v13 + 176) = 0;
  *(_QWORD*)(v13 + 184) = 0;
  *(_QWORD*)(v13 + 168) = 0;
  *(_QWORD*)(v13 + 120) = 0;
  *(_DWORD*)(v13 + 127) = 0;
  *(_QWORD*)(v11 + 96) = v13;
  *(_QWORD*)v13 = v14 + 16;
  *(_QWORD*)(v13 + 8) = 0;
  *(_DWORD*)(v13 + 112) = -1082130432;
  *(_DWORD*)(v13 + 292) = 2;
  *(_QWORD*)(v13 + 24) = 0;
  *(_QWORD*)(v11 + 88) = v13 + 24;
  v15 = *(_QWORD*)(a3 + 32);
  *(_QWORD*)v11 = game_menu_anonymous_NewGameMenuItem_vtable;
  if (v15 != 0) {
    if (v15 == a3) {
      *(_QWORD*)(v11 + 144) = v11 + 112;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15);
    }
    else {
      *(_QWORD*)(v11 + 144) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    }
  }
  else {
    *(_QWORD*)(v11 + 144) = 0;
  }
  *(_BYTE*)(v11 + 81) = !game_877b20(2u, 0, 0, 0);
  BasicMenuCursor_16e0c00_alt1(v8, v11);
  v16 = fw_memory_HeapManager_Allocate(*v7, 112, 16, 0);
  *(_QWORD*)(v16 + 8) = 0;
  *(_WORD*)(v16 + 16) = 0;
  *(_DWORD*)(v16 + 40) = 0;
  *(_QWORD*)(v16 + 48) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_BYTE*)(v16 + 80) = 1;
  v17 = *v7;
  *(_BYTE*)(v16 + 82) = 1;
  v18 = fw_memory_HeapManager_Allocate(v17, 296, 16, 0);
  *(_QWORD*)(v18 + 8) = 0;
  *(_QWORD*)(v18 + 16) = 0;
  *(_DWORD*)(v18 + 32) = 0;
  *(_QWORD*)(v18 + 40) = 0;
  *(_QWORD*)v18 = v14 + 16;
  *(_DWORD*)(v18 + 48) = 0x2000;
  *(_DWORD*)(v18 + 104) = 0;
  *(_WORD*)(v18 + 108) = 256;
  *(_QWORD*)(v18 + 56) = 0;
  *(_QWORD*)(v18 + 64) = 0;
  *(_QWORD*)(v18 + 72) = 0;
  *(_WORD*)(v18 + 80) = 0;
  *(_DWORD*)(v18 + 112) = -1082130432;
  *(_WORD*)(v18 + 116) = 0;
  *(_WORD*)(v18 + 136) = 0;
  *(_BYTE*)(v18 + 160) = 0;
  *(_BYTE*)(v18 + 288) = 0;
  *(_QWORD*)(v18 + 272) = 0;
  *(_QWORD*)(v18 + 280) = 0;
  *(_QWORD*)(v18 + 256) = 0;
  *(_QWORD*)(v18 + 264) = 0;
  *(_QWORD*)(v18 + 240) = 0;
  *(_QWORD*)(v18 + 248) = 0;
  *(_QWORD*)(v18 + 224) = 0;
  *(_QWORD*)(v18 + 232) = 0;
  *(_QWORD*)(v18 + 208) = 0;
  *(_QWORD*)(v18 + 216) = 0;
  *(_QWORD*)(v18 + 192) = 0;
  *(_QWORD*)(v18 + 200) = 0;
  *(_QWORD*)(v18 + 176) = 0;
  *(_QWORD*)(v18 + 184) = 0;
  *(_QWORD*)(v18 + 168) = 0;
  *(_QWORD*)(v18 + 120) = 0;
  *(_DWORD*)(v18 + 127) = 0;
  *(_DWORD*)(v18 + 292) = 2;
  *(_QWORD*)(v16 + 96) = v18;
  *(_QWORD*)(v18 + 24) = 0;
  *(_QWORD*)(v16 + 88) = v18 + 24;
  *(_QWORD*)v16 = game_menu_anonymous_ContinueMenuItem_vtable;
  *(_DWORD*)(v16 + 104) = 0;
  *(_BYTE*)(v16 + 81) = game_877b20(2u, 0, 0, 0);
  BasicMenuCursor_16e0c00_alt1(v8, v16);
  v19 = fw_memory_HeapManager_Allocate(*v7, 104, 16, 0);
  *(_QWORD*)(v19 + 8) = 0;
  *(_WORD*)(v19 + 16) = 0;
  *(_DWORD*)(v19 + 40) = 0;
  *(_QWORD*)(v19 + 48) = 0;
  *(_QWORD*)(v19 + 56) = 0;
  *(_QWORD*)(v19 + 64) = 0;
  *(_QWORD*)(v19 + 72) = 0;
  *(_BYTE*)(v19 + 82) = 1;
  *(_WORD*)(v19 + 80) = 257;
  v20 = fw_memory_HeapManager_Allocate(*v7, 296, 16, 0);
  *(_QWORD*)(v20 + 8) = 0;
  *(_QWORD*)(v20 + 16) = 0;
  *(_QWORD*)v20 = v14 + 16;
  *(_DWORD*)(v20 + 32) = 0;
  *(_QWORD*)(v20 + 40) = 0;
  *(_DWORD*)(v20 + 48) = 0x2000;
  *(_DWORD*)(v20 + 104) = 0;
  *(_WORD*)(v20 + 108) = 256;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 72) = 0;
  *(_WORD*)(v20 + 80) = 0;
  *(_DWORD*)(v20 + 112) = -1082130432;
  *(_WORD*)(v20 + 116) = 0;
  *(_WORD*)(v20 + 136) = 0;
  *(_BYTE*)(v20 + 160) = 0;
  *(_BYTE*)(v20 + 288) = 0;
  *(_QWORD*)(v20 + 272) = 0;
  *(_QWORD*)(v20 + 280) = 0;
  *(_QWORD*)(v20 + 256) = 0;
  *(_QWORD*)(v20 + 264) = 0;
  *(_QWORD*)(v20 + 240) = 0;
  *(_QWORD*)(v20 + 248) = 0;
  *(_QWORD*)(v20 + 224) = 0;
  *(_QWORD*)(v20 + 232) = 0;
  *(_QWORD*)(v20 + 208) = 0;
  *(_QWORD*)(v20 + 216) = 0;
  *(_QWORD*)(v20 + 192) = 0;
  *(_QWORD*)(v20 + 200) = 0;
  *(_QWORD*)(v20 + 176) = 0;
  *(_QWORD*)(v20 + 184) = 0;
  *(_QWORD*)(v20 + 168) = 0;
  *(_QWORD*)(v20 + 120) = 0;
  *(_DWORD*)(v20 + 127) = 0;
  *(_DWORD*)(v20 + 292) = 2;
  *(_QWORD*)(v19 + 96) = v20;
  *(_QWORD*)(v20 + 24) = 0;
  *(_QWORD*)(v19 + 88) = v20 + 24;
  *(_QWORD*)v19 = game_menu_anonymous_ContinueNewGameMenuItem_vtable;
  v30[0] = game_util_Format("%s/%s", "000", "Auto");
  v30[1] = (const char*)GameRoutine_1a09c70(v30[0]);
  GameRoutine_878ea0((void*)((__int64)&v25_.v25), v30);
  v21 = (_BYTE)v25_.v25 != 0 && (v25_.v29 & 0x10) != 0;
  *(_BYTE*)(v19 + 81) = v21;
  BasicMenuCursor_16e0c00_alt1(v8, v19);
  v22 = fw_memory_HeapManager_Allocate(*v7, 104, 16, 0);
  *(_QWORD*)(v22 + 80) = 0;
  *(_QWORD*)(v22 + 88) = 0;
  *(_QWORD*)(v22 + 24) = 0;
  *(_QWORD*)(v22 + 32) = 0;
  *(_QWORD*)(v22 + 8) = 0;
  *(_QWORD*)(v22 + 16) = 0;
  *(_BYTE*)(v22 + 17) = 0;
  *(_QWORD*)(v22 + 40) = 0;
  *(_QWORD*)(v22 + 48) = 0;
  *(_QWORD*)(v22 + 56) = 0;
  *(_QWORD*)(v22 + 64) = 0;
  *(_QWORD*)(v22 + 72) = 0;
  *(_WORD*)(v22 + 80) = 257;
  v23 = *v7;
  *(_BYTE*)(v22 + 82) = 1;
  v24 = fw_memory_HeapManager_Allocate(v23, 296, 16, 0);
  *(_QWORD*)(v24 + 8) = 0;
  *(_QWORD*)(v24 + 16) = 0;
  *(_DWORD*)(v24 + 32) = 0;
  *(_QWORD*)(v24 + 40) = 0;
  *(_DWORD*)(v24 + 104) = 0;
  *(_QWORD*)(v24 + 56) = 0;
  *(_QWORD*)(v24 + 64) = 0;
  *(_QWORD*)(v24 + 72) = 0;
  *(_WORD*)(v24 + 80) = 0;
  *(_WORD*)(v24 + 116) = 0;
  *(_WORD*)(v24 + 136) = 0;
  *(_BYTE*)(v24 + 160) = 0;
  *(_QWORD*)v24 = v14 + 16;
  *(_BYTE*)(v24 + 288) = 0;
  *(_QWORD*)(v24 + 272) = 0;
  *(_QWORD*)(v24 + 280) = 0;
  *(_QWORD*)(v24 + 256) = 0;
  *(_QWORD*)(v24 + 264) = 0;
  *(_QWORD*)(v24 + 240) = 0;
  *(_QWORD*)(v24 + 248) = 0;
  *(_QWORD*)(v24 + 224) = 0;
  *(_QWORD*)(v24 + 232) = 0;
  *(_QWORD*)(v24 + 208) = 0;
  *(_QWORD*)(v24 + 216) = 0;
  *(_QWORD*)(v24 + 192) = 0;
  *(_QWORD*)(v24 + 200) = 0;
  *(_QWORD*)(v24 + 176) = 0;
  *(_QWORD*)(v24 + 184) = 0;
  *(_QWORD*)(v24 + 168) = 0;
  *(_QWORD*)(v24 + 120) = 0;
  *(_DWORD*)(v24 + 48) = 0x2000;
  *(_DWORD*)(v24 + 127) = 0;
  *(_QWORD*)(v22 + 96) = v24;
  *(_WORD*)(v24 + 108) = 256;
  *(_DWORD*)(v24 + 112) = -1082130432;
  *(_DWORD*)(v24 + 292) = 2;
  *(_QWORD*)v22 = game_menu_anonymous_ExtraMenuItem_vtable;
  *(_QWORD*)(v24 + 24) = 0;
  *(_QWORD*)(v22 + 88) = v24 + 24;
  BasicMenuCursor_16e0c00_alt1(v8, v22);
}

__int64 game_menu_16a0c30(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  *a1 = game_menu_anonymous_ProcTitleTopMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_2084e38;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_2084f08;
  v2 = a1 + 140;
  v3 = (_QWORD*)a1[144];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = (_QWORD*)a1[138];
  *a1 = game_menu_TitleMenu_vtable;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_2084900;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_2084830;
  if (v5 == a1 + 134) {
    v6 = 32;
    goto LABEL_10;
  }
  if (v5 != nullptr) {
    v6 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
}

void game_menu_16a0cf0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_menu_anonymous_ProcTitleTopMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_2084e38;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_2084f08;
  v2 = a1 + 140;
  v3 = (_QWORD*)a1[144];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = (_QWORD*)a1[138];
  *a1 = game_menu_TitleMenu_vtable;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_2084900;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_2084830;
  if (v5 == a1 + 134) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_11:
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                (__int64)a1);
}

__int64 game_menu_16a1bc0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 (**v15)();
    __int64 v16;
    char gap16_[16];
    __int64 (***v17)();
  } v15_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1136, 16, 0);
  v15_.v15 = nullptr;
  v15_.v16 = 0;
  game_menu_16dcd30(v3, (__int64)"SubMenu", &v15_.v15, 0);
  v4 = GameData_212d6a8;
  v5 = v15_.v16;
  *(_QWORD*)v3 = GameData_212d6a8 + 2;
  *(_QWORD*)(v3 + 176) = v4 + 143;
  *(_QWORD*)(v3 + 1056) = v4 + 169;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  *(_QWORD*)(v3 + 1064) = a1;
  *(_QWORD*)(v3 + 1120) = 0;
  *(_QWORD*)(v3 + 1076) = 0;
  *(_DWORD*)(v3 + 1072) = 1;
  *(_QWORD*)v3 = game_menu_TitleSubMenu_vtable;
  *(_QWORD*)(v3 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20840b8;
  v6 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_2083fe8;
  if (*(_QWORD*)(v6 + 152) != 0) {
    v7 = *(_QWORD*)(v6 + 152);
  }
  else {
    v7 = v6;
  }
  ProcInst_657850(v3, (__int64)GameData_212c730, "TitleSubMenu", 1, v7);
  v8 = fw_memory_HeapManager_Allocate(*v2, 192, 16, 0);
  v15_.v17 = &v15_.v15;
  *(_WORD*)(v8 + 16) = 0;
  *(_DWORD*)(v8 + 40) = 0;
  *(_QWORD*)(v8 + 48) = 0;
  *(_QWORD*)(v8 + 56) = 0;
  *(_QWORD*)(v8 + 64) = 0;
  *(_QWORD*)(v8 + 72) = 0;
  *(_BYTE*)(v8 + 82) = 1;
  *(_QWORD*)(v8 + 128) = 0;
  *(_QWORD*)(v8 + 152) = a1;
  *(_WORD*)(v8 + 80) = 257;
  *(_QWORD*)(v8 + 144) = GameData_2085bf8;
  v15_.v15 = GameData_2085bf8;
  v15_.v16 = a1;
  *(_QWORD*)(v8 + 176) = v8 + 144;
  *(_QWORD*)v8 = game_menu_anonymous_ExtraSettingVoiceMenuItem_vtable;
  *(_QWORD*)(v8 + 8) = 0;
  BasicMenuCursor_16e0c00_alt1((_QWORD*)v3, v8);
  if (v15_.v17 == &v15_.v15) {
    v9 = 4;
  }
  else {
    if (v15_.v17 == nullptr) {
      goto LABEL_12;
    }
    v9 = 5;
  }
  ((__int64 (*)(__int64))(*v15_.v17)[v9])((__int64)v15_.v17);
LABEL_12:
  v10 = fw_memory_HeapManager_Allocate(*v2, 192, 16, 0);
  v15_.v15 = GameData_2085bf8;
  v15_.v16 = a1;
  *(_WORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 152) = a1;
  *(_WORD*)(v10 + 80) = 257;
  v15_.v17 = &v15_.v15;
  *(_BYTE*)(v10 + 82) = 1;
  *(_QWORD*)(v10 + 144) = GameData_2085bf8;
  *(_QWORD*)(v10 + 176) = v10 + 144;
  *(_QWORD*)v10 = game_menu_anonymous_ExtraSettingInsectPhobiaMenuItem_vtable;
  *(_QWORD*)(v10 + 8) = 0;
  BasicMenuCursor_16e0c00_alt1((_QWORD*)v3, v10);
  if (v15_.v17 == &v15_.v15) {
    v11 = 4;
  }
  else {
    if (v15_.v17 == nullptr) {
      goto LABEL_17;
    }
    v11 = 5;
  }
  ((__int64 (*)(__int64))(*v15_.v17)[v11])((__int64)v15_.v17);
LABEL_17:
  if (game_877b20_alt1()) {
    v12 = fw_memory_HeapManager_Allocate(*v2, 192, 16, 0);
    v15_.v15 = GameData_2085bf8;
    v15_.v16 = a1;
    *(_WORD*)(v12 + 16) = 0;
    *(_DWORD*)(v12 + 40) = 0;
    *(_QWORD*)(v12 + 48) = 0;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_QWORD*)(v12 + 128) = 0;
    *(_QWORD*)(v12 + 152) = a1;
    *(_WORD*)(v12 + 80) = 257;
    v15_.v17 = &v15_.v15;
    *(_BYTE*)(v12 + 82) = 1;
    *(_QWORD*)(v12 + 144) = GameData_2085bf8;
    *(_QWORD*)(v12 + 176) = v12 + 144;
    *(_QWORD*)v12 = game_menu_anonymous_ExtraSaveDeleteMenuItem_vtable;
    *(_QWORD*)(v12 + 8) = 0;
    BasicMenuCursor_16e0c00_alt1((_QWORD*)v3, v12);
    if (v15_.v17 == &v15_.v15) {
      v13 = 4;
      goto LABEL_22;
    }
    if (v15_.v17 != nullptr) {
      v13 = 5;
    LABEL_22:
      ((__int64 (*)(__int64))(*v15_.v17)[v13])((__int64)v15_.v17);
    }
  }
  return 10;
}

__int64 game_menu_16dcd30(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{

#pragma clang fp contract(fast)

  __int64 v4;
  int v5;
  __int64 v9;
  __int64* v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BOOL4 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  unsigned __int64 v28;
  __int128 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[2];
  _QWORD v35[2];
  _QWORD v36[2];
  int v37;

  v9 = GameData_212c608[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v9 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register_alt1();
  *(_BYTE*)(a1 + 168) = 0;
  v10 = GameData_2130240[0];
  *(_QWORD*)a1 = game_menu_BasicMenu_vtable;
  *(_BYTE*)(a1 + 172) = 0;
  *(_DWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 176) = game_menu_MenuInput_InputUnknown00_ptr_209cb28;
  *(_QWORD*)(a1 + 184) = a1;
  *(_QWORD*)(a1 + 364) = 0;
  *(_QWORD*)(a1 + 372) = 0;
  *(_QWORD*)(a1 + 380) = 0;
  *(_QWORD*)(a1 + 388) = 0;
  *(_QWORD*)(a1 + 396) = 0;
  *(_QWORD*)(a1 + 404) = 0;
  *(_QWORD*)(a1 + 412) = 0;
  *(_QWORD*)(a1 + 420) = 0;
  *(_BYTE*)(a1 + 648) = 1;
  *(_QWORD*)(a1 + 656) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 196) = 0;
  *(_QWORD*)(a1 + 204) = 0;
  *(_QWORD*)(a1 + 212) = 0;
  *(_QWORD*)(a1 + 220) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_BYTE*)(a1 + 280) = 0;
  *(_DWORD*)(a1 + 359) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_DWORD*)(a1 + 428) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_DWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_DWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_DWORD*)(a1 + 568) = 0;
  *(_DWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_DWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_BYTE*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_QWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = v10 + 2;
  *(_DWORD*)(a1 + 696) = 2;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 800) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 432) = a1 + 440;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 872) = a1 + 880;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 984) = 0;
  *(_QWORD*)(a1 + 968) = 0;
  *(_QWORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 952) = 0;
  *(_DWORD*)(a1 + 488) = 1065353216;
  *(_DWORD*)(a1 + 928) = 1065353216;
  *(_DWORD*)(a1 + 1032) = 1065353216;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 976) = a1 + 984;
  *(_QWORD*)(a1 + 1024) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 1008) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_QWORD*)(a1 + 1048) = 0;
  *(_QWORD*)(a1 + 1040) = 0;
  *(_QWORD*)(a1 + 632) = a1;
  *(_QWORD*)(a1 + 640) = -1;
  v37 = 0;
  result = GameRoutine_6e5a40(a1 + 784, 1, &v37);
  v12 = *(_QWORD*)(a1 + 808);
  v13 = *(_QWORD*)(a1 + 816);
  v37 = 0;
  v15 = v13 - v12;
  v14 = v15 == 0;
  v16 = v15 >> 2;
  if (v14) {
    result = GameRoutine_6e5a40(a1 + 808, 1 - v16, &v37);
    if (*a3 == 0) {
      return result;
    }
  LABEL_7:
    v17 = (__int64*)(a1 + 848);
    if (*(_QWORD*)(a1 + 864) == 0 || (v18 = *(_QWORD*)(a1 + 856)) == 0) {
    LABEL_26:
      v26 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 208LL))(a1);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 216LL))(a1) & 1) != 0) {
        v27 = game_ProcFadeView_instance_;
        if (game_ProcFadeView_instance_ == 0) {
        LABEL_36:
          LODWORD(v4) = v27 + v26;
          goto LABEL_37;
        }
        v28 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v28 + 172) == *(float*)(v28 + 168)) {
          v29 = COERCE_AS(__typeof__(v29),
                          (*(__n128(**)(unsigned __int64))(
                              *(_QWORD*)(v28 + 160) + 16LL))(v28 + 160));
        }
        else {
          v29 = *(_OWORD*)(v28 + 208);
        }
        if (*((float*)&v29 + 3) == 1.0f) {
          if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                           (_QWORD*)(*(_QWORD*)(v28 + 160) + 16LL))(
                              v28 + 160, *((float*)&v29 + 3)))
                  .n128_f32[3] == 1.0f) {
            v27 = 1010;
          }
          else {
            v27 = 0;
          }
          goto LABEL_36;
        }
      }
      v27 = 0;
      goto LABEL_36;
    }
    v19 = std___1___shared_weak_count_lock_alt1(v18);
    if (v19 == 0) {
      goto LABEL_17;
    }
    v20 = *v17;
    if (*v17 != 0) {
      v5 = *(unsigned __int8*)(v20 + 24);
      v21 = v20 + 152;
      if (v5 == 0) {
        v21 = 0;
      }
      v22 = v21 != *(_QWORD*)(a1 + 864);
    }
    else {
      v22 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v22) {
      LABEL_17:
        v23 = *(_QWORD*)(a1 + 856);
        if (v23 == 0 || *(_QWORD*)(v23 + 8) == -1) {
          goto LABEL_26;
        }
      LABEL_23:
        v24 = std___1___shared_weak_count_lock_alt1(v23);
        if (v24 != 0) {
          v25 = *v17;
          if (*v17 != 0) {
            LODWORD(v4) = *(_DWORD*)(v25 + 2372);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v33 = v24;
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
            std___1___shared_weak_count___release_weak_alt1(v33);
          }
          if (v25 != 0) {
          LABEL_37:
            v30 = a3[1];
            v36[0] = *a3;
            v36[1] = v30;
            if (v30 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                        memory_order_relaxed);
              ui_LayoutAccessor_Setup_155dda0(a1 + 848, v36);
              if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
                v31 = *a3;
                if (a4 != 0) {
                  goto LABEL_40;
                }
              LABEL_44:
                v32 = a3[1];
                v34[0] = v31;
                v34[1] = v32;
                if (v32 == 0) {
                  ui_LayoutAccessor_Setup_155dda0(a1 + 952, v34);
                  return ui_LayoutAccessor_SetPriority(a1 + 848,
                                                       (unsigned int)v4);
                }
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8),
                                          1u, memory_order_relaxed);
                ui_LayoutAccessor_Setup_155dda0(a1 + 952, v34);
                if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                LABEL_46:
                  (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
                  std___1___shared_weak_count___release_weak_alt1(v32);
                }
                return ui_LayoutAccessor_SetPriority(a1 + 848,
                                                     (unsigned int)v4);
              }
              (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
              std___1___shared_weak_count___release_weak_alt1(v30);
              v31 = *a3;
              if (a4 == 0) {
                goto LABEL_44;
              }
            }
            else {
              ui_LayoutAccessor_Setup_155dda0(a1 + 848, v36);
              v31 = *a3;
              if (a4 == 0) {
                goto LABEL_44;
              }
            }
          LABEL_40:
            v32 = a3[1];
            v35[0] = v31;
            v35[1] = v32;
            if (v32 == 0) {
              ui_LayoutAccessor_Setup_155dea0(a1 + 952, v35, a4);
              return ui_LayoutAccessor_SetPriority(a1 + 848, (unsigned int)v4);
            }
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                      memory_order_relaxed);
            ui_LayoutAccessor_Setup_155dea0(a1 + 952, v35, a4);
            if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              goto LABEL_46;
            }
            return ui_LayoutAccessor_SetPriority(a1 + 848, (unsigned int)v4);
          }
        }
      LABEL_56:
        LODWORD(v4) = 0;
        goto LABEL_37;
      }
    }
    else {
      v4 = v19;
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak_alt1(v4);
      if (v22) {
        goto LABEL_17;
      }
    }
    if ((v5 & 1) == 0) {
      goto LABEL_26;
    }
    v23 = *(_QWORD*)(a1 + 856);
    if (v23 == 0) {
      goto LABEL_56;
    }
    goto LABEL_23;
  }
  if (v16 >= 2) {
    *(_QWORD*)(a1 + 816) = v12 + 4;
  }
  if (*a3 != 0) {
    goto LABEL_7;
  }
  return result;
}

void game_menu_16df380(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  int v2;
  float v4;
  char v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BOOL4 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  int v19;
  int v20;
  float v21;
  __int64 v22;
  int v23;
  bool v24;
  int v25;
  bool v26;
  char v27;
  int v28;
  float v29;
  float v30;
  float v31;
  float v32;
  int v33;

  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *(unsigned __int8*)(a1 + 360);
  if (v2 != ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 984LL))(a1) & 1)) {
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 984LL))(a1),
    v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w"));
    *(_BYTE*)(a1 + 360) = v5 & 1;
    if ((v5 & 1) != 0) {
      v6 = *(__int64**)(a1 + 232);
      v7 = *(__int64**)(a1 + 240);
      while (v6 != v7) {
        v8 = *v6++;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 176LL))(v8),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      (*(void (**)(__int64))(*(_QWORD*)a1 + 696LL))(a1),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w"));
    }
  }
  if (*(_QWORD*)(a1 + 968) != 0) {
    v9 = *(_QWORD*)(a1 + 960);
    if (v9 != 0) {
      v10 = (__int64*)(a1 + 952);
      v11 = std___1___shared_weak_count_lock(v9),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v11 != 0) {
        v12 = *v10;
        if (*v10 != 0) {
          v1 = *(unsigned __int8*)(v12 + 24);
          v13 = v12 + 152;
          if (v1 == 0) {
            v13 = 0;
          }
          v14 = v13 != *(_QWORD*)(a1 + 968);
        }
        else {
          v14 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v14) {
            goto LABEL_16;
          }
        }
        else {
          v16 = v11;
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
              v4 =
                  COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v16),
              v4 =
                  COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w"));
          if (v14) {
            goto LABEL_16;
          }
        }
        if ((v1 & 1) == 0) {
          (void)(GameRoutine_16e79a0(a1 + 408, v4));
          return;
        }
      LABEL_21:
        v17 = *(float*)(a1 + 568);
        v18 = 0x1.0000000000000p+3f;
        if (v17 < 0x1.0000000000000p+3f) {
          v19 = *(_DWORD*)(a1 + 564);
          v20 = *(_DWORD*)(a1 + 560);
          v21 = v17 + *(float*)(as_g_base_frame_counter + 48);
          if (!(v21 > 0x1.0000000000000p+3f)) {
            v18 = v21;
          }
          *(float*)(a1 + 568) = v18;
          *(_DWORD*)(a1 + 556) =
              (int)(float)((float)((float)(v18 * (float)(v19 - v20)) *
                                   0x1.0000000000000p-3f) +
                           (float)v20);
        }
        BasicMenuCursor_16e0520(a1),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w"));
        v22 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 952),
                                         (__int64)"L_Cursor"),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v22 != 0) {
          v23 = *(_DWORD*)(a1 + 404);
          v24 = __OFSUB__(v23, 1);
          v25 = v23 - 1;
          if (v25 < 0 == v24) {
            *(_DWORD*)(a1 + 404) = v25;
            if (v25 == 0) {
              *(_DWORD*)(a1 + 356) |= 4u;
            }
          }
          v26 = (*(_DWORD*)(a1 + 356) & 4) != 0 | *(_QWORD*)(a1 + 336) == 0;
          v27 = *(_BYTE*)(v22 + 88) & 0xFE;
          if (!v26) {
            ++v27;
          }
          *(_BYTE*)(v22 + 88) = v27;
          v28 = *(_DWORD*)(a1 + 400);
          v29 = *(float*)(a1 + 376);
          v30 = *(float*)(a1 + 388);
          v31 = *(float*)(a1 + 380);
          if (v28 >= 1) {
            v28 = 1;
          }
          v32 = *(float*)(a1 + 392) - v31;
          v33 = v28 + 1;
          *(_DWORD*)(a1 + 400) = v33;
          *(_DWORD*)(v22 + 56) = 0;
          *(_BYTE*)(v22 + 88) |= 0x10u;
          v4 = (float)(v29 + (float)((float)((float)(v30 - v29) * (float)v33) *
                                     0x1.0000000000000p-1f)) +
               0x0.0p+0f;
          *(float*)(v22 + 48) = v4;
          *(float*)(v22 + 52) =
              (float)(v31 + (float)((float)(v32 * (float)v33) *
                                    0x1.0000000000000p-1f)) +
              0x0.0p+0f;
        }
        (void)(GameRoutine_16e79a0(a1 + 408, v4));
        return;
      }
    LABEL_16:
      v15 = *(_QWORD*)(a1 + 960);
      if (v15 == 0 || *(_QWORD*)(v15 + 8) == -1) {
        (void)(GameRoutine_16e79a0(a1 + 408, v4));
        return;
      }
      goto LABEL_21;
    }
  }
  (void)(GameRoutine_16e79a0(a1 + 408, v4));
  return;
}

__int64 game_menu_16ec3d0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(fast)

  int v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BOOL4 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int32x4_t* v18;
  float v19;
  __int64* v20;
  __int64 v21;
  int v23;
  __int64 v24;
  __int64 v25;

  v4 = *(_QWORD*)(a2 + 8);
  if (v4 == 0) {
    return 0;
  }
  v5 = a2;
  v6 = std___1___shared_weak_count_lock_alt1(v4);
  if (v6 == 0) {
    return 0;
  }
  v7 = *(__int64**)v5;
  v8 = v6;
  if (*(_QWORD*)v5 == 0) {
    goto LABEL_27;
  }
  v9 = 0;
  if (v7[2] != 0) {
    v10 = v7[1];
    if (v10 != 0) {
      v11 = std___1___shared_weak_count_lock_alt1(v10);
      if (v11 == 0) {
        goto LABEL_16;
      }
      v12 = *v7;
      if (*v7 != 0) {
        v2 = *(unsigned __int8*)(v12 + 24);
        v13 = v12 + 152;
        if (v2 == 0) {
          v13 = 0;
        }
        v14 = v13 != v7[2];
      }
      else {
        v14 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v15 = v11;
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt1(v15);
      }
      if (v14) {
      LABEL_16:
        v16 = v7[1];
        v9 = 0;
        if (v16 == 0 || *(_QWORD*)(v16 + 8) == -1) {
          goto LABEL_23;
        }
      LABEL_20:
        v17 = v7[2];
        if (v17 != 0) {
          v18 = *(int32x4_t**)(v17 + 24);
          if (v18 != nullptr) {
            LODWORD(v9) = LANES128_OF(vdupq_laneq_s32(v18[7], 3)).n128_u32[0];
            HIDWORD(v9) = HIDWORD(LANES128(v18[8]).n128_u64[1]);
          }
        }
        goto LABEL_23;
      }
      v9 = 0;
      if ((v2 & 1) != 0) {
        goto LABEL_20;
      }
    }
  }
LABEL_23:
  v23 = v9;
  v19 = *((float*)&v9 + 1) + -44.0f;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1136, 16, 0);
  v24 = 0;
  v25 = 0;
  game_menu_16dcd30(v5, (__int64)"SubMenu", &v24, 0);
  v20 = GameData_212d6a8;
  v21 = v25;
  *(_QWORD*)v5 = GameData_212d6a8 + 2;
  *(_QWORD*)(v5 + 176) = v20 + 143;
  *(_QWORD*)(v5 + 1056) = v20 + 169;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak_alt1(v21);
  }
  *(_QWORD*)(v5 + 1064) = 0;
  *(_DWORD*)(v5 + 1072) = 0;
  *(float*)(v5 + 1080) = v19;
  *(_QWORD*)v5 = game_menu_SortSubMenu_vtable;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 176) = game_menu_MenuInput_InputUnknown00_ptr_209edb8;
  *(_QWORD*)(v5 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_209ee88;
  *(_DWORD*)(v5 + 1076) = v23;
  ProcInst_657850_alt2(v5, GameData_212c730, "SortSubMenu", 1, a1);
LABEL_27:
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
    if (v7 != nullptr) {
      return v5;
    }
    return 0;
  }
  if (v7 == nullptr) {
    return 0;
  }
  return v5;
}

void game_menu_16ec940(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *a1 = game_menu_SubMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_209e7c8;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_209e898;
  v2 = a1 + 136;
  v3 = (_QWORD*)a1[140];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                (__int64)a1);
}

__int64 game_menu_16f75a0(__int64 a1, char** a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    char* v10[4];
    char** v11;
  } v10_;

  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1584, 16, 0);
  v10_.v10[0] = *a2;
  GameRoutine_1647b80(v4, v10_.v10);
  *(_WORD*)(v4 + 1496) = 0;
  *(_QWORD*)(v4 + 1520) = 0;
  *(_QWORD*)(v4 + 1528) = 0;
  *(_QWORD*)(v4 + 1536) = 0;
  *(_QWORD*)v4 = game_menu_LegionDialog_vtable;
  *(_QWORD*)(v4 + 1544) = 0;
  *(_QWORD*)(v4 + 1552) = 0;
  *(_QWORD*)(v4 + 1560) = 0;
  *(_BYTE*)(v4 + 1568) = 0;
  *(_QWORD*)(v4 + 1576) = 0;
  *(_QWORD*)(v4 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20a19f0;
  *(_DWORD*)(v4 + 1572) = -1;
  ProcInst_657850_alt1(v4, (__int64)GameData_212c730, (__int64)"T", 1, a1);
  v10_.v11 = v10_.v10;
  v8_.v8[0] = GameData_20a1ad8;
  v8_.v9 = v8_.v8;
  v10_.v10[0] = (const char*)GameData_20a1ad8;
  GameRoutine_654050(v10_.v10, (_QWORD*)(v4 + 1200));
  if (v10_.v11 == v10_.v10) {
    v5 = 32;
    goto LABEL_7;
  }
  if (v10_.v11 != nullptr) {
    v5 = 40;
  LABEL_7:
    (*(void (**)(__int64)) & (*v10_.v11)[v5])((__int64)v10_.v11);
  }
  if (v8_.v9 == v8_.v8) {
    v6 = 32;
    goto LABEL_12;
  }
  if (v8_.v9 != nullptr) {
    v6 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v8_.v9 + v6))((__int64)v8_.v9);
  }
  return v4;
}

void game_menu_173d400()
{
  __int64 v0;
  __int64 v1;
  char* v2;
  unsigned __int64 v3;
  int v4;
  char* v5;
  struct {
    __int64 v6[7];
    char gap72_[3];
    char v7;
  } v6_;

  v0 = GameData_21eea48;
  if ((__int64*)GameData_21eea48 == &GameData_21eea40) {
  LABEL_7:
    v2 = game_util_Format("%s_%s_%d", "Part", "Ism", 3);
    v5 = game_util_Format("%s/%s", "000", v2);
    v3 = GameRoutine_1a09c70(v5);
    GameRoutine_878ea0((void*)((__int64)v6_.v6), (const char**)&v5);
    if (LOBYTE(v6_.v6[0]) != 0 && (v6_.v7 & 0x40) == 0) {
      v4 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v4 = *(_DWORD*)(game_GameModeData_instance_ + 8);
      }
      if (DWORDn(v6_.v6[0], sizeof(v6_.v6[0]) / 4 - 1) == v4) {
        GameRoutine_877330(6);
        if (GameData_21c9600 != 0) {
          *(_DWORD*)(GameData_21c9600 + 152) = 34;
        }
      }
    }
  }
  else {
    while (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v0 + 16) + 88LL))(
                *(_QWORD*)(v0 + 16)) &
            1) != 0) {
      v0 = *(_QWORD*)(v0 + 8);
      if ((__int64*)v0 == &GameData_21eea40) {
        v1 = GameData_21eea48;
        if ((__int64*)GameData_21eea48 == &GameData_21eea40) {
          goto LABEL_7;
        }
        while (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 16) + 96LL))(
                    *(_QWORD*)(v1 + 16)) &
                1) != 0) {
          v1 = *(_QWORD*)(v1 + 8);
          if ((__int64*)v1 == &GameData_21eea40) {
            goto LABEL_7;
          }
        }
        break;
      }
    }
  }
  GameRoutine_dbce10(*(_QWORD*)GameData_212c6a0[0], 1);
}

__int64 game_menu_178bfa0(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;

  v3 = *a3;
  v4 = a3[1];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v18_.v19 = v4;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v18_.v19 = 0;
  }
  v18_.v18 = v3;
  game_menu_16dcd30(a1, (__int64)"TroopListMenu", &v18_.v18, 0);
  v7 = v18_.v19;
  if (v18_.v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18_.v19 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  *(_QWORD*)(a1 + 1056) = a2;
  *(_DWORD*)(a1 + 1064) = 0;
  *(_QWORD*)a1 = &game_menu_MultiMenu_vtable;
  *(_QWORD*)(a1 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20c54c8;
  if (v4 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    *(_DWORD*)(a1 + 1068) = 0;
    *(_QWORD*)a1 = &game_menu_UnitTroopMenu_vtable;
    *(_QWORD*)(a1 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20c7738;
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    *(_DWORD*)(a1 + 1068) = 0;
  }
  *(_QWORD*)(a1 + 1072) = 0;
  *(_QWORD*)a1 = game_menu_UnitTroopListMenu_vtable;
  *(_QWORD*)(a1 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20c6848;
  UnitUtil_15df460(a1 + 1088);
  v9 = *(_QWORD**)(a1 + 256);
  v8 = *(_QWORD**)(a1 + 264);
  *(_QWORD*)(a1 + 336) = 0;
  while (v9 != v8) {
    if (*v9 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v9 + 8LL))(*v9);
      v8 = *(_QWORD**)(a1 + 264);
    }
    ++v9;
  }
  v10 = *(_QWORD*)(a1 + 344);
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    *(_QWORD*)(a1 + 344) = 0;
  }
  *(_QWORD*)(a1 + 264) = *(_QWORD*)(a1 + 256);
  *(_QWORD*)(a1 + 240) = *(_QWORD*)(a1 + 232);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1024LL))(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1032LL))(a1);
  v16_.v16[2] = 0;
  v16_.v16[3] = a1;
  v14_.v14[2] = 0;
  v14_.v14[3] = a1;
  v16_.v16[0] = GameData_20c9130;
  v16_.v16[1] = GameRoutine_178c220;
  v14_.v15 = v14_.v14;
  v16_.v17 = v16_.v16;
  v14_.v14[0] = GameData_20c9130;
  v14_.v14[1] = GameRoutine_178c340;
  UnitUtil_15df590(a1 + 1088, (__int64)v16_.v16, (__int64)v14_.v14);
  if (v14_.v15 == v14_.v14) {
    v11 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_25;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v11))((__int64)v14_.v15);
LABEL_25:
  result = (__int64)v16_.v17;
  if (v16_.v17 == v16_.v16) {
    v13 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (*(__int64 (**)(__int64))(*v16_.v17 + v13))((__int64)v16_.v17);
}

void game_menu_178ef80(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[64];
  *a1 = game_menu_CmdBtlInfoUnitTroopSequence_vtable;
  a1[22] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20c7c40;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[65] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[59];
  *a1 = game_menu_UnitTroopSequence_vtable;
  a1[22] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20c6220;
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = (_QWORD*)a1[56];
  if (v7 == a1 + 52) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_12:
  v9 = a1[48];
  if (v9 != 0) {
    v10 = *v3;
    a1[49] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  GameRoutine_17869d0((__int64)a1);
}

void game_menu_178f070(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = a1[64];
  *a1 = game_menu_CmdBtlInfoUnitTroopSequence_vtable;
  a1[22] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20c7c40;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[65] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[59];
  *a1 = game_menu_UnitTroopSequence_vtable;
  a1[22] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20c6220;
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = (_QWORD*)a1[56];
  if (v7 == a1 + 52) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_12:
  v9 = a1[48];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[49] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  GameRoutine_17869d0((__int64)a1);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, (__int64)a1);
}

void game_menu_178f180(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v3;
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v1 = a1 + 136;
  *a1 = game_menu_UnitTroopListMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20c6848;
  v3 = (_QWORD*)game_menu_UnitGridSelectMenu_listeners_;
  if (game_menu_UnitGridSelectMenu_listeners_ != GameData_2259500) {
    v4 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_ - 8;
    if ((~(_BYTE)v4 & 0x18) != 0) {
      v5 = ((unsigned __int8)((unsigned int)v4 >> 3) + 1) & 3;
      while ((_QWORD*)*v3 != v1) {
        ++v3;
        if (--v5 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v4 < 0x18) {
        goto LABEL_21;
      }
      v3 += 2;
      while (1) {
        if ((_QWORD*)*(v3 - 2) == v1) {
          v3 -= 2;
          goto LABEL_17;
        }
        if ((_QWORD*)*(v3 - 1) == v1) {
          --v3;
          goto LABEL_17;
        }
        if ((_QWORD*)*v3 == v1) {
          goto LABEL_17;
        }
        if ((_QWORD*)v3[1] == v1) {
          break;
        }
        v6 = v3 + 2;
        v3 += 4;
        if (v6 == (_QWORD*)GameData_2259500) {
          goto LABEL_21;
        }
      }
      ++v3;
    }
  }
LABEL_17:
  if (v3 != (_QWORD*)GameData_2259500) {
    v7 = GameData_2259500 - (_QWORD)(v3 + 1);
    if ((_QWORD*)GameData_2259500 != v3 + 1) {
      GameRoutine_1a0b940((__int64)v3, (__int64)(v3 + 1),
                          GameData_2259500 - (_QWORD)(v3 + 1));
    }
    GameData_2259500 = (__int64)v3 + v7;
  }
LABEL_21:
  v8 = (_QWORD*)a1[146];
  if (v8 == a1 + 142) {
    v9 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_26;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
LABEL_26:
  v10 = (_QWORD*)a1[140];
  if (v10 == v1) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_31;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
LABEL_31:
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                (__int64)a1);
}

void game_menu_178f340(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v3;
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v1 = a1 + 136;
  *a1 = game_menu_UnitTroopListMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20c6848;
  v3 = (_QWORD*)game_menu_UnitGridSelectMenu_listeners_;
  if (game_menu_UnitGridSelectMenu_listeners_ != GameData_2259500) {
    v4 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_ - 8;
    if ((~(_BYTE)v4 & 0x18) != 0) {
      v5 = ((unsigned __int8)((unsigned int)v4 >> 3) + 1) & 3;
      while ((_QWORD*)*v3 != v1) {
        ++v3;
        if (--v5 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v4 < 0x18) {
        goto LABEL_21;
      }
      v3 += 2;
      while (1) {
        if ((_QWORD*)*(v3 - 2) == v1) {
          v3 -= 2;
          goto LABEL_17;
        }
        if ((_QWORD*)*(v3 - 1) == v1) {
          --v3;
          goto LABEL_17;
        }
        if ((_QWORD*)*v3 == v1) {
          goto LABEL_17;
        }
        if ((_QWORD*)v3[1] == v1) {
          break;
        }
        v6 = v3 + 2;
        v3 += 4;
        if (v6 == (_QWORD*)GameData_2259500) {
          goto LABEL_21;
        }
      }
      ++v3;
    }
  }
LABEL_17:
  if (v3 != (_QWORD*)GameData_2259500) {
    v7 = GameData_2259500 - (_QWORD)(v3 + 1);
    if ((_QWORD*)GameData_2259500 != v3 + 1) {
      GameRoutine_1a0b940((__int64)v3, (__int64)(v3 + 1),
                          GameData_2259500 - (_QWORD)(v3 + 1));
    }
    GameData_2259500 = (__int64)v3 + v7;
  }
LABEL_21:
  v8 = (_QWORD*)a1[146];
  if (v8 == a1 + 142) {
    v9 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_26;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
LABEL_26:
  v10 = (_QWORD*)a1[140];
  if (v10 == v1) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_31;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
LABEL_31:
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                (__int64)a1);
}

void game_menu_178f500(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;

  v1 = a1[149];
  *a1 = game_menu_CmdBtlInfoUnitTroopMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20c7140;
  if (v1 != 0) {
    a1[150] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  v4 = a1 + 136;
  *a1 = game_menu_UnitTroopListMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20c6848;
  v5 = (_QWORD*)game_menu_UnitGridSelectMenu_listeners_;
  if (game_menu_UnitGridSelectMenu_listeners_ != GameData_2259500) {
    v6 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_ - 8;
    if ((~(_BYTE)v6 & 0x18) != 0) {
      v7 = ((unsigned __int8)((unsigned int)v6 >> 3) + 1) & 3;
      while ((_QWORD*)*v5 != v4) {
        ++v5;
        if (--v7 == 0) {
          goto LABEL_10;
        }
      }
    }
    else {
    LABEL_10:
      if (v6 < 0x18) {
        goto LABEL_25;
      }
      v5 += 2;
      while (1) {
        if ((_QWORD*)*(v5 - 2) == v4) {
          v5 -= 2;
          goto LABEL_21;
        }
        if ((_QWORD*)*(v5 - 1) == v4) {
          --v5;
          goto LABEL_21;
        }
        if ((_QWORD*)*v5 == v4) {
          goto LABEL_21;
        }
        if ((_QWORD*)v5[1] == v4) {
          break;
        }
        v8 = v5 + 2;
        v5 += 4;
        if (v8 == (_QWORD*)GameData_2259500) {
          goto LABEL_25;
        }
      }
      ++v5;
    }
  }
LABEL_21:
  if (v5 != (_QWORD*)GameData_2259500) {
    v9 = GameData_2259500 - (_QWORD)(v5 + 1);
    if ((_QWORD*)GameData_2259500 != v5 + 1) {
      GameRoutine_1a0b940((__int64)v5, (__int64)(v5 + 1),
                          GameData_2259500 - (_QWORD)(v5 + 1));
    }
    GameData_2259500 = (__int64)v5 + v9;
  }
LABEL_25:
  v10 = (_QWORD*)a1[146];
  if (v10 == a1 + 142) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_30;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
LABEL_30:
  v12 = (_QWORD*)a1[140];
  if (v12 == v4) {
    v13 = 32;
    goto LABEL_34;
  }
  if (v12 != nullptr) {
    v13 = 40;
  LABEL_34:
    (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
}

void game_menu_178f6e0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;

  v1 = a1[149];
  *a1 = game_menu_CmdBtlInfoUnitTroopMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20c7140;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[150] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1 + 136;
  *a1 = game_menu_UnitTroopListMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20c6848;
  v7 = (_QWORD*)game_menu_UnitGridSelectMenu_listeners_;
  if (game_menu_UnitGridSelectMenu_listeners_ != GameData_2259500) {
    v8 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_ - 8;
    if ((~(_BYTE)v8 & 0x18) != 0) {
      v9 = ((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 3;
      while ((_QWORD*)*v7 != v6) {
        ++v7;
        if (--v9 == 0) {
          goto LABEL_10;
        }
      }
    }
    else {
    LABEL_10:
      if (v8 < 0x18) {
        goto LABEL_25;
      }
      v7 += 2;
      while (1) {
        if ((_QWORD*)*(v7 - 2) == v6) {
          v7 -= 2;
          goto LABEL_21;
        }
        if ((_QWORD*)*(v7 - 1) == v6) {
          --v7;
          goto LABEL_21;
        }
        if ((_QWORD*)*v7 == v6) {
          goto LABEL_21;
        }
        if ((_QWORD*)v7[1] == v6) {
          break;
        }
        v10 = v7 + 2;
        v7 += 4;
        if (v10 == (_QWORD*)GameData_2259500) {
          goto LABEL_25;
        }
      }
      ++v7;
    }
  }
LABEL_21:
  if (v7 != (_QWORD*)GameData_2259500) {
    v11 = GameData_2259500 - (_QWORD)(v7 + 1);
    if ((_QWORD*)GameData_2259500 != v7 + 1) {
      GameRoutine_1a0b940((__int64)v7, (__int64)(v7 + 1),
                          GameData_2259500 - (_QWORD)(v7 + 1));
    }
    GameData_2259500 = (__int64)v7 + v11;
  }
LABEL_25:
  v12 = (_QWORD*)a1[146];
  if (v12 == a1 + 142) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_30;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
LABEL_30:
  v14 = (_QWORD*)a1[140];
  if (v14 == v6) {
    v15 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_35;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v14 + v15))((__int64)v14);
LABEL_35:
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v16 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v16 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, (__int64)a1);
}

__int64 game_menu_179b0a0(__int64 result)
{
#pragma clang fp contract(off)
  unsigned int v1;
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  _BOOL4 v13;
  __int128 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  int v28;
  __int128 v29;
  __int64 v30;
  __int64 v31;
  _QWORD v32[25];

  v1 = *(_DWORD*)(*GameData_2131a88[0] + 152);
  if (v1 <= 7 && ((1 << v1) & 0xA1) != 0) {
    return result;
  }
  v3 = result;
  v4 = *(_QWORD*)game_g_game_setting_ptr;
  v5 = *(float*)(*(_QWORD*)game_g_game_setting_ptr + 968LL);
  if (v5 <= 0.25f) {
    v7 = 0.0f;
    if (v5 >= -0.25f) {
      goto LABEL_11;
    }
    v6 = 0.25f;
  }
  else {
    v6 = -0.25f;
  }
  v7 = (float)(v5 + v6) * 0x1.5555560000000p+0f;
LABEL_11:
  v8 = fabsf(v7);
  if (*(_BYTE*)(result + 216) == 1) {
    if (v8 <= 0x1.47ae140000000p-7f ||
        (v9 = -0.25f, v5 <= 0.25f) && (v9 = 0.25f, v5 >= -0.25f)) {
      v12 = *(float*)(result + 220);
    }
    else {
      v10 = (float)(v5 + v9) * 0x1.5555560000000p+0f;
      if (v10 > 0.0f) {
        v11 = *(float*)(result + 220);
        if (v11 > 0.0f) {
          v11 = 0.0f;
        }
        v12 = v11 + (float)(v10 * -0x1.3333340000000p-1f);
        if (v12 <= -8.0f) {
          v12 = -8.0f;
        }
      LABEL_31:
        v16 = *(float*)(result + 212);
        *(float*)(result + 220) = v12;
        v17 = v16 + v12;
        *(float*)(result + 212) = v17;
        if (v17 >= 0.0f) {
          goto LABEL_45;
        }
        v18 = 0x1.6800000000000p+8f;
        goto LABEL_44;
      }
      v12 = *(float*)(result + 220);
      if (v10 < 0.0f) {
        if (v12 < 0.0f) {
          v12 = 0.0f;
        }
        v12 = v12 + (float)(v10 * -0x1.3333340000000p-1f);
        if (v12 >= 8.0f) {
          v12 = 8.0f;
        }
        goto LABEL_42;
      }
    }
    if (v12 < 0.0f) {
      v12 = v12 + (float)((float)(1.0f - v12) / 6.0f);
      if (v12 >= 0.0f) {
        v12 = 0.0f;
      }
      goto LABEL_31;
    }
    if (v12 > 0.0f) {
      v12 = v12 + (float)((float)(-1.0f - v12) / 6.0f);
      if (v12 <= 0.0f) {
        v12 = 0.0f;
      }
    LABEL_42:
      v19 = *(float*)(result + 212);
      *(float*)(result + 220) = v12;
      v17 = v12 + v19;
      *(float*)(result + 212) = v17;
      if (v17 < 0x1.6800000000000p+8f) {
        goto LABEL_45;
      }
      v18 = -0x1.6800000000000p+8f;
    LABEL_44:
      *(float*)(result + 212) = v17 + v18;
    }
  LABEL_45:
    v13 = v12 > 0.0f || v12 < 0.0f;
    if (v1 != 4 || GameData_2264528 != 0) {
      goto LABEL_78;
    }
    v13 = false;
    if (v12 == 0.0f) {
    LABEL_70:
      v28 = *(_DWORD*)(v4 + 952);
      if ((v28 & 0x1000000) == 0) {
      LABEL_71:
        if ((v28 & 0x800000) != 0 && (*(_BYTE*)(result + 208) & 1) == 0) {
          result = UnitMakeCamera_179bb70(result);
        }
        goto LABEL_77;
      }
    LABEL_75:
      if (*(_BYTE*)(result + 208) == 1) {
        result = UnitMakeCamera_179ba60(result);
      }
    LABEL_77:
      if (GameData_2264528 != 0) {
        return result;
      }
    LABEL_78:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire_alt2(&GameData_21a6130) != 0) {
        v30 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v30;
        __cxa_guard_release_alt2(&GameData_21a6130);
      }
      v29 = GameData_21a6120;
      DWORD1(v29) = *(_DWORD*)(v3 + 212);
      *(_OWORD*)(*(_QWORD*)(v3 + 152) + 64LL) = v29;
      if (v13) {
        UnitMakeCamera_179b570(v3);
        if (v8 > 0x1.47ae140000000p-7f) {
          result = snd_fnd_WeakHandle_isValid(v3 + 224);
          if ((result & 1) == 0) {
            game_80c770((void*)(v32), "SE_SYS_CharaMove_CharaMake_lp");
            return GameRoutine_112180(v3 + 224, v32);
          }
          return result;
        }
      }
      goto LABEL_83;
    }
    v21 = *(float*)(v4 + 968);
    v22 = -0.25f;
    if (v21 > 0.25f || (v22 = 0.25f, v21 < -0.25f)) {
      if ((float)((float)(v21 + v22) * 0x1.5555560000000p+0f) != 0.0f) {
        v13 = true;
        v28 = *(_DWORD*)(v4 + 952);
        if ((v28 & 0x1000000) == 0) {
          goto LABEL_71;
        }
        goto LABEL_75;
      }
    }
    if (v12 >= 0.0f) {
      v23 = v12 + (float)((float)(-1.0f - v12) / 6.0f);
      if (v23 <= 0.0f) {
        v23 = 0.0f;
      }
      v27 = *(float*)(result + 212);
      *(float*)(result + 220) = v23;
      v25 = v23 + v27;
      *(float*)(result + 212) = v25;
      if (v25 < 0x1.6800000000000p+8f) {
        goto LABEL_67;
      }
      v26 = -0x1.6800000000000p+8f;
    }
    else {
      v23 = v12 + (float)((float)(1.0f - v12) / 6.0f);
      if (v23 >= 0.0f) {
        v23 = 0.0f;
      }
      v24 = *(float*)(result + 212);
      *(float*)(result + 220) = v23;
      v25 = v23 + v24;
      *(float*)(result + 212) = v25;
      if (v25 >= 0.0f) {
        goto LABEL_67;
      }
      v26 = 0x1.6800000000000p+8f;
    }
    *(float*)(result + 212) = v25 + v26;
  LABEL_67:
    v13 = v23 > 0.0f || v23 < 0.0f;
    goto LABEL_70;
  }
  v13 = false;
  *(_DWORD*)(result + 220) = 0;
  if (v1 == 4 && GameData_2264528 == 0) {
    goto LABEL_78;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_alt2(&GameData_21a6130) != 0) {
    v31 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v31;
    __cxa_guard_release_alt2(&GameData_21a6130);
  }
  v15 = GameData_21a6120;
  DWORD1(v15) = *(_DWORD*)(v3 + 212);
  *(_OWORD*)(*(_QWORD*)(v3 + 152) + 64LL) = v15;
LABEL_83:
  result = snd_fnd_WeakHandle_isValid(v3 + 224);
  if ((result & 1) != 0) {
    snd_Fade_Fade_10c830(v32, 0.0f);
    snd_stop_ffc40(v3 + 224, v32);
    return snd_Fade_Destroy_Fade(v32);
  }
  return result;
}

void game_menu_17b56f0(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[64];
  *a1 = game_menu_CmdBtlInventoryUnitTroopSequence_vtable;
  a1[22] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20d6d98;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[65] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[59];
  *a1 = game_menu_UnitTroopSequence_vtable;
  a1[22] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20c6220;
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = (_QWORD*)a1[56];
  if (v7 == a1 + 52) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_12:
  v9 = a1[48];
  if (v9 != 0) {
    v10 = *v3;
    a1[49] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  GameRoutine_17869d0((__int64)a1);
}

void game_menu_17b57e0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = a1[64];
  *a1 = game_menu_CmdBtlInventoryUnitTroopSequence_vtable;
  a1[22] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20d6d98;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[65] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[59];
  *a1 = game_menu_UnitTroopSequence_vtable;
  a1[22] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20c6220;
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = (_QWORD*)a1[56];
  if (v7 == a1 + 52) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_12:
  v9 = a1[48];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[49] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  GameRoutine_17869d0((__int64)a1);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, (__int64)a1);
}

__int64 game_menu_17e5d20(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  char* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  char* v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned int v18;
  __int64 v19;
  char* v20;
  char* v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  _BYTE* v50;
  __int64 v51;
  __int64 v52;
  _BYTE* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _BYTE* v57;
  __int64** v58;
  __int64* v59;
  __int64* v60;
  int v61;
  __int64* v62;
  __int64 v63;
  char* v64;
  __int64 v65;
  char* v66;
  char v67;
  char* v69[2];
  struct {
    __int64 v70;
    unsigned __int64 v71;
    char* v72;
    unsigned __int64 v73;
    int v74;
    int v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    int v88;
    int v89;
  } v70_;

  v2 = **(_QWORD**)(*(_QWORD*)(a1 + 256) + 40LL);
  if (a2 >=
      (unsigned __int64)((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 256) + 40LL) +
                                     8LL) -
                          v2) >>
                         3)) {
    GameRoutine_17e6d90();
  }
  v3 = *(_QWORD*)(v2 + 8LL * a2);
  v5 = *(const char**)(v3 + 72);
  if (v5 != nullptr) {
    v6 = *(const char**)(a1 + 296);
    if (v6 == nullptr || strcmp(v6, v5) != 0) {
      v7 = *(_QWORD*)(a1 + 272);
      if (v7 != 0) {
        v8 = std___1___shared_weak_count_lock(v7);
        if (v8 != 0) {
          v9 = *(_QWORD*)(a1 + 264);
          v10 = v8;
          if (v9 == 0) {
          LABEL_70:
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
              std___1___shared_weak_count___release_weak(v10);
            }
            goto LABEL_72;
          }
          *(_QWORD*)(a1 + 296) = *(_QWORD*)(v3 + 72);
          v11 = GameData_21759e0;
          v12 = *(const char**)(v3 + 72);
          v13 = Manager_a4aea0(GameData_21759e0);
          v14 =
              game_util_Format("Layout/Textures/Tutorial/%s/%s.bntx", v13, v12);
          v15 = snd_g_fileIndex_ptr[0];
          v16 = *snd_g_fileIndex_ptr[0];
          v17 = strlen(v14);
          if ((fs_6360e0(v16, (__int64)v14, v17, 0, 0) & 1) != 0) {
            goto LABEL_52;
          }
          v18 = BYTE3(v11);
          if ((unsigned __int8)v11 == 102) {
            if (BYTE5(v11) == 0 && BYTE4(v11) == 65 && v18 == 67 &&
                BYTE1(v11) == 114 && BYTE2(v11) == 45) {
              v19 = 29286;
              goto LABEL_31;
            }
          }
          else if ((unsigned __int8)v11 == 101) {
            if (BYTE1(v11) == 115) {
              if ((v11 & 0xFF000000000000LL) == 0 && BYTE5(v11) == 57 &&
                  BYTE4(v11) == 49 && BYTE2(v11) == 45 && v18 == 52) {
                v19 = 29541;
                goto LABEL_31;
              }
            }
            else if (BYTE1(v11) == 110 && BYTE5(v11) == 0 && BYTE4(v11) == 66 &&
                     BYTE2(v11) == 45 && v18 == 71) {
              v19 = 0x53552D6E65LL;
            LABEL_31:
              if ((unsigned __int8)v11 != (unsigned __int8)v19 ||
                  (_BYTE)v11 != 0 &&
                      (BYTE1(v11) != BYTE1(v19) ||
                       BYTE1(v11) != 0 &&
                           (BYTE2(v11) != BYTE2(v19) ||
                            BYTE2(v11) != 0 &&
                                (v18 != BYTE3(v19) ||
                                 v18 != 0 &&
                                     (BYTE4(v11) != BYTE4(v19) ||
                                      BYTE4(v11) != 0 &&
                                          (BYTE5(v11) != BYTE5(v19) ||
                                           BYTE5(v11) != 0 &&
                                               (BYTE6(v11) != BYTE6(v19) ||
                                                BYTE6(v11) != 0 &&
                                                    (v19 ^
                                                     (unsigned __int64)v11) >>
                                                            56 !=
                                                        0))))))) {
                v20 = Manager_a4aea0(v19);
                v21 = game_util_Format("Layout/Textures/Tutorial/%s/%s.bntx",
                                       v20, v12);
                v22 = *v15;
                v23 = v21;
                v24 = strlen(v21);
                if ((fs_6360e0(v22, (__int64)v23, v24, 0, 0) & 1) != 0) {
                  v25 = strlen(v23);
                  if (v25 < 0xFFFFFFFFFFFFFFF7LL) {
                    v26 = v25;
                    if (v25 >= 0x17) {
                      if ((v25 | 7) == 0x17) {
                        v54 = 26;
                      }
                      else {
                        v54 = (v25 | 7) + 1;
                      }
                      v27 = (const char*)fw_memory_HeapManager_Allocate(
                          fw_memory_g_heap_manager, v54, 16, 0);
                      v70_.v71 = v26;
                      v70_.v72 = v27;
                      v70_.v70 = v54 | 1;
                    }
                    else {
                      LOBYTE(v70_.v70) = 2 * v25;
                      v27 = (char*)&v70_.v70 + 1;
                      if (v25 == 0) {
                        goto LABEL_140;
                      }
                    }
                    memmove((__int64)v27, (__int64)v23, v26);
                  LABEL_140:
                    v27[v26] = 0;
                  LABEL_62:
                    if ((v70_.v70 & 1) != 0) {
                      v33 = v70_.v72;
                    }
                    else {
                      v33 = (char*)&v70_.v70 + 1;
                    }
                    AsyncLoadImage_17e4db0(v9, v33, 1);
                    if ((v70_.v70 & 1) != 0 && v70_.v72 != nullptr) {
                      v34 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v34 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34,
                          (__int64)v70_.v72);
                    }
                    goto LABEL_70;
                  }
                LABEL_172:
                  String_60a1d0();
                }
              }
              v28 = Manager_a4aea0(24938);
              v14 = game_util_Format("Layout/Textures/Tutorial/%s/%s.bntx", v28,
                                     v12);
            LABEL_52:
              v29 = strlen(v14);
              if (v29 >= 0xFFFFFFFFFFFFFFF7LL) {
                goto LABEL_172;
              }
              v30 = v29;
              if (v29 >= 0x17) {
                if ((v29 | 7) == 0x17) {
                  v32 = 26;
                }
                else {
                  v32 = (v29 | 7) + 1;
                }
                v31 = (const char*)fw_memory_HeapManager_Allocate(
                    fw_memory_g_heap_manager, v32, 16, 0);
                v70_.v71 = v30;
                v70_.v72 = v31;
                v70_.v70 = v32 | 1;
              }
              else {
                LOBYTE(v70_.v70) = 2 * v29;
                v31 = (char*)&v70_.v70 + 1;
                if (v29 == 0) {
                  goto LABEL_61;
                }
              }
              memmove((__int64)v31, (__int64)v14, v30);
            LABEL_61:
              v31[v30] = 0;
              goto LABEL_62;
            }
          }
          v19 = v11;
          goto LABEL_31;
        }
      }
    }
  }
LABEL_72:
  v35 = *(_QWORD*)(v3 + 40);
  if (v35 != 0) {
    v36 = *(const char**)(a1 + 280);
    if (v36 == nullptr || strcmp(v36, *(const char**)(v3 + 40)) != 0) {
      *(_QWORD*)(a1 + 280) = v35;
      LayoutAccessor_1562060((char*)(a1 + 24), (__int64)"T_Title",
                             *(const char**)(v3 + 40));
    }
  }
  v37 = *(_QWORD*)(v3 + 48);
  if (v37 != 0) {
    v38 = *(const char**)(a1 + 288);
    if (v38 == nullptr || strcmp(v38, *(const char**)(v3 + 48)) != 0) {
      *(_QWORD*)(a1 + 288) = v37;
      v69[0] = "L_Body";
      v69[1] = (_BYTE*)((_UNKNOWN*)0x6LL);
      GameRoutine_9b8fe0((void*)(&v70_.v70), (__int64*)(a1 + 24), v69);
      if (v70_.v71 != 0) {
        v39 = std___1___shared_weak_count_lock(v70_.v71);
        v40 = v70_.v70;
        if (v70_.v71 != 0) {
          std___1___shared_weak_count___release_weak(v70_.v71);
        }
        if (v39 == 0 || v40 == 0) {
          goto LABEL_159;
        }
        TextBoxEx_188ac20(v40, *(const char**)(v3 + 48),
                          (unsigned __int16*)(v3 + 56));
        TextBoxEx_188aa00((void*)(&v70_.v70), v40, 0);
        if (v70_.v71 != 0) {
          v41 = std___1___shared_weak_count_lock(v70_.v71);
          v42 = v70_.v70;
          if (v70_.v71 != 0) {
            std___1___shared_weak_count___release_weak(v70_.v71);
          }
          if (v41 != 0 && v42 != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v42 + 40LL))(v42, 0);
          }
          else if (v41 == 0) {
            goto LABEL_93;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
            std___1___shared_weak_count___release_weak(v41);
          }
        }
      LABEL_93:
        TextBoxEx_188aa00((void*)(&v70_.v70), v40, 1);
        if (v70_.v71 != 0) {
          v43 = std___1___shared_weak_count_lock(v70_.v71);
          v44 = v70_.v70;
          if (v70_.v71 != 0) {
            std___1___shared_weak_count___release_weak(v70_.v71);
          }
          if (v43 != 0 && v44 != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v44 + 40LL))(v44, 0);
          }
          else if (v43 == 0) {
            goto LABEL_102;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
            std___1___shared_weak_count___release_weak(v43);
          }
        }
      LABEL_102:
        TextBoxEx_188aa00((void*)(&v70_.v70), v40, 2);
        if (v70_.v71 != 0) {
          v45 = std___1___shared_weak_count_lock(v70_.v71);
          v46 = v70_.v70;
          if (v70_.v71 != 0) {
            std___1___shared_weak_count___release_weak(v70_.v71);
          }
          if (v45 != 0 && v46 != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v46 + 40LL))(v46, 0);
          }
          else if (v45 == 0) {
            goto LABEL_111;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
            std___1___shared_weak_count___release_weak(v45);
          }
        }
      LABEL_111:
        if (*(_WORD*)(v3 + 80) == 0) {
        LABEL_160:
          if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
            std___1___shared_weak_count___release_weak(v39);
          }
          goto LABEL_162;
        }
        v47 = *(unsigned __int16*)(v3 + 80) - 1;
        TextBoxEx_188aa00((void*)(&v70_.v70), v40, 0);
        if (v70_.v71 != 0) {
          v48 = std___1___shared_weak_count_lock(v70_.v71);
          v49 = v70_.v70;
          if (v70_.v71 != 0) {
            std___1___shared_weak_count___release_weak(v70_.v71);
          }
          if (v48 != 0 && v49 != 0) {
            if (*(_WORD*)(v3 + 80) != 0) {
              v50 = **(_BYTE***)(v3 + 88);
            }
            else {
              v50 = nullptr;
            }
            EmbeddedImage_1889eb0(v49, v50);
            (*(void (**)(__int64, __int64))(*(_QWORD*)v49 + 40LL))(v49, 1);
          }
          else if (v48 == 0) {
            goto LABEL_125;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
            std___1___shared_weak_count___release_weak(v48);
          }
        }
      LABEL_125:
        if (v47 == 0) {
          goto LABEL_159;
        }
        TextBoxEx_188aa00((void*)(&v70_.v70), v40, 1);
        if (v70_.v71 != 0) {
          v51 = std___1___shared_weak_count_lock(v70_.v71);
          v52 = v70_.v70;
          if (v70_.v71 != 0) {
            std___1___shared_weak_count___release_weak(v70_.v71);
          }
          if (v51 != 0 && v52 != 0) {
            if (*(unsigned __int16*)(v3 + 80) < 2u) {
              v53 = nullptr;
            }
            else {
              v53 = *(_BYTE**)(*(_QWORD*)(v3 + 88) + 8LL);
            }
            EmbeddedImage_1889eb0(v52, v53);
            (*(void (**)(__int64, __int64))(*(_QWORD*)v52 + 40LL))(v52, 1);
          }
          else if (v51 == 0) {
            goto LABEL_145;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
            std___1___shared_weak_count___release_weak(v51);
          }
        }
      LABEL_145:
        if (v47 != 1) {
          TextBoxEx_188aa00((void*)(&v70_.v70), v40, 2);
          if (v70_.v71 != 0) {
            v55 = std___1___shared_weak_count_lock(v70_.v71);
            v56 = v70_.v70;
            if (v70_.v71 != 0) {
              std___1___shared_weak_count___release_weak(v70_.v71);
            }
            if (v55 != 0 && v56 != 0) {
              if (*(unsigned __int16*)(v3 + 80) < 3u) {
                v57 = nullptr;
              }
              else {
                v57 = *(_BYTE**)(*(_QWORD*)(v3 + 88) + 16LL);
              }
              EmbeddedImage_1889eb0(v56, v57);
              (*(void (**)(__int64, __int64))(*(_QWORD*)v56 + 40LL))(v56, 1);
            }
            else if (v55 == 0) {
              goto LABEL_159;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
              std___1___shared_weak_count___release_weak(v55);
            }
          }
        }
      LABEL_159:
        if (v39 == 0) {
          goto LABEL_162;
        }
        goto LABEL_160;
      }
    }
  }
LABEL_162:
  v58 = *(__int64***)(*(_QWORD*)(a1 + 256) + 40LL);
  v59 = *v58;
  v60 = v58[1];
  if (*v58 == v60) {
    v67 = 0;
  }
  else {
    v61 = 0;
    v62 = GameData_212e348 + 2;
    do {
      v63 = *v59++;
      v64 = *(const char**)(v63 + 48);
      if (v64 == nullptr) {
        break;
      }
      v70_.v76 = -1;
      v70_.v77 = -1;
      v70_.v78 = -1;
      v70_.v79 = -1;
      v70_.v80 = -1;
      v70_.v81 = -1;
      v70_.v82 = -1;
      v70_.v83 = -1;
      v65 = *msg_MessageManager_instance__ptr[0];
      v70_.v84 = -1;
      v70_.v85 = -1;
      v70_.v86 = -1;
      v70_.v87 = -1;
      v70_.v88 = 8;
      v70_.v89 = 0;
      v70_.v74 = -65529;
      v70_.v75 = -65528;
      v70_.v70 = (__int64)v62;
      v70_.v71 = 0xFFFF0001FFFF0000LL;
      v70_.v72 = (const char*)0xFFFF0004FFFF0002LL;
      v70_.v73 = 0xFFFF0006FFFF0005LL;
      v66 = GameRoutine_a4dbe0(v65, v64, 0);
      if (v66 == nullptr) {
        break;
      }
      if (*v66 == 0) {
        break;
      }
      ++v61;
    } while (v59 != v60);
    v67 = v61 > 1;
  }
  return ui_LayoutAccessor_SetPaneVisible(a1 + 24, (__int64)"L_PageTab", v67);
}

__int64 game_menu_17e6a30(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_226b190,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_alt2(&GameData_226b190) != 0) {
    GameData_226b110 = 15;
    GameData_226b128 = 0;
    GameData_226b130 = 0;
    GameData_226b138 = 0;
    GameData_226b140 = 0;
    GameData_226b148 = 0;
    GameData_226b150 = 0;
    GameData_226b178 = 0;
    GameData_226b180 = 0;
    GameData_226b188 = 0;
    GameData_226b158 = 0;
    GameData_226b160 = 0;
    GameData_226b168 = 0;
    GameData_226b170 = 0;
    GameData_226b118 = 0;
    GameData_226b120 = (__int64)TutorialInfoImpl_17e6c00;
    __cxa_guard_release_alt2(&GameData_226b190);
  }
  v4 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register_alt1();
  *(_QWORD*)(v4 + 152) = a1;
  *(_QWORD*)(v4 + 160) = a2;
  *(_QWORD*)v4 = game_menu_TutorialInfoImpl_ProcDelayChangeRequest_vtable;
  v6 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c628);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v6 + 40);
    if (v7 != 0) {
      *(_QWORD*)(v7 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(v6 + 40);
    }
    *(_QWORD*)(v6 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "ProcDelayChangeRequest";
    *(_QWORD*)(v4 + 32) = v6;
    *(_DWORD*)(v4 + 140) = game_HashString32_alt1();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_226b110;
    *(_QWORD*)(v4 + 16) = &GameData_226b110;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v4 + 136) & 1) == 0) {
    ProcInst_657a50_alt1(v4, 1);
  }
  return v4;
}

__int64 game_menu_184e6b0(__int64 a1, unsigned int a2)
{
  _QWORD* v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  __int64 v11;

  game_menu_1789cf0(a1, (__int64)"RelianceUnitSelectMenu");
  *(_DWORD*)(a1 + 1184) = a2;
  *(_BYTE*)(a1 + 1188) = 0;
  *(_QWORD*)a1 = game_menu_RelianceUnitSelectMenu_vtable;
  *(_QWORD*)(a1 + 176) = GameData_20e7868;
  *(_QWORD*)(a1 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20e7938;
  if (GameData_2246ca0 != 0) {
    ++GameData_2246ca8;
  }
  else {
    v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    if (GameData_2246ca0 == 0) {
      *GameData_2131518 = 1;
    }
    v4[2] = 0;
    v4[3] = 0;
    GameData_2246ca0 = (__int64)v4;
    *v4 = game_KnownManager_vtable;
    v4[1] = 0;
    GameRoutine_149e920();
  }
  result = (__int64)game_820d50(3);
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_16;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)result);
  if (result != 0 && *(_DWORD*)(result + 32) != 0) {
    return result;
  }
  if (game_GameModeData_instance_ != 0) {
    if (a2 > 1 || *(_BYTE*)(game_GameModeData_instance_ + 15) == 9) {
      return result;
    }
    v6 = game_GetHero(9u);
    if (v6 != 0) {
      v7 = v6;
      if ((*(_BYTE*)(v6 + 49) & 1) != 0) {
        v11 = v6;
        if ((UnitUtil_12122d0(&v11) & 1) != 0) {
          LODWORD(v11) = 0;
          GameHr_149e6e0((_QWORD*)GameData_2246ca0, v7, (int*)&v11);
        }
      }
    }
  }
  else {
  LABEL_16:
    if (a2 >= 2) {
      return result;
    }
  }
  v9_.v9[0] = GameData_20e8f38;
  v9_.v10 = v9_.v9;
  RelianceUnitSelectMenu_184e860((__int64)v9_.v9);
  result = (__int64)v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v8 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*v9_.v10 + v8))((__int64)v9_.v10);
}

__int64 game_menu_185ec60(__int64 (**a1)())
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 (*v5)();
  __int64 v6;
  char* v7;
  __int64* v8;
  __int64 (*v9)();
  __int64 v10;
  __int64* v11;
  _BYTE* v12;
  int v13;
  __int64* v14;
  __int64 (*v15)();
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  _BYTE* v23;
  int v24;
  __int64* v25;
  __int64 (*v26)();
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64* v30;
  __int64 v31;
  __int64 (*v32)();
  int v33;
  __int64 v34;
  __int64 (*v35)();
  int v36;
  __int64 v38;
  __int64* v39;
  _BYTE* v40;
  int v41;
  __int64* v42;
  char* v43;
  __int64 v44;
  char* v45;
  struct {
    char* v46[4];
    char** v47;
  } v46_;
  struct {
    __int64 (**v48)();
    _QWORD v49[3];
    unsigned __int64* v50;
  } v48_;

  v1 = *((unsigned int*)a1 + 10);
  v3 = GameData_212ceb0;
  if ((int)v1 >= 0) {
    v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v1);
  }
  v4 = *(unsigned __int8*)v3;
  if (*(_BYTE*)v3 != 0) {
    v5 = a1[12];
    if (*(_BYTE*)(*((_QWORD*)v5 + 50) + 96LL) != 1 ||
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) +
                                       8 * v4) +
                            50LL) >
            (unsigned int)*((unsigned __int8*)v5 + 552)) {
      v6 = (__int64)a1[1];
      v46_.v46[0] = "MID_DeployMenu_NotTactics_Message";
      if (*((_BYTE*)v5 + 2136) != 0) {
        v7 = (const char*)game_97b2f0((__int64)v5 + 2104);
      }
      else {
        v7 = GameRoutine_67ed20(*((_QWORD**)v5 + 49));
      }
      v48_.v50 = nullptr;
      game_11912b0(v6, v46_.v46, v7, (__int64)&v48_.v48);
      v19 = v48_.v50;
      if (v48_.v50 != (unsigned __int64*)&v48_.v48) {
        goto LABEL_25;
      }
      goto LABEL_44;
    }
  }
  v8 = &GameData_21caa2c;
  if ((int)v1 >= 0) {
    v8 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v1);
  }
  v9 = a1[1];
  if (*((_BYTE*)v8 + 1) != 0 && game_UnitPool_Get((_BYTE*)v8 + 1) != nullptr) {
    v10 = *((unsigned int*)a1 + 10);
    v11 = GameData_212ceb0;
    if ((int)v10 >= 0) {
      v11 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] +
                                             8LL) +
                                  48LL) +
                       8 * v10);
    }
    v13 = *((unsigned __int8*)v11 + 1);
    v12 = (char*)v11 + 1;
    if (v13 != 0) {
      v14 = game_UnitPool_Get(v12);
    }
    else {
      v14 = nullptr;
    }
    if (v14 == (__int64*)a1[12]) {
      v38 = *((unsigned int*)a1 + 10);
      v39 = GameData_212ceb0;
      if ((int)v38 >= 0) {
        v39 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] +
                                               8LL) +
                                    48LL) +
                         8 * v38);
      }
      v41 = *((unsigned __int8*)v39 + 1);
      v40 = (char*)v39 + 1;
      if (v41 != 0) {
        v42 = game_UnitPool_Get(v40);
        v14 = (__int64*)a1[12];
      }
      else {
        v42 = nullptr;
      }
      if (v42 == v14) {
        v45 = "SE_SYS_Remove";
      }
      else {
        v45 = "SE_SYS_Equip";
      }
      snd_Fade_Fade_10c830_alt2((__int64)&v48_.v48, 0x0.0p+0f);
      snd_play_ff2d0((__int64)v45, (__int64)v45, (__int64)&v48_.v48, 0,
                     0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade_alt2(&v48_.v48);
      LegionPool_937de0(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL),
                        (__int64)a1[12]);
      LegionPoolMenu_Unknown139(v9);
      return 0;
    }
    else {
      v26 = a1[1];
      v48_.v48 = a1;
      LODWORD(v48_.v49[0]) = 0;
      v27 = *((_QWORD*)v26 + 19);
      *(_QWORD*)((char*)v48_.v49 + 4) = 0;
      if (v27 != 0) {
        v28 = v27;
      }
      else {
        v28 = (__int64)v26;
      }
      v29 = (_QWORD*)GameRoutine_16eb960_alt1(v28, &v48_.v48);
      v30 = (__int64*)fw_memory_g_heap_manager_ptr;
      v31 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
      v32 = a1[12];
      v33 = *((_DWORD*)a1 + 10);
      *(_WORD*)(v31 + 16) = 0;
      *(_QWORD*)(v31 + 48) = 0;
      *(_QWORD*)(v31 + 56) = 0;
      *(_QWORD*)(v31 + 64) = 0;
      *(_QWORD*)(v31 + 72) = 0;
      *(_QWORD*)(v31 + 128) = 0;
      *(_WORD*)(v31 + 80) = 257;
      *(_BYTE*)(v31 + 82) = 1;
      *(_QWORD*)(v31 + 144) = v9;
      *(_QWORD*)(v31 + 152) = v32;
      *(_DWORD*)(v31 + 40) = v33;
      *(_QWORD*)v31 = anonymous_SubReceiveMenuItem_vtable_20eece8;
      *(_QWORD*)(v31 + 8) = 0;
      BasicMenuCursor_16e0c00_alt1(v29, v31);
      v34 = fw_memory_HeapManager_Allocate(*v30, 160, 16, 0);
      v35 = a1[12];
      v36 = *((_DWORD*)a1 + 10);
      *(_WORD*)(v34 + 16) = 0;
      *(_QWORD*)(v34 + 48) = 0;
      *(_QWORD*)(v34 + 56) = 0;
      *(_QWORD*)(v34 + 64) = 0;
      *(_QWORD*)(v34 + 72) = 0;
      *(_WORD*)(v34 + 80) = 257;
      *(_BYTE*)(v34 + 82) = 1;
      *(_QWORD*)(v34 + 128) = 0;
      *(_QWORD*)(v34 + 144) = v9;
      *(_QWORD*)(v34 + 152) = v35;
      *(_DWORD*)(v34 + 40) = v36;
      *(_QWORD*)v34 = anonymous_SubExchangeMenuItem_vtable_20eef60;
      *(_QWORD*)(v34 + 8) = 0;
      BasicMenuCursor_16e0c00_alt1(v29, v34);
      return 10;
    }
  }
  if (*((_DWORD*)v8 + 1) != 0) {
    v15 = a1[1];
    v16 = *((_DWORD*)a1 + 10);
    if (*((_QWORD*)v15 + 19) != 0) {
      v17 = *((_QWORD*)v15 + 19);
    }
    else {
      v17 = (__int64)a1[1];
    }
    v48_.v48 = GameData_20ef1c0;
    v48_.v49[0] = a1;
    v48_.v50 = (unsigned __int64*)&v48_.v48;
    v46_.v47 = v46_.v46;
    v46_.v46[0] = (const char*)GameData_20ef240;
    game_menu_16f64c0(v17, (__int64)"MID_DeployMenu_DispatchDeploy_Confirm",
                      v16, (__int64)&v48_.v48, (__int64)v46_.v46);
    if (v46_.v47 == v46_.v46) {
      v18 = 32;
    }
    else {
      if (v46_.v47 == nullptr) {
        goto LABEL_43;
      }
      v18 = 40;
    }
    (*(void (**)(void*)) & (*v46_.v47)[v18])((void*)v46_.v47);
  LABEL_43:
    v19 = v48_.v50;
    if (v48_.v50 != (unsigned __int64*)&v48_.v48) {
    LABEL_25:
      if (v19 == nullptr) {
        return 12;
      }
      v20 = 40;
    LABEL_45:
      (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
      return 12;
    }
  LABEL_44:
    v20 = 32;
    goto LABEL_45;
  }
  v21 = *((unsigned int*)a1 + 10);
  v22 = GameData_212ceb0;
  if ((int)v21 >= 0) {
    v22 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                              48LL) +
                   8 * v21);
  }
  v24 = *((unsigned __int8*)v22 + 1);
  v23 = (char*)v22 + 1;
  if (v24 != 0) {
    v25 = game_UnitPool_Get(v23);
  }
  else {
    v25 = nullptr;
  }
  if (v25 == (__int64*)a1[12]) {
    v43 = "SE_SYS_Remove";
  }
  else {
    v43 = "SE_SYS_Equip";
  }
  snd_Fade_Fade_10c830_alt2((__int64)&v48_.v48, 0x0.0p+0f);
  snd_play_ff2d0((__int64)v43, (__int64)v43, (__int64)&v48_.v48, 0, 0x10001u, 0,
                 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade_alt2(&v48_.v48);
  LegionPool_9377a0(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL),
                    (__int64)a1[12], *((_DWORD*)a1 + 10));
  LegionPoolMenu_Unknown139(v9);
  v48_.v49[0] = &GameData_1a96902;
  v48_.v48 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a96902);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  v44 =
      game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  (unsigned __int64*)&v48_.v48);
  if (v44 == 0) {
    return 0;
  }
  if (*(_DWORD*)(v44 + 32) != 0) {
    return 4;
  }
  return 0;
}

__int64 game_menu_187eb30(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  struct {
    __int64 v5;
    __int64 v6;
  } v5_;

  snd_Fade_Fade_10c830_alt1((__int64)&v5_.v5, 0x0.0p+0f);
  snd_play_ff2d0((__int64)"SE_SYS_QuestWindow_Open",
                 (__int64)"SE_SYS_QuestWindow_Open", (__int64)&v5_.v5, 0,
                 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade_alt1(&v5_.v5);
  LayoutAccessor_1560070((void*)(&v5_.v5), (__int64*)(a1 + 848), "L_Img");
  result = v5_.v6;
  if (v5_.v6 != 0) {
    v3 = std___1___shared_weak_count_lock(v5_.v6);
    v4 = v5_.v5;
    result = v5_.v6;
    if (v5_.v6 != 0) {
      result = std___1___shared_weak_count___release_weak(v5_.v6);
    }
    if (v3 != 0 && v4 != 0) {
      LayoutAccessor_1562cf0(v4, "Img01");
      result = ui_LayoutAccessor_SetPaneVisible(v4, (__int64)"N_State", 0);
    }
    else if (v3 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  return result;
}

void game_menu_1880bb0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  int v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  *(_QWORD*)a1 = game_menu_anonymous_ProcTalkQuestInfo_vtable;
  *(_QWORD*)(a1 + 176) = GameData_20fc510;
  *(_QWORD*)(a1 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20fc5e0;
  *(_QWORD*)(a1 + 1072) = SubQuestInfo_Destructor_ptr;
  v2 = (_QWORD*)(a1 + 1104);
  v3 = *(_QWORD**)(a1 + 1136);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  *(_QWORD*)a1 = game_menu_anonymous_BaseQuestMenu_vtable;
  *(_QWORD*)(a1 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20fb250;
  v5 = *(unsigned __int8*)(a1 + 1064);
  *(_QWORD*)(a1 + 176) = GameData_20fb180;
  if (v5 == 1) {
    v6 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v8 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v10 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v9 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v11 = v9 == v10;
      v12 = v7 - 1 + v8;
      v13 = v12 >> 7;
      v14 = v12 & 0x7F;
      v15 = 16 * (v9 - v10) - 1;
      v16 = *(_QWORD*)(v10 + 8 * v13);
      if (v11) {
        v15 = 0;
      }
      v17 = v16 + 32 * v14;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v17 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v6[21] = *(_QWORD*)(v17 + 24);
      v18 = *(_QWORD*)(v17 + 16);
      v6[27] = v7 - 1;
      v6[20] = v18;
      if ((unsigned __int64)(v15 - (v7 + v8) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        v19 = *(_QWORD*)(v9 - 8);
        if (v19 != 0) {
          v20 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v19);
          v9 = v6[24];
        }
        v6[24] = v9 - 8;
      }
    }
    *(_BYTE*)(a1 + 1064) = 0;
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

#pragma GCC visibility pop
