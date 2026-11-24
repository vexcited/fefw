#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* game_map_Trick_Impl_UpdateLink(_QWORD*);
_QWORD* game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable(__int64,
                                                               __int64);
__attribute__((swiftcall)) void game_gameui_15ad0c0(PSEUDO_X8, _QWORD*,
                                                    _QWORD*);
__attribute__((swiftcall)) void game_menu_anonymous_e980a0(PSEUDO_X8,
                                                           __int64 result);
__attribute__((swiftcall)) void math_622ac0(PSEUDO_X8, float32x2_t*);
__attribute__((swiftcall)) void wld_map_c21740(PSEUDO_X8, __int64* result,
                                               __int64, unsigned __int64);
__int64* game_UnitPool_Get(_BYTE*);
__int64 AIThink_1200be0(__int64, unsigned int, unsigned int, int, __int64);
__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);
__int64 GameHr_7a88a0(__int64*);
__int64 GameRoutine_11f2730(__int64 result, __int64, int);
__int64 GameRoutine_11f3dc0(unsigned __int16*);
__int64 GameRoutine_128e990(__int64 result, _DWORD*);
__int64 GameRoutine_14b4cf0(__int64, unsigned int, __int64);
__int64 GameRoutine_747a00(__int64, __int64, __int64, __int64, char);
__int64 GameRoutine_ea60e0(__int64*, __int64);
__int64 GameRoutine_f09600(__int64);
__int64 GmapTalkCommandMenu_e94ee0(_QWORD*, __int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 MindBtlInfo_Destructor(_QWORD*);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 SceneObject_13fd320(__int64);
__int64 Time_e1e170(__int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_11f4940(__int64, char, char);
__int64 game_HashString(__int64 result);
__int64 game_Unit_GetParam(__int64);
__int64 game_cmdbtl_e76460(__int64, __int64*, __int64, __int16);
__int64 game_menu_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool AIThink_1279680(__int64*, unsigned int*);
bool GameHr_cb18f0(_QWORD*, __int64);
bool SceneManager_138dbe0(_QWORD*, __int64);
bool game_128f6c0(__int64*, int*);
bool game_HasSkill(_QWORD*, _DWORD*);
bool game_cmdbtl_e76590(__int64, __int64, _DWORD*, int, unsigned __int16*);
char* game_util_Format(const char*, ...);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN GameData_1b45704;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6180;
extern __int16* GameData_212cf08[9];
extern __int16 GameData_221b408;
extern __int64 (*GameData_1f9a470[])();
extern __int64 (*GameData_1f9b928[])();
extern __int64 (*GameData_1f9baa8[])();
extern __int64 (*GameData_1f9bb28[])();
extern __int64 (*GameData_1feae80[])();
extern __int64 (*GameData_1feaf90[])();
extern __int64 (*GameData_1fec470[])();
extern __int64 (*GameData_2019448[])();
extern __int64 (*GameData_20194c8[])();
extern __int64 (*GmapTalkCommandMenu_Destructor_e966b0_ptr[])();
extern __int64 (*TalkCommandMenu_Destructor_e97ff0_ptr[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 (*game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr[])();
extern __int64 (*game_menu_anonymous_FuncUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_GiftUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_GmapTalkCommandMenu_vtable[])();
extern __int64 (*game_menu_anonymous_LessonUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_PersonInfoUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ProcurementUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ScoutUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_TalkCommandMenu_vtable[])();
extern __int64 (*snd_Archive_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212d638[10];
extern __int64* GameData_212d6a8;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212f7d0[4];
extern __int64* GameData_212f968;
extern __int64* GameData_2130920[5];
extern __int64* GameData_21309c8[5];
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_212c638;
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d290;
extern __int64 GameData_212d750;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212ebf8[2];
extern __int64 GameData_212f730[2];
extern __int64 GameData_212f738;
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21ca310;
extern __int64 GameData_221b410;
extern __int64 GameData_221b418;
extern __int64 GameData_224b6d8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_talk_g_select_menu;
extern char GameData_1bb7384[2];
int* GameRoutine_74df60(int* result, __int64);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 ProcGmapMap_1687160(unsigned __int64 result, __int64,
                                     unsigned __int64, __int64*);
unsigned __int64 ProcGmapMap_1687580(unsigned __int64 result, char*, char*,
                                     __int64, __int64, __int64, __int64);
unsigned __int64 strlen(const char*);
void AIDeploy_1274f90(_QWORD*, __int64, int, unsigned int*);
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void EffectConst_965ec0(__int64);
void GameHr_1226120(__int64, __int64);
void GameHr_965080(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_7d18f0();
void __attribute__((noreturn)) GameRoutine_e952b0();
void __attribute__((noreturn)) GameRoutine_e96a00();
void __attribute__((noreturn)) GameRoutine_ea6540();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void __cxa_guard_release(__int64);
void game_map_965220(__int64, unsigned int, unsigned int, unsigned int, _QWORD*,
                     float);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void util_cb2640(__int64**);
__int64 llvm_libcxx_21_libcxx_include___functional_104020(__int64 result,
                                                          __int64 a2);
__int64 llvm_libcxx_21_libcxx_include___functional_7d5160(__int64 a1, char a2);
__int64 llvm_libcxx_21_libcxx_include___functional_888560(__int64 a1);
float32x4_t llvm_libcxx_21_libcxx_include___functional_a38a50(__int64 a1,
                                                              float32x4_t* a2,
                                                              float32x4_t* a3);
float llvm_libcxx_21_libcxx_include___functional_e4ff70(__int64 a1, int* a2);
void llvm_libcxx_21_libcxx_include___functional_e93140(__int64 a1);
__int64 llvm_libcxx_21_libcxx_include___functional_ea95a0(__int64 a1,
                                                          _DWORD* a2);
__int64 llvm_libcxx_21_libcxx_include___functional_10466d0(__int64 a1,
                                                           __int64* a2);
__int64 llvm_libcxx_21_libcxx_include___functional_120b090(__int64 a1);
bool llvm_libcxx_21_libcxx_include___functional_120b2e0(__int64 a1, _DWORD* a2,
                                                        _DWORD* a3);
bool llvm_libcxx_21_libcxx_include___functional_127a1a0(__int64 a1, _DWORD* a2);
void llvm_libcxx_21_libcxx_include___functional_129f1d0(__int64 a1, _DWORD* a2);
void llvm_libcxx_21_libcxx_include___functional_138f6a0(__int64* result);
__int64 llvm_libcxx_21_libcxx_include___functional_15adbb0(__int64 a1,
                                                           __int64 a2,
                                                           unsigned int* a3);
char* llvm_libcxx_21_libcxx_include___functional_1686d40(char* result, char* a2,
                                                         unsigned __int64 a3,
                                                         __int64* a4,
                                                         __int64 a5);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
_QWORD* game_10027c0(_QWORD*, char*);
_QWORD* game_menu_1789cf0_alt1(__int64, __int64);
_QWORD* ui_control_1886790(_QWORD* result);
__attribute__((swiftcall)) void QuestSupport_1030400(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64, unsigned __int16*,
                                      int);
__int64* GameRoutine_b3f6c0(_QWORD*, const char*);
__int64* GameRoutine_b3f800(_QWORD*, const char*);
__int64* game_820d50(int);
__int64 AIBattleSimulator_11fc220(__int64, long double);
__int64 AISupportSkillScope_11ff9b0(__int64, __int64*, __int64, __int64);
__int64 AiInterferenceSimulator_128e230(__int64, __int64);
__int64 BasicMenu_16dd8b0(__int64, int, int);
__int64 GameRoutine_11fbb20(__int64);
__int64 GameRoutine_15b59e0(__int64);
__int64 GameRoutine_15b5f20(__int64);
__int64 GameRoutine_1647b80(__int64, const char**);
__int64 GameRoutine_18d4880(__int64, __int64);
__int64 GameRoutine_193bea0(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cc0(_QWORD, const char*, ...);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_20();
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c2b50(__int64);
__int64 GameRoutine_790080(__int64);
__int64 GameRoutine_8a29c0(__int64 result, __int64);
__int64 GameRoutine_a96e40(_QWORD, _QWORD);
__int64 GameRoutine_a96ee0(_QWORD, _QWORD);
__int64 ProcInst_657850_alt1(__int64, __int64, const char*, char, __int64);
__int64 ResourceBuilder_b782c0(__int64, _QWORD*, _QWORD*, _QWORD*, __int64);
__int64 TaskSkyComp_b77c60(__int64, __int64, __int64);
__int64 __cxa_guard_acquire_alt1(_QWORD);
__int64 __cxa_guard_release_alt1(_QWORD);
__int64 fs_609140(_QWORD, const char*, ...);
__int64 fs_609260(_QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_128df90(__int64, __int64*);
__int64 game_40();
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_ProcInst_Register(__int64);
__int64 game_UnitItemList_Sort(__int64, unsigned int, int);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_Unit_Destroy_Unit(__int64);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_menu_1789cf0(__int64, __int64);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de2e0(__int64 result, char);
__int64 game_util_Format_alt1(const char*, ...);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
bool AISupportSkillScope_11ff100(int*, int*);
bool GameRoutine_822320(unsigned __int8);
bool game_Unit_IsUnlocked(__int64);
bool game_cmdbtl_e76770(unsigned int*, __int64, unsigned __int16*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
const char* game_HashString32(const char* result);
extern _DWORD* GameData_212d280;
extern _UNKNOWN* GameData_2130f68;
extern _UNKNOWN GameData_1a83060;
extern _UNKNOWN GameData_1a85409;
extern _UNKNOWN GameData_1a8542d;
extern _UNKNOWN GameData_1aa0760;
extern _UNKNOWN GameData_1aa45be;
extern _UNKNOWN GameData_1ac4fcc;
extern _UNKNOWN GameData_1acec4b;
extern _UNKNOWN GameData_1ada20a;
extern _UNKNOWN GameData_1addf2e;
extern _UNKNOWN GameData_1ae94e0;
extern _UNKNOWN GameData_1aed5ec;
extern _UNKNOWN GameData_2017d28;
extern _UNKNOWN GameData_2174f00;
extern _UNKNOWN GameData_21d91c0;
extern _UNKNOWN GameData_21d91d8;
extern _UNKNOWN GameData_21d91f0;
extern _UNKNOWN GameData_21d9208;
extern _UNKNOWN GameData_21d9220;
extern _UNKNOWN GameData_21d9238;
extern _UNKNOWN GameData_21d9250;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82a60;
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a83050;
extern __int128 GameData_1a83480;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83590;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83620;
extern __int64 (*GameData_1fa5f00[])();
extern __int64 (*GameData_2060068[])();
extern __int64 (*GameData_20601d0[])();
extern __int64 (*GameData_2060768[])();
extern __int64 (*GameData_20609e8[])();
extern __int64 (*GameData_2088138[])();
extern __int64 (*GameData_20886a0[])();
extern __int64 (*GameData_20a0f20[])();
extern __int64 (*GameData_20a4370[])();
extern __int64 (*GameData_20a4450[])();
extern __int64 (*GameData_20d1520[])();
extern __int64 (*GameData_20d4238[])();
extern __int64 (*GameData_20f0d80[])();
extern __int64 (*GameData_20f10b8[])();
extern __int64 (*SpecialTitle_Destructor_17962a0_ptr[])();
extern __int64 (*SpecialTitle_Destructor_1796470_ptr[])();
extern __int64 (*SubQuestInfo_Destructor_ptr_20e5168[])();
extern __int64 (*game_facility_anonymous_ItemShopBuyMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_ProcItemShopMenu_vtable_20f0818[])();
extern __int64 (
    *game_facility_anonymous_ProcObeliskDepositoryTransporterMenu_vtable[])();
extern __int64 (*game_facility_anonymous_ProcPerchOnlyGazeUnitMenu_vtable[])();
extern __int64 (*game_facility_anonymous_ProcPerchUnitMenu_vtable[])();
extern __int64 (*game_facility_anonymous_ProcTradeItemSelectMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_1fb6b10[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2060138[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2060838[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_209e898[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20a1468[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20d4308[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20d4a30[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20d5c80[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_1fb6a40[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20885d0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_209e7c8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20a1398[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20a42a0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20d13b8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20d4960[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20d5bb0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20f0cb0[])();
extern __int64 (*game_menu_SubMenu_vtable[])();
extern __int64 (*game_menu_anonymous_AllAutoMenu_vtable[])();
extern __int64 (*game_menu_anonymous_AutoArtsMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_AutoDeployMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_AutoDepositMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_AutoEquipMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_AutoSkillMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_CalibrationDialog_vtable[])();
extern __int64 (*game_menu_anonymous_NoDeplyUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ProcSupplyPart2Menu_vtable[])();
extern __int64 (*game_menu_anonymous_SubquestMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_UnitSubMenu_vtable[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212d258[2];
extern __int64* GameData_212d630[11];
extern __int64* GameData_212da50[3];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* GameData_2130240[8];
extern __int64* GameData_21312e0[10];
extern __int64* GameData_2132090[4];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212cf90[3];
extern __int64 GameData_212d238[2];
extern __int64 GameData_21308b8;
extern __int64 GameData_2130f78[2];
extern __int64 GameData_2131218;
extern __int64 GameData_2131678;
extern __int64 GameData_2131908[20];
extern __int64 GameData_2131910[19];
extern __int64 GameData_21319a0;
extern __int64 GameData_2131bb8[5];
extern __int64 GameData_2131c98[39];
extern __int64 GameData_2132030[4];
extern __int64 GameData_2132398[3];
extern __int64 GameData_21323a0[2];
extern __int64 GameData_21d91b0;
extern __int64 GameData_21d91b8;
extern __int64 GameData_21d91c8;
extern __int64 GameData_21d91d0;
extern __int64 GameData_21d91e0;
extern __int64 GameData_21d91e8;
extern __int64 GameData_21d91f8;
extern __int64 GameData_21d9200;
extern __int64 GameData_21d9210;
extern __int64 GameData_21d9218;
extern __int64 GameData_21d9228;
extern __int64 GameData_21d9230;
extern __int64 GameData_21d9240;
extern __int64 GameData_21d9248;
extern __int64 GameData_22124e8;
extern __int64 GameData_2216820;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_UnitListSet_instance_;
extern char* GameData_1fc11c0[];
extern char* msg_MessageManager_empty_text_;
extern char GameData_1ab8d4c[];
extern char GameData_2216858;
extern char GameData_226b31c;
extern char game_facility_g_unknown_2259368;
float AiBattleSimulator_11fc090(__int64, unsigned int);
float Cursor_734120(int, int, float, float, float, float);
float GameRoutine_1a0a8d0(float);
float scene_652ba0(float32x4_t*, float, float);
int GameRoutine_1a09d30(const char*, const char*);
long double GameRoutine_1a09fb0(float);
long double GameRoutine_1a09fc0(float);
struct PseudoSret llvm_libcxx_21_libcxx_include___functional_c4d1c0(_QWORD);
unsigned __int64 GameRoutine_1a09c70_alt1(const char*);
void AIBattleSimulator_11fbe50(__int64, int);
void BattleSide_Destructor(_QWORD*);
void GameRoutine_1703290(__int64, __int64*);
void GameRoutine_86e660(_QWORD*);
void GameRoutine_f369a0(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_6e5a20();
void __attribute__((noreturn)) GameRoutine_8123d0();
void game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64);
void gfx_render_b3aee0(float32x4_t*);
void llvm_libcxx_21_libcxx_include___functional_7c2a10(__int64 a1);
__int64 llvm_libcxx_21_libcxx_include___functional_87bb70(__int64 result,
                                                          _QWORD* a2, int a3);
__int64 llvm_libcxx_21_libcxx_include___functional_9c4bd0(_QWORD* a1);
__int64 llvm_libcxx_21_libcxx_include___functional_a96c40();
__int64 llvm_libcxx_21_libcxx_include___functional_b99ae0_alt1(__int64 a1,
                                                               __int64 a2,
                                                               _QWORD* a3);
__int64 llvm_libcxx_21_libcxx_include___functional_e789d0(__int64 a1,
                                                          unsigned __int16* a2);
void llvm_libcxx_21_libcxx_include___functional_1003ce0(double a1, double a2,
                                                        double a3, double a4,
                                                        double a5, double a6,
                                                        __int64 a7, __int64 a8);
__int64 llvm_libcxx_21_libcxx_include___functional_11f1320(__int64 result,
                                                           int* a2, int* a3);
_QWORD* llvm_libcxx_21_libcxx_include___functional_15eb780(__int64 a1, char a2);
void llvm_libcxx_21_libcxx_include___functional_16a50c0(_QWORD* a1);
void llvm_libcxx_21_libcxx_include___functional_16f43b0(_QWORD* a1);
void llvm_libcxx_21_libcxx_include___functional_16f4490(_QWORD* a1);
__int64 llvm_libcxx_21_libcxx_include___functional_16fdbe0(__int64 a1,
                                                           __int64 a2, char a3,
                                                           __int64 a4);
__int64 llvm_libcxx_21_libcxx_include___functional_1795980(__int64 a1, int a2,
                                                           const char* a3);
__int64 llvm_libcxx_21_libcxx_include___functional_17a8b60(__int64 a1);
__int64 llvm_libcxx_21_libcxx_include___functional_17b13c0(__int64 a1,
                                                           __int64* a2);
void llvm_libcxx_21_libcxx_include___functional_17b1f70(__int64 a1, __int64 a2);
void llvm_libcxx_21_libcxx_include___functional_17b2470(_QWORD* a1);
void llvm_libcxx_21_libcxx_include___functional_17b2560(_QWORD* a1);
__int64 llvm_libcxx_21_libcxx_include___functional_1847710(__int64 a1, int a2,
                                                           __int64 a3);
void llvm_libcxx_21_libcxx_include___functional_18659c0(__int64 a1,
                                                        __int64* a2);
__int64 llvm_libcxx_21_libcxx_include___functional_18b4540(__int64 a1,
                                                           _QWORD* a2);
__int64 llvm_libcxx_21_libcxx_include___functional_19a43d0(__int64 a1,
                                                           __int64 a2, char a3);
__int64 GameRoutine_7a88a0(__int64*);
__int64 BasicMenu_16dcd30(__int64, __int64, _QWORD*, __int64);
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_1feadb0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_1fec3a0[])();
extern __int64 (
    *game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr_1fe9ab8[])();
extern __int64 (
    *game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr_1fe9d30[])();
extern __int64 (
    *game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr_1fe9f90[])();
extern __int64 (
    *game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr_1fea1f0[])();
extern __int64 (
    *game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr_1fea450[])();
int GameRoutine_1a09cf0(__int64, __int64, unsigned __int64);
void __attribute__((noreturn)) String_60a230();
_QWORD* game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable_alt1(__int64);
__int64 ResourceBuilder_b782c0_alt1(__int64, _QWORD*, _QWORD*, __int64*,
                                    __int64);
__int64 llvm_libcxx_21_libcxx_include___functional_b99ae0_alt2(__int64 a1,
                                                               __int64 a2,
                                                               __int64* a3);
__int64 nn_os_LockMutex_alt1(__int64);
__int64 nn_os_UnlockMutex_alt1(__int64);
float GameRoutine_1a09fb0_alt1(float);
float GameRoutine_1a09fc0_alt1(float);
__int64 llvm_libcxx_21_libcxx_include___functional_b99ae0_alt3(__int64 a1,
                                                               __int64 a2,
                                                               _QWORD* a3);
__int64 game_menu_BasicMenu_Destroy_BasicMenu_alt2(__int64);
__int64 llvm_libcxx_21_libcxx_include___functional_b99ae0(__int64 a1,
                                                          __int64 a2,
                                                          __int64* a3);

void llvm_libcxx_21_libcxx_include___functional_7c2a10(__int64 a1)
{
  float v2;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  float v33;
  __int64 v34;
  float v35;
  float v36;
  __int64* v37;
  float v38;
  float v39;
  _BYTE* v40;
  unsigned int v41;
  unsigned int v42;
  float v43;
  float v44;
  unsigned int v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  unsigned int v65;
  int v66;
  __int128 v67;
  __int64 v68;
  float v69;
  float v70;
  __int64 v71;
  float v72;
  unsigned int v73;
  float v74;
  float v75;
  float v76;
  float v77;
  __int64 v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  unsigned int v84;
  unsigned int v85;
  __int64 v86;
  float v87;
  bool v88;
  __int64 v89;
  _BOOL4 v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  __int64 v112;
  float v113;
  float v114;
  float v115;
  float v116;
  __int64 v117;
  int v118;
  float v119;
  float v120;
  float v121;
  __int64 v122;
  __int64 v123;
  float v124;
  float v125;
  __int64 v126;
  float v127;
  float v128;
  __int128 v129;
  float32x4_t v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float32x4_t v138;
  float32x4_t v139;
  float32x4_t v140;
  int8x16_t v141;
  float v142;
  float v143;
  float v144;
  float32x4_t v145;
  float32x4_t v146;
  float32x4_t v147;
  float32x4_t v148;
  float32x4_t v149;
  float32x4_t v150;
  int8x16_t v151;
  float v152;
  float32x4_t v153;
  int8x16_t v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  int8x16_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  float* v165;
  int v166;
  int v167;
  unsigned __int64 v168;
  __int128 v169;
  float v170;
  float v171;
  int v172;
  float v173;
  float v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  unsigned __int64 v181;
  __int128 v182;
  __int128 v183;
  float v184;
  float v185;
  __int64* v186;
  int v187;
  unsigned int v188;
  unsigned int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  unsigned int v195;
  unsigned int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  unsigned int v202;
  unsigned int v203;
  int v204;
  float32x4_t v205;
  __int64 v206;
  __int64 v207;
  float v208;
  float v209;
  float v210;
  float v211;
  float v212;
  float32x4_t v213;
  __int64 v214;
  struct {
    char gap0_[12];
    float v215;
    union {
      float v216;
      float v217;
    };
    char gap20_[4];
    float v218;
    float v219;
    float v220;
    char gap36_[12];
    union {
      __int128 v221;
      float v222;
      float v223;
    };
    union {
      float v224;
      float v225;
      unsigned int v226;
    };
    char gap68_[12];
    union {
      float v227;
      unsigned int v228;
      unsigned int v229;
      float v230;
    };
    char gap84_[12];
    float v231;
    char gap100_[12];
    union {
      float v232;
      float32x4_t v233;
      float32x4_t v234;
    };
    __int64 v235;
    __int64 v236;
    __int128 v237;
    __int128 v238;
  } f_;
  __int128 v239;

  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d91f0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d91f0) != 0) {
    GameData_21d91e8 = (__int64)&GameData_1aa0760;
    GameData_21d91e0 = game_HashString((__int64)&GameData_1aa0760),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    __cxa_guard_release((__int64)&GameData_21d91f0),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v2 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21d91e0),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v3 != 0) {
      v2 = (float)*(int*)(v3 + 32);
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9208,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d9208) != 0) {
    GameData_21d9200 = (__int64)&GameData_1a8542d;
    GameData_21d91f8 = game_HashString((__int64)&GameData_1a8542d),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    __cxa_guard_release((__int64)&GameData_21d9208),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  f_.v227 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v4 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21d91f8),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v4 != 0) {
      f_.v227 = (float)*(int*)(v4 + 32);
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9220,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d9220) != 0) {
    GameData_21d9218 = (__int64)&GameData_1aa45be;
    GameData_21d9210 = game_HashString((__int64)&GameData_1aa45be),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    __cxa_guard_release((__int64)&GameData_21d9220),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v5 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v6 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21d9210),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v6 != 0) {
      v5 = (float)*(int*)(v6 + 32);
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9238,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d9238) != 0) {
    GameData_21d9230 = (__int64)&GameData_1addf2e;
    GameData_21d9228 = game_HashString((__int64)&GameData_1addf2e),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    __cxa_guard_release((__int64)&GameData_21d9238),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  f_.v232 = v2;
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21d9228),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v7 != 0) {
      v8 = (float)*(int*)(v7 + 32);
    }
    else {
      v8 = 0x0.0p+0f;
    }
    f_.v218 = v8;
    if (game_GameModeData_instance_ != 0) {
      v9 = *(_QWORD*)(game_GameModeData_instance_ + 16);
      if (v9 != 0) {
        {
          __typeof__(v8) z_ = (__typeof__(v8)){0};
          LOBYTE(z_) = *(_BYTE*)(v9 + 129);
          v8 = z_;
        }
        v10 = (float)LODWORD(v8);
        {
          __typeof__(v8) z_ = (__typeof__(v8)){0};
          LOBYTE(z_) = *(_BYTE*)(v9 + 130);
          v8 = z_;
        }
        v11 = (float)LODWORD(v8);
        goto LABEL_23;
      }
    }
  }
  else {
    v8 = 0x0.0p+0f;
    f_.v218 = 0x0.0p+0f;
  }
  v10 = 0x1.6800000000000p+6f;
  v11 = 0x1.6800000000000p+6f;
LABEL_23:
  v13 = *(float*)(a1 + 64);
  v12 = *(float*)(a1 + 68);
  v14 = *(float*)(a1 + 88);
  if (v12 < v13) {
    v8 = Cursor_734120(*(_DWORD*)(a1 + 72), *(_DWORD*)(a1 + 76),
                       *(float*)(a1 + 84), *(float*)(a1 + 88), v12, v13),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    v14 = v8;
  }
  v16 = *(float*)(a1 + 248);
  v15 = *(float*)(a1 + 252);
  if (!(v15 < v16)) {
    f_.v221 = *(_OWORD*)(a1 + 288);
    {
      __typeof__(v17) z_ = (__typeof__(v17)){0};
      LODWORD(z_) =
          DWORDn(*(_QWORD*)(a1 + 288), sizeof(*(_QWORD*)(a1 + 288)) / 4 - 1);
      v17 = z_;
    }
  }
  else {
    v8 = Cursor_734120(*(_DWORD*)(a1 + 256), *(_DWORD*)(a1 + 260),
                       *(float*)(a1 + 272), COERCE_FLOAT(*(_OWORD*)(a1 + 288)),
                       v15, v16),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    v17 = *(float*)(a1 + 292);
    v16 = *(float*)(a1 + 248);
    v15 = *(float*)(a1 + 252);
    *(float*)&f_.v221 = v8;
    if (v15 < v16) {
      v8 = Cursor_734120(*(_DWORD*)(a1 + 256), *(_DWORD*)(a1 + 260),
                         *(float*)(a1 + 276), v17, v15, v16),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
      v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
      v16 = *(float*)(a1 + 248);
      v15 = *(float*)(a1 + 252);
      v17 = v8;
    }
  }
  v18 = *(float*)(a1 + 296);
  f_.v224 = v17;
  if (v15 < v16) {
    v8 = Cursor_734120(*(_DWORD*)(a1 + 256), *(_DWORD*)(a1 + 260),
                       *(float*)(a1 + 280), v18, v15, v16),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    v16 = *(float*)(a1 + 248);
    v15 = *(float*)(a1 + 252);
    v18 = v8;
  }
  if (v15 == v16) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 240) + 16LL))(a1 + 240),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    f_.v235 = *(_QWORD*)(a1 + 288);
    f_.v236 = *(_QWORD*)(a1 + 296);
  }
  f_.v219 = v18;
  if (game_GameModeData_instance_ != 0 &&
      (v19 = *(_QWORD*)(game_GameModeData_instance_ + 16)) != 0) {
    {
      __typeof__(v8) z_ = (__typeof__(v8)){0};
      LOBYTE(z_) = *(_BYTE*)(v19 + 129);
      v8 = z_;
    }
    v20 = (float)LODWORD(v8);
    {
      __typeof__(v8) z_ = (__typeof__(v8)){0};
      LOBYTE(z_) = *(_BYTE*)(v19 + 130);
      v8 = z_;
    }
    v21 = (float)LODWORD(v8);
  }
  else {
    v20 = 0x1.6800000000000p+6f;
    v21 = 0x1.6800000000000p+6f;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d91f0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d91f0) != 0) {
    GameData_21d91e8 = (__int64)&GameData_1aa0760;
    GameData_21d91e0 = game_HashString((__int64)&GameData_1aa0760),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    __cxa_guard_release((__int64)&GameData_21d91f0),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v22 = (float)(v14 - v10) / (float)(v11 - v10);
  v23 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v24 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21d91e0),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v24 != 0) {
      v23 = (float)*(int*)(v24 + 32);
    }
  }
  v25 = 0x1.0000000000000p+0f - v22;
  v26 = f_.v227 - f_.v232;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9208,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d9208) != 0) {
    GameData_21d9200 = (__int64)&GameData_1a8542d;
    GameData_21d91f8 = game_HashString((__int64)&GameData_1a8542d),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    __cxa_guard_release((__int64)&GameData_21d9208),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v27 = v26 * v25;
  v28 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v29 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21d91f8),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v29 != 0) {
      v28 = (float)*(int*)(v29 + 32);
    }
  }
  f_.v231 = f_.v232 + v27;
  if (*(float*)(a1 + 68) == *(float*)(a1 + 64)) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 56) + 16LL))(a1 + 56),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    v30 = *(float*)(a1 + 88);
  }
  v31 = f_.v231 - f_.v232;
  v32 = 0x0.0p+0f;
  v33 = (float)((float)((float)(v23 +
                                (float)(PSEUDO_UNFUSED(
                                    (float)(v28 - v23) *
                                    (float)(0x1.0000000000000p+0f -
                                            (float)((float)(v30 - v20) /
                                                    (float)(v21 - v20)))))) -
                        v23) /
                (float)(v28 - v23)) +
        0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v34 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    v35 = 0x0.0p+0f;
    if (v34 != 0) {
      {
        __typeof__(v32) z_ = (__typeof__(v32)){0};
        LOBYTE(z_) = *(_BYTE*)(v34 + 131);
        v32 = z_;
      }
      {
        __typeof__(v35) z_ = (__typeof__(v35)){0};
        LOBYTE(z_) = *(_BYTE*)(v34 + 132);
        v35 = z_;
      }
      v32 = (float)LODWORD(v32);
      v35 = (float)LODWORD(v35);
    }
  }
  else {
    v35 = 0x0.0p+0f;
  }
  v36 = v31 / v26;
  v37 = GameData_212ce98[0];
  v38 = v33 * (float)(v35 - v32);
  v39 = v32 + v38;
  if ((float)(v32 + v38) == 0x0.0p+0f) {
    goto LABEL_81;
  }
  v40 = (_BYTE*)*GameData_212ce98[0];
  if (*(_BYTE*)(*GameData_212ce98[0] + 26) == 0) {
    goto LABEL_85;
  }
  v41 = (unsigned __int8)v40[27];
  if (v40[27] == 0) {
    goto LABEL_85;
  }
  *(float*)&v42 = (float)v41;
  f_.v215 = v31 / v26;
  f_.v216 = v5;
  v43 = (float)v41 * 0x1.4000000000000p+2f;
  {
    __typeof__(v42) z_ = (__typeof__(v42)){0};
    LOBYTE(z_) = v40[24];
    v42 = z_;
  }
  v44 = (float)*(unsigned __int8*)(*GameData_212ce98[0] + 26) *
        0x1.4000000000000p+2f;
  *(float*)&v45 = (float)v42;
  v46 = *(float*)&v45 * 0x1.4000000000000p+2f;
  {
    __typeof__(v45) z_ = (__typeof__(v45)){0};
    LOBYTE(z_) = v40[25];
    v45 = z_;
  }
  v47 = (float)v45 * 0x1.4000000000000p+2f;
  v48 = *(float*)&f_.v235 - v46;
  v49 = *(float*)&f_.v236 - v47;
  v50 = (float)(v44 - v39) - v39;
  v51 = v39 + (float)((float)(v50 * 0x1.4000000000000p+1f) / v44);
  v52 =
      v39 + (float)((float)((float)(v44 + -0x1.4000000000000p+1f) * v50) / v44);
  v53 = (float)(v39 + (float)((float)(v50 * (float)(*(float*)&f_.v235 - v46)) /
                              v44)) -
        (float)(*(float*)&f_.v235 - v46);
  if (v51 > v52) {
    v51 = v39 +
          (float)((float)((float)(v44 + -0x1.4000000000000p+1f) * v50) / v44);
  }
  if (!(v52 < v48)) {
    v52 = *(float*)&f_.v235 - v46;
  }
  if (!(v48 < v51)) {
    v51 = v52;
  }
  v54 = v51 - v48;
  v56 = *(float*)(a1 + 144);
  v55 = *(float*)(a1 + 148);
  if (v55 == v56) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 136) + 16LL))(a1 + 136),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    v56 = *(float*)(a1 + 144);
    v55 = *(float*)(a1 + 148);
  }
  else {
    v57 = *(float*)(a1 + 168);
  }
  v58 = v54 + (float)(PSEUDO_UNFUSED((float)(v53 - v54) * v57));
  v59 = (float)(v43 - v39) - v39;
  v60 = v39 + (float)((float)(v59 * 0x1.4000000000000p+1f) / v43);
  v61 =
      v39 + (float)((float)((float)(v43 + -0x1.4000000000000p+1f) * v59) / v43);
  v62 = (float)(v39 + (float)((float)(v59 * v49) / v43)) - v49;
  if (v60 > v61) {
    v60 = v61;
  }
  if (!(v61 < v49)) {
    v61 = *(float*)&f_.v236 - v47;
  }
  if (!(v49 < v60)) {
    v60 = v61;
  }
  v63 = v60 - v49;
  if (v55 == v56) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 136) + 16LL))(a1 + 136),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    v64 = *(float*)(a1 + 168);
  }
  *(float*)&v65 =
      v49 +
      (float)(v47 +
              (float)(v63 + (float)(PSEUDO_UNFUSED((float)(v62 - v63) * v64))));
  *(float*)&v67 = v48 + (float)(v46 + v58);
  DWORD1(v67) = DWORDn(f_.v235, sizeof(f_.v235) / 4 - 1);
  v66 = *(unsigned __int8*)(a1 + 200);
  *((_QWORD*)&v67 + 1) = v65;
  f_.v237 = v67;
  if (v66 == 1) {
    v68 = *(_QWORD*)(a1 + 176);
    f_.v238 = v67;
    v239 = v67;
    (*(void (**)(__int64, __int64, __int64))(v68 + 24))(
        a1 + 176, (__int64)&v239, (__int64)&f_.v238),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    v36 = f_.v215;
    v5 = f_.v216;
    *(_DWORD*)(a1 + 184) = 0;
  LABEL_80:
    *(_DWORD*)(a1 + 188) = 0;
    *(_BYTE*)(a1 + 200) = 0;
    goto LABEL_81;
  }
  v36 = f_.v215;
  v5 = f_.v216;
  if (*(float*)(a1 + 184) > 0x1.8000000000000p-1f ||
      ((*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(a1 + 176) + 8LL))(
           a1 + 176, (__int64)&f_.v237, a1 + 224) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 176) + 16LL))(a1 + 176),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    f_.v238 = f_.v237;
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)(a1 + 176) + 24LL))(
        a1 + 176, (__int64)&v239, (__int64)&f_.v238),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    *(_DWORD*)(a1 + 184) = 1061158912;
    goto LABEL_80;
  }
LABEL_81:
  v38 = *(float*)(a1 + 184);
  v69 = *(float*)(a1 + 188);
  *(_BYTE*)(a1 + 201) = 0;
  if (v69 < v38) {
    (**(void (***)(__int64))(a1 + 176))(a1 + 176),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    v38 = v69 + v70;
    if (*(float*)(a1 + 184) < v38) {
      v38 = *(float*)(a1 + 184);
    }
    *(float*)(a1 + 188) = v38;
  }
LABEL_85:
  v71 = *v37;
  v72 = v36 + 0x0.0p+0f;
  {
    __typeof__(v38) z_ = (__typeof__(v38)){0};
    LOBYTE(z_) = *(_BYTE*)(*v37 + 24);
    v38 = z_;
  }
  *(float*)&v73 = (float)LODWORD(v38);
  v74 = *(float*)&v73 * 0x1.4000000000000p+2f;
  {
    __typeof__(v73) z_ = (__typeof__(v73)){0};
    LOBYTE(z_) = *(_BYTE*)(*v37 + 25);
    v73 = z_;
  }
  v75 = (float)v73 * 0x1.4000000000000p+2f;
  v76 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v77 = f_.v219;
    v78 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    v79 = 0x0.0p+0f;
    if (v78 != 0) {
      {
        __typeof__(v76) z_ = (__typeof__(v76)){0};
        LOBYTE(z_) = *(_BYTE*)(v78 + 131);
        v76 = z_;
      }
      {
        __typeof__(v79) z_ = (__typeof__(v79)){0};
        LOBYTE(z_) = *(_BYTE*)(v78 + 132);
        v79 = z_;
      }
      v76 = (float)LODWORD(v76);
      v79 = (float)LODWORD(v79);
    }
  }
  else {
    v77 = f_.v219;
    v79 = 0x0.0p+0f;
  }
  v80 = *(float*)&f_.v221;
  v81 = v77 - v75;
  f_.v222 = v72;
  v82 = v76 + (float)(PSEUDO_UNFUSED(v72 * (float)(v79 - v76)));
  v83 = v80 - v74;
  if (v82 != 0x0.0p+0f) {
    v84 = *(unsigned __int8*)(v71 + 26);
    v85 = *(unsigned __int8*)(v71 + 27);
    *((_QWORD*)&v239 + 1) = &GameData_1ada20a;
    *(_QWORD*)&v239 = game_HashString((__int64)&GameData_1ada20a),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    f_.v217 = v74;
    if (game_GameModeData_instance_ != 0 &&
        (v86 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v239)) != 0) {
      v87 = v5;
      v88 = *(_DWORD*)(v86 + 32) == 0;
    }
    else {
      v87 = v5;
      v88 = true;
    }
    *((_QWORD*)&v239 + 1) = &GameData_1acec4b;
    *(_QWORD*)&v239 = game_HashString((__int64)&GameData_1acec4b),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    v90 = game_GameModeData_instance_ == 0 ||
          (v89 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v239)) == 0 ||
          *(_DWORD*)(v89 + 32) == 0,
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    v91 = (float)v84 * 0x1.4000000000000p+2f;
    v92 = (float)v85 * 0x1.4000000000000p+2f;
    v5 = v87;
    if (v88) {
      if (v90) {
        v94 = *(float*)(a1 + 144);
        v93 = *(float*)(a1 + 148);
        v95 = *(float*)(a1 + 168);
        if (v93 < v94) {
          v95 = Cursor_734120(*(_DWORD*)(a1 + 152), *(_DWORD*)(a1 + 156),
                              *(float*)(a1 + 164), v95, v93, v94),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v97 = *(float*)(a1 + 184);
        v96 = *(float*)(a1 + 188);
        v98 = 0x1.0000000000000p+0f;
        if (v95 != 0x1.0000000000000p+0f || v96 != v97) {
          v183 = *(_OWORD*)(a1 + 224);
          if (!(v96 < v97)) {
            {
              __typeof__(v184) z_ = (__typeof__(v184)){0};
              LODWORD(z_) = DWORDn(*(_QWORD*)(a1 + 224),
                                   sizeof(*(_QWORD*)(a1 + 224)) / 4 - 1);
              v184 = z_;
            }
          }
          else {
            v98 = Cursor_734120(*(_DWORD*)(a1 + 192), *(_DWORD*)(a1 + 196),
                                *(float*)(a1 + 208),
                                COERCE_FLOAT(*(_OWORD*)(a1 + 224)), v96, v97),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
            v184 = *(float*)(a1 + 228);
            v97 = *(float*)(a1 + 184);
            v96 = *(float*)(a1 + 188);
            *(float*)&v183 = v98;
          }
          v105 = f_.v222;
          v106 = f_.v232;
          v107 = f_.v227 - f_.v232;
          f_.v223 = *(float*)&v183;
          if (v96 < v97) {
            v98 = Cursor_734120(*(_DWORD*)(a1 + 192), *(_DWORD*)(a1 + 196),
                                *(float*)(a1 + 212), v184, v96, v97),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
            v97 = *(float*)(a1 + 184);
            v96 = *(float*)(a1 + 188);
            v184 = v98;
          }
          v108 = *(float*)(a1 + 232);
          f_.v224 = v184;
          if (v96 < v97) {
            v98 = Cursor_734120(*(_DWORD*)(a1 + 192), *(_DWORD*)(a1 + 196),
                                *(float*)(a1 + 216), v108, v96, v97),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
            v108 = v98;
          }
          goto LABEL_125;
        }
      }
      if (v84 != 0) {
        v83 = v82 +
              (float)((float)(v83 * (float)((float)(v91 - v82) - v82)) / v91);
      }
      v74 = f_.v217;
      if (v85 != 0) {
        v81 = v82 +
              (float)((float)(v81 * (float)((float)(v92 - v82) - v82)) / v92);
      }
    }
    else {
      if (v84 != 0) {
        v99 = (float)(v91 - v82) - v82;
        v100 = v82 + (float)((float)(v99 * 0x1.4000000000000p+1f) / v91);
        v101 =
            v82 +
            (float)((float)((float)(v91 + -0x1.4000000000000p+1f) * v99) / v91);
        if (v100 > v101) {
          v100 = v101;
        }
        if (!(v101 < v83)) {
          v101 = v83;
        }
        if (v83 < v100) {
          v101 = v100;
        }
        v83 = v83 + (float)(v101 - v83);
      }
      v74 = f_.v217;
      if (v85 != 0) {
        v102 = (float)(v92 - v82) - v82;
        v103 = v82 + (float)((float)(v102 * 0x1.4000000000000p+1f) / v92);
        v104 = v82 +
               (float)((float)((float)(v92 + -0x1.4000000000000p+1f) * v102) /
                       v92);
        if (v103 > v104) {
          v103 = v104;
        }
        if (!(v104 < v81)) {
          v104 = v81;
        }
        if (v81 < v103) {
          v104 = v103;
        }
        v81 = v81 + (float)(v104 - v81);
      }
    }
  }
  v105 = f_.v222;
  v106 = f_.v232;
  v107 = f_.v227 - f_.v232;
  v98 = v74 + v83;
  v108 = v75 + v81;
  f_.v223 = v74 + v83;
LABEL_125:
  v110 = *(float*)(a1 + 24);
  v109 = *(float*)(a1 + 28);
  v111 = *(float*)(a1 + 48);
  f_.v220 = v108;
  if (v109 < v110) {
    v98 = Cursor_734120(*(_DWORD*)(a1 + 32), *(_DWORD*)(a1 + 36),
                        *(float*)(a1 + 44), v111, v109, v110),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    v111 = v98;
  }
  if (game_GameModeData_instance_ != 0 &&
      (v112 = *(_QWORD*)(game_GameModeData_instance_ + 16)) != 0) {
    {
      __typeof__(v98) z_ = (__typeof__(v98)){0};
      LOBYTE(z_) = *(_BYTE*)(v112 + 129);
      v98 = z_;
    }
    v113 = (float)LODWORD(v98);
  }
  else {
    v113 = 0x1.6800000000000p+6f;
  }
  v115 = *(float*)(a1 + 64);
  v114 = *(float*)(a1 + 68);
  v116 = *(float*)(a1 + 88);
  if (v114 < v115) {
    v116 = Cursor_734120(*(_DWORD*)(a1 + 72), *(_DWORD*)(a1 + 76),
                         *(float*)(a1 + 84), *(float*)(a1 + 88), v114, v115),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if (!(f_.v231 <= v106)) {
    if (!(f_.v231 < f_.v227)) {
      v5 = f_.v218;
    }
    else {
      v5 = v5 +
           (float)((float)((float)(f_.v218 - v5) * (float)(f_.v231 - f_.v232)) /
                   v107);
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d91c0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d91c0) != 0) {
    GameData_21d91b8 = (__int64)&GameData_1a85409;
    GameData_21d91b0 = game_HashString((__int64)&GameData_1a85409),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    __cxa_guard_release((__int64)&GameData_21d91c0),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d91d8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d91d8) != 0) {
    GameData_21d91d0 = (__int64)&GameData_1aed5ec;
    GameData_21d91c8 = game_HashString((__int64)&GameData_1aed5ec),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    __cxa_guard_release((__int64)&GameData_21d91d8),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9250,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d9250) != 0) {
    GameData_21d9248 = (__int64)&GameData_1ae94e0;
    GameData_21d9240 = game_HashString((__int64)&GameData_1ae94e0),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    __cxa_guard_release((__int64)&GameData_21d9250),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_147;
  }
  v117 =
      game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  (unsigned __int64*)&GameData_21d9240),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v117 == 0) {
    goto LABEL_147;
  }
  v118 = *(_DWORD*)(v117 + 32);
  if (v118 == 1) {
    v121 = 0x1.0000000000000p+0f;
    v122 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      goto LABEL_149;
    }
    goto LABEL_155;
  }
  if (v118 != 2) {
  LABEL_147:
    v121 = 0x0.0p+0f;
  LABEL_148:
    v122 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      goto LABEL_149;
    }
  LABEL_155:
    v125 = 0x0.0p+0f;
    v124 = 0x0.0p+0f;
    goto LABEL_156;
  }
  v120 = *(float*)(a1 + 104);
  v119 = *(float*)(a1 + 108);
  v121 = *(float*)(a1 + 128);
  if (!(v119 < v120)) {
    goto LABEL_148;
  }
  v121 = Cursor_734120(*(_DWORD*)(a1 + 112), *(_DWORD*)(a1 + 116),
                       *(float*)(a1 + 124), *(float*)(a1 + 128), v119, v120),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  v122 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_155;
  }
LABEL_149:
  v123 = game_GameVariableTable_Find(*(_QWORD**)(v122 + 48),
                                     (unsigned __int64*)&GameData_21d91b0),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  v124 = 0x0.0p+0f;
  v125 = 0x0.0p+0f;
  if (v123 != 0) {
    v125 = (float)*(int*)(v123 + 32);
  }
  if (game_GameModeData_instance_ != 0) {
    v126 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21d91c8),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v126 != 0) {
      v124 = (float)*(int*)(v126 + 32);
    }
  }
LABEL_156:
  v127 = *(float*)(a1 + 316);
  v128 = *(float*)(a1 + 312);
  v129 = *(_OWORD*)(a1 + 352);
  LANES128(v130).n128_u64[1] = 0;
  if (!(v127 < v128)) {
    {
      __typeof__(v132) z_ = (__typeof__(v132)){0};
      LODWORD(z_) =
          DWORDn(*(_QWORD*)(a1 + 352), sizeof(*(_QWORD*)(a1 + 352)) / 4 - 1);
      v132 = z_;
    }
  }
  else {
    v131 = Cursor_734120(*(_DWORD*)(a1 + 320), *(_DWORD*)(a1 + 324),
                         *(float*)(a1 + 336), *(float*)&v129, v127, v128),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    v132 = *(float*)(a1 + 356);
    v127 = *(float*)(a1 + 316);
    v128 = *(float*)(a1 + 312);
    LANES128(v130).n128_u64[1] = 0;
    *(float*)&v129 = v131;
  }
  f_.v228 = v129;
  LANES128(v130).n128_f32[0] = f_.v223;
  if (v127 < v128) {
    v133 = Cursor_734120(*(_DWORD*)(a1 + 320), *(_DWORD*)(a1 + 324),
                         *(float*)(a1 + 340), v132, v127, v128),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    v130 = COERCE_AS(float32x4_t, LODWORD(f_.v223));
    v127 = *(float*)(a1 + 316);
    v128 = *(float*)(a1 + 312);
    v132 = v133;
  }
  v134 = *(float*)(a1 + 360);
  v135 = v121 * v125;
  v136 = v121 * v124;
  LANES128(v130).n128_f32[1] = f_.v224;
  if (v127 < v128) {
    f_.v233 = v130;
    f_.v225 = v132;
    v137 = Cursor_734120(*(_DWORD*)(a1 + 320), *(_DWORD*)(a1 + 324),
                         *(float*)(a1 + 344), v134, v127, v128),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
    v132 = f_.v225;
    v130 = f_.v233;
    v134 = v137;
  }
  LANES128(v130).n128_f32[2] = f_.v220;
  LANES128(v138).n128_u64[0] = __PAIR64__(LODWORD(v132), f_.v228);
  LANES128(v138).n128_u64[1] = LODWORD(v134);
  v139 = vmulq_n_f32(v138, 0x1.0000000000000p+0f - v121);
  LANES128(v140).n128_u64[0] = LANES128(v139).n128_u64[0];
  LANES128(v140).n128_f32[2] =
      LANES128(v139).n128_f32[2] -
      (float)(v135 + (float)(PSEUDO_UNFUSED(v121 * (float)(v136 - v135))));
  LANES128(v140).n128_u32[3] = 0;
  v141 = vmulq_f32(v140, v140);
  LANES128(v141).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v141, v141, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v141).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v141).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v141).n128_u64[0])))
          .n64_f32[0] > 0x0.0p+0f) {
    v142 = (float)(PSEUDO_UNFUSED((float)(v111 * 0x1.1df46a0000000p-6f) *
                                  0x1.0000000000000p-1f)) +
           (float)(roundf((float)((float)(v111 * 0x1.1df46a0000000p-6f) *
                                  0x1.0000000000000p-1f) *
                          0x1.45f3060000000p-3f) *
                   -0x1.921fb60000000p+2f);
    if (v142 <= 0x1.921fb60000000p+0f) {
      v144 = 0x1.0000000000000p+0f;
      if (!(v142 < -0x1.921fb60000000p+0f)) {
      LABEL_169:
        LANES128(v145).n128_u64[0] = LANES128(v139).n128_u64[0];
        LANES128(v146).n128_u64[0] =
            LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                                 COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
                .n64_u64[0];
        LANES128(v146).n128_u64[1] = LANES128(v146).n128_u64[0];
        v147 = vrsqrteq_f32(v146);
        v148 = vmulq_f32(v147, vrsqrtsq_f32(v147, vmulq_f32(v146, v147)));
        v149 = vbicq_s8(
            vmulq_f32(
                vmulq_f32(v148, vrsqrtsq_f32(v148, vmulq_f32(v146, v148))),
                COERCE_AS(float32x4_t, GameData_1a83610)),
            vceqzq_f32(v146));
        PSEUDO_LOW_LANE128(v148, n128_f32, v142 * v142);
        v150 = vmulq_n_f32(
            v149,
            v142 *
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c190) -
                                           (float)((float)(*(float*)((char*)((
                                                                         _UNKNOWN**)0x8LL) +
                                                                     (_QWORD)
                                                                         GameData_212c190 +
                                                                     4) +
                                                           (float)((float)-(
                                                                       float)(*(float*)((char*)((
                                                                                            _UNKNOWN**)0x8LL) +
                                                                                        (_QWORD)
                                                                                            GameData_212c190) -
                                                                              (float)((float)(*((float*)
                                                                                                    GameData_212c190 +
                                                                                                1) -
                                                                                              (float)(*(float*)
                                                                                                          GameData_212c190 *
                                                                                                      (float)(v142 *
                                                                                                              v142))) *
                                                                                      (float)(v142 *
                                                                                              v142))) *
                                                                   (float)(v142 *
                                                                           v142))) *
                                                   (float)(v142 * v142))) *
                                (float)(v142 * v142)) +
                        0x1.0000000000000p+0f));
        LANES128(v151).n128_u64[0] = LANES128(v139).n128_u64[0];
        v152 =
            v144 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c188) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c188 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c188) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c188 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c188 *
                                                                                                  LANES128(
                                                                                                      v148)
                                                                                                      .n128_f32
                                                                                                          [0])) *
                                                                                  LANES128(
                                                                                      v148)
                                                                                      .n128_f32
                                                                                          [0])) *
                                                               LANES128(v148)
                                                                   .n128_f32
                                                                       [0])) *
                                               LANES128(v148).n128_f32[0])) *
                            LANES128(v148).n128_f32[0]) +
                    0x1.0000000000000p+0f);
        v153 = v150;
        LANES128(v151).n128_u64[1] = LANES128(v140).n128_u64[1];
        LANES128(v153).n128_f32[3] = v152;
        v154 = vmulq_f32(v153, COERCE_AS(float32x4_t, GameData_1a829d0));
        LANES128(v155).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v151, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v149).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v156).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v151, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v155).n128_u64[1] = LANES128(v155).n128_u64[0];
        LANES128(v145).n128_u64[1] = LANES128(v156).n128_u64[0];
        *(int8x8_t*)&LANES128(v149).n128_i8[8] =
            vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v157 = vmulq_f32(v145, v149);
        LANES128(v145).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v145).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v154).n128_u64[0]), 1);
        LANES128(v151).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v151, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v156).n128_u64[1] = LANES128(v151).n128_u64[0];
        LANES128(v151).n128_u64[1] = LANES128(v139).n128_u64[0];
        LANES128(v158).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v158).n128_i8[8] =
            vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v159 = vmlsq_f32(
            vmlaq_f32(vmlaq_f32(vmulq_f32(v155, v154),
                                COERCE_AS(float32x4_t, GameData_1a83800), v157),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v151, v145)),
            v158, v156);
        LANES128(v160).n128_u64[0] = LANES128(v150).n128_u64[0];
        LANES128(v153).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(COERCE_AS(int8x16_t,
                                    __PAIR128__(LANES128(v153).n128_u64[1],
                                                LANES128(v150).n128_u64[0])),
                          COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v154).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(COERCE_AS(int8x16_t,
                                    __PAIR128__(LANES128(v153).n128_u64[1],
                                                LANES128(v150).n128_u64[0])),
                          COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v161).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v159, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v158).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(COERCE_AS(int8x16_t,
                                    __PAIR128__(LANES128(v153).n128_u64[1],
                                                LANES128(v150).n128_u64[0])),
                          COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v162).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v159, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v153).n128_u64[1] = LANES128(v153).n128_u64[0];
        LANES128(v160).n128_u64[1] = LANES128(v154).n128_u64[0];
        *(int8x8_t*)&LANES128(v161).n128_i8[8] =
            vqtbl1_s8(v159, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        LANES128(v154).n128_u64[1] = LANES128(v158).n128_u64[0];
        LANES128(v158).n128_u64[1] = LANES128(v150).n128_u64[0];
        *(int32x2_t*)&LANES128(v162).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v159).n128_u64[0]), 1);
        v163 = vmlaq_f32(vmlaq_f32(vmulq_f32(v153, v159),
                                   COERCE_AS(float32x4_t, GameData_1a83800),
                                   vmulq_f32(v160, v161)),
                         COERCE_AS(float32x4_t, GameData_1a83800),
                         vmulq_f32(v158, v162));
        LANES128(v158).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v159, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v158).n128_i8[8] =
            vqtbl1_s8(v159, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v164 = vmlsq_f32(v163, v158, v154);
        LANES128(v164).n128_u32[3] = 0;
        v130 = vaddq_f32(v130, v164);
        goto LABEL_170;
      }
      v143 = -0x1.921fb60000000p+1f;
    }
    else {
      v143 = 0x1.921fb60000000p+1f;
    }
    v142 = v143 - v142;
    v144 = -0x1.0000000000000p+0f;
    goto LABEL_169;
  }
LABEL_170:
  f_.v234 = v130;
  if (*(float*)(a1 + 384) > 0x0.0p+0f) {
    v165 = (float*)(a1 + 384);
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v166 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v167 = 2)
             : (v167 = 3),
         (v167 & v166) != 0)) {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_183;
      }
      v168 = game_ProcFadeView_instance_ +
             ((unsigned __int64)*(
                  unsigned __int8*)(game_ProcFadeView_instance_ + 480)
              << 6);
      if (*(float*)(v168 + 172) == *(float*)(v168 + 168)) {
        v169 = COERCE_AS(__typeof__(v169),
                         (*(__n128(**)(__int64))(*(_QWORD*)(v168 + 160) +
                                                 16LL))(v168 + 160)),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v169 = *(_OWORD*)(v168 + 208);
      }
      if (*((float*)&v169 + 3) != 0x1.0000000000000p+0f ||
          ((*(void (**)(__int64))(*(_QWORD*)(v168 + 160) + 16LL))(v168 + 160),
           v170 != 0x1.0000000000000p+0f)) {
      LABEL_183:
        if (*(_DWORD*)(a1 + 392) != *GameData_212d280) {
          v171 = *(float*)(a1 + 384);
          v172 = *(_DWORD*)(*game_g_frame_clock_ptr[0] + 476);
          *(_DWORD*)(a1 + 392) = *GameData_212d280;
          v173 = 0x1.e000000000000p+5f / (float)v172;
          if (v173 <= 0x0.0p+0f) {
            v173 = 0x1.0000000000000p+0f;
          }
          v174 = v171 - v173;
          if (v174 < 0x0.0p+0f) {
            v174 = 0x0.0p+0f;
          }
          *(float*)(a1 + 384) = v174;
        }
        v175 = *(unsigned __int8*)(a1 + 400);
        v176 = *(_DWORD*)(a1 + 388);
        if (v175 == 1) {
          v177 = 3 * v176;
          v176 = 3 * v176 / 4;
          *(_DWORD*)(a1 + 388) = v177 / 4;
        }
        if (v176 != 0) {
          if (*v165 > 0x0.0p+0f) {
          LABEL_216:
            nn_os_LockMutex_alt1((__int64)&game_g_random_mutex),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v186 = game_map_MapRandom_instance__ptr[0];
            v187 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                              (unsigned __int64)((_UNKNOWN**)0x8LL));
            v188 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                              (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v189 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                   (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v186 + 1) = v187;
            v190 = (v189 >> 8) ^ (v188 >> 19) ^ v189 ^ v188;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v186) = v188;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v186 + 4) = v190;
            v191 = v190 & 0x7FFFFFFF;
            nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v192 = v191 % ((2 * v176) | 1) - v176;
            v193 = *(_DWORD*)(a1 + 388);
            *(float*)&f_.v229 = (float)v192 * 0x1.47ae140000000p-7f;
            nn_os_LockMutex_alt1((__int64)&game_g_random_mutex),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v194 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v186);
            v195 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v186 + 4);
            v196 = *(_DWORD*)v186 ^ (*(_DWORD*)v186 << 11);
            *(_DWORD*)v186 = *((_DWORD*)v186 + 1);
            *((_DWORD*)v186 + 1) = v194;
            v197 = (v196 >> 8) ^ (v195 >> 19) ^ v196 ^ v195;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v186) = v195;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v186 + 4) = v197;
            v198 = v197 & 0x7FFFFFFF;
            nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v199 = v198 % ((2 * v193) | 1) - v193;
            v200 = *(_DWORD*)(a1 + 388);
            *(float*)&f_.v226 = (float)v199 * 0x1.47ae140000000p-7f;
            nn_os_LockMutex_alt1((__int64)&game_g_random_mutex),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v201 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v186);
            v202 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v186 + 4);
            v203 = *(_DWORD*)v186 ^ (*(_DWORD*)v186 << 11);
            *(_DWORD*)v186 = *((_DWORD*)v186 + 1);
            *((_DWORD*)v186 + 1) = v201;
            v204 = (v203 >> 8) ^ (v202 >> 19) ^ v203 ^ v202;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v186) = v202;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v186 + 4) = v204;
            LODWORD(v186) = v204 & 0x7FFFFFFF;
            nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            LANES128(v205).n128_u32[3] = 0;
            LANES128(v205).n128_u64[0] = __PAIR64__(f_.v226, f_.v229);
            LANES128(v205).n128_f32[2] =
                (float)((int)v186 % ((2 * v200) | 1) - v200) *
                0x1.47ae140000000p-7f;
            f_.v234 = vaddq_f32(f_.v234, v205);
            goto LABEL_217;
          }
          v178 = *(_DWORD*)(a1 + 396);
          if (v178 >= 1) {
            if (game_ProcGameSkipView_instance_ != 0 &&
                *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
              v179 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
              v180 = (v179 & 8) != 0 ? 2 : 3;
              if ((v180 & v179) == 0) {
                goto LABEL_214;
              }
            }
            if (game_ProcFadeView_instance_ == 0) {
              goto LABEL_215;
            }
            v181 = game_ProcFadeView_instance_ +
                   ((unsigned __int64)*(
                        unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                    << 6);
            if (*(float*)(v181 + 172) == *(float*)(v181 + 168)) {
              v182 = COERCE_AS(__typeof__(v182),
                               (*(__n128(**)(__int64))(*(_QWORD*)(v181 + 160) +
                                                       16LL))(v181 + 160)),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w"));
            }
            else {
              v182 = *(_OWORD*)(v181 + 208);
            }
            if (*((float*)&v182 + 3) == 0x1.0000000000000p+0f &&
                ((*(void (**)(__int64))(*(_QWORD*)(v181 + 160) + 16LL))(v181 +
                                                                        160),
                 v185 == 0x1.0000000000000p+0f)) {
            LABEL_214:
              v176 = 0;
              *(_BYTE*)(a1 + 400) = 0;
              *(_QWORD*)v165 = 0;
              *(_QWORD*)(a1 + 392) = 0;
            }
            else {
            LABEL_215:
              *(_DWORD*)(a1 + 388) = v176;
              *(_DWORD*)(a1 + 392) = 0;
              *(_BYTE*)(a1 + 400) = v175;
              *(_DWORD*)(a1 + 396) = v178;
              *(float*)(a1 + 384) = (float)(unsigned int)v178;
            }
            goto LABEL_216;
          }
        }
      }
    }
    *(_BYTE*)(a1 + 400) = 0;
    *(_QWORD*)v165 = 0;
    *(_QWORD*)(a1 + 392) = 0;
  }
LABEL_217:
  v206 = *(_QWORD*)(a1 + 8);
  *(float*)(v206 + 100) = v111;
  *(float*)(v206 + 104) =
      v116 + (float)(PSEUDO_UNFUSED(v105 * (float)(v113 - v116)));
  v207 = *(_QWORD*)(a1 + 8);
  v208 = *(float*)(v207 + 100) * 0x1.1df46a0000000p-6f;
  v209 = *(float*)(v207 + 104) * 0x1.1df46a0000000p-6f;
  v210 = GameRoutine_1a09fb0_alt1(v208),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  v211 = GameRoutine_1a09fc0_alt1(v208),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  f_.v230 = GameRoutine_1a09fb0_alt1(v209),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  v212 = GameRoutine_1a09fc0_alt1(v209),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  LANES128(v213).n128_u32[3] = 0;
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 24LL) = 0;
  LANES128(v213).n128_f32[0] = v210 * v212;
  LANES128(v213).n128_f32[1] = f_.v230;
  LANES128(v213).n128_f32[2] = v211 * v212;
  *(float32x4_t*)(*(_QWORD*)(a1 + 8) + 32LL) =
      vsubq_f32(f_.v234, vmulq_n_f32(vsubq_f32(COERCE_AS(float32x4_t, 0), v213),
                                     f_.v231));
  *(float32x4_t*)(*(_QWORD*)(a1 + 8) + 48LL) = f_.v234;
  *(_OWORD*)(*(_QWORD*)(a1 + 8) + 64LL) = GameData_1a83610;
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 108LL) = 0;
  v214 = *(_QWORD*)(a1 + 8);
  *(float*)(v214 + 112) = v5;
  *(_DWORD*)(v214 + 108) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 140LL) = 0x469C40003DCCCCCDLL;
  gfx_render_b3aee0((float32x4_t*)(*(_QWORD*)(a1 + 8) + 16LL)),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
      v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
}

__int64 llvm_libcxx_21_libcxx_include___functional_7d5160(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  unsigned __int64 v5;
  __int128 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  _QWORD* v41;
  _QWORD* i;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  _QWORD* j;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  int v65;
  __int64 v66;
  int v67;
  _QWORD* v68;
  _QWORD* v69;
  _QWORD* v70;
  __int64 v71;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v81;
  int v82;
  unsigned int v83;
  unsigned int v84;
  bool v85;
  int v86;
  int v87;
  unsigned int v88;
  int v89;
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
  unsigned __int8* v105;
  __int64 v106;
  unsigned int v107;
  unsigned int v108;
  unsigned int v109;
  __int64** v111;
  __int64** k;
  __int64 v113;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  _QWORD* v118;
  unsigned int v119;
  unsigned int v120;
  __int64 v121;
  unsigned int v122;
  __int64 v123;
  unsigned int v124;
  int v125;
  __int64* v126;
  unsigned int v127;
  unsigned int v128;
  _QWORD* v129;
  __int64 v130;
  char v131;
  __int64 v132;
  unsigned int v133;
  _BYTE v134[4];
  struct {
    _QWORD v135[2];
    __int64* v136;
    __int64 v137;
    _QWORD* v138;
  } v135_;
  __int64 v139;

  v134[0] = a2;
  v132 = *(_QWORD*)(*GameData_212ce98[0] + 48);
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0) {
      goto LABEL_15;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v5 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v5 + 172) == *(float*)(v5 + 168)) {
      v6 = COERCE_AS(__typeof__(v6),
                     (*(__n128(**)(unsigned __int64))(*(_QWORD*)(v5 + 160) +
                                                      16LL))(v5 + 160));
    }
    else {
      v6 = *(_OWORD*)(v5 + 208);
    }
    if (*((float*)&v6 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(
                        v5 + 160, *((float*)&v6 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      goto LABEL_15;
    }
  }
  if (*GameData_21309c8[0] != 0 && *(_BYTE*)(*GameData_21309c8[0] + 8) == 2) {
  LABEL_15:
    LODWORD(GameData_224b6d8) = GameData_224b6d8 + 1;
    v131 = 1;
  }
  else {
    v131 = 0;
  }
  v8 = *(_QWORD**)(a1 + 32);
  v7 = *(_QWORD**)(a1 + 40);
  *(_QWORD*)(a1 + 88) = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 64) = *(_QWORD*)(a1 + 56);
  if (v8 != v7) {
    v9 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v11 = *v8;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 504LL))(*v8) & 1) != 0) {
        v13 = *(_QWORD**)(a1 + 88);
        v12 = *(_QWORD*)(a1 + 96);
        if ((unsigned __int64)v13 >= v12) {
          v24 = *(_QWORD*)(a1 + 80);
          v25 = (char*)v13 - v24;
          v26 = ((__int64)v13 - v24) >> 3;
          v27 = v26 + 1;
          if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
          LABEL_200:
            GameRoutine_7d18f0();
          }
          v28 = v12 - v24;
          if (v28 >> 2 > v27) {
            v27 = v28 >> 2;
          }
          if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL) {
            v29 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v29 = v27;
          }
          if (v29 != 0) {
            if (v29 >> 61 != 0) {
            LABEL_201:
              GameRoutine_60a210();
            }
            v30 = fw_memory_HeapManager_Allocate(*v9, 8 * v29, 16, 0);
          }
          else {
            v30 = 0;
          }
          v35 = v30 + 8 * v29;
          v36 = (unsigned __int64)v13 - v24;
          v37 = (__int64)&v25[v30 + -8 * v26];
          *(_QWORD*)&v25[v30] = v11;
          v14 = (__int64)&v25[v30 + 8];
          memcpy(v37, v24, v36);
          *(_QWORD*)(a1 + 80) = v37;
          *(_QWORD*)(a1 + 88) = v14;
          *(_QWORD*)(a1 + 96) = v35;
          if (v24 != 0) {
            v38 = 128;
            if (*(_QWORD*)(*v9 + 200) == 0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free(*v9 + v38, v24);
          }
        }
        else {
          *v13 = v11;
          v14 = (__int64)(v13 + 1);
        }
        *(_QWORD*)(a1 + 88) = v14;
      }
      else {
        v16 = *(_QWORD**)(a1 + 64);
        v15 = *(_QWORD*)(a1 + 72);
        if ((unsigned __int64)v16 < v15) {
          *v16 = v11;
          v10 = (__int64)(v16 + 1);
        }
        else {
          v17 = *(_QWORD*)(a1 + 56);
          v18 = (char*)v16 - v17;
          v19 = ((__int64)v16 - v17) >> 3;
          v20 = v19 + 1;
          if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
            goto LABEL_200;
          }
          v21 = v15 - v17;
          if (v21 >> 2 > v20) {
            v20 = v21 >> 2;
          }
          if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
            v22 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v22 = v20;
          }
          if (v22 != 0) {
            if (v22 >> 61 != 0) {
              goto LABEL_201;
            }
            v23 = fw_memory_HeapManager_Allocate(*v9, 8 * v22, 16, 0);
          }
          else {
            v23 = 0;
          }
          v31 = v23 + 8 * v22;
          v32 = (unsigned __int64)v16 - v17;
          v33 = (__int64)&v18[v23 + -8 * v19];
          *(_QWORD*)&v18[v23] = v11;
          v10 = (__int64)&v18[v23 + 8];
          memcpy(v33, v17, v32);
          *(_QWORD*)(a1 + 56) = v33;
          *(_QWORD*)(a1 + 64) = v10;
          *(_QWORD*)(a1 + 72) = v31;
          if (v17 != 0) {
            v34 = 128;
            if (*(_QWORD*)(*v9 + 200) == 0) {
              v34 = 56;
            }
            nn_mem_StandardAllocator_Free(*v9 + v34, v17);
          }
        }
        *(_QWORD*)(a1 + 64) = v10;
      }
      ++v8;
    } while (v8 != v7);
    v8 = *(_QWORD**)(a1 + 32);
  }
  *(_QWORD*)(a1 + 40) = v8;
  v39 = *GameData_212ce80[0] + 61440;
  v40 = *(_DWORD*)(*GameData_212ce80[0] + 61624);
  *(_DWORD*)(*GameData_212ce80[0] + 61624) = v40 + 1;
  if (v40 == 0) {
    (**(void (***)(__int64))(v39 + 176))(v39 + 176);
  }
  v41 = *(_QWORD**)(a1 + 80);
  for (i = *(_QWORD**)(a1 + 88); v41 != i; ++v41) {
    v44 = *v41;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v41 + 464LL))(*v41) & 1) != 0) {
      v135_.v136 = (__int64*)v134;
      v135_.v138 = v135_.v135;
      v135_.v135[0] = GameData_1f9baa8;
      v135_.v135[1] = v132;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v44 + 744LL))(v44, v135_.v135);
      if (v135_.v138 == v135_.v135) {
        v43 = 32;
      }
      else {
        if (v135_.v138 == nullptr) {
          goto LABEL_62;
        }
        v43 = 40;
      }
      (*(void (**)(__int64))(*v135_.v138 + v43))((__int64)v135_.v138);
    }
  LABEL_62:
    (*(void (**)(__int64))(*(_QWORD*)v44 + 720LL))(v44);
  }
  v45 = *(_QWORD**)(a1 + 56);
  for (j = *(_QWORD**)(a1 + 64); v45 != j; *(_QWORD*)(a1 + 40) = v47) {
    v48 = *v45;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v45 + 464LL))(*v45) & 1) != 0) {
      v135_.v138 = v135_.v135;
      v135_.v135[0] = GameData_1f9bb28;
      v135_.v135[1] = v132;
      v135_.v136 = (__int64*)v134;
      v135_.v137 = v48;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v48 + 744LL))(v48, v135_.v135);
      if (v135_.v138 == v135_.v135) {
        v49 = 32;
      }
      else {
        if (v135_.v138 == nullptr) {
          goto LABEL_77;
        }
        v49 = 40;
      }
      (*(void (**)(__int64))(*v135_.v138 + v49))((__int64)v135_.v138);
    }
  LABEL_77:
    v51 = *(_QWORD**)(a1 + 40);
    v50 = *(_QWORD*)(a1 + 48);
    if ((unsigned __int64)v51 < v50) {
      *v51 = v48;
      v47 = (__int64)(v51 + 1);
    }
    else {
      v52 = *(_QWORD*)(a1 + 32);
      v53 = (char*)v51 - v52;
      v54 = ((__int64)v51 - v52) >> 3;
      v55 = v54 + 1;
      if ((unsigned __int64)(v54 + 1) >> 61 != 0) {
        goto LABEL_200;
      }
      v56 = v50 - v52;
      if (v56 >> 2 > v55) {
        v55 = v56 >> 2;
      }
      if ((unsigned __int64)v56 >= 0x7FFFFFFFFFFFFFF8LL) {
        v57 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v57 = v55;
      }
      if (v57 != 0) {
        if (v57 >> 61 != 0) {
          goto LABEL_201;
        }
        v58 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v57, 16, 0);
      }
      else {
        v58 = 0;
      }
      v59 = v58 + 8 * v57;
      v60 = (unsigned __int64)v51 - v52;
      v61 = (__int64)&v53[v58 + -8 * v54];
      *(_QWORD*)&v53[v58] = v48;
      v47 = (__int64)&v53[v58 + 8];
      memcpy(v61, v52, v60);
      *(_QWORD*)(a1 + 32) = v61;
      *(_QWORD*)(a1 + 40) = v47;
      *(_QWORD*)(a1 + 48) = v59;
      if (v52 != 0) {
        v62 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v62 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, v52);
      }
    }
    ++v45;
  }
  v63 = (_QWORD*)*GameData_212ce80[0];
  v64 = *GameData_212ce80[0] + 61440;
  v65 = *(_DWORD*)(*GameData_212ce80[0] + 61624) - 1;
  *(_DWORD*)(*GameData_212ce80[0] + 61624) = v65;
  if (v65 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v64 + 176) + 8LL))(v64 + 176);
    LOBYTE(v139) = 0;
    v135_.v135[0] = GameData_1f9a470;
    v135_.v135[1] = v63;
    v135_.v138 = v135_.v135;
    v135_.v136 = &v139;
    GameRoutine_74df60((int*)(v64 + 32), (__int64)v135_.v135);
    if (v135_.v138 == v135_.v135) {
      v66 = 32;
    }
    else {
      if (v135_.v138 == nullptr) {
      LABEL_98:
        *(_QWORD*)(v64 + 32) = 0x3E8000003E8LL;
        *(_QWORD*)(v64 + 40) = -1;
        v67 = (unsigned __int8)v139;
        v63[7686] = 0;
        v63[7687] = 0;
        v63[7688] = 0;
        v63[7689] = 0;
        v63[7690] = 0;
        v63[7691] = 0;
        v63[7692] = 0;
        v63[7693] = 0;
        v63[7694] = 0;
        v63[7695] = 0;
        v63[7696] = 0;
        v63[7697] = 0;
        v63[7698] = 0;
        v63[7699] = 0;
        v63[7700] = 0;
        v63[7701] = 0;
        if (v67 == 1 && *(_QWORD*)GameData_212d020[0] != 0) {
          GameRoutine_f09600(*(_QWORD*)GameData_212d020[0]);
        }
        goto LABEL_101;
      }
      v66 = 40;
    }
    (*(void (**)(__int64))(*v135_.v138 + v66))((__int64)v135_.v138);
    goto LABEL_98;
  }
LABEL_101:
  memset(a1 + 104, 255, 0x4800u);
  v68 = *(_QWORD**)(a1 + 32);
  v69 = *(_QWORD**)(a1 + 40);
  v70 = v135_.v135;
  v135_.v135[0] = GameData_1f9b928;
  v135_.v135[1] = a1;
  v135_.v138 = v135_.v135;
  if (v68 == v69) {
    goto LABEL_110;
  }
  do {
    v71 = *v68;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v68 + 504LL))(*v68) & 1) == 0) {
      v139 = v71;
      if (v135_.v138 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, __int64*))(*v135_.v138 + 48LL))(v135_.v138, &v139);
    }
    ++v68;
  } while (v68 != v69);
  v70 = v135_.v138;
  if (v135_.v138 == v135_.v135) {
  LABEL_110:
    v74 = 32;
    v73 = GameData_212ce98[0];
  }
  else {
    v73 = GameData_212ce98[0];
    if (v135_.v138 == nullptr) {
      goto LABEL_112;
    }
    v74 = 40;
  }
  (*(void (**)(__int64))(*v70 + v74))((__int64)v70);
LABEL_112:
  game_map_Trick_Impl_UpdateLink((_QWORD*)a1);
  if ((v134[0] & 1) != 0) {
    v75 = *v73;
    memset(*(_QWORD*)(*v73 + 72) + 8LL, 0, 0x800u);
    v76 = *(unsigned __int8*)(v75 + 21);
    v77 = *(unsigned __int8*)(v75 + 23);
    v78 = *(unsigned __int8*)(v75 + 20);
    v79 = *(unsigned __int8*)(v75 + 22);
    if (v76 <= v77 && v78 <= v79) {
      v81 = v79 + 1;
      v82 = 32 * v76;
      v83 = v79 - v78;
      v84 = 32 * v76 + v78;
      do {
        v86 = v78;
        if ((((_BYTE)v81 - (_BYTE)v78) & 3) != 0) {
          v87 = ((_BYTE)v81 - (_BYTE)v78) & 3;
          v88 = v84;
          v89 = -v78;
          do {
            if (v88 >= 0x400) {
              v90 = 0;
            }
            else {
              v90 = v88;
            }
            v91 = 2LL * (unsigned int)v90;
            if (*(_WORD*)(*(_QWORD*)(v75 + 48) + v91 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(v75 + 72) + 2 * v90 + 8) =
                  *(_WORD*)(*(_QWORD*)(v75 + 48) + v91 + 8);
            }
            else {
              v92 = *(_QWORD*)(v75 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(v75 + 40) + v91 + 8) != 0) {
                *(_WORD*)(v92 + 2 * v90) =
                    *(_WORD*)(*(_QWORD*)(v75 + 40) + v91 + 8);
              }
              else {
                *(_WORD*)(v92 + 2 * v90) =
                    *(_WORD*)(*(_QWORD*)(v75 + 32) + v91 + 8);
              }
            }
            --v89;
            ++v88;
            --v87;
          } while (v87 != 0);
          v86 = -v89;
        }
        if (v83 >= 3) {
          do {
            LODWORD(v93) = v82 + v86;
            if ((unsigned int)(v82 + v86) >= 0x400) {
              v93 = 0;
            }
            else {
              v93 = (unsigned int)v93;
            }
            v94 = 2LL * (unsigned int)v93;
            if (*(_WORD*)(*(_QWORD*)(v75 + 48) + v94 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(v75 + 72) + 2 * v93 + 8) =
                  *(_WORD*)(*(_QWORD*)(v75 + 48) + v94 + 8);
            }
            else {
              v95 = *(_QWORD*)(v75 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(v75 + 40) + v94 + 8) != 0) {
                *(_WORD*)(v95 + 2 * v93) =
                    *(_WORD*)(*(_QWORD*)(v75 + 40) + v94 + 8);
              }
              else {
                *(_WORD*)(v95 + 2 * v93) =
                    *(_WORD*)(*(_QWORD*)(v75 + 32) + v94 + 8);
              }
            }
            if ((unsigned int)(v82 + v86 + 1) < 0x400) {
              v96 = (unsigned int)(v82 + v86 + 1);
            }
            else {
              v96 = 0;
            }
            v97 = 2LL * (unsigned int)v96;
            if (*(_WORD*)(*(_QWORD*)(v75 + 48) + v97 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(v75 + 72) + 2 * v96 + 8) =
                  *(_WORD*)(*(_QWORD*)(v75 + 48) + v97 + 8);
            }
            else {
              v98 = *(_QWORD*)(v75 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(v75 + 40) + v97 + 8) != 0) {
                *(_WORD*)(v98 + 2 * v96) =
                    *(_WORD*)(*(_QWORD*)(v75 + 40) + v97 + 8);
              }
              else {
                *(_WORD*)(v98 + 2 * v96) =
                    *(_WORD*)(*(_QWORD*)(v75 + 32) + v97 + 8);
              }
            }
            LODWORD(v99) = v82 + v86 + 2;
            if ((unsigned int)v99 >= 0x400) {
              v99 = 0;
            }
            else {
              v99 = (unsigned int)v99;
            }
            v100 = 2LL * (unsigned int)v99;
            if (*(_WORD*)(*(_QWORD*)(v75 + 48) + v100 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(v75 + 72) + 2 * v99 + 8) =
                  *(_WORD*)(*(_QWORD*)(v75 + 48) + v100 + 8);
            }
            else {
              v101 = *(_QWORD*)(v75 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(v75 + 40) + v100 + 8) != 0) {
                *(_WORD*)(v101 + 2 * v99) =
                    *(_WORD*)(*(_QWORD*)(v75 + 40) + v100 + 8);
              }
              else {
                *(_WORD*)(v101 + 2 * v99) =
                    *(_WORD*)(*(_QWORD*)(v75 + 32) + v100 + 8);
              }
            }
            LODWORD(v102) = v82 + v86 + 3;
            if ((unsigned int)v102 >= 0x400) {
              v102 = 0;
            }
            else {
              v102 = (unsigned int)v102;
            }
            v103 = 2LL * (unsigned int)v102;
            if (*(_WORD*)(*(_QWORD*)(v75 + 48) + v103 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(v75 + 72) + 2 * v102 + 8) =
                  *(_WORD*)(*(_QWORD*)(v75 + 48) + v103 + 8);
            }
            else {
              v104 = *(_QWORD*)(v75 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(v75 + 40) + v103 + 8) != 0) {
                *(_WORD*)(v104 + 2 * v102) =
                    *(_WORD*)(*(_QWORD*)(v75 + 40) + v103 + 8);
              }
              else {
                *(_WORD*)(v104 + 2 * v102) =
                    *(_WORD*)(*(_QWORD*)(v75 + 32) + v103 + 8);
              }
            }
            v86 += 4;
          } while (v81 != v86);
        }
        v84 += 32;
        v82 += 32;
        v85 = v76++ == v77;
      } while (!v85);
      v75 = *v73;
    }
    (*(void (**)(_QWORD))(**(_QWORD**)(v75 + 160) + 32LL))(
        *(_QWORD*)(v75 + 160));
  }
  GameHr_965080(a1 + 18944);
  v105 = (unsigned __int8*)*v73;
  v106 = *(_QWORD*)(*v73 + 72);
  if (v106 != 0) {
    v107 = v105[29];
    v108 = v105[31];
    v109 = v105[30];
    v133 = v105[28];
    if (v107 <= v108 && v105[28] <= v109) {
      v123 = v106 + 8;
      v124 = v109 + 1;
      v125 = 32 * v107;
      v126 = GameData_212c930;
      do {
        v127 = v133;
        do {
          v128 = v125 + v127;
          if (v125 + v127 >= 0x400) {
            v128 = 0;
          }
          v129 = *(_QWORD**)(*(_QWORD*)(*v126 + 64) +
                             8LL * *(unsigned __int16*)(v123 + 2LL * v128));
          if (v129 != nullptr) {
            v130 = v129[3];
            if (*(_BYTE*)(v130 + 528) == 1) {
              if (v129[40] != 0) {
                game_map_965220(a1 + 18944, 0, v127, v107,
                                (_QWORD*)(v130 + 536), 0x1.0000000000000p+0f);
              }
              if (v129[41] != 0) {
                game_map_965220(a1 + 18944, 1u, v127, v107,
                                (_QWORD*)(v129[3] + 552LL),
                                0x1.0000000000000p+0f);
              }
            }
          }
          ++v127;
        } while (v124 != v127);
        v125 += 32;
        v85 = v107++ == v108;
      } while (!v85);
    }
  }
  v111 = *(__int64***)(a1 + 32);
  for (k = *(__int64***)(a1 + 40); v111 != k; ++v111) {
    while (1) {
      v115 = *v111;
      (*(void (**)(__int64*))(**v111 + 688))(*v111);
      if (((*(__int64 (**)(__int64*))(*v115 + 464))(v115) & 1) == 0) {
        v116 = (*(__int64 (**)(__int64*))(*v115 + 224))(v115);
        if (v116 != 0) {
          break;
        }
      }
    LABEL_178:
      if (++v111 == k) {
        goto LABEL_175;
      }
    }
    v117 = *v115;
    v118 = (_QWORD*)v116;
    if (*(_BYTE*)(v116 + 57) != 14) {
      v119 = (*(__int64 (**)(__int64*))(v117 + 56))(v115);
      v120 = (*(__int64 (**)(__int64*))(*v115 + 64))(v115);
      v121 = v118[3];
      if (*(_BYTE*)(v121 + 528) == 1) {
        v122 = v120;
        if (v118[40] != 0) {
          game_map_965220(a1 + 18944, 0, v119, v120, (_QWORD*)(v121 + 536),
                          0x1.0000000000000p+0f);
        }
        if (v118[41] != 0) {
          game_map_965220(a1 + 18944, 1u, v119, v122,
                          (_QWORD*)(v118[3] + 552LL), 0x1.0000000000000p+0f);
        }
      }
      goto LABEL_178;
    }
    (*(void (**)(__int64*))(v117 + 696))(v115);
  }
LABEL_175:
  EffectConst_965ec0(a1 + 18944);
  v113 = *(_QWORD*)(a1 + 80);
  *(_BYTE*)(a1 + 92848) = 0;
  *(_DWORD*)(a1 + 92852) = 0;
  *(_QWORD*)(a1 + 88) = v113;
  *(_QWORD*)(a1 + 64) = *(_QWORD*)(a1 + 56);
  if ((v131 & 1) != 0) {
    LODWORD(GameData_224b6d8) = GameData_224b6d8 - 1;
  }
  return v134[0];
}

__int64 llvm_libcxx_21_libcxx_include___functional_9c4bd0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
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

  *a1 = game_facility_anonymous_ProcObeliskDepositoryTransporterMenu_vtable;
  v2 = GameData_212cf90[0];
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_1fb6a40;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_1fb6b10;
  v4 = *(_QWORD*)((char*)((char*)0x20LL) + v2);
  v3 = *(_QWORD*)((char*)((char*)0x20LL) + v2 + 8);
  v6 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v2);
  v5 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v2 + 8);
  v7 = v3 - 1;
  v8 = v5 == v6;
  v9 = v3 + v4;
  v10 = ((v5 - v6) << 6) - 1;
  v11 = *(_QWORD*)(v6 + 8 * ((unsigned __int64)(v7 + v4) >> 9));
  if (v8) {
    v10 = 0;
  }
  v12 = *(_QWORD*)(v11 + 8 * ((v7 + v4) & 0x1FF));
  *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v2) = v7;
  game_TransporterConst_List_instance_ = v12;
  if ((unsigned __int64)(v10 - v9 + 1) >= 0x400) {
    v13 = *(_QWORD*)(v5 - 8);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
      v5 = *(_QWORD*)((char*)((__int128*)0x10LL) + v2);
    }
    *(_QWORD*)((char*)((__int128*)0x10LL) + v2) = v5 - 8;
  }
  v15 = a1[140];
  if (v15 != 0) {
    a1[141] = v15;
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  v15);
  }
  v17 = a1[137];
  a1[138] = v17;
  if (v17 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  v17);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu_alt2((__int64)a1);
}

float32x4_t llvm_libcxx_21_libcxx_include___functional_a38a50(__int64 a1,
                                                              float32x4_t* a2,
                                                              float32x4_t* a3)
{

#pragma clang fp contract(off)
  float v3;
  float32x4_t v4;
  float32x4_t v5;
  int8x16_t v6;
  float v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t result;

  v3 = *(float*)(a1 + 8);
  v4 = vsubq_f32(*a2, *a3);
  v5 = vsubq_f32(*a3, *a2);
  v6 = vmulq_f32(v4, v4);
  LANES128(v6).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  v7 = LANES64_OF(vsqrt_f32(vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]))))
           .n64_f32[0];
  if (v3 > v7) {
    v3 = v7;
  }
  v8 = vmulq_f32(v5, v5);
  LANES128(v8).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  LANES128(v8).n128_u64[1] = LANES128(v8).n128_u64[0];
  v9 = vrsqrteq_f32(v8);
  v10 = vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v8, v9)));
  result = vaddq_f32(
      *a2,
      vmulq_n_f32(
          vbicq_s8(vmulq_f32(v5, vmulq_f32(v10, vrsqrtsq_f32(
                                                    v10, vmulq_f32(v8, v10)))),
                   vceqzq_f32(v8)),
          v3));
  *a2 = result;
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_a96c40()
{

#pragma clang fp contract(fast)

  __int64 v0;
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  char** v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v0 = GameRoutine_193bea0(11);
  *(struct PseudoSret*)(&v25) =
      llvm_libcxx_21_libcxx_include___functional_c4d1c0(v0);
  v1 = 32;
  v2 = (_QWORD*)GameData_2132398[0];
  v3 = (_QWORD*)GameData_21323a0[0];
  v4 = GameData_1fc11c0;
  do {
    v12 = (__int64)*v4++;
    v23 = v12;
    v24 = GameRoutine_1a09c70(v12);
    if (v24 != 0) {
      v13 = (__int64*)GameRoutine_a96ee0(&v25, &v23);
      if (&v26 == v13) {
        v5 = *v2 + v1;
        GameRoutine_60a060(v5 - 32, v23, v24);
        *(_QWORD*)v5 = *v3;
        v6 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
        v7 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 8);
        v8 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 16);
        *(_QWORD*)(v5 + 24) =
            *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8);
        *(_QWORD*)(v5 + 32) = v8;
        *(_QWORD*)(v5 + 8) = v6;
        *(_QWORD*)(v5 + 16) = v7;
        v10 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v3);
        v9 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v3);
        v11 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v3);
        *(_WORD*)(v5 + 64) = *(_WORD*)((char*)game_40 + (_QWORD)v3);
        *(_QWORD*)(v5 + 48) = v10;
        *(_QWORD*)(v5 + 56) = v9;
        *(_QWORD*)(v5 + 40) = v11;
      }
      else {
        v14 = v13;
        v15 = *v2 + v1;
        GameRoutine_60a060(v15 - 32, v23, v24);
        *(_QWORD*)v15 = v14[8];
        v16 = v14[9];
        v17 = v14[10];
        v18 = v14[12];
        *(_QWORD*)(v15 + 24) = v14[11];
        *(_QWORD*)(v15 + 32) = v18;
        *(_QWORD*)(v15 + 8) = v16;
        *(_QWORD*)(v15 + 16) = v17;
        v20 = v14[14];
        v19 = v14[15];
        v21 = v14[13];
        *(_WORD*)(v15 + 64) = *((_WORD*)v14 + 64);
        *(_QWORD*)(v15 + 48) = v20;
        *(_QWORD*)(v15 + 56) = v19;
        *(_QWORD*)(v15 + 40) = v21;
      }
    }
    v1 += 112;
  } while (v1 != 1264);
  return GameRoutine_a96e40(&v25, v26);
}

__int64 llvm_libcxx_21_libcxx_include___functional_b99ae0(__int64 a1,
                                                          __int64 a2,
                                                          __int64* a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  _QWORD* v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  float32x4_t v15;
  _QWORD* v16;
  float32x4_t* v17;
  float32x4_t* v18;
  float32x4_t v19;
  float32x4_t* v20;
  float32x4_t v21;
  float32x4_t v22;
  _QWORD* v23;
  float32x4_t* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  float32x4_t v28;
  __int64 v29;
  _BYTE* v30;
  _BYTE* v31;
  char v32;
  char v33;
  __int64 v34;
  __int64 v35;
  float v36;
  float32x4_t* v37;
  __int64 v38;
  unsigned __int32 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64* v42;
  float32x4_t v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  float32x4_t v50;
  __int64 v51;
  float v52;
  float32x4_t v53;
  float32x4_t v54;
  int v55;
  int8x16_t v56;
  int8x16_t v57;
  int8x16_t v58;
  unsigned __int32 v59;
  _QWORD* v60;
  _QWORD* v61;
  __int64 v62;
  int v63;
  __int64 v64;
  int v65;
  __int64 v66;
  int v67;
  __int64 v68;
  int v69;
  __int64 v70;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  __int64 v75;
  int v76;
  __int64 v77;
  int v78;
  __int64 v79;
  int v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  char v89;
  __int16 v90;
  __int64 v91;
  unsigned __int32 v92;
  unsigned __int64 v93;
  float32x4_t v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  float32x4_t v97;
  unsigned __int8 v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD**)(a2 + 24);
  v4 = *(_QWORD**)(a1 + 8);
  v77 = 0;
  v88 = 0;
  v89 = 0;
  v98 = 0;
  v91 = 0;
  v94 = (__typeof__(v94)){0};
  v78 = -1;
  v95 = 0;
  v96 = 0;
  LANES128(v97).n128_u8[0] = 0;
  v90 = 257;
  v93 = 0x3F8000003F800000LL;
  v99 = 1065353216;
  v7 = *(_QWORD*)(*(_QWORD*)(v3[2] + 16LL) + 24LL);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = v3[2];
  v75 = v8;
  v76 = v10;
  v11 = *(_QWORD*)(v9 + 48);
  if (v11 != 0 && *(_BYTE*)(v11 + 25) == 1) {
    v12 = 16;
    if (*(_BYTE*)(v11 + 24) != 0) {
      v12 = 8;
    }
    v77 = (*(__int64 (**)(__int64))(**(_QWORD**)(v11 + v12) + 40LL))(
        *(_QWORD*)(v11 + v12)),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v78 = v13;
  }
  v14 = *(_QWORD*)(v4[1] + 288LL);
  v79 = *(_QWORD*)(v14 + 384);
  v80 = *(_DWORD*)(v14 + 392);
  v15 = vsubq_f32(
      COERCE_AS(float32x4_t, 0),
      *((float32x4_t*)GameRoutine_b3f6c0((_QWORD*)(v14 + 592), "Sun") + 3)),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = (_QWORD*)(*(_QWORD*)(v4[1] + 288LL) + 592LL);
  v81 = v15;
  v17 = (float32x4_t*)GameRoutine_b3f800(v16, "Moon"),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = *(float32x4_t**)(v4[1] + 288LL);
  v19 = vsubq_f32(COERCE_AS(float32x4_t, 0), v18[25]);
  v82 = vsubq_f32(COERCE_AS(float32x4_t, 0), v17[3]);
  v83 = v19;
  v20 = (float32x4_t*)GameRoutine_b3f6c0(
      (float32x4_t*)LANES128(v18[37]).n128_u64, "Sun"),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = vdupq_n_s32(0x3C23D70Au);
  v22 = vmulq_f32(v20[5], v21);
  v72 = v21;
  LANES128(v22).n128_u32[3] = 0;
  v23 = (_QWORD*)(*(_QWORD*)(v4[1] + 288LL) + 592LL);
  v84 = v22;
  v24 = (float32x4_t*)GameRoutine_b3f800(v23, "Moon"),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = v4[1];
  v28 = vmulq_f32(v24[5], v72);
  v26 = (__int64*)(*(_QWORD*)(*v4 + 16672LL) + 24LL);
  v27 = v4[3];
  LANES128(v28).n128_u32[3] = 0;
  if (*(_BYTE*)(*v4 + 16700LL) == 0) {
    v26 = (__int64*)(*v4 + 13304LL);
  }
  v29 = *v26;
  v85 = v28;
  v86 = v29;
  v87 = v27;
  v88 = *(_QWORD*)(v4[7] + 1220LL);
  v30 = *(_BYTE**)(*(_QWORD*)(*v3 + 8LL) + 8LL);
  v31 = *(_BYTE**)(v25 + 288);
  if (v31[381] == 1) {
    v32 = v31[157] ^ 1;
  }
  else {
    v32 = 1;
  }
  v33 = v31[383];
  v89 = v32 & 1;
  LOBYTE(v90) = v33;
  v34 = 1032;
  if (v30[1000] != 0) {
    v34 = 996;
  }
  v36 = GameRoutine_1a0a8d0(*(float*)&v30[v34]),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v37 = *(float32x4_t**)(v4[1] + 288LL);
  v38 = 952;
  if (v30[920] != 0) {
    v38 = 916;
  }
  v39 = LANES128(v37[26]).n128_u32[0];
  v40 = LANES128(v37[28]).n128_u64[1];
  v95 = LANES128(v37[28]).n128_u64[0];
  v96 = v40;
  v41 = *v3;
  v93 = __PAIR64__(v39, LODWORD(v36));
  v42 = *(__int64**)(v41 + 8);
  v43 = vmulq_f32(v37[27], v72);
  v44 = v42[15];
  v45 = *v42;
  LANES128(v43).n128_u32[3] = 0;
  v91 = v44;
  v94 = v43;
  LANES128(v43).n128_u32[0] = *(_DWORD*)&v30[v38];
  v46 = *(_BYTE*)(v45 + 96) == 0;
  v47 = 128;
  v92 = LANES128(v43).n128_u32[0];
  if (!v46) {
    v47 = 92;
  }
  HIBYTE(v90) = *(float*)(v45 + v47) != 0x0.0p+0f;
  v48 = LANES128(v37[31]).n128_u64[0];
  v49 = LANES128(v37[31]).n128_u64[1];
  v98 = LANES128(v37[32]).n128_u8[0];
  LANES128(v97).n128_u64[0] = v48;
  LANES128(v97).n128_u64[1] = v49;
  if (v98 == 1) {
    v50 = vmulq_f32(v97, vdupq_n_s32(0x3C23D70Au));
    v51 = 208;
    if (*(_BYTE*)(v44 + 176) != 0) {
      v51 = 172;
    }
    v73 = v50;
    v52 = GameRoutine_1a0a8d0(*(float*)(v44 + v51)),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v53 = v73;
    LANES128(v53).n128_u32[3] = 0;
    v54 = vmulq_n_f32(v53, v52);
    v74 = v54;
    v55 = *(_DWORD*)(*v4 + 13240LL);
    if ((unsigned int)(v55 - 3) <= 3) {
      if ((unsigned int)(v55 - 5) > 1) {
        v56 = vmulq_f32(v54, COERCE_AS(float32x4_t, GameData_1a83620));
        LANES128(v56).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v56, v56, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0])))
                .n64_u64[0];
        v57 = vmulq_f32(v54, COERCE_AS(float32x4_t, GameData_1a834b0));
        LANES128(v57).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v57, v57, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
                .n64_u64[0];
        v58 = vmulq_f32(v54, COERCE_AS(float32x4_t, GameData_1a82d20));
        LANES128(v58).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v58, v58, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
                .n64_u64[0];
        v59 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
                  .n64_u32[0];
        LANES128(v54).n128_u32[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0])))
                .n64_u32[0];
        LANES128(v54).n128_u32[1] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
                .n64_u32[0];
        LANES128(v54).n128_u64[1] = v59;
      }
      else {
        LANES128(v54).n128_f32[0] =
            scene_652ba0(&v74, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v97 = v54;
  }
  v61 = *(_QWORD**)a2;
  v60 = *(_QWORD**)(a2 + 8);
  v99 = 1120403456;
  v62 = 1192;
  if (v30[1160] != 0) {
    v62 = 1156;
  }
  v63 = *(_DWORD*)&v30[v62];
  v64 = 1272;
  if (v30[1240] != 0) {
    v64 = 1236;
  }
  v65 = *(_DWORD*)&v30[v64];
  v66 = 1352;
  if (v30[1320] != 0) {
    v66 = 1316;
  }
  v67 = *(_DWORD*)&v30[v66];
  v68 = 1432;
  if (v30[1400] != 0) {
    v68 = 1396;
  }
  v69 = *(_DWORD*)&v30[v68];
  v70 = v4[22];
  v100 = v63;
  v101 = v65;
  v102 = v67;
  v103 = v69;
  TaskSkyComp_b77c60(v70, v35, (__int64)&v75),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return ResourceBuilder_b782c0_alt1(v70, v61, v60, a3, (__int64)&v75);
}

float llvm_libcxx_21_libcxx_include___functional_e4ff70(__int64 a1, int* a2)
{
  unsigned __int64 v2;
  float v3;
  unsigned __int64 v4;

  v2 = *a2;
  v3 = (float)((int)v2 / 4);
  v4 = 1812433253 * ((v2 + 1) ^ ((v2 + 1) >> 30)) + 2;
  LODWORD(v2) =
      (1812433253 * ((v2 >> 30) ^ v2) + 1) ^
      ((1812433253 * ((unsigned int)(v2 >> 30) ^ (unsigned int)v2) + 1) << 11);
  return (float)(PSEUDO_UNFUSED(v3 * 0x1.99999a0000000p-3f)) +
         (float)(vcvts_n_f32_u64((unsigned __int16)((v4 >> 19) ^
                                                    ((unsigned int)v2 >> 8) ^
                                                    v4 ^ v2),
                                 0x10u) *
                 0x1.99999a0000000p-4f);
}

void llvm_libcxx_21_libcxx_include___functional_e93140(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  char v11;
  char v12;
  __int64 v13;
  char v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64 v31;
  char v32;
  char v33;
  __int64 v34;
  char v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47;
  __int64 v48;
  __int64 v49;
  char v50;
  __int64* v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  char* v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  char* v79;
  __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  char* v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
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
  char v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  char v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64* v128;
  const char* v129;
  unsigned __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  char* v133;
  __int64 v134;
  __int64 v135;
  int v136;
  __int64 v137;
  __int64 v138;
  __int64 (***v139)();
  unsigned __int64 v140;
  __int64* v141;
  __int64* v142;
  __int64 v143;
  __int64* v144;
  __int64 v145;
  char* v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64* v156;
  __int64 v157;
  __int64* v158;
  __int64 v159;
  __int64* v160;
  __int64 v161;
  unsigned __int64 v162;
  __int64 v163;
  unsigned __int64 v164;
  unsigned __int64 v165;
  __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  char* v174;
  __int64 v175;
  unsigned __int64 v176;
  unsigned __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  unsigned __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64* v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  char v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64* v205;
  __int64 v206;
  __int64 v207;
  __int64* v208;
  const char* v209;
  unsigned __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  char* v213;
  __int64 v214;
  __int64 v215;
  int v216;
  char* v217;
  __int64 v218;
  unsigned __int64 v219;
  __int64 v220;
  unsigned __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  struct {
    __int64* v228;
    __int64 v229;
    __int64 v230;
  } v228_;
  struct {
    __int64 v231;
    char gap56_[24];
    __int64* v232;
  } v231_;
  struct {
    __int64 v233;
    char gap104_[16];
    __int64 v234;
    __int64 v235;
  } v233_;
  struct {
    __int64 v236;
    char gap152_[24];
    __int64* v237;
  } v236_;
  __int64 v238;
  struct {
    __int64* v239;
    __int64 v240;
  } v239_;
  struct {
    __int64 (**v241)();
    __int64* v242;
    __int64 v243;
  } v241_;
  struct {
    _QWORD v244[4];
    _QWORD* v245;
  } v244_;
  struct {
    _BYTE v246[24];
    __int64 v247;
    __int64 v248;
  } v246_;
  struct {
    _BYTE v249[32];
    _BYTE* v250;
  } v249_;

  if (*(_QWORD*)GameData_212d750 == 0) {
    v24 = game_script_hub_talk_g_select_menu;
    v25 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 288);
    if (*(_QWORD*)(game_script_hub_talk_g_select_menu + 296) == v25) {
      v29 = 0;
      v28 = nullptr;
      v7 = 0;
      v45 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 208);
      if (v45 == 0) {
        goto LABEL_339;
      }
      goto LABEL_72;
    }
    v26 = 0;
    v27 = 0;
    v7 = 0;
    v28 = nullptr;
    v29 = 0;
    v30 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v31 = *(_QWORD*)(v25 + v26 + 64);
      if (v31 != 0) {
        v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 48LL))(v31);
        v25 = *(_QWORD*)(v24 + 288);
        v33 = v32;
      }
      else {
        v33 = 1;
      }
      v34 = *(_QWORD*)(v25 + v26 + 112);
      if (v34 != 0) {
        v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 48LL))(v34);
        if ((v33 & 1) != 0) {
          goto LABEL_43;
        }
      }
      else {
        v35 = 1;
        if ((v33 & 1) != 0) {
        LABEL_43:
          v36 = fw_memory_HeapManager_Allocate(*v30, 88, 16, 0);
          *(_WORD*)(v36 + 16) = 0;
          *(_QWORD*)(v36 + 48) = 0;
          *(_QWORD*)(v36 + 56) = 0;
          *(_BYTE*)(v36 + 84) = v35 & 1;
          *(_QWORD*)(v36 + 64) = 0;
          *(_QWORD*)(v36 + 72) = 0;
          *(_DWORD*)(v36 + 40) = v27;
          *(_DWORD*)(v36 + 80) = 65793;
          *(_QWORD*)v36 = game_menu_anonymous_FuncUnitMenuItem_vtable;
          *(_QWORD*)(v36 + 8) = 0;
          if ((unsigned __int64)v28 < v29) {
            *v28++ = v36;
          }
          else {
            v37 = (unsigned __int64)v28 - v7;
            v38 = ((__int64)v28 - v7) >> 3;
            v39 = v38 + 1;
            if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
              goto LABEL_421;
            }
            if ((__int64)(v29 - v7) >> 2 > v39) {
              v39 = (__int64)(v29 - v7) >> 2;
            }
            if (v29 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
              v40 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v40 = v39;
            }
            if (v40 != 0) {
              if (v40 >> 61 != 0) {
                goto LABEL_419;
              }
              v41 = v36;
              v42 = fw_memory_HeapManager_Allocate(*v30, 8 * v40, 16, 0);
              v36 = v41;
            }
            else {
              v42 = 0;
            }
            v29 = v42 + 8 * v40;
            v43 = v42 + v37 - 8 * v38;
            *(_QWORD*)(v42 + v37) = v36;
            v28 = (__int64*)(v42 + v37 + 8);
            GameRoutine_1a0b950(v43, v7, v37);
            if (v7 != 0) {
              v44 = 128;
              if (*(_QWORD*)(*v30 + 200) == 0) {
                v44 = 56;
              }
              nn_mem_StandardAllocator_Free(*v30 + v44, v7);
            }
            v7 = v43;
          }
        }
      }
      v25 = *(_QWORD*)(v24 + 288);
      ++v27;
      v26 += 176;
      if (0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD*)(v24 + 296) - v25) >> 4) <= v27) {
        v45 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 208);
        if (v45 == 0) {
          goto LABEL_339;
        }
      LABEL_72:
        game_menu_anonymous_e980a0((void*)((int*)&v241_.v241), v45);
        v50 = (char)v241_.v241;
        if (((unsigned __int8)v241_.v241 & 8) != 0) {
          v51 = (__int64*)fw_memory_g_heap_manager_ptr;
          v52 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
          *(_WORD*)(v52 + 16) = 0;
          *(_DWORD*)(v52 + 40) = 0;
          *(_QWORD*)(v52 + 48) = 0;
          *(_QWORD*)(v52 + 56) = 0;
          *(_QWORD*)(v52 + 64) = 0;
          *(_QWORD*)(v52 + 72) = 0;
          *(_QWORD*)(v52 + 88) = v45;
          *(_DWORD*)(v52 + 80) = 65793;
          *(_QWORD*)v52 = game_menu_anonymous_GiftUnitMenuItem_vtable;
          *(_QWORD*)(v52 + 8) = 0;
          if ((unsigned __int64)v28 < v29) {
            *v28++ = v52;
            goto LABEL_75;
          }
          v59 = (unsigned __int64)v28 - v7;
          v60 = ((__int64)v28 - v7) >> 3;
          v61 = v60 + 1;
          if ((unsigned __int64)(v60 + 1) >> 61 != 0) {
            goto LABEL_421;
          }
          if ((__int64)(v29 - v7) >> 2 > v61) {
            v61 = (__int64)(v29 - v7) >> 2;
          }
          if (v29 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
            v62 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v62 = v61;
          }
          if (v62 != 0) {
            if (v62 >> 61 == 0) {
              v63 = v52;
              v64 = fw_memory_HeapManager_Allocate(*v51, 8 * v62, 16, 0);
              v52 = v63;
              goto LABEL_278;
            }
          LABEL_419:
            GameRoutine_60a210();
          }
          v64 = 0;
        LABEL_278:
          v29 = v64 + 8 * v62;
          v154 = v64 + v59 - 8 * v60;
          *(_QWORD*)(v64 + v59) = v52;
          v28 = (__int64*)(v64 + v59 + 8);
          GameRoutine_1a0b950(v154, v7, v59);
          if (v7 != 0) {
            v155 = 128;
            if (*(_QWORD*)(*v51 + 200) == 0) {
              v155 = 56;
            }
            nn_mem_StandardAllocator_Free(*v51 + v155, v7);
          }
          v7 = v154;
          if ((v50 & 2) != 0) {
          LABEL_283:
            v156 = (__int64*)fw_memory_g_heap_manager_ptr;
            v157 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
            *(_WORD*)(v157 + 16) = 0;
            *(_DWORD*)(v157 + 40) = 0;
            *(_QWORD*)(v157 + 48) = 0;
            *(_QWORD*)(v157 + 56) = 0;
            *(_QWORD*)(v157 + 64) = 0;
            *(_QWORD*)(v157 + 72) = 0;
            *(_QWORD*)(v157 + 88) = v45;
            *(_DWORD*)(v157 + 80) = 65793;
            *(_QWORD*)v157 = game_menu_anonymous_ScoutUnitMenuItem_vtable;
            *(_QWORD*)(v157 + 8) = 0;
            if ((unsigned __int64)v28 >= v29) {
              v162 = (unsigned __int64)v28 - v7;
              v163 = ((__int64)v28 - v7) >> 3;
              v164 = v163 + 1;
              if ((unsigned __int64)(v163 + 1) >> 61 == 0) {
                if ((__int64)(v29 - v7) >> 2 > v164) {
                  v164 = (__int64)(v29 - v7) >> 2;
                }
                if (v29 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v165 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v165 = v164;
                }
                if (v165 != 0) {
                  if (v165 >> 61 != 0) {
                    goto LABEL_419;
                  }
                  v166 = v157;
                  v167 = fw_memory_HeapManager_Allocate(*v156, 8 * v165, 16, 0);
                  v157 = v166;
                }
                else {
                  v167 = 0;
                }
                v29 = v167 + 8 * v165;
                v180 = v167 + v162 - 8 * v163;
                *(_QWORD*)(v167 + v162) = v157;
                v28 = (__int64*)(v167 + v162 + 8);
                GameRoutine_1a0b950(v180, v7, v162);
                if (v7 != 0) {
                  v181 = 128;
                  if (*(_QWORD*)(*v156 + 200) == 0) {
                    v181 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v156 + v181, v7);
                }
                v7 = v180;
                if ((v50 & 4) == 0) {
                  goto LABEL_77;
                }
              LABEL_285:
                v158 = (__int64*)fw_memory_g_heap_manager_ptr;
                v159 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
                *(_QWORD*)(v159 + 72) = 0;
                *(_QWORD*)(v159 + 80) = 0;
                *(_QWORD*)(v159 + 16) = 0;
                *(_QWORD*)(v159 + 24) = 0;
                *(_QWORD*)(v159 + 32) = 0;
                *(_QWORD*)(v159 + 40) = 0;
                *(_BYTE*)(v159 + 17) = 0;
                *(_QWORD*)(v159 + 48) = 0;
                *(_QWORD*)(v159 + 56) = 0;
                *(_QWORD*)(v159 + 64) = 0;
                *(_WORD*)(v159 + 80) = 257;
                *(_BYTE*)(v159 + 82) = 1;
                *(_QWORD*)v159 =
                    game_menu_anonymous_PersonInfoUnitMenuItem_vtable;
                *(_QWORD*)(v159 + 8) = 0;
                if ((unsigned __int64)v28 < v29) {
                  *v28++ = v159;
                  if ((v50 & 0x10) == 0) {
                    goto LABEL_78;
                  }
                  goto LABEL_287;
                }
                v168 = (unsigned __int64)v28 - v7;
                v169 = ((__int64)v28 - v7) >> 3;
                v170 = v169 + 1;
                if ((unsigned __int64)(v169 + 1) >> 61 == 0) {
                  if ((__int64)(v29 - v7) >> 2 > v170) {
                    v170 = (__int64)(v29 - v7) >> 2;
                  }
                  if (v29 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v171 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v171 = v170;
                  }
                  if (v171 != 0) {
                    if (v171 >> 61 != 0) {
                      goto LABEL_419;
                    }
                    v172 = v159;
                    v173 =
                        fw_memory_HeapManager_Allocate(*v158, 8 * v171, 16, 0);
                    v159 = v172;
                  }
                  else {
                    v173 = 0;
                  }
                  v29 = v173 + 8 * v171;
                  v182 = v173 + v168 - 8 * v169;
                  *(_QWORD*)(v173 + v168) = v159;
                  v28 = (__int64*)(v173 + v168 + 8);
                  GameRoutine_1a0b950(v182, v7, v168);
                  if (v7 != 0) {
                    v183 = 128;
                    if (*(_QWORD*)(*v158 + 200) == 0) {
                      v183 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v158 + v183, v7);
                  }
                  v7 = v182;
                  if ((v50 & 0x10) == 0) {
                    goto LABEL_78;
                  }
                  goto LABEL_287;
                }
              }
            }
            else {
              *v28++ = v157;
              if ((v50 & 4) != 0) {
                goto LABEL_285;
              }
            LABEL_77:
              if ((v50 & 0x10) == 0) {
              LABEL_78:
                if ((v50 & 0x20) == 0) {
                  goto LABEL_339;
                }
                goto LABEL_337;
              }
            LABEL_287:
              v160 = (__int64*)fw_memory_g_heap_manager_ptr;
              v161 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
              *(_WORD*)(v161 + 16) = 0;
              *(_DWORD*)(v161 + 40) = 0;
              *(_QWORD*)(v161 + 48) = 0;
              *(_QWORD*)(v161 + 56) = 0;
              *(_QWORD*)(v161 + 64) = 0;
              *(_QWORD*)(v161 + 72) = 0;
              *(_QWORD*)(v161 + 88) = v45;
              *(_DWORD*)(v161 + 80) = 65793;
              *(_QWORD*)v161 = game_menu_anonymous_LessonUnitMenuItem_vtable;
              *(_QWORD*)(v161 + 8) = 0;
              if ((unsigned __int64)v28 < v29) {
                *v28++ = v161;
                if ((v50 & 0x20) != 0) {
                  goto LABEL_337;
                }
              LABEL_339:
                v189 = (__int64)v28 - v7;
                if (v28 != (__int64*)v7) {
                LABEL_340:
                  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
                    Time_e1e170(*(_QWORD*)GameData_212ebf8[0]);
                  }
                  v190 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 272);
                  if (v190 != 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v190 + 48LL))(v190);
                  }
                  v191 = fw_memory_g_heap_manager_ptr;
                  v192 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1280, 16, 0);
                  GmapTalkCommandMenu_e94ee0(
                      &v241_.v241,
                      (__int64*)(game_script_hub_talk_g_select_menu + 208));
                  GmapTalkCommandMenu_e94ee0((_QWORD*)(v192 + 1072),
                                             (__int64*)&v241_.v241);
                  if (v249_.v250 == v249_.v249) {
                    v193 = 32;
                  LABEL_348:
                    (*(void (**)(__int64))(*(_QWORD*)v249_.v250 + v193))(
                        (__int64)v249_.v250);
                  }
                  else if (v249_.v250 != nullptr) {
                    v193 = 40;
                    goto LABEL_348;
                  }
                  v194 = v246_.v247;
                  if (v246_.v247 != 0) {
                    v195 = v246_.v248;
                    if (v246_.v247 == v246_.v248) {
                      goto LABEL_360;
                    }
                    v196 = v246_.v248;
                    do {
                      v197 = *(_BYTE*)(v196 - 24);
                      v196 -= 24;
                      if ((v197 & 1) != 0) {
                        v198 = *(_QWORD*)(v195 - 8);
                        if (v198 != 0) {
                          if (*(_QWORD*)(*(_QWORD*)v191 + 200LL) != 0) {
                            v199 = 128;
                          }
                          else {
                            v199 = 56;
                          }
                          nn_mem_StandardAllocator_Free(*(_QWORD*)v191 + v199,
                                                        v198);
                        }
                      }
                      v195 = v196;
                    } while (v196 != v194);
                    v246_.v248 = v194;
                    v194 = v246_.v247;
                    if (v246_.v247 != 0) {
                    LABEL_360:
                      v200 = 128;
                      if (*(_QWORD*)(*(_QWORD*)v191 + 200LL) == 0) {
                        v200 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v191 + v200,
                                                    v194);
                    }
                  }
                  v228_.v228 = (__int64*)v246_.v246;
                  util_cb2640(&v228_.v228);
                  if (v244_.v245 == v244_.v244) {
                    v201 = 32;
                  LABEL_367:
                    (*(void (**)(__int64))(*v244_.v245 + v201))(
                        (__int64)v244_.v245);
                  }
                  else if (v244_.v245 != nullptr) {
                    v201 = 40;
                    goto LABEL_367;
                  }
                  if (v241_.v242 != nullptr) {
                    v202 = *(_QWORD*)v191;
                    v241_.v243 = (__int64)v241_.v242;
                    v203 = 128;
                    if (*(_QWORD*)(v202 + 200) == 0) {
                      v203 = 56;
                    }
                    nn_mem_StandardAllocator_Free(v202 + v203,
                                                  (__int64)v241_.v242);
                  }
                  v204 = v189 >> 3;
                  v228_.v228 = nullptr;
                  v228_.v229 = 0;
                  BasicMenu_16dcd30(v192, (__int64)"TalkCommandMenu",
                                    &v228_.v228, 0);
                  v205 = GameData_212d6a8;
                  v206 = v228_.v229;
                  *(_QWORD*)v192 = GameData_212d6a8 + 2;
                  *(_QWORD*)(v192 + 176) = v205 + 143;
                  *(_QWORD*)(v192 + 1056) = v205 + 169;
                  if (v206 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v206 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v206 + 16LL))(v206);
                    std___1___shared_weak_count___release_weak(v206);
                  }
                  *(_QWORD*)v192 = game_menu_anonymous_TalkCommandMenu_vtable;
                  *(_QWORD*)(v192 + 176) =
                      game_menu_MenuInput_InputUnknown00_ptr_1fec3a0;
                  *(_QWORD*)(v192 + 1056) = GameData_1fec470;
                  *(_QWORD*)(v192 + 1264) =
                      TalkCommandMenu_Destructor_e97ff0_ptr;
                  ProcInst_657850(v192, (__int64)GameData_212c730,
                                  (__int64)"TalkCommandMenu", 1, a1);
                  v207 = 0;
                  v208 = (__int64*)v7;
                  do {
                    BasicMenuCursor_16e0c00((_QWORD*)v192, *v208);
                    *(_BYTE*)(*v208 + 83) =
                        *(_BYTE*)(game_script_hub_talk_g_select_menu + 384);
                    v209 = (const char*)(*(__int64 (**)(__int64))(
                        *(_QWORD*)*v208 + 24LL))(*v208);
                    v210 = GameRoutine_1a09c70_alt1(v209);
                    v211 = (unsigned __int8)GameData_221b408 >> 1;
                    if ((GameData_221b408 & 1) != 0) {
                      v211 = GameData_221b410;
                    }
                    if (v210 == v211) {
                      v212 = v210;
                      if (v210 == -1) {
                      LABEL_418:
                        String_60a230();
                      }
                      if ((GameData_221b408 & 1) != 0) {
                        v213 = (char*)GameData_221b418;
                      }
                      else {
                        v213 = (char*)&GameData_221b408 + 1;
                      }
                      if (GameRoutine_1a09cf0((__int64)v213, (__int64)v209,
                                              v212) == 0) {
                        v207 = *v208;
                      }
                    }
                    --v204;
                    ++v208;
                  } while (v204 != 0);
                  if (v207 != 0) {
                    v214 = *(_QWORD*)(v192 + 336);
                    if (v214 == v207) {
                    LABEL_392:
                      v216 = 4;
                      if (v214 != 0) {
                        if (((*(__int64 (**)(__int64))(*(_QWORD*)v214 + 120LL))(
                                 v214) &
                             1) != 0) {
                          v216 = 4;
                        }
                        else {
                          v216 = 0;
                        }
                      }
                    }
                    else {
                      if (v214 != 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v214 + 168LL))(v214);
                      }
                      *(_QWORD*)(v192 + 336) = v207;
                      BasicMenu_16dea40(v192, 0, 1u, 0);
                      v215 = *(_QWORD*)(v192 + 336);
                      if (v215 != 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v215 + 160LL))(v215);
                        v214 = *(_QWORD*)(v192 + 336);
                        goto LABEL_392;
                      }
                      v216 = 4;
                    }
                    *(_DWORD*)(v192 + 356) =
                        *(_DWORD*)(v192 + 356) & 0xFFFFFFFB | v216;
                  }
                  else {
                    game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable(v192,
                                                                           1);
                  }
                LABEL_414:
                  v224 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v224 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v224, v7);
                  return;
                }
              LABEL_410:
                if (v28 == nullptr) {
                  return;
                }
                goto LABEL_414;
              }
              v174 = (char*)v28 - v7;
              v175 = ((__int64)v28 - v7) >> 3;
              v176 = v175 + 1;
              if ((unsigned __int64)(v175 + 1) >> 61 == 0) {
                if ((__int64)(v29 - v7) >> 2 > v176) {
                  v176 = (__int64)(v29 - v7) >> 2;
                }
                if (v29 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v177 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v177 = v176;
                }
                if (v177 != 0) {
                  if (v177 >> 61 != 0) {
                    goto LABEL_419;
                  }
                  v178 = v161;
                  v179 = fw_memory_HeapManager_Allocate(*v160, 8 * v177, 16, 0);
                  v161 = v178;
                }
                else {
                  v179 = 0;
                }
                v29 = v179 + 8 * v177;
                v184 = (unsigned __int64)v28 - v7;
                v185 = (__int64)&v174[v179 + -8 * v175];
                *(_QWORD*)&v174[v179] = v161;
                v28 = (__int64*)&v174[v179 + 8];
                GameRoutine_1a0b950(v185, v7, v184);
                if (v7 != 0) {
                  v186 = 128;
                  if (*(_QWORD*)(*v160 + 200) == 0) {
                    v186 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v160 + v186, v7);
                }
                v7 = v185;
                if ((v50 & 0x20) == 0) {
                  goto LABEL_339;
                }
              LABEL_337:
                v187 = (__int64*)fw_memory_g_heap_manager_ptr;
                v188 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
                *(_QWORD*)(v188 + 72) = 0;
                *(_QWORD*)(v188 + 80) = 0;
                *(_QWORD*)(v188 + 16) = 0;
                *(_QWORD*)(v188 + 24) = 0;
                *(_QWORD*)(v188 + 32) = 0;
                *(_QWORD*)(v188 + 40) = 0;
                *(_BYTE*)(v188 + 17) = 0;
                *(_QWORD*)(v188 + 48) = 0;
                *(_QWORD*)(v188 + 56) = 0;
                *(_QWORD*)(v188 + 64) = 0;
                *(_WORD*)(v188 + 80) = 257;
                *(_BYTE*)(v188 + 82) = 1;
                *(_QWORD*)v188 =
                    game_menu_anonymous_ProcurementUnitMenuItem_vtable;
                *(_QWORD*)(v188 + 8) = 0;
                if ((unsigned __int64)v28 < v29) {
                  *v28++ = v188;
                  goto LABEL_339;
                }
                v217 = (char*)v28 - v7;
                v218 = ((__int64)v28 - v7) >> 3;
                v219 = v218 + 1;
                if ((unsigned __int64)(v218 + 1) >> 61 == 0) {
                  if ((__int64)(v29 - v7) >> 2 > v219) {
                    v219 = (__int64)(v29 - v7) >> 2;
                  }
                  if (v29 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v219 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  if (v219 != 0) {
                    if (v219 >> 61 != 0) {
                      goto LABEL_419;
                    }
                    v220 = v188;
                    v219 =
                        fw_memory_HeapManager_Allocate(*v187, 8 * v219, 16, 0);
                    v188 = v220;
                  }
                  v221 = (unsigned __int64)v28 - v7;
                  v222 = (__int64)&v217[v219 + -8 * v218];
                  *(_QWORD*)&v217[v219] = v188;
                  v28 = (__int64*)&v217[v219 + 8];
                  GameRoutine_1a0b950(v222, v7, v221);
                  if (v7 != 0) {
                    v223 = 128;
                    if (*(_QWORD*)(*v187 + 200) == 0) {
                      v223 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v187 + v223, v7);
                  }
                  v7 = v222;
                  v189 = (__int64)v28 - v222;
                  if (v28 != (__int64*)v222) {
                    goto LABEL_340;
                  }
                  goto LABEL_410;
                }
              }
            }
          LABEL_421:
            GameRoutine_e96a00();
          }
        }
        else {
        LABEL_75:
          if ((v50 & 2) != 0) {
            goto LABEL_283;
          }
        }
        if ((v50 & 4) != 0) {
          goto LABEL_285;
        }
        goto LABEL_77;
      }
    }
  }
  v1 = game_script_hub_talk_g_select_menu;
  v2 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 392);
  if (v2 == 0) {
    return;
  }
  v225 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 392);
  v3 = *(_QWORD*)(v2 + 8);
  if (v3 != 0) {
    LayoutAccessor_155e830(v3 + 848, 1);
  }
  v4 = *(_QWORD*)(v1 + 288);
  if (*(_QWORD*)(v1 + 296) != v4) {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = nullptr;
    v9 = 0;
    while (1) {
      v10 = *(_QWORD*)(v4 + v5 + 64);
      if (v10 != 0) {
        v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 48LL))(v10);
        v4 = *(_QWORD*)(v1 + 288);
        v12 = v11;
      }
      else {
        v12 = 1;
      }
      v13 = *(_QWORD*)(v4 + v5 + 112);
      if (v13 != 0) {
        v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 48LL))(v13);
        if ((v12 & 1) == 0) {
          goto LABEL_8;
        }
      }
      else {
        v14 = 1;
        if ((v12 & 1) == 0) {
          goto LABEL_8;
        }
      }
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
      *(_WORD*)(v15 + 16) = 0;
      *(_QWORD*)(v15 + 48) = 0;
      *(_QWORD*)(v15 + 56) = 0;
      *(_QWORD*)(v15 + 64) = 0;
      *(_QWORD*)(v15 + 72) = 0;
      *(_QWORD*)(v15 + 128) = 0;
      *(_BYTE*)(v15 + 144) = 0;
      *(_QWORD*)v15 =
          game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr_1fe9ab8;
      *(_QWORD*)(v15 + 8) = 0;
      *(_DWORD*)(v15 + 40) = v6;
      *(_WORD*)(v15 + 80) = 257;
      *(_BYTE*)(v15 + 145) = v14 & 1;
      *(_BYTE*)(v15 + 82) = 1;
      if ((unsigned __int64)v8 < v9) {
        *v8++ = v15;
      }
      else {
        v16 = (unsigned __int64)v8 - v7;
        v17 = ((__int64)v8 - v7) >> 3;
        v18 = v17 + 1;
        if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
          goto LABEL_420;
        }
        if ((__int64)(v9 - v7) >> 2 > v18) {
          v18 = (__int64)(v9 - v7) >> 2;
        }
        if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
          v19 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v19 = v18;
        }
        if (v19 != 0) {
          if (v19 >> 61 != 0) {
            goto LABEL_419;
          }
          v20 = v15;
          v21 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
          v15 = v20;
        }
        else {
          v21 = 0;
        }
        v9 = v21 + 8 * v19;
        v22 = v21 + v16 - 8 * v17;
        *(_QWORD*)(v21 + v16) = v15;
        v8 = (__int64*)(v21 + v16 + 8);
        GameRoutine_1a0b950(v22, v7, v16);
        if (v7 != 0) {
          v23 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v7);
        }
        v7 = v22;
      }
    LABEL_8:
      v4 = *(_QWORD*)(v1 + 288);
      ++v6;
      v5 += 176;
      if (0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD*)(v1 + 296) - v4) >> 4) <= v6) {
        goto LABEL_62;
      }
    }
  }
  v9 = 0;
  v8 = nullptr;
  v7 = 0;
LABEL_62:
  v46 = *(_QWORD*)(v1 + 208);
  if (v46 == 0) {
    goto LABEL_160;
  }
  game_menu_anonymous_e980a0((void*)((int*)&v241_.v241), v46);
  v47 = (char)v241_.v241;
  if (((unsigned __int8)v241_.v241 & 8) == 0) {
  LABEL_66:
    if ((v47 & 2) == 0) {
      goto LABEL_67;
    }
  LABEL_104:
    v68 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         160, 16, 0);
    v69 = *(_QWORD*)(v1 + 208);
    *(_WORD*)(v68 + 16) = 0;
    *(_DWORD*)(v68 + 40) = 0;
    *(_QWORD*)(v68 + 64) = 0;
    *(_QWORD*)(v68 + 72) = 0;
    *(_QWORD*)(v68 + 48) = 0;
    *(_QWORD*)(v68 + 56) = 0;
    *(_QWORD*)(v68 + 128) = 0;
    *(_BYTE*)(v68 + 144) = 0;
    *(_WORD*)(v68 + 80) = 257;
    *(_BYTE*)(v68 + 82) = 1;
    *(_QWORD*)v68 =
        game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr_1fe9f90;
    *(_QWORD*)(v68 + 8) = 0;
    *(_QWORD*)(v68 + 152) = v69;
    if ((unsigned __int64)v8 >= v9) {
      v73 = (char*)v8 - v7;
      v74 = ((__int64)v8 - v7) >> 3;
      v75 = v74 + 1;
      if ((unsigned __int64)(v74 + 1) >> 61 != 0) {
        goto LABEL_420;
      }
      if ((__int64)(v9 - v7) >> 2 > v75) {
        v75 = (__int64)(v9 - v7) >> 2;
      }
      if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
        v76 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v76 = v75;
      }
      if (v76 != 0) {
        if (v76 >> 61 != 0) {
          goto LABEL_419;
        }
        v77 = v68;
        v78 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v76, 16, 0);
        v68 = v77;
      }
      else {
        v78 = 0;
      }
      v9 = v78 + 8 * v76;
      v91 = (unsigned __int64)v8 - v7;
      v92 = (__int64)&v73[v78 + -8 * v74];
      *(_QWORD*)&v73[v78] = v68;
      v8 = (__int64*)&v73[v78 + 8];
      GameRoutine_1a0b950(v92, v7, v91);
      if (v7 != 0) {
        v93 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v93 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v93, v7);
      }
      v7 = v92;
      if ((v47 & 4) != 0) {
        goto LABEL_106;
      }
    }
    else {
      *v8++ = v68;
      if ((v47 & 4) != 0) {
        goto LABEL_106;
      }
    }
  LABEL_68:
    if ((v47 & 0x10) == 0) {
      goto LABEL_69;
    }
    goto LABEL_108;
  }
  v48 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       160, 16, 0);
  v49 = *(_QWORD*)(v1 + 208);
  *(_WORD*)(v48 + 16) = 0;
  *(_DWORD*)(v48 + 40) = 0;
  *(_QWORD*)(v48 + 64) = 0;
  *(_QWORD*)(v48 + 72) = 0;
  *(_QWORD*)(v48 + 48) = 0;
  *(_QWORD*)(v48 + 56) = 0;
  *(_QWORD*)(v48 + 128) = 0;
  *(_BYTE*)(v48 + 144) = 0;
  *(_WORD*)(v48 + 80) = 257;
  *(_BYTE*)(v48 + 82) = 1;
  *(_QWORD*)v48 = game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr_1fe9d30;
  *(_QWORD*)(v48 + 8) = 0;
  *(_QWORD*)(v48 + 152) = v49;
  if ((unsigned __int64)v8 < v9) {
    *v8++ = v48;
    goto LABEL_66;
  }
  v53 = (char*)v8 - v7;
  v54 = ((__int64)v8 - v7) >> 3;
  v55 = v54 + 1;
  if ((unsigned __int64)(v54 + 1) >> 61 != 0) {
    goto LABEL_420;
  }
  if ((__int64)(v9 - v7) >> 2 > v55) {
    v55 = (__int64)(v9 - v7) >> 2;
  }
  if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
    v56 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v56 = v55;
  }
  if (v56 != 0) {
    if (v56 >> 61 != 0) {
      goto LABEL_419;
    }
    v57 = v48;
    v58 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v56, 16, 0);
    v48 = v57;
  }
  else {
    v58 = 0;
  }
  v9 = v58 + 8 * v56;
  v65 = (unsigned __int64)v8 - v7;
  v66 = (__int64)&v53[v58 + -8 * v54];
  *(_QWORD*)&v53[v58] = v48;
  v8 = (__int64*)&v53[v58 + 8];
  GameRoutine_1a0b950(v66, v7, v65);
  if (v7 != 0) {
    v67 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v67,
                                  v7);
  }
  v7 = v66;
  if ((v47 & 2) != 0) {
    goto LABEL_104;
  }
LABEL_67:
  if ((v47 & 4) == 0) {
    goto LABEL_68;
  }
LABEL_106:
  v70 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       160, 16, 0);
  *(_QWORD*)(v70 + 80) = 0;
  *(_QWORD*)(v70 + 88) = 0;
  *(_QWORD*)(v70 + 16) = 0;
  *(_QWORD*)(v70 + 24) = 0;
  *(_QWORD*)(v70 + 32) = 0;
  *(_QWORD*)(v70 + 40) = 0;
  *(_QWORD*)(v70 + 48) = 0;
  *(_QWORD*)(v70 + 56) = 0;
  *(_QWORD*)(v70 + 64) = 0;
  *(_QWORD*)(v70 + 72) = 0;
  *(_QWORD*)(v70 + 96) = 0;
  *(_QWORD*)(v70 + 104) = 0;
  *(_QWORD*)(v70 + 112) = 0;
  *(_QWORD*)(v70 + 120) = 0;
  *(_QWORD*)(v70 + 128) = 0;
  *(_QWORD*)(v70 + 136) = 0;
  *(_QWORD*)(v70 + 144) = 0;
  *(_QWORD*)(v70 + 152) = 0;
  *(_BYTE*)(v70 + 17) = 0;
  *(_QWORD*)(v70 + 48) = 0;
  *(_QWORD*)(v70 + 56) = 0;
  *(_WORD*)(v70 + 80) = 257;
  *(_QWORD*)(v70 + 64) = 0;
  *(_QWORD*)(v70 + 72) = 0;
  *(_BYTE*)(v70 + 144) = 0;
  *(_BYTE*)(v70 + 82) = 1;
  *(_QWORD*)v70 = game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr_1fea1f0;
  *(_QWORD*)(v70 + 8) = 0;
  if ((unsigned __int64)v8 >= v9) {
    v79 = (char*)v8 - v7;
    v80 = ((__int64)v8 - v7) >> 3;
    v81 = v80 + 1;
    if ((unsigned __int64)(v80 + 1) >> 61 != 0) {
      goto LABEL_420;
    }
    if ((__int64)(v9 - v7) >> 2 > v81) {
      v81 = (__int64)(v9 - v7) >> 2;
    }
    if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
      v82 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v82 = v81;
    }
    if (v82 != 0) {
      if (v82 >> 61 != 0) {
        goto LABEL_419;
      }
      v83 = v70;
      v84 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v82, 16, 0);
      v70 = v83;
    }
    else {
      v84 = 0;
    }
    v9 = v84 + 8 * v82;
    v94 = (unsigned __int64)v8 - v7;
    v95 = (__int64)&v79[v84 + -8 * v80];
    *(_QWORD*)&v79[v84] = v70;
    v8 = (__int64*)&v79[v84 + 8];
    GameRoutine_1a0b950(v95, v7, v94);
    if (v7 != 0) {
      v96 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v96 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v96, v7);
    }
    v7 = v95;
    if ((v47 & 0x10) == 0) {
      goto LABEL_69;
    }
  }
  else {
    *v8++ = v70;
    if ((v47 & 0x10) == 0) {
    LABEL_69:
      if ((v47 & 0x20) == 0) {
        goto LABEL_160;
      }
      goto LABEL_158;
    }
  }
LABEL_108:
  v71 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       160, 16, 0);
  v72 = *(_QWORD*)(v1 + 208);
  *(_WORD*)(v71 + 16) = 0;
  *(_DWORD*)(v71 + 40) = 0;
  *(_QWORD*)(v71 + 64) = 0;
  *(_QWORD*)(v71 + 72) = 0;
  *(_QWORD*)(v71 + 48) = 0;
  *(_QWORD*)(v71 + 56) = 0;
  *(_QWORD*)(v71 + 128) = 0;
  *(_BYTE*)(v71 + 144) = 0;
  *(_WORD*)(v71 + 80) = 257;
  *(_BYTE*)(v71 + 82) = 1;
  *(_QWORD*)v71 = game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr_1fea450;
  *(_QWORD*)(v71 + 8) = 0;
  *(_QWORD*)(v71 + 152) = v72;
  if ((unsigned __int64)v8 >= v9) {
    v85 = (char*)v8 - v7;
    v86 = ((__int64)v8 - v7) >> 3;
    v87 = v86 + 1;
    if ((unsigned __int64)(v86 + 1) >> 61 != 0) {
      goto LABEL_420;
    }
    if ((__int64)(v9 - v7) >> 2 > v87) {
      v87 = (__int64)(v9 - v7) >> 2;
    }
    if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
      v88 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v88 = v87;
    }
    if (v88 != 0) {
      if (v88 >> 61 != 0) {
        goto LABEL_419;
      }
      v89 = v71;
      v90 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v88, 16, 0);
      v71 = v89;
    }
    else {
      v90 = 0;
    }
    v9 = v90 + 8 * v88;
    v97 = (unsigned __int64)v8 - v7;
    v98 = (__int64)&v85[v90 + -8 * v86];
    *(_QWORD*)&v85[v90] = v71;
    v8 = (__int64*)&v85[v90 + 8];
    GameRoutine_1a0b950(v98, v7, v97);
    if (v7 != 0) {
      v99 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v99 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v99, v7);
    }
    v7 = v98;
    if ((v47 & 0x20) == 0) {
      goto LABEL_160;
    }
  }
  else {
    *v8++ = v71;
    if ((v47 & 0x20) == 0) {
    LABEL_160:
      v101 = (__int64)v8 - v7;
      if (v101 == 0) {
        goto LABEL_272;
      }
      goto LABEL_161;
    }
  }
LABEL_158:
  v100 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        160, 16, 0);
  *(_QWORD*)(v100 + 80) = 0;
  *(_QWORD*)(v100 + 88) = 0;
  *(_QWORD*)(v100 + 16) = 0;
  *(_QWORD*)(v100 + 24) = 0;
  *(_QWORD*)(v100 + 32) = 0;
  *(_QWORD*)(v100 + 40) = 0;
  *(_QWORD*)(v100 + 48) = 0;
  *(_QWORD*)(v100 + 56) = 0;
  *(_QWORD*)(v100 + 64) = 0;
  *(_QWORD*)(v100 + 72) = 0;
  *(_QWORD*)(v100 + 96) = 0;
  *(_QWORD*)(v100 + 104) = 0;
  *(_QWORD*)(v100 + 112) = 0;
  *(_QWORD*)(v100 + 120) = 0;
  *(_QWORD*)(v100 + 128) = 0;
  *(_QWORD*)(v100 + 136) = 0;
  *(_QWORD*)(v100 + 144) = 0;
  *(_QWORD*)(v100 + 152) = 0;
  *(_BYTE*)(v100 + 17) = 0;
  *(_QWORD*)(v100 + 48) = 0;
  *(_QWORD*)(v100 + 56) = 0;
  *(_WORD*)(v100 + 80) = 257;
  *(_QWORD*)(v100 + 64) = 0;
  *(_QWORD*)(v100 + 72) = 0;
  *(_BYTE*)(v100 + 144) = 0;
  *(_BYTE*)(v100 + 82) = 1;
  *(_QWORD*)v100 = game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr;
  *(_QWORD*)(v100 + 8) = 0;
  if ((unsigned __int64)v8 < v9) {
    *v8++ = v100;
    goto LABEL_160;
  }
  v146 = (char*)v8 - v7;
  v147 = ((__int64)v8 - v7) >> 3;
  v148 = v147 + 1;
  if ((unsigned __int64)(v147 + 1) >> 61 != 0) {
  LABEL_420:
    GameRoutine_e952b0();
  }
  if ((__int64)(v9 - v7) >> 2 > v148) {
    v148 = (__int64)(v9 - v7) >> 2;
  }
  if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
    v148 = 0x1FFFFFFFFFFFFFFFLL;
  }
  if (v148 != 0) {
    if (v148 >> 61 != 0) {
      goto LABEL_419;
    }
    v149 = v100;
    v148 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v148, 16, 0);
    v100 = v149;
  }
  v150 = (unsigned __int64)v8 - v7;
  v151 = (__int64)&v146[v148 + -8 * v147];
  *(_QWORD*)&v146[v148] = v100;
  v152 = (__int64)&v146[v148 + 8];
  GameRoutine_1a0b950(v151, v7, v150);
  if (v7 != 0) {
    v153 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v153 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v153,
                                  v7);
  }
  v7 = v151;
  v101 = v152 - v151;
  if (v101 == 0) {
    goto LABEL_272;
  }
LABEL_161:
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    Time_e1e170(*(_QWORD*)GameData_212ebf8[0]);
  }
  v102 = *(_QWORD*)(v1 + 272);
  if (v102 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v102 + 48LL))(v102);
  }
  v103 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1344, 16, 0);
  GmapTalkCommandMenu_e94ee0(&v228_.v228, (__int64*)(v1 + 208));
  GmapTalkCommandMenu_e94ee0(&v241_.v241, (__int64*)&v228_.v228);
  GmapTalkCommandMenu_e94ee0((_QWORD*)(v103 + 1136), (__int64*)&v241_.v241);
  if (v249_.v250 == v249_.v249) {
    v104 = 32;
    goto LABEL_169;
  }
  if (v249_.v250 != nullptr) {
    v104 = 40;
  LABEL_169:
    (*(void (**)(__int64))(*(_QWORD*)v249_.v250 + v104))((__int64)v249_.v250);
  }
  v105 = v246_.v247;
  if (v246_.v247 != 0) {
    v106 = v246_.v248;
    if (v246_.v247 == v246_.v248) {
      goto LABEL_181;
    }
    v107 = v246_.v248;
    do {
      v108 = *(_BYTE*)(v107 - 24);
      v107 -= 24;
      if ((v108 & 1) != 0) {
        v109 = *(_QWORD*)(v106 - 8);
        if (v109 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v110 = 128;
          }
          else {
            v110 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v110, v109);
        }
      }
      v106 = v107;
    } while (v107 != v105);
    v246_.v248 = v105;
    v105 = v246_.v247;
    if (v246_.v247 != 0) {
    LABEL_181:
      v111 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v111 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v111, v105);
    }
  }
  v239_.v239 = (__int64*)v246_.v246;
  util_cb2640(&v239_.v239);
  if (v244_.v245 == v244_.v244) {
    v112 = 32;
  }
  else {
    if (v244_.v245 == nullptr) {
      goto LABEL_189;
    }
    v112 = 40;
  }
  (*(void (**)(__int64))(*v244_.v245 + v112))((__int64)v244_.v245);
LABEL_189:
  if (v241_.v242 != nullptr) {
    v241_.v243 = (__int64)v241_.v242;
    v113 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v113 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v113,
                                  (__int64)v241_.v242);
  }
  v239_.v239 = nullptr;
  v239_.v240 = 0;
  BasicMenu_16dcd30(v103, (__int64)"SubMenu", &v239_.v239, 0);
  v114 = GameData_212d6a8;
  v115 = v239_.v240;
  *(_QWORD*)v103 = GameData_212d6a8 + 2;
  *(_QWORD*)(v103 + 176) = v114 + 143;
  *(_QWORD*)(v103 + 1056) = v114 + 169;
  if (v115 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v115 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v115 + 16LL))(v115);
    std___1___shared_weak_count___release_weak(v115);
  }
  *(_DWORD*)(v103 + 1072) = 0;
  *(_QWORD*)(v103 + 1120) = 0;
  *(_QWORD*)(v103 + 1064) = v225;
  *(_QWORD*)(v103 + 1076) = 0;
  *(_QWORD*)v103 = game_menu_anonymous_GmapTalkCommandMenu_vtable;
  *(_QWORD*)(v103 + 176) = game_menu_MenuInput_InputUnknown00_ptr_1feadb0;
  *(_QWORD*)(v103 + 1056) = GameData_1feae80;
  *(_QWORD*)(v103 + 1328) = GmapTalkCommandMenu_Destructor_e966b0_ptr;
  ProcInst_657850(v103, (__int64)GameData_212c730,
                  (__int64)"GmapTalkCommandMenu", 1, a1);
  if (v236_.v237 == &v236_.v236) {
    v116 = 32;
    goto LABEL_200;
  }
  if (v236_.v237 != nullptr) {
    v116 = 40;
  LABEL_200:
    (*(void (**)(__int64))(*v236_.v237 + v116))((__int64)v236_.v237);
  }
  v117 = v233_.v234;
  if (v233_.v234 != 0) {
    v118 = v233_.v235;
    if (v233_.v234 == v233_.v235) {
      goto LABEL_212;
    }
    v119 = v233_.v235;
    do {
      v120 = *(_BYTE*)(v119 - 24);
      v119 -= 24;
      if ((v120 & 1) != 0) {
        v121 = *(_QWORD*)(v118 - 8);
        if (v121 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v122 = 128;
          }
          else {
            v122 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v122, v121);
        }
      }
      v118 = v119;
    } while (v119 != v117);
    v233_.v235 = v117;
    v117 = v233_.v234;
    if (v233_.v234 != 0) {
    LABEL_212:
      v123 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v123 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v123, v117);
    }
  }
  v241_.v241 = (__int64 (**)(void))&v233_.v233;
  util_cb2640((__int64**)&v241_.v241);
  if (v231_.v232 == &v231_.v231) {
    v124 = 32;
  }
  else {
    if (v231_.v232 == nullptr) {
      goto LABEL_220;
    }
    v124 = 40;
  }
  (*(void (**)(__int64))(*v231_.v232 + v124))((__int64)v231_.v232);
LABEL_220:
  v125 = v101 >> 3;
  if (v228_.v229 != 0) {
    v228_.v230 = v228_.v229;
    v126 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v126 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v126,
                                  v228_.v229);
  }
  v127 = 0;
  v238 = v103;
  v128 = (__int64*)v7;
  do {
    BasicMenuCursor_16e0c00((_QWORD*)v103, *v128);
    *(_BYTE*)(*v128 + 144) = *(_BYTE*)(v1 + 384);
    v129 =
        (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)*v128 + 24LL))(*v128);
    v130 = GameRoutine_1a09c70_alt1(v129);
    v131 = (unsigned __int8)GameData_221b408 >> 1;
    if ((GameData_221b408 & 1) != 0) {
      v131 = GameData_221b410;
    }
    if (v130 == v131) {
      v132 = v130;
      if (v130 == -1) {
        goto LABEL_418;
      }
      if ((GameData_221b408 & 1) != 0) {
        v133 = (char*)GameData_221b418;
      }
      else {
        v133 = (char*)&GameData_221b408 + 1;
      }
      if (GameRoutine_1a09cf0((__int64)v133, (__int64)v129, v132) == 0) {
        v127 = *v128;
      }
    }
    --v125;
    ++v128;
  } while (v125 != 0);
  if (v127 != 0) {
    v134 = *(_QWORD*)(v103 + 336);
    if (v134 != v127) {
      if (v134 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v134 + 168LL))(v134);
      }
      *(_QWORD*)(v103 + 336) = v127;
      BasicMenu_16dea40(v103, 0, 1u, 0);
      v135 = *(_QWORD*)(v103 + 336);
      if (v135 == 0) {
        v136 = 4;
        goto LABEL_275;
      }
      (*(void (**)(__int64))(*(_QWORD*)v135 + 160LL))(v135);
      v134 = *(_QWORD*)(v103 + 336);
    }
    v136 = 4;
    if (v134 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v134 + 120LL))(v134) & 1) != 0) {
        v136 = 4;
      }
      else {
        v136 = 0;
      }
    }
  LABEL_275:
    *(_DWORD*)(v103 + 356) = *(_DWORD*)(v103 + 356) & 0xFFFFFFFB | v136;
    if (v7 == 0) {
      return;
    }
    goto LABEL_414;
  }
  v138 = *(_QWORD*)(v103 + 232);
  v137 = *(_QWORD*)(v103 + 240);
  v139 = &v241_.v241;
  v241_.v241 = GameData_1feaf90;
  v241_.v242 = &v238;
  v244_.v244[0] = &v241_.v241;
  if (v137 == v138) {
    goto LABEL_270;
  }
  v140 = 0;
  v141 = GameData_212e008[0];
  v142 = GameData_212d638[0];
  do {
    v143 = *(_QWORD*)(v138 + 8 * v140);
    if (v143 != 0) {
      v144 = (__int64*)__dynamic_cast(v143, v141, v142, 0);
      if (v144 == nullptr) {
        goto LABEL_248;
      }
      v239_.v239 = v144;
      if (v244_.v244[0] == 0) {
        GameRoutine_60a310();
      }
      if (((*(__int64 (**)(_QWORD, __int64**))(*(_QWORD*)v244_.v244[0] + 48LL))(
               v244_.v244[0], &v239_.v239) &
           1) != 0) {
        break;
      }
      v138 = *(_QWORD*)(v103 + 232);
      v137 = *(_QWORD*)(v103 + 240);
    }
  LABEL_248:
    ++v140;
  } while (v140 < (v137 - v138) >> 3);
  v139 = (__int64 (***)(void))v244_.v244[0];
  if ((__int64 (***)(void))v244_.v244[0] != &v241_.v241) {
    if (v244_.v244[0] != 0) {
      v145 = 5;
      goto LABEL_271;
    }
    goto LABEL_272;
  }
LABEL_270:
  v145 = 4;
LABEL_271:
  ((__int64 (*)(__int64))(*v139)[v145])((__int64)v139);
LABEL_272:
  if (v7 != 0) {
    goto LABEL_414;
  }
}

void llvm_libcxx_21_libcxx_include___functional_1003ce0(double a1, double a2,
                                                        double a3, double a4,
                                                        double a5, double a6,
                                                        __int64 a7, __int64 a8)
{

#pragma clang fp contract(off)
  __int64 v8;
  __int64 i;
  __int64 v11;
  char v12;
  char v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  char v17;
  char v18;
  char v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  char v23;
  char v24;
  char v25;
  _QWORD* v26;
  _QWORD* v27;
  char v28;
  _QWORD* v29;
  char v30;
  char v31;
  _QWORD* v32;
  _QWORD* v33;
  char v34;
  _QWORD* v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  __int128 v44;
  float v45;
  float v46;
  __int128 v47;
  __int128 v48;
  __int128 v49;
  float v50;
  float v51;
  __int128 v52;
  float v53;
  struct {
    char v54;
    char v55;
    __int16 v56;
    _WORD v57[2];
  } v54_;

  v8 = a8 + 76;
  for (i = 0; i != 16; i += 4) {
    v11 = *(int*)((char*)&GameData_1a83060 + i);
    if ((*(_BYTE*)(v8 + v11) & 1) != 0) {
      continue;
    }
    if ((int)v11 > 4) {
      if ((_DWORD)v11 == 5) {
        v30 = *(_BYTE*)(a8 + 8);
        v31 = *(_BYTE*)(a8 + 9);
        v32 = *(_QWORD**)a8;
        HIBYTE(v54_.v57[1]) = 0;
        LOBYTE(v54_.v57[0]) = v30;
        *(_WORD*)((char*)v54_.v57 + 1) = (unsigned __int8)(v31 - 1);
        v33 = game_10027c0(v32, (char*)v54_.v57);
        if (v33 != nullptr && (*((_BYTE*)v33 + 79) & 1) != 0) {
        LABEL_2:
          *(_BYTE*)(v8 + v11) = 1;
          continue;
        }
        v22 = *(_QWORD**)a8;
        v23 = *(_BYTE*)(a8 + 8) - 1;
      }
      else {
        if ((_DWORD)v11 != 7) {
          continue;
        }
        v18 = *(_BYTE*)(a8 + 8);
        v19 = *(_BYTE*)(a8 + 9);
        v20 = *(_QWORD**)a8;
        HIBYTE(v54_.v57[1]) = 0;
        LOBYTE(v54_.v57[0]) = v18;
        *(_WORD*)((char*)v54_.v57 + 1) = (unsigned __int8)(v19 - 1);
        v21 = game_10027c0(v20, (char*)v54_.v57);
        if (v21 != nullptr && (v21[10] & 1) != 0) {
          goto LABEL_2;
        }
        v22 = *(_QWORD**)a8;
        v23 = *(_BYTE*)(a8 + 8) + 1;
      }
      v54_.v54 = v23;
      v34 = *(_BYTE*)(a8 + 9);
      v54_.v56 = 0;
      v54_.v55 = v34;
      v35 = game_10027c0(v22, &v54_.v54);
      if (v35 != nullptr && (*((_BYTE*)v35 + 82) & 1) != 0) {
        goto LABEL_2;
      }
    }
    else {
      if ((_DWORD)v11 != 0) {
        if ((_DWORD)v11 != 2) {
          continue;
        }
        v12 = *(_BYTE*)(a8 + 8);
        v13 = *(_BYTE*)(a8 + 9);
        v14 = *(_QWORD**)a8;
        HIBYTE(v54_.v57[1]) = 0;
        LOBYTE(v54_.v57[0]) = v12;
        *(_WORD*)((char*)v54_.v57 + 1) = (unsigned __int8)(v13 + 1);
        v15 = game_10027c0(v14, (char*)v54_.v57);
        if (v15 != nullptr && (v15[10] & 1) != 0) {
          goto LABEL_2;
        }
        v16 = *(_QWORD**)a8;
        v17 = *(_BYTE*)(a8 + 8) + 1;
      }
      else {
        v24 = *(_BYTE*)(a8 + 8);
        v25 = *(_BYTE*)(a8 + 9);
        v26 = *(_QWORD**)a8;
        HIBYTE(v54_.v57[1]) = 0;
        LOBYTE(v54_.v57[0]) = v24;
        *(_WORD*)((char*)v54_.v57 + 1) = (unsigned __int8)(v25 + 1);
        v27 = game_10027c0(v26, (char*)v54_.v57);
        if (v27 != nullptr && (*((_BYTE*)v27 + 79) & 1) != 0) {
          goto LABEL_2;
        }
        v16 = *(_QWORD**)a8;
        v17 = *(_BYTE*)(a8 + 8) - 1;
      }
      v54_.v54 = v17;
      v28 = *(_BYTE*)(a8 + 9);
      v54_.v56 = 0;
      v54_.v55 = v28;
      v29 = game_10027c0(v16, &v54_.v54);
      if (v29 != nullptr && (*((_BYTE*)v29 + 77) & 1) != 0) {
        goto LABEL_2;
      }
    }
  }
  LANES128(v36).n128_f32[0] = (float)*(char*)(a8 + 8) * 0x1.4000000000000p+2f;
  *(float*)&a6 = (float)*(char*)(a8 + 9) * 0x1.4000000000000p+2f;
  LANES128(v37).n128_f32[0] = LANES128(v36).n128_f32[0];
  LANES128(v37).n128_u32[1] = *(_DWORD*)(a8 + 56);
  LANES128(v37).n128_f64[1] = a6;
  v38 = vaddq_f32(v37, COERCE_AS(float32x4_t, 0));
  LANES128(v37).n128_f32[0] = LANES128(v36).n128_f32[0];
  LANES128(v37).n128_u32[1] = *(_DWORD*)(a8 + 60);
  *(_QWORD*)(a8 + 96) = LANES128(v38).n128_u64[0];
  LANES128(v37).n128_f64[1] = a6;
  v39 = vaddq_f32(v37, COERCE_AS(float32x4_t, GameData_1a83480));
  LANES128(v37).n128_u32[0] = LANES128(v36).n128_u32[0];
  LANES128(v37).n128_u32[1] = *(_DWORD*)(a8 + 64);
  *(_QWORD*)(a8 + 112) = LANES128(v39).n128_u64[0];
  LANES128(v37).n128_f64[1] = a6;
  v40 = vaddq_f32(v37, COERCE_AS(float32x4_t, GameData_1a83050));
  LANES128(v41).n128_u32[0] = LANES128(v36).n128_u32[0];
  LANES128(v41).n128_u32[1] = *(_DWORD*)(a8 + 68);
  *(_QWORD*)(a8 + 128) = LANES128(v40).n128_u64[0];
  LANES128(v36).n128_u32[1] = *(_DWORD*)(a8 + 72);
  LANES128(v41).n128_f64[1] = a6;
  LANES128(v36).n128_f64[1] = a6;
  v42 = vaddq_f32(v41, COERCE_AS(float32x4_t, GameData_1a83590));
  v43 = vaddq_f32(v36, COERCE_AS(float32x4_t, GameData_1a82a60));
  v44 = *(_OWORD*)(a8 + 96);
  v49 = *(_OWORD*)(a8 + 112);
  *(_QWORD*)(a8 + 144) = LANES128(v42).n128_u64[0];
  *(_QWORD*)(a8 + 160) = LANES128(v43).n128_u64[0];
  v45 = *((float*)&v44 + 1);
  *((_QWORD*)&v44 + 1) = LANES128(v38).n128_u32[2];
  v46 = *((float*)&v49 + 1);
  *((_QWORD*)&v49 + 1) = LANES128(v39).n128_u32[2];
  *(_OWORD*)(a8 + 96) = v44;
  *(_OWORD*)(a8 + 112) = v49;
  v47 = *(_OWORD*)(a8 + 128);
  v48 = *(_OWORD*)(a8 + 144);
  LODWORD(v49) =
      DWORDn(*(_QWORD*)(a8 + 128), sizeof(*(_QWORD*)(a8 + 128)) / 4 - 1);
  *((_QWORD*)&v47 + 1) = LANES128(v40).n128_u32[2];
  {
    __typeof__(v50) z_ = (__typeof__(v50)){0};
    LODWORD(z_) =
        DWORDn(*(_QWORD*)(a8 + 144), sizeof(*(_QWORD*)(a8 + 144)) / 4 - 1);
    v50 = z_;
  }
  *((_QWORD*)&v48 + 1) = LANES128(v42).n128_u32[2];
  *(_OWORD*)(a8 + 128) = v47;
  *(_OWORD*)(a8 + 144) = v48;
  v52 = *(_OWORD*)(a8 + 160);
  {
    __typeof__(v51) z_ = (__typeof__(v51)){0};
    LODWORD(z_) =
        DWORDn(*(_QWORD*)(a8 + 160), sizeof(*(_QWORD*)(a8 + 160)) / 4 - 1);
    v51 = z_;
  }
  DWORD2(v52) = LANES128(v43).n128_u32[2];
  v53 = -0x1.9000000000000p+6f;
  if (v45 >= -0x1.9000000000000p+6f) {
    v53 = v45;
  }
  DWORDn(v52, sizeof(v52) / 4 - 1) = 0;
  if (*((float*)&v49 + 1) < v53) {
    v46 = v53;
  }
  *(_OWORD*)(a8 + 160) = v52;
  if (*(float*)&v49 >= v46) {
    v46 = *(float*)&v49;
  }
  if (v50 < v46) {
    v50 = v46;
  }
  if (v51 >= v50) {
    v50 = v51;
  }
  *(float*)(a8 + 32) = v50;
}

__int64 llvm_libcxx_21_libcxx_include___functional_11f1320(__int64 result,
                                                           int* a2, int* a3)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  char v13;
  char v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  long double v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int8* v31;
  unsigned int v32;
  bool v33;
  int v34;
  int v35;
  __int64 v36;
  long double v38;
  __int64* v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  unsigned int v51;
  int v52;
  struct {
    __int64 v53[2];
    int v54;
    int v55;
    int v56;
    int v57;
    int v58;
    char gap76_[4];
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    bool v66;
  } v53_;
  struct {
    __int64 v67;
    int v68;
    int v69;
    int v70;
    char gap164_[4];
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    int v75;
    int v76;
    __int64 v77;
    int v78;
  } v67_;
  // One simulator object the callees fill through its first field.
  struct {
    _QWORD v79[2];
    _BYTE v80[2224];
    _BYTE v81[2232];
    _QWORD v82[2];
    _QWORD v83[95];
    _QWORD v84[95];
    _QWORD v85[95];
    struct {
      _QWORD v86[1126];
      __int64 v87;
      unsigned int v88;
      char gap16012_[484];
      int v89;
      char gap16500_[4];
      float v90;
      char gap16508_[68];
      int v91;
      char gap16580_[164];
      int v92;
    } v86_;
  } v79_;
  __int64 v93;
  int v94[4];
  struct {
    unsigned __int64 v95;
    __int64 v96;
    unsigned __int64 v97;
    __int64 v98;
  } v95_;

  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *a2;
  v4 = *a3;
  v5 = *(_QWORD*)(result + 8);
  v6 = result;
  WORD2(v95_.v98) = 0;
  BYTE6(v95_.v98) = 0;
  v7 = *GameData_212cfd0[0];
  v95_.v95 = 0xFFFFFFFF00000000LL;
  v95_.v96 = 0;
  v95_.v97 = 0xFFFFFFFF00000000LL;
  LODWORD(v95_.v98) = -1;
  v8 = *(_QWORD*)(v5 + 8);
  v10 = *(_DWORD*)(v7 + 12);
  v9 = *(_DWORD*)(v7 + 16);
  v11 = *(_DWORD*)(v8 + 592);
  if (v11 < 2) {
    v13 = *(_DWORD*)(v7 + 16);
    v14 = *(_DWORD*)(v7 + 12);
  }
  else {
    v12 = 10000;
    v13 = 0;
    v14 = 0;
    v15 = *(_DWORD*)(v7 + 16);
    do {
      v16 = v4 - v15;
      v17 = v3 - v10;
      LODWORD(result) = *(_DWORD*)(v7 + 12);
      if (v4 - v15 < 0) {
        v16 = v15 - v4;
      }
      do {
        if (v17 >= 0) {
          v18 = v17;
        }
        else {
          v18 = -v17;
        }
        --v17;
        v19 = v18 + v16;
        if (v19 < v12) {
          v13 = v15;
          v14 = result;
          v12 = v19;
        }
        result = (unsigned int)(result + 1);
      } while ((int)result < v11 + v10);
      ++v15;
    } while (v15 < v11 + v9);
  }
  v20 = v3 - v14;
  v21 = v4 - v13;
  if (v20 < 0) {
    v20 = -v20;
  }
  if (v21 < 0) {
    v21 = -v21;
  }
  v22 = v20 + v21;
  if (v11 < 1) {
  LABEL_22:
    v93 = 0;
    *(_QWORD*)v94 = v8;
    v48 = v9;
    v50 = v3;
    v94[3] = 0;
    GameRoutine_6c2b50((__int64)v79_.v80),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_6c2b50((__int64)v79_.v81),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_790080((__int64)v79_.v82),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v51 = 0;
    v26 = 828;
    v27 = 0;
    v79_.v86_.v91 = 0;
    v79_.v79[0] = GameData_21308b8 + 16;
    v28 = GameData_212c878[0];
    v49 = -1;
    v52 = -1;
    do {
      v29 = *(_QWORD*)(v5 + 8);
      v30 = *v28;
      v94[2] = v27;
      v31 = *(unsigned __int8**)(*(_QWORD*)(v30 + 64) +
                                 8LL * *(unsigned __int16*)(v29 + v26));
      v32 = v31[72];
      v33 = v32 <= 7 && v31[73] == 1;
      if (v33 &&
          (v32 - 5 > 1 ||
           (*(_DWORD*)(v29 + v26 + 4) & 0xF) * (unsigned int)v31[87] - 1 >=
               *(unsigned __int8*)(v29 + v26 + 2)) &&
          (*(_BYTE*)(v29 + v26 + 3) & 0x20) == 0 &&
          AISupportSkillScope_11ff100(v94, (int*)&v93) &&
          SDWORDn(v93, sizeof(v93) / 4 - 1) >= v22 &&
          ((unsigned int)v93 & (1 << v22)) != 0) {
        v34 = *(_DWORD*)(v7 + 12);
        v35 = *(_DWORD*)(v7 + 16);
        v67_.v77 = 0;
        v67_.v70 = v27;
        v67_.v78 = v22;
        v67_.v73 = 0;
        v67_.v74 = 0;
        v67_.v71 = 0;
        v67_.v72 = 0;
        v36 = *(_QWORD*)(v5 + 8);
        v67_.v68 = v34;
        v67_.v69 = v35;
        v67_.v67 = v36;
        v67_.v73 = **(_QWORD**)(v6 + 24);
        v67_.v75 = v50;
        v67_.v76 = v4;
        game_128df90((__int64)v79_.v79, &v67_.v67),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
        AiInterferenceSimulator_128e230((__int64)v79_.v79, (__int64)&v67_.v67),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameRoutine_11fbb20((__int64)v79_.v79),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
        AIBattleSimulator_11fbe50((__int64)v79_.v79, 0),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
        AIBattleSimulator_11fbe50((__int64)v79_.v79, 1),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
        AiBattleSimulator_11fc090((__int64)v79_.v79, 0),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
        *(float*)&v38 = AiBattleSimulator_11fc090((__int64)v79_.v79, 1u),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
        AIBattleSimulator_11fc220((__int64)v79_.v79, v38),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (**(_BYTE**)(v6 + 32) != 1 ||
            v79_.v86_.v89 >= 1 &&
                (*(float*)& v25 = v79_.v86_.v90, v79_.v86_.v90 > 0x0.0p+0f)) {
          if (v52 < 0 || v51 < v79_.v86_.v88 ||
              v51 <= v79_.v86_.v88 && v27 < v49) {
            v95_.v95 = __PAIR64__(v27, v79_.v86_.v88);
            LODWORD(v95_.v97) = 0;
            DWORDn(v95_.v97, sizeof(v95_.v97) / 4 - 1) = v10;
            {
              __typeof__(v25) z_ = (__typeof__(v25)){0};
              LODWORD(z_) = v79_.v86_.v92;
              v25 = z_;
            }
            WORD2(v95_.v98) = 0;
            BYTE6(v95_.v98) = 0;
            v51 = v79_.v86_.v88;
            v52 = v10;
            LODWORD(v95_.v98) = v48;
            v49 = v27;
            LODWORD(v95_.v96) = v79_.v86_.v92;
          }
        }
      }
      ++v27;
      v26 += 8;
    } while (v26 != 1068);
    if ((v52 & 0x80000000) == 0) {
      v53_.v58 = 0;
      v53_.v63 = 0;
      v53_.v64 = 0;
      v53_.v65 = 0;
      v53_.v56 = -1;
      v53_.v57 = 0;
      v53_.v59 = 0;
      v53_.v60 = -1;
      v53_.v61 = -1;
      v53_.v62 = 0;
      v39 = *(__int64**)(v6 + 40);
      v53_.v66 = *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) +
                           2240LL) == 5;
      v40 = *(__int64**)(v6 + 24);
      v53_.v53[0] = *(_QWORD*)(v5 + 8);
      v41 = *v40;
      v53_.v54 = v50;
      v53_.v55 = v4;
      v53_.v53[1] = v41;
      if ((AISupportSkillScope_11ff9b0(v53_.v53[0], v39, (__int64)v53_.v53,
                                       (__int64)&v95_.v95) &
           1) != 0) {
        v42 = *(_QWORD*)(v6 + 40);
        v43 = **(_QWORD**)(v6 + 24);
        *(_DWORD*)(v42 + 8) = v50;
        *(_DWORD*)(v42 + 12) = v4;
        *(_QWORD*)v42 = v43;
        v44 = *(_QWORD*)(v6 + 40);
        v46 = v95_.v97;
        v45 = v95_.v98;
        v47 = v95_.v96;
        *(_QWORD*)(v44 + 20) = v95_.v95;
        *(_QWORD*)(v44 + 28) = v47;
        *(_QWORD*)(v44 + 36) = v46;
        *(_QWORD*)(v44 + 44) = v45;
      }
    }
    v79_.v79[0] = &GameData_2017d28;
    v79_.v82[0] = GameData_212d238[0] + 16;
    v79_.v86_.v86[1125] = GameData_212da50[0] + 2;
    if (v79_.v86_.v87 != 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v79_.v86_.v87 + 8LL))(
          v79_.v86_.v87, v25),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v79_.v86_.v87 = 0;
    }
    v79_.v82[1] = GameData_212d258[0] + 2;
    BattleSide_Destructor(v79_.v86_.v86),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    BattleSide_Destructor(v79_.v85),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    BattleSide_Destructor(v79_.v84),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    BattleSide_Destructor(v79_.v83),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    game_Unit_Destroy_Unit((__int64)v79_.v81),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return game_Unit_Destroy_Unit((__int64)v79_.v80);
  }
  else {
    v23 = v22 + v11;
    v24 = v20 + v21;
    while (((**(_DWORD**)(v6 + 16) >> v24) & 1) == 0) {
      if (++v24 >= v23) {
        goto LABEL_22;
      }
    }
  }
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_120b090(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  unsigned int v8;
  unsigned int v9;
  __int64 result;
  __int64 v11;
  int v12;
  __int64* v13;
  __int16 v14;
  unsigned int v15;
  unsigned int v16;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 440);
  if (v3 != 0 && *(_BYTE*)(v3 + 16) == 0) {
    v4 = *(__int16*)(v2 + 492);
    LOBYTE(v16) = 0;
    v5 = *(unsigned __int8*)(*GameData_212ce90[0] + 25);
    if (100 * v4 / (int)game_Unit_GetParam(v2) >=
        (signed __int32)*(_DWORD*)&GameData_1bb7384[4 * v5]) {
      return 0;
    }
    v2 = *(_QWORD*)(a1 + 8);
  }
  else if ((*(_BYTE*)(v2 + 1978) & 1) == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                  8LL * *(int*)((char*)GameData_2130920[0] +
                                (unsigned __int64)((_UNKNOWN*)0xC0LL)));
  if (v6 != 0) {
    LODWORD(v6) = *(_WORD*)(v6 + 16) & 0xFFF;
  }
  v16 = v6;
  if (game_HasSkill((_QWORD*)(v2 + 1744), &v16)) {
    return 0;
  }
  v7 = *(char**)(a1 + 8);
  if ((v7[1976] & 4) == 0 ||
      (v8 = GameRoutine_11f3dc0(*(unsigned __int16**)(a1 + 8)),
       v7 = *(char**)(a1 + 8), (v8 & 0x80000000) != 0)) {
  LABEL_15:
    if ((v7[1976] & 8) != 0) {
      v16 = 2;
      AIDeploy_1274f90(*(_QWORD**)GameData_21306a0[0], (__int64)v7, 100, &v16);
      if (llvm_libcxx_21_libcxx_include___functional_120b2e0(*(_QWORD*)(a1 + 8),
                                                             &v16, &v15)) {
        return AIThink_1200be0(a1, v16, v15, 1, 0);
      }
    }
    return 0;
  }
  v9 = v8;
  result = AIThink_1200be0(a1, v7[584], v7[585], 4, 0);
  if ((_DWORD)result != 1) {
    if ((_DWORD)result != 0) {
      return result;
    }
    v7 = *(char**)(a1 + 8);
    goto LABEL_15;
  }
  v11 = *GameData_212cfd0[0];
  *(_BYTE*)(v11 + 20) = 11;
  v12 = *(unsigned __int8*)(v11 + 8);
  *(_DWORD*)(v11 + 40) = v9;
  if (v12 != 0 && game_UnitPool_Get((_BYTE*)(v11 + 8)) != nullptr) {
    v13 = &game_UnitPool_Get((_BYTE*)(v11 + 8))[v9];
    v14 = *((_WORD*)v13 + 414);
    *(_BYTE*)(v11 + 46) = *((_BYTE*)v13 + 830);
    *(_WORD*)(v11 + 44) = v14;
    *(_BYTE*)(v11 + 47) = *((_BYTE*)v13 + 831);
    *(_DWORD*)(v11 + 48) = *((_DWORD*)v13 + 208);
  }
  GameRoutine_11f2730(
      a1, *(_QWORD*)(a1 + 8),
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL *
                                         *(unsigned __int16*)(*(_QWORD*)(a1 +
                                                                         8) +
                                                              8LL * v9 + 828)) +
                          88LL) >>
          ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 8LL * v9 + 831) & 8) != 0));
  return 1;
}

bool llvm_libcxx_21_libcxx_include___functional_120b2e0(__int64 a1, _DWORD* a2,
                                                        _DWORD* a3)
{
  bool v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  int v7;
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 (***v15)();
  __int64 (***v16)();
  char* v17;
  char* v18;
  int v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 (**v25)();
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 (***v30)();
  __int64 (***v31)();
  char* v32;
  char* v33;
  int v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 (**v40)();
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  __int64 (***v45)();
  __int64 (***v46)();
  char* v47;
  char* v48;
  int v49;
  int v50;
  unsigned int v51;
  unsigned __int8 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v57;
  __int64 (**v58)();
  __int64 v59;
  int v60;
  __int64 v61;
  int v62;
  __int64 (***v63)();
  __int64 (***v64)();
  char* v65;
  char* v66;
  int v67;
  int v68;
  unsigned int v69;
  int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  int v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 (**v81)();
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned int v86;
  unsigned int v87;
  __int64 (***v88)();
  char* v89;
  char* v90;
  unsigned int v91;
  int v92;
  unsigned int v93;
  int v94;
  unsigned int v95;
  unsigned int v96;
  _BYTE v97[4];
  struct {
    __int16 v98;
    char v99;
  } v98_;
  int v100;
  _DWORD* v101;
  _DWORD* v102;
  __int64 v103;
  unsigned int v104;
  unsigned int v105;

  v102 = a2;
  v103 = a1;
  v101 = a3;
  v100 = 0;
  v98_.v98 = 0;
  v98_.v99 = 0;
  *a2 = -1;
  *a3 = -1;
  v3 = *(_BYTE*)(*GameData_212ce90[0] +
                 *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1 &&
       (*(_QWORD*)GameData_212d290 == 0 ||
        (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) == 0);
  v97[0] = v3;
  v4 = *(_QWORD*)(a1 + 440);
  v5 = (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v4 != 0) {
    v6 = (__int64)&v5[3 * *(unsigned __int8*)(v4 + 16)];
  }
  else {
    v6 = *(_QWORD*)(GameData_21ca310 + 56) + 556216LL;
  }
  v7 = *(unsigned __int8*)(v6 + 16);
  if (v7 == 3 || v7 == 0) {
    v9 = *v5;
    if (*v5 != 0) {
      do {
        if ((v103 == 0 || *(unsigned __int8*)(v9 + 2088) !=
                              *(unsigned __int8*)(v103 + 2088)) &&
            (game_11f4940(v9, 0, 1) & 1) != 0) {
          v11 = *(_QWORD*)(v9 + 440);
          if (v11 != 0) {
            v12 = *(unsigned __int8*)(v11 + 16);
          }
          else {
            v12 = 9;
          }
          v13 = *(_QWORD*)(v103 + 440);
          if (v13 != 0) {
            v14 = *(unsigned __int8*)(v13 + 16);
          }
          else {
            v14 = 9;
          }
          LOBYTE(v96) = v12 == v14;
          v15 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
          v15[6] = (__int64 (**)(void))&v100;
          v15[7] = (__int64 (**)(void))&v101;
          v16 = v15;
          *v15 = GameData_2019448;
          v15[1] = (__int64 (**)(void))&v103;
          v15[2] = (__int64 (**)(void))&v96;
          v15[3] = (__int64 (**)(void))&v102;
          v15[4] = (__int64 (**)(void))v97;
          v15[5] = (__int64 (**)(void))&v98_.v98;
          v17 = *(char**)(v9 + 600);
          v18 = *(char**)(v9 + 608);
          if (v17 == v18) {
            v10 = GameData_2019448;
          }
          else {
            v19 = *(char*)(v9 + 584);
            v20 = *(char*)(v9 + 585);
            do {
              v21 = *v17 + v19;
              v104 = v17[1] + v20;
              v105 = v21;
              ((void (*)(__int64 (***)(void), unsigned int*, unsigned int*))(
                  *v16)[6])(v16, &v105, &v104);
              v17 += 4;
            } while (v17 != v18);
            v10 = *v16;
          }
          ((void (*)(__int64 (***)(void)))v10[5])(v16);
        }
        v9 = *(_QWORD*)(v9 + 432);
      } while (v9 != 0);
      a1 = v103;
      v4 = *(_QWORD*)(v103 + 440);
    }
  }
  v22 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v4 != 0) {
    v23 = v22 + 24LL * *(unsigned __int8*)(v4 + 16) + 556000;
  }
  else {
    v23 = v22 + 556216;
  }
  if (*(_BYTE*)(v23 + 16) == 1) {
    v24 = *(_QWORD*)(v22 + 556024);
    if (v24 != 0) {
      do {
        if ((v103 == 0 || *(unsigned __int8*)(v24 + 2088) !=
                              *(unsigned __int8*)(v103 + 2088)) &&
            (game_11f4940(v24, 0, 1) & 1) != 0) {
          v26 = *(_QWORD*)(v24 + 440);
          if (v26 != 0) {
            v27 = *(unsigned __int8*)(v26 + 16);
          }
          else {
            v27 = 9;
          }
          v28 = *(_QWORD*)(v103 + 440);
          if (v28 != 0) {
            v29 = *(unsigned __int8*)(v28 + 16);
          }
          else {
            v29 = 9;
          }
          LOBYTE(v96) = v27 == v29;
          v30 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
          v30[6] = (__int64 (**)(void))&v100;
          v30[7] = (__int64 (**)(void))&v101;
          v31 = v30;
          *v30 = GameData_2019448;
          v30[1] = (__int64 (**)(void))&v103;
          v30[2] = (__int64 (**)(void))&v96;
          v30[3] = (__int64 (**)(void))&v102;
          v30[4] = (__int64 (**)(void))v97;
          v30[5] = (__int64 (**)(void))&v98_.v98;
          v32 = *(char**)(v24 + 600);
          v33 = *(char**)(v24 + 608);
          if (v32 == v33) {
            v25 = GameData_2019448;
          }
          else {
            v34 = *(char*)(v24 + 584);
            v35 = *(char*)(v24 + 585);
            do {
              v36 = *v32 + v34;
              v104 = v32[1] + v35;
              v105 = v36;
              ((void (*)(__int64 (***)(void), unsigned int*, unsigned int*))(
                  *v31)[6])(v31, &v105, &v104);
              v32 += 4;
            } while (v32 != v33);
            v25 = *v31;
          }
          ((void (*)(__int64 (***)(void)))v25[5])(v31);
        }
        v24 = *(_QWORD*)(v24 + 432);
      } while (v24 != 0);
      a1 = v103;
      v4 = *(_QWORD*)(v103 + 440);
    }
  }
  v37 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v4 != 0) {
    v38 = v37 + 24LL * *(unsigned __int8*)(v4 + 16) + 556000;
  }
  else {
    v38 = v37 + 556216;
  }
  if (*(_BYTE*)(v38 + 16) == 2) {
    v39 = *(_QWORD*)(v37 + 556048);
    if (v39 != 0) {
      do {
        if ((v103 == 0 || *(unsigned __int8*)(v39 + 2088) !=
                              *(unsigned __int8*)(v103 + 2088)) &&
            (game_11f4940(v39, 0, 1) & 1) != 0) {
          v41 = *(_QWORD*)(v39 + 440);
          if (v41 != 0) {
            v42 = *(unsigned __int8*)(v41 + 16);
          }
          else {
            v42 = 9;
          }
          v43 = *(_QWORD*)(v103 + 440);
          if (v43 != 0) {
            v44 = *(unsigned __int8*)(v43 + 16);
          }
          else {
            v44 = 9;
          }
          LOBYTE(v96) = v42 == v44;
          v45 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
          v45[6] = (__int64 (**)(void))&v100;
          v45[7] = (__int64 (**)(void))&v101;
          v46 = v45;
          *v45 = GameData_2019448;
          v45[1] = (__int64 (**)(void))&v103;
          v45[2] = (__int64 (**)(void))&v96;
          v45[3] = (__int64 (**)(void))&v102;
          v45[4] = (__int64 (**)(void))v97;
          v45[5] = (__int64 (**)(void))&v98_.v98;
          v47 = *(char**)(v39 + 600);
          v48 = *(char**)(v39 + 608);
          if (v47 == v48) {
            v40 = GameData_2019448;
          }
          else {
            v49 = *(char*)(v39 + 584);
            v50 = *(char*)(v39 + 585);
            do {
              v51 = *v47 + v49;
              v104 = v47[1] + v50;
              v105 = v51;
              ((void (*)(__int64 (***)(void), unsigned int*, unsigned int*))(
                  *v46)[6])(v46, &v105, &v104);
              v47 += 4;
            } while (v47 != v48);
            v40 = *v46;
          }
          ((void (*)(__int64 (***)(void)))v40[5])(v46);
        }
        v39 = *(_QWORD*)(v39 + 432);
      } while (v39 != 0);
      a1 = v103;
      v4 = *(_QWORD*)(v103 + 440);
    }
  }
  if (v4 != 0) {
    v52 = *(_BYTE*)(v4 + 16);
    v53 = *(_QWORD*)(GameData_21ca310 + 56);
    v54 = v53 + 24LL * v52 + 556000;
  }
  else {
    v53 = *(_QWORD*)(GameData_21ca310 + 56);
    v54 = v53 + 556216;
  }
  v55 = *(unsigned __int8*)(v54 + 16);
  if (v55 == 3 || v55 == 0) {
    v57 = *(_QWORD*)(v53 + 556072);
    if (v57 != 0) {
      do {
        if ((v103 == 0 || *(unsigned __int8*)(v57 + 2088) !=
                              *(unsigned __int8*)(v103 + 2088)) &&
            (game_11f4940(v57, 0, 1) & 1) != 0) {
          v59 = *(_QWORD*)(v57 + 440);
          if (v59 != 0) {
            v60 = *(unsigned __int8*)(v59 + 16);
          }
          else {
            v60 = 9;
          }
          v61 = *(_QWORD*)(v103 + 440);
          if (v61 != 0) {
            v62 = *(unsigned __int8*)(v61 + 16);
          }
          else {
            v62 = 9;
          }
          LOBYTE(v96) = v60 == v62;
          v63 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
          v63[6] = (__int64 (**)(void))&v100;
          v63[7] = (__int64 (**)(void))&v101;
          v64 = v63;
          *v63 = GameData_2019448;
          v63[1] = (__int64 (**)(void))&v103;
          v63[2] = (__int64 (**)(void))&v96;
          v63[3] = (__int64 (**)(void))&v102;
          v63[4] = (__int64 (**)(void))v97;
          v63[5] = (__int64 (**)(void))&v98_.v98;
          v65 = *(char**)(v57 + 600);
          v66 = *(char**)(v57 + 608);
          if (v65 == v66) {
            v58 = GameData_2019448;
          }
          else {
            v67 = *(char*)(v57 + 584);
            v68 = *(char*)(v57 + 585);
            do {
              v69 = *v65 + v67;
              v104 = v65[1] + v68;
              v105 = v69;
              ((void (*)(__int64 (***)(void), unsigned int*, unsigned int*))(
                  *v64)[6])(v64, &v105, &v104);
              v65 += 4;
            } while (v65 != v66);
            v58 = *v64;
          }
          ((void (*)(__int64 (***)(void)))v58[5])(v64);
        }
        v57 = *(_QWORD*)(v57 + 432);
      } while (v57 != 0);
      a1 = v103;
    }
  }
  LOBYTE(v105) = 10;
  v70 = game_Unit_GetParam(a1);
  v71 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  v72 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v73 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v74 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  v96 = v72;
  v92 = v74;
  v93 = v71;
  if (v72 <= v74 && v71 <= v73) {
    v77 = v70;
    v78 = GameData_21306a0[0];
    do {
      v80 = v93;
      v95 = v93;
      do {
        LODWORD(v83) = v80 + 32 * v96;
        v84 = *(_QWORD*)(*(_QWORD*)v78 + 8LL);
        if ((unsigned int)v83 >= 0x400) {
          v83 = 0;
        }
        else {
          v83 = (unsigned int)v83;
        }
        v94 =
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v78 + 12880LL) + v83 + 64);
        if ((GameRoutine_747a00(v84, v80, v96, v103, 0) & 1) != 0 &&
            v94 <= v77) {
          v85 = v103;
          v86 = v95;
          v87 = v96;
          v88 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
          *v88 = GameData_20194c8;
          v88[1] = (__int64 (**)(void))&v103;
          v88[2] = (__int64 (**)(void))&v95;
          v88[3] = (__int64 (**)(void))&v96;
          v88[4] = (__int64 (**)(void))&v94;
          v88[5] = (__int64 (**)(void))&v102;
          v88[6] = (__int64 (**)(void))v97;
          v88[7] = (__int64 (**)(void))&v98_.v98;
          v88[8] = (__int64 (**)(void))&v100;
          v88[9] = (__int64 (**)(void))&v101;
          v89 = *(char**)(v85 + 600);
          v90 = *(char**)(v85 + 608);
          if (v89 == v90) {
            v81 = GameData_20194c8;
          }
          else {
            do {
              v91 = v86 + *v89;
              v104 = v87 + v89[1];
              v105 = v91;
              ((void (*)(__int64 (***)(void), unsigned int*, unsigned int*))(
                  *v88)[6])(v88, &v105, &v104);
              v89 += 4;
            } while (v89 != v90);
            v81 = *v88;
          }
          ((void (*)(__int64 (***)(void)))v81[5])(v88);
        }
        v82 = v95;
        v80 = ++v95;
      } while (v82 < (int)v73);
      v79 = v96++;
    } while (v79 < v92);
  }
  return (signed __int32)*v102 >= 0;
}

bool llvm_libcxx_21_libcxx_include___functional_127a1a0(__int64 a1, _DWORD* a2)
{
  __int64* v4;
  _BOOL8 result;
  __int64 v6;
  _DWORD* v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  bool v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v4 = GameData_212c880[0];
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) =
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  result = AIThink_1279680(*(__int64**)(a1 + 8), *(unsigned int**)(a1 + 16));
  if (result) {
    if (*(_QWORD*)(v6 = *(_QWORD*)(a1 + 32)) == 0 ||
        (v7 = *(_DWORD**)(a1 + 16), v8 = *(_DWORD*)(v6 + 16), v9 = v7[2],
         v8 < v9) ||
        (v10 = *(_DWORD*)(v6 + 20)) < 0 ||
        ((v11 = v7[3] | (v7[4] << 16), v8 <= v9)
             ? (v12 = (v10 | (*(_DWORD*)(v6 + 24) << 16)) <= v11)
             : (v12 = true),
         !v12)) {
      *(_QWORD*)v6 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (*a2 & 0xFFF));
      v13 = *(__int64**)(a1 + 16);
      v14 = *(_QWORD*)(a1 + 32);
      v15 = *v13;
      v16 = v13[1];
      *(_DWORD*)(v14 + 24) = *((_DWORD*)v13 + 4);
      *(_QWORD*)(v14 + 8) = v15;
      *(_QWORD*)(v14 + 16) = v16;
    }
  }
  return result;
}

void llvm_libcxx_21_libcxx_include___functional_138f6a0(__int64* result)
{
  float32x4_t* v1;
  unsigned __int64 v2;
  _BYTE* v3;
  const char* v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float32x4_t v19;
  float v20;
  float32x2_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  int8x16_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  int8x16_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  int8x16_t v50;
  __int128 v51;
  int8x16_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  int16x4_t v59;
  int v60;
  unsigned int v61;
  __int128 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  char* v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  char v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char* v75;
  unsigned __int64 v76;
  __int64 v77;
  bool v78;
  bool v79;
  __int64 v80;
  __int64 v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  struct {
    char gap0_[64];
    __int64 v90;
    __int64 v91;
    __int128 v92;
    char* v93;
  } f_;
  float32x4_t v94;

  v1 = (float32x4_t*)result[1];
  v2 = LANES128(v1[6]).n128_u64[1];
  if (v2 != 0 && (v3 = *(_BYTE**)(v2 + 96)) != nullptr && *v3 != 0 &&
      (v4 = *(const char**)(v2 + 104)) != nullptr && *v4 != 0) {
    v5 = *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                 8LL) +
                      64LL);
    v6 = GameRoutine_1a09c70_alt1(v4);
    result = X8CALL_X0(__int64*,
                       wld_map_c21740((void*)(&f_.v90), v5, (__int64)v4, v6));
    if (f_.v90 != 0) {
      v7 = *(__int64**)(f_.v90 + 88);
      v8 = *(__int64**)(f_.v90 + 96);
      if (v7 != v8) {
        v9 = (__int64*)fw_memory_g_heap_manager_ptr;
        v88 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 +
                        4);
        v89 = *((float*)GameData_212c190 + 1);
        v10 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
        v11 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 +
                         8);
        v86 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 +
                        4);
        v87 = *((float*)GameData_212c188 + 1);
        v84 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
        v85 = -*(float*)GameData_212c190;
        v82 = -*(float*)GameData_212c188;
        v83 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
        while (1) {
          v14 = *v7;
          if (*v7 != 0) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                      memory_order_acquire) &
                 1) == 0 &&
                __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
              v81 = *((_QWORD*)GameData_212c558 + 1);
              *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
              *((_QWORD*)&GameData_21a6180 + 1) = v81;
              __cxa_guard_release((__int64)&GameData_21a6190);
            }
            v15 = (float)(PSEUDO_UNFUSED((float)(LANES128(v1[8]).n128_f32[0] *
                                                 0x1.1df46a0000000p-6f) *
                                         0x1.0000000000000p-1f)) +
                  (float)(roundf((float)((float)(LANES128(v1[8]).n128_f32[0] *
                                                 0x1.1df46a0000000p-6f) *
                                         0x1.0000000000000p-1f) *
                                 0x1.45f3060000000p-3f) *
                          -0x1.921fb60000000p+2f);
            if (v15 < -0x1.921fb60000000p+0f) {
              v16 = -0x1.0000000000000p+0f;
            }
            else {
              v16 = 0x1.0000000000000p+0f;
            }
            v17 = -0x1.921fb60000000p+1f - v15;
            if (!(v15 < -0x1.921fb60000000p+0f)) {
              v17 = v15;
            }
            if (v15 > 0x1.921fb60000000p+0f) {
              v18 = 0x1.921fb60000000p+1f - v15;
            }
            else {
              v18 = v17;
            }
            v19 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180),
                            COERCE_AS(float32x4_t, GameData_21a6180));
            if (v15 > 0x1.921fb60000000p+0f) {
              v20 = -0x1.0000000000000p+0f;
            }
            else {
              v20 = v16;
            }
            LANES64(v21).n64_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v22).n128_u64[0] =
                LANES64_OF(vpadd_f32(v21, v21)).n64_u64[0];
            LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
            v23 = vrsqrteq_f32(v22);
            v24 = vmulq_f32(v23, vrsqrtsq_f32(v23, vmulq_f32(v22, v23)));
            v25 = vbicq_s8(
                vmulq_f32(
                    COERCE_AS(float32x4_t, GameData_21a6180),
                    vmulq_f32(v24, vrsqrtsq_f32(v24, vmulq_f32(v22, v24)))),
                vceqzq_f32(v22));
            v26 = *(float32x4_t*)(v14 + 304);
            v27 = v1[7];
            LANES128(v22).n128_f32[0] =
                v20 *
                (float)((float)((float)(v11 +
                                        (float)((float)(v86 +
                                                        (float)((float)(v10 +
                                                                        (float)((float)(v87 +
                                                                                        (float)(v82 *
                                                                                                (float)(v18 *
                                                                                                        v18))) *
                                                                                (float)(v18 *
                                                                                        v18))) *
                                                                (float)(v18 *
                                                                        v18))) *
                                                (float)(v18 * v18))) *
                                (float)(v18 * v18)) +
                        0x1.0000000000000p+0f);
            v28 = vmulq_n_f32(
                v25,
                v18 *
                    (float)((float)((float)(v83 +
                                            (float)((float)(v88 +
                                                            (float)((float)(v84 +
                                                                            (float)((float)(v89 +
                                                                                            (float)(v85 *
                                                                                                    (float)(v18 *
                                                                                                            v18))) *
                                                                                    (float)(v18 *
                                                                                            v18))) *
                                                                    (float)(v18 *
                                                                            v18))) *
                                                    (float)(v18 * v18))) *
                                    (float)(v18 * v18)) +
                            0x1.0000000000000p+0f));
            v29 = vsubq_f32(v26, v27);
            v33 = v28;
            LANES128(v30).n128_u64[0] = LANES128(v28).n128_u64[0];
            LANES128(v31).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v32).n128_u64[0] = LANES128(v29).n128_u64[0];
            LANES128(v33).n128_u32[3] = LANES128(v22).n128_u32[0];
            LANES128(v31).n128_u64[1] = LANES128(v31).n128_u64[0];
            v34 = vmulq_f32(v33, COERCE_AS(float32x4_t, GameData_1a829d0));
            v35 = vmulq_f32(v31, v34);
            LANES128(v31).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v36).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v32).n128_u64[1] = LANES128(v31).n128_u64[0];
            *(int8x8_t*)&LANES128(v36).n128_i8[8] =
                vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
            LANES128(v37).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            v38 = vmlaq_f32(v35, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v32, v36));
            LANES128(v36).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int32x2_t*)&LANES128(v37).n128_i8[8] = vdup_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v34).n128_u64[0]), 1);
            LANES128(v31).n128_u64[1] = LANES128(v36).n128_u64[0];
            LANES128(v41).n128_u64[1] = LANES128(v29).n128_u64[0];
            LANES128(v29).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v29).n128_i8[8] =
                vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
            v39 = vmlsq_f32(vmlaq_f32(v38,
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v41, v37)),
                            v29, v31);
            v40 = COERCE_AS(int8x16_t, __PAIR128__(LANES128(v33).n128_u64[1],
                                                   LANES128(v28).n128_u64[0]));
            LANES128(v31).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v45).n128_i8[8] =
                vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
            LANES128(v32).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v41).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(COERCE_AS(int8x16_t,
                                        __PAIR128__(LANES128(v33).n128_u64[1],
                                                    LANES128(v28).n128_u64[0])),
                              COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v34).n128_u64[0] = LANES128(v41).n128_u64[0];
            LANES128(v43).n128_u64[1] = LANES128(v41).n128_u64[0];
            v42 = vmulq_f32(v43, v39);
            LANES128(v43).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(COERCE_AS(int8x16_t,
                                        __PAIR128__(LANES128(v33).n128_u64[1],
                                                    LANES128(v28).n128_u64[0])),
                              COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v30).n128_u64[1] = LANES128(v43).n128_u64[0];
            v44 = vmlaq_f32(v42, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v30, v45));
            LANES128(v45).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(COERCE_AS(int8x16_t,
                                        __PAIR128__(LANES128(v33).n128_u64[1],
                                                    LANES128(v28).n128_u64[0])),
                              COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int32x2_t*)&LANES128(v32).n128_i8[8] = vdup_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v39).n128_u64[0]), 1);
            LANES128(v30).n128_u64[0] = LANES128(v45).n128_u64[0];
            LANES128(v30).n128_u64[1] = LANES128(v28).n128_u64[0];
            v46 = vmlaq_f32(v44, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v30, v32));
            LANES128(v32).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v32).n128_i8[8] =
                vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
            LANES128(v39).n128_u64[0] = LANES128(v43).n128_u64[0];
            LANES128(v39).n128_u64[1] = LANES128(v45).n128_u64[0];
            v47 = vmlsq_f32(v46, v32, v39);
            LANES128(v47).n128_u32[3] = 0;
            v48 = vaddq_f32(v27, v47);
            v49 = vsubq_f32(v26, v48);
            v50 = vmulq_f32(v49, v49);
            LANES128(v50).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                    .n64_u64[0];
            if (__builtin_islessgreater(
                    LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                        .n64_f32[0],
                    0x0.0p+0f)) {
              *(_QWORD*)(v14 + 304) = LANES128(v48).n128_u64[0];
              v51 = *(_OWORD*)(v14 + 304);
              *(_DWORD*)(v14 + 296) |= 1u;
              *((_QWORD*)&v51 + 1) = LANES128(v48).n128_u32[2];
              *(_OWORD*)(v14 + 304) = v51;
            }
            v52 = *(int8x16_t*)(v14 + 336);
            *(int8x8_t*)&LANES128(v41).n128_i8[8] = vqtbl1_s8(
                COERCE_AS(int8x16_t, __PAIR128__(LANES128(v33).n128_u64[1],
                                                 LANES128(v28).n128_u64[0])),
                COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
            LANES128(v53).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v54).n128_u64[0] = *(_QWORD*)(v14 + 336);
            LANES128(v43).n128_u64[1] = LANES128(v54).n128_u64[0];
            LANES128(v53).n128_u64[1] = LANES128(v53).n128_u64[0];
            v55 = vmulq_f32(v33, v53);
            LANES128(v53).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v54).n128_u64[1] = LANES128(v53).n128_u64[0];
            v56 = vmlaq_f32(v55, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v54, v41));
            LANES128(v57).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v53).n128_u64[1] = LANES128(v57).n128_u64[0];
            *(int32x2_t*)&LANES128(v57).n128_i8[8] = vdup_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v28).n128_u64[0]), 1);
            *(int8x8_t*)&LANES128(v45).n128_i8[8] =
                vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
            v58 = vmlsq_f32(vmlaq_f32(v56,
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v43, v57)),
                            v45, v53);
            v94 = v58;
            LANES64(v59).n64_u64[0] =
                LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v52, v58)))).n64_u64[0];
            if ((LANES64(v59).n64_u8[0] & 1) != 0 ||
                (LANES64(v59).n64_u8[2] & 1) != 0 ||
                (LANES64(v59).n64_u8[4] & 1) != 0 ||
                (LANES64(v59).n64_u8[6] & 1) != 0) {
              v60 = *(_DWORD*)(v14 + 296) | 1;
              *(_QWORD*)(v14 + 336) = LANES128(v58).n128_u64[0];
              *(_QWORD*)(v14 + 344) =
                  LANES128_OF(vextq_s8(v58, v58, 8u)).n128_u64[0];
              *(_DWORD*)(v14 + 296) = v60;
              math_622ac0((void*)(&f_.v92), (float32x2_t*)&v94);
              v61 = DWORD2(f_.v92);
              *(_QWORD*)(v14 + 320) = f_.v92;
              v62 = *(_OWORD*)(v14 + 320);
              *((_QWORD*)&v62 + 1) = v61;
              *(_OWORD*)(v14 + 320) = v62;
            }
            v14 = *v7;
          }
          v63 = GameRoutine_1a09c70_alt1((const char*)(v14 + 16));
          if (v63 >= 0xFFFFFFFFFFFFFFF7LL) {
            String_60a1d0();
          }
          v64 = v63;
          if (v63 >= 0x17) {
            break;
          }
          v65 = (char*)&f_.v92 + 1;
          LOBYTE(f_.v92) = 2 * v63;
          if (v63 != 0) {
            goto LABEL_45;
          }
        LABEL_46:
          v65[v64] = 0;
          v67 = LANES128(v1[14]).n128_u64[1];
          v68 = LANES128(v1[15]).n128_u64[0];
          if (v67 == v68) {
            v78 = false;
            if ((f_.v92 & 1) != 0) {
              goto LABEL_62;
            }
          }
          else {
            v69 = v67 + 8;
            do {
              v70 = *(_QWORD*)(v69 - 8);
              v71 = *(_BYTE*)(v70 + 24);
              v72 = *(_QWORD*)(v70 + 40);
              v73 = v70 + 25;
              if ((v71 & 1) != 0) {
                v74 = v72;
              }
              else {
                v74 = v73;
              }
              v75 = f_.v93;
              v76 = (unsigned __int64)(unsigned __int8)f_.v92 >> 1;
              if ((f_.v92 & 1) != 0) {
                v76 = *((_QWORD*)&f_.v92 + 1);
              }
              else {
                v75 = (char*)&f_.v92 + 1;
              }
              LANES128(v94).n128_u64[0] = (unsigned __int64)v75;
              LANES128(v94).n128_u64[1] = v76;
              v77 = game_HashString(v74);
              v78 = v77 == GameRoutine_7a88a0((__int64*)&v94);
              v79 = v78 || v69 == v68;
              v69 += 8LL;
            } while (!v79);
            if ((f_.v92 & 1) != 0) {
            LABEL_62:
              if (f_.v93 != nullptr) {
                v80 = 128;
                if (*(_QWORD*)(*v9 + 200) == 0) {
                  v80 = 56;
                }
                nn_mem_StandardAllocator_Free(*v9 + v80, (__int64)f_.v93);
              }
            }
          }
          if (v78) {
            v13 = 0;
          }
          else {
            v13 = SceneObject_13fd320(v14);
          }
          result = (__int64*)SceneManager_138dbe0(v1, v13);
          if (++v7 == v8) {
            goto LABEL_10;
          }
        }
        if ((v63 | 7) == 0x17) {
          v66 = 26;
        }
        else {
          v66 = (v63 | 7) + 1;
        }
        v65 = (char*)fw_memory_HeapManager_Allocate(*v9, v66, 16, 0);
        *((_QWORD*)&f_.v92 + 1) = v64;
        f_.v93 = v65;
        *(_QWORD*)&f_.v92 = v66 | 1;
      LABEL_45:
        GameRoutine_1a0b950((__int64)v65, v14 + 16, v64);
        goto LABEL_46;
      }
    }
  }
  else {
    f_.v90 = 0;
    f_.v91 = 0;
  }
LABEL_10:
  v12 = f_.v91;
  if (f_.v91 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v91 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
    return;
  }
  return;
}

_QWORD* llvm_libcxx_21_libcxx_include___functional_15eb780(__int64 a1, char a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  _QWORD* result;
  __int64*** v11;
  __int64** v12;
  __int64** v13;
  __int64* v14;
  __int64 v15;
  _BOOL4 v16;
  __int64*** v17;
  __int64** v18;
  __int64** v19;
  __int64* v20;
  __int64 v21;
  _BOOL4 v22;
  __int64 v23;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;
  __int64 v26;

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1216, 16, 0),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  game_menu_1789cf0(v4, (__int64)"PerchUnitMenu"),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = GameData_21312e0[0];
  *(_QWORD*)(v4 + 1184) = 0;
  *(_QWORD*)(v4 + 1192) = 0;
  *(_QWORD*)(v4 + 1200) = 0;
  *(_DWORD*)(v4 + 1208) = 0;
  *(_QWORD*)v4 = v5 + 2;
  *(_QWORD*)(v4 + 176) = v5 + 163;
  *(_QWORD*)(v4 + 1056) = v5 + 189;
  GameRoutine_f369a0((__int64*)(v4 + 1184), 1u),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *(_QWORD*)(v4 + 1184);
  v7 = *(_QWORD*)(v4 + 1192);
  v8 = v7 - v6;
  if ((a2 & 1) != 0) {
    if (v7 - v6 >= 1) {
      GameRoutine_1a0ba50(v6, 0, v8),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    *(_QWORD*)v4 = game_facility_anonymous_ProcPerchUnitMenu_vtable;
    *(_QWORD*)(v4 + 176) = GameData_2060068;
    *(_QWORD*)(v4 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_2060138;
    *(_QWORD*)(*GameData_212dcd0 + 56) = *(_QWORD*)(*GameData_212dcd0 + 48);
    *(_QWORD*)v4 = game_facility_anonymous_ProcPerchOnlyGazeUnitMenu_vtable;
    *(_QWORD*)(v4 + 176) = GameData_2060768;
    *(_QWORD*)(v4 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_2060838;
    ProcInst_657850(v4, (__int64)GameData_212c730,
                    (__int64)"ProcPerchOnlyGazeUnitMenu", 1, a1),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = v24_.v24;
    v24_.v24[0] = GameData_20609e8;
    v24_.v24[1] = v4;
    v11 = *(__int64****)(game_UnitListSet_instance_ + 24);
    v24_.v25 = v24_.v24;
    v12 = *v11;
    v13 = v11[1];
    if (*v11 != v13) {
      while (1) {
        v14 = *v12;
        v15 = (__int64)v12[1];
        if (v15 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v14 != nullptr) {
          v16 = (v14[6] & 0x20) == 0;
          if (v15 == 0) {
            goto LABEL_14;
          }
        }
        else {
          v16 = false;
          if (v15 == 0) {
            goto LABEL_14;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
        LABEL_14:
          if (!v16) {
            goto LABEL_6;
          }
          goto LABEL_15;
        }
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v15),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v16) {
        LABEL_15:
          v26 = **v12;
          if (v24_.v25 == nullptr) {
            goto LABEL_42;
          }
          (*(void (**)(_QWORD*, __int64*))(*v24_.v25 + 48LL))(v24_.v25, &v26),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      LABEL_6:
        v12 += 2;
        if (v12 == v13) {
          goto LABEL_36;
        }
      }
    }
  LABEL_39:
    v23 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v23))(result,
                                                                       v9);
  }
  if (v7 - v6 >= 1) {
    GameRoutine_1a0ba50(v6, 0, v8),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_QWORD*)v4 = game_facility_anonymous_ProcPerchUnitMenu_vtable;
  *(_QWORD*)(v4 + 176) = GameData_2060068;
  *(_QWORD*)(v4 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_2060138;
  *(_QWORD*)(*GameData_212dcd0 + 56) = *(_QWORD*)(*GameData_212dcd0 + 48);
  ProcInst_657850(v4, (__int64)GameData_212c730, (__int64)"ProcPerchUnitMenu",
                  1, a1),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = v24_.v24;
  v24_.v24[0] = GameData_20601d0;
  v24_.v24[1] = v4;
  v17 = *(__int64****)(game_UnitListSet_instance_ + 24);
  v24_.v25 = v24_.v24;
  v18 = *v17;
  v19 = v17[1];
  if (*v17 == v19) {
    goto LABEL_39;
  }
  do {
    v20 = *v18;
    v21 = (__int64)v18[1];
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v20 != nullptr) {
      v22 = (v20[6] & 0x20) == 0;
      if (v21 == 0) {
        goto LABEL_31;
      }
    }
    else {
      v22 = false;
      if (v21 == 0) {
        goto LABEL_31;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v21),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (!v22) {
        goto LABEL_23;
      }
      goto LABEL_32;
    }
  LABEL_31:
    if (v22) {
    LABEL_32:
      v26 = **v18;
      if (v24_.v25 == nullptr) {
      LABEL_42:
        GameRoutine_60a310(),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v24_.v25 + 48LL))(v24_.v25, &v26),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_23:
    v18 += 2;
  } while (v18 != v19);
LABEL_36:
  result = v24_.v25;
  if (v24_.v25 == v24_.v24) {
    goto LABEL_39;
  }
  if (v24_.v25 != nullptr) {
    v23 = 40;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v23))(result,
                                                                       v9);
  }
  return result;
}

char* llvm_libcxx_21_libcxx_include___functional_1686d40(char* result, char* a2,
                                                         unsigned __int64 a3,
                                                         __int64* a4,
                                                         __int64 a5)
{

#pragma clang fp contract(off)
  char* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  bool v11;
  char* v13;
  __int64 v14;
  char* v15;
  _QWORD* v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  bool v22;
  __int64 v24;
  _QWORD* v25;
  float v26;
  __int64 v27;
  float v28;
  bool v29;
  unsigned __int64 v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64* v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  bool v43;
  __int64 v45;
  __int64 v46;

  if (a3 < 2) {
    return result;
  }
  v5 = a2;
  v6 = (__int64*)result;
  if (a3 != 2) {
    if ((__int64)a3 <= 128) {
      if (result == a2) {
        return result;
      }
      v13 = result + 8;
      if (result + 8 == a2) {
        return result;
      }
      v14 = 0;
      v15 = result;
      while (1) {
        v17 = v15;
        v19 = *(_QWORD*)v15;
        v18 = *((_QWORD*)v15 + 1);
        v15 = v13;
        v20 = *(float*)(v18 + 52);
        v21 = *(float*)(v19 + 52);
        if (vabds_f32(v20, v21) >= 0x1.0000000000000p-23f) {
          if (v20 > v21) {
            goto LABEL_39;
          }
        }
        else {
          result = (char*)GameRoutine_1a09c70_alt1((const char*)(v18 + 176));
          if ((unsigned __int64)result < 6 ||
              (*(_DWORD*)(v18 + 176) == 1851088716
                   ? (v22 = *(unsigned __int16*)(v18 + 180) == 29801)
                   : (v22 = false),
               !v22)) {
            result = (char*)GameRoutine_1a09c70_alt1((const char*)(v19 + 176));
            if ((unsigned __int64)result >= 6 &&
                *(_DWORD*)(v19 + 176) == 1851088716 &&
                *(_WORD*)(v19 + 180) == 29801) {
            LABEL_39:
              *((_QWORD*)v17 + 1) = v19;
              v16 = v6;
              if (v17 != (char*)v6) {
                v24 = v14;
                do {
                  v25 = (__int64*)((char*)v6 + v24);
                  v26 = *(float*)(v18 + 52);
                  v27 = *(__int64*)((char*)v6 + v24 - 8);
                  v28 = *(float*)(v27 + 52);
                  if (vabds_f32(v26, v28) >= 0x1.0000000000000p-23f) {
                    if (v26 <= v28) {
                      goto LABEL_21;
                    }
                  }
                  else {
                    result = (char*)GameRoutine_1a09c70_alt1(
                        (const char*)(v18 + 176));
                    if ((unsigned __int64)result >= 6 &&
                            (*(_DWORD*)(v18 + 176) == 1851088716
                                 ? (v29 = *(unsigned __int16*)(v18 + 180) ==
                                          29801)
                                 : (v29 = false),
                             v29) ||
                        (unsigned __int64)(result =
                                               (char*)GameRoutine_1a09c70_alt1(
                                                   (const char*)(v27 + 176))) <
                            6) {
                    LABEL_21:
                      v16 = v17;
                      goto LABEL_22;
                    }
                    if (*(_DWORD*)(v27 + 176) != 1851088716 ||
                        *(_WORD*)(v27 + 180) != 29801) {
                      v16 = (__int64*)((char*)v6 + v24);
                      goto LABEL_22;
                    }
                  }
                  v17 -= 8;
                  v24 -= 8;
                  *v25 = v27;
                } while (v24 != 0);
                v16 = v6;
              LABEL_22:
                v5 = a2;
              }
              *v16 = v18;
            }
          }
        }
        v13 = v15 + 8;
        v14 += 8;
        if (v15 + 8 == v5) {
          return result;
        }
      }
    }
    v31 = a3 >> 1;
    v32 = a4;
    v33 = a3 - (a3 >> 1);
    if ((__int64)a3 > a5) {
      llvm_libcxx_21_libcxx_include___functional_1686d40(
          (unsigned __int64)result, &result[8 * v31], a3 >> 1, a4, a5);
      llvm_libcxx_21_libcxx_include___functional_1686d40(
          (unsigned __int64)&v6[v31], v5, v33, v32, a5);
      return (char*)ProcGmapMap_1687580((unsigned __int64)v6, (char*)&v6[v31],
                                        v5, v31, v33, (__int64)v32, a5);
    }
    ProcGmapMap_1687160((unsigned __int64)result, (__int64)&result[8 * v31],
                        a3 >> 1, a4);
    v36 = &v32[v31];
    result = (char*)ProcGmapMap_1687160((unsigned __int64)&v6[v31], (__int64)v5,
                                        v33, v36);
    v37 = &v32[a3];
    v38 = v36;
    while (1) {
      if (v38 == v37) {
        while (v32 != v36) {
          v45 = *v32++;
          *v6++ = v45;
        }
        return result;
      }
      v39 = *v38;
      v40 = *v32;
      v41 = *(float*)(*v38 + 52);
      v42 = *(float*)(*v32 + 52);
      if (vabds_f32(v41, v42) >= 0x1.0000000000000p-23f) {
        if (v41 > v42) {
          goto LABEL_78;
        }
      }
      else {
        result = (char*)GameRoutine_1a09c70_alt1((const char*)(v39 + 176));
        if ((unsigned __int64)result < 6 ||
            (*(_DWORD*)(v39 + 176) == 1851088716
                 ? (v43 = *(unsigned __int16*)(v39 + 180) == 29801)
                 : (v43 = false),
             !v43)) {
          result = (char*)GameRoutine_1a09c70_alt1((const char*)(v40 + 176));
          if ((unsigned __int64)result >= 6 &&
              *(_DWORD*)(v40 + 176) == 1851088716 &&
              *(_WORD*)(v40 + 180) == 29801) {
          LABEL_78:
            *v6 = v39;
            ++v38;
            goto LABEL_62;
          }
        }
      }
      ++v32;
      *v6 = v40;
    LABEL_62:
      ++v6;
      if (v32 == v36) {
        while (v38 != v37) {
          v46 = *v38++;
          *v6++ = v46;
        }
        return result;
      }
    }
  }
  v7 = *((_QWORD*)a2 - 1);
  v8 = *(_QWORD*)result;
  v9 = *(float*)(v7 + 52);
  v10 = *(float*)(*(_QWORD*)result + 52LL);
  if (vabds_f32(v9, v10) >= 0x1.0000000000000p-23f) {
    if (v9 <= v10) {
      return result;
    }
  LABEL_57:
    *v6 = v7;
    *((_QWORD*)v5 - 1) = v8;
    return result;
  }
  result = (char*)GameRoutine_1a09c70_alt1((const char*)(v7 + 176));
  if ((unsigned __int64)result < 6 ||
      (*(_DWORD*)(v7 + 176) == 1851088716
           ? (v11 = *(unsigned __int16*)(v7 + 180) == 29801)
           : (v11 = false),
       !v11)) {
    result = (char*)GameRoutine_1a09c70_alt1((const char*)(v8 + 176));
    if ((unsigned __int64)result >= 6 &&
        *(_DWORD*)(v8 + 176) == 1851088716 & *(_WORD*)(v8 + 180) == 29801) {
      goto LABEL_57;
    }
  }
  return result;
}

void llvm_libcxx_21_libcxx_include___functional_16a50c0(_QWORD* a1)
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
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  *a1 = GameData_2088138;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20885d0;
  a1[132] = GameData_20886a0;
  GameRoutine_86e660(a1 + 154);
  v2 = a1[150];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = a1[151];
    if (v2 == v4) {
      goto LABEL_18;
    }
    do {
      if ((*(_BYTE*)(v4 - 32) & 1) != 0) {
        v5 = *(_QWORD*)(v4 - 16);
        if (v5 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
        }
      }
      if ((*(_BYTE*)(v4 - 64) & 1) != 0) {
        v7 = *(_QWORD*)(v4 - 48);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v7);
        }
      }
      v4 -= 72;
    } while (v4 != v2);
    v9 = a1[150];
    a1[151] = v2;
    v2 = v9;
    if (v9 != 0) {
    LABEL_18:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v2);
    }
  }
  v11 = a1[147];
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = (_QWORD*)a1[144];
  if (v12 == a1 + 140) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_28;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
LABEL_28:
  v14 = a1[136];
  if (v14 != 0) {
    v15 = *(_QWORD*)v3;
    a1[137] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16, v14);
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
}

void llvm_libcxx_21_libcxx_include___functional_16f43b0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a1 = GameData_20a0f20;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20a1398;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20a1468;
  v2 = a1[151];
  a1[151] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[150];
  a1[150] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[147];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = (_QWORD*)a1[144];
  if (v5 == a1 + 140) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_12;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_12:
  v7 = a1[136];
  if (v7 != 0) {
    a1[137] = v7;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v7);
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
}

void llvm_libcxx_21_libcxx_include___functional_16f4490(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  *a1 = GameData_20a0f20;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20a1398;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20a1468;
  v2 = a1[151];
  a1[151] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[150];
  a1[150] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[147];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = (_QWORD*)a1[144];
  if (v5 == a1 + 140) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_12;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_12:
  v7 = a1[136];
  v8 = fw_memory_g_heap_manager_ptr;
  if (v7 != 0) {
    v9 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[137] = v7;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v7);
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v11, (__int64)a1);
}

__int64 llvm_libcxx_21_libcxx_include___functional_16fdbe0(__int64 a1,
                                                           __int64 a2, char a3,
                                                           __int64 a4)
{
  __int64 v5;
  __int64* v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  _DWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  signed __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  _DWORD* v31;
  unsigned __int64 v32;
  __int64 v33;
  signed __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _BYTE* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v52;
  __int64 v54;
  // One object keeps the original's frame offsets of these locals.
  struct {
    struct {
      _BYTE v55[32];
      _BYTE* v56;
    } v55_;
    char gap0_[8];
    struct {
      _BYTE v57[32];
      _BYTE* v58;
    } v57_;
    char gap1_[8];
    struct {
      __int64 (**v59)();
      unsigned __int8* v60;
      char gap144_[16];
      __int64 (***v61)();
    } v59_;
    char gap2_[8];
    unsigned __int8 v62[24];
  } f_;

  v5 = *(_QWORD*)(a4 + 32);
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v54 = a1;
  if (v5 != 0) {
    if (v5 == a4) {
      f_.v55_.v56 = f_.v55_.v55;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, f_.v55_.v55);
      v8 = f_.v55_.v56;
    }
    else {
      v8 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      f_.v55_.v56 = v8;
    }
    v10 = fw_memory_HeapManager_Allocate(*v7, 1168, 16, 0);
    if (v8 != nullptr) {
      if (v8 == f_.v55_.v55) {
        f_.v57_.v58 = f_.v57_.v57;
        (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v8 + 24LL))(v8, f_.v57_.v57);
      }
      else {
        f_.v57_.v58 =
            (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v8 + 16LL))(v8);
      }
    }
    else {
      f_.v57_.v58 = nullptr;
    }
  }
  else {
    v9 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    f_.v55_.v56 = nullptr;
    v10 = fw_memory_HeapManager_Allocate(v9, 1168, 16, 0);
    f_.v57_.v58 = nullptr;
  }
  f_.v59_.v59 = nullptr;
  f_.v59_.v60 = nullptr;
  game_menu_16dcd30(v10, (__int64)"TradeItemSelectMenu", &f_.v59_.v59, 0);
  v11 = GameData_212d6a8;
  v12 = (__int64)f_.v59_.v60;
  *(_QWORD*)v10 = GameData_212d6a8 + 2;
  *(_QWORD*)(v10 + 176) = v11 + 143;
  *(_QWORD*)(v10 + 1056) = v11 + 169;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = GameData_2132030[0];
  *(_QWORD*)(v10 + 1064) = a2;
  *(_QWORD*)(v10 + 1072) = 0;
  *(_QWORD*)(v10 + 1080) = 0;
  *(_QWORD*)(v10 + 1088) = 0;
  __builtin_memset(f_.v62, 0, 14);
  f_.v59_.v61 = &f_.v59_.v59;
  *(_QWORD*)v10 = v13 + 16;
  *(_QWORD*)(v10 + 176) = v13 + 1176;
  *(_QWORD*)(v10 + 1056) = v13 + 1384;
  f_.v59_.v59 = GameData_20a4450;
  f_.v59_.v60 = f_.v62;
  GameRoutine_8a29c0(a2, (__int64)&f_.v59_.v59);
  if (f_.v59_.v61 == &f_.v59_.v59) {
    v14 = 4;
  }
  else {
    if (f_.v59_.v61 == nullptr) {
      goto LABEL_19;
    }
    v14 = 5;
  }
  ((__int64 (*)(__int64))(*f_.v59_.v61)[v14])((__int64)f_.v59_.v61);
LABEL_19:
  v15 = (__int64*)(v10 + 1072);
  if (f_.v62[1] + f_.v62[0] + f_.v62[2] + f_.v62[3] + f_.v62[4] + f_.v62[5] +
          f_.v62[6] + f_.v62[7] + f_.v62[8] + f_.v62[9] + f_.v62[10] +
          f_.v62[11] + f_.v62[12] + (unsigned int)f_.v62[13] >=
      2) {
    v16 = *(_DWORD**)(v10 + 1080);
    v17 = *(_QWORD*)(v10 + 1088);
    if ((unsigned __int64)v16 >= v17) {
      v19 = *v15;
      v20 = (signed __int64)v16 - *v15;
      v21 = (v20 >> 2) + 1;
      if (v21 >> 62 != 0) {
      LABEL_82:
        GameRoutine_6e5a20();
      }
      v22 = v17 - v19;
      if (v22 >> 1 > v21) {
        v21 = v22 >> 1;
      }
      if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFFCLL) {
        v23 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v23 = v21;
      }
      if (v23 != 0) {
        if (v23 >> 62 != 0) {
        LABEL_83:
          GameRoutine_60a210();
        }
        v24 = fw_memory_HeapManager_Allocate(*v7, 4 * v23, 16, 0);
      }
      else {
        v24 = 0;
      }
      v25 = v24 + 4 * v23;
      v26 = v24 + v20 - 4 * (v20 >> 2);
      *(_DWORD*)(v24 + v20) = 0;
      v18 = v24 + v20 + 4;
      GameRoutine_1a0b950(v26, v19, v20);
      *(_QWORD*)(v10 + 1072) = v26;
      *(_QWORD*)(v10 + 1080) = v18;
      *(_QWORD*)(v10 + 1088) = v25;
      if (v19 != 0) {
        v27 = 128;
        if (*(_QWORD*)(*v7 + 200) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(*v7 + v27, v19);
      }
    }
    else {
      *v16 = 0;
      v18 = (__int64)(v16 + 1);
    }
    *(_QWORD*)(v10 + 1080) = v18;
  }
  v28 = v7;
  v29 = 1;
  v52 = a2;
  do {
    if (f_.v62[v29] == 1) {
      v31 = *(_DWORD**)(v10 + 1080);
      v32 = *(_QWORD*)(v10 + 1088);
      if ((unsigned __int64)v31 < v32) {
        *v31 = v29;
        v30 = (__int64)(v31 + 1);
      }
      else {
        v33 = *v15;
        v34 = (signed __int64)v31 - *v15;
        v35 = (v34 >> 2) + 1;
        if (v35 >> 62 != 0) {
          goto LABEL_82;
        }
        v36 = v32 - v33;
        if (v36 >> 1 > v35) {
          v35 = v36 >> 1;
        }
        if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFFCLL) {
          v37 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v37 = v35;
        }
        if (v37 != 0) {
          if (v37 >> 62 != 0) {
            goto LABEL_83;
          }
          v38 = fw_memory_HeapManager_Allocate(*v28, 4 * v37, 16, 0);
        }
        else {
          v38 = 0;
        }
        v39 = v38 + 4 * v37;
        v40 = v38 + v34 - 4 * (v34 >> 2);
        *(_DWORD*)(v38 + v34) = v29;
        v30 = v38 + v34 + 4;
        GameRoutine_1a0b950(v40, v33, v34);
        *(_QWORD*)(v10 + 1072) = v40;
        *(_QWORD*)(v10 + 1080) = v30;
        *(_QWORD*)(v10 + 1088) = v39;
        if (v33 != 0) {
          v41 = 128;
          if (*(_QWORD*)(*v28 + 200) == 0) {
            v41 = 56;
          }
          nn_mem_StandardAllocator_Free(*v28 + v41, v33);
        }
      }
      *(_QWORD*)(v10 + 1080) = v30;
    }
    ++v29;
  } while (v29 != 14);
  v42 = f_.v57_.v58;
  *(_QWORD*)v10 = game_facility_anonymous_ProcTradeItemSelectMenu_vtable;
  *(_QWORD*)(v10 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20a42a0;
  *(_QWORD*)(v10 + 1056) = GameData_20a4370;
  if (v42 != nullptr) {
    v43 = v52;
    v44 = v54;
    if (v42 == f_.v57_.v57) {
      *(_QWORD*)(v10 + 1136) = v10 + 1104;
      (*(void (**)(_BYTE*))(*(_QWORD*)v42 + 24LL))(v42);
    }
    else {
      *(_QWORD*)(v10 + 1136) =
          (*(__int64 (**)(_BYTE*))(*(_QWORD*)v42 + 16LL))(v42);
    }
  }
  else {
    v43 = v52;
    v44 = v54;
    *(_QWORD*)(v10 + 1136) = 0;
  }
  v45 = *(_QWORD*)(v10 + 1080);
  *(_BYTE*)(v10 + 1152) = a3 & 1;
  BasicMenu_16dd8b0(v10, (unsigned __int64)(v45 - *(_QWORD*)(v10 + 1072)) >> 2,
                    0);
  ProcInst_657850_alt1(v10, (__int64)GameData_212c730,
                       "ProcTradeItemSelectMenu", 1, v44);
  if (f_.v57_.v58 == f_.v57_.v57) {
    v46 = 32;
    goto LABEL_66;
  }
  if (f_.v57_.v58 != nullptr) {
    v46 = 40;
  LABEL_66:
    (*(void (**)(__int64))(*(_QWORD*)f_.v57_.v58 + v46))((__int64)f_.v57_.v58);
  }
  v48 = *(_QWORD**)(v10 + 256);
  v47 = *(_QWORD**)(v10 + 264);
  *(_QWORD*)(v10 + 336) = 0;
  while (v48 != v47) {
    if (*v48 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v48 + 8LL))(*v48);
      v47 = *(_QWORD**)(v10 + 264);
    }
    ++v48;
  }
  v49 = *(_QWORD*)(v10 + 344);
  if (v49 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 8LL))(v49);
    *(_QWORD*)(v10 + 344) = 0;
  }
  *(_QWORD*)(v10 + 264) = *(_QWORD*)(v10 + 256);
  *(_QWORD*)(v10 + 240) = *(_QWORD*)(v10 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v10 + 1024LL))(v10);
  (*(void (**)(__int64))(*(_QWORD*)v10 + 1032LL))(v10);
  if (GameRoutine_1a09d30(*(const char**)(v43 + 8), GameData_1ab8d4c) == 0) {
    f_.v59_.v60 = (unsigned __int8*)&GameData_1ac4fcc;
    f_.v59_.v59 =
        (__int64 (**)(void))game_HashString((__int64)&GameData_1ac4fcc);
    game_VariableManager_SetFlag((__int64)&f_.v59_.v59, 1);
  }
  if (f_.v55_.v56 == f_.v55_.v55) {
    v50 = 32;
    goto LABEL_80;
  }
  if (f_.v55_.v56 != nullptr) {
    v50 = 40;
  LABEL_80:
    (*(void (**)(__int64))(*(_QWORD*)f_.v55_.v56 + v50))((__int64)f_.v55_.v56);
  }
  return v10;
}

__int64 llvm_libcxx_21_libcxx_include___functional_1795980(__int64 a1, int a2,
                                                           const char* a3)
{
  __int64* v3;
  bool v4;
  unsigned int v5;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  void* v18;
  char* v19;
  char* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v3 = (__int64*)GameData_2131218;
  v4 = a1 != 0 && *(_QWORD*)GameData_2131218 == 0;
  v5 = v4;
  if (v4) {
    v9 = fw_memory_g_heap_manager_ptr;
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         888, 16, 0);
    GameRoutine_1a0ba50(v10 + 144, 0, 0x2E8u);
    v11 = GameData_212c608[0];
    *(_QWORD*)(v10 + 96) = 0;
    *(_QWORD*)(v10 + 104) = 0;
    *(_QWORD*)(v10 + 112) = 0;
    *(_QWORD*)(v10 + 120) = 0;
    *(_QWORD*)(v10 + 128) = 0;
    *(_WORD*)(v10 + 136) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    *(_QWORD*)(v10 + 24) = "NULL";
    *(_QWORD*)(v10 + 138) = 0;
    *(_QWORD*)(v10 + 144) = 0;
    *(_QWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_QWORD*)(v10 + 48) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_QWORD*)(v10 + 80) = 0;
    *(_QWORD*)(v10 + 88) = 0;
    *(_QWORD*)v10 = v11 + 16;
    *(_QWORD*)(v10 + 8) = 0;
    game_ProcInst_Register(v10);
    v12 = GameData_2130f78[0];
    *(_QWORD*)(v10 + 200) = 0;
    *(_QWORD*)(v10 + 152) = 0;
    *(_QWORD*)(v10 + 160) = 0;
    *(_QWORD*)(v10 + 168) = 0;
    *(_QWORD*)(v10 + 176) = 0;
    *(_QWORD*)(v10 + 208) = 0;
    *(_QWORD*)(v10 + 216) = 0;
    *(_QWORD*)(v10 + 224) = 0;
    *(_QWORD*)(v10 + 232) = 0;
    *(_QWORD*)(v10 + 240) = 0;
    *(_DWORD*)(v10 + 248) = 1065353216;
    *(_QWORD*)(v10 + 184) = 0;
    *(_QWORD*)(v10 + 192) = v10 + 200;
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
    *(_DWORD*)(v10 + 728) = 1065353216;
    *(_WORD*)(v10 + 736) = 0;
    *(_WORD*)(v10 + 760) = 0;
    *(_BYTE*)(v10 + 784) = 0;
    *(_QWORD*)(v10 + 792) = 0;
    *(_BYTE*)(v10 + 800) = 0;
    *(_QWORD*)v10 = v12 + 16;
    *(_DWORD*)(v10 + 320) = 3;
    *(_QWORD*)(v10 + 324) = 0;
    *(_WORD*)(v10 + 336) = 1;
    *(_QWORD*)(v10 + 456) = 0;
    *(_QWORD*)(v10 + 464) = v10 + 472;
    *(_QWORD*)(v10 + 640) = v10 + 648;
    v13 = GameData_2130240[0] + 2;
    *(_BYTE*)(v10 + 816) = 0;
    *(_BYTE*)(v10 + 820) = 0;
    *(_QWORD*)(v10 + 808) = v13;
    if (*v3 == 0) {
      *v3 = v10;
    }
    v14 = *(_QWORD*)v9;
    *(_DWORD*)(v10 + 832) = 0;
    *(_WORD*)(v10 + 840) = 0;
    *(_QWORD*)v10 = SpecialTitle_Destructor_17962a0_ptr;
    *(_QWORD*)(v10 + 824) = SpecialTitle_Destructor_1796470_ptr;
    v15 = fw_memory_HeapManager_Allocate(v14, 296, 16, 0);
    *(_DWORD*)(v15 + 48) = 0x2000;
    v16 = GameData_2131678;
    *(_QWORD*)(v15 + 8) = 0;
    *(_QWORD*)(v15 + 16) = 0;
    *(_DWORD*)(v15 + 32) = 0;
    *(_QWORD*)(v15 + 40) = 0;
    *(_DWORD*)(v15 + 104) = 0;
    *(_WORD*)(v15 + 108) = 256;
    *(_QWORD*)(v15 + 56) = 0;
    *(_QWORD*)(v15 + 64) = 0;
    *(_QWORD*)(v15 + 72) = 0;
    *(_WORD*)(v15 + 80) = 0;
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
    *(_QWORD*)(v10 + 872) = v15;
    *(_WORD*)(v10 + 880) = 0;
    *(_QWORD*)v15 = v16 + 16;
    *(_DWORD*)(v15 + 112) = -1082130432;
    *(_DWORD*)(v15 + 292) = 2;
    v17 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(v15 + 24) = 0;
    *(_QWORD*)(v10 + 864) = v15 + 24;
    if (v17 != 0) {
      *(_QWORD*)(v17 + 48) = v10;
      *(_QWORD*)(v10 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v10;
    *(_QWORD*)(v10 + 24) = "SpecialTitle";
    *(_QWORD*)(v10 + 32) = a1;
    *(_DWORD*)(v10 + 140) = (unsigned int)game_HashString32("SpecialTitle");
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 24;
    *(_QWORD*)(v10 + 80) = 1;
    v18 = GameData_2130f68;
    *(_QWORD*)(v10 + 8) = GameData_2130f68;
    *(_QWORD*)(v10 + 16) = v18;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 136LL))(v10) & 1) != 0 &&
        (*(_WORD*)(v10 + 136) & 0x100) == 0) {
      *(_WORD*)(v10 + 136) |= 0x100u;
    }
    if ((*(_BYTE*)(v10 + 272) & 1) != 0) {
      *(_QWORD*)(v10 + 280) = 14;
      v19 = *(char**)(v10 + 288);
    }
    else {
      *(_BYTE*)(v10 + 272) = 28;
      v19 = (char*)(v10 + 273);
    }
    strcpy(v19, "Layout/Hub.arc");
    if ((*(_BYTE*)(v10 + 296) & 1) != 0) {
      *(_QWORD*)(v10 + 304) = 22;
      v20 = *(char**)(v10 + 312);
    }
    else {
      *(_BYTE*)(v10 + 296) = 44;
      v20 = (char*)(v10 + 297);
    }
    strcpy(v20, "Hub_TlpSpecialFacility");
    if (*(_DWORD*)(v10 + 320) == 2) {
      v21 = (_QWORD*)game_ProcGameSkipView_instance_;
      if (game_ProcGameSkipView_instance_ != 0) {
        v23 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
        v22 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
        v25 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
        v24 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
        v4 = v24 == v25;
        v26 = v22 - 1 + v23;
        v27 = v26 >> 7;
        v28 = v26 & 0x7F;
        v29 = 16 * (v24 - v25) - 1;
        v30 = *(_QWORD*)(v25 + 8 * v27);
        if (v4) {
          v29 = 0;
        }
        v31 = v30 + 32 * v28;
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
            *(_DWORD*)v31 & 0xFFFFFFFD |
            (2 *
             ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
        v21[21] = *(_QWORD*)(v31 + 24);
        v32 = *(_QWORD*)(v31 + 16);
        v21[27] = v22 - 1;
        v21[20] = v32;
        if ((unsigned __int64)(v29 - (v22 + v23) - 255) <=
            0xFFFFFFFFFFFFFEFFLL) {
          v33 = *(_QWORD*)(v24 - 8);
          if (v33 != 0) {
            v34 = 128;
            if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
              v34 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v34, v33);
            v24 = v21[24];
          }
          v21[24] = v24 - 8;
        }
      }
    }
    *(_DWORD*)(v10 + 832) = a2;
    *(_DWORD*)(v10 + 320) = 3;
    GameRoutine_60a020(v10 + 840, a3);
  }
  return v5;
}

__int64 llvm_libcxx_21_libcxx_include___functional_17a8b60(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  char v6;
  __int16 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  // Order and alignment put both objects at the original's frame offsets.
  struct __attribute__((aligned(16))) {
    char* v14[4];
    char** v15;
  } v14_;
  struct __attribute__((aligned(16))) {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = *(_QWORD*)(a1 + 8);
  }
  if (v2 == 0) {
    return 8;
  }
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1680, 16, 0);
  v14_.v14[0] = "MID_MouseCalibration_Check";
  GameRoutine_1647b80(v3, v14_.v14);
  *(_QWORD*)(v3 + 1536) = 0;
  *(_QWORD*)(v3 + 1544) = 0;
  *(_QWORD*)(v3 + 1504) = 0;
  *(_QWORD*)(v3 + 1512) = 0;
  *(_QWORD*)(v3 + 1520) = 0;
  *(_QWORD*)(v3 + 1552) = 0;
  *(_QWORD*)(v3 + 1560) = 0;
  *(_QWORD*)(v3 + 1568) = 0;
  *(_QWORD*)(v3 + 1576) = 0;
  *(_QWORD*)v3 = game_menu_anonymous_CalibrationDialog_vtable;
  *(_QWORD*)(v3 + 1592) = 0;
  *(_QWORD*)(v3 + 1600) = 0;
  *(_QWORD*)(v3 + 1608) = 0;
  *(_WORD*)(v3 + 1624) = 0;
  *(_WORD*)(v3 + 1648) = 0;
  *(_BYTE*)(v3 + 1672) = 0;
  *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20d13b8;
  *(_QWORD*)(v3 + 1492) = 0xFFFFFFFFLL;
  *(_QWORD*)(v3 + 1528) = v3 + 1536;
  *(_DWORD*)(v3 + 1584) = 1065353216;
  *(_DWORD*)(v3 + 1616) = 1065353216;
  v4 = *(_QWORD*)(v2 + 40);
  if (v4 != 0) {
    *(_QWORD*)(v4 + 48) = v3;
    *(_QWORD*)(v3 + 56) = *(_QWORD*)(v2 + 40);
  }
  *(_QWORD*)(v2 + 40) = v3;
  *(_QWORD*)(v3 + 24) = "T";
  *(_QWORD*)(v3 + 32) = v2;
  *(_DWORD*)(v3 + 140) = (unsigned int)game_HashString32("T");
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 24;
  *(_QWORD*)(v3 + 80) = 1;
  *(_QWORD*)(v3 + 8) = &GameData_2174f00;
  *(_QWORD*)(v3 + 16) = &GameData_2174f00;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3) & 1) != 0 &&
      (*(_WORD*)(v3 + 136) & 0x100) == 0) {
    *(_WORD*)(v3 + 136) |= 0x100u;
  }
  v5 = *(_BYTE**)(v3 + 32);
  v6 = v5[138];
  if (v6 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v5 + 64LL))(*(_QWORD*)(v3 + 32));
    v6 = v5[138];
  }
  v5[138] = v6 + 1;
  v12_.v13 = v12_.v12;
  v7 = *(_WORD*)(v3 + 136);
  v14_.v15 = v14_.v14;
  *(_WORD*)(v3 + 136) = v7 | 2;
  v12_.v12[0] = GameData_20d1520;
  v14_.v14[0] = (const char*)GameData_20d1520;
  GameRoutine_654050(v14_.v14, (_QWORD*)(v3 + 1200));
  if (v14_.v15 == v14_.v14) {
    v8 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_17;
    }
    v8 = 40;
  }
  (*(void (**)(void*)) & (*v14_.v15)[v8])((void*)v14_.v15);
LABEL_17:
  if (v12_.v13 == v12_.v12) {
    v9 = 32;
    goto LABEL_21;
  }
  if (v12_.v13 != nullptr) {
    v9 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v12_.v13 + v9))((__int64)v12_.v13);
  }
  v14_.v15 = nullptr;
  GameRoutine_6680e0(v14_.v14, (_QWORD*)(v3 + 1248));
  if (v14_.v15 == v14_.v14) {
    v10 = 32;
    goto LABEL_26;
  }
  if (v14_.v15 != nullptr) {
    v10 = 40;
  LABEL_26:
    (*(void (**)(void*)) & (*v14_.v15)[v10])((void*)v14_.v15);
  }
  return 8;
}

__int64 llvm_libcxx_21_libcxx_include___functional_17b13c0(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _WORD* v6;
  unsigned int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _WORD* v11;
  int v12;
  __int64 v13;
  int v14;
  unsigned __int16* v15;
  unsigned int v16;
  _QWORD* v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v25;
  _BYTE v26[8];
  int v27;

  v2 = *a2;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1408, 16, 0);
  game_menu_1789cf0_alt1(v3, (__int64)"EquipUnitSelectMenu");
  *(_DWORD*)(v3 + 1184) = 0;
  *(_DWORD*)(v3 + 1208) = 0;
  *(_QWORD*)(v3 + 1216) = 0;
  *(_QWORD*)(v3 + 1224) = 0;
  *(_QWORD*)(v3 + 1232) = 0;
  *(_QWORD*)(v3 + 1200) = 0xFFFFFFFFLL;
  *(_QWORD*)(v3 + 1280) = 0;
  *(_QWORD*)(v3 + 1296) = 0;
  *(_QWORD*)(v3 + 1304) = 0;
  *(_BYTE*)(v3 + 1312) = 0;
  *(_QWORD*)(v3 + 1328) = 0;
  *(_QWORD*)(v3 + 1336) = 0;
  *(_QWORD*)(v3 + 1344) = 0;
  *(_QWORD*)(v3 + 1352) = 0;
  *(_QWORD*)(v3 + 1360) = 0;
  *(_QWORD*)(v3 + 1368) = 0;
  *(_DWORD*)(v3 + 1240) = 2;
  *(_QWORD*)(v3 + 1376) = 0;
  *(_QWORD*)(v3 + 1384) = 0;
  *(_BYTE*)(v3 + 1392) = 1;
  *(_QWORD*)v3 = game_menu_anonymous_ProcSupplyPart2Menu_vtable;
  *(_QWORD*)(v3 + 176) = GameData_20d4238;
  *(_QWORD*)(v3 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20d4308;
  ProcInst_657850_alt1(v3, (__int64)GameData_212c730, "ProcSupplyPart2Menu", 1,
                       v2);
  v27 = 17;
  v4 = game_UnitPool_GetFirst(&v27);
  if (v4 != 0) {
    v5 = *(_QWORD*)(v4 + 432);
    v6 = (_WORD*)v4;
    if (v5 == 0) {
      v5 = *(_QWORD*)(v4 + 440);
      if (v5 != 0) {
        v7 = *(unsigned __int8*)(v5 + 16);
        if (v7 <= 8) {
          v25 = v7 - 3;
          while (1) {
            if (v25 == 0) {
              v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v5 != 0) {
                break;
              }
            }
            if (++v25 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v5 = 0;
        }
      }
    }
    v8 = GameData_212c878[0];
    v9 = game_TransporterConst_List_instance__ptr[0];
    v10 = GameData_2131bb8[0] + 16;
  LABEL_8:
    while (1) {
      v11 = v6 + 414;
      v12 = 0;
      v13 = v5;
      while (1) {
        if (v6[414] != 0) {
          v14 = (v6[418] != 0) + 1;
        }
        else {
          v14 = v6[418] != 0;
        }
        if (v6[422] != 0) {
          ++v14;
        }
        if (v6[426] != 0) {
          ++v14;
        }
        if (v6[430] != 0) {
          ++v14;
        }
        if (v6[434] != 0) {
          ++v14;
        }
        if (v12 >= v14) {
          break;
        }
        v15 = &v11[4 * v12];
        if (*v15 != 0) {
          v16 = *(
              unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * *v15) +
                                72LL);
          if (v16 >= 8 && v16 != 13) {
            game_UnitUtil_UniqueMap_Commit_89abc0(
                (void*)((__int64)v26), *(_QWORD*)(*(_QWORD*)v9 + 8LL), v15, 1);
            if ((v12 & 0x80000000) == 0) {
              v18 = &v11[4 * v12];
              if (*(_WORD*)v18 != 0) {
                *v18 = 0;
                game_UnitItemList_Sort((__int64)(v6 + 414), 0, 6);
                game_UnitItemList_Sort((__int64)(v6 + 414), 6u, 24);
              }
            }
            --v12;
          }
        }
        ++v12;
      }
      game_UnitItemList_Sort((__int64)(v6 + 414), 0, 6);
      game_UnitItemList_Sort((__int64)(v6 + 414), 6u, 24);
      v19 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
      *(_WORD*)(v19 + 16) = 0;
      *(_DWORD*)(v19 + 40) = 0;
      *(_QWORD*)(v19 + 48) = 0;
      *(_QWORD*)(v19 + 56) = 0;
      *(_QWORD*)(v19 + 64) = 0;
      *(_QWORD*)(v19 + 72) = 0;
      *(_QWORD*)(v19 + 88) = v6;
      *(_QWORD*)v19 = v10;
      *(_QWORD*)(v19 + 8) = 0;
      *(_WORD*)(v19 + 80) = 257;
      *(_BYTE*)(v19 + 82) = 1;
      v20 = game_Unit_IsUnlocked((__int64)v6);
      *(_BYTE*)(v19 + 96) = 0;
      *(_QWORD*)v19 = game_menu_anonymous_NoDeplyUnitMenuItem_vtable;
      *(_BYTE*)(v19 + 82) = v20;
      BasicMenuCursor_16e0c00((_QWORD*)v3, v19);
      if (v13 == 0) {
        break;
      }
      v5 = *(_QWORD*)(v13 + 432);
      v6 = (_WORD*)v13;
      if (v5 == 0) {
        v21 = *(_QWORD*)(v13 + 440);
        v6 = (_WORD*)v13;
        if (v21 != 0) {
          v22 = *(unsigned __int8*)(v21 + 16);
          v5 = 0;
          v6 = (_WORD*)v13;
          if (v22 <= 8) {
            v23 = v22 - 3;
            while (1) {
              if (v23 == 0) {
                v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v5 != 0) {
                  break;
                }
              }
              if (++v23 == 6) {
                v5 = 0;
                v6 = (_WORD*)v13;
                goto LABEL_8;
              }
            }
            v6 = (_WORD*)v13;
          }
        }
      }
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v3 + 1032LL))(v3);
  return game_menu_BasicMenu_Unknown16de2e0(v3, 0);
}

void llvm_libcxx_21_libcxx_include___functional_17b1f70(__int64 a1, __int64 a2)
{
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
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  char v21;
  __int64* v22;
  __int64 v23;
  struct {
    __int64 v24;
    __int64* v25;
    char gap16_[16];
    __int64* v26;
  } v24_;
  __int64 v27;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1200, 16, 0);
  v24_.v24 = 0;
  v24_.v25 = nullptr;
  game_menu_16dcd30(v5, (__int64)"SubMenu", &v24_.v24, 0);
  v6 = GameData_212d6a8;
  v7 = (__int64)v24_.v25;
  *(_QWORD*)v5 = GameData_212d6a8 + 2;
  *(_QWORD*)(v5 + 176) = v6 + 143;
  *(_QWORD*)(v5 + 1056) = v6 + 169;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(v5 + 1064) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_DWORD*)(v5 + 1072) = 2;
  *(_QWORD*)(v5 + 1076) = 0;
  *(_QWORD*)v5 = game_menu_anonymous_AllAutoMenu_vtable;
  *(_QWORD*)(v5 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20d5c80;
  *(_QWORD*)(v5 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20d5bb0;
  *(_DWORD*)(v5 + 1136) = 1103731098;
  if (v8 != 0) {
    if (v8 == a2) {
      *(_QWORD*)(v5 + 1184) = v5 + 1152;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
    }
    else {
      *(_QWORD*)(v5 + 1184) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    }
  }
  else {
    *(_QWORD*)(v5 + 1184) = 0;
  }
  ProcInst_657850_alt1(v5, (__int64)GameData_212c730, "AllAutoMenu", 1, a1);
  v9 = (__int64*)GameData_212dbb8[0];
  v10 = *(_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0 && *(_BYTE*)(v10 + 9) == 1 &&
      *(_DWORD*)(v10 + 136) == 1) {
    v27 = 0;
    v24_.v26 = &v24_.v24;
    v24_.v24 = GameData_2131908[0] + 16;
    v24_.v25 = &v27;
    GameRoutine_15b59e0((__int64)&v24_.v24);
    if (v24_.v26 == &v24_.v24) {
      v11 = 32;
    }
    else {
      if (v24_.v26 == nullptr) {
        goto LABEL_17;
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*v24_.v26 + v11))((__int64)v24_.v26);
  LABEL_17:
    if (v27 == 0) {
      goto LABEL_19;
    }
  }
  v12 = fw_memory_HeapManager_Allocate(*v4, 160, 16, 0);
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
  *(_QWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 104) = 0;
  *(_QWORD*)(v12 + 112) = 0;
  *(_QWORD*)(v12 + 120) = 0;
  *(_QWORD*)(v12 + 128) = 0;
  *(_QWORD*)(v12 + 136) = 0;
  *(_QWORD*)(v12 + 144) = 0;
  *(_QWORD*)(v12 + 152) = 0;
  *(_BYTE*)(v12 + 17) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_WORD*)(v12 + 80) = 257;
  *(_BYTE*)(v12 + 82) = 1;
  *(_QWORD*)(v12 + 144) = 0;
  *(_QWORD*)v12 = game_menu_anonymous_AutoEquipMenuItem_vtable;
  *(_QWORD*)(v12 + 8) = 0;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v12);
  v13 = fw_memory_HeapManager_Allocate(*v4, 160, 16, 0);
  *(_QWORD*)(v13 + 16) = 0;
  *(_QWORD*)(v13 + 24) = 0;
  *(_QWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_QWORD*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_QWORD*)(v13 + 80) = 0;
  *(_QWORD*)(v13 + 88) = 0;
  *(_QWORD*)(v13 + 96) = 0;
  *(_QWORD*)(v13 + 104) = 0;
  *(_QWORD*)(v13 + 112) = 0;
  *(_QWORD*)(v13 + 120) = 0;
  *(_QWORD*)(v13 + 128) = 0;
  *(_QWORD*)(v13 + 136) = 0;
  *(_QWORD*)(v13 + 144) = 0;
  *(_QWORD*)(v13 + 152) = 0;
  *(_BYTE*)(v13 + 17) = 0;
  *(_QWORD*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_WORD*)(v13 + 80) = 257;
  *(_BYTE*)(v13 + 82) = 1;
  *(_QWORD*)(v13 + 144) = 0;
  *(_QWORD*)v13 = game_menu_anonymous_AutoDepositMenuItem_vtable;
  *(_QWORD*)(v13 + 8) = 0;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v13);
LABEL_19:
  v14 = fw_memory_HeapManager_Allocate(*v4, 160, 16, 0);
  *(_QWORD*)(v14 + 16) = 0;
  *(_QWORD*)(v14 + 24) = 0;
  *(_QWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_QWORD*)(v14 + 80) = 0;
  *(_QWORD*)(v14 + 88) = 0;
  *(_QWORD*)(v14 + 96) = 0;
  *(_QWORD*)(v14 + 104) = 0;
  *(_QWORD*)(v14 + 112) = 0;
  *(_QWORD*)(v14 + 120) = 0;
  *(_QWORD*)(v14 + 128) = 0;
  *(_QWORD*)(v14 + 136) = 0;
  *(_QWORD*)(v14 + 144) = 0;
  *(_QWORD*)(v14 + 152) = 0;
  *(_BYTE*)(v14 + 17) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_WORD*)(v14 + 80) = 257;
  *(_BYTE*)(v14 + 82) = 1;
  *(_QWORD*)(v14 + 144) = 0;
  *(_QWORD*)v14 = game_menu_anonymous_AutoSkillMenuItem_vtable;
  *(_QWORD*)(v14 + 8) = 0;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v14);
  v15 = fw_memory_HeapManager_Allocate(*v4, 160, 16, 0);
  *(_QWORD*)(v15 + 16) = 0;
  *(_QWORD*)(v15 + 24) = 0;
  *(_QWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_QWORD*)(v15 + 80) = 0;
  *(_QWORD*)(v15 + 88) = 0;
  *(_QWORD*)(v15 + 96) = 0;
  *(_QWORD*)(v15 + 104) = 0;
  *(_QWORD*)(v15 + 112) = 0;
  *(_QWORD*)(v15 + 120) = 0;
  *(_QWORD*)(v15 + 128) = 0;
  *(_QWORD*)(v15 + 136) = 0;
  *(_QWORD*)(v15 + 144) = 0;
  *(_QWORD*)(v15 + 152) = 0;
  *(_BYTE*)(v15 + 17) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_WORD*)(v15 + 80) = 257;
  *(_BYTE*)(v15 + 82) = 1;
  *(_QWORD*)(v15 + 144) = 0;
  *(_QWORD*)v15 = game_menu_anonymous_AutoArtsMenuItem_vtable;
  *(_QWORD*)(v15 + 8) = 0;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v15);
  v16 = *v9;
  if (*v9 != 0 && *(_BYTE*)(v16 + 9) == 1 && *(_DWORD*)(v16 + 136) == 1 ||
      *GameData_212ea58 != 0) {
    return;
  }
  v27 = 0;
  v24_.v26 = &v24_.v24;
  v24_.v24 = GameData_2131910[0] + 16;
  v24_.v25 = &v27;
  GameRoutine_15b5f20((__int64)&v24_.v24);
  if (v24_.v26 == &v24_.v24) {
    v17 = 32;
    goto LABEL_27;
  }
  if (v24_.v26 != nullptr) {
    v17 = 40;
  LABEL_27:
    (*(void (**)(__int64))(*v24_.v26 + v17))((__int64)v24_.v26);
  }
  if (v27 == 0 && (game_facility_g_unknown_2259368 & 1) == 0) {
    v18 = fw_memory_HeapManager_Allocate(*v4, 160, 16, 0);
    *(_WORD*)(v18 + 16) = 0;
    *(_DWORD*)(v18 + 40) = 0;
    *(_QWORD*)(v18 + 48) = 0;
    *(_QWORD*)(v18 + 56) = 0;
    *(_QWORD*)(v18 + 64) = 0;
    *(_QWORD*)(v18 + 72) = 0;
    *(_QWORD*)(v18 + 128) = 0;
    *(_QWORD*)(v18 + 144) = 0;
    *(_BYTE*)(v18 + 152) = 0;
    *(_BYTE*)(v18 + 80) = 1;
    *(_BYTE*)(v18 + 82) = 1;
    *(_QWORD*)v18 = game_menu_anonymous_AutoDeployMenuItem_vtable;
    *(_QWORD*)(v18 + 8) = 0;
    v19 = game_820d50(7);
    if (game_GameModeData_instance_ != 0 &&
            (v20 = game_GameVariableTable_Find(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)v19)) != 0 &&
            *(_DWORD*)(v20 + 32) != 0 ||
        !GameRoutine_822320(3u)) {
      v22 = game_820d50(6);
      if (game_GameModeData_instance_ != 0 &&
              (v23 = game_GameVariableTable_Find(
                   *(_QWORD**)(game_GameModeData_instance_ + 48),
                   (unsigned __int64*)v22)) != 0 &&
              *(_DWORD*)(v23 + 32) != 0 ||
          (v21 = 1, !GameRoutine_822320(1u))) {
        v21 = 0;
      }
    }
    else {
      v21 = 1;
    }
    *(_BYTE*)(v18 + 81) = v21;
    BasicMenuCursor_16e0c00((_QWORD*)v5, v18);
  }
}

void llvm_libcxx_21_libcxx_include___functional_17b2470(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;

  *a1 = game_menu_anonymous_UnitSubMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20d4960;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20d4a30;
  v2 = a1 + 150;
  v3 = (_QWORD*)a1[154];
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
  v5 = (_QWORD*)a1[148];
  if (v5 == a1 + 144) {
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
  v7 = (_QWORD*)a1[140];
  *a1 = game_menu_SubMenu_vtable;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_209e898;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_209e7c8;
  if (v7 == a1 + 136) {
    v8 = 32;
    goto LABEL_15;
  }
  if (v7 != nullptr) {
    v8 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
}

void llvm_libcxx_21_libcxx_include___functional_17b2560(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  *a1 = game_menu_anonymous_UnitSubMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20d4960;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20d4a30;
  v2 = a1 + 150;
  v3 = (_QWORD*)a1[154];
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
  v5 = (_QWORD*)a1[148];
  if (v5 == a1 + 144) {
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
  v7 = (_QWORD*)a1[140];
  *a1 = game_menu_SubMenu_vtable;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_209e898;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_209e7c8;
  if (v7 == a1 + 136) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_16:
  game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                (__int64)a1);
}

__int64 llvm_libcxx_21_libcxx_include___functional_1847710(__int64 a1, int a2,
                                                           __int64 a3)
{
  const char* v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned int v16;
  __int128 v17;
  struct {
    __int64 (**v18)();
    unsigned __int64 v19;
    unsigned __int64 v20;
    unsigned __int64 v21;
    unsigned __int64 v22;
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
  } v18_;

  v6 = *(const char**)(*(_QWORD*)a3 + 32LL);
  if (v6 != nullptr && *v6 != 0) {
    v18_.v23 = -1;
    v18_.v24 = -1;
    v18_.v25 = -1;
    v18_.v26 = -1;
    v7 = *msg_MessageManager_instance__ptr[0];
    v18_.v27 = -1;
    v18_.v28 = -1;
    v18_.v29 = -1;
    v18_.v30 = -1;
    v18_.v31 = -1;
    v18_.v32 = -1;
    v18_.v33 = -1;
    v18_.v34 = -1;
    v18_.v18 = msg_TagSelector_vtable;
    v18_.v19 = 0xFFFF0001FFFF0000LL;
    v18_.v20 = 0xFFFF0004FFFF0002LL;
    v18_.v21 = 0xFFFF0006FFFF0005LL;
    v18_.v35 = 8;
    v18_.v22 = 0xFFFF0008FFFF0007LL;
    v8 = GameRoutine_a4dbe0(v7, v6, 0);
  }
  else {
    v8 = msg_MessageManager_empty_text_;
  }
  *(_QWORD*)a1 = GameData_212d630[0] + 2;
  *(_QWORD*)(a1 + 8) = 0;
  v9 = GameRoutine_1a09c70_alt1(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16, 0);
    *(_QWORD*)(a1 + 24) = v10;
    *(_QWORD*)(a1 + 32) = v11;
    *(_QWORD*)(a1 + 16) = v12 | 1;
    goto LABEL_13;
  }
  v11 = a1 + 17;
  *(_BYTE*)(a1 + 16) = 2 * v9;
  if (v9 != 0) {
  LABEL_13:
    GameRoutine_1a0b940(v11, (__int64)v8, v10);
  }
  *(_BYTE*)(v11 + v10) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_DWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 40) = a2;
  *(_WORD*)(a1 + 80) = 257;
  *(_BYTE*)(a1 + 82) = 1;
  *(_QWORD*)a1 = game_menu_anonymous_SubquestMenuItem_vtable;
  result = GameData_22124e8;
  *(_QWORD*)(a1 + 144) = SubQuestInfo_Destructor_ptr_20e5168;
  *(_QWORD*)(a1 + 152) = a3;
  if (result != 0) {
    QuestSupport_1030400((void*)(&v18_.v18), result, a3);
    result = *(_QWORD*)(a1 + 112);
    *(_DWORD*)(a1 + 96) = (_DWORD)v18_.v18;
    v14 = v18_.v19;
    v15 = v18_.v20;
    v18_.v19 = 0;
    v18_.v20 = 0;
    *(_QWORD*)(a1 + 104) = v14;
    *(_QWORD*)(a1 + 112) = v15;
    if (result != 0) {
      std___1___shared_weak_count___release_weak(result);
      result = v18_.v20;
    }
    v16 = v18_.v23;
    *(_QWORD*)(a1 + 128) = v18_.v22;
    v17 = *(_OWORD*)(a1 + 128);
    *((_QWORD*)&v17 + 1) = v16;
    *(_OWORD*)(a1 + 128) = v17;
    if (result != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

void llvm_libcxx_21_libcxx_include___functional_18659c0(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 (**v13)();
    char* v14;
    char gap16_[16];
    __int64 (***v15)();
  } v13_;
  char v16;

  v3 = *a2;
  v16 = 0;
  GameData_226b31c = 0;
  v13_.v15 = &v13_.v13;
  v13_.v13 = GameData_20f10b8;
  v13_.v14 = &v16;
  GameRoutine_8a29c0(v3, (__int64)&v13_.v13);
  if (v13_.v15 == &v13_.v13) {
    v5 = 4;
  }
  else {
    if (v13_.v15 == nullptr) {
      goto LABEL_6;
    }
    v5 = 5;
  }
  ((__int64 (*)(__int64))(*v13_.v15)[v5])((__int64)v13_.v15);
LABEL_6:
  if (v16 == 1) {
    GameRoutine_1703290(a1, a2);
  }
  else {
    v6 = *a2;
    if (*a2 != 0) {
      v7 = (__int64*)fw_memory_g_heap_manager_ptr;
      v8 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1072, 16, 0);
      v13_.v13 = nullptr;
      v13_.v14 = nullptr;
      game_menu_16dcd30((__int64)v8, (__int64)"ProcItemShopMenu", &v13_.v13, 0);
      v9 = GameData_212d6a8;
      v10 = (__int64)v13_.v14;
      *v8 = GameData_212d6a8 + 2;
      v8[22] = v9 + 143;
      v8[132] = v9 + 169;
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
      v8[133] = v6;
      *v8 = game_facility_anonymous_ProcItemShopMenu_vtable_20f0818;
      v8[22] = game_menu_MenuInput_InputUnknown00_ptr_20f0cb0;
      v8[132] = GameData_20f0d80;
      ProcInst_657850_alt1((__int64)v8, (__int64)GameData_212c730,
                           "ProcItemShopMenu", 1, a1);
      v11 = fw_memory_HeapManager_Allocate(*v7, 96, 16, 0);
      *(_WORD*)(v11 + 16) = 0;
      *(_DWORD*)(v11 + 40) = 0;
      *(_QWORD*)(v11 + 48) = 0;
      *(_QWORD*)(v11 + 56) = 0;
      *(_QWORD*)(v11 + 64) = 0;
      *(_QWORD*)(v11 + 72) = 0;
      *(_BYTE*)(v11 + 82) = 1;
      *(_QWORD*)(v11 + 88) = v6;
      *(_WORD*)(v11 + 80) = 257;
      *(_QWORD*)v11 = game_facility_anonymous_ItemShopBuyMenuItem_vtable;
      *(_QWORD*)(v11 + 8) = 0;
      BasicMenuCursor_16e0c00(v8, v11);
      v12 = fw_memory_HeapManager_Allocate(*v7, 96, 16, 0);
      *(_QWORD*)(v12 + 16) = 0;
      *(_QWORD*)(v12 + 24) = 0;
      *(_QWORD*)(v12 + 32) = 0;
      *(_QWORD*)(v12 + 40) = 0;
      *(_QWORD*)(v12 + 80) = 0;
      *(_QWORD*)(v12 + 88) = 0;
      *(_BYTE*)(v12 + 17) = 0;
      *(_QWORD*)(v12 + 48) = 0;
      *(_QWORD*)(v12 + 56) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 0;
      *(_WORD*)(v12 + 80) = 257;
      *(_BYTE*)(v12 + 82) = 1;
      *(_QWORD*)v12 = GameData_2131c98[0] + 16;
      *(_QWORD*)(v12 + 8) = 0;
      BasicMenuCursor_16e0c00(v8, v12);
    }
  }
}

__int64 llvm_libcxx_21_libcxx_include___functional_18b4540(__int64 a1,
                                                           _QWORD* a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v5;
  float v6;
  float v7;
  float* v8;
  __int128 v9;
  float v10;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s2", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  v2 = (_QWORD*)*a2;
  if (*a2 != 0 &&
      __dynamic_cast(*a2, GameData_21319a0, GameData_2132090[0], -2) != 0) {
    v5 = a2[1];
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      v2 = (_QWORD*)*a2;
    }
    ui_control_1886790(v2),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s2", "=w")),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
    **(float**)(a1 + 8) = v6 + **(float**)(a1 + 8);
    *(float*)(*(_QWORD*)(a1 + 8) + 4LL) =
        v7 + *(float*)(*(_QWORD*)(a1 + 8) + 4LL);
    v8 = *(float**)(a1 + 8);
    v9 = *(_OWORD*)v8;
    *((float*)&v9 + 2) = v10 + v8[2];
    DWORDn(v9, sizeof(v9) / 4 - 1) = 0;
    *(_OWORD*)v8 = v9;
    ++**(_DWORD**)(a1 + 16);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s2", "=w")),
          v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak(v5),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s2", "=w")),
          v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  return 0;
}

__int64 llvm_libcxx_21_libcxx_include___functional_19a43d0(__int64 a1,
                                                           __int64 a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int128 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int128 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int128 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int128 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int128 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int128 v33;
  __int64 v34;
  __int64 v35;
  __int64 result;
  __int128 v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;

  v6 = game_util_Format_alt1("%s_ArrivalSpotColor", "Default");
  v7 = fs_609260(a2 + 800, v6, 1);
  if ((a3 & 1) != 0) {
    v8 = *(_QWORD*)(v7 + 24);
    if (v8 != 0) {
      GameRoutine_1a09cc0(v8, "%f,%f,%f,%f", &v41, &v40, &v39, &v38);
      *(_QWORD*)&v9 = __PAIR64__(v40, v41);
      *((_QWORD*)&v9 + 1) = __PAIR64__(v38, v39);
      *(_OWORD*)(a1 + 16) = v9;
    }
  }
  else {
    fs_609140(v7, "%f,%f,%f,%f", COERCE_FLOAT(*(_OWORD*)(a1 + 16)),
              COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 16))),
              COERCE_FLOAT(*(_QWORD*)(a1 + 24)),
              COERCE_FLOAT(HIDWORD(*(_OWORD*)(a1 + 16))));
  }
  v10 = game_util_Format_alt1("%s_NoArrivalSpotColor", "Default");
  v11 = fs_609260(a2 + 800, v10, 1);
  if ((a3 & 1) != 0) {
    v12 = *(_QWORD*)(v11 + 24);
    if (v12 != 0) {
      GameRoutine_1a09cc0(v12, "%f,%f,%f,%f", &v41, &v40, &v39, &v38);
      *(_QWORD*)&v13 = __PAIR64__(v40, v41);
      *((_QWORD*)&v13 + 1) = __PAIR64__(v38, v39);
      *(_OWORD*)(a1 + 80) = v13;
    }
  }
  else {
    fs_609140(v11, "%f,%f,%f,%f", COERCE_FLOAT(*(_OWORD*)(a1 + 80)),
              COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 80))),
              COERCE_FLOAT(*(_QWORD*)(a1 + 88)),
              COERCE_FLOAT(HIDWORD(*(_OWORD*)(a1 + 80))));
  }
  v14 = game_util_Format_alt1("%s_ArrivalSpotColor", "Disable");
  v15 = fs_609260(a2 + 800, v14, 1);
  if ((a3 & 1) != 0) {
    v16 = *(_QWORD*)(v15 + 24);
    if (v16 != 0) {
      GameRoutine_1a09cc0(v16, "%f,%f,%f,%f", &v41, &v40, &v39, &v38);
      *(_QWORD*)&v17 = __PAIR64__(v40, v41);
      *((_QWORD*)&v17 + 1) = __PAIR64__(v38, v39);
      *(_OWORD*)(a1 + 32) = v17;
    }
  }
  else {
    fs_609140(v15, "%f,%f,%f,%f", COERCE_FLOAT(*(_OWORD*)(a1 + 32)),
              COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 32))),
              COERCE_FLOAT(*(_QWORD*)(a1 + 40)),
              COERCE_FLOAT(HIDWORD(*(_OWORD*)(a1 + 32))));
  }
  v18 = game_util_Format_alt1("%s_NoArrivalSpotColor", "Disable");
  v19 = fs_609260(a2 + 800, v18, 1);
  if ((a3 & 1) != 0) {
    v20 = *(_QWORD*)(v19 + 24);
    if (v20 != 0) {
      GameRoutine_1a09cc0(v20, "%f,%f,%f,%f", &v41, &v40, &v39, &v38);
      *(_QWORD*)&v21 = __PAIR64__(v40, v41);
      *((_QWORD*)&v21 + 1) = __PAIR64__(v38, v39);
      *(_OWORD*)(a1 + 96) = v21;
    }
  }
  else {
    fs_609140(v19, "%f,%f,%f,%f", COERCE_FLOAT(*(_OWORD*)(a1 + 96)),
              COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 96))),
              COERCE_FLOAT(*(_QWORD*)(a1 + 104)),
              COERCE_FLOAT(HIDWORD(*(_OWORD*)(a1 + 96))));
  }
  v22 = game_util_Format_alt1("%s_ArrivalSpotColor", "Broken");
  v23 = fs_609260(a2 + 800, v22, 1);
  if ((a3 & 1) != 0) {
    v24 = *(_QWORD*)(v23 + 24);
    if (v24 != 0) {
      GameRoutine_1a09cc0(v24, "%f,%f,%f,%f", &v41, &v40, &v39, &v38);
      *(_QWORD*)&v25 = __PAIR64__(v40, v41);
      *((_QWORD*)&v25 + 1) = __PAIR64__(v38, v39);
      *(_OWORD*)(a1 + 48) = v25;
    }
  }
  else {
    fs_609140(v23, "%f,%f,%f,%f", COERCE_FLOAT(*(_OWORD*)(a1 + 48)),
              COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 48))),
              COERCE_FLOAT(*(_QWORD*)(a1 + 56)),
              COERCE_FLOAT(HIDWORD(*(_OWORD*)(a1 + 48))));
  }
  v26 = game_util_Format_alt1("%s_NoArrivalSpotColor", "Broken");
  v27 = fs_609260(a2 + 800, v26, 1);
  if ((a3 & 1) != 0) {
    v28 = *(_QWORD*)(v27 + 24);
    if (v28 != 0) {
      GameRoutine_1a09cc0(v28, "%f,%f,%f,%f", &v41, &v40, &v39, &v38);
      *(_QWORD*)&v29 = __PAIR64__(v40, v41);
      *((_QWORD*)&v29 + 1) = __PAIR64__(v38, v39);
      *(_OWORD*)(a1 + 112) = v29;
    }
  }
  else {
    fs_609140(v27, "%f,%f,%f,%f", COERCE_FLOAT(*(_OWORD*)(a1 + 112)),
              COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 112))),
              COERCE_FLOAT(*(_QWORD*)(a1 + 120)),
              COERCE_FLOAT(HIDWORD(*(_OWORD*)(a1 + 112))));
  }
  v30 = game_util_Format_alt1("%s_ArrivalSpotColor", "Miasma");
  v31 = fs_609260(a2 + 800, v30, 1);
  if ((a3 & 1) != 0) {
    v32 = *(_QWORD*)(v31 + 24);
    if (v32 != 0) {
      GameRoutine_1a09cc0(v32, "%f,%f,%f,%f", &v41, &v40, &v39, &v38);
      *(_QWORD*)&v33 = __PAIR64__(v40, v41);
      *((_QWORD*)&v33 + 1) = __PAIR64__(v38, v39);
      *(_OWORD*)(a1 + 64) = v33;
    }
  }
  else {
    fs_609140(v31, "%f,%f,%f,%f", COERCE_FLOAT(*(_OWORD*)(a1 + 64)),
              COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 64))),
              COERCE_FLOAT(*(_QWORD*)(a1 + 72)),
              COERCE_FLOAT(HIDWORD(*(_OWORD*)(a1 + 64))));
  }
  v34 = game_util_Format_alt1("%s_NoArrivalSpotColor", "Miasma");
  v35 = fs_609260(a2 + 800, v34, 1);
  if ((a3 & 1) == 0) {
    return fs_609140(v35, "%f,%f,%f,%f", COERCE_FLOAT(*(_OWORD*)(a1 + 128)),
                     COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 128))),
                     COERCE_FLOAT(*(_QWORD*)(a1 + 136)),
                     COERCE_FLOAT(HIDWORD(*(_OWORD*)(a1 + 128))));
  }
  result = *(_QWORD*)(v35 + 24);
  if (result != 0) {
    result = GameRoutine_1a09cc0(result, "%f,%f,%f,%f", &v41, &v40, &v39, &v38);
    *(_QWORD*)&v37 = __PAIR64__(v40, v41);
    *((_QWORD*)&v37 + 1) = __PAIR64__(v38, v39);
    *(_OWORD*)(a1 + 128) = v37;
  }
  return result;
}

#pragma GCC visibility pop
