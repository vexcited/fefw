#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* fw_world_SwapCallables(_QWORD* result, _QWORD*);
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__attribute__((swiftcall)) void GameRoutine_1572840(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_1573280(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_17c77c0(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_182ba50(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void
Layout_1363e00(PSEUDO_X8, unsigned __int64 result, __int64);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64* GameRoutine_1993840(__int64);
__int64* GameRoutine_6d36d0(_QWORD*);
__int64* GameRoutine_744860(__int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* PrimitiveDrawManager_1994180(__int64* result);
__int64* PrimitiveDrawStack_f51fa0(__int64* result, __int64);
__int64* game_820d50(int);
__int64* game_8224a0(unsigned __int8);
__int64* game_UnitPool_Get(_BYTE*);
__int64 Alignment_56b600(__int64 result);
__int64 AsyncLoadThumbImage_18b53c0(__int64, unsigned __int16*, __int64, char);
__int64 AsyncLoadThumbImage_18b5580(__int64, __int64, __int64, char);
__int64 BattleInfo_79c940(__int64, unsigned int*);
__int64 BattleSide_79fd30(__int64);
__int64 BattleSide_79ff80(__int64);
__int64 BattleSide_7a0260(__int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1586d80(__int64, _DWORD*, _DWORD*, __int64, char, char, char,
                       __int64, char, char, char);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_67ed20(_QWORD*);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_6fc510(__int64);
__int64 GameRoutine_7807a0(__int64, _WORD*, unsigned int, unsigned int,
                           __int64);
__int64 GameRoutine_799290(_QWORD*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 MapUtil_753920(__int64 result, unsigned __int16*, __int64);
__int64 PrimitiveDrawStack_f52120(__int64, char, int);
__int64 Situation_7677a0(__int64*, float, float, float);
__int64 StatusClass_189d120(__int64*, _QWORD*, char, char, char, char, char);
__int64 StatusNum_1890220(__int64, unsigned int, unsigned int, unsigned int,
                          char, char, int);
__int64 UnitDerivedParams_6deeb0(__int64, char);
__int64 UnitNatives_753e40(unsigned int*, unsigned int*, __int64, unsigned int,
                           unsigned int);
__int64 Unit_6c8300(_QWORD*, char);
__int64 Unit_6c8a80(__int64 result, int, int, __int64);
__int64 Unit_6c9cf0(__int64, __int64);
__int64 Unit_6cc0a0(__int64);
__int64 Util_15761f0(__int64*, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_world_JobContext_Drain(unsigned int*);
__int64 fw_world_JobContext_Wait(__int64 result, unsigned int);
__int64 fw_world_JobQueue_Submit(__int64, int);
__int64 game_1841930(__int64, __int64);
__int64 game_801020(__int64 result, __int64, __int64, int, int, unsigned __int8,
                    __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_UnitSkillList_GetRangeAddImpl(__int64, __int64);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_GetParamLimit(_QWORD*, unsigned __int8*);
__int64 game_Unit_GetUnknown4(__int64, char);
__int64 game_Unit_SkillList_FindKind(__int64, unsigned __int8);
__int64 game_gameui_1594bd0(__int64, unsigned __int16*, char);
__int64 game_gameui_SetHpStock(__int64 result, __int64);
__int64 game_map_752480(unsigned int, unsigned int, char);
__int64 game_map_PrimitiveDrawStack_EachDrawElementsMultiThread(_QWORD*,
                                                                __int64);
__int64 nn_os_ClearLightEvent(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, float, float, __int64, unsigned int,
                       unsigned int, int);
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_1572370(__int64*, char);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool TargetEnumerator_780410(_BYTE*, __int64, __int16, unsigned int,
                             unsigned int);
bool game_HasActiveSkill_843420(_DWORD*, __int64);
bool game_SkillKey_IsUsable(_DWORD*);
bool game_Unit_CanSwitchMount(__int64);
char* GameHr_6fb960(__int64);
char* HistoryLogInfo_6fb810(__int64);
char* game_Unit_GetJobName(_QWORD*);
char* game_map_74efc0(char*, char*, char*);
const char* Pane_58fac0(__int64, const char*);
extern _DWORD* GameData_212d168;
extern _DWORD* game_g_shared_system_skills_ptr_alt1 __asm__(
    "game_g_shared_system_skills_ptr");
extern _QWORD GameData_1b01588[4];
extern _QWORD GameData_1b01828[4];
extern _QWORD GameData_21d40b8[];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c8a8;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a55c0;
extern _UNKNOWN GameData_21d41b0;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int64 (*GameData_1f91de8[])();
extern __int64 (*GameData_1f97990[])();
extern __int64 (*GameData_1f97a10[])();
extern __int64 (*GameData_1f97b10[])();
extern __int64 (*GameData_1f97b90[])();
extern __int64 (*GameData_1f97c10[])();
extern __int64 (*GameData_1f9a258[])();
extern __int64 (*GameData_1ff5af0[])();
extern __int64 (*GameData_1ff5b80[])();
extern __int64 (*GameData_1ff5c00[])();
extern __int64 (*GameData_1ff5c90[])();
extern __int64 (*GameData_1ff5d10[])();
extern __int64 (*GameData_204e798[])();
extern __int64 (*GameData_20e2628[])();
extern __int64 (*game_sound_PlayCameraTurnSe_ptr)();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dfc0[2];
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_212c638;
extern __int64 GameData_212c998[148];
extern __int64 GameData_212d038[2];
extern __int64 GameData_212e368[4];
extern __int64 GameData_2131930[15];
extern __int64 GameData_21c6978;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd140;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_2241000;
extern __int64 GameData_226b928;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameGlobalData_unknown_;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_map_MapColorPalette_g_texture_archives;
extern __int64 ui_Manager_instance_;
float GameRoutine_5eaef0(__int64, float32x4_t*, float, float, float, float,
                         double, double);
float GameRoutine_9a2630(float*, float*, char, char);
float Height_7c4d10(__int64, float, float);
float Unit_6c7fa0(__int64, __int64);
float fmodf(float, float);
float game_map_CursorDrawInfo_GetHeightTop(__int64, int, int, unsigned int,
                                           unsigned int, __int64);
float powf(float, float);
float32x4_t* game_156c240(float32x4_t* result);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void* BattleSide_79ec90(_QWORD*);
void* game_97b2f0(__int64);
void BattleArea_8becc0(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, __int64, __int64, __int64);
void GameHr_15730d0(__int64, _QWORD*);
void GameHr_757f60(__int64, _DWORD*, unsigned int, unsigned int, __int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void ITarget_776720(__int64, char, char, unsigned __int8, _DWORD*, __int64);
void StatusLV_18a30a0(__int64*, __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) fs_60a230();
void __cxa_guard_release(__int64);
void game_156c910(__int64 result, const char*, int, ...);
void game_18c9b10(__int64*, __int64, int);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
__int64* game_map_744a40(__int64* result);
__int64 game_map_775580(_BYTE* a1, char* a2, __int64 a3);
__int64 game_map_79f000(__int64 a1, _DWORD* a2);
__int64 game_map_7a9bf0(__int64 a1, char a2, char a3);
_QWORD* game_map_7bfd40(__int64 a1, char a2, float a3);
void game_map_8be740(char* a1, char* a2, char* a3, _DWORD* a4, __int64 a5,
                     __int64 a6, char* a7, __int64 a8);
__n128 game_map_f11260(__int64 a1);
void game_map_f515e0(__int64 a1);
__int64 game_map_17cece0(__int64 a1, __int64 a2, char a3, char a4, __int64 a5);
bool game_map_1829460(__int64 a1, __int64 a2);
__int64 game_map_1829dc0(__int64 result);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable(__int64,
                                                               __int64);
__attribute__((swiftcall)) void game_map_fe9ec0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64* GameRoutine_64dfe0(__int64* result, __int64*);
__int64* GameRoutine_f155c0(__int64* result, char*, char*, unsigned __int64);
__int64* MapUnitCommandItemMenu_15c0b80();
__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);
__int64 CharacterController_d42d20(__int64 result, char*, char*,
                                   unsigned __int64);
__int64 Cursor_730e40(__int64 result, __int64);
__int64 GameRoutine_16e3a80(__int64 result, __int64*, __int64, __int64, char);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_eaec10(__int64*, __int64);
__int64 GameRoutine_f1eb80(__int64**, unsigned __int64*, _QWORD**);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char, __int64);
__int64 VTarget_778140(__int64, __int64, char, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_IsVibrationEnabled(_BYTE*);
__int64 game_UnitItemList_Sort(__int64, unsigned int, int);
__int64 game_UnitSkillList_EachDirectSkill(__int64, _WORD*, __int64);
__int64 game_UnitSkillList_EachIndirectSkill(__int64, _WORD*, __int64);
__int64 game_map_f54910(__int64);
__int64 game_menu_16dcd30(__int64, __int64, _QWORD*, __int64);
__n128 game_ProcInst_Register(_QWORD);
bool ItemMenuItem_Unknown71(__int64);
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN* GameData_21319e0;
extern __int64 (*GameData_2012138[3])();
extern __int64 (*GameData_2056240[])();
extern __int64 (*GameData_20562c0[])();
extern __int64 (*GameData_21282e8[])();
extern __int64 (*GameData_2128368[])();
extern __int64 (*GameData_2128d18[])();
extern __int64 (*GameData_21290f8[])();
extern __int64 (*GameData_2129458[])();
extern __int64 (*GameData_212ac30[])();
extern __int64 (*GameData_212af88[])();
extern __int64 (*GameData_212b008[])();
extern __int64 (*decltype_c81af0_ptr_2012120[6])();
extern __int64 (*game_map_CursorUnitMeshData_vtable[])();
extern __int64 (*game_map_MapBattleEventBase_vtable[])();
extern __int64 (*game_map_MapUnitCommandMenu_vtable[])();
extern __int64 (*game_map_anonymous_ArtsMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_AssistMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_AttackMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_CannonMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_EscapeMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_FixedMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_GambitMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_GimmickMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_ItemMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_ItemMenuItem_vtable_20543f0[])();
extern __int64 (*game_map_anonymous_MapSortieTroopSequence_vtable[])();
extern __int64 (*game_map_anonymous_MorphMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_PollutionMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_RageMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_RideMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_SpecialMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_TalkMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_TradeMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_TransportMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_TreasureboxMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_UnitMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_WarpMenuItem_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20c32b0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2126c40[])();
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212d1f8[2];
extern __int64* GameData_212d6a8;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212f8a8[15];
extern __int64* GameData_212f8b0[14];
extern __int64* GameData_2130240[8];
extern __int64 GameData_20c30d8;
extern __int64 GameData_21270a0;
extern __int64 GameData_212c608[2];
extern __int64 GameData_22736d8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern int game_map_g_unit_menu_index;
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
unsigned __int64 UnitMenuItem_15b81a0(__int64, const char*, const char*);
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void Util_157bd60(__int64, __int64, __int64, int*);
void __attribute__((noreturn)) GameRoutine_f15920();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a250(const char*);
void game_map_MapDrawConst_AddCellPlaneMask(__int64, float32x4_t*, int, int,
                                            int);
void game_map_f1d220(__int64 a1);
void game_map_f54ba0(__int64* a1, unsigned __int64 a2);
void game_map_11408e0(__int64 a1, int a2, __int64* a3);
__attribute__((swiftcall)) void game_map_1140e80(PSEUDO_X8 x8_, _DWORD* a1);
__int64* game_map_15c0d00(_QWORD* a1);
__int64 game_map_1782a30(__int64 a1);
__int64 game_map_19f5240(__int64 a1);
__int64 GameRoutine_1586d80(__int64, _DWORD*, _DWORD*, __int64, char, char,
                            char, __int64, char, char, char);
__int64 GameRoutine_1840740(__int64, unsigned int, __int64, unsigned __int8,
                            char);
__int64 LayoutAccessor_1562680(__int64 result, const char*, float);
__int64 ui_LayoutAccessor_FindAlignment_alt2(__int64*, const char*);
extern _DWORD* game_g_shared_system_skills_ptr_alt2;
void LayoutAccessor_15730d0(__int64, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1572840_alt1(PSEUDO_X8, __int64*,
                                                         _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1573280_alt1(PSEUDO_X8, __int64*,
                                                         _QWORD*);
__attribute__((swiftcall)) void GameRoutine_17c77c0_alt1(PSEUDO_X8, __int64*,
                                                         _QWORD*);
__attribute__((swiftcall)) void GameRoutine_182ba50_alt1(PSEUDO_X8);
__int64 GameRoutine_1586d80_alt1(__int64, _DWORD*, _DWORD*, __int64, char, char,
                                 char, __int64);
__int64 LayoutAccessor_1562cf0_alt1(__int64 result, unsigned int*);
__int64 game_156c910_alt1(__int64 result, const char*, int, ...);
__int64 ui_1572370_alt1(__int64, char);
void StatusClass_189d120_alt1(__int64*, _QWORD*, char, char, char, char, char);
void game_156c5d0(__int64, __int64, char);
__int64 BattleInfo_79c940_alt1(_QWORD, _QWORD);
__int64 BattleSide_79ec90_alt1(_QWORD);
__int64 BattleSide_79fd30_alt1(_QWORD);
__int64 BattleSide_79ff80_alt1(_QWORD);
__int64 BattleSide_7a0260_alt1(_QWORD);
__int64 GameRoutine_799290_alt1(_QWORD);
__int64 GameRoutine_9a2630_alt1(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_alt1(_QWORD);
__int64 __cxa_guard_release_alt1(_QWORD);
__int64 game_Unit_GetParam_alt1(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_21d40b8_alt1;

__int64* game_map_744a40(__int64* result)
{
  _BYTE* v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;

  v1 = result + 1;
  if (*((_BYTE*)result + 8) != 0) {
    v2 = (__int64)result;
    result = game_UnitPool_Get((_BYTE*)result + 8);
    if (result != nullptr) {
      v3 = (__int64)result;
      if (game_Unit_CanSwitchMount((__int64)result)) {
        v4 = *(_DWORD*)(v3 + 416);
        if ((v4 & 0x40000) == 0) {
          *(_DWORD*)(v3 + 416) = v4 | 0x40000;
          Unit_6cc0a0(v3);
        }
      }
      if (*v1 != 0) {
        v5 = game_UnitPool_Get(v1);
        if (v5 != nullptr) {
          *(_DWORD*)(v2 + 52) = game_Unit_GetParam((__int64)v5);
        }
      }
      return GameRoutine_744860(v2);
    }
  }
  return result;
}

__int64 game_map_775580(_BYTE* a1, char* a2, __int64 a3)
{
  int v3;
  char v4;
  _BYTE* v7;
  int v8;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 (**v13)();
  int v14;
  int* v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  unsigned int* v19;
  int v20;
  int v21;
  signed int v22;
  unsigned int v23;
  char v24;
  char v25;
  int v26;
  int v27;
  int v28;
  signed int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  __int64 v33;
  unsigned int v34;
  bool v35;
  char v36;
  int v37;
  int v38;
  int v39;
  char v40;
  unsigned int v41;
  char v42;
  __int16 v43;
  _QWORD* v44;
  _BYTE* v45;
  __int64 (***v46)();
  __int64 (***v47)();
  __int64 (**v48)();
  int* v49;
  unsigned __int8 v50;
  __int64 v51;
  int v52;
  __int64* v53;
  int v54;
  int v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  _QWORD* v63;
  __int64 v64;
  _BYTE* v65;
  __int64 (***v66)();
  __int64 (***v67)();
  __int64 (**v68)();
  __int64 v69;
  __int64 (*v70)();
  __int64* v71;
  int v72;
  __int64 v73;
  _BYTE* v74;
  __int64 (***v75)();
  __int64 (***v76)();
  __int64 v77;
  int v78;
  __int64 v79;
  unsigned __int8 v80;
  unsigned int v81;
  int v82;
  unsigned int v83;
  __int64 v84;
  __int64 (*v85)();
  __int64* v86;
  int v87;
  __int64 v88;
  unsigned int v89;
  int v90;
  unsigned int v91;
  char* v92;
  unsigned __int8* v93;
  int v94;
  int v95;
  signed int v96;
  signed int v97;
  signed int v98;
  int v99;
  __int64 v100;
  char v101;
  char v102;
  int v103;
  unsigned __int16* v104;
  unsigned int v105;
  __int64 v106;
  __int64 v107;
  int v108;
  int v109;
  int v110;
  __int64 v111;
  __int64* v112;
  __int64* v113;
  _BYTE* v114;
  int v115;
  __int64* v116;
  __int64 v117;
  __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64* v122;
  __int64 v123;
  char v124;
  unsigned __int16* v125;
  __int64 v126;
  _BYTE* v127;
  int v129;
  __int64* v130;
  char v131;
  unsigned int v132;
  __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  unsigned int v136;
  int v137;
  __int64 v138;
  int v139;
  signed int v140;
  signed int v141;
  int v142;
  signed int v143;
  signed int v144;
  signed int v145;
  signed int v146;
  char v148;
  char v149;
  unsigned int v150;
  unsigned int v151;
  int v152;
  int v153;
  __int64 v154;
  __int64 v155;
  __int16 v156;
  unsigned int v157;
  unsigned int v158;
  __int64 v159;
  int v160;
  __int64 v161;
  unsigned __int8* v162;
  unsigned __int8* v163;
  __int64 v164;
  __int64 v165;
  unsigned __int8* v166;
  int v167;
  int v168;
  int v169;
  unsigned __int8* v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v179;
  char v180;
  __int64 v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  unsigned int v192;
  int v193;
  int v194;
  __int64 v196;
  unsigned int v197;
  __int64 v198;
  __int64 v199;
  bool v200;
  _BYTE* v201;
  __int64* v202;
  __int64 v203;
  char v204;
  __int64* v205;
  __int64 v206;
  __int64* v207;
  int v208;
  _BOOL4 v209;
  _BOOL4 v210;
  char v211;
  int v212;
  unsigned __int8 v213;
  signed int v214;
  int v215;
  __int64 v216;
  __int64 (**v217)();
  signed int v218;
  char v219;
  _BYTE* v220;
  int v221;
  __int64 (**v222)();
  struct {
    char gap0_[80];
    _BYTE v223[32];
    _BYTE* v224;
    char gap120_[8];
    __int64 (**v225)();
    char gap136_[8];
    __int64 (**v226)();
    __int64 (**v227)();
    _BYTE v228[32];
    _BYTE* v229;
    char gap200_[8];
    __int64 (**v230)();
    char gap216_[8];
    __int64 (**v231)();
    __int64 (**v232)();
    _BYTE v233[32];
    _BYTE* v234;
    char gap280_[8];
    unsigned int* v235;
    int* v236;
    __int64 (**v237)();
    char gap312_[24];
    __int64 (**v241)();
    _BYTE* v242;
    int* v243;
    __int64 v244;
    __int64 (***v245)();
  } f_;
  int v238;
  int v239;
  _BYTE v240[4];
  unsigned int v246[3];

  v3 = a2[1];
  v4 = 0;
  v240[0] = 0;
  if (v3 < 0) {
    return v4 & 1;
  }
  if (a2[2] < 0) {
    return v4 & 1;
  }
  v8 = (unsigned __int8)a1[8];
  v7 = a1 + 8;
  v4 = v8;
  if (v8 == 0) {
    return v4 & 1;
  }
  v220 = v7;
  v10 = game_UnitPool_Get(v7);
  if (v10 == nullptr) {
    v4 = 0;
    return v4 & 1;
  }
  v11 = game_g_empty_item_ptr;
  v12 = GameData_212c878[0];
  v216 = a3;
  if ((*((_DWORD*)a1 + 10) & 0xFFF) != 0) {
    v13 = *(__int64 (***)(void))(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                 8LL * (*((_DWORD*)a1 + 10) & 0xFFF));
    if (v13 != nullptr) {
      goto LABEL_7;
    }
  LABEL_29:
    v36 = 1;
    goto LABEL_155;
  }
  v32 = *((unsigned __int16*)a1 + 16);
  if (*((_WORD*)a1 + 16) == 0) {
    v32 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v33 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v32);
  v13 = *(__int64 (***)(void))(v33 + 192);
  v34 = *(unsigned __int8*)(v33 + 72);
  v35 = v13 == nullptr || v34 > 7;
  if (v35 || *((_BYTE*)v13 + 105) == 0 || *((_BYTE*)v13 + 104) == 2) {
    v13 = nullptr;
    goto LABEL_29;
  }
LABEL_7:
  v15 = (int*)(a1 + 16);
  v14 = *((_DWORD*)a1 + 4);
  v16 = a2[1];
  v17 = a2[2];
  v19 = (unsigned int*)(a1 + 12);
  v18 = *((_DWORD*)a1 + 3);
  v20 = *((_DWORD*)a1 + 5);
  v246[0] = v16;
  v239 = v17;
  if (v20 < 2) {
    v24 = v14;
    v25 = v18;
  }
  else {
    v21 = v20 + v14;
    v22 = v20 + v18;
    v23 = 10000;
    v24 = 0;
    v25 = 0;
    v26 = v14;
    do {
      v27 = v17 - v26;
      v28 = v16 - v18;
      v29 = v18;
      if (v17 - v26 < 0) {
        v27 = v26 - v17;
      }
      do {
        if (v28 >= 0) {
          v30 = v28;
        }
        else {
          v30 = -v28;
        }
        --v28;
        v31 = v30 + v27;
        if (v31 < v23) {
          v24 = v26;
          v25 = v29;
          v23 = v31;
        }
        ++v29;
      } while (v29 < v22);
      ++v26;
    } while (v26 < v21);
  }
  v37 = v16 - v25;
  v38 = v17 - v24;
  v217 = v13;
  if (v38 <= 0) {
    v39 = ((unsigned int)v37 >> 30) & 2 | (v38 < 0);
  }
  else {
    v39 = ((unsigned int)v37 >> 30) & 2 | (v38 < 0) | 4;
  }
  if (v37 > 0) {
    LOBYTE(v39) = v39 | 8;
  }
  v40 = v39 - 1;
  v41 = (unsigned __int8)(v39 - 1);
  v211 = v40;
  v209 = v41 > 7;
  v210 = v41 < 8;
  if (v41 >= 8) {
    v42 = -1;
  }
  else {
    v42 = 0x3FFFFFF02FF0100uLL >> (8 * (v40 & 0x1Fu));
  }
  v213 = v42;
  if (*((_BYTE*)v13 + 105) == 3) {
    if (*((_BYTE*)v13 + 279) == 0) {
      v246[0] = v18;
    LABEL_65:
      v17 = *v15;
      v16 = v18;
      v239 = *v15;
      goto LABEL_66;
    }
    if ((v42 & 0xFD) == 0) {
      v16 = v18;
    }
    v246[0] = v16;
    if (((unsigned __int8)v42 | 2) == 3) {
      v17 = v14;
    }
    v43 = *((_WORD*)v13 + 8);
    f_.v231 = (__int64 (**)(void))a1;
    f_.v232 = v13;
    v207 = v10;
    v238 = v43 & 0xFFF;
    v239 = v17;
    v44 = *(_QWORD**)(v216 + 32);
    if (v44 != nullptr) {
      if (v44 == (_QWORD*)v216) {
        f_.v234 = f_.v233;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _BYTE*))(
            *v44 + 24LL))((void*)(v44), v44, f_.v233);
        v45 = f_.v234;
      }
      else {
        v45 = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                     PSEUDO_X8, _QWORD))(*v44 + 16LL))(
                                     (void*)v44, *(_QWORD*)(v216 + 32)));
        f_.v234 = v45;
      }
    }
    else {
      v45 = nullptr;
      f_.v234 = nullptr;
    }
    f_.v235 = v246;
    f_.v236 = &v239;
    f_.v237 = (__int64 (**)(void))v240;
    v46 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    v47 = v46;
    *v46 = GameData_1f97b10;
    v48 = f_.v232;
    v46[2] = f_.v231;
    v46[3] = v48;
    if (v45 != nullptr) {
      if (v45 == f_.v233) {
        v46[8] = (__int64 (**)(void))(v46 + 4);
        (*(void (**)(_BYTE*))(*(_QWORD*)v45 + 24LL))(v45);
      }
      else {
        v46[8] = (__int64 (**)(void))(
            *(__int64 (**)(_BYTE*))(*(_QWORD*)v45 + 16LL))(v45);
      }
    }
    else {
      v46[8] = nullptr;
    }
    v49 = f_.v236;
    f_.v245 = v47;
    v47[10] = (__int64 (**)(void))f_.v235;
    v47[11] = (__int64 (**)(void))v49;
    v47[12] = f_.v237;
    ITarget_776720((__int64)a1, v16, v17, v213, &v238, (__int64)&f_.v241);
    ((void (*)(__int64 (***)(void)))(*v47)[5])(v47);
    v13 = v217;
    if (f_.v234 == f_.v233) {
      v51 = 32;
      v11 = game_g_empty_item_ptr;
      v12 = GameData_212c878[0];
      v50 = v213;
    }
    else {
      v11 = game_g_empty_item_ptr;
      v12 = GameData_212c878[0];
      v50 = v213;
      if (f_.v234 == nullptr) {
      LABEL_61:
        if ((v50 & 0xFD) != 0) {
          v19 = v246;
        }
        v10 = v207;
        v18 = *v19;
        v246[0] = *v19;
        if ((v50 | 2) != 3) {
          v15 = &v239;
        }
        goto LABEL_65;
      }
      v51 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)f_.v234 + v51))((__int64)f_.v234);
    goto LABEL_61;
  }
LABEL_66:
  v52 = *((unsigned __int8*)v13 + 250);
  if ((unsigned int)(v52 - 13) >= 2) {
    if (v52 != 15) {
      goto LABEL_93;
    }
    v62 = v12;
    f_.v226 = (__int64 (**)(void))a1;
    f_.v227 = v13;
    v63 = *(_QWORD**)(v216 + 32);
    if (v63 != nullptr) {
      v64 = (__int64)v10;
      if (v63 == (_QWORD*)v216) {
        f_.v229 = f_.v228;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _BYTE*))(
            *v63 + 24LL))((void*)(v63), v63, f_.v228);
        v65 = f_.v229;
      }
      else {
        v65 = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                     PSEUDO_X8, _QWORD))(*v63 + 16LL))(
                                     (void*)v63, *(_QWORD*)(v216 + 32)));
        f_.v229 = v65;
      }
    }
    else {
      v64 = (__int64)v10;
      v65 = nullptr;
      f_.v229 = nullptr;
    }
    f_.v230 = (__int64 (**)(void))v240;
    v66 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v67 = v66;
    *v66 = GameData_1f97b90;
    v68 = f_.v227;
    v66[2] = f_.v226;
    v66[3] = v68;
    if (v65 != nullptr) {
      if (v65 == f_.v228) {
        v66[8] = (__int64 (**)(void))(v66 + 4);
        (*(void (**)(_BYTE*))(*(_QWORD*)v65 + 24LL))(v65);
      }
      else {
        v66[8] = (__int64 (**)(void))(
            *(__int64 (**)(_BYTE*))(*(_QWORD*)v65 + 16LL))(v65);
      }
    }
    else {
      v66[8] = nullptr;
    }
    f_.v245 = v67;
    v67[10] = f_.v230;
    Unit_6c8a80(v64, v16, v17, (__int64)&f_.v241);
    ((void (*)(__int64 (***)(void)))(*v67)[5])(v67);
    v13 = v217;
    if (f_.v229 == f_.v228) {
      v69 = 32;
      v12 = v62;
    }
    else {
      v12 = v62;
      if (f_.v229 == nullptr) {
        goto LABEL_93;
      }
      v69 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)f_.v229 + v69))((__int64)f_.v229);
  }
  else if (*v220 != 0) {
    v53 = game_UnitPool_Get(v220);
    if (v53 != nullptr) {
      v54 = v246[0];
      v55 = v239;
      v56 = (__int64)v53;
      v57 = (_WORD)v13[2] & 0xFFF;
      LOBYTE(v238) = 1;
      v58 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      *(_QWORD*)(v58 + 16) = v56;
      *(_DWORD*)(v58 + 24) = v57;
      f_.v245 = (__int64 (***)(void))v58;
      *(_QWORD*)v58 = GameData_1f97990;
      *(_QWORD*)(v58 + 8) = a1;
      *(_QWORD*)(v58 + 32) = &v238;
      Unit_6c8a80(v56, v54, v55, (__int64)&f_.v241);
      (*(void (**)(__int64))(*(_QWORD*)v58 + 40LL))(v58);
      if ((unsigned __int8)v238 == 1) {
        LODWORD(v59) = v54 + 32 * v55;
        v59 = (unsigned int)v59 >= 0x400 ? 0LL : (unsigned int)v59;
        v60 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
        if (*(__int16*)(v60 + 2LL * (unsigned int)v59 + 14440) < 0 &&
            *(__int16*)(v60 + 2 * v59 + 12392) < 0) {
          v61 = *(_QWORD*)(v216 + 32);
          if (v61 == 0) {
            goto LABEL_344;
          }
          (*(void (**)(__int64, char*))(*(_QWORD*)v61 + 48LL))(v61, a2);
          v240[0] = 1;
        }
      }
    }
  }
LABEL_93:
  v70 = v13[76];
  a3 = v216;
  if (v70 != nullptr) {
    if (*v220 != 0) {
      v71 = game_UnitPool_Get(v220);
    }
    else {
      v71 = nullptr;
    }
    v72 = v239;
    v222 = v13;
    v208 = v246[0];
    v238 = (_WORD)v13[2] & 0xFFF;
    v73 = *(_QWORD*)(v216 + 32);
    if (v73 != 0) {
      if (v73 == v216) {
        f_.v224 = f_.v223;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v73 + 24LL))(v73, f_.v223);
        v74 = f_.v224;
      }
      else {
        v74 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
        f_.v224 = v74;
      }
    }
    else {
      v74 = nullptr;
      f_.v224 = nullptr;
    }
    f_.v225 = (__int64 (**)(void))v240;
    v75 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v76 = v75;
    *v75 = GameData_1f97c10;
    v75[2] = (__int64 (**)(void))a1;
    v75[3] = v222;
    if (v74 != nullptr) {
      if (v74 == f_.v223) {
        v75[8] = (__int64 (**)(void))(v75 + 4);
        (*(void (**)(_BYTE*))(*(_QWORD*)v74 + 24LL))(v74);
      }
      else {
        v75[8] = (__int64 (**)(void))(
            *(__int64 (**)(_BYTE*))(*(_QWORD*)v74 + 16LL))(v74);
      }
    }
    else {
      v75[8] = nullptr;
    }
    f_.v245 = v76;
    v76[10] = f_.v225;
    if (v71 != nullptr && (v238 & 0xFFF) != 0) {
      v77 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (v238 & 0xFFF));
      v78 = *(unsigned __int8*)(v77 + 280);
      if (*(_BYTE*)(v77 + 280) != 0 || (v78 = *((_DWORD*)v71 + 148)) != 0) {
        v79 = *((_QWORD*)v70 + 3);
        if (v79 != 0) {
          if (*(_BYTE*)(v77 + 105) == 3) {
            if (((v209 | (0x74u >> v211)) & 1) != 0) {
              goto LABEL_122;
            }
            v80 = 1;
            v81 = v213;
          }
          else {
            v81 = 0;
            v80 = 0;
          }
          v82 = v78 - 1;
          if ((unsigned int)(v78 - 1) >= 3) {
            v82 = 3;
          }
          if (v78 <= 0) {
            v83 = 0;
          }
          else {
            v83 = v82;
          }
          game_801020(v79 + 192LL * v81 + 48LL * v83, (__int64)v71,
                      (__int64)&v238, v208, v72, v80, (__int64)&f_.v241);
        }
      }
    }
  LABEL_122:
    ((void (*)(__int64 (***)(void)))(*v76)[5])(v76);
    if (f_.v224 == f_.v223) {
      a3 = v216;
      v13 = v217;
      v84 = 32;
    }
    else {
      a3 = v216;
      v13 = v217;
      if (f_.v224 == nullptr) {
        goto LABEL_127;
      }
      v84 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)f_.v224 + v84))((__int64)f_.v224);
  LABEL_127:
    if (*v220 == 0) {
      goto LABEL_154;
    }
    v85 = v13[76];
    v86 = game_UnitPool_Get(v220);
    if (v86 == nullptr) {
      goto LABEL_154;
    }
    if (((_WORD)v13[2] & 0xFFF) == 0) {
      goto LABEL_154;
    }
    v87 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                         8LL * ((_WORD)v13[2] & 0xFFF)) +
                              280LL);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * ((_WORD)v13[2] & 0xFFF)) +
                  280LL) == 0) {
      v87 = *((_DWORD*)v86 + 148);
      if (v87 == 0) {
        goto LABEL_154;
      }
    }
    v88 = *((_QWORD*)v85 + 3);
    v89 = v210 & (0x8Bu >> v211) ^ 1;
    if (v88 == 0) {
      LOBYTE(v89) = 1;
    }
    if ((v89 & 1) != 0) {
      goto LABEL_154;
    }
    v90 = v87 - 1;
    if ((unsigned int)(v87 - 1) >= 3) {
      v90 = 3;
    }
    v91 = v87 <= 0 ? 0 : v90;
    v92 = (char*)(v88 + 192LL * v213 + 48LL * v91);
    if (v92[34] == 0) {
      goto LABEL_154;
    }
    v93 = (unsigned __int8*)*GameData_212ce98[0];
    if (*GameData_212ce98[0] == 0) {
      goto LABEL_154;
    }
    v94 = v93[21];
    v95 = v239 + v92[33];
    v96 = v93[22];
    v97 = v246[0] + v92[32];
    v98 = v93[20];
    v99 = v93[23];
    v100 = *(_QWORD*)(a3 + 32);
    HIWORD(f_.v241) = -1;
    LOBYTE(f_.v241) = 0;
    LODWORD(f_.v242) = 0;
    BYTE5(f_.v241) = 0;
    *(_WORD*)((char*)&f_.v241 + 3) = 1033;
    if (v97 < v96) {
      LOBYTE(v96) = v97;
    }
    if (v95 < v99) {
      LOBYTE(v99) = v95;
    }
    if (v97 >= v98) {
      v101 = v96;
    }
    else {
      v101 = v98;
    }
    BYTE1(f_.v241) = v101;
    if (v95 >= v94) {
      v102 = v99;
    }
    else {
      v102 = v94;
    }
    BYTE2(f_.v241) = v102;
    if (v100 != 0) {
      (*(void (**)(__int64, __int64 (***)(void)))(*(_QWORD*)v100 + 48LL))(
          v100, &f_.v241);
      v240[0] = 1;
      goto LABEL_154;
    }
  LABEL_344:
    GameRoutine_60a310();
  }
LABEL_154:
  v36 = 0;
LABEL_155:
  v104 = (unsigned __int16*)(a1 + 32);
  v103 = *((unsigned __int16*)a1 + 16);
  if (*((_WORD*)a1 + 16) != 0) {
    v105 = *((unsigned __int16*)a1 + 16);
  }
  else {
    v105 = *(unsigned __int16*)v11;
  }
  v106 = *(_QWORD*)(*v12 + 64);
  v107 = *(_QWORD*)(v106 + 8LL * v105);
  v108 = *(unsigned __int8*)(v107 + 73);
  if (v108 == 10) {
    v111 = *(_QWORD*)(v107 + 192);
    LOBYTE(v239) = 0;
    if (v111 == 0) {
      v124 = 0;
    LABEL_250:
      v4 = v124 | v240[0];
      return v4 & 1;
    }
    if (*v220 != 0) {
      v112 = game_UnitPool_Get(v220);
    }
    else {
      v112 = nullptr;
    }
    v156 = *(_WORD*)(v111 + 16);
    v157 = *((_DWORD*)a1 + 3);
    v158 = *((_DWORD*)a1 + 4);
    f_.v245 = &f_.v241;
    v246[0] = v156 & 0xFFF;
    f_.v241 = GameData_1f97a10;
    f_.v242 = a1;
    f_.v243 = &v239;
    f_.v244 = a3;
    GameHr_757f60((__int64)v112, v246, v157, v158, (__int64)&f_.v241);
    if (f_.v245 == &f_.v241) {
      v159 = 4;
    }
    else {
      if (f_.v245 == nullptr) {
      LABEL_249:
        v124 = v239;
        goto LABEL_250;
      }
      v159 = 5;
    }
    ((__int64 (*)(__int64))(*f_.v245)[v159])((__int64)f_.v245);
    goto LABEL_249;
  }
  if (v108 == 9) {
    if ((v36 & 1) != 0) {
      v110 = 0;
    }
    else {
      v110 = (_WORD)v13[2] & 0xFFF;
    }
    v239 = v110;
    v115 = (unsigned __int8)a2[5];
    v114 = a2 + 5;
    if (v115 != 0) {
      v116 = game_UnitPool_Get(v114);
      if (v116 == nullptr) {
      LABEL_181:
        v4 = (unsigned __int8)v116 | v240[0];
        return v4 & 1;
      }
      v117 = (__int64)v116;
      if ((v116[52] & 4) != 0 ||
          (v118 = v116[218],
           v119 = *(unsigned int*)((char*)((char*)0x40LL) +
                                   game_g_shared_system_skills_ptr),
           v120 = v116[219] - v118,
           LODWORD(f_.v241) = *(_DWORD*)((_BYTE*)((char*)0x40LL) +
                                         game_g_shared_system_skills_ptr) &
                              0xFFF,
           ((v119 >> 5) & 0x7F) + 1 <= v120 >> 2) &&
              ((*(_DWORD*)(v118 + 4 * ((v119 >> 5) & 0x7F)) >> v119) & 1) !=
                  0 &&
              game_HasActiveSkill_843420(&f_.v241, (__int64)(v116 + 218)) ||
          *(int*)(v117 + 592) <= 1) {
        if ((UnitNatives_753e40((unsigned int*)&f_.v241, v246, v117,
                                *((_DWORD*)a1 + 3), *((_DWORD*)a1 + 4)) &
             1) != 0) {
          LOBYTE(v116) = GameRoutine_7807a0((__int64)a1, &v239,
                                            (unsigned int)f_.v241, v246[0], a3);
          goto LABEL_181;
        }
      }
    }
    LOBYTE(v116) = 0;
    goto LABEL_181;
  }
  if (v108 != 8) {
    if (*v220 != 0) {
      v113 = game_UnitPool_Get(v220);
      v103 = *v104;
      v106 = *(_QWORD*)(*v12 + 64);
    }
    else {
      v113 = nullptr;
    }
    if (v103 != 0) {
      v125 = (unsigned __int16*)(a1 + 32);
    }
    else {
      v125 = (unsigned __int16*)v11;
    }
    v126 = *(_QWORD*)(v106 + 8LL * *v125);
    if ((*(_BYTE*)(v126 + 336) & 0x40) == 0) {
    LABEL_282:
      v219 = 0;
      goto LABEL_283;
    }
    if (*v125 == 0) {
      v129 = 0;
      v160 = 0;
      goto LABEL_269;
    }
    v127 = *(_BYTE**)(v126 + 192);
    if (v127 == nullptr || *(unsigned __int8*)(v126 + 72) > 7u) {
      v129 = *(unsigned __int8*)(v126 + 92);
    }
    else {
      if (v127[105] != 0) {
        if (v127[104] == 2) {
          v161 = 0;
        }
        else {
          v161 = *(_QWORD*)(v126 + 192);
        }
      }
      else {
        v161 = 0;
      }
      if (v161 != 0) {
        v162 = (unsigned __int8*)(v161 + 278);
      }
      else {
        v162 = (unsigned __int8*)(v126 + 92);
      }
      v129 = *v162;
      if (v127[105] != 0) {
        if (v127[104] == 2) {
          v127 = nullptr;
        }
        goto LABEL_265;
      }
    }
    v127 = nullptr;
  LABEL_265:
    v163 = (unsigned __int8*)(v126 + 93);
    v164 = *(_QWORD*)(v126 + 24);
    v165 = (__int64)(v113 + 218);
    if (v127 != nullptr) {
      v166 = v127 + 279;
    }
    else {
      v166 = v163;
    }
    v167 = *v166;
    v160 = game_UnitSkillList_GetRangeAddImpl(v165, v164 + 8) + v167;
  LABEL_269:
    v168 = *((_DWORD*)a1 + 3);
    v169 = *((_DWORD*)a1 + 4);
    v170 = (unsigned __int8*)*GameData_212ce98[0];
    if (v168 - v160 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
      v171 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    }
    else {
      v171 = v168 - v160;
    }
    if (v169 - v160 <= v170[29]) {
      v172 = v170[29];
    }
    else {
      v172 = v169 - v160;
    }
    v173 = v170[30];
    v174 = v170[31];
    v175 = *((_DWORD*)a1 + 5) + v160;
    v176 = v175 + v168;
    if (v176 >= v173) {
      v177 = v173;
    }
    else {
      v177 = v176;
    }
    if (v175 + v169 < v174) {
      v174 = v175 + v169;
    }
    v215 = v174;
    if (v172 > v174 || v171 > v177) {
      goto LABEL_282;
    }
    v219 = 0;
    v212 = v171;
  LABEL_289:
    v179 = 32 * v172;
    while (1) {
      v182 = *((_DWORD*)a1 + 5);
      v184 = *((_DWORD*)a1 + 3);
      v183 = *((_DWORD*)a1 + 4);
      if ((unsigned int)(v182 * v182) < 2) {
        v193 = v171 - v184;
        if (v193 < 0) {
          v193 = -v193;
        }
        v194 = v172 - v183;
        if (v194 < 0) {
          v194 = -v194;
        }
        v187 = v194 + v193;
      }
      else if (v182 < 1) {
        v187 = 10000;
      }
      else {
        v185 = v182 + v183;
        v186 = v182 + v184;
        v187 = 10000;
        do {
          v188 = v172 - v183;
          v189 = v171 - v184;
          v190 = *((_DWORD*)a1 + 3);
          if (v172 - v183 < 0) {
            v188 = v183 - v172;
          }
          do {
            ++v190;
            if (v189 >= 0) {
              v191 = v189;
            }
            else {
              v191 = -v189;
            }
            --v189;
            v192 = v191 + v188;
            if (v192 < v187) {
              v187 = v192;
            }
          } while (v190 < v186);
          ++v183;
        } while (v183 < v185);
      }
      if (v187 < v129 || v187 > v160) {
        goto LABEL_294;
      }
      LODWORD(v196) = v171 + v179;
      v196 = (unsigned int)(v171 + v179) >= 0x400 ? 0LL : (unsigned int)v196;
      v197 =
          *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v196 + 8);
      if (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v196 + 8) == 0) {
        break;
      }
      v198 =
          *(_QWORD*)(GameData_21ca310 + 56) +
          2224LL * *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                       v196 + 8);
      v199 = v198 - 2224;
      v200 = v197 > 0xFA || v198 == 2224;
      if (v200 || *(_QWORD*)(v198 - 1832) == 0) {
        break;
      }
      v201 = v220;
      if (*v220 == 0 ||
          (v202 = game_UnitPool_Get(v220), v201 = v220, v202 == nullptr)) {
      LABEL_333:
        v199 = 0;
        if (*v201 == 0) {
          goto LABEL_334;
        }
        goto LABEL_337;
      }
      v203 = (__int64)v202;
      if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 16LL))(a1) & 1) != 0) {
        v204 = Unit_6c9cf0(v203, v199);
        a3 = v216;
        v201 = v220;
        if ((v204 & 1) == 0) {
          goto LABEL_333;
        }
        goto LABEL_336;
      }
      a3 = v216;
      v201 = v220;
      if (*v220 == 0) {
      LABEL_334:
        v205 = nullptr;
        goto LABEL_338;
      }
    LABEL_337:
      v205 = game_UnitPool_Get(v201);
    LABEL_338:
      if ((MapUtil_753920((__int64)v205, v125, v199) & 1) != 0) {
        LOBYTE(f_.v241) = 0;
        LODWORD(f_.v242) = 0;
        BYTE4(f_.v241) = 0;
        HIWORD(f_.v241) = -1;
        if (v199 != 0) {
          BYTE5(f_.v241) = *(_BYTE*)(v199 + 2088);
          v206 = *(_QWORD*)(v199 + 440);
          if (v206 != 0) {
            v180 = *(_BYTE*)(v206 + 16);
            goto LABEL_292;
          }
        }
        else {
          BYTE5(f_.v241) = 0;
        }
        v180 = 9;
      LABEL_292:
        v181 = *(_QWORD*)(a3 + 32);
        BYTE3(f_.v241) = v180;
        BYTE1(f_.v241) = v171;
        BYTE2(f_.v241) = v172;
        if (v181 == 0) {
          goto LABEL_344;
        }
        (*(void (**)(__int64, __int64 (***)(void)))(*(_QWORD*)v181 + 48LL))(
            v181, &f_.v241);
        v219 = 1;
      }
    LABEL_294:
      v35 = v171++ < v177;
      if (!v35) {
        v171 = v212;
        v35 = v172++ < v215;
        if (!v35) {
        LABEL_283:
          v148 = v240[0];
          v149 = v219;
          goto LABEL_284;
        }
        goto LABEL_289;
      }
    }
    v201 = v220;
    v199 = 0;
  LABEL_336:
    if (*v201 == 0) {
      goto LABEL_334;
    }
    goto LABEL_337;
  }
  if ((v36 & 1) != 0) {
    v109 = 0;
  }
  else {
    v109 = (_WORD)v13[2] & 0xFFF;
  }
  v246[0] = v109;
  v121 = v11;
  if (a2[5] != 0) {
    v122 = game_UnitPool_Get(a2 + 5);
    v103 = *v104;
    v123 = (__int64)v122;
    v106 = *(_QWORD*)(*v12 + 64);
  }
  else {
    v123 = 0;
  }
  if (v103 != 0) {
    v130 = (__int64*)(a1 + 32);
  }
  else {
    v130 = v121;
  }
  if (v123 == 0) {
    goto LABEL_223;
  }
  v131 = *((_BYTE*)v130 + 3);
  v132 = *(unsigned __int8*)(*(_QWORD*)(v106 + 8LL * *(unsigned __int16*)v130) +
                             88LL);
  if ((*(_BYTE*)(v123 + 416) & 4) == 0) {
    v133 = *(_QWORD*)(v123 + 1744);
    v134 = *(unsigned int*)((char*)((char*)0x40LL) +
                            game_g_shared_system_skills_ptr);
    v135 = *(_QWORD*)(v123 + 1752) - v133;
    LODWORD(f_.v241) =
        *(_DWORD*)((_BYTE*)((char*)0x40LL) + game_g_shared_system_skills_ptr) &
        0xFFF;
    if ((((v134 >> 5) & 0x7F) + 1 > v135 >> 2 ||
         ((*(_DWORD*)(v133 + 4 * ((v134 >> 5) & 0x7F)) >> v134) & 1) == 0 ||
         !game_HasActiveSkill_843420(&f_.v241, v123 + 1744)) &&
        *(int*)(v123 + 592) > 1) {
      goto LABEL_223;
    }
  }
  v136 = v132 >> ((v131 & 8) != 0);
  v137 = a2[1];
  v138 = *GameData_212ce98[0];
  v139 = v137 - v136;
  v140 = v137 + v136;
  if (v139 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
    v141 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  }
  else {
    v141 = v139;
  }
  v142 = a2[2];
  if ((int)(v142 - v136) <= *(unsigned __int8*)(*GameData_212ce98[0] + 29)) {
    v143 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  }
  else {
    v143 = v142 - v136;
  }
  v144 = *(unsigned __int8*)(v138 + 30);
  v145 = *(unsigned __int8*)(v138 + 31);
  if (v140 >= v144) {
    v146 = v144;
  }
  else {
    v146 = v140;
  }
  if ((int)(v142 + v136) < v145) {
    v145 = v142 + v136;
  }
  v218 = v145;
  if (v143 <= v145 && v141 <= v146) {
    v150 = v141 + 32 * v143;
    v221 = 0;
    v214 = v141;
    do {
      v151 = v150;
      do {
        v152 = v141 - a2[1];
        if (v152 < 0) {
          v152 = a2[1] - v141;
        }
        v153 = v143 - a2[2];
        if (v153 < 0) {
          v153 = a2[2] - v143;
        }
        if (v152 + v153 - 1 < v136 &&
            TargetEnumerator_780410(a1, v123, v246[0], v141, v143)) {
          if (v151 >= 0x400) {
            v154 = 0;
          }
          else {
            v154 = v151;
          }
          v155 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
          if (*(__int16*)(v155 + 2LL * (unsigned int)v154 + 14440) < 0 &&
              *(__int16*)(v155 + 2 * v154 + 12392) < 0) {
            v221 |= GameRoutine_7807a0((__int64)a1, v246, v141, v143, v216);
          }
        }
        ++v151;
        v35 = v141++ < v146;
      } while (v35);
      v141 = v214;
      v150 += 32;
      v35 = v143++ < v218;
    } while (v35);
  }
  else {
  LABEL_223:
    LOBYTE(v221) = 0;
  }
  v148 = v240[0];
  v149 = v221;
LABEL_284:
  v4 = v149 | v148;
  return v4 & 1;
}

__int64 game_map_79f000(__int64 a1, _DWORD* a2)
{

#pragma clang fp contract(fast)

  __int64 v2;
  __int64 v4;
  __int64 result;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int16* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  _WORD* v16;
  __int64 v17;
  float* v18;
  __int64 v19;
  _WORD* v20;
  __int64 v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  float* v26;
  __int64 v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  unsigned __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  __int64 v44;
  __int16 v45;
  __int64 v46;
  float v47;
  float v48;
  __int64 v49;
  __int64 v50;
  int v51;
  int v52;
  __int64 v53;
  int v54;
  __int64 v55;
  signed int v56;
  bool v57;
  int v58;
  bool v59;
  __int64 v60;
  bool v61;
  int v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  int v67;
  bool v68;
  int v69;
  int v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;
  __int64 v74;
  unsigned int v75;
  unsigned int v76;
  int v77;
  bool v78;
  __int16 v79;
  __int16 v80;
  __int16 v81;
  __int16 v82;
  __int16 v83;
  __int16 v84;
  __int16 v85;
  __int16 v86;
  __int16 v87;
  char v88;
  __int64 v89;
  _WORD* v90;
  __int64 v91;
  __int16 v92;
  _WORD* v93;
  __int16 v94;
  int v95;
  unsigned int v96;
  char* v97;
  __int64 v98;
  int v99;
  __int64 v100;
  int v101;
  int v102;
  char v103;
  char v104;
  __int64 v105;
  char v106;
  int v107;
  char v108;
  _DWORD* v109;
  char v110;
  __int16 v111;
  __int64 v112;
  _QWORD v113[2];
  int v114;
  __int64 v115;
  int v116;
  int v117;

  v2 = *(_QWORD*)(a1 + 24);
  v4 = a1;
  if (v2 == 0 || *(_QWORD*)(v2 + 392) == 0) {
    result = 0;
    if ((*(_BYTE*)(*(_QWORD*)(v4 + 8) + 11277LL) & 0x80) != 0) {
      return result;
    }
    v6 = *(_QWORD**)(v4 + 32);
    if (v6 == nullptr) {
      return result;
    }
    if (((unsigned int)X8CALL_X0(
             _QWORD*,
             (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))*v6)(
                 (void*)v6, *(_QWORD*)(v4 + 32))) &
         1) == 0) {
      return 0;
    }
  }
  if ((*a2 & 0xFFF) == 0) {
    return 0;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a2 & 0xFFF));
  switch (*(_BYTE*)(v7 + 250)) {
  case 9:
    v8 = *(_QWORD*)(v4 + 8);
    if (*(unsigned __int8*)(v4 + 16) > 3u) {
      v9 = 3160;
    }
    else {
      v9 = GameData_1b01828[*(unsigned __int8*)(v4 + 16)];
    }
    if (*(_WORD*)(v7 + 256) != 0) {
      v35 = **(__int16**)(v7 + 264);
    }
    else {
      v35 = 0;
    }
    v50 = v8 + 16;
    if ((*(_BYTE*)(v8 + 11276) & 1) != 0) {
      v51 = 1;
      if (*(_BYTE*)(v4 + 16) == 0 && *(_BYTE*)(v7 + 272) == 3) {
        if (*(int*)(v8 + 11284) <= 1) {
          v51 = 1;
        }
        else {
          v51 = *(_DWORD*)(v8 + 11284);
        }
      }
    }
    else {
      v51 = 1;
    }
    v52 = v51 * v35;
    if (!((v52 + *(int*)(v50 + v9) < 0) ^ __OFADD__(v52, *(_DWORD*)(v50 + v9)) |
          (v52 + *(_DWORD*)(v50 + v9) == 0))) {
      *(_DWORD*)(v50 + v9) = -v52;
    }
    goto LABEL_147;
  case 0xA:
    v27 = *(_QWORD*)(v4 + 8);
    v28 = *(unsigned __int8*)(v4 + 16);
    v29 = *(_DWORD*)(v27 + 11276);
    if ((v29 & 0x10000) != 0) {
      if (v28 > 3) {
        v36 = 3160;
      }
      else {
        v36 = GameData_1b01828[*(unsigned __int8*)(v4 + 16)];
      }
      v63 = *(_QWORD*)(v4 + 24);
      v64 = v27 + 16;
      LOBYTE(v113[0]) = 0;
      v65 = game_Unit_GetParam_alt1(v63, v113, 1);
      v66 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*a2 & 0xFFF));
      if (*(_WORD*)(v66 + 256) != 0) {
        v67 = **(__int16**)(v66 + 264);
        if (v67 != 0) {
          v68 = v67 < 0;
          if (v67 < 0) {
            v67 = -v67;
          }
          v67 = (v65 * v67 + 99) / 100;
          if (v68) {
            v67 = -v67;
          }
        }
      }
      else {
        v67 = 0;
      }
      if (!(((int)(v67 + *(_DWORD*)(v64 + v36)) < 0) ^
                __OFADD__(v67, *(_DWORD*)(v64 + v36)) |
            (v67 + *(_DWORD*)(v64 + v36) == 0))) {
        *(_DWORD*)(v64 + v36) = -v67;
      }
    }
    else {
      if (v28 > 3) {
        v30 = 3160;
      }
      else {
        v30 = GameData_1b01828[*(unsigned __int8*)(v4 + 16)];
      }
      v58 = *(unsigned __int16*)(v7 + 256);
      if (*(_WORD*)(v7 + 256) != 0) {
        v58 = **(__int16**)(v7 + 264);
        if (**(_WORD**)(v7 + 264) != 0) {
          v59 = v58 < 0;
          if (v58 < 0) {
            v58 = -v58;
          }
          v58 = (*(_DWORD*)(v4 + 100) * v58 + 99) / 100;
          if (v59) {
            v58 = -v58;
          }
        }
      }
      v60 = v27 + 16;
      if ((v29 & 1) != 0 &&
          (*(_BYTE*)(v7 + 272) == 3 ? (v61 = v28 == 0) : (v61 = false), v61)) {
        v62 = *(_DWORD*)(v27 + 11284);
        if (v62 <= 1) {
          v62 = 1;
        }
      }
      else {
        v62 = 1;
      }
      v69 = v62 * v58;
      if (!(((int)(v69 + *(_DWORD*)(v60 + v30)) < 0) ^
                __OFADD__(v69, *(_DWORD*)(v60 + v30)) |
            (v69 + *(_DWORD*)(v60 + v30) == 0))) {
        *(_DWORD*)(v60 + v30) = -v69;
      }
    }
    goto LABEL_147;
  case 0x11:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) != 0) {
      GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
      __cxa_guard_release_alt1(&GameData_21d41b0);
    }
    v25 = *(_QWORD*)(v4 + 168);
    if (v25 != 0) {
      v26 = (float*)(*(_QWORD*)(*(_QWORD*)(v4 + 136) +
                                8 * ((unsigned __int64)(v25 +
                                                        *(_QWORD*)(v4 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v25 + *(_DWORD*)(v4 + 160) - 1) & 0xF));
    }
    else {
      v26 = (float*)&GameData_21d40b8_alt1;
    }
    v53 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v53 + 256) != 0) {
      v54 = **(__int16**)(v53 + 264);
      if (v54 > 0) {
        v26[18] = (float)((float)(unsigned int)v54 + -1.0f) + v26[18];
        goto LABEL_147;
      }
    }
    else {
      v54 = 0;
    }
    v26[19] = v26[19] * (float)v54;
  LABEL_147:
    v70 = *a2;
    v71 = *a2 & 0xFFFLL;
    v72 = *(_QWORD*)(*GameData_212c880[0] + 64);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v72 + 8 * v71) + 24LL) + 1115LL) == 1) {
      v73 = -1;
      v109 = a2;
      v112 = v4;
      do {
        v74 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                         8LL * (v70 & 0xFFF));
        v75 = BattleSide_79fd30_alt1(v4);
        if (v75 < 2 || ((v76 = *(unsigned __int8*)(v74 + 104), v57 = v76 > 6,
                         v77 = (1 << v76) & 0x68, !v57)
                            ? (v78 = v77 == 0)
                            : (v78 = true),
                        v78)) {
          v79 = *(_WORD*)(v74 + 330);
          v80 = *(_WORD*)(v74 + 332);
        }
        else {
          v79 = *(_WORD*)(v74 + 330) * v75;
          v80 = *(_WORD*)(v74 + 332) * v75;
        }
        v111 = v79;
        v81 = *(_WORD*)(v74 + 334);
        v82 = *(_WORD*)(v74 + 336);
        v83 = *(_WORD*)(v74 + 338);
        v84 = *(_WORD*)(v74 + 340);
        v85 = *(_WORD*)(v74 + 342);
        v86 = *(_WORD*)(v74 + 344);
        v87 = *(_WORD*)(v74 + 346);
        v110 = BattleSide_79ff80_alt1(v112);
        v88 = BattleSide_7a0260_alt1(
            *(_QWORD*)(v112 + 8) + 760LL * *(unsigned __int8*)(v112 + 17) + 16);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                  memory_order_acquire) &
             1) == 0) {
          v108 = v88;
          v95 = __cxa_guard_acquire_alt1(&GameData_21d41b0);
          v88 = v108;
          if (v95 != 0) {
            GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
            __cxa_guard_release_alt1(&GameData_21d41b0);
            v88 = v108;
          }
        }
        v89 = *(_QWORD*)(v112 + 168);
        if (v89 != 0) {
          v90 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v112 + 136) +
                                    8 * ((unsigned __int64)(v89 +
                                                            *(_QWORD*)(v112 +
                                                                       160) -
                                                            1) >>
                                         4)) +
                         244LL * (((_DWORD)v89 + *(_DWORD*)(v112 + 160) - 1) &
                                  0xF));
        }
        else {
          v90 = &GameData_21d40b8_alt1;
        }
        if (((unsigned __int16)(v111 | v80 | v81 | v82 | v83 | v84 | v85) |
             (unsigned __int16)(v86 | v87)) != 0) {
          v91 = 49;
          if ((v110 & 1) != 0) {
            v92 = v80;
          }
          else {
            v92 = v111;
          }
          if ((v88 & 1) != 0) {
            v91 = 57;
          }
          v93 = &v90[v91];
          v90[41] += v92;
          v90[49] += v83;
          v90[57] += v85;
          v90[65] += v87;
          v90[73] += v84;
          v90[81] += v86;
          if ((v88 & 1) != 0) {
            v94 = v82;
          }
          else {
            v94 = v81;
          }
          v93[40] += v94;
        }
        a2 = v109;
        v4 = v112;
        ++v73;
        v70 = *v109;
      } while (v73 < ((*v109 >> 19) & 0x1Fu));
      v72 = *(_QWORD*)(GameData_21c99b0 + 64);
      v71 = v70 & 0xFFF;
    }
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v72 + 8 * v71) + 24LL) + 1114LL) == 1) {
      v96 = -1;
      do {
        v98 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                         8LL * (v70 & 0xFFF));
        v99 = *(_DWORD*)(v98 + 352);
        v100 = *(_QWORD*)(v98 + 356);
        LODWORD(v113[0]) = *(_DWORD*)(v98 + 348);
        HIDWORD(v113[0]) = v99;
        v101 = *(_DWORD*)(v98 + 364);
        v102 = *(_DWORD*)(v98 + 380);
        v113[1] = v100;
        v115 = *(_QWORD*)(v98 + 368);
        v114 = v101;
        v116 = *(_DWORD*)(v98 + 376);
        v117 = v102;
        v103 = BattleSide_79ff80_alt1(v4);
        v104 = BattleSide_7a0260_alt1(
            *(_QWORD*)(v4 + 8) + 760LL * *(unsigned __int8*)(v4 + 17) + 16);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                  memory_order_acquire) &
             1) == 0) {
          v106 = v104;
          v107 = __cxa_guard_acquire_alt1(&GameData_21d41b0);
          v104 = v106;
          if (v107 != 0) {
            GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
            __cxa_guard_release_alt1(&GameData_21d41b0);
            v104 = v106;
          }
        }
        v105 = *(_QWORD*)(v4 + 168);
        if (v105 != 0) {
          v97 =
              (char*)(*(_QWORD*)(*(_QWORD*)(v4 + 136) +
                                 8 * ((unsigned __int64)(v105 +
                                                         *(_QWORD*)(v4 + 160) -
                                                         1) >>
                                      4)) +
                      244LL *
                          (((_DWORD)v105 + *(_DWORD*)(v4 + 160) - 1) & 0xF));
        }
        else {
          v97 = (char*)&GameData_21d40b8_alt1;
        }
        GameRoutine_9a2630_alt1(v97 + 80, v113, v103 & 1, v104 & 1);
        v70 = *a2;
        ++v96;
      } while (v96 < ((*a2 >> 19) & 0x1Fu));
    }
    result = 1;
    break;
  case 0x16:
    v21 = *(_QWORD*)(v4 + 8) + 16LL;
    v22 = *(_DWORD*)(v21 + 760LL * *(unsigned __int8*)(v4 + 17) + 120);
    if (v22 < 1) {
      return 0;
    }
    v23 = *(unsigned __int8*)(v4 + 16);
    if (v23 > 3) {
      v24 = 3160;
    }
    else {
      v24 = GameData_1b01828[v23];
    }
    if (*(_WORD*)(v7 + 256) != 0) {
      v56 = **(__int16**)(v7 + 264);
      if (v56 != 0) {
        v57 = v56 < 0;
        if (v56 < 0) {
          v56 = -v56;
        }
        v56 = (v22 * v56 + 99) / 0x64u;
        if (v57) {
          v56 = -v56;
        }
      }
    }
    else {
      v56 = 0;
    }
    if (!(((int)(v56 + *(_DWORD*)(v21 + v24)) < 0) ^
              __OFADD__(v56, *(_DWORD*)(v21 + v24)) |
          (v56 + *(_DWORD*)(v21 + v24) == 0))) {
      *(_DWORD*)(v21 + v24) = -v56;
    }
    goto LABEL_147;
  case 0x17:
    v14 = *(_DWORD*)(v4 + 96);
    result = 0;
    if (*(_DWORD*)(v4 + 120) < v14 || v14 < 2) {
      return result;
    }
    *(_DWORD*)(v4 + 120) = v14 - 1;
    goto LABEL_147;
  case 0x19:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) != 0) {
      GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
      __cxa_guard_release_alt1(&GameData_21d41b0);
    }
    v17 = *(_QWORD*)(v4 + 168);
    if (v17 != 0) {
      v18 = (float*)(*(_QWORD*)(*(_QWORD*)(v4 + 136) +
                                8 * ((unsigned __int64)(v17 +
                                                        *(_QWORD*)(v4 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v17 + *(_DWORD*)(v4 + 160) - 1) & 0xF));
    }
    else {
      v18 = (float*)&GameData_21d40b8_alt1;
    }
    v46 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v46 + 256) != 0) {
      v47 = (float)**(__int16**)(v46 + 264);
    }
    else {
      v47 = 0.0f;
    }
    v48 = v47 / 100.0f;
    if (v48 >= 1.0f) {
      v18[2] = (float)(v48 + -1.0f) + v18[2];
    }
    else {
      v18[3] = v48 * v18[3];
    }
    goto LABEL_147;
  case 0x1A:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) != 0) {
      GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
      __cxa_guard_release_alt1(&GameData_21d41b0);
    }
    v31 = *(_QWORD*)(v4 + 168);
    if (v31 != 0) {
      v11 =
          (__int16*)(*(_QWORD*)(*(_QWORD*)(v4 + 136) +
                                8 * ((unsigned __int64)(v31 +
                                                        *(_QWORD*)(v4 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v31 + *(_DWORD*)(v4 + 160) - 1) & 0xF));
    }
    else {
      v11 = (__int16*)&GameData_21d40b8_alt1;
    }
    v55 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v55 + 256) != 0) {
      v43 = **(__int16**)(v55 + 264);
    }
    else {
      v43 = 0;
    }
    goto LABEL_98;
  case 0x21:
    if (*(_WORD*)(v7 + 256) != 0) {
      v32 = **(__int16**)(v7 + 264);
    }
    else {
      v32 = 0;
    }
    *(_DWORD*)(v4 + 108) += v32;
    goto LABEL_147;
  case 0x22:
    if (*(_WORD*)(v7 + 256) != 0) {
      *(_DWORD*)(v4 + 108) = **(__int16**)(v7 + 264);
    }
    else {
      *(_DWORD*)(v4 + 108) = 0;
    }
    goto LABEL_147;
  case 0x2F:
    v33 = *(unsigned __int8*)(v4 + 17);
    if (v33 > 3) {
      v34 = 4;
    }
    else {
      v34 = GameData_1b01588[v33];
    }
    v37 = game_g_shared_system_skills_ptr;
    v38 = *(_QWORD*)(v4 + 8) + 760 * v34 + 16;
    LODWORD(v113[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN**)0x38LL) +
                                  game_g_shared_system_skills_ptr) &
                       0xFFF;
    if ((BattleInfo_79c940_alt1(v38, v113) & 1) == 0) {
      LODWORD(v113[0]) =
          *(_DWORD*)((_BYTE*)&(*(__int64 (*)[2])0x28LL)[1] + v37 + 4) & 0xFFF;
      if ((BattleInfo_79c940_alt1(v4, v113) & 1) == 0) {
        v39 = BattleSide_79ec90_alt1(v4);
        v40 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                         8LL * (*a2 & 0xFFF));
        if (*(_WORD*)(v40 + 256) != 0) {
          *(_WORD*)(v39 + 20) = **(_WORD**)(v40 + 264);
        }
        else {
          *(_WORD*)(v39 + 20) = 0;
        }
      }
    }
    goto LABEL_147;
  case 0x30:
    LODWORD(v113[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN**)0x38LL) +
                                  game_g_shared_system_skills_ptr + 4) &
                       0xFFF;
    if ((BattleInfo_79c940_alt1(v4, v113) & 1) == 0) {
      v12 = BattleSide_79ec90_alt1(v4);
      v13 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*a2 & 0xFFF));
      if (*(_WORD*)(v13 + 256) != 0) {
        *(_WORD*)(v12 + 36) = **(_WORD**)(v13 + 264);
      }
      else {
        *(_WORD*)(v12 + 36) = 0;
      }
    }
    goto LABEL_147;
  case 0x31:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) != 0) {
      GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
      __cxa_guard_release_alt1(&GameData_21d41b0);
    }
    v19 = *(_QWORD*)(v4 + 168);
    if (v19 != 0) {
      v20 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 136) +
                                8 * ((unsigned __int64)(v19 +
                                                        *(_QWORD*)(v4 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v19 + *(_DWORD*)(v4 + 160) - 1) & 0xF));
    }
    else {
      v20 = &GameData_21d40b8_alt1;
    }
    v49 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v49 + 256) != 0) {
      v20[2] = **(_WORD**)(v49 + 264);
    }
    else {
      v20[2] = 0;
    }
    goto LABEL_147;
  case 0x32:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) != 0) {
      GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
      __cxa_guard_release_alt1(&GameData_21d41b0);
    }
    v15 = *(_QWORD*)(v4 + 168);
    if (v15 != 0) {
      v16 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 136) +
                                8 * ((unsigned __int64)(v15 +
                                                        *(_QWORD*)(v4 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v15 + *(_DWORD*)(v4 + 160) - 1) & 0xF));
    }
    else {
      v16 = &GameData_21d40b8_alt1;
    }
    v44 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v44 + 256) != 0) {
      v45 = **(_WORD**)(v44 + 264);
    }
    else {
      v45 = 0;
    }
    v16[1] += v45;
    goto LABEL_147;
  case 0x33:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) != 0) {
      GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
      __cxa_guard_release_alt1(&GameData_21d41b0);
    }
    v10 = *(_QWORD*)(v4 + 168);
    if (v10 != 0) {
      v11 =
          (__int16*)(*(_QWORD*)(*(_QWORD*)(v4 + 136) +
                                8 * ((unsigned __int64)(v10 +
                                                        *(_QWORD*)(v4 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v10 + *(_DWORD*)(v4 + 160) - 1) & 0xF));
    }
    else {
      v11 = (__int16*)&GameData_21d40b8_alt1;
    }
    v41 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v41 + 256) != 0) {
      v42 = **(__int16**)(v41 + 264);
    }
    else {
      v42 = 0;
    }
    v43 = v42 + v11[3];
  LABEL_98:
    if (v43 <= -999) {
      v43 = -999;
    }
    if (v43 >= 999) {
      LOWORD(v43) = 999;
    }
    v11[3] = v43;
    goto LABEL_147;
  default:
    goto LABEL_147;
  }
  return result;
}

__int64 game_map_7a9bf0(__int64 a1, char a2, char a3)
{
  unsigned int v3;
  int v4;
  float v7;
  __int128 v8;
  float v9;
  long double v10;
  float v11;
  _QWORD* v12;
  __int64 v13;
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
  _QWORD* v26;
  __int64 v27;
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
  _QWORD* v46;
  float v47;
  __int64 v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  __int64 v57;
  float v58;
  float v59;
  __int64 v60;
  __int64 v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  struct {
    __int128 v79;
    char gap80_[88];
    float v80;
    float v81;
  } v79_;

  v3 = 2;
  if (a1 == 0 || GameData_21cd140 == 0) {
    return v3;
  }
  v4 = *(_DWORD*)(a1 + 592);
  v7 = (float)(unsigned int)(v4 - 1) * 0x1.4000000000000p+1f;
  if (!(v4 > 0)) {
    v7 = 0x0.0p+0f;
  }
  v72 =
      (float)((float)((float)((float)(unsigned int)(*(char*)(a1 + 584) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v7;
  v74 =
      (float)((float)((float)((float)(unsigned int)(*(char*)(a1 + 585) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v7;
  *(_QWORD*)&v8 = LODWORD(v72);
  *((_QWORD*)&v8 + 1) = LODWORD(v74);
  v79_.v79 = v8;
  Unit_6c7fa0(a1, (__int64)&v79_.v79);
  v9 =
      (float)((float)((float)(unsigned int)(a2 + 256) * 0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f;
  *(float*)&v10 =
      (float)((float)(unsigned int)(a3 + 256) * 0x1.4000000000000p+2f) +
      0x1.4000000000000p+1f;
  v11 = *(float*)&v10 + -0x1.4000000000000p+10f;
  if (GameData_21ca2e8 != 0) {
    *(float*)&v10 =
        Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456), v9, v11);
  }
  v12 = *(_QWORD**)(GameData_21cd140 + 432);
  v13 = v12[2];
  v12 += 2;
  v14 = (*(float (**)(_QWORD*, long double))(v13 + 16))(v12, v10);
  v15 = (*(float (**)(_QWORD*))(*v12 + 16LL))(v12);
  v16 = fmodf(v15, 0x1.6800000000000p+8f);
  if (v14 < 0x0.0p+0f) {
    v16 = v16 + 0x1.6800000000000p+8f;
  }
  v17 = (float)(PSEUDO_UNFUSED(v16 * 0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)(v16 * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  v18 = -0x1.921fb60000000p+1f - v17;
  if (!(v17 < -0x1.921fb60000000p+0f)) {
    v18 = v17;
  }
  if (v17 > 0x1.921fb60000000p+0f) {
    v19 = 0x1.921fb60000000p+1f - v17;
  }
  else {
    v19 = v18;
  }
  v20 = *((float*)GameData_212c190 + 1);
  v21 = v20 - (float)(*(float*)GameData_212c190 * (float)(v19 * v19));
  v79_.v80 = -*(float*)GameData_212c190;
  v79_.v81 = v20;
  v22 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v23 = -(float)(v22 - (float)(v21 * (float)(v19 * v19)));
  v24 = -v22;
  v25 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v77 = v24;
  v78 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v26 = *(_QWORD**)(GameData_21cd140 + 432);
  v76 = -v25;
  v27 = v26[2];
  v26 += 2;
  v69 =
      v19 *
      (float)((float)((float)-(
                          float)(v25 -
                                 (float)((float)(v78 +
                                                 (float)(v23 *
                                                         (float)(v19 * v19))) *
                                         (float)(v19 * v19))) *
                      (float)(v19 * v19)) +
              0x1.0000000000000p+0f);
  v70 = v11;
  v28 = v9 - v72;
  v29 = (*(float (**)(_QWORD*))(v27 + 16))(v26);
  v30 = (*(float (**)(_QWORD*))(*v26 + 16LL))(v26);
  v31 = fmodf(v30, 0x1.6800000000000p+8f);
  if (v29 < 0x0.0p+0f) {
    v31 = v31 + 0x1.6800000000000p+8f;
  }
  v32 = (float)(PSEUDO_UNFUSED(v31 * 0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)(v31 * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v32 < -0x1.921fb60000000p+0f) {
    v33 = -0x1.0000000000000p+0f;
  }
  else {
    v33 = 0x1.0000000000000p+0f;
  }
  v34 = -0x1.921fb60000000p+1f - v32;
  if (!(v32 < -0x1.921fb60000000p+0f)) {
    v34 = v32;
  }
  if (v32 > 0x1.921fb60000000p+0f) {
    v35 = 0x1.921fb60000000p+1f - v32;
  }
  else {
    v35 = v34;
  }
  v36 = *(float*)GameData_212c188;
  v37 = *((float*)GameData_212c188 + 1);
  if (v32 > 0x1.921fb60000000p+0f) {
    v38 = -0x1.0000000000000p+0f;
  }
  else {
    v38 = v33;
  }
  v39 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v40 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v41 = v35 * v35;
  v42 = -v36;
  v43 = -v39;
  v44 = -(float)(v39 - (float)((float)(v37 - (float)(v36 * v41)) * v41));
  v45 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v46 = *(_QWORD**)(GameData_21cd140 + 432);
  v47 = -v45;
  v48 = v46[2];
  v46 += 2;
  v49 = v38 *
        (float)((float)((float)-(
                            float)(v45 -
                                   (float)((float)(v40 + (float)(v44 * v41)) *
                                           v41)) *
                        v41) +
                0x1.0000000000000p+0f);
  v50 = v74;
  v75 = v28;
  v71 = v70 - v50;
  v73 = (float)(PSEUDO_UNFUSED(v71 * v49)) + (float)(v69 * v28);
  v51 = (*(float (**)(_QWORD*))(v48 + 16))(v46);
  v52 = (*(float (**)(_QWORD*))(*v46 + 16LL))(v46);
  v53 = fmodf(v52, 0x1.6800000000000p+8f);
  if (v51 < 0x0.0p+0f) {
    v53 = v53 + 0x1.6800000000000p+8f;
  }
  v54 = (float)(PSEUDO_UNFUSED(v53 * 0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)(v53 * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v54 < -0x1.921fb60000000p+0f) {
    v55 = -0x1.0000000000000p+0f;
  }
  else {
    v55 = 0x1.0000000000000p+0f;
  }
  v56 = -0x1.921fb60000000p+1f - v54;
  if (!(v54 < -0x1.921fb60000000p+0f)) {
    v56 = v54;
  }
  v57 = *(_QWORD*)(GameData_21cd140 + 432);
  if (v54 > 0x1.921fb60000000p+0f) {
    v58 = 0x1.921fb60000000p+1f - v54;
  }
  else {
    v58 = v56;
  }
  if (v54 > 0x1.921fb60000000p+0f) {
    v59 = -0x1.0000000000000p+0f;
  }
  else {
    v59 = v55;
  }
  v61 = *(_QWORD*)(v57 + 16);
  v60 = v57 + 16;
  v62 =
      v59 *
      (float)((float)((float)(v47 +
                              (float)((float)(v40 +
                                              (float)((float)(v43 +
                                                              (float)((float)(v37 +
                                                                              (float)(v42 *
                                                                                      (float)(v58 *
                                                                                              v58))) *
                                                                      (float)(v58 *
                                                                              v58))) *
                                                      (float)(v58 * v58))) *
                                      (float)(v58 * v58))) *
                      (float)(v58 * v58)) +
              0x1.0000000000000p+0f);
  v63 = (*(float (**)(__int64))(v61 + 16))(v60);
  v64 = (*(float (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
  v65 = fmodf(v64, 0x1.6800000000000p+8f);
  if (v63 < 0x0.0p+0f) {
    v65 = v65 + 0x1.6800000000000p+8f;
  }
  v66 = (float)(PSEUDO_UNFUSED(v65 * 0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)(v65 * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (!(v66 > 0x1.921fb60000000p+0f)) {
    if (!(v66 < -0x1.921fb60000000p+0f)) {
      goto LABEL_47;
    }
    v67 = -0x1.921fb60000000p+1f;
  }
  else {
    v67 = 0x1.921fb60000000p+1f;
  }
  v66 = v67 - v66;
LABEL_47:
  v3 = v73 > 0x0.0p+0f;
  if (!((float)(fabsf(
                    (float)(v62 * v75) -
                    (float)(PSEUDO_UNFUSED(
                        v71 *
                        (float)(v66 *
                                (float)((float)((float)(v76 +
                                                        (float)((float)(v78 +
                                                                        (float)((float)(v77 +
                                                                                        (float)((float)(v79_.v81 +
                                                                                                        (float)(v79_.v80 *
                                                                                                                (float)(v66 *
                                                                                                                        v66))) *
                                                                                                (float)(v66 *
                                                                                                        v66))) *
                                                                                (float)(v66 *
                                                                                        v66))) *
                                                                (float)(v66 *
                                                                        v66))) *
                                                (float)(v66 * v66)) +
                                        0x1.0000000000000p+0f))))) +
                0x1.99999a0000000p-4f) < fabsf(v73))) {
    return 2;
  }
  return v3;
}

_QWORD* game_map_7bfd40(__int64 a1, char a2, float a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  _QWORD* result;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  _QWORD v18[25];

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = (__int64*)(a1 + 16);
  v6 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 16) + 16LL))(a1 + 16),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = (*(float (**)(__int64*))(*v3 + 16))(v3),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = fmodf(v7, 0x1.6800000000000p+8f),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (!(v6 < 0x0.0p+0f)) {
    v9 = v8;
  }
  else {
    v9 = v8 + 0x1.6800000000000p+8f;
  }
  v10 = fmodf(a3, 0x1.6800000000000p+8f),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = v10 + 0x1.6800000000000p+8f;
  if (!(a3 < 0x0.0p+0f)) {
    v11 = v10;
  }
  if ((float)(v9 + 0x1.6800000000000p+7f) < v11) {
    v12 = 0x1.6800000000000p+8f;
  LABEL_10:
    v9 = v9 + v12;
    goto LABEL_11;
  }
  if ((float)(v9 + -0x1.6800000000000p+7f) > v11) {
    v12 = -0x1.6800000000000p+8f;
    goto LABEL_10;
  }
LABEL_11:
  result = (_QWORD*)Situation_7677a0(v3, v9, v11, 0x1.8000000000000p-1f),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((a2 & 1) == 0) {
    return result;
  }
  result = v16_.v16;
  v16_.v17 = v16_.v16;
  v16_.v16[0] = GameData_1f9a258;
  v16_.v16[1] = game_sound_PlayCameraTurnSe_ptr;
  if (*GameData_212cfc8[0] != 0) {
    if (*(int*)(*GameData_212cfc8[0] + 424) > 0) {
      v15 = 32;
      result = v16_.v16;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v15))(result,
                                                                         v14);
    }
    snd_Fade_Fade_10c830((__int64)v18, 0x0.0p+0f),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_play_ff2d0((__int64)"SE_SYS_Camera_Turn", (__int64)"SE_SYS_Camera_Turn",
                   0x0.0p+0f, 0x1.0000000000000p+0f, (__int64)v18, 0, 0x10001u,
                   0),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_Fade_Destroy_Fade(v18),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = v16_.v17;
    if (v16_.v17 != v16_.v16) {
      if (v16_.v17 == nullptr) {
        return result;
      }
      v15 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v15))(result,
                                                                         v14);
    }
  }
  v15 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v15))(result,
                                                                     v14);
}

void game_map_8be740(char* a1, char* a2, char* a3, _DWORD* a4, __int64 a5,
                     __int64 a6, char* a7, __int64 a8)
{
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  char* v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  char* v36;
  int v37;
  char* v38;
  int v39;
  unsigned __int64 v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  unsigned int v45;
  unsigned __int64 v46;
  char* v47;
  int v48;
  int v49;
  char* v50;
  unsigned int v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  int v56;
  int v57;
  unsigned __int64 v58;
  unsigned int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  unsigned int v65;
  unsigned __int64 v66;
  char* v67;
  int v68;
  int v69;
  char* v70;
  unsigned int v71;
  int v72;
  int v73;
  int v74;
  char* v75;
  __int64 v76;
  __int64 v77;
  char* v78;
  char* v79;
  char* v80;
  char v81;
  char* v82;
  char* v83;
  char v84;
  char* v85;
  char* v86;
  _DWORD* v87;
  int v88;
  int v89;
  int v90;
  unsigned int v91;
  int v92;
  int v93;
  int v94;
  __int64 v95;
  int v96;
  int v97;
  int v98;
  int v99;
  unsigned int v100;
  int v101;
  unsigned int v102;
  int v103;
  int v104;
  int v105;
  unsigned int v106;
  bool v107;
  char* v108;
  __int64 v109;
  int v110;
  __int64 v111;
  int v112;
  __int64 v113;
  char* v114;
  __int64 v115;
  _DWORD* v116;
  _DWORD* v117;

  if (a6 != 0) {
    while (a5 > a8 && a6 > a8) {
      if (a5 == 0) {
        return;
      }
      v13 = *a2;
      v14 = a2[1];
      v15 = -a5;
      v16 = 0;
      v17 = v13 + 32 * v14;
      if (v17 >= 0x400) {
        v17 = 0;
      }
      v18 = *(_QWORD*)(*(_QWORD*)a4 + 8LL) + 64LL;
      v19 = *(unsigned __int8*)(v18 + v17);
      v20 = a4[2];
      v21 = a4[3];
      v22 = v20 - v13;
      if (v22 < 0) {
        v22 = -v22;
      }
      v23 = v21 - v14;
      v24 = v22 + (v19 << 16);
      if (v23 < 0) {
        v23 = -v23;
      }
      v25 = v24 + v23;
      while (1) {
        v26 = &a1[v16];
        v27 = a1[v16];
        v28 = a1[v16 + 1];
        v29 = v27 + 32 * v28;
        if (v29 >= 0x400) {
          v29 = 0;
        }
        v30 = v20 - v27;
        v31 = *(unsigned __int8*)(v18 + v29);
        if (v30 < 0) {
          v30 = -v30;
        }
        v32 = v21 - v28;
        if (v32 < 0) {
          v32 = -v32;
        }
        if (v25 < v32 + v30 + (v31 << 16)) {
          break;
        }
        v107 = __CFADD__(v15++, 1);
        v16 += 4;
        if (v107) {
          return;
        }
      }
      v33 = -v15;
      v115 = (__int64)a7;
      v116 = a4;
      v113 = a8;
      v114 = a3;
      if (-v15 >= a6) {
        if (v15 == -1) {
          v88 = *(_DWORD*)&a1[v16];
          *(_DWORD*)&a1[v16] = *(_DWORD*)a2;
          *(_DWORD*)a2 = v88;
          return;
        }
        v55 = v33 / 2;
        v38 = &a1[4 * (v33 / 2) + v16];
        if (a3 == a2) {
          v35 = a3;
          v75 = a3;
        }
        else {
          v56 = *v38;
          v57 = v38[1];
          v58 = (a3 - a2) >> 2;
          v35 = a2;
          v59 = v56 + 32 * v57;
          v60 = a4[2];
          v61 = a4[3];
          if (v59 >= 0x400) {
            v59 = 0;
          }
          v62 = *(unsigned __int8*)(v18 + v59);
          v63 = v60 - v56;
          if (v63 < 0) {
            v63 = -v63;
          }
          v64 = v61 - v57;
          if (v64 < 0) {
            v64 = -v64;
          }
          v65 = v64 + v63 + (v62 << 16);
          do {
            v66 = v58 >> 1;
            v67 = &v35[4 * (v58 >> 1)];
            v68 = *v67;
            v69 = v67[1];
            v70 = v67 + 4;
            v71 = v68 + 32 * v69;
            if (v71 >= 0x400) {
              v71 = 0;
            }
            v72 = v60 - v68;
            v73 = *(unsigned __int8*)(v18 + v71);
            if (v72 < 0) {
              v72 = -v72;
            }
            v74 = v61 - v69;
            if (v74 < 0) {
              v74 = -v74;
            }
            v58 += ~v66;
            if (v74 + v72 + (v73 << 16) < v65) {
              v35 = v70;
            }
            else {
              v58 = v66;
            }
          } while (v58 != 0);
          v75 = a2;
        }
        v34 = (v35 - v75) >> 2;
      }
      else {
        v34 = a6 / 2;
        v35 = &a2[4 * (a6 / 2)];
        if (v26 == a2) {
          v38 = a2;
          v36 = a2;
        }
        else {
          v36 = &a1[v16];
          v37 = v35[1];
          v38 = &a1[v16];
          v39 = *v35;
          v40 = (a2 - a1 - v16) >> 2;
          v41 = v39 + 32 * v37;
          if (v41 >= 0x400) {
            v41 = 0;
          }
          v42 = v20 - v39;
          v43 = *(unsigned __int8*)(v18 + v41);
          if (v42 < 0) {
            v42 = -v42;
          }
          v44 = v21 - v37;
          if (v44 < 0) {
            v44 = -v44;
          }
          v45 = v44 + v42 + (v43 << 16);
          do {
            v46 = v40 >> 1;
            v47 = &v38[4 * (v40 >> 1)];
            v48 = *v47;
            v49 = v47[1];
            v50 = v47 + 4;
            v51 = v48 + 32 * v49;
            if (v51 >= 0x400) {
              v51 = 0;
            }
            v52 = v20 - v48;
            v53 = *(unsigned __int8*)(v18 + v51);
            if (v52 < 0) {
              v52 = -v52;
            }
            v54 = v21 - v49;
            if (v54 < 0) {
              v54 = -v54;
            }
            v40 += ~v46;
            if (v45 < v54 + v52 + (v53 << 16)) {
              v40 = v46;
            }
            else {
              v38 = v50;
            }
          } while (v40 != 0);
        }
        v55 = (v38 - v36) >> 2;
      }
      v76 = a6 - v34;
      v77 = a6;
      a5 = -(v55 + v15);
      v78 = game_map_74efc0(v38, a2, v35);
      a3 = v78;
      if (v55 + v34 >= v77 - (v55 + v34) - v15) {
        a7 = (char*)v115;
        game_map_8be740((__int64)v78, v35, (__int64)v114, v116, a5, v76, v115,
                        v113);
        v35 = v38;
        a4 = v116;
        v76 = v34;
        a8 = v113;
        a5 = v55;
      }
      else {
        a7 = (char*)v115;
        game_map_8be740((__int64)v26, v38, (__int64)v78, v116, v55, v34, v115,
                        v113);
        v26 = a3;
        a3 = v114;
        a8 = v113;
        a4 = v116;
      }
      a6 = v76;
      a1 = v26;
      a2 = v35;
      if (v76 == 0) {
        return;
      }
    }
    if (a5 <= a6) {
      v82 = a7;
      if (a1 != a2) {
        v82 = a7;
        v83 = a1;
        do {
          *v82 = *v83;
          v82[1] = v83[1];
          v82[2] = v83[2];
          v84 = v83[3];
          v83 += 4;
          v82[3] = v84;
          v82 += 4;
        } while (v83 != a2);
      }
      v85 = a7;
      v86 = a2;
      v87 = a1;
      if (a7 != v82) {
        while (v86 != a3) {
          v89 = *v86;
          v90 = v86[1];
          v91 = v89 + 32 * v90;
          v92 = a4[2];
          v93 = a4[3];
          if (v91 >= 0x400) {
            v91 = 0;
          }
          v94 = v92 - v89;
          v95 = *(_QWORD*)(*(_QWORD*)a4 + 8LL) + 64LL;
          if (v94 < 0) {
            v94 = -v94;
          }
          v96 = v93 - v90;
          v97 = *(unsigned __int8*)(v95 + v91);
          if (v96 < 0) {
            v96 = -v96;
          }
          v98 = v94 + (v97 << 16);
          v99 = v85[1];
          v100 = v98 + v96;
          v101 = *v85;
          v102 = v101 + 32 * v99;
          if (v102 >= 0x400) {
            v102 = 0;
          }
          v103 = v92 - v101;
          v104 = *(unsigned __int8*)(v95 + v102);
          if (v103 < 0) {
            v103 = -v103;
          }
          v105 = v93 - v99;
          if (v105 < 0) {
            v105 = -v105;
          }
          v106 = v105 + v103 + (v104 << 16);
          v107 = v100 >= v106;
          if (v100 >= v106) {
            v108 = v85;
          }
          else {
            v108 = v86;
          }
          if (v107) {
            v109 = 0;
          }
          else {
            v109 = 4;
          }
          v110 = *(_DWORD*)v108;
          v86 += v109;
          if (v107) {
            v111 = 4;
          }
          else {
            v111 = 0;
          }
          v85 += v111;
          *v87++ = v110;
          if (v85 == v82) {
            return;
          }
        }
        do {
          v112 = *(_DWORD*)v85;
          v85 += 4;
          *v87++ = v112;
        } while (v85 != v82);
      }
    }
    else {
      v79 = a7;
      if (a2 != a3) {
        v79 = a7;
        v80 = a2;
        do {
          *v79 = *v80;
          v79[1] = v80[1];
          v79[2] = v80[2];
          v81 = v80[3];
          v80 += 4;
          v79[3] = v81;
          v79 += 4;
        } while (v80 != a3);
      }
      v117 = a4;
      BattleArea_8becc0((__int64)v79, (__int64)v79, (__int64)a7, (__int64)a7,
                        (__int64)a2, (__int64)a2, (__int64)a1, (__int64)a1,
                        (__int64)a3, (__int64)a3, (__int64)&v117);
    }
  }
}

__n128 game_map_f11260(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float32x4_t v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int8x16_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  unsigned __int64 v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  int v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  float32x4_t v25;
  float32x4_t v26;
  __int64 v27;
  __int64 v28;
  float32x4_t v29;
  float v30;
  int8x16_t v31;
  float32x4_t v32;
  float v33;
  float v34;
  unsigned __int64 v35;
  int v36;
  float v37;
  float v38;
  unsigned int v39;
  float v40;
  float v41;
  float v42;
  float v43;
  unsigned __int64 v44;
  int8x16_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  __int64 v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  int8x16_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float v65;
  float v66;
  float v67;
  __int64 v68;
  char v69;
  float32x2_t v70;
  __n128 result;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  float v76;
  int8x16_t v77;
  float v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  int8x16x2_t v82;
  int8x16x2_t v83;
  int8x16x2_t v84;

  v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a55c0) != 0) {
    v72 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a55a0 =
        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55a0 + 1) = v72;
    v73 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                      (_QWORD)GameData_212c2a0);
    *(_QWORD*)&GameData_21a55b0 =
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55b0 + 1) = v73;
    v74 = *((_QWORD*)GameData_212c2a0 + 1);
    *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
    *((_QWORD*)&GameData_21a5580 + 1) = v74;
    v75 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a5590 =
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a5590 + 1) = v75;
    __cxa_guard_release((__int64)&GameData_21a55c0),
        v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  *(_OWORD*)(a1 + 16) = GameData_21a5580;
  *(_OWORD*)(a1 + 32) = GameData_21a5590;
  *(_OWORD*)(a1 + 48) = GameData_21a55a0;
  *(_OWORD*)(a1 + 64) = GameData_21a55b0;
  if (*GameData_212d168 == 1 && *GameData_212cfc8[0] != 0) {
    v3 = *GameData_212cfc8[0] + 16;
  LABEL_12:
    math_Quat_FromYawPitchRoll((void*)(&v81),
                               *(float*)(v3 + 84) * 0x1.1df46a0000000p-6f,
                               0x1.921fb60000000p-1f, 0x0.0p+0f),
        v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(float, "s0", "=w"));
    v4 = v81;
    v10 = v81;
    LANES128(v10).n128_u32[3] = 0;
    LANES128(v11).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v12).n128_u64[0] =
        LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v81).n128_u64[0])))
            .n64_u64[0];
    LANES128(v13).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
            .n64_u64[0];
    v14 = LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    *(int8x8_t*)&LANES128(v11).n128_i8[8] =
        vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v12).n128_u64[1] = LANES128(v11).n128_u64[1];
    LANES128(v13).n128_u64[1] = v14;
    v15 = vmulq_f32(v11, v10);
    v16 = vmulq_f32(v12, v12);
    v82.val[1] = vmulq_f32(v13, v13);
    v83.val[1] = vaddq_f32(v15, v15);
    LANES128(v10).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v10).n128_u64[1] = v14;
    v82.val[0] = vsubq_f32(
        COERCE_AS(float32x4_t, GameData_1a837f0),
        vaddq_f32(vaddq_f32(v82.val[1], v82.val[1]), vaddq_f32(v16, v16)));
    v17 = vmulq_laneq_f32(v10, v81, 3);
    v18 = vaddq_f32(v17, v17);
    v84.val[0] = vaddq_f32(v83.val[1], v18);
    v84.val[1] = vsubq_f32(v83.val[1], v18);
    LANES128(v83.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v84, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
            .n64_u64[0];
    LANES128(v82.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v84, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v83.val[1]).n128_i8[8] =
        vqtbl2_s8(v84, COERCE_AS(int8x8_t, 0x706050413121110LL));
    *(int8x8_t*)&LANES128(v82.val[1]).n128_i8[8] =
        vqtbl2_s8(v84, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
    v83.val[0] = v82.val[0];
    LANES128(v84.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v83, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v84.val[0]).n128_i8[8] =
        vqtbl2_s8(v83, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
    LANES128(v84.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v83, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v84.val[1]).n128_i8[8] =
        vqtbl2_s8(v83, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
    LANES128(v83.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v82, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
            .n64_u64[0];
    v83.val[1] = *(int8x16_t*)(a1 + 48);
    v19 = *(float32x4_t*)(a1 + 64);
    *(int8x8_t*)&LANES128(v83.val[0]).n128_i8[8] =
        vqtbl2_s8(v82, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
    v82.val[0] = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(v84.val[0], COERCE_FLOAT(*(_OWORD*)(a1 + 32))),
            v84.val[1], *(float32x2_t*)(a1 + 32), 1),
        v83.val[0], *(float32x4_t*)(a1 + 32), 2);
    *(float32x4_t*)(a1 + 16) = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(v84.val[0], COERCE_FLOAT(*(_OWORD*)(a1 + 16))),
            v84.val[1], *(float32x2_t*)(a1 + 16), 1),
        v83.val[0], *(float32x4_t*)(a1 + 16), 2);
    *(int8x16_t*)(a1 + 32) = v82.val[0];
    *(float32x4_t*)(a1 + 48) = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(v84.val[0], LANES128(v83.val[1]).n128_f32[0]),
            v84.val[1],
            COERCE_AS(float32x2_t, LANES128(v83.val[1]).n128_u64[0]), 1),
        v83.val[0], v83.val[1], 2);
    *(float32x4_t*)(a1 + 64) = vaddq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v84.val[0], LANES128(v19).n128_f32[0]), v84.val[1],
                COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
            v83.val[0], v19, 2),
        COERCE_AS(float32x4_t, 0));
    goto LABEL_13;
  }
  v4 = (__typeof__(v4)){0};
  v5 = *(_QWORD*)GameData_212c638;
  if (*(_QWORD*)GameData_212c638 != 0) {
    v7 = *(_QWORD*)(v5 + 24);
    v6 = *(_QWORD*)(v5 + 32);
    if (v7 != v6) {
      v8 = *(_QWORD*)(v6 - 8);
      if (v8 != 0) {
        v3 = *(_QWORD*)(v8 + 24);
        v9 = *(_QWORD*)(v8 + 32);
        if (v9 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
                v65 = COERCE_AS(__typeof__(v65),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            std___1___shared_weak_count___release_weak(v9),
                v65 = COERCE_AS(__typeof__(v65),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v4 = (__typeof__(v4)){0};
          }
        }
        if (v3 != 0) {
          goto LABEL_12;
        }
      }
    }
  }
LABEL_13:
  v20 = *(_DWORD*)(a1 + 252);
  v77 = v4;
  v21 = (float)(v20 + 2 * *(char*)(a1 + 248)) * 0x1.4000000000000p+1f;
  v22 = (float)(v20 + 2 * *(char*)(a1 + 249)) * 0x1.4000000000000p+1f;
  if (*GameData_212ce80[0] != 0) {
    v78 = (float)(v20 + 2 * *(char*)(a1 + 249)) * 0x1.4000000000000p+1f;
    v76 = (float)(v20 + 2 * *(char*)(a1 + 248)) * 0x1.4000000000000p+1f;
    v23 = Height_7c4d10(*(_QWORD*)(*GameData_212ce80[0] + 61456), v21, v22),
    v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(float, "s0", "=w"));
    v21 = v76;
    v22 = v78;
  }
  else {
    v23 = 0x0.0p+0f;
  }
  v24 = *(_QWORD*)(a1 + 264);
  LANES128(v25).n128_u64[0] = __PAIR64__(LODWORD(v23), LODWORD(v21));
  LANES128(v25).n128_u64[1] = LODWORD(v22);
  v26 = v25;
  LANES128(v26).n128_u32[3] = 0;
  if (v24 == 0) {
    goto LABEL_20;
  }
  v27 = *(_QWORD*)(v24 + 264);
  if (v27 == 0) {
    v24 = 0;
  LABEL_20:
    v79 = v26;
    goto LABEL_21;
  }
  v28 = *(_QWORD*)(v27 + 8);
  LANES128(v29).n128_u32[0] = *(_OWORD*)(v28 + 304);
  LANES128(v29).n128_u32[1] = LANES128(v25).n128_u32[1];
  LANES128(v29).n128_u64[1] = (unsigned int)*(_QWORD*)(v28 + 312);
  v79 = v29;
LABEL_21:
  v30 = game_map_CursorDrawInfo_GetHeightTop(
      *(_QWORD*)GameData_212d038[0], *(char*)(a1 + 248), *(char*)(a1 + 249),
      *(_DWORD*)(a1 + 252), *(_DWORD*)(a1 + 252), v24),
  v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(float, "s0", "=w"));
  v32 = v79;
  LANES128(v32).n128_f32[1] = v30 + 0x1.4000000000000p-2f;
  if ((*(_BYTE*)(a1 + 280) & 1) == 0) {
    v33 = *(float*)(a1 + 192);
    if (v33 < 0x1.99999a0000000p-3f) {
      v80 = v32;
      v34 = powf((float)(v33 / -0x1.99999a0000000p-3f) + 0x1.0000000000000p+0f,
                 0x1.8000000000000p+1f),
      v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(float, "s0", "=w"));
      LODWORD(v35) = 0;
      *((float*)&v35 + 1) = v34 * 0x1.4000000000000p+0f;
      v32 = vaddq_f32(v80, COERCE_AS(float32x4_t, v35));
    }
  }
  v36 = *(_DWORD*)(a1 + 288);
  v37 = 0x0.0p+0f;
  if (!(v36 < 2)) {
    v38 = (float)(unsigned int)v36;
    v39 = v36 - 1;
    v40 = (float)*(int*)(a1 + 284) / v38;
    v41 = 0x1.0000000000000p+0f;
    if (!(v40 > 0x1.0000000000000p+0f)) {
      v41 = v40;
    }
    v42 = v41 + -0x1.0000000000000p-1f;
    if (!(v40 < 0x0.0p+0f)) {
      v43 = v42;
    }
    else {
      v43 = -0x1.0000000000000p-1f;
    }
    v37 = (float)(v43 * (float)v39) * 0x1.4000000000000p-1f;
  }
  v44 = LODWORD(v37);
  PSEUDO_LOW_LANE128(v31, n128_u64, LODWORD(v37));
  v45 = vmulq_f32(v77, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v46).n128_u64[0] = LODWORD(v37);
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v48).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v49).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v47).n128_u64[1] = LANES128(v47).n128_u64[0];
  LANES128(v46).n128_u64[1] = LANES128(v48).n128_u64[0];
  *(int8x8_t*)&LANES128(v49).n128_i8[8] =
      vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v50 = vmulq_f32(v46, v49);
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v51 = *(_QWORD*)(a1 + 264);
  *(int32x2_t*)&LANES128(v46).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v45).n128_u64[0]), 1);
  LANES128(v52).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v48).n128_u64[1] = LANES128(v52).n128_u64[0];
  LANES128(v52).n128_u64[1] = v44;
  v53 =
      vmlaq_f32(vmlaq_f32(vmulq_f32(v45, v47),
                          COERCE_AS(float32x4_t, GameData_1a83800), v50),
                COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v52, v46));
  LANES128(v54).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v54).n128_i8[8] =
      vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v55 = vmlsq_f32(v53, v54, v48);
  LANES128(v54).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v56).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v57).n128_u64[0] = LANES128(v77).n128_u64[0];
  LANES128(v54).n128_u64[1] = LANES128(v54).n128_u64[0];
  LANES128(v58).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v57).n128_u64[1] = LANES128(v45).n128_u64[0];
  *(int8x8_t*)&LANES128(v56).n128_i8[8] =
      vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v58).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v55).n128_u64[0]), 1);
  v59 = vmlaq_f32(vmulq_f32(v54, v55), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v57, v56));
  LANES128(v56).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v45).n128_u64[1] = LANES128(v56).n128_u64[0];
  LANES128(v56).n128_u64[1] = LANES128(v77).n128_u64[0];
  v60 = vmlaq_f32(v59, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v56, v58));
  LANES128(v58).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v58).n128_i8[8] =
      vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v61 = vmlsq_f32(v60, v58, v45);
  v62 = *(float32x4_t*)(a1 + 48);
  v63 = *(float32x4_t*)(a1 + 64);
  LANES128(v61).n128_u32[3] = 0;
  v64 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 COERCE_FLOAT(*(_OWORD*)(a1 + 32))),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     *(float32x2_t*)(a1 + 32), 1),
      COERCE_AS(float32x4_t, GameData_1a83090), *(float32x4_t*)(a1 + 32), 2);
  *(float32x4_t*)(a1 + 16) = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 COERCE_FLOAT(*(_OWORD*)(a1 + 16))),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     *(float32x2_t*)(a1 + 16), 1),
      COERCE_AS(float32x4_t, GameData_1a83090), *(float32x4_t*)(a1 + 16), 2);
  *(float32x4_t*)(a1 + 32) = v64;
  *(float32x4_t*)(a1 + 48) = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v62).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]), 1),
      COERCE_AS(float32x4_t, GameData_1a83090), v62, 2);
  *(float32x4_t*)(a1 + 64) = vaddq_f32(
      vaddq_f32(v32, v61),
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                     LANES128(v63).n128_f32[0]),
                         COERCE_AS(float32x4_t, GameData_1a83610),
                         COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v63, 2));
  if (v51 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v51 + 152) + 16LL))(v51 + 152),
        v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(float, "s0", "=w"));
    if (*(_QWORD*)(v51 + 392) == 0 || (*(_BYTE*)(v51 + 417) & 0x1C) != 0 ||
        (v66 = v65, (*(float (**)(__int64))(*(_QWORD*)(v51 + 152) + 16LL))(
                        v51 + 152) <= 0x0.0p+0f) ||
        (v67 = v66, (*(_BYTE*)(*GameData_212ce90[0] + 21) & 1) == 0) &&
            (*(_BYTE*)(v51 + 417) & 0x20) == 0) {
      v67 = 0x0.0p+0f;
    }
  }
  else {
    v68 = *(_QWORD*)(a1 + 272);
    if (v68 != 0) {
      v69 = (*(__int64 (**)(__int64))(*(_QWORD*)v68 + 528LL))(v68),
      v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(float, "s0", "=w"));
      v67 = 0x1.0000000000000p+0f;
      if ((v69 & 1) == 0) {
        v67 = 0x0.0p+0f;
      }
    }
    else {
      v67 = 0x1.0000000000000p+0f;
    }
  }
  LANES128(result).n128_u64[0] = *(_QWORD*)(a1 + 80);
  LANES64(v70).n64_u64[0] = *(unsigned __int64*)(a1 + 88);
  LANES64(v70).n64_f32[1] = vmuls_lane_f32(v67, v70, 1);
  *(float32x2_t*)&LANES128(result).n128_i8[8] = v70;
  *(__n128*)(a1 + 80) = result;
  return result;
}

void game_map_f1d220(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  _QWORD* v3;
  int v4;
  int v5;
  int v6;
  unsigned __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  int v12;
  _QWORD* v13;
  _QWORD* v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  float32x4_t* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  int v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  unsigned __int64 v34;
  float32x4_t* v35;
  float32x4_t* v36;
  float32x4_t* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64* v45;
  void (***v46)(_QWORD);
  __int64 v47;
  void (***v48)(_QWORD);
  void (**v49)(_QWORD);
  __int64 v50;
  __int64 v51;
  int v52;
  _QWORD* v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  __int64 v60;
  __int128 v61;
  __int64 v62;
  __int128 v63;
  __int128 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  char* v74;
  char* v75;
  char* v76;
  void (**v77)(char*);
  __int64 v78;
  struct {
    _BYTE v98[4];
    int v99;
    char gap264_[40];
    char v100;
  } v98_;
  unsigned __int64 v101;
  _QWORD* v102[2];
  struct __attribute__((aligned(16))) {
    float32x4_t v79[5];
    __int64 v80;
    __int64 v81;
    char* v82;
    char* v83;
    char gap112_[8];
    char* v84;
    char* v85;
    char gap136_[8];
    __int128 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    int v90;
    char gap188_[4];
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    int v97;
  } v79_;

  *(_BYTE*)(a1 + 8) = 1;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0) {
    v18 = *(_QWORD**)(a1 + 16);
    if (v18 != (_QWORD*)(a1 + 24)) {
      do {
        v23 = v18[6];
        *((_BYTE*)v18 + 272) = 0;
        if (((*(__int64 (**)(void*))(v23 + 48))((void*)&v18[6]) & 1) != 0) {
          v24 = 1036831949;
        }
        else {
          v24 = 0;
          *((_DWORD*)v18 + 69) = 0;
        }
        v25 = (_QWORD*)v18[1];
        *((_DWORD*)v18 + 70) = v24;
        if (v25 != nullptr) {
          do {
            v26 = v25;
            v25 = (_QWORD*)*v25;
          } while (v25 != nullptr);
        }
        else {
          do {
            v26 = (_QWORD*)v18[2];
            v15 = v18 == (_QWORD*)*v26;
            v18 = v26;
          } while (!v15);
        }
        v18 = v26;
      } while (v26 != (_QWORD*)(a1 + 24));
    }
    *(_WORD*)(a1 + 124) = 257;
    goto LABEL_27;
  }
  game_map_fe9ec0((void*)(v98_.v98), *(_QWORD*)GameData_212d038[0]);
  v2 = *(_QWORD**)(a1 + 16);
  v3 = (_QWORD*)(a1 + 24);
  if (v98_.v100 != 1) {
    if (v2 != v3) {
      do {
        v51 = v2[6];
        *((_BYTE*)v2 + 272) = 0;
        if (((*(__int64 (**)(void*))(v51 + 48))((void*)&v2[6]) & 1) != 0) {
          v52 = 1036831949;
        }
        else {
          v52 = 0;
          *((_DWORD*)v2 + 69) = 0;
        }
        v53 = (_QWORD*)v2[1];
        *((_DWORD*)v2 + 70) = v52;
        if (v53 != nullptr) {
          do {
            v54 = v53;
            v53 = (_QWORD*)*v53;
          } while (v53 != nullptr);
        }
        else {
          do {
            v54 = (_QWORD*)v2[2];
            v15 = v2 == (_QWORD*)*v54;
            v2 = v54;
          } while (!v15);
        }
        v2 = v54;
      } while (v54 != v3);
    }
    goto LABEL_27;
  }
  if (v2 != v3) {
    do {
      v11 = v2[6];
      *((_BYTE*)v2 + 272) = 0;
      if (((*(__int64 (**)(void*))(v11 + 48))((void*)&v2[6]) & 1) != 0) {
        v12 = 1036831949;
      }
      else {
        v12 = 0;
        *((_DWORD*)v2 + 69) = 0;
      }
      v13 = (_QWORD*)v2[1];
      *((_DWORD*)v2 + 70) = v12;
      if (v13 != nullptr) {
        do {
          v14 = v13;
          v13 = (_QWORD*)*v13;
        } while (v13 != nullptr);
      }
      else {
        do {
          v14 = (_QWORD*)v2[2];
          v15 = v2 == (_QWORD*)*v14;
          v2 = v14;
        } while (!v15);
      }
      v2 = v14;
    } while (v14 != v3);
  }
  v4 = v98_.v98[0];
  v5 = v98_.v98[1];
  v6 = v98_.v99;
  game_map_f54910((__int64)v79_.v79);
  BYTE4(v79_.v96) = 0;
  LANES128(v79_.v79[0]).n128_u64[0] =
      (unsigned __int64)game_map_CursorUnitMeshData_vtable;
  v79_.v97 = 1;
  game_map_MapDrawConst_AddCellPlaneMask(a1, v79_.v79, v4, v5, v6);
  v8 = (*(unsigned __int64 (**)(__int64))((char*)((char*)0x20LL) +
                                          LANES128(v79_.v79[0]).n128_u64[0]))(
      (__int64)v79_.v79);
  v9 = *(_QWORD*)(a1 + 24);
  v101 = v8;
  if (v9 == 0) {
  LABEL_95:
    v102[0] = &v101;
    v55 = GameRoutine_f1eb80((__int64**)(a1 + 16), &v101, v102);
    v56 = v55;
    *(_QWORD*)(v55 + 56) = LANES128(v79_.v79[0]).n128_u64[1];
    v57 = v79_.v79[2];
    *(float32x4_t*)(v55 + 64) = v79_.v79[1];
    *(float32x4_t*)(v55 + 80) = v57;
    v58 = v79_.v79[3];
    v59 = v79_.v79[4];
    v60 = v79_.v81;
    *(_QWORD*)(v55 + 128) = v79_.v80;
    *(_QWORD*)(v55 + 136) = v60;
    *(float32x4_t*)(v55 + 96) = v58;
    *(float32x4_t*)(v55 + 112) = v59;
    if ((float32x4_t*)(v55 + 48) != v79_.v79) {
      GameRoutine_f155c0((__int64*)(v55 + 144), v79_.v82, v79_.v83,
                         (v79_.v83 - v79_.v82) >> 6);
      CharacterController_d42d20(v56 + 168, v79_.v84, v79_.v85,
                                 (v79_.v85 - v79_.v84) >> 4);
    }
    v61 = v79_.v86;
    v62 = v79_.v88;
    v102[0] = &v101;
    *(_QWORD*)(v56 + 208) = v79_.v87;
    *(_QWORD*)(v56 + 216) = v62;
    *(_QWORD*)(v56 + 192) = v61;
    v63 = *(_OWORD*)(v56 + 192);
    *((_QWORD*)&v63 + 1) = DWORD2(v61);
    DWORD2(v61) = v79_.v90;
    *(_QWORD*)(v56 + 224) = v79_.v89;
    *(_OWORD*)(v56 + 192) = v63;
    v64 = *(_OWORD*)(v56 + 224);
    v65 = v79_.v92;
    *((_QWORD*)&v64 + 1) = DWORD2(v61);
    *(_QWORD*)(v56 + 240) = v79_.v91;
    *(_QWORD*)(v56 + 248) = v65;
    *(_OWORD*)(v56 + 224) = v64;
    v66 = v79_.v96;
    v67 = v79_.v97;
    *(_QWORD*)(v56 + 272) = v79_.v95;
    *(_QWORD*)(v56 + 280) = v66;
    v68 = v79_.v93;
    v69 = v79_.v94;
    *(_DWORD*)(v56 + 288) = v67;
    *(_QWORD*)(v56 + 256) = v68;
    *(_QWORD*)(v56 + 264) = v69;
    v9 = GameRoutine_f1eb80((__int64**)(a1 + 16), &v101, v102);
    *(_BYTE*)(v9 + 272) = 1;
    v70 = v9 + 48;
    v71 = *(_QWORD*)(v9 + 48);
    goto LABEL_99;
  }
  v10 = (_QWORD*)v9;
  while (1) {
    v16 = v10[4];
    if (v8 >= v16) {
      break;
    }
  LABEL_16:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      goto LABEL_95;
    }
  }
  if (v16 < v8) {
    ++v10;
    goto LABEL_16;
  }
  while (1) {
    while (1) {
      v17 = *(_QWORD*)(v9 + 32);
      if (v8 >= v17) {
        break;
      }
      v9 = *(_QWORD*)v9;
      if (v9 == 0) {
        goto LABEL_24;
      }
    }
    if (v17 >= v8) {
      break;
    }
    v9 = *(_QWORD*)(v9 + 8);
    if (v9 == 0) {
    LABEL_24:
      String_60a250("map::at:  key not found");
    }
  }
  v70 = v9 + 48;
  v71 = *(_QWORD*)(v9 + 48);
  *(_BYTE*)(v9 + 272) = 1;
LABEL_99:
  if (((*(__int64 (**)(__int64))(v71 + 48))(v70) & 1) != 0) {
    v72 = 1036831949;
  }
  else {
    v72 = 0;
    *(_DWORD*)(v9 + 276) = 1065353216;
  }
  *(_DWORD*)(v9 + 280) = v72;
  LANES128(v79_.v79[0]).n128_u64[0] =
      (unsigned __int64)(GameData_212f8b0[0] + 2);
  if (v79_.v84 != nullptr) {
    v79_.v85 = v79_.v84;
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v73,
                                  (__int64)v79_.v84);
  }
  v74 = v79_.v82;
  if (v79_.v82 != nullptr) {
    if (v79_.v82 == v79_.v83) {
      goto LABEL_112;
    }
    v75 = v79_.v83 - 64;
    v76 = v79_.v83 - 64;
    do {
      v77 = *(void (***)(char*))v76;
      v76 -= 64;
      (*v77)(v75);
      v15 = v75 == v74;
      v75 = v76;
    } while (!v15);
    v79_.v83 = v74;
    v74 = v79_.v82;
    if (v79_.v82 != nullptr) {
    LABEL_112:
      v78 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v78 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, (__int64)v74);
    }
  }
LABEL_27:
  v19 = *(float32x4_t**)(a1 + 16);
  *(_BYTE*)(a1 + 8) = 0;
  if (v19 != (float32x4_t*)(a1 + 24)) {
    v20 = game_script_hub_g_frame_counter_ptr[0];
    v21 = fw_memory_g_heap_manager_ptr;
    v22 = GameData_212f8b0[0] + 2;
    do {
      v29 = LANES128(v19[17]).n128_f32[2];
      v30 = (float)(*(float*)(*(_QWORD*)v20 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v29 <= 0x0.0p+0f) {
        if (LANES128(v19[17]).n128_u8[0] != 0) {
          v33 = 0x1.0000000000000p+0f;
        }
        else {
          v33 = 0x0.0p+0f;
        }
      }
      else {
        v31 = v30 / v29;
        v32 = LANES128(v19[17]).n128_f32[1];
        if (LANES128(v19[17]).n128_u8[0] != 0) {
          v33 = fminf(fmaxf(v31 + v32, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v33 = fminf(fmaxf(v32 - v31, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v19[17]).n128_f32[1] = v33;
      v34 = LANES128(v19[3]).n128_u64[0];
      LANES128(v19[15]).n128_f32[0] = v30 + LANES128(v19[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v34 + 40))(v19 + 3);
      GameRoutine_f54fe0(v19 + 3);
      v35 = (float32x4_t*)LANES128(*(v19)).n128_u64[1];
      if ((LANES128(v19[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v19[17]).n128_f32[1] > 0x0.0p+0f) {
        if (v35 != nullptr) {
          do {
            v37 = v35;
            v35 = (float32x4_t*)LANES128(*(v35)).n128_u64[0];
          } while (v35 != nullptr);
        }
        else {
          do {
            v37 = (float32x4_t*)LANES128(v19[1]).n128_u64[0];
            v15 = v19 == (float32x4_t*)LANES128(*(v37)).n128_u64[0];
            v19 = v37;
          } while (!v15);
        }
      }
      else {
        v36 = v19;
        if (v35 != nullptr) {
          do {
            v37 = v35;
            v35 = (float32x4_t*)LANES128(*(v35)).n128_u64[0];
          } while (v35 != nullptr);
        }
        else {
          do {
            v37 = (float32x4_t*)LANES128(v36[1]).n128_u64[0];
            v15 = v36 == (float32x4_t*)LANES128(*(v37)).n128_u64[0];
            v36 = v37;
          } while (!v15);
        }
        if (*(float32x4_t**)(a1 + 16) == v19) {
          *(_QWORD*)(a1 + 16) = v37;
        }
        v38 = *(__int64**)(a1 + 24);
        --*(_QWORD*)(a1 + 32);
        GameRoutine_64dfe0(v38, (__int64*)v19);
        v39 = LANES128(v19[10]).n128_i64[1];
        LANES128(v19[3]).n128_u64[0] = (unsigned __int64)v22;
        if (v39 != 0) {
          v40 = *(_QWORD*)v21;
          LANES128(v19[11]).n128_u64[0] = v39;
          if (*(_QWORD*)(v40 + 200) != 0) {
            v41 = 128;
          }
          else {
            v41 = 56;
          }
          nn_mem_StandardAllocator_Free(v40 + v41, v39);
        }
        v42 = LANES128(v19[9]).n128_i64[0];
        if (v42 != 0) {
          v43 = LANES128(v19[9]).n128_u64[1];
          if (v42 == v43) {
            goto LABEL_39;
          }
          v44 = v21;
          v45 = v22;
          v46 = (void (***)(_QWORD))(v43 - 64);
          v47 = v20;
          v48 = (void (***)(_QWORD))(v43 - 64);
          do {
            v49 = *v48;
            v48 -= 8;
            (*v49)(v46);
            v15 = v46 == (void (***)(_QWORD))v42;
            v46 = v48;
          } while (!v15);
          v50 = LANES128(v19[9]).n128_i64[0];
          v20 = v47;
          v22 = v45;
          v21 = v44;
          LANES128(v19[9]).n128_u64[1] = v42;
          v42 = v50;
          if (v50 != 0) {
          LABEL_39:
            if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
              v27 = 128;
            }
            else {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v27, v42);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v28, (__int64)v19);
      }
      v19 = v37;
    } while (v37 != (float32x4_t*)(a1 + 24));
  }
}

void game_map_f515e0(__int64 a1)
{
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  int8x16_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  int32x4_t v35;
  int32x4_t v36;
  int32x4_t v37;
  int8x16_t v38;
  int8x16_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  int8x16_t v46;
  int8x16_t v47;
  int8x16_t v48;
  float32x4_t v49;
  int8x16_t v50;
  int8x16_t v51;
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
  int v62;
  int v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64* v66;
  __int64 v67;
  _QWORD* v68;
  _QWORD* v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64*** v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  __int64 v82;
  __int64 v83;
  int v84;
  struct {
    __int64 (**v85)();
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 (***v89)();
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
  } v85_;
  struct {
    float32x4_t v115;
    int8x16_t v116;
    int8x16_t v117;
    int8x16_t v118;
  } v115_;

  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
      v5 = COERCE_AS(__typeof__(v5),
                     (*(__n128(**)(unsigned __int64))(*(_QWORD*)(v4 + 160) +
                                                      16LL))(v4 + 160)),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    else {
      v5 = *(_OWORD*)(v4 + 208);
    }
    if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
    LABEL_13:
      *(_QWORD*)(a1 + 48) = *(_QWORD*)(a1 + 40);
      *(_QWORD*)(a1 + 72) = *(_QWORD*)(a1 + 64);
      v7 = *(_QWORD*)(a1 + 16);
      v6 = *(_QWORD*)(a1 + 24);
      if (v7 != v6) {
        v8 = *(_QWORD*)(a1 + 24);
        v9 = fw_memory_g_heap_manager_ptr;
        do {
          v10 = *(_BYTE*)(v8 - 112);
          v8 -= 112;
          if ((v10 & 1) != 0) {
            v11 = *(_QWORD*)(v6 - 96);
            if (v11 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
                v12 = 128;
              }
              else {
                v12 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v12, v11),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v52 = COERCE_AS(
                      __typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v53 = COERCE_AS(
                      __typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v54 = COERCE_AS(
                      __typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v55 = COERCE_AS(
                      __typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v56 = COERCE_AS(
                      __typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v57 = COERCE_AS(
                      __typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v58 = COERCE_AS(
                      __typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
          }
          v6 = v8;
        } while (v8 != v7);
      }
      goto LABEL_80;
    }
  }
  v85_.v113 = 0;
  v85_.v114 = 0;
  v85_.v111 = 0;
  v85_.v112 = 0;
  v85_.v109 = 0;
  v85_.v110 = 0;
  v85_.v107 = 0;
  v85_.v108 = 0;
  v85_.v105 = 0;
  v85_.v106 = 0;
  v85_.v103 = 0;
  v85_.v104 = 0;
  v85_.v101 = 0;
  v85_.v102 = 0;
  v85_.v99 = 0;
  v85_.v100 = 0;
  v85_.v97 = 0;
  v85_.v98 = 0;
  v85_.v95 = 0;
  v85_.v96 = 0;
  v85_.v93 = 0;
  v85_.v94 = 0;
  v85_.v91 = 0;
  v85_.v92 = 0;
  v85_.v89 = nullptr;
  v85_.v90 = 0;
  v85_.v87 = 0;
  v85_.v88 = 0;
  v13 = *GameData_212d168;
  v85_.v85 = nullptr;
  v85_.v86 = 0;
  if (v13 == 1 && GameData_21cd140 != 0) {
    v14 = GameData_21cd140 + 16;
  }
  else {
    v15 = *(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL);
    v14 = *(_QWORD*)(v15 + 24);
    v16 = *(_QWORD*)(v15 + 32);
    if (v16 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v53 = COERCE_AS(__typeof__(v53),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v57 = COERCE_AS(__typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        std___1___shared_weak_count___release_weak(v16),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v53 = COERCE_AS(__typeof__(v53),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v57 = COERCE_AS(__typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
  }
  v17 = (*(float (**)(__int64))(*(_QWORD*)v14 + 72LL))(v14),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v18 = (*(float (**)(__int64))(*(_QWORD*)v14 + 80LL))(v14),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v14 + 80LL))(v14),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v20 = v18 / v19;
  v21 = (*(float (**)(__int64))(*(_QWORD*)v14 + 56LL))(v14),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v22 = (*(float (**)(__int64))(*(_QWORD*)v14 + 64LL))(v14),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *(long double*)&v23 =
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v14 + 16LL))(v14),
         v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
         v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v52 = COERCE_AS(__typeof__(v52),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
         v53 = COERCE_AS(__typeof__(v53),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
         v54 = COERCE_AS(__typeof__(v54),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
         v55 = COERCE_AS(__typeof__(v55),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
         v56 = COERCE_AS(__typeof__(v56),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
         v57 = COERCE_AS(__typeof__(v57),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
         v58 = COERCE_AS(__typeof__(v58),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v25).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v27).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v28 = vmulq_f32(vmulq_f32(v23, v25), v27);
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v27).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v29).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v30 = vsubq_f32(v28, vmulq_f32(vmulq_f32(v23, v27), v29));
  LANES128(v30).n128_u64[0] = LANES128_OF(vpaddq_f32(v30, v30)).n128_u64[0];
  v31 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v30).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v30).n128_u64[0]), 1));
  v32 = vrecpeq_f32(v31);
  v33 = vmulq_f32(v32, vrecpsq_f32(v32, v31));
  v34 = vmulq_f32(v33, vrecpsq_f32(v33, v31));
  v35 = vzip1q_s32(v23, v26);
  v36 = vzip2q_s32(v23, v26);
  v37 = vzip1q_s32(v24, COERCE_AS(int32x4_t, 0));
  v38 = vzip2q_s32(v35, v37);
  v39 = vzip1q_s32(v36, vzip2q_s32(v24, COERCE_AS(int32x4_t, 0)));
  v40 = vzip1q_s32(v35, v37);
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v42).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v41).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v44 = LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  v45 = LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v42).n128_i8[8] =
      vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v24).n128_u64[1] = v44;
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v43).n128_u64[1] = v45;
  *(int8x8_t*)&LANES128(v39).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v25).n128_i8[8] =
      vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v46 = vmulq_f32(v34, vmlsq_f32(vmulq_f32(v41, v24), v39, v42));
  v47 = vmulq_f32(v34, vmlsq_f32(vmulq_f32(v42, v25), v24, v43));
  v48 = vmulq_f32(v34, vmlsq_f32(vmulq_f32(v39, v43), v25, v41));
  v50 = vmlsq_laneq_f32(
      vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v46), LANES128(v49).n128_f32[0]),
                     v47, COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]), 1),
      v48, v49, 2);
  v51 = vceqzq_f32(v31);
  v115_.v115 = vbicq_s8(v46, v51);
  v115_.v116 = vbicq_s8(v47, v51);
  v115_.v117 = vbicq_s8(v48, v51);
  v115_.v118 = vbicq_s8(v50, v51);
  GameRoutine_5eaef0((__int64)&v85_.v85, &v115_.v115, v17, v20, v21, v22,
                     LANES128(v50).n128_f64[0], *(double*)&v45),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LANES128(v115_.v116).n128_u64[0] = (unsigned __int64)&v85_.v85;
  LANES128(v115_.v117).n128_u64[0] = (unsigned __int64)&v115_.v115;
  LANES128(v115_.v115).n128_u64[0] = (unsigned __int64)GameData_1ff5af0;
  LANES128(v115_.v115).n128_u64[1] = a1;
  game_map_PrimitiveDrawStack_EachDrawElementsMultiThread((_QWORD*)a1,
                                                          (__int64)&v115_.v115),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((float32x4_t*)LANES128(v115_.v117).n128_u64[0] == &v115_.v115) {
    v59 = 32;
    goto LABEL_32;
  }
  if (LANES128(v115_.v117).n128_u64[0] != 0) {
    v59 = 40;
  LABEL_32:
    (*(void (**)(unsigned __int64, __int64, __int64, __int64, __int64, __int64,
                 __int64, __int64, __int64 (**)(void), __int64, __int64,
                 __int64, __int64 (***)(void), __int64, __int64, __int64,
                 __int64, __int64, __int64, __int64, __int64, __int64, __int64,
                 __int64, __int64, __int64, __int64, __int64, __int64,
                 __int64))(*(_QWORD*)LANES128(v115_.v117).n128_u64[0] + v59))(
        LANES128(v115_.v117).n128_u64[0], v52, v53, v54, v55, v56, v57, v58,
        v85_.v85, v85_.v86, v85_.v87, v85_.v88, v85_.v89, v85_.v90, v85_.v91,
        v85_.v92, v85_.v93, v85_.v94, v85_.v95, v85_.v96, v85_.v97, v85_.v98,
        v85_.v99, v85_.v100, v85_.v101, v85_.v102, v85_.v103, v85_.v104,
        v85_.v105, v85_.v106),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v53 = COERCE_AS(__typeof__(v53),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  fw_world_JobContext_Drain((unsigned int*)GameData_226b928),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v60 = GameData_226b928;
  v61 = GameData_226b928 + 32;
  do {
    v62 = *(_DWORD*)(v60 + 8);
    v63 = (v62 + 1) & 0xFFFFFF;
    if (v62 + 1 <= 0) {
      v63 = -(-(v62 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v60 + 8) = v63;
    v64 = atomic_load((unsigned __int64*)(v61 + 32LL * (v62 & 0x3F)));
    if (v64 != 0) {
      v62 = -1;
    }
  } while (v62 < 0);
  v65 = v62 | 0xC0000000;
  v66 = (unsigned __int64*)(v61 + 32LL * (v62 & 0x3F));
  nn_os_ClearLightEvent((__int64)(v66 + 1)),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v67 = fw_memory_g_heap_manager_ptr;
  v68 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v68[2] = 0;
  v69 = v68;
  v70 = GameData_212e368[0];
  v68[8] = 0;
  *v68 = v70 + 16;
  v68[1] = 0;
  v71 = v66[3];
  v66[3] = (unsigned __int64)v69;
  if (v71 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v71 + 8LL))(v71),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v53 = COERCE_AS(__typeof__(v53),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  atomic_store(v65, v66);
  v69[1] = v60;
  *((_DWORD*)v69 + 4) = v65;
  v85_.v85 = GameData_1ff5b80;
  v85_.v86 = a1;
  v85_.v89 = &v85_.v85;
  fw_world_SwapCallables(&v85_.v85, v69 + 4),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v85_.v89 == &v85_.v85) {
    v72 = 4;
  }
  else {
    if (v85_.v89 == nullptr) {
      goto LABEL_46;
    }
    v72 = 5;
  }
  ((__int64 (*)(__int64))(*v85_.v89)[v72])((__int64)v85_.v89),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_46:
  fw_world_JobQueue_Submit(*(_QWORD*)(v60 + 16), v65),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  fw_world_JobContext_Wait(GameData_226b928, v65),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v73 = (__int64***)game_map_MapColorPalette_g_texture_archives;
  GameRoutine_1993840(**(_QWORD**)game_map_MapColorPalette_g_texture_archives),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  PrimitiveDrawStack_f52120(a1, 1, 0),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v85_.v85 = GameData_1ff5c00;
  v85_.v86 = a1;
  v85_.v89 = &v85_.v85;
  PrimitiveDrawStack_f51fa0((__int64*)(a1 + 40), (__int64)&v85_.v85),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v85_.v89 == &v85_.v85) {
    v74 = 4;
  }
  else {
    if (v85_.v89 == nullptr) {
      goto LABEL_51;
    }
    v74 = 5;
  }
  ((__int64 (*)(__int64))(*v85_.v89)[v74])((__int64)v85_.v89),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_51:
  PrimitiveDrawManager_1994180(**v73),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_1993840((__int64)**v73),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  PrimitiveDrawStack_f52120(a1, 0, 0),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LANES128(v115_.v115).n128_u64[0] = (unsigned __int64)GameData_1ff5c90;
  LANES128(v115_.v115).n128_u64[1] = a1;
  LANES128(v115_.v117).n128_u64[0] = (unsigned __int64)&v115_.v115;
  PrimitiveDrawStack_f51fa0((__int64*)(a1 + 40), (__int64)&v115_.v115),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((float32x4_t*)LANES128(v115_.v117).n128_u64[0] == &v115_.v115) {
    v75 = 32;
  }
  else {
    if (LANES128(v115_.v117).n128_u64[0] == 0) {
      goto LABEL_56;
    }
    v75 = 40;
  }
  (*(void (**)(void*))(*(_QWORD*)LANES128(v115_.v117).n128_u64[0] + v75))(
      (void*)LANES128(v115_.v117).n128_u64[0]),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_56:
  PrimitiveDrawManager_1994180(**v73),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_1993840((__int64)**v73),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  PrimitiveDrawStack_f52120(a1, 1, 1),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v85_.v85 = GameData_1ff5c00;
  v85_.v86 = a1;
  v85_.v89 = &v85_.v85;
  PrimitiveDrawStack_f51fa0((__int64*)(a1 + 64), (__int64)&v85_.v85),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v85_.v89 == &v85_.v85) {
    v76 = 4;
  }
  else {
    if (v85_.v89 == nullptr) {
      goto LABEL_61;
    }
    v76 = 5;
  }
  ((__int64 (*)(__int64))(*v85_.v89)[v76])((__int64)v85_.v89),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_61:
  PrimitiveDrawManager_1994180(**v73),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_1993840((__int64)**v73),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  PrimitiveDrawStack_f52120(a1, 0, 1),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LANES128(v115_.v115).n128_u64[0] = (unsigned __int64)GameData_1ff5c90;
  LANES128(v115_.v115).n128_u64[1] = a1;
  LANES128(v115_.v117).n128_u64[0] = (unsigned __int64)&v115_.v115;
  PrimitiveDrawStack_f51fa0((__int64*)(a1 + 64), (__int64)&v115_.v115),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((float32x4_t*)LANES128(v115_.v117).n128_u64[0] == &v115_.v115) {
    v77 = 32;
  }
  else {
    if (LANES128(v115_.v117).n128_u64[0] == 0) {
      goto LABEL_66;
    }
    v77 = 40;
  }
  (*(void (**)(void*))(*(_QWORD*)LANES128(v115_.v117).n128_u64[0] + v77))(
      (void*)LANES128(v115_.v117).n128_u64[0]),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_66:
  PrimitiveDrawManager_1994180(**v73),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v85_.v85 = GameData_1ff5d10;
  v85_.v86 = a1;
  v85_.v89 = &v85_.v85;
  game_map_PrimitiveDrawStack_EachDrawElementsMultiThread((_QWORD*)a1,
                                                          (__int64)&v85_.v85),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v85_.v89 == &v85_.v85) {
    v78 = 4;
  }
  else {
    if (v85_.v89 == nullptr) {
      goto LABEL_71;
    }
    v78 = 5;
  }
  ((__int64 (*)(__int64))(*v85_.v89)[v78])((__int64)v85_.v89),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_71:
  *(_QWORD*)(a1 + 48) = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 72) = *(_QWORD*)(a1 + 64);
  v7 = *(_QWORD*)(a1 + 16);
  v79 = *(_QWORD*)(a1 + 24);
  if (v7 != v79) {
    v80 = *(_QWORD*)(a1 + 24);
    do {
      v81 = *(_BYTE*)(v80 - 112);
      v80 -= 112;
      if ((v81 & 1) != 0) {
        v82 = *(_QWORD*)(v79 - 96);
        if (v82 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v67 + 200LL) != 0) {
            v83 = 128;
          }
          else {
            v83 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v67 + v83, v82),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
      }
      v79 = v80;
    } while (v80 != v7);
  }
LABEL_80:
  v84 = *(unsigned __int8*)(a1 + 120);
  *(_QWORD*)(a1 + 24) = v7;
  if (v84 == 1) {
    *(_BYTE*)(a1 + 120) = 0;
  }
  *(_DWORD*)(a1 + 128) = 0;
}

void game_map_f54ba0(__int64* a1, unsigned __int64 a2)
{
  __int64 v2;
  void (***v3)(void);
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64** v9;
  __int64 v10;
  char* v11;
  char* v12;
  void (***v13)(void);
  __int64** v14;
  __int64* v15;
  __int64* v16;
  void (***v17)(void);
  void (**v18)(void);
  __int64 v19;

  v2 = *a1;
  if (a2 > (a1[2] - *a1) >> 6) {
    if (a2 >> 58 != 0) {
      GameRoutine_f15920();
    }
    v3 = (void (***)(void))a1[1];
    v5 = a2 << 6;
    v6 = fw_memory_g_heap_manager_ptr;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        a2 << 6, 16, 0);
    v8 = v3 == (void (***)(void))v2;
    v9 = (__int64**)v7;
    v10 = v2;
    v11 = (char*)v9 + v5;
    v12 = (char*)v3 + (_QWORD)v9 - v2;
    if (!v8) {
      v13 = (void (***)(void))v10;
      v14 = v9;
      v15 = GameData_212f8a8[0] + 2;
      do {
        *v14 = v15;
        v14[3] = (__int64*)v13[3];
        v14[2] = (__int64*)v13[2];
        v14[4] = (__int64*)v13[4];
        v14[7] = (__int64*)v13[7];
        v16 = (__int64*)v13[6];
        v13 += 8;
        v14[6] = v16;
        v14 += 8;
      } while (v13 != v3);
      v17 = (void (***)(void))v10;
      do {
        v18 = *v17;
        ((void (*)(void (***)(void)))*v18)(v17);
        v17 += 8;
      } while (v17 != v3);
      v10 = *a1;
    }
    *a1 = (__int64)v9;
    a1[1] = (__int64)v12;
    a1[2] = (__int64)v11;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v19, v10);
    }
  }
}

void game_map_11408e0(__int64 a1, int a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 (*v11)();
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15[2];
    __int64 v16;
  } v15_;
  struct {
    _BYTE v17[24];
    int v18;
  } v17_;
  _BYTE* v19;

  *(_WORD*)(a1 + 8) = 0;
  v4 = (__int64*)(a1 + 8);
  *(_QWORD*)(a1 + 64) = 0;
  *(_WORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 56) = a2;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)a1 = game_map_MapBattleEventBase_vtable;
  if (v4 != a3) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      GameRoutine_64df20(v4, a3[2], a3[1]);
    }
    else {
      v6 = *a3;
      v7 = a3[2];
      v4[1] = a3[1];
      v4[2] = v7;
      *v4 = v6;
    }
  }
  v8 = a3[3];
  for (i = a3[4]; v8 != i; v8 += 32) {
    v17_.v17[0] = 0;
    v17_.v18 = -1;
    v10 = *(_DWORD*)(v8 + 24);
    if (v10 != -1) {
      v11 = GameData_2012138[v10];
      v19 = v17_.v17;
      ((void (*)(_BYTE**, __int64))v11)(&v19, v8);
      v17_.v18 = v10;
    }
    GameRoutine_eaec10((__int64*)(a1 + 64), (__int64)v17_.v17);
    if (v17_.v18 != -1) {
      ((void (*)(_BYTE**, _BYTE*))decltype_c81af0_ptr_2012120[v17_.v18])(
          &v19, v17_.v17);
    }
  }
  *(_DWORD*)(a1 + 104) = *((_DWORD*)a3 + 12);
  *(_DWORD*)(a1 + 108) = *((_DWORD*)a3 + 13);
  *(_DWORD*)(a1 + 112) = *((_DWORD*)a3 + 14);
  *(_DWORD*)(a1 + 116) = *((_DWORD*)a3 + 15);
  *(_BYTE*)(a1 + 120) = *((_BYTE*)a3 + 64);
  if ((a3[9] & 1) != 0) {
    fw_text_String_CopyTerminated(v15_.v15, a3[11], a3[10]);
  }
  else {
    v12 = a3[10];
    v13 = a3[11];
    v15_.v15[0] = a3[9];
    v15_.v15[1] = v12;
    v15_.v16 = v13;
  }
  (*(void (**)(__int64, __int64*))(*(_QWORD*)a1 + 120LL))(a1, v15_.v15);
  if ((v15_.v15[0] & 1) != 0 && v15_.v16 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v15_.v16);
  }
}

__attribute__((swiftcall)) void game_map_1140e80(PSEUDO_X8 x8_, _DWORD* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned int v3;
  unsigned int v4;
  unsigned __int64 v5;
  _BYTE* v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 v32;
    unsigned __int64 v33;
    char* v34;
  } v32_;
  struct {
    _QWORD v35[2];
    __int64 v36;
  } v35_;
  struct {
    _QWORD v37[2];
    __int64 v38;
  } v37_;
  struct {
    _QWORD v39[2];
    char* v40;
  } v39_;
  struct {
    _QWORD v41[2];
    __int64 v42;
    unsigned __int8 v43;
    _BYTE v44[15];
    _BYTE* v45;
  } v41_;

  v3 = (signed __int32)(a1[23] + a1[22]) / 2;
  v4 = (signed __int32)(a1[25] + a1[24]) / 2;
  (*(void (**)(__int64))(*(_QWORD*)a1 + 136LL))((__int64)a1);
  std___1_to_string_1a0a790((void*)(v41_.v41), v3);
  std___1_to_string_1a0a790((void*)(v39_.v39), v4);
  if ((v41_.v43 & 1) != 0) {
    v5 = *(_QWORD*)&v41_.v44[7];
  }
  else {
    v5 = (unsigned __int64)v41_.v43 >> 1;
  }
  if ((v41_.v43 & 1) != 0) {
    v6 = v41_.v45;
  }
  else {
    v6 = v41_.v44;
  }
  v7 = v5 + 1;
  if (v5 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v7 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v32_.v33 = v5 + 1;
    v32_.v34 = v8;
    v32_.v32 = v9 | 1;
    goto LABEL_15;
  }
  v32_.v33 = 0;
  v32_.v34 = nullptr;
  v32_.v32 = (unsigned __int8)(2 * v7);
  v8 = (char*)&v32_.v32 + 1;
  if (v5 != 0) {
  LABEL_15:
    GameRoutine_1a0b940((__int64)v8, (__int64)v6, v5);
  }
  v11 = v41_.v41[1];
  v10 = v41_.v42;
  *(_WORD*)&v8[v5] = 95;
  if ((v41_.v41[0] & 1) != 0) {
    v12 = (const char*)v10;
  }
  else {
    v12 = (char*)v41_.v41 + 1;
  }
  if ((v41_.v41[0] & 1) != 0) {
    v13 = v11;
  }
  else {
    v13 = (unsigned __int64)LOBYTE(v41_.v41[0]) >> 1;
  }
  v14 = (_QWORD*)GameRoutine_1a09ce0((__int64)&v32_.v32, v12, v13);
  v16 = v14[1];
  v15 = v14[2];
  v35_.v35[0] = *v14;
  v35_.v35[1] = v16;
  v35_.v36 = v15;
  v14[1] = 0;
  v14[2] = 0;
  *v14 = 0;
  v17 = (_QWORD*)GameRoutine_1a09ce0((__int64)v35_.v35, "_", 1u);
  v19 = v17[1];
  v18 = v17[2];
  v37_.v37[0] = *v17;
  v37_.v37[1] = v19;
  v37_.v38 = v18;
  v17[1] = 0;
  v17[2] = 0;
  *v17 = 0;
  if ((v39_.v39[0] & 1) != 0) {
    v20 = v39_.v40;
  }
  else {
    v20 = (char*)v39_.v39 + 1;
  }
  if ((v39_.v39[0] & 1) != 0) {
    v21 = v39_.v39[1];
  }
  else {
    v21 = (unsigned __int64)LOBYTE(v39_.v39[0]) >> 1;
  }
  v22 = (__int64*)GameRoutine_1a09ce0((__int64)v37_.v37, v20, v21);
  v23 = *v22;
  v24 = v22[1];
  *v22 = 0;
  v22[1] = 0;
  *a2 = v23;
  a2[1] = v24;
  v25 = v22[2];
  v22[2] = 0;
  a2[2] = v25;
  if ((v37_.v37[0] & 1) != 0 && v37_.v38 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  v37_.v38);
  }
  if ((v35_.v35[0] & 1) != 0 && v35_.v36 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  v35_.v36);
  }
  if ((v32_.v32 & 1) != 0 && v32_.v34 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  (__int64)v32_.v34);
  }
  if ((v39_.v39[0] & 1) != 0 && v39_.v40 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  (__int64)v39_.v40);
  }
  if ((v41_.v41[0] & 1) != 0 && v41_.v42 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  v41_.v42);
  }
  if ((v41_.v43 & 1) != 0 && v41_.v45 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31,
                                  (__int64)v41_.v45);
  }
}

__int64* game_map_15c0d00(_QWORD* a1)
{
  __int64* result;
  __int64 v3;
  char v4;
  char v5;
  int v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v12;
  __int64 v13;
  bool v15;
  __int64 v16;
  bool v18;
  __int64 v19;
  bool v21;
  __int64 v22;
  bool v24;
  bool v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  char v30;
  int v31;
  int v32;
  struct {
    _QWORD v33[4];
    _QWORD* v34;
  } v33_;
  struct {
    _QWORD v35[4];
    __int64* v36;
  } v35_;
  char v37;
  __int64* v38;

  result = MapUnitCommandItemMenu_15c0b80();
  v38 = result;
  if (result == nullptr) {
    return result;
  }
  v3 = (__int64)result;
  v4 = game_UnitItemList_Sort((__int64)result + 828, 0, 6);
  v5 = game_UnitItemList_Sort(v3 + 828, 6u, 24);
  if ((v4 & 1) != 0 || (v5 & 1) != 0) {
    v6 = *(_DWORD*)(v3 + 416);
    if ((v6 & 0x10000000) == 0) {
      *(_DWORD*)(v3 + 416) = v6 | 0x10000000;
      game_6c51e0(v3);
      GameRoutine_6c6da0(v3);
      game_6c6ec0(v3);
      *(_DWORD*)(v3 + 416) &= ~0x10000000u;
    }
  }
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144, 16, 0);
  UnitMenuItem_15b81a0(v8, "MID_SysMenu_Item", "MID_Sys_WeaponEndure");
  v28 = v8;
  BasicMenuCursor_16e0c00(a1, v8);
  v9 = fw_memory_HeapManager_Allocate(*v7, 104, 16, 0);
  *(_WORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 88) = v3;
  *(_DWORD*)(v9 + 40) = 0;
  *(_BYTE*)(v9 + 96) = 0;
  *(_WORD*)(v9 + 80) = 257;
  *(_BYTE*)(v9 + 82) = 1;
  *(_QWORD*)v9 = game_map_anonymous_ItemMenuItem_vtable_20543f0;
  *(_QWORD*)(v9 + 8) = 0;
  *(_BYTE*)(v9 + 96) = ItemMenuItem_Unknown71(v9);
  BasicMenuCursor_16e0c00(a1, v9);
  v30 = *(_BYTE*)(v3 + 831);
  v31 = *(unsigned __int16*)(v3 + 828);
  v10 = fw_memory_HeapManager_Allocate(*v7, 104, 16, 0);
  *(_WORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 257;
  *(_BYTE*)(v10 + 82) = 1;
  *(_QWORD*)(v10 + 88) = v3;
  *(_DWORD*)(v10 + 40) = 1;
  *(_QWORD*)v10 = game_map_anonymous_ItemMenuItem_vtable_20543f0;
  *(_QWORD*)(v10 + 8) = 0;
  *(_BYTE*)(v10 + 96) = 0;
  *(_BYTE*)(v10 + 96) = ItemMenuItem_Unknown71(v10);
  BasicMenuCursor_16e0c00(a1, v10);
  v12 = (*(_BYTE*)(v3 + 839) & 0x20) == 0 && *(_WORD*)(v3 + 836) != 0;
  v29 = v12;
  v13 = fw_memory_HeapManager_Allocate(*v7, 104, 16, 0);
  *(_WORD*)(v13 + 16) = 0;
  *(_QWORD*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_WORD*)(v13 + 80) = 257;
  *(_BYTE*)(v13 + 82) = 1;
  *(_QWORD*)(v13 + 88) = v3;
  *(_QWORD*)v13 = game_map_anonymous_ItemMenuItem_vtable_20543f0;
  *(_QWORD*)(v13 + 8) = 0;
  *(_BYTE*)(v13 + 96) = 0;
  *(_DWORD*)(v13 + 40) = 2;
  *(_BYTE*)(v13 + 96) = ItemMenuItem_Unknown71(v13);
  BasicMenuCursor_16e0c00(a1, v13);
  v15 = (*(_BYTE*)(v3 + 847) & 0x20) == 0 && *(_WORD*)(v3 + 844) != 0;
  v16 = fw_memory_HeapManager_Allocate(*v7, 104, 16, 0);
  *(_WORD*)(v16 + 16) = 0;
  *(_QWORD*)(v16 + 48) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_WORD*)(v16 + 80) = 257;
  *(_BYTE*)(v16 + 82) = 1;
  *(_QWORD*)(v16 + 88) = v3;
  *(_QWORD*)v16 = game_map_anonymous_ItemMenuItem_vtable_20543f0;
  *(_QWORD*)(v16 + 8) = 0;
  *(_BYTE*)(v16 + 96) = 0;
  *(_DWORD*)(v16 + 40) = 3;
  *(_BYTE*)(v16 + 96) = ItemMenuItem_Unknown71(v16);
  BasicMenuCursor_16e0c00(a1, v16);
  v18 = (*(_BYTE*)(v3 + 855) & 0x20) == 0 && *(_WORD*)(v3 + 852) != 0;
  v19 = fw_memory_HeapManager_Allocate(*v7, 104, 16, 0);
  *(_WORD*)(v19 + 16) = 0;
  *(_QWORD*)(v19 + 48) = 0;
  *(_QWORD*)(v19 + 56) = 0;
  *(_QWORD*)(v19 + 64) = 0;
  *(_QWORD*)(v19 + 72) = 0;
  *(_WORD*)(v19 + 80) = 257;
  *(_BYTE*)(v19 + 82) = 1;
  *(_QWORD*)(v19 + 88) = v3;
  *(_QWORD*)v19 = game_map_anonymous_ItemMenuItem_vtable_20543f0;
  *(_QWORD*)(v19 + 8) = 0;
  *(_BYTE*)(v19 + 96) = 0;
  *(_DWORD*)(v19 + 40) = 4;
  *(_BYTE*)(v19 + 96) = ItemMenuItem_Unknown71(v19);
  BasicMenuCursor_16e0c00(a1, v19);
  v21 = (*(_BYTE*)(v3 + 863) & 0x20) == 0 && *(_WORD*)(v3 + 860) != 0;
  v22 = fw_memory_HeapManager_Allocate(*v7, 104, 16, 0);
  *(_WORD*)(v22 + 16) = 0;
  *(_QWORD*)(v22 + 48) = 0;
  *(_QWORD*)(v22 + 56) = 0;
  *(_QWORD*)(v22 + 64) = 0;
  *(_QWORD*)(v22 + 72) = 0;
  *(_WORD*)(v22 + 80) = 257;
  *(_BYTE*)(v22 + 82) = 1;
  *(_QWORD*)(v22 + 88) = v3;
  *(_QWORD*)v22 = game_map_anonymous_ItemMenuItem_vtable_20543f0;
  *(_QWORD*)(v22 + 8) = 0;
  *(_BYTE*)(v22 + 96) = 0;
  *(_DWORD*)(v22 + 40) = 5;
  *(_BYTE*)(v22 + 96) = ItemMenuItem_Unknown71(v22);
  BasicMenuCursor_16e0c00(a1, v22);
  v24 = (*(_BYTE*)(v3 + 871) & 0x20) == 0 && *(_WORD*)(v3 + 868) != 0;
  v25 = (v30 & 0x20) != 0 || v31 == 0;
  if (v25 && !v29 && !v15 && !v18 && !v21 && !v24) {
    *(_BYTE*)(v28 + 81) = 0;
  }
  v35_.v35[2] = a1;
  v37 = 0;
  v32 = 1;
  v35_.v35[0] = GameData_2056240;
  v35_.v35[1] = &v38;
  v35_.v36 = v35_.v35;
  v33_.v33[0] = GameData_20562c0;
  v33_.v33[1] = a1;
  v33_.v33[2] = &v37;
  v33_.v34 = v33_.v33;
  Util_157bd60((__int64)v38, (__int64)v35_.v35, (__int64)v33_.v33, &v32);
  if (v33_.v34 == v33_.v33) {
    v26 = 32;
    goto LABEL_51;
  }
  if (v33_.v34 != nullptr) {
    v26 = 40;
  LABEL_51:
    (*(void (**)(__int64))(*v33_.v34 + v26))((__int64)v33_.v34);
  }
  result = v35_.v36;
  if (v35_.v36 == v35_.v35) {
    v27 = 32;
  }
  else {
    if (v35_.v36 == nullptr) {
      return result;
    }
    v27 = 40;
  }
  return (__int64*)(*(__int64 (**)(__int64))(*v35_.v36 + v27))(
      (__int64)v35_.v36);
}

__int64 game_map_1782a30(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 && (v3 = __dynamic_cast(v2, GameData_212e008[0],
                                      &GameData_20c30d8, 0)) != 0) {
    v4 = *(_QWORD*)(v3 + 88);
  }
  else {
    v4 = 0;
  }
  v5 = *(_QWORD*)(a1 + 152);
  if (v5 == 0) {
    v5 = a1;
  }
  v6 = *(_QWORD*)(v5 + 32);
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 512, 16, 0);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)v7 = v8 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register(v7);
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 224) = v7 + 232;
  v9 = GameData_2130240[0];
  *(_BYTE*)(v7 + 168) = 0;
  *(_BYTE*)(v7 + 172) = 0;
  *(_QWORD*)(v7 + 192) = 0;
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_QWORD*)(v7 + 248) = 0;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 272) = 0;
  *(_QWORD*)(v7 + 336) = 0;
  *(_QWORD*)(v7 + 344) = 0;
  *(_QWORD*)(v7 + 320) = 0;
  *(_QWORD*)(v7 + 328) = 0;
  *(_QWORD*)(v7 + 304) = 0;
  *(_QWORD*)(v7 + 312) = 0;
  *(_QWORD*)(v7 + 288) = 0;
  *(_QWORD*)(v7 + 296) = 0;
  *(_DWORD*)(v7 + 376) = 0;
  *(_QWORD*)(v7 + 384) = 0;
  *(_QWORD*)(v7 + 392) = 0;
  *(_QWORD*)(v7 + 400) = 0;
  *(_QWORD*)(v7 + 448) = 0;
  *(_QWORD*)(v7 + 464) = 0;
  *(_QWORD*)(v7 + 472) = 0;
  *(_BYTE*)(v7 + 480) = 0;
  *(_QWORD*)(v7 + 496) = v4;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = v9 + 2;
  *(_DWORD*)(v7 + 280) = 1065353216;
  *(_QWORD*)(v7 + 352) = 1;
  *(_QWORD*)(v7 + 368) = 0xFFFFFFFFLL;
  *(_DWORD*)(v7 + 408) = 2;
  *(_QWORD*)v7 = game_map_anonymous_MapSortieTroopSequence_vtable;
  *(_QWORD*)(v7 + 176) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20c32b0;
  *(_QWORD*)(v7 + 184) = 0;
  ProcInst_657850(v7, GameData_21319e0, "MapSortieTroopSequence", 1, v6);
  return 8;
}

__int64 game_map_17cece0(__int64 a1, __int64 a2, char a3, char a4, __int64 a5)
{

#pragma clang fp contract(off)
  char* v7;
  const char* v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  __int64 v16;
  const char* v17;
  const char* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  int v22;
  int v23;
  char v24;
  const char* v25;
  __int64 v26;
  const char* v27;
  __int64 v28;
  const char* v29;
  float v30;
  float v31;
  const char* v32;
  __int64 v33;
  const char* v34;
  float v35;
  float v36;
  _DWORD v38[5];
  float v39;
  float32x4_t v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;

  *(_BYTE*)(a1 + 116) = a3;
  if ((a4 & 1) != 0) {
    if (a5 != 0) {
      v7 = GameHr_6fb960(a2);
      if (v7 == nullptr) {
        goto LABEL_14;
      }
    }
    else {
      v7 = HistoryLogInfo_6fb810(a2);
      if (v7 == nullptr) {
      LABEL_14:
        v11 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 8), (__int64)"Icon");
        if (v11 != 0) {
          v11 =
              __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
        }
        game_1841930(v11, a2);
        if (*(_BYTE*)(a1 + 116) != 0) {
          v12 = "R_IO";
        }
        else {
          v12 = "L_IO";
        }
        GameHr_1562680(a1 + 8, v12, 0x1.0000000000000p+0f);
        v13 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 8),
                                              (__int64)"A_Info");
        if (v13 != 0) {
          Alignment_56b600(v13);
        }
        goto LABEL_64;
      }
    }
    v10 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 8), (__int64)"T_Txt");
    if (v10 != 0) {
      GameRoutine_156c5d0(v10, (__int64)v7, 0);
    }
    goto LABEL_14;
  }
  if ((a3 & 1) != 0) {
    v8 = "T_Txt_R";
  }
  else {
    v8 = "T_Txt_L";
  }
  if (a5 != 0) {
    v9 = GameHr_6fb960(a2);
    if (v9 == nullptr) {
      goto LABEL_24;
    }
  LABEL_22:
    v14 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 8), (__int64)v8);
    if (v14 != 0) {
      GameRoutine_156c5d0(v14, (__int64)v9, 0);
    }
    goto LABEL_24;
  }
  v9 = HistoryLogInfo_6fb810(a2);
  if (v9 != nullptr) {
    goto LABEL_22;
  }
LABEL_24:
  if (*(_BYTE*)(a1 + 116) != 0) {
    v15 = "Icon_R";
  }
  else {
    v15 = "Icon_L";
  }
  v16 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 8), (__int64)v15);
  if (v16 != 0) {
    v16 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0);
  }
  game_1841930(v16, a2);
  if (*(_BYTE*)(a1 + 116) != 0) {
    v17 = "R_IO";
  }
  else {
    v17 = "L_IO";
  }
  GameHr_1562680(a1 + 8, v17, 0x1.0000000000000p+0f);
  if (*(_BYTE*)(a1 + 116) != 0) {
    v18 = "T_Txt_R";
  }
  else {
    v18 = "T_Txt_L";
  }
  v19 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 8), (__int64)v18);
  if (v19 != 0) {
    v20 = v19;
    v21 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 8),
                                                 (__int64)v18);
    if (v21 != nullptr) {
      ui_text_190a0c0((float*)&v40, (__int64)v38, &v39, v21, v21[27]);
      v22 = v38[0];
      v23 = v38[1];
    }
    else {
      v22 = 0;
      v23 = 0;
    }
    v24 = *(_BYTE*)(v20 + 88);
    *(_DWORD*)(v20 + 80) = v22;
    *(_DWORD*)(v20 + 84) = v23;
    *(_BYTE*)(v20 + 88) = v24 | 0x10;
  }
  if (*(_BYTE*)(a1 + 116) != 0) {
    v25 = "A_Info_R";
  }
  else {
    v25 = "A_Info_L";
  }
  v26 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 8), (__int64)v25);
  if (v26 != 0) {
    Alignment_56b600(v26);
  }
  v44 = 0;
  v45 = 0;
  v42 = 0;
  v43 = 0;
  v41 = 0;
  LANES128(v40).n128_u64[1] =
      ui_LayoutAccessor_FindPane((__int64*)(a1 + 8), (__int64)v25);
  BYTE1(v45) = 1;
  if (*(_BYTE*)(a1 + 116) != 0) {
    v27 = "Bg_R";
  }
  else {
    v27 = "Bg_L";
  }
  v28 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 8), (__int64)v27);
  if (v28 != 0 && (v29 = Pane_58fac0(v28, "WindowMargin")) != nullptr) {
    v30 = *(float*)&v29[*((unsigned int*)v29 + 1)];
    v31 = v30 + v30;
  }
  else {
    v31 = 0x1.e000000000000p+5f;
  }
  LANES128(v40).n128_u64[0] =
      ui_LayoutAccessor_FindPane((__int64*)(a1 + 8), (__int64)v27);
  if (LANES128(v40).n128_u64[0] != 0) {
    *(float*)&v43 = v31;
  }
  game_156c240(&v40);
  if (*(_BYTE*)(a1 + 116) != 0) {
    v32 = "Glow_R";
  }
  else {
    v32 = "Glow_L";
  }
  v33 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 8), (__int64)v32);
  if (v33 != 0 && (v34 = Pane_58fac0(v33, "WindowMargin")) != nullptr) {
    v35 = *(float*)&v34[*((unsigned int*)v34 + 1)];
    v36 = v35 + v35;
  }
  else {
    v36 = 0x1.e000000000000p+5f;
  }
  LANES128(v40).n128_u64[0] =
      ui_LayoutAccessor_FindPane((__int64*)(a1 + 8), (__int64)v32);
  if (LANES128(v40).n128_u64[0] != 0) {
    *(float*)&v43 = v36;
  }
  game_156c240(&v40);
  snd_Fade_Fade_10c830((__int64)&v40, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_Telop_SkillActive",
                      (__int64)"SE_SYS_Telop_SkillActive", (__int64)&v40, 0,
                      0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(&v40);
LABEL_64:
  *(_DWORD*)(a1 + 112) = 1;
  return LayoutAccessor_155e830(a1 + 8, 1);
}

bool game_map_1829460(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  _BOOL4 v6;
  __int64 v7;
  int v8;
  const char* v9;
  const char* v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  int v40;
  int v41;
  unsigned __int16* v42;
  int v43;
  unsigned __int16* v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  __int64* v51;
  int v52;
  float v53;
  float v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  __int64* v63;
  int v64;
  _QWORD* v65;
  char v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  int v76;
  __int64* v77;
  int v78;
  __int64 v79;
  int v80;
  __int64 v81;
  int v82;
  __int64* v83;
  __int64 v84;
  __int64 v85;
  char v87;
  int v88;
  int v90;
  struct {
    _QWORD v91[4];
    _QWORD* v92;
  } v91_;
  int v93;

  v2 = *(_QWORD*)(a1 + 160);
  if (a2 != 0 && a2 == v2) {
    v5 = a2 + 1952;
    if (*(_WORD*)(a2 + 1952) == 0) {
      v5 = 0;
    }
    *(_QWORD*)(a1 + 272) = v5;
  }
  v6 = v2 != a2;
  if (v2 != a2) {
    *(_QWORD*)(a1 + 160) = a2;
  }
  if (a2 != 0) {
    v7 = *(_QWORD*)(a2 + 440);
    if (v7 != 0) {
      v8 = *(unsigned __int8*)(v7 + 16);
    }
    else {
      v8 = 9;
    }
    if (*(unsigned __int8*)(a1 + 168) != v8) {
      v6 = true;
      *(_BYTE*)(a1 + 168) = v8;
    }
    if (*(_BYTE*)(a2 + 2136) != 0) {
      v9 = (const char*)game_97b2f0(a2 + 2104);
    }
    else {
      v9 = (const char*)GameHr_67ed20(*(_QWORD**)(a2 + 392));
    }
    v10 = v9;
    v11 = strlen(v9);
    v12 = *(_BYTE*)(a1 + 176) >> 1;
    if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
      v12 = *(_QWORD*)(a1 + 184);
    }
    if (v11 != v12) {
      goto LABEL_25;
    }
    v13 = v11;
    if (v11 == -1) {
      goto LABEL_189;
    }
    v14 = (*(_BYTE*)(a1 + 176) & 1) != 0 ? *(_QWORD*)(a1 + 192) : a1 + 177;
    if (memcmp(v14, (__int64)v10, v13) != 0) {
    LABEL_25:
      GameRoutine_60a020(a1 + 176, v10);
      v6 = true;
    }
    v15 = *(unsigned __int8*)(a2 + 498);
    if (*(_DWORD*)(a1 + 200) != v15) {
      v6 = true;
      *(_DWORD*)(a1 + 200) = v15;
    }
    v16 = *(_DWORD*)(a2 + 504);
    if (*(_DWORD*)(a1 + 204) != v16) {
      v6 = true;
      *(_DWORD*)(a1 + 204) = v16;
    }
    v17 = *(unsigned __int8*)(a2 + 498);
    v18 = GameData_21d9968;
    v19 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    if (!(v17 < (int)v19)) {
      v20 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    }
    else {
      v20 = *(unsigned __int8*)(a2 + 498);
    }
    v21 = v20 - 1;
    if (*(_BYTE*)(a2 + 498) == 0) {
      v21 = 0;
    }
    v22 = *(_DWORD*)(GameData_21d9968 + 4 * v21);
    if (*(_DWORD*)(a1 + 208) != v22) {
      *(_DWORD*)(a1 + 208) = v22;
      v6 = true;
      v17 = *(unsigned __int8*)(a2 + 498);
      if (!(v17 < (int)v19)) {
        v20 = v19;
      }
      else {
        v20 = *(unsigned __int8*)(a2 + 498);
      }
    }
    if (v17 != 0) {
      v23 = v20;
    }
    else {
      v23 = 1;
    }
    if (v23 == (_DWORD)v19) {
      v24 = 0;
    }
    else {
      v24 = *(_DWORD*)(v18 + 4LL * v23);
    }
    if (*(_DWORD*)(a1 + 212) != v24) {
      v6 = true;
      *(_DWORD*)(a1 + 212) = v24;
    }
    v25 = Unit_6c8300((_QWORD*)a2, 0);
    if (*(_QWORD*)(a1 + 216) != v25) {
      v6 = true;
      *(_QWORD*)(a1 + 216) = v25;
    }
    v26 = game_Unit_GetJobName((_QWORD*)a2);
    v27 = strlen(v26);
    v28 = *(_BYTE*)(a1 + 224) >> 1;
    if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
      v28 = *(_QWORD*)(a1 + 232);
    }
    if (v27 != v28) {
      goto LABEL_57;
    }
    v29 = v27;
    if (v27 != -1) {
      if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
        v30 = *(_QWORD*)(a1 + 240);
      }
      else {
        v30 = a1 + 225;
      }
      if (memcmp(v30, (__int64)v26, v29) == 0) {
      LABEL_58:
        v31 = *(__int16*)(a2 + 492);
        if (*(_DWORD*)(a1 + 248) != v31) {
          v6 = true;
          *(_DWORD*)(a1 + 248) = v31;
        }
        LOBYTE(v91_.v91[0]) = 0;
        v32 = game_Unit_GetParam(a2);
        if (*(_DWORD*)(a1 + 252) != v32) {
          v6 = true;
          *(_DWORD*)(a1 + 252) = v32;
        }
        LOBYTE(v91_.v91[0]) = 0;
        v33 = game_Unit_GetParam(a2);
        if (*(_DWORD*)(a1 + 256) != v33) {
          v6 = true;
          *(_DWORD*)(a1 + 256) = v33;
        }
        v34 = *(unsigned __int8*)(a2 + 499);
        if (*(_DWORD*)(a1 + 260) != v34) {
          v6 = true;
          *(_DWORD*)(a1 + 260) = v34;
        }
        v35 = *(_QWORD*)(a2 + 440);
        if (v35 != 0) {
          v36 = *(_BYTE*)(v35 + 16);
        }
        else {
          v36 = 9;
        }
        v37 = game_g_shared_system_skills_ptr;
        if (((1 << v36) & 0xF1) == 0 ||
            (v38 = game_820d50(2), game_GameModeData_instance_ != 0) &&
                (v39 = game_GameVariableTable_Find(
                     *(_QWORD**)(game_GameModeData_instance_ + 48),
                     (unsigned __int64*)v38)) != 0 &&
                *(_DWORD*)(v39 + 32) != 0) {
          v40 = 0;
        }
        else {
          LODWORD(v91_.v91[0]) =
              *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xDCLL) + v37) & 0xFFF;
          if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)v91_.v91) &
               1) != 0) {
            v40 = 12;
          }
          else {
            v40 = 6;
          }
        }
        if (*(_DWORD*)(a1 + 264) != v40) {
          v6 = true;
          *(_DWORD*)(a1 + 264) = v40;
        }
        LODWORD(v91_.v91[0]) =
            *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xDCLL) + v37) & 0xFFF;
        v41 = game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)v91_.v91) & 1;
        if (*(unsigned __int8*)(a1 + 268) != v41) {
          v6 = true;
          *(_BYTE*)(a1 + 268) = v41;
        }
        if (*(_WORD*)(a2 + 1952) != 0) {
          v42 = (unsigned __int16*)(a2 + 1952);
        }
        else {
          v42 = nullptr;
        }
        v43 = game_gameui_1594bd0(a2, v42, 1);
        if (*(_DWORD*)(a1 + 280) != v43) {
          v6 = true;
          *(_DWORD*)(a1 + 280) = v43;
        }
        if (*(_WORD*)(a2 + 1952) != 0) {
          v44 = (unsigned __int16*)(a2 + 1952);
        }
        else {
          v44 = nullptr;
        }
        v45 = game_gameui_1594bd0(a2, v44, 0);
        if (*(_DWORD*)(a1 + 284) != v45) {
          v6 = true;
          *(_DWORD*)(a1 + 284) = v45;
        }
        v46 = UnitDerivedParams_6deeb0(a2, 1);
        if (*(_DWORD*)(a1 + 288) != v46) {
          v6 = true;
          *(_DWORD*)(a1 + 288) = v46;
        }
        v47 = UnitDerivedParams_6deeb0(a2, 0);
        if (*(_DWORD*)(a1 + 292) != v47) {
          v6 = true;
          *(_DWORD*)(a1 + 292) = v47;
        }
        v48 = game_Unit_GetUnknown4(a2, 1);
        if (*(_DWORD*)(a1 + 296) != v48) {
          v6 = true;
          *(_DWORD*)(a1 + 296) = v48;
        }
        v49 = game_Unit_GetUnknown4(a2, 0);
        if (*(_DWORD*)(a1 + 300) != v49) {
          v6 = true;
          *(_DWORD*)(a1 + 300) = v49;
        }
        v50 = UnitDerivedParams_6deeb0(a2, 1);
        v51 = GameData_212c878[0];
        v52 = v50 + *(__int16*)(a2 + 636);
        if (*(_WORD*)(a2 + 1952) != 0) {
          v52 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8LL * *(unsigned __int16*)(a2 + 1952)) +
                             118LL);
        }
        v53 = *(float*)(a2 + 688);
        if (!(v53 > 0x1.0000000000000p+0f)) {
          v54 = v53 * (float)(v52 + *(__int16*)(a2 + 684));
        }
        else {
          v54 = (float)*(__int16*)(a2 + 684) + (float)((float)v52 * v53);
        }
        v55 = (int)v54;
        if (!((int)v54 < 999)) {
          v55 = 999;
        }
        v56 = (v55 + *(__int16*)(a2 + 686)) &
              ~((v55 + *(__int16*)(a2 + 686)) >> 31);
        if (*(_DWORD*)(a1 + 304) != v56) {
          v6 = true;
          *(_DWORD*)(a1 + 304) = v56;
        }
        v57 = UnitDerivedParams_6deeb0(a2, 0) + *(__int16*)(a2 + 636);
        if (*(_WORD*)(a2 + 1952) != 0) {
          v57 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(*v51 + 64) +
                                        8LL * *(unsigned __int16*)(a2 + 1952)) +
                             118LL);
        }
        v58 = v57 & ~(v57 >> 31);
        if (*(_DWORD*)(a1 + 308) != v58) {
          v6 = true;
          *(_DWORD*)(a1 + 308) = v58;
        }
        LOBYTE(v91_.v91[0]) = 6;
        v59 = game_Unit_GetParam(a2);
        if (*(_DWORD*)(a1 + 312) != v59) {
          v6 = true;
          *(_DWORD*)(a1 + 312) = v59;
        }
        LOBYTE(v91_.v91[0]) = 6;
        v60 = game_Unit_GetParam(a2);
        if (*(_DWORD*)(a1 + 316) != v60) {
          v6 = true;
          *(_DWORD*)(a1 + 316) = v60;
        }
        LOBYTE(v91_.v91[0]) = 7;
        v61 = game_Unit_GetParam(a2);
        if (*(_DWORD*)(a1 + 320) != v61) {
          v6 = true;
          *(_DWORD*)(a1 + 320) = v61;
        }
        LOBYTE(v91_.v91[0]) = 7;
        v62 = game_Unit_GetParam(a2);
        if (*(_DWORD*)(a1 + 324) != v62) {
          v6 = true;
          *(_DWORD*)(a1 + 324) = v62;
        }
        if (*(_BYTE*)(a2 + 1944) != 0 &&
            *(_BYTE*)(*(_QWORD*)(a2 + 400) + 96LL) == 1) {
          v63 = GameData_212ceb0;
          if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                            GameData_212c998
                                                                [0] +
                                                        64LL) +
                                             8LL * *(unsigned __int8*)(a2 +
                                                                       1944)) +
                                  50LL) <=
                  (unsigned int)*(unsigned __int8*)(a2 + 552) &&
              (game_GameModeData_instance_ == 0 ||
               (*(_BYTE*)(game_GameModeData_instance_ + 56) & 0xFE) != 6) &&
              *(_QWORD*)(a2 + 408) == 0) {
            v63 = (__int64*)(a2 + 1944);
          }
        }
        else {
          v63 = GameData_212ceb0;
        }
        v64 = *(unsigned __int8*)v63;
        if (*(_DWORD*)(a1 + 328) != v64) {
          v6 = true;
          *(_DWORD*)(a1 + 328) = v64;
        }
        v65 = v91_.v91;
        v90 = 0;
        v91_.v91[0] = GameData_20e2628;
        v91_.v91[1] = &v90;
        v66 = *(_BYTE*)(a2 + 1536);
        v91_.v92 = v91_.v91;
        if ((v66 & 0x20) != 0) {
          v67 = *(_QWORD*)(a2 + 1496);
          v68 = *(_QWORD*)(a2 + 1488);
          if ((int)((unsigned __int64)(v67 - v68) >> 2) < 1) {
            v65 = v91_.v91;
          }
          else {
            v69 = 0;
            v70 = 0;
            v71 = GameData_212c880[0];
            v72 = *GameData_212c880[0];
            do {
              if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v72 + 64) +
                                       8LL * (*(_DWORD*)(v68 + v69) & 0xFFF)) +
                            104LL) == 5) {
                if (v91_.v92 == nullptr) {
                  GameRoutine_60a310();
                }
                (*(void (**)(_QWORD*, __int64))(*v91_.v92 + 48LL))(v91_.v92,
                                                                   v68 + v69);
                v72 = *v71;
                v67 = *(_QWORD*)(a2 + 1496);
                v68 = *(_QWORD*)(a2 + 1488);
              }
              ++v70;
              v69 += 4;
            } while (v70 < (int)((unsigned __int64)(v67 - v68) >> 2));
            v65 = v91_.v92;
            if (v91_.v92 != v91_.v91) {
              if (v91_.v92 != nullptr) {
                v73 = 40;
              LABEL_143:
                (*(void (**)(__int64))(*v65 + v73))((__int64)v65);
              }
              if (*(_DWORD*)(a1 + 332) != v90) {
                v6 = true;
                *(_DWORD*)(a1 + 332) = v90;
              }
              v74 = *(unsigned __int8*)GameRoutine_6d36d0((_QWORD*)a2);
              if (*(_DWORD*)(a1 + 336) != v74) {
                v6 = true;
                *(_DWORD*)(a1 + 336) = v74;
              }
              v93 = 0;
              v91_.v91[0] = GameData_1f91de8;
              v91_.v91[1] = &v93;
              v91_.v92 = v91_.v91;
              game_UnitItemList_EachItem((_WORD*)(a2 + 828), (__int64)v91_.v91);
              if (v91_.v92 == v91_.v91) {
                v75 = 32;
              }
              else {
                if (v91_.v92 == nullptr) {
                  goto LABEL_153;
                }
                v75 = 40;
              }
              (*(void (**)(__int64))(*v91_.v92 + v75))((__int64)v91_.v92);
            LABEL_153:
              v76 = v93 > 0;
              if (*(unsigned __int8*)(a1 + 340) != v76) {
                v6 = true;
                *(_BYTE*)(a1 + 340) = v76;
              }
              v77 = game_8224a0(0xBu);
              v78 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v79 = game_GameVariableTable_Find(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v77);
                if (v79 != 0) {
                  v78 = *(_DWORD*)(v79 + 32);
                }
                else {
                  v78 = 0;
                }
              }
              if (*(_DWORD*)(a1 + 344) != v78) {
                v6 = true;
                *(_DWORD*)(a1 + 344) = v78;
              }
              v80 = (*(_DWORD*)(a2 + 416) & 0x10000) != 0;
              if (*(unsigned __int8*)(a1 + 361) != v80) {
                v6 = true;
                *(_BYTE*)(a1 + 361) = v80;
              }
              if ((*(_BYTE*)(a1 + 362) & 1) == 0) {
                if (*(_WORD*)(a2 + 1952) != 0) {
                  v81 = a2 + 1952;
                }
                else {
                  v81 = 0;
                }
                if (*(_QWORD*)(a1 + 272) == v81) {
                  goto LABEL_170;
                }
                *(_QWORD*)(a1 + 272) = v81;
              }
              v6 = true;
            LABEL_170:
              v82 = 0;
              if (*(_QWORD*)(a1 + 160) != 0 && (*(_BYTE*)(a1 + 363) & 1) == 0) {
                v83 = GameData_212cfc0[0];
                v84 = game_map_752480(
                    *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL),
                    *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL),
                    0);
                if (v84 == 0 || a2 == v84) {
                  v85 = game_map_752480(
                      *(_DWORD*)(*(_QWORD*)(*v83 + 48) + 8LL),
                      *(_DWORD*)(*(_QWORD*)(*v83 + 48) + 12LL), 1);
                  v82 = v85 != 0 && a2 != v85;
                }
                else {
                  v82 = 1;
                }
              }
              if (*(unsigned __int8*)(a1 + 348) != v82) {
                v6 = true;
                *(_BYTE*)(a1 + 348) = v82;
              }
              v87 = game_GameGlobalData_unknown_;
              if (game_GameGlobalData_unknown_ != 0) {
                v87 = *(_BYTE*)game_GameGlobalData_unknown_;
              }
              v88 = v87 & 1;
              if (*(unsigned __int8*)(a1 + 349) != v88) {
                v6 = true;
                *(_BYTE*)(a1 + 349) = v88;
              }
              return v6;
            }
          }
        }
        v73 = 32;
        goto LABEL_143;
      }
    LABEL_57:
      GameRoutine_60a020(a1 + 224, v26);
      v6 = true;
      goto LABEL_58;
    }
  LABEL_189:
    fs_60a230();
  }
  return v6;
}

__int64 game_map_1829dc0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 (**v3)();
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  char v18;
  bool v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _BOOL4 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 (**v51)();
  __int64 (***v52)();
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64* v67;
  __int64* v68;
  _QWORD* v69;
  _QWORD* v70;
  __int64* v71;
  __int64 v72;
  char* v73;
  _BOOL4 v74;
  __int64 v75;
  _DWORD* v76;
  _DWORD* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  _DWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _DWORD* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned int v100;
  __int64 v101;
  unsigned int v102;
  __int64 v103;
  int v104;
  int v105;
  int v106;
  char* v107;
  _QWORD v108[2];
  struct {
    char* v109;
    __int64 v110;
  } v109_;
  struct {
    char* v111;
    __int64 v112;
  } v111_;
  struct {
    __int64 (**v113)();
    char** v114;
    char gap96_[16];
    __int64* v115;
  } v113_;

  if (*(_QWORD*)(result + 64) != 0) {
    v4 = result;
    result = *(_QWORD*)(result + 56);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v5 = *(_QWORD*)(v4 + 48);
        if (v5 != 0) {
          v1 = *(unsigned __int8*)(v5 + 24);
          v6 = v5 + 152;
          if (v1 == 0) {
            v6 = 0;
          }
          v2 = v6 != *(_QWORD*)(v4 + 64);
        }
        else {
          v2 = 1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((_DWORD)v2 != 0) {
            goto LABEL_11;
          }
        }
        else {
          v8 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak(v8);
          if ((_DWORD)v2 != 0) {
            goto LABEL_11;
          }
        }
        if ((v1 & 1) == 0) {
          return result;
        }
        goto LABEL_16;
      }
    LABEL_11:
      v7 = *(_QWORD*)(v4 + 56);
      if (v7 == 0 || *(_QWORD*)(v7 + 8) == -1) {
        return result;
      }
    LABEL_16:
      v9 = *(_QWORD**)(v4 + 160);
      if (v9 == nullptr) {
        return result;
      }
      LayoutAccessor_15730d0(v4 + 48, v9);
      if ((*(_BYTE*)(v4 + 176) & 1) != 0) {
        v10 = *(_QWORD*)(v4 + 192);
      }
      else {
        v10 = v4 + 177;
      }
      if (v10 != 0) {
        v11 = ui_LayoutAccessor_FindTextBox((__int64*)(v4 + 48),
                                            (__int64)"L_Name/T_Txt");
        if (v11 != 0) {
          game_156c5d0(v11, v10, 0);
        }
      }
      v12 =
          ui_LayoutAccessor_FindPane((__int64*)(v4 + 48), (__int64)"IconFace");
      if (v12 != 0) {
        v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
        if (v13 != 0) {
          if ((GameRoutine_1840740(v13, 0, *(_QWORD*)(v4 + 160), 6u, 1) & 1) !=
              0) {
            v14 = "Face_On";
          }
          else {
            v14 = "Face_Off";
          }
          LayoutAccessor_1562680(v4 + 48, v14, 0x1.0000000000000p+0f);
        }
      }
      v111_.v111 = "L_Lv";
      v111_.v112 = 4;
      GameRoutine_1572840_alt1((void*)(&v113_.v113), (__int64*)(v4 + 48),
                               &v111_.v111);
      if (v113_.v114 != nullptr) {
        v15 = std___1___shared_weak_count_lock((__int64)v113_.v114);
        v16 = (__int64*)v113_.v113;
        if (v113_.v114 != nullptr) {
          std___1___shared_weak_count___release_weak((__int64)v113_.v114);
        }
        if (v15 != 0 && v16 != nullptr) {
          StatusLV_18a30a0(v16, *(_QWORD*)(v4 + 160));
          v2 = *(_QWORD*)(v4 + 160);
          if (*(unsigned __int8*)(v2 + 498) > 0x62u ||
              (LODWORD(v113_.v113) =
                   *game_g_shared_system_skills_ptr_alt2 & 0xFFF,
               (game_HasSkill((_QWORD*)(v2 + 1744),
                              (unsigned int*)&v113_.v113) &
                1) != 0) &&
                  ((v17 = *(_QWORD*)(v2 + 440)) == 0
                       ? (v18 = 9)
                       : (v18 = *(_BYTE*)(v17 + 16)),
                   ((1 << v18) & 0xF1) != 0)) {
            v19 = false;
          }
          else {
            v20 = *(_QWORD*)(*(_QWORD*)(v4 + 160) + 440LL);
            if (v20 != 0) {
              v21 = *(_BYTE*)(v20 + 16);
            }
            else {
              v21 = 9;
            }
            v19 = ((1 << v21) & 0xF1) != 0;
          }
          v22 = v16[137];
          if (v22 != 0) {
            *(_BYTE*)(v22 + 88) = *(_BYTE*)(v22 + 88) & 0xFE | v19;
            ui_LayoutAccessor_SetPaneVisible((__int64)(v16 + 11),
                                             (__int64)"Border", 0);
          }
        }
        else if (v15 == 0) {
          goto LABEL_51;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak(v15);
        }
      }
    LABEL_51:
      v23 = ui_LayoutAccessor_FindPane((__int64*)(v4 + 48),
                                       (__int64)"IconForcesSymbol");
      if (v23 == 0) {
        goto LABEL_58;
      }
      v24 = __dynamic_cast(v23, GameData_212d670[0], GameData_212d678[0], 0);
      v25 = 0;
      if (v24 == 0) {
        goto LABEL_59;
      }
      v26 = *(_QWORD*)(v4 + 216);
      if (v26 != 0) {
        v27 = *(char**)(v26 + 48);
        if (v27 == nullptr) {
          goto LABEL_58;
        }
        v25 = *v27;
        if (*v27 == 0) {
          goto LABEL_59;
        }
        v2 = (__int64)&GameData_2241000;
        v28 = v24;
        if ((Manager_136afb0(ui_Manager_instance_ + 1264, 5u, v27) & 1) != 0) {
          v25 = Manager_136a920(ui_Manager_instance_ + 1264, v28, 0, 5u,
                                *(_BYTE**)(v26 + 48));
        }
        else {
        LABEL_58:
          v25 = 0;
        }
      }
    LABEL_59:
      ui_LayoutAccessor_SetPaneVisible(v4 + 48, (__int64)"IconForcesSymbol",
                                       v25 & 1);
      v29 = *(_QWORD*)(v4 + 56);
      v111_.v111 = "L_Class";
      v111_.v112 = 7;
      if (v29 != 0) {
        v30 = std___1___shared_weak_count_lock(v29);
        if (v30 != 0) {
          v31 = *(_QWORD*)(v4 + 48);
          v32 = v30;
          if (v31 != 0) {
            GameRoutine_182ba50_alt1((void*)((__int64*)&v113_.v113));
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
            std___1___shared_weak_count___release_weak(v32);
          }
          if (v31 != 0 && v113_.v114 != nullptr) {
            v33 = std___1___shared_weak_count_lock((__int64)v113_.v114);
            v34 = (__int64*)v113_.v113;
            if (v113_.v114 != nullptr) {
              std___1___shared_weak_count___release_weak((__int64)v113_.v114);
            }
            if (v33 != 0 && v34 != nullptr) {
              StatusClass_189d120_alt1(v34, *(_QWORD**)(v4 + 160), 0, 1, 0, 0,
                                       1);
            }
            else if (v33 == 0) {
              goto LABEL_75;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
              std___1___shared_weak_count___release_weak(v33);
            }
          }
        }
      }
    LABEL_75:
      v35 = LayoutAccessor_155fbe0((__int64*)(v4 + 48), "L_IconAnimal");
      if (v35[2] != 0) {
        v36 = v35;
        v37 = v35[1];
        if (v37 != 0) {
          v38 = std___1___shared_weak_count_lock(v37);
          if (v38 == 0) {
            goto LABEL_86;
          }
          v39 = *v36;
          if (*v36 != 0) {
            v2 = *(unsigned __int8*)(v39 + 24);
            v40 = v39 + 152;
            if ((_DWORD)v2 == 0) {
              v40 = 0;
            }
            v41 = v40 != v36[2];
          }
          else {
            v41 = true;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v42 = v38;
            (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
            std___1___shared_weak_count___release_weak(v42);
          }
          if (!v41) {
            if ((v2 & 1) == 0) {
              goto LABEL_92;
            }
          }
          else {
          LABEL_86:
            v43 = v36[1];
            if (v43 == 0 || *(_QWORD*)(v43 + 8) == -1) {
              goto LABEL_92;
            }
          }
          if ((Util_15761f0(v36, *(_QWORD*)(v4 + 160)) & 1) == 0) {
            LayoutAccessor_155e830((__int64)v36, 0);
          }
        }
      }
    LABEL_92:
      v44 = ui_LayoutAccessor_FindAlignment((__int64*)(v4 + 48),
                                            (__int64)"A_Class");
      if (v44 != 0) {
        Alignment_56b600(v44);
      }
      v45 = *(_QWORD*)(v4 + 56);
      v108[0] = "L_HP";
      v108[1] = 4;
      if (v45 != 0) {
        v46 = std___1___shared_weak_count_lock(v45);
        if (v46 != 0) {
          v47 = *(_QWORD*)(v4 + 48);
          v48 = v46;
          if (v47 != 0) {
            Layout_1363e00((void*)(&v109_.v109), *(_QWORD*)(v4 + 48),
                           (__int64)v108);
            v111_.v111 = nullptr;
            v111_.v112 = 0;
            if (v109_.v110 != 0 &&
                (v49 = std___1___shared_weak_count_lock(v109_.v110),
                 v111_.v112 = v49, v49 != 0) &&
                (v111_.v111 = v109_.v109, v109_.v109 != nullptr) &&
                (v50 = v49, (v51 = (__int64 (**)(void))__dynamic_cast(
                                 v109_.v109, GameData_212dfc0[0],
                                 GameData_2131930[0], 0)) != nullptr)) {
              v52 = (__int64 (***)(void))&v111_.v111;
              v113_.v113 = v51;
              v113_.v114 = (const char**)v50;
            }
            else {
              v52 = &v113_.v113;
            }
            *v52 = nullptr;
            v52[1] = nullptr;
            v3 = v113_.v113;
            v2 = (__int64)v113_.v114;
            if (v113_.v114 != nullptr) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)(v113_.v114 + 2), 1u,
                  memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
                std___1___shared_weak_count___release_weak(v2);
              }
            }
            v53 = v111_.v112;
            if (v111_.v112 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v111_.v112 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
              std___1___shared_weak_count___release_weak(v53);
            }
            if (v109_.v110 != 0) {
              std___1___shared_weak_count___release_weak(v109_.v110);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
            std___1___shared_weak_count___release_weak(v48);
          }
          if (v47 != 0 && v2 != 0) {
            v54 = std___1___shared_weak_count_lock(v2);
            std___1___shared_weak_count___release_weak(v2);
            if (v54 != 0 && v3 != nullptr) {
              v55 = *(_QWORD**)(v4 + 160);
              v57 = *(_DWORD*)(v4 + 248);
              v56 = *(_DWORD*)(v4 + 252);
              v58 = *(_DWORD*)(v4 + 256);
              LOBYTE(v113_.v113) = 0;
              v59 = game_Unit_GetParamLimit(v55, (unsigned __int8*)&v113_.v113);
              v60 = (__int64)v3[136];
              if (v60 != 0) {
                game_156c910_alt1(v60, "%d", 1, v57);
              }
              v61 = (__int64)v3[138];
              if (v61 != 0) {
                v62 = std___1___shared_weak_count_lock(v61);
                if (v62 != 0) {
                  v63 = v62;
                  v64 = (__int64)v3[137];
                  if (v64 != 0) {
                    StatusNum_1890220(v64, v56, v58, v59, 1, 0, -1);
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
                    std___1___shared_weak_count___release_weak(v63);
                  }
                }
              }
            }
            else if (v54 == 0) {
              goto LABEL_128;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
              std___1___shared_weak_count___release_weak(v54);
            }
          }
        }
      }
    LABEL_128:
      v65 = LayoutAccessor_155fbe0((__int64*)(v4 + 48), "L_HPStock");
      game_gameui_SetHpStock((__int64)v65, *(_QWORD*)(v4 + 160));
      v111_.v111 = "L_OverBlaze";
      v111_.v112 = 11;
      GameRoutine_1573280_alt1((void*)(&v113_.v113), (__int64*)(v4 + 48),
                               &v111_.v111);
      if (v113_.v114 != nullptr) {
        v66 = std___1___shared_weak_count_lock((__int64)v113_.v114);
        v67 = (__int64*)v113_.v113;
        if (v113_.v114 != nullptr) {
          std___1___shared_weak_count___release_weak((__int64)v113_.v114);
        }
        if (v66 != 0 && v67 != nullptr) {
          game_18c9b10(v67, *(_QWORD*)(v4 + 160), -1);
        }
        else if (v66 == 0) {
          goto LABEL_137;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
          std___1___shared_weak_count___release_weak(v66);
        }
      }
    LABEL_137:
      v68 = (__int64*)fw_memory_g_heap_manager_ptr;
      v69 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
      *v69 = 0xB00000000LL;
      v69[1] = 0xD0000000ALL;
      v69[2] = 0x100000000FLL;
      v69[3] = 0xE0000000CLL;
      v70 = (_QWORD*)fw_memory_HeapManager_Allocate(*v68, 16, 16, 0);
      *v70 = 0xA00000000LL;
      v70[1] = 0x100000000FLL;
      v71 = game_8224a0(0xBu);
      if (game_GameModeData_instance_ != 0) {
        v72 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v71);
        v73 = "Info_Simple";
        if (v72 != 0) {
          v74 = *(_DWORD*)(v72 + 32) == 1;
          if (*(_DWORD*)(v72 + 32) == 1) {
            v73 = "Info_Detail";
          }
        }
        else {
          v74 = false;
        }
      }
      else {
        v74 = false;
        v73 = "Info_Simple";
      }
      LayoutAccessor_1562cf0_alt1(v4 + 48, (unsigned int*)v73);
      v75 = *(_QWORD*)(v4 + 160);
      if (v74) {
        v76 = v69;
      }
      else {
        v76 = v70;
      }
      v113_.v113 = GameData_204e798;
      v113_.v114 = &v111_.v111;
      v113_.v115 = (__int64*)&v113_.v113;
      if (v74) {
        v77 = v69 + 4;
      }
      else {
        v77 = v70 + 2;
      }
      v111_.v111 = (const char*)v75;
      GameRoutine_1586d80_alt1(v4 + 48, v76, v77, (__int64)&v113_.v113, 1, 0, 0,
                               v75);
      if (v113_.v115 == (__int64*)&v113_.v113) {
        v78 = 32;
      }
      else {
        if (v113_.v115 == nullptr) {
          goto LABEL_155;
        }
        v78 = 40;
      }
      (*(void (**)(__int64))(*v113_.v115 + v78))((__int64)v113_.v115);
    LABEL_155:
      if (*(_QWORD*)(*v68 + 200) != 0) {
        v79 = 128;
      }
      else {
        v79 = 56;
      }
      nn_mem_StandardAllocator_Free(*v68 + v79, (__int64)v70);
      if (*(_QWORD*)(*v68 + 200) != 0) {
        v80 = 128;
      }
      else {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free(*v68 + v80, (__int64)v69);
      v81 = ui_LayoutAccessor_FindPane((__int64*)(v4 + 48), (__int64)"N_Equip");
      if (v81 == 0) {
        goto LABEL_217;
      }
      v82 = v81;
      v111_.v111 = "L_Equip00";
      v111_.v112 = 9;
      GameRoutine_17c77c0_alt1((void*)(&v113_.v113), (__int64*)(v4 + 48),
                               &v111_.v111);
      if (v113_.v114 == nullptr) {
        v86 = 0;
        goto LABEL_174;
      }
      v83 = std___1___shared_weak_count_lock((__int64)v113_.v114);
      v84 = (__int64)v113_.v113;
      if (v113_.v114 != nullptr) {
        std___1___shared_weak_count___release_weak((__int64)v113_.v114);
      }
      if (v83 != 0 && v84 != 0) {
        v85 = *(_QWORD*)(v4 + 272);
        v86 = v85 != 0;
        if (v85 != 0) {
          AsyncLoadThumbImage_18b53c0(v84, *(unsigned __int16**)(v4 + 272),
                                      *(_QWORD*)(v4 + 160), 0);
        }
        (*(void (**)(__int64, __int64))(*(_QWORD*)v84 + 40LL))(v84, v85 != 0);
      }
      else {
        v86 = 0;
        if (v83 == 0) {
          goto LABEL_174;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83);
        std___1___shared_weak_count___release_weak(v83);
      }
    LABEL_174:
      v111_.v111 = "L_Equip01";
      v111_.v112 = 9;
      GameRoutine_17c77c0_alt1((void*)(&v113_.v113), (__int64*)(v4 + 48),
                               &v111_.v111);
      if (v113_.v114 == nullptr) {
        goto LABEL_211;
      }
      v87 = std___1___shared_weak_count_lock((__int64)v113_.v114);
      v88 = (__int64)v113_.v113;
      if (v113_.v114 != nullptr) {
        std___1___shared_weak_count___release_weak((__int64)v113_.v114);
      }
      if (v87 == 0 || v88 == 0) {
        if (v87 == 0) {
        LABEL_208:
          *(_BYTE*)(v82 + 88) = *(_BYTE*)(v82 + 88) & 0xFE | v86;
          if (v86 == 0) {
            goto LABEL_217;
          }
          goto LABEL_212;
        }
        goto LABEL_207;
      }
      v89 = *(_QWORD*)(v4 + 160);
      if ((*(_WORD*)(v89 + 1536) & 0x40) != 0) {
        v92 = *(_QWORD*)(v89 + 1496);
        v93 = *(_QWORD*)(v89 + 1488);
        v90 = *GameData_212c880[0];
        if (v92 == v93) {
          v91 = GameData_212c8a8;
        }
        else {
          v94 = (v92 - v93) >> 2;
          v95 = 0;
          v91 = GameData_212c8a8;
          while (
              *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v90 + 64) +
                                   8LL * (*(_DWORD*)(v93 + 4 * v95) & 0xFFF)) +
                        104LL) != 6) {
            if (v94 == ++v95) {
              goto LABEL_191;
            }
          }
          v96 = (_DWORD*)(v93 + 4LL * (unsigned int)v95);
          if (v95 > -1) {
            v91 = v96;
          }
        }
      }
      else {
        v90 = *GameData_212c880[0];
        v91 = GameData_212c8a8;
      }
    LABEL_191:
      v97 = *(_QWORD*)(v89 + 408);
      if ((*(_DWORD*)v91 & 0xFFF) == 0 ||
          (v98 =
               *(_QWORD*)(*(_QWORD*)(v90 + 64) + 8LL * (*(_DWORD*)v91 & 0xFFF)),
           (GameRoutine_6fc510(v98) & 1) != 0) ||
          (v101 = *GameData_212c880[0], *(_BYTE*)(v98 + 273) != 0) &&
              ((v103 = *(_QWORD*)(*(_QWORD*)(v101 + 64) +
                                  8 * (*(_DWORD*)v91 & 0xFFFLL)),
                v104 = *(unsigned __int8*)(v103 + 104),
                v105 = *(unsigned __int8*)(v103 + 273),
                (unsigned int)(v104 - 5) >= 2)
                   ? (v106 = 0)
                   : (v106 = (*(_DWORD*)v91 >> 19) & 0x1F),
               (signed __int32)(v106 - ((*(_DWORD*)v91 >> 12) & 0x7F) + v105) <=
                   0)) {
        if (v97 != 0 ||
            ((v99 = *(_QWORD*)(v4 + 160),
              (int)(v100 = game_Unit_SkillList_FindKind(v99 + 1456, 5u)) <= -1)
                 ? (v91 = GameData_212c8a8)
                 : (v91 = (_DWORD*)(*(_QWORD*)(v99 + 1488) + 4LL * v100)),
             !game_SkillKey_IsUsable(v91))) {
          v102 = 0;
        LABEL_206:
          (*(void (**)(__int64, __int64))(*(_QWORD*)v88 + 40LL))(v88, v102);
          v86 |= v102;
        LABEL_207:
          if (atomic_fetch_add((atomic_ullong* volatile)(v87 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_208;
          }
          (*(void (**)(__int64))(*(_QWORD*)v87 + 16LL))(v87);
          std___1___shared_weak_count___release_weak(v87);
        LABEL_211:
          *(_BYTE*)(v82 + 88) = *(_BYTE*)(v82 + 88) & 0xFE | v86;
          if ((v86 & 1) == 0) {
          LABEL_217:
            ui_1572370_alt1(v4 + 48, *(_BYTE*)(v4 + 348));
            result = ui_LayoutAccessor_SetPaneVisible(
                v4 + 48, (__int64)"L_IconDropItem", *(_BYTE*)(v4 + 340));
            *(_BYTE*)(v4 + 362) = 0;
            return result;
          }
        LABEL_212:
          LayoutAccessor_1562cf0_alt1(v4 + 48,
                                      (unsigned int*)"EquipChange_Decide");
          if (*(_BYTE*)(v4 + 361) != 0) {
            v107 = "EquipChange_On";
          }
          else {
            v107 = "EquipChange_Off";
          }
          LayoutAccessor_1562cf0_alt1(v4 + 48, (unsigned int*)v107);
          if (*(_BYTE*)(v4 + 362) == 1) {
            LayoutAccessor_1562680(v4 + 48, "EquipChange_Decide",
                                   0x1.0000000000000p+0f);
          }
          goto LABEL_217;
        }
        v101 = *GameData_212c880[0];
      }
      AsyncLoadThumbImage_18b5580(
          v88,
          *(_QWORD*)(*(_QWORD*)(v101 + 64) + 8LL * (*(_DWORD*)v91 & 0xFFF)),
          *(_QWORD*)(v4 + 160), 0);
      v102 = 1;
      goto LABEL_206;
    }
  }
  return result;
}

__int64 game_map_19f5240(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 (***v45)();
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  int v50;
  __int64 (**v51)();
  __int64* v52;
  __int64* v53;
  char v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 (***v71)();
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  int v76;
  __int64 (**v77)();
  __int64* v78;
  __int64* v79;
  char v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 (***v84)();
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  int v90;
  __int64 (**v91)();
  __int64* v92;
  __int64* v93;
  char v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 (***v98)();
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  int v104;
  __int64 (**v105)();
  __int64* v106;
  __int64* v107;
  char v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  int v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  int v126;
  __int64 v127;
  __int64* v128;
  __int64* v129;
  char v130;
  __int64* v131;
  int v132;
  char v133;
  __int64 v134;
  _BYTE* v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  int v140;
  __int64 (**v141)();
  __int64 v142;
  _BYTE* v143;
  int v144;
  __int64* v145;
  __int64* v146;
  char v147;
  int v148;
  unsigned int v149;
  unsigned int v150;
  __int64 v151;
  __int64 v152;
  int v153;
  __int64 v154;
  int v155;
  __int64 v156;
  __int64 v157;
  bool v158;
  __int64 v159;
  unsigned __int64 v160;
  int v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  unsigned __int64 v165;
  int v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  int v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  int v176;
  __int64 v177;
  __int64 v178;
  __int64* v179;
  int v180;
  int v181;
  __int64* v182;
  int v183;
  unsigned __int64 v184;
  __int64 v185;
  int v186;
  __int64* v187;
  __int64 v188;
  int v189;
  __int64 v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  unsigned __int64 v199;
  __int64 v200;
  __int64 (***v201)();
  _QWORD* v202;
  __int64 v203;
  __int64 v204;
  int v205;
  __int64 v206;
  _QWORD* v207;
  _QWORD* v208;
  __int64 (***v209)();
  __int64* v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  int v217;
  struct {
    _QWORD v219[4];
    _QWORD* v220;
  } v219_;
  _WORD v221[2];
  __int64 (**v222)();
  __int128 v223;
  char v224;
  int v225;
  __int64* v226;
  unsigned __int64 v227;
  char v228;

  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = GameData_212cfd0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    v3 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8)),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v206 = COERCE_AS(__typeof__(v206),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v3 = nullptr;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1072, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v222 = nullptr;
  *(_QWORD*)&v223 = 0;
  game_menu_16dcd30(v5, (__int64)"MapUnitCommand", &v222, 0),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = GameData_212d6a8;
  v7 = v223;
  *(_QWORD*)v5 = GameData_212d6a8 + 2;
  *(_QWORD*)(v5 + 176) = v6 + 143;
  *(_QWORD*)(v5 + 1056) = v6 + 169;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v206 = COERCE_AS(__typeof__(v206),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v7),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v206 = COERCE_AS(__typeof__(v206),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_QWORD*)v5 = game_map_MapUnitCommandMenu_vtable;
  *(_QWORD*)(v5 + 176) = game_menu_MenuInput_InputUnknown00_ptr_2126c40;
  *(_QWORD*)(v5 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr;
  v8 = *GameData_212cfc0[0];
  if (*(_BYTE*)(*v2 + 8) != 0) {
    v9 = game_UnitPool_Get((_BYTE*)(*v2 + 8)),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v206 = COERCE_AS(__typeof__(v206),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v9 = nullptr;
  }
  Cursor_730e40(*(_QWORD*)(v8 + 48), (__int64)v9),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  LODWORD(v222) = 1065353216;
  if (*(_BYTE*)(v10 + 160) == 1) {
    (*(void (**)(__int64, float, float))(*(_QWORD*)(v10 + 136) + 24LL))(
        v10 + 136, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v206 = COERCE_AS(__typeof__(v206),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_DWORD*)(v10 + 144) = 0;
  }
  else {
    if (*(float*)(v10 + 144) <= 0x1.8000000000000p-1f &&
        ((*(__int64 (**)(__int64, __int64 (***)(void), __int64))(
             *(_QWORD*)(v10 + 136) + 8LL))(v10 + 136, &v222, v10 + 168) &
         1) == 0) {
      goto LABEL_16;
    }
    (*(void (**)(__int64))(*(_QWORD*)(v10 + 136) + 16LL))(v10 + 136),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v206 = COERCE_AS(__typeof__(v206),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))(*(_QWORD*)(v10 + 136) + 24LL))(v10 + 136),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v206 = COERCE_AS(__typeof__(v206),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_DWORD*)(v10 + 144) = 1061158912;
  }
  *(_DWORD*)(v10 + 148) = 0;
  *(_WORD*)(v10 + 160) = 256;
LABEL_16:
  ProcInst_657850_alt1(v5, (__int64)GameData_212c730,
                       (__int64)"MapUnitCommandMenu", 1, a1),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = *v4;
  GameData_22736d8 = v5;
  v12 = fw_memory_HeapManager_Allocate(v11, 96, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = GameData_22736d8;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)(v12 + 88) = 0;
  *(_BYTE*)(v12 + 82) = 1;
  *(_WORD*)(v12 + 80) = 257;
  *(_QWORD*)v12 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v12 + 8) = 0;
  v15 = *(_QWORD*)(v13 + 232);
  v14 = *(_QWORD*)(v13 + 240);
  *(_DWORD*)(v12 + 92) = 0;
  *(_BYTE*)(v12 + 89) = 0;
  v17 = v14 - v15;
  v16 = v17 == 0;
  v18 = (unsigned __int64)(v17 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v19 = 0;
  }
  else {
    v19 = v18 + 1;
  }
  *(_DWORD*)(v12 + 40) = v19;
  *(_WORD*)(v12 + 84) = -256;
  *(_BYTE*)(v12 + 86) = -1;
  *(_WORD*)(v12 + 90) = -1;
  *(_WORD*)(v12 + 87) = 9;
  *(_QWORD*)v12 = game_map_anonymous_EscapeMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v12),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = GameData_22736d8;
  *(_QWORD*)(v20 + 72) = 0;
  *(_QWORD*)(v20 + 80) = 0;
  *(_QWORD*)(v20 + 16) = 0;
  *(_QWORD*)(v20 + 24) = 0;
  *(_QWORD*)(v20 + 48) = 0;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 32) = 0;
  *(_QWORD*)(v20 + 40) = 0;
  *(_WORD*)(v20 + 80) = 257;
  *(_BYTE*)(v20 + 82) = 1;
  *(_QWORD*)v20 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v20 + 8) = 0;
  v22 = *(_QWORD*)(v21 + 240) - *(_QWORD*)(v21 + 232);
  v16 = v22 == 0;
  v23 = (unsigned __int64)(v22 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v24 = 0;
  }
  else {
    v24 = v23 + 1;
  }
  *(_DWORD*)(v20 + 40) = v24;
  *(_QWORD*)v20 = game_map_anonymous_TalkMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v20),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = GameData_22736d8;
  *(_QWORD*)(v25 + 72) = 0;
  *(_QWORD*)(v25 + 80) = 0;
  *(_QWORD*)(v25 + 16) = 0;
  *(_QWORD*)(v25 + 24) = 0;
  *(_QWORD*)(v25 + 48) = 0;
  *(_QWORD*)(v25 + 56) = 0;
  *(_QWORD*)(v25 + 64) = 0;
  *(_QWORD*)(v25 + 32) = 0;
  *(_QWORD*)(v25 + 40) = 0;
  *(_WORD*)(v25 + 80) = 257;
  *(_BYTE*)(v25 + 82) = 1;
  *(_QWORD*)v25 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v25 + 8) = 0;
  v27 = *(_QWORD*)(v26 + 240) - *(_QWORD*)(v26 + 232);
  v16 = v27 == 0;
  v28 = (unsigned __int64)(v27 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v29 = 0;
  }
  else {
    v29 = v28 + 1;
  }
  *(_DWORD*)(v25 + 40) = v29;
  *(_QWORD*)v25 = game_map_anonymous_CannonMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v25),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = GameData_22736d8;
  *(_QWORD*)(v30 + 72) = 0;
  *(_QWORD*)(v30 + 80) = 0;
  *(_QWORD*)(v30 + 16) = 0;
  *(_QWORD*)(v30 + 24) = 0;
  *(_QWORD*)(v30 + 48) = 0;
  *(_QWORD*)(v30 + 56) = 0;
  *(_QWORD*)(v30 + 64) = 0;
  *(_QWORD*)(v30 + 32) = 0;
  *(_QWORD*)(v30 + 40) = 0;
  *(_WORD*)(v30 + 80) = 257;
  *(_BYTE*)(v30 + 82) = 1;
  *(_QWORD*)v30 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v30 + 8) = 0;
  v32 = *(_QWORD*)(v31 + 240) - *(_QWORD*)(v31 + 232);
  v16 = v32 == 0;
  v33 = (unsigned __int64)(v32 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v34 = 0;
  }
  else {
    v34 = v33 + 1;
  }
  *(_DWORD*)(v30 + 40) = v34;
  *(_QWORD*)v30 = game_map_anonymous_AttackMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v30),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LOWORD(v219_.v219[0]) = 4;
  v226 = (__int64*)&v222;
  v222 = GameData_212ac30;
  *(_QWORD*)&v223 = v5;
  game_UnitSkillList_EachDirectSkill((__int64)(v3 + 182), v219_.v219,
                                     (__int64)&v222),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v226 == (__int64*)&v222) {
    v35 = 32;
  }
  else {
    if (v226 == nullptr) {
      goto LABEL_33;
    }
    v35 = 40;
  }
  (*(void (**)(__int64))(*v226 + v35))((__int64)v226),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_33:
  v36 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v37 = GameData_22736d8;
  *(_QWORD*)(v36 + 72) = 0;
  *(_QWORD*)(v36 + 80) = 0;
  *(_QWORD*)(v36 + 16) = 0;
  *(_QWORD*)(v36 + 24) = 0;
  *(_QWORD*)(v36 + 32) = 0;
  *(_QWORD*)(v36 + 40) = 0;
  *(_QWORD*)(v36 + 48) = 0;
  *(_QWORD*)(v36 + 56) = 0;
  *(_QWORD*)(v36 + 64) = 0;
  *(_BYTE*)(v36 + 82) = 1;
  *(_QWORD*)v36 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v36 + 8) = 0;
  *(_WORD*)(v36 + 80) = 257;
  v39 = *(_QWORD*)(v37 + 232);
  v38 = *(_QWORD*)(v37 + 240);
  *(_DWORD*)(v36 + 84) = 0;
  v40 = v38 - v39;
  v16 = v40 == 0;
  v41 = (unsigned __int64)(v40 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v42 = 0;
  }
  else {
    v42 = v41 + 1;
  }
  *(_DWORD*)(v36 + 40) = v42;
  *(_QWORD*)v36 = game_map_anonymous_SpecialMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v36),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v43 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v44 = GameData_22736d8;
  *(_WORD*)(v43 + 16) = 0;
  *(_DWORD*)(v43 + 40) = 0;
  v45 = (__int64 (***)(void))v43,
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v43 + 48) = 0;
  *(_QWORD*)(v43 + 56) = 0;
  *(_QWORD*)(v43 + 64) = 0;
  *(_QWORD*)(v43 + 72) = 0;
  *(_WORD*)(v43 + 80) = 257;
  *(_BYTE*)(v43 + 82) = 1;
  *(_QWORD*)v43 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v43 + 8) = 0;
  v47 = *(_QWORD*)(v44 + 232);
  v46 = *(_QWORD*)(v44 + 240);
  *(_DWORD*)(v43 + 84) = 0;
  v219_.v220 = v219_.v219;
  v48 = v46 - v47;
  v16 = v48 == 0;
  v219_.v219[0] = GameData_2128368;
  v49 = (unsigned __int64)(v48 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v50 = 0;
  }
  else {
    v50 = v49 + 1;
  }
  *(_DWORD*)(v43 + 40) = v50;
  v51 = game_map_anonymous_PollutionMenuItem_vtable;
  *(_QWORD*)v43 = game_map_anonymous_PollutionMenuItem_vtable;
  if (*(_BYTE*)(*v2 + 8) != 0) {
    v52 = game_UnitPool_Get((_BYTE*)(*v2 + 8)),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v206 = COERCE_AS(__typeof__(v206),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v51 = *v45;
    v53 = v52;
  }
  else {
    v53 = nullptr;
  }
  v54 = ((__int64 (*)(__int64 (***)(void)))v51[86])(v45),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_QWORD*)&v223 + 1) = v45;
  v221[0] = 1 << v54;
  v222 = GameData_21282e8;
  *(_QWORD*)&v223 = v219_.v219;
  v226 = (__int64*)&v222;
  game_UnitSkillList_EachIndirectSkill((__int64)(v53 + 182), v221,
                                       (__int64)&v222),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v226 == (__int64*)&v222) {
    v55 = 32;
  }
  else {
    if (v226 == nullptr) {
      goto LABEL_47;
    }
    v55 = 40;
  }
  (*(void (**)(__int64*))(*v226 + v55))(v226),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_47:
  if (v219_.v220 == v219_.v219) {
    v56 = 32;
  }
  else {
    if (v219_.v220 == nullptr) {
      goto LABEL_52;
    }
    v56 = 40;
  }
  (*(void (**)(_QWORD*))(*v219_.v220 + v56))(v219_.v220),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_52:
  BasicMenuCursor_16e0c00((_QWORD*)v5, (__int64)v45),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v57 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58 = GameData_22736d8;
  *(_QWORD*)(v57 + 72) = 0;
  *(_QWORD*)(v57 + 80) = 0;
  *(_QWORD*)(v57 + 16) = 0;
  *(_QWORD*)(v57 + 24) = 0;
  *(_QWORD*)(v57 + 32) = 0;
  *(_QWORD*)(v57 + 40) = 0;
  *(_QWORD*)(v57 + 48) = 0;
  *(_QWORD*)(v57 + 56) = 0;
  *(_QWORD*)(v57 + 64) = 0;
  *(_QWORD*)v57 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v57 + 8) = 0;
  *(_WORD*)(v57 + 80) = 257;
  *(_BYTE*)(v57 + 82) = 1;
  v60 = *(_QWORD*)(v58 + 232);
  v59 = *(_QWORD*)(v58 + 240);
  *(_DWORD*)(v57 + 84) = 0;
  v61 = v59 - v60;
  v16 = v61 == 0;
  v62 = (unsigned __int64)(v61 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v63 = 0;
  }
  else {
    v63 = v62 + 1;
  }
  *(_DWORD*)(v57 + 40) = v63;
  *(_QWORD*)v57 = game_map_anonymous_ArtsMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v57),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v64 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v65 = GameData_22736d8;
  *(_QWORD*)(v64 + 72) = 0;
  *(_QWORD*)(v64 + 80) = 0;
  *(_QWORD*)(v64 + 16) = 0;
  *(_QWORD*)(v64 + 24) = 0;
  *(_QWORD*)(v64 + 48) = 0;
  *(_QWORD*)(v64 + 56) = 0;
  *(_QWORD*)(v64 + 64) = 0;
  *(_QWORD*)(v64 + 32) = 0;
  *(_QWORD*)(v64 + 40) = 0;
  *(_WORD*)(v64 + 80) = 257;
  *(_BYTE*)(v64 + 82) = 1;
  *(_QWORD*)v64 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v64 + 8) = 0;
  v66 = *(_QWORD*)(v65 + 240) - *(_QWORD*)(v65 + 232);
  v16 = v66 == 0;
  v67 = (unsigned __int64)(v66 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v68 = 0;
  }
  else {
    v68 = v67 + 1;
  }
  *(_DWORD*)(v64 + 40) = v68;
  *(_QWORD*)v64 = game_map_anonymous_AssistMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v64),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v69 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v70 = GameData_22736d8;
  *(_WORD*)(v69 + 16) = 0;
  *(_DWORD*)(v69 + 40) = 0;
  v71 = (__int64 (***)(void))v69,
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v69 + 48) = 0;
  *(_QWORD*)(v69 + 56) = 0;
  *(_QWORD*)(v69 + 64) = 0;
  *(_QWORD*)(v69 + 72) = 0;
  *(_WORD*)(v69 + 80) = 257;
  *(_BYTE*)(v69 + 82) = 1;
  *(_QWORD*)v69 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v69 + 8) = 0;
  v73 = *(_QWORD*)(v70 + 232);
  v72 = *(_QWORD*)(v70 + 240);
  *(_DWORD*)(v69 + 84) = 0;
  v74 = v72 - v73;
  v16 = v74 == 0;
  v219_.v219[0] = GameData_2128d18;
  v75 = (unsigned __int64)(v74 + 0x7FFFFFFF8LL) >> 3;
  v219_.v220 = v219_.v219;
  if (v16) {
    v76 = 0;
  }
  else {
    v76 = v75 + 1;
  }
  *(_DWORD*)(v69 + 40) = v76;
  v77 = game_map_anonymous_GambitMenuItem_vtable;
  *(_QWORD*)v69 = game_map_anonymous_GambitMenuItem_vtable;
  if (*(_BYTE*)(*v2 + 8) != 0) {
    v78 = game_UnitPool_Get((_BYTE*)(*v2 + 8)),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v206 = COERCE_AS(__typeof__(v206),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v77 = *v71;
    v79 = v78;
  }
  else {
    v79 = nullptr;
  }
  v80 = ((__int64 (*)(__int64 (***)(void)))v77[86])(v71),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v222 = GameData_21282e8;
  *(_QWORD*)&v223 = v219_.v219;
  *((_QWORD*)&v223 + 1) = v71;
  v221[0] = 1 << v80;
  v226 = (__int64*)&v222;
  game_UnitSkillList_EachIndirectSkill((__int64)(v79 + 182), v221,
                                       (__int64)&v222),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v226 == (__int64*)&v222) {
    v81 = 32;
  }
  else {
    if (v226 == nullptr) {
      goto LABEL_69;
    }
    v81 = 40;
  }
  (*(void (**)(__int64*))(*v226 + v81))(v226),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_69:
  if (v219_.v220 == v219_.v219) {
    v82 = 32;
  }
  else {
    if (v219_.v220 == nullptr) {
      goto LABEL_74;
    }
    v82 = 40;
  }
  (*(void (**)(_QWORD*))(*v219_.v220 + v82))(v219_.v220),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_74:
  BasicMenuCursor_16e0c00((_QWORD*)v5, (__int64)v71),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v83 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_WORD*)(v83 + 16) = 0;
  *(_DWORD*)(v83 + 40) = 0;
  v84 = (__int64 (***)(void))v83,
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v83 + 48) = 0;
  *(_QWORD*)(v83 + 56) = 0;
  *(_QWORD*)(v83 + 64) = 0;
  *(_QWORD*)(v83 + 72) = 0;
  *(_QWORD*)v83 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v83 + 8) = 0;
  *(_WORD*)(v83 + 80) = 257;
  v85 = GameData_22736d8;
  *(_BYTE*)(v83 + 82) = 1;
  v87 = *(_QWORD*)(v85 + 232);
  v86 = *(_QWORD*)(v85 + 240);
  *(_DWORD*)(v83 + 84) = 0;
  v219_.v220 = v219_.v219;
  v88 = v86 - v87;
  v16 = v88 == 0;
  v89 = (unsigned __int64)(v88 + 0x7FFFFFFF8LL) >> 3;
  v219_.v219[0] = GameData_21290f8;
  if (v16) {
    v90 = 0;
  }
  else {
    v90 = v89 + 1;
  }
  *(_DWORD*)(v83 + 40) = v90;
  v91 = game_map_anonymous_RageMenuItem_vtable;
  *(_QWORD*)v83 = game_map_anonymous_RageMenuItem_vtable;
  if (*(_BYTE*)(*v2 + 8) != 0) {
    v92 = game_UnitPool_Get((_BYTE*)(*v2 + 8)),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v206 = COERCE_AS(__typeof__(v206),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v91 = *v84;
    v93 = v92;
  }
  else {
    v93 = nullptr;
  }
  v94 = ((__int64 (*)(__int64 (***)(void)))v91[86])(v84),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v222 = GameData_21282e8;
  *(_QWORD*)&v223 = v219_.v219;
  *((_QWORD*)&v223 + 1) = v84;
  v221[0] = 1 << v94;
  v226 = (__int64*)&v222;
  game_UnitSkillList_EachIndirectSkill((__int64)(v93 + 182), v221,
                                       (__int64)&v222),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v226 == (__int64*)&v222) {
    v95 = 32;
  }
  else {
    if (v226 == nullptr) {
      goto LABEL_85;
    }
    v95 = 40;
  }
  (*(void (**)(__int64*))(*v226 + v95))(v226),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_85:
  if (v219_.v220 == v219_.v219) {
    v96 = 32;
  }
  else {
    if (v219_.v220 == nullptr) {
      goto LABEL_90;
    }
    v96 = 40;
  }
  (*(void (**)(_QWORD*))(*v219_.v220 + v96))(v219_.v220),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_90:
  BasicMenuCursor_16e0c00((_QWORD*)v5, (__int64)v84),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v97 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_WORD*)(v97 + 16) = 0;
  *(_DWORD*)(v97 + 40) = 0;
  v98 = (__int64 (***)(void))v97,
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v97 + 48) = 0;
  *(_QWORD*)(v97 + 56) = 0;
  *(_QWORD*)(v97 + 64) = 0;
  *(_QWORD*)(v97 + 72) = 0;
  *(_QWORD*)v97 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v97 + 8) = 0;
  *(_WORD*)(v97 + 80) = 257;
  v99 = GameData_22736d8;
  *(_BYTE*)(v97 + 82) = 1;
  v101 = *(_QWORD*)(v99 + 232);
  v100 = *(_QWORD*)(v99 + 240);
  *(_DWORD*)(v97 + 84) = 0;
  v219_.v220 = v219_.v219;
  v102 = v100 - v101;
  v16 = v102 == 0;
  v103 = (unsigned __int64)(v102 + 0x7FFFFFFF8LL) >> 3;
  v219_.v219[0] = GameData_2129458;
  v219_.v219[1] = v97;
  if (v16) {
    v104 = 0;
  }
  else {
    v104 = v103 + 1;
  }
  *(_DWORD*)(v97 + 40) = v104;
  v105 = game_map_anonymous_MorphMenuItem_vtable;
  *(_QWORD*)v97 = game_map_anonymous_MorphMenuItem_vtable;
  if (*(_BYTE*)(*v2 + 8) != 0) {
    v106 = game_UnitPool_Get((_BYTE*)(*v2 + 8)),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v206 = COERCE_AS(__typeof__(v206),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v105 = *v98;
    v107 = v106;
  }
  else {
    v107 = nullptr;
  }
  v108 = ((__int64 (*)(__int64 (***)(void)))v105[86])(v98),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v222 = GameData_21282e8;
  *(_QWORD*)&v223 = v219_.v219;
  *((_QWORD*)&v223 + 1) = v98;
  v221[0] = 1 << v108;
  v226 = (__int64*)&v222;
  game_UnitSkillList_EachIndirectSkill((__int64)(v107 + 182), v221,
                                       (__int64)&v222),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v226 == (__int64*)&v222) {
    v110 = 32;
  }
  else {
    if (v226 == nullptr) {
      goto LABEL_101;
    }
    v110 = 40;
  }
  (*(void (**)(__int64*, __int64))(*v226 + v110))(v226, v109),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_101:
  if (v219_.v220 == v219_.v219) {
    v111 = 32;
  }
  else {
    if (v219_.v220 == nullptr) {
      goto LABEL_106;
    }
    v111 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v219_.v220 + v111))(v219_.v220, v109),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_106:
  BasicMenuCursor_16e0c00((_QWORD*)v5, (__int64)v98),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v112 = fw_memory_HeapManager_Allocate(*v4, 96, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v113 = GameData_22736d8;
  *(_QWORD*)(v112 + 16) = 0;
  *(_QWORD*)(v112 + 24) = 0;
  *(_QWORD*)(v112 + 32) = 0;
  *(_QWORD*)(v112 + 40) = 0;
  *(_QWORD*)(v112 + 48) = 0;
  *(_QWORD*)(v112 + 56) = 0;
  *(_QWORD*)(v112 + 64) = 0;
  *(_QWORD*)(v112 + 72) = 0;
  *(_QWORD*)(v112 + 80) = 0;
  *(_QWORD*)(v112 + 88) = 0;
  *(_WORD*)(v112 + 80) = 257;
  *(_BYTE*)(v112 + 82) = 1;
  *(_QWORD*)v112 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v112 + 8) = 0;
  v115 = *(_QWORD*)(v113 + 232);
  v114 = *(_QWORD*)(v113 + 240);
  *(_WORD*)(v112 + 84) = -256;
  *(_BYTE*)(v112 + 86) = -1;
  v116 = v114 - v115;
  v16 = v116 == 0;
  *(_DWORD*)(v112 + 92) = 0;
  *(_BYTE*)(v112 + 89) = 0;
  *(_WORD*)(v112 + 90) = -1;
  *(_WORD*)(v112 + 87) = 9;
  v117 = (unsigned __int64)(v116 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v118 = 0;
  }
  else {
    v118 = v117 + 1;
  }
  *(_DWORD*)(v112 + 40) = v118;
  *(_QWORD*)v112 = game_map_anonymous_TreasureboxMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v112),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v119 = fw_memory_HeapManager_Allocate(*v4, 104, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_WORD*)(v119 + 16) = 0;
  *(_DWORD*)(v119 + 40) = 0;
  v120 = v119;
  *(_QWORD*)(v119 + 48) = 0;
  *(_QWORD*)(v119 + 56) = 0;
  *(_QWORD*)(v119 + 64) = 0;
  *(_QWORD*)(v119 + 72) = 0;
  *(_WORD*)(v119 + 80) = 257;
  *(_QWORD*)v119 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v119 + 8) = 0;
  *(_BYTE*)(v119 + 82) = 1;
  v122 = *(_QWORD*)(GameData_22736d8 + 232);
  v121 = *(_QWORD*)(GameData_22736d8 + 240);
  *(_WORD*)(v119 + 84) = -256;
  v123 = v119 + 84;
  *(_BYTE*)(v119 + 86) = -1;
  *(_DWORD*)(v119 + 92) = 0;
  *(_BYTE*)(v119 + 89) = 0;
  *(_WORD*)(v119 + 90) = -1;
  v124 = v121 - v122;
  v16 = v124 == 0;
  *(_WORD*)(v119 + 87) = 9;
  *(_BYTE*)(v119 + 96) = 0;
  v125 = (unsigned __int64)(v124 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v126 = 0;
  }
  else {
    v126 = v125 + 1;
  }
  *(_DWORD*)(v119 + 40) = v126;
  *(_QWORD*)v119 = game_map_anonymous_GimmickMenuItem_vtable;
  v127 = *GameData_212cff0[0];
  v128 = GameData_212cfd0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    v129 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8)),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v206 = COERCE_AS(__typeof__(v206),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v129 = nullptr;
  }
  VTarget_778140(v127 + 8, (__int64)v129, 26, 0),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v130 = (*(__int64 (**)(__int64))(*(_QWORD*)(v127 + 8) + 24LL))(v127 + 8),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v131 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v130 & 1) != 0 && *(_DWORD*)(v127 + 12356) == 1) {
    v132 = *(_DWORD*)(v127 + 76);
    *(_QWORD*)v123 = *(_QWORD*)(v127 + 68);
    v133 = 1;
    *(_DWORD*)(v123 + 8) = v132;
  }
  else {
    v133 = 0;
  }
  *(_BYTE*)(v120 + 96) = v133;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v120),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v134 = fw_memory_HeapManager_Allocate(*v131, 104, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_WORD*)(v134 + 16) = 0;
  *(_DWORD*)(v134 + 40) = 0;
  v135 = (_BYTE*)v134;
  *(_QWORD*)(v134 + 48) = 0;
  *(_QWORD*)(v134 + 56) = 0;
  *(_QWORD*)(v134 + 64) = 0;
  *(_QWORD*)(v134 + 72) = 0;
  *(_QWORD*)v134 = game_map_anonymous_UnitMenuItem_vtable;
  *(_QWORD*)(v134 + 8) = 0;
  *(_WORD*)(v134 + 80) = 257;
  *(_BYTE*)(v134 + 82) = 1;
  v137 = *(_QWORD*)(GameData_22736d8 + 232);
  v136 = *(_QWORD*)(GameData_22736d8 + 240);
  *(_DWORD*)(v134 + 92) = 0;
  *(_BYTE*)(v134 + 89) = 0;
  *(_BYTE*)(v134 + 96) = 0;
  v138 = v136 - v137;
  v16 = v138 == 0;
  v139 = (unsigned __int64)(v138 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v140 = 0;
  }
  else {
    v140 = v139 + 1;
  }
  *(_DWORD*)(v134 + 40) = v140;
  *(_WORD*)(v134 + 84) = -256;
  *(_BYTE*)(v134 + 86) = -1;
  *(_WORD*)(v134 + 90) = -1;
  *(_WORD*)(v134 + 87) = 9;
  v141 = game_map_anonymous_WarpMenuItem_vtable;
  *(_QWORD*)v134 = game_map_anonymous_WarpMenuItem_vtable;
  v142 = *v128;
  v227 = 0xFFFFFFFF00000000LL;
  v222 = (__int64 (**)(void))(GameData_212d1f8[0] + 2),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v144 = *(unsigned __int8*)(v142 + 8);
  v143 = (_BYTE*)(v142 + 8);
  if (v144 != 0) {
    v145 = game_UnitPool_Get(v143),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v206 = COERCE_AS(__typeof__(v206),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v141 = *(__int64 (***)(void))v135,
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v206 = COERCE_AS(__typeof__(v206),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v146 = v145;
  }
  else {
    v146 = nullptr;
  }
  v147 = ((__int64 (*)(_BYTE*))v141[76])(v135),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LOBYTE(v223) = 0;
  v226 = nullptr;
  v228 = 0;
  *(_QWORD*)((char*)&v223 + 4) = 0;
  HIDWORD(v223) = 0;
  v225 = -1;
  if (v146 != nullptr) {
    v148 = *((_DWORD*)v146 + 148);
    v149 = *((char*)v146 + 585);
    LOBYTE(v223) = *((_BYTE*)v146 + 2088);
    v150 = *((char*)v146 + 584);
    HIDWORD(v223) = v148;
    *(_QWORD*)((char*)&v223 + 4) = __PAIR64__(v149, v150);
  }
  v151 = *(_QWORD*)v135;
  v224 = v147;
  LODWORD(v227) = 0;
  v152 = (*(__int64 (**)(_BYTE*))(v151 + 576))(v135),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v152 != 0) {
    v153 = v227 & 0xFFFFF000 | *(_WORD*)(v152 + 16) & 0xFFF;
  }
  else {
    v153 = v227 & 0xFFFFF000;
  }
  LODWORD(v227) = v153;
  v154 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v135 + 584LL))(v135),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v154 != 0) {
    v155 = (*(__int64 (**)(__int64))(*(_QWORD*)v154 + 32LL))(v154),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v206 = COERCE_AS(__typeof__(v206),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v155 = -1;
  }
  HIDWORD(v227) = v155;
  v135[96] = (*(__int64 (**)(__int64*))((char*)((__int128*)0x10LL) +
                                        (_QWORD)v222 + 8))((__int64*)&v222) &
             1,
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  BasicMenuCursor_16e0c00((_QWORD*)v5, (__int64)v135),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v156 = fw_memory_HeapManager_Allocate(*v131, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v157 = GameData_22736d8;
  v158 = true;
  *(_QWORD*)(v156 + 8) = 0;
  *(_QWORD*)(v156 + 16) = 0;
  *(_QWORD*)(v156 + 24) = 0;
  *(_QWORD*)(v156 + 32) = 0;
  *(_QWORD*)(v156 + 56) = 0;
  *(_QWORD*)(v156 + 64) = 0;
  *(_QWORD*)(v156 + 72) = 0;
  *(_QWORD*)(v156 + 80) = 0;
  *(_QWORD*)(v156 + 40) = 0;
  *(_QWORD*)(v156 + 48) = 0;
  *(_WORD*)(v156 + 80) = 257;
  *(_BYTE*)(v156 + 82) = 1;
  v159 = *(_QWORD*)(v157 + 240) - *(_QWORD*)(v157 + 232);
  v16 = v159 == 0;
  v160 = (unsigned __int64)(v159 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v161 = 0;
  }
  else {
    v161 = v160 + 1;
  }
  *(_DWORD*)(v156 + 40) = v161;
  *(_QWORD*)v156 = game_map_anonymous_RideMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v156),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v162 = fw_memory_HeapManager_Allocate(*v131, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v163 = GameData_22736d8;
  *(_QWORD*)(v162 + 8) = 0;
  *(_QWORD*)(v162 + 16) = 0;
  *(_QWORD*)(v162 + 24) = 0;
  *(_QWORD*)(v162 + 32) = 0;
  *(_QWORD*)(v162 + 56) = 0;
  *(_QWORD*)(v162 + 64) = 0;
  *(_QWORD*)(v162 + 72) = 0;
  *(_QWORD*)(v162 + 80) = 0;
  *(_QWORD*)(v162 + 40) = 0;
  *(_QWORD*)(v162 + 48) = 0;
  *(_WORD*)(v162 + 80) = 257;
  *(_BYTE*)(v162 + 82) = 1;
  v164 = *(_QWORD*)(v163 + 240) - *(_QWORD*)(v163 + 232);
  v16 = v164 == 0;
  v165 = (unsigned __int64)(v164 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v166 = 0;
  }
  else {
    v166 = v165 + 1;
  }
  *(_DWORD*)(v162 + 40) = v166;
  *(_QWORD*)v162 = game_map_anonymous_ItemMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v162),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v167 = fw_memory_HeapManager_Allocate(*v131, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v168 = GameData_22736d8;
  *(_QWORD*)(v167 + 8) = 0;
  *(_QWORD*)(v167 + 16) = 0;
  *(_QWORD*)(v167 + 24) = 0;
  *(_QWORD*)(v167 + 32) = 0;
  *(_QWORD*)(v167 + 56) = 0;
  *(_QWORD*)(v167 + 64) = 0;
  *(_QWORD*)(v167 + 72) = 0;
  *(_QWORD*)(v167 + 80) = 0;
  *(_QWORD*)(v167 + 40) = 0;
  *(_QWORD*)(v167 + 48) = 0;
  *(_WORD*)(v167 + 80) = 257;
  *(_BYTE*)(v167 + 82) = 1;
  v169 = *(_QWORD*)(v168 + 240) - *(_QWORD*)(v168 + 232);
  v16 = v169 == 0;
  v170 = (unsigned __int64)(v169 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v171 = 0;
  }
  else {
    v171 = v170 + 1;
  }
  *(_DWORD*)(v167 + 40) = v171;
  *(_QWORD*)v167 = game_map_anonymous_TransportMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v167),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v172 = fw_memory_HeapManager_Allocate(*v131, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v173 = GameData_22736d8;
  *(_QWORD*)(v172 + 8) = 0;
  *(_QWORD*)(v172 + 16) = 0;
  *(_QWORD*)(v172 + 24) = 0;
  *(_QWORD*)(v172 + 32) = 0;
  *(_QWORD*)(v172 + 56) = 0;
  *(_QWORD*)(v172 + 64) = 0;
  *(_QWORD*)(v172 + 72) = 0;
  *(_QWORD*)(v172 + 80) = 0;
  *(_QWORD*)(v172 + 40) = 0;
  *(_QWORD*)(v172 + 48) = 0;
  *(_WORD*)(v172 + 80) = 257;
  *(_BYTE*)(v172 + 82) = 1;
  v174 = *(_QWORD*)(v173 + 240) - *(_QWORD*)(v173 + 232);
  v16 = v174 == 0;
  v175 = (unsigned __int64)(v174 + 0x7FFFFFFF8LL) >> 3;
  if (v16) {
    v176 = 0;
  }
  else {
    v176 = v175 + 1;
  }
  *(_DWORD*)(v172 + 40) = v176;
  *(_QWORD*)v172 = game_map_anonymous_TradeMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v172),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v178 = *(_QWORD*)(v5 + 232);
  v179 = *(__int64**)(v5 + 240);
  if ((__int64*)v178 != v179) {
    v180 = 0;
    v181 = 0;
    v182 = GameData_212e008[0];
    while (1) {
      v183 = (((unsigned __int64)v179 - v178 + 0x7FFFFFFF8LL) >> 3) + 1;
      v158 = v181 < v183;
      if (!(v181 < v183)) {
        goto LABEL_171;
      }
      v184 = (unsigned __int64)v179 - v178 - 8;
      v185 = (v184 >> 3) + 1;
      if (!(v184 < 0x18)) {
        break;
      }
      v186 = 0;
      v187 = (__int64*)v178;
      v188 = v185 & 3;
      if (v188 != 0) {
      LABEL_151:
        v189 = v186 + v180;
        while (v189 != 0) {
          ++v187;
          ++v189;
          if (--v188 == 0) {
            goto LABEL_147;
          }
        }
      LABEL_166:
        v196 = *v187;
        if (*v187 != 0) {
        LABEL_167:
          v197 = __dynamic_cast(v196, v182, &GameData_21270a0, 0),
          v109 = COERCE_AS(__typeof__(v109),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v206 = COERCE_AS(__typeof__(v206),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v197 != 0) {
            v198 = v197;
            (*(void (**)(__int64))(*(_QWORD*)v197 + 648LL))(v197),
                v109 =
                    COERCE_AS(__typeof__(v109),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v206 =
                    COERCE_AS(__typeof__(v206),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(__int64))(*(_QWORD*)v198 + 656LL))(v198),
                v109 =
                    COERCE_AS(__typeof__(v109),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v206 =
                    COERCE_AS(__typeof__(v206),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v178 = *(_QWORD*)(v5 + 232);
            v179 = *(__int64**)(v5 + 240);
          }
        }
      }
    LABEL_147:
      ++v181;
      --v180;
      if ((__int64*)v178 == v179) {
        goto LABEL_171;
      }
    }
    v190 = v185 & 0x3FFFFFFFFFFFFFFCLL;
    v191 = 0;
    v187 = (__int64*)v178;
    while (v181 != v191) {
      v192 = v191;
      v193 = v191 + 1;
      if (v181 == v193) {
        v196 = v187[1];
        if (v196 != 0) {
          goto LABEL_167;
        }
        goto LABEL_147;
      }
      v194 = v193 + 1;
      if (v181 == v194) {
        v187 += 2;
        goto LABEL_166;
      }
      v195 = v194 + 1;
      if (v181 == v195) {
        v196 = v187[3];
        if (v196 != 0) {
          goto LABEL_167;
        }
        goto LABEL_147;
      }
      v187 += 4;
      v190 -= 4;
      v191 = v195 + 1;
      if (v190 == 0) {
        v186 = v192 + 4;
        v188 = v185 & 3;
        if (v188 != 0) {
          goto LABEL_151;
        }
        goto LABEL_147;
      }
    }
    goto LABEL_166;
  }
LABEL_171:
  v219_.v220 = v219_.v219;
  v219_.v219[0] = GameData_212af88;
  v199 = ((__int64)v179 - v178) >> 3;
  if (!(v199 > 1)) {
    v202 = v219_.v219;
    v203 = 32;
    goto LABEL_184;
  }
  v222 = GameData_212af88;
  v226 = (__int64*)&v222;
  if (v158) {
    v200 = 4;
    v201 = &v222;
  }
  else {
    GameRoutine_16e3a80(v178, v179, (__int64)&v222, (2 * __clz(v199)) ^ 0x7E,
                        1),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v206 = COERCE_AS(__typeof__(v206),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v201 = (__int64 (***)(void))v226,
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v206 = COERCE_AS(__typeof__(v206),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v226 == (__int64*)&v222) {
      v200 = 4;
    }
    else {
      if (v226 == nullptr) {
        goto LABEL_180;
      }
      v200 = 5;
    }
  }
  ((void (*)(__int64 (***)(void), __int64))(*v201)[v200])(v201, v177),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_180:
  v202 = v219_.v220;
  if (v219_.v220 == v219_.v219) {
    v203 = 32;
  }
  else {
    if (v219_.v220 == nullptr) {
      goto LABEL_185;
    }
    v203 = 40;
  }
LABEL_184:
  (*(void (**)(_QWORD*, __int64))(*v202 + v203))(v202, v177),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_185:
  v204 = fw_memory_HeapManager_Allocate(*v131, 88, 16, 0),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v204 + 72) = 0;
  *(_QWORD*)(v204 + 80) = 0;
  *(_QWORD*)(v204 + 8) = 0;
  *(_QWORD*)(v204 + 16) = 0;
  *(_QWORD*)(v204 + 24) = 0;
  *(_QWORD*)(v204 + 32) = 0;
  *(_QWORD*)(v204 + 56) = 0;
  *(_QWORD*)(v204 + 64) = 0;
  *(_QWORD*)(v204 + 40) = 0;
  *(_QWORD*)(v204 + 48) = 0;
  *(_WORD*)(v204 + 80) = 257;
  *(_BYTE*)(v204 + 82) = 1;
  if (*(_QWORD*)(GameData_22736d8 + 240) ==
      *(_QWORD*)(GameData_22736d8 + 232)) {
    v205 = 0;
  }
  else {
    v205 = ((unsigned __int64)(*(_QWORD*)(GameData_22736d8 + 240) -
                               *(_QWORD*)(GameData_22736d8 + 232) +
                               0x7FFFFFFF8LL) >>
            3) +
           1;
  }
  *(_DWORD*)(v204 + 40) = v205;
  *(_QWORD*)v204 = game_map_anonymous_FixedMenuItem_vtable;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v204),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_map_g_unit_menu_index < 0) {
    goto LABEL_212;
  }
  v207 = *(_QWORD**)(v5 + 232);
  v208 = *(_QWORD**)(v5 + 240);
  v209 = &v222;
  LODWORD(v223) = game_map_g_unit_menu_index;
  v222 = GameData_212b008;
  v226 = (__int64*)&v222;
  if (v207 == v208) {
    v212 = 0;
  LABEL_202:
    v213 = 4;
    goto LABEL_203;
  }
  v210 = GameData_212e008[0];
  while (1) {
    if (*v207 != 0) {
      v211 = __dynamic_cast(*v207, v210, &GameData_21270a0, 0),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v211 != 0) {
        v212 = v211;
        v219_.v219[0] = v211;
        if (v226 == nullptr) {
          GameRoutine_60a310(),
              v109 = COERCE_AS(__typeof__(v109),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v177 = COERCE_AS(__typeof__(v177),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v206 = COERCE_AS(__typeof__(v206),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if (((*(__int64 (**)(__int64*, _QWORD*))(*v226 + 48))(v226,
                                                              v219_.v219) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v207 == v208) {
      v212 = 0;
      break;
    }
  }
  v209 = (__int64 (***)(void))v226,
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v206 = COERCE_AS(__typeof__(v206),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v226 == (__int64*)&v222) {
    goto LABEL_202;
  }
  if (v226 != nullptr) {
    v213 = 5;
  LABEL_203:
    ((void (*)(__int64 (***)(void), __int64))(*v209)[v213])(v209, v206),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v206 = COERCE_AS(__typeof__(v206),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v212 == 0) {
  LABEL_212:
    game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable(v5, 1),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v206 = COERCE_AS(__typeof__(v206),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return v5;
  }
  v214 = *(_QWORD*)(v5 + 336);
  if (v214 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v214 + 168LL))(v214),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v206 = COERCE_AS(__typeof__(v206),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_QWORD*)(v5 + 336) = v212;
  BasicMenu_16dea40(v5, 1, 0, 0),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v206 = COERCE_AS(__typeof__(v206),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v215 = *(_QWORD*)(v5 + 336);
  if (v215 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v215 + 160LL))(v215),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v206 = COERCE_AS(__typeof__(v206),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    game_IsVibrationEnabled(
        (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL)),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v206 = COERCE_AS(__typeof__(v206),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v216 = *(_QWORD*)(v5 + 336);
    v217 = 4;
    if (v216 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v216 + 120LL))(v216) & 1) != 0) {
        v217 = 4;
      }
      else {
        v217 = 0;
      }
    }
  }
  else {
    v217 = 4;
  }
  *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v217;
  return v5;
}

#pragma GCC visibility pop
