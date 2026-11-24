#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
_QWORD* GameRoutine_81e220(__int64*, _QWORD*);
_QWORD* GameRoutine_cfad30(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1573280(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__int64* GameRoutine_18d0ec0(_QWORD*, unsigned __int8*);
__int64* game_UnitPool_Get(_BYTE*);
__int64 AIThink_1207c40(__int64, int, int, unsigned int, unsigned int);
__int64 BaseNx_278c70(__int64, __int64);
__int64 BaseNx_2ae880(__int64*);
__int64 BattleInfo_796f20(__int64 result, __int64);
__int64 CharacterModel_cf4780(__int64);
__int64 CmdBtlSkipInput_1006910(__int64 result);
__int64 CombatSequenceImpl_10d5500();
__int64 CombatSequenceImpl_10d5530();
__int64 CombatSequenceImpl_10d5570();
__int64 CombatSequenceImpl_10d5610();
__int64 CombatSequenceImpl_10d5690();
__int64 CombatSequenceImpl_10d5820();
__int64 CombatSequenceImpl_10d58c0();
__int64 CombatSequenceImpl_10d59f0();
__int64 CombatSequenceImpl_10d5ea0();
__int64 CombatSequenceImpl_10d6170();
__int64 CombatSequenceImpl_10d6360();
__int64 CombatSequenceImpl_10d64b0();
__int64 CombatSequenceImpl_10d6630();
__int64 GameConverge_8ea270(__int64, unsigned int, __int64);
__int64 GameHr_10784f0(__int64, int, __int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_19ae900(__int64 result, int);
__int64 GameHr_29ecc0(_QWORD*, int, __int64*, __int64, __int64);
__int64 GameHr_2ae3e0(_QWORD*, int, _BYTE*, __int64);
__int64 GameHr_6c47b0(__int64, _BYTE*, char, char);
__int64 GameHr_eacc20(__int64, unsigned int, unsigned int, unsigned int);
__int64 GameRoutine_106b7b0(_QWORD*);
__int64 GameRoutine_109d160(_QWORD*, __int64);
__int64 GameRoutine_10d5560();
__int64 GameRoutine_10d55f0();
__int64 GameRoutine_10d6490();
__int64 GameRoutine_11d0d00(__int64, char);
__int64 GameRoutine_11d0dc0(__int64);
__int64 GameRoutine_11d0e50(__int64);
__int64 GameRoutine_120f3d0(__int64 result);
__int64 GameRoutine_181ab60(__int64 result);
__int64 GameRoutine_27e290(__int64 result);
__int64 GameRoutine_2adfb0(__int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_6c3980(__int64 result, __int64);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_8f31e0(_QWORD*, unsigned __int64*);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 GameRoutine_e18130(__int64 result);
__int64 Impl_13261c0(__int64);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 MapUtil_753bb0(__int64 result);
__int64 ProcCmdBtlSeqBattle_e6b430(__int64);
__int64 ProcGameUIFade_15e1b80(__int64 result, unsigned int, unsigned int,
                               unsigned int, __int64);
__int64 RidePool_93cd60(_QWORD*, __int64);
__int64 RidePool_93e320(__int64, __int64, __int64, unsigned int, _DWORD*);
__int64 RidePool_93e660(_QWORD*, _BYTE*);
__int64 Seq_11cffe0(__int64, float, float, float);
__int64 SequenceNoteOnCallback_292500(__int64, int, _QWORD*, __int64);
__int64 SequenceNoteOnCallback_292580(__int64 result, __int64*, __int64);
__int64 SequenceSoundRuntime_291e40(__int64, int, int, _BYTE*, __int64);
__int64 SideStoryFile_12ae4c0(unsigned __int8);
__int64 SoundArchivePlayer_279ee0(__int64, __int64, _WORD*, __int64);
__int64 SoundArchivePlayer_27ea20(__int64 result, __int64*, __int64);
__int64 SoundArchivePlayer_29f660(__int64 result, __int64*, __int64);
__int64 SoundArchivePlayer_2aea40(__int64 result, __int64*, __int64);
__int64 SoundThread_2a1f40(__int64, __int64);
__int64 TargetEnumerator_77c150(__int64 result, __int64*, int, int);
__int64 TargetEnumerator_77e300(__int64, _WORD*, __int64);
__int64 UnitActor_81e020(__int64 result, __int64*);
__int64 UnitItemList_710ea0(__int64 result);
__int64 Unit_6c9ef0(__int64);
__int64 Unit_6cb490(__int64);
__int64 WaitRelease_cfa2a0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_809ba0(__int64, float);
__int64 game_932d40(unsigned __int8*);
__int64 game_AIThink_ToBreak(__int64 (**)(), int, int);
__int64 game_AIThink_ToDestroyImpl(_QWORD*, int, int, __int64 (**)());
__int64 game_GameConverge_Impl_TryJoin_closure0_Invoke(__int64, __int64*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_UnitActor_FuncBuildCompleteSubscribe(_QWORD*, _QWORD*);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_SetPollution(__int64, int);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_combat_CombatSequenceImpl_DieTalkOrNothing();
__int64 game_combat_CombatUniverse_Setup(__int64, __int64*);
__int64 game_cutscene_181acc0(__int64 result);
__int64 game_gameui_19ae1e0(__int64 result);
__int64 game_gmap_13339e0();
__int64 game_zview_cf27d0(__int64, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_SleepThread(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_playAt_ff5f0(__int64, __int64, __int64, float, float, __int64,
                         unsigned int, unsigned int, int);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool AIThink_11fd9e0(__int64, __int64);
bool GameHr_27e5d0(__int64, int, _BYTE*, __int64);
bool GameRoutine_ceede0(__int64, unsigned __int64*, float);
bool game_HasSkill(_QWORD*, _DWORD*);
bool game_Unit_Unknown6c90c0(__int64);
char* CharacterModel_cf5da0(__int64);
const char* GameConst_7f8760(unsigned __int8);
const char* game_HashString32(const char* result);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_1aa5cc9;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN GameData_2235e18;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6160;
extern __int128 GameData_21a6180;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1fabfa0[])();
extern __int64 (*GameData_1fac020[])();
extern __int64 (*GameData_1fd82e0[])();
extern __int64 (*GameData_1fd8330[])();
extern __int64 (*GameData_1fd83b0[])();
extern __int64 (*GameData_1fd8400[])();
extern __int64 (*GameData_200ba78[])();
extern __int64 (*GameData_200bae8[])();
extern __int64 (*GameData_20187e8[])();
extern __int64 (*GameData_2019178[])();
extern __int64 (*GameData_2019208[])();
extern __int64 (*GameData_212c640[2])();
extern __int64 (*GameData_212c648)();
extern __int64 (*game_11f3740_ptr[7])();
extern __int64 (*game_combat_CombatSequenceImpl_vtable[])();
extern __int64* GameData_212c598[2];
extern __int64* GameData_212c628;
extern __int64* GameData_212c780;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c890[3];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d448[9];
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* GameData_2130910[7];
extern __int64 GameData_212c608[2];
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21c99a8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd158;
extern __int64 GameData_21d3f90;
extern __int64 GameData_2203490;
extern __int64 GameData_220b6f0;
extern __int64 GameData_22190c0;
extern __int64 GameData_22357a0;
extern __int64 GameData_22357a8;
extern __int64 GameData_22357b0;
extern __int64 GameData_22357c0;
extern __int64 GameData_22357d0;
extern __int64 GameData_22357e0;
extern __int64 GameData_22357e8;
extern __int64 GameData_22357f0;
extern __int64 GameData_2235800;
extern __int64 GameData_2235810;
extern __int64 GameData_2235820;
extern __int64 GameData_2235828;
extern __int64 GameData_2235840;
extern __int64 GameData_2235850;
extern __int64 GameData_2235860;
extern __int64 GameData_2235868;
extern __int64 GameData_2235870;
extern __int64 GameData_2235880;
extern __int64 GameData_2235890;
extern __int64 GameData_22358a0;
extern __int64 GameData_22358a8;
extern __int64 GameData_22358b0;
extern __int64 GameData_22358c0;
extern __int64 GameData_22358d0;
extern __int64 GameData_22358e0;
extern __int64 GameData_22358e8;
extern __int64 GameData_22358f0;
extern __int64 GameData_2235900;
extern __int64 GameData_2235910;
extern __int64 GameData_2235920;
extern __int64 GameData_2235928;
extern __int64 GameData_2235940;
extern __int64 GameData_2235950;
extern __int64 GameData_2235960;
extern __int64 GameData_2235968;
extern __int64 GameData_2235970;
extern __int64 GameData_2235980;
extern __int64 GameData_2235990;
extern __int64 GameData_22359a0;
extern __int64 GameData_22359a8;
extern __int64 GameData_22359b0;
extern __int64 GameData_22359c0;
extern __int64 GameData_22359d0;
extern __int64 GameData_22359e0;
extern __int64 GameData_22359e8;
extern __int64 GameData_22359f0;
extern __int64 GameData_2235a00;
extern __int64 GameData_2235a10;
extern __int64 GameData_2235a20;
extern __int64 GameData_2235a28;
extern __int64 GameData_2235a30;
extern __int64 GameData_2235a40;
extern __int64 GameData_2235a50;
extern __int64 GameData_2235a60;
extern __int64 GameData_2235a68;
extern __int64 GameData_2235a70;
extern __int64 GameData_2235a80;
extern __int64 GameData_2235a90;
extern __int64 GameData_2235aa0;
extern __int64 GameData_2235aa8;
extern __int64 GameData_2235ab0;
extern __int64 GameData_2235ac0;
extern __int64 GameData_2235ad0;
extern __int64 GameData_2235ae0;
extern __int64 GameData_2235ae8;
extern __int64 GameData_2235af0;
extern __int64 GameData_2235b00;
extern __int64 GameData_2235b10;
extern __int64 GameData_2235b20;
extern __int64 GameData_2235b28;
extern __int64 GameData_2235b30;
extern __int64 GameData_2235b40;
extern __int64 GameData_2235b50;
extern __int64 GameData_2235b60;
extern __int64 GameData_2235b68;
extern __int64 GameData_2235b70;
extern __int64 GameData_2235b80;
extern __int64 GameData_2235b90;
extern __int64 GameData_2235ba0;
extern __int64 GameData_2235ba8;
extern __int64 GameData_2235bb0;
extern __int64 GameData_2235bc0;
extern __int64 GameData_2235bd0;
extern __int64 GameData_2235be0;
extern __int64 GameData_2235be8;
extern __int64 GameData_2235bf0;
extern __int64 GameData_2235c00;
extern __int64 GameData_2235c10;
extern __int64 GameData_2235c20;
extern __int64 GameData_2235c28;
extern __int64 GameData_2235c30;
extern __int64 GameData_2235c40;
extern __int64 GameData_2235c50;
extern __int64 GameData_2235c60;
extern __int64 GameData_2235c68;
extern __int64 GameData_2235c70;
extern __int64 GameData_2235c80;
extern __int64 GameData_2235c90;
extern __int64 GameData_2235ca0;
extern __int64 GameData_2235ca8;
extern __int64 GameData_2235cb0;
extern __int64 GameData_2235cc0;
extern __int64 GameData_2235cd0;
extern __int64 GameData_2235ce0;
extern __int64 GameData_2235ce8;
extern __int64 GameData_2235cf0;
extern __int64 GameData_2235d00;
extern __int64 GameData_2235d10;
extern __int64 GameData_2235d20;
extern __int64 GameData_2235d28;
extern __int64 GameData_2235d30;
extern __int64 GameData_2235d40;
extern __int64 GameData_2235d50;
extern __int64 GameData_2235d60;
extern __int64 GameData_2235d68;
extern __int64 GameData_2235d70;
extern __int64 GameData_2235d80;
extern __int64 GameData_2235d90;
extern __int64 GameData_2235da0;
extern __int64 GameData_2235da8;
extern __int64 GameData_2235db0;
extern __int64 GameData_2235dc0;
extern __int64 GameData_2235dd0;
extern __int64 GameData_2235de0;
extern __int64 GameData_2235de8;
extern __int64 GameData_2235df0;
extern __int64 GameData_2235e00;
extern __int64 GameData_2235e10;
extern __int64 GameData_2235e20;
extern __int64 GameData_2240050;
extern __int64 GameData_2259540;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_g_game_setting_ptr;
extern char GameData_1a94a43[];
extern char GameData_1a9f09e;
extern char GameData_21f42c0;
extern char GameData_2235798;
extern char GameData_22357d8;
extern char GameData_2235818;
extern char GameData_2235858;
extern char GameData_2235898;
extern char GameData_22358d8;
extern char GameData_2235918;
extern char GameData_2235958;
extern char GameData_2235998;
extern char GameData_22359d8;
extern char GameData_2235a18;
extern char GameData_2235a58;
extern char GameData_2235a98;
extern char GameData_2235ad8;
extern char GameData_2235b18;
extern char GameData_2235b58;
extern char GameData_2235b98;
extern char GameData_2235bd8;
extern char GameData_2235c18;
extern char GameData_2235c58;
extern char GameData_2235c98;
extern char GameData_2235cd8;
extern char GameData_2235d18;
extern char GameData_2235d58;
extern char GameData_2235d98;
extern char GameData_2235dd8;
extern int GameData_21d92e0;
extern int GameData_22357b8;
extern int GameData_22357c8;
extern int GameData_22357f8;
extern int GameData_2235808;
extern int GameData_2235838;
extern int GameData_2235848;
extern int GameData_2235878;
extern int GameData_2235888;
extern int GameData_22358b8;
extern int GameData_22358c8;
extern int GameData_22358f8;
extern int GameData_2235908;
extern int GameData_2235938;
extern int GameData_2235948;
extern int GameData_2235978;
extern int GameData_2235988;
extern int GameData_22359b8;
extern int GameData_22359c8;
extern int GameData_22359f8;
extern int GameData_2235a08;
extern int GameData_2235a38;
extern int GameData_2235a48;
extern int GameData_2235a78;
extern int GameData_2235a88;
extern int GameData_2235ab8;
extern int GameData_2235ac8;
extern int GameData_2235af8;
extern int GameData_2235b08;
extern int GameData_2235b38;
extern int GameData_2235b48;
extern int GameData_2235b78;
extern int GameData_2235b88;
extern int GameData_2235bb8;
extern int GameData_2235bc8;
extern int GameData_2235bf8;
extern int GameData_2235c08;
extern int GameData_2235c38;
extern int GameData_2235c48;
extern int GameData_2235c78;
extern int GameData_2235c88;
extern int GameData_2235cb8;
extern int GameData_2235cc8;
extern int GameData_2235cf8;
extern int GameData_2235d08;
extern int GameData_2235d38;
extern int GameData_2235d48;
extern int GameData_2235d78;
extern int GameData_2235d88;
extern int GameData_2235db8;
extern int GameData_2235dc8;
extern int GameData_2235df8;
extern int GameData_2235e08;
extern unsigned int GameData_1a83140[4];
float* GameRoutine_59fe80(float* result, float, float);
int __cxa_guard_acquire(__int64);
int strcmp(const char*, const char*);
int toupper(int);
unsigned __int64 strlen(const char*);
void* BaseNx_2a1b90();
void AIDeploy_1274c80(_QWORD*, __int64, int, unsigned int*);
void AIDeploy_1274f90(_QWORD*, __int64, int, unsigned int*);
void AIDeploy_1275160(_QWORD*, __int64, int, int, int, unsigned int*);
void GameHr_8679c0();
void GameHr_a5aca0(__int64);
void GameRoutine_18c9f10(__int64, char, int, int, char);
void GameRoutine_6e3b50(__int64, _QWORD*);
void GameRoutine_6e5a40(__int64*, unsigned __int64, _DWORD*);
void GameRoutine_7d6200(__int64*, _DWORD*);
void GameRoutine_8232c0(__int64*);
void GameRoutine_82f300(__int64*, unsigned __int64);
void GameRoutine_867df0();
void Seq_11d0af0(__int64);
void Unit_6db740(__int64, char, char);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6e5a20();
void __attribute__((noreturn)) GameRoutine_892740();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void game_ffa3e0(_QWORD*, _QWORD*, _DWORD*);
void game_zview_cf7200(__int64, float32x4_t*, float32x4_t*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_279c80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    int a6, __int64 a7);
__int64 game_2ae7a0(__int64* a1);
__int64 game_5a42b0(__int64 a1, int a2);
__int64 game_5a65c0(__int64 a1, int a2);
__int64 game_6d00c0(__int64 a1);
__int64 game_7810b0(__int64 a1, int* a2, int* a3);
__int64 game_7815e0(__int64 a1, int* a2, int* a3);
__attribute__((swiftcall)) void game_7f8880(PSEUDO_X8 x8_, unsigned __int8 a1);
void game_82eee0(__int64 a1);
__int64 game_8ea690(__int64 a1, unsigned int a2, unsigned __int64* a3, char a4,
                    char a5);
__attribute__((swiftcall)) void game_93c6a0(PSEUDO_X8 x8_, __int64 a1,
                                            unsigned __int8* a2, __int64 a3,
                                            char a4);
__attribute__((swiftcall)) void game_a3aba0(PSEUDO_X8 x8_, __int64 unused_int0,
                                            float* a1, float* a2);
void game_cf8840(__int64 a1);
__int64 game_e17bc0(__int64 a1);
__int64 game_e6c240(__int64 a1, __int64 a2);
float game_1062d90(float* a1, float* a2);
__int64 game_10d4da0(__int64 a1, __int64* a2, __int64 a3);
void game_11ce900(__int64 a1);
__int64 game_11fa1c0(__int64 a1, int a2, __int64 a3, __int64 a4);
__int64 game_1207aa0(__int64 a1, int a2, int a3, unsigned int a4,
                     unsigned int a5, char a6);
__attribute__((swiftcall)) void game_127c600(PSEUDO_X8 x8_, __int64 a1,
                                             unsigned int a2);
void game_13602c0(__int64 a1);
__int64 game_18c2620(__int64 a1);
_QWORD* DrawInfo_5769d0(_QWORD* result, __int64*);
_QWORD* GameRoutine_12c82a0(_QWORD* result, int, int, __int16, __int16, int,
                            __int64);
_QWORD* GameRoutine_633980(_QWORD* result, __int64*);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_6b8990(_QWORD* result, __int64*);
_QWORD* GameRoutine_ad5000(_QWORD*, __int64, unsigned __int64, int);
_QWORD* GameRoutine_d4e4e0(__int64*, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_632da0(PSEUDO_X8, __int64,
                                                   unsigned int);
__attribute__((swiftcall)) void GameRoutine_878ea0(PSEUDO_X8, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_878ea0_alt1(PSEUDO_X8,
                                                        const char**);
__attribute__((swiftcall)) void HubDisposFileReader_c98880(PSEUDO_X8, _QWORD*);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64* GameRoutine_6b87d0(__int64* result, unsigned __int64, __int64, __int64,
                            __int64, __int64);
__int64* GameRoutine_adf390(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64* GameRoutine_adf520(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64* GameVariable_82e7c0(unsigned __int8, int);
__int64* Model_5e2b40(__int64* result);
__int64 BasicMenuCursor_16de1f0(_QWORD, _QWORD, _QWORD);
__int64 BasicMenuCursor_16e0c00_alt1(_QWORD, _QWORD);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 CharacterModel_cf5c00(__int64);
__int64 CharacterModel_cf67d0(__int64 result);
__int64 CharacterModel_cf6940(__int64, long double);
__int64 CharacterModel_cf9f80(__int64*, __int64);
__int64 CharacterModel_d198c0(_QWORD*, float32x2_t*, char, char);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 Dir_70df40(__int16*, __int16*);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_12c8a30(__int64 result, char, int, unsigned int, __int16,
                            unsigned int, __int64);
__int64 GameRoutine_12c8fe0(int, int, int, int);
__int64 GameRoutine_12dd100(__int64 result, char);
__int64 GameRoutine_1488940(__int64*, __int64);
__int64 GameRoutine_1753970(_QWORD, _QWORD);
__int64 GameRoutine_17d4db0(__int64, __int64);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0a060(const char*, const char*);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_20();
__int64 GameRoutine_200();
__int64 GameRoutine_571fd0(_QWORD*);
__int64 GameRoutine_5b45d0(_QWORD, _QWORD);
__int64 GameRoutine_5b4780(_QWORD);
__int64 GameRoutine_5bbed0(_QWORD, _QWORD, float, float);
__int64 GameRoutine_5bd950(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5caeb0(_QWORD);
__int64 GameRoutine_5d0ea0(_QWORD);
__int64 GameRoutine_5fcb50(__int64);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcb80(__int64 result);
__int64 GameRoutine_631500(__int64 result, _QWORD*);
__int64 GameRoutine_631820(__int64);
__int64 GameRoutine_632cd0(__int64, __int64);
__int64 GameRoutine_6b71e0(__int64*);
__int64 GameRoutine_6d7480(_QWORD, _QWORD);
__int64 GameRoutine_6e5a40_alt1(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_71fb20(_QWORD);
__int64 GameRoutine_877330(char);
__int64 GameRoutine_877790(unsigned __int8, unsigned __int8, int, int);
__int64 GameRoutine_975940(__int64);
__int64 GameRoutine_ad5280(__int64*);
__int64 GameRoutine_ad6000(__int64, unsigned __int64);
__int64 GameRoutine_bc9580(__int64, const char*);
__int64 GameRoutine_bdfce0(unsigned int, _QWORD*);
__int64 GameRoutine_cf62e0(__int64);
__int64 GameRoutine_d18da0(__int64 result);
__int64 GameRoutine_d49ac0(__int64);
__int64 GameRoutine_efdb60(__int64);
__int64 GameRoutine_fa6720(_QWORD*, __int64);
__int64 GameVariable_82e3a0(int);
__int64 GaugeUtil_UnitExpChangeUtil_Unknown5();
__int64 HubCharacterNatives_cf7940(__int64);
__int64 HubDisposFileReader_Destructor(_QWORD*);
__int64 LayoutArchive_5720c0(_QWORD*, __int64, __int64, __int64, __int64,
                             __int64);
__int64 LayoutArchive_5725c0(__int64, __int64);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char, __int64);
__int64 ResFile_5e6300(__int64 result, __int64, __int64);
__int64 TimelineFile_890160(const char*);
__int64 UnitSkillList_84cc00(_QWORD, _QWORD, _QWORD);
__int64 fs_635a60(__int64, __int64*, char, char, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_14a1cc0(__int64*, float);
__int64 game_14a2780(__int64 result);
__int64 game_14a3920(__int64 result);
__int64 game_5b99a0(__int64 result, float*, float*, float*, __int64,
                    float32x4_t*, char, float);
__int64 game_5b9d90(__int64, __int64);
__int64 game_5bb1a0(_QWORD, _QWORD, long double, long double);
__int64 game_5c0040(_QWORD, _QWORD, float);
__int64 game_9a28e0(_QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_Unit_GetParam_alt1(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_Unknown6c4610(_QWORD);
__int64 game_menu_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_16dcd30_alt1(__int64, __int64, _QWORD*, __int64);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64);
__int64 game_zview_CharacterModel_SetActiveSignal(__int64 result, char);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD);
__int64 nn_os_AcquireWriteLock(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_ReleaseWriteLock(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 nn_ui2d_572660(_QWORD*, __int64);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_isLoaded(unsigned __int8*);
__int64 snd_playAt_ff4e0(__int64, __int64, __int64, unsigned int, unsigned int,
                         int, float, float, float, float, float);
__int64 snd_stop_ffc40(__int64*, __int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD);
__int64 ui_LayoutAccessor_FindPartsLayout(__int64*, __int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool GameRoutine_811200(const char*);
bool GameRoutine_d1cdc0(__int64, unsigned int);
bool llvm_libcxx_21_libcxx_include___memory_d2d4e0();
char* GameRoutine_874b20(unsigned __int8, unsigned __int8, int, int);
char* game_util_Format(const char*, ...);
extern _DWORD* GameData_212d168;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN* GameData_212ea08;
extern _UNKNOWN* GameData_212ec70;
extern _UNKNOWN GameData_1af69ec;
extern _UNKNOWN GameData_2174f00;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21f4318;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82dc0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a833d0;
extern __int128 GameData_1a83610;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fd8100[])();
extern __int64 (*GameData_1fd8150[])();
extern __int64 (*GameData_1fd81e0[])();
extern __int64 (*GameData_1fd8670[])();
extern __int64 (*GameData_1fdc410[9])();
extern __int64 (*GameData_2023828[])();
extern __int64 (*GameData_2023cc8[])();
extern __int64 (*GameData_2023d58[])();
extern __int64 (*GameData_202f1d8[])();
extern __int64 (*GameData_202f258[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_FacilitySeq_Unknown00_ptr_21195d0)();
extern __int64 (*game_facility_anonymous_DiningRecipeMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_ProcDiningRecipeMenu_vtable[])();
extern __int64 (*game_facility_anonymous_ProcFacilitySuspendMenuSeq_vtable[])();
extern __int64 (
    *game_facility_anonymous_ProcObeliskDepositoryMaterialMenu_vtable[])();
extern __int64 (*game_gmap_anonymous_BanquetDecide_vtable[])();
extern __int64 (*game_gmap_anonymous_DecideMenuItem_vtable_20725a0[])();
extern __int64 (*game_menu_DeleteTransportMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_1fb5998[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2037808[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20a3b38[])();
extern __int64 (*game_menu_InfoDialog_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_1fb58c8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2037738[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20724b8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_208a838[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20a3a68[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20ba838[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20c54c8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20c7738[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20c8860[])();
extern __int64 (*game_menu_MultiMenu_vtable)();
extern __int64 (*game_menu_UnitTroopMenu_vtable)();
extern __int64 (*game_menu_anonymous_UnitTroopItemMenu_vtable[])();
extern __int64 (*game_telop_ExpListResultMenu_vtable[])();
extern __int64 (*game_telop_anonymous_ExpMenuItem_vtable[])();
extern __int64 (*ui_LayoutArchive_vtable[])();
extern __int64* GameData_212cc40[63];
extern __int64* GameData_212cc78[56];
extern __int64* GameData_212cd58[28];
extern __int64* GameData_212cd60[27];
extern __int64* GameData_212d6a8;
extern __int64* GameData_212dcd0;
extern __int64* GameData_212eb88;
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ee20[6];
extern __int64* game_g_empty_item_ptr;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_1ae1d7b;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_212cf90[3];
extern __int64 GameData_212d310;
extern __int64 GameData_2131c48[49];
extern __int64 GameData_2131ce0[30];
extern __int64 GameData_2131cf0[28];
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9600;
extern __int64 GameData_21c9ac0;
extern __int64 GameData_21c9ac8;
extern __int64 GameData_21d1ec0;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea48;
extern __int64 GameData_22416e0;
extern __int64 GameData_224b6d8;
extern __int64 GameData_226cbf8;
extern __int64 game_TransporterConst_List_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64 game_sound_g_game_sound;
extern __int64 ui_Manager_instance_;
extern char* GameData_1fa6240;
extern char GameData_1a9638b[];
extern const char GameData_1acabe6[];
extern const char GameData_1ad6605[];
extern int (*GameData_212ce38)[29];
extern int* GameData_212deb0;
extern int* GameData_212ea00;
extern int* GameData_212ec68;
extern int GameData_21f4314;
float GameRoutine_1a0a6a0(float, float);
float GameRoutine_58e9d0(__int64, __int64);
float32x4_t* GameRoutine_10cae60(float32x4_t* result, char);
int GameRoutine_1a09cf0(__int64, __int64, unsigned __int64);
int GameRoutine_1a09d30(const char*, const char*);
signed __int64 Material_add7a0(signed __int64 result, const char***,
                               unsigned __int8);
typedef __int64 GameAlign_21f430c __attribute__((aligned(4)));
extern GameAlign_21f430c GameData_21f430c;
unsigned __int16* Dir_70d7a0(unsigned __int16* result);
unsigned __int64 GameRoutine_13e51e0(__int64, __int64*, unsigned __int8);
unsigned __int64 GameRoutine_1a09c70_alt1(const char*);
unsigned int* game_6b7f00(unsigned int*, unsigned __int64, unsigned int*,
                          __int64, _QWORD*);
unsigned __int128 game_6b7f00_pair(unsigned int*, unsigned __int64,
                                   unsigned int*, __int64,
                                   _QWORD*) __asm__("game_6b7f00");
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void CookingFile_9249e0(__int64*, char);
void GameRoutine_12d8f40(__int64*, const char**, unsigned __int16*);
void GameRoutine_14a20b0(__int64);
void GameRoutine_14a3260(__int64*, char);
void GameRoutine_1647b80(__int64, const char**);
void GameRoutine_658c00(__int64*);
void GameRoutine_d49fe0(__int64, __int64, unsigned __int64, __int64);
void GameRoutine_dbce10(__int64, int);
void GameSideStoryData_12b5480(__int64, __int64*, __int64, __int64);
void Material_addcc0(__int64, __int64, __int64*);
void Material_ade2c0(_QWORD*);
void Pane_58e740(__int64, __int64, __int64, char, long double);
void __attribute__((noreturn)) GameRoutine_12dffb0();
void __attribute__((noreturn)) GameRoutine_12e0660();
void __attribute__((noreturn)) GameRoutine_12e0680();
void __attribute__((noreturn)) GameRoutine_12e06a0();
void __attribute__((noreturn)) GameRoutine_1364380();
void __attribute__((noreturn)) GameRoutine_13eb280();
void __attribute__((noreturn)) GameRoutine_adf370();
void __attribute__((noreturn)) GameRoutine_adf500();
void __attribute__((noreturn)) String_60a230();
void __attribute__((noreturn)) String_60a250(const char*);
void game_HubDisposFileReader_CalcGroupNames(unsigned __int64, const char*,
                                             __int64*, char);
void game_menu_BasicMenu_Destroy_BasicMenu_alt2(__int64);
void game_zview_CharacterAnim_CommitReduceFlag(__int64);
_QWORD* game_5812d0(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 game_5ba840(__int64 a1, unsigned __int8* a2, unsigned int a3, char a4,
                    char a5, unsigned __int8 a6, float a7);
float game_5bd9a0_alt1(_OWORD* a1, _OWORD* a2, __int64 a3, float a4, __int64 a5,
                       __int64 a6, float* a7);
float32x4_t game_5bdd90(_OWORD* a1, float32x4_t* a2, __int64 a3, float a4,
                        __int64 a5, __int64 a6, float* a7);
void game_5c38e0(long double a1, long double a2, __int64 a3, int8x16_t* a4,
                 __int64 a5, float* a6);
long double game_5c4020(_OWORD* a1, float32x4_t* a2);
__int64* game_5e28e0(__int64* result, int a2);
_QWORD* game_6b83e0(_QWORD* result, __int64 a2, __int64 a3, __int64 a4,
                    __int64 a5, __int64 a6);
__int64 game_6d69a0(__int64 a1);
__int64 game_6d7840(__int64 a1);
void game_726a20(__int64 a1);
__int64 game_877c40();
__int64 game_879c00(unsigned __int8 a1, unsigned __int8 a2, int a3);
__int64 game_9bec00(__int64 a1);
__int64 game_9bee90(_QWORD* a1);
void game_adc400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                 _QWORD* a6, __int64* a7, _QWORD* a8);
__int64 game_cf90a0(__int64 a1);
float game_edf0f0(__int64 a1, float a2, float a3);
void game_12db540(_QWORD* a1, __int64 a2);
__int64 game_12e1990(__int64 a1, char** a2);
__int64 game_1366260(const char* a1, char a2);
unsigned __int64 game_13e5040(__int64 a1, __int64* a2, unsigned __int8 a3,
                              int a4);
void game_13f96c0(__int64 a1);
__int64 game_14a2820(__int64 a1, float32x4_t* a2);
__int64 game_16408b0(__int64 a1);
__int64 game_16fcfc0(_QWORD* a1);
void game_16fd060(_QWORD* a1);
__int64 game_17549a0(__int64 a1, __int64** a2, unsigned int a3, __int64 a4);
__int64 game_178b840(__int64 a1);
bool game_185a200(unsigned __int8 a1, int a2);
__int64 game_185a3a0(unsigned __int8 a1, int a2);
__int64 game_185a4f0(unsigned __int8 a1, int a2, int a3);
void game_1958520(__int64 a1);
void game_5bd9a0(_OWORD* a1, _OWORD* a2, __int64 a3, float a4, __int64 a5,
                 __int64 a6, float* a7);
__int64 snd_isLoaded_alt1(__int64);
void game_14a20b0(__int64*);

__int64 game_279c80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    int a6, __int64 a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v10;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  int v22;
  __int64 v23;
  struct {
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v24_;
  __int64 v29[3];
  __int64 v30;

  if ((a3 & 0xFFF) != 0) {
    return 0;
  }
  v29[1] = v7;
  v29[2] = v8;
  v10 = a3 + a4;
  v29[0] = a3;
  if ((SoundArchivePlayer_279ee0(a1, a2, v29, a3 + a4) & 1) == 0) {
    return 0;
  }
  v24_.v27 = 0;
  v24_.v28 = 0;
  v24_.v25 = 0;
  v24_.v26 = 0;
  v24_.v24 = 0;
  if ((BaseNx_278c70(a2, (__int64)&v24_.v24) & 1) != 0) {
    if ((GameHr_29ecc0((_QWORD*)(a1 + 528), v24_.v25, v29, v10, a7) & 1) == 0) {
      return 0;
    }
    v16 = v24_.v24;
    v17 = HIDWORD(v24_.v28);
    *(_BYTE*)(a1 + 794) = v24_.v28;
    if ((SequenceSoundRuntime_291e40(a1 + 80, v16, v17, v29, v10) & 1) == 0) {
      return 0;
    }
    if (*(_BYTE*)(a1 + 794) == 1) {
      if (!GameHr_27e5d0(a1 + 464, SHIDWORD(v24_.v26), v29, v10)) {
        return 0;
      }
    }
    else if ((GameHr_2ae3e0((_QWORD*)(a1 + 320), SHIDWORD(v24_.v26), v29, v10) &
              1) == 0) {
      return 0;
    }
    if ((SequenceNoteOnCallback_292500(a1 + 80, SHIDWORD(v24_.v24), v29, v10) &
         1) == 0) {
      return 0;
    }
  }
  if (a6 >= 1) {
    v18 = v29[0];
    if ((v29[0] & 0x3F) != 0 ||
        v29[0] + ((112LL * (unsigned int)a6 + 63) & 0x7FFFFFFFC0LL) - v10 > 0) {
      return 0;
    }
    v19 = 0;
    v20 = 0;
    v29[0] += (112LL * (unsigned int)a6 + 63) & 0x7FFFFFFFC0LL;
    *(_QWORD*)(a1 + 736) = v18;
    *(_DWORD*)(a1 + 728) = a6;
    do {
      GameRoutine_27e290(*(_QWORD*)(a1 + 736) + v19);
      ++v20;
      v19 += 112;
    } while (v20 < *(int*)(a1 + 728));
  }
  if (a5 != 0) {
    if ((v29[0] & 0x3F) != 0) {
      return 0;
    }
    v30 = v29[0];
    v21 = (a5 + 3) & 0xFFFFFFFFFFFFFFFCLL;
    v22 = *(unsigned __int8*)(a1 + 794);
    v29[0] +=
        v21 * (SHIDWORD(v24_.v26) + (__int64)(int)v24_.v24 + (int)v24_.v25);
    if (v22 == 1) {
      SoundArchivePlayer_27ea20(a1 + 464, &v30,
                                (a5 + 3) & 0xFFFFFFFFFFFFFFFCLL);
    }
    else {
      SoundArchivePlayer_2aea40(a1 + 320, &v30,
                                (a5 + 3) & 0xFFFFFFFFFFFFFFFCLL);
    }
    SequenceNoteOnCallback_292580(a1 + 80, &v30,
                                  (a5 + 3) & 0xFFFFFFFFFFFFFFFCLL);
    SoundArchivePlayer_29f660(a1 + 528, &v30, (a5 + 3) & 0xFFFFFFFFFFFFFFFCLL);
    v23 = v30;
    *(_QWORD*)(a1 + 720) = v21;
    if (v23 - v10 > 0) {
      return 0;
    }
  }
  return 1;
}

_QWORD* game_5812d0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  unsigned int v20;
  float v21;
  float v22;
  float32x4_t v23;
  float32x4_t v24;
  char v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  long double v29;
  __int128 v30;
  __int128 v31;
  char v32;
  int v33;
  _QWORD* result;
  __int64 (*v35)(__int64, __int64, _QWORD);
  __int128 v36;
  __int128 v37;
  __int128 v38;
  struct {
    float32x4_t v39[2];
    float32x4_t v40;
    float32x4_t v41;
  } v39_;
  __int64 v42[8];

  v4 = *(_QWORD*)(a2 + 56);
  v42[4] = *(_QWORD*)(a2 + 48);
  v42[5] = v4;
  v9 = *(_QWORD*)(a2 + 72);
  v42[6] = *(_QWORD*)(a2 + 64);
  v42[7] = v9;
  v10 = *(_QWORD*)(a2 + 24);
  v42[0] = *(_QWORD*)(a2 + 16);
  v42[1] = v10;
  v11 = *(_QWORD*)(a2 + 40);
  v42[2] = *(_QWORD*)(a2 + 32);
  v42[3] = v11;
  if ((a4 & 1) != 0) {
    GameRoutine_58e9d0(a1, a3);
  }
  v12 = *(float*)(a1 + 80);
  v13 = *(float*)(a1 + 84);
  v36 = *(_OWORD*)(a1 + 112);
  v37 = *(_OWORD*)(a1 + 128);
  v38 = *(_OWORD*)(a1 + 144);
  v14 = *((float*)&v36 + 3) - (float)(v12 * 0x1.0000000000000p-1f);
  v15 = *((float*)&v37 + 3) - (float)(v13 * 0x1.0000000000000p-1f);
  v16 = v12 + v14;
  v17 = v13 + v15;
  LANES128(v23).n128_u32[2] = 0;
  v18 = 0x1.0000000000000p+0f / (float)(v16 - v14);
  v19 = 0x1.0000000000000p+0f / (float)(v15 - v17);
  *(float*)&v20 = v18 + v18;
  v21 = -(float)((float)(v14 + v16) * v18);
  v22 = -(float)((float)(v15 + v17) * v19);
  LANES128(v24).n128_u32[0] = 0;
  LANES128(v24).n128_u32[2] = 0;
  LANES128(v23).n128_u64[0] = v20;
  LANES128(v23).n128_f32[3] = v21;
  LANES128(v24).n128_f32[1] = v19 + v19;
  LANES128(v24).n128_f32[3] = v22;
  v25 = *(_BYTE*)(a2 + 404);
  v39_.v39[0] = v23;
  v39_.v39[1] = v24;
  v39_.v40 = COERCE_AS(float32x4_t, GameData_1a833d0);
  v39_.v41 = COERCE_AS(float32x4_t, GameData_1a82dc0);
  if ((v25 & 8) != 0) {
    v26 = vmulq_f32(v23, COERCE_AS(float32x4_t, 0LL));
    v27 = vsubq_f32(v26, v24);
    v28 = vmlaq_f32(v26, COERCE_AS(float32x4_t, 0LL), v24);
    v39_.v39[0] =
        vaddq_f32(vmlaq_f32(vmlaq_f32(v23, COERCE_AS(float32x4_t, 0LL), v24),
                            COERCE_AS(float32x4_t, 0LL),
                            COERCE_AS(float32x4_t, GameData_1a833d0)),
                  COERCE_AS(float32x4_t, 0LL));
    v39_.v39[1] = vaddq_f32(vmlaq_f32(v27, COERCE_AS(float32x4_t, 0LL),
                                      COERCE_AS(float32x4_t, GameData_1a833d0)),
                            COERCE_AS(float32x4_t, 0LL));
    v39_.v40 =
        vaddq_f32(vaddq_f32(v28, COERCE_AS(float32x4_t, GameData_1a833d0)),
                  COERCE_AS(float32x4_t, 0LL));
    v39_.v41 = vaddq_f32(vmlaq_f32(v28, COERCE_AS(float32x4_t, 0LL),
                                   COERCE_AS(float32x4_t, GameData_1a833d0)),
                         COERCE_AS(float32x4_t, GameData_1a82dc0));
  }
  DrawInfo_5769d0((_QWORD*)a2, (__int64*)v39_.v39);
  v29 = *(long double*)&GameData_1a82dd0;
  DWORDn(v29, sizeof(v29) / 4 - 1) = DWORDn(v36, sizeof(v36) / 4 - 1);
  v30 = GameData_1a83610;
  DWORDn(v30, sizeof(v30) / 4 - 1) = DWORDn(v37, sizeof(v37) / 4 - 1);
  v31 = GameData_1a83090;
  v32 = *(_BYTE*)(a1 + 88);
  DWORDn(v31, sizeof(v31) / 4 - 1) = DWORDn(v38, sizeof(v38) / 4 - 1);
  *(long double*)(a1 + 112) = v29;
  *(_OWORD*)(a1 + 128) = v30;
  *(_BYTE*)(a1 + 88) = v32 | 0x40;
  *(_OWORD*)(a1 + 144) = v31;
  v33 = *(_DWORD*)(a3 + 24);
  if ((v32 & 2) == 0) {
    *(_DWORD*)(a3 + 24) = 1065353216;
  }
  Pane_58e740(a1, a2, a3, a4 & 1, v29);
  if ((*(_BYTE*)(a1 + 88) & 2) == 0) {
    *(_DWORD*)(a3 + 24) = v33;
  }
  result = DrawInfo_5769d0((_QWORD*)a2, v42);
  v35 = *(__int64 (**)(__int64, __int64, _QWORD))(a2 + 360);
  if (v35 != nullptr) {
    return (_QWORD*)v35(a2, a1, *(_QWORD*)(a2 + 368));
  }
  return result;
}

__int64 game_5a42b0(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v5;
  float32x2_t* v6;
  float32x2_t* v7;
  float32x2_t v8;
  float32x2_t v9;
  float32x2_t v10;
  float32x2_t v11;
  float32x2_t v12;
  float32x2_t v13;
  float32x2_t v14;
  float32x2_t v15;
  float32x2_t v16;
  float32x2_t v17;
  float32x2_t v18;
  float32x2_t v19;
  float32x2_t v20;
  float32x2_t v21;
  float32x2_t v22;
  float32x2_t v23;
  float32x2_t v24;
  float32x2_t v25;
  float32x2_t v26;
  float32x2_t v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float32x2_t v33;
  float32x2_t v34;
  float v35;
  float v36;

  v2 = *(_QWORD*)(a1 + 40);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  v6 = (float32x2_t*)(v2 + 24LL * a2);
  v7 = (float32x2_t*)(v2 + 24LL * ((a2 + 1) % v5));
  LANES64(v8).n64_u64[0] = LANES64(v6[2]).n64_u64[0];
  LANES64(v9).n64_f32[0] = LANES64(v6[1]).n64_f32[0] + LANES64(v8).n64_f32[0];
  LANES64(v9).n64_f32[1] = LANES64(v6[1]).n64_f32[1] + LANES64(v8).n64_f32[1];
  LANES64(v10).n64_u64[0] = LANES64(v7[2]).n64_u64[0];
  LANES64(v11).n64_u64[0] = LANES64_OF(vsub_f32(v9, v8)).n64_u64[0];
  LANES64(v13).n64_f32[0] = LANES64(*(v7)).n64_f32[0] + LANES64(v10).n64_f32[0];
  LANES64(v12).n64_u64[0] = LANES64_OF(vsub_f32(v10, v8)).n64_u64[0];
  LANES64(v13).n64_f32[1] = LANES64(*(v7)).n64_f32[1] + LANES64(v10).n64_f32[1];
  LANES64(v14).n64_u64[0] = LANES64_OF(vmul_f32(v12, v11)).n64_u64[0];
  LANES64(v15).n64_u64[0] = LANES64_OF(vmul_f32(v12, v12)).n64_u64[0];
  LANES64(v16).n64_u64[0] = LANES64_OF(vpadd_f32(v14, v14)).n64_u64[0];
  LANES64(v17).n64_u64[0] = LANES64_OF(vpadd_f32(v15, v15)).n64_u64[0];
  if (LANES64(v16).n64_f32[0] <= 0x0.0p+0f) {
    LANES64(v19).n64_u64[0] = LANES64_OF(vmul_f32(v11, v11)).n64_u64[0];
    LANES64(v19).n64_u32[0] = LANES64_OF(vpadd_f32(v19, v19)).n64_u32[0];
    LANES64(v23).n64_u64[0] = LANES64_OF(vsub_f32(v13, v8)).n64_u64[0];
    LANES64(v26).n64_u64[0] = LANES64_OF(vmul_f32(v12, v23)).n64_u64[0];
    LANES64(v25).n64_u64[0] = LANES64_OF(vpadd_f32(v26, v26)).n64_u64[0];
    if (LANES64(v25).n64_f32[0] <= 0x0.0p+0f) {
      goto LABEL_9;
    }
  }
  else {
    LANES64(v18).n64_u64[0] = LANES64_OF(vsub_f32(v10, v9)).n64_u64[0];
    LANES64(v19).n64_u64[0] = LANES64_OF(vmul_f32(v18, v18)).n64_u64[0];
    LANES64(v19).n64_u32[0] = LANES64_OF(vpadd_f32(v19, v19)).n64_u32[0];
    LANES64(v20).n64_u64[0] =
        LANES64_OF(vmul_f32(vmul_f32(v12, vrev64_s32(v11)),
                            COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
            .n64_u64[0];
    LANES64(v21).n64_u64[0] = LANES64_OF(vpadd_f32(v20, v20)).n64_u64[0];
    LANES64(v22).n64_u64[0] =
        LANES64_OF(vdiv_f32(vmul_f32(v21, v21), v17)).n64_u64[0];
    if ((LANES64_OF(vcgt_f32(v16, v17)).n64_u8[0] & 1) == 0) {
      PSEUDO_LOW_LANE64(v19, n64_u64, LANES64(v22).n64_u64[0]);
    }
    LANES64(v23).n64_u64[0] = LANES64_OF(vsub_f32(v13, v8)).n64_u64[0];
    LANES64(v24).n64_u64[0] = LANES64_OF(vmul_f32(v12, v23)).n64_u64[0];
    LANES64(v25).n64_u64[0] = LANES64_OF(vpadd_f32(v24, v24)).n64_u64[0];
    if (LANES64(v25).n64_f32[0] <= 0x0.0p+0f) {
      goto LABEL_9;
    }
  }
  if ((LANES64_OF(vcgt_f32(v25, v17)).n64_u8[0] & 1) == 0) {
    LANES64(v33).n64_u64[0] =
        LANES64_OF(vmul_f32(vmul_f32(v12, vrev64_s32(v23)),
                            COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
            .n64_u64[0];
    LANES64(v34).n64_u64[0] = LANES64_OF(vpadd_f32(v33, v33)).n64_u64[0];
    v35 = LANES64_OF(vdiv_f32(vmul_f32(v34, v34), v17)).n64_f32[0];
    v29 = *(float*)(a1 + 48);
    if (LANES64(v19).n64_f32[0] < v35) {
      v30 = v35;
    }
    else {
      v30 = LANES64(v19).n64_f32[0];
    }
    goto LABEL_12;
  }
  LANES64(v23).n64_u64[0] = LANES64_OF(vsub_f32(v10, v13)).n64_u64[0];
LABEL_9:
  LANES64(v27).n64_u64[0] = LANES64_OF(vmul_f32(v23, v23)).n64_u64[0];
  v28 = LANES64_OF(vpadd_f32(v27, v27)).n64_f32[0];
  v29 = *(float*)(a1 + 48);
  if (LANES64(v19).n64_f32[0] < v28) {
    v30 = v28;
  }
  else {
    v30 = LANES64(v19).n64_f32[0];
  }
LABEL_12:
  v31 = sqrtf(v30);
  if (v31 <= v29) {
    return 1;
  }
  v36 = ceilf(sqrtf(v31 / v29));
  GameRoutine_59fe80(&v36, 0x1.0000000000000p+0f, 0x1.0000000000000p+10f);
  return (unsigned int)(1 << (-__clz((int)v36 - 1) & 31));
}

__int64 game_5a65c0(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v5;
  float32x2_t* v6;
  float32x2_t* v7;
  float32x2_t v8;
  float32x2_t v9;
  float32x2_t v10;
  float32x2_t v11;
  float32x2_t v12;
  float32x2_t v13;
  float32x2_t v14;
  float32x2_t v15;
  float32x2_t v16;
  float32x2_t v17;
  float32x2_t v18;
  float32x2_t v19;
  float32x2_t v20;
  float32x2_t v21;
  float32x2_t v22;
  float32x2_t v23;
  float32x2_t v24;
  float32x2_t v25;
  float32x2_t v26;
  float32x2_t v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float32x2_t v33;
  float32x2_t v34;
  float v35;
  float v36;

  v2 = *(_QWORD*)(a1 + 40);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  v6 = (float32x2_t*)(v2 + 24LL * a2);
  v7 = (float32x2_t*)(v2 + 24LL * ((a2 + 1) % v5));
  LANES64(v8).n64_u64[0] = LANES64(v6[2]).n64_u64[0];
  LANES64(v9).n64_f32[0] = LANES64(v6[1]).n64_f32[0] + LANES64(v8).n64_f32[0];
  LANES64(v9).n64_f32[1] = LANES64(v6[1]).n64_f32[1] + LANES64(v8).n64_f32[1];
  LANES64(v10).n64_u64[0] = LANES64(v7[2]).n64_u64[0];
  LANES64(v11).n64_u64[0] = LANES64_OF(vsub_f32(v9, v8)).n64_u64[0];
  LANES64(v13).n64_f32[0] = LANES64(*(v7)).n64_f32[0] + LANES64(v10).n64_f32[0];
  LANES64(v12).n64_u64[0] = LANES64_OF(vsub_f32(v10, v8)).n64_u64[0];
  LANES64(v13).n64_f32[1] = LANES64(*(v7)).n64_f32[1] + LANES64(v10).n64_f32[1];
  LANES64(v14).n64_u64[0] = LANES64_OF(vmul_f32(v12, v11)).n64_u64[0];
  LANES64(v15).n64_u64[0] = LANES64_OF(vmul_f32(v12, v12)).n64_u64[0];
  LANES64(v16).n64_u64[0] = LANES64_OF(vpadd_f32(v14, v14)).n64_u64[0];
  LANES64(v17).n64_u64[0] = LANES64_OF(vpadd_f32(v15, v15)).n64_u64[0];
  if (LANES64(v16).n64_f32[0] <= 0x0.0p+0f) {
    LANES64(v19).n64_u64[0] = LANES64_OF(vmul_f32(v11, v11)).n64_u64[0];
    LANES64(v19).n64_u32[0] = LANES64_OF(vpadd_f32(v19, v19)).n64_u32[0];
    LANES64(v23).n64_u64[0] = LANES64_OF(vsub_f32(v13, v8)).n64_u64[0];
    LANES64(v26).n64_u64[0] = LANES64_OF(vmul_f32(v12, v23)).n64_u64[0];
    LANES64(v25).n64_u64[0] = LANES64_OF(vpadd_f32(v26, v26)).n64_u64[0];
    if (LANES64(v25).n64_f32[0] <= 0x0.0p+0f) {
      goto LABEL_9;
    }
  }
  else {
    LANES64(v18).n64_u64[0] = LANES64_OF(vsub_f32(v10, v9)).n64_u64[0];
    LANES64(v19).n64_u64[0] = LANES64_OF(vmul_f32(v18, v18)).n64_u64[0];
    LANES64(v19).n64_u32[0] = LANES64_OF(vpadd_f32(v19, v19)).n64_u32[0];
    LANES64(v20).n64_u64[0] =
        LANES64_OF(vmul_f32(vmul_f32(v12, vrev64_s32(v11)),
                            COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
            .n64_u64[0];
    LANES64(v21).n64_u64[0] = LANES64_OF(vpadd_f32(v20, v20)).n64_u64[0];
    LANES64(v22).n64_u64[0] =
        LANES64_OF(vdiv_f32(vmul_f32(v21, v21), v17)).n64_u64[0];
    if ((LANES64_OF(vcgt_f32(v16, v17)).n64_u8[0] & 1) == 0) {
      PSEUDO_LOW_LANE64(v19, n64_u64, LANES64(v22).n64_u64[0]);
    }
    LANES64(v23).n64_u64[0] = LANES64_OF(vsub_f32(v13, v8)).n64_u64[0];
    LANES64(v24).n64_u64[0] = LANES64_OF(vmul_f32(v12, v23)).n64_u64[0];
    LANES64(v25).n64_u64[0] = LANES64_OF(vpadd_f32(v24, v24)).n64_u64[0];
    if (LANES64(v25).n64_f32[0] <= 0x0.0p+0f) {
      goto LABEL_9;
    }
  }
  if ((LANES64_OF(vcgt_f32(v25, v17)).n64_u8[0] & 1) == 0) {
    LANES64(v33).n64_u64[0] =
        LANES64_OF(vmul_f32(vmul_f32(v12, vrev64_s32(v23)),
                            COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
            .n64_u64[0];
    LANES64(v34).n64_u64[0] = LANES64_OF(vpadd_f32(v33, v33)).n64_u64[0];
    v35 = LANES64_OF(vdiv_f32(vmul_f32(v34, v34), v17)).n64_f32[0];
    v29 = *(float*)(a1 + 52);
    if (LANES64(v19).n64_f32[0] >= v35) {
      v30 = LANES64(v19).n64_f32[0];
    }
    else {
      v30 = v35;
    }
    goto LABEL_12;
  }
  LANES64(v23).n64_u64[0] = LANES64_OF(vsub_f32(v10, v13)).n64_u64[0];
LABEL_9:
  LANES64(v27).n64_u64[0] = LANES64_OF(vmul_f32(v23, v23)).n64_u64[0];
  v28 = LANES64_OF(vpadd_f32(v27, v27)).n64_f32[0];
  v29 = *(float*)(a1 + 52);
  if (LANES64(v19).n64_f32[0] >= v28) {
    v30 = LANES64(v19).n64_f32[0];
  }
  else {
    v30 = v28;
  }
LABEL_12:
  v31 = sqrtf(v30);
  if (v31 <= v29) {
    return 2;
  }
  v36 = ceilf(sqrtf(v31 / v29));
  GameRoutine_59fe80(&v36, 0x1.0000000000000p+0f, 0x1.0000000000000p+10f);
  return (unsigned int)((1 << -(char)__clz((int)v36 - 1)) + 1);
}

__int64 game_5ba840(__int64 a1, unsigned __int8* a2, unsigned int a3, char a4,
                    char a5, unsigned __int8 a6, float a7)
{

#pragma clang fp contract(fast)

  __int64 v7;
  float v8;
  __int64 v9;
  unsigned int v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 (*v26)(_QWORD*);
  __int64 (*v27)(_QWORD*);
  unsigned int v28;
  __int64 (*v29)(_QWORD*);
  int v30;
  float v31;
  float v32;
  char v33;
  __int64 v34;
  int* v35;
  unsigned __int8* v36;
  __int64 v37;
  _BYTE* v38;
  unsigned __int8* v39;
  __int64 v40;
  int v41;
  __int64 v42;
  float v43;
  _BYTE* v44;
  __int64 v45;
  _BYTE* v46;
  _BYTE* v47;
  float v48;
  float v49;
  float v50;
  __int64 v51;
  float v52;
  float* v53;
  __int64 v54;
  long double v55;
  long double v56;
  int32x4_t v57;
  int8x16_t v58;
  float32x4_t v59;
  int8x16_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  int32x4_t v70;
  int32x4_t v71;
  int32x4_t v72;
  int8x16_t v73;
  int8x16_t v74;
  int8x16_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  unsigned __int64 v79;
  int8x16_t v80;
  int8x16_t v81;
  int8x16_t v82;
  int8x16_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  int8x16_t v87;
  float32x4_t v88;
  float32x4_t v89;
  int v90;
  int v91;
  int v92;
  __int64 v94;
  unsigned int v95;
  __int64 v96;
  __int64 v97;
  float v98;
  int v99;
  __int64 v100;
  __int64 v101;
  __int64 i;
  __int64 v103;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 (*v108)(_QWORD*);
  __int64 (*v109)(_QWORD*);
  __int64 (*v110)(_QWORD*);
  int v111;
  float v112;
  int v113;
  int v114;
  unsigned __int8 v115;
  _QWORD v116[2];
  __int64 v117;

  v7 = *((_QWORD*)a2 + 20);
  v8 = *((float*)a2 + 17);
  v9 = *((_QWORD*)a2 + 15);
  v16 = *(_DWORD*)(v7 + 2036);
  v17 = *(_DWORD*)(v7 + 2044);
  v18 = GameRoutine_5b45d0(a2, a3);
  if ((v18 & 1) != 0) {
    *((float*)a2 + 20) = a7;
  }
  else if (a2[1] != 0) {
    *((float*)a2 + 20) = a7 + *((float*)a2 + 20);
  }
  if (a2[7] != 0) {
    goto LABEL_6;
  }
  v21 = *((_QWORD*)a2 + 15);
  v117 = a1;
  v22 = a4;
  if (*(_BYTE*)(*(_QWORD*)(v21 + 32) + 5888LL) == 1 && v8 > 0.0) {
    *((float*)a2 + 18) = a7 + *((float*)a2 + 18);
  }
  v23 = *((_QWORD*)a2 + 126);
  v24 = *((_QWORD*)a2 + 124);
  v25 = *((_QWORD*)a2 + 125);
  v116[0] = a2;
  v116[1] = v18 & 1;
  if (v23 != 0) {
    v26 = *(__int64 (**)(_QWORD*))(v23 + 16);
    if (v26 != nullptr) {
      v18 = v26(v116);
    }
  }
  if (v24 != 0) {
    v27 = *(__int64 (**)(_QWORD*))(v24 + 16);
    if (v27 != nullptr) {
      v18 = v27(v116);
    }
  }
  v28 = v17 + v16;
  if (v25 != 0) {
    v29 = *(__int64 (**)(_QWORD*))(v25 + 16);
    if (v29 != nullptr) {
      v18 = v29(v116);
    }
  }
  v30 = *a2;
  v31 = (float)v16;
  *((float*)a2 + 19) = a7;
  v115 = a6;
  v32 = (float)v28;
  v33 = v22;
  if (v30 != 0) {
    v34 = *((_QWORD*)a2 + 20);
    if (*(_BYTE*)(v34 + 2020) != 0) {
      v32 = *((float*)a2 + 343);
      v31 = v32 * (float)((float)*(unsigned int*)(v7 + 2040) / 100.0);
      if (*(_BYTE*)(v7 + 2032) != 0) {
        v32 = v31 + (float)*(unsigned int*)(v7 + 2044);
      }
    }
    *((_DWORD*)a2 + 3) = 0;
    v35 = (int*)(a2 + 12);
    v36 = a2 + 568;
    v37 = *((_QWORD*)a2 + 71);
    if ((*(_BYTE*)(v37 + 1) & 1) != 0 && *(_BYTE*)(v34 + 2020) != 0) {
      goto LABEL_26;
    }
  LABEL_50:
    v51 = v117;
    *((float*)a2 + 411) =
        *(float*)(*(_QWORD*)(v37 + 16) + 2404LL) * *(float*)(v9 + 488);
    v53 = *(float**)(v37 + 16);
    *((float*)a2 + 420) = v53[538] * *(float*)(v9 + 224);
    *((float*)a2 + 421) = v53[539] * *(float*)(v9 + 228);
    *((float*)a2 + 422) = v53[540] * *(float*)(v9 + 232);
    goto LABEL_51;
  }
  *((_DWORD*)a2 + 3) = 0;
  v35 = (int*)(a2 + 12);
  v36 = a2 + 568;
  v37 = *((_QWORD*)a2 + 71);
  if ((*(_BYTE*)(v37 + 1) & 1) == 0) {
    goto LABEL_50;
  }
LABEL_26:
  v38 = a2 + 1704;
  v39 = a2 + 1536;
  v40 = 656;
  v41 = 0;
  v42 = 68;
  if (*(_BYTE*)(*(_QWORD*)(*((_QWORD*)a2 + 15) + 32LL) + 5888LL) != 0) {
    v42 = 72;
  }
  v43 = *(float*)&a2[v42];
  do {
    v44 = *(_BYTE**)(*(_QWORD*)v36 + v40);
    if (v44 != nullptr && *v44 != 0 && (*v38 != 1 || v44[1] != 0)) {
      v18 = game_5c0040(v39, v38, v43);
      v41 = *v35 + 1;
      *v35 = v41;
    }
    v40 += 8;
    v39 += 12;
    ++v38;
  } while (v40 != 768);
  v45 = *(_QWORD*)v36;
  v46 = *(_BYTE**)(*(_QWORD*)v36 + 728LL);
  if (v46 != nullptr && *v46 != 0 && (a2[1713] != 1 || v46[1] != 0)) {
    *((float*)a2 + 411) = *(float*)(v9 + 488) * *((float*)a2 + 411);
  }
  v47 = *(_BYTE**)(v45 + 752);
  v33 = v22;
  if (v47 != nullptr && *v47 != 0 && (a2[1716] != 1 || v47[1] != 0)) {
    v48 = *((float*)a2 + 421);
    *((float*)a2 + 420) = *((float*)a2 + 420) * *(float*)(v9 + 224);
    v49 = v48 * *(float*)(v9 + 228);
    v50 = *((float*)a2 + 422);
    *((float*)a2 + 421) = v49;
    *((float*)a2 + 422) = v50 * *(float*)(v9 + 232);
  }
  v51 = v117;
  if (v41 >= 1) {
    v52 = (float)*(int*)(*(_QWORD*)(v45 + 16) + 2232LL);
    if (*((float*)a2 + 402) > v52) {
      *((float*)a2 + 402) = v52;
    }
  }
LABEL_51:
  v54 = game_5b9d90(v18, (__int64)a2);
  if (v8 == 0.0) {
    v55 = *((long double*)a2 + 55);
    *((long double*)a2 + 60) = v55;
  }
  LODWORD(v55) = *((_DWORD*)a2 + 17);
  if (*(float*)&v55 != 0.0) {
    v57 = *((int32x4_t*)a2 + 52);
    v58 = *((int8x16_t*)a2 + 53);
    v60 = *((int8x16_t*)a2 + 54);
    v59 = *((float32x4_t*)a2 + 55);
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v61).n128_i8[8] =
        vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v62).n128_i8[8] =
        vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v63 = vmulq_f32(vmulq_f32(v57, v61), v62);
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v62).n128_i8[8] =
        vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v64).n128_i8[8] =
        vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v65 = vsubq_f32(v63, vmulq_f32(vmulq_f32(v57, v62), v64));
    LANES128(v65).n128_u64[0] = LANES128_OF(vpaddq_f32(v65, v65)).n128_u64[0];
    v66 = vaddq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v65).n128_u64[0]), 0),
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v65).n128_u64[0]), 1));
    v67 = vrecpeq_f32(v66);
    v68 = vmulq_f32(v67, vrecpsq_f32(v67, v66));
    v69 = vmulq_f32(v68, vrecpsq_f32(v68, v66));
    v70 = vzip1q_s32(v57, v60);
    v71 = vzip2q_s32(v57, v60);
    v72 = vzip1q_s32(v58, COERCE_AS(int32x4_t, 0));
    v73 = vzip2q_s32(v70, v72);
    v74 = vzip1q_s32(v71, vzip2q_s32(v58, COERCE_AS(int32x4_t, 0)));
    v75 = vzip1q_s32(v70, v72);
    LANES128(v76).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v58).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v77).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v78).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v76).n128_i8[8] =
        vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v79 = LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    *(int8x8_t*)&LANES128(v77).n128_i8[8] =
        vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v74).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v58).n128_u64[1] = v79;
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v78).n128_i8[8] =
        vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    *(int8x8_t*)&LANES128(v74).n128_i8[8] =
        vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v61).n128_i8[8] =
        vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v80 = vmulq_f32(v69, vmlsq_f32(vmulq_f32(v76, v58), v74, v77));
    v81 = vmulq_f32(v69, vmlsq_f32(vmulq_f32(v77, v61), v58, v78));
    v82 = vceqzq_f32(v66);
    v83 = vmulq_f32(v69, vmlsq_f32(vmulq_f32(v74, v78), v61, v76));
    v84 = vbicq_s8(v80, v82);
    v85 = vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v80), LANES128(v59).n128_f32[0]),
                         v81, COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0]),
                         1);
    v86 = vbicq_s8(v81, v82);
    v87 = vmlsq_laneq_f32(v85, v83, v59, 2);
    v88 = vbicq_s8(v83, v82);
    v89 = vbicq_s8(v87, v82);
    v56 = COERCE_LONG_DOUBLE(vsubq_f32(
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v84, LANES128(v59).n128_f32[0]), v86,
                          COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0]), 1),
                      v88, v59, 2),
                  v89),
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v84, COERCE_FLOAT(*((_OWORD*)a2 + 60))),
                          v86, *(float32x2_t*)(a2 + 960), 1),
                      v88, *((float32x4_t*)a2 + 60), 2),
                  v89)));
    *((long double*)a2 + 61) = v56;
  }
  if (*(_BYTE*)(v7 + 1883) != 0 || *(_BYTE*)(v7 + 1884) != 0) {
    LODWORD(v56) = *((_DWORD*)a2 + 29);
    if (*(float*)&v56 < 1.0) {
      v90 = *(_DWORD*)(v7 + 1900);
      if (v90 < 1 ||
          (*(float*)& v56 =
               *(float*)&v56 + (float)(a7 / (float)(unsigned int)v90),
           *((_DWORD*)a2 + 29) = LODWORD(v56), *(float*)&v56 > 1.0)) {
        *((_DWORD*)a2 + 29) = 1065353216;
      }
    }
  }
  if ((v33 & 1) != 0 || a2[1532] == 1) {
    a5 &= *(_BYTE*)(v7 + 1876) == 0;
    if (*(_BYTE*)(v7 + 1877) != 0 || *(_BYTE*)(v7 + 1878) != 0) {
      v91 = *(_DWORD*)(v7 + 1896);
      if (v91 <= 0 ||
          (*(float*)& v56 =
               *((float*)a2 + 28) - (float)(a7 / (float)(unsigned int)v91),
           *((_DWORD*)a2 + 28) = LODWORD(v56), *(float*)&v56 < 0.0)) {
        LOBYTE(v19) = 0;
        *((_DWORD*)a2 + 28) = 0;
        return v19 & 1;
      }
    }
  }
  v92 = *a2;
  a2[1724] = 0;
  if (v92 == 0 && *(_BYTE*)(v9 + 14) != 0 && *(int*)(v9 + 604) >= 1) {
    v94 = *((_QWORD*)a2 + 20);
    *((_DWORD*)a2 + 26) = LODWORD(v55);
    LODWORD(v56) = *(_DWORD*)(v94 + 2052);
    LODWORD(v55) = *(_DWORD*)(v94 + 2048);
    v95 = *((_DWORD*)a2 + 43);
    *((_DWORD*)a2 + 43) = 1103515245 * v95 + 12345;
    if (*(int*)(v9 + 604) >= 1) {
      v96 = 88;
      v97 = 0;
      v98 = (float)(*(float*)&v55 * (float)((float)SLODWORD(v56) / 100.0)) *
            vcvts_n_f32_u32(v95, 0x20u);
      do {
        v54 = GameRoutine_5bd950(
            v51, a2 + 1, a2,
            (unsigned int)(int)(float)((float)((float)(*(float*)(*((_QWORD*)a2 +
                                                                   20) +
                                                                 2048LL) -
                                                       v98) *
                                               *((float*)a2 + 24)) *
                                       *(float*)(*(_QWORD*)(v9 + 592) + v96)),
            0, *(_QWORD*)(v9 + 592) + v96 - 88);
        ++v97;
        v96 += 96;
      } while (v97 < *(int*)(v9 + 604));
    }
  }
  if ((a5 & 1) != 0 && a2[3] != 0) {
    if (*a2 != 0) {
      if (*(_BYTE*)(*((_QWORD*)a2 + 20) + 2020LL) == 0 || v31 > v8) {
        goto LABEL_90;
      }
    }
    else if (v31 > v8) {
      goto LABEL_90;
    }
    if (*(_BYTE*)(v7 + 2032) == 0 && *a2 == 0 || v32 > v8 || a2[1] == 0) {
      v54 = game_5b99a0(v51, (float*)a2 + 21, (float*)a2 + 22, (float*)a2 + 23,
                        (__int64)(a2 + 1), (float32x4_t*)a2, 0, a7);
    }
  }
LABEL_90:
  if (*(int*)(*(_QWORD*)v36 + 136LL) >= 1) {
    v99 = *((_DWORD*)a2 + 10);
    if (v99 >= 1) {
      v100 = 128;
      v101 = 0;
      for (i = 0; i < v99; ++i) {
        if (*(_DWORD*)(*((_QWORD*)a2 + 22) + v101) != 0) {
          v103 = *((_QWORD*)a2 + 23);
          *(float*)&v55 = a7 + *(float*)(v103 + v100);
          *(_DWORD*)(v103 + v100) = LODWORD(v55);
          v99 = *((_DWORD*)a2 + 10);
        }
        v100 += 344;
        v101 += 32;
      }
    }
  }
  if (*(_BYTE*)(v7 + 1874) != 0 && (v115 & (*(_BYTE*)(v7 + 1874) == 2)) == 0) {
    *((_DWORD*)a2 + 11) = *((_DWORD*)a2 + 10);
    v105 = *((_QWORD*)a2 + 126);
    v106 = *((_QWORD*)a2 + 124);
    v107 = *((_QWORD*)a2 + 125);
    v116[0] = a2;
    if (v105 == 0) {
      goto LABEL_105;
    }
  }
  else {
    v54 = game_5bb1a0(*((_QWORD*)a2 + 19), a2, v55, v56);
    v105 = *((_QWORD*)a2 + 126);
    v106 = *((_QWORD*)a2 + 124);
    v107 = *((_QWORD*)a2 + 125);
    v116[0] = a2;
    if (v105 == 0) {
      goto LABEL_105;
    }
  }
  v108 = *(__int64 (**)(_QWORD*))(v105 + 32);
  if (v108 != nullptr) {
    v54 = v108(v116);
  }
LABEL_105:
  if (v106 != 0) {
    v109 = *(__int64 (**)(_QWORD*))(v106 + 32);
    if (v109 != nullptr) {
      v54 = v109(v116);
    }
  }
  if (v107 != 0) {
    v110 = *(__int64 (**)(_QWORD*))(v107 + 32);
    if (v110 != nullptr) {
      v54 = v110(v116);
    }
  }
  if (*((int*)a2 + 10) > 0 || *(_QWORD*)(*(_QWORD*)v36 + 824LL) != 0) {
    GameRoutine_5bbed0(v54, a2, *((float*)a2 + 19), *((float*)a2 + 20));
  }
  v111 = *a2;
  *((_OWORD*)a2 + 60) = *((_OWORD*)a2 + 55);
  *((float*)a2 + 17) = a7 + *((float*)a2 + 17);
  if (v111 != 0 && *(_BYTE*)(*((_QWORD*)a2 + 20) + 2020LL) == 0) {
    if (a2[5] != 1 || v8 <= (float)((float)(v31 + *((float*)a2 + 26)) +
                                    (float)*(int*)(v7 + 2232))) {
      goto LABEL_127;
    }
    goto LABEL_6;
  }
  if (*(_BYTE*)(v7 + 2032) != 0 && *(_BYTE*)(v9 + 14) == 0) {
    v19 = *(unsigned __int8*)(v7 + 2216);
    if (v19 == 1) {
      return v19 & 1;
    }
    v112 = v32 + (float)*(int*)(v7 + 2232);
    if (*(_BYTE*)(v7 + 1877) != 0 || *(_BYTE*)(v7 + 1878) != 0) {
      v112 = v112 + (float)*(unsigned int*)(v7 + 1896);
    }
    v113 = *(_DWORD*)(*(_QWORD*)v36 + 816LL);
    if (v113 >= 1) {
      if (v113 == 3) {
        v114 = GameRoutine_5d0ea0(a2);
        goto LABEL_137;
      }
      if (v113 == 2) {
        v114 = GameRoutine_5caeb0(a2);
      LABEL_137:
        v112 = v112 + (float)v114;
      }
    }
    LOBYTE(v19) = v8 <= v112;
    return v19 & 1;
  }
  if ((v33 & 1) == 0 && v111 == 0 && (a2[1532] & 1) == 0 ||
      v8 <= (float)((float)(v31 + *((float*)a2 + 26)) +
                    (float)*(int*)(v7 + 2232))) {
    if (*(_BYTE*)(v9 + 14) != 0) {
      LOBYTE(v19) = GameRoutine_5b4780(a2) ^ 1;
      return v19 & 1;
    }
  LABEL_127:
    LOBYTE(v19) = 1;
    return v19 & 1;
  }
LABEL_6:
  LOBYTE(v19) = 0;
  return v19 & 1;
}

void game_5bd9a0(_OWORD* a1, _OWORD* a2, __int64 a3, float a4, __int64 a5,
                 __int64 a6, float* a7)
{
  __int64 v7;
  float v8;
  unsigned int v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int128 v17;
  float v18;
  float v19;
  float result;
  __int128 v21;

  v7 = *(_QWORD*)(a3 + 160);
  v8 = *(float*)(v7 + 2112);
  v9 = *(_DWORD*)(a3 + 172);
  v10 = (float)(PSEUDO_UNFUSED(a4 * 0x1.921fb60000000p+1f)) +
        (float)(PSEUDO_UNFUSED(a4 * 0x1.921fb60000000p+1f));
  if (*(_BYTE*)(v7 + 2105) == 0) {
    v10 = *(float*)(v7 + 2120);
  }
  *(_DWORD*)(a3 + 172) = 1103515245 * v9 + 12345;
  v11 = (float)(v10 + (float)(vcvts_n_f32_u32(v9, 0x20u) * v8)) +
        (float)(PSEUDO_UNFUSED(v8 * -0x1.0000000000000p-1f));
  v12 = v11 +
        (float)(roundf(v11 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v12 > 0x1.921fb60000000p+0f) {
    v13 = 0x1.921fb60000000p+1f;
  LABEL_7:
    v12 = v13 - v12;
    v14 = -0x1.0000000000000p+0f;
    goto LABEL_8;
  }
  v14 = 0x1.0000000000000p+0f;
  if (v12 < -0x1.921fb60000000p+0f) {
    v13 = -0x1.921fb60000000p+1f;
    goto LABEL_7;
  }
LABEL_8:
  v15 = v12 * v12;
  v16 =
      v12 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
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
                                                                                            (float)(v12 *
                                                                                                    v12))) *
                                                                            (float)(v12 *
                                                                                    v12))) *
                                                         (float)(v12 * v12))) *
                                         (float)(v12 * v12))) *
                      (float)(v12 * v12)) +
              0x1.0000000000000p+0f);
  DWORD1(v17) = 0;
  DWORDn(v17, sizeof(v17) / 4 - 1) = 0;
  v18 =
      v14 *
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
                                                                                            v15)) *
                                                                            v15)) *
                                                         v15)) *
                                         v15)) *
                      v15) +
              0x1.0000000000000p+0f);
  *(float*)&v17 = v16 * (float)(*(float*)(v7 + 2140) * a7[36]);
  *((float*)&v17 + 2) = v18 * (float)(*(float*)(v7 + 2148) * a7[38]);
  *a1 = v17;
  v19 = a7[27];
  result = v16 * v19;
  *(_QWORD*)&v21 = LODWORD(result);
  *((_QWORD*)&v21 + 1) = COERCE_UNSIGNED_INT(v18 * v19);
  *a2 = v21;
  return;
}

float32x4_t game_5bdd90(_OWORD* a1, float32x4_t* a2, __int64 a3, float a4,
                        __int64 a5, __int64 a6, float* a7)
{

#pragma clang fp contract(off)

  __int64 v7;
  unsigned int v8;
  float v9;
  unsigned int v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  const float* t1;
  const float* t2;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int128 v26;
  float v27;
  unsigned int v28;
  float v29;
  float v30;
  float v31;
  float32x4_t v32;
  int8x16_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t result;

  v7 = *(_QWORD*)(a3 + 160);
  v8 = *(_DWORD*)(a3 + 172);
  v9 = a4 * 0x1.921fb6p+1f;
  v9 = v9 + v9;
  v10 = 1103515245 * v8 + 12345;
  if (*(_BYTE*)(v7 + 2105) == 0) {
    v9 = *(float*)(v7 + 2120);
  }
  v11 = __builtin_elementwise_fma(vcvts_n_f32_u32(v8, 0x20u),
                                  *(float*)(v7 + 2112), v9) +
        *(float*)(v7 + 2112) * -0.5f;
  v12 = __builtin_elementwise_fma(roundf(v11 * 0x1.45f306p-3f), -0x1.921fb6p+2f,
                                  v11);
  if (!(v12 > 0x1.921fb6p+0f)) {
    v14 = 1.0f;
    if (!(v12 < -0x1.921fb6p+0f)) {
      goto LABEL_8;
    }
    v13 = -0x1.921fb6p+1f;
  }
  else {
    v13 = 0x1.921fb6p+1f;
  }
  v12 = v13 - v12;
  v14 = -1.0f;
LABEL_8:
  v15 = v12 * v12;
  t1 = (const float*)GameData_212c190;
  t2 = (const float*)GameData_212c188;
  v16 = __builtin_elementwise_fma(-t1[0], v15, t1[1]);
  v16 = __builtin_elementwise_fma(v16, v15, -t1[2]);
  v16 = __builtin_elementwise_fma(v16, v15, t1[3]);
  v16 = __builtin_elementwise_fma(v16, v15, -t1[4]);
  v16 = v12 * __builtin_elementwise_fma(v16, v15, 1.0f);
  v20 = __builtin_elementwise_fma(-t2[0], v15, t2[1]);
  v20 = __builtin_elementwise_fma(v20, v15, -t2[2]);
  *(_DWORD*)(a3 + 172) = 1103515245 * v10 + 12345;
  v20 = __builtin_elementwise_fma(v20, v15, t2[3]);
  v20 = __builtin_elementwise_fma(v20, v15, -t2[4]);
  v20 = v14 * __builtin_elementwise_fma(v20, v15, 1.0f);
  v21 = vcvts_n_f32_u32(v10, 0x20u);
  v17 = 1.0f - *(float*)(v7 + 2128);
  v22 = __builtin_elementwise_fma(v17 * v17, 1.0f - v21, v21);
  v23 = 0.0f;
  if (!(v22 <= 0.0f)) {
    v23 = sqrtf(v22);
  }
  v24 = v16 * v23;
  v25 = v20 * v23;
  DWORD3(v26) = 0;
  v27 = *(float*)(v7 + 2140) * a7[36];
  *(float*)&v28 = v24 * v27;
  v29 = v23 * v24;
  v30 = v23 * (float)(v20 * v23);
  v31 = *(float*)(v7 + 2148) * a7[38];
  *(_QWORD*)&v26 = v28;
  LANES128(v32).n128_u64[0] = LODWORD(v29);
  *((float*)&v26 + 2) = v25 * v31;
  LANES128(v32).n128_u64[1] = LODWORD(v30);
  *a1 = v26;
  if (!(v27 > v31)) {
    LANES128(v32).n128_f32[0] = v29 * (float)(v27 / v31);
    v33 = vmulq_f32(v32, v32);
    LANES128(v33).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
            .n64_u64[0];
    LANES128(v33).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
            .n64_u64[0];
    if (!(LANES128(v33).n128_f32[0] > 0.0f)) {
      goto LABEL_12;
    }
  LABEL_14:
    LANES128(v33).n128_u64[1] = LANES128(v33).n128_u64[0];
    v35 = vrsqrteq_f32(v33);
    v36 = vmulq_f32(v35, vrsqrtsq_f32(v35, vmulq_f32(v33, v35)));
    v34 = vbicq_s8(
        vmulq_f32(v32, vmulq_f32(v36, vrsqrtsq_f32(v36, vmulq_f32(v33, v36)))),
        vceqzq_f32(v33));
    goto LABEL_15;
  }
  LANES128(v32).n128_f32[2] = v30 * (float)(v31 / v27);
  LANES128(v32).n128_u32[3] = 0;
  v33 = vmulq_f32(v32, v32);
  LANES128(v33).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
          .n64_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v33).n128_f32[0] > 0.0f) {
    goto LABEL_14;
  }
LABEL_12:
  v34 = COERCE_AS(float32x4_t, GameData_1a83090);
LABEL_15:
  result = vmulq_n_f32(v34, a7[27]);
  *a2 = result;
  return result;
}

void game_5c38e0(long double a1, long double a2, __int64 a3, int8x16_t* a4,
                 __int64 a5, float* a6)
{
  int8x16_t v6;
  float v7;
  int8x16_t v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  float v18;
  int v19;
  int v20;
  int8x16_t* v21;
  float* v22;
  __int64 v23;
  float v24;
  __int64 v25;
  unsigned __int32 v26;
  float v27;
  float32x2_t* v28;
  __int64 v29;
  unsigned int v30;
  int v31;
  float32x2_t* v32;
  int v33;
  int8x16_t* v34;
  float* v35;
  __int64 v36;
  float32x2_t* v37;
  float v38;
  float* v39;
  float v40;
  float v41;
  float v42;
  float v43;
  int v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  bool v50;
  float v51;
  float v52;
  float v53;
  int8x16_t v54;
  int8x16_t v55;
  int8x16_t v56;
  __int64 v57;
  float v58;
  __int64 v59;
  float32x4_t v60;
  float32x4_t v61;
  __int64 v62;
  float v63;
  float32x2_t* v64;

  v6 = *a4;
  v7 = *(float*)(*(_QWORD*)(a5 + 16) + 2480LL);
  LANES128(*(a4)).n128_f32[0] = v7;
  LANES128(v8).n128_f32[0] = v7;
  LANES128(v8).n128_u32[1] = *(_DWORD*)(*(_QWORD*)(a5 + 16) + 2484LL);
  *a4 = v8;
  LANES128(v8).n128_u32[2] = *(_DWORD*)(*(_QWORD*)(a5 + 16) + 2488LL);
  *a4 = v8;
  LANES128(v8).n128_u32[3] = *(_DWORD*)(*(_QWORD*)(a5 + 16) + 2492LL);
  *a4 = v8;
  v9 = *(_QWORD*)(a5 + 24);
  if (v9 != 0) {
    v10 = *(_QWORD*)(a5 + 16);
    v11 = *(unsigned __int8*)(v10 + 2461);
    if (v11 == 3) {
      v7 = *a6 * (float)*(int*)(v9 + 24);
      v12 = 16LL * (int)v7;
      LANES128(v8).n128_u32[0] = *(_DWORD*)(v9 + v12 + 1136);
      *a4 = v8;
      LANES128(v8).n128_u32[1] = *(_DWORD*)(*(_QWORD*)(a5 + 24) + v12 + 1140);
      *a4 = v8;
      LANES128(v8).n128_u32[2] = *(_DWORD*)(*(_QWORD*)(a5 + 24) + v12 + 1144);
      *a4 = v8;
      v10 = *(_QWORD*)(a5 + 16);
      v11 = *(unsigned __int8*)(v10 + 2461);
    }
    if (v11 != 2 || (v13 = *(_QWORD*)(a5 + 24),
                     (int)(v14 = *(unsigned int*)(v13 + 24)) < 1)) {
    LABEL_17:
      if (*(_BYTE*)(v10 + 2463) != 2 ||
          (v28 = *(float32x2_t**)(a5 + 24),
           (int)(v29 = LANES64(v28[3]).n64_u32[1]) < 1)) {
      LABEL_30:
        if (*(_BYTE*)(v10 + 2532) == 0) {
          return;
        }
        v39 = *(float**)(a5 + 24);
        v40 = v39[36];
        v41 = v39[38];
        v42 = v39[40];
        v43 = v39[42];
        v44 = *(unsigned __int8*)(v10 + 2535) >> 4;
        if (v44 == 2) {
          v50 = (float)((float)((float)((float)(*(float*)&a2 + v43) / v41) +
                                (float)(v42 * *a6)) -
                        floorf((float)((float)(*(float*)&a2 + v43) / v41) +
                               (float)(v42 * *a6))) < 0x1.0000000000000p-1f;
          v51 = -0x0.0p+0f;
          if (v50) {
            v51 = -0x1.0000000000000p+0f;
          }
          v49 = (float)(v51 * v40) + 0x1.0000000000000p+0f;
        }
        else {
          if (v44 != 1) {
            v45 = 0x1.0000000000000p+0f;
            if (v44 != 0) {
              goto LABEL_45;
            }
            v46 = (float)((float)((float)(*(float*)&a2 + v43) / v41) +
                          (float)(v42 * *a6)) *
                  0x1.921fb60000000p+1f;
            v47 = (float)(v46 + v46) +
                  (float)(roundf((float)(v46 + v46) * 0x1.45f3060000000p-3f) *
                          -0x1.921fb60000000p+2f);
            if (!(v47 > 0x1.921fb60000000p+0f)) {
              v52 = 0x1.0000000000000p+0f;
              if (!(v47 < -0x1.921fb60000000p+0f)) {
              LABEL_44:
                v53 = v47 * v47;
                v45 =
                    (float)((
                                float)((
                                           float)((float)(PSEUDO_UNFUSED(
                                                      v52 * (float)((float)((float)-(
                                                                                float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188) - (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188) - (float)((float)(*((float*)
                                                                                                                                                                                                                                                                                                                                                                  GameData_212c188 +
                                                                                                                                                                                                                                                                                                                                                              1) -
                                                                                                                                                                                                                                                                                                                                                            (float)(*(float*)
                                                                                                                                                                                                                                                                                                                                                                        GameData_212c188 *
                                                                                                                                                                                                                                                                                                                                                                    v53)) *
                                                                                                                                                                                                                                                                                                                                                    v53)) *
                                                                                                                                                                                                                                                         v53)) *
                                                                                                                                                                  v53)) *
                                                                            v53) +
                                                                    0x1.0000000000000p+0f))) +
                                                  0x1.0000000000000p+0f) *
                                       -0x1.0000000000000p-1f) *
                            v40) +
                    0x1.0000000000000p+0f;
              LABEL_45:
                *(float*)&a1 = vmuls_lane_f32(v45, v8, 3);
                *(_QWORD*)&a2 = 0;
                LANES128(v8).n128_u32[3] = LODWORD(a1);
                v54 = vdupq_lane_s32(
                    COERCE_AS(int32x2_t,
                              LANES128_OF(vcgtq_f32(*(float32x4_t*)&a2,
                                                    *(float32x4_t*)&a1))
                                  .n128_u64[0]),
                    0);
                v55 = v8;
                LANES128(v55).n128_u32[3] = 0;
                v56 = vbslq_s8(v54, v55, v8);
                *a4 = v56;
                if (LANES128(v56).n128_f32[3] > 0x1.0000000000000p+0f) {
                  LANES128(v56).n128_f32[3] = 0x1.0000000000000p+0f;
                  *a4 = v56;
                }
                return;
              }
              v48 = -0x1.921fb60000000p+1f;
            }
            else {
              v48 = 0x1.921fb60000000p+1f;
            }
            v47 = v48 - v47;
            v52 = -0x1.0000000000000p+0f;
            goto LABEL_44;
          }
          v49 = 0x1.0000000000000p+0f -
                (float)((float)((float)((float)((float)(*(float*)&a2 + v43) /
                                                v41) +
                                        (float)(v42 * *a6)) -
                                floorf(
                                    (float)((float)(*(float*)&a2 + v43) / v41) +
                                    (float)(v42 * *a6))) *
                        v40);
        }
        v45 = fabsf(v49);
        goto LABEL_45;
      }
      if (*(_BYTE*)(v10 + 2267) != 0) {
        v30 = v29 - 1;
        if ((_DWORD)v29 != 1) {
          v31 = *(_DWORD*)(v10 + 2288);
          v32 = v28 + 158;
          if (v31 >= 1) {
            v33 = LODWORD(a2);
            v34 = a4;
            v35 = a6;
            v36 = a5;
            *(float*)&a1 =
                GameRoutine_1a0a6a0(
                    *(float*)&a2 +
                        (float)((float)(*a6 * (float)*(_BYTE*)(v10 + 2272)) *
                                (float)v31),
                    (float)v31) /
                (float)v31;
            LODWORD(a2) = v33;
            a5 = v36;
            a6 = v35;
            a4 = v34;
            v37 = &v32[2 * v30];
            if (LANES64(v37[1]).n64_f32[1] <= *(float*)&a1) {
            LABEL_23:
              *(float32x2_t*)&a1 =
                  COERCE_AS(float32x2_t, LANES64(*(v37)).n64_u64[0]);
            LABEL_29:
              v8 = *a4;
              LANES128(v8).n128_u32[3] = LODWORD(a1);
              *a4 = v8;
              v10 = *(_QWORD*)(a5 + 16);
              goto LABEL_30;
            }
            goto LABEL_27;
          }
        LABEL_26:
          *(float*)&a1 = *(float*)&a2 / *(float*)&a1;
          v37 = &v32[2 * v30];
          if (LANES64(v37[1]).n64_f32[1] <= *(float*)&a1) {
            goto LABEL_23;
          }
        LABEL_27:
          v38 = LANES64(v28[159]).n64_f32[1];
          if (*(float*)&a1 >= v38) {
            v62 = v29 + 1;
            while (--v62 != 0) {
              v63 = v38;
              v38 = LANES64(v32[3]).n64_f32[1];
              v64 = v32 + 2;
              v32 += 2;
              if (v63 <= *(float*)&a1) {
                v32 = v64;
                if (*(float*)&a1 < v38) {
                  *(float32x2_t*)&a1 = vadd_f32(
                      v64[-2],
                      vmul_n_f32(vsub_f32(COERCE_AS(float32x2_t,
                                                    LANES64(*(v64)).n64_u64[0]),
                                          v64[-2]),
                                 (float)(*(float*)&a1 - v63) /
                                     (float)(v38 - v63)));
                  goto LABEL_29;
                }
              }
            }
            *(_QWORD*)&a1 = 0;
            goto LABEL_29;
          }
        }
      }
      else {
        v30 = v29 - 1;
        if ((_DWORD)v29 != 1) {
          v32 = v28 + 158;
          goto LABEL_26;
        }
      }
      *(float32x2_t*)&a1 = v28[158];
      goto LABEL_29;
    }
    if (*(_BYTE*)(v10 + 2266) != 0) {
      v15 = v14 - 1;
      if ((_DWORD)v14 != 1) {
        v16 = *(_DWORD*)(v10 + 2284);
        v17 = v13 + 1136;
        if (v16 >= 1) {
          v18 = (float)v16;
          v19 = LODWORD(a1);
          v20 = LODWORD(a2);
          v21 = a4;
          v22 = a6;
          v23 = a5;
          *(float*)&a1 = GameRoutine_1a0a6a0(
              *(float*)&a2 +
                  (float)((float)(*a6 * (float)*(_BYTE*)(v10 + 2271)) *
                          (float)v16),
              (float)v16);
          LODWORD(a2) = v20;
          a5 = v23;
          a6 = v22;
          a4 = v21;
          v24 = *(float*)&a1 / v18;
          LODWORD(a1) = v19;
          v25 = v17 + 16LL * v15;
          if (*(float*)(v25 + 12) <= v24) {
          LABEL_10:
            LANES128(v8).n128_u32[0] = *(_DWORD*)v25;
            v26 = *(_DWORD*)(v25 + 8);
            LANES128(v8).n128_u32[1] = *(_DWORD*)(v25 + 4);
          LABEL_16:
            LANES128(v8).n128_u32[3] = HIDWORD(LANES128(*(a4)).n128_u64[1]);
            LANES128(v8).n128_u32[2] = v26;
            *a4 = v8;
            v10 = *(_QWORD*)(a5 + 16);
            goto LABEL_17;
          }
          goto LABEL_14;
        }
      LABEL_13:
        v24 = *(float*)&a2 / *(float*)&a1;
        v25 = v17 + 16LL * v15;
        if (*(float*)(v25 + 12) <= (float)(*(float*)&a2 / *(float*)&a1)) {
          goto LABEL_10;
        }
      LABEL_14:
        v27 = *(float*)(v13 + 1148);
        if (v24 >= v27) {
          v57 = v14 + 1;
          while (--v57 != 0) {
            v58 = v27;
            v27 = *(float*)(v17 + 28);
            v59 = v17 + 16;
            v17 += 16;
            if (v58 <= v24) {
              v17 = v59;
              if (v24 < v27) {
                LANES128(v60).n128_u64[0] = *(_QWORD*)(v59 - 16);
                LANES128(v60).n128_u64[1] = *(unsigned int*)(v59 - 8);
                LANES128(v61).n128_u64[0] = *(_QWORD*)v59;
                LANES128(v61).n128_u64[1] = *(unsigned int*)(v59 + 8);
                v8 = vaddq_f32(
                    v60, vmulq_n_f32(vsubq_f32(v61, v60),
                                     (float)(v24 - v58) / (float)(v27 - v58)));
                v26 = LANES128(v8).n128_u32[2];
                goto LABEL_16;
              }
            }
          }
          v26 = 0;
          LANES128(v8).n128_u64[0] = 0;
          goto LABEL_16;
        }
      }
    }
    else {
      v15 = v14 - 1;
      if ((_DWORD)v14 != 1) {
        v17 = v13 + 1136;
        goto LABEL_13;
      }
    }
    LANES128(v8).n128_u32[0] = *(_DWORD*)(v13 + 1136);
    v26 = *(_DWORD*)(v13 + 1144);
    LANES128(v8).n128_u32[1] = *(_DWORD*)(v13 + 1140);
    goto LABEL_16;
  }
}

long double game_5c4020(_OWORD* a1, float32x4_t* a2)
{
  float32x4_t v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
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
  bool v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  bool v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  __int128 v45;
  unsigned int v46;
  unsigned int v47;
  __int128 v48;
  __int128 v49;

  v2 = *a2;
  v3 = COERCE_FLOAT(*a2) +
       (float)(roundf(0x1.45f3060000000p-3f * COERCE_FLOAT(*a2)) *
               -0x1.921fb60000000p+2f);
  if (!(v3 > 0x1.921fb60000000p+0f)) {
    v4 = 0x1.0000000000000p+0f;
    v5 = -0x1.921fb60000000p+1f - v3;
    v6 = *(float*)GameData_212c190;
    v7 = *((float*)GameData_212c190 + 1);
    v8 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    v9 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    v10 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    if (v3 < -0x1.921fb60000000p+0f) {
      v4 = -0x1.0000000000000p+0f;
    }
    else {
      v5 = v3;
    }
    if (v3 < -0x1.921fb60000000p+0f) {
      v3 = -0x1.921fb60000000p+1f - v3;
    }
  }
  else {
    v4 = -0x1.0000000000000p+0f;
    v5 = 0x1.921fb60000000p+1f - v3;
    v6 = *(float*)GameData_212c190;
    v7 = *((float*)GameData_212c190 + 1);
    v8 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    v9 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    v10 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    v3 = 0x1.921fb60000000p+1f - v3;
  }
  v11 = -0x1.0000000000000p+0f;
  v12 = v3 * v3;
  v13 = *(float*)GameData_212c188;
  v14 = *((float*)GameData_212c188 + 1);
  v15 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v16 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v17 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v18 = roundf(vmuls_lane_f32(0x1.45f3060000000p-3f,
                              COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0]),
                              1));
  v19 = LANES128(v2).n128_f32[1] + (float)(v18 * -0x1.921fb60000000p+2f);
  v20 = 0x1.921fb60000000p+1f - v19;
  if (!(v19 < -0x1.921fb60000000p+0f)) {
    v21 = LANES128(v2).n128_f32[1] + (float)(v18 * -0x1.921fb60000000p+2f);
  }
  else {
    v21 = -0x1.921fb60000000p+1f - v19;
  }
  v22 = -0x1.921fb60000000p+1f - v19;
  if (!(v19 < -0x1.921fb60000000p+0f)) {
    v23 = 0x1.0000000000000p+0f;
  }
  else {
    v23 = -0x1.0000000000000p+0f;
  }
  if (!(v19 < -0x1.921fb60000000p+0f)) {
    v22 = LANES128(v2).n128_f32[1] + (float)(v18 * -0x1.921fb60000000p+2f);
  }
  v24 = v19 <= 0x1.921fb60000000p+0f;
  if (!(v19 > 0x1.921fb60000000p+0f)) {
    v25 = v21;
  }
  else {
    v25 = 0x1.921fb60000000p+1f - v19;
  }
  if (v24) {
    v20 = v22;
  }
  if (v24) {
    v26 = v23;
  }
  else {
    v26 = -0x1.0000000000000p+0f;
  }
  v27 = v20 * v20;
  v28 = LANES128(v2).n128_f32[2] +
        (float)(roundf(vmuls_lane_f32(0x1.45f3060000000p-3f, v2, 2)) *
                -0x1.921fb60000000p+2f);
  v29 = 0x1.921fb60000000p+1f - v28;
  v30 = -0x1.921fb60000000p+1f - v28;
  if (v28 < -0x1.921fb60000000p+0f) {
    v31 = -0x1.0000000000000p+0f;
  }
  else {
    v30 = v28;
    v31 = 0x1.0000000000000p+0f;
  }
  v32 = -0x1.921fb60000000p+1f - v28;
  if (!(v28 < -0x1.921fb60000000p+0f)) {
    v32 = v28;
  }
  v33 = v28 <= 0x1.921fb60000000p+0f;
  if (!(v28 > 0x1.921fb60000000p+0f)) {
    v34 = v30;
  }
  else {
    v34 = 0x1.921fb60000000p+1f - v28;
  }
  if (v33) {
    v35 = v32;
  }
  else {
    v35 = v29;
  }
  if (v33) {
    v11 = v31;
  }
  v36 =
      v34 *
      (float)((float)((float)-(
                          float)(v10 -
                                 (float)((float)(v9 +
                                                 (float)((float)-(
                                                             float)(v8 -
                                                                    (float)((float)(v7 -
                                                                                    (float)(v6 *
                                                                                            (float)(v34 *
                                                                                                    v34))) *
                                                                            (float)(v34 *
                                                                                    v34))) *
                                                         (float)(v34 * v34))) *
                                         (float)(v34 * v34))) *
                      (float)(v34 * v34)) +
              0x1.0000000000000p+0f);
  v37 =
      v4 *
      (float)((float)((float)-(
                          float)(v17 -
                                 (float)((float)(v16 +
                                                 (float)((float)-(
                                                             float)(v15 -
                                                                    (float)((float)(v14 -
                                                                                    (float)(v13 *
                                                                                            v12)) *
                                                                            v12)) *
                                                         v12)) *
                                         v12)) *
                      v12) +
              0x1.0000000000000p+0f);
  v38 =
      v26 *
      (float)((float)((float)-(
                          float)(v17 -
                                 (float)((float)(v16 +
                                                 (float)((float)-(
                                                             float)(v15 -
                                                                    (float)((float)(v14 -
                                                                                    (float)(v13 *
                                                                                            v27)) *
                                                                            v27)) *
                                                         v27)) *
                                         v27)) *
                      v27) +
              0x1.0000000000000p+0f);
  v39 =
      v5 *
      (float)((float)((float)-(
                          float)(v10 -
                                 (float)((float)(v9 +
                                                 (float)((float)-(
                                                             float)(v8 -
                                                                    (float)((float)(v7 -
                                                                                    (float)(v6 *
                                                                                            (float)(v5 *
                                                                                                    v5))) *
                                                                            (float)(v5 *
                                                                                    v5))) *
                                                         (float)(v5 * v5))) *
                                         (float)(v5 * v5))) *
                      (float)(v5 * v5)) +
              0x1.0000000000000p+0f);
  v40 =
      v25 *
      (float)((float)((float)-(
                          float)(v10 -
                                 (float)((float)(v9 +
                                                 (float)((float)-(
                                                             float)(v8 -
                                                                    (float)((float)(v7 -
                                                                                    (float)(v6 *
                                                                                            (float)(v25 *
                                                                                                    v25))) *
                                                                            (float)(v25 *
                                                                                    v25))) *
                                                         (float)(v25 * v25))) *
                                         (float)(v25 * v25))) *
                      (float)(v25 * v25)) +
              0x1.0000000000000p+0f);
  v41 =
      v11 *
      (float)((float)((float)-(
                          float)(v17 -
                                 (float)((float)(v16 +
                                                 (float)((float)-(
                                                             float)(v15 -
                                                                    (float)((float)(v14 -
                                                                                    (float)(v13 *
                                                                                            (float)(v35 *
                                                                                                    v35))) *
                                                                            (float)(v35 *
                                                                                    v35))) *
                                                         (float)(v35 * v35))) *
                                         (float)(v35 * v35))) *
                      (float)(v35 * v35)) +
              0x1.0000000000000p+0f);
  *(float*)&v42 =
      (float)(PSEUDO_UNFUSED(v37 * v41)) + (float)((float)(v39 * v36) * v40);
  *(float*)&v43 =
      (float)(PSEUDO_UNFUSED(v39 * v36)) + (float)((float)(v37 * v41) * v40);
  *(float*)&v44 = v37 * v38;
  DWORDn(v45, sizeof(v45) / 4 - 1) = 0;
  *(float*)&v46 = -(float)((float)(PSEUDO_UNFUSED(v37 * v36)) -
                           (float)((float)(v39 * v41) * v40));
  *(float*)&v47 = -(float)((float)(PSEUDO_UNFUSED(v39 * v41)) -
                           (float)((float)(v37 * v36) * v40));
  *(float*)&v45 = v38 * v41;
  DWORDn(v48, sizeof(v48) / 4 - 1) = 0;
  *(_QWORD*)&v49 = __PAIR64__(v47, v43);
  *(_QWORD*)&v48 = __PAIR64__(v42, v46);
  *((float*)&v45 + 1) = v38 * v36;
  *((float*)&v45 + 2) = -v40;
  *((_QWORD*)&v49 + 1) = v44;
  *((float*)&v48 + 2) = v39 * v38;
  *a1 = v45;
  a1[1] = v48;
  a1[2] = v49;
  a1[3] = GameData_1a82dc0;
  return *(long double*)&GameData_1a82dc0;
}

__int64* game_5e28e0(__int64* result, int a2)
{
  __int64* v2;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned int v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 (*v18)(_QWORD*, __int64, __int64, __int64);
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  _QWORD v24[8];

  if (result[12] != 0) {
    v2 = result;
    result = Model_5e2b40(result + 2);
    if (((1 << a2) & *((unsigned __int8*)v2 + 45)) != 0 ||
        *(_WORD*)(*v2 + 160) != 0) {
      v4 = GameRoutine_5fcb50(v2[8] + 72LL * a2);
      {
        v5 = *v2;
        __asm__ volatile("" ::"r"(v5));
      }
      *((_BYTE*)v2 + 45) &= ~(unsigned __int8)(1 << a2);
      {
        v6 = *((_DWORD*)v2 + 9);
        __asm__ volatile("" ::"r"(v6));
      }
      if (*(_WORD*)(v5 + 158) != 0) {
        v7 = v4;
        v8 = 0;
        {
          v23 = v2[3] + 4LL * (int)(v6 * a2);
          __asm__ volatile("" ::"r"(v23));
        }
        v21 = a2;
        {
          v22 = *(_QWORD*)(v5 + 120);
          __asm__ volatile("" ::"r"(v22));
        }
        {
          v9 = ((unsigned __int64)*(unsigned __int16*)(v5 + 158) + 31) >> 5;
          __asm__ volatile("" ::"r"(v9));
        }
        do {
          {
            v10 = *(_DWORD*)(v22 + 4 * v8) | *(_DWORD*)(v23 + 4 * v8);
            __asm__ volatile("" ::"r"(v10));
          }
          if (v10 != 0) {
            do {
              while (1) {
                v13 = __clz((unsigned int)(v10));
                v11 = (32 * v8) | 0x1F;
                {
                  v14 = *(_QWORD*)(*v2 + 80) + 32 * (v11 - v13);
                  __asm__ volatile("" ::"r"(v14));
                }
                {
                  v15 = v2[9];
                  __asm__ volatile("" ::"r"(v15));
                }
                {
                  v16 = *(int*)(v14 + 20);
                  __asm__ volatile("" ::"r"(v16));
                }
                {
                  v17 = *(unsigned __int16*)(v14 + 18);
                  __asm__ volatile("" ::"r"(v17));
                }
                v18 = *(__int64 (**)(_QWORD*, __int64, __int64, __int64))v14;
                if (*(_QWORD*)v14 != 0) {
                  break;
                }
                ResFile_5e6300(*(_QWORD*)(*v2 + 80) + 32 * (v11 - v13),
                               v7 + v16, v15 + v17);
                v12 = 0x80000000 >> v13 == v10;
                v10 ^= 0x80000000 >> v13;
                if (v12) {
                  goto LABEL_6;
                }
              }
              {
                v19 = v2[13];
                __asm__ volatile("" ::"r"(v19));
              }
              __builtin_memset(v24, 0, sizeof(v24));
              v20 = v18(v24, v15 + v17, v14, v19);
              GameRoutine_1a0b950(v7 + v16, (__int64)v24,
                                  (((v20 << 30) + 3221225472LL) >> 30) &
                                      0xFFFFFFFFFFFFFFFCLL);
              v12 = 0x80000000 >> v13 == v10;
              v10 ^= 0x80000000 >> v13;
            } while (!v12);
          }
        LABEL_6:
          ++v8;
        } while (v8 != v9);
        {
          v6 = *((_DWORD*)v2 + 9);
          __asm__ volatile("" ::"r"(v6));
        }
        a2 = v21;
      }
      if (v6 >= 1) {
        GameRoutine_1a0ba50(v2[3] + 4LL * (int)(v6 * a2), 0,
                            4LL * (unsigned int)v6);
      }
      GameRoutine_5fcb80(v2[8] + 72LL * a2);
      return (__int64*)GameRoutine_5fcb70(v2[8] + 72LL * a2);
    }
  }
  return result;
}

_QWORD* game_6b83e0(_QWORD* result, __int64 a2, __int64 a3, __int64 a4,
                    __int64 a5, __int64 a6)
{
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned int* v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  unsigned int* v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  bool v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  struct {
    __int64 v56[2];
    char* v57;
    __int64 v58;
    _QWORD v59[2];
  } f_;
  unsigned __int128 v60;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = result[7] + result[6] - 1LL;
  v7 = *(_QWORD*)(*(_QWORD*)(result[3] + 8 * (v6 >> 9)) + 8 * (v6 & 0x1FF));
  if (v7 == 0) {
    return result;
  }
  v9 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(f_.v56, *(_QWORD*)(a2 + 16),
                                                    *(_QWORD*)(a2 + 8)),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v10 = *(_QWORD*)(a2 + 8);
    f_.v56[0] = *(_QWORD*)a2;
    f_.v56[1] = v10;
    f_.v57 = *(char**)(a2 + 16);
  }
  if ((*(_BYTE*)v7 & 0x7F) != 8 ||
      ((f_.v56[0] & 1) == 0 ? (v11 = (char*)f_.v56 + 1) : (v11 = f_.v57),
       v12 = GameRoutine_1a09c70(v11), v13 = *(unsigned int**)(v7 + 1),
       f_.v59[0] = v11, f_.v59[1] = v12,
       v60 = game_6b7f00_pair(v13, 0, v13, v13[1], f_.v59),
       result = (_QWORD*)(unsigned __int64)v60,
       v14 = (unsigned __int64)(v60 >> 64), v14 == v13[1])) {
    v15 = 0;
    if ((f_.v56[0] & 1) == 0) {
      goto LABEL_20;
    }
  LABEL_16:
    if (f_.v57 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, f_.v57),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    goto LABEL_20;
  }
  v16 = *(unsigned int*)result;
  if (v14 >= v16) {
    v18 = v14 - v16;
    v19 = __clz(v18 + 16);
    v17 = *(_QWORD*)(result[2] + 8 * (27 - v19) + 8) +
          32LL * (unsigned int)(v18 - (*GameData_212ce38)[28 - v19]);
  }
  else {
    v17 = result[1] + 32 * v14;
  }
  v15 = v17 + 16;
  if ((f_.v56[0] & 1) != 0) {
    goto LABEL_16;
  }
LABEL_20:
  if (v15 != 0 && (*(_BYTE*)v15 & 0x7F) == 7) {
    v21 = *(unsigned int**)(v15 + 1);
    v22 = *(_QWORD**)(a2 + 24);
    v23 = v22[1];
    v24 = v21[1];
    v25 = 0xAAAAAAAAAAAAAAABLL * ((v23 - *v22) >> 3);
    if (v24 <= v25) {
      if (v24 < v25) {
        v26 = *v22 + 24LL * (unsigned int)v24;
        if (v26 != v23) {
          v27 = v22[1];
          v28 = fw_memory_g_heap_manager_ptr;
          do {
            v29 = *(_BYTE*)(v27 - 24);
            v27 -= 24;
            if ((v29 & 1) != 0) {
              v30 = *(_QWORD*)(v23 - 8);
              if (v30 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) != 0) {
                  v31 = 128;
                }
                else {
                  v31 = 56;
                }
                result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)v28 + v31, v30),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            v23 = v27;
          } while (v27 != v26);
        }
        v22[1] = v26;
      }
    }
    else {
      result =
          GameRoutine_6b87d0(*(__int64**)(a2 + 24), v24 - v25, a3, a4, a5, a6),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v32 = v21[1];
    if ((_DWORD)v32 != 0) {
      v33 = 16 * v32;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      do {
        v37 = *v21;
        if (v36 >= v37) {
          v39 = v36 - v37;
          v40 = __clz(v39 + 16);
          v38 = *(_QWORD*)(*((_QWORD*)v21 + 2) + 8 * (27 - v40) + 8) +
                16LL * (unsigned int)(v39 - (*GameData_212ce38)[28 - v40]);
        }
        else {
          v38 = *((_QWORD*)v21 + 1) + v35;
        }
        v41 = v9[3];
        v42 = v9[4];
        v43 = ((v42 - v41) << 6) - 1;
        if (v42 == v41) {
          v43 = 0;
        }
        v44 = v9[7] + v9[6];
        if (v43 == v44) {
          GameRoutine_6b71e0(v9 + 2),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v41 = v9[3];
          v44 = v9[7] + v9[6];
        }
        *(_QWORD*)(*(_QWORD*)(v41 + 8 * (v44 >> 9)) + 8 * (v44 & 0x1FF)) = v38;
        ++v9[7];
        v45 = **(_QWORD**)(a2 + 24);
        LOWORD(f_.v56[0]) = 0;
        f_.v58 = v45 + v34;
        result = GameRoutine_6b8990(v9, f_.v56),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((f_.v56[0] & 1) != 0 && f_.v57 != nullptr) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v46 = 128;
          }
          else {
            v46 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
              fw_memory_g_heap_manager + v46, f_.v57),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v48 = v9[3];
        v47 = v9[4];
        v49 = v47 - v48;
        v50 = v47 == v48;
        v52 = v9[6];
        v51 = v9[7];
        v53 = (v49 << 6) - 1;
        if (v50) {
          v53 = 0;
        }
        v9[7] = v51 - 1;
        if ((unsigned __int64)(v53 - (v51 + v52) + 1) >= 0x400) {
          v54 = *(_QWORD*)(v47 - 8);
          if (v54 != 0) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v55 = 128;
            }
            else {
              v55 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
                fw_memory_g_heap_manager + v55, v54),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v47 = v9[4];
          }
          v9[4] = v47 - 8;
        }
        ++v36;
        v35 += 16;
        v34 += 24;
      } while (v33 != v35);
    }
  }
  return result;
}

__int64 game_6d00c0(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int* v7;
  unsigned int* v8;
  __int64* v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  char* v23;
  int v24;
  int v25;
  int v27;
  __int64 result;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  bool v34;
  int v35;
  __int64 v36;
  int v37;
  int v38;

  game_Unit_SetPollution(a1, 0);
  v2 = *(unsigned __int8*)(a1 + 500);
  if (*(_BYTE*)(a1 + 500) != 0) {
    v3 = Unit_6c9ef0(a1);
    *(_BYTE*)(a1 + 500) = v3 & (v3 >> 31);
    if (v2 != (unsigned __int8)(v3 & (v3 >> 31))) {
      v4 = *(unsigned __int16*)(a1 + 492);
      v5 = game_Unit_GetParam(a1);
      if (*(_WORD*)(a1 + 494) != 0 && v4 != *(unsigned __int16*)(a1 + 494)) {
        *(_WORD*)(a1 + 494) = 0;
      }
      if (v5 >= (__int16)v4) {
        v6 = (__int16)v4;
      }
      else {
        v6 = v5;
      }
      if ((v4 & 0x8000u) != 0) {
        v6 = 0;
      }
      if (v6 != *(__int16*)(a1 + 492)) {
        *(_WORD*)(a1 + 492) = v6;
      }
    }
  }
  Unit_6cb490(a1);
  v7 = *(unsigned int**)(a1 + 1488);
  v8 = *(unsigned int**)(a1 + 1496);
  v9 = GameData_212c880[0];
  while (v7 != v8) {
    v10 = *v7;
    if ((*v7 & 0x7F000) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * (v10 & 0xFFF)) +
                  104LL) != 9) {
      *v7 = v10 & 0xFFF80FFF;
    }
    ++v7;
  }
  UnitItemList_710ea0(a1 + 828);
  v11 = *(_DWORD*)(a1 + 1872);
  v12 = v11 & 0xFFF;
  if ((v11 & 0xFFF) == 0) {
    goto LABEL_53;
  }
  v13 = *(char**)(a1 + 608);
  v14 = *(char**)(a1 + 600);
  v15 = v13 - v14;
  if ((int)((unsigned __int64)(v13 - v14) >> 2) < 1) {
    v18 = 0;
    goto LABEL_48;
  }
  v16 = (v15 >> 2) & 7;
  if (((v15 >> 2) & 0x7FFFFFFF) - 1 < 7) {
    v17 = 0;
    v18 = 255;
    if (v16 == 0) {
      goto LABEL_48;
    }
    goto LABEL_44;
  }
  v19 = v14 + 18;
  v20 = 0;
  v21 = -8LL * ((v15 >> 5) & 0xFFFFFFF);
  v18 = 255;
  do {
    v20 -= 8;
    if (v18 >= *(v19 - 16)) {
      v18 = *(v19 - 16);
    }
    if (v18 >= *(v19 - 12)) {
      v18 = *(v19 - 12);
    }
    if (v18 >= *(v19 - 8)) {
      v18 = *(v19 - 8);
    }
    if (v18 >= *(v19 - 4)) {
      v18 = *(v19 - 4);
    }
    if (v18 >= *v19) {
      v18 = *v19;
    }
    if (v18 >= v19[4]) {
      v18 = v19[4];
    }
    if (v18 >= v19[8]) {
      v18 = v19[8];
    }
    v22 = v19[12];
    v19 += 32;
    if (v18 >= v22) {
      v18 = v22;
    }
  } while (v21 != v20);
  v17 = -v20;
  if (v16 != 0) {
  LABEL_44:
    v23 = &v14[4 * v17 + 2];
    do {
      v25 = *v23;
      v23 += 4;
      v24 = v25;
      if (v18 >= v25) {
        v18 = v24;
      }
      --v16;
    } while (v16 != 0);
  }
LABEL_48:
  v38 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8 * v12) + 273LL);
  __asm__ volatile("" ::"r"(v38));
  if (v18 < v38 && v14 != v13) {
    do {
      if ((*(_DWORD*)(a1 + 1872) & 0xFFF) == 0) {
        goto LABEL_69;
      }
      v31 = *v14;
      v32 = v14[1];
      if ((v32 | v31) < 0 ||
          ((v33 = *(_DWORD*)(a1 + 592)) > v31 ? (v34 = v33 <= v32)
                                              : (v34 = true),
           v34)) {
        LOBYTE(v35) =
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                 8LL * (*(_DWORD*)(a1 + 1872) & 0xFFF)) +
                      273LL);
        if ((_BYTE)v35 == 0) {
          goto LABEL_68;
        }
        v36 = -1;
      }
      else {
        LODWORD(v36) = v31 + v33 * v32;
        if ((v36 & 0x80000000) != 0) {
          v37 = 0;
        }
        else {
          v37 = *(char*)(*(_QWORD*)(a1 + 600) + 4LL * (unsigned int)v36 + 2);
        }
        v35 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                             8LL * (*(_DWORD*)(a1 + 1872) &
                                                    0xFFF)) +
                                  273LL);
        if (v37 >= v35) {
          goto LABEL_68;
        }
        v36 = (int)v36;
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 600) + 4 * v36 + 2) = v35;
    LABEL_68:
      *(_BYTE*)(a1 + 805) = 0;
    LABEL_69:
      v14 += 4;
    } while (v14 != v13);
  }
LABEL_53:
  if (*(__int16*)(a1 + 492) <= 1) {
    v27 = 1;
  }
  else {
    v27 = *(__int16*)(a1 + 492);
  }
  result = game_Unit_GetParam(a1);
  if (*(_WORD*)(a1 + 494) != 0 &&
      *(unsigned __int16*)(a1 + 494) != (unsigned __int16)v27) {
    *(_WORD*)(a1 + 494) = 0;
  }
  if ((int)result >= v27) {
    v29 = v27;
  }
  else {
    v29 = result;
  }
  if (v29 != *(__int16*)(a1 + 492)) {
    *(_WORD*)(a1 + 492) = v29;
  }
  v30 = *(_DWORD*)(a1 + 416);
  if ((v30 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v30 | 0x10000000;
    game_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    result = game_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  return result;
}

__int64 game_6d69a0(__int64 a1)
{

#pragma clang fp contract(fast)

  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  int v8;
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
  int v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int* v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int* v53;
  __int64 v54;
  int v55;
  __int64 v56;
  int v57;
  int v58;
  int v59;
  __int64 v60;
  int* v61;
  __int64 v62;
  int v63;
  __int64 v64;
  int v65;
  int v66;
  int v67;
  __int64 v68;
  __int64 v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;

  v2 = *(__int64**)(*(_QWORD*)(a1 + 392) + 24LL);
  v3 = game_g_shared_system_skills_ptr;
  v4 = *(unsigned int*)((char*)((__int64*)0x1F8LL) +
                        game_g_shared_system_skills_ptr + 4);
  v5 = *v2;
  v6 = v2[1] - *v2;
  v74 = *(_DWORD*)((_BYTE*)((__int64*)0x1F8LL) +
                   game_g_shared_system_skills_ptr + 4) &
        0xFFF;
  if (((v4 >> 5) & 0x7F) + 1 <= v6 >> 2 &&
      ((*(_DWORD*)(v5 + 4 * ((v4 >> 5) & 0x7F)) >> v4) & 1) != 0) {
    result = game_HasActiveSkill_843420(&v74, v2);
    if ((result & 1) != 0) {
      return result;
    }
  }
  LOBYTE(v74) = 0;
  v8 = game_Unit_GetParam_alt1(a1, &v74, 1);
  if (*(_BYTE*)(a1 + 624) != 2) {
    if (*(_BYTE*)(a1 + 624) != 0) {
      goto LABEL_54;
    }
    v9 = game_9a28e0(42);
    if (game_GameModeData_instance_ != 0 &&
        (v10 = game_GameVariableTable_Find_alt1(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v9)) != 0) {
      v11 = *(unsigned int*)(v10 + 32);
    }
    else {
      v11 = 0;
    }
    GameRoutine_6d7480(a1, v11);
    v74 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1F4LL) + v3) & 0xFFF;
    if ((UnitSkillList_84cc00(a1 + 1360, &v74, 1) & 1) != 0) {
      v15 = *(_QWORD*)(a1 + 1400);
      v16 = *(_QWORD*)(a1 + 1392);
      *(_QWORD*)(a1 + 1448) = 0;
      v17 = v15 - v16;
      *(_QWORD*)(a1 + 1440) = 0;
      if ((int)((unsigned __int64)(v15 - v16) >> 2) >= 1) {
        v18 = (int)(v17 >> 2);
        v19 = v18 <= 1 ? 1LL : (int)(v17 >> 2);
        v20 = *GameData_212c880[0];
        if (v18 >= 2) {
          v37 = (int*)(v16 + 4);
          v21 = 0;
          v22 = 0;
          v23 = 0;
          v24 = 0;
          v25 = 0;
          do {
            v25 += 2;
            v38 = *(_QWORD*)(*(_QWORD*)(v20 + 64) + 8LL * (*(v37 - 1) & 0xFFF));
            v39 = v24 | (1 << *(_BYTE*)(v38 + 104));
            *(_WORD*)(a1 + 1440) = v39;
            v40 = (1LL << *(_BYTE*)(v38 + 250)) | v23;
            *(_QWORD*)(a1 + 1448) = v40;
            v41 = (1 << *(_BYTE*)(v38 + 115)) | v22;
            *(_DWORD*)(a1 + 1444) = v41;
            v42 = *(unsigned __int16*)(*(_QWORD*)(v38 + 24) + 1064LL) | v21;
            *(_WORD*)(a1 + 1442) = v42;
            v43 = *v37;
            v37 += 2;
            v44 = *(_QWORD*)(*(_QWORD*)(v20 + 64) + 8LL * (v43 & 0xFFF));
            v24 = v39 | (1 << *(_BYTE*)(v44 + 104));
            *(_WORD*)(a1 + 1440) = v24;
            v23 = (1LL << *(_BYTE*)(v44 + 250)) | v40;
            *(_QWORD*)(a1 + 1448) = v23;
            v22 = (1 << *(_BYTE*)(v44 + 115)) | v41;
            *(_DWORD*)(a1 + 1444) = v22;
            v21 = *(unsigned __int16*)(*(_QWORD*)(v44 + 24) + 1064LL) | v42;
            *(_WORD*)(a1 + 1442) = v21;
          } while ((v19 & 0x7FFFFFFFFFFFFFFELL) != v25);
        }
        else {
          LOWORD(v21) = 0;
          v22 = 0;
          v23 = 0;
          LOWORD(v24) = 0;
          v25 = 0;
        }
        if ((v19 & 1) != 0) {
          v45 = *(_QWORD*)(*(_QWORD*)(v20 + 64) +
                           8LL * (*(_DWORD*)(v16 + 4 * v25) & 0xFFF));
          *(_WORD*)(a1 + 1440) = v24 | (1 << *(_BYTE*)(v45 + 104));
          *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v45 + 250)) | v23;
          *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v45 + 115)) | v22;
          *(_WORD*)(a1 + 1442) = *(_WORD*)(*(_QWORD*)(v45 + 24) + 1064LL) | v21;
        }
      }
    }
    v46 = *(unsigned __int8*)(a1 + 498);
    v47 = game_9a28e0(41);
    v48 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v49 = game_GameVariableTable_Find_alt1(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v47);
      if (v49 == 0) {
        if (v46 > 0) {
          goto LABEL_53;
        }
      LABEL_36:
        v74 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1F0LL) + v3) & 0xFFF;
        if ((UnitSkillList_84cc00(a1 + 1360, &v74, 1) & 1) == 0) {
          goto LABEL_53;
        }
        v50 = *(_QWORD*)(a1 + 1400);
        v27 = *(_QWORD*)(a1 + 1392);
        *(_QWORD*)(a1 + 1448) = 0;
        v51 = v50 - v27;
        *(_QWORD*)(a1 + 1440) = 0;
        if ((int)((unsigned __int64)(v50 - v27) >> 2) < 1) {
          goto LABEL_53;
        }
        v52 = (int)(v51 >> 2);
        if (v52 <= 1) {
          v30 = 1;
        }
        else {
          v30 = (int)(v51 >> 2);
        }
        v31 = *GameData_212c880[0];
        if (v52 < 2) {
          LOWORD(v32) = 0;
          v33 = 0;
          v34 = 0;
          LOWORD(v35) = 0;
          v36 = 0;
          if ((v30 & 1) == 0) {
            goto LABEL_53;
          }
          goto LABEL_52;
        }
        v61 = (int*)(v27 + 4);
        v32 = 0;
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        do {
          v36 += 2;
          v62 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*(v61 - 1) & 0xFFF));
          v63 = v35 | (1 << *(_BYTE*)(v62 + 104));
          *(_WORD*)(a1 + 1440) = v63;
          v64 = (1LL << *(_BYTE*)(v62 + 250)) | v34;
          *(_QWORD*)(a1 + 1448) = v64;
          v65 = (1 << *(_BYTE*)(v62 + 115)) | v33;
          *(_DWORD*)(a1 + 1444) = v65;
          v66 = *(unsigned __int16*)(*(_QWORD*)(v62 + 24) + 1064LL) | v32;
          *(_WORD*)(a1 + 1442) = v66;
          v67 = *v61;
          v61 += 2;
          v68 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (v67 & 0xFFF));
          v35 = v63 | (1 << *(_BYTE*)(v68 + 104));
          *(_WORD*)(a1 + 1440) = v35;
          v34 = (1LL << *(_BYTE*)(v68 + 250)) | v64;
          *(_QWORD*)(a1 + 1448) = v34;
          v33 = (1 << *(_BYTE*)(v68 + 115)) | v65;
          *(_DWORD*)(a1 + 1444) = v33;
          v32 = *(unsigned __int16*)(*(_QWORD*)(v68 + 24) + 1064LL) | v66;
          *(_WORD*)(a1 + 1442) = v32;
        } while ((v30 & 0x7FFFFFFFFFFFFFFELL) != v36);
        goto LABEL_51;
      }
      v48 = *(_DWORD*)(v49 + 32);
    }
    if (v48 < v46) {
      goto LABEL_53;
    }
    goto LABEL_36;
  }
  v12 = game_9a28e0(43);
  if (game_GameModeData_instance_ != 0 &&
      (v13 = game_GameVariableTable_Find_alt1(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v12)) != 0) {
    v14 = *(unsigned int*)(v13 + 32);
  }
  else {
    v14 = 0;
  }
  GameRoutine_6d7480(a1, v14);
  v74 = *(_DWORD*)((_BYTE*)((__int64*)0x1F8LL) + v3) & 0xFFF;
  if ((UnitSkillList_84cc00(a1 + 1360, &v74, 1) & 1) == 0) {
    goto LABEL_53;
  }
  v26 = *(_QWORD*)(a1 + 1400);
  v27 = *(_QWORD*)(a1 + 1392);
  *(_QWORD*)(a1 + 1448) = 0;
  v28 = v26 - v27;
  *(_QWORD*)(a1 + 1440) = 0;
  if ((int)((unsigned __int64)(v26 - v27) >> 2) < 1) {
    goto LABEL_53;
  }
  v29 = (int)(v28 >> 2);
  if (v29 <= 1) {
    v30 = 1;
  }
  else {
    v30 = (int)(v28 >> 2);
  }
  v31 = *GameData_212c880[0];
  if (v29 >= 2) {
    v53 = (int*)(v27 + 4);
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    do {
      v36 += 2;
      v54 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*(v53 - 1) & 0xFFF));
      v55 = v35 | (1 << *(_BYTE*)(v54 + 104));
      *(_WORD*)(a1 + 1440) = v55;
      v56 = (1LL << *(_BYTE*)(v54 + 250)) | v34;
      *(_QWORD*)(a1 + 1448) = v56;
      v57 = (1 << *(_BYTE*)(v54 + 115)) | v33;
      *(_DWORD*)(a1 + 1444) = v57;
      v58 = *(unsigned __int16*)(*(_QWORD*)(v54 + 24) + 1064LL) | v32;
      *(_WORD*)(a1 + 1442) = v58;
      v59 = *v53;
      v53 += 2;
      v60 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (v59 & 0xFFF));
      v35 = v55 | (1 << *(_BYTE*)(v60 + 104));
      *(_WORD*)(a1 + 1440) = v35;
      v34 = (1LL << *(_BYTE*)(v60 + 250)) | v56;
      *(_QWORD*)(a1 + 1448) = v34;
      v33 = (1 << *(_BYTE*)(v60 + 115)) | v57;
      *(_DWORD*)(a1 + 1444) = v33;
      v32 = *(unsigned __int16*)(*(_QWORD*)(v60 + 24) + 1064LL) | v58;
      *(_WORD*)(a1 + 1442) = v32;
    } while ((v30 & 0x7FFFFFFFFFFFFFFELL) != v36);
  }
  else {
    LOWORD(v32) = 0;
    v33 = 0;
    v34 = 0;
    LOWORD(v35) = 0;
    v36 = 0;
  }
LABEL_51:
  if ((v30 & 1) != 0) {
  LABEL_52:
    v69 = *(_QWORD*)(*(_QWORD*)(v31 + 64) +
                     8LL * (*(_DWORD*)(v27 + 4 * v36) & 0xFFF));
    *(_WORD*)(a1 + 1440) = v35 | (1 << *(_BYTE*)(v69 + 104));
    *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v69 + 250)) | v34;
    *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v69 + 115)) | v33;
    *(_WORD*)(a1 + 1442) = *(_WORD*)(*(_QWORD*)(v69 + 24) + 1064LL) | v32;
  }
LABEL_53:
  game_Unit_Unknown6c4610(a1);
LABEL_54:
  LOBYTE(v74) = 0;
  result = game_Unit_GetParam_alt1(a1, &v74, 1);
  v70 = result - v8;
  if ((_DWORD)result != v8) {
    v71 = *(__int16*)(a1 + 492);
    if ((int)result <= v8) {
      v70 = 0;
    }
    LOBYTE(v74) = 0;
    v72 = v70 + v71;
    result = game_Unit_GetParam_alt1(a1, &v74, 1);
    if (*(_WORD*)(a1 + 494) != 0 && v72 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if ((int)result >= v72) {
      v73 = v72;
    }
    else {
      v73 = result;
    }
    if (v72 < 0) {
      v73 = 0;
    }
    if (v73 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v73;
    }
  }
  return result;
}

__int64 game_6d7840(__int64 a1)
{

#pragma clang fp contract(fast)

  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 result;
  int v7;
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
  int v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int* v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  _BYTE v40[4];
  _BYTE v41[4];
  _BYTE v42[4];

  v2 = game_g_shared_system_skills_ptr;
  v3 = *(_QWORD*)(a1 + 1744);
  v4 = *(unsigned int*)((char*)((__int64*)0x1F8LL) +
                        game_g_shared_system_skills_ptr + 4);
  v5 = *(_QWORD*)(a1 + 1752) - v3;
  v39 = *(_DWORD*)((_BYTE*)((__int64*)0x1F8LL) +
                   game_g_shared_system_skills_ptr + 4) &
        0xFFF;
  if (((v4 >> 5) & 0x7F) + 1 <= v5 >> 2 &&
      ((*(_DWORD*)(v3 + 4 * ((v4 >> 5) & 0x7F)) >> v4) & 1) != 0) {
    result = game_HasActiveSkill_843420(&v39, a1 + 1744);
    if ((result & 1) != 0) {
      return result;
    }
  }
  v40[0] = 0;
  v7 = game_Unit_GetParam_alt1(a1, v40, 1);
  if (*(_BYTE*)(a1 + 624) == 2) {
    v11 = game_9a28e0(43);
    if (game_GameModeData_instance_ != 0 &&
        (v12 = game_GameVariableTable_Find_alt1(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v11)) != 0) {
      v13 = *(unsigned int*)(v12 + 32);
    }
    else {
      v13 = 0;
    }
    GameRoutine_6d7480(a1, v13);
  }
  else {
    if (*(_BYTE*)(a1 + 624) != 0) {
      goto LABEL_23;
    }
    v8 = game_9a28e0(42);
    if (game_GameModeData_instance_ != 0 &&
        (v9 = game_GameVariableTable_Find_alt1(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v8)) != 0) {
      v10 = *(unsigned int*)(v9 + 32);
    }
    else {
      v10 = 0;
    }
    GameRoutine_6d7480(a1, v10);
    v38 = *(_DWORD*)((_BYTE*)GameRoutine_200 + v2) & 0xFFF;
    if ((UnitSkillList_84cc00(a1 + 1360, &v38, 1) & 1) != 0) {
      v14 = *(_QWORD*)(a1 + 1400);
      v15 = *(_QWORD*)(a1 + 1392);
      *(_QWORD*)(a1 + 1448) = 0;
      v16 = v14 - v15;
      *(_QWORD*)(a1 + 1440) = 0;
      if ((int)((unsigned __int64)(v14 - v15) >> 2) >= 1) {
        v17 = (int)(v16 >> 2);
        v18 = v17 <= 1 ? 1LL : (int)(v16 >> 2);
        v19 = *GameData_212c880[0];
        if (v17 >= 2) {
          v29 = (int*)(v15 + 4);
          v20 = 0;
          v21 = 0;
          v22 = 0;
          v23 = 0;
          v24 = 0;
          do {
            v24 += 2;
            v30 = *(_QWORD*)(*(_QWORD*)(v19 + 64) + 8LL * (*(v29 - 1) & 0xFFF));
            v31 = v23 | (1 << *(_BYTE*)(v30 + 104));
            *(_WORD*)(a1 + 1440) = v31;
            v32 = (1LL << *(_BYTE*)(v30 + 250)) | v22;
            *(_QWORD*)(a1 + 1448) = v32;
            v33 = (1 << *(_BYTE*)(v30 + 115)) | v21;
            *(_DWORD*)(a1 + 1444) = v33;
            v34 = *(unsigned __int16*)(*(_QWORD*)(v30 + 24) + 1064LL) | v20;
            *(_WORD*)(a1 + 1442) = v34;
            v35 = *v29;
            v29 += 2;
            v36 = *(_QWORD*)(*(_QWORD*)(v19 + 64) + 8LL * (v35 & 0xFFF));
            v23 = v31 | (1 << *(_BYTE*)(v36 + 104));
            *(_WORD*)(a1 + 1440) = v23;
            v22 = (1LL << *(_BYTE*)(v36 + 250)) | v32;
            *(_QWORD*)(a1 + 1448) = v22;
            v21 = (1 << *(_BYTE*)(v36 + 115)) | v33;
            *(_DWORD*)(a1 + 1444) = v21;
            v20 = *(unsigned __int16*)(*(_QWORD*)(v36 + 24) + 1064LL) | v34;
            *(_WORD*)(a1 + 1442) = v20;
          } while ((v18 & 0x7FFFFFFFFFFFFFFELL) != v24);
        }
        else {
          LOWORD(v20) = 0;
          v21 = 0;
          v22 = 0;
          LOWORD(v23) = 0;
          v24 = 0;
        }
        if ((v18 & 1) != 0) {
          v37 = *(_QWORD*)(*(_QWORD*)(v19 + 64) +
                           8LL * (*(_DWORD*)(v15 + 4 * v24) & 0xFFF));
          *(_WORD*)(a1 + 1440) = v23 | (1 << *(_BYTE*)(v37 + 104));
          *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v37 + 250)) | v22;
          *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v37 + 115)) | v21;
          *(_WORD*)(a1 + 1442) = *(_WORD*)(*(_QWORD*)(v37 + 24) + 1064LL) | v20;
        }
      }
    }
  }
  game_Unit_Unknown6c4610(a1);
LABEL_23:
  v41[0] = 0;
  result = game_Unit_GetParam_alt1(a1, v41, 1);
  v25 = result - v7;
  if ((_DWORD)result != v7) {
    v26 = *(__int16*)(a1 + 492);
    if ((int)result <= v7) {
      v25 = 0;
    }
    v42[0] = 0;
    v27 = v25 + v26;
    result = game_Unit_GetParam_alt1(a1, v42, 1);
    if (*(_WORD*)(a1 + 494) != 0 && v27 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if ((int)result >= v27) {
      v28 = v27;
    }
    else {
      v28 = result;
    }
    if (v27 < 0) {
      v28 = 0;
    }
    if (v28 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v28;
    }
  }
  return result;
}

void game_726a20(__int64 a1)
{
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 i;
  char* v7;
  unsigned __int64 v8;
  int v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  struct {
    __int64 v14[7];
    char gap72_[3];
    char v15;
  } v14_;

  if (game_GameModeData_instance_ == 0) {
    return;
  }
  v2 =
      game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  (unsigned __int64*)&GameData_21d1ec0);
  if (v2 == 0 || *(_DWORD*)(v2 + 32) == 0) {
    return;
  }
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    v4 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  }
  else {
    v3 = 0;
    v4 = 0;
  }
  v5 = GameData_21eea48;
  if ((__int64*)GameData_21eea48 != &GameData_21eea40) {
    do {
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 16) + 88LL))(
               *(_QWORD*)(v5 + 16)) &
           1) == 0) {
        return;
      }
      v5 = *(_QWORD*)(v5 + 8);
    } while ((__int64*)v5 != &GameData_21eea40);
    for (i = GameData_21eea48; (__int64*)i != &GameData_21eea40;
         i = *(_QWORD*)(i + 8)) {
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(i + 16) + 96LL))(
               *(_QWORD*)(i + 16)) &
           1) == 0) {
        return;
      }
    }
  }
  v7 = game_util_Format("%s_%s_%d", "Part", (&GameData_1fa6240)[v3], v4);
  v13 = game_util_Format("%s/%s", "000", v7);
  v8 = GameRoutine_1a09c70_alt1(v13);
  GameRoutine_878ea0((void*)((__int64)v14_.v14), &v13);
  if (LOBYTE(v14_.v14[0]) == 0 || (v14_.v15 & 0x40) != 0) {
    return;
  }
  v9 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v9 = *(_DWORD*)(game_GameModeData_instance_ + 8);
  }
  if (DWORDn(v14_.v14[0], sizeof(v14_.v14[0]) / 4 - 1) != v9) {
    return;
  }
  GameRoutine_877330(6);
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 34;
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 15) == 9) {
    GameRoutine_dbce10(*(_QWORD*)GameData_212c6a0[0], 1);
  }
  v10 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (v10 == (_QWORD*)(a1 + 160)) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_28;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
LABEL_28:
  v12 = *(_QWORD*)(a1 + 8);
  if (v12 != 0) {
    while (1) {
      if (*(_BYTE*)v12 == 2) {
        if (*(_DWORD*)(v12 + 32) == 17) {
          *(_QWORD*)(a1 + 16) = v12;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return;
        }
      }
      else if (*(_BYTE*)v12 == 0) {
        return;
      }
      v12 += 64;
    }
  }
}

__attribute__((swiftcall)) void game_7f8880(PSEUDO_X8 x8_, unsigned __int8 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v3;
  unsigned __int64 result;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  __int64 v13;

  v3 = GameConst_7f8760(a1);
  result = strlen(v3);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (result | 7) + 1;
    }
    v6 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16, 0);
    a2[1] = v5;
    a2[2] = v6;
    *a2 = v7 | 1;
    goto LABEL_9;
  }
  *(_BYTE*)a2 = 2 * result;
  v6 = (__int64)a2 + 1;
  if (result != 0) {
  LABEL_9:
    result = memmove(v6, (__int64)v3, v5);
  }
  *(_BYTE*)(v6 + v5) = 0;
  v8 = *(unsigned __int8*)a2;
  v9 = a2[1];
  v10 = (v8 & 1) == 0;
  v11 = v8 >> 1;
  if (v10) {
    v12 = (unsigned __int8*)a2 + 1;
  }
  else {
    v12 = (unsigned __int8*)a2[2];
  }
  if (v10) {
    v13 = v11;
  }
  else {
    v13 = v9;
  }
  for (; v13 != 0; --v13) {
    result = toupper(*v12);
    *v12++ = result;
  }
  {
    result;
    return;
  }
}

__int64 game_877c40()
{
  char* v0;
  unsigned __int64 v1;
  char* v3;
  struct {
    __int64 v4[7];
    char gap72_[3];
    char v5;
  } v4_;

  v0 = game_util_Format("%s_%s", "Route", "Ism");
  v3 = game_util_Format("%s/%s", "000", v0);
  v1 = GameRoutine_1a09c70_alt1(v3);
  GameRoutine_878ea0((void*)((__int64)v4_.v4), &v3);
  if (LOBYTE(v4_.v4[0]) != 0 && (v4_.v5 & 0x40) == 0) {
    if (game_GameModeData_instance_ != 0) {
      if (DWORDn(v4_.v4[0], sizeof(v4_.v4[0]) / 4 - 1) ==
              *(_DWORD*)(game_GameModeData_instance_ + 8) &&
          (*(unsigned __int8*)(game_GameModeData_instance_ + 15) !=
               BYTE2(v4_.v4[1]) ||
           *(_DWORD*)(game_GameModeData_instance_ + 60) == 0)) {
        return 1;
      }
    }
    else if (DWORDn(v4_.v4[0], sizeof(v4_.v4[0]) / 4 - 1) == 0) {
      return 1;
    }
  }
  return 0;
}

__int64 game_879c00(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  unsigned __int8 v3;
  unsigned __int8 v4;
  __int64 result;
  unsigned __int64 v6;
  int v7;
  char* v8;
  struct {
    __int64 v9[7];
    int v10;
  } v9_;

  if (a3 != 2) {
    return 0;
  }
  if (a1 == 6) {
    v3 = a1;
    v4 = a2;
    result = TimelineFile_890160(GameData_1ad6605);
    if (result == 0) {
      return result;
    }
  LABEL_7:
    v8 = GameRoutine_874b20(v3, v4, 2, 0);
    v6 = GameRoutine_1a09c70_alt1(v8);
    GameRoutine_878ea0_alt1((void*)((__int64)v9_.v9), (const char**)&v8);
    if (LOBYTE(v9_.v9[0]) != 0 && (v9_.v10 & 0x40000000) == 0) {
      v7 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v7 = *(_DWORD*)(game_GameModeData_instance_ + 8);
      }
      if (DWORDn(v9_.v9[0], sizeof(v9_.v9[0]) / 4 - 1) == v7) {
        return (v9_.v10 & 0x20000000) == 0;
      }
    }
    return 0;
  }
  if (a1 != 5) {
    return 0;
  }
  v3 = a1;
  v4 = a2;
  result = TimelineFile_890160(GameData_1acabe6);
  if (result != 0) {
    goto LABEL_7;
  }
  return result;
}

__int64 game_8ea690(__int64 a1, unsigned int a2, unsigned __int64* a3, char a4,
                    char a5)
{
  unsigned __int8 v8;
  __int64 v10;
  __int64 v11;
  __int64 (***v12)();
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 (**v24)();
    __int64 v25;
    __int64 v26;
    char gap24_[8];
    unsigned __int64* v27;
  } v24_;
  _BYTE v28[4];
  __int64 v29;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = a2;
  if ((GameConverge_8ea270(a1, a2, (__int64)a3) & 1) != 0) {
    v10 = GameRoutine_8f31e0((_QWORD*)(a1 + 216LL * v8 + 256), a3),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v10 != 0) {
      v11 = v10;
      v24_.v26 = a5 & 1;
      v24_.v24 = GameData_1fabfa0;
      v24_.v25 = v10;
      v12 = &v24_.v24;
      v24_.v27 = (unsigned __int64*)&v24_.v24;
      v13 = *(_QWORD*)(GameData_21ca310 + 56);
      v14 = *(_QWORD*)(v13 + 556216);
      if (v14 != 0) {
        GameRoutine_6c3980(*(_QWORD*)(v13 + 556216), v11),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        Unit_6db740(v14, v24_.v26, 0),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v15 = *(_QWORD*)(v14 + 392);
        v28[0] = a4;
        v16 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v16 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        if (v15 != v16 && (*(_BYTE*)(v14 + 418) & 8) == 0) {
          goto LABEL_8;
        }
        goto LABEL_21;
      }
    LABEL_26:
      v22 = 4;
      goto LABEL_27;
    }
    if ((unsigned __int64*)game_GetHero(v8) == a3) {
      v24_.v25 = SideStoryFile_12ae4c0(v8),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v24_.v24 = (__int64 (**)(void))game_HashString(v24_.v25),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (game_GameModeData_instance_ != 0) {
        v19 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v24_.v24),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v19 != 0 && *(_DWORD*)(v19 + 32) != 0) {
          v12 = &v24_.v24;
          v24_.v26 = a5 & 1;
          v24_.v24 = GameData_1fac020;
          v24_.v25 = (__int64)a3;
          v24_.v27 = (unsigned __int64*)&v24_.v24;
          v14 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
          if (v14 == 0) {
            goto LABEL_26;
          }
          v29 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
          game_GameConverge_Impl_TryJoin_closure0_Invoke((__int64)&v24_.v24,
                                                         &v29),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v20 = *(_QWORD*)(v14 + 392);
          v21 = game_GameModeData_instance_;
          v28[0] = a4;
          if (game_GameModeData_instance_ != 0) {
            v21 = *(_QWORD*)(game_GameModeData_instance_ + 96);
          }
          if (v20 != v21 && (*(_BYTE*)(v14 + 418) & 8) == 0) {
          LABEL_8:
            LODWORD(v29) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                      game_g_shared_system_skills_ptr) &
                           0xFFF;
            v17 = game_HasSkill((_QWORD*)(v14 + 1744), &v29),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (a4 != 9 && v17) {
              goto LABEL_10;
            }
            goto LABEL_22;
          }
        LABEL_21:
          if (a4 != 9) {
          LABEL_10:
            v18 = 0;
            goto LABEL_23;
          }
        LABEL_22:
          v18 = 1;
        LABEL_23:
          GameHr_6c47b0(v14, v28, v18, 0),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          GameRoutine_120f3d0(v14),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v12 = (__int64 (***)(void))v24_.v27,
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v24_.v27 == (unsigned __int64*)&v24_.v24) {
            goto LABEL_26;
          }
          if (v24_.v27 != nullptr) {
            v22 = 5;
          LABEL_27:
            ((void (*)(__int64 (***)(void), __int64))(*v12)[v22])(v12, v11),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          return v14;
        }
      }
    }
  }
  return 0;
}

__attribute__((swiftcall)) void

game_93c6a0(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2, __int64 a3, char a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _BYTE* v12;
  __int64 i;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19;
  _QWORD* v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 j;
  __int64 v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  struct {
    __int64 v31;
    int v32;
  } v31_;
  _QWORD** v33;
  struct {
    _QWORD* v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    _BYTE* v38;
  } v34_;

  if (*(_BYTE*)(a1 + 148) == 1) {
    if ((a4 & 1) != 0 && (RidePool_93e660((_QWORD*)a1, a2) & 0x80000000) == 0) {
      WORD1(v31_.v31) = 0;
      HIDWORD(v31_.v31) = 0;
      v34_.v35 = 0;
      v34_.v36 = 0;
      v34_.v37 = 0;
      v34_.v38 = nullptr;
      v33 = &v34_.v34;
      v34_.v34 = nullptr;
      GameRoutine_930b90((__int64)&v31_.v31, (__int64)a2);
      if ((_BYTE)v31_.v31 != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) +
                                   8LL * (unsigned __int8)v31_.v31) +
                        96LL);
        if (v9 != 0) {
          LOBYTE(v31_.v31) = *(_BYTE*)(v9 + 16);
          if ((v34_.v36 & 1) != 0) {
            *v34_.v38 = 0;
            v34_.v37 = 0;
          }
          else {
            LOWORD(v34_.v36) = 0;
          }
          game_93c6a0((void*)a5, a1, (unsigned __int8*)&v31_.v31, a3, 1);
          v31_.v32 = 0;
          v31_.v31 = 0;
          if ((v34_.v36 & 1) != 0) {
            *v34_.v38 = 0;
            v34_.v37 = 0;
          }
          else {
            LOWORD(v34_.v36) = 0;
          }
          GameRoutine_6e3b50((__int64)&v33, v34_.v34);
          v34_.v34 = nullptr;
          v34_.v35 = 0;
          v33 = &v34_.v34;
          if ((v34_.v36 & 1) != 0) {
            v20 = v34_.v38;
            if (v34_.v38 != nullptr) {
              v21 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v21 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                  (__int64)v34_.v38);
              v20 = v34_.v34;
            }
          }
          else {
            v20 = nullptr;
          }
          GameRoutine_6e3b50((__int64)&v33, v20);
          return;
        }
      }
      v31_.v32 = 0;
      v31_.v31 = 0;
      if ((v34_.v36 & 1) != 0) {
        *v34_.v38 = 0;
        v34_.v37 = 0;
      }
      else {
        LOWORD(v34_.v36) = 0;
      }
      GameRoutine_6e3b50((__int64)&v33, v34_.v34);
      v34_.v34 = nullptr;
      v34_.v35 = 0;
      v33 = &v34_.v34;
      if ((v34_.v36 & 1) != 0) {
        v10 = v34_.v38;
        if (v34_.v38 != nullptr) {
          v11 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v34_.v38);
          v10 = v34_.v34;
        }
      }
      else {
        v10 = nullptr;
      }
      GameRoutine_6e3b50((__int64)&v33, v10);
    }
  }
  else if ((RidePool_93cd60((_QWORD*)a1, (__int64)a2) & 0x80000000) == 0) {
    goto LABEL_9;
  }
  v12 = *(_BYTE**)(a1 + 120);
  for (i = 9; i != 209; i += 10) {
    if (*v12 == 0) {
      LODWORD(i) = i - 9;
    LABEL_43:
      v15 = *((_DWORD*)a2 + 1);
      if (((*(_BYTE*)(a1 + 148) | (unsigned __int8)GameData_21f42c0) & 1) !=
              0 &&
          v15 == 0) {
        if (game_GameModeData_instance_ != 0) {
          v16 = (*(_BYTE*)(game_GameModeData_instance_ + 15) & 0xF) << 24;
          v17 = (*(_DWORD*)(game_GameModeData_instance_ + 2712) + 1) & 0xFFFFFF;
        }
        else {
          v16 = 0;
          v17 = 1;
        }
        v18 =
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                 8LL * *a2) +
                      108LL) != 0
                ? *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                            64) +
                                                 8LL * *a2) +
                                      108LL)
                      << 28
                : v17;
        v15 = v18 | v16;
        if (game_GameModeData_instance_ != 0) {
          *(_DWORD*)(game_GameModeData_instance_ + 2712) = v17;
        }
      }
      LODWORD(v31_.v31) = v15;
      RidePool_93e320(a1, (__int64)a2, a3, i, &v31_.v31);
      v19 = 2;
      *(_DWORD*)(a5 + 4) = i;
      goto LABEL_54;
    }
    if (v12[64] == 0) {
      LODWORD(i) = i - 8;
      goto LABEL_43;
    }
    if (v12[128] == 0) {
      LODWORD(i) = i - 7;
      goto LABEL_43;
    }
    if (v12[192] == 0) {
      LODWORD(i) = i - 6;
      goto LABEL_43;
    }
    if (v12[256] == 0) {
      LODWORD(i) = i - 5;
      goto LABEL_43;
    }
    if (v12[320] == 0) {
      LODWORD(i) = i - 4;
      goto LABEL_43;
    }
    if (v12[384] == 0) {
      LODWORD(i) = i - 3;
      goto LABEL_43;
    }
    if (v12[448] == 0) {
      LODWORD(i) = i - 2;
      goto LABEL_43;
    }
    if (v12[512] == 0) {
      LODWORD(i) = i - 1;
      goto LABEL_43;
    }
    if (v12[576] == 0) {
      goto LABEL_43;
    }
    v12 += 640;
  }
  if (*a2 != 0) {
    v14 = game_932d40(a2);
  }
  else {
    v14 = -1;
  }
  v22 = -1;
  v23 = 0;
  for (j = 0; j != 200; ++j) {
    v25 = *(_QWORD*)(a1 + 120);
    if (*(_BYTE*)(v25 + v23) != 0) {
      v26 = game_932d40((unsigned __int8*)(v25 + v23));
      if (v26 <= v14) {
        v22 = j;
      }
      if (v26 < v14) {
        v14 = v26;
      }
    }
    v23 += 64;
  }
  if (v22 != -1) {
    v27 = *((_DWORD*)a2 + 1);
    if (((*(_BYTE*)(a1 + 148) | (unsigned __int8)GameData_21f42c0) & 1) != 0 &&
        v27 == 0) {
      if (game_GameModeData_instance_ != 0) {
        v28 = (*(_BYTE*)(game_GameModeData_instance_ + 15) & 0xF) << 24;
        v29 = (*(_DWORD*)(game_GameModeData_instance_ + 2712) + 1) & 0xFFFFFF;
      }
      else {
        v28 = 0;
        v29 = 1;
      }
      v30 =
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *a2) +
                    108LL) != 0
              ? *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                          64) +
                                               8LL * *a2) +
                                    108LL)
                    << 28
              : v29;
      v27 = v30 | v28;
      if (game_GameModeData_instance_ != 0) {
        *(_DWORD*)(game_GameModeData_instance_ + 2712) = v29;
      }
    }
    LODWORD(v31_.v31) = v27;
    RidePool_93e320(a1, (__int64)a2, a3, v22, &v31_.v31);
    v19 = 4;
    *(_DWORD*)(a5 + 4) = v22;
  LABEL_54:
    *(_BYTE*)a5 = v19;
    return;
  }
LABEL_9:
  *(_BYTE*)a5 = 1;
  *(_DWORD*)(a5 + 4) = -1;
}

__int64 game_9bec00(__int64 a1)
{

#pragma clang fp contract(fast)

  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;

  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1104, 16, 0);
  v21 = 0;
  v22 = 0;
  game_menu_16dcd30(v2, "ObeliskDepositoryMaterialMenu", &v21, 0);
  v3 = GameData_212d6a8;
  v4 = v22;
  *(_QWORD*)v2 = GameData_212d6a8 + 2;
  *(_QWORD*)(v2 + 176) = v3 + 143;
  *(_QWORD*)(v2 + 1056) = v3 + 169;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  v5 = GameData_212cf90[0];
  *(_QWORD*)(v2 + 1064) = v2;
  *(_QWORD*)(v2 + 1072) = 0;
  *(_QWORD*)(v2 + 1080) = 0;
  *(_QWORD*)(v2 + 1088) = 0;
  v6 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v5);
  v7 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v5 + 8);
  *(_QWORD*)v2 =
      game_facility_anonymous_ProcObeliskDepositoryMaterialMenu_vtable;
  *(_QWORD*)(v2 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_1fb5998;
  *(_QWORD*)(v2 + 176) = game_menu_MenuInput_InputUnknown00_ptr_1fb58c8;
  v8 = ((v7 - v6) << 6) - 1;
  if (v7 == v6) {
    v8 = 0;
  }
  v9 = (__int64*)game_TransporterConst_List_instance__ptr[0];
  v10 = *(_QWORD*)(game_GameModeData_instance_ + 176) + 2464LL;
  v11 = *(_QWORD*)game_TransporterConst_List_instance__ptr[0];
  v12 = *(_QWORD*)((char*)GameRoutine_20 + v5 + 8) +
        *(_QWORD*)((char*)GameRoutine_20 + v5);
  if (v8 == v12) {
    GameRoutine_71fb20(v5);
    v6 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v5);
    v12 = *(_QWORD*)((char*)GameRoutine_20 + v5 + 8) +
          *(_QWORD*)((char*)GameRoutine_20 + v5);
  }
  *(_QWORD*)(*(_QWORD*)(v6 + 8 * (v12 >> 9)) + 8 * (v12 & 0x1FF)) = v11;
  *v9 = v10;
  *(_DWORD*)(v2 + 664) = 0;
  LODWORD(v21) = 0;
  ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v5);
  *(_QWORD*)(v2 + 656) = 5;
  *(_QWORD*)(v2 + 792) = *(_QWORD*)(v2 + 784);
  *(_QWORD*)(v2 + 816) = *(_QWORD*)(v2 + 808);
  GameRoutine_6e5a40_alt1(v2 + 784, 6, &v21);
  v13 = *(_QWORD*)(v2 + 816);
  v14 = *(_QWORD*)(v2 + 808);
  LODWORD(v21) = 0;
  v15 = v13 - v14;
  v16 = (v13 - v14) >> 2;
  if (v16 > 5) {
    if (v15 != 24) {
      *(_QWORD*)(v2 + 816) = v14 + 24;
    }
  }
  else {
    GameRoutine_6e5a40_alt1(v2 + 808, 6 - v16, &v21);
  }
  BasicMenuCursor_16de1f0(v2, 3, 0);
  ProcInst_657850(v2, GameData_212c730, "ProcObeliskDepositoryMaterialMenu", 1,
                  a1);
  v18 = *(_QWORD**)(v2 + 256);
  v17 = *(_QWORD**)(v2 + 264);
  *(_QWORD*)(v2 + 336) = 0;
  while (v18 != v17) {
    if (*v18 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v18 + 8LL))(*v18);
      v17 = *(_QWORD**)(v2 + 264);
    }
    ++v18;
  }
  v19 = *(_QWORD*)(v2 + 344);
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
    *(_QWORD*)(v2 + 344) = 0;
  }
  *(_QWORD*)(v2 + 264) = *(_QWORD*)(v2 + 256);
  *(_QWORD*)(v2 + 240) = *(_QWORD*)(v2 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1024LL))(v2);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 1032LL))(v2);
}

__int64 game_9bee90(_QWORD* a1)
{

#pragma clang fp contract(fast)

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

  *a1 = game_facility_anonymous_ProcObeliskDepositoryMaterialMenu_vtable;
  v2 = GameData_212cf90[0];
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_1fb58c8;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_1fb5998;
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
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
      v5 = *(_QWORD*)((char*)((__int128*)0x10LL) + v2);
    }
    *(_QWORD*)((char*)((__int128*)0x10LL) + v2) = v5 - 8;
  }
  v15 = a1[134];
  a1[135] = v15;
  if (v15 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

void game_adc400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                 _QWORD* a6, __int64* a7, _QWORD* a8)
{
  __int64* v8;
  _QWORD* v10;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  unsigned __int64 v34;
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
  int v46;
  __int16 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  const char** v57;
  const char** v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  const char* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  unsigned __int64 v72;
  bool v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  bool v78;
  unsigned __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  __int64* v85;
  __int64 v86;
  unsigned __int64 v87;
  const char* v88;
  unsigned __int64 v89;
  unsigned int v90;
  unsigned __int64 add;
  __int64 v92;
  const char*** v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  __int64* v98;
  _QWORD* v99;
  int v100;
  unsigned __int64 v101;
  _QWORD* v102;
  bool v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  unsigned __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  __int64** v113;
  __int64* v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  int v123;
  __int64 v124;
  __int64 v125;
  __int64* v126;
  _QWORD* v127;
  unsigned __int64 v128;
  unsigned __int64 v130;
  bool v131;
  unsigned __int64 v132;
  __int64 v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  __int64** v139;
  __int64* v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  unsigned int v149;
  _DWORD* v150;
  _DWORD* v151;
  unsigned int v152;
  int v153;
  __int64 v154;
  unsigned int* v155;
  unsigned int* v156;
  __int64 v157;
  __int64 v158;
  _QWORD* v159;
  unsigned __int64 v160;
  unsigned __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64** v165;
  __int64* v166;
  unsigned __int64 v167;
  __int64 v168;
  unsigned int** v169;
  unsigned int** v170;
  unsigned int* v171;
  unsigned int v172;
  _QWORD* v173;
  unsigned __int64 v174;
  unsigned __int64 v176;
  unsigned __int64 v177;
  __int64 v178;
  __int64** v179;
  __int64* v180;
  unsigned __int64 v181;
  __int64 v182;
  __int64 v183;
  int v184;
  unsigned int v185;
  __int64 v188[2];
  struct {
    __int64* v189;
    __int64 v190;
  } v189_;

  v8 = *(__int64**)(a1 + 8);
  v10 = a6;
  if (v8 != nullptr) {
    v13 = v8[18];
    v12 = v8[19];
    if (v12 != v13) {
      DecalObject_a91100(
          (__int64*)(a1 + 128), *(_QWORD*)(game_g_frame_clock + 312),
          *(_QWORD*)(*(_QWORD*)(game_g_frame_clock + 552) + 16LL), v12 - v13);
      v8 = *(__int64**)(a1 + 8);
    }
    if ((__int64*)(a1 + 24) != v8 + 18) {
      GameRoutine_adf390((__int64*)(a1 + 24), v8[18], v8[19],
                         (v8[19] - v8[18]) >> 2);
      v8 = *(__int64**)(a1 + 8);
    }
    v14 = *(_DWORD*)(a1 + 48);
    v15 = (*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) >> 2;
    if (v14 <= 1) {
      v14 = 1;
    }
    *(_DWORD*)(a1 + 48) = v14;
    if ((signed __int32)*(_DWORD*)(a1 + 60) > (int)v15) {
      LODWORD(v15) = *(_DWORD*)(a1 + 60);
    }
    *(_DWORD*)(a1 + 56) &= *(int*)(a1 + 56) >> 31;
    *(_DWORD*)(a1 + 60) = v15;
    v16 = 8 * v8[26];
    if (v16 != 0) {
      DecalObject_a91100(
          (__int64*)(a1 + 184), *(_QWORD*)(game_g_frame_clock + 312),
          *(_QWORD*)(*(_QWORD*)(game_g_frame_clock + 552) + 16LL), v16);
      v8 = *(__int64**)(a1 + 8);
    }
    v17 = v8[27];
    if (v8[28] != v17) {
      v18 = *(_QWORD**)(a1 + 88);
      v19 = 0;
      v20 = 0;
      do {
        v22 = *(_QWORD*)(a1 + 96);
        v23 = (_QWORD*)(v17 + v19);
        if ((unsigned __int64)v18 < v22) {
          v21 = v23[1];
          *v18 = *v23;
          v18[1] = v21;
          v18 += 2;
        }
        else {
          v24 = *(_QWORD*)(a1 + 80);
          v25 = (unsigned __int64)v18 - v24;
          v26 = ((__int64)v18 - v24) >> 4;
          v27 = v26 + 1;
          if ((unsigned __int64)(v26 + 1) >> 60 != 0) {
            GameRoutine_adf500();
          }
          v28 = v22 - v24;
          if (v28 >> 3 > v27) {
            v27 = v28 >> 3;
          }
          if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF0LL) {
            v29 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v29 = v27;
          }
          if (v29 != 0) {
            if (v29 >> 60 != 0) {
              GameRoutine_60a210();
            }
            v30 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v29, 16, 0);
          }
          else {
            v30 = 0;
          }
          v31 = *v23;
          v32 = v23[1];
          v33 = (_QWORD*)(v30 + v25);
          v34 = v30 + 16 * v29;
          v35 = v30 + v25 - 16 * v26;
          v18 = (_QWORD*)(v30 + v25 + 16);
          *v33 = v31;
          v33[1] = v32;
          GameRoutine_1a0b950(v35, v24, v25);
          *(_QWORD*)(a1 + 80) = v35;
          *(_QWORD*)(a1 + 88) = v18;
          *(_QWORD*)(a1 + 96) = v34;
          if (v24 != 0) {
            v36 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v36 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v24);
          }
          v10 = a6;
        }
        v8 = *(__int64**)(a1 + 8);
        *(_QWORD*)(a1 + 88) = v18;
        ++v20;
        v19 += 24;
        v17 = v8[27];
      } while (0xAAAAAAAAAAAAAAABLL * ((v8[28] - v17) >> 3) > v20);
    }
    if ((__int64*)(a1 + 104) != v8 + 30) {
      GameRoutine_adf520((__int64*)(a1 + 104), v8[30], v8[31],
                         (v8[31] - v8[30]) >> 3);
    }
    *(_DWORD*)(a1 + 52) = 2;
  }
  v37 = *(_QWORD*)(a1 + 264);
  if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a1 + 280) - v37) >> 3) <= 0x1F) {
    v38 = *(_QWORD*)(a1 + 272);
    v39 = fw_memory_g_heap_manager_ptr;
    v40 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         768, 16, 0);
    v41 = v40 + 768;
    v42 = v40;
    v43 = v40 + v38 - v37;
    if (v38 != v37) {
      v44 = v37;
      v45 = v40;
      do {
        *(_QWORD*)v45 = *(_QWORD*)v44;
        *(_QWORD*)(v45 + 8) = *(_QWORD*)(v44 + 8);
        *(_QWORD*)v44 = 0;
        *(_QWORD*)(v44 + 8) = 0;
        v46 = *(_DWORD*)(v44 + 16);
        v47 = *(_WORD*)(v44 + 20);
        v44 += 24;
        *(_WORD*)(v45 + 20) = v47;
        *(_DWORD*)(v45 + 16) = v46;
        v45 += 24;
      } while (v44 != v38);
      do {
        v48 = *(_QWORD*)(v37 + 8);
        if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
          std___1___shared_weak_count___release_weak(v48);
        }
        v37 += 24;
      } while (v37 != v38);
      v37 = *(_QWORD*)(a1 + 264);
      v39 = fw_memory_g_heap_manager_ptr;
    }
    *(_QWORD*)(a1 + 264) = v42;
    *(_QWORD*)(a1 + 272) = v43;
    *(_QWORD*)(a1 + 280) = v41;
    if (v37 != 0) {
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)v39 + 200LL) == 0) {
        v49 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v39 + v49, v37);
    }
  }
  v50 = *(_QWORD*)(a1 + 240);
  v51 = v10[5] - v10[4];
  v52 = v51 >> 3;
  if (v51 >> 3 > (unsigned __int64)((*(_QWORD*)(a1 + 256) - v50) >> 2)) {
    if (v52 >> 62 != 0) {
      GameRoutine_adf370();
    }
    v53 = fw_memory_g_heap_manager_ptr;
    v54 = *(_QWORD*)(a1 + 248) - v50;
    v55 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v51 >> 1, 16, 0);
    GameRoutine_1a0b950(v55, v50, v54);
    *(_QWORD*)(a1 + 240) = v55;
    *(_QWORD*)(a1 + 248) = v55 + v54;
    v10 = a6;
    *(_QWORD*)(a1 + 256) = v55 + 4 * v52;
    if (v50 != 0) {
      v56 = 128;
      if (*(_QWORD*)(*(_QWORD*)v53 + 200LL) == 0) {
        v56 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v53 + v56, v50);
    }
  }
  v57 = (const char**)v10[4];
  v58 = (const char**)v10[5];
  if (v57 != v58) {
    v59 = &game_g_frame_clock;
    while (1) {
      v60 = *a7;
      v61 = a7[1];
      v62 = *v57;
      if (*a7 != v61) {
        v63 = GameRoutine_1a09c70_alt1(*v57);
        while (1) {
          v64 = *(_BYTE*)v60 >> 1;
          if ((*(_BYTE*)v60 & 1) != 0) {
            v64 = *(_QWORD*)(v60 + 8);
          }
          if (v63 == v64) {
            if (v63 == -1) {
              String_60a230();
            }
            v65 = (*(_BYTE*)v60 & 1) != 0 ? *(_QWORD*)(v60 + 16) : v60 + 1;
            if (GameRoutine_1a09cf0(v65, (__int64)v62, v63) == 0) {
              break;
            }
          }
          v60 += 24;
          if (v60 == v61) {
            goto LABEL_71;
          }
        }
        if (v60 != v61) {
          goto LABEL_58;
        }
      }
    LABEL_71:
      v66 = *(__int64**)(*v59 + 13408);
      v67 = GameRoutine_1a09c70_alt1(v62 + 32);
      v68 = GameRoutine_1a09c70_alt1(v62 + 64);
      gfx_shader_Archive_CreateShader((void*)(&v189_.v189), v66,
                                      (__int64)(v62 + 32), v67,
                                      (__int64)(v62 + 64), v68);
      v70 = v189_.v189;
      v69 = v189_.v190;
      if (v189_.v189 == nullptr) {
        break;
      }
    LABEL_91:
      v85 = (__int64*)v10[1];
      v84 = (__int64*)v10[2];
      while (v85 != v84) {
        v86 = *v85++;
        v87 = GameRoutine_1a09c70_alt1((const char*)v86);
        GameRoutine_ad5000(v70, v86, v87, *(_DWORD*)(v86 + 32));
      }
      GameRoutine_ad5280(v70);
      v88 = *v57;
      v89 = GameRoutine_1a09c70_alt1(*v57);
      v90 = GameRoutine_ad6000((__int64)v88, v89);
      v188[0] = (__int64)v70;
      v188[1] = v69;
      if (v69 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 8), 1u,
                                  memory_order_relaxed);
        Material_addcc0(a1, v90, v188);
        add = atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                               0xFFFFFFFFFFFFFFFFLL);
        v59 = game_g_frame_clock_ptr[0];
        if (add == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
          std___1___shared_weak_count___release_weak(v69);
        }
        *(_BYTE*)(*(_QWORD*)(a1 + 264) + 24LL * (int)v90 + 21) = (*v57)[96];
        if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
          std___1___shared_weak_count___release_weak(v69);
        }
      }
      else {
        Material_addcc0(a1, v90, v188);
        *(_BYTE*)(*(_QWORD*)(a1 + 264) + 24LL * (int)v90 + 21) = (*v57)[96];
        v59 = game_g_frame_clock_ptr[0];
      }
    LABEL_58:
      if (++v57 == v58) {
        goto LABEL_98;
      }
    }
    v71 = *(_QWORD*)(*v59 + 13408);
    v72 = *(unsigned __int8*)(v71 + 208);
    v73 = (v72 & 1) == 0;
    v74 = v72 >> 1;
    if (v73) {
      v75 = v74;
    }
    else {
      v75 = *(_QWORD*)(v71 + 216);
    }
    v76 = *(unsigned __int8*)(v71 + 232);
    if (v73) {
      v77 = v71 + 209;
    }
    else {
      v77 = *(_QWORD*)(v71 + 224);
    }
    v78 = (v76 & 1) == 0;
    v79 = v76 >> 1;
    if (v78) {
      v80 = v71 + 233;
    }
    else {
      v80 = *(_QWORD*)(v71 + 248);
    }
    if (v78) {
      v81 = v79;
    }
    else {
      v81 = *(_QWORD*)(v71 + 240);
    }
    gfx_shader_Archive_CreateShader((void*)(&v189_.v189), (__int64*)v71, v77,
                                    v75, v80, v81);
    v70 = v189_.v189;
    v82 = v189_.v190;
    v189_.v189 = nullptr;
    v189_.v190 = 0;
    if (v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
      std___1___shared_weak_count___release_weak(v69);
      v83 = v189_.v190;
      if (v189_.v190 != 0) {
      LABEL_87:
        if (atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83);
          std___1___shared_weak_count___release_weak(v83);
        }
      }
    }
    else {
      v83 = v189_.v190;
      if (v189_.v190 != 0) {
        goto LABEL_87;
      }
    }
    v69 = v82;
    goto LABEL_91;
  }
LABEL_98:
  v92 = *(_QWORD*)(a1 + 8);
  if (v92 != 0) {
    v94 = *(_QWORD*)(v92 + 80);
    v95 = *(_QWORD*)(v92 + 88);
    v93 = (const char***)(v92 + 80);
    if (v94 != v95) {
      Material_add7a0(a1, v93, 1u);
    }
  }
  v96 = *(_QWORD*)(a1 + 16);
  if (v96 == 0) {
    goto LABEL_276;
  }
  Material_add7a0(a1, (const char***)(v96 + 56), 0);
  v97 = *(_QWORD**)(a1 + 16);
  v98 = (__int64*)v97[12];
  if (v98 == nullptr) {
    v99 = *(_QWORD**)(a1 + 8);
    if (v99 != nullptr) {
      goto LABEL_156;
    }
    goto LABEL_276;
  }
  while (2) {
    v100 = *((_DWORD*)v98 + 10);
    if (v100 == -1) {
      goto LABEL_105;
    }
    v101 = *((unsigned __int8*)v98 + 16);
    v102 = *(_QWORD**)(a1 + 8);
    v103 = (v101 & 1) == 0;
    v104 = v101 >> 1;
    v105 = v102[14];
    v106 = v103 ? v104 : v98[3];
    v107 = v103 ? (__int64)v98 + 17 : v98[4];
    if (v105 == 0 || v102[16] == 0) {
      goto LABEL_105;
    }
    v109 = std___1___hash_memory(v107, v106);
    v110 = v105 - 1;
    v111 = v109;
    if ((v105 & (v105 - 1)) != 0) {
      v112 = v109;
      if (v109 >= v105) {
        v112 = v109 % v105;
      }
    }
    else {
      v112 = v109 & v110;
    }
    v113 = *(__int64***)(v102[13] + 8 * v112);
    if (v113 == nullptr) {
      goto LABEL_105;
    }
    v114 = *v113;
    if (*v113 == nullptr) {
      goto LABEL_105;
    }
    if ((v105 & v110) == 0) {
      while (1) {
        v119 = v114[1];
        if (v111 == v119) {
          v120 = *((unsigned __int8*)v114 + 16);
          v121 = v114[3];
          if ((v120 & 1) == 0) {
            v121 = v120 >> 1;
          }
          if (v106 == v121) {
            v122 = (v120 & 1) != 0 ? v114[4] : (__int64)v114 + 17;
            if (GameRoutine_1a09cf0(v107, v122, v106) == 0) {
              goto LABEL_148;
            }
          }
        }
        else if ((v119 & v110) != v112) {
          goto LABEL_105;
        }
        v114 = (__int64*)*v114;
        if (v114 == nullptr) {
          goto LABEL_105;
        }
      }
    }
    while (1) {
      v115 = v114[1];
      if (v111 == v115) {
        break;
      }
      if (v115 >= v105) {
        v115 %= v105;
      }
      if (v115 != v112) {
        goto LABEL_105;
      }
    LABEL_126:
      v114 = (__int64*)*v114;
      if (v114 == nullptr) {
        goto LABEL_105;
      }
    }
    v116 = *((unsigned __int8*)v114 + 16);
    v117 = v114[3];
    if ((v116 & 1) == 0) {
      v117 = v116 >> 1;
    }
    if (v106 != v117) {
      goto LABEL_126;
    }
    v118 = (v116 & 1) != 0 ? v114[4] : (__int64)v114 + 17;
    if (GameRoutine_1a09cf0(v107, v118, v106) != 0) {
      goto LABEL_126;
    }
  LABEL_148:
    if (*((_DWORD*)v114 + 10) != v100) {
      v123 = GameRoutine_ad6000(v107, v106);
      v124 = *(_QWORD*)(a1 + 264);
      v125 = *(_QWORD*)(a1 + 272);
      if (v124 != v125) {
        while (*(_DWORD*)(v124 + 16) != v123) {
          v124 += 24;
          if (v124 == v125) {
            goto LABEL_105;
          }
        }
      }
      if (v124 != v125) {
        *(_BYTE*)(v124 + 21) = *((_DWORD*)v98 + 10) == 1;
      }
    }
  LABEL_105:
    v98 = (__int64*)*v98;
    if (v98 != nullptr) {
      continue;
    }
    break;
  }
  v97 = *(_QWORD**)(a1 + 16);
  v99 = *(_QWORD**)(a1 + 8);
  if (v99 != nullptr) {
  LABEL_156:
    if (v99[19] == v99[18]) {
      goto LABEL_283;
    }
    v126 = (__int64*)v97[20];
    if (v126 != nullptr) {
      do {
        v127 = *(_QWORD**)(a1 + 8);
        v128 = v127[22];
        if (v128 != 0 && v127[24] != 0) {
          v130 = *((unsigned __int8*)v126 + 16);
          v131 = (v130 & 1) == 0;
          v132 = v130 >> 1;
          v133 = v131 ? (__int64)v126 + 17 : v126[4];
          v134 = v131 ? v132 : v126[3];
          v135 = std___1___hash_memory(v133, v134);
          v136 = v128 - 1;
          v137 = v135;
          if ((v128 & (v128 - 1)) != 0) {
            v138 = v135;
            if (v135 >= v128) {
              v138 = v135 % v128;
            }
          }
          else {
            v138 = v135 & v136;
          }
          v139 = *(__int64***)(v127[21] + 8 * v138);
          if (v139 != nullptr) {
            v140 = *v139;
            if (*v139 != nullptr) {
              if ((v128 & v136) == 0) {
                while (1) {
                  v145 = v140[1];
                  if (v137 == v145) {
                    v146 = *((unsigned __int8*)v140 + 16);
                    v147 = v140[3];
                    if ((v146 & 1) == 0) {
                      v147 = v146 >> 1;
                    }
                    if (v147 == v134) {
                      v148 = (v146 & 1) != 0 ? v140[4] : (__int64)v140 + 17;
                      if (GameRoutine_1a09cf0(v148, v133, v134) == 0) {
                        goto LABEL_201;
                      }
                    }
                  }
                  else if ((v145 & v136) != v138) {
                    goto LABEL_159;
                  }
                  v140 = (__int64*)*v140;
                  if (v140 == nullptr) {
                    goto LABEL_159;
                  }
                }
              }
              do {
                v141 = v140[1];
                if (v137 == v141) {
                  v142 = *((unsigned __int8*)v140 + 16);
                  v143 = v140[3];
                  if ((v142 & 1) == 0) {
                    v143 = v142 >> 1;
                  }
                  if (v143 == v134) {
                    v144 = (v142 & 1) != 0 ? v140[4] : (__int64)v140 + 17;
                    if (GameRoutine_1a09cf0(v144, v133, v134) == 0) {
                    LABEL_201:
                      v149 = *((_DWORD*)v140 + 10);
                      if (v149 == *((_DWORD*)v126 + 10) && v149 <= 3) {
                        v150 = (_DWORD*)(v97[15] + 4LL * *((int*)v126 + 11));
                        v151 = (_DWORD*)(*(_QWORD*)(a1 + 24) +
                                         4LL * *((int*)v140 + 11));
                        *v151 = *v150;
                        if (v149 != 0) {
                          v152 = v149 + 1;
                          v151[1] = v150[1];
                          if (v152 != 2) {
                            v151[2] = v150[2];
                            if (v152 != 3) {
                              v151[3] = v150[3];
                            }
                          }
                        }
                      }
                      break;
                    }
                  }
                }
                else {
                  if (v141 >= v128) {
                    v141 %= v128;
                  }
                  if (v141 != v138) {
                    break;
                  }
                }
                v140 = (__int64*)*v140;
              } while (v140 != nullptr);
            }
          }
        }
      LABEL_159:
        v126 = (__int64*)*v126;
      } while (v126 != nullptr);
      v99 = *(_QWORD**)(a1 + 8);
      v97 = *(_QWORD**)(a1 + 16);
    }
    v153 = *(_DWORD*)(a1 + 48);
    v154 = (*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) >> 2;
    if (v153 <= 1) {
      v153 = 1;
    }
    *(_DWORD*)(a1 + 48) = v153;
    if ((signed __int32)*(_DWORD*)(a1 + 60) > (int)v154) {
      LODWORD(v154) = *(_DWORD*)(a1 + 60);
    }
    *(_DWORD*)(a1 + 56) &= *(int*)(a1 + 56) >> 31;
    *(_DWORD*)(a1 + 60) = v154;
    if (v99 != nullptr) {
    LABEL_283:
      if (v99[26] == 0) {
        goto LABEL_244;
      }
      v155 = (unsigned int*)v97[23];
      v156 = (unsigned int*)v97[24];
      if (v155 == v156) {
        *(_DWORD*)(a1 + 52) = 2;
        goto LABEL_244;
      }
      do {
        if (v155[4] != -1) {
          v159 = *(_QWORD**)(a1 + 8);
          v160 = v159[34];
          if (v160 != 0 && v159[36] != 0) {
            v162 = *v155;
            v163 = v160 - 1;
            if ((v160 & (v160 - 1)) != 0) {
              v164 = *v155;
              if (v160 <= v162) {
                v164 = (unsigned int)v162 % (unsigned int)v160;
              }
            }
            else {
              v164 = ((_DWORD)v160 - 1) & (unsigned int)v162;
            }
            v165 = *(__int64***)(v159[33] + 8 * v164);
            if (v165 != nullptr) {
              v166 = *v165;
              if (v166 != nullptr) {
                if ((v160 & v163) == 0) {
                  while (1) {
                    v168 = v166[1];
                    if (v168 == v162) {
                      if (*((_DWORD*)v166 + 4) == (_DWORD)v162) {
                        goto LABEL_216;
                      }
                    }
                    else if ((v168 & v163) != v164) {
                      goto LABEL_217;
                    }
                    v166 = (__int64*)*v166;
                    if (v166 == nullptr) {
                      goto LABEL_217;
                    }
                  }
                }
                do {
                  v167 = v166[1];
                  if (v167 == v162) {
                    if (*((_DWORD*)v166 + 4) == (_DWORD)v162) {
                    LABEL_216:
                      v157 = *(_QWORD*)(a1 + 80) + 16LL * *((int*)v166 + 6);
                      v158 = *((_QWORD*)v155 + 1);
                      *(_DWORD*)(v157 + 8) = v155[4];
                      *(_QWORD*)v157 = v158;
                      break;
                    }
                  }
                  else {
                    if (v167 >= v160) {
                      v167 %= v160;
                    }
                    if (v167 != v164) {
                      break;
                    }
                  }
                  v166 = (__int64*)*v166;
                } while (v166 != nullptr);
              }
            }
          }
        }
      LABEL_217:
        v155 += 8;
      } while (v155 != v156);
      v99 = *(_QWORD**)(a1 + 8);
      v97 = *(_QWORD**)(a1 + 16);
      *(_DWORD*)(a1 + 52) = 2;
      if (v99 != nullptr) {
      LABEL_244:
        if (v99[26] != 0) {
          v169 = (unsigned int**)v97[4];
          v170 = (unsigned int**)v97[5];
          while (v169 != v170) {
            v171 = *v169;
            v172 = (*v169)[29];
            if (v172 != 0) {
              v173 = *(_QWORD**)(a1 + 8);
              v174 = v173[34];
              if (v174 != 0 && v173[36] != 0) {
                v176 = *v171;
                v177 = v174 - 1;
                if ((v174 & (v174 - 1)) != 0) {
                  v178 = *v171;
                  if (v174 <= v176) {
                    v178 = (unsigned int)v176 % (unsigned int)v174;
                  }
                }
                else {
                  v178 = ((_DWORD)v174 - 1) & (unsigned int)v176;
                }
                v179 = *(__int64***)(v173[33] + 8 * v178);
                if (v179 != nullptr) {
                  v180 = *v179;
                  if (v180 != nullptr) {
                    if ((v174 & v177) == 0) {
                      while (1) {
                        v182 = v180[1];
                        if (v182 == v176) {
                          if (*((_DWORD*)v180 + 4) == (_DWORD)v176) {
                            goto LABEL_273;
                          }
                        }
                        else if ((v182 & v177) != v178) {
                          goto LABEL_246;
                        }
                        v180 = (__int64*)*v180;
                        if (v180 == nullptr) {
                          goto LABEL_246;
                        }
                      }
                    }
                    do {
                      v181 = v180[1];
                      if (v181 == v176) {
                        if (*((_DWORD*)v180 + 4) == (_DWORD)v176) {
                        LABEL_273:
                          v183 = *((int*)v180 + 6);
                          v184 = *(_DWORD*)(*(_QWORD*)(v173[7] + 8 * v183) +
                                            128LL);
                          v185 = v184 & ~v172 | v171[30] & v172;
                          if (v185 != v184) {
                            *(_QWORD*)(*(_QWORD*)(a1 + 104) + 8 * v183) =
                                GameRoutine_bdfce0(v185, a8);
                          }
                          break;
                        }
                      }
                      else {
                        if (v181 >= v174) {
                          v181 %= v174;
                        }
                        if (v181 != v178) {
                          break;
                        }
                      }
                      v180 = (__int64*)*v180;
                    } while (v180 != nullptr);
                  }
                }
              }
            }
          LABEL_246:
            ++v169;
          }
          *(_DWORD*)(a1 + 52) = 2;
        }
      }
    }
  }
LABEL_276:
  Material_ade2c0((_QWORD*)a1);
}

void game_cf8840(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int128 v10;
  __int64 v11;
  float32x4_t* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int8x16_t* v16;
  int8x16_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64* v32;
  _QWORD* v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  float32x4_t* v40;
  float32x4_t* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  struct {
    struct {
      unsigned __int64 v47;
      __int64 v48;
    } v47_;
    struct {
      __int64 v49;
      __int64 v50;
    } v49_;
    struct {
      float32x4_t v51;
      char gap48_[16];
      float32x4_t* v52;
    } v51_;
  } f_;

  if (GameData_21d92e0 == 1) {
    return;
  }
  v1 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v1 + 152) & 1) == 0 ||
      (game_zview_cf27d0(GameData_220b6f0, *(_QWORD*)(v1 + 16)) & 1) == 0) {
    return;
  }
  v3 = *(_QWORD*)(a1 + 8);
  CharacterModel_cf5da0(v3);
  CharacterModel_cf4780(v3);
  v4 = *(_QWORD*)(v3 + 16);
  v6 = *(_QWORD*)(v4 + 128);
  v5 = *(_QWORD*)(v4 + 136);
  f_.v49_.v49 = v6;
  f_.v49_.v50 = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v6 != 0) {
    v7 = 4202496;
    v8 = *(_DWORD*)(*(_QWORD*)(v3 + 16) + 384LL) & 2 |
         ((*(_DWORD*)(*(_QWORD*)(v3 + 16) + 384LL) & 0x20) != 0);
    if (game_ProcFadeView_instance_ != 0) {
      v9 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v9 + 172) == *(float*)(v9 + 168)) {
        v10 = COERCE_AS(__typeof__(v10),
                        (*(__n128(**)(unsigned __int64))(*(_QWORD*)(v9 + 160) +
                                                         16LL))(v9 + 160));
      }
      else {
        v10 = *(_OWORD*)(v9 + 208);
      }
      if (*((float*)&v10 + 3) == 0x1.0000000000000p+0f) {
        if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
                            v9 + 160, *((float*)&v10 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
          v7 = 0x2000;
        }
        else {
          v7 = 4202496;
        }
      }
    }
    f_.v51_.v52 = nullptr;
    v11 = GameHr_10784f0((__int64)&f_.v49_.v49, v8 | (unsigned int)v7,
                         (__int64)&f_.v51_.v51);
    v12 = f_.v51_.v52;
    *(_QWORD*)(v3 + 312) = v11;
    if (v12 == &f_.v51_.v51) {
      v13 = 32;
    }
    else {
      if (v12 == nullptr) {
        goto LABEL_20;
      }
      v13 = 40;
    }
    (*(void (**)(float32x4_t*))(LANES128(*(v12)).n128_u64[0] + v13))(v12);
    v11 = *(_QWORD*)(v3 + 312);
  LABEL_20:
    if (v11 != 0) {
      *(_BYTE*)(v11 + 289) = 0;
      v14 = *(_QWORD*)(v3 + 16);
      v15 = *(_QWORD*)(v14 + 8);
      v16 = *(int8x16_t**)(v14 + 16);
      if (LANES128(v16[20]).n128_u8[0] == 1) {
        v17 = v16[19];
        v18 = *(int8x16_t*)(LANES128(v16[30]).n128_u64[1] + 16);
        LANES128(v19).n128_u64[0] = LANES128(v16[19]).n128_u64[0];
        LANES128(v20).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v21).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v22).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v23).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v20).n128_u64[1] = LANES128(v20).n128_u64[0];
        LANES128(v19).n128_u64[1] = LANES128(v22).n128_u64[0];
        *(int32x2_t*)&LANES128(v23).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 1);
        *(int8x8_t*)&LANES128(v21).n128_i8[8] =
            vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v24 = vmlaq_f32(vmulq_f32(v18, v20),
                        COERCE_AS(float32x4_t, GameData_1a83800),
                        vmulq_f32(v19, v21));
        LANES128(v19).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v22).n128_u64[1] = LANES128(v19).n128_u64[0];
        LANES128(v19).n128_u64[1] = LANES128(v16[19]).n128_u64[0];
        LANES128(v17).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v17).n128_i8[8] =
            vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        f_.v51_.v51 =
            vmlsq_f32(vmlaq_f32(v24, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v19, v23)),
                      v17, v22);
      }
      else {
        v25 = LANES128(v16[30]).n128_u64[1];
        v27 = *(_QWORD*)(v25 + 16);
        v26 = *(_QWORD*)(v25 + 24);
        LANES128(f_.v51_.v51).n128_u64[0] = v27;
        LANES128(f_.v51_.v51).n128_u64[1] = v26;
      }
      game_zview_cf7200(v15, v16 + 35, &f_.v51_.v51);
    }
  }
  v28 = f_.v49_.v50;
  if (f_.v49_.v50 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(f_.v49_.v50 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  if (v6 != 0) {
    goto LABEL_63;
  }
  v29 = *(_QWORD*)(v3 + 16);
  do {
    v30 = v29;
    v29 = *(_QWORD*)(v29 + 600);
  } while (v29 != 0);
  if ((*(_BYTE*)(v30 + 388) & 0x20) == 0 ||
      (v31 = *(_QWORD**)(v30 + 168)) == nullptr) {
    if (*(_QWORD*)(*(_QWORD*)(v3 + 16) + 192LL) != 0) {
      *(_WORD*)(v3 + 366) = 257;
    }
    goto LABEL_63;
  }
  *(_WORD*)(v3 + 366) = 256;
  v32 = (__int64*)fw_memory_g_heap_manager_ptr;
  v33 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v33[1] = 0;
  v33[2] = 0;
  v33[8] = 0;
  *v33 = GameData_1fd82e0;
  v34 = *(_QWORD*)(v3 + 376);
  *(_QWORD*)(v3 + 368) = v33 + 4;
  *(_QWORD*)(v3 + 376) = v33;
  if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
    std___1___shared_weak_count___release_weak(v34);
  }
  v35 = *(_QWORD**)(v3 + 368);
  LANES128(f_.v51_.v51).n128_u64[0] = (unsigned __int64)GameData_1fd8330;
  LANES128(f_.v51_.v51).n128_u64[1] = v3;
  f_.v51_.v52 = &f_.v51_.v51;
  GameRoutine_cfad30(&f_.v51_.v51, v35);
  if (f_.v51_.v52 == &f_.v51_.v51) {
    v36 = 32;
    goto LABEL_42;
  }
  if (f_.v51_.v52 != nullptr) {
    v36 = 40;
  LABEL_42:
    (*(void (**)(float32x4_t*))(LANES128(*(f_.v51_.v52)).n128_u64[0] + v36))(
        f_.v51_.v52);
  }
  v37 = *(_QWORD*)(v3 + 376);
  f_.v49_.v49 = *(_QWORD*)(v3 + 368);
  f_.v49_.v50 = v37;
  if (v37 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 16), 1u,
                              memory_order_relaxed);
  }
  game_UnitActor_FuncBuildCompleteSubscribe(v31, &f_.v49_.v49);
  if (f_.v49_.v50 != 0) {
    std___1___shared_weak_count___release_weak(f_.v49_.v50);
  }
  v38 = (_QWORD*)fw_memory_HeapManager_Allocate(*v32, 80, 16, 0);
  v38[1] = 0;
  v38[2] = 0;
  v38[8] = 0;
  *v38 = GameData_1fd83b0;
  v39 = *(_QWORD*)(v3 + 392);
  *(_QWORD*)(v3 + 384) = v38 + 4;
  *(_QWORD*)(v3 + 392) = v38;
  if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    std___1___shared_weak_count___release_weak(v39);
  }
  v40 = *(float32x4_t**)(v3 + 384);
  v41 = &f_.v51_.v51;
  LANES128(f_.v51_.v51).n128_u64[0] = (unsigned __int64)GameData_1fd8400;
  LANES128(f_.v51_.v51).n128_u64[1] = v3;
  f_.v51_.v52 = &f_.v51_.v51;
  if (v40 == &f_.v51_.v51) {
    goto LABEL_55;
  }
  v41 = (float32x4_t*)LANES128(v40[2]).n128_u64[0];
  if (v41 == v40) {
    f_.v51_.v52 = nullptr;
    (*(void (**)(float32x4_t*, float32x4_t*))(LANES128(*(v41)).n128_u64[0] +
                                              24))(v41, &f_.v51_.v51);
    (*(void (**)(unsigned __int64))(*(_QWORD*)LANES128(v40[2]).n128_u64[0] +
                                    32LL))(LANES128(v40[2]).n128_u64[0]);
    f_.v51_.v52 = &f_.v51_.v51;
    LANES128(*(v40)).n128_u64[0] = (unsigned __int64)GameData_1fd8400;
    LANES128(*(v40)).n128_u64[1] = v3;
    v42 = 32;
    v41 = &f_.v51_.v51;
    LANES128(v40[2]).n128_u64[0] = (unsigned __int64)v40;
    goto LABEL_57;
  }
  LANES128(*(v40)).n128_u64[0] = (unsigned __int64)GameData_1fd8400;
  LANES128(*(v40)).n128_u64[1] = v3;
  f_.v51_.v52 = v41;
  LANES128(v40[2]).n128_u64[0] = (unsigned __int64)v40;
  if (v41 == &f_.v51_.v51) {
  LABEL_55:
    v42 = 32;
  }
  else {
    if (v41 == nullptr) {
      goto LABEL_58;
    }
    v42 = 40;
  }
LABEL_57:
  (*(void (**)(float32x4_t*))(LANES128(*(v41)).n128_u64[0] + v42))(v41);
LABEL_58:
  v43 = *(_QWORD*)(v3 + 384);
  v44 = *(_QWORD*)(v3 + 392);
  f_.v47_.v47 = v43;
  f_.v47_.v48 = v44;
  if (v44 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 16), 1u,
                              memory_order_relaxed);
    LANES128(f_.v51_.v51).n128_u64[0] = v43;
    LANES128(f_.v51_.v51).n128_u64[1] = v44;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 16), 1u,
                              memory_order_relaxed);
    UnitActor_81e020((__int64)v31, (__int64*)&f_.v51_.v51);
    std___1___shared_weak_count___release_weak(v44);
  }
  else {
    f_.v51_.v51 = COERCE_AS(float32x4_t, v43);
    UnitActor_81e020((__int64)v31, (__int64*)&f_.v51_.v51);
  }
  GameRoutine_81e220(v31 + 46, &f_.v47_.v47);
  if (f_.v47_.v48 != 0) {
    std___1___shared_weak_count___release_weak(f_.v47_.v48);
  }
LABEL_63:
  v45 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v45 + 44) != 1 || *(_DWORD*)(v45 + 40) != 1) {
    *(_DWORD*)(v45 + 48) = 1;
    *(_BYTE*)(v45 + 52) = 1;
  }
  if ((*(_BYTE*)(v45 + 128) & 1) == 0 && (*(_BYTE*)(v45 + 129) & 1) != 0) {
    WaitRelease_cfa2a0(v45 + 32);
  }
}

__int64 game_cf90a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  float v9;
  __int64 v10;
  float v11;
  char v12;
  __int64 v13;
  __int64 v14;
  int8x16_t* v15;
  int8x16_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  _BOOL4 v28;
  __int64 v29;
  bool v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int8 v40;
  int* v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  int v50;
  int v51;
  char v52;
  char v53;
  _BYTE* v54;
  __int64 v55;
  _BYTE* v56;
  bool v57;
  __int64 v58;
  atomic_uchar* v59;
  unsigned __int8 v60;
  int* v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  _QWORD* v71;
  _QWORD* v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  float v76;
  __int64 v77;
  float v78;
  __int64 v79;
  char* v80;
  __int64* v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  long double v94;
  __int64 v96;
  unsigned int v97;
  __int64 v98;
  __int64 v99;
  int v100;
  int v101;
  __int64 v102;
  int v103;
  unsigned __int64 v104;
  _QWORD* v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  _QWORD* v111;
  int v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  int v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  float v129;
  __int64* v130;
  __int64* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  float32x2_t* v135;
  __int64 v136;
  __int64 v137;
  __int64 v139;
  int v140;
  __int64 v141;
  int v142;
  int v143;
  __int64 v145;
  int v146;
  __int64 result;
  __int64 v148;
  __int64 v149;
  __int64 i;
  __int64 v151;
  __int64 v152;
  int v153;
  __int64 v154;
  int v155;
  __int64 v156;
  int v157;
  struct {
    __int64 v158;
    __int64 v159;
  } v158_;
  float32x4_t v160;
  struct {
    int v161[4];
    float32x4_t* v162;
    char gap56_[72];
    int v163;
    char gap132_[24];
    _BYTE v164[4];
  } v161_;

  v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 145) = 1;
  v2 = HubCharacterNatives_cf7940(v1),
  v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v2 != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                    memory_order_acquire);
    v4 = GameData_212deb0;
    if ((explicit & 1) == 0) {
      v152 = v2;
      v153 = __cxa_guard_acquire((__int64)GameData_212deb8),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v2 = v152;
      if (v153 != 0) {
        *v4 = wld_Crc32(0, "CharacterBuilder", 0x10u),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
        __cxa_guard_release((__int64)GameData_212deb8),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v2 = v152;
      }
    }
    v5 = *(_QWORD*)(v2 + 512);
    v6 = v5;
    while (v6 != *(_QWORD*)(v2 + 504)) {
      v7 = *(_DWORD*)(v6 - 16);
      v6 -= 16;
      v5 -= 16;
      if (v7 == *v4) {
        if (*(_QWORD*)(v2 + 512) != v5) {
          v8 = *(_QWORD*)(v5 + 8);
          goto LABEL_9;
        }
        break;
      }
    }
    v8 = 0;
  LABEL_9:
    *(_QWORD*)(v1 + 232) = v8;
  }
  else {
    v8 = *(_QWORD*)(v1 + 232);
  }
  v9 = *(float*)(v1 + 148);
  *(_BYTE*)(v1 + 144) = 1;
  if (v8 != 0 && (*(float*)(*(_QWORD*)(v8 + 304) + 12LL) = v9,
                  (v10 = *(_QWORD*)(v1 + 232)) != 0)) {
    v9 = *(float*)(*(_QWORD*)(v10 + 304) + 16LL) * 0x1.0aef000000000p+4f;
    v11 = 0x1.0624de0000000p-10f;
  }
  else {
    v11 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                            160LL) *
                  0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
  }
  v12 = *(_BYTE*)(v1 + 226);
  *(float*)(v1 + 228) = v9 * v11;
  if ((v12 & 1) == 0) {
    *(_BYTE*)(v1 + 226) = 1;
  }
  v13 = *(_QWORD*)(v1 + 16);
  v14 = *(_QWORD*)(v13 + 8);
  v15 = *(int8x16_t**)(v13 + 16);
  if (LANES128(v15[20]).n128_u8[0] == 1) {
    v16 = v15[19];
    v17 = *(int8x16_t*)(LANES128(v15[30]).n128_u64[1] + 16);
    LANES128(v18).n128_u64[0] = LANES128(v15[19]).n128_u64[0];
    LANES128(v19).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v20).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v22).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v19).n128_u64[1] = LANES128(v19).n128_u64[0];
    LANES128(v18).n128_u64[1] = LANES128(v21).n128_u64[0];
    *(int32x2_t*)&LANES128(v22).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v17).n128_u64[0]), 1);
    *(int8x8_t*)&LANES128(v20).n128_i8[8] =
        vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v23 =
        vmlaq_f32(vmulq_f32(v17, v19), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v18, v20));
    LANES128(v18).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v21).n128_u64[1] = LANES128(v18).n128_u64[0];
    LANES128(v18).n128_u64[1] = LANES128(v15[19]).n128_u64[0];
    LANES128(v16).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v16).n128_i8[8] =
        vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v160 = vmlsq_f32(vmlaq_f32(v23, COERCE_AS(float32x4_t, GameData_1a83800),
                               vmulq_f32(v18, v22)),
                     v16, v21);
  }
  else {
    v24 = LANES128(v15[30]).n128_u64[1];
    v26 = *(_QWORD*)(v24 + 16);
    v25 = *(_QWORD*)(v24 + 24);
    LANES128(v160).n128_u64[0] = v26;
    LANES128(v160).n128_u64[1] = v25;
  }
  game_zview_cf7200(v14, v15 + 35, &v160),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v1 + 216) = 0;
  v27 = GameData_212d310;
  if (*(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL) != 1) {
    v28 = GameRoutine_d1cdc0(*(_QWORD*)(v1 + 344), 0xC1223D32),
    v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v29 = 2;
    if (!v28) {
      v29 = 0;
    }
    *(_QWORD*)(v1 + 216) = *(_QWORD*)(v1 + 216) & 0xFFFFFFFFFFFFFFFDLL | v29;
    if (v28) {
      goto LABEL_30;
    }
  }
  if (!GameRoutine_d1cdc0(*(_QWORD*)(v1 + 344), 0x4D69F4Fu)) {
    v33 = *(_QWORD*)(v1 + 216) & 0xFFFFFFFFFFFFFFFBLL;
    *(_QWORD*)(v1 + 216) = v33;
    if ((v33 & 2) == 0) {
      goto LABEL_36;
    }
    goto LABEL_30;
  }
  v30 = GameRoutine_d1cdc0(*(_QWORD*)(v1 + 344), 0x4D69F55u),
  v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v31 = 4;
  if (!v30) {
    v31 = 0;
  }
  v32 = *(_QWORD*)(v1 + 216) & 0xFFFFFFFFFFFFFFFBLL | v31;
  *(_QWORD*)(v1 + 216) = v32;
  if ((v32 & 2) != 0) {
  LABEL_30:
    v57 = !GameRoutine_d1cdc0(*(_QWORD*)(v1 + 344), 0xEDD4C531),
    v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v34 = *(_QWORD*)(v1 + 344);
    v35 = 8;
    if (v57) {
      v35 = 0;
    }
    *(_QWORD*)(v1 + 216) = *(_QWORD*)(v1 + 216) & 0xFFFFFFFFFFFFFFF7LL | v35;
    v36 = GameRoutine_d1cdc0(v34, 0x6823716Au),
    v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v37 = 16;
    if (!v36) {
      v37 = 0;
    }
    *(_QWORD*)(v1 + 216) = *(_QWORD*)(v1 + 216) & 0xFFFFFFFFFFFFFFEFLL | v37;
  }
LABEL_36:
  v38 = *(_QWORD*)(v1 + 232);
  v39 = *(_QWORD*)(v38 + 408);
  if (v39 != 0) {
    v40 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea08,
                               memory_order_acquire);
    v41 = GameData_212ea00;
    if ((v40 & 1) == 0 && __cxa_guard_acquire((__int64)GameData_212ea08) != 0) {
      *v41 = wld_Crc32(0, "LocatorModule", 0xDu),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
      __cxa_guard_release((__int64)GameData_212ea08),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v42 = *(_QWORD*)(v39 + 512);
    v43 = v42;
    while (v43 != *(_QWORD*)(v39 + 504)) {
      v44 = *(_DWORD*)(v43 - 16);
      v43 -= 16;
      v42 -= 16;
      if (v44 == *v41) {
        if (*(_QWORD*)(v39 + 512) != v42) {
          v45 = *(_QWORD*)(v42 + 8);
          goto LABEL_44;
        }
        break;
      }
    }
    v45 = 0;
  LABEL_44:
    v38 = *(_QWORD*)(v1 + 232);
    *(_QWORD*)(v1 + 272) = v45;
  }
  *(_QWORD*)(v1 + 240) = CharacterBuilder_1084a50(v38, "-Jnt_C_Head"),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
  v46 = CharacterBuilder_1084a50(*(_QWORD*)(v1 + 232), "-Loc_C_Trans"),
  v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v47 = *(_QWORD*)(v1 + 344);
  *(_QWORD*)(v1 + 248) = v46;
  GameRoutine_d18da0(v47 + 96),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_d18da0(v47 + 184),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v48 = *(_QWORD*)(v1 + 232);
  if (v48 != 0) {
    if ((*(_BYTE*)(v1 + 224) & 1) != 0 &&
        (*(_QWORD*)(v1 + 264) & 0x180000000LL) == 0) {
      v49 = *(__int64**)(v48 + 104);
      v50 = (*(_QWORD*)(v1 + 264) & 1LL) == 0;
      v51 = *((unsigned __int8*)v49 + 16);
      if (v50 == v51) {
        goto LABEL_63;
      }
    }
    else {
      v49 = *(__int64**)(v48 + 104);
      if ((v49[2] & 1) == 0) {
        goto LABEL_63;
      }
      v50 = 0;
      v51 = 1;
    }
    if (v51 != v50) {
      v52 = *((_BYTE*)v49 + 17);
      *((_BYTE*)v49 + 16) = v50;
      if (v50 != 0) {
        v53 = 0;
      }
      else {
        v53 = 2;
      }
      *((_BYTE*)v49 + 17) = v52 & 0xFD | v53;
      *((_BYTE*)v49 + 18) = *((_BYTE*)v49 + 18) & 0xFD | v53;
      *((_BYTE*)v49 + 19) = *((_BYTE*)v49 + 19) & 0xFD | v53;
      *((_BYTE*)v49 + 20) = *((_BYTE*)v49 + 20) & 0xFD | v53;
      v54 = (_BYTE*)v49[1];
      v54[632] = 0;
      v54[664] = 0;
      v54[696] = 0;
      v54[728] = 0;
      v55 = *v49;
      if (v50 != 0) {
        (*(void (**)(__int64*))(v55 + 64))(v49),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v56 = (_BYTE*)v49[1];
        v57 = v56[300] == 3 && v56[301] == 3;
        if (!v57 && v56[302] != 1) {
          goto LABEL_63;
        }
        v55 = *v49;
      }
      (*(void (**)(__int64*))(v55 + 72))(v49),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
LABEL_63:
  game_zview_CharacterAnim_CommitReduceFlag(*(_QWORD*)(v1 + 344)),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_DWORD*)(*(_QWORD*)v27 + 8LL) == 3) {
    if (*(_BYTE*)(v1 + 145) == 1) {
      v58 = HubCharacterNatives_cf7940(v1),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v58 = 0;
    }
    v59 = (atomic_uchar*)GameData_212ec70;
    v60 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec70,
                               memory_order_acquire);
    v61 = GameData_212ec68;
    if ((v60 & 1) == 0) {
      v154 = v58;
      v155 = __cxa_guard_acquire((__int64)GameData_212ec70),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v58 = v154;
      if (v155 != 0) {
        *v61 = wld_Crc32(0, "HitboxModule", 0xCu),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
        __cxa_guard_release((__int64)GameData_212ec70),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v58 = v154;
      }
    }
    v62 = *(_QWORD*)(v58 + 512);
    v63 = v62;
    do {
      if (v63 == *(_QWORD*)(v58 + 504)) {
        goto LABEL_73;
      }
      v64 = *(_DWORD*)(v63 - 16);
      v63 -= 16;
      v62 -= 16;
    } while (v64 != *v61);
    if (*(_QWORD*)(v58 + 512) == v62 || *(_QWORD*)(v62 + 8) == 0) {
    LABEL_73:
      v65 = HubCharacterNatives_cf7940(v1),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
      GameRoutine_cf62e0(v65),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (*(_BYTE*)(v1 + 145) == 1) {
        v66 = HubCharacterNatives_cf7940(v1),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v66 != 0) {
          if ((atomic_load_explicit(v59, memory_order_acquire) & 1) == 0) {
            v156 = v66;
            v157 = __cxa_guard_acquire((__int64)GameData_212ec70),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
            v66 = v156;
            if (v157 != 0) {
              *v61 = wld_Crc32(0, "HitboxModule", 0xCu),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
              __cxa_guard_release((__int64)GameData_212ec70),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              v66 = v156;
            }
          }
          v67 = *(_QWORD*)(v66 + 512);
          v68 = v67;
          do {
            if (v68 == *(_QWORD*)(v66 + 504)) {
              goto LABEL_102;
            }
            v69 = *(_DWORD*)(v68 - 16);
            v68 -= 16;
            v67 -= 16;
          } while (v69 != *v61);
          if (*(_QWORD*)(v66 + 512) == v67) {
            goto LABEL_102;
          }
          v70 = *(_QWORD*)(v67 + 8);
          if (v70 == 0) {
            goto LABEL_102;
          }
          v71 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 352, 16, 0),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v72 = v71 + 4;
          v73 = v71;
          v71[1] = 0;
          v71[2] = 0;
          *v71 = GameData_1fd8100;
          GameRoutine_d49ac0((__int64)(v71 + 4)),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v74 = *(_QWORD*)(v1 + 168);
          *(_QWORD*)(v1 + 160) = v72;
          *(_QWORD*)(v1 + 168) = v73;
          if (v74 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak(v74),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          *(_DWORD*)(*(_QWORD*)(v1 + 160) + 112LL) =
              *(_DWORD*)(*(_QWORD*)(v1 + 16) + 528LL);
          v75 = *(_QWORD*)(v1 + 160);
          *(_QWORD*)(v75 + 80) = 0;
          *(_OWORD*)(v75 + 80) = *(unsigned __int64*)(v75 + 80);
          v76 = *(float*)(*(_QWORD*)(v1 + 16) + 552LL);
          v77 = *(_QWORD*)(v1 + 160);
          v78 = *(float*)(v77 + 112);
          *(_DWORD*)(v77 + 96) = 0;
          *(float*)(v77 + 100) = v76 - v78;
          *(_OWORD*)(v77 + 96) = *(unsigned __int64*)(v77 + 96);
          v79 = *(_QWORD*)(v1 + 160);
          if ((*(_BYTE*)(v79 + 128) & 1) != 0) {
            *(_QWORD*)(v79 + 136) = 9;
            v80 = *(char**)(v79 + 144);
          }
          else {
            *(_BYTE*)(v79 + 128) = 18;
            v80 = (char*)(v79 + 129);
          }
          strcpy(v80, "CharaBody");
          v81 = *(__int64**)(v1 + 160);
          LANES128(v160).n128_u64[0] = (unsigned __int64)GameData_1fd8150;
          LANES128(v160).n128_u64[1] = v1;
          v161_.v162 = &v160;
          v82 = v81[31];
          if (v82 >= v81[32]) {
            v83 = CharacterModel_cf9f80(v81 + 30, (__int64)&v160),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          else {
            *(_QWORD*)(v82 + 32) = v82;
            (*(void (**)(float32x4_t*, unsigned __int64))(
                LANES128(*(v161_.v162)).n128_u64[0] + 24))(v161_.v162, v82),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v83 = v82 + 48;
          }
          v81[31] = v83;
          if (v161_.v162 == &v160) {
            v84 = 32;
          }
          else {
            if (v161_.v162 == nullptr) {
            LABEL_95:
              v85 = *(_QWORD*)(v1 + 168);
              v158_.v158 = *(_QWORD*)(v1 + 160);
              v158_.v159 = v85;
              if (v85 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v85 + 8),
                                          1u, memory_order_relaxed);
              }
              v86 = GameData_212ee20[0];
              v87 = *GameData_212ee20[0];
              nn_os_LockMutex(*GameData_212ee20[0] + 48),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              v88 = v158_.v158;
              *(_BYTE*)(v158_.v158 + 176) = 1;
              v89 = *v86;
              *(_QWORD*)(v88 + 168) = v70;
              v90 = *(_QWORD*)(v89 + 8);
              *(_QWORD*)(v88 + 160) = v90;
              *(_QWORD*)(v89 + 8) = v90 + 1;
              GameRoutine_d4e4e0((__int64*)(v70 + 24), &v158_.v158),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              nn_os_UnlockMutex(v87 + 48),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              v91 = v158_.v159;
              if (v158_.v159 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v158_.v159 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v91 + 16LL))(v91),
                    v94 = COERCE_AS(__typeof__(v94),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                std___1___shared_weak_count___release_weak(v91),
                    v94 = COERCE_AS(__typeof__(v94),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              v92 = *(_QWORD*)(v1 + 16);
              v93 = *(_QWORD*)(v1 + 160);
              v161_.v163 = 3;
              v161_.v161[0] = *(_DWORD*)(v92 + 184);
              GameRoutine_d49fe0(v93, (__int64)"MakeId", 6u, (__int64)&v160),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              if (v161_.v163 != -1) {
                ((void (*)(_BYTE*, int*))GameData_1fdc410[v161_.v163])(
                    v161_.v164, v161_.v161),
                    v94 = COERCE_AS(__typeof__(v94),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              goto LABEL_102;
            }
            v84 = 40;
          }
          (*(void (**)(void*))(LANES128(*(v161_.v162)).n128_u64[0] + v84))(
              (void*)v161_.v162),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_95;
        }
      }
    }
  }
LABEL_102:
  CharacterModel_cf67d0(v1),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_QWORD*)(v1 + 312) != 0) {
    v96 = *(_QWORD*)(v1 + 232);
    if (v96 != 0) {
      v97 = *(_DWORD*)(v96 + 340) & 0xFFFFFFFD |
            (2 * ((*(_DWORD*)(*(_QWORD*)(v1 + 16) + 384LL) & 2) != 0));
      *(_DWORD*)(v96 + 340) = v97;
      *(_DWORD*)(v96 + 340) =
          v97 & 0xFFFFFFFE |
          ((*(_DWORD*)(*(_QWORD*)(v1 + 16) + 384LL) & 0x20) != 0) | 0x2000;
    }
  }
  v98 = *(_QWORD*)(v1 + 160);
  if (v98 != 0) {
    v99 = *(_QWORD*)(*(_QWORD*)(v1 + 16) + 384LL);
    v100 = (v99 & 8) != 0 ? 3 : 1;
    v101 = (v99 & 4) != 0 ? 2 : v100;
    *(_DWORD*)(v98 + 120) = v101;
    v102 = *(_QWORD*)(v1 + 160);
    v103 = (signed __int32)*(_DWORD*)(v1 + 184) < 1;
    if (*(unsigned __int8*)(v102 + 232) != v103) {
      *(_BYTE*)(v102 + 232) = v103;
    }
  }
  v104 = *(unsigned __int8*)(v1 + 192);
  v105 = *(_QWORD**)(v1 + 232);
  if ((v104 & 1) != 0) {
    v106 = *(_QWORD*)(v1 + 200);
  }
  else {
    v106 = v104 >> 1;
  }
  if (v106 != 0) {
    if (v105 == nullptr) {
      goto LABEL_126;
    }
    v161_.v164[0] = 1;
  }
  else {
    v161_.v164[0] = 1;
    if (v105 == nullptr) {
      goto LABEL_126;
    }
  }
  *(_BYTE*)(v1 + 365) = 1;
  LANES128(v160).n128_u64[0] = (unsigned __int64)GameData_1fd8670;
  LANES128(v160).n128_u64[1] = (unsigned __int64)v161_.v164;
  v161_.v162 = &v160;
  CharacterBuilder_1083e90(v105, (__int64)&v160),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v161_.v162 == &v160) {
    v107 = 32;
  }
  else {
    if (v161_.v162 == nullptr) {
      goto LABEL_126;
    }
    v107 = 40;
  }
  (*(void (**)(void*))(LANES128(*(v161_.v162)).n128_u64[0] + v107))(
      (void*)v161_.v162),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_126:
  if (*(_DWORD*)(*(_QWORD*)v27 + 8LL) != 1) {
    game_zview_CharacterModel_SetActiveSignal(v1, 1),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v108 = *(_QWORD*)(v1 + 344);
  if (*(_DWORD*)(v108 + 360) == -2) {
    v109 = *(_QWORD*)(v108 + 272);
    v110 = *(_QWORD*)(v108 + 280);
    while (v109 != v110) {
      if (*(_BYTE*)(v109 + 20) == 1) {
        {
          __typeof__(v94) z_ = (__typeof__(v94)){0};
          LODWORD(z_) = *(_DWORD*)(v109 + 16);
          v94 = z_;
        }
        if (*(float*)&v94 == 0x0.0p+0f &&
            llvm_libcxx_21_libcxx_include___memory_d2d4e0()) {
          v111 = (_QWORD*)(v109 + 16);
          v112 = *(unsigned __int8*)(v108 + 88);
          *(_DWORD*)(v108 + 24) = *(_DWORD*)v109;
          if (v112 == 1) {
            *(_QWORD*)&v94 = *(_QWORD*)(v109 + 8);
            *(_DWORD*)(v108 + 32) = LODWORD(v94);
            {
              __typeof__(v94) z_ = (__typeof__(v94)){0};
              LODWORD(z_) = *(_DWORD*)(v109 + 12);
              v94 = z_;
            }
            *(_DWORD*)(v108 + 36) = LODWORD(v94);
            v113 = *(_QWORD*)(v109 + 24);
            *(_QWORD*)(v108 + 40) = *v111;
            *(_QWORD*)(v108 + 48) = v113;
            v114 = *(_QWORD*)(v109 + 32);
            v115 = *(_QWORD*)(v109 + 40);
            v116 = *(_QWORD*)(v109 + 56);
            *(_QWORD*)(v108 + 72) = *(_QWORD*)(v109 + 48);
            *(_QWORD*)(v108 + 80) = v116;
            *(_QWORD*)(v108 + 56) = v114;
            *(_QWORD*)(v108 + 64) = v115;
          }
          else {
            *(_QWORD*)(v108 + 32) = *(_QWORD*)(v109 + 8);
            v117 = *(_QWORD*)(v109 + 24);
            *(_QWORD*)(v108 + 40) = *v111;
            *(_QWORD*)(v108 + 48) = v117;
            v118 = *(_QWORD*)(v109 + 32);
            v119 = *(_QWORD*)(v109 + 40);
            v120 = *(_QWORD*)(v109 + 56);
            *(_QWORD*)(v108 + 72) = *(_QWORD*)(v109 + 48);
            *(_QWORD*)(v108 + 80) = v120;
            *(_QWORD*)(v108 + 56) = v118;
            *(_QWORD*)(v108 + 64) = v119;
            *(_BYTE*)(v108 + 88) = 1;
          }
          break;
        }
      }
      v109 += 64;
    }
  }
  if (*(_BYTE*)(v108 + 346) == 1) {
    v121 = *(unsigned __int8*)(v108 + 88);
    *(_DWORD*)(v108 + 24) = *(_DWORD*)(v108 + 296);
    if (v121 == 1) {
      v122 = *(_QWORD*)(v108 + 336);
      *(_QWORD*)&v94 = *(_QWORD*)(v108 + 304);
      *(_QWORD*)(v108 + 56) = *(_QWORD*)(v108 + 328);
      *(_QWORD*)(v108 + 64) = v122;
      v123 = *(_QWORD*)(v108 + 344);
      v124 = *(_QWORD*)(v108 + 352);
      *(_QWORD*)(v108 + 32) = *(_QWORD*)&v94;
      *(_QWORD*)(v108 + 72) = v123;
      *(_QWORD*)(v108 + 80) = v124;
      v125 = *(_QWORD*)(v108 + 320);
      *(_QWORD*)(v108 + 40) = *(_QWORD*)(v108 + 312);
      *(_QWORD*)(v108 + 48) = v125;
    }
    else {
      v126 = *(_QWORD*)(v108 + 344);
      *(_QWORD*)(v108 + 64) = *(_QWORD*)(v108 + 336);
      *(_QWORD*)(v108 + 72) = v126;
      *(_QWORD*)(v108 + 80) = *(_QWORD*)(v108 + 352);
      v127 = *(_QWORD*)(v108 + 312);
      *(_QWORD*)(v108 + 32) = *(_QWORD*)(v108 + 304);
      *(_QWORD*)(v108 + 40) = v127;
      v128 = *(_QWORD*)(v108 + 328);
      *(_QWORD*)(v108 + 48) = *(_QWORD*)(v108 + 320);
      *(_QWORD*)(v108 + 56) = v128;
      *(_BYTE*)(v108 + 88) = 1;
    }
  }
  CharacterModel_cf6940(v1, v94),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v129 = 0x1.0000000000000p+0f;
  v131 = *(__int64**)(*GameData_212eba8[0] + 88);
  v130 = *(__int64**)(*GameData_212eba8[0] + 96);
  if (v130 != v131) {
    while (1) {
      v132 = *v131++;
      if (v132 == *(_QWORD*)(v1 + 16)) {
        break;
      }
      if (v131 == v130) {
        v129 = 0x0.0p+0f;
        break;
      }
    }
  }
  v133 = *(_QWORD*)(v1 + 328);
  v134 = *(_QWORD*)(v133 + 360);
  *(_DWORD*)(v133 + 96) = 0;
  *(float*)(v133 + 80) = v129;
  *(float*)(v133 + 84) = v129;
  *(_BYTE*)(v133 + 100) = 1;
  *(_BYTE*)(v133 + 369) = 1;
  CharacterModel_cf5c00(v134),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v135 = *(float32x2_t**)(v1 + 344);
  if (LANES64(v135[11]).n64_u8[0] == 1) {
    CharacterModel_d198c0(*(_QWORD**)(v1 + 344), v135 + 3, 1, 1),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (LANES64(v135[11]).n64_u8[0] == 1) {
      LANES64(v135[11]).n64_u8[0] = 0;
    }
  }
  v136 = *(_QWORD*)(v1 + 232);
  if (v136 != 0) {
    LANES128(v160).n128_u8[8] = 0;
    LANES128(v160).n128_u64[0] = (unsigned __int64)GameData_1fd81e0;
    v161_.v162 = &v160;
    CharacterBuilder_1083e90((_QWORD*)v136, (__int64)&v160),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v161_.v162 == &v160) {
      v137 = 32;
    }
    else {
      if (v161_.v162 == nullptr) {
      LABEL_155:
        *(_DWORD*)(v136 + 340) |= 0x2000u;
        goto LABEL_156;
      }
      v137 = 40;
    }
    (*(void (**)(void*))(LANES128(*(v161_.v162)).n128_u64[0] + v137))(
        (void*)v161_.v162),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_155;
  }
LABEL_156:
  if ((*GameData_212d168 == 4 || *GameData_212d168 == 2) &&
      *(_BYTE*)(v1 + 145) == 1) {
    v139 = HubCharacterNatives_cf7940(v1),
    v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v139 != 0) {
      v140 = *(unsigned __int8*)(v139 + 288);
      if (v140 == 1) {
        v141 = v139;
        do {
          v141 = *(_QWORD*)(v141 + 736);
          v142 = v141 == 0;
        } while (v141 != 0 && (*(_BYTE*)(v141 + 288) & 1) != 0);
      }
      else {
        v142 = 0;
      }
      v143 = *(unsigned __int8*)(v1 + 364);
      if (v143 != v142 && v140 != v143) {
        *(_BYTE*)(v139 + 288) = v143;
      }
    }
  }
  v145 = *(_QWORD*)(v1 + 328);
  v146 = *(_DWORD*)(v145 + 16);
  *(_BYTE*)(v145 + 369) = 1;
  *(_DWORD*)(v145 + 32) = 0;
  *(_BYTE*)(v145 + 36) = 1;
  *(_DWORD*)(v145 + 64) = 0;
  *(_BYTE*)(v145 + 68) = 1;
  *(_DWORD*)(v145 + 96) = 0;
  *(_BYTE*)(v145 + 100) = 1;
  *(_DWORD*)(v145 + 128) = 0;
  *(_BYTE*)(v145 + 132) = 1;
  *(_DWORD*)(v145 + 160) = 0;
  *(_BYTE*)(v145 + 164) = 1;
  *(_DWORD*)(v145 + 192) = 0;
  *(_BYTE*)(v145 + 196) = 1;
  *(_DWORD*)(v145 + 224) = 0;
  *(_BYTE*)(v145 + 228) = 1;
  *(_DWORD*)(v145 + 256) = 0;
  *(_BYTE*)(v145 + 260) = 1;
  *(_DWORD*)(v145 + 288) = 0;
  *(_BYTE*)(v145 + 292) = 1;
  *(_DWORD*)(v145 + 320) = 0;
  *(_BYTE*)(v145 + 324) = 1;
  *(_DWORD*)(v145 + 352) = 0;
  *(_BYTE*)(v145 + 356) = 1;
  *(_DWORD*)(v145 + 20) = v146;
  *(_DWORD*)(v145 + 52) = *(_DWORD*)(v145 + 48);
  *(_DWORD*)(v145 + 84) = *(_DWORD*)(v145 + 80);
  *(_DWORD*)(v145 + 116) = *(_DWORD*)(v145 + 112);
  *(_DWORD*)(v145 + 148) = *(_DWORD*)(v145 + 144);
  *(_DWORD*)(v145 + 180) = *(_DWORD*)(v145 + 176);
  *(_DWORD*)(v145 + 212) = *(_DWORD*)(v145 + 208);
  *(_DWORD*)(v145 + 244) = *(_DWORD*)(v145 + 240);
  *(_DWORD*)(v145 + 276) = *(_DWORD*)(v145 + 272);
  *(_DWORD*)(v145 + 308) = *(_DWORD*)(v145 + 304);
  *(_DWORD*)(v145 + 340) = *(_DWORD*)(v145 + 336);
  GameRoutine_10cae60(*(float32x4_t**)(v1 + 336), 1),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result = CharacterModel_cf5c00(v1),
  v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v148 = *(_QWORD*)(v1 + 16);
  v149 = *(_QWORD*)(v148 + 400);
  for (i = *(_QWORD*)(v148 + 408); v149 != i; v149 += 48) {
    LANES128(v160).n128_u64[0] = *(_QWORD*)(v1 + 16);
    v151 = *(_QWORD*)(v149 + 32);
    if (v151 == 0) {
      GameRoutine_60a310(),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    result = (*(__int64 (**)(__int64, float32x4_t*))(*(_QWORD*)v151 + 48LL))(
        v151, &v160),
    v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  return result;
}

__int64 game_e17bc0(__int64 a1)
{
  __int64 v1;
  float v2;
  float v4;
  __int64 result;
  float v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  float32x4_t* v10;
  __int64 v11;
  float32x4_t v12;
  __int64 v13;
  __int64 v14;
  float v15;
  unsigned __int64 v16;
  float32x4_t* v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  float v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float v25;
  float32x4_t v26;
  float32x4_t v27;
  int8x16_t v28;
  float v29;
  float32x4_t v30;
  int8x16_t v31;
  float32x4_t* v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(float*)(a1 + 16);
  v4 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 8LL) +
                       228LL) /
             0x1.8000000000000p+0f);
  if (v2 > 0x1.0000000000000p+0f) {
    v2 = v2 - v4;
    if (v2 >= 0x1.0000000000000p+0f) {
      goto LABEL_7;
    }
  }
  else if (!(v2 < 0x1.0000000000000p+0f) ||
           !((v2 = v2 + v4) > 0x1.0000000000000p+0f)) {
  LABEL_7:
    *(float*)(a1 + 16) = v2;
    result = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL);
    v6 = *(float*)(a1 + 48) *
         (float)((float)(fminf(fmaxf(v2, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                         0x1.6666660000000p-1f) +
                 0x1.3333340000000p-2f);
    if ((*(_BYTE*)(a1 + 20) & 1) != 0) {
      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 16) + 40LL) + 8LL) +
                64LL) = v6;
    }
    else {
      result =
          ((__int64 (*)(__int64, unsigned __int64*, float))GameRoutine_ceede0)(
              result, (unsigned __int64*)(a1 + 32), v6);
      *(_BYTE*)(a1 + 20) = 1;
    }
    v7 = *(_QWORD*)(a1 + 8);
    v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 24LL) + 16LL);
    if ((*(_QWORD*)(v8 + 24) & 0x1FFFFFFFFLL) != 0x100000001LL) {
      goto LABEL_20;
    }
    v9 = *(_QWORD**)(*(_QWORD*)(v8 + 40) + 8LL);
    v10 = (float32x4_t*)v9[12];
    v11 = v9[13] - (_QWORD)v10;
    if (v11 == 0) {
      goto LABEL_20;
    }
    v12 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v9[1] + 8LL) + 16LL) + 560LL);
    v13 = (v11 >> 5) & 3;
    if ((unsigned __int64)(v11 >> 5) >= 4) {
      v15 = 0x0.0p+0f;
      v16 = (v11 >> 5) & 0xFFFFFFFFFFFFFFFCLL;
      v17 = v10 + 4;
      v14 = 0;
      do {
        v18 = v17[-4];
        v14 += 4;
        v19 = vsubq_f32(v12, v18);
        LANES128(v18).n128_u32[3] = 0;
        v20 = vmulq_f32(v19, v19);
        LANES128(v20).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
                .n64_u64[0];
        v21 = v15 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]))))
                        .n64_f32[0];
        v22 = v17[-2];
        v23 = vsubq_f32(v18, v22);
        LANES128(v22).n128_u32[3] = 0;
        v24 = vmulq_f32(v23, v23);
        LANES128(v24).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
                .n64_u64[0];
        v25 = v21 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]))))
                        .n64_f32[0];
        v26 = *v17;
        v27 = vsubq_f32(v22, *v17);
        LANES128(v26).n128_u32[3] = 0;
        v28 = vmulq_f32(v27, v27);
        LANES128(v28).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                .n64_u64[0];
        v29 = v25 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]))))
                        .n64_f32[0];
        v12 = v17[2];
        v17 += 8;
        v30 = vsubq_f32(v26, v12);
        LANES128(v12).n128_u32[3] = 0;
        v31 = vmulq_f32(v30, v30);
        LANES128(v31).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
                .n64_u64[0];
        v15 = v29 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]))))
                        .n64_f32[0];
      } while (v16 != v14);
    }
    else {
      v14 = 0;
      v15 = 0x0.0p+0f;
    }
    if (v13 != 0) {
      v32 = &v10[2 * v14];
      do {
        v33 = *v32;
        v32 += 2;
        v34 = v33;
        --v13;
        v35 = vsubq_f32(v12, v33);
        LANES128(v34).n128_u32[3] = 0;
        v36 = vmulq_f32(v35, v35);
        LANES128(v36).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
                .n64_u64[0];
        v15 = v15 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]))))
                        .n64_f32[0];
        v12 = v34;
      } while (v13 != 0);
    }
    if (v15 <= 0x1.0000000000000p-1f) {
    LABEL_20:
      if (*(_BYTE*)(v7 + 44) != 1 || *(_DWORD*)(v7 + 40) != 0) {
        *(_DWORD*)(v7 + 48) = 0;
        *(_BYTE*)(v7 + 52) = 1;
      }
      if ((*(_BYTE*)(v7 + 128) & 1) == 0 && (*(_BYTE*)(v7 + 129) & 1) != 0) {
        return GameRoutine_e18130(v7 + 32);
      }
    }
    return result;
  }
  v2 = 0x1.0000000000000p+0f;
  goto LABEL_7;
}

__int64 game_e6c240(__int64 a1, __int64 a2)
{
  unsigned int v4;
  char v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  char v10;
  char v11;

  v4 = (unsigned __int16)ProcCmdBtlSeqBattle_e6b430(a1);
  if (v4 < 0x100) {
    v5 = 0;
    return v5 & 1;
  }
  v6 = GameData_212dec0[0];
  if ((_BYTE)v4 != 0) {
    if ((unsigned __int8)v4 == 1) {
      v7 = 160;
    }
    else if ((unsigned __int8)v4 == 3) {
      v7 = 288;
    }
    else {
      v7 = 416;
    }
    *(_BYTE*)(GameData_2203490 + v7 + 672) = 1;
    v8 = *(_QWORD*)(a1 + 160);
    if (v8 == 0) {
      goto LABEL_15;
    }
  }
  else {
    *(_BYTE*)(*GameData_212ea58 + 704) = 1;
    if ((*(_BYTE*)(*v6 + 12) & 1) == 0) {
      CmdBtlSkipInput_1006910(GameData_22190c0);
    }
    v8 = *(_QWORD*)(a1 + 160);
    if (v8 == 0) {
    LABEL_15:
      v5 = 0;
      if (*(_QWORD*)(a1 + 192) == 0) {
        goto LABEL_23;
      }
      goto LABEL_16;
    }
  }
  v5 = BattleInfo_796f20(v8, a2);
  if (*(_QWORD*)(a1 + 192) != 0) {
  LABEL_16:
    if (GameData_21d3f90 != 0) {
      if ((unsigned __int8)v4 > 3u) {
        v9 = 3;
      }
      else {
        v9 = GameData_1a83140[v4 & 3];
      }
      v10 = GameHr_eacc20(a2, 8u, v9, 0xFFFFFFFF);
    }
    else {
      v10 = 0;
    }
    v5 |= v10;
  }
LABEL_23:
  if ((v5 & 1) != 0 && (*(_BYTE*)(*v6 + 12) & 1) == 0) {
    if ((*(_BYTE*)(GameData_22190c0 + 11) & 1) == 0 &&
        (*(_BYTE*)(GameData_22190c0 + 9) & 1) == 0 &&
        game_ProcFadeView_instance_ != 0) {
      v11 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
      *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 2;
      if (game_ProcFadeView_instance_ != 0) {
        game_809ba0(game_ProcFadeView_instance_, 0x1.1111120000000p-3f);
        if (game_ProcFadeView_instance_ != 0) {
          *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v11;
        }
      }
    }
    v5 = 1;
  }
  return v5 & 1;
}

float game_edf0f0(__int64 a1, float a2, float a3)
{

#pragma clang fp contract(off)
  __int64* v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  float v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  float v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  float result;
  __int128 v22;
  __int64 v23;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v23 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v23;
    __cxa_guard_release((__int64)&GameData_21a6130);
  }
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v6 = game_map_MapRandom_instance__ptr[0];
  v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v9 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v6 + 1) = v7;
  v10 = (v9 >> 8) ^ (v8 >> 19) ^ v9 ^ v8;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6) = v8;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4) = v10;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  v11 = (float)(unsigned __int16)v10;
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v12 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6);
  v13 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4);
  v14 = *(_DWORD*)v6 ^ (*(_DWORD*)v6 << 11);
  *(_DWORD*)v6 = *((_DWORD*)v6 + 1);
  *((_DWORD*)v6 + 1) = v12;
  v15 = (v14 >> 8) ^ (v13 >> 19) ^ v14 ^ v13;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6) = v13;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4) = v15;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  v16 = (float)(unsigned __int16)v15;
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v17 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6);
  v18 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4);
  v19 = *(_DWORD*)v6 ^ (*(_DWORD*)v6 << 11);
  *(_DWORD*)v6 = *((_DWORD*)v6 + 1);
  *((_DWORD*)v6 + 1) = v17;
  v20 = (v19 >> 8) ^ (v18 >> 19) ^ v19 ^ v18;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6) = v18;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4) = v20;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  *(float*)(a1 + 80) = v11;
  *(float*)(a1 + 84) = v16;
  *(float*)(a1 + 72) = a2;
  *(float*)(a1 + 76) = a3;
  result = (float)(unsigned __int16)v20;
  v22 = *(_OWORD*)(a1 + 80);
  *((float*)&v22 + 2) = result;
  *(_QWORD*)(a1 + 64) = 0;
  DWORDn(v22, sizeof(v22) / 4 - 1) = 0;
  *(_OWORD*)(a1 + 80) = v22;
  return result;
}

float game_1062d90(float* a1, float* a2)
{
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float result;
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

  {
    v2 = *a1;
    __asm__ volatile("" ::"w"(v2));
  }
  {
    v3 = a1[1];
    __asm__ volatile("" ::"w"(v3));
  }
  v4 = 0x1.0000000000000p+0f;
  v5 = 0x1.0000000000000p+0f;
  v6 = (float)(PSEUDO_UNFUSED(v3 * v3)) + (float)(v2 * v2);
  v7 = 0x0.0p+0f;
  v8 = 0x0.0p+0f;
  if (!(v6 < 0x1.0000000000000p-23f)) {
    v9 = 0x1.0000000000000p+0f / sqrtf(v6);
    v8 = v2 * v9;
    v5 = v3 * v9;
  }
  {
    v10 = *a2;
    __asm__ volatile("" ::"w"(v10));
  }
  {
    v11 = a2[1];
    __asm__ volatile("" ::"w"(v11));
  }
  v12 = (float)(PSEUDO_UNFUSED(v11 * v11)) + (float)(v10 * v10);
  if (!(v12 < 0x1.0000000000000p-23f)) {
    v13 = 0x1.0000000000000p+0f / sqrtf(v12);
    v7 = v10 * v13;
    v4 = v11 * v13;
  }
  v14 = (float)(PSEUDO_UNFUSED(v5 * v4)) + (float)(v8 * v7);
  result = 0x0.0p+0f;
  if (!(v14 >= 0x1.fffffc0000000p-1f)) {
    if (v14 <= -0x1.fffffc0000000p-1f) {
      return 0x1.921fb60000000p+1f;
    }
    v16 = sqrtf(__builtin_elementwise_fma(-v14, v14, 0x1.0000000000000p+0f));
    if (v14 >= 0x0.0p+0f) {
      {
        v21 = *(float*)GameData_212c2f0;
        __asm__ volatile("" ::"w"(v21));
      }
      {
        v22 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        __asm__ volatile("" ::"w"(v22));
      }
      {
        v23 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        __asm__ volatile("" ::"w"(v23));
      }
      {
        v24 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                        8);
        __asm__ volatile("" ::"w"(v24));
      }
      if (v14 > 0x1.6a09e60000000p-1f) {
        v25 = v16 / v14;
        return v25 * (float)((
                                 float)((float)((float)((float)(v24 + (float)((float)((float)((float)(v23 + (float)((float)((float)((float)(v22 + (float)((float)((float)(v21 * (float)(v25 * v25)) - *((float*)GameData_212c2f0 + 1)) * (float)(v25 * v25))) * (float)(v25 * v25)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) * (float)(v25 *
                                                                                                                                                                                                                                                                                                                                                                      v25))) *
                                                                                              (float)(v25 *
                                                                                                      v25)) -
                                                                                      *(float*)((char*)((
                                                                                                    __int128*)0x10LL) +
                                                                                                (_QWORD)
                                                                                                    GameData_212c2f0 +
                                                                                                4)) *
                                                                              (float)(v25 *
                                                                                      v25))) *
                                                        (float)(v25 * v25)) -
                                                *(float*)((char*)((
                                                              __int128*)0x10LL) +
                                                          (_QWORD)
                                                              GameData_212c2f0 +
                                                          12)) *
                                        (float)(v25 * v25)) +
                             0x1.0000000000000p+0f);
      }
      v17 = v14 / v16;
      v18 = 0x1.921fb60000000p+0f;
      v19 =
          (float)((float)((float)((float)(v24 +
                                          (float)((float)((float)((float)(v23 +
                                                                          (float)((float)((float)((float)(v22 +
                                                                                                          (float)((float)((float)(v21 *
                                                                                                                                  (float)(v17 *
                                                                                                                                          v17)) -
                                                                                                                          *((float*)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            1)) *
                                                                                                                  (float)(v17 *
                                                                                                                          v17))) *
                                                                                                  (float)(v17 *
                                                                                                          v17)) -
                                                                                          *(float*)((char*)((
                                                                                                        _UNKNOWN**)0x8LL) +
                                                                                                    (_QWORD)
                                                                                                        GameData_212c2f0 +
                                                                                                    4)) *
                                                                                  (float)(v17 *
                                                                                          v17))) *
                                                                  (float)(v17 *
                                                                          v17)) -
                                                          *(float*)((char*)((
                                                                        __int128*)0x10LL) +
                                                                    (_QWORD)
                                                                        GameData_212c2f0 +
                                                                    4)) *
                                                  (float)(v17 * v17))) *
                                  (float)(v17 * v17)) -
                          *(float*)((char*)((__int128*)0x10LL) +
                                    (_QWORD)GameData_212c2f0 + 12)) *
                  (float)(v17 * v17)) +
          0x1.0000000000000p+0f;
      return v18 - (float)(PSEUDO_UNFUSED(v17 * v19));
    }
    if (v14 < -0x1.6a09e60000000p-1f) {
      v17 = (float)-v16 / v14;
      v18 = 0x1.921fb60000000p+1f;
      v19 =
          (float)((float)-(
                      float)(*(float*)((char*)((__int128*)0x10LL) +
                                       (_QWORD)GameData_212c2f0 + 12) -
                             (float)((
                                         float)(*(float*)((char*)((
                                                              __int128*)0x10LL) +
                                                          (_QWORD)
                                                              GameData_212c2f0 +
                                                          8) +
                                                (float)((float)-(
                                                            float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((
                                                                                                                                                      float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((
                                                                                                                                                                                                                                            float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                     4) -
                                                                                                                                                                                                                                                           (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(
                                                                                                                                                                                                                                                                                                                                                          float)(*((float*)
                                                                                                                                                                                                                                                                                                                                                                       GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                   1) -
                                                                                                                                                                                                                                                                                                                                                                 (float)(*(float*)GameData_212c2f0 * (float)(v17 *
                                                                                                                                                                                                                                                                                                                                                                                                             v17))) *
                                                                                                                                                                                                                                                                                                                                                      (float)(v17 *
                                                                                                                                                                                                                                                                                                                                                              v17))) *
                                                                                                                                                                                                                                                                   (float)(v17 *
                                                                                                                                                                                                                                                                           v17))) *
                                                                                                                                                                                                                                        (float)(v17 *
                                                                                                                                                                                                                                                v17))) *
                                                                                                                                                  (float)(v17 *
                                                                                                                                                          v17))) *
                                                        (float)(v17 * v17))) *
                                     (float)(v17 * v17))) *
                  (float)(v17 * v17)) +
          0x1.0000000000000p+0f;
      return v18 - (float)(PSEUDO_UNFUSED(v17 * v19));
    }
    v20 = (float)-v14 / v16;
    return (float)(PSEUDO_UNFUSED(
               v20 *
               (float)((float)((float)-(float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                         (_QWORD)
                                                             GameData_212c2f0 +
                                                         12) -
                                               (float)((
                                                           float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((
                                                                                                                                                                                                                                                                                                               char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                                                               GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v20 *
                                                                                                                                                                                                                                                                                                                                                                                                v20))) *
                                                                                                                                                                                                                                                                                                       (float)(v20 *
                                                                                                                                                                                                                                                                                                               v20))) *
                                                                                                                                                                                                                                                                                    (float)(v20 *
                                                                                                                                                                                                                                                                                            v20))) *
                                                                                                                                                                                                                                                            (float)(v20 *
                                                                                                                                                                                                                                                                    v20))) *
                                                                                                                                                                         (float)(v20 *
                                                                                                                                                                                 v20))) *
                                                                          (float)(v20 *
                                                                                  v20))) *
                                                       (float)(v20 * v20))) *
                               (float)(v20 * v20)) +
                       0x1.0000000000000p+0f))) +
           0x1.921fb60000000p+0f;
  }
  return result;
}

__int64 game_10d4da0(__int64 a1, __int64* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  void (*v13)(_QWORD*);
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  float v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  char v22;
  __int16 v23;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235e18,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2235e18) != 0) {
    GameData_22357e0 = 0;
    GameData_22357e8 = (__int64)CombatSequenceImpl_10d5500;
    GameData_2235798 = 32;
    GameData_22357c0 = 0;
    GameData_22357c8 = 0;
    GameData_22357d0 = 0;
    GameData_22357a0 = 0;
    GameData_22357a8 = 0;
    GameData_22357b0 = 0;
    GameData_22357b8 = 0;
    GameData_22357d8 = 13;
    GameData_22357f0 = 0;
    GameData_22357f8 = 0;
    GameData_2235800 = 0;
    GameData_2235808 = 0;
    GameData_2235810 = 0;
    GameData_2235818 = 8;
    GameData_2235838 = 0;
    GameData_2235840 = 0;
    GameData_2235848 = 0;
    GameData_2235850 = 0;
    GameData_2235860 = 0;
    GameData_2235868 = (__int64)CombatSequenceImpl_10d5530;
    GameData_2235870 = 0;
    GameData_2235878 = 0;
    GameData_2235880 = 0;
    GameData_2235888 = 0;
    GameData_2235890 = 0;
    GameData_2235898 = 13;
    GameData_22358a0 = 0;
    GameData_22358a8 = (__int64)GameRoutine_10d5560;
    GameData_22358b0 = 0;
    GameData_22358b8 = 0;
    GameData_22358c0 = 0;
    GameData_22358c8 = 0;
    GameData_22358d0 = 0;
    GameData_22358e0 = 0;
    GameData_22358e8 = (__int64)CombatSequenceImpl_10d5530;
    GameData_22358f0 = 0;
    GameData_22358f8 = 0;
    GameData_2235900 = 0;
    GameData_2235908 = 0;
    GameData_2235910 = 0;
    GameData_2235918 = 8;
    GameData_2235820 = 0;
    GameData_2235828 = (__int64)GameData_212c640[0];
    GameData_2235858 = 15;
    GameData_22358d8 = 15;
    GameData_2235938 = 0;
    GameData_2235940 = 0;
    GameData_2235948 = 0;
    GameData_2235950 = 0;
    GameData_2235958 = 13;
    GameData_2235970 = 0;
    GameData_2235978 = 0;
    GameData_2235980 = 0;
    GameData_2235988 = 0;
    GameData_2235990 = 0;
    GameData_2235998 = 13;
    GameData_22359a0 = 0;
    GameData_22359b0 = 0;
    GameData_22359b8 = 0;
    GameData_22359c0 = 0;
    GameData_22359c8 = 0;
    GameData_22359d0 = 0;
    GameData_2235a00 = 0;
    GameData_2235a08 = 0;
    GameData_2235a10 = 0;
    GameData_22359f8 = 0;
    GameData_22359f0 = 0;
    GameData_22359e8 = 0;
    GameData_22359e0 = 0;
    GameData_2235a18 = 13;
    GameData_2235a20 = 0;
    GameData_2235a30 = 0;
    GameData_2235a38 = 0;
    GameData_2235a40 = 0;
    GameData_2235a48 = 0;
    GameData_2235a50 = 0;
    GameData_2235a58 = 13;
    GameData_2235a60 = 0;
    GameData_2235a70 = 0;
    GameData_2235a78 = 0;
    GameData_2235a80 = 0;
    GameData_2235a88 = 0;
    GameData_2235a90 = 0;
    GameData_2235a98 = 14;
    GameData_2235aa0 = 0;
    GameData_2235ab0 = 0;
    GameData_2235ab8 = 0;
    GameData_2235ac0 = 0;
    GameData_2235ac8 = 0;
    GameData_2235ad0 = 0;
    GameData_2235ad8 = 13;
    GameData_2235ae0 = 0;
    GameData_2235af0 = 0;
    GameData_2235af8 = 0;
    GameData_2235b00 = 0;
    GameData_2235b08 = 0;
    GameData_2235b10 = 0;
    GameData_2235b18 = 13;
    GameData_2235b20 = 0;
    GameData_2235b30 = 0;
    GameData_2235b38 = 0;
    GameData_2235b40 = 0;
    GameData_2235b48 = 0;
    GameData_2235b50 = 0;
    GameData_2235b58 = 13;
    GameData_2235b60 = 0;
    GameData_2235b70 = 0;
    GameData_2235b78 = 0;
    GameData_2235b80 = 0;
    GameData_2235b88 = 0;
    GameData_2235b90 = 0;
    GameData_2235920 = 0;
    GameData_2235928 = (__int64)GameData_212c648;
    GameData_2235960 = 0;
    GameData_2235968 = (__int64)CombatSequenceImpl_10d5570;
    GameData_22359a8 = (__int64)GameRoutine_10d55f0;
    GameData_22359d8 = 3;
    GameData_2235a28 = (__int64)CombatSequenceImpl_10d5610;
    GameData_2235a68 = (__int64)CombatSequenceImpl_10d5690;
    GameData_2235aa8 = (__int64)CombatSequenceImpl_10d5820;
    GameData_2235ae8 = (__int64)CombatSequenceImpl_10d58c0;
    GameData_2235b28 = (__int64)game_combat_CombatSequenceImpl_DieTalkOrNothing;
    GameData_2235b68 = (__int64)CombatSequenceImpl_10d59f0;
    v27 = (unsigned int)game_HashString32("notEvaporation");
    GameData_2235bc0 = (__int64)"notEvaporation";
    GameData_2235ba0 = 0;
    GameData_2235ba8 = 0;
    GameData_2235bb0 = 0;
    GameData_2235bb8 = v27;
    GameData_2235be8 = (__int64)CombatSequenceImpl_10d5ea0;
    GameData_2235b98 = 2;
    GameData_2235bc8 = 0;
    GameData_2235bd0 = 0;
    GameData_2235bd8 = 13;
    GameData_2235be0 = 0;
    GameData_2235bf0 = 0;
    GameData_2235bf8 = 0;
    GameData_2235c00 = 0;
    GameData_2235c08 = 0;
    GameData_2235c10 = 0;
    GameData_2235c28 = (__int64)CombatSequenceImpl_10d6170;
    GameData_2235c18 = 13;
    GameData_2235c20 = 0;
    GameData_2235c30 = 0;
    GameData_2235c38 = 0;
    GameData_2235c40 = 0;
    GameData_2235c48 = 0;
    GameData_2235c50 = 0;
    GameData_2235c58 = 14;
    GameData_2235c60 = 0;
    GameData_2235c68 = (__int64)CombatSequenceImpl_10d6360;
    GameData_2235c70 = 0;
    GameData_2235c78 = 0;
    GameData_2235c80 = 0;
    GameData_2235c88 = 0;
    GameData_2235c90 = 0;
    GameData_2235cb8 = (unsigned int)game_HashString32("end");
    GameData_2235c98 = 2;
    GameData_2235ca0 = 0;
    GameData_2235ca8 = 0;
    GameData_2235cb0 = 0;
    GameData_2235cc0 = (__int64)"end";
    GameData_2235cc8 = 0;
    GameData_2235cd0 = 0;
    GameData_2235ce8 = (__int64)GameRoutine_10d6490;
    GameData_2235cd8 = 13;
    GameData_2235ce0 = 0;
    GameData_2235cf0 = 0;
    GameData_2235cf8 = 0;
    GameData_2235d00 = 0;
    GameData_2235d08 = 0;
    GameData_2235d10 = 0;
    GameData_2235d18 = 13;
    GameData_2235d20 = 0;
    GameData_2235d28 = (__int64)CombatSequenceImpl_10d64b0;
    GameData_2235d30 = 0;
    GameData_2235d38 = 0;
    GameData_2235d40 = 0;
    GameData_2235d48 = 0;
    GameData_2235d50 = 0;
    GameData_2235d58 = 14;
    GameData_2235d60 = 0;
    GameData_2235d70 = 0;
    GameData_2235d78 = 0;
    GameData_2235d68 = (__int64)CombatSequenceImpl_10d6630;
    GameData_2235d80 = 0;
    GameData_2235d88 = 0;
    GameData_2235d90 = 0;
    GameData_2235d98 = 32;
    GameData_2235dc0 = 0;
    GameData_2235dc8 = 0;
    GameData_2235dd0 = 0;
    GameData_2235dd8 = 0;
    GameData_2235e00 = 0;
    GameData_2235e08 = 0;
    GameData_2235e10 = 0;
    GameData_2235db8 = 0;
    GameData_2235db0 = 0;
    GameData_2235da8 = 0;
    GameData_2235da0 = 0;
    GameData_2235de0 = 0;
    GameData_2235de8 = 0;
    GameData_2235df0 = 0;
    GameData_2235df8 = 0;
    __cxa_guard_release((__int64)&GameData_2235e18);
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      200, 16, 0);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 32) = 0;
  v9 = (_QWORD*)(v7 + 32);
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)v7 = v8 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register(v7);
  v10 = *v6;
  *(_QWORD*)(v7 + 168) = a3;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  *(_DWORD*)(v7 + 192) = 0;
  GameData_2235e20 = v7;
  *(_QWORD*)v7 = game_combat_CombatSequenceImpl_vtable;
  *(_QWORD*)(v7 + 152) = GameData_200ba78;
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(v10, 264, 16, 0);
  GameRoutine_106b7b0(v11);
  v12 = GameData_212d448[0];
  v13 = *(void (**)(_QWORD*))(*v11 + 16LL);
  *GameData_212d448[0] = (__int64)v11;
  v13(v11);
  v14 = *v12;
  *(_QWORD*)(v7 + 160) = *v12;
  game_combat_CombatUniverse_Setup(v14, a2);
  GameRoutine_8232c0(
      *(__int64**)(*(_QWORD*)(*(_QWORD*)(v7 + 160) + 128LL) + 72LL));
  if (*v12 != 0 && (v15 = *(_QWORD*)(*v12 + 8)) != 0 &&
      (*(_BYTE*)(v15 + 113) & 8) != 0) {
    GameRoutine_867df0();
  }
  else {
    GameHr_8679c0();
    v16 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v17 & 0x10) == 0) {
        v18 = *(float*)(game_ProcGameSkipView_instance_ + 224);
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
            v17 & 0xFFFFFFE2 | 1;
        if (v18 > 0x0.0p+0f) {
          *(_DWORD*)(v16 + 224) = 0;
        }
      }
    }
  }
  v28_.v28[0] = GameData_200bae8;
  v28_.v28[1] = v7;
  v28_.v29 = v28_.v28;
  GameRoutine_109d160((_QWORD*)(v7 + 176), (__int64)v28_.v28);
  if (v28_.v29 == v28_.v28) {
    v19 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_15;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*v28_.v29 + v19))((__int64)v28_.v29);
LABEL_15:
  if (a1 != 0) {
    v20 = *(_QWORD*)(a1 + 40);
    if (v20 != 0) {
      *(_QWORD*)(v20 + 48) = v7;
      *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v7;
    *(_QWORD*)(v7 + 24) = "CombatSequenceImpl";
    *(_QWORD*)(v7 + 32) = a1;
    *(_DWORD*)(v7 + 140) =
        (unsigned int)game_HashString32("CombatSequenceImpl");
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 24;
    *(_QWORD*)(v7 + 80) = 1;
    *(_QWORD*)(v7 + 8) = &GameData_2235798;
    *(_QWORD*)(v7 + 16) = &GameData_2235798;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
        (*(_WORD*)(v7 + 136) & 0x100) == 0) {
      *(_WORD*)(v7 + 136) |= 0x100u;
    }
    v21 = (_BYTE*)*v9;
    v22 = *(_BYTE*)(*v9 + 138LL);
    if (v22 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v21 + 64LL))(*v9);
      v22 = v21[138];
    }
    v21[138] = v22 + 1;
    v23 = *(_WORD*)(v7 + 136) | 2;
    goto LABEL_24;
  }
  v25 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c628);
  if (v25 != 0) {
    v26 = *(_QWORD*)(v25 + 40);
    if (v26 != 0) {
      *(_QWORD*)(v26 + 48) = v7;
      *(_QWORD*)(v7 + 56) = *(_QWORD*)(v25 + 40);
    }
    *(_QWORD*)(v25 + 40) = v7;
    *(_QWORD*)(v7 + 24) = "CombatSequenceImpl";
    *(_QWORD*)(v7 + 32) = v25;
    *(_DWORD*)(v7 + 140) =
        (unsigned int)game_HashString32("CombatSequenceImpl");
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 24;
    *(_QWORD*)(v7 + 80) = 1;
    *(_QWORD*)(v7 + 8) = &GameData_2235798;
    *(_QWORD*)(v7 + 16) = &GameData_2235798;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
        (*(_WORD*)(v7 + 136) & 0x100) == 0) {
      v23 = *(_WORD*)(v7 + 136) | 0x100;
    LABEL_24:
      *(_WORD*)(v7 + 136) = v23;
    }
  }
  else if ((*(_WORD*)(v7 + 136) & 1) == 0) {
    ProcInst_657a50(v7, 1);
  }
  return v7;
}

void game_11ce900(__int64 a1)
{
  bool v2;
  float v3;
  __int64 v4;
  float v5;
  __int64* v6;
  float v7;
  __int64 v8;
  float v9;
  __int64 v10;
  float v11;
  float v12;
  __int64* v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  int v19;
  unsigned __int8* v20;
  unsigned int v21;
  bool v22;
  int v23;
  __int16 v25;
  __int64 v26;
  int v27;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
  if (game_ProcGameSkipView_instance_ != 0 &&
      (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 1) == 0 &&
      (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3
           ? (v2 = (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) == 0)
           : (v2 = false),
       v2)) {
    v8 = *(_QWORD*)(a1 + 8);
    if (v8 != 0) {
      while (1) {
        if (*(_BYTE*)v8 == 2) {
          if (*(_DWORD*)(v8 + 32) == 2) {
            *(_QWORD*)(a1 + 16) = v8;
            v25 = *(_WORD*)(a1 + 136) & 0xFF7F;
            goto LABEL_52;
          }
        }
        else if (*(_BYTE*)v8 == 0) {
          return;
        }
        v8 += 64;
      }
    }
  }
  else {
    v3 = *(float*)(a1 + 744);
    if (!(v3 < 0x0.0p+0f)) {
      if (*(_BYTE*)(a1 + 691) == 1) {
        v4 = *(_QWORD*)(a1 + 680);
        if (v4 != 0) {
          game_cutscene_181acc0(v4),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v5 =
                  COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
          v3 = v5 * 0x1.f400000000000p+9f;
        }
        else {
          v3 = 0x0.0p+0f;
        }
      }
      else {
        v6 = GameRoutine_18d0ec0((_QWORD*)(*GameData_212c598[0] + 144),
                                 (unsigned __int8*)(a1 + 720)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v6 != nullptr) {
          v7 = (float)*(__int64*)(v6[5] + 3696);
        }
        else {
          v7 = 0x0.0p+0f;
        }
        v3 = v7 / 0x1.f400000000000p+9f;
      }
    }
    v9 = *(float*)(a1 + 748);
    if (*(_BYTE*)(a1 + 691) == 1) {
      v10 = *(_QWORD*)(a1 + 680);
      if (v10 != 0) {
        GameRoutine_181ab60(v10),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
        v12 = v11 * 0x1.f400000000000p+9f;
      }
      else {
        v12 = 0x0.0p+0f;
      }
    }
    else {
      v13 = GameRoutine_18d0ec0((_QWORD*)(*GameData_212c598[0] + 144),
                                (unsigned __int8*)(a1 + 720)),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v13 != nullptr) {
        v14 = (float)*(__int64*)(v13[5] + 4880);
      }
      else {
        v14 = 0x0.0p+0f;
      }
      v12 = v14 / 0x1.f400000000000p+9f;
    }
    Seq_11cffe0(a1 + 152, v3, v9, v12),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
    game_gameui_19ae1e0(a1 + 384),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
    *(float*)(a1 + 748) = v3;
    v15 = 0x1.e000000000000p+5f / (float)*(int*)(game_g_frame_clock + 476);
    if (!(v15 > 0x0.0p+0f)) {
      v16 = 0x1.119ce00000000p-6f;
    }
    else {
      v16 = v15 * 0x1.119ce00000000p-6f;
    }
    v17 = *(float*)(a1 + 744) + (float)(v16 * 0x1.f400000000000p+9f);
    *(float*)(a1 + 744) = v17;
    if (v17 >= 0x0.0p+0f) {
      v20 = *(unsigned __int8**)(a1 + 16);
      if (v20 != nullptr) {
        v21 = *v20;
        v22 = v21 > 0x10;
        v23 = (1 << (v21 & 0x1F)) & 0x1CE00;
        if (!v22 && v23 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
      v25 = *(_WORD*)(a1 + 136) | 8;
    LABEL_52:
      *(_WORD*)(a1 + 136) = v25;
    }
    else if (GameData_2240050 != 0 &&
             (int)((*(_QWORD*)(GameData_2240050 + 72) -
                    *(_QWORD*)(GameData_2240050 + 64)) >>
                   3) >= 1) {
      v18 = game_g_game_setting_ptr;
      v19 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
      if ((*(_BYTE*)(a1 + 637) & 1) != 0) {
        if ((v19 & 0x1002) != 0 &&
            (LayoutAccessor_1563280((__int64*)(a1 + 168), (__int64)"FastOut",
                                    0) &
             1) == 0 &&
            (LayoutAccessor_1563280((__int64*)(a1 + 168), (__int64)"FastIn",
                                    0) &
             1) == 0) {
          *(_BYTE*)(a1 + 376) = 0;
          GameHr_1562680(a1 + 168, "FastIn", 0x1.0000000000000p+0f),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v5 =
                  COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
          if (*(_BYTE*)(a1 + 637) == 1) {
            GameHr_1562680(a1 + 400, "FastOut", 0x1.0000000000000p+0f),
                v11 = COERCE_AS(__typeof__(v11),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v5 = COERCE_AS(__typeof__(v5),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            if (GameData_2259540 != 0) {
              ProcGameUIFade_15e1b80(GameData_2259540, 1u, 0, 1u, 0),
                  v11 = COERCE_AS(__typeof__(v11),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v5 = COERCE_AS(__typeof__(v5),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
            }
            *(_BYTE*)(a1 + 637) = 0;
          }
        }
      }
      else {
        if ((v19 & 4) != 0) {
          GameRoutine_11d0d00(a1 + 152, 0),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v5 =
                  COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v26 = *(_QWORD*)(a1 + 656);
        if (v26 != 0 && *(_WORD*)(v26 + 42) == 1 &&
            (*(_BYTE*)(*(_QWORD*)v18 + 953LL) & 0x10) != 0 &&
            (GameRoutine_11d0e50(a1 + 152) & 1) != 0) {
          *(_BYTE*)(a1 + 376) = 1;
          GameHr_1562680(a1 + 168, "FastOut", 0x1.0000000000000p+0f),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v5 =
                  COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
          v27 = GameRoutine_11d0dc0(a1 + 152),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
          GameHr_19ae900(a1 + 384, v27),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v5 =
                  COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        if ((*(_DWORD*)(*(_QWORD*)v18 + 952LL) & 0x7BCCB) != 0) {
          Seq_11d0af0(a1 + 152),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v5 =
                  COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
    }
  }
}

__int64 game_11fa1c0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 (**v9)();
  __int64 v10;
  char v11;
  __int64 v12;
  int v13;
  __int64 result;
  __int64 v15;
  char v16;
  char v17;
  int v18;
  _BYTE* v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  int v28;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  __int64 (**v36)();
  int v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  char* v43;
  __int64 (**v44)();
  int v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  char* v53;
  __int64 (**v54)();
  int v55;
  int v56;
  int v57;
  unsigned __int8 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v63;
  __int64 v64;
  char* v65;
  char* v66;
  __int64 (**v67)();
  int v68;
  int v69;
  int v70;
  __int64 v71;
  char* v72;
  char* v73;
  __int64 (**v74)();
  int v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  char* v83;
  __int64 (**v84)();
  int v85;
  int v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  char* v92;
  char* v93;
  __int64 (**v94)();
  int v95;
  int v96;
  int v97;
  unsigned __int8 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  __int64 v103;
  __int64 v104;
  char* v105;
  char* v106;
  __int64 (**v107)();
  int v108;
  int v109;
  int v110;
  __int64 v111;
  struct {
    __int64 (*v112[4])();
    __int64 (**v113)();
  } v112_;
  _BYTE v114[4];
  unsigned int v115;
  int v116;

  v4 = *(_QWORD*)(a1 + 8);
  if (!game_Unit_Unknown6c90c0(v4)) {
    return 0;
  }
  v9 = v112_.v112;
  v10 = 876;
  v112_.v113 = v112_.v112;
  v111 = v4;
  LOBYTE(v116) = 0;
  v112_.v112[0] = (__int64 (*)())(GameData_2130910[0] + 2);
  v112_.v112[1] = game_11f3740_ptr[0];
  while (1) {
    v11 = (*((__int64 (**)(__int64 (**)(void), __int64*, __int64, int*))*v9 +
             6))(v9, &v111, v4 + v10, &v116);
    v9 = v112_.v113;
    if ((v11 & 1) != 0 || v10 == 1060) {
      break;
    }
    v10 += 8;
    v111 = v4;
    LOBYTE(v116) = 0;
    if (v112_.v113 == nullptr) {
    LABEL_6:
      GameRoutine_60a310();
    }
  }
  if (v112_.v113 == v112_.v112) {
    v12 = 32;
  }
  else {
    if (v112_.v113 == nullptr) {
      goto LABEL_12;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))((char*)*v112_.v113 + v12))((__int64)v112_.v113);
LABEL_12:
  if ((v11 & 1) == 0) {
    return 0;
  }
  v13 = *(unsigned __int16*)(a3 + 2);
  if (v13 == 65534) {
    v13 = -1;
  }
  else if (v13 == 0xFFFF) {
    v13 = 100;
  }
  else {
    result = 0;
    if ((v13 & 0x8000) != 0 || *(_BYTE*)a3 != 0) {
      return result;
    }
  }
  v15 = *(_QWORD*)(a1 + 8);
  v16 = *(_BYTE*)(v15 + 584);
  v17 = *(_BYTE*)(v15 + 585);
  if (a2 != 11) {
    v18 = *(__int16*)(a4 + 2);
    if (v18 != -1) {
      result = 0;
      if (v18 < 0) {
        return result;
      }
      if (*(_BYTE*)a4 != 1) {
        return result;
      }
      v17 = HIBYTE(*(_WORD*)(a4 + 2));
      v19 = (_BYTE*)*GameData_212ce98[0];
      if (*GameData_212ce98[0] != 0) {
        result = 0;
        if ((unsigned __int8)v19[26] <=
                (unsigned int)(unsigned __int8)(v18 - v19[24]) ||
            (unsigned __int8)v19[27] <=
                (unsigned int)(unsigned __int8)(BYTE1(v18) - v19[25])) {
          return result;
        }
      }
      v16 = *(_WORD*)(a4 + 2);
    }
  }
  if ((v13 & 0x80000000) == 0) {
    v20 = *(_QWORD*)(a1 + 8);
    LOBYTE(v112_.v112[0]) = 10;
    v21 = game_Unit_GetParam(v20);
    v15 = *(_QWORD*)(a1 + 8);
    v22 = v21 * v13 / 100;
    if (a2 == 11) {
      goto LABEL_29;
    }
  LABEL_33:
    v24 = 0;
    goto LABEL_34;
  }
  v22 = 100;
  if (a2 != 11) {
    goto LABEL_33;
  }
LABEL_29:
  v23 = *(__int16*)(a4 + 2);
  result = 0;
  if (v23 < 0 || *(_BYTE*)a4 != 2) {
    return result;
  }
  v24 = *(_QWORD*)(*(_QWORD*)(*GameData_212c890[0] + 64) + 8 * v23);
LABEL_34:
  v115 = 16809984;
  AIDeploy_1275160(*(_QWORD**)GameData_21306a0[0], v15, v16, v17, v22, &v115);
  v25 = *(_QWORD*)(v15 + 440);
  v26 = (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v25 != 0) {
    v27 = (__int64)&v26[3 * *(unsigned __int8*)(v25 + 16)];
  }
  else {
    v27 = *(_QWORD*)(GameData_21ca310 + 56) + 556216LL;
  }
  v28 = *(unsigned __int8*)(v27 + 16);
  if (v28 == 3 || v28 == 0) {
    if (v24 != 0) {
      goto LABEL_43;
    }
    goto LABEL_137;
  }
  v32 = *v26;
  if (v24 == 0) {
    if (v32 != 0) {
      while (!AIThink_11fd9e0(v15, v32)) {
      LABEL_126:
        v32 = *(_QWORD*)(v32 + 432);
        if (v32 == 0) {
          v25 = *(_QWORD*)(v15 + 440);
          goto LABEL_137;
        }
      }
      v72 = *(char**)(v32 + 600);
      v73 = *(char**)(v32 + 608);
      v74 = v112_.v112;
      v114[0] = 0;
      v112_.v112[0] = (__int64 (*)())GameData_20187e8;
      v112_.v112[1] = (__int64 (*)())v114;
      v112_.v113 = v112_.v112;
      if (v72 == v73) {
        goto LABEL_123;
      }
      v75 = *(char*)(v32 + 584);
      v76 = *(char*)(v32 + 585);
      do {
        v77 = v72[1] + v76;
        LODWORD(v111) = *v72 + v75;
        v116 = v77;
        if (v112_.v113 == nullptr) {
          goto LABEL_6;
        }
        (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 + 6))(
            v112_.v113, &v111, &v116);
        v72 += 4;
      } while (v72 != v73);
      v74 = v112_.v113;
      if (v112_.v113 == v112_.v112) {
      LABEL_123:
        v71 = 32;
      }
      else {
        if (v112_.v113 == nullptr) {
        LABEL_125:
          if ((v114[0] & 1) != 0) {
            return 1;
          }
          goto LABEL_126;
        }
        v71 = 40;
      }
      (*(void (**)(__int64))((char*)*v74 + v71))((__int64)v74);
      goto LABEL_125;
    }
  LABEL_137:
    v78 = *(_QWORD*)(GameData_21ca310 + 56);
    if (v25 != 0) {
      v79 = v78 + 24LL * *(unsigned __int8*)(v25 + 16) + 556000;
    }
    else {
      v79 = v78 + 556216;
    }
    if (*(_BYTE*)(v79 + 16) == 1) {
      goto LABEL_156;
    }
    v80 = *(_QWORD*)(v78 + 556024);
    if (v80 == 0) {
      goto LABEL_156;
    }
    while (!AIThink_11fd9e0(v15, v80)) {
    LABEL_146:
      v80 = *(_QWORD*)(v80 + 432);
      if (v80 == 0) {
        v25 = *(_QWORD*)(v15 + 440);
      LABEL_156:
        v88 = *(_QWORD*)(GameData_21ca310 + 56);
        if (v25 != 0) {
          v89 = v88 + 24LL * *(unsigned __int8*)(v25 + 16) + 556000;
        }
        else {
          v89 = v88 + 556216;
        }
        if (*(_BYTE*)(v89 + 16) == 2) {
          goto LABEL_175;
        }
        v90 = *(_QWORD*)(v88 + 556048);
        if (v90 == 0) {
          goto LABEL_175;
        }
        while (2) {
          if (AIThink_11fd9e0(v15, v90)) {
            v92 = *(char**)(v90 + 600);
            v93 = *(char**)(v90 + 608);
            v94 = v112_.v112;
            v114[0] = 0;
            v112_.v112[0] = (__int64 (*)())GameData_20187e8;
            v112_.v112[1] = (__int64 (*)())v114;
            v112_.v113 = v112_.v112;
            if (v92 == v93) {
              goto LABEL_162;
            }
            v95 = *(char*)(v90 + 584);
            v96 = *(char*)(v90 + 585);
            do {
              v97 = v92[1] + v96;
              LODWORD(v111) = *v92 + v95;
              v116 = v97;
              if (v112_.v113 == nullptr) {
                goto LABEL_6;
              }
              (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 +
                 6))(v112_.v113, &v111, &v116);
              v92 += 4;
            } while (v92 != v93);
            v94 = v112_.v113;
            if (v112_.v113 == v112_.v112) {
            LABEL_162:
              v91 = 32;
              goto LABEL_163;
            }
            if (v112_.v113 != nullptr) {
              v91 = 40;
            LABEL_163:
              (*(void (**)(__int64))((char*)*v94 + v91))((__int64)v94);
            }
            if ((v114[0] & 1) != 0) {
              return 1;
            }
          }
          v90 = *(_QWORD*)(v90 + 432);
          if (v90 == 0) {
            v25 = *(_QWORD*)(v15 + 440);
          LABEL_175:
            if (v25 != 0) {
              v98 = *(_BYTE*)(v25 + 16);
              v99 = *(_QWORD*)(GameData_21ca310 + 56);
              v100 = v99 + 24LL * v98 + 556000;
            }
            else {
              v99 = *(_QWORD*)(GameData_21ca310 + 56);
              v100 = v99 + 556216;
            }
            v101 = *(unsigned __int8*)(v100 + 16);
            if (v101 == 0 || v101 == 3) {
              return 0;
            }
            v103 = *(_QWORD*)(v99 + 556072);
            if (v103 == 0) {
              return 0;
            }
            while (2) {
              if (AIThink_11fd9e0(v15, v103)) {
                v105 = *(char**)(v103 + 600);
                v106 = *(char**)(v103 + 608);
                v107 = v112_.v112;
                v114[0] = 0;
                v112_.v112[0] = (__int64 (*)())GameData_20187e8;
                v112_.v112[1] = (__int64 (*)())v114;
                v112_.v113 = v112_.v112;
                if (v105 == v106) {
                  goto LABEL_187;
                }
                v108 = *(char*)(v103 + 584);
                v109 = *(char*)(v103 + 585);
                do {
                  v110 = v105[1] + v109;
                  LODWORD(v111) = *v105 + v108;
                  v116 = v110;
                  if (v112_.v113 == nullptr) {
                    goto LABEL_6;
                  }
                  (*((void (**)(__int64 (**)(void), __int64*,
                                int*))*v112_.v113 +
                     6))(v112_.v113, &v111, &v116);
                  v105 += 4;
                } while (v105 != v106);
                v107 = v112_.v113;
                if (v112_.v113 == v112_.v112) {
                LABEL_187:
                  v104 = 32;
                  goto LABEL_188;
                }
                if (v112_.v113 != nullptr) {
                  v104 = 40;
                LABEL_188:
                  (*(void (**)(__int64))((char*)*v107 + v104))((__int64)v107);
                }
                if ((v114[0] & 1) != 0) {
                  return 1;
                }
              }
              v103 = *(_QWORD*)(v103 + 432);
              if (v103 == 0) {
                return 0;
              }
              continue;
            }
          }
          continue;
        }
      }
    }
    v82 = *(char**)(v80 + 600);
    v83 = *(char**)(v80 + 608);
    v84 = v112_.v112;
    v114[0] = 0;
    v112_.v112[0] = (__int64 (*)())GameData_20187e8;
    v112_.v112[1] = (__int64 (*)())v114;
    v112_.v113 = v112_.v112;
    if (v82 == v83) {
      goto LABEL_143;
    }
    v85 = *(char*)(v80 + 584);
    v86 = *(char*)(v80 + 585);
    do {
      v87 = v82[1] + v86;
      LODWORD(v111) = *v82 + v85;
      v116 = v87;
      if (v112_.v113 == nullptr) {
        goto LABEL_6;
      }
      (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 + 6))(
          v112_.v113, &v111, &v116);
      v82 += 4;
    } while (v82 != v83);
    v84 = v112_.v113;
    if (v112_.v113 == v112_.v112) {
    LABEL_143:
      v81 = 32;
    }
    else {
      if (v112_.v113 == nullptr) {
      LABEL_145:
        if ((v114[0] & 1) != 0) {
          return 1;
        }
        goto LABEL_146;
      }
      v81 = 40;
    }
    (*(void (**)(__int64))((char*)*v84 + v81))((__int64)v84);
    goto LABEL_145;
  }
  if (v32 == 0) {
    goto LABEL_43;
  }
  do {
    if (!AIThink_11fd9e0(v15, v32) || *(_QWORD*)(v32 + 392) == v24) {
      goto LABEL_51;
    }
    v34 = *(char**)(v32 + 600);
    v35 = *(char**)(v32 + 608);
    v36 = v112_.v112;
    v114[0] = 0;
    v112_.v112[0] = (__int64 (*)())GameData_20187e8;
    v112_.v112[1] = (__int64 (*)())v114;
    v112_.v113 = v112_.v112;
    if (v34 == v35) {
      goto LABEL_48;
    }
    v37 = *(char*)(v32 + 584);
    v38 = *(char*)(v32 + 585);
    do {
      v39 = v34[1] + v38;
      LODWORD(v111) = *v34 + v37;
      v116 = v39;
      if (v112_.v113 == nullptr) {
        goto LABEL_6;
      }
      (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 + 6))(
          v112_.v113, &v111, &v116);
      v34 += 4;
    } while (v34 != v35);
    v36 = v112_.v113;
    if (v112_.v113 == v112_.v112) {
    LABEL_48:
      v33 = 32;
    LABEL_49:
      (*(void (**)(__int64))((char*)*v36 + v33))((__int64)v36);
      goto LABEL_50;
    }
    if (v112_.v113 != nullptr) {
      v33 = 40;
      goto LABEL_49;
    }
  LABEL_50:
    if ((v114[0] & 1) != 0) {
      return 1;
    }
  LABEL_51:
    v32 = *(_QWORD*)(v32 + 432);
  } while (v32 != 0);
  v25 = *(_QWORD*)(v15 + 440);
LABEL_43:
  v30 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v25 != 0) {
    v31 = v30 + 24LL * *(unsigned __int8*)(v25 + 16) + 556000;
  }
  else {
    v31 = v30 + 556216;
  }
  if (*(_BYTE*)(v31 + 16) != 1) {
    v40 = *(_QWORD*)(v30 + 556024);
    if (v40 != 0) {
      while (2) {
        if (AIThink_11fd9e0(v15, v40) && *(_QWORD*)(v40 + 392) != v24) {
          v42 = *(char**)(v40 + 600);
          v43 = *(char**)(v40 + 608);
          v44 = v112_.v112;
          v114[0] = 0;
          v112_.v112[0] = (__int64 (*)())GameData_20187e8;
          v112_.v112[1] = (__int64 (*)())v114;
          v112_.v113 = v112_.v112;
          if (v42 == v43) {
            goto LABEL_65;
          }
          v45 = *(char*)(v40 + 584);
          v46 = *(char*)(v40 + 585);
          do {
            v47 = v42[1] + v46;
            LODWORD(v111) = *v42 + v45;
            v116 = v47;
            if (v112_.v113 == nullptr) {
              goto LABEL_6;
            }
            (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 + 6))(
                v112_.v113, &v111, &v116);
            v42 += 4;
          } while (v42 != v43);
          v44 = v112_.v113;
          if (v112_.v113 == v112_.v112) {
          LABEL_65:
            v41 = 32;
            goto LABEL_66;
          }
          if (v112_.v113 != nullptr) {
            v41 = 40;
          LABEL_66:
            (*(void (**)(__int64))((char*)*v44 + v41))((__int64)v44);
          }
          if ((v114[0] & 1) != 0) {
            return 1;
          }
        }
        v40 = *(_QWORD*)(v40 + 432);
        if (v40 == 0) {
          v25 = *(_QWORD*)(v15 + 440);
          break;
        }
        continue;
      }
    }
  }
  v48 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v25 != 0) {
    v49 = v48 + 24LL * *(unsigned __int8*)(v25 + 16) + 556000;
  }
  else {
    v49 = v48 + 556216;
  }
  if (*(_BYTE*)(v49 + 16) != 2) {
    v50 = *(_QWORD*)(v48 + 556048);
    if (v50 != 0) {
      while (2) {
        if (AIThink_11fd9e0(v15, v50) && *(_QWORD*)(v50 + 392) != v24) {
          v52 = *(char**)(v50 + 600);
          v53 = *(char**)(v50 + 608);
          v54 = v112_.v112;
          v114[0] = 0;
          v112_.v112[0] = (__int64 (*)())GameData_20187e8;
          v112_.v112[1] = (__int64 (*)())v114;
          v112_.v113 = v112_.v112;
          if (v52 == v53) {
            goto LABEL_85;
          }
          v55 = *(char*)(v50 + 584);
          v56 = *(char*)(v50 + 585);
          do {
            v57 = v52[1] + v56;
            LODWORD(v111) = *v52 + v55;
            v116 = v57;
            if (v112_.v113 == nullptr) {
              goto LABEL_6;
            }
            (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 + 6))(
                v112_.v113, &v111, &v116);
            v52 += 4;
          } while (v52 != v53);
          v54 = v112_.v113;
          if (v112_.v113 == v112_.v112) {
          LABEL_85:
            v51 = 32;
            goto LABEL_86;
          }
          if (v112_.v113 != nullptr) {
            v51 = 40;
          LABEL_86:
            (*(void (**)(__int64))((char*)*v54 + v51))((__int64)v54);
          }
          if ((v114[0] & 1) != 0) {
            return 1;
          }
        }
        v50 = *(_QWORD*)(v50 + 432);
        if (v50 == 0) {
          v25 = *(_QWORD*)(v15 + 440);
          break;
        }
        continue;
      }
    }
  }
  if (v25 != 0) {
    v58 = *(_BYTE*)(v25 + 16);
    v59 = *(_QWORD*)(GameData_21ca310 + 56);
    v60 = v59 + 24LL * v58 + 556000;
  }
  else {
    v59 = *(_QWORD*)(GameData_21ca310 + 56);
    v60 = v59 + 556216;
  }
  v61 = *(unsigned __int8*)(v60 + 16);
  if (v61 != 0 && v61 != 3) {
    v63 = *(_QWORD*)(v59 + 556072);
    if (v63 != 0) {
      while (2) {
        if (AIThink_11fd9e0(v15, v63) && *(_QWORD*)(v63 + 392) != v24) {
          v65 = *(char**)(v63 + 600);
          v66 = *(char**)(v63 + 608);
          v67 = v112_.v112;
          v114[0] = 0;
          v112_.v112[0] = (__int64 (*)())GameData_20187e8;
          v112_.v112[1] = (__int64 (*)())v114;
          v112_.v113 = v112_.v112;
          if (v65 == v66) {
            goto LABEL_108;
          }
          v68 = *(char*)(v63 + 584);
          v69 = *(char*)(v63 + 585);
          do {
            v70 = v65[1] + v69;
            LODWORD(v111) = *v65 + v68;
            v116 = v70;
            if (v112_.v113 == nullptr) {
              goto LABEL_6;
            }
            (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 + 6))(
                v112_.v113, &v111, &v116);
            v65 += 4;
          } while (v65 != v66);
          v67 = v112_.v113;
          if (v112_.v113 == v112_.v112) {
          LABEL_108:
            v64 = 32;
            goto LABEL_109;
          }
          if (v112_.v113 != nullptr) {
            v64 = 40;
          LABEL_109:
            (*(void (**)(__int64))((char*)*v67 + v64))((__int64)v67);
          }
          if ((v114[0] & 1) != 0) {
            return 1;
          }
        }
        v63 = *(_QWORD*)(v63 + 432);
        if (v63 == 0) {
          return 0;
        }
        continue;
      }
    }
  }
  return 0;
}

__int64 game_1207aa0(__int64 a1, int a2, int a3, unsigned int a4,
                     unsigned int a5, char a6)
{
  __int64 result;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  _QWORD* v15;
  __int64 (**v16)();
  __int64 v17;
  struct {
    __int64 (*v18[4])();
    __int64 (**v19)();
    char gap40_[36];
    char v20;
  } v18_;

  result = AIThink_1207c40(a1, a2, a3, a4, a5);
  if ((result & 1) != 0) {
    return result;
  }
  LODWORD(v18_.v18[0]) = 2;
  if ((a6 & 8) != 0) {
    v12 = *(_QWORD*)(a1 + 8);
    if (game_GameModeData_instance_ != 0) {
      v13 = *(unsigned __int8*)(game_GameModeData_instance_ + 13);
      v18_.v20 = 10;
      v11 = game_Unit_GetParam(v12);
      if (v13 == 1) {
        --v11;
      }
      else if (v13 == 0) {
        v11 -= 2;
      }
    }
    else {
      v18_.v20 = 10;
      v11 = game_Unit_GetParam(v12) - 2;
    }
  }
  else {
    v11 = -1;
  }
  v14 = *(_QWORD*)(a1 + 8);
  v15 = *(_QWORD**)GameData_21306a0[0];
  if (*(_BYTE*)(*GameData_212ce90[0] +
                *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1) {
    AIDeploy_1274c80(v15, v14, v11, (unsigned int*)v18_.v18);
    if ((a6 & 0x20) != 0) {
    LABEL_12:
      v16 = GameData_2019178;
      goto LABEL_15;
    }
  }
  else {
    AIDeploy_1274f90(v15, v14, v11, (unsigned int*)v18_.v18);
    if ((a6 & 0x20) != 0) {
      goto LABEL_12;
    }
  }
  v16 = GameData_2019208;
LABEL_15:
  v18_.v18[0] = (__int64 (*)())v16;
  v18_.v18[1] = (__int64 (*)())a1;
  v18_.v19 = v18_.v18;
  game_AIThink_ToDestroyImpl((_QWORD*)a1, a4, a5, v18_.v18);
  result = (__int64)v18_.v19;
  if (v18_.v19 == v18_.v18) {
    v17 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_20;
    }
    v17 = 40;
  }
  result =
      (*(__int64 (**)(__int64))((char*)*v18_.v19 + v17))((__int64)v18_.v19);
LABEL_20:
  if ((a6 & 2) != 0 && *(_BYTE*)(GameData_21cd108 + 20) == 1) {
    return game_AIThink_ToBreak((__int64 (**)(void))a1, a4, a5);
  }
  return result;
}

__attribute__((swiftcall)) void game_127c600(PSEUDO_X8 x8_, __int64 a1,
                                             unsigned int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  const char** v7;
  int v8;
  int v9;
  const char* v10;
  const char* v11;
  int v12;
  int v13;
  int v14;

  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  LODWORD(v4) = a2;
  if (*(_QWORD*)a1 != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 24LL) + 16LL);
    __asm__ volatile("" ::"r"(v5));
    if (a2 == 0) {
      return;
    }
    if ((a2 & 0x80000000) == 0) {
      goto LABEL_4;
    }
  LABEL_19:
    GameRoutine_6e5a20();
  }
  if (a2 == 0) {
    return;
  }
  v5 = 0;
  if ((a2 & 0x80000000) != 0) {
    goto LABEL_19;
  }
LABEL_4:
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      4LL * a2, 16, 0);
  *a3 = v6;
  a3[1] = v6;
  a3[2] = v6 + 4LL * (unsigned int)v4;
  if ((unsigned int)v4 >= 0x50) {
    v4 = 80;
  }
  else {
    v4 = (unsigned int)v4;
  }
  if (v5 != 0) {
    v7 = (const char**)(v5 + 40);
    v8 = 0;
    do {
      v11 = *v7++;
      v10 = v11;
      v14 = v8;
      if (v11 != nullptr) {
        if (strcmp(v10, GameData_1a94a43) == 0 || v10[1] != 0 ||
            (unsigned int)((v12 = *(unsigned __int8*)v10) - 58) < 0xFFFFFFF6) {
          v9 = 0;
        }
        else {
          v9 = v12 - 48;
        }
        v14 = v9;
      }
      GameRoutine_7d6200(a3, &v14);
      v8 = v14;
      --v4;
    } while (v4 != 0);
  }
  else {
    v13 = 0;
    GameRoutine_6e5a40(a3, v4, &v13);
  }
}

void game_12db540(_QWORD* a1, __int64 a2)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  signed __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  _QWORD* v33;
  signed __int64 v34;
  char* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
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
  char v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 (**v55)();
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  bool v64;
  bool v65;
  __int64** v67;
  __int64 (**v68)();
  __int64 (*v69)();
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v74;
  unsigned __int64 v75;
  _QWORD* v76;
  _QWORD* v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64** v81;
  __int64* v82;
  __int64* v83;
  _QWORD* v84;
  __int64 v85;
  const char* v86;
  const char* v87;
  __int64 v88;
  __int64 v89;
  _QWORD* v90;
  unsigned __int64 v91;
  signed __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  int v106;
  unsigned int v107;
  unsigned int v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
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
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  int v147;
  int v148;
  __int16 v149;
  char v150;
  __int16 v151;
  unsigned __int64 v152;
  char v153;
  __int64 v154;
  __int64 v155;
  unsigned __int64 v156;
  __int64 v157;
  __int64 v158;
  char v159;
  __int64 v160;
  __int16 v161;
  char v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  int v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  unsigned int v201;
  __int16 v202;
  __int64 v203;
  int v204;
  unsigned int v205;
  __int64 v206;
  unsigned int v207;
  __int64 (***v208)();
  _QWORD* v209;
  __int64 v210;
  __int64* v211;
  __int64* v212;
  unsigned int v213;
  __int64 v214;
  unsigned int** v215;
  unsigned int* v216;
  unsigned int* v217;
  unsigned int v218;
  unsigned int v219;
  bool v220;
  bool v221;
  __int64 v223;
  __int64* v224;
  __int64* v225;
  _BYTE* v226;
  _BYTE* v227;
  __int64 v228;
  __int64 v229;
  int v230;
  int v231;
  __int64 v232;
  __int64** v233;
  __int64 v234;
  int v235;
  __int64** v236;
  unsigned __int8* v237;
  __int64 v238;
  int v239;
  unsigned __int8* v240;
  __int64 v241;
  int v242;
  __int64** v243;
  unsigned __int8* v244;
  int v245;
  __int64 v246;
  int v247;
  __int64** v248;
  __int64** v249;
  __int64 v250;
  _BYTE* v251;
  __int64 v252;
  __int64 v253;
  unsigned __int8* v254;
  unsigned __int8* v255;
  __int64 v256;
  unsigned __int8* v257;
  unsigned __int8* v258;
  unsigned __int8* v259;
  int v260;
  __int64 v261;
  unsigned __int8* v262;
  __int64 v263;
  unsigned __int8* v264;
  unsigned __int8* v265;
  unsigned __int8* v266;
  int v267;
  unsigned int v268;
  bool v269;
  bool v270;
  int v271;
  int v273;
  bool v274;
  int v275;
  unsigned int v276;
  bool v277;
  bool v278;
  int v279;
  unsigned int v281;
  __int64 v282;
  __int64 v283;
  int v284;
  __int64 v285;
  __int64 v286;
  int v287;
  _BYTE* v288;
  __int64 v289;
  int v290;
  unsigned int v291;
  __int64 v292;
  __int64 v293;
  __int64** v294;
  __int64 v295;
  __int64* v296;
  __int64 v297;
  unsigned __int64 v298;
  unsigned __int8* v300;
  __int64 v301;
  __int64 v302;
  unsigned int v303;
  __int64 v304;
  _BYTE* v305;
  unsigned __int64 v306;
  _QWORD* v307;
  __int64 v308;
  char* v309;
  __int64 v310;
  unsigned __int64 v311;
  __int64 v312;
  unsigned __int64 v313;
  __int64 v314;
  unsigned __int64 v315;
  unsigned __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  signed __int64 v320;
  __int64 v321;
  __int64 v322;
  unsigned __int64 v323;
  __int64* v324;
  __int64 v325;
  unsigned int v326;
  char v327;
  __int64 v328;
  unsigned __int64* v329;
  unsigned __int8* v330;
  int v331;
  __int64 v332;
  _QWORD* v333;
  struct {
    char gap0_[64];
    __int64 (**v334)();
    __int64** v335;
    char* v336;
    __int64* v337;
    char gap96_[32];
    __int64* v339;
    __int64* v340;
    __int64 v341;
    __int64 v342;
    __int64 v343;
    __int64 v344;
    __int64 v345;
    __int64 v346;
    __int64 v347;
    _QWORD v348[2];
    __int64 v349;
    __int64 v350;
    _QWORD v351[2];
    __int64 v352;
    __int64 v353;
    __int64 v354;
    __int64 v355;
    __int64 v356;
    __int64 v357;
    __int64 v358;
    __int64 v359;
    __int64 v360;
    __int16 v361;
    char gap322_[6];
    __int64 v362;
    __int64 v363;
    char v364;
    char gap345_[7];
    char v365;
    char gap353_[23];
    char v366;
    char gap377_[7];
    char v367;
    char gap385_[23];
    char v368;
    char gap409_[7];
    char v369;
    char gap417_[23];
    char v370;
    char gap441_[7];
    char v371;
    char gap449_[23];
    char v372;
    char gap473_[7];
    char v373;
    char gap481_[23];
    char v374;
    char gap505_[7];
    char v375;
    char gap513_[23];
    char v376;
    char gap537_[7];
    char v377;
    char gap545_[15];
    __int64 v379;
    __int64 v380;
    __int64 v381;
  } f_;
  __int64* v338;
  char v378[4];

  if (game_GameModeData_instance_ == 0 ||
      (v3 = *(_DWORD*)(game_GameModeData_instance_ + 60),
       v378[0] = *(_BYTE*)(game_GameModeData_instance_ + 15), v331 = v3,
       v3 < 1) ||
      (v4 = GameRoutine_12dd100(a2, 0)) == 0) {
  LABEL_8:
    v6 = a1[2];
    *((_DWORD*)a1 + 22) = 0;
    *((_BYTE*)a1 + 92) = 0;
    *(_DWORD*)((char*)a1 + 94) = 0;
    *((_BYTE*)a1 + 98) = 0;
    *((_DWORD*)a1 + 25) = 0;
    *((_BYTE*)a1 + 104) = 0;
    *((_DWORD*)a1 + 54) = 0;
    a1[26] = 0;
    a1[3] = v6;
    *((_WORD*)a1 + 53) = 255;
    a1[6] = a1[5];
    a1[9] = a1[8];
    a1[21] = a1[20];
    a1[24] = a1[23];
    return;
  }
  v5 = v4;
  while (1) {
    if (*(unsigned __int8*)(v5 + 89) != *(unsigned __int8*)(v4 + 89)) {
      goto LABEL_8;
    }
    if (*(_BYTE*)(v5 + 33) == 18) {
      break;
    }
    v5 = *(_QWORD*)(*(_QWORD*)(v5 + 24) + 16LL);
    if (v5 == 0) {
      goto LABEL_8;
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v7 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  }
  else {
    v7 = 0;
  }
  v333 = a1;
  v319 = v4;
  if (v331 != 1) {
    v10 = a1[2];
    *((_DWORD*)a1 + 22) = 0;
    *((_BYTE*)a1 + 92) = 0;
    *(_DWORD*)((char*)a1 + 94) = 0;
    *((_BYTE*)a1 + 98) = 0;
    *((_DWORD*)a1 + 25) = 0;
    *((_BYTE*)a1 + 104) = 0;
    *((_BYTE*)a1 + 107) = 0;
    *((_DWORD*)a1 + 54) = 0;
    a1[26] = 0;
    a1[3] = v10;
    a1[6] = a1[5];
    v9 = a1[8];
    goto LABEL_17;
  }
  v8 = a1[2];
  *((_DWORD*)a1 + 22) = 0;
  *((_BYTE*)a1 + 92) = 0;
  *(_DWORD*)((char*)a1 + 94) = 0;
  *((_BYTE*)a1 + 98) = 0;
  *((_DWORD*)a1 + 25) = 0;
  *((_BYTE*)a1 + 104) = 0;
  a1[3] = v8;
  if (v7 == *((char*)a1 + 106)) {
    v9 = a1[8];
    *((_BYTE*)a1 + 107) = 0;
    a1[26] = 0;
    *((_DWORD*)a1 + 54) = 0;
  LABEL_17:
    a1[9] = v9;
    a1[21] = a1[20];
    a1[24] = a1[23];
    goto LABEL_57;
  }
  a1[26] = 0;
  *((_DWORD*)a1 + 54) = 0;
  f_.v340 = nullptr;
  f_.v341 = 0;
  f_.v339 = nullptr;
  *((_WORD*)a1 + 53) = 255;
  a1[6] = a1[5];
  a1[9] = a1[8];
  a1[21] = a1[20];
  a1[24] = a1[23];
  v11 = (__int64*)GameData_212c7b8[0];
  GameSideStoryData_12b5480(*(_QWORD*)GameData_212c7b8[0], (__int64*)&f_.v339,
                            *(_QWORD*)(v4 + 24) + 96LL,
                            *(_QWORD*)(v5 + 24) + 96LL);
  v12 = *(_QWORD*)(v5 + 24);
LABEL_19:
  v13 = GameRoutine_12dd100(*(_QWORD*)(v12 + 16), 1);
  if (v13 != 0) {
    v14 = v13;
    while (*(unsigned __int8*)(v14 + 89) == *(unsigned __int8*)(v13 + 89)) {
      if (*(_BYTE*)(v14 + 33) == 18) {
        GameSideStoryData_12b5480(*v11, (__int64*)&f_.v339,
                                  *(_QWORD*)(v13 + 24) + 96LL,
                                  *(_QWORD*)(v14 + 24) + 96LL);
        v12 = *(_QWORD*)(v14 + 24);
        goto LABEL_19;
      }
      v14 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 16LL);
      if (v14 == 0) {
        break;
      }
    }
  }
  v327 = v7;
  v16 = f_.v339;
  v15 = f_.v340;
  v17 = (char*)f_.v340 - (char*)f_.v339;
  v18 = a1[5];
  if ((char*)f_.v340 - (char*)f_.v339 > (unsigned __int64)(a1[7] - v18)) {
    if (v17 < 0) {
    LABEL_403:
      GameRoutine_12e0660();
    }
    v19 = a1[6] - v18;
    v20 =
        fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       (char*)f_.v340 - (char*)f_.v339, 16, 0);
    GameRoutine_1a0b950(v20, v18, v19);
    a1[5] = v20;
    a1[6] = v20 + v19;
    a1[7] = v20 + v17;
    if (v18 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v18);
      v16 = f_.v339;
      v15 = f_.v340;
    }
  }
  if (v16 != v15) {
    v22 = a1;
    v23 = (__int64*)a1[6];
    do {
      v24 = *v16;
      v25 = v22[7];
      if ((unsigned __int64)v23 < v25) {
        *v23++ = v24;
      }
      else {
        v26 = v22[5];
        v27 = (char*)v23 - v26;
        v28 = ((__int64)v23 - v26) >> 3;
        v29 = v28 + 1;
        if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
          goto LABEL_403;
        }
        v30 = v25 - v26;
        if (v30 >> 2 > v29) {
          v29 = v30 >> 2;
        }
        if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
          v31 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v31 = v29;
        }
        if (v31 != 0) {
          if (v31 >> 61 != 0) {
            goto LABEL_401;
          }
          v32 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v31, 16, 0);
          v33 = v333;
          v26 = v333[5];
          v34 = v333[6] - v26;
          v28 = v34 >> 3;
        }
        else {
          v33 = v333;
          v32 = 0;
          v34 = (signed __int64)v23 - v26;
        }
        v35 = &v27[v32];
        v36 = v32 + 8 * v31;
        v37 = (__int64)&v27[v32 + -8 * v28];
        *(_QWORD*)v35 = v24;
        v23 = (__int64*)(v35 + 8);
        GameRoutine_1a0b950(v37, v26, v34);
        v33[5] = v37;
        v33[6] = v23;
        v33[7] = v36;
        if (v26 != 0) {
          v38 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v26);
        }
      }
      v22 = v333;
      ++v16;
      v333[6] = v23;
    } while (v16 != v15);
    v16 = f_.v339;
    a1 = v333;
  }
  if (v16 != nullptr) {
    f_.v340 = v16;
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v39,
                                  (__int64)v16);
  }
  LOBYTE(v7) = v327;
LABEL_57:
  v40 = a1 + 28;
  v41 = a1[28];
  v42 = a1[29];
  *((_BYTE*)a1 + 106) = v7;
  if (v41 != v42) {
    v43 = v42;
    do {
      v47 = *(_QWORD*)(v43 - 24);
      v43 -= 24;
      v45 = v47;
      if (v47 != 0) {
        v48 = *(_QWORD*)(v42 - 16);
        if (v45 == v48) {
          goto LABEL_60;
        }
        do {
          v49 = *(_QWORD*)(v48 - 24);
          if (v49 != 0) {
            *(_QWORD*)(v48 - 16) = v49;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v50 = 128;
            }
            else {
              v50 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, v49);
          }
          v48 -= 32;
        } while (v48 != v45);
        v44 = *(_QWORD*)(v42 - 24);
        *(_QWORD*)(v42 - 16) = v45;
        v45 = v44;
        if (v44 != 0) {
        LABEL_60:
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v46 = 128;
          }
          else {
            v46 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v45);
        }
      }
      v42 = v43;
    } while (v41 != v43);
  }
  a1[29] = v41;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_163;
  }
  v51 = *(_BYTE*)(game_GameModeData_instance_ + 15);
  if (v51 == 0) {
    goto LABEL_163;
  }
  v52 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  v53 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  f_.v341 = 0;
  f_.v342 = 0;
  f_.v343 = 0;
  f_.v344 = 0;
  f_.v345 = 0;
  f_.v346 = 0;
  f_.v347 = 0;
  f_.v348[0] = 0;
  f_.v348[1] = 0;
  f_.v349 = 0;
  f_.v350 = 0;
  f_.v351[0] = 0;
  f_.v351[1] = 0;
  f_.v352 = 0;
  f_.v353 = 0;
  f_.v354 = 0;
  f_.v355 = 0;
  f_.v356 = 0;
  f_.v357 = 0;
  f_.v358 = 0;
  f_.v359 = 0;
  f_.v360 = 0;
  f_.v339 = GameData_212eb88 + 2;
  f_.v340 = nullptr;
  v54 = fw_memory_g_heap_manager_ptr;
  LOBYTE(f_.v361) = 0;
  v55 = (__int64 (**)(void))fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  *(_BYTE*)v55 = v51;
  *((_DWORD*)v55 + 1) = v52;
  *((_DWORD*)v55 + 2) = v53;
  *((_DWORD*)v55 + 3) = 0;
  f_.v334 = v55;
  f_.v335 = (__int64**)(v55 + 2);
  f_.v336 = (char*)(v55 + 2);
  game_HubDisposFileReader_CalcGroupNames((unsigned __int64)&f_.v339, "Hub_000",
                                          (__int64*)&f_.v334, 0);
  v56 = 128;
  if (*(_QWORD*)(*(_QWORD*)v54 + 200LL) == 0) {
    v56 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v54 + v56, (__int64)v55);
  HubDisposFileReader_c98880((void*)((__int64*)&f_.v334), &f_.v339);
  v58 = f_.v345;
  v57 = f_.v346;
  v328 = f_.v346;
LABEL_80:
  if (v58 != v57) {
    if (*(_BYTE*)v58 != 1) {
      goto LABEL_79;
    }
    if ((*(_BYTE*)(v58 + 8) & 1) != 0 && *(_QWORD*)(v58 + 16) == 25) {
      v59 = *(__int64**)(v58 + 24);
      v60 = *v59;
      v61 = v59[1];
      v62 = v59[2];
      v63 = *((unsigned __int8*)v59 + 24);
      v64 = v60 == 0x83E3A383E3AD82E3LL && v61 == 0x83E9315F31415FA9LL;
      v65 = v64 && v62 == 0xBCE496A4E5565FA8LL;
      if (v65 && v63 == 157) {
        goto LABEL_79;
      }
    }
    v68 = f_.v334;
    v67 = f_.v335;
    if (f_.v334 == (__int64 (**)(void))f_.v335) {
      goto LABEL_79;
    }
  LABEL_97:
    v69 = *v68;
    if ((*(_BYTE*)(v58 + 8) & 1) != 0) {
      v70 = *(_QWORD*)(v58 + 24);
    }
    else {
      v70 = v58 + 9;
    }
    v71 = game_HashString(v70);
    if (v71 == 0) {
      goto LABEL_96;
    }
    v72 = *((_QWORD*)v69 + 11);
    if (v72 == 0 || *((_QWORD*)v69 + 13) == 0) {
      goto LABEL_96;
    }
    v74 = v72 - 1;
    if ((v72 & (v72 - 1)) != 0) {
      v75 = v71;
      if (v71 >= v72) {
        v75 = v71 % v72;
      }
    }
    else {
      v75 = v74 & v71;
    }
    v76 = *(_QWORD**)(*((_QWORD*)v69 + 10) + 8 * v75);
    if (v76 == nullptr) {
      goto LABEL_96;
    }
    v77 = (_QWORD*)*v76;
    if (v77 == nullptr) {
      goto LABEL_96;
    }
    if ((v72 & v74) == 0) {
      while (1) {
        v79 = v77[1];
        if (v79 == v71) {
          if (v77[2] == v71) {
            goto LABEL_125;
          }
        }
        else if ((v79 & v74) != v75) {
          goto LABEL_96;
        }
        v77 = (_QWORD*)*v77;
        if (v77 == nullptr) {
          goto LABEL_96;
        }
      }
    }
    while (1) {
      v78 = v77[1];
      if (v78 == v71) {
        if (v77[2] == v71) {
        LABEL_125:
          v80 = v77[3];
          if (v80 != 0) {
            v81 = *(__int64***)(v80 + 40);
            v82 = *v81;
            v83 = v81[1];
            while (v82 != v83) {
              v85 = *v82;
              v86 = *(const char**)(*v82 + 32);
              if (v86 != nullptr && *v86 != 0 &&
                  GameRoutine_1a09d30(v86, (const char*)&GameData_1ae1d7b) ==
                      0) {
                v87 = *(const char**)(v85 + 40);
                if (v87 == nullptr || *v87 == 0 ||
                    GameRoutine_1a09d30(v87, GameData_1a9638b) != 0) {
                  f_.v380 = 0;
                  f_.v381 = 0;
                  f_.v379 = 0;
                  GameRoutine_12d8f40(&f_.v379, (const char**)(v85 + 96),
                                      (unsigned __int16*)(v85 + 104));
                  GameRoutine_12d8f40(&f_.v379, (const char**)(v85 + 120),
                                      (unsigned __int16*)(v85 + 128));
                  GameRoutine_12d8f40(&f_.v379, (const char**)(v85 + 144),
                                      (unsigned __int16*)(v85 + 152));
                  v88 = f_.v379;
                  v89 = f_.v380;
                  if (f_.v380 == f_.v379) {
                    if (f_.v380 != 0) {
                      v99 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v99 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v99,
                          f_.v379);
                    }
                  }
                  else {
                    v90 = (_QWORD*)v333[29];
                    v91 = v333[30];
                    if ((unsigned __int64)v90 < v91) {
                      *v90 = f_.v379;
                      v90[1] = v89;
                      v84 = v90 + 3;
                      v90[2] = f_.v381;
                    }
                    else {
                      v92 = (signed __int64)v90 - *v40;
                      v93 = 1 - 0x5555555555555555LL * (v92 >> 3);
                      if (v93 > 0xAAAAAAAAAAAAAAALL) {
                        GameRoutine_12dffb0();
                      }
                      v325 = *v40;
                      v94 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v91 - *v40) >> 3);
                      if (2 * v94 > v93) {
                        v93 = 2 * v94;
                      }
                      if (v94 >= 0x555555555555555LL) {
                        v95 = 0xAAAAAAAAAAAAAAALL;
                      }
                      else {
                        v95 = v93;
                      }
                      if (v95 != 0) {
                        v320 = v92;
                        v322 = f_.v379;
                        if (v95 > 0xAAAAAAAAAAAAAAALL) {
                          goto LABEL_401;
                        }
                        v96 = v95;
                        v97 = fw_memory_HeapManager_Allocate(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v95,
                            16, 0);
                        v92 = v320;
                        v88 = v322;
                        v95 = v96;
                        v98 = v97;
                      }
                      else {
                        v98 = 0;
                      }
                      v100 = (__int64*)(v98 + v92);
                      v101 = f_.v381;
                      *v100 = v88;
                      v100[1] = v89;
                      v100[2] = v101;
                      v321 = v98 + v92 + 24;
                      v323 = v98 + 24 * v95;
                      GameRoutine_1a0b950(v98, v325, v92);
                      v333[28] = v98;
                      v84 = (_QWORD*)v321;
                      v333[29] = v321;
                      v333[30] = v323;
                      if (v325 != 0) {
                        v102 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v102 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v102,
                            v325);
                      }
                    }
                    v333[29] = v84;
                  }
                  a1 = v333;
                }
              }
              ++v82;
            }
          }
        LABEL_96:
          if (++v68 != (__int64 (**)(void))v67) {
            goto LABEL_97;
          }
        LABEL_79:
          v57 = v328;
          v58 += 144;
          goto LABEL_80;
        }
      }
      else {
        if (v78 >= v72) {
          v78 %= v72;
        }
        if (v78 != v75) {
          goto LABEL_96;
        }
      }
      v77 = (_QWORD*)*v77;
      if (v77 == nullptr) {
        goto LABEL_96;
      }
    }
  }
  if (f_.v334 != nullptr) {
    f_.v335 = (__int64**)f_.v334;
    v103 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v103 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v103,
                                  (__int64)f_.v334);
  }
  HubDisposFileReader_Destructor(&f_.v339);
LABEL_163:
  v104 = *(_QWORD*)(v5 + 24);
  v105 = *(_QWORD*)(v319 + 24);
  v106 = Dir_70df40((__int16*)(v105 + 96), (__int16*)(v104 + 96));
  if (v106 != 0) {
    if (v106 < 1) {
      v324 = a1 + 2;
      v329 = a1 + 4;
      if (a1[4] - a1[2] != -368) {
      LABEL_169:
        GameRoutine_12e0680();
      }
    }
    else {
      if ((unsigned int)v106 >= 0x5A0) {
        v107 = v106 / 0x5A0u;
      }
      else {
        v107 = 1;
      }
      v108 = v107;
      v109 = a1[2];
      v324 = a1 + 2;
      v329 = a1 + 4;
      if (0xD37A6F4DE9BD37A7LL * ((a1[4] - v109) >> 4) < v107) {
        v110 = a1[3];
        v111 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 368LL * v107, 16, 0);
        if (v110 != v109) {
          v112 = v109;
          v113 = v111;
          do {
            *(_BYTE*)v113 = *(_BYTE*)v112;
            v114 = *(_DWORD*)(v112 + 1);
            *(_DWORD*)(v113 + 4) = *(_DWORD*)(v112 + 4);
            *(_DWORD*)(v113 + 1) = v114;
            v115 = *(_QWORD*)(v112 + 8);
            v116 = *(_QWORD*)(v112 + 24);
            *(_QWORD*)(v113 + 16) = *(_QWORD*)(v112 + 16);
            *(_QWORD*)(v113 + 24) = v116;
            *(_QWORD*)(v113 + 8) = v115;
            v117 = *(_QWORD*)(v112 + 48);
            v118 = *(_QWORD*)(v112 + 32);
            *(_QWORD*)(v113 + 40) = *(_QWORD*)(v112 + 40);
            *(_QWORD*)(v113 + 48) = v117;
            *(_QWORD*)(v113 + 32) = v118;
            v119 = *(_QWORD*)(v112 + 56);
            v120 = *(_QWORD*)(v112 + 72);
            *(_QWORD*)(v113 + 64) = *(_QWORD*)(v112 + 64);
            *(_QWORD*)(v113 + 72) = v120;
            *(_QWORD*)(v113 + 56) = v119;
            v121 = *(_QWORD*)(v112 + 80);
            v122 = *(_QWORD*)(v112 + 96);
            *(_QWORD*)(v113 + 88) = *(_QWORD*)(v112 + 88);
            *(_QWORD*)(v113 + 96) = v122;
            *(_QWORD*)(v113 + 80) = v121;
            v123 = *(_QWORD*)(v112 + 104);
            v124 = *(_QWORD*)(v112 + 120);
            *(_QWORD*)(v113 + 112) = *(_QWORD*)(v112 + 112);
            *(_QWORD*)(v113 + 120) = v124;
            *(_QWORD*)(v113 + 104) = v123;
            v125 = *(_QWORD*)(v112 + 128);
            v126 = *(_QWORD*)(v112 + 144);
            *(_QWORD*)(v113 + 136) = *(_QWORD*)(v112 + 136);
            *(_QWORD*)(v113 + 144) = v126;
            *(_QWORD*)(v113 + 128) = v125;
            v127 = *(_QWORD*)(v112 + 152);
            v128 = *(_QWORD*)(v112 + 168);
            *(_QWORD*)(v113 + 160) = *(_QWORD*)(v112 + 160);
            *(_QWORD*)(v113 + 168) = v128;
            *(_QWORD*)(v113 + 152) = v127;
            v129 = *(_QWORD*)(v112 + 176);
            v130 = *(_QWORD*)(v112 + 192);
            *(_QWORD*)(v113 + 184) = *(_QWORD*)(v112 + 184);
            *(_QWORD*)(v113 + 192) = v130;
            *(_QWORD*)(v113 + 176) = v129;
            v131 = *(_QWORD*)(v112 + 200);
            v132 = *(_QWORD*)(v112 + 216);
            *(_QWORD*)(v113 + 208) = *(_QWORD*)(v112 + 208);
            *(_QWORD*)(v113 + 216) = v132;
            *(_QWORD*)(v113 + 200) = v131;
            v133 = *(_QWORD*)(v112 + 224);
            v134 = *(_QWORD*)(v112 + 240);
            *(_QWORD*)(v113 + 232) = *(_QWORD*)(v112 + 232);
            *(_QWORD*)(v113 + 240) = v134;
            *(_QWORD*)(v113 + 224) = v133;
            v135 = *(_QWORD*)(v112 + 248);
            v136 = *(_QWORD*)(v112 + 264);
            *(_QWORD*)(v113 + 256) = *(_QWORD*)(v112 + 256);
            *(_QWORD*)(v113 + 264) = v136;
            *(_QWORD*)(v113 + 248) = v135;
            v137 = *(_QWORD*)(v112 + 272);
            v138 = *(_QWORD*)(v112 + 288);
            *(_QWORD*)(v113 + 280) = *(_QWORD*)(v112 + 280);
            *(_QWORD*)(v113 + 288) = v138;
            *(_QWORD*)(v113 + 272) = v137;
            v139 = *(_QWORD*)(v112 + 296);
            v140 = *(_QWORD*)(v112 + 312);
            *(_QWORD*)(v113 + 304) = *(_QWORD*)(v112 + 304);
            *(_QWORD*)(v113 + 312) = v140;
            *(_QWORD*)(v113 + 296) = v139;
            v141 = *(_QWORD*)(v112 + 328);
            *(_QWORD*)(v113 + 320) = *(_QWORD*)(v112 + 320);
            *(_QWORD*)(v113 + 328) = v141;
            v142 = *(_QWORD*)(v112 + 336);
            v143 = *(_QWORD*)(v112 + 344);
            v144 = *(_QWORD*)(v112 + 352);
            v145 = *(_QWORD*)(v112 + 360);
            v112 += 368;
            *(_QWORD*)(v113 + 352) = v144;
            *(_QWORD*)(v113 + 360) = v145;
            *(_QWORD*)(v113 + 336) = v142;
            *(_QWORD*)(v113 + 344) = v143;
            v113 += 368;
          } while (v112 != v110);
        }
        a1[2] = v111;
        a1[3] = v111 + v110 - v109;
        a1[4] = v111 + 368LL * v108;
        if (v109 != 0) {
          v146 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v146 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v146, v109);
        }
      }
    }
  }
  else {
    v324 = a1 + 2;
    v329 = a1 + 4;
  }
  *((_WORD*)a1 + 104) = *(_WORD*)(v105 + 96);
  *((_BYTE*)a1 + 210) = *(_BYTE*)(v105 + 98);
  *((_BYTE*)a1 + 211) = *(_BYTE*)(v105 + 100);
  v147 = *(__int16*)(v105 + 98);
  v148 = *(__int16*)(v105 + 100);
  LOWORD(f_.v379) = *(_WORD*)(v105 + 96);
  v149 = *(_WORD*)(v105 + 102);
  WORD1(f_.v379) = v147;
  WORD2(f_.v379) = v148;
  HIWORD(f_.v379) = v149;
  LODWORD(f_.v380) = *(_DWORD*)(v105 + 104);
  v326 = GameRoutine_12c8fe0(v331, v147, v148, 0);
LABEL_181:
  v150 = BYTE2(f_.v379);
  v151 = f_.v379;
  v152 = a1[3];
  v153 = BYTE4(f_.v379);
  if (((__int64)SWORD1(f_.v379) << 24) + ((__int64)(__int16)f_.v379 << 32) +
          ((__int64)SWORD2(f_.v379) << 18) + ((__int64)SHIWORD(f_.v379) << 12) +
          ((__int64)(__int16)f_.v380 << 6) + SWORD1(f_.v380) <=
      (unsigned __int64)(((__int64)*(__int16*)(v104 + 98) << 24) +
                         ((__int64)*(__int16*)(v104 + 96) << 32) +
                         ((__int64)*(__int16*)(v104 + 100) << 18) +
                         ((__int64)*(__int16*)(v104 + 102) << 12) +
                         ((__int64)*(__int16*)(v104 + 104) << 6) +
                         *(__int16*)(v104 + 106))) {
    if (v152 >= *v329) {
      v155 = v152 - *v324;
      v156 = 1 - 0x2C8590B21642C859LL * (v155 >> 4);
      if (v156 > 0xB21642C8590B21LL) {
        goto LABEL_169;
      }
      if (0xA6F4DE9BD37A6F4ELL * ((__int64)(*v329 - *v324) >> 4) > v156) {
        v156 = 0xA6F4DE9BD37A6F4ELL * ((__int64)(*v329 - *v324) >> 4);
      }
      if (0xD37A6F4DE9BD37A7LL * ((__int64)(*v329 - *v324) >> 4) >=
          0x590B21642C8590LL) {
        v156 = 0xB21642C8590B21LL;
      }
      if (v156 > 0xB21642C8590B21LL) {
      LABEL_401:
        GameRoutine_60a210();
      }
      v157 = 368 * v156;
      v158 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 368 * v156, 16, 0);
      v159 = BYTE2(f_.v379);
      v160 = v158 + v155;
      v161 = f_.v379;
      v162 = BYTE4(f_.v379);
      *(_DWORD*)v160 = 0;
      *(_WORD*)(v160 + 8) = 0;
      *(_QWORD*)(v160 + 16) = 0;
      *(_QWORD*)(v160 + 24) = 0;
      *(_WORD*)(v160 + 32) = 0;
      *(_QWORD*)(v160 + 40) = 0;
      *(_QWORD*)(v160 + 48) = 0;
      *(_WORD*)(v160 + 56) = 0;
      *(_QWORD*)(v160 + 64) = 0;
      *(_QWORD*)(v160 + 72) = 0;
      *(_WORD*)(v160 + 80) = 0;
      *(_WORD*)(v160 + 104) = 0;
      *(_QWORD*)(v160 + 88) = 0;
      *(_QWORD*)(v160 + 96) = 0;
      *(_QWORD*)(v160 + 112) = 0;
      *(_QWORD*)(v160 + 120) = 0;
      *(_WORD*)(v160 + 128) = 0;
      *(_QWORD*)(v160 + 136) = 0;
      *(_QWORD*)(v160 + 144) = 0;
      *(_WORD*)(v160 + 152) = 0;
      *(_QWORD*)(v160 + 160) = 0;
      *(_QWORD*)(v160 + 168) = 0;
      *(_WORD*)(v160 + 176) = 0;
      *(_QWORD*)(v160 + 184) = 0;
      *(_QWORD*)(v160 + 192) = 0;
      *(_WORD*)(v160 + 200) = 0;
      *(_QWORD*)(v160 + 208) = 0;
      *(_QWORD*)(v160 + 216) = 0;
      *(_WORD*)(v160 + 224) = 0;
      *(_WORD*)(v160 + 248) = 0;
      *(_QWORD*)(v160 + 232) = 0;
      *(_QWORD*)(v160 + 240) = 0;
      *(_WORD*)(v160 + 272) = 0;
      *(_QWORD*)(v160 + 256) = 0;
      *(_QWORD*)(v160 + 264) = 0;
      *(_WORD*)(v160 + 296) = 0;
      *(_QWORD*)(v160 + 280) = 0;
      *(_QWORD*)(v160 + 288) = 0;
      *(_QWORD*)(v160 + 352) = 0;
      *(_QWORD*)(v160 + 360) = 0;
      *(_QWORD*)(v160 + 336) = 0;
      *(_QWORD*)(v160 + 344) = 0;
      *(_QWORD*)(v160 + 320) = 0;
      *(_QWORD*)(v160 + 328) = 0;
      *(_QWORD*)(v160 + 304) = 0;
      *(_QWORD*)(v160 + 312) = 0;
      *(_BYTE*)(v160 + 6) = v159;
      *(_WORD*)(v160 + 4) = v161;
      v163 = a1[2];
      v164 = a1[3];
      v165 = v158 + v155 + v163 - v164;
      *(_BYTE*)(v160 + 7) = v162;
      if (v163 != v164) {
        v166 = v163;
        v167 = v158 + v155 + v163 - v164;
        do {
          *(_BYTE*)v167 = *(_BYTE*)v166;
          v168 = *(_DWORD*)(v166 + 1);
          *(_DWORD*)(v167 + 4) = *(_DWORD*)(v166 + 4);
          *(_DWORD*)(v167 + 1) = v168;
          v169 = *(_QWORD*)(v166 + 8);
          v170 = *(_QWORD*)(v166 + 24);
          *(_QWORD*)(v167 + 16) = *(_QWORD*)(v166 + 16);
          *(_QWORD*)(v167 + 24) = v170;
          *(_QWORD*)(v167 + 8) = v169;
          v171 = *(_QWORD*)(v166 + 48);
          v172 = *(_QWORD*)(v166 + 32);
          *(_QWORD*)(v167 + 40) = *(_QWORD*)(v166 + 40);
          *(_QWORD*)(v167 + 48) = v171;
          *(_QWORD*)(v167 + 32) = v172;
          v173 = *(_QWORD*)(v166 + 56);
          v174 = *(_QWORD*)(v166 + 72);
          *(_QWORD*)(v167 + 64) = *(_QWORD*)(v166 + 64);
          *(_QWORD*)(v167 + 72) = v174;
          *(_QWORD*)(v167 + 56) = v173;
          v175 = *(_QWORD*)(v166 + 80);
          v176 = *(_QWORD*)(v166 + 96);
          *(_QWORD*)(v167 + 88) = *(_QWORD*)(v166 + 88);
          *(_QWORD*)(v167 + 96) = v176;
          *(_QWORD*)(v167 + 80) = v175;
          v177 = *(_QWORD*)(v166 + 104);
          v178 = *(_QWORD*)(v166 + 120);
          *(_QWORD*)(v167 + 112) = *(_QWORD*)(v166 + 112);
          *(_QWORD*)(v167 + 120) = v178;
          *(_QWORD*)(v167 + 104) = v177;
          v179 = *(_QWORD*)(v166 + 128);
          v180 = *(_QWORD*)(v166 + 144);
          *(_QWORD*)(v167 + 136) = *(_QWORD*)(v166 + 136);
          *(_QWORD*)(v167 + 144) = v180;
          *(_QWORD*)(v167 + 128) = v179;
          v181 = *(_QWORD*)(v166 + 152);
          v182 = *(_QWORD*)(v166 + 168);
          *(_QWORD*)(v167 + 160) = *(_QWORD*)(v166 + 160);
          *(_QWORD*)(v167 + 168) = v182;
          *(_QWORD*)(v167 + 152) = v181;
          v183 = *(_QWORD*)(v166 + 176);
          v184 = *(_QWORD*)(v166 + 192);
          *(_QWORD*)(v167 + 184) = *(_QWORD*)(v166 + 184);
          *(_QWORD*)(v167 + 192) = v184;
          *(_QWORD*)(v167 + 176) = v183;
          v185 = *(_QWORD*)(v166 + 200);
          v186 = *(_QWORD*)(v166 + 216);
          *(_QWORD*)(v167 + 208) = *(_QWORD*)(v166 + 208);
          *(_QWORD*)(v167 + 216) = v186;
          *(_QWORD*)(v167 + 200) = v185;
          v187 = *(_QWORD*)(v166 + 224);
          v188 = *(_QWORD*)(v166 + 240);
          *(_QWORD*)(v167 + 232) = *(_QWORD*)(v166 + 232);
          *(_QWORD*)(v167 + 240) = v188;
          *(_QWORD*)(v167 + 224) = v187;
          v189 = *(_QWORD*)(v166 + 248);
          v190 = *(_QWORD*)(v166 + 264);
          *(_QWORD*)(v167 + 256) = *(_QWORD*)(v166 + 256);
          *(_QWORD*)(v167 + 264) = v190;
          *(_QWORD*)(v167 + 248) = v189;
          v191 = *(_QWORD*)(v166 + 272);
          v192 = *(_QWORD*)(v166 + 288);
          *(_QWORD*)(v167 + 280) = *(_QWORD*)(v166 + 280);
          *(_QWORD*)(v167 + 288) = v192;
          *(_QWORD*)(v167 + 272) = v191;
          v193 = *(_QWORD*)(v166 + 296);
          v194 = *(_QWORD*)(v166 + 312);
          *(_QWORD*)(v167 + 304) = *(_QWORD*)(v166 + 304);
          *(_QWORD*)(v167 + 312) = v194;
          *(_QWORD*)(v167 + 296) = v193;
          v195 = *(_QWORD*)(v166 + 328);
          *(_QWORD*)(v167 + 320) = *(_QWORD*)(v166 + 320);
          *(_QWORD*)(v167 + 328) = v195;
          v196 = *(_QWORD*)(v166 + 336);
          v197 = *(_QWORD*)(v166 + 344);
          v198 = *(_QWORD*)(v166 + 352);
          v199 = *(_QWORD*)(v166 + 360);
          v166 += 368;
          *(_QWORD*)(v167 + 352) = v198;
          *(_QWORD*)(v167 + 360) = v199;
          *(_QWORD*)(v167 + 336) = v196;
          *(_QWORD*)(v167 + 344) = v197;
          v167 += 368;
        } while (v166 != v164);
      }
      v154 = v160 + 368;
      a1[2] = v165;
      a1[3] = v160 + 368;
      a1[4] = v158 + v157;
      if (v163 != 0) {
        v200 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v200 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v200, v163);
      }
    }
    else {
      *(_DWORD*)v152 = 0;
      *(_WORD*)(v152 + 8) = 0;
      v154 = v152 + 368;
      *(_QWORD*)(v152 + 16) = 0;
      *(_QWORD*)(v152 + 24) = 0;
      *(_WORD*)(v152 + 32) = 0;
      *(_QWORD*)(v152 + 40) = 0;
      *(_QWORD*)(v152 + 48) = 0;
      *(_WORD*)(v152 + 56) = 0;
      *(_QWORD*)(v152 + 64) = 0;
      *(_QWORD*)(v152 + 72) = 0;
      *(_WORD*)(v152 + 80) = 0;
      *(_WORD*)(v152 + 4) = v151;
      *(_BYTE*)(v152 + 6) = v150;
      *(_BYTE*)(v152 + 7) = v153;
      *(_QWORD*)(v152 + 88) = 0;
      *(_QWORD*)(v152 + 96) = 0;
      *(_WORD*)(v152 + 104) = 0;
      *(_WORD*)(v152 + 128) = 0;
      *(_QWORD*)(v152 + 112) = 0;
      *(_QWORD*)(v152 + 120) = 0;
      *(_QWORD*)(v152 + 136) = 0;
      *(_QWORD*)(v152 + 144) = 0;
      *(_WORD*)(v152 + 152) = 0;
      *(_QWORD*)(v152 + 160) = 0;
      *(_QWORD*)(v152 + 168) = 0;
      *(_WORD*)(v152 + 176) = 0;
      *(_QWORD*)(v152 + 184) = 0;
      *(_QWORD*)(v152 + 192) = 0;
      *(_WORD*)(v152 + 200) = 0;
      *(_QWORD*)(v152 + 208) = 0;
      *(_QWORD*)(v152 + 216) = 0;
      *(_WORD*)(v152 + 224) = 0;
      *(_QWORD*)(v152 + 232) = 0;
      *(_QWORD*)(v152 + 240) = 0;
      *(_WORD*)(v152 + 248) = 0;
      *(_WORD*)(v152 + 272) = 0;
      *(_QWORD*)(v152 + 256) = 0;
      *(_QWORD*)(v152 + 264) = 0;
      *(_WORD*)(v152 + 296) = 0;
      *(_QWORD*)(v152 + 280) = 0;
      *(_QWORD*)(v152 + 288) = 0;
      *(_QWORD*)(v152 + 352) = 0;
      *(_QWORD*)(v152 + 360) = 0;
      *(_QWORD*)(v152 + 336) = 0;
      *(_QWORD*)(v152 + 344) = 0;
      *(_QWORD*)(v152 + 320) = 0;
      *(_QWORD*)(v152 + 328) = 0;
      *(_QWORD*)(v152 + 304) = 0;
      *(_QWORD*)(v152 + 312) = 0;
    }
    a1[3] = v154;
    LOBYTE(f_.v339) = 0;
    LOBYTE(f_.v342) = 0;
    LOBYTE(f_.v343) = 0;
    LOBYTE(f_.v346) = 0;
    LOBYTE(f_.v347) = 0;
    LOBYTE(f_.v349) = 0;
    LOBYTE(f_.v350) = 0;
    LOBYTE(f_.v352) = 0;
    LOBYTE(f_.v353) = 0;
    LOBYTE(f_.v356) = 0;
    LOBYTE(f_.v357) = 0;
    LOBYTE(f_.v360) = 0;
    LOBYTE(f_.v361) = 0;
    f_.v364 = 0;
    f_.v365 = 0;
    f_.v366 = 0;
    f_.v367 = 0;
    f_.v368 = 0;
    f_.v369 = 0;
    f_.v370 = 0;
    f_.v371 = 0;
    f_.v372 = 0;
    f_.v373 = 0;
    f_.v374 = 0;
    f_.v375 = 0;
    f_.v376 = 0;
    f_.v377 = 0;
    if (v331 == 2) {
      goto LABEL_241;
    }
    v201 = v326;
    v202 = WORD1(f_.v379);
    if ((v326 & 0x80000000) != 0 ||
        (v203 = *(_QWORD*)(*(_QWORD*)(*GameData_212cd60[0] + 64) + 8LL * v326),
         (v204 = *(unsigned __int8*)(v203 + 33)) != SWORD1(f_.v379)) ||
        (v205 = *(unsigned __int8*)(v203 + 34)) != SWORD2(f_.v379)) {
    LABEL_207:
      v208 = &f_.v334;
      f_.v334 = GameData_2023d58;
      f_.v335 = &f_.v339;
      f_.v336 = v378;
      f_.v337 = &f_.v379;
      v338 = (__int64*)&f_.v334;
      if (*GameData_212cd58[0] != 0) {
        v209 = *(_QWORD**)(*GameData_212cd58[0] + 264);
        if (v209 != nullptr) {
          GameRoutine_12c82a0(v209, (unsigned __int8)v378[0], v331, f_.v379,
                              v202, SWORD2(f_.v379), (__int64)&f_.v334);
          v208 = (__int64 (***)(void))v338;
          if (v338 != (__int64*)&f_.v334) {
            if (v338 == nullptr) {
            LABEL_215:
              v211 = *(__int64**)(*GameData_212cc40[0] + 64);
              v212 = *(__int64**)(*GameData_212cc40[0] + 72);
              if (v211 != v212) {
                v213 = 10000 * (__int16)f_.v379 + 100 * SWORD1(f_.v379) +
                       SWORD2(f_.v379);
                while (1) {
                  v214 = *v211;
                  v215 = *(unsigned int***)(*v211 + 24);
                  v216 = *v215;
                  v217 = v215[1];
                  if (v216 != v217) {
                    break;
                  }
                LABEL_230:
                  if (++v211 == v212) {
                    goto LABEL_239;
                  }
                }
                while (1) {
                  v218 = *v216;
                  v219 = v216[1];
                  v216 += 2;
                  v220 = v218 == 0 || v219 == 0;
                  v221 = v220 || v218 > v213;
                  if (!v221 && v213 <= v219) {
                    break;
                  }
                  if (v216 == v217) {
                    goto LABEL_230;
                  }
                }
                if (v214 != 0) {
                  v223 = *(_BYTE*)(v214 + 72) == 3 ? *v211 : 0LL;
                  if (v223 != 0 && (f_.v360 & 1) == 0) {
                    f_.v358 = v223;
                    f_.v359 = 0;
                    LOWORD(f_.v357) = 261;
                    LOBYTE(f_.v360) = 1;
                  }
                }
              }
            LABEL_239:
              v326 = v201;
              v224 = *(__int64**)(*GameData_212cc78[0] + 64);
              v225 = *(__int64**)(*GameData_212cc78[0] + 72);
              if (v224 == v225) {
              LABEL_240:
                a1 = v333;
              }
              else {
                while (1) {
                  v232 = *v224;
                  if (*(unsigned __int16*)(*v224 + 88) == (__int16)f_.v379 &&
                      __PAIR64__(*(unsigned __int8*)(v232 + 91),
                                 *(unsigned __int8*)(v232 + 90)) ==
                          __PAIR64__(SWORD2(f_.v379), SWORD1(f_.v379)) &&
                      (GameRoutine_efdb60(*v224) & 1) != 0) {
                    break;
                  }
                  if (++v224 == v225) {
                    goto LABEL_240;
                  }
                }
                a1 = v333;
                if ((f_.v364 & 1) == 0) {
                  f_.v362 = v232;
                  f_.v363 = 0;
                  f_.v361 = 6;
                  f_.v364 = 1;
                }
              }
            LABEL_241:
              if (__PAIR64__(WORD2(f_.v379), WORD1(f_.v379)) ==
                      __PAIR64__(*(unsigned __int16*)(v104 + 100),
                                 *(unsigned __int16*)(v104 + 98)) &&
                  (f_.v342 & 1) == 0) {
                LOWORD(f_.v339) = 0;
                f_.v340 = nullptr;
                f_.v341 = 0;
                LOBYTE(f_.v342) = 1;
              }
              v226 = (_BYTE*)(v154 - 368);
              v227 = (_BYTE*)(v154 - 367);
              v228 = v154 - 360;
              v229 = 0;
              v230 = *(unsigned __int8*)(v154 - 368);
              v231 = *(unsigned __int8*)(v154 - 367);
              while (1) {
                v233 = &(&f_.v339)[v229];
                if (*((_BYTE*)&f_.v342 + v229 * 8) != 1) {
                  goto LABEL_261;
                }
                if (*(_BYTE*)v233 == 0) {
                  v230 |= 2u;
                  *v226 = v230;
                }
                v234 = v228 + 24LL * (unsigned __int8)v231;
                if (v233 == (__int64**)v234) {
                  break;
                }
                v235 = LOBYTE((&f_.v339)[v229]);
                *(_BYTE*)v234 = v235;
                *(_BYTE*)(v234 + 1) = BYTE1((&f_.v339)[v229]);
                *(_QWORD*)(v234 + 8) = (&f_.v339)[v229 + 1];
                *(_QWORD*)(v234 + 16) = 0;
                if (v235 == 11) {
                  goto LABEL_259;
                }
              LABEL_260:
                *v227 = ++v231;
              LABEL_261:
                if (v229 == 48) {
                  if ((f_.v377 & 1) != 0) {
                    *v226 = v230 | 4;
                  }
                  v248 = (__int64**)a1[5];
                  v249 = (__int64**)a1[6];
                  if (v248 != v249) {
                    v250 = game_GameModeData_instance_;
                    v251 = (_BYTE*)(v154 - 366);
                    do {
                      v252 = **v248;
                      if (v250 != 0) {
                        v253 = *(unsigned __int8*)(v250 + 15);
                        v254 = *(unsigned __int8**)(v252 + 24);
                        v255 = &v254[4 * v253];
                        v256 = 4 * v253;
                        v257 = v255 + 4;
                        v258 = v255 + 5;
                        v259 = v255 + 6;
                      }
                      else {
                        v254 = *(unsigned __int8**)(v252 + 24);
                        v256 = 0;
                        v257 = v254 + 4;
                        v258 = v254 + 5;
                        v259 = v254 + 6;
                      }
                      v260 = *v257;
                      if (v260 <= SWORD1(f_.v379)) {
                        v267 = *v258;
                        v268 = *v259;
                        v269 =
                            v260 != SWORD1(f_.v379) || v267 <= SWORD2(f_.v379);
                        v270 = !v269;
                        if (v268 >= SWORD1(f_.v379) && !v270) {
                          v271 = v254[v256 + 7];
                          if (v268 != SWORD1(f_.v379) ||
                              v271 >= SWORD2(f_.v379)) {
                            goto LABEL_407;
                          }
                        }
                      }
                      if (v250 != 0) {
                        v261 = *(unsigned __int8*)(v250 + 15);
                        v262 = &v254[4 * v261];
                        v263 = 4 * v261;
                        v264 = v262 + 44;
                        v265 = v262 + 45;
                        v266 = v262 + 46;
                      }
                      else {
                        v263 = 0;
                        v264 = v254 + 44;
                        v265 = v254 + 45;
                        v266 = v254 + 46;
                      }
                      v273 = *v264;
                      v274 = v273 == SWORD1(f_.v379);
                      if (v273 <= SWORD1(f_.v379)) {
                        v275 = *v265;
                        v276 = *v266;
                        v277 = !v274 || v275 <= SWORD2(f_.v379);
                        v278 = !v277;
                        if (v276 >= SWORD1(f_.v379) && !v278) {
                          v279 = v254[v263 + 47];
                          if (v276 != SWORD1(f_.v379) ||
                              v279 >= SWORD2(f_.v379)) {
                          LABEL_407:
                            v281 = (unsigned __int8)*v251;
                            if (v281 <= 3) {
                              *(_QWORD*)(v154 - 48 +
                                         8LL * (unsigned __int8)*v251) = *v248;
                              *v251 = v281 + 1;
                              v250 = game_GameModeData_instance_;
                            }
                          }
                        }
                      }
                      ++v248;
                    } while (v248 != v249);
                  }
                  v282 = GameData_21c9ac0;
                  v283 = GameData_21c9ac8;
                  if (GameData_21c9ac0 != GameData_21c9ac8) {
                    v284 = 0;
                    while (1) {
                      v285 = *(_QWORD*)v282;
                      v286 = GameRoutine_975940(
                          *(_QWORD*)(*(_QWORD*)v282 + 288LL));
                      if (__PAIR64__(*(unsigned __int8*)(v286 + 67),
                                     *(unsigned __int8*)(v286 + 66)) ==
                          __PAIR64__(SWORD2(f_.v379), SWORD1(f_.v379))) {
                        v287 = v284 + 1;
                        (&f_.v334)[v284] = (__int64 (**)(void))v285;
                        v221 = v284++ <= 6;
                        if (!v221) {
                          break;
                        }
                      }
                      v282 += 8;
                      if (v282 == v283) {
                        v287 = v284;
                        if (v284 < 1) {
                          goto LABEL_180;
                        }
                        break;
                      }
                    }
                    v288 = (_BYTE*)(v154 - 365);
                    v289 = v154 - 16;
                    v290 = v287;
                    v291 = *(unsigned __int8*)(v154 - 365);
                    if ((unsigned int)(v287 - 1) >= 7) {
                      v294 = &v338;
                      v295 = 0;
                      do {
                        if (v291 <= 1) {
                          *(_QWORD*)(v289 + 8LL * v291++) = *(v294 - 4);
                          *v288 = v291;
                          if (v291 <= 1) {
                            *(_QWORD*)(v289 + 8LL * v291++) = *(v294 - 3);
                            *v288 = v291;
                            if (v291 <= 1) {
                              *(_QWORD*)(v289 + 8LL * v291++) = *(v294 - 2);
                              *v288 = v291;
                              if (v291 <= 1) {
                                *(_QWORD*)(v289 + 8LL * v291++) = *(v294 - 1);
                                *v288 = v291;
                                if (v291 <= 1) {
                                  *(_QWORD*)(v289 + 8LL * v291++) = *v294;
                                  *v288 = v291;
                                  if (v291 <= 1) {
                                    *(_QWORD*)(v289 + 8LL * v291++) = v294[1];
                                    *v288 = v291;
                                    if (v291 <= 1) {
                                      *(_QWORD*)(v289 + 8LL * v291++) = v294[2];
                                      *v288 = v291;
                                      if (v291 <= 1) {
                                        *(_QWORD*)(v289 + 8LL * v291++) =
                                            v294[3];
                                        *v288 = v291;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        v295 -= 8;
                        v294 += 8;
                      } while (-(__int64)(v290 & 0xFFFFFFF8) != v295);
                      v292 = -v295;
                      v293 = v290 & 7;
                      if (v293 != 0) {
                        goto LABEL_359;
                      }
                    }
                    else {
                      v292 = 0;
                      v293 = v290 & 7;
                      if (v293 == 0) {
                        goto LABEL_180;
                      }
                    LABEL_359:
                      v296 = (__int64*)&(&f_.v334)[v292];
                      do {
                        if (v291 <= 1) {
                          *(_QWORD*)(v289 + 8LL * v291++) = *v296;
                          *v288 = v291;
                        }
                        ++v296;
                        --v293;
                      } while (v293 != 0);
                    }
                  }
                LABEL_180:
                  LODWORD(f_.v380) = 0;
                  HIDWORD(f_.v379) = (unsigned __int16)(WORD2(f_.v379) + 1);
                  Dir_70d7a0((unsigned __int16*)&f_.v379);
                  a1 = v333;
                  goto LABEL_181;
                }
                v236 = &(&f_.v339)[v229];
                if (*((_BYTE*)&f_.v346 + v229 * 8) == 1) {
                  v237 = (unsigned __int8*)(v236 + 4);
                  if (*((_BYTE*)v236 + 32) == 0) {
                    v230 |= 2u;
                    *v226 = v230;
                  }
                  v238 = v228 + 24LL * (unsigned __int8)v231;
                  if (v237 == (unsigned __int8*)v238) {
                    if (*(_BYTE*)v238 == 11) {
                    LABEL_267:
                      *(_QWORD*)(v238 + 16) = v40;
                    }
                  }
                  else {
                    v239 = *v237;
                    *(_BYTE*)v238 = v239;
                    *(_BYTE*)(v238 + 1) = *((_BYTE*)&f_.v343 + v229 * 8 + 1);
                    *(_QWORD*)(v238 + 8) =
                        *(__int64*)((char*)&f_.v344 + v229 * 8);
                    *(_QWORD*)(v238 + 16) = 0;
                    if (v239 == 11) {
                      goto LABEL_267;
                    }
                  }
                  *v227 = ++v231;
                }
                if (*((_BYTE*)v236 + 88) != 1) {
                  goto LABEL_276;
                }
                v240 = (unsigned __int8*)&f_.v348[v229 - 1];
                if (LOBYTE(f_.v348[v229 - 1]) == 0) {
                  v230 |= 2u;
                  *v226 = v230;
                }
                v241 = v228 + 24LL * (unsigned __int8)v231;
                if (v240 == (unsigned __int8*)v241) {
                  if (*(_BYTE*)v241 != 11) {
                    goto LABEL_275;
                  }
                LABEL_274:
                  *(_QWORD*)(v241 + 16) = v40;
                  goto LABEL_275;
                }
                v242 = *v240;
                *(_BYTE*)v241 = v242;
                *(_BYTE*)(v241 + 1) = *((_BYTE*)&f_.v347 + v229 * 8 + 1);
                *(_QWORD*)(v241 + 8) = f_.v348[v229];
                *(_QWORD*)(v241 + 16) = 0;
                if (v242 == 11) {
                  goto LABEL_274;
                }
              LABEL_275:
                *v227 = ++v231;
              LABEL_276:
                v243 = &(&f_.v339)[v229];
                if (*((_BYTE*)&f_.v352 + v229 * 8) == 1) {
                  v245 = *((unsigned __int8*)v243 + 96);
                  v244 = (unsigned __int8*)(v243 + 12);
                  if (v245 == 0) {
                    v230 |= 2u;
                    *v226 = v230;
                  }
                  v246 = v228 + 24LL * (unsigned __int8)v231;
                  if (v244 == (unsigned __int8*)v246) {
                    if (*(_BYTE*)v246 == 11) {
                    LABEL_251:
                      *(_QWORD*)(v246 + 16) = v40;
                    }
                  }
                  else {
                    v247 = *v244;
                    *(_BYTE*)v246 = v247;
                    *(_BYTE*)(v246 + 1) = *((_BYTE*)&f_.v350 + v229 * 8 + 1);
                    *(_QWORD*)(v246 + 8) = f_.v351[v229];
                    *(_QWORD*)(v246 + 16) = 0;
                    if (v247 == 11) {
                      goto LABEL_251;
                    }
                  }
                  *v227 = ++v231;
                }
                v229 += 16;
              }
              if (*(_BYTE*)v234 != 11) {
                goto LABEL_260;
              }
            LABEL_259:
              *(_QWORD*)(v234 + 16) = v40;
              goto LABEL_260;
            }
            v210 = 5;
          LABEL_214:
            ((__int64 (*)(__int64))(*v208)[v210])((__int64)v208);
            goto LABEL_215;
          }
        }
        else {
          v208 = &f_.v334;
        }
      }
      v210 = 4;
      goto LABEL_214;
    }
    f_.v334 = GameData_2023cc8;
    f_.v335 = &f_.v339;
    f_.v336 = v378;
    f_.v337 = &f_.v379;
    v338 = (__int64*)&f_.v334;
    GameRoutine_12c8a30(v203, v378[0], v331, (__int16)f_.v379, v204, v205,
                        (__int64)&f_.v334);
    if (v338 == (__int64*)&f_.v334) {
      v206 = 32;
    }
    else {
      if (v338 == nullptr) {
      LABEL_206:
        LODWORD(f_.v335) = 0;
        LODWORD(f_.v334) = f_.v379;
        HIDWORD(f_.v334) = (unsigned __int16)(WORD2(f_.v379) + 1);
        Dir_70d7a0((unsigned __int16*)&f_.v334);
        v207 =
            GameRoutine_12c8fe0(v331, SWORD1(f_.v334), SWORD2(f_.v334), v326);
        v202 = WORD1(f_.v379);
        v201 = v207;
        goto LABEL_207;
      }
      v206 = 40;
    }
    (*(void (**)(__int64))(*v338 + v206))((__int64)v338);
    goto LABEL_206;
  }
  v297 = *v324;
  v298 = 0xD37A6F4DE9BD37A7LL * ((__int64)(v152 - *v324) >> 4);
  if (v298 < 2 || (int)v298 < -1) {
    if (v152 == v297) {
      return;
    }
  }
  else {
    *(_BYTE*)(v297 + 368LL * (unsigned int)((int)v298 / 2)) |= 8u;
    v297 = a1[2];
    v152 = a1[3];
    if (v152 == v297) {
      return;
    }
  }
  v300 = (unsigned __int8*)(v297 + 8);
  do {
    v301 = *(unsigned __int8*)(v297 + 1);
    v330 = v300;
    v332 = v297;
    if (*(_BYTE*)(v297 + 1) != 0) {
      do {
        v303 = *v300;
        if (v303 <= 0xC &&
            (((1 << v303) & 0x1F9E) != 0 || v303 == 5 && (v300[1] & 1) == 0)) {
          v304 = *((_QWORD*)v300 + 1);
          if (v304 != 0) {
            v305 = *(_BYTE**)(v304 + 288);
            if (v305 != nullptr && *v305 != 0) {
              v307 = (_QWORD*)a1[9];
              v306 = a1[10];
              if ((unsigned __int64)v307 < v306) {
                *v307 = v300;
                v302 = (__int64)(v307 + 1);
              }
              else {
                v308 = a1[8];
                v309 = (char*)v307 - v308;
                v310 = ((__int64)v307 - v308) >> 3;
                v311 = v310 + 1;
                if ((unsigned __int64)(v310 + 1) >> 61 != 0) {
                  GameRoutine_12e06a0();
                }
                v312 = v306 - v308;
                if (v312 >> 2 > v311) {
                  v311 = v312 >> 2;
                }
                if ((unsigned __int64)v312 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v313 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v313 = v311;
                }
                if (v313 != 0) {
                  if (v313 >> 61 != 0) {
                    goto LABEL_401;
                  }
                  v314 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v313, 16, 0);
                }
                else {
                  v314 = 0;
                }
                v315 = v314 + 8 * v313;
                v316 = (unsigned __int64)v307 - v308;
                v317 = (__int64)&v309[v314 + -8 * v310];
                *(_QWORD*)&v309[v314] = v300;
                v302 = (__int64)&v309[v314 + 8];
                GameRoutine_1a0b950(v317, v308, v316);
                v333[8] = v317;
                v333[9] = v302;
                v333[10] = v315;
                a1 = v333;
                if (v308 != 0) {
                  v318 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v318 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v318, v308);
                }
              }
              a1[9] = v302;
            }
          }
        }
        --v301;
        v300 += 24;
      } while (v301 != 0);
    }
    v297 = v332 + 368;
    v300 = v330 + 368;
  } while (v332 + 368 != v152);
}

__int64 game_12e1990(__int64 a1, char** a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int16 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    char* v15[4];
    char** v16;
  } v15_;

  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1648, 16, 0);
  v15_.v15[0] = *a2;
  GameRoutine_1647b80(v4, v15_.v15);
  *(_WORD*)(v4 + 1496) = 0;
  *(_QWORD*)(v4 + 1552) = 0;
  *(_QWORD*)(v4 + 176) = game_menu_MenuInput_InputUnknown00_ptr_208a838;
  *(_QWORD*)v4 = game_menu_InfoDialog_vtable;
  *(_QWORD*)(v4 + 1568) = -1;
  *(_DWORD*)(v4 + 1576) = -1;
  v5 = game_g_empty_item_ptr;
  *(_WORD*)(v4 + 1592) = 0;
  *(_QWORD*)(v4 + 1616) = 0;
  *(_QWORD*)(v4 + 1624) = 0;
  *(_QWORD*)(v4 + 1632) = 0;
  *(_QWORD*)(v4 + 1580) = *v5;
  v6 = *(_QWORD*)(a1 + 40);
  if (v6 != 0) {
    *(_QWORD*)(v6 + 48) = v4;
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
  v7 = *(_BYTE**)(v4 + 32);
  v8 = v7[138];
  if (v8 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
    v8 = v7[138];
  }
  v7[138] = v8 + 1;
  v13_.v14 = v13_.v13;
  v9 = *(_WORD*)(v4 + 136);
  v15_.v16 = v15_.v15;
  *(_WORD*)(v4 + 136) = v9 | 2;
  v13_.v13[0] = GameData_2023828;
  v15_.v15[0] = (const char*)GameData_2023828;
  GameRoutine_654050(v15_.v15, (_QWORD*)(v4 + 1200));
  if (v15_.v16 == v15_.v15) {
    v10 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_13;
    }
    v10 = 40;
  }
  (*(void (**)(void*)) & (*v15_.v16)[v10])((void*)v15_.v16);
LABEL_13:
  if (v13_.v14 == v13_.v13) {
    v11 = 32;
    goto LABEL_17;
  }
  if (v13_.v14 != nullptr) {
    v11 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*v13_.v14 + v11))((__int64)v13_.v14);
  }
  *(_BYTE*)(v4 + 1080) = 1;
  return v4;
}

__int64 game_1366260(const char* a1, char a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  char v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 (***v48)();
  __int64 v49;
  __int64 (**v50)();
  __int64 (**v51)();
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  char v55;
  __int64* v56;
  struct {
    __int64 v58[2];
    __int64 v59;
    __int64 v60;
    __int64 v61;
    int v62;
  } v58_;
  struct {
    __int64 (**v63)();
    __int64 v64;
  } v63_;
  __int64 v65;
  struct {
    __int64 (**v66)();
    __int64 (***v67)();
    __int64 v68;
    __int64 (***v69)();
    __int64* v70;
  } v66_;
  struct {
    __int64 v71;
    char gap136_[24];
    __int64* v72;
  } v71_;

  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  // The original reads this function object uninitialised.
  __asm__ volatile("" : "+m"(v71_));
  v4 = (_QWORD*)ui_Manager_instance_;
  v5 = *(_QWORD*)(ui_Manager_instance_ + 1088);
  v6 = *(_QWORD*)(ui_Manager_instance_ + 1096);
  if (v5 != v6) {
    v7 = GameRoutine_1a09c70_alt1(a1),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = std___1___hash_memory((__int64)a1, v7),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    do {
      if (*(_QWORD*)(*(_QWORD*)v5 + 8LL) == v8) {
        ++*(_DWORD*)(*(_QWORD*)v5 + 16LL);
        return *(_QWORD*)v5;
      }
      v5 += 8;
    } while (v5 != v6);
  }
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       264, 16, 0),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v10 + 16) = 0;
  *(_BYTE*)(v10 + 20) = 0;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)v10 = ui_LayoutArchive_vtable;
  *(_QWORD*)(v10 + 8) = 0;
  GameRoutine_571fd0((_QWORD*)(v10 + 32)),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = (__int64*)v4[137];
  v12 = v4[138];
  if ((unsigned __int64)v11 >= v12) {
    v14 = v4[136];
    v15 = (char*)v11 - v14;
    v16 = ((__int64)v11 - v14) >> 3;
    v17 = v16 + 1;
    if ((unsigned __int64)(v16 + 1) >> 61 != 0) {
      GameRoutine_1364380(),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v18 = v12 - v14;
    if (v18 >> 2 > v17) {
      v17 = v18 >> 2;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 != 0) {
      if (v19 >> 61 != 0) {
        GameRoutine_60a210(),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v20 = fw_memory_HeapManager_Allocate(*v9, 8 * v19, 16, 0),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v19;
    v22 = (unsigned __int64)v11 - v14;
    v23 = (__int64)&v15[v20 + -8 * v16];
    *(_QWORD*)&v15[v20] = v10;
    v13 = (__int64)&v15[v20 + 8];
    GameRoutine_1a0b950(v23, v14, v22),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4[136] = v23;
    v4[137] = v13;
    v4[138] = v21;
    if (v14 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*v9 + 200) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*v9 + v24, v14),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else {
    *v11 = v10;
    v13 = (__int64)(v11 + 1);
  }
  v4[137] = v13;
  v25 = GameRoutine_1a09c70_alt1(a1),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v10 +
             8) = std___1___hash_memory((__int64)a1, v25),
             v30 = COERCE_AS(__typeof__(v30),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
             v37 = COERCE_AS(__typeof__(v37),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v10 + 16) = 1;
  if ((a2 & 1) != 0) {
    *(_BYTE*)(v10 + 20) = 0;
    v58_.v58[0] = (__int64)a1;
    v58_.v58[1] = v25;
    v58_.v59 = 0;
    v58_.v60 = 0;
    v58_.v62 = 1;
    v26 = *snd_g_fileIndex_ptr[0];
    v27 = GameData_22416e0;
    v28 = *snd_g_fileIndex_ptr[0] + 4456;
    v58_.v61 = GameData_22416e0;
    nn_os_LockMutex(v28),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v63_.v64 = 0;
    v65 = v27;
    v63_.v63 = nullptr;
    v66_.v66 = GameData_202f258;
    v66_.v67 = (__int64 (***)(void))&v65,
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v66_.v70 = (__int64*)&v66_.v66;
    v66_.v68 = v26;
    v66_.v69 = &v63_.v63;
    v29 = fs_635a60(v26, v58_.v58, 0, 0, 0, (__int64)&v66_.v66),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v31 = v30;
    if (v66_.v70 == (__int64*)&v66_.v66) {
      v32 = 32;
    }
    else {
      if (v66_.v70 == nullptr) {
        goto LABEL_31;
      }
      v32 = 40;
    }
    (*(void (**)(__int64))(*v66_.v70 + v32))((__int64)v66_.v70),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_31:
    if ((v31 & 1) != 0) {
      v40 = v58_.v62;
      v41 = fw_memory_HeapManager_Allocate(*v9, 16, 16, 0),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)v41 = v29;
      *(_DWORD*)(v41 + 8) = v40;
      GameRoutine_17d4db0(v26 + 3536, v41),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      if (v63_.v64 == 0) {
      LABEL_39:
        nn_os_UnlockMutex(v26 + 4456),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v42 = v58_.v60;
        *(_QWORD*)(v10 + 24) = v29;
        if (v42 != 0) {
          std___1___shared_weak_count___release_weak(v42),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        return v10;
      }
      if (*(_QWORD*)(v63_.v64 + 8) != -1) {
        v66_.v66 = v63_.v63;
        v66_.v67 = (__int64 (***)(void))v63_.v64,
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v63_.v64 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_631500(v29, &v66_.v66),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v66_.v67 != nullptr) {
          std___1___shared_weak_count___release_weak((__int64)v66_.v67),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
    if (v63_.v64 != 0) {
      std___1___shared_weak_count___release_weak(v63_.v64),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    goto LABEL_39;
  }
  v58_.v58[0] = (__int64)a1;
  v58_.v58[1] = v25;
  LODWORD(v58_.v60) = 1;
  v33 = *snd_g_fileIndex_ptr[0];
  v34 = GameData_22416e0;
  v35 = *snd_g_fileIndex_ptr[0] + 4456;
  v58_.v59 = GameData_22416e0;
  nn_os_LockMutex(v35),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v63_.v63 = (__int64 (**)(void))v34,
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v66_.v68 = v33;
  v66_.v66 = GameData_202f1d8;
  v66_.v67 = &v63_.v63;
  v66_.v70 = (__int64*)&v66_.v66;
  v36 = fs_635a60(v33, v58_.v58, 1, 0, 0, (__int64)&v66_.v66),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v38 = v37;
  if (v66_.v70 == (__int64*)&v66_.v66) {
    v39 = 32;
  }
  else {
    if (v66_.v70 == nullptr) {
      goto LABEL_43;
    }
    v39 = 40;
  }
  (*(void (**)(__int64))(*v66_.v70 + v39))((__int64)v66_.v70),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_43:
  if ((v38 & 1) != 0) {
    v43 = v36;
  }
  else {
    v43 = 0;
  }
  nn_os_UnlockMutex(v33 + 4456),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v38 & 1) == 0) {
    goto LABEL_72;
  }
  GameRoutine_632da0((void*)((__int64*)&v66_.v66), v36, v58_.v60),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_633980((_QWORD*)v36, (__int64*)&v66_.v66),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_632cd0(v33, v36),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_631820(v36),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_AcquireWriteLock(v36 + 696),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v36 + 656) |= 0x40u;
  nn_os_ReleaseWriteLock(v36 + 696),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v44 = v66_.v70;
  v66_.v70 = nullptr;
  if (v44 != nullptr) {
    v63_.v63 = (__int64 (**)(void))v44,
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v71_.v72 == nullptr) {
    LABEL_75:
      GameRoutine_60a310(),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    (*(void (**)(__int64*, __int64 (***)(void)))(*v71_.v72 + 48))(v71_.v72,
                                                                  &v63_.v63),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v71_.v72 == &v71_.v71) {
    v45 = 32;
    goto LABEL_54;
  }
  if (v71_.v72 != nullptr) {
    v45 = 40;
  LABEL_54:
    (*(void (**)(__int64))(*v71_.v72 + v45))((__int64)v71_.v72),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v46 = (__int64)v66_.v66;
  if (v66_.v66 == nullptr) {
    goto LABEL_71;
  }
  v47 = (__int64)v66_.v67;
  if (v66_.v66 == (__int64 (**)(void))v66_.v67) {
    goto LABEL_68;
  }
  v48 = v66_.v67;
  do {
    v51 = *(v48 - 10);
    v48 -= 10;
    v50 = v51;
    *v48 = nullptr;
    if (v51 != nullptr) {
      v63_.v63 = v50;
      v52 = *(_QWORD*)(v47 - 32);
      if (v52 == 0) {
        goto LABEL_75;
      }
      (*(void (**)(__int64, __int64 (***)(void)))(*(_QWORD*)v52 + 48LL))(
          v52, &v63_.v63),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v53 = *(_QWORD**)(v47 - 32);
    if ((_QWORD*)(v47 - 64) == v53) {
      v49 = 32;
    LABEL_59:
      (*(void (**)(__int64))(*v53 + v49))((__int64)v53),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_60;
    }
    if (v53 != nullptr) {
      v49 = 40;
      goto LABEL_59;
    }
  LABEL_60:
    v47 = (__int64)v48;
  } while (v48 != (__int64 (***)(void))v46);
  v66_.v67 = (__int64 (***)(void))v46,
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46 = (__int64)v66_.v66;
  if (v66_.v66 != nullptr) {
  LABEL_68:
    v54 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free(*v9 + v54, v46),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_71:
  v36 = v43;
LABEL_72:
  v55 = *(_BYTE*)(v10 + 20);
  *(_QWORD*)(v10 + 24) = v36;
  if ((v55 & 1) == 0) {
    LayoutArchive_5720c0((_QWORD*)(v10 + 32), *(_QWORD*)(v36 + 592),
                         (__int64)".", 0, 0, 0),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v56 = game_g_frame_clock_ptr[0];
    nn_ui2d_572660((_QWORD*)(v10 + 32), *game_g_frame_clock_ptr[0] + 568),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LayoutArchive_5725c0(v10 + 32, *v56 + 568),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_BYTE*)(v10 + 20) = 1;
  }
  return v10;
}

unsigned __int64 game_13e5040(__int64 a1, __int64* a2, unsigned __int8 a3,
                              int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;

  v4 = **(_QWORD**)(*(_QWORD*)(a1 + 40) + 40LL);
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 40LL) + 8LL) - v4;
  if (a4 < (int)((unsigned __int64)v5 >> 3)) {
    if (a4 >= (unsigned __int64)(v5 >> 3)) {
      GameRoutine_13eb280();
    }
    v6 = *(_QWORD*)(v4 + 8LL * a4);
    if (v6 != 0) {
      return GameRoutine_13e51e0(v6, a2, a3);
    }
  }
  v8 = game_HashString((__int64)&GameData_1af69ec);
  v7 = 0;
  if (v8 != 0 && game_GameModeData_instance_ != 0) {
    v9 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v10 = v9[2];
    if (v10 == 0 || v9[4] == 0) {
      return 0;
    }
    v12 = v10 - 1;
    if ((v10 & (v10 - 1)) != 0) {
      v13 = v8;
      if (v8 >= v10) {
        v13 = v8 % v10;
      }
    }
    else {
      v13 = v12 & v8;
    }
    v14 = *(_QWORD**)(v9[1] + 8 * v13);
    if (v14 == nullptr) {
      return 0;
    }
    v15 = (_QWORD*)*v14;
    if (v15 == nullptr) {
      return 0;
    }
    if ((v10 & v12) == 0) {
      while (1) {
        v17 = v15[1];
        if (v8 == v17) {
          if (v15[2] == v8) {
            goto LABEL_31;
          }
        }
        else if ((v17 & v12) != v13) {
          return 0;
        }
        v15 = (_QWORD*)*v15;
        v7 = 0;
        if (v15 == nullptr) {
          return v7;
        }
      }
    }
    do {
      v16 = v15[1];
      if (v8 == v16) {
        if (v15[2] == v8) {
        LABEL_31:
          // The x1 half of the result reads the entry.
          if (v15[3] != 0) {
            __asm__ volatile("" ::"r"(*(_DWORD*)(v15[3] + 32)));
          }
          return 0;
        }
      }
      else {
        if (v16 >= v10) {
          v16 %= v10;
        }
        if (v16 != v13) {
          return 0;
        }
      }
      v15 = (_QWORD*)*v15;
      v7 = 0;
    } while (v15 != nullptr);
  }
  return v7;
}

void game_13f96c0(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int16* v5;
  int v6;
  char v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64* v14;
    __int64* v15;
    __int64 v16;
  } v14_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1072, 16, 0);
  GameRoutine_fa6720(v3, (__int64)"DiningRecipeMenu");
  *v3 = game_facility_anonymous_ProcDiningRecipeMenu_vtable;
  v3[22] = game_menu_MenuInput_InputUnknown00_ptr_2037738;
  v3[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_2037808;
  *(_DWORD*)(*GameData_212dcd0 + 8) = -1;
  ProcInst_657850_alt1((__int64)v3, (__int64)GameData_212c730,
                       (__int64)"ProcDiningRecipeMenu", 1, a1);
  v14_.v14 = nullptr;
  v14_.v15 = nullptr;
  v14_.v16 = 0;
  v4 = game_gmap_GmapClock_instance_;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4318,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21f4318) != 0) {
    GameData_21f4314 = 0;
    GameData_21f430c = 0x10000205A5LL;
    __cxa_guard_release((__int64)&GameData_21f4318);
  }
  if (v4 != 0) {
    v5 = (__int16*)(v4 + 8);
  }
  else {
    v5 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v6 = Dir_70df40((__int16*)&GameData_21f430c, v5);
  if (v6 >= 1440) {
    v7 = (v6 / 0x2760u) & 3;
  }
  else {
    v7 = 0;
  }
  CookingFile_9249e0((__int64*)&v14_.v14, v7);
  v8 = (__int64)v14_.v14;
  v9 = v14_.v15;
  if (v14_.v14 != v14_.v15) {
    v10 = v14_.v14;
    do {
      v11 = *v10++;
      v12 = fw_memory_HeapManager_Allocate(*v2, 96, 16, 0);
      *(_WORD*)(v12 + 16) = 0;
      *(_DWORD*)(v12 + 40) = 0;
      *(_QWORD*)(v12 + 48) = 0;
      *(_QWORD*)(v12 + 56) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 0;
      *(_WORD*)(v12 + 80) = 257;
      *(_BYTE*)(v12 + 82) = 1;
      *(_QWORD*)v12 = game_facility_anonymous_DiningRecipeMenuItem_vtable;
      *(_QWORD*)(v12 + 8) = 0;
      *(_QWORD*)(v12 + 88) = v11;
      BasicMenuCursor_16e0c00(v3, v12);
    } while (v10 != v9);
  }
  if (v8 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v13, v8);
  }
}

__int64 game_14a2820(__int64 a1, float32x4_t* a2)
{
  __int64 v2;
  __int64* j;
  __int64* v5;
  __int64* v6;
  __int64* i;
  char v8;
  unsigned __int64 v10;
  unsigned __int64 k;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 m;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float32x4_t* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _BOOL4 v32;
  __int64 v33;
  __int64 v34;
  float32x4_t v35;
  float32x4_t v36;
  int8x16_t v37;
  char v38;
  bool v39;
  __int64* v40;
  __int64* n;
  int v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  int v46;
  __int64 v47;
  char* v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  float v57;
  int v58;
  int v61;
  __int64 v62;
  char* v63;
  __int64* v64;
  __int64* v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  float32x4_t* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  unsigned int* v86;
  unsigned int* v87;
  unsigned int* v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned int* v93;
  unsigned int* v94;
  unsigned int* v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  float32x4_t v102;
  float32x4_t v103;
  unsigned int v104;
  struct {
    float32x4_t v105;
    char v106;
  } v105_;
  _DWORD v107[4];

  v2 = *(_QWORD*)a1;
  if (*(_QWORD*)a1 == 0 || *(_DWORD*)(v2 + 16) != *(_DWORD*)(a1 + 8)) {
    if (*(_BYTE*)(a1 + 85) == 1) {
      snd_Fade_Fade_10c830((__int64)&v105_.v105, 0x0.0p+0f);
      snd_stop_ffc40((__int64*)(a1 + 16), (__int64)&v105_.v105);
      snd_Fade_Destroy_Fade(&v105_.v105);
      v6 = *(__int64**)(a1 + 32);
      for (i = *(__int64**)(a1 + 40); v6 != i; v6 += 2) {
        snd_Fade_Fade_10c830((__int64)&v105_.v105, 0x0.0p+0f);
        snd_stop_ffc40(v6, (__int64)&v105_.v105);
        snd_Fade_Destroy_Fade(&v105_.v105);
      }
    }
    v8 = snd_fnd_WeakHandle_isValid((__int64*)(a1 + 16));
    return v8 & 1;
  }
  if (*(_BYTE*)(v2 + 34) == 1) {
    if (*(_BYTE*)(a1 + 85) == 1) {
      snd_Fade_Fade_10c830((__int64)&v105_.v105, 0x0.0p+0f);
      snd_stop_ffc40((__int64*)(a1 + 16), (__int64)&v105_.v105);
      snd_Fade_Destroy_Fade(&v105_.v105);
      v5 = *(__int64**)(a1 + 32);
      for (j = *(__int64**)(a1 + 40); v5 != j; v5 += 2) {
        snd_Fade_Fade_10c830((__int64)&v105_.v105, 0x0.0p+0f);
        snd_stop_ffc40(v5, (__int64)&v105_.v105);
        snd_Fade_Destroy_Fade(&v105_.v105);
      }
    }
  LABEL_137:
    v8 = 1;
    return v8 & 1;
  }
  if ((*(_BYTE*)(a1 + 84) & 1) == 0) {
    v10 = *(unsigned int*)(v2 + 36);
    if ((_DWORD)v10 == 0) {
      goto LABEL_172;
    }
    for (k = 0; k < v10; ++k) {
      v12 = *(_QWORD*)(v2 + 40 + 8 * k);
      if (v12 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v12 + 96LL))(v12) & 1) != 0) {
          goto LABEL_31;
        }
        v10 = *(unsigned int*)(v2 + 36);
      }
    }
    v2 = *(_QWORD*)a1;
    if (*(_QWORD*)a1 != 0) {
    LABEL_172:
      if (*(_DWORD*)(v2 + 16) == *(_DWORD*)(a1 + 8)) {
        v13 = *(unsigned int*)(v2 + 36);
        if ((_DWORD)v13 != 0) {
          for (m = 0; m < v13; ++m) {
            v15 = *(_QWORD*)(v2 + 40 + 8 * m);
            if (v15 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v15 + 96LL))(v15) & 1) !=
                  0) {
                v16 = 0;
                goto LABEL_30;
              }
              v13 = *(unsigned int*)(v2 + 36);
            }
          }
        }
      }
    }
    v16 = 1;
  LABEL_30:
    *(_BYTE*)(a1 + 84) = v16;
    game_14a20b0((__int64*)a1);
  }
LABEL_31:
  if (*(_BYTE*)(a1 + 93) == 1) {
    game_14a20b0((__int64*)a1);
  }
  if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 16)) & 1) != 0) {
    v17 = *(_QWORD*)a1;
    if (*(_QWORD*)a1 == 0 || *(_DWORD*)(v17 + 16) != *(_DWORD*)(a1 + 8) ||
        (*(_BYTE*)(*(_QWORD*)(v17 + 24) + 89LL) & 1) == 0) {
      v18 = snd_fnd_WeakHandle_get(a1 + 16);
      v19 = 0x0.0p+0f;
      if (v18 != 0) {
        v20 = v18 - 5592;
      }
      else {
        v20 = 0;
      }
      v21 = *(_QWORD*)a1;
      if (*(_QWORD*)a1 != 0 && *(_DWORD*)(v21 + 16) == *(_DWORD*)(a1 + 8) &&
          *(int*)(v21 + 36) >= 1) {
        v22 = *(_QWORD*)(v21 + 40);
        if (v22 != 0) {
          v19 = *(float*)(v22 + 220);
        }
      }
      snd_Fade_Fade_10c830((__int64)&v105_.v105, 0x0.0p+0f);
      (*(void (**)(__int64, __int64, float))(*(_QWORD*)(v20 + 40) + 72LL))(
          v20 + 40, (__int64)&v105_.v105, v19);
      snd_Fade_Destroy_Fade(&v105_.v105);
    }
  }
  v23 = *(_QWORD*)(GameData_21c6978 + 32);
  v24 = a2;
  if (*(_QWORD*)(GameData_21c6978 + 24) == v23 ||
      (v25 = *(_QWORD*)(v23 - 8)) == 0) {
    v26 = 0;
    v27 = 0;
  }
  else {
    v26 = *(_QWORD*)(v25 + 24);
    v27 = *(_QWORD*)(v25 + 32);
    if (v27 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  v28 = *(_DWORD*)(*(_QWORD*)a1 + 20LL);
  if (v28 >= 0xA) {
    String_60a250("bitset test argument out of range");
  }
  v29 = *(_QWORD*)(v26 + 392);
  v30 = 1LL << v28;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
    v24 = a2;
  }
  v31 = v29 & v30;
  if (*(float*)(a1 + 80) == 0x0.0p+0f) {
    goto LABEL_56;
  }
  v102 = *v24;
  if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 16)) & 1) != 0) {
    v33 = snd_fnd_WeakHandle_get(a1 + 16);
    if (v33 != 0) {
      v34 = v33 - 5592;
    }
    else {
      v34 = 0;
    }
    (*(void (**)(__int64, __int64, __int64, __int64))(
        *(_QWORD*)(v34 + 40) + 1032LL))(v34 + 40, (__int64)&v105_.v105,
                                        (__int64)v107, (__int64)&v104);
    LANES128(v35).n128_u64[0] =
        LANES128(v105_.v105).n128_u32[0] | ((unsigned __int64)v107[0] << 32);
    LANES128(v35).n128_u64[1] = v104;
    goto LABEL_62;
  }
  v49 = *(_QWORD*)a1;
  if (*(_QWORD*)a1 != 0 && *(_DWORD*)(v49 + 16) == *(_DWORD*)(a1 + 8)) {
    v50 = *(_QWORD**)(v49 + 24);
  }
  else {
    v50 = nullptr;
  }
  if (v50[1] != 0 || v50[3] == 0 || v50[12] == 0 || v50[10] == 0) {
    if (v49 != 0 && *(_DWORD*)(v49 + 16) == *(_DWORD*)(a1 + 8)) {
      v52 = *(unsigned int*)(v49 + 36);
      if ((int)v52 >= 1) {
        v53 = v49 + 40;
        v54 = 0;
        while (1) {
          if (v54 < v52) {
            v55 = *(_QWORD*)(v53 + 8 * v54);
            if (v55 != 0) {
              break;
            }
          }
          ++v54;
          v32 = false;
          if (v52 == v54) {
            goto LABEL_63;
          }
        }
        v56 = 16;
        if (*(_BYTE*)(v55 + 129) != 0) {
          v56 = 112;
        }
        v35 = *(float32x4_t*)(v55 + v56);
        goto LABEL_62;
      }
    }
  LABEL_56:
    v32 = false;
    goto LABEL_63;
  }
  (*(void (**)(__int64))(**(_QWORD**)(v49 + 40) + 136LL))(*(_QWORD*)(v49 + 40));
  if ((v105_.v106 & 1) == 0) {
    goto LABEL_56;
  }
  v35 = v105_.v105;
LABEL_62:
  v36 = vsubq_f32(v102, v35);
  v37 = vmulq_f32(v36, v36);
  LANES128(v37).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v37, v37, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])))
          .n64_u64[0];
  v32 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])))
            .n64_f32[0] <= (float)(*(float*)(a1 + 80) * *(float*)(a1 + 80));
LABEL_63:
  v38 = snd_fnd_WeakHandle_isValid((__int64*)(a1 + 16));
  v39 = v31 != 0 && v32;
  if (v39 || (v38 & 1) == 0) {
    v42 = snd_fnd_WeakHandle_isValid((__int64*)(a1 + 16));
    if (v31 != 0 && (v32 & v42) != 0 &&
        (v43 = *(_QWORD*)a1, *(_QWORD*)a1 != 0) &&
        *(_DWORD*)(v43 + 16) == *(_DWORD*)(a1 + 8) &&
        (v44 = *(const char**)(*(_QWORD*)(v43 + 24) + 96LL)) != nullptr &&
        GameRoutine_811200(v44) &&
        ((v45 = *(_QWORD*)a1, *(_QWORD*)a1 == 0) ||
         *(_DWORD*)(v45 + 16) != *(_DWORD*)(a1 + 8) ||
         (*(_BYTE*)(v45 + 33) & 1) == 0)) {
      game_14a2780(a1);
    }
    else {
      v46 = snd_fnd_WeakHandle_isValid((__int64*)(a1 + 16));
      if (v31 != 0 && (v32 & (v46 ^ 1)) != 0) {
        v47 = *(_QWORD*)a1;
        if (*(_QWORD*)a1 != 0 && *(_DWORD*)(v47 + 16) == *(_DWORD*)(a1 + 8)) {
          v48 = *(const char**)(*(_QWORD*)(v47 + 24) + 96LL);
          if (v48 != nullptr) {
            LOBYTE(v48) = GameRoutine_811200(v48);
          }
        }
        else {
          LOBYTE(v48) = 0;
        }
        if (((unsigned __int8)v48 & 1) != 0 || (*(_BYTE*)(a1 + 106) & 1) != 0) {
          v51 = *(_QWORD*)a1;
          if (*(_QWORD*)a1 != 0 && *(_DWORD*)(v51 + 16) == *(_DWORD*)(a1 + 8) &&
              *(_BYTE*)(v51 + 33) == 1) {
            game_14a20b0((__int64*)a1);
          }
        }
      }
    }
  }
  else if (*(_BYTE*)(a1 + 85) == 1) {
    snd_Fade_Fade_10c830((__int64)&v105_.v105, 0x0.0p+0f);
    snd_stop_ffc40((__int64*)(a1 + 16), (__int64)&v105_.v105);
    snd_Fade_Destroy_Fade(&v105_.v105);
    v40 = *(__int64**)(a1 + 32);
    for (n = *(__int64**)(a1 + 40); v40 != n; v40 += 2) {
      snd_Fade_Fade_10c830((__int64)&v105_.v105, 0x0.0p+0f);
      snd_stop_ffc40(v40, (__int64)&v105_.v105);
      snd_Fade_Destroy_Fade(&v105_.v105);
    }
  }
  *(_BYTE*)(a1 + 106) = 0;
  game_14a3920(a1);
  v57 = *(float*)(a1 + 88);
  v58 = *(unsigned __int8*)(a1 + 84);
  if (v57 < 0x0.0p+0f | v58 == 0) {
    if (v57 < 0x0.0p+0f & v58 != 0) {
      GameRoutine_14a3260((__int64*)a1, 1);
    }
  }
  else if (*(_DWORD*)(*(_QWORD*)a1 + 16LL) == *(_DWORD*)(a1 + 8)) {
    if (v57 <= 0x0.0p+0f || (game_14a1cc0((__int64*)a1, 0x0.0p+0f),
                             v61 = *(unsigned __int8*)(a1 + 84),
                             *(float*)(a1 + 88) = v57, v61 == 1)) {
      GameRoutine_14a3260((__int64*)a1, 0);
      *(_DWORD*)(a1 + 88) = -1082130432;
    }
  }
  v8 = 1;
  v62 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
  if (*(_BYTE*)(v62 + 90) == 1 && (*(_BYTE*)(a1 + 84) & 1) != 0) {
    v63 = *(const char**)(v62 + 96);
    if (v63 != nullptr) {
      if (game_sound_g_game_sound != 0 &&
          ((snd_isLoaded_alt1((__int64)v63) & 1) != 0 ||
           GameRoutine_1a0a060(v63, "_lp") != 0)) {
        goto LABEL_137;
      }
      v64 = *(__int64**)(a1 + 32);
      if ((unsigned __int64)v64 < *(_QWORD*)(a1 + 40)) {
        do {
          if ((snd_fnd_WeakHandle_isValid(v64) & 1) != 0) {
            v66 = *(__int64**)(a1 + 40);
            v64 += 2;
          }
          else {
            v67 = *(__int64**)(a1 + 40);
            if (v64 + 2 == v67) {
              v66 = v64;
              *(_QWORD*)(a1 + 40) = v64;
            }
            else {
              v68 = (__int64)v64;
              do {
                v66 = (__int64*)(v68 + 16);
                GameRoutine_112180(v68, v68 + 16);
                v69 = v68 + 32;
                v68 += 16;
              } while ((__int64*)v69 != v67);
              *(_QWORD*)(a1 + 40) = v66;
            }
          }
        } while (v64 < v66);
      }
      if ((int)GameData_224b6d8 > 0) {
        goto LABEL_137;
      }
      v70 = *(_QWORD*)a1;
      if (*(_QWORD*)a1 == 0) {
        goto LABEL_137;
      }
      if (*(_DWORD*)(v70 + 16) != *(_DWORD*)(a1 + 8)) {
        goto LABEL_137;
      }
      if (*(int*)(v70 + 36) < 1) {
        goto LABEL_137;
      }
      v71 = *(_QWORD*)(v70 + 40);
      if (v71 == 0) {
        goto LABEL_137;
      }
      if (*(float*)(v71 + 220) == 0x0.0p+0f) {
        goto LABEL_137;
      }
      v72 = GameRoutine_bc9580(v70,
                               *(const char**)(*(_QWORD*)(v70 + 24) + 104LL));
      if (v72 == 0) {
        goto LABEL_137;
      }
      v73 = *(unsigned int*)(v72 + 560);
      v74 = (float32x4_t*)v72;
      if ((int)v73 < 1) {
        goto LABEL_137;
      }
      v75 = 16 * v73;
      v76 = 0;
      v77 = 0;
      do {
        v78 = LANES128(v74[11]).n128_u64[0] + v77;
        if ((float)(LANES128(v74[4]).n128_f32[1] - *(float*)(v78 + 8)) >=
            *(float*)(v78 + 12)) {
          *(_QWORD*)(v78 + 16) = 0;
        }
        else if (*(_QWORD*)(v78 + 16) == 0) {
          v79 = LANES128(v74[33]).n128_u64[0];
          v80 = LANES128(v74[33]).n128_u64[1];
          v81 = LANES128(v74[34]).n128_u64[0];
          if (*(_BYTE*)(LANES128(v74[10]).n128_u64[0] + 1875) == 2) {
            v86 = (unsigned int*)(v79 + v76);
            v87 = (unsigned int*)(v80 + v76);
            v88 = (unsigned int*)(v81 + v76);
            v89 = *v88;
            v90 = v88[1];
            LANES128(v82).n128_u64[0] = *v86 | ((unsigned __int64)*v87 << 32);
            v91 = v88[2];
            v92 = LANES128(v74[55]).n128_u32[2];
            LANES128(v82).n128_u64[1] = v89;
            LANES128(v83).n128_u64[0] =
                v86[1] | ((unsigned __int64)v87[1] << 32);
            LANES128(v83).n128_u64[1] = v90;
            LANES128(v84).n128_u64[0] =
                v86[2] | ((unsigned __int64)v87[2] << 32);
            LANES128(v84).n128_u64[1] = v91;
            LANES128(v85).n128_u64[0] = LANES128(v74[55]).n128_u64[0];
          }
          else {
            if (*(_BYTE*)(LANES128(v74[10]).n128_u64[0] + 1875) == 0) {
              v82 = v74[52];
              v83 = v74[53];
              v84 = v74[54];
              v85 = v74[55];
            LABEL_165:
              v99 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 24LL) + 96LL);
              v103 = vaddq_f32(
                  v85,
                  vmlaq_n_f32(
                      vmlaq_n_f32(
                          vmulq_n_f32(
                              v82,
                              *(float*)(LANES128(v74[29]).n128_u64[0] + v76)),
                          v83,
                          *(float*)(LANES128(v74[29]).n128_u64[0] + v76 + 4)),
                      v84, *(float*)(LANES128(v74[29]).n128_u64[0] + v76 + 8)));
              snd_Fade_Fade_10c830((__int64)&v105_.v105, 0x0.0p+0f);
              snd_playAt_ff4e0(
                  (__int64)"test", v99, (__int64)&v105_.v105, 0, 0x10001u, 0,
                  LANES128(v103).n128_f32[0], LANES128(v103).n128_f32[1],
                  LANES128(v103).n128_f32[2], 0x0.0p+0f, 0x1.0000000000000p+0f);
              snd_Fade_Destroy_Fade(&v105_.v105);
              v100 = *(_QWORD*)(a1 + 40);
              if (v100 >= *(_QWORD*)(a1 + 48)) {
                v101 = GameRoutine_1488940((__int64*)(a1 + 32), (__int64)v107);
              }
              else {
                *(_QWORD*)v100 = 0;
                *(_DWORD*)(v100 + 8) = 0x2000;
                GameRoutine_112180(v100, (__int64)v107);
                v101 = v100 + 16;
              }
              *(_QWORD*)(a1 + 40) = v101;
              *(_QWORD*)(LANES128(v74[11]).n128_u64[0] + v77 + 16) = a1;
              goto LABEL_156;
            }
            v93 = (unsigned int*)(v79 + v76);
            v94 = (unsigned int*)(v80 + v76);
            v95 = (unsigned int*)(v81 + v76);
            v96 = *v95;
            v97 = v95[1];
            v98 = v95[2];
            v92 = v95[3];
            LANES128(v82).n128_u64[0] = *v93 | ((unsigned __int64)*v94 << 32);
            LANES128(v82).n128_u64[1] = v96;
            LANES128(v83).n128_u64[0] =
                v93[1] | ((unsigned __int64)v94[1] << 32);
            LANES128(v83).n128_u64[1] = v97;
            LANES128(v84).n128_u64[0] =
                v93[2] | ((unsigned __int64)v94[2] << 32);
            LANES128(v84).n128_u64[1] = v98;
            LANES128(v85).n128_u64[0] =
                v93[3] | ((unsigned __int64)v94[3] << 32);
          }
          LANES128(v85).n128_u64[1] = v92;
          goto LABEL_165;
        }
      LABEL_156:
        v77 += 32;
        v76 += 16;
        v8 = 1;
      } while (v75 != v76);
    }
  }
  return v8 & 1;
}

__int64 game_16408b0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1072, 16, 0);
  v4 = *(_QWORD*)(a1 + 208);
  if (v4 == 0) {
    v8 = ui_LayoutAccessor_FindPartsLayout((__int64*)(a1 + 200),
                                           (__int64)"L_Decide");
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock(v4);
  v6 = *(_QWORD*)(a1 + 200);
  v7 = v5;
  v8 = ui_LayoutAccessor_FindPartsLayout((__int64*)(a1 + 200),
                                         (__int64)"L_Decide");
  if (v7 == 0) {
  LABEL_5:
    v7 = 0;
    v14_.v14 = 0;
    v14_.v15 = 0;
    v9 = 1;
    goto LABEL_6;
  }
  v9 = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  v14_.v14 = v6;
  v14_.v15 = v7;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
LABEL_6:
  game_menu_16dcd30_alt1(v3, (__int64)"BanquetDecide", &v14_.v14, v8);
  v10 = v14_.v15;
  if (v14_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  *(_QWORD*)(v3 + 1056) = a1;
  *(_DWORD*)(v3 + 1064) = 0;
  *(_QWORD*)v3 = &game_menu_MultiMenu_vtable;
  *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20c54c8;
  if ((v9 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v11 = *v2;
  *(_QWORD*)v3 = game_gmap_anonymous_BanquetDecide_vtable;
  *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20724b8;
  v12 = fw_memory_HeapManager_Allocate(v11, 96, 16, 0);
  *(_WORD*)(v12 + 16) = 0;
  *(_DWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 88) = a1;
  *(_WORD*)(v12 + 80) = 257;
  *(_BYTE*)(v12 + 82) = 1;
  *(_QWORD*)v12 = game_gmap_anonymous_DecideMenuItem_vtable_20725a0;
  *(_QWORD*)(v12 + 8) = 0;
  BasicMenuCursor_16e0c00((_QWORD*)v3, v12);
  if ((v9 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v3;
}

__int64 game_16fcfc0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  *a1 = game_menu_DeleteTransportMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20a3a68;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20a3b38;
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

void game_16fd060(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_menu_DeleteTransportMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20a3a68;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20a3b38;
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
  game_menu_BasicMenu_Destroy_BasicMenu_alt2((__int64)a1);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                (__int64)a1);
}

__int64 game_17549a0(__int64 a1, __int64** a2, unsigned int a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  __int64 result;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  bool v21;
  __int16 v22;
  int* v23;
  unsigned __int64 v24;
  int v25;
  int v26;
  int v27;
  int v28;
  bool v29;
  int v30;
  int v31;
  int v32;
  signed int v33;
  int v34;
  signed int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  float v43;
  float v44;
  float v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  unsigned __int64 v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v58;
  int v59;
  __int64 v60;
  _BYTE v61[32];
  _BYTE* v62;

  v8 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1136, 16, 0);
  v9 = *(_QWORD*)(a4 + 32);
  if (v9 != 0) {
    if (v9 == a4) {
      v62 = v61;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v9 + 24LL))(v9, v61);
    }
    else {
      v62 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    }
  }
  else {
    v62 = nullptr;
  }
  GameRoutine_1753970(v8, a3);
  v10 = v62;
  *(_QWORD*)v8 = game_telop_ExpListResultMenu_vtable;
  *(_QWORD*)(v8 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20ba838;
  if (v10 != nullptr) {
    if (v10 == v61) {
      *(_QWORD*)(v8 + 1104) = v8 + 1072;
      (*(void (**)(_BYTE*))(*(_QWORD*)v10 + 24LL))(v10);
    }
    else {
      *(_QWORD*)(v8 + 1104) =
          (*(__int64 (**)(_BYTE*))(*(_QWORD*)v10 + 16LL))(v10);
    }
  }
  else {
    *(_QWORD*)(v8 + 1104) = 0;
  }
  *(_BYTE*)(v8 + 1120) = 0;
  ProcInst_657850(v8, GameData_212c730, "ExpListResultMenu", 1, a1);
  result = (__int64)v62;
  if (v62 == v61) {
    v12 = 32;
  }
  else {
    if (v62 == nullptr) {
      goto LABEL_16;
    }
    v12 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v62 + v12))((__int64)v62);
LABEL_16:
  v13 = *a2;
  v14 = a2[1];
  if (*a2 != v14) {
    v60 = GameData_2131ce0[0] + 16;
    v15 = GameData_2131cf0[0] + 16;
    do {
      v17 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 408, 16, 0);
      v18 = *v13;
      v19 = *((_DWORD*)v13 + 2);
      v16 = *((_DWORD*)v13 + 3);
      v20 = v17;
      v21 = false;
      v22 = *((_WORD*)v13 + 8);
      *(_WORD*)(v17 + 16) = 0;
      *(_DWORD*)(v17 + 40) = 0;
      *(_QWORD*)(v17 + 64) = 0;
      *(_QWORD*)(v17 + 72) = 0;
      *(_QWORD*)(v17 + 48) = 0;
      *(_QWORD*)(v17 + 56) = 0;
      *(_WORD*)(v17 + 80) = 257;
      *(_BYTE*)(v17 + 82) = 1;
      *(_QWORD*)(v17 + 84) = 0;
      *(_QWORD*)(v17 + 143) = 0;
      *(_QWORD*)(v17 + 128) = 0;
      *(_QWORD*)(v17 + 136) = 0;
      *(_QWORD*)(v17 + 112) = 0;
      *(_QWORD*)(v17 + 256) = 0;
      *(_QWORD*)(v17 + 264) = 0;
      *(_QWORD*)(v17 + 152) = 0;
      *(_QWORD*)(v17 + 160) = 1065353216;
      *(_WORD*)(v17 + 168) = 0;
      *(_WORD*)(v17 + 176) = 0;
      *(_QWORD*)v17 = game_telop_anonymous_ExpMenuItem_vtable;
      *(_QWORD*)(v17 + 8) = 0;
      *(_WORD*)(v17 + 200) = 0;
      *(_WORD*)(v17 + 224) = 0;
      *(_QWORD*)(v17 + 280) = 0;
      *(_QWORD*)(v17 + 288) = 1065353216;
      *(_WORD*)(v17 + 296) = 0;
      *(_WORD*)(v17 + 304) = 0;
      *(_WORD*)(v17 + 328) = 0;
      *(_WORD*)(v17 + 352) = 0;
      *(_QWORD*)(v17 + 376) = 0;
      *(_QWORD*)(v17 + 384) = 0;
      *(_QWORD*)(v17 + 248) = v15;
      *(_QWORD*)(v17 + 96) = v18;
      *(_QWORD*)(v17 + 104) = 0;
      *(_WORD*)(v17 + 104) = v22;
      *(_QWORD*)(v17 + 120) = v60;
      *(_QWORD*)(v17 + 271) = 0;
      v23 = (int*)GameData_21d9968;
      v24 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
      if (*(unsigned __int8*)(v18 + 498) >= (int)v24) {
        v25 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
      }
      else {
        v25 = *(unsigned __int8*)(v18 + 498);
      }
      if (*(_BYTE*)(v18 + 498) != 0) {
        v26 = v25;
      }
      else {
        v26 = 1;
      }
      if (v26 != (_DWORD)v24) {
        v21 = false;
        if (v19 >= 1) {
          v27 = *(_DWORD*)(GameData_21d9968 + 4LL * v26);
          if (v27 != 0) {
            v28 = *(_DWORD*)(v18 + 504);
            v29 = __OFSUB__(v27, v28);
            v30 = v27 - v28;
            if ((v30 < 0) ^ v29 | (v30 == 0)) {
              v30 = 0;
            }
            v21 = v30 <= v19;
          }
        }
      }
      *(_BYTE*)(v17 + 106) = v21;
      v31 = *(_DWORD*)(v18 + 504);
      if ((int)v24 < 1) {
        v33 = 0;
      }
      else {
        v32 = *v23;
        v33 = 0;
        v34 = v23[(unsigned int)(v24 - 1)];
        if (v34 >= v31) {
          v34 = *(_DWORD*)(v18 + 504);
        }
        if (v31 >= v32) {
          v32 = v34;
        }
        v35 = v24;
        while (1) {
          v36 = (unsigned int)(v33 + v35) >> 1;
          v37 = v23[v36];
          if (v32 == v37) {
            break;
          }
          if (v32 < v37) {
            v35 = (unsigned int)(v33 + v35) >> 1;
          }
          else {
            v33 = v36 + 1;
          }
          if (v33 >= v35) {
            goto LABEL_47;
          }
        }
        v33 = v36 + 1;
      }
    LABEL_47:
      if ((int)v24 >= 99) {
        LODWORD(v24) = 99;
      }
      v38 = v23[(int)v24 - 1];
      *(float*)(v17 + 136) = (float)v19;
      *(_DWORD*)(v17 + 140) = v19;
      *(_DWORD*)(v17 + 144) = v33;
      *(_DWORD*)(v17 + 128) = v31;
      *(_DWORD*)(v17 + 132) = v31;
      *(float*)(v17 + 152) = (float)v31;
      if (v38 >= v31 + v19) {
        v39 = v31 + v19;
      }
      else {
        v39 = v38;
      }
      if (v31 + v19 >= 0) {
        v40 = v39;
      }
      else {
        v40 = 0;
      }
      *(_DWORD*)(v17 + 156) = v40;
      if (v31 >= v38) {
        *(_BYTE*)(v17 + 148) = 1;
        if ((v19 & 0x80000000) == 0) {
          *(_BYTE*)(v17 + 168) = 0;
        LABEL_61:
          *(_DWORD*)(v17 + 136) = 0;
          goto LABEL_62;
        }
      }
      else {
        *(_BYTE*)(v17 + 148) = 0;
        if ((v19 & 0x80000000) == 0) {
          *(_BYTE*)(v17 + 168) = 0;
          goto LABEL_62;
        }
      }
      *(_BYTE*)(v17 + 168) = 1;
      if (v31 <= 0) {
        goto LABEL_61;
      }
    LABEL_62:
      v41 = GaugeUtil_UnitExpChangeUtil_Unknown5();
      if (v41 != 0) {
        if (v19 >= 0) {
          v42 = v19;
        }
        else {
          v42 = -v19;
        }
        v43 = (float)((float)v42 / (float)v41) * 1.5f;
        if (v43 <= 1.5f) {
          v44 = (float)((float)v42 / (float)v41) * 1.5f;
        }
        else {
          v44 = 1.5f;
        }
        if (v43 >= 0.0f) {
          v45 = v44;
        }
        else {
          v45 = 0.0f;
        }
      }
      else {
        v45 = 1.5f;
      }
      v46 = GameData_21d9968;
      v47 = GameData_21d9970;
      *(float*)(v20 + 160) = v45;
      *(_WORD*)(v20 + 149) = 0;
      *(_BYTE*)(v20 + 169) = 1;
      v48 = (unsigned __int64)(v47 - v46) >> 2;
      if (*(unsigned __int8*)(v18 + 498) >= (int)v48) {
        v49 = v48;
      }
      else {
        v49 = *(unsigned __int8*)(v18 + 498);
      }
      if (*(_BYTE*)(v18 + 498) != 0) {
        v50 = v49;
      }
      else {
        v50 = 1;
      }
      if (v50 == (_DWORD)v48 || *(_DWORD*)(v46 + 4LL * v50) == 0) {
        v19 = 0;
      }
      *(_DWORD*)(v20 + 112) = v19;
      v51 = GameData_21d99a8;
      v52 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      if (*(unsigned __int8*)(v18 + 552) >= (int)v52) {
        v53 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      }
      else {
        v53 = *(unsigned __int8*)(v18 + 552);
      }
      if (*(_BYTE*)(v18 + 552) != 0) {
        v54 = v53;
      }
      else {
        v54 = 1;
      }
      if (v54 == (_DWORD)v52) {
        LOBYTE(v55) = 0;
      }
      else {
        v55 = *(_DWORD*)(GameData_21d99a8 + 4LL * v54);
        if (v55 != 0) {
          v56 = v55 - *(unsigned __int16*)(v18 + 538);
          LOBYTE(v55) = v16 > 0 && v56 <= v16;
        }
      }
      *(_BYTE*)(v20 + 107) = v55;
      if (*(unsigned __int8*)(v18 + 552) >= (int)v52) {
        v58 = v52;
      }
      else {
        v58 = *(unsigned __int8*)(v18 + 552);
      }
      if (*(_BYTE*)(v18 + 552) != 0) {
        v59 = v58;
      }
      else {
        v59 = 1;
      }
      if (v59 == (_DWORD)v52 || *(_DWORD*)(v51 + 4LL * v59) == 0) {
        v16 = 0;
      }
      *(_DWORD*)(v20 + 116) = v16;
      result = BasicMenuCursor_16e0c00_alt1(v8, v20);
      v13 += 3;
    } while (v13 != v14);
  }
  return result;
}

__int64 game_178b840(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1104, 16, 0);
  v4 = *(_QWORD*)(a1 + 208);
  if (v4 != 0 && (v5 = std___1___shared_weak_count_lock(v4)) != 0) {
    v6 = *(_QWORD*)(a1 + 200);
    v7 = v5;
    v8 = ui_LayoutAccessor_FindPartsLayout((__int64*)(a1 + 200),
                                           (__int64)"L_ItemMenu");
    v9 = 0;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v17_.v17 = v6;
    v17_.v18 = v7;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v8 = ui_LayoutAccessor_FindPartsLayout((__int64*)(a1 + 200),
                                           (__int64)"L_ItemMenu");
    v7 = 0;
    v17_.v17 = 0;
    v17_.v18 = 0;
    v9 = 1;
  }
  game_menu_16dcd30_alt1(v3, (__int64)"TroopListMenu", &v17_.v17, v8);
  v10 = v17_.v18;
  if (v17_.v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17_.v18 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  *(_QWORD*)(v3 + 1056) = a1;
  *(_DWORD*)(v3 + 1064) = 0;
  *(_QWORD*)v3 = &game_menu_MultiMenu_vtable;
  *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20c54c8;
  if ((v9 & 1) != 0) {
    *(_DWORD*)(v3 + 1068) = 0;
  }
  else {
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    *(_DWORD*)(v3 + 1068) = 0;
    *(_QWORD*)v3 = &game_menu_UnitTroopMenu_vtable;
    *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20c7738;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  v11 = *v2;
  *(_QWORD*)(v3 + 1072) = 0;
  *(_QWORD*)(v3 + 1080) = 0;
  *(_QWORD*)v3 = game_menu_anonymous_UnitTroopItemMenu_vtable;
  *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20c8860;
  *(_QWORD*)(v3 + 1088) = 0x100000000LL;
  v12 = fw_memory_HeapManager_Allocate(v11, 88, 16, 0);
  *(_WORD*)(v12 + 16) = 0;
  *(_DWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)v12 = GameData_2131c48[0] + 16;
  *(_QWORD*)(v12 + 8) = 0;
  *(_WORD*)(v12 + 80) = 257;
  *(_BYTE*)(v12 + 82) = 1;
  BasicMenuCursor_16e0c00((_QWORD*)v3, v12);
  LayoutAccessor_1560070((void*)(&v17_.v17), (__int64*)(v3 + 952),
                         "L_MenuItem00");
  v13 = v17_.v17;
  v14 = v17_.v18;
  v15 = *(_QWORD*)(v3 + 1080);
  v17_.v17 = 0;
  v17_.v18 = 0;
  *(_QWORD*)(v3 + 1072) = v13;
  *(_QWORD*)(v3 + 1080) = v14;
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15);
    if (v17_.v18 != 0) {
      std___1___shared_weak_count___release_weak(v17_.v18);
    }
  }
  if ((v9 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v3;
}

bool game_185a200(unsigned __int8 a1, int a2)
{
  unsigned __int8 v4;
  int v6;
  int v7;
  char* v8;
  int v9;
  char* v10;
  unsigned __int64 v11;
  int v12;
  char* v13;
  struct {
    __int64 v14[7];
    char gap72_[3];
    char v15;
  } v14_;

  if (a1 == 9) {
    if ((unsigned int)(a2 - 1) < 2) {
    LABEL_3:
      if (a2 == 1) {
        v4 = 4;
      }
      else {
        v4 = 5;
      }
      return (unsigned __int8)GameRoutine_877790(v4, a1, a2, 0) != 4;
    }
    v6 = 12;
  }
  else if (a1 == 7) {
    v6 = 13;
  }
  else {
    v6 = 12;
  }
  v7 = 1;
  if ((a2 & 0xFFFFFFFE) == 2) {
    v6 = 6;
  }
  v8 = (&GameData_1fa6240)[a1];
  v9 = -v6;
  while (1) {
    v10 = game_util_Format("%s_%s_%d_%d", "Chapter", v8, a2, v7);
    v13 = game_util_Format("%s/%s", "000", v10);
    v11 = GameRoutine_1a09c70_alt1(v13);
    GameRoutine_878ea0_alt1((void*)((__int64)v14_.v14), (const char**)&v13);
    if (LOBYTE(v14_.v14[0]) != 0 && (v14_.v15 & 0x40) == 0) {
      v12 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v12 = *(_DWORD*)(game_GameModeData_instance_ + 8);
      }
      if (DWORDn(v14_.v14[0], sizeof(v14_.v14[0]) / 4 - 1) == v12) {
        return false;
      }
    }
    ++v7;
    if (v9 + v7 == 1) {
      goto LABEL_3;
    }
  }
}

__int64 game_185a3a0(unsigned __int8 a1, int a2)
{
  int v4;
  int v5;
  char* v6;
  int v7;
  char* v8;
  unsigned __int64 v9;
  int v10;
  char* v11;
  struct {
    __int64 v12[7];
    char gap72_[3];
    char v13;
  } v12_;

  if (a1 == 9) {
    if ((unsigned int)(a2 - 1) < 2) {
      return 0;
    }
    v4 = 12;
  }
  else if (a1 == 7) {
    v4 = 13;
  }
  else {
    v4 = 12;
  }
  v5 = 1;
  if ((a2 & 0xFFFFFFFE) == 2) {
    v4 = 6;
  }
  v6 = (&GameData_1fa6240)[a1];
  v7 = -v4;
  while (1) {
    v8 = game_util_Format("%s_%s_%d_%d", "Chapter", v6, a2, v5);
    v11 = game_util_Format("%s/%s", "000", v8);
    v9 = GameRoutine_1a09c70_alt1(v11);
    GameRoutine_878ea0_alt1((void*)((__int64)v12_.v12), (const char**)&v11);
    if (LOBYTE(v12_.v12[0]) != 0 && (v12_.v13 & 0x40) == 0) {
      v10 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v10 = *(_DWORD*)(game_GameModeData_instance_ + 8);
      }
      if (DWORDn(v12_.v12[0], sizeof(v12_.v12[0]) / 4 - 1) == v10) {
        break;
      }
    }
    ++v5;
    if (v7 + v5 == 1) {
      return 0;
    }
  }
  return 1;
}

__int64 game_185a4f0(unsigned __int8 a1, int a2, int a3)
{
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  int v11;
  char* v12;
  unsigned __int64 v13;
  int v14;
  char* v15;
  struct {
    __int64 v16[7];
    char gap72_[3];
    char v17;
  } v16_;

  if (a2 != 0) {
    if (a2 == 3) {
      if (a3 >= 6) {
        return GameVariable_82e3a0(3);
      }
      goto LABEL_22;
    }
    v9 = GameVariable_82e7c0(a1, a2);
    if (*v9 != 0 && game_GameModeData_instance_ != 0) {
      v10 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v9);
      if (v10 != 0 && *(_DWORD*)(v10 + 32) != 0) {
        return 1;
      }
    }
  }
  else {
    if ((GameVariable_82e3a0(0) & 1) != 0) {
      return 1;
    }
    v7 = GameVariable_82e7c0(a1, 0);
    if (*v7 != 0 && game_GameModeData_instance_ != 0) {
      v8 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v7);
      if (v8 != 0 && *(_DWORD*)(v8 + 32) != 0) {
        return 1;
      }
    }
  }
  if (a1 == 7) {
    v11 = 13;
  }
  else {
    v11 = 12;
  }
  if ((a2 & 0xFFFFFFFE) == 2) {
    v11 = 6;
  }
  if (a3 >= v11) {
    return 0;
  }
LABEL_22:
  v12 = game_util_Format("%s_%s_%d_%d", "Chapter", (&GameData_1fa6240)[a1], a2,
                         a3 + 1);
  v15 = game_util_Format("%s/%s", "000", v12);
  v13 = GameRoutine_1a09c70_alt1(v15);
  GameRoutine_878ea0_alt1((void*)((__int64)v16_.v16), (const char**)&v15);
  if (LOBYTE(v16_.v16[0]) == 0 || (v16_.v17 & 0x40) != 0) {
    return 0;
  }
  v14 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v14 = *(_DWORD*)(game_GameModeData_instance_ + 8);
  }
  return DWORDn(v16_.v16[0], sizeof(v16_.v16[0]) / 4 - 1) == v14;
}

__int64 game_18c2620(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int128 v7;
  struct {
    __int64* v9;
    __int64 v10;
    int v11;
  } v9_;
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  v9_.v9 = (__int64*)"L_Gauge";
  v9_.v10 = 7;
  GameRoutine_1573280((void*)(&v12_.v12), (__int64*)(a1 + 80), &v9_.v9);
  if (v12_.v13 != 0) {
    v2 = std___1___shared_weak_count_lock(v12_.v13);
    v3 = v12_.v12;
    if (v12_.v13 != 0) {
      std___1___shared_weak_count___release_weak(v12_.v13);
    }
    if (v2 == 0 || v3 == 0) {
      if (v2 == 0) {
        goto LABEL_12;
      }
    }
    else {
      GameRoutine_18c9f10(v3, *(_BYTE*)(a1 + 280), *(_DWORD*)(a1 + 328),
                          *(_DWORD*)(a1 + 332), *(_BYTE*)(a1 + 345));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
LABEL_12:
  LayoutAccessor_1560070((void*)(&v12_.v12), (__int64*)(a1 + 80), "L_Gauge");
  if (v12_.v13 != 0) {
    v5 = std___1___shared_weak_count_lock(v12_.v13);
    v6 = v12_.v12;
    if (v12_.v13 != 0) {
      std___1___shared_weak_count___release_weak(v12_.v13);
    }
    if (v5 != 0 && v6 != 0) {
      LayoutAccessor_1562cf0(v6, "Out_Unbreak");
    }
    else if (v5 == 0) {
      goto LABEL_21;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
LABEL_21:
  *(_DWORD*)(a1 + 276) = 0;
  GameHr_1562680(a1 + 80, "In", 0x1.0000000000000p+0f);
  if (*(_BYTE*)(a1 + 344) == 1) {
    v7 = *(_OWORD*)(a1 + 192);
    v9_.v10 = *(_QWORD*)(a1 + 192);
    v9_.v11 = DWORD2(v7);
    v9_.v9 = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830((__int64)&v12_.v12, 0x0.0p+0f);
    snd_playAt_ff5f0((__int64)"SE_SYS_BrazeGauge_Resist",
                     (__int64)"SE_SYS_BrazeGauge_Resist", (__int64)&v9_.v9,
                     0x0.0p+0f, 0x1.0000000000000p+0f, (__int64)&v12_.v12, 0,
                     0x10001u, 0);
    snd_Fade_Destroy_Fade(&v12_.v12);
  }
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

void game_1958520(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;

  v1 = *(_QWORD*)(a1 + 216);
  v2 = *(_QWORD*)(a1 + 224);
  *(_QWORD*)a1 = game_facility_anonymous_ProcFacilitySuspendMenuSeq_vtable;
  *(_QWORD*)(a1 + 152) = &game_facility_FacilitySeq_Unknown00_ptr_21195d0;
  v4 = v1;
  if (v1 != v2) {
    while (1) {
      v6 = *(_QWORD**)(v2 - 32);
      if ((_QWORD*)(v2 - 64) == v6) {
        v5 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_6;
        }
        v5 = 40;
      }
      (*(void (**)(__int64))(*v6 + v5))((__int64)v6);
    LABEL_6:
      v2 -= 80;
      if (v2 == v1) {
        v4 = *(_QWORD*)(a1 + 216);
        *(_QWORD*)(a1 + 224) = v1;
        if (v4 == 0) {
          goto LABEL_23;
        }
        goto LABEL_11;
      }
    }
  }
  *(_QWORD*)(a1 + 224) = v1;
  if (v1 == 0) {
    goto LABEL_23;
  }
LABEL_11:
  if (v4 == v1) {
    *(_QWORD*)(a1 + 224) = v4;
    goto LABEL_20;
  }
  do {
    v8 = *(_QWORD**)(v1 - 32);
    if ((_QWORD*)(v1 - 64) == v8) {
      v7 = 32;
    LABEL_14:
      (*(void (**)(__int64))(*v8 + v7))((__int64)v8);
      goto LABEL_15;
    }
    if (v8 != nullptr) {
      v7 = 40;
      goto LABEL_14;
    }
  LABEL_15:
    v1 -= 80;
  } while (v1 != v4);
  v9 = *(_QWORD*)(a1 + 216);
  *(_QWORD*)(a1 + 224) = v4;
  v4 = v9;
  if (v9 != 0) {
  LABEL_20:
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v4);
  }
LABEL_23:
  v11 = *(_QWORD**)(a1 + 192);
  if (v11 == (_QWORD*)(a1 + 160)) {
    v12 = 32;
  LABEL_27:
    (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
  }
  else if (v11 != nullptr) {
    v12 = 40;
    goto LABEL_27;
  }
  GameData_226cbf8 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
}

#pragma GCC visibility pop
