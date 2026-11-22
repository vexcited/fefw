#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcUnitInfoFull_Unknown141(__int64 a1, __int64* a2);
_QWORD* GameRoutine_1606250(_QWORD* result);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157b780(_QWORD);
__int64 GameRoutine_1605f00(__int64);
__int64 GameRoutine_1617a20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1617d40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_906c90(_QWORD, _QWORD);
__int64 GameRoutine_975940(_QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 UnitInfoMenuItem_16061b0(__int64, __int64);
__int64 game_gameui_Util_GetMorphRage(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_16176e0(void);
void __attribute__((noreturn)) String_60a1d0(void);
_QWORD*
game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure_Invoke(__int64 a1,
                                                                 int* a2);
_QWORD*
game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure0_Invoke(__int64 a1,
                                                                  int* a2);
_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure1_Invoke(
    _QWORD* result, int* a2);
_QWORD*
game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure_Invoke(_QWORD* result,
                                                                 int* a2);
_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure0_Invoke(
    _QWORD* result, unsigned int* a2);
_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure2_Invoke(
    _QWORD* result, int* a2);
unsigned __int64
game_menu_anonymous_ProcUnitInfoFull_UpdatePage04_closure_Invoke(
    unsigned __int64 result, int* a2, __int64* a3);
__int64 ProcUnitInfoFull_1617860(__int64** a1, __int64 a2, __int64 a3,
                                 __int64 a4);
__int64
ProcUnitInfoFull_1617b80_alt1(__int64** a1, __int64 a2,
                              __int64 a3) __asm__("ProcUnitInfoFull_1617b80");
__int64 game_menu_anonymous_ProcUnitInfoFull_LCall_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
__int64 game_menu_anonymous_ProcUnitInfoFull_RCall_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
_QWORD* GameMenu_16e9cd0(__int64, __int64);
__attribute__((swiftcall)) void GameRoutine_160bc20(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64* FloatingHelp_18af120(_QWORD*, __int64*);
__int64 FloatingHelp_18aee60(_QWORD*, __int64*);
__int64 GameRoutine_1593d90(__int64, __int64);
__int64 GameRoutine_1605d40();
__int64 GameRoutine_1605dc0(_QWORD, _QWORD);
__int64 GameRoutine_160bd60(_QWORD);
__int64 GameRoutine_160be20(_QWORD);
__int64 GameRoutine_160be20_alt1(__int64*) __asm__("GameRoutine_160be20");
__int64 GameRoutine_1616a00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1616a00_alt1(__int64 result, __int64, _QWORD*,
                                 int) __asm__("GameRoutine_1616a00");
__int64 GameRoutine_18ae960(_QWORD*, char);
__int64 GameRoutine_18af480(_QWORD*, __int64*, __int64);
__int64 GameRoutine_18af980(__int64, __int64*);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 MenuItem_188bf10(_QWORD, _QWORD);
__int64 game_gameui_UnitUtil_GetNext(__int64, char, _QWORD*, char);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
bool GameRoutine_159e890(__int64, char, __int64);
extern __int64 (*GameData_2067a58[])();
extern __int64 (*GameData_2068240[])();
extern __int64 (*GameData_2068340[])();
extern __int64* GameData_212d890[2];
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_21759e0;
extern __int64 GameData_2259500;
extern __int64 game_menu_UnitGridSelectMenu_listeners_;
extern char GameData_1a9f09e;
__int64 ProcUnitInfoFull_Unknown75(__int64 a1, int a2);
__int64 ProcUnitInfoFull_Unknown84(__int64* a1);
_QWORD* game_menu_anonymous_ProcUnitInfoFull_OnOpened(__int64 a1);
__int64 ProcUnitInfoFull_Unknown94(__int64 a1);
__int64 game_menu_anonymous_ProcUnitInfoFull_RCall(__int64* a1);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcUnitInfoFull_UpdateCursorRoute_closure_Invoke(
    PSEUDO_X8 x8_, __int64 a1, __int64 a2, unsigned int* a3);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcUnitInfoFull_OnOpened_closure_Invoke(PSEUDO_X8 x8_,
                                                             __int64 a1,
                                                             _QWORD* a2,
                                                             int* a3);
__int64 ProcUnitInfoFull_1617d40(__int64, const char*, int*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
void __attribute__((noreturn))
GameRoutine_16176e0_alt1() __asm__("GameRoutine_16176e0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 ProcUnitInfoFull_1617b80(__int64* a1, const char* a2, int* a3);
_QWORD* ui_control_1886790(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__int64 FloatingHelp_18ade60(_QWORD*);
__int64 GameRoutine_15dff80(__int64, char, _QWORD*, char);
__int64 GameRoutine_160be20_alt2(__int64) __asm__("GameRoutine_160be20");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 (*GameData_20682c0[])();
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) GameRoutine_16176c0();
__int64 game_menu_anonymous_ProcUnitInfoFull_LCall(__int64 a1);
__int64 ProcUnitInfoFull_16171e0(__int64 a1, _QWORD* a2, const char* a3);
__int64 ProcUnitInfoFull_16172f0(__int64 a1, __int64 a2, __int64 a3);
_QWORD* ProcUnitInfoFull_1617540(_QWORD* result, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void
GameRoutine_160bc20_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_160bc20");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void game_16073d0(PSEUDO_X8, __int64*);
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 GameRoutine_1605dc0_alt1(__int64,
                                 _QWORD*) __asm__("GameRoutine_1605dc0");
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 MenuItem_188bf10_alt1(__int64, const char*) __asm__("MenuItem_188bf10");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_gameui_1593d90(__int64*, __int64);
__int64 ui_160bd60(__int64);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
bool game_159e890(__int64, char, __int64);
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20680f0;
extern char* msg_MessageManager_empty_text_;
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a1d0_alt2() __asm__("String_60a1d0");
__attribute__((swiftcall)) void
game_menu_anonymous_ProcUnitInfoFull_UpdateTab_closure_Invoke(PSEUDO_X8 x8_,
                                                              __int64 a1,
                                                              int* a2);
void ProcUnitInfoFull_1616a00(const char** a1, __int64 a2, _QWORD* a3, int a4);
__int64 ProcUnitInfoFull_1617700(__int64 a1, const char* a2, int* a3, int* a4);
__int64 ProcUnitInfoFull_1617a20(__int64 a1, const char* a2, int* a3, int* a4);
__int64 GameRoutine_17a4cc0(int*, __int64, float*);
__int64 LayoutAccessor_155ea30(__int64*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _UNKNOWN GameData_1ac6c8b;
__int64 ProcUnitInfoFull_Unknown89(__int64 a1);
void ProcUnitInfoFull_16165a0(__int64 a1, __int64 a2);
_QWORD* game_1607900(_QWORD* result, __int64, __int64);
_QWORD* game_gameui_control_HelpGroup_CalcCenterPosition(__int64,
                                                         __int64 (**)(),
                                                         __int128*);
__int64 ControlCreator_13633c0(__int64 result);
__int64 FloatingHelp_18af980(__int64, __int64*);
__int64 GameRoutine_1607480(__int64 result);
__int64 GameRoutine_1607600(__int64 result);
__int64 GameRoutine_1607ae0(__int64 result, __int64);
__int64 ProcUnitInfoFull_1617860_alt1(__int64*, const char*, int*, int*);
__int64 ProcUnitInfoFull_1617b80_alt2(__int64*, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt2(__int64, __int64, __int64,
                                            unsigned int);
__int64 game_gameui_18af480(_QWORD*, __int64*, __int64);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64);
__int64 std___1___shared_weak_count_lock_alt2(__int64);
__int64 ui_LayoutAccessor_FindPane_alt2(__int64*, __int64);
char* Element_1886b50(__int64, int, __int64);
extern __int64 (*GameData_20681b0[])();
unsigned __int64 GameRoutine_1a09c70(const char*);
void FloatingHelp_18aee60_alt1(_QWORD*, __int64*);
void FloatingHelp_18af120_alt1(_QWORD*, __int64*);
void __attribute__((noreturn)) GameRoutine_16176e0_alt2();
void __attribute__((noreturn)) GameRoutine_60a210_alt2();
void game_159f000(unsigned __int64*, unsigned __int8**, unsigned __int8**,
                  char);
void game_gameui_18ae960(_QWORD*, char);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64);
void ProcUnitInfoFull_1614680(__int64 a1, int a2);
_DWORD* GameRoutine_932460(unsigned __int8*, __int64*);
_QWORD* GameRoutine_6d7e80(__int64, __int64, __int64);
_QWORD* UnitInfoMenuItem_1606250(_QWORD* result);
_QWORD* Util_1576480(__int64, __int64, unsigned __int8);
__attribute__((swiftcall)) void GameRoutine_1572700(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1572840(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1573280(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_15733c0(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_15736e0(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_15d4240(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1612340(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1612480(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1612830(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_1612a90(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_fa73c0(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070_alt2(PSEUDO_X8, __int64*,
                                                            const char*);
__attribute__((swiftcall)) void Util_157b9a0(PSEUDO_X8, __int64, char);
__attribute__((swiftcall)) void game_1604880(PSEUDO_X8, unsigned int,
                                             unsigned int);
__attribute__((swiftcall)) void
game_gameui_Util_CollectBlazeArtsInfo_159c780(PSEUDO_X8, __int64);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64* GameRoutine_8c9820(__int64, __int64, unsigned __int8);
__int64* LayoutAccessor_155fbe0_alt2(__int64*, const char*);
__int64* game_820d50(int);
__int64 Alignment_56b600(__int64 result);
__int64 AsyncLoadImage_17e4db0(__int64 result, const char*, char);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameRoutine_1604340(__int64, __int64, __int64, __int64);
__int64 GameRoutine_1840740(__int64, unsigned int, __int64, unsigned __int8,
                            char);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_64be60();
__int64 GameRoutine_932360(unsigned __int8*, __int64*);
__int64 GameRoutine_95ffd0();
__int64 GameRoutine_960100();
__int64 GameRoutine_975940_alt1(__int64);
__int64 GameSituation_906c90(__int64, __int64*);
__int64 GameVariable_828f50(__int64, unsigned __int64*);
__int64 LayoutAccessor_155c780(__int64, __int64*);
__int64 LayoutAccessor_155ca60(__int64);
__int64 LayoutAccessor_155d480(__int64 result, __int64, __int64);
__int64 LayoutAccessor_155e830_alt2(__int64 result, char);
__int64 LayoutAccessor_1562cf0_alt2(__int64 result, const char*);
__int64 LayoutAccessor_1573500(__int64, char, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 MenuItemItem_189f2c0(__int64, unsigned __int16*);
__int64 Pane_58dee0(__int64 result, __int64);
__int64 Pane_58df60(__int64 result, _QWORD*);
__int64 StatusClass_189d120(_QWORD*, _QWORD*, char, char, char, char, char);
__int64 StatusHP_18920d0(_QWORD*, __int64, char);
__int64 StatusItem_188df50(__int64*, unsigned int*, char, char);
__int64 StatusItem_188e530(__int64, __int64);
__int64 StatusLV_18a30a0(__int64 result, __int64);
__int64 UnitInfoMenuItem_16061b0_alt1(__int64, const char*);
__int64 Unit_6c8300(_QWORD*, char);
__int64 Util_1575c70(__int64, __int64, int, const char*, char, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_10140c0(__int64*, __int64, int, _QWORD*, unsigned __int8*);
__int64 game_156c910(__int64 result, const char*, int, ...);
__int64 game_6e8720(__int64 result, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_UnitMastery_GetMaxJobRank(__int64, __int64);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_UnitSkillList_EachIndirectSkill(__int64, _WORD*, __int64);
__int64 game_UnitSkillList_GetMaxValue(_QWORD*, __int64*);
__int64 game_Unit_GetJob(__int64);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_GetParamLimit(_QWORD*, unsigned __int8*);
__int64 game_gameui_Util_IsVisibleSpecialPage(__int64);
__int64 game_gameui_Util_SetBasicStatusForUnitInfo(__int64 result, __int64);
__int64 game_menu_PageTab_SetupLabel(__int64, __int64*, __int64, unsigned int,
                                     unsigned int, unsigned int);
__int64 game_menu_anonymous_1612ec0(__int64 result, __int64*, _QWORD*, __int64,
                                    char);
__int64 llvm_libcxx_21_libcxx_include___functional_1611330(__int64, int);
__int64 ui_16125c0(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool GameRoutine_822320(unsigned int);
bool IconLegion_19abe40(__int64, __int64);
bool IconLegion_19abf80(__int64, __int64);
char* GameRoutine_6ed030(__int64);
char* GameRoutine_6ed1a0(__int64);
char* GameRoutine_6fbd80(__int64, int);
char* game_util_Format_alt2(const char*, ...);
char* task_a4dbe0(__int64, _BYTE*, char);
extern _DWORD* game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c8a8;
extern _UNKNOWN GameData_2067e68;
extern _UNKNOWN GameData_2067e80;
extern _UNKNOWN GameData_2067e98;
extern _UNKNOWN GameData_2067eb0;
extern _UNKNOWN GameData_2067ec8;
extern _UNKNOWN GameData_2067ee0;
extern _UNKNOWN GameData_2067ef8;
extern _UNKNOWN GameData_2067f10;
extern _UNKNOWN GameData_2067f28;
extern _UNKNOWN GameData_20683d8;
extern __int64 (***GameData_212dae8)();
extern __int64 (*GameData_2067af8[])();
extern __int64 (*GameData_2067b78[])();
extern __int64 (*GameData_2067bf8[])();
extern __int64 (*GameData_2067c78[])();
extern __int64 (*GameData_2067cf8[])();
extern __int64 (*GameData_2067d78[])();
extern __int64 (*GameData_2067df8[])();
extern __int64 (*GameData_2067ff0[])();
extern __int64 (*GameData_2068080[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64 GameData_212d690;
extern __int64 GameData_21c9988;
extern __int64 GameData_21ca310;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21f4018[];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 ui_Manager_instance_;
extern char* GameData_2067f40[];
extern char* GameData_20683c0[3];
int* GameRoutine_17a4be0(int* result, _QWORD*);
unsigned __int64 GameRoutine_975680(unsigned __int64 result, __int64);
void GameRoutine_158d1a0(__int64, __int64);
void GameRoutine_16142d0(__int64*, _DWORD*);
void GameRoutine_189e9c0(__int64);
void LayoutAccessor_1562060_alt1(__int64*, __int64, _BYTE*);
void Manager_a51e10(__int64, unsigned int, unsigned int, int);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6c1f60();
void __attribute__((noreturn)) String_60a1d0_alt3();
void game_156c5d0(__int64, __int64, char);
void game_18c9b10(__int128*, __int64, int);
void game_gameui_Util_SetGrowthRateForUnitInfo(__int64*, __int64);
void std___1_locale_Destroy_locale(__int64);
__int64 ProcUnitInfoFull_160be20(__int64 a1);

__int64 ProcUnitInfoFull_Unknown75(__int64 a1, int a2)
{
  _QWORD handle[2];
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD v5[27];

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (a2 == 14) {
    v5[25] = v2;
    v5[26] = v3;
    snd_Fade_Fade_10c830_alt1((__int64)v5, 0x0.0p+0f),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    snd_play_ff2d0_alt1((void*)(handle), (__int64)"SE_SYS_NG",
                        (__int64)"SE_SYS_NG", (__int64)v5, 0, 0x10001u, 0,
                        0x0.0p+0f, 0x1.0000000000000p+0f),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return snd_Fade_Destroy_Fade_alt1(v5);
  }
  return result;
}

__int64 ProcUnitInfoFull_Unknown84(__int64* a1)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64* v5;
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
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  int v87;
  __int64 v88;
  const char* v89;
  __int64 v90;
  const char* v91;
  __int64 v92;
  __int64* v93;
  __int64* v94;
  __int64 v95;
  __int64* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  bool v103;
  char* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64* v110;
  int v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  const char* v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  const char* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  float v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64* v132;
  __int64* v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  bool v167;
  __int64 v168;
  __int64 v169;
  const char* v170;
  __int64 v171;
  const char* v172;
  const char* v173;
  __int64 v175;
  __int64* v176;
  struct {
    _QWORD v177[4];
    _QWORD* v178;
  } v177_;
  struct {
    const char* v179;
    const char* v180;
  } v179_;
  struct {
    const char* v181;
    const char* v182;
  } v181_;
  struct {
    char* v183;
    const char* v184;
    char v185;
    char gap121_[3];
    int v186;
    int v187;
    char v188;
    char gap133_[3];
    __int64 v189;
  } v183_;
  struct {
    const char* v190;
    __int64 v191;
  } v190_;

  v1 = a1;
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), a1 + 106, "L_Page00");
  if (v183_.v184 == nullptr) {
    goto LABEL_171;
  }
  v2 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
  v3 = (__int64*)v183_.v183;
  if (v183_.v184 != nullptr) {
    std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
  }
  if (v2 == 0 || v3 == nullptr) {
    if (v2 == 0) {
      goto LABEL_171;
    }
    goto LABEL_169;
  }
  v183_.v183 = "L_Equip";
  v183_.v184 = (_BYTE*)((_UNKNOWN*)0x7LL);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
  v7 = v190_.v191;
  v8 = v6;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v6, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  else {
    GameRoutine_1605dc0_alt1(v6, &v183_.v183);
  }
  v9 = v1[155];
  v1[155] = v8;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Item%02d", 0);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v10 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v11 = v190_.v191;
  v12 = v10;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v10, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  else {
    GameRoutine_1605dc0_alt1(v10, &v183_.v183);
  }
  v13 = v1[156];
  v1[156] = v12;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Item%02d", 1);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v14 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v15 = v190_.v191;
  v16 = v14;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v14, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  else {
    GameRoutine_1605dc0_alt1(v14, &v183_.v183);
  }
  v17 = v1[157];
  v1[157] = v16;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Item%02d", 2);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v18 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v19 = v190_.v191;
  v20 = v18;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v18, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
  else {
    GameRoutine_1605dc0_alt1(v18, &v183_.v183);
  }
  v21 = v1[158];
  v1[158] = v20;
  if (v21 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Item%02d", 3);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v22 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v23 = v190_.v191;
  v24 = v22;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v22, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v23);
  }
  else {
    GameRoutine_1605dc0_alt1(v22, &v183_.v183);
  }
  v25 = v1[159];
  v1[159] = v24;
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Item%02d", 4);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v26 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v27 = v190_.v191;
  v28 = v26;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v26, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v27);
  }
  else {
    GameRoutine_1605dc0_alt1(v26, &v183_.v183);
  }
  v29 = v1[160];
  v1[160] = v28;
  if (v29 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Item%02d", 5);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v30 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v31 = v190_.v191;
  v32 = v30;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v30, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v31);
  }
  else {
    GameRoutine_1605dc0_alt1(v30, &v183_.v183);
  }
  v33 = v1[161];
  v1[161] = v32;
  if (v33 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 8LL))(v33);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = "L_Person00";
  v183_.v184 = (_BYTE*)(((_UNKNOWN**)((char*)0x8LL + 2)));
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v34 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v35 = v190_.v191;
  v36 = v34;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v34, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v35);
  }
  else {
    GameRoutine_1605dc0_alt1(v34, &v183_.v183);
  }
  v37 = v1[162];
  v1[162] = v36;
  if (v37 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 8LL))(v37);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Job%02d", 0);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v38 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v39 = v190_.v191;
  v40 = v38;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v38, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v39);
  }
  else {
    GameRoutine_1605dc0_alt1(v38, &v183_.v183);
  }
  v41 = v1[164];
  v1[164] = v40;
  if (v41 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 8LL))(v41);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Job%02d", 1);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v42 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v43 = v190_.v191;
  v44 = v42;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v42, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v43);
  }
  else {
    GameRoutine_1605dc0_alt1(v42, &v183_.v183);
  }
  v45 = v1[165];
  v1[165] = v44;
  if (v45 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Job%02d", 2);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v46 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v47 = v190_.v191;
  v48 = v46;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v46, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v47);
  }
  else {
    GameRoutine_1605dc0_alt1(v46, &v183_.v183);
  }
  v49 = v1[166];
  v1[166] = v48;
  if (v49 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 8LL))(v49);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = "L_Ride00";
  v183_.v184 = (const char*)((_UNKNOWN**)0x8LL);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v50 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v51 = v190_.v191;
  v52 = v50;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v50, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v51);
  }
  else {
    GameRoutine_1605dc0_alt1(v50, &v183_.v183);
  }
  v53 = v1[163];
  v1[163] = v52;
  if (v53 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 8LL))(v53);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Equip%02d", 1);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v54 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v55 = v190_.v191;
  v56 = v54;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v54, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v55);
  }
  else {
    GameRoutine_1605dc0_alt1(v54, &v183_.v183);
  }
  v57 = v1[167];
  v1[167] = v56;
  if (v57 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 8LL))(v57);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Equip%02d", 2);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v58 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v59 = v190_.v191;
  v60 = v58;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v58, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v59);
  }
  else {
    GameRoutine_1605dc0_alt1(v58, &v183_.v183);
  }
  v61 = v1[168];
  v1[168] = v60;
  if (v61 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v61 + 8LL))(v61);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Equip%02d", 3);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v62 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v63 = v190_.v191;
  v64 = v62;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v62, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v63);
  }
  else {
    GameRoutine_1605dc0_alt1(v62, &v183_.v183);
  }
  v65 = v1[169];
  v1[169] = v64;
  if (v65 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v65 + 8LL))(v65);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Equip%02d", 4);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v66 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v67 = v190_.v191;
  v68 = v66;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v66, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v67);
  }
  else {
    GameRoutine_1605dc0_alt1(v66, &v183_.v183);
  }
  v69 = v1[170];
  v1[170] = v68;
  if (v69 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v69 + 8LL))(v69);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Equip%02d", 5);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v70 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v71 = v190_.v191;
  v72 = v70;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v70, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v71);
  }
  else {
    GameRoutine_1605dc0_alt1(v70, &v183_.v183);
  }
  v73 = v1[171];
  v1[171] = v72;
  if (v73 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v73 + 8LL))(v73);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Blood%02d", 0);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v74 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v75 = v190_.v191;
  v76 = v74;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v74, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v75);
  }
  else {
    GameRoutine_1605dc0_alt1(v74, &v183_.v183);
  }
  v77 = v1[245];
  v1[245] = v76;
  if (v77 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v77 + 8LL))(v77);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Blood%02d", 1);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v78 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v79 = v190_.v191;
  v80 = v78;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v78, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v79);
  }
  else {
    GameRoutine_1605dc0_alt1(v78, &v183_.v183);
  }
  v81 = v1[246];
  v1[246] = v80;
  if (v81 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v81 + 8LL))(v81);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Blood%02d", 2);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v82 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v83 = v190_.v191;
  v84 = v82;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v82, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v83);
  }
  else {
    GameRoutine_1605dc0_alt1(v82, &v183_.v183);
  }
  v85 = v1[247];
  v1[247] = v84;
  if (v85 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v85 + 8LL))(v85);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v86 = LayoutAccessor_155fbe0_alt1(v3, "L_KeyHelp");
  v87 = (*(__int64 (**)(__int64*))(*v1 + 192))(v1);
  v183_.v188 = 0;
  v183_.v189 = 0;
  v183_.v183 = &GameData_1a9f09e;
  v183_.v184 = "MID_KeyHelp_StatusChange";
  v183_.v185 = 1;
  v183_.v186 = 6;
  v183_.v187 = v87;
  game_gameui_1593d90(v86, (__int64)&v183_.v183);
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), v3, "L_BattleStatusGraph");
  if (v183_.v184 != nullptr) {
    v88 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
    v89 = v183_.v183;
    if (v183_.v184 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
    }
    if (v88 != 0 && v89 != nullptr) {
      LayoutAccessor_1562cf0_alt1((__int64)v89, "BattleStatus");
    }
    else if (v88 == 0) {
      goto LABEL_160;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88);
      std___1___shared_weak_count___release_weak_alt1(v88);
    }
  }
LABEL_160:
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), v3, "L_GrowthRateGraph");
  if (v183_.v184 != nullptr) {
    v90 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
    v91 = v183_.v183;
    if (v183_.v184 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
    }
    if (v90 != 0 && v91 != nullptr) {
      LayoutAccessor_1562cf0_alt1((__int64)v91, "GrowthRateGraph");
      goto LABEL_167;
    }
    if (v90 != 0) {
    LABEL_167:
      if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
        std___1___shared_weak_count___release_weak_alt1(v90);
      }
    }
  }
LABEL_169:
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
LABEL_171:
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), v1 + 106, "L_Page01");
  if (v183_.v184 != nullptr) {
    v92 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
    v93 = (__int64*)v183_.v183;
    if (v183_.v184 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
    }
    if (v92 != 0 && v93 != nullptr) {
      v175 = v92;
      v176 = v1;
      v94 = v1 + 172;
      v95 = 0;
      v96 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v183_.v183 = game_util_Format_alt1("L_SkillCommand%02d", v95);
        v183_.v184 = (const char*)strlen_alt1(v183_.v183);
        GameRoutine_160bc20_alt1((void*)(&v190_.v190), v93, &v183_.v183);
        v97 = fw_memory_HeapManager_Allocate_alt1(*v96, 72, 16, 0);
        v98 = v190_.v191;
        v99 = v97;
        v183_.v183 = (char*)v190_.v190;
        v183_.v184 = (const char*)v190_.v191;
        if (v190_.v191 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                    1u, memory_order_relaxed);
          GameRoutine_1605dc0_alt1(v97, &v183_.v183);
          std___1___shared_weak_count___release_weak_alt1(v98);
        }
        else {
          GameRoutine_1605dc0_alt1(v97, &v183_.v183);
        }
        v100 = v94[v95];
        v94[v95] = v99;
        if (v100 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v100 + 8LL))(v100);
        }
        if (v190_.v191 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v190_.v191);
        }
        ++v95;
      } while (v95 != 7);
      v101 = -24;
      v102 = v176 + 179;
      do {
        v104 = game_util_Format_alt1("L_Magic%02d", (int)v101 + 24);
        v183_.v183 = v104;
        v183_.v184 = (const char*)strlen_alt1(v104);
        GameRoutine_160bc20_alt1((void*)(&v190_.v190), v93, &v183_.v183);
        v105 = fw_memory_HeapManager_Allocate_alt1(*v96, 72, 16, 0);
        v106 = v190_.v191;
        v107 = v105;
        v183_.v183 = (char*)v190_.v190;
        v183_.v184 = (const char*)v190_.v191;
        if (v190_.v191 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                    1u, memory_order_relaxed);
          GameRoutine_1605dc0_alt1(v105, &v183_.v183);
          std___1___shared_weak_count___release_weak_alt1(v106);
        }
        else {
          GameRoutine_1605dc0_alt1(v105, &v183_.v183);
        }
        v108 = *v102;
        *v102 = v107;
        if (v108 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v108 + 8LL))(v108);
        }
        v102[24] = ui_LayoutAccessor_FindPane_alt1(v93, (__int64)v104);
        if (v190_.v191 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v190_.v191);
        }
        v103 = __CFADD__(v101++, 1);
        ++v102;
      } while (!v103);
      v109 = -3;
      v110 = v176 + 234;
      do {
        v111 = v109 + 3;
        v183_.v183 = game_util_Format_alt1("L_Dragon%02d_Name", (int)v109 + 3);
        v183_.v184 = (const char*)strlen_alt1(v183_.v183);
        GameRoutine_160bc20_alt1((void*)(&v190_.v190), v93, &v183_.v183);
        v112 = fw_memory_HeapManager_Allocate_alt1(*v96, 72, 16, 0);
        v113 = v190_.v191;
        v114 = v112;
        v183_.v183 = (char*)v190_.v190;
        v183_.v184 = (const char*)v190_.v191;
        if (v190_.v191 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                    1u, memory_order_relaxed);
          GameRoutine_1605dc0_alt1(v112, &v183_.v183);
          std___1___shared_weak_count___release_weak_alt1(v113);
        }
        else {
          GameRoutine_1605dc0_alt1(v112, &v183_.v183);
        }
        v115 = *(v110 - 6);
        *(v110 - 6) = v114;
        if (v115 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v115 + 8LL))(v115);
        }
        v183_.v183 = game_util_Format_alt1("L_Dragon%02d_Attack", v111);
        v183_.v184 = (const char*)strlen_alt1(v183_.v183);
        GameRoutine_160bc20_alt1((void*)(&v181_.v181), v93, &v183_.v183);
        v116 = fw_memory_HeapManager_Allocate_alt1(*v96, 72, 16, 0);
        v117 = v181_.v182;
        v118 = v116;
        v183_.v183 = (char*)v181_.v181;
        v183_.v184 = v181_.v182;
        if (v181_.v182 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v181_.v182 + 16),
                                    1u, memory_order_relaxed);
          GameRoutine_1605dc0_alt1(v116, &v183_.v183);
          std___1___shared_weak_count___release_weak_alt1((__int64)v117);
        }
        else {
          GameRoutine_1605dc0_alt1(v116, &v183_.v183);
        }
        v119 = *(v110 - 3);
        *(v110 - 3) = v118;
        if (v119 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v119 + 8LL))(v119);
        }
        v183_.v183 = game_util_Format_alt1("L_Dragon%02d_Morph", v111);
        v183_.v184 = (const char*)strlen_alt1(v183_.v183);
        GameRoutine_160bc20_alt1((void*)(&v179_.v179), v93, &v183_.v183);
        v120 = fw_memory_HeapManager_Allocate_alt1(*v96, 72, 16, 0);
        v121 = v179_.v180;
        v122 = v120;
        v183_.v183 = (char*)v179_.v179;
        v183_.v184 = v179_.v180;
        if (v179_.v180 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v179_.v180 + 16),
                                    1u, memory_order_relaxed);
          GameRoutine_1605dc0_alt1(v120, &v183_.v183);
          std___1___shared_weak_count___release_weak_alt1((__int64)v121);
        }
        else {
          GameRoutine_1605dc0_alt1(v120, &v183_.v183);
        }
        v123 = *v110;
        *v110 = v122;
        if (v123 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v123 + 8LL))(v123);
        }
        if (v179_.v180 != nullptr) {
          std___1___shared_weak_count___release_weak_alt1((__int64)v179_.v180);
        }
        if (v181_.v182 != nullptr) {
          std___1___shared_weak_count___release_weak_alt1((__int64)v181_.v182);
        }
        if (v190_.v191 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v190_.v191);
        }
        v103 = __CFADD__(v109++, 1);
        ++v110;
      } while (!v103);
      v1 = v176;
      v176[227] = 0;
      v124 = ui_LayoutAccessor_FindPane_alt1(v93, (__int64)"L_Magic00");
      v125 = ui_LayoutAccessor_FindPane_alt1(v93, (__int64)"L_Info_Magic00");
      if (v124 != 0 && v125 != 0) {
        v126 = *(float*)(v125 + 52);
        *((float*)v176 + 454) = v126;
        *((float*)v176 + 455) = v126 - *(float*)(v124 + 52);
      }
      v190_.v190 = "L_Info_Magic00";
      v190_.v191 = 14;
      GameRoutine_160bc20_alt1((void*)(&v183_.v183), v93, &v190_.v190);
      v92 = v175;
      if (v183_.v184 != nullptr) {
        v127 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
        if (v127 != 0) {
          v128 = v127;
          if (v183_.v183 != nullptr) {
            MenuItem_188bf10_alt1((__int64)v183_.v183, "MID_Menu_AttackMagic");
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v128 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v128 + 16LL))(v128);
            std___1___shared_weak_count___release_weak_alt1(v128);
          }
        }
      }
      v181_.v181 = "L_Info_Magic01";
      v181_.v182 = (_BYTE*)(((_UNKNOWN**)((char*)0x8LL + 6)));
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v93, &v181_.v181);
      if (v190_.v191 != 0) {
        v129 = std___1___shared_weak_count_lock_alt1(v190_.v191);
        if (v129 != 0) {
          v130 = v129;
          if (v190_.v190 != nullptr) {
            MenuItem_188bf10_alt1((__int64)v190_.v190, "MID_Menu_SupportMagic");
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v130 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v130 + 16LL))(v130);
            std___1___shared_weak_count___release_weak_alt1(v130);
          }
        }
        if (v190_.v191 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v190_.v191);
        }
      }
      if (v183_.v184 != nullptr) {
        std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
      }
    }
    if (v92 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v92 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v92 + 16LL))(v92);
      std___1___shared_weak_count___release_weak_alt1(v92);
    }
  }
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), v1 + 106, "L_Page03");
  if (v183_.v184 != nullptr) {
    v131 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
    v132 = (__int64*)v183_.v183;
    if (v183_.v184 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
    }
    if (v131 != 0 && v132 != nullptr) {
      v183_.v183 = game_util_Format_alt1("L_Special%02d", 0);
      v183_.v184 = (const char*)strlen_alt1(v183_.v183);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v133 = (__int64*)fw_memory_g_heap_manager_ptr;
      v134 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
      v135 = v190_.v191;
      v136 = v134;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v134, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v135);
      }
      else {
        GameRoutine_1605dc0_alt1(v134, &v183_.v183);
      }
      v137 = v1[237];
      v1[237] = v136;
      if (v137 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v137 + 8LL))(v137);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = game_util_Format_alt1("L_Special%02d", 1);
      v183_.v184 = (const char*)strlen_alt1(v183_.v183);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v138 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v139 = v190_.v191;
      v140 = v138;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v138, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v139);
      }
      else {
        GameRoutine_1605dc0_alt1(v138, &v183_.v183);
      }
      v141 = v1[238];
      v1[238] = v140;
      if (v141 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v141 + 8LL))(v141);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = game_util_Format_alt1("L_Special%02d", 2);
      v183_.v184 = (const char*)strlen_alt1(v183_.v183);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v142 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v143 = v190_.v191;
      v144 = v142;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v142, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v143);
      }
      else {
        GameRoutine_1605dc0_alt1(v142, &v183_.v183);
      }
      v145 = v1[239];
      v1[239] = v144;
      if (v145 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v145 + 8LL))(v145);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = game_util_Format_alt1("L_Special%02d", 3);
      v183_.v184 = (const char*)strlen_alt1(v183_.v183);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v146 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v147 = v190_.v191;
      v148 = v146;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v146, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v147);
      }
      else {
        GameRoutine_1605dc0_alt1(v146, &v183_.v183);
      }
      v149 = v1[240];
      v1[240] = v148;
      if (v149 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v149 + 8LL))(v149);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = game_util_Format_alt1("L_Special%02d", 4);
      v183_.v184 = (const char*)strlen_alt1(v183_.v183);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v150 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v151 = v190_.v191;
      v152 = v150;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v150, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v151);
      }
      else {
        GameRoutine_1605dc0_alt1(v150, &v183_.v183);
      }
      v153 = v1[241];
      v1[241] = v152;
      if (v153 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v153 + 8LL))(v153);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = game_util_Format_alt1("L_Special%02d", 5);
      v183_.v184 = (const char*)strlen_alt1(v183_.v183);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v154 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v155 = v190_.v191;
      v156 = v154;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v154, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v155);
      }
      else {
        GameRoutine_1605dc0_alt1(v154, &v183_.v183);
      }
      v157 = v1[242];
      v1[242] = v156;
      if (v157 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v157 + 8LL))(v157);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = "L_SpecialCommand";
      v183_.v184 = (const char*)((__int128*)0x10LL);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v158 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v159 = v190_.v191;
      v160 = v158;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v158, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v159);
      }
      else {
        GameRoutine_1605dc0_alt1(v158, &v183_.v183);
      }
      v161 = v1[243];
      v1[243] = v160;
      if (v161 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v161 + 8LL))(v161);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = "L_BlazeSkill";
      v183_.v184 = (_BYTE*)(((_UNKNOWN**)((char*)0x8LL + 4)));
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v162 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v163 = v190_.v191;
      v164 = v162;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v162, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v163);
      }
      else {
        GameRoutine_1605dc0_alt1(v162, &v183_.v183);
      }
      v165 = v1[244];
      v1[244] = v164;
      if (v165 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v165 + 8LL))(v165);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
    }
    else if (v131 == 0) {
      goto LABEL_304;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v131 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v131 + 16LL))(v131);
      std___1___shared_weak_count___release_weak_alt1(v131);
    }
  }
LABEL_304:
  v166 = v1[133];
  v177_.v177[0] = GameData_2067a58;
  v177_.v177[1] = GameRoutine_1605d40;
  v177_.v178 = v177_.v177;
  v167 = game_159e890(v166, 1, (__int64)v177_.v177);
  if (v177_.v178 == v177_.v177) {
    v168 = 32;
  }
  else {
    if (v177_.v178 == nullptr) {
      goto LABEL_309;
    }
    v168 = 40;
  }
  (*(void (**)(__int64))(*v177_.v178 + v168))((__int64)v177_.v178);
LABEL_309:
  if (!v167) {
    goto LABEL_328;
  }
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), v1 + 106, "L_ArrowL");
  if (v183_.v184 != nullptr) {
    v169 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
    v170 = v183_.v183;
    if (v183_.v184 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
    }
    if (v169 != 0 && v170 != nullptr) {
      LayoutAccessor_155e830_alt1((__int64)v170, 0);
    }
    else if (v169 == 0) {
      goto LABEL_319;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v169 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v169 + 16LL))(v169);
      std___1___shared_weak_count___release_weak_alt1(v169);
    }
  }
LABEL_319:
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), v1 + 106, "L_ArrowR");
  if (v183_.v184 != nullptr) {
    v171 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
    v172 = v183_.v183;
    if (v183_.v184 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
    }
    if (v171 != 0 && v172 != nullptr) {
      LayoutAccessor_155e830_alt1((__int64)v172, 0);
    }
    else if (v171 == 0) {
      goto LABEL_328;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v171 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v171 + 16LL))(v171);
      std___1___shared_weak_count___release_weak_alt1(v171);
    }
  }
LABEL_328:
  ui_160bd60((__int64)v1);
  GameRoutine_160be20_alt2((__int64)v1);
  if ((unsigned __int8)GameData_21759e0 != 122) {
    v173 = "EUen";
    if ((unsigned __int8)GameData_21759e0 == 107) {
      if (BYTE1(GameData_21759e0) != 111) {
        return LayoutAccessor_1562cf0_alt1((__int64)(v1 + 106), v173);
      }
    }
    else if ((unsigned __int8)GameData_21759e0 != 106 ||
             BYTE1(GameData_21759e0) != 97) {
      return LayoutAccessor_1562cf0_alt1((__int64)(v1 + 106), v173);
    }
    if (BYTE2(GameData_21759e0) != 0) {
      return LayoutAccessor_1562cf0_alt1((__int64)(v1 + 106), v173);
    }
  LABEL_335:
    v173 = "JPja";
    return LayoutAccessor_1562cf0_alt1((__int64)(v1 + 106), v173);
  }
  v173 = "EUen";
  if ((GameData_21759e0 & 0xFFFFFF000000LL) == 0x6E6148000000LL &&
      BYTE1(GameData_21759e0) == 104 && BYTE2(GameData_21759e0) == 45 &&
      (BYTE6(GameData_21759e0) == 116 || BYTE6(GameData_21759e0) == 115) &&
      HIBYTE(GameData_21759e0) == 0) {
    goto LABEL_335;
  }
  return LayoutAccessor_1562cf0_alt1((__int64)(v1 + 106), v173);
}

__int64 ProcUnitInfoFull_Unknown89(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  struct {
    __int64* v16;
    __int64 v17;
  } v16_;
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;
  struct {
    __int64* v20;
    __int64 v21;
  } v20_;
  struct {
    __int64* v22;
    __int64 v23;
  } v22_;
  struct {
    __int64* v24;
    __int64 v25;
  } v24_;

  LayoutAccessor_1560070_alt1((void*)(&v24_.v24), (__int64*)(a1 + 848),
                              "L_Page00");
  if (v24_.v25 != 0) {
    v2 = std___1___shared_weak_count_lock_alt1(v24_.v25);
    if (v2 != 0) {
      v3 = v24_.v24;
    }
    else {
      v3 = nullptr;
    }
    if (v24_.v25 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v24_.v25);
    }
  }
  else {
    v2 = 0;
    v3 = nullptr;
  }
  result = LayoutAccessor_155ea30(v3);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 1984) == 1) {
      LayoutAccessor_1560070_alt1((void*)(&v24_.v24), v3, "L_GrowthRateGraph");
      if (v24_.v25 != 0) {
        v5 = std___1___shared_weak_count_lock_alt1(v24_.v25);
        if (v5 != 0) {
          v6 = v24_.v24;
        }
        else {
          v6 = nullptr;
        }
        if (v24_.v25 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v24_.v25);
        }
        if (v6 != nullptr) {
          v7 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                               (__int64)&GameData_1ac6c8b);
          v22_.v22 = v6;
          v22_.v23 = v5;
          if (v5 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                      memory_order_relaxed);
          }
          GameRoutine_17a4cc0((int*)(a1 + 2124), (__int64)&v22_.v22,
                              (float*)(v7 + 80));
          if (v22_.v23 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v22_.v23);
          }
        }
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak_alt1(v5);
        }
      }
      LayoutAccessor_1560070_alt1((void*)(&v24_.v24), v3, "L_BasicStatusGraph");
      result = v24_.v25;
      if (v24_.v25 != 0) {
        v8 = std___1___shared_weak_count_lock_alt1(v24_.v25);
        result = v24_.v25;
        if (v8 != 0) {
          v9 = v24_.v24;
        }
        else {
          v9 = nullptr;
        }
        if (v24_.v25 != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(v24_.v25);
        }
        if (v9 == nullptr) {
          goto LABEL_60;
        }
        v10 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                              (__int64)&GameData_1ac6c8b);
        v20_.v20 = v9;
        v20_.v21 = v8;
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_17a4cc0((int*)(a1 + 2056), (__int64)&v20_.v20,
                            (float*)(v10 + 80));
        result = v20_.v21;
        if (v20_.v21 == 0) {
          goto LABEL_60;
        }
        goto LABEL_59;
      }
    }
    else {
      LayoutAccessor_1560070_alt1((void*)(&v24_.v24), v3,
                                  "L_BattleStatusGraph");
      if (v24_.v25 != 0) {
        v11 = std___1___shared_weak_count_lock_alt1(v24_.v25);
        if (v11 != 0) {
          v12 = v24_.v24;
        }
        else {
          v12 = nullptr;
        }
        if (v24_.v25 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v24_.v25);
        }
        if (v12 != nullptr) {
          v13 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                                (__int64)&GameData_1ac6c8b);
          v18_.v18 = v12;
          v18_.v19 = v11;
          if (v11 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                      memory_order_relaxed);
          }
          GameRoutine_17a4cc0((int*)(a1 + 1988), (__int64)&v18_.v18,
                              (float*)(v13 + 80));
          if (v18_.v19 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v18_.v19);
          }
        }
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak_alt1(v11);
        }
      }
      LayoutAccessor_1560070_alt1((void*)(&v24_.v24), v3, "L_BasicStatusGraph");
      result = v24_.v25;
      if (v24_.v25 != 0) {
        v8 = std___1___shared_weak_count_lock_alt1(v24_.v25);
        result = v24_.v25;
        if (v8 != 0) {
          v14 = v24_.v24;
        }
        else {
          v14 = nullptr;
        }
        if (v24_.v25 != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(v24_.v25);
        }
        if (v14 != nullptr) {
          v15 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                                (__int64)&GameData_1ac6c8b);
          v16_.v16 = v14;
          v16_.v17 = v8;
          if (v8 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                      memory_order_relaxed);
          }
          GameRoutine_17a4cc0((int*)(a1 + 2056), (__int64)&v16_.v16,
                              (float*)(v15 + 80));
          result = v16_.v17;
          if (v16_.v17 == 0) {
            goto LABEL_60;
          }
        LABEL_59:
          result = std___1___shared_weak_count___release_weak_alt1(result);
        }
      LABEL_60:
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          result = std___1___shared_weak_count___release_weak_alt1(v8);
        }
      }
    }
  }
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak_alt1(v2);
  }
  return result;
}

_QWORD* game_menu_anonymous_ProcUnitInfoFull_OnOpened(__int64 a1)
{
  _QWORD** v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* result;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;

  v2 = (_QWORD**)GameData_212d8b0[0];
  v3 = *(_QWORD*)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    v4 = (__int64*)(a1 + 848);
    v5 = *(_QWORD**)GameData_212d8b0[0];
    *(_BYTE*)(v3 + 256) = 1;
    FloatingHelp_18aee60(v5, v4);
    GameRoutine_18ae960((_QWORD*)v3, 1);
    v6 = *(_QWORD*)(v3 + 240);
    *(_QWORD*)(v3 + 232) = 0;
    *(_QWORD*)(v3 + 240) = 0;
    if (v6 != 0) {
      std___1___shared_weak_count___release_weak(v6);
    }
    v7 = *v2;
    *(_QWORD*)(v3 + 160) = a1;
    *(_BYTE*)(v3 + 257) = 0;
    *(_DWORD*)(v3 + 248) = -1;
    if (v7 != nullptr) {
      v13_.v14 = v13_.v13;
      *(_QWORD*)((char*)v7 + 268) = 0x44048000C46D8000LL;
      *(_QWORD*)((char*)v7 + 276) = 0xC4048000446D8000LL;
      v11_.v11[0] = GameData_2068240;
      v11_.v11[1] = a1;
      v11_.v12 = v11_.v11;
      v13_.v13[0] = GameData_2068240;
      v13_.v13[1] = a1;
      GameRoutine_18af480(v7, (__int64*)(a1 + 848), (__int64)v13_.v13);
      if (v13_.v14 == v13_.v13) {
        v8 = 32;
      }
      else {
        if (v13_.v14 == nullptr) {
          goto LABEL_14;
        }
        v8 = 40;
      }
      (*(void (**)(__int64))(*v13_.v14 + v8))((__int64)v13_.v14);
    LABEL_14:
      result = v11_.v12;
      if (v11_.v12 == v11_.v11) {
        goto LABEL_9;
      }
      if (v11_.v12 != nullptr) {
        v10 = 40;
        return (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))(
            (__int64)result);
      }
      return result;
    }
  }
  result = v11_.v11;
  v11_.v11[0] = GameData_2068240;
  v11_.v11[1] = a1;
  v11_.v12 = v11_.v11;
LABEL_9:
  v10 = 32;
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
}

__int64 ProcUnitInfoFull_Unknown94(__int64 a1)
{
  _QWORD* v2;
  char v4[4];
  struct {
    __int64* v5;
    int v6;
    char gap20_[4];
    __int64 v7;
  } v5_;

  v2 = *(_QWORD**)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    if (v2[19] != 0) {
      v5_.v7 = 0;
      v5_.v5 = GameData_212d890[0] + 2;
      v5_.v6 = 44;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64**))(
          v2[1] + 16LL))((void*)(v4), v2 + 1, &v5_.v5);
    }
    v2[20] = 0;
    FloatingHelp_18af120(v2, (__int64*)(a1 + 848));
    GameRoutine_18af980((__int64)v2, (__int64*)(a1 + 848));
  }
  if (*(_QWORD*)(a1 + 624) != 0) {
    *(_QWORD*)(a1 + 624) = 0;
  }
  return LayoutAccessor_155e830_alt1(a1 + 848, 0);
}

__int64 game_menu_anonymous_ProcUnitInfoFull_LCall(__int64 a1)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  if (GameData_2259500 == game_menu_UnitGridSelectMenu_listeners_) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 1064);
  v8_.v8[0] = GameData_20682c0;
  v8_.v9 = v8_.v8;
  v5 = GameRoutine_15dff80(v3, 1, v8_.v8, 0);
  *(_QWORD*)(a1 + 1064) = v5;
  if (v8_.v9 == v8_.v8) {
    v6 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_8;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v6))((__int64)v8_.v9);
  v5 = *(_QWORD*)(a1 + 1064);
LABEL_8:
  if (v5 == v3) {
    return 0;
  }
  GameMenu_16e9cd0(a1, v5);
  GameRoutine_160be20_alt2(a1);
  return 13;
}

__int64 game_menu_anonymous_ProcUnitInfoFull_RCall(__int64* a1)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  if (GameData_2259500 == game_menu_UnitGridSelectMenu_listeners_) {
    return 0;
  }
  v3 = a1[133];
  v8_.v8[0] = GameData_2068340;
  v8_.v9 = v8_.v8;
  v5 = game_gameui_UnitUtil_GetNext(v3, 1, v8_.v8, 0);
  a1[133] = v5;
  if (v8_.v9 == v8_.v8) {
    v6 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_8;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v6))((__int64)v8_.v9);
  v5 = a1[133];
LABEL_8:
  if (v5 == v3) {
    return 0;
  }
  GameMenu_16e9cd0((__int64)a1, v5);
  GameRoutine_160be20_alt1(a1);
  return 13;
}

__int64 ProcUnitInfoFull_Unknown141(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "XHelp";
    *(_QWORD*)(v15 + 8) = 0;
    v16 = v14 + 40 * v12;
    *(_BYTE*)(v15 + 16) = 0;
    *(_BYTE*)(v15 + 28) = 0;
    v6 = v14 + v8 + 40;
    *(_QWORD*)(v15 + 32) = 0;
    *(_DWORD*)(v15 + 20) = 2;
    *(_DWORD*)(v15 + 24) = result;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 16) = 0;
    *(_BYTE*)(v4 + 28) = 0;
    v6 = v4 + 40;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "XHelp";
    *(_QWORD*)(v4 + 8) = 0;
    *(_DWORD*)(v4 + 20) = 2;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

__int64 ProcUnitInfoFull_160be20(__int64 a1)
{

#pragma clang fp contract(on)

  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 (**v4)();
  __int64 v5;
  __int64 (*v6)();
  __int64 v7;
  __int64 (**v8)();
  __int64 v9;
  char v10;
  __int64 v11;
  char v12;
  bool v13;
  __int64 (*v14)();
  __int64 v15;
  char v16;
  __int64 v17;
  char v18;
  __int64 v19;
  unsigned __int64 v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 (**v25)();
  __int64 v26;
  __int64* v27;
  _QWORD* v28;
  int v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 (**v36)();
  __int64 v37;
  __int64 (**v38)();
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int128* v51;
  __int64 v52;
  __int64* v53;
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
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _BYTE* v71;
  __int64 v72;
  int v73;
  bool v74;
  int v75;
  unsigned int v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 (*v84)();
  __int64 v85;
  unsigned __int64 v86;
  _BYTE* v87;
  __int64 (**v88)();
  unsigned int v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 (*v103)();
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  int v108;
  __int64 v109;
  __int64 (*v110)();
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 (*v116)();
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 (*v122)();
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 (*v128)();
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  int v135;
  int v136;
  __int64 v137;
  __int64 (*v138)();
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 (*v143)();
  __int64 (*v144)();
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  int* v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  int v154;
  __int64 v155;
  __int64 v156;
  bool v157;
  __int64* v158;
  int v159;
  char v160;
  __int64 v161;
  __int64 (*v162)();
  __int64 (*v163)();
  char v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  int v171;
  int v172;
  __int64 v173;
  __int64 (*v174)();
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 (*v179)();
  __int64 (***v180)();
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64* v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64* v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  char v196;
  __int64 v197;
  __int64* v198;
  __int64 v199;
  __int64 (**v200)();
  int* v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64* v207;
  __int64 v208;
  __int64 (***v209)();
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 (***v216)();
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v221;
  __int64 v222;
  int v223;
  int v224;
  int v225;
  __int64 v226;
  int v227;
  int v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64* v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 (**v247)();
  __int64 v248;
  __int64 v249;
  __int64 v250;
  int v251;
  __int64 (*v252)();
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64* v257;
  __int64* v258;
  __int64 v259;
  __int64* v260;
  int v261;
  __int64 v262;
  __int64 v263;
  int v264;
  __int64 (*v265)();
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64* v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  int v281;
  int v282;
  _BOOL4 v283;
  __int64 v284;
  __int64 v285;
  _QWORD* v286;
  _QWORD* v287;
  __int64 (**v288)();
  __int64* v289;
  __int64* v290;
  __int64 v291;
  __int64 v292;
  __int64* v293;
  __int64 v294;
  __int64* v295;
  __int64 v296;
  __int64 v297;
  __int64* v298;
  __int64 v299;
  __int64 v300;
  __int64* v301;
  __int64 v302;
  __int64* v303;
  __int64 v304;
  __int64* v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64* v309;
  __int64 v310;
  __int64 v311;
  __int64* v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  __int64 v333;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  __int64 v337;
  __int64 (*v338)();
  __int64 v339;
  __int64 v340;
  __int64 v341;
  __int64* v342;
  __int64 v343;
  __int64 v344;
  __int64 v345;
  __int64 v346;
  __int64 v347;
  __int64 v348;
  __int64 v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
  __int64 v355;
  __int64 v356;
  __int64 v357;
  __int64 v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  __int64 v365;
  __int64* v366;
  __int64 (**v367)();
  __int64 v368;
  __int64 v369;
  __int64 v370;
  int v371;
  _QWORD* v372;
  __int64 v373;
  unsigned int v374;
  __int64 v375;
  unsigned __int64 v376;
  unsigned int v377;
  char v378;
  __int64 v379;
  char v380;
  __int64 v381;
  __int64 v382;
  __int64 v383;
  int v384;
  __int64 v385;
  __int64 v386;
  unsigned int v387;
  char* v388;
  __int64 v389;
  char* v390;
  __int64 v391;
  __int64 v392;
  char* v393;
  __int64* v394;
  __int64* v395;
  unsigned __int8 v396;
  __int64 v397;
  unsigned int v398;
  unsigned int v399;
  unsigned int v400;
  unsigned int v401;
  char* v402;
  unsigned __int64 v403;
  unsigned __int64 v404;
  __int64* v405;
  __int64 v406;
  __int64* v407;
  char* v408;
  __int64* v409;
  __int64 v410;
  __int64 v411;
  _BOOL4 v412;
  __int64* v413;
  __int64 v414;
  int v415;
  __int64 v416;
  __int64 (**v417)();
  __int64 v418;
  __int64 v419;
  __int64 v420;
  __int64 v421;
  __int64 v422;
  __int64 (**v423)();
  __int64 v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  __int64 (**v429)();
  _BOOL4 v431;
  __int64 v432;
  __int64 (**v433)();
  __int64* v434;
  int v435;
  __int64 v436;
  char v437;
  __int64 v438;
  unsigned int v439;
  __int64 v440;
  __int64 v441;
  __int64 v442;
  __int64 v443;
  _WORD* v444;
  __int64 v446;
  __int64* v447;
  __int64 v448;
  __int64 v449;
  char* v450;
  __int64 v451;
  char* v452;
  char v453;
  __int64 v454;
  __int64 v455;
  __int64 v456;
  __int64 v457;
  __int64 v458;
  __int64 v459;
  __int64 v460;
  unsigned int* v461;
  __int64 v462;
  __int64 v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  unsigned int v467;
  unsigned int v468;
  __int64 v469;
  char* v470;
  __int64 v471;
  __int64 v472;
  __int64 v473;
  __int64 (**v474)();
  char v475;
  __int64 v476;
  __int64 v477;
  __int64 v478;
  __int64 v479;
  __int64 v480;
  _WORD* v481;
  __int64 v482;
  __int64 v483;
  unsigned int* v484;
  __int64 v485;
  char* v486;
  __int64 v487;
  __int64 (*v488)();
  char* v489;
  __int64 v490;
  __int64 v491;
  __int64 v492;
  __int64 v493;
  __int64 v494;
  __int64 v495;
  __int64 (**v496)();
  __int64 v497;
  __int64 v498;
  _QWORD* v499;
  __int64 v500;
  __int64 v501;
  __int64 v502;
  __int64 v503;
  __int64 v504;
  __int64 v505;
  __int64 v506;
  __int64 v507;
  __int64 v508;
  __int64 v509;
  unsigned __int64 v510;
  __int64 v511;
  char* v512;
  __int64 v513;
  __int64 v514;
  __int64* v515;
  __int64* v516;
  __int64 v517;
  char* v518;
  __int64 v519;
  __int64 v520;
  char* v521;
  unsigned __int64 v522;
  __int64 v523;
  __int64 (*v524)();
  __int64 v525;
  __int64 v526;
  __int64 v527;
  __int64 v528;
  int v529;
  unsigned int v530;
  __int64* v532;
  __int64* v534;
  unsigned __int64 v535;
  __int64 v536;
  __int64 (*v537)();
  __int64 v538;
  __int64 v539;
  __int64 v540;
  __int64 v541;
  int v542;
  __int64 v543;
  __int64 v544;
  __int64 v545;
  __int64 v546;
  __int64 v547;
  __int64 v548;
  int* v549;
  int* v550;
  int v551;
  __int64 v552;
  __int64 v553;
  __int64 v554;
  __int64 v555;
  __int64 v556;
  __int64 v557;
  __int64 v558;
  __int64 v559;
  __int64 v560;
  __int64 v561;
  __int64 v562;
  __int64 v563;
  __int64 v564;
  unsigned __int64 v565;
  __int64 v566;
  unsigned int v567;
  __int64 v568;
  __int64 v569;
  __int64 v570;
  __int64 v571;
  _BYTE* v572;
  __int64* v573;
  __int64 v574;
  char* v575;
  char* v576;
  __int64 v577;
  char* v578;
  _BYTE* v579;
  __int64* v580;
  __int64 v581;
  char* v582;
  char* v583;
  __int64 v584;
  char* v585;
  _BYTE* v586;
  __int64* v587;
  __int64 v588;
  char* v589;
  char* v590;
  __int64 v591;
  char* v592;
  __int64 (**v593)();
  int v594;
  __int64* v595;
  __int16* v596;
  int v597;
  int v598;
  int v599;
  int v600;
  unsigned int v601;
  __int64* v602;
  __int64 v603;
  char* v604;
  __int64* v605;
  char* v606;
  __int64 v607;
  __int64 v608;
  __int64* v609;
  char* v610;
  __int64 v611;
  __int64 v612;
  __int64* v613;
  __int64 v614;
  char* v615;
  __int64 v616;
  __int64 v617;
  __int64* v618;
  __int64* v619;
  __int64 v620;
  char* v621;
  __int64 v622;
  __int64 v623;
  __int64* v624;
  _BYTE* v625;
  __int64 v626;
  char* v627;
  __int64 v628;
  __int64 v629;
  __int64 v630;
  __int64 v631;
  char v632;
  _BYTE* v633;
  __int64 v634;
  int v635;
  __int64 v636;
  unsigned int v637;
  __int64 (*v638)();
  __int64 v639;
  unsigned int v640;
  __int64* v641;
  __int64* v642;
  __int64 (*v643)();
  __int64 v644;
  __int64 v645;
  char v646;
  __int64* v647;
  __int64 v648;
  __int64 (*v649)();
  __int64* v650;
  unsigned __int64 v651;
  __int64 v652;
  __int64 v653;
  __int64 v654;
  __int64 v655;
  __int64 v656;
  bool v657;
  _QWORD* v658;
  unsigned int v659;
  __int64 (***v660)();
  __int64 v661;
  __int64* v662;
  unsigned int v663;
  unsigned __int64 v664;
  __int64 v665;
  unsigned __int64 v666;
  unsigned __int64 v667;
  __int64 v668;
  unsigned __int64 v669;
  __int64 v670;
  __int64 v671;
  __int64 v672;
  unsigned int v673;
  unsigned int v674;
  char v675;
  unsigned __int64 v676;
  __int64* v677;
  char* v678;
  __int64 v679;
  __int64* v680;
  __int64 v681;
  char* v682;
  __int64 v683;
  __int64* v684;
  __int64 v685;
  char* v686;
  __int64 v687;
  __int64* v688;
  __int64 v689;
  __int64 v690;
  char* v691;
  __int64 v692;
  __int64* v693;
  __int64 v694;
  __int64 v695;
  __int64 v697;
  __int64 v698;
  __int64 v699;
  __int64 v700;
  unsigned int v701;
  __int64 v702;
  int v703;
  __int64 v704;
  unsigned int v705;
  __int64 v706;
  char v707;
  char* v708;
  __int64 v709;
  __int64 v710;
  __int64* v711;
  unsigned __int64 v712;
  __int64* v713;
  __int64 v714;
  __int64 v715;
  __int64 v716;
  __int64 (**v717)();
  struct {
    __int64 v718;
    __int64 v719;
  } v718_;
  struct {
    __int64 v720;
    __int64 v721;
  } v720_;
  struct {
    __int64 v722;
    __int64 v723;
  } v722_;
  struct {
    __int64 v724;
    __int64 v725;
    __int64 v726;
  } v724_;
  struct {
    __int64 (**v727)();
    __int64** v728;
    unsigned __int64 v729;
    __int64 v730;
    __int64* v731;
  } v727_;
  struct {
    __int64 v732;
    __int64 v733;
    __int64 v734;
    __int64 v735;
    __int64 v736;
    __int64 v737;
    __int64 v738;
    __int64 v739;
    __int64 v740;
    __int64 v741;
    __int64 v742;
    __int64 v743;
    __int64 v744;
    char gap272_[152];
    __int64* v745;
  } v732_;
  struct {
    __int64* v746;
    char* v747;
    int v748;
    char gap460_[4];
    __int64 v749;
    __int64 v750;
  } v746_;
  struct {
    char* v751;
    __int64* v752;
    __int64* v753;
    __int64 (***v754)();
  } v751_;
  struct {
    __int64** v755;
    char v756;
  } v755_;

  v1 = a1;
  result = *(_QWORD*)(a1 + 1064);
  if (result == 0) {
    return result;
  }
  GameRoutine_1604340(result, v1 + 848, (__int64)"T_Name", (__int64)"T_Handle");
  v751_.v751 = "L_IconLegion";
  v751_.v752 = (__int64*)(((_UNKNOWN**)((char*)0x8LL + 4)));
  GameRoutine_15736e0((void*)(&v727_.v727), (__int64*)(v1 + 848), &v751_.v751);
  if (v727_.v728 != nullptr) {
    v3 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
    v4 = v727_.v727;
    if (v727_.v728 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
    }
    if (v3 != 0 && v4 != nullptr) {
      v5 = *(_QWORD*)(v1 + 1064);
      v4[138] = nullptr;
      v4[137] = nullptr;
      *((_BYTE*)v4 + 1112) = 1;
      if (v5 == 0 ||
          (v4[136] = (__int64 (*)())v5, !IconLegion_19abe40((__int64)v4, v5)) &&
              !IconLegion_19abf80((__int64)v4, (__int64)v4[136])) {
        v6 = *v4;
        v4[136] = nullptr;
        (*((void (**)(__int64 (**)(void), _QWORD))v6 + 5))(v4, 0);
      }
    }
    else if (v3 == 0) {
      goto LABEL_14;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt2(v3);
    }
  }
LABEL_14:
  v751_.v751 = "L_LvGroup";
  v751_.v752 = (__int64*)(((_UNKNOWN**)((char*)0x8LL + 1)));
  GameRoutine_1572840((void*)(&v727_.v727), (__int64*)(v1 + 848), &v751_.v751);
  if (v727_.v728 == nullptr) {
    goto LABEL_31;
  }
  v7 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
  v8 = v727_.v727;
  if (v727_.v728 != nullptr) {
    std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
  }
  if (v7 == 0 || v8 == nullptr) {
    if (v7 == 0) {
      goto LABEL_31;
    }
    goto LABEL_29;
  }
  StatusLV_18a30a0((__int64)v8, *(_QWORD*)(v1 + 1064));
  v9 = *(_QWORD*)(v1 + 1064);
  if (*(unsigned __int8*)(v9 + 498) > 0x62u ||
      (LODWORD(v727_.v727) = *game_g_shared_system_skills_ptr & 0xFFF,
       v10 = game_HasSkill((_QWORD*)(v9 + 1744), (unsigned int*)&v727_.v727),
       v11 = *(_QWORD*)(v9 + 440), (v10 & 1) != 0) &&
          (v11 == 0 ? (v12 = 9) : (v12 = *(_BYTE*)(v11 + 16)),
           ((1 << v12) & 0xF1) != 0)) {
    v13 = false;
    v14 = v8[137];
    if (v14 == nullptr) {
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  if (v11 != 0) {
    v13 = (unsigned int)*(unsigned __int8*)(v11 + 16) - 4 < 0xFFFFFFFD;
    v14 = v8[137];
    if (v14 == nullptr) {
      goto LABEL_29;
    }
  LABEL_28:
    *((_BYTE*)v14 + 88) = *((_BYTE*)v14 + 88) & 0xFE | v13;
    ui_LayoutAccessor_SetPaneVisible((__int64)(v8 + 11), (__int64)"Border",
                                     !v13);
    goto LABEL_29;
  }
  v13 = true;
  v14 = v8[137];
  if (v14 != nullptr) {
    goto LABEL_28;
  }
LABEL_29:
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt2(v7);
  }
LABEL_31:
  v15 = *(_QWORD*)(v1 + 1064);
  if (*(unsigned __int8*)(v15 + 498) > 0x62u ||
      (LODWORD(v727_.v727) = *game_g_shared_system_skills_ptr & 0xFFF,
       v16 = game_HasSkill((_QWORD*)(v15 + 1744), (unsigned int*)&v727_.v727),
       v17 = *(_QWORD*)(v15 + 440), (v16 & 1) != 0) &&
          (v17 == 0 ? (v18 = 9) : (v18 = *(_BYTE*)(v17 + 16)),
           ((1 << v18) & 0xF1) != 0) ||
      v17 != 0 &&
          (unsigned int)*(unsigned __int8*)(v17 + 16) - 4 > 0xFFFFFFFC) {
    ui_LayoutAccessor_SetPaneVisible(v1 + 848, (__int64)"A_LvExp", 0);
  }
  else {
    ui_LayoutAccessor_SetPaneVisible(v1 + 848, (__int64)"A_LvExp", 1);
    v19 = *(_QWORD*)(v1 + 1064);
    v20 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    if (*(unsigned __int8*)(v19 + 498) >= (int)v20) {
      v21 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    }
    else {
      v21 = *(unsigned __int8*)(v19 + 498);
    }
    if (*(_BYTE*)(v19 + 498) != 0) {
      v22 = v21;
    }
    else {
      v22 = 1;
    }
    if (v22 == (_DWORD)v20) {
      v23 = 0;
    }
    else {
      v23 = *(_DWORD*)(GameData_21d9968 + 4LL * v22);
    }
    v73 = *(_DWORD*)(v19 + 504);
    v74 = __OFSUB__(v23, v73);
    v75 = v23 - v73;
    if ((v75 < 0) ^ v74 | (v75 == 0)) {
      v76 = 0;
    }
    else {
      v76 = v75;
    }
    v77 = ui_LayoutAccessor_FindPane_alt2((__int64*)(v1 + 848),
                                          (__int64)"T_LvExpNum");
    if (v77 != 0) {
      v78 = __dynamic_cast(v77, GameData_212d670[0], GameData_212d690, 0);
      if (v78 != 0) {
        game_156c910(v78, "%d", 1, v76);
      }
    }
    v79 = ui_LayoutAccessor_FindAlignment((__int64*)(v1 + 848),
                                          (__int64)"A_LvExp");
    if (v79 != 0) {
      Alignment_56b600(v79);
    }
  }
  v751_.v751 = "L_HPGroup";
  v751_.v752 = (__int64*)(((_UNKNOWN**)((char*)0x8LL + 1)));
  GameRoutine_1572700((void*)(&v727_.v727), (__int64*)(v1 + 848), &v751_.v751);
  if (v727_.v728 != nullptr) {
    v24 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
    v25 = v727_.v727;
    if (v727_.v728 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
    }
    if (v24 != 0 && v25 != nullptr) {
      StatusHP_18920d0(v25, *(_QWORD*)(v1 + 1064), 1);
    }
    else if (v24 == 0) {
      goto LABEL_60;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak_alt2(v24);
    }
  }
LABEL_60:
  v751_.v751 = "L_Move";
  v751_.v752 = (_QWORD*)((_UNKNOWN*)0x6LL);
  GameRoutine_15733c0((void*)(&v727_.v727), (__int64*)(v1 + 848), &v751_.v751);
  if (v727_.v728 == nullptr) {
    goto LABEL_72;
  }
  v26 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
  v27 = (__int64*)v727_.v727;
  if (v727_.v728 != nullptr) {
    std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
  }
  if (v26 != 0 && v27 != nullptr) {
    v28 = *(_QWORD**)(v1 + 1064);
    LOBYTE(v727_.v727) = 10;
    v29 = game_Unit_GetParamLimit(v28, (unsigned __int8*)&v727_.v727);
    v30 = *(_QWORD*)(v1 + 1064);
    LOBYTE(v727_.v727) = 10;
    v31 = game_Unit_GetParam(v30);
    v32 = LayoutAccessor_1573500(*(_QWORD*)(v1 + 1064), 0, 1);
    WORD2(v727_.v727) = 1;
    v727_.v731 = nullptr;
    v732_.v732 = 0;
    v732_.v733 = 0;
    LODWORD(v732_.v734) = 0;
    v727_.v729 = __PAIR64__(v32, v31);
    LODWORD(v727_.v730) = v29;
    LODWORD(v727_.v727) = 37;
    LODWORD(v727_.v728) = -1;
    StatusItem_188df50(v27, (unsigned int*)&v727_.v727, 1, 0);
    v33 = (__int64)v727_.v731;
    v27[142] = *(_QWORD*)(v1 + 1064);
    if (v33 != 0) {
      v732_.v732 = v33;
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v33);
    }
  }
  else if (v26 == 0) {
    goto LABEL_72;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak_alt2(v26);
  }
LABEL_72:
  v751_.v751 = "L_Physique";
  v751_.v752 = (__int64*)(((_UNKNOWN**)((char*)0x8LL + 2)));
  GameRoutine_15733c0((void*)(&v727_.v727), (__int64*)(v1 + 848), &v751_.v751);
  if (v727_.v728 != nullptr) {
    v35 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
    v36 = v727_.v727;
    if (v727_.v728 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
    }
    if (v35 != 0 && v36 != nullptr) {
      StatusItem_188e530((__int64)v36, *(_QWORD*)(v1 + 1064));
    }
    else if (v35 == 0) {
      goto LABEL_81;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      std___1___shared_weak_count___release_weak_alt2(v35);
    }
  }
LABEL_81:
  v751_.v751 = "L_ClassGroup";
  v751_.v752 = (__int64*)(((_UNKNOWN**)((char*)0x8LL + 4)));
  GameRoutine_fa73c0((void*)(&v727_.v727), (__int64*)(v1 + 848), &v751_.v751);
  if (v727_.v728 != nullptr) {
    v37 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
    v38 = v727_.v727;
    if (v727_.v728 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
    }
    if (v37 != 0 && v38 != nullptr) {
      StatusClass_189d120(v38, *(_QWORD**)(v1 + 1064), 1, 1, 0, 0, 1);
    }
    else if (v37 == 0) {
      goto LABEL_90;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
      std___1___shared_weak_count___release_weak_alt2(v37);
    }
  }
LABEL_90:
  v39 =
      ui_LayoutAccessor_FindPane_alt2((__int64*)(v1 + 848), (__int64)"Face00");
  if (v39 != 0) {
    v39 = __dynamic_cast(v39, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1840740(v39, 0, *(_QWORD*)(v1 + 1064), 6u, 1);
  v40 =
      ui_LayoutAccessor_FindPane_alt2((__int64*)(v1 + 848), (__int64)"Face01");
  if (v40 != 0) {
    v41 = __dynamic_cast(v40, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v41 = 0;
  }
  v42 = *(__int64**)(v1 + 1064);
  v43 = *(__int64**)(v1 + 1232);
  LODWORD(v751_.v752) = 1;
  LODWORD(v727_.v729) = 0;
  v727_.v727 = nullptr;
  v727_.v728 = nullptr;
  v751_.v751 = (const char*)v42;
  v727_.v730 = 1028443341;
  game_10140c0(v43, v41, 0, &v751_.v751, (unsigned __int8*)&v727_.v727);
  v44 = Unit_6c8300(*(_QWORD**)(v1 + 1064), 0);
  v45 = ui_LayoutAccessor_FindPane_alt2((__int64*)(v1 + 848),
                                        (__int64)"IconClan");
  if (v45 == 0) {
  LABEL_102:
    v47 = 0;
    goto LABEL_103;
  }
  v46 = __dynamic_cast(v45, GameData_212d670[0], GameData_212d678[0], 0);
  v47 = 0;
  if (v44 != 0 && v46 != 0) {
    v48 = *(char**)(v44 + 48);
    if (v48 != nullptr) {
      v47 = *v48;
      if (*v48 == 0) {
        goto LABEL_103;
      }
      v49 = v46;
      if ((Manager_136afb0(ui_Manager_instance_ + 1264, 5u, v48) & 1) != 0) {
        v47 = Manager_136a920(ui_Manager_instance_ + 1264, v49, 0, 5u,
                              *(_BYTE**)(v44 + 48));
        goto LABEL_103;
      }
    }
    goto LABEL_102;
  }
LABEL_103:
  ui_LayoutAccessor_SetPaneVisible(v1 + 848, (__int64)"IconClan", v47 & 1);
  v751_.v751 = "L_OverBlaze";
  v751_.v752 = (__int64*)(((_UNKNOWN**)((char*)0x8LL + 3)));
  GameRoutine_1573280((void*)(&v727_.v727), (__int64*)(v1 + 848), &v751_.v751);
  if (v727_.v728 != nullptr) {
    v50 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
    v51 = (__int128*)v727_.v727;
    if (v727_.v728 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
    }
    if (v50 != 0 && v51 != nullptr) {
      game_18c9b10(v51, *(_QWORD*)(v1 + 1064), -1);
    }
    else if (v50 == 0) {
      goto LABEL_112;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
      std___1___shared_weak_count___release_weak_alt2(v50);
    }
  }
LABEL_112:
  LayoutAccessor_1560070_alt2((void*)(&v727_.v727), (__int64*)(v1 + 848),
                              "L_Page00");
  v717 = (__int64 (**)(void))v1;
  if (v727_.v728 == nullptr) {
    goto LABEL_410;
  }
  v52 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
  v53 = (__int64*)v727_.v727;
  if (v727_.v728 != nullptr) {
    std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
  }
  if (v52 == 0 || v53 == nullptr) {
    goto LABEL_407;
  }
  LayoutAccessor_1560070_alt2((void*)(&v751_.v751), v53, "L_BattleStatus");
  if (v751_.v752 != nullptr) {
    v54 = *(_QWORD*)(v1 + 1064);
    v55 = std___1___shared_weak_count_lock_alt2((__int64)v751_.v752);
    if (v55 != 0) {
      v56 = v55;
      if (v751_.v751 != nullptr) {
        GameRoutine_158d1a0((__int64)v751_.v751, v54);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
        std___1___shared_weak_count___release_weak_alt2(v56);
      }
    }
    if (v751_.v752 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v751_.v752);
    }
  }
  LayoutAccessor_1560070_alt2((void*)(&v746_.v746), v53, "L_BasicStatus");
  if (v746_.v747 != nullptr) {
    v57 = *(_QWORD*)(v1 + 1064);
    v58 = std___1___shared_weak_count_lock_alt2((__int64)v746_.v747);
    if (v58 != 0) {
      v59 = v58;
      if (v746_.v746 != nullptr) {
        game_gameui_Util_SetBasicStatusForUnitInfo((__int64)v746_.v746, v57);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
        std___1___shared_weak_count___release_weak_alt2(v59);
      }
    }
    if (v746_.v747 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v746_.v747);
    }
  }
  LayoutAccessor_1560070_alt2((void*)(&v724_.v724), v53, "L_GrowthRate");
  game_gameui_Util_SetGrowthRateForUnitInfo(&v724_.v724, *(_QWORD*)(v1 + 1064));
  if (v724_.v725 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v724_.v725);
  }
  LayoutAccessor_1560070_alt2((void*)(&v722_.v722), v53, "L_MasteryInfo");
  if (v722_.v723 != 0) {
    v60 = *(_QWORD*)(v1 + 1064);
    v61 = std___1___shared_weak_count_lock_alt2(v722_.v723);
    if (v61 != 0) {
      v62 = v61;
      if (v722_.v722 != 0) {
        Util_1575c70(v722_.v722, v60, 0, nullptr, 0, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
        std___1___shared_weak_count___release_weak_alt2(v62);
      }
    }
    if (v722_.v723 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v722_.v723);
    }
  }
  v63 = *(_QWORD*)(v1 + 1064);
  v64 = 0;
  v65 = GameData_212c878[0];
  v66 = *GameData_212c878[0];
  while (1) {
    v67 = v63 + v64;
    if (*(_WORD*)(v63 + v64 + 828) != 0 && (*(_BYTE*)(v67 + 831) & 1) != 0) {
      v68 = *(_QWORD*)(v66 + 64);
      if (*(unsigned __int8*)(*(_QWORD*)(v68 +
                                         8LL * *(unsigned __int16*)(v63 + v64 +
                                                                    828)) +
                              72LL) < 8u) {
        break;
      }
    }
    v69 = *(unsigned __int16*)(v67 + 836);
    if (v69 != 0 && (*(_BYTE*)(v63 + v64 + 839) & 1) != 0) {
      v68 = *(_QWORD*)(v66 + 64);
      if (*(unsigned __int8*)(*(_QWORD*)(v68 + 8 * v69) + 72LL) < 8u) {
        break;
      }
    }
    if (*(_WORD*)(v63 + v64 + 844) != 0 &&
        (*(_BYTE*)(v63 + v64 + 847) & 1) != 0) {
      v68 = *(_QWORD*)(v66 + 64);
      if (*(unsigned __int8*)(*(_QWORD*)(v68 +
                                         8LL * *(unsigned __int16*)(v63 + v64 +
                                                                    844)) +
                              72LL) < 8u) {
        break;
      }
    }
    v64 += 24;
    if (v64 == 240) {
      UnitInfoMenuItem_16061b0_alt1(*(_QWORD*)(v1 + 1240),
                                    "MID_Sys_NoEquipment");
      goto LABEL_196;
    }
  }
  v70 = *(_QWORD*)(v1 + 1240);
  v71 = (_BYTE*)(v63 + 863);
  v72 = 4;
  while (1) {
    if (*(_WORD*)(v71 - 35) != 0 && (*(v71 - 32) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(v68 +
                                       8LL * *(unsigned __int16*)(v71 - 35)) +
                            72LL) < 8u) {
      LODWORD(v72) = v72 - 4;
      goto LABEL_189;
    }
    if (*(_WORD*)(v71 - 27) != 0 && (*(v71 - 24) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(v68 +
                                       8LL * *(unsigned __int16*)(v71 - 27)) +
                            72LL) < 8u) {
      LODWORD(v72) = v72 - 3;
      goto LABEL_189;
    }
    if (*(_WORD*)(v71 - 19) != 0 && (*(v71 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(v68 +
                                       8LL * *(unsigned __int16*)(v71 - 19)) +
                            72LL) < 8u) {
      LODWORD(v72) = v72 - 2;
      goto LABEL_189;
    }
    if (*(_WORD*)(v71 - 11) != 0 && (*(v71 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(v68 +
                                       8LL * *(unsigned __int16*)(v71 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v71 - 3) != 0 && (*v71 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(v68 +
                                       8LL * *(unsigned __int16*)(v71 - 3)) +
                            72LL) < 8u) {
      goto LABEL_189;
    }
    v72 += 5;
    v71 += 40;
    if (v72 == 34) {
      LODWORD(v72) = -1;
      goto LABEL_189;
    }
  }
  LODWORD(v72) = v72 - 1;
LABEL_189:
  GameRoutine_1605f00(*(_QWORD*)(v1 + 1240));
  v80 = *(_QWORD*)(v70 + 16);
  if (v80 != 0) {
    v81 = std___1___shared_weak_count_lock_alt2(v80);
    if (v81 != 0) {
      v82 = v81;
      v83 = *(_QWORD*)(v70 + 8);
      if (v83 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v83 + 40LL))(v83, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82);
        std___1___shared_weak_count___release_weak_alt2(v82);
      }
    }
  }
  *(_QWORD*)(v70 + 32) = v63;
  *(_DWORD*)(v70 + 56) = v72;
  *(_DWORD*)(v70 + 24) = 2;
  UnitInfoMenuItem_1606250((_QWORD*)v70);
LABEL_196:
  v84 = *(__int64 (**)(void))(v1 + 1064);
  v85 = *v65;
  v86 = 2;
  v87 = (char*)v84 + 847;
  do {
    if (*(_WORD*)(v87 - 19) != 0 && (*(v87 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v85 + 64) +
                                       8LL * *(unsigned __int16*)(v87 - 19)) +
                            72LL) < 8u) {
      v86 -= 2LL;
    LABEL_211:
      v90 = (__int64*)(v717 + 156);
      if (v86 > 5) {
        v88 = v717;
        v89 = 0;
        goto LABEL_221;
      }
      v91 = *v90;
      GameRoutine_1605f00(*v90);
      v92 = *(_QWORD*)(v91 + 16);
      if (v92 != 0) {
        v93 = std___1___shared_weak_count_lock_alt2(v92);
        if (v93 != 0) {
          v94 = v93;
          v95 = *(_QWORD*)(v91 + 8);
          if (v95 != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)v95 + 40LL))(v95, 1);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94);
            std___1___shared_weak_count___release_weak_alt2(v94);
          }
        }
      }
      *(_QWORD*)(v91 + 32) = v84;
      *(_DWORD*)(v91 + 56) = v86;
      *(_DWORD*)(v91 + 24) = 2;
      UnitInfoMenuItem_1606250((_QWORD*)v91);
      if (v86 != 0) {
        v88 = v717;
        v89 = 1;
        v84 = v717[133];
        goto LABEL_221;
      }
      v96 = 1;
      goto LABEL_230;
    }
    if (*(_WORD*)(v87 - 11) != 0 && (*(v87 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v85 + 64) +
                                       8LL * *(unsigned __int16*)(v87 - 11)) +
                            72LL) < 8u) {
      --v86;
      goto LABEL_211;
    }
    if (*(_WORD*)(v87 - 3) != 0 && (*v87 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v85 + 64) +
                                       8LL * *(unsigned __int16*)(v87 - 3)) +
                            72LL) < 8u) {
      goto LABEL_211;
    }
    v86 += 3LL;
    v87 += 24;
  } while (v86 != 32);
  v88 = v717;
  v89 = 0;
  LODWORD(v86) = -1;
  v90 = (__int64*)(v717 + 156);
LABEL_221:
  v96 = v89 + 1;
  v97 = (__int64)v88[v89 + 156];
  GameRoutine_1605f00(v97);
  v98 = *(_QWORD*)(v97 + 16);
  if (v98 != 0) {
    v99 = std___1___shared_weak_count_lock_alt2(v98);
    if (v99 != 0) {
      v100 = v99;
      v101 = *(_QWORD*)(v97 + 8);
      if (v101 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v101 + 40LL))(v101, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v100 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v100 + 16LL))(v100);
        std___1___shared_weak_count___release_weak_alt2(v100);
      }
    }
  }
  *(_QWORD*)(v97 + 32) = v84;
  *(_DWORD*)(v97 + 56) = 0;
  *(_DWORD*)(v97 + 24) = 2;
  UnitInfoMenuItem_1606250((_QWORD*)v97);
  if ((_DWORD)v86 == 1) {
    LODWORD(v86) = 1;
    goto LABEL_237;
  }
LABEL_230:
  v102 = v90[v96++];
  v103 = v717[133];
  GameRoutine_1605f00(v102);
  v104 = *(_QWORD*)(v102 + 16);
  if (v104 != 0) {
    v105 = std___1___shared_weak_count_lock_alt2(v104);
    if (v105 != 0) {
      v106 = v105;
      v107 = *(_QWORD*)(v102 + 8);
      if (v107 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v107 + 40LL))(v107, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v106 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v106 + 16LL))(v106);
        std___1___shared_weak_count___release_weak_alt2(v106);
      }
    }
  }
  v108 = 2;
  *(_QWORD*)(v102 + 32) = v103;
  *(_DWORD*)(v102 + 24) = 2;
  *(_DWORD*)(v102 + 56) = 1;
  UnitInfoMenuItem_1606250((_QWORD*)v102);
  if ((_DWORD)v86 != 2) {
  LABEL_237:
    v109 = v90[v96++];
    v110 = v717[133];
    GameRoutine_1605f00(v109);
    v111 = *(_QWORD*)(v109 + 16);
    if (v111 != 0) {
      v112 = std___1___shared_weak_count_lock_alt2(v111);
      if (v112 != 0) {
        v113 = v112;
        v114 = *(_QWORD*)(v109 + 8);
        if (v114 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v114 + 40LL))(v114, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v113 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v113 + 16LL))(v113);
          std___1___shared_weak_count___release_weak_alt2(v113);
        }
      }
    }
    *(_QWORD*)(v109 + 32) = v110;
    *(_DWORD*)(v109 + 24) = 2;
    *(_DWORD*)(v109 + 56) = 2;
    UnitInfoMenuItem_1606250((_QWORD*)v109);
    if ((_DWORD)v86 == 3) {
      v108 = 3;
      goto LABEL_253;
    }
    v108 = v86;
  }
  v115 = v90[v96++];
  v116 = v717[133];
  GameRoutine_1605f00(v115);
  v117 = *(_QWORD*)(v115 + 16);
  if (v117 != 0) {
    v118 = std___1___shared_weak_count_lock_alt2(v117);
    if (v118 != 0) {
      v119 = v118;
      v120 = *(_QWORD*)(v115 + 8);
      if (v120 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v120 + 40LL))(v120, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v119 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v119 + 16LL))(v119);
        std___1___shared_weak_count___release_weak_alt2(v119);
      }
    }
  }
  *(_QWORD*)(v115 + 32) = v116;
  *(_DWORD*)(v115 + 24) = 2;
  *(_DWORD*)(v115 + 56) = 3;
  UnitInfoMenuItem_1606250((_QWORD*)v115);
  if (v108 == 4) {
  LABEL_260:
    v127 = v90[v96];
    v128 = v717[133];
    GameRoutine_1605f00(v127);
    v129 = *(_QWORD*)(v127 + 16);
    if (v129 != 0) {
      v130 = std___1___shared_weak_count_lock_alt2(v129);
      if (v130 != 0) {
        v131 = v130;
        v132 = *(_QWORD*)(v127 + 8);
        if (v132 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v132 + 40LL))(v132, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v131 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v131 + 16LL))(v131);
          std___1___shared_weak_count___release_weak_alt2(v131);
        }
      }
    }
    *(_QWORD*)(v127 + 32) = v128;
    *(_DWORD*)(v127 + 24) = 2;
    *(_DWORD*)(v127 + 56) = 5;
    UnitInfoMenuItem_1606250((_QWORD*)v127);
    goto LABEL_267;
  }
LABEL_253:
  v121 = v90[v96++];
  v122 = v717[133];
  GameRoutine_1605f00(v121);
  v123 = *(_QWORD*)(v121 + 16);
  if (v123 != 0) {
    v124 = std___1___shared_weak_count_lock_alt2(v123);
    if (v124 != 0) {
      v125 = v124;
      v126 = *(_QWORD*)(v121 + 8);
      if (v126 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v126 + 40LL))(v126, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v125 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v125 + 16LL))(v125);
        std___1___shared_weak_count___release_weak_alt2(v125);
      }
    }
  }
  *(_QWORD*)(v121 + 32) = v122;
  *(_DWORD*)(v121 + 24) = 2;
  *(_DWORD*)(v121 + 56) = 4;
  UnitInfoMenuItem_1606250((_QWORD*)v121);
  if (v108 != 5) {
    goto LABEL_260;
  }
LABEL_267:
  v1 = (__int64)v717;
  LODWORD(v720_.v720) = 0;
  v727_.v727 = GameData_2067af8;
  v727_.v728 = (__int64**)&v720_.v720;
  v727_.v731 = (__int64*)&v727_.v727;
  v133 = (__int64)v717[133];
  v727_.v729 = (unsigned __int64)v717;
  GameRoutine_6d7e80(v133, 1, (__int64)&v727_.v727);
  if (v727_.v731 == (__int64*)&v727_.v727) {
    v134 = 32;
  LABEL_271:
    (*(void (**)(__int64))(*v727_.v731 + v134))((__int64)v727_.v731);
  }
  else if (v727_.v731 != nullptr) {
    v134 = 40;
    goto LABEL_271;
  }
  v135 = v720_.v720;
  if ((int)v720_.v720 <= 4) {
    do {
      v137 = (__int64)v717[v135 + 167];
      v138 = v717[133];
      GameRoutine_1605f00(v137);
      v139 = *(_QWORD*)(v137 + 16);
      if (v139 != 0) {
        v140 = std___1___shared_weak_count_lock_alt2(v139);
        if (v140 != 0) {
          v141 = v140;
          v142 = *(_QWORD*)(v137 + 8);
          if (v142 != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)v142 + 40LL))(v142, 1);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v141 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v141 + 16LL))(v141);
            std___1___shared_weak_count___release_weak_alt2(v141);
          }
        }
      }
      *(_DWORD*)(v137 + 24) = 3;
      *(_QWORD*)(v137 + 32) = v138;
      *(_DWORD*)(v137 + 60) = 0;
      *(_BYTE*)(v137 + 64) = 0;
      UnitInfoMenuItem_1606250((_QWORD*)v137);
      v136 = v720_.v720;
      v135 = v720_.v720 + 1;
      LODWORD(v720_.v720) = v720_.v720 + 1;
    } while (v136 < 4);
  }
  v143 = v717[133];
  v144 = v717[162];
  if ((*((_WORD*)v143 + 912) & 0x400) == 0 ||
      (v145 = *((_QWORD*)v143 + 223), v146 = *((_QWORD*)v143 + 222),
       v145 == v146)) {
    v149 = (int*)GameData_212c8a8;
  }
  else {
    v147 = (v145 - v146) >> 2;
    v148 = 0;
    v149 = (int*)GameData_212c8a8;
    while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                8LL * (*(_DWORD*)(v146 + 4 * v148) & 0xFFF)) +
                     104LL) != 10) {
      if (v147 == ++v148) {
        goto LABEL_288;
      }
    }
    v201 = (int*)(v146 + 4LL * (unsigned int)v148);
    if (v148 > -1) {
      v149 = v201;
    }
  }
LABEL_288:
  GameRoutine_1605f00((__int64)v717[162]);
  v150 = *((_QWORD*)v144 + 2);
  if (v150 != 0) {
    v151 = std___1___shared_weak_count_lock_alt2(v150);
    if (v151 != 0) {
      v152 = v151;
      v153 = *((_QWORD*)v144 + 1);
      if (v153 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v153 + 40LL))(v153, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v152 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v152 + 16LL))(v152);
        std___1___shared_weak_count___release_weak_alt2(v152);
      }
    }
  }
  *((_QWORD*)v144 + 4) = v143;
  *((_DWORD*)v144 + 6) = 3;
  v154 = *v149;
  *((_BYTE*)v144 + 64) = 0;
  *((_DWORD*)v144 + 15) = v154;
  UnitInfoMenuItem_1606250(v144);
  v155 = (__int64)v717[133];
  v156 = *(_QWORD*)(v155 + 400);
  v157 = *(_BYTE*)(v156 + 96) == 2 & *(_BYTE*)(v155 + 1880) == 0;
  if (v157) {
    v161 = *(_QWORD*)(v156 + 112);
    if (v161 != 0) {
      v158 = &GameData_21f4018[8 * (unsigned __int64)*(unsigned __int8*)(v161 +
                                                                         32)];
      if (*(_BYTE*)v158 == 0) {
        goto LABEL_306;
      }
    }
    else {
      v158 = GameData_212c8b0[0];
      if (*(_BYTE*)GameData_212c8b0[0] == 0) {
        goto LABEL_306;
      }
    }
  LABEL_299:
    v727_.v727 = *(__int64 (***)(void))(v155 + 392);
    v727_.v728 = (__int64**)v155;
    v159 = *(_DWORD*)GameRoutine_932360((unsigned __int8*)v158,
                                        (__int64*)&v727_.v727);
    if ((v159 & 0xFFF) == 0) {
      v727_.v727 = *(__int64 (***)(void))(v155 + 392);
      v727_.v728 = (__int64**)v155;
      v159 = *GameRoutine_932460((unsigned __int8*)v158, (__int64*)&v727_.v727);
      goto LABEL_307;
    }
    v160 = 0;
  }
  else {
    v158 = (__int64*)(v155 + 1880);
    if (*(_BYTE*)(v155 + 1880) != 0) {
      goto LABEL_299;
    }
  LABEL_306:
    v159 = 0;
  LABEL_307:
    v160 = 1;
  }
  v162 = v717[163];
  v163 = v717[133];
  if ((v159 & 0xFFF) != 0) {
    v164 = v160;
  }
  else {
    v164 = 0;
  }
  GameRoutine_1605f00((__int64)v717[163]);
  v165 = *((_QWORD*)v162 + 2);
  if (v165 != 0) {
    v166 = std___1___shared_weak_count_lock_alt2(v165);
    if (v166 != 0) {
      v167 = v166;
      v168 = *((_QWORD*)v162 + 1);
      if (v168 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v168 + 40LL))(v168, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v167 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v167 + 16LL))(v167);
        std___1___shared_weak_count___release_weak_alt2(v167);
      }
    }
  }
  *((_QWORD*)v162 + 4) = v163;
  *((_DWORD*)v162 + 15) = v159;
  *((_BYTE*)v162 + 64) = v164;
  *((_DWORD*)v162 + 6) = 3;
  UnitInfoMenuItem_1606250(v162);
  v169 = (__int64)v717[133];
  LODWORD(v720_.v720) = 0;
  v727_.v729 = (unsigned __int64)v717;
  v727_.v727 = GameData_2067b78;
  v727_.v728 = (__int64**)&v720_.v720;
  v727_.v731 = (__int64*)&v727_.v727;
  GameRoutine_6d7e80(v169, 11, (__int64)&v727_.v727);
  if (v727_.v731 == (__int64*)&v727_.v727) {
    v170 = 32;
  LABEL_321:
    (*(void (**)(__int64))(*v727_.v731 + v170))((__int64)v727_.v731);
  }
  else if (v727_.v731 != nullptr) {
    v170 = 40;
    goto LABEL_321;
  }
  v171 = v720_.v720;
  if ((int)v720_.v720 <= 2) {
    do {
      v173 = (__int64)v717[v171 + 164];
      v174 = v717[133];
      GameRoutine_1605f00(v173);
      v175 = *(_QWORD*)(v173 + 16);
      if (v175 != 0) {
        v176 = std___1___shared_weak_count_lock_alt2(v175);
        if (v176 != 0) {
          v177 = v176;
          v178 = *(_QWORD*)(v173 + 8);
          if (v178 != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)v178 + 40LL))(v178, 1);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v177 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v177 + 16LL))(v177);
            std___1___shared_weak_count___release_weak_alt2(v177);
          }
        }
      }
      *(_DWORD*)(v173 + 24) = 3;
      *(_QWORD*)(v173 + 32) = v174;
      *(_DWORD*)(v173 + 60) = 0;
      *(_BYTE*)(v173 + 64) = 0;
      UnitInfoMenuItem_1606250((_QWORD*)v173);
      v172 = v720_.v720;
      v171 = v720_.v720 + 1;
      LODWORD(v720_.v720) = v720_.v720 + 1;
    } while (v172 < 2);
  }
  v179 = v717[133];
  v180 = &v727_.v727;
  LODWORD(v720_.v720) = 0;
  v727_.v729 = (unsigned __int64)v717;
  v727_.v727 = GameData_2067bf8;
  v727_.v728 = (__int64**)&v720_.v720;
  v727_.v731 = (__int64*)&v727_.v727;
  if ((*((_BYTE*)v179 + 1825) & 1) != 0) {
    v181 = *((_QWORD*)v179 + 223);
    v182 = *((_QWORD*)v179 + 222);
    if ((int)((unsigned __int64)(v181 - v182) >> 2) < 1) {
      v180 = &v727_.v727;
    }
    else {
      v183 = 0;
      v184 = 0;
      v185 = GameData_212c880[0];
      v186 = *GameData_212c880[0];
      do {
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v186 + 64) +
                                 8LL * (*(_DWORD*)(v182 + v183) & 0xFFF)) +
                      104LL) == 8) {
          if (v727_.v731 == nullptr) {
          LABEL_1279:
            GameRoutine_60a310();
          }
          (*(void (**)(__int64*, __int64))(*v727_.v731 + 48))(v727_.v731,
                                                              v182 + v183);
          v186 = *v185;
          v181 = *((_QWORD*)v179 + 223);
          v182 = *((_QWORD*)v179 + 222);
        }
        ++v184;
        v183 += 4;
      } while (v184 < (int)((unsigned __int64)(v181 - v182) >> 2));
      v180 = (__int64 (***)(void))v727_.v731;
      if (v727_.v731 != (__int64*)&v727_.v727) {
        if (v727_.v731 != nullptr) {
          v187 = 5;
          goto LABEL_343;
        }
        goto LABEL_344;
      }
    }
  }
  v187 = 4;
LABEL_343:
  ((__int64 (*)(__int64))(*v180)[v187])((__int64)v180);
LABEL_344:
  if ((int)v720_.v720 > 2) {
    v196 = 1;
  }
  else {
    v188 = (int)v720_.v720 + 1LL;
    v189 = (__int64*)&v717[(int)v720_.v720 + 245];
    do {
      v191 = *v189++;
      v190 = v191;
      GameRoutine_1605f00(v191);
      v192 = *(_QWORD*)(v191 + 16);
      if (v192 != 0) {
        v193 = std___1___shared_weak_count_lock_alt2(v192);
        if (v193 != 0) {
          v194 = v193;
          v195 = *(_QWORD*)(v190 + 8);
          if (v195 != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v195 + 40LL))(v195, 0);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v194 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v194 + 16LL))(v194);
            std___1___shared_weak_count___release_weak_alt2(v194);
          }
        }
      }
      v157 = (_DWORD)v188++ == 3;
    } while (!v157);
    v196 = (int)v720_.v720 > 0;
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)v53, (__int64)"A_Blood", v196);
  LayoutAccessor_1560070_alt2((void*)(&v727_.v727), (__int64*)v717 + 106,
                              "L_Page00");
  if (v727_.v728 != nullptr) {
    v197 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
    if (v197 != 0) {
      v198 = (__int64*)v727_.v727;
    }
    else {
      v198 = nullptr;
    }
    if (v727_.v728 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
    }
  }
  else {
    v197 = 0;
    v198 = nullptr;
  }
  LayoutAccessor_1560070_alt2((void*)(&v727_.v727), v198,
                              "L_BattleStatusGraph");
  if (v727_.v728 != nullptr) {
    v199 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
    if (v199 != 0) {
      v200 = v727_.v727;
    }
    else {
      v200 = nullptr;
    }
    if (v727_.v728 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
    }
    if (v200 != nullptr) {
      v727_.v727 = v200;
      v727_.v728 = (__int64**)v199;
      if (v199 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v199 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_17a4be0((int*)v717 + 497, &v727_.v727);
        std___1___shared_weak_count___release_weak_alt2(v199);
      LABEL_372:
        if (atomic_fetch_add((atomic_ullong* volatile)(v199 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v199 + 16LL))(v199);
          std___1___shared_weak_count___release_weak_alt2(v199);
        }
      }
      else {
        GameRoutine_17a4be0((int*)v717 + 497, &v727_.v727);
      }
    }
    else if (v199 != 0) {
      goto LABEL_372;
    }
  }
  LayoutAccessor_1560070_alt2((void*)(&v720_.v720), v198, "L_BasicStatusGraph");
  if (v720_.v721 != 0) {
    v202 = std___1___shared_weak_count_lock_alt2(v720_.v721);
    if (v202 != 0) {
      v203 = v720_.v720;
    }
    else {
      v203 = 0;
    }
    if (v720_.v721 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v720_.v721);
    }
    if (v203 != 0) {
      v720_.v720 = v203;
      v720_.v721 = v202;
      if (v202 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v202 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_17a4be0((int*)v717 + 514, &v720_.v720);
        std___1___shared_weak_count___release_weak_alt2(v202);
      LABEL_388:
        if (atomic_fetch_add((atomic_ullong* volatile)(v202 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v202 + 16LL))(v202);
          std___1___shared_weak_count___release_weak_alt2(v202);
        }
      }
      else {
        GameRoutine_17a4be0((int*)v717 + 514, &v720_.v720);
      }
    }
    else if (v202 != 0) {
      goto LABEL_388;
    }
  }
  LayoutAccessor_1560070_alt2((void*)(&v718_.v718), v198, "L_GrowthRateGraph");
  if (v718_.v719 != 0) {
    v204 = std___1___shared_weak_count_lock_alt2(v718_.v719);
    if (v204 != 0) {
      v205 = v718_.v718;
    }
    else {
      v205 = 0;
    }
    if (v718_.v719 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v718_.v719);
    }
    if (v205 != 0) {
      v718_.v718 = v205;
      v718_.v719 = v204;
      if (v204 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v204 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_17a4be0((int*)v717 + 531, &v718_.v718);
        std___1___shared_weak_count___release_weak_alt2(v204);
      LABEL_401:
        if (atomic_fetch_add((atomic_ullong* volatile)(v204 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v204 + 16LL))(v204);
          std___1___shared_weak_count___release_weak_alt2(v204);
        }
      }
      else {
        GameRoutine_17a4be0((int*)v717 + 531, &v718_.v718);
      }
    }
    else if (v204 != 0) {
      goto LABEL_401;
    }
  }
  if (v197 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v197 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v197 + 16LL))(v197);
    std___1___shared_weak_count___release_weak_alt2(v197);
  }
LABEL_407:
  if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    std___1___shared_weak_count___release_weak_alt2(v52);
  }
LABEL_410:
  LayoutAccessor_1560070_alt2((void*)(&v727_.v727), (__int64*)(v1 + 848),
                              "L_Page01");
  if (v727_.v728 != nullptr) {
    v206 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
    v207 = (__int64*)v727_.v727;
    if (v727_.v728 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
    }
    if (v206 != 0 && v207 != nullptr) {
      v208 = *(_QWORD*)(v1 + 1064);
      v209 = &v727_.v727;
      LODWORD(v751_.v751) = 0;
      v727_.v729 = v1;
      v727_.v727 = GameData_2067c78;
      v727_.v728 = (__int64**)&v751_.v751;
      v727_.v731 = (__int64*)&v727_.v727;
      v210 = *(_QWORD*)(v208 + 1200);
      if ((int)((unsigned __int64)(*(_QWORD*)(v208 + 1208) - v210) >> 2) < 1) {
        goto LABEL_422;
      }
      v211 = 0;
      v212 = 0;
      do {
        if (v727_.v731 == nullptr) {
          goto LABEL_1279;
        }
        (*(void (**)(__int64*, __int64))(*v727_.v731 + 48))(v727_.v731,
                                                            v210 + v211);
        v210 = *(_QWORD*)(v208 + 1200);
        ++v212;
        v211 += 4;
      } while (v212 <
               (int)((unsigned __int64)(*(_QWORD*)(v208 + 1208) - v210) >> 2));
      v209 = (__int64 (***)(void))v727_.v731;
      if (v727_.v731 == (__int64*)&v727_.v727) {
      LABEL_422:
        v213 = 4;
      LABEL_423:
        ((__int64 (*)(__int64))(*v209)[v213])((__int64)v209);
      }
      else if (v727_.v731 != nullptr) {
        v213 = 5;
        goto LABEL_423;
      }
      v214 = *(_QWORD*)(v1 + 1064);
      LODWORD(v746_.v746) = 0;
      v215 = *(_QWORD*)(game_Unit_GetJob(v214) + 24);
      v216 = &v727_.v727;
      v727_.v727 = GameData_2067cf8;
      v727_.v728 = (__int64**)&v751_.v751;
      v727_.v731 = (__int64*)&v727_.v727;
      v727_.v729 = (unsigned __int64)&v746_.v746;
      v727_.v730 = v1;
      v217 = *(_QWORD*)(v215 + 512);
      if ((int)((unsigned __int64)(*(_QWORD*)(v215 + 520) - v217) >> 2) < 1) {
        goto LABEL_431;
      }
      v218 = 0;
      v219 = 0;
      do {
        if (v727_.v731 == nullptr) {
          goto LABEL_1279;
        }
        (*(void (**)(__int64*, __int64))(*v727_.v731 + 48))(v727_.v731,
                                                            v217 + v218);
        v217 = *(_QWORD*)(v215 + 512);
        ++v219;
        v218 += 4;
      } while (v219 <
               (int)((unsigned __int64)(*(_QWORD*)(v215 + 520) - v217) >> 2));
      v216 = (__int64 (***)(void))v727_.v731;
      if (v727_.v731 == (__int64*)&v727_.v727) {
      LABEL_431:
        v221 = 4;
      LABEL_432:
        ((__int64 (*)(__int64))(*v216)[v221])((__int64)v216);
      }
      else if (v727_.v731 != nullptr) {
        v221 = 5;
        goto LABEL_432;
      }
      v222 = *(_QWORD*)(v1 + 1064);
      v223 = (int)v751_.v751;
      v727_.v727 = (__int64 (**)(void))((char*)0x20LL);
      v224 = game_UnitSkillList_GetMaxValue((_QWORD*)(v222 + 1744),
                                            (__int64*)&v727_.v727);
      v225 = (int)v751_.v751;
      if (v223 < v224 + (int)v746_.v746 + 3) {
        do {
          v230 = *(_QWORD*)(v1 + 1376 + 8LL * v225);
          v231 = *(_QWORD*)(v1 + 1064);
          LODWORD(v751_.v751) = v225 + 1;
          GameRoutine_1605f00(v230);
          v232 = *(_QWORD*)(v230 + 16);
          if (v232 != 0) {
            v233 = std___1___shared_weak_count_lock_alt2(v232);
            if (v233 != 0) {
              v234 = v233;
              v235 = *(_QWORD*)(v230 + 8);
              if (v235 != 0) {
                (*(void (**)(__int64, __int64))(*(_QWORD*)v235 + 40LL))(v235,
                                                                        1);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v234 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v234 + 16LL))(v234);
                std___1___shared_weak_count___release_weak_alt2(v234);
              }
            }
          }
          *(_DWORD*)(v230 + 24) = 4;
          *(_QWORD*)(v230 + 32) = v231;
          *(_DWORD*)(v230 + 60) = 0;
          *(_BYTE*)(v230 + 64) = 0;
          UnitInfoMenuItem_1606250((_QWORD*)v230);
          v226 = *(_QWORD*)(v1 + 1064);
          v227 = (int)v751_.v751;
          v727_.v727 = (__int64 (**)(void))((char*)0x20LL);
          v229 = game_UnitSkillList_GetMaxValue((_QWORD*)(v226 + 1744),
                                                (__int64*)&v727_.v727);
          v225 = (int)v751_.v751;
        } while (v227 < v229 + (int)v746_.v746 + 3);
      }
      if (v225 <= 6) {
        v236 = v225 + 1LL;
        v237 = (__int64*)(v1 + 8LL * v225 + 1376);
        do {
          v239 = *v237++;
          v238 = v239;
          GameRoutine_1605f00(v239);
          v240 = *(_QWORD*)(v239 + 16);
          if (v240 != 0) {
            v241 = std___1___shared_weak_count_lock_alt2(v240);
            if (v241 != 0) {
              v242 = v241;
              v243 = *(_QWORD*)(v238 + 8);
              if (v243 != 0) {
                (*(void (**)(__int64, _QWORD))(*(_QWORD*)v243 + 40LL))(v243, 0);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v242 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v242 + 16LL))(v242);
                std___1___shared_weak_count___release_weak_alt2(v242);
              }
            }
          }
          v157 = (_DWORD)v236++ == 7;
        } while (!v157);
      }
      v244 = ui_LayoutAccessor_FindAlignment(v207, (__int64)"A_SkillCommand");
      if (v244 != 0) {
        Alignment_56b600(v244);
      }
      v245 = *(_QWORD*)(v1 + 1064);
      LODWORD(v751_.v751) = 0;
      LOWORD(v746_.v746) = 512;
      v727_.v731 = (__int64*)&v727_.v727;
      v727_.v727 = GameData_2067d78;
      v727_.v728 = (__int64**)&v751_.v751;
      game_UnitSkillList_EachIndirectSkill(v245 + 1456, &v746_.v746,
                                           (__int64)&v727_.v727);
      if (v727_.v731 == (__int64*)&v727_.v727) {
        v246 = 32;
      LABEL_457:
        (*(void (**)(__int64))(*v727_.v731 + v246))((__int64)v727_.v731);
      }
      else if (v727_.v731 != nullptr) {
        v246 = 40;
        goto LABEL_457;
      }
      v710 = v206;
      v713 = v207;
      Util_157b9a0((void*)((__int64*)&v727_.v727), *(_QWORD*)(v1 + 1064), 0);
      v247 = v727_.v727;
      v248 = (__int64)v727_.v728;
      if (v727_.v727 == (__int64 (**)(void))v727_.v728) {
        UnitInfoMenuItem_16061b0_alt1(*(_QWORD*)(v1 + 1432), "MID_Sys_Empty");
        LODWORD(v249) = 1;
      }
      else {
        v249 = 0;
        do {
          v250 = *(_QWORD*)(v1 + 1432 + 8 * v249);
          v251 = *(_DWORD*)v247;
          v252 = v717[133];
          GameRoutine_1605f00(v250);
          v253 = *(_QWORD*)(v250 + 16);
          if (v253 != 0) {
            v254 = std___1___shared_weak_count_lock_alt2(v253);
            if (v254 != 0) {
              v255 = v254;
              v256 = *(_QWORD*)(v250 + 8);
              if (v256 != 0) {
                (*(void (**)(__int64, __int64))(*(_QWORD*)v256 + 40LL))(v256,
                                                                        1);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v255 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v255 + 16LL))(v255);
                std___1___shared_weak_count___release_weak_alt2(v255);
              }
            }
          }
          *(_DWORD*)(v250 + 24) = 6;
          *(_QWORD*)(v250 + 32) = v252;
          *(_DWORD*)(v250 + 56) = v251 - 6;
          UnitInfoMenuItem_1606250((_QWORD*)v250);
          v247 = (__int64 (**)(void))((char*)v247 + 4);
          ++v249;
        } while (v247 != (__int64 (**)(void))v248);
        v1 = (__int64)v717;
      }
      v257 = (__int64*)v727_.v730;
      v258 = v727_.v731;
      v259 = v1 + 8LL * (unsigned int)v249;
      v706 = v259;
      if ((__int64*)v727_.v730 == v727_.v731) {
        v261 = v249 + 1;
        UnitInfoMenuItem_16061b0_alt1(*(_QWORD*)(v259 + 1432), "MID_Sys_Empty");
      }
      else {
        v260 = (__int64*)(v259 + 1432);
        v261 = v249;
        do {
          v263 = *v260++;
          v262 = v263;
          v264 = *(_DWORD*)v257;
          v265 = v717[133];
          GameRoutine_1605f00(v263);
          v266 = *(_QWORD*)(v263 + 16);
          if (v266 != 0) {
            v267 = std___1___shared_weak_count_lock_alt2(v266);
            if (v267 != 0) {
              v268 = v267;
              v269 = *(_QWORD*)(v262 + 8);
              if (v269 != 0) {
                (*(void (**)(__int64, __int64))(*(_QWORD*)v269 + 40LL))(v269,
                                                                        1);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v268 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v268 + 16LL))(v268);
                std___1___shared_weak_count___release_weak_alt2(v268);
              }
            }
          }
          *(_DWORD*)(v262 + 24) = 6;
          *(_QWORD*)(v262 + 32) = v265;
          *(_DWORD*)(v262 + 56) = v264 - 6;
          UnitInfoMenuItem_1606250((_QWORD*)v262);
          v257 = (__int64*)((char*)v257 + 4);
          ++v261;
        } while (v257 != v258);
      }
      if (v261 <= 23) {
        v270 = v261 + 1LL;
        v271 = (__int64*)&v717[v261 + 179];
        do {
          v273 = *v271++;
          v272 = v273;
          GameRoutine_1605f00(v273);
          v274 = *(_QWORD*)(v273 + 16);
          if (v274 != 0) {
            v275 = std___1___shared_weak_count_lock_alt2(v274);
            if (v275 != 0) {
              v276 = v275;
              v277 = *(_QWORD*)(v272 + 8);
              if (v277 != 0) {
                (*(void (**)(__int64, _QWORD))(*(_QWORD*)v277 + 40LL))(v277, 0);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v276 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v276 + 16LL))(v276);
                std___1___shared_weak_count___release_weak_alt2(v276);
              }
            }
          }
          v157 = (_DWORD)v270++ == 24;
        } while (!v157);
      }
      if (v732_.v733 != 0) {
        v732_.v734 = v732_.v733;
        v278 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v278 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v278, v732_.v733);
      }
      if (v727_.v730 != 0) {
        v727_.v731 = (__int64*)v727_.v730;
        v279 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v279 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v279, v727_.v730);
      }
      if (v727_.v727 != nullptr) {
        v727_.v728 = (__int64**)v727_.v727;
        v280 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v280 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v280, (__int64)v727_.v727);
      }
      v281 = v261 + 2;
      if ((_DWORD)v751_.v751 != 0) {
        v282 = 3 * (int)v751_.v751 + 1;
      }
      else {
        v282 = 0;
      }
      if (v281 >= 17) {
        if ((unsigned int)v249 <= 0xF) {
          v707 = 0;
          v283 = v282 + v261 - (int)v249 + 1 < 17;
        }
        else {
          v283 = false;
          v707 = 1;
        }
      }
      else {
        v283 = false;
        v707 = 0;
      }
      v284 = ui_LayoutAccessor_FindPane_alt2(v713, (__int64)"A_Magic00");
      v285 = ui_LayoutAccessor_FindPane_alt2(v713, (__int64)"A_Magic01");
      v286 = (_QWORD*)ui_LayoutAccessor_FindPane_alt2(
          v713, (__int64)"L_Info_Magic01");
      v287 =
          (_QWORD*)ui_LayoutAccessor_FindPane_alt2(v713, (__int64)"A_Dragon");
      Pane_58df60(v286[3], v286);
      v709 = (__int64)v287;
      Pane_58df60(v287[3], v287);
      v288 = v717;
      v289 = (__int64*)(v717 + 203);
      Pane_58df60(*((_QWORD*)v717[203] + 3), v717[203]);
      Pane_58df60(*((_QWORD*)v288[204] + 3), v288[204]);
      Pane_58df60(*((_QWORD*)v288[205] + 3), v288[205]);
      Pane_58df60(*((_QWORD*)v288[206] + 3), v288[206]);
      Pane_58df60(*((_QWORD*)v288[207] + 3), v288[207]);
      Pane_58df60(*((_QWORD*)v288[208] + 3), v288[208]);
      Pane_58df60(*((_QWORD*)v288[209] + 3), v288[209]);
      Pane_58df60(*((_QWORD*)v288[210] + 3), v288[210]);
      Pane_58df60(*((_QWORD*)v288[211] + 3), v288[211]);
      Pane_58df60(*((_QWORD*)v288[212] + 3), v288[212]);
      Pane_58df60(*((_QWORD*)v288[213] + 3), v288[213]);
      Pane_58df60(*((_QWORD*)v288[214] + 3), v288[214]);
      Pane_58df60(*((_QWORD*)v288[215] + 3), v288[215]);
      Pane_58df60(*((_QWORD*)v288[216] + 3), v288[216]);
      Pane_58df60(*((_QWORD*)v288[217] + 3), v288[217]);
      Pane_58df60(*((_QWORD*)v288[218] + 3), v288[218]);
      Pane_58df60(*((_QWORD*)v288[219] + 3), v288[219]);
      Pane_58df60(*((_QWORD*)v288[220] + 3), v288[220]);
      Pane_58df60(*((_QWORD*)v288[221] + 3), v288[221]);
      Pane_58df60(*((_QWORD*)v288[222] + 3), v288[222]);
      Pane_58df60(*((_QWORD*)v288[223] + 3), v288[223]);
      Pane_58df60(*((_QWORD*)v288[224] + 3), v288[224]);
      Pane_58df60(*((_QWORD*)v288[225] + 3), v288[225]);
      Pane_58df60(*((_QWORD*)v288[226] + 3), v288[226]);
      if (v281 > 16) {
        if (v283) {
          v295 = (__int64*)(v717 + 203);
          v296 = (unsigned int)v249;
          do {
            v297 = *v295++;
            Pane_58dee0(v284, v297);
            --v296;
          } while (v296 != 0);
          Pane_58dee0(v285, (__int64)v286);
          if (v261 > (int)v249) {
            v298 = (__int64*)&v717[(unsigned int)v249 + 203];
            do {
              v299 = *v298++;
              Pane_58dee0(v285, v299);
              LODWORD(v249) = v249 + 1;
            } while (v261 > (int)v249);
          }
        }
        else if ((v707 & 1) != 0) {
          Pane_58dee0(v284, (__int64)v717[203]);
          Pane_58dee0(v284, (__int64)v717[204]);
          Pane_58dee0(v284, (__int64)v717[205]);
          Pane_58dee0(v284, (__int64)v717[206]);
          Pane_58dee0(v284, (__int64)v717[207]);
          Pane_58dee0(v284, (__int64)v717[208]);
          Pane_58dee0(v284, (__int64)v717[209]);
          Pane_58dee0(v284, (__int64)v717[210]);
          Pane_58dee0(v284, (__int64)v717[211]);
          Pane_58dee0(v284, (__int64)v717[212]);
          Pane_58dee0(v284, (__int64)v717[213]);
          Pane_58dee0(v284, (__int64)v717[214]);
          Pane_58dee0(v284, (__int64)v717[215]);
          Pane_58dee0(v284, (__int64)v717[216]);
          Pane_58dee0(v284, (__int64)v717[217]);
          if ((unsigned int)v249 >= 0x10) {
            v300 = (unsigned int)v249 - 15LL;
            v301 = (__int64*)(v717 + 218);
            do {
              v302 = *v301++;
              Pane_58dee0(v285, v302);
              --v300;
            } while (v300 != 0);
          }
          Pane_58dee0(v285, (__int64)v286);
          if (v261 > (int)v249) {
            v303 = (__int64*)(v706 + 1624);
            do {
              v304 = *v303++;
              Pane_58dee0(v285, v304);
              LODWORD(v249) = v249 + 1;
            } while (v261 > (int)v249);
          }
        }
        else {
          v305 = (__int64*)(v717 + 203);
          v306 = (unsigned int)v249;
          do {
            v307 = *v305++;
            Pane_58dee0(v284, v307);
            --v306;
          } while (v306 != 0);
          Pane_58dee0(v284, (__int64)v286);
          if ((unsigned int)v249 <= 0xD) {
            v308 = (unsigned int)v249 + 1LL;
            v309 = (__int64*)&v717[(unsigned int)v249 + 203];
            do {
              v310 = *v309++;
              Pane_58dee0(v284, v310);
              v157 = (_DWORD)v308++ == 14;
            } while (!v157);
          }
          v311 = (unsigned int)v261 - 14LL;
          v312 = (__int64*)(v717 + 217);
          do {
            v313 = *v312++;
            Pane_58dee0(v285, v313);
            --v311;
          } while (v311 != 0);
        }
      }
      else {
        v290 = (__int64*)(v717 + 203);
        v291 = (unsigned int)v249;
        do {
          v292 = *v290++;
          Pane_58dee0(v284, v292);
          --v291;
        } while (v291 != 0);
        Pane_58dee0(v284, (__int64)v286);
        if (v261 > (int)v249) {
          v293 = (__int64*)&v717[(unsigned int)v249 + 203];
          do {
            v294 = *v293++;
            Pane_58dee0(v284, v294);
            LODWORD(v249) = v249 + 1;
          } while (v261 > (int)v249);
        }
      }
      if (*(_QWORD*)(*v289 + 24) == 0) {
        Pane_58dee0(v285, *v289);
      }
      v1 = (__int64)v717;
      v206 = v710;
      v314 = (__int64)v717[204];
      if (*(_QWORD*)(v314 + 24) == 0) {
        Pane_58dee0(v285, v314);
      }
      v315 = (__int64)v717[205];
      if (*(_QWORD*)(v315 + 24) == 0) {
        Pane_58dee0(v285, v315);
      }
      v316 = (__int64)v717[206];
      if (*(_QWORD*)(v316 + 24) == 0) {
        Pane_58dee0(v285, v316);
      }
      v317 = (__int64)v717[207];
      if (*(_QWORD*)(v317 + 24) == 0) {
        Pane_58dee0(v285, v317);
      }
      v318 = (__int64)v717[208];
      if (*(_QWORD*)(v318 + 24) == 0) {
        Pane_58dee0(v285, v318);
      }
      v319 = (__int64)v717[209];
      if (*(_QWORD*)(v319 + 24) == 0) {
        Pane_58dee0(v285, v319);
      }
      v320 = (__int64)v717[210];
      if (*(_QWORD*)(v320 + 24) == 0) {
        Pane_58dee0(v285, v320);
      }
      v321 = (__int64)v717[211];
      if (*(_QWORD*)(v321 + 24) == 0) {
        Pane_58dee0(v285, v321);
      }
      v322 = (__int64)v717[212];
      if (*(_QWORD*)(v322 + 24) == 0) {
        Pane_58dee0(v285, v322);
      }
      v323 = (__int64)v717[213];
      if (*(_QWORD*)(v323 + 24) == 0) {
        Pane_58dee0(v285, v323);
      }
      v324 = (__int64)v717[214];
      if (*(_QWORD*)(v324 + 24) == 0) {
        Pane_58dee0(v285, v324);
      }
      v325 = (__int64)v717[215];
      if (*(_QWORD*)(v325 + 24) == 0) {
        Pane_58dee0(v285, v325);
      }
      v326 = (__int64)v717[216];
      if (*(_QWORD*)(v326 + 24) == 0) {
        Pane_58dee0(v285, v326);
      }
      v327 = (__int64)v717[217];
      if (*(_QWORD*)(v327 + 24) == 0) {
        Pane_58dee0(v285, v327);
      }
      v328 = (__int64)v717[218];
      if (*(_QWORD*)(v328 + 24) == 0) {
        Pane_58dee0(v285, v328);
      }
      v329 = (__int64)v717[219];
      if (*(_QWORD*)(v329 + 24) == 0) {
        Pane_58dee0(v285, v329);
      }
      v330 = (__int64)v717[220];
      if (*(_QWORD*)(v330 + 24) == 0) {
        Pane_58dee0(v285, v330);
      }
      v331 = (__int64)v717[221];
      if (*(_QWORD*)(v331 + 24) == 0) {
        Pane_58dee0(v285, v331);
      }
      v332 = (__int64)v717[222];
      if (*(_QWORD*)(v332 + 24) == 0) {
        Pane_58dee0(v285, v332);
      }
      v333 = (__int64)v717[223];
      if (*(_QWORD*)(v333 + 24) == 0) {
        Pane_58dee0(v285, v333);
      }
      v334 = (__int64)v717[224];
      if (*(_QWORD*)(v334 + 24) == 0) {
        Pane_58dee0(v285, v334);
      }
      v335 = (__int64)v717[225];
      if (*(_QWORD*)(v335 + 24) == 0) {
        Pane_58dee0(v285, v335);
      }
      v336 = (__int64)v717[226];
      if (*(_QWORD*)(v336 + 24) == 0) {
        Pane_58dee0(v285, v336);
      }
      Pane_58dee0(v285, v709);
      v337 = ui_LayoutAccessor_FindAlignment(v713, (__int64)"A_Magic00");
      if (v337 != 0) {
        Alignment_56b600(v337);
      }
      ui_LayoutAccessor_SetPaneVisible((__int64)v713, (__int64)"A_Dragon",
                                       (int)v751_.v751 > 0);
      if ((int)v751_.v751 >= 1) {
        v338 = v717[133];
        LODWORD(v746_.v746) = 0;
        v727_.v729 = (unsigned __int64)v717;
        LOWORD(v724_.v724) = 512;
        v727_.v731 = (__int64*)&v727_.v727;
        v727_.v727 = GameData_2067df8;
        v727_.v728 = &v746_.v746;
        game_UnitSkillList_EachIndirectSkill((__int64)v338 + 1456, &v724_.v724,
                                             (__int64)&v727_.v727);
        if (v727_.v731 == (__int64*)&v727_.v727) {
          v339 = 32;
        LABEL_593:
          (*(void (**)(__int64))(*v727_.v731 + v339))((__int64)v727_.v731);
        }
        else if (v727_.v731 != nullptr) {
          v339 = 40;
          goto LABEL_593;
        }
        if ((int)v746_.v746 <= 2) {
          v340 = (int)v746_.v746 + 1LL;
          v341 = (__int64)&v717[(int)v746_.v746 + 228];
          v342 = (__int64*)v341;
          do {
            v344 = *v342++;
            v343 = v344;
            GameRoutine_1605f00(v344);
            v345 = *(_QWORD*)(v344 + 16);
            if (v345 != 0) {
              v346 = std___1___shared_weak_count_lock_alt2(v345);
              if (v346 != 0) {
                v347 = v346;
                v348 = *(_QWORD*)(v343 + 8);
                if (v348 != 0) {
                  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v348 + 40LL))(v348,
                                                                         0);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v347 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v347 + 16LL))(v347);
                  std___1___shared_weak_count___release_weak_alt2(v347);
                }
              }
            }
            v349 = *(_QWORD*)(v341 + 24);
            GameRoutine_1605f00(v349);
            v350 = *(_QWORD*)(v349 + 16);
            if (v350 != 0) {
              v351 = std___1___shared_weak_count_lock_alt2(v350);
              if (v351 != 0) {
                v352 = v351;
                v353 = *(_QWORD*)(v349 + 8);
                if (v353 != 0) {
                  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v353 + 40LL))(v353,
                                                                         0);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v352 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v352 + 16LL))(v352);
                  std___1___shared_weak_count___release_weak_alt2(v352);
                }
              }
            }
            v354 = *(_QWORD*)(v341 + 48);
            GameRoutine_1605f00(v354);
            v355 = *(_QWORD*)(v354 + 16);
            if (v355 != 0) {
              v356 = std___1___shared_weak_count_lock_alt2(v355);
              if (v356 != 0) {
                v357 = v356;
                v358 = *(_QWORD*)(v354 + 8);
                if (v358 != 0) {
                  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v358 + 40LL))(v358,
                                                                         0);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v357 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v357 + 16LL))(v357);
                  std___1___shared_weak_count___release_weak_alt2(v357);
                }
              }
            }
            v341 = (__int64)v342;
            v157 = (_DWORD)v340++ == 3;
          } while (!v157);
        }
        v359 = ui_LayoutAccessor_FindAlignment(v713, (__int64)"A_Dragon");
        if (v359 != 0) {
          Alignment_56b600(v359);
          v360 = v713[1];
          if (v360 != 0) {
            v361 = std___1___shared_weak_count_lock_alt2(v360);
            if (v361 != 0) {
              v362 = v361;
              if (*v713 != 0) {
                ControlCreator_13633c0(*v713);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v362 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v362 + 16LL))(v362);
                std___1___shared_weak_count___release_weak_alt2(v362);
              }
            }
          }
        }
      }
      v363 = ui_LayoutAccessor_FindAlignment(v713, (__int64)"A_Magic01");
      if (v363 != 0) {
        Alignment_56b600(v363);
      }
    }
    if (v206 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v206 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v206 + 16LL))(v206);
      std___1___shared_weak_count___release_weak_alt2(v206);
    }
  }
  LayoutAccessor_1560070_alt2((void*)(&v727_.v727), (__int64*)(v1 + 848),
                              "L_Page02");
  if (v727_.v728 != nullptr) {
    v365 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
    v366 = (__int64*)v727_.v727;
    if (v365 != 0) {
      v367 = v727_.v727;
    }
    else {
      v367 = nullptr;
    }
    if (v727_.v728 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
    }
    if (v367 != nullptr) {
      v368 = game_Unit_GetJob(*(_QWORD*)(v1 + 1064));
      v369 = v368;
      if (v368 == 0) {
        goto LABEL_655;
      }
      v370 = *(_QWORD*)(*(_QWORD*)(v368 + 24) + 1104LL);
      if (v370 == 0) {
        goto LABEL_655;
      }
      v371 = *(unsigned __int16*)(v370 + 412);
      v372 = *(_QWORD**)(v1 + 1064);
      v373 = *(_QWORD*)(*(_QWORD*)(v370 + 24) + 1104LL);
      if (v373 != 0) {
        v374 = *(unsigned __int16*)(v373 + 412);
        if (*(_WORD*)(v373 + 412) != 0) {
          v375 = v372[70];
          v376 = *(unsigned __int16*)(v373 + 16);
          if (v376 >= (signed __int64)(v372[71] - v375) >> 1) {
            v377 = 0;
          }
          else {
            v377 = *(_WORD*)(v375 + 2 * v376) & 0x3FF;
          }
          LOBYTE(v374) = v377 >= v374;
        }
      }
      else {
        LOBYTE(v374) = 0;
      }
      if (v371 == 0 || (v374 & 1) != 0 ||
          (LODWORD(v727_.v727) = *game_g_shared_system_skills_ptr & 0xFFF,
           v378 = game_HasSkill(v372 + 218, (unsigned int*)&v727_.v727),
           v379 = v372[55], (v378 & 1) != 0) &&
              (v379 == 0 ? (v380 = 9) : (v380 = *(_BYTE*)(v379 + 16)),
               ((1 << v380) & 0xF1) != 0) ||
          v379 != 0 &&
              (unsigned int)*(unsigned __int8*)(v379 + 16) - 4 >= 0xFFFFFFFD) {
      LABEL_655:
        ui_LayoutAccessor_SetPaneVisible((__int64)v366, (__int64)"A_JobExp", 0);
      }
      else {
        ui_LayoutAccessor_SetPaneVisible((__int64)v366, (__int64)"A_JobExp", 1);
        v381 = *(_QWORD*)(*(_QWORD*)(v369 + 24) + 1104LL);
        if (v381 != 0 &&
            (v382 = v372[70],
             (v383 = *(unsigned __int16*)(v381 + 16)) <
                 (unsigned __int64)((signed __int64)(v372[71] - v382) >> 1))) {
          v384 = *(_WORD*)(v382 + 2 * v383) & 0x3FF;
        }
        else {
          v384 = 0;
        }
        v482 = ui_LayoutAccessor_FindPane_alt2(v366, (__int64)"T_JobExpNum");
        if (v482 != 0) {
          v483 = __dynamic_cast(v482, GameData_212d670[0], GameData_212d690, 0);
          if (v483 != 0) {
            game_156c910(v483, "%d", 1, (unsigned int)(v371 - v384));
          }
        }
      }
      v385 = *(_QWORD*)(v1 + 1064);
      if (v385 != 0) {
        v386 = *(_QWORD*)(v385 + 392);
        if (v386 != 0 && v369 == GameData_21c9988) {
          if (*(_QWORD*)(*(_QWORD*)(v386 + 24) + 1784LL) != 0) {
            v386 = *(_QWORD*)(*(_QWORD*)(v386 + 24) + 1784LL);
          }
          v387 = *(unsigned __int8*)(v386 + 52) - 1;
          if (v387 < 3) {
            v388 = GameData_20683c0[(unsigned __int8)v387];
            goto LABEL_664;
          }
        }
      }
      v388 = *(char**)(v369 + 40);
      if (v388 != nullptr) {
      LABEL_664:
        v732_.v732 = -1;
        v732_.v733 = -1;
        v732_.v734 = -1;
        v732_.v735 = -1;
        v389 = *msg_MessageManager_instance__ptr[0];
        v732_.v736 = -1;
        v732_.v737 = -1;
        v732_.v738 = -1;
        v732_.v739 = -1;
        v732_.v740 = -1;
        v732_.v741 = -1;
        v732_.v742 = -1;
        v732_.v743 = -1;
        v727_.v727 = (__int64 (**)(void))(GameData_212e348 + 2);
        v727_.v728 = (__int64**)0xFFFF0001FFFF0000LL;
        v727_.v729 = 0xFFFF0004FFFF0002LL;
        v727_.v730 = 0xFFFF0006FFFF0005LL;
        v732_.v744 = 8;
        v727_.v731 = (__int64*)0xFFFF0008FFFF0007LL;
        v390 = task_a4dbe0(v389, v388, 0);
        if (v390 != nullptr) {
          v391 = (__int64)v390;
          v392 = ui_LayoutAccessor_FindTextBox_alt1(v366,
                                                    (__int64)"L_InfoTxt/T_Txt");
          if (v392 != 0) {
            game_156c5d0(v392, v391, 0);
          }
        }
      }
      LayoutAccessor_1560070_alt2((void*)(&v727_.v727), v366, "L_JobList");
      if (v727_.v728 != nullptr) {
        v393 =
            (char*)std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
        v394 = (__int64*)v727_.v727;
        if (v393 != nullptr) {
          v395 = (__int64*)v727_.v727;
        }
        else {
          v395 = nullptr;
        }
        if (v727_.v728 != nullptr) {
          std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
        }
        if (v395 != nullptr) {
          v746_.v746 = v395;
          v746_.v747 = v393;
          if (v393 != nullptr) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v393 + 16), 1u,
                                      memory_order_relaxed);
          }
          v708 = v393;
          v711 = v366;
          v714 = v365;
          Util_1576480((__int64)&v746_.v746, *(_QWORD*)(v1 + 1064), 0);
          if (v746_.v747 != nullptr) {
            std___1___shared_weak_count___release_weak_alt2(
                (__int64)v746_.v747);
          }
          v396 = GameRoutine_95ffd0();
          v397 = *(_QWORD*)(v1 + 1064);
          v398 = v396;
          v399 = (unsigned __int8)GameRoutine_960100();
          if (v397 != 0) {
            v400 = (unsigned __int8)game_UnitMastery_GetMaxJobRank(v397 + 512,
                                                                   v397);
            if (v399 <= v400) {
              v399 = v400;
            }
          }
          LayoutAccessor_155c780((__int64)&v727_.v727, v394);
          v401 = 1;
          while (1) {
            v402 = game_util_Format_alt2("T_JobRank%02d", v401);
            v403 = GameRoutine_1a09c70(v402);
            if (v403 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_1280;
            }
            v404 = v403;
            if (v403 >= 0x17) {
              break;
            }
            v405 = (__int64*)((char*)&v751_.v751 + 1);
            LOBYTE(v751_.v751) = 2 * v403;
            if (v403 != 0) {
              goto LABEL_691;
            }
          LABEL_692:
            *((_BYTE*)v405 + v404) = 0;
            if (((unsigned __int8)v751_.v751 & 1) != 0) {
              v407 = v751_.v753;
            }
            else {
              v407 = (__int64*)((char*)&v751_.v751 + 1);
            }
            if (v401 <= v399) {
              ui_LayoutAccessor_SetPaneVisible((__int64)v394, (__int64)v407, 1);
              if (v401 <= v398) {
                v408 = "Trial";
              }
              else {
                v408 = "Show";
              }
              if (((unsigned __int8)v751_.v751 & 1) != 0) {
                v409 = v751_.v753;
              }
              else {
                v409 = (__int64*)((char*)&v751_.v751 + 1);
              }
              LayoutAccessor_155d480((__int64)&v727_.v727, (__int64)v408,
                                     (__int64)v409);
              if (((unsigned __int8)v751_.v751 & 1) != 0) {
              LABEL_705:
                if (v751_.v753 != nullptr) {
                  v410 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v410 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v410,
                      (__int64)v751_.v753);
                }
              }
            }
            else {
              ui_LayoutAccessor_SetPaneVisible((__int64)v394, (__int64)v407, 0);
              if (((unsigned __int8)v751_.v751 & 1) != 0) {
                goto LABEL_705;
              }
            }
            if (++v401 == 6) {
              LayoutAccessor_155ca60((__int64)&v727_.v727);
              v365 = v714;
              v1 = (__int64)v717;
              v366 = v711;
              v393 = v708;
              goto LABEL_710;
            }
          }
          if ((v403 | 7) == 0x17) {
            v406 = 26;
          }
          else {
            v406 = (v403 | 7) + 1;
          }
          v405 = (__int64*)fw_memory_HeapManager_Allocate_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v406, 16, 0);
          v751_.v752 = (__int64*)v404;
          v751_.v753 = v405;
          v751_.v751 = (const char*)(v406 | 1);
        LABEL_691:
          GameRoutine_1a0b940((__int64)v405, (__int64)v402, v404);
          goto LABEL_692;
        }
      LABEL_710:
        if (v393 != nullptr &&
            atomic_fetch_add((atomic_ullong* volatile)(v393 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(char*))(*(_QWORD*)v393 + 16LL))(v393);
          std___1___shared_weak_count___release_weak_alt2((__int64)v393);
        }
      }
      v411 = *(_QWORD*)(v1 + 1064);
      *(_DWORD*)(v1 + 2192) = 0;
      v412 = false;
      if (*(_BYTE*)(*(_QWORD*)(v411 + 400) + 96LL) == 1) {
        v413 = game_820d50(7);
        v412 = (game_GameModeData_instance_ == 0 ||
                (v414 = game_GameVariableTable_Find(
                     *(_QWORD**)(game_GameModeData_instance_ + 48),
                     (unsigned __int64*)v413)) == 0 ||
                *(_DWORD*)(v414 + 32) == 0) &&
               GameRoutine_822320(3u);
      }
      v415 = *(unsigned __int8*)(*(_QWORD*)(v1 + 1064) + 1944LL);
      ui_LayoutAccessor_SetPaneVisible((__int64)v366, (__int64)"L_LegionInfo",
                                       v412);
      if (v412) {
        v751_.v751 = "L_LegionInfo";
        v751_.v752 = (__int64*)(((_UNKNOWN**)((char*)0x8LL + 4)));
        GameRoutine_1612340((void*)(&v727_.v727), v366, &v751_.v751);
        if (v727_.v728 != nullptr) {
          v416 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
          v417 = v727_.v727;
          if (v727_.v728 != nullptr) {
            std___1___shared_weak_count___release_weak_alt2(
                (__int64)v727_.v728);
          }
          if (v416 != 0 && v417 != nullptr) {
            v417[133] = *(__int64 (**)(void))(v1 + 1064);
            *((_DWORD*)v417 + 268) = 3;
            v727_.v729 = 0;
            v727_.v727 = (__int64 (**)(void))(GameData_212d890[0] + 2);
            LODWORD(v727_.v728) = 20;
            (*((__attribute__((swiftcall)) void (**)(
                   PSEUDO_X8, __int64 (**)(void), __int64 (***)(void)))v417[9] +
               2))(&v751_.v751, v417 + 9, &v727_.v727);
          LABEL_728:
            if (atomic_fetch_add((atomic_ullong* volatile)(v416 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v416 + 16LL))(v416);
              std___1___shared_weak_count___release_weak_alt2(v416);
            }
          }
          else if (v416 != 0) {
            goto LABEL_728;
          }
        }
        *(_DWORD*)(v1 + 2192) = 2;
      }
      v751_.v751 = "L_LegionInfo/L_MenuItem_Name";
      v751_.v752 = (_QWORD*)(((__int128*)((char*)0x10LL + 12)));
      v418 = (__int64)v367[1];
      if (v418 != 0) {
        v419 = std___1___shared_weak_count_lock_alt2(v418);
        if (v419 != 0) {
          v420 = *v366;
          v421 = v419;
          if (*v366 != 0) {
            GameRoutine_1612830((void*)((__int64*)&v727_.v727), *v366,
                                (__int64)&v751_.v751);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v421 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v421 + 16LL))(v421);
            std___1___shared_weak_count___release_weak_alt2(v421);
          }
          if (v420 != 0 && v727_.v728 != nullptr) {
            v422 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
            v423 = v727_.v727;
            if (v727_.v728 != nullptr) {
              std___1___shared_weak_count___release_weak_alt2(
                  (__int64)v727_.v728);
            }
            if (v422 != 0 && v423 != nullptr) {
              *((_BYTE*)v423 + 1108) = v415 != 0;
            LABEL_745:
              if (atomic_fetch_add((atomic_ullong* volatile)(v422 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v422 + 16LL))(v422);
                std___1___shared_weak_count___release_weak_alt2(v422);
              }
            }
            else if (v422 != 0) {
              goto LABEL_745;
            }
          }
        }
      }
      v751_.v751 = "L_LegionInfo/L_MenuItem_Gambit";
      v751_.v752 = (_QWORD*)(((__int128*)((char*)0x10LL + 14)));
      v424 = (__int64)v367[1];
      if (v424 != 0) {
        v425 = std___1___shared_weak_count_lock_alt2(v424);
        if (v425 != 0) {
          v426 = *v366;
          v427 = v425;
          if (*v366 != 0) {
            GameRoutine_1612830((void*)((__int64*)&v727_.v727), *v366,
                                (__int64)&v751_.v751);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v427 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v427 + 16LL))(v427);
            std___1___shared_weak_count___release_weak_alt2(v427);
          }
          if (v426 != 0 && v727_.v728 != nullptr) {
            v428 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
            v429 = v727_.v727;
            if (v727_.v728 != nullptr) {
              std___1___shared_weak_count___release_weak_alt2(
                  (__int64)v727_.v728);
            }
            if (v428 != 0 && v429 != nullptr) {
              *((_BYTE*)v429 + 1108) = v415 != 0;
            LABEL_761:
              if (atomic_fetch_add((atomic_ullong* volatile)(v428 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v428 + 16LL))(v428);
                std___1___shared_weak_count___release_weak_alt2(v428);
              }
            }
            else if (v428 != 0) {
              goto LABEL_761;
            }
          }
        }
      }
      v431 = *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v1 + 1064) + 400LL) + 96LL) == 2 &
             *(_DWORD*)(v1 + 2192) == 0;
      ui_LayoutAccessor_SetPaneVisible((__int64)v366, (__int64)"L_Animal",
                                       v431);
      if (v431) {
        v751_.v751 = "L_Animal";
        v751_.v752 = (__int64*)((_UNKNOWN**)0x8LL);
        GameRoutine_1612480((void*)(&v727_.v727), v366, &v751_.v751);
        if (v727_.v728 != nullptr) {
          v432 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
          v433 = v727_.v727;
          if (v727_.v728 != nullptr) {
            std___1___shared_weak_count___release_weak_alt2(
                (__int64)v727_.v728);
          }
          if (v432 != 0 && v433 != nullptr) {
            v433[133] = *(__int64 (**)(void))(v1 + 1064);
            *((_DWORD*)v433 + 268) = 3;
            v727_.v729 = 0;
            v727_.v727 = (__int64 (**)(void))(GameData_212d890[0] + 2);
            LODWORD(v727_.v728) = 20;
            (*((__attribute__((swiftcall)) void (**)(
                   PSEUDO_X8, __int64 (**)(void), __int64 (***)(void)))v433[9] +
               2))(&v751_.v751, v433 + 9, &v727_.v727);
          LABEL_777:
            if (atomic_fetch_add((atomic_ullong* volatile)(v432 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v432 + 16LL))(v432);
              std___1___shared_weak_count___release_weak_alt2(v432);
            }
          }
          else if (v432 != 0) {
            goto LABEL_777;
          }
        }
        *(_DWORD*)(v1 + 2192) = 1;
      }
      v434 = LayoutAccessor_155fbe0_alt2(v366, "L_KeyHelp");
      v435 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 192LL))(v1);
      BYTE4(v727_.v730) = 0;
      v727_.v731 = nullptr;
      v727_.v727 = (__int64 (**)(void))&GameData_1a9f09e;
      v727_.v728 = (__int64**)"MID_KeyHelp_StatusChange";
      LOBYTE(v727_.v729) = 1;
      DWORDn(v727_.v729, sizeof(v727_.v729) / 4 - 1) = 6;
      LODWORD(v727_.v730) = v435;
      game_gameui_1593d90(v434, (__int64)&v727_.v727);
      v436 = *(_QWORD*)(v1 + 1064);
      v437 = 0;
      v438 = *(_QWORD*)(v436 + 400);
      if (v438 != 0 && *(_QWORD*)(v438 + 88) != 0) {
        v439 = *(unsigned __int16*)(v438 + 128);
        if ((*(_WORD*)(v436 + 1536) & 0x40) == 0 ||
            (v440 = *(_QWORD*)(v436 + 1496), v441 = *(_QWORD*)(v436 + 1488),
             v440 == v441)) {
          v444 = GameData_212c8a8;
        }
        else {
          v442 = (v440 - v441) >> 2;
          v443 = 0;
          v444 = GameData_212c8a8;
          while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                      8LL * (*(_DWORD*)(v441 + 4 * v443) &
                                             0xFFF)) +
                           104LL) != 6) {
            if (v442 == ++v443) {
              goto LABEL_789;
            }
          }
          v481 = (_WORD*)(v441 + 4LL * (unsigned int)v443);
          if (v443 > -1) {
            v444 = v481;
          }
        }
      LABEL_789:
        v437 = (*v444 & 0xFFF) != 0 | v439 > 1;
      }
      ui_LayoutAccessor_SetPaneVisible((__int64)v366, (__int64)"L_KeyHelp",
                                       v437);
      *(_BYTE*)(v1 + 2196) = 0;
      ui_16125c0(v1);
    }
    if (v365 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v365 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v365 + 16LL))(v365);
      std___1___shared_weak_count___release_weak_alt2(v365);
    }
  }
  if ((game_gameui_Util_IsVisibleSpecialPage(*(_QWORD*)(v1 + 1064)) & 1) != 0) {
    LayoutAccessor_1560070_alt2((void*)(&v727_.v727), (__int64*)(v1 + 848),
                                "L_Page03");
    if (v727_.v728 != nullptr) {
      v446 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
      v447 = (__int64*)v727_.v727;
      if (v727_.v728 != nullptr) {
        std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
      }
      if (v446 != 0 && v447 != nullptr) {
        v448 = *(_QWORD*)(v1 + 1064);
        v449 = game_g_shared_system_skills_ptr;
        LODWORD(v727_.v727) =
            *(_DWORD*)((_BYTE*)0x17CLL +
                       (_QWORD)game_g_shared_system_skills_ptr) &
            0xFFF;
        if ((game_HasSkill((_QWORD*)(v448 + 1744), (unsigned int*)&v727_.v727) &
             1) != 0) {
          v450 = "MID_Sys_Blaze_Machine_Help";
          v451 = 3;
          v452 = "MID_Sys_Blaze_Machine";
        }
        else {
          LODWORD(v727_.v727) =
              *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v449) & 0xFFF;
          if ((game_HasSkill((_QWORD*)(v448 + 1744),
                             (unsigned int*)&v727_.v727) &
               1) != 0) {
            v450 = "MID_Sys_Blaze_Heaven_Help";
            v451 = 2;
            v452 = "MID_Sys_Blaze_Heaven";
          }
          else {
            LODWORD(v727_.v727) =
                *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v449) & 0xFFF;
            v453 = game_HasSkill((_QWORD*)(v448 + 1744),
                                 (unsigned int*)&v727_.v727);
            v451 = v453 & 1;
            if ((v453 & 1) != 0) {
              v452 = "MID_Sys_Blaze_Hell";
            }
            else {
              v452 = nullptr;
            }
            if ((v453 & 1) != 0) {
              v450 = "MID_Sys_Blaze_Hell_Help";
            }
            else {
              v450 = nullptr;
            }
          }
        }
        LayoutAccessor_1562060_alt1(v447, (__int64)"T_BlazeType", v452);
        LayoutAccessor_1562060_alt1(v447, (__int64)"L_BlazeTypeInfoTxt/T_Txt",
                                    v450);
        v454 = ui_LayoutAccessor_FindPane_alt2(v447, (__int64)"BgBlaze");
        if (v454 != 0) {
          v455 =
              __dynamic_cast(v454, GameData_212d670[0], GameData_212d678[0], 0);
          if (v455 != 0) {
            Manager_136a920(ui_Manager_instance_ + 1264, v455, 0, 7u,
                            *((_BYTE**)&GameData_20683d8 + v451));
          }
        }
        v715 = v446;
        if ((*(_BYTE*)(*(_QWORD*)(v1 + 1064) + 1837LL) & 0x40) != 0) {
          ui_LayoutAccessor_SetPaneVisible((__int64)v447,
                                           (__int64)"N_BlazeSkill", 1);
          v456 = *(_QWORD*)(v1 + 1064);
          if ((*(_BYTE*)(v456 + 1837) & 0x40) == 0 ||
              (v457 = *(_QWORD*)(v456 + 1784), v458 = *(_QWORD*)(v456 + 1776),
               v457 == v458)) {
            v461 = (unsigned int*)GameData_212c8a8;
          }
          else {
            v459 = (v457 - v458) >> 2;
            v460 = 0;
            v461 = (unsigned int*)GameData_212c8a8;
            while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                        8LL * (*(_DWORD*)(v458 + 4 * v460) &
                                               0xFFF)) +
                             250LL) != 46) {
              if (v459 == ++v460) {
                goto LABEL_827;
              }
            }
            v484 = (unsigned int*)(v458 + 4LL * (unsigned int)v460);
            if (v460 > -1) {
              v461 = v484;
            }
          }
        LABEL_827:
          v462 = *(_QWORD*)(v1 + 1952);
          GameRoutine_1605f00(v462);
          v463 = *(_QWORD*)(v462 + 16);
          if (v463 != 0) {
            v464 = std___1___shared_weak_count_lock_alt2(v463);
            if (v464 != 0) {
              v465 = v464;
              v466 = *(_QWORD*)(v462 + 8);
              if (v466 != 0) {
                (*(void (**)(__int64, __int64))(*(_QWORD*)v466 + 40LL))(v466,
                                                                        1);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v465 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v465 + 16LL))(v465);
                std___1___shared_weak_count___release_weak_alt2(v465);
              }
            }
          }
          *(_QWORD*)(v462 + 32) = v456;
          *(_DWORD*)(v462 + 24) = 3;
          v467 = *v461;
          *(_BYTE*)(v462 + 64) = 0;
          *(_DWORD*)(v462 + 60) = v467;
          UnitInfoMenuItem_1606250((_QWORD*)v462);
          v468 = *v461;
          if ((*v461 & 0xFFF) != 0) {
            v469 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                              8LL * (v468 & 0xFFF));
            if (v469 != 0) {
              v470 = GameRoutine_6fbd80(v469, *(unsigned __int8*)(v469 + 304) -
                                                  (HIBYTE(v468) & 0x1F));
              if (v470 != nullptr) {
                v471 = (__int64)v470;
                v472 = ui_LayoutAccessor_FindTextBox_alt1(
                    v447, (__int64)"L_BlazeSkillInfoTxt/T_Txt");
                if (v472 != 0) {
                  game_156c5d0(v472, v471, 0);
                }
              }
            }
          }
        }
        else {
          ui_LayoutAccessor_SetPaneVisible((__int64)v447,
                                           (__int64)"N_BlazeSkill", 0);
        }
        v751_.v751 = "L_Item";
        v751_.v752 = (_QWORD*)((_UNKNOWN*)0x6LL);
        GameRoutine_15d4240((void*)(&v727_.v727), v447, &v751_.v751);
        if (v727_.v728 != nullptr) {
          v473 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
          v474 = v727_.v727;
          if (v727_.v728 != nullptr) {
            std___1___shared_weak_count___release_weak_alt2(
                (__int64)v727_.v728);
          }
          if (v473 != 0 && v474 != nullptr) {
            v475 = LayoutAccessor_1562cf0_alt2((__int64)(v474 + 11), "Info");
            v476 = *(_QWORD*)(*(_QWORD*)(v1 + 1064) + 392LL);
            if (v476 == 0) {
              goto LABEL_870;
            }
            if (*(_WORD*)(v476 + 408) == 0) {
              goto LABEL_870;
            }
            v477 = *(_QWORD*)(v476 + 24);
            v478 = *(_QWORD*)(v477 + 1792);
            v479 = *(_QWORD*)(v477 + 1800);
            if (v478 == v479) {
              goto LABEL_870;
            }
            while (*(_QWORD*)(v478 + 8) != 0) {
              v480 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v475 = GameVariable_828f50(game_GameModeData_instance_ + 40,
                                           (unsigned __int64*)(v478 + 8));
              }
              if (*(_BYTE*)(v478 + 24) == ((v480 == 0) | v475 & 1)) {
                break;
              }
              v478 += 32;
              if (v478 == v479) {
                goto LABEL_870;
              }
            }
            v485 = *(_QWORD*)v478;
            if (*(_QWORD*)v478 != 0) {
              v727_.v727 = nullptr;
              game_6e8720((__int64)&v727_.v727, v485);
              MenuItemItem_189f2c0((__int64)v474,
                                   (unsigned __int16*)&v727_.v727);
              v486 = GameRoutine_6ed030(v485);
              v487 = (__int64)v474[129];
              if (v487 != 0) {
                game_156c5d0(v487, (__int64)v486, 0);
                v488 = v474[129];
                if (v488 != nullptr) {
                  *((_BYTE*)v488 + 88) |= 1u;
                }
              }
              LayoutAccessor_1562cf0_alt2((__int64)(v474 + 11), "EnduranceOff");
              v489 = GameRoutine_6ed1a0(v485);
              if (v489 == nullptr) {
              LABEL_873:
                if (atomic_fetch_add((atomic_ullong* volatile)(v473 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v473 + 16LL))(v473);
                  std___1___shared_weak_count___release_weak_alt2(v473);
                }
                goto LABEL_875;
              }
            }
            else {
            LABEL_870:
              GameRoutine_189e9c0((__int64)v474);
              v489 = &GameData_1a9f09e;
            }
            v490 = ui_LayoutAccessor_FindTextBox_alt1(
                v447, (__int64)"L_ItemInfo/T_Txt");
            if (v490 != 0) {
              game_156c5d0(v490, (__int64)v489, 0);
            }
            goto LABEL_873;
          }
          if (v473 != 0) {
            goto LABEL_873;
          }
        }
      LABEL_875:
        v751_.v751 = "L_Still";
        v751_.v752 = (_QWORD*)((_UNKNOWN*)0x7LL);
        v491 = v447[1];
        if (v491 != 0) {
          v492 = std___1___shared_weak_count_lock_alt2(v491);
          if (v492 != 0) {
            v493 = *v447;
            v494 = v492;
            if (*v447 != 0) {
              GameRoutine_1612a90((void*)((__int64*)&v727_.v727), *v447,
                                  (__int64)&v751_.v751);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v494 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v494 + 16LL))(v494);
              std___1___shared_weak_count___release_weak_alt2(v494);
            }
            if (v493 != 0 && v727_.v728 != nullptr) {
              v495 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
              v496 = v727_.v727;
              if (v727_.v728 != nullptr) {
                std___1___shared_weak_count___release_weak_alt2(
                    (__int64)v727_.v728);
              }
              if (v495 != 0 && v496 != nullptr) {
                v497 = *(_QWORD*)(*(_QWORD*)(v1 + 1064) + 392LL);
                if (v497 == 0) {
                  goto LABEL_924;
                }
                v498 = game_GetHero(9u);
                if (v498 != 0 &&
                    *(_QWORD*)(*(_QWORD*)(v497 + 24) + 1672LL) ==
                        *(_QWORD*)(*(_QWORD*)(v498 + 24) + 1672LL)) {
                  v499 = &GameData_2067e68;
                  goto LABEL_917;
                }
                v500 = game_GetHero(1u);
                if (v500 != 0 &&
                    *(_QWORD*)(*(_QWORD*)(v497 + 24) + 1672LL) ==
                        *(_QWORD*)(*(_QWORD*)(v500 + 24) + 1672LL)) {
                  v499 = &GameData_2067e80;
                  goto LABEL_917;
                }
                v501 = game_GetHero(2u);
                if (v501 != 0 &&
                    *(_QWORD*)(*(_QWORD*)(v497 + 24) + 1672LL) ==
                        *(_QWORD*)(*(_QWORD*)(v501 + 24) + 1672LL)) {
                  v499 = &GameData_2067e98;
                  goto LABEL_917;
                }
                v502 = game_GetHero(3u);
                if (v502 != 0 &&
                    *(_QWORD*)(*(_QWORD*)(v497 + 24) + 1672LL) ==
                        *(_QWORD*)(*(_QWORD*)(v502 + 24) + 1672LL)) {
                  v499 = &GameData_2067eb0;
                  goto LABEL_917;
                }
                v503 = game_GetHero(4u);
                if (v503 != 0 &&
                    *(_QWORD*)(*(_QWORD*)(v497 + 24) + 1672LL) ==
                        *(_QWORD*)(*(_QWORD*)(v503 + 24) + 1672LL)) {
                  v499 = &GameData_2067ec8;
                  goto LABEL_917;
                }
                v504 = game_GetHero(5u);
                if (v504 != 0 &&
                    *(_QWORD*)(*(_QWORD*)(v497 + 24) + 1672LL) ==
                        *(_QWORD*)(*(_QWORD*)(v504 + 24) + 1672LL)) {
                  v499 = &GameData_2067ee0;
                  goto LABEL_917;
                }
                v505 = game_GetHero(6u);
                if (v505 != 0 &&
                    *(_QWORD*)(*(_QWORD*)(v497 + 24) + 1672LL) ==
                        *(_QWORD*)(*(_QWORD*)(v505 + 24) + 1672LL)) {
                  v499 = &GameData_2067ef8;
                  goto LABEL_917;
                }
                v506 = game_GetHero(7u);
                if (v506 != 0 &&
                    *(_QWORD*)(*(_QWORD*)(v497 + 24) + 1672LL) ==
                        *(_QWORD*)(*(_QWORD*)(v506 + 24) + 1672LL)) {
                  v499 = &GameData_2067f10;
                  goto LABEL_917;
                }
                v507 = game_GetHero(8u);
                if (v507 == 0 ||
                    *(_QWORD*)(*(_QWORD*)(v497 + 24) + 1672LL) !=
                        *(_QWORD*)(*(_QWORD*)(v507 + 24) + 1672LL)) {
                  goto LABEL_924;
                }
                v499 = &GameData_2067f28;
              LABEL_917:
                v508 = v499[2];
                if (v508 != 0) {
                  v509 = v499[1];
                  v727_.v731 = nullptr;
                  v746_.v748 = 0;
                  LOBYTE(v755_.v755) = 0;
                  v755_.v756 = 0;
                  v727_.v727 = (__int64 (**)(void))&v732_.v732;
                  v727_.v728 = (__int64**)(((_UNKNOWN*)0xFCLL) + 4);
                  v732_.v745 = &v732_.v732;
                  v727_.v729 = 0;
                  v727_.v730 = (__int64)GameRoutine_64be60;
                  v724_.v724 = v509;
                  v724_.v725 = v508;
                  v724_.v726 = 13;
                  v746_.v746 = (__int64*)"Layout/Textures/Still/{}";
                  v746_.v747 = "";
                  v751_.v753 = &v724_.v724;
                  v751_.v754 =
                      (__int64 (***)(void))(((_UNKNOWN**)((char*)0x8LL + 5)));
                  v746_.v749 = 0;
                  v746_.v750 = 1;
                  v751_.v751 = (const char*)&v727_.v727;
                  v751_.v752 = (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
                  GameRoutine_6380e0((__int64)&v746_.v746,
                                     (__int64**)&v751_.v751);
                  if (v755_.v756 == 1) {
                    std___1_locale_Destroy_locale((__int64)&v755_.v755);
                  }
                  v510 = v727_.v729;
                  if (v727_.v729 >= 0xFFFFFFFFFFFFFFF7LL) {
                  LABEL_1280:
                    String_60a1d0_alt3();
                  }
                  v511 = (__int64)v732_.v745;
                  if (v727_.v729 >= 0x17) {
                    if ((v727_.v729 | 7) == 0x17) {
                      v513 = 26;
                    }
                    else {
                      v513 = (v727_.v729 | 7) + 1;
                    }
                    v514 = fw_memory_HeapManager_Allocate_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, v513, 16, 0);
                    v515 = (__int64*)(v513 | 1);
                    v1 = (__int64)v717;
                    v512 = (char*)v514;
                    v751_.v752 = (__int64*)v510;
                    v751_.v753 = (__int64*)v514;
                    v751_.v751 = (const char*)v515;
                  }
                  else {
                    LOBYTE(v751_.v751) = 2 * v727_.v729;
                    v512 = (char*)&v751_.v751 + 1;
                    if (v727_.v729 == 0) {
                      goto LABEL_930;
                    }
                  }
                  GameRoutine_1a0b940((__int64)v512, v511, v510);
                LABEL_930:
                  v516 = v732_.v745;
                  v512[v510] = 0;
                  if (v516 != &v732_.v732 && v516 != nullptr) {
                    v517 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v517 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v517,
                        (__int64)v516);
                  }
                  if (((unsigned __int8)v751_.v751 & 1) != 0) {
                    v518 = (const char*)v751_.v753;
                  }
                  else {
                    v518 = (char*)&v751_.v751 + 1;
                  }
                  AsyncLoadImage_17e4db0((__int64)v496, v518, 0);
                  if (((unsigned __int8)v751_.v751 & 1) != 0 &&
                      v751_.v753 != nullptr) {
                    v519 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v519 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v519,
                        (__int64)v751_.v753);
                  }
                }
                else {
                LABEL_924:
                  (*((void (**)(__int64 (**)(void), _QWORD))*v496 + 5))(v496,
                                                                        0);
                }
              LABEL_943:
                if (atomic_fetch_add((atomic_ullong* volatile)(v495 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v495 + 16LL))(v495);
                  std___1___shared_weak_count___release_weak_alt2(v495);
                }
              }
              else if (v495 != 0) {
                goto LABEL_943;
              }
            }
          }
        }
        LayoutAccessor_1562cf0_alt2((__int64)v447, "UnitDit");
        game_gameui_Util_CollectBlazeArtsInfo_159c780(
            (void*)((__int64*)&v727_.v727), *(_QWORD*)(v1 + 1064));
        v520 = (__int64)v727_.v728;
        if (v727_.v727 == (__int64 (**)(void))v727_.v728) {
          v530 = 0;
        }
        else {
          v521 = (char*)v727_.v727 + 4;
          v522 = 0;
          do {
            v523 = *(_QWORD*)(v1 + 1896 + 8 * v522);
            v524 = v717[133];
            GameRoutine_1605f00(v523);
            v525 = *(_QWORD*)(v523 + 16);
            if (v525 != 0) {
              v526 = std___1___shared_weak_count_lock_alt2(v525);
              if (v526 != 0) {
                v527 = v526;
                v528 = *(_QWORD*)(v523 + 8);
                if (v528 != 0) {
                  (*(void (**)(__int64, __int64))(*(_QWORD*)v528 + 40LL))(v528,
                                                                          1);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v527 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v527 + 16LL))(v527);
                  std___1___shared_weak_count___release_weak_alt2(v527);
                }
              }
            }
            *(_DWORD*)(v523 + 24) = 3;
            *(_QWORD*)(v523 + 32) = v524;
            v529 = *((_DWORD*)v521 - 1);
            *(_BYTE*)(v523 + 64) = 0;
            *(_DWORD*)(v523 + 60) = v529;
            UnitInfoMenuItem_1606250((_QWORD*)v523);
            v530 = v522 + 1;
            if (v521 == (char*)v520) {
              break;
            }
            v521 += 4;
          } while (v522++ < 5);
          v1 = (__int64)v717;
        }
        v532 = v727_.v731;
        if ((__int64*)v727_.v730 != v727_.v731 & v530 <= 5) {
          v534 = (__int64*)(v727_.v730 + 4);
          v535 = v530;
          do {
            v536 = *(_QWORD*)(v1 + 1896 + 8 * v535);
            v537 = v717[133];
            GameRoutine_1605f00(v536);
            v538 = *(_QWORD*)(v536 + 16);
            if (v538 != 0) {
              v539 = std___1___shared_weak_count_lock_alt2(v538);
              if (v539 != 0) {
                v540 = v539;
                v541 = *(_QWORD*)(v536 + 8);
                if (v541 != 0) {
                  (*(void (**)(__int64, __int64))(*(_QWORD*)v541 + 40LL))(v541,
                                                                          1);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v540 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v540 + 16LL))(v540);
                  std___1___shared_weak_count___release_weak_alt2(v540);
                }
              }
            }
            *(_DWORD*)(v536 + 24) = 3;
            *(_QWORD*)(v536 + 32) = v537;
            v542 = *((_DWORD*)v534 - 1);
            *(_BYTE*)(v536 + 64) = 0;
            *(_DWORD*)(v536 + 60) = v542;
            UnitInfoMenuItem_1606250((_QWORD*)v536);
            v530 = v535 + 1;
            if (v535 > 4) {
              break;
            }
            ++v535;
            v157 = v534 == v532;
            v534 = (__int64*)((char*)v534 + 4);
          } while (!v157);
          v1 = (__int64)v717;
        }
        if (v530 <= 5) {
          v543 = 8LL * v530;
          do {
            v544 = *(_QWORD*)(v1 + 1896 + v543);
            GameRoutine_1605f00(v544);
            v545 = *(_QWORD*)(v544 + 16);
            if (v545 != 0) {
              v546 = std___1___shared_weak_count_lock_alt2(v545);
              if (v546 != 0) {
                v547 = v546;
                v548 = *(_QWORD*)(v544 + 8);
                if (v548 != 0) {
                  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v548 + 40LL))(v548,
                                                                         0);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v547 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v547 + 16LL))(v547);
                  std___1___shared_weak_count___release_weak_alt2(v547);
                }
              }
            }
            v543 += 8;
          } while (v543 != 48);
        }
        if (v732_.v733 == v732_.v734) {
          ui_LayoutAccessor_SetPaneVisible((__int64)v447,
                                           (__int64)"N_SpecialCommand", 0);
        }
        else {
          ui_LayoutAccessor_SetPaneVisible((__int64)v447,
                                           (__int64)"N_SpecialCommand", 1);
          ui_LayoutAccessor_SetPaneVisible(
              (__int64)v447, (__int64)"L_Info_SpeciallCommand/T_Help", 0);
          v549 = (int*)v732_.v733;
          v550 = (int*)v732_.v734;
          while (v549 != v550) {
            v552 = *(_QWORD*)(v1 + 1944);
            v553 = *(_QWORD*)(v1 + 1064);
            GameRoutine_1605f00(v552);
            v554 = *(_QWORD*)(v552 + 16);
            if (v554 != 0) {
              v555 = std___1___shared_weak_count_lock_alt2(v554);
              if (v555 != 0) {
                v556 = v555;
                v557 = *(_QWORD*)(v552 + 8);
                if (v557 != 0) {
                  (*(void (**)(__int64, __int64))(*(_QWORD*)v557 + 40LL))(v557,
                                                                          1);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v556 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v556 + 16LL))(v556);
                  std___1___shared_weak_count___release_weak_alt2(v556);
                }
              }
            }
            *(_DWORD*)(v552 + 24) = 5;
            *(_QWORD*)(v552 + 32) = v553;
            v551 = *v549++;
            *(_DWORD*)(v552 + 60) = v551;
            UnitInfoMenuItem_1606250((_QWORD*)v552);
          }
        }
        v558 = ui_LayoutAccessor_FindAlignment(v447, (__int64)"A_Special");
        if (v558 != 0) {
          Alignment_56b600(v558);
        }
        v446 = v715;
        if (v732_.v733 != 0) {
          v732_.v734 = v732_.v733;
          v559 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v559 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v559, v732_.v733);
        }
        if (v727_.v730 != 0) {
          v727_.v731 = (__int64*)v727_.v730;
          v560 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v560 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v560, v727_.v730);
        }
        if (v727_.v727 != nullptr) {
          v727_.v728 = (__int64**)v727_.v727;
          v561 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v561 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v561,
              (__int64)v727_.v727);
        }
      }
      if (v446 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v446 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v446 + 16LL))(v446);
        std___1___shared_weak_count___release_weak_alt2(v446);
      }
    }
  }
  LayoutAccessor_1560070_alt2((void*)(&v727_.v727), (__int64*)(v1 + 848),
                              "L_Page04");
  v746_.v746 = nullptr;
  v746_.v747 = nullptr;
  if (v727_.v728 == nullptr) {
    goto LABEL_1237;
  }
  v746_.v747 =
      (char*)std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
  if (v746_.v747 != nullptr) {
    v746_.v746 = (__int64*)v727_.v727;
  }
  if (v727_.v728 != nullptr) {
    std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
  }
  if (v746_.v746 == nullptr) {
    goto LABEL_1237;
  }
  v562 = *(_QWORD*)(*(_QWORD*)(v1 + 1064) + 392LL);
  if (v562 != 0) {
    v563 = *(_QWORD*)(v562 + 288);
    if (v563 != 0) {
      v564 = GameRoutine_975940_alt1(v563);
      if (v564 != 0) {
        v565 = v564;
        GameRoutine_1a0b950((__int64)&v727_.v727, (__int64)GameData_2067f40,
                            0xA0u);
        LODWORD(v724_.v724) = 0;
        v751_.v751 = (const char*)GameData_2067ff0;
        v751_.v752 = &v724_.v724;
        v751_.v753 = (__int64*)&v746_.v746;
        v751_.v754 = &v727_.v727;
        v755_.v755 = (__int64**)&v751_.v751;
        GameRoutine_975680(v565, (__int64)&v751_.v751);
        if (v755_.v755 == (__int64**)&v751_.v751) {
          v566 = 4;
        LABEL_1023:
          ((void (*)(void*))(*v755_.v755)[v566])(v755_.v755);
        }
        else if (v755_.v755 != nullptr) {
          v566 = 5;
          goto LABEL_1023;
        }
        v567 = v724_.v724;
        if ((unsigned int)v724_.v724 <= 9) {
          do {
            v568 = (__int64)(&v727_.v727)[2 * v567];
            if (v568 != 0) {
              v569 = ui_LayoutAccessor_FindTextBox_alt1(v746_.v746, v568);
              if (v569 != 0) {
                game_156c5d0(v569, (__int64)&GameData_1a9f09e, 0);
              }
            }
            v570 = (__int64)(&v727_.v727)[2 * (int)v724_.v724 + 1];
            if (v570 != 0) {
              v571 = ui_LayoutAccessor_FindTextBox_alt1(v746_.v746, v570);
              if (v571 != 0) {
                game_156c5d0(v571, (__int64)&GameData_1a9f09e, 0);
              }
            }
            v567 = v724_.v724 + 1;
            LODWORD(v724_.v724) = v567;
          } while (v567 < 0xA);
        }
        v572 = *(_BYTE**)(v565 + 144);
        if (v572 != nullptr && *v572 != 0) {
          v573 = v746_.v746;
          v732_.v732 = -1;
          v732_.v733 = -1;
          v732_.v734 = -1;
          v732_.v735 = -1;
          v732_.v736 = -1;
          v732_.v737 = -1;
          v574 = *msg_MessageManager_instance__ptr[0];
          v732_.v738 = -1;
          v732_.v739 = -1;
          v732_.v740 = -1;
          v732_.v741 = -1;
          v732_.v742 = -1;
          v732_.v743 = -1;
          v727_.v727 = (__int64 (**)(void))(GameData_212e348 + 2);
          v727_.v728 = (__int64**)0xFFFF0001FFFF0000LL;
          v727_.v729 = 0xFFFF0004FFFF0002LL;
          v727_.v730 = 0xFFFF0006FFFF0005LL;
          v732_.v744 = 8;
          v727_.v731 = (__int64*)0xFFFF0008FFFF0007LL;
          v575 = task_a4dbe0(v574, v572, 0);
          if (v575 != nullptr) {
            v576 = v575;
            v577 = ui_LayoutAccessor_FindTextBox_alt1(v573,
                                                      (__int64)"L_Like/T_Txt");
            if (v577 != 0) {
              v578 = v576;
              goto LABEL_1040;
            }
          }
        }
        else {
          v577 = ui_LayoutAccessor_FindTextBox_alt1(v746_.v746,
                                                    (__int64)"L_Like/T_Txt");
          if (v577 != 0) {
            v578 = &GameData_1a9f09e;
          LABEL_1040:
            game_156c5d0(v577, (__int64)v578, 0);
          }
        }
        v579 = *(_BYTE**)(v565 + 152);
        if (v579 != nullptr && *v579 != 0) {
          v580 = v746_.v746;
          v732_.v732 = -1;
          v732_.v733 = -1;
          v732_.v734 = -1;
          v732_.v735 = -1;
          v732_.v736 = -1;
          v732_.v737 = -1;
          v581 = *msg_MessageManager_instance__ptr[0];
          v732_.v738 = -1;
          v732_.v739 = -1;
          v732_.v740 = -1;
          v732_.v741 = -1;
          v732_.v742 = -1;
          v732_.v743 = -1;
          v727_.v727 = (__int64 (**)(void))(GameData_212e348 + 2);
          v727_.v728 = (__int64**)0xFFFF0001FFFF0000LL;
          v727_.v729 = 0xFFFF0004FFFF0002LL;
          v727_.v730 = 0xFFFF0006FFFF0005LL;
          v732_.v744 = 8;
          v727_.v731 = (__int64*)0xFFFF0008FFFF0007LL;
          v582 = task_a4dbe0(v581, v579, 0);
          if (v582 != nullptr) {
            v583 = v582;
            v584 = ui_LayoutAccessor_FindTextBox_alt1(
                v580, (__int64)"L_Dislike/T_Txt");
            if (v584 != 0) {
              v585 = v583;
              goto LABEL_1048;
            }
          }
        }
        else {
          v584 = ui_LayoutAccessor_FindTextBox_alt1(v746_.v746,
                                                    (__int64)"L_Dislike/T_Txt");
          if (v584 != 0) {
            v585 = &GameData_1a9f09e;
          LABEL_1048:
            game_156c5d0(v584, (__int64)v585, 0);
          }
        }
        v586 = *(_BYTE**)(v565 + 136);
        if (v586 != nullptr && *v586 != 0) {
          v587 = v746_.v746;
          v732_.v732 = -1;
          v732_.v733 = -1;
          v732_.v734 = -1;
          v732_.v735 = -1;
          v732_.v736 = -1;
          v732_.v737 = -1;
          v588 = *msg_MessageManager_instance__ptr[0];
          v732_.v738 = -1;
          v732_.v739 = -1;
          v732_.v740 = -1;
          v732_.v741 = -1;
          v732_.v742 = -1;
          v732_.v743 = -1;
          v727_.v727 = (__int64 (**)(void))(GameData_212e348 + 2);
          v727_.v728 = (__int64**)0xFFFF0001FFFF0000LL;
          v727_.v729 = 0xFFFF0004FFFF0002LL;
          v727_.v730 = 0xFFFF0006FFFF0005LL;
          v732_.v744 = 8;
          v727_.v731 = (__int64*)0xFFFF0008FFFF0007LL;
          v589 = task_a4dbe0(v588, v586, 0);
          if (v589 != nullptr) {
            v590 = v589;
            v591 = ui_LayoutAccessor_FindTextBox_alt1(v587,
                                                      (__int64)"L_Hobby/T_Txt");
            if (v591 != 0) {
              v592 = v590;
              goto LABEL_1056;
            }
          }
        }
        else {
          v591 = ui_LayoutAccessor_FindTextBox_alt1(v746_.v746,
                                                    (__int64)"L_Hobby/T_Txt");
          if (v591 != 0) {
            v592 = &GameData_1a9f09e;
          LABEL_1056:
            game_156c5d0(v591, (__int64)v592, 0);
          }
        }
        v593 = *(__int64 (***)(void))(v1 + 1064);
        v727_.v727 = v593;
        if (v593 != nullptr) {
          v593 = (__int64 (**)(void))v593[49];
        }
        v727_.v728 = (__int64**)v593;
        if ((unsigned int)GameSituation_906c90(
                game_GameModeData_instance_ + 136, (__int64*)&v727_.v727) ==
                1 &&
            (*(_DWORD*)(*(_QWORD*)(v1 + 1064) + 416LL) & 8) != 0) {
          v595 = v746_.v746;
          v604 = "MID_Sys_ValueEmpty";
          v732_.v732 = -1;
          v732_.v733 = -1;
          v732_.v734 = -1;
          v732_.v735 = -1;
          v732_.v736 = -1;
          v732_.v737 = -1;
          v603 = *msg_MessageManager_instance__ptr[0];
          v605 = GameData_212e348;
          goto LABEL_1071;
        }
        v594 = *(unsigned __int16*)(v565 + 64);
        v595 = v746_.v746;
        if (*(_WORD*)(v565 + 64) != 0) {
          v596 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
          if (game_gmap_GmapClock_instance_ == 0) {
            v596 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
          }
          v597 = *v596;
          v598 = v596[1];
          v599 = v596[2];
          if (v598 * v597 * v599 == 0 ||
              (v74 = __OFSUB__(v597, v594),
               ((v600 = v597 - v594) < 0) ^ v74 | (v600 == 0))) {
            v601 = -1;
          }
          else {
            v601 = (v599 + 10000 * v600 - *(unsigned __int8*)(v565 + 67) +
                    100 * (v598 - *(unsigned __int8*)(v565 + 66))) /
                   10000;
          }
          v602 = msg_MessageManager_instance__ptr[0];
          Manager_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v601,
                         0);
          v603 = *v602;
          v604 = "MID_ProfileMenu_AgeUnit";
          v732_.v732 = -1;
          v732_.v733 = -1;
          v605 = GameData_212e348;
          v732_.v734 = -1;
          v732_.v735 = -1;
          v732_.v736 = -1;
          v732_.v737 = -1;
        LABEL_1071:
          v732_.v738 = -1;
          v732_.v739 = -1;
          v732_.v740 = -1;
          v732_.v741 = -1;
          v732_.v742 = -1;
          v732_.v743 = -1;
          v727_.v727 = (__int64 (**)(void))(v605 + 2);
          v727_.v728 = (__int64**)0xFFFF0001FFFF0000LL;
        }
        else {
          v604 = "MID_ProfileMenu_Unknown";
          v732_.v732 = -1;
          v732_.v733 = -1;
          v732_.v734 = -1;
          v732_.v735 = -1;
          v603 = *msg_MessageManager_instance__ptr[0];
          v732_.v736 = -1;
          v732_.v737 = -1;
          v732_.v738 = -1;
          v732_.v739 = -1;
          v732_.v740 = -1;
          v732_.v741 = -1;
          v732_.v742 = -1;
          v732_.v743 = -1;
          v727_.v727 = (__int64 (**)(void))(GameData_212e348 + 2);
          v727_.v728 = (__int64**)0xFFFF0001FFFF0000LL;
        }
        v727_.v729 = 0xFFFF0004FFFF0002LL;
        v727_.v730 = 0xFFFF0006FFFF0005LL;
        v732_.v744 = 8;
        v727_.v731 = (__int64*)0xFFFF0008FFFF0007LL;
        v606 = task_a4dbe0(v603, v604, 0);
        if (v606 != nullptr) {
          v607 = (__int64)v606;
          v608 = ui_LayoutAccessor_FindTextBox_alt1(v595, (__int64)"T_Age");
          if (v608 != 0) {
            game_156c5d0(v608, v607, 0);
          }
        }
        if (*(_BYTE*)(v565 + 66) != 0 && *(_BYTE*)(v565 + 67) != 0) {
          v609 = v746_.v746;
          game_1604880((void*)((__int64*)&v727_.v727),
                       *(unsigned __int8*)(v565 + 66),
                       *(unsigned __int8*)(v565 + 67));
          if (((unsigned __int8)v727_.v727 & 1) != 0) {
            v610 = (char*)v727_.v729;
          }
          else {
            v610 = (char*)&v727_.v727 + 1;
          }
          if (v610 != nullptr) {
            v611 =
                ui_LayoutAccessor_FindTextBox_alt1(v609, (__int64)"T_Birthday");
            if (v611 != 0) {
              game_156c5d0(v611, (__int64)v610, 0);
            }
          }
          if (((unsigned __int8)v727_.v727 & 1) != 0 && v727_.v729 != 0) {
            v612 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v612 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v612, v727_.v729);
          }
        }
        else {
          v613 = v746_.v746;
          v732_.v732 = -1;
          v732_.v733 = -1;
          v732_.v734 = -1;
          v732_.v735 = -1;
          v732_.v736 = -1;
          v732_.v737 = -1;
          v614 = *msg_MessageManager_instance__ptr[0];
          v732_.v738 = -1;
          v732_.v739 = -1;
          v732_.v740 = -1;
          v732_.v741 = -1;
          v732_.v742 = -1;
          v732_.v743 = -1;
          v727_.v727 = (__int64 (**)(void))(GameData_212e348 + 2);
          v727_.v728 = (__int64**)0xFFFF0001FFFF0000LL;
          v727_.v729 = 0xFFFF0004FFFF0002LL;
          v727_.v730 = 0xFFFF0006FFFF0005LL;
          v732_.v744 = 8;
          v727_.v731 = (__int64*)0xFFFF0008FFFF0007LL;
          v615 = task_a4dbe0(v614, "MID_ProfileMenu_Unknown", 0);
          if (v615 != nullptr) {
            v616 = (__int64)v615;
            v617 =
                ui_LayoutAccessor_FindTextBox_alt1(v613, (__int64)"T_Birthday");
            if (v617 != 0) {
              game_156c5d0(v617, v616, 0);
            }
          }
        }
        v618 = v746_.v746;
        v619 = msg_MessageManager_instance__ptr[0];
        Manager_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                       *(unsigned __int16*)(v565 + 68), 0);
        v620 = *v619;
        v732_.v732 = -1;
        v732_.v733 = -1;
        v732_.v734 = -1;
        v732_.v735 = -1;
        v732_.v736 = -1;
        v732_.v737 = -1;
        v732_.v738 = -1;
        v732_.v739 = -1;
        v732_.v740 = -1;
        v732_.v741 = -1;
        v732_.v742 = -1;
        v732_.v743 = -1;
        v727_.v727 = (__int64 (**)(void))(GameData_212e348 + 2);
        v727_.v728 = (__int64**)0xFFFF0001FFFF0000LL;
        v727_.v729 = 0xFFFF0004FFFF0002LL;
        v727_.v730 = 0xFFFF0006FFFF0005LL;
        v732_.v744 = 8;
        v727_.v731 = (__int64*)0xFFFF0008FFFF0007LL;
        v621 = task_a4dbe0(v620, "MID_ProfileMenu_HeightUnit", 0);
        if (v621 != nullptr) {
          v622 = (__int64)v621;
          v623 = ui_LayoutAccessor_FindTextBox_alt1(v618, (__int64)"T_Height");
          if (v623 != 0) {
            game_156c5d0(v623, v622, 0);
          }
        }
      }
    }
  }
  v624 = v746_.v746;
  v625 = *(_BYTE**)(Unit_6c8300(*(_QWORD**)(v1 + 1064), 0) + 32);
  if (v625 != nullptr) {
    v732_.v732 = -1;
    v732_.v733 = -1;
    v732_.v734 = -1;
    v732_.v735 = -1;
    v626 = *msg_MessageManager_instance__ptr[0];
    v732_.v736 = -1;
    v732_.v737 = -1;
    v732_.v738 = -1;
    v732_.v739 = -1;
    v732_.v740 = -1;
    v732_.v741 = -1;
    v732_.v742 = -1;
    v732_.v743 = -1;
    v727_.v727 = (__int64 (**)(void))(GameData_212e348 + 2);
    v727_.v728 = (__int64**)0xFFFF0001FFFF0000LL;
    v727_.v729 = 0xFFFF0004FFFF0002LL;
    v727_.v730 = 0xFFFF0006FFFF0005LL;
    v732_.v744 = 8;
    v727_.v731 = (__int64*)0xFFFF0008FFFF0007LL;
    v627 = task_a4dbe0(v626, v625, 0);
    if (v627 == nullptr) {
      goto LABEL_1100;
    }
  }
  else {
    v627 = &GameData_1a9f09e;
  }
  v628 = ui_LayoutAccessor_FindTextBox_alt1(v624, (__int64)"T_Clan");
  if (v628 != 0) {
    game_156c5d0(v628, (__int64)v627, 0);
  }
LABEL_1100:
  v629 = ui_LayoutAccessor_FindPane_alt2(v746_.v746, (__int64)"IconClan");
  if (v629 != 0) {
    v630 = __dynamic_cast(v629, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v630 = 0;
  }
  v631 = Unit_6c8300(*(_QWORD**)(v1 + 1064), 0);
  v632 = 0;
  if (v630 != 0 && v631 != 0) {
    v633 = *(_BYTE**)(v631 + 48);
    if (v633 != nullptr && *v633 != 0 &&
        (v634 = v631,
         (Manager_136afb0(ui_Manager_instance_ + 1264, 5u, v633) & 1) != 0)) {
      v632 = Manager_136a920(ui_Manager_instance_ + 1264, v630, 0, 5u,
                             *(_BYTE**)(v634 + 48));
    }
    else {
      v632 = 0;
    }
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)v746_.v746, (__int64)"IconClan",
                                   v632 & 1);
  v635 = 241;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v635 = 177;
    }
    else {
      v635 = 241;
    }
  }
  LODWORD(v727_.v727) = v635;
  v636 = game_UnitPool_GetFirst((int*)&v727_.v727);
  v637 = 241;
  v638 = (__int64 (*)())v636;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v637 = 177;
    }
    else {
      v637 = 241;
    }
  }
  if (v636 == 0) {
    v641 = nullptr;
    v677 = nullptr;
    v642 = nullptr;
    goto LABEL_1190;
  }
  v639 = *(_QWORD*)(v636 + 432);
  if (v639 == 0) {
    v639 = *(_QWORD*)(v636 + 440);
    if (v639 != 0) {
      v640 = *(unsigned __int8*)(v639 + 16);
      if (v640 <= 8) {
        while (1) {
          v705 = v640 + 1;
          if (((v637 >> v640) & 2) != 0) {
            v639 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v640 + 1) + 556000);
            if (v639 != 0) {
              break;
            }
          }
          v640 = v705;
          if (v705 == 9) {
            goto LABEL_1122;
          }
        }
      }
      else {
      LABEL_1122:
        v639 = 0;
      }
    }
  }
  v712 = 0;
  v641 = nullptr;
  v642 = nullptr;
LABEL_1125:
  while (2) {
    v643 = (__int64 (*)())v639;
    if (v638 == v717[133] || (v644 = *((_QWORD*)v638 + 49)) == 0 ||
        *(_QWORD*)(v644 + 272) == 0 ||
        ((v645 = *((_QWORD*)v638 + 55)) == 0 ? (v646 = 9)
                                             : (v646 = *(_BYTE*)(v645 + 16)),
         ((1 << v646) & 0xF1) == 0 ||
             (LODWORD(v727_.v727) =
                  *(_DWORD*)((_BYTE*)0x168LL +
                             (_QWORD)game_g_shared_system_skills_ptr) &
                  0xFFF,
              (game_HasSkill((_QWORD*)v638 + 218, (unsigned int*)&v727_.v727) &
               1) != 0) ||
             (v647 = game_820d50(3), game_GameModeData_instance_ != 0) &&
                 (v648 = game_GameVariableTable_Find(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)v647)) != 0 &&
                 *(_DWORD*)(v648 + 32) != 0 ||
             (v649 = v717[133]) == nullptr)) {
    LABEL_1155:
      v661 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_1156;
      }
    LABEL_1177:
      v663 = 241;
      if (v643 == nullptr) {
        break;
      }
      goto LABEL_1178;
    }
    v650 = v642;
    v651 = (unsigned __int64)v641;
    v652 = *((_QWORD*)v649 + 49);
    if (v652 == 0) {
      v641 = (__int64*)v651;
      v642 = v650;
      goto LABEL_1155;
    }
    v653 = *((_QWORD*)v638 + 49);
    v716 = (__int64)v650;
    if (v653 == 0) {
      v662 = v650;
      goto LABEL_1176;
    }
    GameRoutine_8c9820(v652, v653, 0);
    GameRoutine_8c9820(v652, v653, 1u);
    GameRoutine_8c9820(v652, v653, 2u);
    GameRoutine_8c9820(v652, v653, 3u);
    GameRoutine_8c9820(v652, v653, 4u);
    v654 = *(_QWORD*)(v652 + 24);
    v655 = *(_QWORD*)(v653 + 24);
    v727_.v727 = nullptr;
    v727_.v728 = (__int64**)v652;
    v751_.v751 = nullptr;
    v751_.v752 = (__int64*)v653;
    v656 = *(_QWORD*)(*(_QWORD*)(v655 + 1784) + 272LL);
    v727_.v729 = *(_QWORD*)(*(_QWORD*)(v654 + 1784) + 272LL);
    v751_.v753 = (__int64*)v656;
    v657 = v727_.v729 == 0 | v656 == 0;
    if (v657 || (v658 = *(_QWORD**)(game_GameModeData_instance_ + 128),
                 ((v659 = GameReliance_8e17a0(v658, (__int64)&v727_.v727,
                                              (__int64)&v751_.v751)) &
                  0x80000000) != 0)) {
      v660 = GameData_212dae8;
    }
    else {
      v660 = (__int64 (***)(void))(v658[1] + 56LL * v659);
    }
    v641 = (__int64*)v651;
    if (*((_BYTE*)v660 + 10) == 0 || *((unsigned __int8*)v660 + 11) < 3u) {
      v642 = (__int64*)v716;
      v661 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_1177;
      }
      goto LABEL_1156;
    }
    if (v651 >= v712) {
      v664 = v651 - v716;
      v665 = (__int64)(v651 - v716) >> 3;
      v666 = v665 + 1;
      if ((unsigned __int64)(v665 + 1) >> 61 != 0) {
        GameRoutine_6c1f60();
      }
      if ((__int64)(v712 - v716) >> 2 > v666) {
        v666 = (__int64)(v712 - v716) >> 2;
      }
      if (v712 - v716 >= 0x7FFFFFFFFFFFFFF8LL) {
        v667 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v667 = v666;
      }
      if (v667 != 0) {
        if (v667 >> 61 != 0) {
          GameRoutine_60a210_alt2();
        }
        v668 = fw_memory_HeapManager_Allocate_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v667, 16, 0);
        v665 = (__int64)(v651 - v716) >> 3;
      }
      else {
        v668 = 0;
      }
      v669 = v668 + 8 * v667;
      v670 = v668 + v664 - 8 * v665;
      *(_QWORD*)(v668 + v664) = v638;
      v651 = v668 + v664 + 8;
      v712 = v669;
      GameRoutine_1a0b950(v670, v716, v664);
      if (v716 != 0) {
        v671 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v671 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v671, v716);
      }
      v662 = (__int64*)v670;
    LABEL_1176:
      v641 = (__int64*)v651;
      v642 = v662;
      v661 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_1156;
      }
      goto LABEL_1177;
    }
    v642 = (__int64*)v716;
    *v641++ = (__int64)v638;
    v661 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_1177;
    }
  LABEL_1156:
    if (*(_DWORD*)(v661 + 60) == 3) {
      v663 = 177;
    }
    else {
      v663 = 241;
    }
    if (v643 != nullptr) {
    LABEL_1178:
      v639 = *((_QWORD*)v643 + 54);
      v638 = v643;
      if (v639 == 0) {
        v672 = *((_QWORD*)v643 + 55);
        v638 = v643;
        if (v672 != 0) {
          v673 = *(unsigned __int8*)(v672 + 16);
          v639 = 0;
          v638 = v643;
          if (v673 <= 8) {
            while (1) {
              v674 = v673 + 1;
              if (((v663 >> v673) & 2) != 0) {
                v639 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                  24LL * (unsigned __int8)(v673 + 1) + 556000);
                if (v639 != 0) {
                  break;
                }
              }
              ++v673;
              if (v674 == 9) {
                v639 = 0;
                v638 = v643;
                goto LABEL_1125;
              }
            }
            v638 = v643;
          }
        }
      }
      continue;
    }
    break;
  }
  v1 = (__int64)v717;
  v727_.v727 = v717;
  if (v642 != v641) {
    v675 = 1;
    v676 = v641 - v642;
    game_menu_anonymous_1612ec0((__int64)v642, v641, &v727_.v727,
                                (2 * __clz((unsigned long long)(v676))) ^ 0x7E,
                                1);
    goto LABEL_1191;
  }
  v677 = v642;
LABEL_1190:
  v675 = 0;
  v676 = v641 - v677;
LABEL_1191:
  v678 = game_util_Format_alt2("L_Friend%02d", 0);
  LayoutAccessor_1560070_alt2((void*)(&v727_.v727), v746_.v746, v678);
  if (v727_.v728 != nullptr) {
    v679 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
    v680 = (__int64*)v727_.v727;
    if (v727_.v728 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
    }
    if (v679 != 0 && v680 != nullptr) {
      if (v676 != 0) {
        LayoutAccessor_155e830_alt2((__int64)v680, 1);
        v681 = ui_LayoutAccessor_FindPane_alt2(v680, (__int64)"Face");
        if (v681 != 0) {
          v681 =
              __dynamic_cast(v681, GameData_212d670[0], GameData_212d678[0], 0);
        }
        GameRoutine_1840740(v681, 0, *v642, 6u, 1);
      }
      else {
        LayoutAccessor_155e830_alt2((__int64)v680, 0);
      }
    LABEL_1203:
      if (atomic_fetch_add((atomic_ullong* volatile)(v679 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v679 + 16LL))(v679);
        std___1___shared_weak_count___release_weak_alt2(v679);
      }
    }
    else if (v679 != 0) {
      goto LABEL_1203;
    }
  }
  v682 = game_util_Format_alt2("L_Friend%02d", 1);
  LayoutAccessor_1560070_alt2((void*)(&v727_.v727), v746_.v746, v682);
  if (v727_.v728 != nullptr) {
    v683 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
    v684 = (__int64*)v727_.v727;
    if (v727_.v728 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
    }
    if (v683 != 0 && v684 != nullptr) {
      if (v676 <= 1) {
        LayoutAccessor_155e830_alt2((__int64)v684, 0);
      }
      else {
        LayoutAccessor_155e830_alt2((__int64)v684, 1);
        v685 = ui_LayoutAccessor_FindPane_alt2(v684, (__int64)"Face");
        if (v685 != 0) {
          v685 =
              __dynamic_cast(v685, GameData_212d670[0], GameData_212d678[0], 0);
        }
        GameRoutine_1840740(v685, 0, v642[1], 6u, 1);
      }
    LABEL_1217:
      if (atomic_fetch_add((atomic_ullong* volatile)(v683 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v683 + 16LL))(v683);
        std___1___shared_weak_count___release_weak_alt2(v683);
      }
    }
    else if (v683 != 0) {
      goto LABEL_1217;
    }
  }
  v686 = game_util_Format_alt2("L_Friend%02d", 2);
  LayoutAccessor_1560070_alt2((void*)(&v727_.v727), v746_.v746, v686);
  if (v727_.v728 != nullptr) {
    v687 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
    v688 = (__int64*)v727_.v727;
    if (v727_.v728 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
    }
    if (v687 != 0 && v688 != nullptr) {
      if (v676 <= 2) {
        LayoutAccessor_155e830_alt2((__int64)v688, 0);
      }
      else {
        LayoutAccessor_155e830_alt2((__int64)v688, 1);
        v689 = ui_LayoutAccessor_FindPane_alt2(v688, (__int64)"Face");
        if (v689 != 0) {
          v689 =
              __dynamic_cast(v689, GameData_212d670[0], GameData_212d678[0], 0);
        }
        GameRoutine_1840740(v689, 0, v642[2], 6u, 1);
      }
    LABEL_1231:
      if (atomic_fetch_add((atomic_ullong* volatile)(v687 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v687 + 16LL))(v687);
        std___1___shared_weak_count___release_weak_alt2(v687);
      }
    }
    else if (v687 != 0) {
      goto LABEL_1231;
    }
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)v746_.v746, (__int64)"N_Friends",
                                   v675);
  if (v642 != nullptr) {
    v690 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v690 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v690, (__int64)v642);
  }
LABEL_1237:
  v691 = v746_.v747;
  if (v746_.v747 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v746_.v747 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(char*))(*(_QWORD*)v691 + 16LL))(v691);
    std___1___shared_weak_count___release_weak_alt2((__int64)v691);
  }
  if (*(_QWORD*)(v1 + 1064) != 0) {
    LayoutAccessor_1560070_alt2((void*)(&v727_.v727), (__int64*)(v1 + 848),
                                "L_PageTab");
    if (v727_.v728 != nullptr) {
      v692 = std___1___shared_weak_count_lock_alt2((__int64)v727_.v728);
      if (v692 != 0) {
        v693 = (__int64*)v727_.v727;
      }
      else {
        v693 = nullptr;
      }
      if (v727_.v728 != nullptr) {
        std___1___shared_weak_count___release_weak_alt2((__int64)v727_.v728);
      }
      if (v693 != nullptr) {
        v694 = *(_QWORD*)(v1 + 1064);
        LODWORD(v727_.v727) = 0;
        v695 = *(_QWORD*)(v694 + 408);
        *(_QWORD*)(v1 + 1208) = *(_QWORD*)(v1 + 1200);
        GameRoutine_16142d0((__int64*)(v1 + 1200), &v727_.v727);
        LODWORD(v727_.v727) = 1;
        GameRoutine_16142d0((__int64*)(v1 + 1200), &v727_.v727);
        if (v695 == 0) {
          LODWORD(v727_.v727) = 2;
          GameRoutine_16142d0((__int64*)(v1 + 1200), &v727_.v727);
        }
        if ((game_gameui_Util_IsVisibleSpecialPage(*(_QWORD*)(v1 + 1064)) &
             1) != 0) {
          LODWORD(v727_.v727) = 3;
          GameRoutine_16142d0((__int64*)(v1 + 1200), &v727_.v727);
        }
        LODWORD(v727_.v727) = 4;
        GameRoutine_16142d0((__int64*)(v1 + 1200), &v727_.v727);
        v697 = *(_QWORD*)(v1 + 1200);
        v698 = *(_QWORD*)(v1 + 1208) - v697;
        if (v698 != 0) {
          v699 = 0;
          while (*(_DWORD*)(v1 + 1224) != *(_DWORD*)(v697 + 4 * v699)) {
            if (v698 >> 2 == ++v699) {
              goto LABEL_1256;
            }
          }
        }
        else {
        LABEL_1256:
          LODWORD(v699) = 0;
        }
        *(_DWORD*)(v1 + 1076) = v699;
        *(_DWORD*)(v1 + 1080) = v699;
        v751_.v751 = (const char*)v693;
        v751_.v752 = (__int64*)v692;
        *(_DWORD*)(v1 + 1072) = ((unsigned __int64)v698 >> 2) - 1;
        if (v692 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v692 + 16), 1u,
                                    memory_order_relaxed);
        }
        v727_.v727 = GameData_2068080;
        v727_.v728 = (__int64**)v1;
        v700 = *(_QWORD*)v1;
        v727_.v731 = (__int64*)&v727_.v727;
        v701 = (*(__int64 (**)(__int64))(v700 + 192))(v1);
        game_menu_PageTab_SetupLabel(v1 + 1072, (__int64*)&v751_.v751,
                                     (__int64)&v727_.v727, v701, 0xEu, 0xFu);
        if (v727_.v731 == (__int64*)&v727_.v727) {
          v702 = 32;
        LABEL_1265:
          (*(void (**)(__int64))(*v727_.v731 + v702))((__int64)v727_.v731);
        }
        else if (v727_.v731 != nullptr) {
          v702 = 40;
          goto LABEL_1265;
        }
        if (v692 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v692);
          goto LABEL_1268;
        }
      }
      else if (v692 != 0) {
      LABEL_1268:
        if (atomic_fetch_add((atomic_ullong* volatile)(v692 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v692 + 16LL))(v692);
          std___1___shared_weak_count___release_weak_alt2(v692);
        }
      }
    }
  }
  v703 = *(_DWORD*)(v1 + 1076);
  v704 = *(_QWORD*)(v1 + 1088);
  if (v703 <
      (unsigned __int64)((signed __int64)(*(_QWORD*)(v1 + 1096) - v704) >> 2)) {
    v703 = *(_DWORD*)(v704 + 4LL * v703);
  }
  return llvm_libcxx_21_libcxx_include___functional_1611330(v1, v703);
}

_QWORD*

game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure_Invoke(__int64 a1,
                                                                 int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = *(int**)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v5 = *v2;
  *v2 = v5 + 1;
  v6 = *(_QWORD*)(v3 + 8 * v5 + 1336);
  v7 = *(_QWORD*)(v3 + 1064);
  GameRoutine_1605f00(v6);
  v8 = *(_QWORD*)(v6 + 16);
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = v9;
      v11 = *(_QWORD*)(v6 + 8);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  *(_QWORD*)(v6 + 32) = v7;
  *(_DWORD*)(v6 + 24) = 3;
  v12 = *a2;
  *(_BYTE*)(v6 + 64) = 0;
  *(_DWORD*)(v6 + 60) = v12;
  return GameRoutine_1606250((_QWORD*)v6);
}

_QWORD*

game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure0_Invoke(__int64 a1,
                                                                  int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = *(int**)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v5 = *v2;
  *v2 = v5 + 1;
  v6 = *(_QWORD*)(v3 + 8 * v5 + 1312);
  v7 = *(_QWORD*)(v3 + 1064);
  GameRoutine_1605f00(v6);
  v8 = *(_QWORD*)(v6 + 16);
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = v9;
      v11 = *(_QWORD*)(v6 + 8);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  *(_QWORD*)(v6 + 32) = v7;
  *(_DWORD*)(v6 + 24) = 3;
  v12 = *a2;
  *(_BYTE*)(v6 + 64) = 0;
  *(_DWORD*)(v6 + 60) = v12;
  return GameRoutine_1606250((_QWORD*)v6);
}

_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure1_Invoke(
    _QWORD* result, int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = (int*)result[1];
  v3 = *v2;
  if ((int)v3 <= 2) {
    v4 = result[2];
    *v2 = v3 + 1;
    v6 = *(_QWORD*)(v4 + 8 * v3 + 1960);
    v7 = *(_QWORD*)(v4 + 1064);
    GameRoutine_1605f00(v6);
    v8 = *(_QWORD*)(v6 + 16);
    if (v8 != 0) {
      v9 = std___1___shared_weak_count_lock(v8);
      if (v9 != 0) {
        v10 = v9;
        v11 = *(_QWORD*)(v6 + 8);
        if (v11 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
      }
    }
    *(_QWORD*)(v6 + 32) = v7;
    *(_DWORD*)(v6 + 24) = 3;
    v12 = *a2;
    *(_BYTE*)(v6 + 64) = 0;
    *(_DWORD*)(v6 + 60) = v12;
    return GameRoutine_1606250((_QWORD*)v6);
  }
  return result;
}

_QWORD*

game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure_Invoke(_QWORD* result,
                                                                 int* a2)
{
  __int64 v2;
  _QWORD* v4;
  char v5;
  int* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;

  if (*(int*)result[1] <= 6) {
    v2 = result[2];
    v4 = result;
    v5 = GameRoutine_157b780(*(_QWORD*)(v2 + 1064));
    v6 = (int*)v4[1];
    v7 = v5 ^ 1;
    v8 = *v6;
    *v6 = v8 + 1;
    v9 = *(_QWORD*)(v2 + 8 * v8 + 1376);
    v10 = *(_QWORD*)(v2 + 1064);
    GameRoutine_1605f00(v9);
    v11 = *(_QWORD*)(v9 + 16);
    if (v11 != 0) {
      v12 = std___1___shared_weak_count_lock(v11);
      if (v12 != 0) {
        v13 = v12;
        v14 = *(_QWORD*)(v9 + 8);
        if (v14 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 40LL))(v14, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
      }
    }
    *(_QWORD*)(v9 + 32) = v10;
    *(_DWORD*)(v9 + 24) = 4;
    v15 = *a2;
    *(_BYTE*)(v9 + 64) = v7 & 1;
    *(_DWORD*)(v9 + 60) = v15;
    return GameRoutine_1606250((_QWORD*)v9);
  }
  return result;
}

_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure0_Invoke(
    _QWORD* result, unsigned int* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  char v8;
  int* v9;
  _QWORD* v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;

  v2 = result[3];
  v3 = *a2;
  v4 = *(_QWORD*)(v2 + 1064);
  v5 = *(_QWORD*)(v4 + 1456);
  if (((v3 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(v4 + 1464) - v5) >> 2 &&
      ((*(_DWORD*)(v5 + 4 * ((v3 >> 5) & 0x7F)) >> v3) & 1) != 0 &&
      *(int*)result[1] <= 6) {
    v6 = result;
    v8 = GameRoutine_157b780(*(_QWORD*)(v2 + 1064));
    v9 = (int*)v6[1];
    v10 = v6;
    v11 = v8 ^ 1;
    v12 = *v9;
    *v9 = v12 + 1;
    v13 = *(_QWORD*)(v2 + 8 * v12 + 1376);
    v14 = *(_QWORD*)(v2 + 1064);
    GameRoutine_1605f00(v13);
    v15 = *(_QWORD*)(v13 + 16);
    if (v15 != 0) {
      v16 = std___1___shared_weak_count_lock(v15);
      if (v16 != 0) {
        v17 = v16;
        v18 = *(_QWORD*)(v13 + 8);
        if (v18 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v18 + 40LL))(v18, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
        }
      }
    }
    *(_QWORD*)(v13 + 32) = v14;
    *(_DWORD*)(v13 + 24) = 4;
    v19 = *a2;
    *(_BYTE*)(v13 + 64) = v11 & 1;
    *(_DWORD*)(v13 + 60) = v19;
    result = GameRoutine_1606250((_QWORD*)v13);
    ++*(_DWORD*)v10[2];
  }
  return result;
}

_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure2_Invoke(
    _QWORD* result, int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;

  v2 = (int*)result[1];
  v3 = *v2;
  if ((int)v3 > 2) {
    return result;
  }
  v4 = result[2];
  *v2 = v3 + 1;
  v6 = *(_QWORD*)(v4 + 1064);
  v7 = *(_QWORD*)(v4 + 8 * v3 + 1824);
  GameRoutine_1605f00(v7);
  v8 = *(_QWORD*)(v7 + 16);
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = v9;
      v11 = *(_QWORD*)(v7 + 8);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  *(_QWORD*)(v7 + 32) = v6;
  *(_DWORD*)(v7 + 24) = 7;
  v12 = *a2;
  *(_DWORD*)(v7 + 60) = *a2;
  v13 = GameData_212c880[0];
  v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                              8LL * (v12 & 0xFFF)) +
                   592LL);
  if (v14 != 0) {
    game_gameui_Util_GetMorphRage(v6, v14);
    GameRoutine_1606250((_QWORD*)v7);
  }
  else {
    UnitInfoMenuItem_16061b0(v7, (__int64)"MID_Sys_Empty");
  }
  v15 = *(_QWORD*)(v4 + 1064);
  v16 = *(_QWORD*)(v4 + 8 * v3 + 1848);
  GameRoutine_1605f00(v16);
  v17 = *(_QWORD*)(v16 + 16);
  if (v17 != 0) {
    v18 = std___1___shared_weak_count_lock(v17);
    if (v18 != 0) {
      v19 = v18;
      v20 = *(_QWORD*)(v16 + 8);
      if (v20 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v20 + 40LL))(v20, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
    }
  }
  *(_QWORD*)(v16 + 32) = v15;
  v21 = *v13;
  *(_DWORD*)(v16 + 24) = 8;
  v22 = *a2;
  *(_DWORD*)(v16 + 60) = *a2;
  v23 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 64) + 8LL * (v22 & 0xFFF)) +
                   592LL);
  if (v23 != 0) {
    if (*(_WORD*)(v23 + 128) != 0) {
      v24 = *(_QWORD*)(*(_QWORD*)(v23 + 136) + 8LL);
      game_gameui_Util_GetMorphRage(v15, v23);
      if (v24 != 0) {
        GameRoutine_1606250((_QWORD*)v16);
        goto LABEL_23;
      }
    }
    else {
      game_gameui_Util_GetMorphRage(v15, v23);
    }
  }
  UnitInfoMenuItem_16061b0(v16, (__int64)"MID_Sys_Empty");
LABEL_23:
  v25 = *(_QWORD*)(v4 + 1064);
  v26 = *(_QWORD*)(v4 + 8 * v3 + 1872);
  GameRoutine_1605f00(v26);
  v27 = *(_QWORD*)(v26 + 16);
  if (v27 != 0) {
    v28 = std___1___shared_weak_count_lock(v27);
    if (v28 != 0) {
      v29 = v28;
      v30 = *(_QWORD*)(v26 + 8);
      if (v30 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v30 + 40LL))(v30, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
        std___1___shared_weak_count___release_weak(v29);
      }
    }
  }
  *(_QWORD*)(v26 + 32) = v25;
  v31 = *v13;
  *(_DWORD*)(v26 + 24) = 9;
  v32 = *a2;
  *(_DWORD*)(v26 + 60) = *a2;
  v33 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (v32 & 0xFFF)) +
                   592LL);
  if (v33 != 0 &&
      (*(_WORD*)game_gameui_Util_GetMorphRage(v25, v33) & 0xFFF) != 0) {
    return GameRoutine_1606250((_QWORD*)v26);
  }
  else {
    return (_QWORD*)UnitInfoMenuItem_16061b0(v26, (__int64)"MID_Sys_Empty");
  }
}

unsigned __int64

game_menu_anonymous_ProcUnitInfoFull_UpdatePage04_closure_Invoke(
    unsigned __int64 result, int* a2, __int64* a3)
{
  _DWORD* v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  int v14;
  char* v15;
  __int64 v17;
  __int64 v18;
  _QWORD v19[2];
  char* v20;

  v3 = *(_DWORD**)(result + 8);
  v4 = (unsigned int)*v3;
  if ((unsigned int)v4 > 9) {
    goto LABEL_32;
  }
  v5 = *a2;
  v6 = result;
  v7 = *a3;
  v8 = **(_QWORD**)(result + 16);
  v9 = *(_QWORD*)(*(_QWORD*)(result + 24) + 16 * v4);
  if (v5 >= 1) {
    v10 = game_util_Format("%d", v5);
    result = strlen(v10);
    if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v11 = result;
    if (result >= 0x17) {
      if ((result | 7) == 0x17) {
        v13 = 26;
      }
      else {
        v13 = (result | 7) + 1;
      }
      v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                  16, 0);
      v19[1] = v11;
      v20 = v12;
      v19[0] = v13 | 1;
    }
    else {
      LOBYTE(v19[0]) = 2 * result;
      v12 = (char*)v19 + 1;
      if (result == 0) {
        goto LABEL_13;
      }
    }
    result = memmove(v12, v10, v11);
  LABEL_13:
    v12[v11] = 0;
    v14 = v19[0] & 1;
    if ((v19[0] & 1) != 0) {
      v15 = v20;
    }
    else {
      v15 = (char*)v19 + 1;
    }
    if (v9 != 0 && v15 != nullptr) {
      result = ui_LayoutAccessor_FindTextBox(v8, v9);
      if (result != 0) {
        result = GameRoutine_156c5d0(result, v15, 0);
        v14 = v19[0] & 1;
      }
    }
    if (v14 != 0 && v20 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v20);
    }
    goto LABEL_27;
  }
  result = LayoutAccessor_1562060(**(_QWORD**)(result + 16), v9,
                                  "MID_Sys_ValueEmptyLong");
LABEL_27:
  if (v7 != 0) {
    v18 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 16LL * **(int**)(v6 + 8) + 8);
    if (v18 != 0) {
      result = ui_LayoutAccessor_FindTextBox(**(_QWORD**)(v6 + 16), v18);
      if (result != 0) {
        result = GameRoutine_156c5d0(result, v7, 0);
      }
    }
  }
  v3 = *(_DWORD**)(v6 + 8);
  LODWORD(v4) = *v3;
LABEL_32:
  *v3 = v4 + 1;
  return result;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcUnitInfoFull_UpdateTab_closure_Invoke(PSEUDO_X8 x8_,
                                                              __int64 a1,
                                                              int* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v4;
  __int64 v5;
  char* v6;
  unsigned __int64 result;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  int v13;
  int v14;
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

  v4 = (&GameData_20680f0)[4 * *(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1200LL) +
                                       4LL * *a2)];
  if (v4 != nullptr && *v4 != 0) {
    v15 = -1;
    v16 = -1;
    v17 = -1;
    v18 = -1;
    v5 = *msg_MessageManager_instance__ptr[0];
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v12[0] = msg_TagSelector_vtable;
    v12[1] = 0xFFFF0001FFFF0000LL;
    v12[2] = 0xFFFF0004FFFF0002LL;
    v12[3] = 0xFFFF0006FFFF0005LL;
    v27 = 8;
    v13 = -65529;
    v14 = -65528;
    v6 = (char*)GameRoutine_a4dbe0(v5, v4, 0, v12);
  }
  else {
    v6 = msg_MessageManager_empty_text_;
  }
  result = strlen(v6);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(result);
  }
  v8 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (result | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10, 16, 0);
    a3[1] = v8;
    a3[2] = v11;
    *a3 = v10 | 1;
    v9 = (char*)v11;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v9 = (char*)a3 + 1;
    if (result == 0) {
      goto LABEL_14;
    }
  }
  result = memmove(v9, v6, v8);
LABEL_14:
  v9[v8] = 0;
  {
    result;
    return;
  }
}

void ProcUnitInfoFull_1614680(__int64 a1, int a2)
{

#pragma clang fp contract(on)

  __int64 v2;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  unsigned __int8** v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int128* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  int v52;
  __int128* v53;
  char* v54;
  __int128* v55;
  char* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  int v65;
  unsigned __int64 v66;
  char* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int8* v74;
  __int64 v75;
  unsigned __int8** v76;
  __int64 v77;
  unsigned __int8** v78;
  __int64 v79;
  unsigned __int8** v80;
  __int64 v81;
  unsigned __int8** v82;
  __int64 v83;
  unsigned __int8** v84;
  __int64 v85;
  unsigned __int8** v86;
  __int64 v87;
  unsigned __int8** v88;
  __int64 v89;
  unsigned __int8** v90;
  __int64 v91;
  unsigned __int8** v92;
  __int64 v93;
  unsigned __int8** v94;
  __int64 v95;
  unsigned __int8** v96;
  __int64 v97;
  unsigned __int8** v98;
  __int64 v99;
  unsigned __int8** v100;
  __int64 v101;
  unsigned __int8** v102;
  __int64 v103;
  unsigned __int8** v104;
  __int64 v105;
  unsigned __int8** v106;
  __int64 v107;
  unsigned __int8** v108;
  __int64 v109;
  unsigned __int8** v110;
  __int64 v111;
  unsigned __int8** v112;
  __int64 v113;
  unsigned __int8** v114;
  __int64 v115;
  unsigned __int8** v116;
  __int64 v117;
  unsigned __int8** v118;
  __int64 v119;
  unsigned __int8** v120;
  __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  __int64* v138;
  __int64* v139;
  __int64* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  unsigned __int8* v147;
  unsigned __int8* v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  char* v160;
  __int64 v161;
  unsigned __int8* v162;
  unsigned __int8* v163;
  unsigned __int8* v164;
  unsigned __int8* v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  unsigned __int64 v172;
  char* v173;
  __int64 v174;
  unsigned __int64 v175;
  unsigned __int8* v176;
  unsigned __int64 v177;
  unsigned __int64 v178;
  unsigned __int64 v179;
  unsigned __int64 v180;
  __int64 v181;
  __int64* v182;
  char* v183;
  __int64 v184;
  unsigned __int8* v185;
  unsigned __int8* v186;
  unsigned __int8* v187;
  unsigned __int8* v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  unsigned __int8* v195;
  __int64* v196;
  char* v197;
  __int64 v198;
  unsigned __int64 v199;
  unsigned __int64 v200;
  unsigned __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  unsigned __int8* v204;
  unsigned __int8* v205;
  unsigned __int8* v206;
  char v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  unsigned __int8* v211;
  unsigned __int8* v212;
  unsigned __int8* v213;
  char v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  unsigned __int64* v221;
  _QWORD v222[2];
  struct {
    char* v223;
    __int64 v224;
  } v223_;
  struct {
    unsigned __int8* v225;
    unsigned __int8* v226;
    unsigned __int64 v227;
    unsigned __int64 v228;
    unsigned __int64 v229;
  } v225_;
  struct {
    unsigned __int8* v230;
    unsigned __int8* v231;
    unsigned __int64 v232;
    unsigned __int64 v233;
    unsigned __int64 v234;
  } v230_;
  struct {
    _QWORD v235[4];
    _QWORD* v236;
  } v235_;
  struct {
    _QWORD v237[2];
    __int64 v238;
    __int64 v239;
    _QWORD* v240;
  } v237_;

  v2 = *(_QWORD*)(a1 + 1200);
  v4 = (__int64*)(a1 + 848);
  v5 = *(_QWORD*)(a1 + 856);
  v6 = *(_DWORD*)(v2 + 4LL * a2);
  if (v5 != 0) {
    v7 = std___1___shared_weak_count_lock_alt2(v5);
    if (v7 != 0) {
      v8 = v7;
      if (*v4 != 0) {
        ControlCreator_13633c0(*v4);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt2(v8);
      }
    }
  }
  v9 = (_QWORD*)GameData_212d8b0[0];
  v10 = *(_QWORD**)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] == 0) {
    goto LABEL_17;
  }
  if (v10[19] != 0) {
    v237_.v238 = 0;
    v237_.v237[0] = GameData_212d890[0] + 2;
    LODWORD(v237_.v237[1]) = 44;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
        v10[1] + 16LL))((void*)(&v230_.v230), v10 + 1, v237_.v237);
  }
  v10[20] = 0;
  FloatingHelp_18af120_alt1(v10, v4);
  FloatingHelp_18af980((__int64)v10, v4);
  v11 = (_QWORD*)*v9;
  if (*v9 == 0) {
    goto LABEL_17;
  }
  v12 = (_QWORD*)*v9;
  *((_BYTE*)v11 + 256) = 1;
  FloatingHelp_18aee60_alt1(v12, v4);
  game_gameui_18ae960(v11, 1);
  v13 = v11[30];
  v11[29] = 0;
  v11[30] = 0;
  if (v13 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v13);
  }
  v14 = (_QWORD*)*v9;
  v11[20] = a1;
  *((_BYTE*)v11 + 257) = 0;
  *((_DWORD*)v11 + 62) = -1;
  if (v14 == nullptr) {
  LABEL_17:
    v16 = v235_.v235;
    v235_.v235[0] = GameData_20681b0;
    v235_.v235[1] = a1;
    v17 = 32;
    v235_.v236 = v235_.v235;
  LABEL_18:
    (*(void (**)(__int64))(*v16 + v17))((__int64)v16);
    goto LABEL_19;
  }
  v235_.v235[0] = GameData_20681b0;
  v235_.v235[1] = a1;
  v237_.v237[0] = GameData_20681b0;
  v237_.v237[1] = a1;
  v237_.v240 = v237_.v237;
  *(_QWORD*)((char*)v14 + 268) = 0x44048000C46D8000LL;
  *(_QWORD*)((char*)v14 + 276) = 0xC4048000446D8000LL;
  v235_.v236 = v235_.v235;
  game_gameui_18af480(v14, v4, (__int64)v237_.v237);
  if (v237_.v240 == v237_.v237) {
    v15 = 32;
  }
  else {
    if (v237_.v240 == nullptr) {
      goto LABEL_77;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v237_.v240 + v15))((__int64)v237_.v240);
LABEL_77:
  v16 = v235_.v236;
  if (v235_.v236 == v235_.v235) {
    v17 = 32;
    goto LABEL_18;
  }
  if (v235_.v236 != nullptr) {
    v17 = 40;
    goto LABEL_18;
  }
LABEL_19:
  if (v6 <= 1) {
    if (v6 != 0) {
      if (v6 != 1) {
        return;
      }
      v237_.v237[0] = v4;
      LODWORD(v237_.v237[1]) = 0;
      v18 = fw_memory_g_heap_manager_ptr;
      v237_.v238 = fw_memory_HeapManager_Allocate_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 960, 16, 0);
      v237_.v239 = v237_.v238;
      v237_.v240 = (_QWORD*)(v237_.v238 + 960);
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page01/L_SkillCommand00",
          (__int128*)((char*)((__int128*)0x10LL) + 9));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page01/L_SkillCommand01",
          (__int128*)((char*)((__int128*)0x10LL) + 9));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page01/L_SkillCommand02",
          (__int128*)((char*)((__int128*)0x10LL) + 9));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page01/L_SkillCommand03",
          (__int128*)((char*)((__int128*)0x10LL) + 9));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page01/L_SkillCommand04",
          (__int128*)((char*)((__int128*)0x10LL) + 9));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page01/L_SkillCommand05",
          (__int128*)((char*)((__int128*)0x10LL) + 9));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page01/L_SkillCommand06",
          (__int128*)((char*)((__int128*)0x10LL) + 9));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237,
          (__int64 (**)(void)) "L_Page01/L_LegionInfo/L_MenuItem_Name",
          (__int128*)((char*)((int*)0x24LL) + 1));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237,
          (__int64 (**)(void)) "L_Page01/L_LegionInfo/L_MenuItem_Gambit",
          (__int128*)((char*)((int*)0x24LL) + 3));
      GameRoutine_1607600((__int64)v237_.v237);
      v19 = *(_QWORD*)v18;
      v230_.v230 = (unsigned __int8*)v4;
      LODWORD(v230_.v231) = 0;
      v20 = fw_memory_HeapManager_Allocate_alt2(v19, 960, 16, 0);
      v21 = v20 + 960;
      v230_.v232 = v20;
      v230_.v233 = v20;
      v22 = *(_QWORD*)v18;
      v225_.v225 = (unsigned __int8*)v4;
      LODWORD(v225_.v226) = 0;
      v230_.v234 = v21;
      v225_.v227 = fw_memory_HeapManager_Allocate_alt2(v22, 960, 16, 0);
      v225_.v228 = v225_.v227;
      v225_.v229 = v225_.v227 + 960;
      v23 = ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/A_Magic01");
      if (v23 != 0 &&
          (v24 = *(_QWORD*)(v23 + 24), v25 = v23,
           GameRoutine_1a09c70((const char*)(v24 + 176)) == 3) &&
          (*(_WORD*)(v24 + 176) == 24398 ? (v26 = *(_BYTE*)(v24 + 178) == 82)
                                         : (v26 = false),
           v26)) {
        v75 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic00");
        v76 = &v230_.v230;
        if (v75 != 0 && *(_QWORD*)(v75 + 24) == v25) {
          v76 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v76, (__int64 (**)(void)) "L_Page01/L_Magic00",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v77 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic01");
        v78 = &v230_.v230;
        if (v77 != 0 && *(_QWORD*)(v77 + 24) == v25) {
          v78 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v78, (__int64 (**)(void)) "L_Page01/L_Magic01",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v79 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic02");
        v80 = &v230_.v230;
        if (v79 != 0 && *(_QWORD*)(v79 + 24) == v25) {
          v80 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v80, (__int64 (**)(void)) "L_Page01/L_Magic02",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v81 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic03");
        v82 = &v230_.v230;
        if (v81 != 0 && *(_QWORD*)(v81 + 24) == v25) {
          v82 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v82, (__int64 (**)(void)) "L_Page01/L_Magic03",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v83 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic04");
        v84 = &v230_.v230;
        if (v83 != 0 && *(_QWORD*)(v83 + 24) == v25) {
          v84 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v84, (__int64 (**)(void)) "L_Page01/L_Magic04",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v85 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic05");
        v86 = &v230_.v230;
        if (v85 != 0 && *(_QWORD*)(v85 + 24) == v25) {
          v86 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v86, (__int64 (**)(void)) "L_Page01/L_Magic05",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v87 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic06");
        v88 = &v230_.v230;
        if (v87 != 0 && *(_QWORD*)(v87 + 24) == v25) {
          v88 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v88, (__int64 (**)(void)) "L_Page01/L_Magic06",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v89 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic07");
        v90 = &v230_.v230;
        if (v89 != 0 && *(_QWORD*)(v89 + 24) == v25) {
          v90 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v90, (__int64 (**)(void)) "L_Page01/L_Magic07",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v91 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic08");
        v92 = &v230_.v230;
        if (v91 != 0 && *(_QWORD*)(v91 + 24) == v25) {
          v92 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v92, (__int64 (**)(void)) "L_Page01/L_Magic08",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v93 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic09");
        v94 = &v230_.v230;
        if (v93 != 0 && *(_QWORD*)(v93 + 24) == v25) {
          v94 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v94, (__int64 (**)(void)) "L_Page01/L_Magic09",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v95 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic10");
        v96 = &v230_.v230;
        if (v95 != 0 && *(_QWORD*)(v95 + 24) == v25) {
          v96 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v96, (__int64 (**)(void)) "L_Page01/L_Magic10",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v97 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic11");
        v98 = &v230_.v230;
        if (v97 != 0 && *(_QWORD*)(v97 + 24) == v25) {
          v98 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v98, (__int64 (**)(void)) "L_Page01/L_Magic11",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v99 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic12");
        v100 = &v230_.v230;
        if (v99 != 0 && *(_QWORD*)(v99 + 24) == v25) {
          v100 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v100, (__int64 (**)(void)) "L_Page01/L_Magic12",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v101 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic13");
        v102 = &v230_.v230;
        if (v101 != 0 && *(_QWORD*)(v101 + 24) == v25) {
          v102 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v102, (__int64 (**)(void)) "L_Page01/L_Magic13",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v103 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic14");
        v104 = &v230_.v230;
        if (v103 != 0 && *(_QWORD*)(v103 + 24) == v25) {
          v104 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v104, (__int64 (**)(void)) "L_Page01/L_Magic14",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v105 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic15");
        v106 = &v230_.v230;
        if (v105 != 0 && *(_QWORD*)(v105 + 24) == v25) {
          v106 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v106, (__int64 (**)(void)) "L_Page01/L_Magic15",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v107 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic16");
        v108 = &v230_.v230;
        if (v107 != 0 && *(_QWORD*)(v107 + 24) == v25) {
          v108 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v108, (__int64 (**)(void)) "L_Page01/L_Magic16",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v109 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic17");
        v110 = &v230_.v230;
        if (v109 != 0 && *(_QWORD*)(v109 + 24) == v25) {
          v110 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v110, (__int64 (**)(void)) "L_Page01/L_Magic17",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v111 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic18");
        v112 = &v230_.v230;
        if (v111 != 0 && *(_QWORD*)(v111 + 24) == v25) {
          v112 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v112, (__int64 (**)(void)) "L_Page01/L_Magic18",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v113 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic19");
        v114 = &v230_.v230;
        if (v113 != 0 && *(_QWORD*)(v113 + 24) == v25) {
          v114 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v114, (__int64 (**)(void)) "L_Page01/L_Magic19",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v115 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic20");
        v116 = &v230_.v230;
        if (v115 != 0 && *(_QWORD*)(v115 + 24) == v25) {
          v116 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v116, (__int64 (**)(void)) "L_Page01/L_Magic20",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v117 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic21");
        v118 = &v230_.v230;
        if (v117 != 0 && *(_QWORD*)(v117 + 24) == v25) {
          v118 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v118, (__int64 (**)(void)) "L_Page01/L_Magic21",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v119 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic22");
        v120 = &v230_.v230;
        if (v119 != 0 && *(_QWORD*)(v119 + 24) == v25) {
          v120 = &v225_.v225;
        }
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)v120, (__int64 (**)(void)) "L_Page01/L_Magic22",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        v121 =
            ui_LayoutAccessor_FindPane_alt2(v4, (__int64)"L_Page01/L_Magic23");
        if (v121 != 0 && *(_QWORD*)(v121 + 24) == v25) {
          v27 = &v225_.v225;
        LABEL_30:
          game_gameui_control_HelpGroup_CalcCenterPosition(
              (__int64)v27, (__int64 (**)(void)) "L_Page01/L_Magic23",
              (__int128*)((char*)((__int128*)0x10LL) + 2));
          game_gameui_control_HelpGroup_CalcCenterPosition(
              (__int64)&v225_.v225,
              (__int64 (**)(void)) "L_Page01/L_Dragon00_Name",
              (__int128*)((char*)((__int128*)0x10LL) + 8));
          game_gameui_control_HelpGroup_CalcCenterPosition(
              (__int64)&v225_.v225,
              (__int64 (**)(void)) "L_Page01/L_Dragon00_Attack",
              (__int128*)((char*)((__int128*)0x10LL) + 10));
          game_gameui_control_HelpGroup_CalcCenterPosition(
              (__int64)&v225_.v225,
              (__int64 (**)(void)) "L_Page01/L_Dragon00_Morph",
              (__int128*)((char*)((__int128*)0x10LL) + 9));
          game_gameui_control_HelpGroup_CalcCenterPosition(
              (__int64)&v225_.v225,
              (__int64 (**)(void)) "L_Page01/L_Dragon01_Name",
              (__int128*)((char*)((__int128*)0x10LL) + 8));
          game_gameui_control_HelpGroup_CalcCenterPosition(
              (__int64)&v225_.v225,
              (__int64 (**)(void)) "L_Page01/L_Dragon01_Attack",
              (__int128*)((char*)((__int128*)0x10LL) + 10));
          game_gameui_control_HelpGroup_CalcCenterPosition(
              (__int64)&v225_.v225,
              (__int64 (**)(void)) "L_Page01/L_Dragon01_Morph",
              (__int128*)((char*)((__int128*)0x10LL) + 9));
          game_gameui_control_HelpGroup_CalcCenterPosition(
              (__int64)&v225_.v225,
              (__int64 (**)(void)) "L_Page01/L_Dragon02_Name",
              (__int128*)((char*)((__int128*)0x10LL) + 8));
          game_gameui_control_HelpGroup_CalcCenterPosition(
              (__int64)&v225_.v225,
              (__int64 (**)(void)) "L_Page01/L_Dragon02_Attack",
              (__int128*)((char*)((__int128*)0x10LL) + 10));
          game_gameui_control_HelpGroup_CalcCenterPosition(
              (__int64)&v225_.v225,
              (__int64 (**)(void)) "L_Page01/L_Dragon02_Morph",
              (__int128*)((char*)((__int128*)0x10LL) + 9));
          GameRoutine_1607480((__int64)&v230_.v230);
          GameRoutine_1607600((__int64)&v230_.v230);
          GameRoutine_1607480((__int64)&v225_.v225);
          GameRoutine_1607600((__int64)&v225_.v225);
          GameRoutine_1607ae0((__int64)&v230_.v230, (__int64)v237_.v237);
          GameRoutine_1607ae0((__int64)&v225_.v225, (__int64)&v230_.v230);
          game_1607900(v237_.v237, (__int64)"L_OverBlaze", 11);
          game_1607900(v237_.v237, (__int64)"L_Physique", 10);
          game_1607900(v237_.v237, (__int64)"L_Move", 6);
          ProcUnitInfoFull_16165a0(a1, (__int64)&v230_.v230);
          v28 = v225_.v227;
          if (v225_.v227 != 0) {
            v29 = v225_.v228;
            if (v225_.v227 != v225_.v228) {
              do {
                v33 = *(_QWORD*)(v29 - 24);
                if (v33 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v33);
                }
                v29 -= 48LL;
              } while (v29 != v28);
            }
            v30 = 128;
            if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
              v30 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v30, v28);
          }
          v31 = v230_.v232;
          if (v230_.v232 != 0) {
            v32 = v230_.v233;
            if (v230_.v232 == v230_.v233) {
              goto LABEL_82;
            }
            do {
              v34 = *(_QWORD*)(v32 - 24);
              if (v34 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v34);
              }
              v32 -= 48LL;
            } while (v32 != v31);
            v230_.v233 = v31;
            v31 = v230_.v232;
            if (v230_.v232 != 0) {
            LABEL_82:
              v57 = 128;
              if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
                v57 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v57, v31);
            }
          }
          v36 = v237_.v238;
          if (v237_.v238 != 0) {
            v58 = v237_.v239;
            if (v237_.v238 != v237_.v239) {
              do {
                v59 = *(_QWORD*)(v58 - 24);
                if (v59 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v59);
                }
                v58 -= 48;
              } while (v58 != v36);
            }
            v38 = *(_QWORD*)v18;
            goto LABEL_334;
          }
          return;
        }
      }
      else {
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic00",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic01",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic02",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic03",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic04",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic05",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic06",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic07",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic08",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic09",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic10",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic11",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic12",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic13",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic14",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic15",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic16",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic17",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic18",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic19",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic20",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic21",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
        game_gameui_control_HelpGroup_CalcCenterPosition(
            (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page01/L_Magic22",
            (__int128*)((char*)((__int128*)0x10LL) + 2));
      }
      v27 = &v230_.v230;
      goto LABEL_30;
    }
    v237_.v237[0] = v4;
    LODWORD(v237_.v237[1]) = 0;
    v40 = fw_memory_g_heap_manager_ptr;
    v237_.v238 = fw_memory_HeapManager_Allocate_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 960, 16, 0);
    v237_.v239 = v237_.v238;
    v237_.v240 = (_QWORD*)(v237_.v238 + 960);
    if (*(_BYTE*)(a1 + 1984) != 0) {
      v41 = "L_Page00/L_GrowthRate";
    }
    else {
      v41 = "L_Page00/L_BattleStatus";
    }
    if (*(_BYTE*)(a1 + 1984) != 0) {
      v42 = ((__int128*)((char*)0x10LL + 5));
    }
    else {
      v42 = ((__int128*)((char*)0x10LL + 7));
    }
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)v237_.v237, (__int64 (**)(void))v41, v42);
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)v237_.v237, (__int64 (**)(void)) "L_Page00/L_BasicStatus",
        (__int128*)((char*)((__int128*)0x10LL) + 6));
    GameRoutine_1607600((__int64)v237_.v237);
    v43 = *(_QWORD*)v40;
    v230_.v230 = (unsigned __int8*)v4;
    LODWORD(v230_.v231) = 0;
    v230_.v232 = fw_memory_HeapManager_Allocate_alt2(v43, 960, 16, 0);
    v230_.v233 = v230_.v232;
    v230_.v234 = v230_.v232 + 960;
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page00/L_Equip",
        ((__int128*)0x10LL));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page00/L_Item00",
        (__int128*)((char*)((__int128*)0x10LL) + 1));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page00/L_Item01",
        (__int128*)((char*)((__int128*)0x10LL) + 1));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page00/L_Item02",
        (__int128*)((char*)((__int128*)0x10LL) + 1));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page00/L_Item03",
        (__int128*)((char*)((__int128*)0x10LL) + 1));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page00/L_Item04",
        (__int128*)((char*)((__int128*)0x10LL) + 1));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page00/L_Item05",
        (__int128*)((char*)((__int128*)0x10LL) + 1));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page00/L_MasteryInfo",
        (__int128*)((char*)((__int128*)0x10LL) + 6));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page00/L_Blood00",
        (__int128*)((char*)((__int128*)0x10LL) + 2));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page00/L_Blood01",
        (__int128*)((char*)((__int128*)0x10LL) + 2));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v230_.v230, (__int64 (**)(void)) "L_Page00/L_Blood02",
        (__int128*)((char*)((__int128*)0x10LL) + 2));
    GameRoutine_1607600((__int64)&v230_.v230);
    v44 = *(_QWORD*)v40;
    v225_.v225 = (unsigned __int8*)v4;
    LODWORD(v225_.v226) = 0;
    v225_.v227 = fw_memory_HeapManager_Allocate_alt2(v44, 960, 16, 0);
    v225_.v228 = v225_.v227;
    v225_.v229 = v225_.v227 + 960;
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v225_.v225, (__int64 (**)(void)) "L_Page00/L_Person00",
        (__int128*)((char*)((__int128*)0x10LL) + 3));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v225_.v225, (__int64 (**)(void)) "L_Page00/L_Job00",
        ((__int128*)0x10LL));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v225_.v225, (__int64 (**)(void)) "L_Page00/L_Job01",
        ((__int128*)0x10LL));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v225_.v225, (__int64 (**)(void)) "L_Page00/L_Job02",
        ((__int128*)0x10LL));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v225_.v225, (__int64 (**)(void)) "L_Page00/L_Equip01",
        (__int128*)((char*)((__int128*)0x10LL) + 2));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v225_.v225, (__int64 (**)(void)) "L_Page00/L_Equip02",
        (__int128*)((char*)((__int128*)0x10LL) + 2));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v225_.v225, (__int64 (**)(void)) "L_Page00/L_Equip03",
        (__int128*)((char*)((__int128*)0x10LL) + 2));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v225_.v225, (__int64 (**)(void)) "L_Page00/L_Equip04",
        (__int128*)((char*)((__int128*)0x10LL) + 2));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v225_.v225, (__int64 (**)(void)) "L_Page00/L_Equip05",
        (__int128*)((char*)((__int128*)0x10LL) + 2));
    game_gameui_control_HelpGroup_CalcCenterPosition(
        (__int64)&v225_.v225, (__int64 (**)(void)) "L_Page00/L_Ride00",
        (__int128*)((char*)((__int128*)0x10LL) + 1));
    GameRoutine_1607600((__int64)&v225_.v225);
    GameRoutine_1607ae0((__int64)&v230_.v230, (__int64)v237_.v237);
    GameRoutine_1607ae0((__int64)&v225_.v225, (__int64)&v230_.v230);
    game_1607900(v237_.v237, (__int64)"L_OverBlaze", 11);
    game_1607900(v237_.v237, (__int64)"L_Move", 6);
    game_1607900(v237_.v237, (__int64)"L_Physique", 10);
    v45 = *(_QWORD*)(a1 + 856);
    v222[0] = "L_Page00/L_MasteryInfo";
    v222[1] = 22;
    if (v45 != 0) {
      v46 = std___1___shared_weak_count_lock_alt2(v45);
      if (v46 != 0) {
        v47 = *v4;
        v48 = v46;
        if (*v4 != 0) {
          GameRoutine_15b71b0((void*)((__int64*)&v223_.v223), *v4,
                              (__int64)v222);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
          std___1___shared_weak_count___release_weak_alt2(v48);
        }
        if (v47 != 0 && v223_.v224 != 0) {
          v49 = std___1___shared_weak_count_lock_alt2(v223_.v224);
          v50 = (__int64)v223_.v223;
          if (v223_.v224 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v223_.v224);
          }
          if (v49 != 0 && v50 != 0) {
            v223_.v223 = "L_Page00/L_BasicStatus";
            v223_.v224 = 22;
            Element_1886b50(v50, 2, (__int64)&v223_.v223);
          }
          else if (v49 == 0) {
            goto LABEL_196;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
            std___1___shared_weak_count___release_weak_alt2(v49);
          }
        }
      }
    }
  LABEL_196:
    ProcUnitInfoFull_16165a0(a1, (__int64)&v230_.v230);
    v122 = v225_.v227;
    if (v225_.v227 != 0) {
      v123 = v225_.v228;
      if (v225_.v227 != v225_.v228) {
        do {
          v129 = *(_QWORD*)(v123 - 24);
          if (v129 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v129);
          }
          v123 -= 48LL;
        } while (v123 != v122);
      }
      v124 = 128;
      if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) == 0) {
        v124 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v40 + v124, v122);
    }
    v125 = v230_.v232;
    if (v230_.v232 != 0) {
      v126 = v230_.v233;
      if (v230_.v232 != v230_.v233) {
        do {
          v130 = *(_QWORD*)(v126 - 24);
          if (v130 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v130);
          }
          v126 -= 48LL;
        } while (v126 != v125);
      }
      v127 = 128;
      if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) == 0) {
        v127 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v40 + v127, v125);
    }
    v36 = v237_.v238;
    if (v237_.v238 != 0) {
      v128 = v237_.v239;
      if (v237_.v238 != v237_.v239) {
        do {
          v131 = *(_QWORD*)(v128 - 24);
          if (v131 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v131);
          }
          v128 -= 48;
        } while (v128 != v36);
      }
      v38 = *(_QWORD*)v40;
      goto LABEL_334;
    }
    return;
  }
  if (v6 != 2) {
    if (v6 == 3) {
      v237_.v237[0] = v4;
      LODWORD(v237_.v237[1]) = 0;
      v35 = (__int64*)fw_memory_g_heap_manager_ptr;
      v237_.v238 = fw_memory_HeapManager_Allocate_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 960, 16, 0);
      v237_.v239 = v237_.v238;
      v237_.v240 = (_QWORD*)(v237_.v238 + 960);
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page03/L_Special00",
          (__int128*)((char*)((__int128*)0x10LL) + 4));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page03/L_Special01",
          (__int128*)((char*)((__int128*)0x10LL) + 4));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page03/L_Special02",
          (__int128*)((char*)((__int128*)0x10LL) + 4));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page03/L_Special03",
          (__int128*)((char*)((__int128*)0x10LL) + 4));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page03/L_Special04",
          (__int128*)((char*)((__int128*)0x10LL) + 4));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page03/L_Special05",
          (__int128*)((char*)((__int128*)0x10LL) + 4));
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237, (__int64 (**)(void)) "L_Page03/L_SpecialCommand",
          (__int128*)((char*)((__int128*)0x10LL) + 9));
      GameRoutine_1607600((__int64)v237_.v237);
      ProcUnitInfoFull_16165a0(a1, (__int64)v237_.v237);
      v36 = v237_.v238;
      if (v237_.v238 != 0) {
        v37 = v237_.v239;
        if (v237_.v238 != v237_.v239) {
          do {
            v39 = *(_QWORD*)(v37 - 24);
            if (v39 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v39);
            }
            v37 -= 48;
          } while (v37 != v36);
        }
        v38 = *v35;
        goto LABEL_334;
      }
    }
    return;
  }
  v237_.v237[0] = v4;
  LODWORD(v237_.v237[1]) = 0;
  v51 = (__int64*)fw_memory_g_heap_manager_ptr;
  v237_.v238 = fw_memory_HeapManager_Allocate_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 960, 16, 0);
  v237_.v239 = v237_.v238;
  v237_.v240 = (_QWORD*)(v237_.v238 + 960);
  v52 = *(_DWORD*)(a1 + 2192);
  if (v52 == 2) {
    v55 = (_OWORD*)(((int*)((char*)0x24LL + 3)));
    v53 = (_OWORD*)(((int*)((char*)0x24LL + 1)));
    v54 = "L_Page02/L_LegionInfo/L_MenuItem_Gambit";
    v56 = "L_Page02/L_LegionInfo/L_MenuItem_Name";
  }
  else {
    if (v52 != 1) {
      goto LABEL_94;
    }
    if (*(_BYTE*)(a1 + 2196) == 1) {
      game_gameui_control_HelpGroup_CalcCenterPosition(
          (__int64)v237_.v237,
          (__int64 (**)(void)) "L_Page02/L_Animal/L_MenuItem_Attack00",
          (__int128*)((char*)((int*)0x24LL) + 1));
      v53 = (_OWORD*)(((int*)((char*)0x24LL + 1)));
      v54 = "L_Page02/L_Animal/L_MenuItem_Morph";
      v55 = (_OWORD*)(((char*)0x20LL) + 2);
      v56 = "L_Page02/L_Animal/L_MenuItem_Attack01";
    }
    else {
      v54 = "L_Page02/L_Animal/L_MenuItem_Skill";
      v55 = (_OWORD*)(((char*)0x20LL) + 2);
      v53 = (_OWORD*)(((char*)0x20LL) + 1);
      v56 = "L_Page02/L_Animal/L_MenuItem_Name";
    }
  }
  game_gameui_control_HelpGroup_CalcCenterPosition(
      (__int64)v237_.v237, (__int64 (**)(void))v56, v53);
  game_gameui_control_HelpGroup_CalcCenterPosition(
      (__int64)v237_.v237, (__int64 (**)(void))v54, v55);
LABEL_94:
  v221 = (unsigned __int64*)v4;
  GameRoutine_1607600((__int64)v237_.v237);
  v60 = v237_.v238;
  v61 = v237_.v239;
  if (v237_.v238 == v237_.v239) {
    goto LABEL_229;
  }
  do {
    v62 = std___1___shared_weak_count_lock_alt2(*(_QWORD*)(v60 + 24));
    v63 = *(_QWORD*)(v60 + 16);
    v64 = *(unsigned __int8*)(v63 + 880);
    v65 = v64 & 1;
    v66 = v64 >> 1;
    if (v65 != 0) {
      v66 = *(_QWORD*)(v63 + 888);
    }
    if (v66 != 0) {
      if (v65 == 0) {
        *(_BYTE*)(v63 + 881) = 0;
        goto LABEL_105;
      }
      **(_BYTE**)(v63 + 896) = 0;
      *(_QWORD*)(v63 + 888) = 0;
      v65 = *(_BYTE*)(v63 + 880) & 1;
    }
    if (v65 != 0) {
      *(_QWORD*)(v63 + 888) = 11;
      v67 = *(char**)(v63 + 896);
      goto LABEL_106;
    }
  LABEL_105:
    *(_BYTE*)(v63 + 880) = 22;
    v67 = (char*)(v63 + 881);
  LABEL_106:
    strcpy(v67, "L_OverBlaze");
    if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v68 = v62;
      (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
      std___1___shared_weak_count___release_weak_alt2(v68);
    }
    v60 += 48;
  } while (v60 != v61);
  v69 = *(_QWORD*)(a1 + 856);
  v225_.v225 = "L_OverBlaze";
  v225_.v226 = (_BYTE*)(((_UNKNOWN**)((char*)0x8LL + 3)));
  if (v69 != 0) {
    v70 = std___1___shared_weak_count_lock_alt2(v69);
    if (v70 != 0) {
      v71 = *v221;
      v72 = v70;
      if (*v221 != 0) {
        GameRoutine_15b71b0((void*)((__int64*)&v230_.v230), *v221,
                            (__int64)&v225_.v225);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
        std___1___shared_weak_count___release_weak_alt2(v72);
      }
      if (v71 != 0 && v230_.v231 != nullptr) {
        v73 = std___1___shared_weak_count_lock_alt2((__int64)v230_.v231);
        v74 = v230_.v230;
        if (v230_.v231 != nullptr) {
          std___1___shared_weak_count___release_weak_alt2((__int64)v230_.v231);
        }
        if (v73 != 0 && v74 != nullptr) {
          v230_.v230 = *(unsigned __int8**)(v237_.v239 - 48);
          v230_.v231 =
              (unsigned __int8*)GameRoutine_1a09c70((const char*)v230_.v230);
          Element_1886b50((__int64)v74, 3, (__int64)&v230_.v230);
        LABEL_219:
          if (atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
            std___1___shared_weak_count___release_weak_alt2(v73);
          }
        }
        else if (v73 != 0) {
          goto LABEL_219;
        }
      }
    }
  }
  v132 = v237_.v239;
  v133 = std___1___shared_weak_count_lock_alt2(*(_QWORD*)(v237_.v239 - 24));
  v134 = *(_QWORD*)(v132 - 32);
  v135 = v133;
  v136 = *(unsigned __int8*)(v134 + 856);
  v137 = *(_QWORD*)(v134 + 864);
  if ((v136 & 1) == 0) {
    v137 = v136 >> 1;
  }
  if (v137 != 0) {
    if ((v136 & 1) != 0) {
      **(_BYTE**)(v134 + 872) = 0;
      *(_QWORD*)(v134 + 864) = 0;
    }
    else {
      *(_WORD*)(v134 + 856) = 0;
    }
  }
  GameRoutine_60a060((char*)(v134 + 856),
                     (__int64)"L_Page02/L_JobList/L_JobIcon00", 0x1Eu);
  if (atomic_fetch_add((atomic_ullong* volatile)(v135 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v135 + 16LL))(v135);
    std___1___shared_weak_count___release_weak_alt2(v135);
  }
LABEL_229:
  v138 = (__int64*)fw_memory_HeapManager_Allocate_alt2(*v51, 32, 16, 0);
  v138[3] = 0xFFFFFFFF00000000LL;
  *v138 = 0x65766F4D5F4C0CLL;
  v139 = (__int64*)fw_memory_HeapManager_Allocate_alt2(*v51, 64, 16, 0);
  v139[7] = 0xFFFFFFFF00000000LL;
  v140 = v139;
  v139[4] = 0x69737968505F4C14LL;
  v139[5] = 6649201;
  v141 = *v138;
  v142 = v138[1];
  *v138 = 0;
  v138[1] = 0;
  *v139 = v141;
  v139[1] = v142;
  v143 = v138[2];
  v144 = v138[3];
  v138[2] = 0;
  v139[2] = v143;
  v139[3] = v144;
  if (*(_QWORD*)(*v51 + 200) != 0) {
    v145 = 128;
  }
  else {
    v145 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v51 + v145, (__int64)v138);
  v146 = fw_memory_HeapManager_Allocate_alt2(*v51, 128, 16, 0);
  *(_QWORD*)(v146 + 88) = 0xFFFFFFFF00000000LL;
  v147 = (unsigned __int8*)(v146 + 128);
  v148 = (unsigned __int8*)(v146 + 96);
  v230_.v230 = (unsigned __int8*)v146;
  v230_.v232 = v146 + 128;
  *(_QWORD*)(v146 + 64) = 0x427265764F5F4C16LL;
  *(_QWORD*)(v146 + 72) = 1702519148;
  v149 = *v140;
  v150 = v140[1];
  *v140 = 0;
  v140[1] = 0;
  *(_QWORD*)v146 = v149;
  *(_QWORD*)(v146 + 8) = v150;
  v151 = v140[2];
  v152 = v140[3];
  v140[2] = 0;
  *(_QWORD*)(v146 + 16) = v151;
  *(_QWORD*)(v146 + 24) = v152;
  v153 = v140[4];
  v154 = v140[5];
  v140[4] = 0;
  *(_QWORD*)(v146 + 32) = v153;
  *(_QWORD*)(v146 + 40) = v154;
  v155 = v140[6];
  v156 = v140[7];
  v140[5] = 0;
  v140[6] = 0;
  *(_QWORD*)(v146 + 48) = v155;
  *(_QWORD*)(v146 + 56) = v156;
  if (*(_QWORD*)(*v51 + 200) != 0) {
    v157 = 128;
  }
  else {
    v157 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v51 + v157, (__int64)v140);
  v230_.v231 = v148;
  LODWORD(v225_.v225) = 0;
  LODWORD(v223_.v223) = 0;
  ProcUnitInfoFull_1617700((__int64)v148,
                           "L_Page02/L_LegionInfo/L_MenuItem_Name",
                           (int*)&v225_.v225, (int*)&v223_.v223);
  v158 = fw_memory_HeapManager_Allocate_alt2(*v51, 256, 16, 0);
  v159 = v158 + 128;
  v160 = (char*)fw_memory_HeapManager_Allocate_alt2(*v51, 40, 16, 0);
  strcpy(v160, "L_Page02/L_LegionInfo/L_MenuItem_Gambit");
  fw_text_String_CopyTerminated((__int64*)(v158 + 128), (__int64)v160, 0x27u);
  *(_QWORD*)(v158 + 152) = 1;
  if (*(_QWORD*)(*v51 + 200) != 0) {
    v161 = 128;
  }
  else {
    v161 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v51 + v161, (__int64)v160);
  v162 = v230_.v230;
  v163 = (unsigned __int8*)(v159 + v230_.v230 - v147);
  if (v230_.v230 != v147) {
    v164 = v230_.v230;
    v165 = (unsigned __int8*)(v159 + v230_.v230 - v147);
    do {
      v166 = *(_QWORD*)v164;
      v167 = *((_QWORD*)v164 + 2);
      *((_QWORD*)v165 + 1) = *((_QWORD*)v164 + 1);
      *((_QWORD*)v165 + 2) = v167;
      *(_QWORD*)v165 = v166;
      *((_QWORD*)v164 + 1) = 0;
      *((_QWORD*)v164 + 2) = 0;
      *(_QWORD*)v164 = 0;
      v168 = *((_QWORD*)v164 + 3);
      v164 += 32;
      *((_QWORD*)v165 + 3) = v168;
      v165 += 32;
    } while (v164 != v147);
    do {
      if ((*v162 & 1) != 0) {
        v169 = *((_QWORD*)v162 + 2);
        if (v169 != 0) {
          if (*(_QWORD*)(*v51 + 200) != 0) {
            v170 = 128;
          }
          else {
            v170 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v51 + v170, v169);
        }
      }
      v162 += 32;
    } while (v162 != v147);
    v162 = v230_.v230;
  }
  v230_.v230 = v163;
  v230_.v232 = v158 + 256;
  if (v162 != nullptr) {
    v171 = 128;
    if (*(_QWORD*)(*v51 + 200) == 0) {
      v171 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v51 + v171, (__int64)v162);
  }
  LODWORD(v225_.v225) = 0;
  LODWORD(v223_.v223) = 1;
  ProcUnitInfoFull_1617700(v158 + 160, "L_Page02/L_Animal/L_MenuItem_Attack00",
                           (int*)&v225_.v225, (int*)&v223_.v223);
  LODWORD(v225_.v225) = 1;
  LODWORD(v223_.v223) = 1;
  v230_.v231 = (unsigned __int8*)(v158 + 192);
  ProcUnitInfoFull_1617700(v158 + 192, "L_Page02/L_Animal/L_MenuItem_Attack01",
                           (int*)&v225_.v225, (int*)&v223_.v223);
  LODWORD(v223_.v223) = 1;
  LODWORD(v225_.v225) = 2;
  v230_.v231 = (unsigned __int8*)(v158 + 224);
  if (v158 + 224 >= v230_.v232) {
    v172 = ProcUnitInfoFull_1617860_alt1((__int64*)&v230_.v230,
                                         "L_Page02/L_Animal/L_MenuItem_Morph",
                                         (int*)&v225_.v225, (int*)&v223_.v223);
  }
  else {
    ProcUnitInfoFull_1617a20(v158 + 224, "L_Page02/L_Animal/L_MenuItem_Morph",
                             (int*)&v225_.v225, (int*)&v223_.v223);
    v172 = v158 + 256;
  }
  if (v172 >= v230_.v232) {
    v177 = v172 - (_QWORD)v230_.v230;
    v178 = ((__int64)(v172 - (_QWORD)v230_.v230) >> 5) + 1;
    if (v178 >> 59 != 0) {
      GameRoutine_16176e0_alt2();
    }
    v179 = (__int64)(v230_.v232 - (_QWORD)v230_.v230) >> 4;
    if (v179 <= v178) {
      v179 = ((__int64)(v172 - (_QWORD)v230_.v230) >> 5) + 1;
    }
    if (v230_.v232 - (unsigned __int64)v230_.v230 >= 0x7FFFFFFFFFFFFFE0LL) {
      v180 = 0x7FFFFFFFFFFFFFFLL;
    }
    else {
      v180 = v179;
    }
    if (v180 != 0) {
      if (v180 >> 59 != 0) {
        GameRoutine_60a210_alt2();
      }
      v181 = fw_memory_HeapManager_Allocate_alt2(*v51, 32 * v180, 16, 0);
    }
    else {
      v181 = 0;
    }
    v182 = (__int64*)(v181 + v177);
    v175 = v181 + 32 * v180;
    v183 = (char*)fw_memory_HeapManager_Allocate_alt2(*v51, 40, 16, 0);
    strcpy(v183, "L_Page02/L_Animal/L_MenuItem_Name");
    fw_text_String_CopyTerminated(v182, (__int64)v183, 0x21u);
    v182[3] = 0x200000000LL;
    v184 = 128;
    if (*(_QWORD*)(*v51 + 200) == 0) {
      v184 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v51 + v184, (__int64)v183);
    v185 = v230_.v230;
    v176 = (unsigned __int8*)(v182 + 4);
    v186 = &v230_.v230[(_QWORD)v182 - v172];
    if ((unsigned __int8*)v172 != v230_.v230) {
      v187 = v230_.v230;
      v188 = &v230_.v230[(_QWORD)v182 - v172];
      do {
        v189 = *(_QWORD*)v187;
        v190 = *((_QWORD*)v187 + 2);
        *((_QWORD*)v188 + 1) = *((_QWORD*)v187 + 1);
        *((_QWORD*)v188 + 2) = v190;
        *(_QWORD*)v188 = v189;
        *((_QWORD*)v187 + 1) = 0;
        *((_QWORD*)v187 + 2) = 0;
        *(_QWORD*)v187 = 0;
        v191 = *((_QWORD*)v187 + 3);
        v187 += 32;
        *((_QWORD*)v188 + 3) = v191;
        v188 += 32;
      } while (v187 != (unsigned __int8*)v172);
      do {
        if ((*v185 & 1) != 0) {
          v192 = *((_QWORD*)v185 + 2);
          if (v192 != 0) {
            if (*(_QWORD*)(*v51 + 200) != 0) {
              v193 = 128;
            }
            else {
              v193 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v51 + v193, v192);
          }
        }
        v185 += 32;
      } while (v185 != (unsigned __int8*)v172);
      v185 = v230_.v230;
    }
    v230_.v230 = v186;
    v230_.v232 = v175;
    if (v185 != nullptr) {
      v194 = 128;
      if (*(_QWORD*)(*v51 + 200) == 0) {
        v194 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v51 + v194, (__int64)v185);
    }
  }
  else {
    v173 = (char*)fw_memory_HeapManager_Allocate_alt2(*v51, 40, 16, 0);
    strcpy(v173, "L_Page02/L_Animal/L_MenuItem_Name");
    fw_text_String_CopyTerminated((__int64*)v172, (__int64)v173, 0x21u);
    *(_QWORD*)(v172 + 24) = 0x200000000LL;
    v174 = 128;
    if (*(_QWORD*)(*v51 + 200) == 0) {
      v174 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v51 + v174, (__int64)v173);
    v175 = v230_.v232;
    v176 = (unsigned __int8*)(v172 + 32);
  }
  v230_.v231 = v176;
  LODWORD(v225_.v225) = 1;
  LODWORD(v223_.v223) = 2;
  if ((unsigned __int64)v176 >= v175) {
    v195 = (unsigned __int8*)ProcUnitInfoFull_1617860_alt1(
        (__int64*)&v230_.v230, "L_Page02/L_Animal/L_MenuItem_Skill",
        (int*)&v225_.v225, (int*)&v223_.v223);
  }
  else {
    ProcUnitInfoFull_1617a20((__int64)v176,
                             "L_Page02/L_Animal/L_MenuItem_Skill",
                             (int*)&v225_.v225, (int*)&v223_.v223);
    v195 = v176 + 32;
  }
  v230_.v231 = v195;
  v196 = (__int64*)fw_memory_HeapManager_Allocate_alt2(*v51, 32, 16, 0);
  v197 = (char*)fw_memory_HeapManager_Allocate_alt2(*v51, 32, 16, 0);
  strcpy(v197, "L_Page02/L_JobList/L_JobIcon00");
  fw_text_String_CopyTerminated(v196, (__int64)v197, 0x1Eu);
  v196[3] = 0xFFFFFFFF00000000LL;
  v198 = 128;
  if (*(_QWORD*)(*v51 + 200) == 0) {
    v198 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v51 + v198, (__int64)v197);
  v225_.v226 = (unsigned __int8*)(v196 + 4);
  v225_.v227 = (unsigned __int64)(v196 + 4);
  v225_.v225 = (unsigned __int8*)v196;
  LODWORD(v223_.v223) = 0;
  v199 = ProcUnitInfoFull_1617b80_alt2(
      (__int64*)&v225_.v225,
      (__int64)"L_Page02/L_JobList/L_JobIcon_Rank1_Attr1_00",
      (__int64)&v223_.v223);
  v200 = v225_.v227;
  v225_.v226 = (unsigned __int8*)v199;
  LODWORD(v223_.v223) = 0;
  if (v199 >= v225_.v227) {
    v201 = ProcUnitInfoFull_1617b80_alt2(
        (__int64*)&v225_.v225,
        (__int64)"L_Page02/L_JobList/L_JobIcon_Rank1_Attr2_00",
        (__int64)&v223_.v223);
    v200 = v225_.v227;
  }
  else {
    v201 = ProcUnitInfoFull_1617d40(
               v199, "L_Page02/L_JobList/L_JobIcon_Rank1_Attr2_00",
               (int*)&v223_.v223) +
           32;
  }
  v225_.v226 = (unsigned __int8*)v201;
  LODWORD(v223_.v223) = 0;
  if (v201 >= v200) {
    v202 = ProcUnitInfoFull_1617b80_alt2(
        (__int64*)&v225_.v225,
        (__int64)"L_Page02/L_JobList/L_JobIcon_Rank1_Attr3_00",
        (__int64)&v223_.v223);
    v200 = v225_.v227;
  }
  else {
    v202 = ProcUnitInfoFull_1617d40(
               v201, "L_Page02/L_JobList/L_JobIcon_Rank1_Attr3_00",
               (int*)&v223_.v223) +
           32;
  }
  v225_.v226 = (unsigned __int8*)v202;
  LODWORD(v223_.v223) = 0;
  if (v202 >= v200) {
    v203 = ProcUnitInfoFull_1617b80_alt2(
        (__int64*)&v225_.v225,
        (__int64)"L_Page02/L_JobList/L_JobIcon_Rank1_Attr4_00",
        (__int64)&v223_.v223);
  }
  else {
    v203 = ProcUnitInfoFull_1617d40(
               v202, "L_Page02/L_JobList/L_JobIcon_Rank1_Attr4_00",
               (int*)&v223_.v223) +
           32;
  }
  v225_.v226 = (unsigned __int8*)v203;
  game_159f000(v221, &v230_.v230, &v225_.v225, 1);
  game_159f000(v221, &v225_.v225, &v230_.v230, 1);
  v204 = v225_.v225;
  if (v225_.v225 != nullptr) {
    v205 = v225_.v226;
    if (v225_.v225 == v225_.v226) {
      goto LABEL_314;
    }
    v206 = v225_.v226;
    do {
      v207 = *(v206 - 32);
      v206 -= 32;
      if ((v207 & 1) != 0) {
        v208 = *((_QWORD*)v205 - 2);
        if (v208 != 0) {
          if (*(_QWORD*)(*v51 + 200) != 0) {
            v209 = 128;
          }
          else {
            v209 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v51 + v209, v208);
        }
      }
      v205 = v206;
    } while (v206 != v204);
    v225_.v226 = v204;
    v204 = v225_.v225;
    if (v225_.v225 != nullptr) {
    LABEL_314:
      v210 = 128;
      if (*(_QWORD*)(*v51 + 200) == 0) {
        v210 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v51 + v210, (__int64)v204);
    }
  }
  v211 = v230_.v230;
  if (v230_.v230 != nullptr) {
    v212 = v230_.v231;
    if (v230_.v230 == v230_.v231) {
      goto LABEL_328;
    }
    v213 = v230_.v231;
    do {
      v214 = *(v213 - 32);
      v213 -= 32;
      if ((v214 & 1) != 0) {
        v215 = *((_QWORD*)v212 - 2);
        if (v215 != 0) {
          if (*(_QWORD*)(*v51 + 200) != 0) {
            v216 = 128;
          }
          else {
            v216 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v51 + v216, v215);
        }
      }
      v212 = v213;
    } while (v213 != v211);
    v230_.v231 = v211;
    v211 = v230_.v230;
    if (v230_.v230 != nullptr) {
    LABEL_328:
      v217 = 128;
      if (*(_QWORD*)(*v51 + 200) == 0) {
        v217 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v51 + v217, (__int64)v211);
    }
  }
  v36 = v237_.v238;
  if (v237_.v238 != 0) {
    v218 = v237_.v239;
    if (v237_.v238 != v237_.v239) {
      do {
        v220 = *(_QWORD*)(v218 - 24);
        if (v220 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v220);
        }
        v218 -= 48;
      } while (v218 != v36);
    }
    v38 = *v51;
  LABEL_334:
    v219 = 128;
    if (*(_QWORD*)(v38 + 200) == 0) {
      v219 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v38 + v219, v36);
  }
}

void ProcUnitInfoFull_16165a0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  __int64 v22;
  float v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _QWORD v39[2];
  struct {
    __int64 v40;
    __int64 v41;
  } v40_;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
  v3 = *(_QWORD*)(a1 + 856);
  v39[0] = "L_OverBlaze";
  v39[1] = 11;
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v3),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v5 != 0) {
      v6 = *(_QWORD*)(a1 + 848);
      v7 = v5;
      if (v6 != 0) {
        GameRoutine_15b71b0((void*)(&v40_.v40), v6, (__int64)v39),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v7),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      if (v6 != 0 && v40_.v41 != 0) {
        v8 = std___1___shared_weak_count_lock_alt1(v40_.v41),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
        v9 = v40_.v40;
        if (v40_.v41 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v40_.v41),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
        if (v8 != 0 && v9 != 0) {
          ui_control_1886790((_QWORD*)v9),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          v11 = *(_QWORD*)(a2 + 16);
          v12 = *(_QWORD*)(a2 + 24);
          if (v11 != v12) {
            v13 = v10;
            v14 = 0;
            v15 = 0x1.fffffe0000000p+127f;
            while (1) {
              v17 = *(_QWORD*)(v11 + 24);
              if (v17 != 0 &&
                  (v18 = std___1___shared_weak_count_lock_alt1(v17)) != 0) {
                v19 = v18;
                ui_control_1886790(*(_QWORD**)(v11 + 16)),
                    v10 = COERCE_AS(__typeof__(v10),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                v21 = v20;
                if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
                      v10 = COERCE_AS(__typeof__(v10),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  std___1___shared_weak_count___release_weak_alt1(v19),
                      v10 = COERCE_AS(__typeof__(v10),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                }
                v22 = *(_QWORD*)(v11 + 24);
                if (v22 == 0) {
                LABEL_31:
                  if (((*(unsigned __int8*)0x370LL) & 1) != 0) {
                    v28 = (*(_QWORD*)0x378LL);
                  }
                  else {
                    v28 = (unsigned __int64)(*(unsigned __int8*)0x370LL) >> 1;
                  }
                  goto LABEL_34;
                }
              }
              else {
                ui_control_1886790(nullptr),
                    v10 = COERCE_AS(__typeof__(v10),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                v21 = v23;
                v22 = *(_QWORD*)(v11 + 24);
                if (v22 == 0) {
                  goto LABEL_31;
                }
              }
              v24 = std___1___shared_weak_count_lock_alt1(v22),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w"));
              if (v24 == 0) {
                goto LABEL_31;
              }
              v25 = *(_QWORD*)(v11 + 16);
              v26 = *(unsigned __int8*)(v25 + 880);
              v27 = *(_QWORD*)(v25 + 888);
              if ((v26 & 1) != 0) {
                v28 = v27;
              }
              else {
                v28 = v26 >> 1;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v29 = v24;
                (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
                    v10 = COERCE_AS(__typeof__(v10),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                std___1___shared_weak_count___release_weak_alt1(v29),
                    v10 = COERCE_AS(__typeof__(v10),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
              }
            LABEL_34:
              if (v28 == 0 || (float)(v21 + 0x1.e000000000000p+5f) > v13) {
                v31 =
                    std___1___shared_weak_count_lock_alt1(*(_QWORD*)(v11 + 24)),
                v10 = COERCE_AS(__typeof__(v10),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(float, "s1", "=w"));
                v32 = *(_QWORD*)(v11 + 16);
                v33 = *(unsigned __int8*)(v32 + 880);
                v34 = *(_QWORD*)(v32 + 888);
                if ((v33 & 1) == 0) {
                  v34 = v33 >> 1;
                }
                if (v34 != 0) {
                  if ((v33 & 1) == 0) {
                    *(_BYTE*)(v32 + 881) = 0;
                    goto LABEL_45;
                  }
                  **(_BYTE**)(v32 + 896) = 0;
                  *(_QWORD*)(v32 + 888) = 0;
                  LOBYTE(v33) = *(_BYTE*)(v32 + 880);
                }
                if ((v33 & 1) != 0) {
                  *(_QWORD*)(v32 + 888) = 11;
                  v35 = *(char**)(v32 + 896);
                }
                else {
                LABEL_45:
                  *(_BYTE*)(v32 + 880) = 22;
                  v35 = (char*)(v32 + 881);
                }
                strcpy(v35, "L_OverBlaze");
                if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v36 = v31;
                  (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
                      v10 = COERCE_AS(__typeof__(v10),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  std___1___shared_weak_count___release_weak_alt1(v36),
                      v10 = COERCE_AS(__typeof__(v10),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                }
                v16 = vabds_f32(v21, v13);
                if (v16 < v15) {
                  v15 = v16;
                  v14 = v11;
                }
              }
              v11 += 48;
              if (v11 == v12) {
                if (v14 != 0) {
                  v37 = *(unsigned __int8*)(v9 + 904);
                  if (*(_QWORD*)(v14 + 8) != 0) {
                    v38 = *(_QWORD*)(v9 + 912);
                    if ((v37 & 1) == 0) {
                      v38 = v37 >> 1;
                    }
                    if (v38 != 0) {
                      if ((v37 & 1) != 0) {
                        **(_BYTE**)(v9 + 920) = 0;
                        *(_QWORD*)(v9 + 912) = 0;
                      }
                      else {
                        *(_WORD*)(v9 + 904) = 0;
                      }
                    }
                    GameRoutine_60a060((char*)(v9 + 904), *(_QWORD*)v14,
                                       *(_QWORD*)(v14 + 8)),
                        v10 = COERCE_AS(__typeof__(v10),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                  else if ((v37 & 1) != 0) {
                    **(_BYTE**)(v9 + 920) = 0;
                    *(_QWORD*)(v9 + 912) = 0;
                  }
                  else {
                    *(_WORD*)(v9 + 904) = 0;
                  }
                }
                goto LABEL_61;
              }
            }
          }
        }
        else {
        LABEL_61:
          if (v8 == 0) {
            return;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v8),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
      }
    }
  }
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcUnitInfoFull_UpdateCursorRoute_closure_Invoke(
    PSEUDO_X8 x8_, __int64 a1, __int64 a2, unsigned int* a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  {
    GameRoutine_1616a00(a4, *(_QWORD*)(a1 + 8), a2, *a3);
    return;
  }
}

void ProcUnitInfoFull_1616a00(const char** a1, __int64 a2, _QWORD* a3, int a4)
{
  __int64 v4;
  unsigned __int64 v5;
  int v9;
  int v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  _BOOL4 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  const char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  const char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD v42[2];
  _QWORD v43[2];
  struct {
    __int64* v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
  } v44_;
  struct {
    const char* v48;
    __int64 v49;
  } v48_;

  v4 = *(_QWORD*)(a2 + 1088);
  v5 = *(int*)(a2 + 1076);
  if (v5 < (*(_QWORD*)(a2 + 1096) - v4) >> 2) {
    v5 = *(int*)(v4 + 4 * v5);
  }
  v9 = *(_DWORD*)(*(_QWORD*)(a2 + 1200) + 4 * v5);
  if (v9 != 0) {
    if (a4 != 2 || v9 != 2) {
      goto LABEL_80;
    }
    v10 = *(_DWORD*)(a2 + 2192);
    if (v10 != 1) {
      if (v10 == 2 && ((ProcUnitInfoFull_16171e0(
                            a2, a3, "L_Page02/L_LegionInfo/L_MenuItem_Name") &
                        1) != 0 ||
                       (ProcUnitInfoFull_16171e0(
                            a2, a3, "L_Page02/L_LegionInfo/L_MenuItem_Gambit") &
                        1) != 0)) {
      LABEL_41:
        v11 = *(_QWORD*)(a2 + 856);
        v48_.v48 = "L_OverBlaze";
        v48_.v49 = 11;
        if (v11 != 0) {
          goto LABEL_42;
        }
      }
    LABEL_80:
      *a1 = nullptr;
      a1[1] = nullptr;
      return;
    }
    if (*(_BYTE*)(a2 + 2196) == 1) {
      if ((ProcUnitInfoFull_16171e0(a2, a3,
                                    "L_Page02/L_Animal/L_MenuItem_Attack00") &
           1) != 0 ||
          (ProcUnitInfoFull_16171e0(a2, a3,
                                    "L_Page02/L_Animal/L_MenuItem_Attack01") &
           1) != 0) {
        goto LABEL_41;
      }
      v12 = "L_Page02/L_Animal/L_MenuItem_Morph";
    }
    else {
      if ((ProcUnitInfoFull_16171e0(a2, a3,
                                    "L_Page02/L_Animal/L_MenuItem_Name") &
           1) != 0) {
        goto LABEL_41;
      }
      v12 = "L_Page02/L_Animal/L_MenuItem_Skill";
    }
    if ((ProcUnitInfoFull_16171e0(a2, a3, v12) & 1) == 0) {
      goto LABEL_80;
    }
    goto LABEL_41;
  }
  if (a4 != 3) {
    if (a4 != 0) {
      goto LABEL_80;
    }
    if ((ProcUnitInfoFull_16171e0(a2, a3,
                                  "L_Page00/L_BattleStatus/L_Status00") &
         1) == 0 &&
        (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_GrowthRate/L_Status00") &
         1) == 0) {
      if ((ProcUnitInfoFull_16171e0(a2, a3,
                                    "L_Page00/L_BasicStatus/L_Status00") &
           1) != 0) {
        if (*(_BYTE*)(a2 + 1984) == 1) {
          v23 = "L_Page00/L_GrowthRate/L_Status04";
          v24 = 32;
        }
        else {
          v23 = "L_Page00/L_BattleStatus/L_Status04";
          v24 = 34;
        }
        v48_.v48 = v23;
        v48_.v49 = v24;
        game_16073d0((void*)((__int64*)&v44_.v44), (__int64*)(a2 + 848));
      LABEL_48:
        v21 = v44_.v45;
        *a1 = nullptr;
        a1[1] = nullptr;
        if (v21 != 0) {
          v22 = std___1___shared_weak_count_lock_alt1(v21);
          a1[1] = (const char*)v22;
          if (v22 != 0) {
            *a1 = (const char*)v44_.v44;
          }
          if (v44_.v45 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v44_.v45);
          }
        }
        return;
      }
      goto LABEL_80;
    }
    v11 = *(_QWORD*)(a2 + 856);
    v48_.v48 = "L_Move";
    v48_.v49 = 6;
    if (v11 == 0) {
      goto LABEL_80;
    }
  LABEL_42:
    v18 = std___1___shared_weak_count_lock_alt1(v11);
    if (v18 == 0) {
      goto LABEL_80;
    }
    v19 = *(_QWORD*)(a2 + 848);
    v20 = v18;
    if (v19 != 0) {
      GameRoutine_15b71b0((void*)((__int64*)&v44_.v44), v19,
                          (__int64)&v48_.v48);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak_alt1(v20);
    }
    if (v19 == 0) {
      goto LABEL_80;
    }
    goto LABEL_48;
  }
  if ((ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BasicStatus/L_TotalNum") &
       1) != 0) {
    v11 = *(_QWORD*)(a2 + 856);
    v48_.v48 = "L_Page00/L_MasteryInfo/L_MasteryInfoItem06";
    v48_.v49 = 42;
    if (v11 == 0) {
      goto LABEL_80;
    }
    goto LABEL_42;
  }
  if ((ProcUnitInfoFull_16171e0(a2, a3, "L_OverBlaze") & 1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BattleStatus/L_Status05") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BattleStatus/L_Status06") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BattleStatus/L_Status07") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BattleStatus/L_Status08") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_GrowthRate/L_Status05") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_GrowthRate/L_Status06") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_GrowthRate/L_Status07") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_GrowthRate/L_Status08") &
       1) != 0) {
    v44_.v46 = 0;
    v44_.v47 = 0;
    v44_.v44 = (__int64*)(a2 + 848);
    v44_.v45 = 0;
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Equip",
                             16);
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Item00",
                             17);
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Item01",
                             17);
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Item02",
                             17);
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Item03",
                             17);
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Item04",
                             17);
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Item05",
                             17);
    ProcUnitInfoFull_16172f0(
        (__int64)&v44_.v44,
        (__int64)"L_Page00/L_MasteryInfo/L_MasteryInfoItem00", 42);
    v13 = a3[1];
    v43[0] = *a3;
    v43[1] = v13;
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                memory_order_relaxed);
    }
    ProcUnitInfoFull_1617540(&v48_.v48, (__int64)&v44_.v44, (__int64)v43);
    v14 = v48_.v49;
    *a1 = nullptr;
    a1[1] = nullptr;
    if (v14 != 0) {
      v15 = std___1___shared_weak_count_lock_alt1(v14);
      a1[1] = (const char*)v15;
      if (v15 != 0) {
        v16 = v48_.v48;
        *a1 = v48_.v48;
        v17 = v16 == nullptr;
      }
      else {
        v17 = true;
      }
      std___1___shared_weak_count___release_weak_alt1(v14);
    }
    else {
      v15 = 0;
      v17 = true;
    }
    if (v13 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v13);
    }
    if (!v17) {
      v34 = v44_.v45;
      if (v44_.v45 == 0) {
        return;
      }
      v35 = v44_.v46;
      if (v44_.v45 != v44_.v46) {
        do {
          v36 = *(_QWORD*)(v35 - 8);
          if (v36 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v36);
          }
          v35 -= 16;
        } while (v35 != v34);
      }
      goto LABEL_98;
    }
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt1(v15);
    }
    v25 = v44_.v45;
    if (v44_.v45 != 0) {
      v26 = v44_.v46;
      if (v44_.v45 != v44_.v46) {
        do {
          v33 = *(_QWORD*)(v26 - 8);
          if (v33 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v33);
          }
          v26 -= 16;
        } while (v26 != v25);
      }
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v25);
    }
  }
  if ((ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BasicStatus/L_Status05") &
       1) == 0 &&
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BasicStatus/L_Status06") &
       1) == 0 &&
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BasicStatus/L_Status07") &
       1) == 0) {
    goto LABEL_80;
  }
  v28 = (__int64*)(a2 + 848);
  v44_.v46 = 0;
  v44_.v47 = 0;
  v44_.v44 = v28;
  v44_.v45 = 0;
  ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Blood00",
                           18);
  ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Blood01",
                           18);
  ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Blood02",
                           18);
  v29 = a3[1];
  v42[0] = *a3;
  v42[1] = v29;
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                              memory_order_relaxed);
  }
  ProcUnitInfoFull_1617540(&v48_.v48, (__int64)&v44_.v44, (__int64)v42);
  v30 = v48_.v49;
  if (v48_.v49 != 0) {
    v31 = std___1___shared_weak_count_lock_alt1(v48_.v49);
    if (v31 != 0) {
      v32 = v48_.v48;
    }
    else {
      v32 = nullptr;
    }
    std___1___shared_weak_count___release_weak_alt1(v30);
  }
  else {
    v32 = nullptr;
    v31 = 0;
  }
  if (v29 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v29);
  }
  if (v32 != nullptr) {
    *a1 = v32;
    a1[1] = (const char*)v31;
  }
  else {
    game_16073d0((void*)((__int64*)&v48_.v48), v28);
    v40 = v48_.v49;
    *a1 = nullptr;
    a1[1] = nullptr;
    if (v40 != 0) {
      v41 = std___1___shared_weak_count_lock_alt1(v40);
      a1[1] = (const char*)v41;
      if (v41 != 0) {
        *a1 = v48_.v48;
      }
      if (v48_.v49 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v48_.v49);
      }
    }
    if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak_alt1(v31);
    }
  }
  v34 = v44_.v45;
  if (v44_.v45 != 0) {
    v37 = v44_.v46;
    if (v44_.v45 != v44_.v46) {
      do {
        v39 = *(_QWORD*)(v37 - 8);
        if (v39 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v39);
        }
        v37 -= 16;
      } while (v37 != v34);
    }
  LABEL_98:
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v34);
  }
}

__int64 ProcUnitInfoFull_16171e0(__int64 a1, _QWORD* a2, const char* a3)
{
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  unsigned int v12;
  _QWORD v13[2];
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;

  v13[0] = a3;
  v13[1] = strlen_alt1(a3);
  v5 = *(_QWORD*)(a1 + 856);
  if (v5 == 0) {
    return 0;
  }
  v6 = std___1___shared_weak_count_lock_alt1(v5);
  if (v6 == 0) {
    return 0;
  }
  v7 = *(_QWORD*)(a1 + 848);
  v8 = v6;
  if (v7 != 0) {
    GameRoutine_15b71b0((void*)(&v14_.v14), v7, (__int64)v13);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 == 0) {
      return 0;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
    if (v7 == 0) {
      return 0;
    }
  }
  if (v14_.v15 == 0) {
    return 0;
  }
  v9 = std___1___shared_weak_count_lock_alt1(v14_.v15);
  if (v9 != 0) {
    v10 = v14_.v14;
  }
  else {
    v10 = 0;
  }
  if (v14_.v15 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v14_.v15);
  }
  result = *a2 == v10;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v12 = result;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
    result = v12;
  }
  if (v10 == 0) {
    return 0;
  }
  return result;
}

__int64 ProcUnitInfoFull_16172f0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64* v3;
  __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  signed __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[2];
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;
  _QWORD v31[2];

  v3 = *(unsigned __int64**)a1;
  v31[0] = a2;
  v31[1] = a3;
  result = v3[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v6 = *v3;
      v7 = result;
      if (v6 != 0) {
        result = X8CALL_X0(
            __int64, GameRoutine_15b71b0((void*)(&v29_.v29), v6, (__int64)v31));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v6 == 0) {
          return result;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        result = std___1___shared_weak_count___release_weak_alt1(v7);
        if (v6 == 0) {
          return result;
        }
      }
      result = v29_.v30;
      if (v29_.v30 != 0) {
        if (*(_QWORD*)(v29_.v30 + 8) != -1) {
          v28[0] = 0;
          v8 = std___1___shared_weak_count_lock_alt1(v29_.v30);
          v28[1] = v8;
          if (v8 != 0) {
            v9 = v8;
            v28[0] = v29_.v29;
            v10 = FloatingHelp_18ade60(v28);
            if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
              std___1___shared_weak_count___release_weak_alt1(v9);
            }
            if ((v10 & 1) == 0) {
              goto LABEL_35;
            }
            goto LABEL_17;
          }
          if ((FloatingHelp_18ade60(v28) & 1) != 0) {
          LABEL_17:
            v11 = *(_QWORD**)(a1 + 16);
            v12 = *(_QWORD*)(a1 + 24);
            if ((unsigned __int64)v11 >= v12) {
              v15 = *(_QWORD*)(a1 + 8);
              v16 = (signed __int64)v11 - v15;
              v17 = ((__int64)v11 - v15) >> 4;
              v18 = v17 + 1;
              if ((unsigned __int64)(v17 + 1) >> 60 != 0) {
                GameRoutine_16176c0();
              }
              v19 = v12 - v15;
              if (v19 >> 3 > v18) {
                v18 = v19 >> 3;
              }
              if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF0LL) {
                v20 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v20 = v18;
              }
              if (v20 >> 60 != 0) {
                GameRoutine_60a210_alt1();
              }
              v21 = fw_memory_g_heap_manager_ptr;
              v22 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v20, 16, 0);
              v23 = v29_.v30;
              v24 = (_QWORD*)(v22 + v16);
              v25 = v22 + 16 * v20;
              *v24 = v29_.v29;
              v24[1] = v23;
              if (v23 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16),
                                          1u, memory_order_relaxed);
                v15 = *(_QWORD*)(a1 + 8);
                v16 = *(_QWORD*)(a1 + 16) - v15;
                v17 = v16 >> 4;
              }
              v26 = (__int64)&v24[-2 * v17];
              v14 = v24 + 2;
              memcpy_alt1(v26, v15, v16);
              *(_QWORD*)(a1 + 8) = v26;
              *(_QWORD*)(a1 + 16) = v14;
              *(_QWORD*)(a1 + 24) = v25;
              if (v15 != 0) {
                v27 = 128;
                if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
                  v27 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v21 + v27, v15);
              }
            }
            else {
              *v11 = v29_.v29;
              v13 = v29_.v30;
              v11[1] = v29_.v30;
              if (v13 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16),
                                          1u, memory_order_relaxed);
              }
              v14 = v11 + 2;
            }
            *(_QWORD*)(a1 + 16) = v14;
          }
        }
      LABEL_35:
        result = v29_.v30;
        if (v29_.v30 != 0) {
          return std___1___shared_weak_count___release_weak_alt1(v29_.v30);
        }
      }
    }
  }
  return result;
}

_QWORD* ProcUnitInfoFull_1617540(_QWORD* result, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  float v12;
  float v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  __int64 v20;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  v3 = *(_QWORD*)(a2 + 8);
  v4 = *(_QWORD*)(a2 + 16);
  *result = 0;
  result[1] = 0;
  if (v3 != v4) {
    v5 = result;
    result = *(_QWORD**)(a3 + 8);
    if (result != nullptr) {
      result = (_QWORD*)std___1___shared_weak_count_lock_alt1((__int64)result),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
      if (result != nullptr) {
        v8 = (__int64)result;
        result = *(_QWORD**)a3;
        if (*(_QWORD*)a3 != 0) {
          result = ui_control_1886790(result),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
          v10 = *(_QWORD*)(a2 + 8);
          v11 = *(_QWORD*)(a2 + 16);
          if (v10 != v11) {
            v12 = v9;
            v13 = 0x1.fffffe0000000p+127f;
            do {
              v15 = *(_QWORD**)v10;
              v14 = *(_QWORD*)(v10 + 8);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                        memory_order_relaxed);
              v16 = std___1___shared_weak_count_lock_alt1(v14),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v9 =
                  COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
              ui_control_1886790(v15),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v9 = COERCE_AS(__typeof__(v9),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
              v18 = v17;
              if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v9 = COERCE_AS(__typeof__(v9),
                                   PSEUDO_REGISTER(float, "s1", "=w"));
                std___1___shared_weak_count___release_weak_alt1(v16),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v9 = COERCE_AS(__typeof__(v9),
                                   PSEUDO_REGISTER(float, "s1", "=w"));
              }
              v19 = vabds_f32(v12, v18);
              if (v19 < v13) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16),
                                          1u, memory_order_relaxed);
                v20 = v5[1];
                *v5 = v15;
                v5[1] = v14;
                if (v20 != 0) {
                  std___1___shared_weak_count___release_weak_alt1(v20),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v9 = COERCE_AS(__typeof__(v9),
                                     PSEUDO_REGISTER(float, "s1", "=w"));
                }
                v13 = v19;
              }
              result =
                  (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v14),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v9 =
                  COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
              v10 += 16;
            } while (v10 != v11);
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v9 =
                  COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
          return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v8);
        }
      }
    }
  }
  return result;
}

__int64 ProcUnitInfoFull_1617700(__int64 a1, const char* a2, int* a3, int* a4)
{
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v19;
    unsigned __int64 v20;
    char* v21;
  } v19_;

  v8 = strlen_alt1(a2);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt2();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v11, 16, 0);
    v19_.v20 = v9;
    v19_.v21 = v10;
    v19_.v19 = v11 | 1;
    goto LABEL_9;
  }
  LOBYTE(v19_.v19) = 2 * v8;
  v10 = (char*)&v19_.v19 + 1;
  if (v8 != 0) {
  LABEL_9:
    memcpy_alt1((__int64)v10, (__int64)a2, v9);
  }
  v10[v9] = 0;
  v12 = *a3;
  v13 = *a4;
  if ((v19_.v19 & 1) != 0) {
    v16 = (__int64)v19_.v21;
    fw_text_String_CopyTerminated((__int64*)a1, (__int64)v19_.v21, v19_.v20);
    *(_DWORD*)(a1 + 24) = v12;
    *(_DWORD*)(a1 + 28) = v13;
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  else {
    v14 = v19_.v19;
    v15 = v19_.v20;
    *(_DWORD*)(a1 + 24) = v12;
    *(_DWORD*)(a1 + 28) = v13;
    *(_QWORD*)a1 = v14;
    *(_QWORD*)(a1 + 8) = v15;
    *(_QWORD*)(a1 + 16) = v19_.v21;
  }
  return a1;
}

__int64 ProcUnitInfoFull_1617860(__int64** a1, __int64 a2, __int64 a3,
                                 __int64 a4)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  _QWORD* v19;
  __int64* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v4 = (char*)a1[1] - (char*)*a1;
  v5 = (v4 >> 5) + 1;
  if (v5 >> 59 != 0) {
    GameRoutine_16176e0();
  }
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = (char*)a1[2] - (char*)*a1;
  if (v8 >> 4 > v5) {
    v5 = v8 >> 4;
  }
  if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFE0LL) {
    v9 = 0x7FFFFFFFFFFFFFFLL;
  }
  else {
    v9 = v5;
  }
  if (v9 != 0) {
    if (v9 >> 59 != 0) {
      GameRoutine_60a210(a1);
    }
    v10 = a2;
    v11 = a3;
    v12 = a4;
    v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32 * v9, 16, 0);
    a4 = v12;
    a3 = v11;
    a2 = v10;
  }
  else {
    v13 = 0;
  }
  v14 = v13 + v4;
  v15 = v13 + 32 * v9;
  GameRoutine_1617a20(v13 + v4, a2, a3, a4);
  v16 = *a1;
  v17 = a1[1];
  v18 = v14 + 32;
  v19 = (_QWORD*)(v14 + (char*)*a1 - (char*)v17);
  if (v17 != *a1) {
    v20 = *a1;
    v21 = v19;
    do {
      v22 = *v20;
      v23 = v20[2];
      v21[1] = v20[1];
      v21[2] = v23;
      *v21 = v22;
      v20[1] = 0;
      v20[2] = 0;
      *v20 = 0;
      v24 = v20[3];
      v20 += 4;
      v21[3] = v24;
      v21 += 4;
    } while (v20 != v17);
    do {
      if ((*(_BYTE*)v16 & 1) != 0) {
        v25 = v16[2];
        if (v25 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v26 = 128;
          }
          else {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v26, v25);
        }
      }
      v16 += 4;
    } while (v16 != v17);
    v16 = *a1;
  }
  *a1 = v19;
  a1[1] = (__int64*)v18;
  a1[2] = (__int64*)v15;
  if (v16 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v27, v16);
  }
  return v18;
}

__int64 ProcUnitInfoFull_1617a20(__int64 a1, const char* a2, int* a3, int* a4)
{
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v19;
    unsigned __int64 v20;
    char* v21;
  } v19_;

  v8 = strlen_alt1(a2);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt2();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v11, 16, 0);
    v19_.v20 = v9;
    v19_.v21 = v10;
    v19_.v19 = v11 | 1;
    goto LABEL_9;
  }
  LOBYTE(v19_.v19) = 2 * v8;
  v10 = (char*)&v19_.v19 + 1;
  if (v8 != 0) {
  LABEL_9:
    memcpy_alt1((__int64)v10, (__int64)a2, v9);
  }
  v10[v9] = 0;
  v12 = *a3;
  v13 = *a4;
  if ((v19_.v19 & 1) != 0) {
    v16 = (__int64)v19_.v21;
    fw_text_String_CopyTerminated((__int64*)a1, (__int64)v19_.v21, v19_.v20);
    *(_DWORD*)(a1 + 24) = v12;
    *(_DWORD*)(a1 + 28) = v13;
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  else {
    v14 = v19_.v19;
    v15 = v19_.v20;
    *(_DWORD*)(a1 + 24) = v12;
    *(_DWORD*)(a1 + 28) = v13;
    *(_QWORD*)a1 = v14;
    *(_QWORD*)(a1 + 8) = v15;
    *(_QWORD*)(a1 + 16) = v19_.v21;
  }
  return a1;
}

__int64 ProcUnitInfoFull_1617b80(__int64* a1, const char* a2, int* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  const char* v9;
  int* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v3 = a1[1] - *a1;
  v4 = (v3 >> 5) + 1;
  if (v4 >> 59 != 0) {
    GameRoutine_16176e0_alt1();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = a1[2] - *a1;
  if (v7 >> 4 > v4) {
    v4 = v7 >> 4;
  }
  if ((unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFE0LL) {
    v8 = 0x7FFFFFFFFFFFFFFLL;
  }
  else {
    v8 = v4;
  }
  if (v8 != 0) {
    if (v8 >> 59 != 0) {
      GameRoutine_60a210_alt1();
    }
    v9 = a2;
    v10 = a3;
    v11 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v8, 16, 0);
    a3 = v10;
    a2 = v9;
  }
  else {
    v11 = 0;
  }
  v12 = v11 + v3;
  v13 = v11 + 32 * v8;
  ProcUnitInfoFull_1617d40(v11 + v3, a2, a3);
  v14 = *a1;
  v15 = (__int64*)a1[1];
  v16 = v12 + 32;
  v17 = (_QWORD*)(v12 + *a1 - (_QWORD)v15);
  if (v15 != (__int64*)*a1) {
    v18 = (__int64*)*a1;
    v19 = v17;
    do {
      v20 = *v18;
      v21 = v18[2];
      v19[1] = v18[1];
      v19[2] = v21;
      *v19 = v20;
      v18[1] = 0;
      v18[2] = 0;
      *v18 = 0;
      v22 = v18[3];
      v18 += 4;
      v19[3] = v22;
      v19 += 4;
    } while (v18 != v15);
    do {
      if ((*(_BYTE*)v14 & 1) != 0) {
        v23 = *(_QWORD*)(v14 + 16);
        if (v23 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v24, v23);
        }
      }
      v14 += 32;
    } while ((__int64*)v14 != v15);
    v14 = *a1;
  }
  *a1 = (__int64)v17;
  a1[1] = v16;
  a1[2] = v13;
  if (v14 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v25, v14);
  }
  return v16;
}

__int64 ProcUnitInfoFull_1617d40(__int64 a1, const char* a2, int* a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v15;
    unsigned __int64 v16;
    char* v17;
  } v15_;

  v6 = strlen_alt1(a2);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt2();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v9, 16, 0);
    v15_.v16 = v7;
    v15_.v17 = v8;
    v15_.v15 = v9 | 1;
    goto LABEL_9;
  }
  LOBYTE(v15_.v15) = 2 * v6;
  v8 = (char*)&v15_.v15 + 1;
  if (v6 != 0) {
  LABEL_9:
    memcpy_alt1((__int64)v8, (__int64)a2, v7);
  }
  v8[v7] = 0;
  v10 = *a3;
  if ((v15_.v15 & 1) != 0) {
    v12 = (__int64)v15_.v17;
    fw_text_String_CopyTerminated((__int64*)a1, (__int64)v15_.v17, v15_.v16);
    *(_DWORD*)(a1 + 24) = v10;
    *(_DWORD*)(a1 + 28) = -1;
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
    }
  }
  else {
    v11 = v15_.v16;
    *(_QWORD*)a1 = v15_.v15;
    *(_QWORD*)(a1 + 8) = v11;
    *(_QWORD*)(a1 + 16) = v15_.v17;
    *(_DWORD*)(a1 + 24) = v10;
    *(_DWORD*)(a1 + 28) = -1;
  }
  return a1;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcUnitInfoFull_OnOpened_closure_Invoke(PSEUDO_X8 x8_,
                                                             __int64 a1,
                                                             _QWORD* a2,
                                                             int* a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  {
    GameRoutine_1616a00_alt1(a4, *(_QWORD*)(a1 + 8), a2, *a3);
    return;
  }
}

__int64 game_menu_anonymous_ProcUnitInfoFull_LCall_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[2];

  v2 = *a2;
  v6[0] = v2;
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 392);
  }
  else {
    v3 = 0;
  }
  v6[1] = v3;
  if ((unsigned int)GameRoutine_906c90(game_GameModeData_instance_ + 136, v6) !=
      0) {
    return 0;
  }
  v5 = *(_QWORD*)(v2 + 392);
  if (v5 == 0) {
    return 0;
  }
  result = *(_QWORD*)(v5 + 288);
  if (result != 0) {
    return GameRoutine_975940(result) != 0;
  }
  return result;
}

__int64 game_menu_anonymous_ProcUnitInfoFull_RCall_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[2];

  v2 = *a2;
  v6[0] = v2;
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 392);
  }
  else {
    v3 = 0;
  }
  v6[1] = v3;
  if ((unsigned int)GameRoutine_906c90(game_GameModeData_instance_ + 136, v6) !=
      0) {
    return 0;
  }
  v5 = *(_QWORD*)(v2 + 392);
  if (v5 == 0) {
    return 0;
  }
  result = *(_QWORD*)(v5 + 288);
  if (result != 0) {
    return GameRoutine_975940(result) != 0;
  }
  return result;
}

#pragma GCC visibility pop
